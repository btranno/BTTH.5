#pragma once // cái ni thay cho #ifndef và #define
#include <iostream>
#include <string>
using namespace std;


// NHAN VIEN


class NhanVien {
protected:
    string HoTen;
    int Ngay, Thang, Nam;
    double Luong;

public:
    virtual void Nhap();
    virtual void Xuat();

    virtual void TinhLuong() = 0;

    int TinhTuoi();
    double GetLuong();

    virtual ~NhanVien();
};


// NV VAN PHONG

class NVVanPhong : public NhanVien {
private:
    int SoNgayLamViec;

public:
    void Nhap();
    void Xuat();
    void TinhLuong();
};


// NV SAN XUAT


class NVSanXuat : public NhanVien {
private:
    double LuongCanBan;
    int SoSanPham;

public:
    void Nhap();
    void Xuat();
    void TinhLuong();
};


// CONG TY


class CongTy {
private:
    int n;
    NhanVien* dsnv[100];

public:
    void Nhap();
    void Xuat();

    double TongLuong();

    void NVSXLuongThapNhat();
    void NVVPTuoiCaoNhat();

    ~CongTy();
};

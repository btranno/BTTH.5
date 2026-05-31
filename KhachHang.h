#ifndef KHACHHANG_H
#define KHACHHANG_H

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class KhachHang
{
protected:
    string maKH;
    string tenKH;
    int soLuong;
    double donGia;

public:
    virtual ~KhachHang(){}

    virtual void Nhap(ifstream& in);
    virtual void Xuat(ofstream& out);

    virtual double TinhTien() = 0;
};

class KhachHangA : public KhachHang
{
public:
    double TinhTien();
};

class KhachHangB : public KhachHang
{
private:
    int soNamThanThiet;

public:
    void Nhap(ifstream& in);
    double TinhTien();
};

class KhachHangC : public KhachHang
{
public:
    double TinhTien();
};

#endif

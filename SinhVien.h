#ifndef SINHVIEN_H
#define SINHVIEN_H

#include <iostream>
#include <string>
using namespace std;

class SinhVien {
protected:
    string maSV;
    string hoTen;
    string diaChi;
    int tongTC;
    float diemTB;

public:
    virtual void nhap();
    virtual void xuat();

    virtual bool totNghiep() = 0;

    float getDiemTB();
    virtual string getLoai() = 0;

    virtual ~SinhVien() {}
};

#endif

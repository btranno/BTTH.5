#ifndef LAPTRINHVIEN_H
#define LAPTRINHVIEN_H

#include "NhanVien.h"

class LapTrinhVien : public NhanVien
{
private:
    int soGioOT;

public:
    void Nhap();
    void Xuat();

    double TinhLuong();
};

#endif

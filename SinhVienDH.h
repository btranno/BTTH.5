
#ifndef SINHVIENDH_H
#define SINHVIENDH_H

#include "SinhVien.h"

class SinhVienDH : public SinhVien {
private:
    string tenLuanVan;
    float diemLV;

public:
    void nhap();
    void xuat();

    bool totNghiep();

    string getLoai();
};

#endif

#ifndef SINHVIENCD_H
#define SINHVIENCD_H

#include "SinhVien.h"

class SinhVienCD : public SinhVien {
private:
    float diemTN;

public:
    void nhap();
    void xuat();

    bool totNghiep();

    string getLoai();
};

#endif

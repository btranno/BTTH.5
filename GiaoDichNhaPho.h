#pragma once
#include "GiaoDich.h"

class GiaoDichNhaPho : public GiaoDich {
private:
    string loaiNha;
    string diaChi;
    double dienTich;

public:
    void nhap() override;
    void xuat() const override;

    double thanhTien() const override;
};

#pragma once
#include "GiaoDich.h"

class GiaoDichDat : public GiaoDich {
private:
    char loaiDat;
    double dienTich;

public:
    void nhap() override;
    void xuat() const override;

    double thanhTien() const override;
};

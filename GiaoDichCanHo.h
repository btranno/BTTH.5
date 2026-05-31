#pragma once
#include "GiaoDich.h"

class GiaoDichCanHo : public GiaoDich {
private:
    string maCan;
    int viTriTang;
    double dienTich;

public:
    void nhap() override;
    void xuat() const override;

    double thanhTien() const override;
};

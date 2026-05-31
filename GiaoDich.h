#pragma once
#include <iostream>
using namespace std;

class GiaoDich {
protected:
    string maGD;
    int ngay, thang, nam;
    double donGia;

public:
    virtual ~GiaoDich();

    virtual void nhap();
    virtual void xuat() const;

    virtual double thanhTien() const = 0;

    bool laThang12Nam2024() const;
};

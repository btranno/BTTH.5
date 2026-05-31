#ifndef QUANLY_H
#define QUANLY_H

#include "KhachHang.h"

class QuanLy
{
private:
    vector<KhachHang*> ds;

public:
    ~QuanLy();

    void DocFile(string tenFile);
    void GhiFile(string tenFile);

    double TongDoanhThu();
};

#endif

#include "QuanLy.h"

QuanLy::~QuanLy()
{
    for (int i = 0; i < ds.size(); i++)
        delete ds[i];
}

void QuanLy::DocFile(string tenFile)
{
    ifstream in(tenFile);

    int n;
    in >> n;

    for (int i = 0; i < n; i++)
    {
        char loai;
        in >> loai;

        KhachHang* p = NULL;

        if (loai == 'A')
            p = new KhachHangA;

        else if (loai == 'B')
            p = new KhachHangB;

        else if (loai == 'C')
            p = new KhachHangC;

        p->Nhap(in);
        ds.push_back(p);
    }

    in.close();
}

double QuanLy::TongDoanhThu()
{
    double tong = 0;

    for (int i = 0; i < ds.size(); i++)
        tong += ds[i]->TinhTien();

    return tong;
}

void QuanLy::GhiFile(string tenFile)
{
    ofstream out(tenFile);

    out << "DANH SACH KHACH HANG\n\n";

    for (int i = 0; i < ds.size(); i++)
        ds[i]->Xuat(out);

    out << "\nTong doanh thu: "
        << TongDoanhThu();

    out.close();
}

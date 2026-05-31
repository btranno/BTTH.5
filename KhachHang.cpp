#include "KhachHang.h"

void KhachHang::Nhap(ifstream& in)
{
    in >> maKH;
    in.ignore();

    getline(in, tenKH);

    in >> soLuong;
    in >> donGia;
}

void KhachHang::Xuat(ofstream& out)
{
    out << maKH << "\t"
        << tenKH << "\t"
        << TinhTien() << endl;
}

//================ KHACH HANG A =================

double KhachHangA::TinhTien()
{
    double tienHang = soLuong * donGia;
    return tienHang * 1.1;
}

//================ KHACH HANG B =================

void KhachHangB::Nhap(ifstream& in)
{
    KhachHang::Nhap(in);
    in >> soNamThanThiet;
}

double KhachHangB::TinhTien()
{
    double km = soNamThanThiet * 0.05;

    if (km > 0.5)
        km = 0.5;

    double tienHang = soLuong * donGia;

    return tienHang * (1 - km) * 1.1;
}

//================ KHACH HANG C =================

double KhachHangC::TinhTien()
{
    double tienHang = soLuong * donGia * 0.5;
    return tienHang * 1.1;
}

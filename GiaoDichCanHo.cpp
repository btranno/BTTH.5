#include "GiaoDichCanHo.h"

void GiaoDichCanHo::nhap() {
    GiaoDich::nhap();

    cout << "Ma can: ";
    cin >> maCan;

    cout << "Vi tri tang: ";
    cin >> viTriTang;

    cout << "Dien tich: ";
    cin >> dienTich;
}

double GiaoDichCanHo::thanhTien() const {
    if (viTriTang == 1)
        return dienTich * donGia * 2;

    if (viTriTang >= 15)
        return dienTich * donGia * 1.2;

    return dienTich * donGia;
}

void GiaoDichCanHo::xuat() const {
    GiaoDich::xuat();

    cout << "Ma can: " << maCan
         << "\nVi tri tang: " << viTriTang
         << "\nDien tich: " << dienTich
         << "\nThanh tien: " << thanhTien()
         << "\n\n";
}

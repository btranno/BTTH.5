#include "GiaoDichDat.h"

void GiaoDichDat::nhap() {
    GiaoDich::nhap();

    cout << "Loai dat (A/B/C): ";
    cin >> loaiDat;

    cout << "Dien tich: ";
    cin >> dienTich;
}

double GiaoDichDat::thanhTien() const {
    if (loaiDat == 'A')
        return dienTich * donGia * 1.5;

    return dienTich * donGia;
}

void GiaoDichDat::xuat() const {
    GiaoDich::xuat();

    cout << "Loai dat: " << loaiDat
         << "\nDien tich: " << dienTich
         << "\nThanh tien: " << thanhTien()
         << "\n\n";
}

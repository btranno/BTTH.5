#include "GiaoDichNhaPho.h"
#include <limits>

void GiaoDichNhaPho::nhap() {
    GiaoDich::nhap();

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Loai nha (cao cap/thuong): ";
    getline(cin, loaiNha);

    cout << "Dia chi: ";
    getline(cin, diaChi);

    cout << "Dien tich: ";
    cin >> dienTich;
}

double GiaoDichNhaPho::thanhTien() const {
    if (loaiNha == "cao cap")
        return dienTich * donGia;

    return dienTich * donGia * 0.9;
}

void GiaoDichNhaPho::xuat() const {
    GiaoDich::xuat();

    cout << "Loai nha: " << loaiNha
         << "\nDia chi: " << diaChi
         << "\nDien tich: " << dienTich
         << "\nThanh tien: " << thanhTien()
         << "\n\n";
}

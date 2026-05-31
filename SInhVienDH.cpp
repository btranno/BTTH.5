#include "SinhVienDH.h"

void SinhVienDH::nhap() {
    SinhVien::nhap();

    cin.ignore();

    cout << "Ten luan van: ";
    getline(cin, tenLuanVan);

    cout << "Diem luan van: ";
    cin >> diemLV;
}

void SinhVienDH::xuat() {
    cout << "\n=== SINH VIEN DAI HOC ===\n";

    SinhVien::xuat();

    cout << "Ten luan van: " << tenLuanVan << endl;
    cout << "Diem luan van: " << diemLV << endl;
}

bool SinhVienDH::totNghiep() {
    return tongTC >= 170 &&
           diemTB >= 5 &&
           diemLV >= 5;
}

string SinhVienDH::getLoai() {
    return "DH";
}

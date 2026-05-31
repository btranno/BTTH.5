#include "SinhVienCD.h"

void SinhVienCD::nhap() {
    SinhVien::nhap();

    cout << "Diem thi tot nghiep: ";
    cin >> diemTN;
}

void SinhVienCD::xuat() {
    cout << "\n=== SINH VIEN CAO DANG ===\n";

    SinhVien::xuat();

    cout << "Diem TN: " << diemTN << endl;
}

bool SinhVienCD::totNghiep() {
    return tongTC >= 120 &&
           diemTB >= 5 &&
           diemTN >= 5;
}

string SinhVienCD::getLoai() {
    return "CD";
}

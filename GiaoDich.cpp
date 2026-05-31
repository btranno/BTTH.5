#include "GiaoDich.h"

GiaoDich::~GiaoDich() {}

void GiaoDich::nhap() {
    cout << "Ma giao dich: ";
    cin >> maGD;

    cout << "Ngay thang nam: ";
    cin >> ngay >> thang >> nam;

    cout << "Don gia: ";
    cin >> donGia;
}

void GiaoDich::xuat() const {
    cout << "Ma GD: " << maGD
         << "\nNgay GD: "
         << ngay << "/" << thang << "/" << nam
         << "\nDon gia: " << donGia << endl;
}

bool GiaoDich::laThang12Nam2024() const {
    return (thang == 12 && nam == 2024);
}

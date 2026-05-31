#include "SinhVien.h"

void SinhVien::nhap() {
    cin.ignore();

    cout << "Ma SV: ";
    getline(cin, maSV);

    cout << "Ho ten: ";
    getline(cin, hoTen);

    cout << "Dia chi: ";
    getline(cin, diaChi);

    cout << "Tong tin chi: ";
    cin >> tongTC;

    cout << "Diem trung binh: ";
    cin >> diemTB;
}

void SinhVien::xuat() {
    cout << "Ma SV: " << maSV << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Dia chi: " << diaChi << endl;
    cout << "Tong TC: " << tongTC << endl;
    cout << "Diem TB: " << diemTB << endl;
}

float SinhVien::getDiemTB() {
    return diemTB;
}

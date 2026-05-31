#include "NhanVien.h"

void NhanVien::Nhap()
{
    cin.ignore();

    cout << "Ma NV: ";
    getline(cin, maNV);

    cout << "Ho ten: ";
    getline(cin, hoTen);

    cout << "Tuoi: ";
    cin >> tuoi;
    cin.ignore();

    cout << "SDT: ";
    getline(cin, sdt);

    cout << "Email: ";
    getline(cin, email);

    cout << "Luong co ban: ";
    cin >> luongCB;
}

void NhanVien::Xuat()
{
    cout << "Ma NV: " << maNV << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Tuoi: " << tuoi << endl;
    cout << "SDT: " << sdt << endl;
    cout << "Email: " << email << endl;
    cout << "Luong CB: " << luongCB << endl;
}

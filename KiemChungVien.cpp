#include "KiemChungVien.h"

void KiemChungVien::Nhap()
{
    NhanVien::Nhap();

    cout << "So loi phat hien: ";
    cin >> soLoi;
}

void KiemChungVien::Xuat()
{
    cout << "\n===== KIEM CHUNG VIEN =====\n";

    NhanVien::Xuat();

    cout << "So loi phat hien: " << soLoi << endl;
    cout << "Luong: " << TinhLuong() << endl;
}

double KiemChungVien::TinhLuong()
{
    return luongCB + soLoi * 50000;
}

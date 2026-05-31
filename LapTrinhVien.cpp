#include "LapTrinhVien.h"

void LapTrinhVien::Nhap()
{
    NhanVien::Nhap();

    cout << "So gio OT: ";
    cin >> soGioOT;
}

void LapTrinhVien::Xuat()
{
    cout << "\n===== LAP TRINH VIEN =====\n";

    NhanVien::Xuat();

    cout << "So gio OT: " << soGioOT << endl;
    cout << "Luong: " << TinhLuong() << endl;
}

double LapTrinhVien::TinhLuong()
{
    return luongCB + soGioOT * 200000;
}

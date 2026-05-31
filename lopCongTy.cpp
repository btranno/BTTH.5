#include "lopCongTy.h"

// NHAN VIEN

void NhanVien::Nhap() {

    cin.ignore();

    cout << "Nhap ho ten: ";
    getline(cin, HoTen);

    cout << "Nhap ngay sinh (dd mm yyyy): ";
    cin >> Ngay >> Thang >> Nam;
}

void NhanVien::Xuat() {

    cout << "Ho ten: " << HoTen << endl;

    cout << "Ngay sinh: "
         << Ngay << "/"
         << Thang << "/"
         << Nam << endl;

    cout << "Luong: " << Luong << endl;
}

int NhanVien::TinhTuoi() {

    return 2026 - Nam;
}

double NhanVien::GetLuong() {

    return Luong;
}

NhanVien::~NhanVien() {
}

// ======================
// NV VAN PHONG
// ======================

void NVVanPhong::Nhap() {

    NhanVien::Nhap();

    cout << "Nhap so ngay lam viec: ";
    cin >> SoNgayLamViec;
}

void NVVanPhong::TinhLuong() {

    Luong = SoNgayLamViec * 100000;
}

void NVVanPhong::Xuat() {

    cout << "\n===== NHAN VIEN VAN PHONG =====\n";

    NhanVien::Xuat();

    cout << "So ngay lam viec: "
         << SoNgayLamViec << endl;
}

// ======================
// NV SAN XUAT
// ======================

void NVSanXuat::Nhap() {

    NhanVien::Nhap();

    cout << "Nhap luong can ban: ";
    cin >> LuongCanBan;

    cout << "Nhap so san pham: ";
    cin >> SoSanPham;
}

void NVSanXuat::TinhLuong() {

    Luong = LuongCanBan + SoSanPham * 5000;
}

void NVSanXuat::Xuat() {

    cout << "\n===== NHAN VIEN SAN XUAT =====\n";

    NhanVien::Xuat();

    cout << "Luong can ban: "
         << LuongCanBan << endl;

    cout << "So san pham: "
         << SoSanPham << endl;
}

// ======================
// CONG TY
// ======================

void CongTy::Nhap() {

    cout << "Nhap so nhan vien: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        int loai;

        cout << "\n1. NV Van Phong";
        cout << "\n2. NV San Xuat";

        cout << "\nNhap loai nhan vien: ";
        cin >> loai;

        if (loai == 1) {
            dsnv[i] = new NVVanPhong();
        }
        else {
            dsnv[i] = new NVSanXuat();
        }

        dsnv[i]->Nhap();
        dsnv[i]->TinhLuong();
    }
}

void CongTy::Xuat() {

    cout << "\n===== DANH SACH NHAN VIEN =====\n";

    for (int i = 0; i < n; i++) {
        dsnv[i]->Xuat();
    }
}

double CongTy::TongLuong() {

    double tong = 0;

    for (int i = 0; i < n; i++) {
        tong += dsnv[i]->GetLuong();
    }

    return tong;
}

void CongTy::NVSXLuongThapNhat() {

    double minLuong = 1e18;
    NVSanXuat* nvMin = NULL;

    for (int i = 0; i < n; i++) {

        NVSanXuat* temp =
            dynamic_cast<NVSanXuat*>(dsnv[i]);

        if (temp != NULL) {

            if (temp->GetLuong() < minLuong) {

                minLuong = temp->GetLuong();
                nvMin = temp;
            }
        }
    }

    if (nvMin != NULL) {

        cout << "\n===== NV SAN XUAT LUONG THAP NHAT =====\n";

        nvMin->Xuat();
    }
}

void CongTy::NVVPTuoiCaoNhat() {

    int maxTuoi = -1;
    NVVanPhong* nvMax = NULL;

    for (int i = 0; i < n; i++) {

        NVVanPhong* temp =
            dynamic_cast<NVVanPhong*>(dsnv[i]);

        if (temp != NULL) {

            if (temp->TinhTuoi() > maxTuoi) {

                maxTuoi = temp->TinhTuoi();
                nvMax = temp;
            }
        }
    }

    if (nvMax != NULL) {

        cout << "\n===== NV VAN PHONG TUOI CAO NHAT =====\n";

        nvMax->Xuat();
    }
}

CongTy::~CongTy() {

    for (int i = 0; i < n; i++) {
        delete dsnv[i];
    }
}

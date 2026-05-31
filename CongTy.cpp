#include "CongTy.h"
using namespace std;
CongTy::~CongTy()
{
    for(auto x : ds)
        delete x;
}

void CongTy::NhapDS()
{
    int n;
    cout << "Nhap so nhan vien: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int loai;

        cout << "\n1. Lap trinh vien";
        cout << "\n2. Kiem chung vien";
        cout << "\nChon loai: ";
        cin >> loai;

        NhanVien* nv;

        if(loai == 1)
            nv = new LapTrinhVien;
        else
            nv = new KiemChungVien;

        nv->Nhap();

        ds.push_back(nv);
    }
}

void CongTy::XuatDS()
{
    for(auto x : ds)
    {
        x->Xuat();
        cout << endl;
    }
}

double CongTy::LuongTB()
{
    double tong = 0;

    for(auto x : ds)
        tong += x->TinhLuong();

    return tong / ds.size();
}

void CongTy::NVLuongThapHonTB()
{
    double tb = LuongTB();

    cout << "\n===== NHAN VIEN LUONG < TB =====\n";

    for(auto x : ds)
    {
        if(x->TinhLuong() < tb)
            x->Xuat();
    }
}

void CongTy::NVLuongCaoNhat()
{
    NhanVien* maxNV = ds[0];

    for(auto x : ds)
    {
        if(x->TinhLuong() > maxNV->TinhLuong())
            maxNV = x;
    }

    cout << "\n===== LUONG CAO NHAT =====\n";
    maxNV->Xuat();
}

void CongTy::NVLuongThapNhat()
{
    NhanVien* minNV = ds[0];

    for(auto x : ds)
    {
        if(x->TinhLuong() < minNV->TinhLuong())
            minNV = x;
    }

    cout << "\n===== LUONG THAP NHAT =====\n";
    minNV->Xuat();
}

void CongTy::LTVLuongCaoNhat()
{
    LapTrinhVien* maxLTV = nullptr;

    for(auto x : ds)
    {
        LapTrinhVien* p = dynamic_cast<LapTrinhVien*>(x);

        if(p)
        {
            if(maxLTV == nullptr ||
               p->TinhLuong() > maxLTV->TinhLuong())
                maxLTV = p;
        }
    }

    if(maxLTV)
    {
        cout << "\n===== LTV LUONG CAO NHAT =====\n";
        maxLTV->Xuat();
    }
}

void CongTy::KCVLuongThapNhat()
{
    KiemChungVien* minKCV = nullptr;

    for(auto x : ds)
    {
        KiemChungVien* p = dynamic_cast<KiemChungVien*>(x);

        if(p)
        {
            if(minKCV == nullptr ||
               p->TinhLuong() < minKCV->TinhLuong())
                minKCV = p;
        }
    }

    if(minKCV)
    {
        cout << "\n===== KCV LUONG THAP NHAT =====\n";
        minKCV->Xuat();
    }
}

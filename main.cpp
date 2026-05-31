#include <iostream>
#include <vector>

#include "GiaoDichDat.h"
#include "GiaoDichNhaPho.h"
#include "GiaoDichCanHo.h"

using namespace std;

int main() {
    vector<GiaoDich*> ds;

    int n;
    cout << "Nhap so giao dich: ";
    cin >> n;

    int soDat = 0;
    int soNha = 0;
    int soCanHo = 0;

    double tongTienCanHo = 0;

    GiaoDichNhaPho* nhaMax = nullptr;
    double maxTien = 0;

    for (int i = 0; i < n; i++) {
        int loai;

        cout << "\n1. Dat";
        cout << "\n2. Nha pho";
        cout << "\n3. Can ho";
        cout << "\nChon loai: ";
        cin >> loai;

        GiaoDich* gd = nullptr;

        switch (loai) {
        case 1:
            gd = new GiaoDichDat();
            soDat++;
            break;

        case 2:
            gd = new GiaoDichNhaPho();
            soNha++;
            break;

        case 3:
            gd = new GiaoDichCanHo();
            soCanHo++;
            break;
        }

        gd->nhap();
        ds.push_back(gd);

        if (loai == 3) {
            tongTienCanHo += gd->thanhTien();
        }

        if (loai == 2) {
            GiaoDichNhaPho* temp =
                dynamic_cast<GiaoDichNhaPho*>(gd);

            if (temp && temp->thanhTien() > maxTien) {
                maxTien = temp->thanhTien();
                nhaMax = temp;
            }
        }
    }

    cout << "\n===== SO LUONG TUNG LOAI =====\n";
    cout << "Dat: " << soDat << endl;
    cout << "Nha pho: " << soNha << endl;
    cout << "Can ho: " << soCanHo << endl;

    cout << "\n===== TRUNG BINH THANH TIEN CAN HO =====\n";

    if (soCanHo > 0)
        cout << tongTienCanHo / soCanHo << endl;

    cout << "\n===== NHA PHO CO GIA TRI LON NHAT =====\n";

    if (nhaMax)
        nhaMax->xuat();

    cout << "\n===== CAC GIAO DICH THANG 12/2024 =====\n";

    for (GiaoDich* gd : ds) {
        if (gd->laThang12Nam2024())
            gd->xuat();
    }

    for (GiaoDich* gd : ds)
        delete gd;

    return 0;
}

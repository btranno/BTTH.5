#ifndef CONGTY_H
#define CONGTY_H

#include <vector>
using namespace std;

#include "NhanVien.h"
#include "LapTrinhVien.h"
#include "KiemChungVien.h"

class CongTy
{
private:
    vector<NhanVien*> ds;

public:
    ~CongTy();

    void NhapDS();
    void XuatDS();

    double LuongTB();

    void NVLuongThapHonTB();
    void NVLuongCaoNhat();
    void NVLuongThapNhat();

    void LTVLuongCaoNhat();
    void KCVLuongThapNhat();
};

#endif

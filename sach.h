#ifndef SACH_H
#define SACH_H

#include <string>
#include "CongTrinhKhoaHoc.h"

using namespace std;

class Sach : public CongTrinhKhoaHoc {
private:
    string loaiSach;

public:
    Sach(const string& ma, const Date& ngay, bool khuVuc, const string& loai)
        : CongTrinhKhoaHoc(ma, ngay, khuVuc), loaiSach(loai) {}

    void hienThi() const override {
        cout << "Ma Cong Trinh: " << maCongTrinh << endl;
        cout << "Ngay Xuat Ban: " << ngayXuatBan << endl;
        cout << "Khu Vuc Xuat Ban: " << (khuVucXuatBan ? "Quoc te" : "Trong nuoc") << endl;
        cout << "Loai Sach: " << loaiSach << endl;
    }
};

#endif

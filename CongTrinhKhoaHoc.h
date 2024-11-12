#ifndef CONGTRINHKHOAHOC_H
#define CONGTRINHKHOAHOC_H

#include <string>
#include <iostream>
#include "Date.h"

using namespace std;

class CongTrinhKhoaHoc {
protected:
    string maCongTrinh;
    Date ngayXuatBan;
    bool khuVucXuatBan;

public:
    CongTrinhKhoaHoc(const string& ma, const Date& ngay, bool khuVuc)
        : maCongTrinh(ma), ngayXuatBan(ngay), khuVucXuatBan(khuVuc) {}

    virtual ~CongTrinhKhoaHoc() = default;

    string getMaCongTrinh() const {
        return maCongTrinh;
    }

    virtual void hienThi() const {
        cout << "Ma Cong Trinh: " << maCongTrinh << endl;
        cout << "Ngay Xuat Ban: " << ngayXuatBan << endl;
        cout << "Khu Vuc Xuat Ban: " << (khuVucXuatBan ? "Quoc te" : "Trong nuoc") << endl;
    }

    friend ostream& operator<<(ostream& os, const CongTrinhKhoaHoc& ct) {
        os << "Ma Cong Trinh: " << ct.maCongTrinh << endl;
        os << "Ngay Xuat Ban: " << ct.ngayXuatBan << endl;
        os << "Khu Vuc Xuat Ban: " << (ct.khuVucXuatBan ? "Quoc te" : "Trong nuoc") << endl;
        return os;
    }
};

#endif

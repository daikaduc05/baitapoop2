#ifndef CONGTRINHKHOAHOC_H
#define CONGTRINHKHOAHOC_H

#include <string>
#include "Date.h"

class CongTrinhKhoaHoc {
protected:
    std::string maCongTrinh;
    Date ngayXuatBan;
    bool khuVucXuatBan;
public:
    CongTrinhKhoaHoc(std::string ma, Date ngay, bool khuVuc);
    virtual ~CongTrinhKhoaHoc() = default;
    virtual void hienThi() const = 0;
    std::string getMaCongTrinh() const {
        return maCongTrinh;
    }
};

#endif

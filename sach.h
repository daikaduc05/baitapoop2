#ifndef SACH_H
#define SACH_H

#include "CongTrinhKhoaHoc.h"

class Sach : public CongTrinhKhoaHoc {
private:
    std::string loaiSach;
public:
    Sach(std::string ma, Date ngay, bool khuVuc, std::string loai);
    void hienThi() const override;
};

#endif

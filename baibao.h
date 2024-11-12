#ifndef BAIBAO_H
#define BAIBAO_H

#include "CongTrinhKhoaHoc.h"

class BaiBao : public CongTrinhKhoaHoc {
private:
    std::string tenCongTrinh;
    int soTacGia;
public:
    BaiBao(std::string ma, Date ngay, bool khuVuc, std::string ten, int tacGia);
    void hienThi() const override;
};

#endif

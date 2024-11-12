#ifndef LLKHCA_NHAN_H
#define LLKHCA_NHAN_H

#include <string>
#include "LinkList.h"
#include "CongTrinhKhoaHoc.h"

class LLKHCaNhan {
private:
    std::string tenCaNhan;
    LinkList<CongTrinhKhoaHoc*> danhSachCongTrinh;
    int soLuongCongTrinh;
public:
    LLKHCaNhan(std::string ten);
    void themCongTrinh(CongTrinhKhoaHoc* congTrinh);
    void xoaCongTrinh(CongTrinhKhoaHoc* congTrinh);
    void timCongTrinh(std::string maCongTrinh);
    void hienThiCongTrinh() const;
};

#endif

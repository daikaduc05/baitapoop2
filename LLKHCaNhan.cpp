#include "LLKHCaNhan.h"
#include <iostream>

LLKHCaNhan::LLKHCaNhan(std::string ten) : tenCaNhan(ten), soLuongCongTrinh(0) {}

void LLKHCaNhan::themCongTrinh(CongTrinhKhoaHoc* congTrinh) {
    danhSachCongTrinh.add(congTrinh);
    soLuongCongTrinh++;
}

void LLKHCaNhan::xoaCongTrinh(CongTrinhKhoaHoc* congTrinh) {
    danhSachCongTrinh.remove(congTrinh);
    soLuongCongTrinh--;
}

void LLKHCaNhan::timCongTrinh(std::string maCongTrinh) {
    for (auto& ct : danhSachCongTrinh.data) {
        if (ct->getMaCongTrinh() == maCongTrinh) {
            ct->hienThi();
            return;
        }
    }
    std::cout << "Cong trinh khong tim thay!" << std::endl;
}

void LLKHCaNhan::hienThiCongTrinh() const {
    for (const auto& ct : danhSachCongTrinh.data)
        ct->hienThi();
}

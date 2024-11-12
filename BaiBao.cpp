#include "BaiBao.h"
#include <iostream>

BaiBao::BaiBao(std::string ma, Date ngay, bool khuVuc, std::string ten, int tacGia)
    : CongTrinhKhoaHoc(ma, ngay, khuVuc), tenCongTrinh(ten), soTacGia(tacGia) {}

void BaiBao::hienThi() const {
    std::cout << "Bai Bao: " << tenCongTrinh << " - Tac gia: " << soTacGia << std::endl;
}

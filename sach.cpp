#include "Sach.h"
#include <iostream>

Sach::Sach(std::string ma, Date ngay, bool khuVuc, std::string loai)
    : CongTrinhKhoaHoc(ma, ngay, khuVuc), loaiSach(loai) {}

void Sach::hienThi() const {
    std::cout << "Sach: " << loaiSach << std::endl;
}

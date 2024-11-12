#ifndef BAIBAO_H
#define BAIBAO_H

#include <string>
#include "CongTrinhKhoaHoc.h"

using namespace std;

class BaiBao : public CongTrinhKhoaHoc {
private:
    string tenCongTrinh;
    int soTacGia;

public:
    BaiBao(const string& ma, const Date& ngay, bool khuVuc, const string& ten, int tacGia)
        : CongTrinhKhoaHoc(ma, ngay, khuVuc), tenCongTrinh(ten), soTacGia(tacGia) {}

    void hienThi() const override {
        cout << "Ma Cong Trinh: " << maCongTrinh << endl;
        cout << "Ngay Xuat Ban: " << ngayXuatBan << endl;
        cout << "Khu Vuc Xuat Ban: " << (khuVucXuatBan ? "Quoc te" : "Trong nuoc") << endl;
        cout << "Ten Cong Trinh: " << tenCongTrinh << endl;
        cout << "So Tac Gia: " << soTacGia << endl;
    }
};

#endif

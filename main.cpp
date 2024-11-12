#include <iostream>
#include "Date.h"
#include "BaiBao.h"
#include "Sach.h"
#include "LLKHCaNhan.h"

using namespace std;

int main() {
    LLKHCaNhan llkh("Nguyen Van A");

    Date ngay1(15, 10, 2023);
    Date ngay2(20, 11, 2021);

    BaiBao* baiBao = new BaiBao("BB001", ngay1, true, "Nghien cuu AI", 3);
    Sach* sach = new Sach("S001", ngay2, false, "Sach tham khao");

    llkh.themCongTrinh(baiBao);
    llkh.themCongTrinh(sach);

    cout << "Thong tin ly lich khoa hoc ca nhan:" << endl;
    cout << llkh << endl;

    string maTimKiem;
    cout << "Nhap ma cong trinh can tim: ";
    cin >> maTimKiem;

    CongTrinhKhoaHoc* ketQuaTimKiem = llkh.timCongTrinh(maTimKiem);
    if (ketQuaTimKiem) {
        cout << "Cong trinh tim thay:" << endl;
        ketQuaTimKiem->hienThi();
    } else {
        cout << "Khong tim thay cong trinh co ma: " << maTimKiem << endl;
    }

    string maXoa;
    cout << "Nhap ma cong trinh can xoa: ";
    cin >> maXoa;

    if (llkh.xoaCongTrinh(maXoa)) {
        cout << "Xoa thanh cong cong trinh co ma: " << maXoa << endl;
    } else {
        cout << "Khong tim thay cong trinh co ma: " << maXoa << endl;
    }

    cout << "Thong tin ly lich khoa hoc sau khi xoa:" << endl;
    cout << llkh << endl;

    delete baiBao;
    delete sach;

    return 0;
}

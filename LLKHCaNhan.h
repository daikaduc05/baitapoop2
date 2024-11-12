#ifndef LLKHCA_NHAN_H
#define LLKHCA_NHAN_H

#include <string>
#include "LinkList.h"
#include "CongTrinhKhoaHoc.h"

using namespace std;

class LLKHCaNhan {
private:
    string tenCaNhan;
    LinkList<CongTrinhKhoaHoc*> danhSachCongTrinh;
    int soLuongCongTrinh;

public:
    LLKHCaNhan(const string& ten) : tenCaNhan(ten), soLuongCongTrinh(0) {}

    void themCongTrinh(CongTrinhKhoaHoc* congTrinh) {
        danhSachCongTrinh.add(congTrinh);
        soLuongCongTrinh++;
    }

    bool xoaCongTrinh(const string& maCongTrinh) {
        for (int i = 0; i < danhSachCongTrinh.size(); i++) {
            if (danhSachCongTrinh[i]->getMaCongTrinh() == maCongTrinh) {
                danhSachCongTrinh.remove(danhSachCongTrinh[i]);
                soLuongCongTrinh--;
                return true;
            }
        }
        return false;
    }

    CongTrinhKhoaHoc* timCongTrinh(const string& maCongTrinh) const {
        for (int i = 0; i < danhSachCongTrinh.size(); i++) {
            if (danhSachCongTrinh[i]->getMaCongTrinh() == maCongTrinh) {
                return danhSachCongTrinh[i];
            }
        }
        return nullptr;
    }

    CongTrinhKhoaHoc* operator[](int index) {
        return danhSachCongTrinh[index];
    }

    LLKHCaNhan& operator=(const LLKHCaNhan& other) {
        if (this != &other) {
            tenCaNhan = other.tenCaNhan;
            danhSachCongTrinh = other.danhSachCongTrinh;
            soLuongCongTrinh = other.soLuongCongTrinh;
        }
        return *this;
    }

    friend ostream& operator<<(ostream& os, const LLKHCaNhan& llkh) {
        os << "Ten Ca Nhan: " << llkh.tenCaNhan << endl;
        os << "So Luong Cong Trinh Khoa Hoc: " << llkh.soLuongCongTrinh << endl;
        os << "Danh Sach Cong Trinh:" << endl;
        for (int i = 0; i < llkh.soLuongCongTrinh; i++) {
            os << *(llkh.danhSachCongTrinh[i]) << endl;
        }
        return os;
    }
};

#endif

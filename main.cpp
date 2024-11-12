#include "Date.h"
#include "BaiBao.h"
#include "Sach.h"
#include "LLKHCaNhan.h"

int main() {
    Date ngay1(15, 5, 2022);
    BaiBao bb("BB001", ngay1, true, "Nghien cuu A", 3);
    Sach sach("S001", ngay1, false, "Sach tham khao");

    LLKHCaNhan lyLich("Nguyen Van A");
    lyLich.themCongTrinh(&bb);
    lyLich.themCongTrinh(&sach);

    lyLich.hienThiCongTrinh();
    lyLich.timCongTrinh("BB001");

    return 0;
}

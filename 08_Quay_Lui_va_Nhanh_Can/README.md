# 08. Quay Lui & Nhánh Cận (Backtracking & Recursion)

## 1. Giới thiệu chuyên đề
Kỹ thuật duyệt toàn bộ không gian trạng thái: Thuật toán sinh kế tiếp, đệ quy quay lui (Backtracking) sinh xâu nhị phân, sinh tổ hợp chập K của N, sinh hoán vị N phần tử, hoán vị dùng con trỏ và bài toán Tổng kết hợp (Combination Sum).

---

## 2. Các kiến thức & Kỹ thuật trọng tâm
- Kỹ thuật sinh kế tiếp (Next Generation Algorithm)
- Quay lui sinh xâu nhị phân độ dài N
- Quay lui sinh tổ hợp chập K của N phần tử
- Quay lui sinh hoán vị & bài toán hoán vị dùng con trỏ
- Bài toán Tổng kết hợp (Combination Sum)

---

## 3. Danh mục các bài toán trong chuyên đề
Tổng số bài toán / nhóm bài: **6**

| Bài toán / Thuật toán | Tệp mã nguồn | Tài liệu hướng dẫn | Độ phức tạp |
| :--- | :--- | :--- | :--- |
| [Quay Lui Sinh Hoán Vị N Phần Tử](./QuayLuiHoanVi/) | [`QuayLuiHoanVi.cpp`](./QuayLuiHoanVi/QuayLuiHoanVi.cpp) | [`README.md`](./QuayLuiHoanVi/README.md) | `O(N!)` |
| [Quay Lui Sinh Xâu Nhị Phân Độ Dài N](./SinhXauNhiPhan/) | [`SinhXauNhiPhan.cpp`](./SinhXauNhiPhan/SinhXauNhiPhan.cpp) | [`README.md`](./SinhXauNhiPhan/README.md) | `O(2^N)` |
| [Quay Lui Tổ Hợp Chập K Của N](./ToHopChapKCuaN/) | [`ToHopChapKCuaN.cpp`](./ToHopChapKCuaN/ToHopChapKCuaN.cpp) | [`README.md`](./ToHopChapKCuaN/README.md) | `O(C(N, K))` |
| [Bài Toán Tổng Kết Hợp (Combination Sum - LeetCode 39)](./Tong_ket_hop/) | [`Tong_ket_hop.cpp`](./Tong_ket_hop/Tong_ket_hop.cpp) | [`README.md`](./Tong_ket_hop/README.md) | `O(2^target)` |
| [Hoán Vị Hai Số Dùng Con Trỏ](./hoanvi dung contro/) | [`hoanvi dung contro.cpp`](./hoanvi dung contro/hoanvi dung contro.cpp) | [`README.md`](./hoanvi dung contro/README.md) | `O(1)` |
| [Sinh Xâu Nhị Phân Kế Tiếp](./xaunhiphan/) | [`xaunhiphan.cpp`](./xaunhiphan/xaunhiphan.cpp) | [`README.md`](./xaunhiphan/README.md) | `O(N)` |

---

## 4. Hướng dẫn học tập & Biên dịch
Mỗi bài toán được đặt trong một thư mục riêng biệt kèm mã nguồn C++ và tệp `README.md` giải thích chi tiết có sơ đồ Mermaid.
Để biên dịch và chạy một bài toán bất kỳ:
```bash
cd "DSA/08_Quay_Lui_va_Nhanh_Can/Ten_Thu_Muc_Bai_Toan"
g++ -std=c++11 -O2 "Ten_File.cpp" -o "Ten_File"
./"Ten_File"
```

# 13. Luyện Đề & Bài Tập Tổng Hợp (Contests & Problem Solving)

## 1. Giới thiệu chuyên đề
Bộ sưu tập các bài tập mô phỏng đề thi lập trình (28Tech, Test 3) và các bài toán LeetCode thực tế: Quản lý sách và tác giả, quản lý mặt hàng, tính tiền giờ quán net, quản lý thi cử và phát hiện gian lận, bài toán hóa học, Two Sum, xử lý dữ liệu sinh viên.

---

## 2. Các kiến thức & Kỹ thuật trọng tâm
- Mô phỏng bài toán thực tế: Quản lý giờ quán net, sách & tác giả, mặt hàng
- Bài toán phát hiện gian lận trong thi cử (sử dụng Hash / Struct)
- Bài toán phản ứng hóa học (28tech Chemistry)
- Xử lý và chuẩn hóa thông tin sinh viên, nhân viên
- LeetCode kinh điển: Two Sum (Tổng hai số bằng target)

---

## 3. Danh mục các bài toán trong chuyên đề
Tổng số bài toán / nhóm bài: **14**

| Bài toán / Thuật toán | Tệp mã nguồn | Tài liệu hướng dẫn | Độ phức tạp |
| :--- | :--- | :--- | :--- |
| [Tính Khối Lượng Phân Tử Hóa Học](./28tech_Chemistry/) | [`28tech_Chemistry.cpp`](./28tech_Chemistry/28tech_Chemistry.cpp) | [`README.md`](./28tech_Chemistry/README.md) | `O(L)` |
| [Đề Luyện Thi Test 3 - Bài 2: Đếm & Phân Loại Mảng](./Bai2_test3/) | [`Bai2_test3.cpp`](./Bai2_test3/Bai2_test3.cpp) | [`README.md`](./Bai2_test3/README.md) | `O(N)` |
| [Đề Luyện Thi Test 3 - Bài 3: Sắp Xếp & Tìm Kiếm](./Bai3_test3/) | [`Bai3_test3.cpp`](./Bai3_test3/Bai3_test3.cpp) | [`README.md`](./Bai3_test3/README.md) | `O(N log N)` |
| [Đề Luyện Thi Test 3 - Bài 4: Xử Lý Chuỗi Ký Tự](./Bai4_test3/) | [`Bai4_test3.cpp`](./Bai4_test3/Bai4_test3.cpp) | [`README.md`](./Bai4_test3/README.md) | `O(L)` |
| [Đề Luyện Thi Test 3 - Bài 5: Quản Lý Nhân Viên & Tính Lương](./Bai5_test3/) | [`Bai5_test3.cpp`](./Bai5_test3/Bai5_test3.cpp) | [`README.md`](./Bai5_test3/README.md) | `O(N log N)` |
| [Hệ Thống Quản Lý Sách và Tác Giả](./Books_and_authors/) | [`Books_and_authors.cpp`](./Books_and_authors/Books_and_authors.cpp) | [`README.md`](./Books_and_authors/README.md) | `O(N log N)` |
| [Bài Toán Đánh Rồng (Dragon Combat Greedy)](./Danh_rong/) | [`Danh_rong.c++`](./Danh_rong/Danh_rong.c++) | [`README.md`](./Danh_rong/README.md) | `O(N log N)` |
| [Phát Hiện Gian Lận Trong Phòng Thi](./Gian_lan/) | [`Gian_lan.c++`](./Gian_lan/Gian_lan.c++) | [`README.md`](./Gian_lan/README.md) | `O(N log N)` |
| [Quản Lý & Tính Tiền Giờ Chơi Quán Net](./Gio_quan_net/) | [`Gio_quan_net.cpp`](./Gio_quan_net/Gio_quan_net.cpp) | [`README.md`](./Gio_quan_net/README.md) | `O(N log N)` |
| [Hệ Thống Quản Lý Mặt Hàng & Lợi Nhuận](./Mat_hang/) | [`Mat_hang.c++`](./Mat_hang/Mat_hang.c++) | [`README.md`](./Mat_hang/README.md) | `O(N log N)` |
| [Rút Gọn Biểu Thức Đa Thức](./Rut_gon_da_thuc/) | [`Rut_gon_da_thuc.cpp`](./Rut_gon_da_thuc/Rut_gon_da_thuc.cpp) | [`README.md`](./Rut_gon_da_thuc/README.md) | `O(L log K)` |
| [Sắp Xếp Sinh Viên Theo Nhiều Điều Kiện](./Sap_xep_sv_theo_dk/) | [`Sap_xep_sv_theo_dk.cpp`](./Sap_xep_sv_theo_dk/Sap_xep_sv_theo_dk.cpp) | [`README.md`](./Sap_xep_sv_theo_dk/README.md) | `O(N log N)` |
| [Tìm Cặp Số Có Tổng Bằng Target (Two Sum)](./Two Sum/) | [`Two Sum.cpp`](./Two Sum/Two Sum.cpp) | [`README.md`](./Two Sum/README.md) | `O(N log N)` |
| [Xử Lý & Chuẩn Hóa Hồ Sơ Sinh Viên](./Xu_li_SV/) | [`Xu_li_SV.c++`](./Xu_li_SV/Xu_li_SV.c++) | [`README.md`](./Xu_li_SV/README.md) | `O(N * L)` |

---

## 4. Hướng dẫn học tập & Biên dịch
Mỗi bài toán được đặt trong một thư mục riêng biệt kèm mã nguồn C++ và tệp `README.md` giải thích chi tiết có sơ đồ Mermaid.
Để biên dịch và chạy một bài toán bất kỳ:
```bash
cd "DSA/13_Luyen_De_va_Tong_Hop/Ten_Thu_Muc_Bai_Toan"
g++ -std=c++11 -O2 "Ten_File.cpp" -o "Ten_File"
./"Ten_File"
```

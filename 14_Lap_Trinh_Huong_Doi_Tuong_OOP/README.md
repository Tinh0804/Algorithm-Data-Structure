# 14. Lập Trình Hướng Đối Tượng (Object-Oriented Programming - OOP)

## 1. Giới thiệu chuyên đề
Lập trình hướng đối tượng trong C++: Tính đóng gói (Encapsulation), Thuộc tính (Attributes) private/public, Constructor/Destructor, Phương thức getter/setter; Nạp chồng toán tử (Operator Overloading); Tính kế thừa (Inheritance đơn và kế thừa nhiều mức Multilevel); Dự án Quản lý thực thể (Nguoi, SinhVien, NhanVien, BaoVe, QuanLi, Time, PhanSo).

---

## 2. Các kiến thức & Kỹ thuật trọng tâm
- Class và Object: Tính đóng gói, phạm vi truy cập (private, public, protected)
- Constructor mặc định, Constructor có tham số, Destructor
- Nạp chồng toán tử (Operator Overloading: +, -, <<, >>, ==)
- Kế thừa đơn (Single Inheritance) và kế thừa nhiều mức (Multilevel Inheritance)
- Xây dựng các lớp ứng dụng: Lớp Phân số (rút gọn, cộng), Lớp Sinh viên, Lớp Nhân viên, Lớp Bảo vệ, Lớp Thời gian (Time)

---

## 3. Danh mục các bài toán trong chuyên đề
Tổng số bài toán / nhóm bài: **16**

| Bài toán / Thuật toán | Tệp mã nguồn | Tài liệu hướng dẫn | Độ phức tạp |
| :--- | :--- | :--- | :--- |
| [Cộng Hai Phân Số (Tính Đóng Gói)](./BT_TDG-conghaips/) | [`BT_TDG-conghaips.cpp`](./BT_TDG-conghaips/BT_TDG-conghaips.cpp) | [`README.md`](./BT_TDG-conghaips/README.md) | `O(log(min(a,b)))` |
| [Rút Gọn Phân Số (Tính Đóng Gói)](./BT_TDG_rutgonps/) | [`BT_TDG_rutgonps.cpp`](./BT_TDG_rutgonps/BT_TDG_rutgonps.cpp) | [`README.md`](./BT_TDG_rutgonps/README.md) | `O(log(min(a,b)))` |
| [Quản Lý Thông Tin Nhân Viên (Đóng Gói)](./BT_TDG_thongtinnv/) | [`BT_TDG_thongtinnv.cpp`](./BT_TDG_thongtinnv/BT_TDG_thongtinnv.cpp) | [`README.md`](./BT_TDG_thongtinnv/README.md) | `O(1)` |
| [Hệ Thống Quản Lý Đa Thực Thể OOP](./Chuong_Trinh_Quan_Ly/) | [`Quanli.cpp`](./Chuong_Trinh_Quan_Ly/Quanli.cpp) [`main.cpp`](./Chuong_Trinh_Quan_Ly/main.cpp) [`main1.cpp`](./Chuong_Trinh_Quan_Ly/main1.cpp) [`main2.cpp`](./Chuong_Trinh_Quan_Ly/main2.cpp) [`thu.cpp`](./Chuong_Trinh_Quan_Ly/thu.cpp) | [`README.md`](./Chuong_Trinh_Quan_Ly/README.md) | `O(N log N)` |
| [Kế Thừa Đơn Trong C++ (Single Inheritance)](./Ke_thua/) | [`Ke_thua.cpp`](./Ke_thua/Ke_thua.cpp) | [`README.md`](./Ke_thua/README.md) | `O(1)` |
| [Kế Thừa Nhiều Mức (Multilevel Inheritance)](./Ke_thua_nhieu_muc/) | [`Ke_thua_nhieu_muc.cpp`](./Ke_thua_nhieu_muc/Ke_thua_nhieu_muc.cpp) | [`README.md`](./Ke_thua_nhieu_muc/README.md) | `O(1)` |
| [Cài Đặt Lớp Bảo Vệ (BaoVe)](./Lop_BaoVe/) | [`baove.cpp`](./Lop_BaoVe/baove.cpp) [`baove.h`](./Lop_BaoVe/baove.h) | [`README.md`](./Lop_BaoVe/README.md) | `O(1)` |
| [Cài Đặt Lớp Người (Nguoi)](./Lop_Nguoi/) | [`nguoi.cpp`](./Lop_Nguoi/nguoi.cpp) [`nguoi.h`](./Lop_Nguoi/nguoi.h) | [`README.md`](./Lop_Nguoi/README.md) | `O(1)` |
| [Cài Đặt Lớp Nhân Viên (NhanVien)](./Lop_NhanVien/) | [`nhanvien.cpp`](./Lop_NhanVien/nhanvien.cpp) [`nhanvien.h`](./Lop_NhanVien/nhanvien.h) | [`README.md`](./Lop_NhanVien/README.md) | `O(1)` |
| [Cài Đặt Lớp Sinh Viên (SinhVien)](./Lop_SinhVien/) | [`sinhvien.cpp`](./Lop_SinhVien/sinhvien.cpp) [`sinhvien.h`](./Lop_SinhVien/sinhvien.h) | [`README.md`](./Lop_SinhVien/README.md) | `O(1)` |
| [Cài Đặt Lớp Thời Gian (Time)](./Lop_Time/) | [`time.cpp`](./Lop_Time/time.cpp) [`time.h`](./Lop_Time/time.h) | [`README.md`](./Lop_Time/README.md) | `O(1)` |
| [Cài Đặt Nạp Chồng Toán Tử](./Nap_Chong_Toan_Tu/) | [`operatoroverloading.cpp`](./Nap_Chong_Toan_Tu/operatoroverloading.cpp) [`operatoroverloading.h`](./Nap_Chong_Toan_Tu/operatoroverloading.h) | [`README.md`](./Nap_Chong_Toan_Tu/README.md) | `O(1)` |
| [So Sánh Số Lượng Sinh Viên Giữa Các Doanh Nghiệp](./SSSoluongsinhvien/) | [`SSSoluongsinhvien.cpp`](./SSSoluongsinhvien/SSSoluongsinhvien.cpp) | [`README.md`](./SSSoluongsinhvien/README.md) | `O(N log N)` |
| [Bài Tập Ứng Dụng Tính Đóng Gói](./bt_tinh_dong_goi/) | [`bt_tinh_dong_goi.cpp`](./bt_tinh_dong_goi/bt_tinh_dong_goi.cpp) | [`README.md`](./bt_tinh_dong_goi/README.md) | `O(1)` |
| [Chỉnh Sửa Hồ Sơ Sinh Viên](./chinhsuasinhvien/) | [`chinhsuasinhvien.cpp`](./chinhsuasinhvien/chinhsuasinhvien.cpp) | [`README.md`](./chinhsuasinhvien/README.md) | `O(N)` |
| [Chương Trình Quản Lý Sinh Viên Hoàn Chỉnh](./quanli_sv/) | [`quanli_sv.cpp`](./quanli_sv/quanli_sv.cpp) | [`README.md`](./quanli_sv/README.md) | `O(N log N)` |

---

## 4. Hướng dẫn học tập & Biên dịch
Mỗi bài toán được đặt trong một thư mục riêng biệt kèm mã nguồn C++ và tệp `README.md` giải thích chi tiết có sơ đồ Mermaid.
Để biên dịch và chạy một bài toán bất kỳ:
```bash
cd "DSA/14_Lap_Trinh_Huong_Doi_Tuong_OOP/Ten_Thu_Muc_Bai_Toan"
g++ -std=c++11 -O2 "Ten_File.cpp" -o "Ten_File"
./"Ten_File"
```

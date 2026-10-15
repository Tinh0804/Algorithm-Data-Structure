# 05. Xử Lý Xâu Kí Tự (String Manipulation)

## 1. Giới thiệu chuyên đề
Các kỹ thuật xử lý chuỗi ký tự trong C++: Chuẩn hóa họ tên, sinh email, đảo ngược chuỗi/tên, tách từ bằng stringstream, xóa từ khỏi câu, kiểm tra xâu Pangram, xâu đối xứng (Palindrome), xâu đẳng cấu (Isomorphic), tìm kiếm mẫu chuỗi con.

---

## 2. Các kiến thức & Kỹ thuật trọng tâm
- Chuẩn hóa định dạng xâu họ tên và địa chỉ email
- Tách từ trong câu bằng stringstream và duyệt chuỗi
- Kiểm tra xâu đối xứng, xâu Pangram (chứa đủ bảng chữ cái)
- Tìm chỉ số xuất hiện đầu tiên của chuỗi con (Strstr / Pattern Matching)
- Tập từ riêng của 2 xâu, rút gọn biểu thức đa thức

---

## 3. Danh mục các bài toán trong chuyên đề
Tổng số bài toán / nhóm bài: **20**

| Bài toán / Thuật toán | Tệp mã nguồn | Tài liệu hướng dẫn | Độ phức tạp |
| :--- | :--- | :--- | :--- |
| [Chuan Hoa Email](./Chuan_hoa_email/) | [`Chuan_hoa_email.c++`](./Chuan_hoa_email/Chuan_hoa_email.c++) | [`README.md`](./Chuan_hoa_email/README.md) | `O(N)` |
| [Do Dai Cua Chuoi Cuoi Cung](./Do_dai_cua_chuoi_cuoi_cung/) | [`Do_dai_cua_chuoi_cuoi_cung.cpp`](./Do_dai_cua_chuoi_cuoi_cung/Do_dai_cua_chuoi_cuoi_cung.cpp) | [`README.md`](./Do_dai_cua_chuoi_cuoi_cung/README.md) | `O(N)` |
| [Isomorphic](./Isomorphic/) | [`Isomorphic.c++`](./Isomorphic/Isomorphic.c++) | [`README.md`](./Isomorphic/README.md) | `O(N)` |
| [String](./String/) | [`String.cpp`](./String/String.cpp) | [`README.md`](./String/README.md) | `O(N)` |
| [Tao Email](./Tao_email/) | [`Tao_email.cpp`](./Tao_email/Tao_email.cpp) | [`README.md`](./Tao_email/README.md) | `O(N)` |
| [Tap Tu Rieng Cua 2Xau](./Tap_tu_rieng_cua_2xau/) | [`Tap_tu_rieng_cua_2xau.cpp`](./Tap_tu_rieng_cua_2xau/Tap_tu_rieng_cua_2xau.cpp) | [`README.md`](./Tap_tu_rieng_cua_2xau/README.md) | `O(N)` |
| [Tien To Chung Dai Nhat](./Tien_to_chung_dai_nhat/) | [`Tien_to_chung_dai_nhat.cpp`](./Tien_to_chung_dai_nhat/Tien_to_chung_dai_nhat.cpp) | [`README.md`](./Tien_to_chung_dai_nhat/README.md) | `O(N)` |
| [Tien To Chung Dai Nhat--F](./Tien_to_chung_dai_nhat--F/) | [`Tien_to_chung_dai_nhat--F.cpp`](./Tien_to_chung_dai_nhat--F/Tien_to_chung_dai_nhat--F.cpp) | [`README.md`](./Tien_to_chung_dai_nhat--F/README.md) | `O(N)` |
| [Tim Chi So Cua Lan Xuat Hien Dau Tien Trong Chuoi](./Tim_chi_so_cua_lan_xuat_hien_dau_tien_trong_chuoi/) | [`Tim_chi_so_cua_lan_xuat_hien_dau_tien_trong_chuoi.cpp`](./Tim_chi_so_cua_lan_xuat_hien_dau_tien_trong_chuoi/Tim_chi_so_cua_lan_xuat_hien_dau_tien_trong_chuoi.cpp) | [`README.md`](./Tim_chi_so_cua_lan_xuat_hien_dau_tien_trong_chuoi/README.md) | `O(N)` |
| [Chuan Hoa Ten1](./chuan_hoa_ten1/) | [`chuan_hoa_ten1.cpp`](./chuan_hoa_ten1/chuan_hoa_ten1.cpp) | [`README.md`](./chuan_hoa_ten1/README.md) | `O(N)` |
| [Chuoidaongc](./chuoidaongc/) | [`chuoidaongc.cpp`](./chuoidaongc/chuoidaongc.cpp) | [`README.md`](./chuoidaongc/README.md) | `O(N)` |
| [Chuoilonnhat](./chuoilonnhat/) | [`chuoilonnhat.cpp`](./chuoilonnhat/chuoilonnhat.cpp) | [`README.md`](./chuoilonnhat/README.md) | `O(N)` |
| [Demkitukhacnhau](./demkitukhacnhau/) | [`demkitukhacnhau.cpp`](./demkitukhacnhau/demkitukhacnhau.cpp) | [`README.md`](./demkitukhacnhau/README.md) | `O(N)` |
| [Doi Nguoc Ten](./doi_nguoc_ten/) | [`doi_nguoc_ten.cpp`](./doi_nguoc_ten/doi_nguoc_ten.cpp) | [`README.md`](./doi_nguoc_ten/README.md) | `O(N)` |
| [Ktchuoidoixung](./ktchuoidoixung/) | [`ktchuoidoixung.cpp`](./ktchuoidoixung/ktchuoidoixung.cpp) | [`README.md`](./ktchuoidoixung/README.md) | `O(N)` |
| [Tac Tu Tong Chuoi](./tac_tu_tong_chuoi/) | [`tac_tu_tong_chuoi.cpp`](./tac_tu_tong_chuoi/tac_tu_tong_chuoi.cpp) | [`README.md`](./tac_tu_tong_chuoi/README.md) | `O(N)` |
| [Tach Tu Tong Chuoi](./tach_tu_tong_chuoi/) | [`tach_tu_tong_chuoi.cpp`](./tach_tu_tong_chuoi/tach_tu_tong_chuoi.cpp) | [`README.md`](./tach_tu_tong_chuoi/README.md) | `O(N)` |
| [Tongkitu](./tongkitu/) | [`tongkitu.cpp`](./tongkitu/tongkitu.cpp) | [`README.md`](./tongkitu/README.md) | `O(N)` |
| [Xau Pangram](./xau_pangram/) | [`xau_pangram.cpp`](./xau_pangram/xau_pangram.cpp) | [`README.md`](./xau_pangram/README.md) | `O(N)` |
| [Xoa Bo Tu Trong Cau](./xoa_bo_tu_trong_cau/) | [`xoa_bo_tu_trong_cau.cpp`](./xoa_bo_tu_trong_cau/xoa_bo_tu_trong_cau.cpp) | [`README.md`](./xoa_bo_tu_trong_cau/README.md) | `O(N)` |

---

## 4. Hướng dẫn học tập & Biên dịch
Mỗi bài toán được đặt trong một thư mục riêng biệt kèm mã nguồn C++ và tệp `README.md` giải thích chi tiết có sơ đồ Mermaid.
Để biên dịch và chạy một bài toán bất kỳ:
```bash
cd "DSA/05_Xau_Ki_Tu/Ten_Thu_Muc_Bai_Toan"
g++ -std=c++11 -O2 "Ten_File.cpp" -o "Ten_File"
./"Ten_File"
```

# 03. Hai Con Trỏ & Cửa Sổ Trượt (Two Pointers & Sliding Window)

## 1. Giới thiệu chuyên đề
Kỹ thuật hai con trỏ (Two Pointers) và cửa sổ trượt (Sliding Window) có kích thước cố định hoặc biến đổi; Tối ưu hóa kiểm tra phần tử trùng lặp trong cửa sổ, tìm phần tử lớn nhất/nhỏ nhất trong cửa sổ kích thước K sử dụng Deque.

---

## 2. Các kiến thức & Kỹ thuật trọng tâm
- Cửa sổ trượt cố định độ dài K (Fixed-size Sliding Window)
- Cửa sổ trượt biến thiên (Variable-size Sliding Window)
- Kiểm tra phần tử trùng nhau trong cửa sổ
- Tìm giá trị lớn nhất trong mỗi cửa sổ kích thước K bằng Deque O(n)

---

## 3. Danh mục các bài toán trong chuyên đề
Tổng số bài toán / nhóm bài: **4**

| Bài toán / Thuật toán | Tệp mã nguồn | Tài liệu hướng dẫn | Độ phức tạp |
| :--- | :--- | :--- | :--- |
| [Kiểm Tra Trùng Nhau Trong Cửa Sổ K](./Cua_so_trung_nhau/) | [`Cua_so_trung_nhau.cpp`](./Cua_so_trung_nhau/Cua_so_trung_nhau.cpp) | [`README.md`](./Cua_so_trung_nhau/README.md) | `O(N log K)` |
| [Kỹ Thuật Cửa Sổ Trượt (Sliding Window)](./Cua_so_truot/) | [`Cua_so_truot.cpp`](./Cua_so_truot/Cua_so_truot.cpp) | [`README.md`](./Cua_so_truot/README.md) | `O(N)` |
| [Đổi Chỗ Ít Nhất Để Tạo Số Lớn Nhất Bé Hơn Số Ban Đầu](./Doi_cho_it_nhat/) | [`Doi_cho_it_nhat.cpp`](./Doi_cho_it_nhat/Doi_cho_it_nhat.cpp) | [`README.md`](./Doi_cho_it_nhat/README.md) | `O(L)` |
| [Giá Trị Lớn Nhất Trong Cửa Sổ K Bằng Deque](./Solonnhatcuamoicuasokichthuoc_deque/) | [`Solonnhatcuamoicuasokichthuoc_deque.cpp`](./Solonnhatcuamoicuasokichthuoc_deque/Solonnhatcuamoicuasokichthuoc_deque.cpp) | [`README.md`](./Solonnhatcuamoicuasokichthuoc_deque/README.md) | `O(N)` |

---

## 4. Hướng dẫn học tập & Biên dịch
Mỗi bài toán được đặt trong một thư mục riêng biệt kèm mã nguồn C++ và tệp `README.md` giải thích chi tiết có sơ đồ Mermaid.
Để biên dịch và chạy một bài toán bất kỳ:
```bash
cd "DSA/03_Hai_Con_Tro_va_Cua_So_Truot/Ten_Thu_Muc_Bai_Toan"
g++ -std=c++11 -O2 "Ten_File.cpp" -o "Ten_File"
./"Ten_File"
```

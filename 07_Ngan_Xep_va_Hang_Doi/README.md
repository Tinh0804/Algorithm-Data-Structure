# 07. Ngăn Xếp & Hàng Đợi (Stack, Queue, Deque, Priority Queue)

## 1. Giới thiệu chuyên đề
Cài đặt và ứng dụng Ngăn xếp (Stack - LIFO) để kiểm tra tính hợp lệ của dấu ngoặc, biểu thức số học; Hàng đợi (Queue - FIFO); Hàng đợi hai đầu (Deque); Hàng đợi nhị phân; Hàng đợi ưu tiên (Priority Queue / Min-Heap) giải bài toán nối dây tham lam (Huffman).

---

## 2. Các kiến thức & Kỹ thuật trọng tâm
- Cơ chế hoạt động LIFO (Stack) và FIFO (Queue)
- Kiểm tra tính hợp lệ của dấu ngoặc và biểu thức toán học
- Hàng đợi nhị phân: Sinh các số chỉ gồm chữ số 0 và 9 (Bội số 0 và 9)
- Hàng đợi ưu tiên (Priority Queue) và bài toán nối dây cực tiểu
- Hàng đợi hai đầu (std::deque) và các thao tác đẩy/rút hai đầu

---

## 3. Danh mục các bài toán trong chuyên đề
Tổng số bài toán / nhóm bài: **10**

| Bài toán / Thuật toán | Tệp mã nguồn | Tài liệu hướng dẫn | Độ phức tạp |
| :--- | :--- | :--- | :--- |
| [Bài Toán Nối Dây (Huffman / Priority Queue)](./Bai_toan_noi_day/) | [`Bai_toan_noi_day.cpp`](./Bai_toan_noi_day/Bai_toan_noi_day.cpp) | [`README.md`](./Bai_toan_noi_day/README.md) | `O(N log N)` |
| [Kiểm Tra Dấu Ngoặc Hợp Lệ (LeetCode 20)](./Dau_ngoac_hop_le/) | [`Dau_ngoac_hop_le.cpp`](./Dau_ngoac_hop_le/Dau_ngoac_hop_le.cpp) | [`README.md`](./Dau_ngoac_hop_le/README.md) | `O(N)` |
| [Hàng Đợi Ưu Tiên (std::priority_queue)](./Hang_doi_uu_tien/) | [`Hang_doi_uu_tien.cpp`](./Hang_doi_uu_tien/Hang_doi_uu_tien.cpp) | [`README.md`](./Hang_doi_uu_tien/README.md) | `O(log N) mỗi thao tác` |
| [Bội Số Của 0 và 9 (Queue)](./boiso0,9/) | [`boiso0,9.cpp`](./boiso0,9/boiso0,9.cpp) | [`README.md`](./boiso0,9/README.md) | `O(N)` |
| [Bài Tập Ứng Dụng Hàng Đợi Hai Đầu Deque](./bt deque/) | [`bt deque.cpp`](./bt deque/bt deque.cpp) | [`README.md`](./bt deque/README.md) | `O(1) mỗi thao tác` |
| [Cấu Trúc Hàng Đợi Hai Đầu (std::deque)](./deque/) | [`deque.cpp`](./deque/deque.cpp) | [`README.md`](./deque/README.md) | `O(1)` |
| [Hàng Đợi Cơ Bản (std::queue FIFO)](./hang_doi/) | [`hang_doi.cpp`](./hang_doi/hang_doi.cpp) | [`README.md`](./hang_doi/README.md) | `O(1) mỗi thao tác` |
| [Sinh Số Nhị Phân Bằng Hàng Đợi](./hangdoi_nhiphan/) | [`hangdoi_nhiphan.cpp`](./hangdoi_nhiphan/hangdoi_nhiphan.cpp) | [`README.md`](./hangdoi_nhiphan/README.md) | `O(N)` |
| [Kiểm Tra Tính Hợp Lệ Của Biểu Thức Ngoặc](./kiemtrabieuthuc/) | [`kiemtrabieuthuc.cpp`](./kiemtrabieuthuc/kiemtrabieuthuc.cpp) | [`README.md`](./kiemtrabieuthuc/README.md) | `O(N)` |
| [Ngăn Xếp Cơ Bản (std::stack LIFO)](./nganxep/) | [`nganxep.cpp`](./nganxep/nganxep.cpp) | [`README.md`](./nganxep/README.md) | `O(1) mỗi thao tác` |

---

## 4. Hướng dẫn học tập & Biên dịch
Mỗi bài toán được đặt trong một thư mục riêng biệt kèm mã nguồn C++ và tệp `README.md` giải thích chi tiết có sơ đồ Mermaid.
Để biên dịch và chạy một bài toán bất kỳ:
```bash
cd "DSA/07_Ngan_Xep_va_Hang_Doi/Ten_Thu_Muc_Bai_Toan"
g++ -std=c++11 -O2 "Ten_File.cpp" -o "Ten_File"
./"Ten_File"
```

# 06. Danh Sách Liên Kết (Linked Lists)

## 1. Giới thiệu chuyên đề
Cấu trúc tự trỏ (Self-referential Structure), cài đặt danh sách liên kết đơn (Singly Linked List) và đôi (Doubly Linked List); Các thao tác thêm, xóa (đầu, cuối, vị trí K), duyệt, sắp xếp node; Cài đặt Stack bằng DSLK; Các bài toán LeetCode kinh điển về DSLK.

---

## 2. Các kiến thức & Kỹ thuật trọng tâm
- Định nghĩa node và cấu trúc tự trỏ trong C/C++
- Thêm node vào đầu, cuối, vị trí bất kỳ trong DSLK đơn và đôi
- Xóa node đầu, cuối, vị trí giữa
- Sắp xếp các node trong DSLK (Selection / Bubble trên Node)
- Cài đặt Ngăn xếp (Stack) bằng DSLK và Mảng
- Đảo ngược danh sách liên kết (Reverse Linked List)
- Hợp nhất 2 danh sách liên kết đã sắp xếp (Merge Two Sorted Lists)

---

## 3. Danh mục các bài toán trong chuyên đề
Tổng số bài toán / nhóm bài: **14**

| Bài toán / Thuật toán | Tệp mã nguồn | Tài liệu hướng dẫn | Độ phức tạp |
| :--- | :--- | :--- | :--- |
| [Cài Đặt Ngăn Xếp Bằng DSLK & Mảng](./Cai_ngan_xep_bang_DSLK&&Mang/) | [`Cai_ngan_xep_bang_DSLK&&Mang.cpp`](./Cai_ngan_xep_bang_DSLK&&Mang/Cai_ngan_xep_bang_DSLK&&Mang.cpp) | [`README.md`](./Cai_ngan_xep_bang_DSLK&&Mang/README.md) | `O(1) mỗi thao tác` |
| [Cấu Trúc Tự Trỏ (Self-Referential Structure)](./Cau_truc_tu_tro/) | [`Cau_truc_tu_tro.cpp`](./Cau_truc_tu_tro/Cau_truc_tu_tro.cpp) | [`README.md`](./Cau_truc_tu_tro/README.md) | `O(1)` |
| [Chèn Node Vào Vị Trí Bất Kỳ Trong DSLK](./Chen_vao_giua_DSLK/) | [`Chen_vao_giua_DSLK.cpp`](./Chen_vao_giua_DSLK/Chen_vao_giua_DSLK.cpp) | [`README.md`](./Chen_vao_giua_DSLK/README.md) | `O(N)` |
| [Xóa Node Trùng Lặp Trong DSLK Đã Sắp Xếp (LeetCode 83)](./Loai_bo_cac_ban_sao_koi_ds_da_ss/) | [`Loai_bo_cac_ban_sao_koi_ds_da_ss.cpp`](./Loai_bo_cac_ban_sao_koi_ds_da_ss/Loai_bo_cac_ban_sao_koi_ds_da_ss.cpp) | [`README.md`](./Loai_bo_cac_ban_sao_koi_ds_da_ss/README.md) | `O(N)` |
| [Hợp Nhất 2 DSLK Đã Sắp Xếp (LeetCode 21)](./Merge_Two_Sorted_List/) | [`Merge_Two_Sorted_List.cpp`](./Merge_Two_Sorted_List/Merge_Two_Sorted_List.cpp) | [`README.md`](./Merge_Two_Sorted_List/README.md) | `O(N + M)` |
| [Đảo Ngược Danh Sách Liên Kết (LeetCode 206)](./Reverse_Linked_List/) | [`Reverse_Linked_List.c++`](./Reverse_Linked_List/Reverse_Linked_List.c++) | [`README.md`](./Reverse_Linked_List/README.md) | `O(N)` |
| [Sắp Xếp Danh Sách Sinh Viên Bằng DSLK](./Sap_xep_sv/) | [`Sap_xep_sv.cpp`](./Sap_xep_sv/Sap_xep_sv.cpp) | [`README.md`](./Sap_xep_sv/README.md) | `O(N^2)` |
| [Sắp Xếp Danh Sách Liên Kết Đơn](./Sort_DSLK/) | [`Sort_DSLK.cpp`](./Sort_DSLK/Sort_DSLK.cpp) | [`README.md`](./Sort_DSLK/README.md) | `O(N^2)` |
| [Thêm Node & Duyệt Danh Sách Liên Kết](./Them&&duyet_DSLK/) | [`Them&&duyet_DSLK.cpp`](./Them&&duyet_DSLK/Them&&duyet_DSLK.cpp) | [`README.md`](./Them&&duyet_DSLK/README.md) | `O(N)` |
| [Cài Đặt Danh Sách Liên Kết Đôi](./Them_node_vao_DSLK_Doi/) | [`Them_node_vao_DSLK_Doi.cpp`](./Them_node_vao_DSLK_Doi/Them_node_vao_DSLK_Doi.cpp) | [`README.md`](./Them_node_vao_DSLK_Doi/README.md) | `O(1) thêm đầu` |
| [Xóa Node Đầu Hoặc Node Cuối DSLK](./Xoa_dau_or_Cuoi_node/) | [`Xoa_dau_or_Cuoi_node.cpp`](./Xoa_dau_or_Cuoi_node/Xoa_dau_or_Cuoi_node.cpp) | [`README.md`](./Xoa_dau_or_Cuoi_node/README.md) | `O(1) xóa đầu, O(N) xóa cuối` |
| [Xóa Phần Tử Đầu Hoặc Cuối Danh Sách](./Xoa_dau_or_cuoi/) | [`Xoa_dau_or_cuoi.cpp`](./Xoa_dau_or_cuoi/Xoa_dau_or_cuoi.cpp) | [`README.md`](./Xoa_dau_or_cuoi/README.md) | `O(1)` |
| [Xóa Node Tại Vị Trí Bất Kỳ Trong DSLK](./Xoa_node_giua/) | [`Xoa_node_giua.cpp`](./Xoa_node_giua/Xoa_node_giua.cpp) | [`README.md`](./Xoa_node_giua/README.md) | `O(N)` |
| [Kiểm Thử Danh Sách Liên Kết Trong Ngôn Ngữ C](./test/) | [`test.c`](./test/test.c) | [`README.md`](./test/README.md) | `O(N)` |

---

## 4. Hướng dẫn học tập & Biên dịch
Mỗi bài toán được đặt trong một thư mục riêng biệt kèm mã nguồn C++ và tệp `README.md` giải thích chi tiết có sơ đồ Mermaid.
Để biên dịch và chạy một bài toán bất kỳ:
```bash
cd "DSA/06_Danh_Sach_Lien_Ket/Ten_Thu_Muc_Bai_Toan"
g++ -std=c++11 -O2 "Ten_File.cpp" -o "Ten_File"
./"Ten_File"
```

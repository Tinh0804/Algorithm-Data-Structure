# 11. Cây & Cấu Trúc Dữ Liệu Nâng Cao (Trees & Advanced Data Structures)

## 1. Giới thiệu chuyên đề
Cây nhị phân tìm kiếm (Binary Search Tree - BST): Tạo cây, duyệt cây (Inorder, Preorder, Postorder), tìm kiếm phần tử, xóa node trên BST; Cấu trúc dữ liệu nâng cao truy vấn đoạn: Segment Tree (Cây phân đoạn) và Fenwick Tree (Binary Indexed Tree - BIT).

---

## 2. Các kiến thức & Kỹ thuật trọng tâm
- Cây nhị phân tìm kiếm (BST): Cấu trúc node, chèn phần tử, duyệt cây (NLR, LNR, LRN)
- Tìm kiếm phần tử trên cây nhị phân tìm kiếm O(h)
- Xóa node trên cây nhị phân tìm kiếm (node lá, 1 con, 2 con)
- Segment Tree: Xây dựng cây, cập nhật điểm, truy vấn tổng đoạn O(log n)
- Fenwick Tree (BIT): Cập nhật giá trị tại vị trí và truy vấn tổng tiền tố O(log n)

---

## 3. Danh mục các bài toán trong chuyên đề
Tổng số bài toán / nhóm bài: **5**

| Bài toán / Thuật toán | Tệp mã nguồn | Tài liệu hướng dẫn | Độ phức tạp |
| :--- | :--- | :--- | :--- |
| [Cây Fenwick (Binary Indexed Tree - BIT)](./Fenwick_Tree/) | [`Fenwick_Tree.cpp`](./Fenwick_Tree/Fenwick_Tree.cpp) | [`README.md`](./Fenwick_Tree/README.md) | `O(log N)` |
| [Cây Phân Đoạn (Segment Tree)](./Segment_Tree/) | [`Segment_Tree.cpp`](./Segment_Tree/Segment_Tree.cpp) | [`README.md`](./Segment_Tree/README.md) | `O(log N)` |
| [Khởi Tạo & Duyệt Cây Nhị Phân Tìm Kiếm (BST)](./Tao_DuyetCNP/) | [`Tao_DuyetCNP.cpp`](./Tao_DuyetCNP/Tao_DuyetCNP.cpp) | [`README.md`](./Tao_DuyetCNP/README.md) | `O(N) duyệt, O(log N) chèn` |
| [Tìm Kiếm Trên Cây Nhị Phân Tìm Kiếm (BST)](./Timkiem/) | [`Timkiem.cpp`](./Timkiem/Timkiem.cpp) | [`README.md`](./Timkiem/README.md) | `O(h) với h là chiều cao cây` |
| [Xóa Node Trên Cây Nhị Phân Tìm Kiếm (BST)](./Xoanode/) | [`Xoanode.cpp`](./Xoanode/Xoanode.cpp) | [`README.md`](./Xoanode/README.md) | `O(h)` |

---

## 4. Hướng dẫn học tập & Biên dịch
Mỗi bài toán được đặt trong một thư mục riêng biệt kèm mã nguồn C++ và tệp `README.md` giải thích chi tiết có sơ đồ Mermaid.
Để biên dịch và chạy một bài toán bất kỳ:
```bash
cd "DSA/11_Cay_va_Cau_Truc_Nang_Cao/Ten_Thu_Muc_Bai_Toan"
g++ -std=c++11 -O2 "Ten_File.cpp" -o "Ten_File"
./"Ten_File"
```

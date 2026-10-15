# Cây Fenwick (Binary Indexed Tree - BIT)

## 1. Thông tin tệp mã nguồn
- [`Fenwick_Tree.cpp`](./Fenwick_Tree.cpp)
- **Thư mục chuyên đề**: `DSA/11_Cay_va_Cau_Truc_Nang_Cao/Fenwick_Tree/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Cập nhật điểm và truy vấn tổng tiền tố trong O(log N).

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Phép toán bitwise pos & (-pos) quản lý đoạn lũy thừa của 2.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Phép toán bitwise pos & (-pos) quản lý đoạn lũy thừa của 2.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    subgraph UpdatePoint ["Cập nhật điểm: Update(pos, val)"]
        U1["Bắt đầu tại vị trí pos"] --> U2{"pos <= N?"}
        U2 -- "Đúng" --> U3["BIT[pos] += val"]
        U3 --> U4["pos += pos & (-pos) - Nhảy sang đoạn phụ trách cha"]
        U4 --> U2
        U2 -- "Sai" --> U5["Hoàn tất cập nhật"]
    end
    subgraph QueryPrefix ["Truy vấn tiền tố: Query(pos)"]
        Q1["Khởi tạo sum = 0"] --> Q2{"pos >= 1?"}
        Q2 -- "Đúng" --> Q3["sum += BIT[pos]"]
        Q3 --> Q4["pos -= pos & (-pos) - Lùi sang đoạn con trước"]
        Q4 --> Q2
        Q2 -- "Sai" --> Q5["Trả về sum"]
    end
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(log N)`
- **Độ phức tạp không gian (Space Complexity)**: `O(N)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
6 2
10 3 2 3 10 5
2 2 5
1 2 9
```

### Output mẫu:
```text
18
```

### Giải thích:
Truy vấn tổng đoạn [2, 5] = 18.

---

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/11_Cay_va_Cau_Truc_Nang_Cao/Fenwick_Tree"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Fenwick_Tree.cpp" -o "Fenwick_Tree"

# Chạy chương trình
./"Fenwick_Tree"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

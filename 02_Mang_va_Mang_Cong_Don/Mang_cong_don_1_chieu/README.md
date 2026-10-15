# Mảng Cộng Dồn 1 Chiều

## 1. Thông tin tệp mã nguồn
- [`Mang_cong_don_1_chieu.cpp`](./Mang_cong_don_1_chieu.cpp)
- **Thư mục chuyên đề**: `DSA/02_Mang_va_Mang_Cong_Don/Mang_cong_don_1_chieu/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Cài đặt mảng tiền tố 1 chiều tối ưu truy vấn.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
pre[i] = pre[i-1] + a[i].

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: pre[i] = pre[i-1] + a[i].
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Nhập mảng A gồm N phần tử"] --> BuildPre["Khởi tạo pre[0] = 0; pre[i] = pre[i-1] + A[i]"]
    BuildPre --> Query["Nhập truy vấn đoạn [L, R]"]
    Query --> CalcSum["Tính tổng = pre[R] - pre[L-1] trong O(1)"]
    CalcSum --> PrintResult["In giá trị tổng đoạn"]
    PrintResult --> MoreQuery{"Còn truy vấn tiếp theo?"}
    MoreQuery -- "Có" --> Query
    MoreQuery -- "Không" --> End["Kết thúc"]
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(N)`
- **Độ phức tạp không gian (Space Complexity)**: `O(N)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
4
1 3 5 7
1 3
```

### Output mẫu:
```text
Nhap so luong:Nhap chi so left,right:Tong cac ptu tu left-right=13
```

### Giải thích:
1 + 3 + 5 = 9.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/02_Mang_va_Mang_Cong_Don/Mang_cong_don_1_chieu"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Mang_cong_don_1_chieu.cpp" -o "Mang_cong_don_1_chieu"

# Chạy chương trình
./"Mang_cong_don_1_chieu"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

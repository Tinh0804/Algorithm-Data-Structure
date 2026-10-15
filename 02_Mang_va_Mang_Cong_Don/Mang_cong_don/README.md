# Mảng Cộng Dồn (Prefix Sum)

## 1. Thông tin tệp mã nguồn
- [`Mang_cong_don.cpp`](./Mang_cong_don.cpp)
- **Thư mục chuyên đề**: `DSA/02_Mang_va_Mang_Cong_Don/Mang_cong_don/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Tính tổng tiền tố phục vụ truy vấn tổng đoạn trong O(1).

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Xây dựng mảng pre[i] = pre[i-1] + a[i].

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Xây dựng mảng pre[i] = pre[i-1] + a[i].
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
5
1 2 3 4 5
2 4
```

### Output mẫu:
```text
Nhap so luong:Nhap chi so left,right:Tong cac ptu tu left-right=7
```

### Giải thích:
Tổng từ 2 đến 4 là 2+3+4=9.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/02_Mang_va_Mang_Cong_Don/Mang_cong_don"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Mang_cong_don.cpp" -o "Mang_cong_don"

# Chạy chương trình
./"Mang_cong_don"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

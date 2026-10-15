# Mảng Cộng Dồn 2 Chiều (2D Prefix Sum)

## 1. Thông tin tệp mã nguồn
- [`Mang_cot_don_2_chieu.cpp`](./Mang_cot_don_2_chieu.cpp)
- **Thư mục chuyên đề**: `DSA/02_Mang_va_Mang_Cong_Don/Mang_cot_don_2_chieu/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Tính tổng hình chữ nhật con trong ma trận với O(1).

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Công thức bao hàm - loại trừ 2D.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Công thức bao hàm - loại trừ 2D.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Mảng Cộng Dồn 2 Chiều (2D Prefix Sum)"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
    ReadInput --> Process["Thực thi thuật toán chính"]
    Process --> CheckResult{"Kiểm tra điều kiện kết quả"}
    CheckResult -- "Thỏa mãn" --> PrintOutput["In kết quả đầu ra đạt chuẩn"]
    CheckResult -- "Không thỏa mãn" --> HandleAlt["Xử lý trường hợp biên hoặc xuất thông báo"]
    PrintOutput --> End["Kết thúc"]
    HandleAlt --> End
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(N*M)`
- **Độ phức tạp không gian (Space Complexity)**: `O(N*M)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
2 2
1 2
3 4
1 1 2 2
```

### Output mẫu:
```text
Nhap so dong,cot can tinh tong:Nhap phtu thu[1][1]:Nhap phtu thu[1][2]:Nhap phtu thu[2][1]:Nhap phtu thu[2][2]:
```

### Giải thích:
Tổng 1+2+3+4 = 10.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/02_Mang_va_Mang_Cong_Don/Mang_cot_don_2_chieu"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Mang_cot_don_2_chieu.cpp" -o "Mang_cot_don_2_chieu"

# Chạy chương trình
./"Mang_cot_don_2_chieu"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

# Tính Tổng Số Chẵn Bằng For

## 1. Thông tin tệp mã nguồn
- [`tinh tong so chan bang for.cpp`](./tinh tong so chan bang for.cpp)
- **Thư mục chuyên đề**: `DSA/01_Toan_Hoc_va_Ly_Thuyet_So/tinh tong so chan bang for/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Tính tổng các số chẵn từ 2 đến N.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Vòng lặp i += 2 cộng dồn.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Vòng lặp i += 2 cộng dồn.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Tính Tổng Số Chẵn Bằng For"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
    ReadInput --> Process["Thực thi thuật toán chính"]
    Process --> CheckResult{"Kiểm tra điều kiện kết quả"}
    CheckResult -- "Thỏa mãn" --> PrintOutput["In kết quả đầu ra đạt chuẩn"]
    CheckResult -- "Không thỏa mãn" --> HandleAlt["Xử lý trường hợp biên hoặc xuất thông báo"]
    PrintOutput --> End["Kết thúc"]
    HandleAlt --> End
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(N)`
- **Độ phức tạp không gian (Space Complexity)**: `O(1)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
10
```

### Output mẫu:
```text
Moi nhap vao so nguyen a:Tong cac so chan tu 0 den 10 la:30
```

### Giải thích:
2 + 4 + 6 + 8 + 10 = 30.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/01_Toan_Hoc_va_Ly_Thuyet_So/tinh tong so chan bang for"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "tinh tong so chan bang for.cpp" -o "tinh tong so chan bang for"

# Chạy chương trình
./"tinh tong so chan bang for"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

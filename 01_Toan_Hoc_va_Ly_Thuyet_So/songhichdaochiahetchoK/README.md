# Số Nghịch Đảo Chia Hết Cho K

## 1. Thông tin tệp mã nguồn
- [`songhichdaochiahetchoK.cpp`](./songhichdaochiahetchoK.cpp)
- **Thư mục chuyên đề**: `DSA/01_Toan_Hoc_va_Ly_Thuyet_So/songhichdaochiahetchoK/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Kiểm tra số đảo ngược của N có chia hết cho K.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Tạo số nghịch đảo và xét phép chia dư % K.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Tạo số nghịch đảo và xét phép chia dư % K.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Số Nghịch Đảo Chia Hết Cho K"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
    ReadInput --> Process["Thực thi thuật toán chính"]
    Process --> CheckResult{"Kiểm tra điều kiện kết quả"}
    CheckResult -- "Thỏa mãn" --> PrintOutput["In kết quả đầu ra đạt chuẩn"]
    CheckResult -- "Không thỏa mãn" --> HandleAlt["Xử lý trường hợp biên hoặc xuất thông báo"]
    PrintOutput --> End["Kết thúc"]
    HandleAlt --> End
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(log10 N)`
- **Độ phức tạp không gian (Space Complexity)**: `O(1)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
120 7
```

### Output mẫu:
```text
Nhap k:So nghich dao chia het cho 120la:
```

### Giải thích:
Nghịch đảo của 120 là 21, 21 chia hết cho 7.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/01_Toan_Hoc_va_Ly_Thuyet_So/songhichdaochiahetchoK"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "songhichdaochiahetchoK.cpp" -o "songhichdaochiahetchoK"

# Chạy chương trình
./"songhichdaochiahetchoK"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

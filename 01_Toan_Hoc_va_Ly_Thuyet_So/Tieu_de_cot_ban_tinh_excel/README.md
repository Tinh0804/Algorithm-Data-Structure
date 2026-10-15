# Tiêu Đề Cột Excel (Excel Column Title)

## 1. Thông tin tệp mã nguồn
- [`Tieu_de_cot_ban_tinh_excel.cpp`](./Tieu_de_cot_ban_tinh_excel.cpp)
- **Thư mục chuyên đề**: `DSA/01_Toan_Hoc_va_Ly_Thuyet_So/Tieu_de_cot_ban_tinh_excel/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Chuyển số nguyên n thành tên cột chữ cái trong Excel.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Chuyển đổi hệ cơ số 26 có dịch chuyển -1.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Chuyển đổi hệ cơ số 26 có dịch chuyển -1.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Tiêu Đề Cột Excel (Excel Column Title)"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
    ReadInput --> Process["Thực thi thuật toán chính"]
    Process --> CheckResult{"Kiểm tra điều kiện kết quả"}
    CheckResult -- "Thỏa mãn" --> PrintOutput["In kết quả đầu ra đạt chuẩn"]
    CheckResult -- "Không thỏa mãn" --> HandleAlt["Xử lý trường hợp biên hoặc xuất thông báo"]
    PrintOutput --> End["Kết thúc"]
    HandleAlt --> End
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(log26 N)`
- **Độ phức tạp không gian (Space Complexity)**: `O(1)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
28
```

### Output mẫu:
```text
AA
```

### Giải thích:
Cột thứ 28 là AB.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/01_Toan_Hoc_va_Ly_Thuyet_So/Tieu_de_cot_ban_tinh_excel"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Tieu_de_cot_ban_tinh_excel.cpp" -o "Tieu_de_cot_ban_tinh_excel"

# Chạy chương trình
./"Tieu_de_cot_ban_tinh_excel"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

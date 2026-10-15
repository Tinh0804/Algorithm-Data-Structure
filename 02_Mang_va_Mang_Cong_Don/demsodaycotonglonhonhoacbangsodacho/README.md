# Đếm Số Dãy Con Có Tổng Lớn Hơn Hoặc Bằng K

## 1. Thông tin tệp mã nguồn
- [`demsodaycotonglonhonhoacbangsodacho.cpp`](./demsodaycotonglonhonhoacbangsodacho.cpp)
- **Thư mục chuyên đề**: `DSA/02_Mang_va_Mang_Cong_Don/demsodaycotonglonhonhoacbangsodacho/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Tìm độ dài nhỏ nhất hoặc số dãy con có tổng >= K.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Hai con trỏ co giãn cửa sổ trượt.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Hai con trỏ co giãn cửa sổ trượt.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Đếm Số Dãy Con Có Tổng Lớn Hơn Hoặc Bằng K"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
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
5 7
2 3 1 2 4
```

### Output mẫu:
```text
4
```

### Giải thích:
Đoạn [3, 4] có tổng 7 >= 7.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/02_Mang_va_Mang_Cong_Don/demsodaycotonglonhonhoacbangsodacho"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "demsodaycotonglonhonhoacbangsodacho.cpp" -o "demsodaycotonglonhonhoacbangsodacho"

# Chạy chương trình
./"demsodaycotonglonhonhoacbangsodacho"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

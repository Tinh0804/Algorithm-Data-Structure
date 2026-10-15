# Kiểm Tra Số Không Tăng

## 1. Thông tin tệp mã nguồn
- [`khiemtrasokhongtang.cpp`](./khiemtrasokhongtang.cpp)
- **Thư mục chuyên đề**: `DSA/02_Mang_va_Mang_Cong_Don/khiemtrasokhongtang/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Kiểm tra các chữ số của số nguyên N có tạo thành dãy không tăng.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Tách từng chữ số và so sánh liên tiếp.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Tách từng chữ số và so sánh liên tiếp.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Kiểm Tra Số Không Tăng"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
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
98652
```

### Output mẫu:
```text
nhap so can kiem tra tang hay khong:98652 la so khong tang
```

### Giải thích:
Dãy chữ số không tăng.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/02_Mang_va_Mang_Cong_Don/khiemtrasokhongtang"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "khiemtrasokhongtang.cpp" -o "khiemtrasokhongtang"

# Chạy chương trình
./"khiemtrasokhongtang"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

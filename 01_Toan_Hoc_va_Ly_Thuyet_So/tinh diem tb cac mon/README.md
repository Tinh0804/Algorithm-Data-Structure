# Tính Điểm Trung Bình Các Môn Học

## 1. Thông tin tệp mã nguồn
- [`tinh diem tb cac mon.cpp`](./tinh diem tb cac mon.cpp)
- **Thư mục chuyên đề**: `DSA/01_Toan_Hoc_va_Ly_Thuyet_So/tinh diem tb cac mon/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Tính trung bình cộng điểm số và xếp loại.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Cộng tổng chia cho số lượng môn.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Cộng tổng chia cho số lượng môn.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Tính Điểm Trung Bình Các Môn Học"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
    ReadInput --> Process["Thực thi thuật toán chính"]
    Process --> CheckResult{"Kiểm tra điều kiện kết quả"}
    CheckResult -- "Thỏa mãn" --> PrintOutput["In kết quả đầu ra đạt chuẩn"]
    CheckResult -- "Không thỏa mãn" --> HandleAlt["Xử lý trường hợp biên hoặc xuất thông báo"]
    PrintOutput --> End["Kết thúc"]
    HandleAlt --> End
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(1)`
- **Độ phức tạp không gian (Space Complexity)**: `O(1)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
8.0 7.5 9.0
```

### Output mẫu:
```text
nhap diem mon to�n:nhap diem mon van:nhap diem mon anh:diem trung binh la:8.17
```

### Giải thích:
Tính điểm trung bình.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/01_Toan_Hoc_va_Ly_Thuyet_So/tinh diem tb cac mon"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "tinh diem tb cac mon.cpp" -o "tinh diem tb cac mon"

# Chạy chương trình
./"tinh diem tb cac mon"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

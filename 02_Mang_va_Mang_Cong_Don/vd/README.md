# Ví Dụ Khởi Tạo & Xuất Ma Trận

## 1. Thông tin tệp mã nguồn
- [`vd.cpp`](./vd.cpp)
- **Thư mục chuyên đề**: `DSA/02_Mang_va_Mang_Cong_Don/vd/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Chương trình mẫu minh họa nhập xuất bảng số 2 chiều.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Hai vòng lặp for lồng nhau.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Hai vòng lặp for lồng nhau.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Ví Dụ Khởi Tạo & Xuất Ma Trận"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
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
- **Độ phức tạp không gian (Space Complexity)**: `O(1)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
5
1 3 9 2 9
```

### Output mẫu:
```text
So lon nhat: 9
Vi tri: 2 4
```

### Giải thích:
Tìm phần tử lớn nhất trong mảng và liệt kê các chỉ số vị trí xuất hiện (Lưu ý: mã nguồn gốc khai báo VLA int a[n] = {0}).

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/02_Mang_va_Mang_Cong_Don/vd"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "vd.cpp" -o "vd"

# Chạy chương trình
./"vd"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

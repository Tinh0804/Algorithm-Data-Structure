# Cộng Hai Phân Số (Tính Đóng Gói)

## 1. Thông tin tệp mã nguồn
- [`BT_TDG-conghaips.cpp`](./BT_TDG-conghaips.cpp)
- **Thư mục chuyên đề**: `DSA/14_Lap_Trinh_Huong_Doi_Tuong_OOP/BT_TDG-conghaips/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Cộng 2 phân số và rút gọn về tối giản bằng UCLN.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Công thức quy đồng mẫu số và thuật toán Euclid.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Công thức quy đồng mẫu số và thuật toán Euclid.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Cộng Hai Phân Số (Tính Đóng Gói)"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
    ReadInput --> Process["Thực thi thuật toán chính"]
    Process --> CheckResult{"Kiểm tra điều kiện kết quả"}
    CheckResult -- "Thỏa mãn" --> PrintOutput["In kết quả đầu ra đạt chuẩn"]
    CheckResult -- "Không thỏa mãn" --> HandleAlt["Xử lý trường hợp biên hoặc xuất thông báo"]
    PrintOutput --> End["Kết thúc"]
    HandleAlt --> End
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(log(min(a,b)))`
- **Độ phức tạp không gian (Space Complexity)**: `O(1)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
1 2
1 3
```

### Output mẫu:
```text
5/6
```

### Giải thích:
1/2 + 1/3 = 5/6.

---

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/14_Lap_Trinh_Huong_Doi_Tuong_OOP/BT_TDG-conghaips"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "BT_TDG-conghaips.cpp" -o "BT_TDG-conghaips"

# Chạy chương trình
./"BT_TDG-conghaips"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

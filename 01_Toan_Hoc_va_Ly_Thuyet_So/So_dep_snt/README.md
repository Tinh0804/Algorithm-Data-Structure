# Kiểm Tra Số Đẹp Bội Lũy Thừa Bậc 3

## 1. Thông tin tệp mã nguồn
- [`So_dep_snt.c++`](./So_dep_snt.c++)
- **Thư mục chuyên đề**: `DSA/01_Toan_Hoc_va_Ly_Thuyet_So/So_dep_snt/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Số đẹp nếu chia hết cho SNT p thì cũng chia hết cho p^3.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Phân tích thừa số nguyên tố và kiểm tra số mũ.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Phân tích thừa số nguyên tố và kiểm tra số mũ.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Kiểm Tra Số Đẹp Bội Lũy Thừa Bậc 3"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
    ReadInput --> Process["Thực thi thuật toán chính"]
    Process --> CheckResult{"Kiểm tra điều kiện kết quả"}
    CheckResult -- "Thỏa mãn" --> PrintOutput["In kết quả đầu ra đạt chuẩn"]
    CheckResult -- "Không thỏa mãn" --> HandleAlt["Xử lý trường hợp biên hoặc xuất thông báo"]
    PrintOutput --> End["Kết thúc"]
    HandleAlt --> End
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(sqrt(N))`
- **Độ phức tạp không gian (Space Complexity)**: `O(1)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
27
```

### Output mẫu:
```text
Yes
```

### Giải thích:
27 chia hết cho 3 và 3^3 = 27.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/01_Toan_Hoc_va_Ly_Thuyet_So/So_dep_snt"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "So_dep_snt.c++" -o "So_dep_snt"

# Chạy chương trình
./"So_dep_snt"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

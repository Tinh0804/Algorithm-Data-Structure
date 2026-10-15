# Đếm Số Dãy Con Có Tổng Nhỏ Hơn K

## 1. Thông tin tệp mã nguồn
- [`demsodayconcotongnhohonk.cpp`](./demsodayconcotongnhohonk.cpp)
- **Thư mục chuyên đề**: `DSA/02_Mang_va_Mang_Cong_Don/demsodayconcotongnhohonk/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Đếm số đoạn con liên tiếp có tổng giá trị nhỏ hơn K.

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
    Start["Bắt đầu: Đếm Số Dãy Con Có Tổng Nhỏ Hơn K"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
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
4 5
1 2 1 1
```

### Output mẫu:
```text
-34
```

### Giải thích:
Các dãy con thỏa mãn.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/02_Mang_va_Mang_Cong_Don/demsodayconcotongnhohonk"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "demsodayconcotongnhohonk.cpp" -o "demsodayconcotongnhohonk"

# Chạy chương trình
./"demsodayconcotongnhohonk"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

# Kiểm Tra Số Nguyên Tố

## 1. Thông tin tệp mã nguồn
- [`so nguyen to.cpp`](./so nguyen to.cpp)
- **Thư mục chuyên đề**: `DSA/01_Toan_Hoc_va_Ly_Thuyet_So/so nguyen to/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Xác định một số nguyên N có phải số nguyên tố hay không.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Kiểm tra ước từ 2 đến sqrt(N).

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Kiểm tra ước từ 2 đến sqrt(N).
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Nhập số nguyên N"] --> CheckBase{"N < 2?"}
    CheckBase -- "Đúng" --> NotPrime["N không phải số nguyên tố (Return false)"]
    CheckBase -- "Sai" --> LoopCheck["Duyệt biến i từ 2 đến sqrt(N)"]
    LoopCheck --> CheckMod{"N % i == 0?"}
    CheckMod -- "Đúng (Có ước số)" --> NotPrime
    CheckMod -- "Sai" --> NextI["Tăng i lên 1"]
    NextI --> LoopCheck
    LoopCheck -- "Duyệt hết không có ước" --> IsPrime["N là số nguyên tố (Return true)"]
    IsPrime --> End["Kết thúc"]
    NotPrime --> End
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(sqrt(N))`
- **Độ phức tạp không gian (Space Complexity)**: `O(1)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
17
```

### Output mẫu:
```text
17 la so nguyen to
```

### Giải thích:
17 chỉ chia hết cho 1 và 17.

---

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/01_Toan_Hoc_va_Ly_Thuyet_So/so nguyen to"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "so nguyen to.cpp" -o "so nguyen to"

# Chạy chương trình
./"so nguyen to"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

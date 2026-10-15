# Sàng Số Nguyên Tố (C++)

## 1. Thông tin tệp mã nguồn
- [`san_snt.c++`](./san_snt.c++)
- **Thư mục chuyên đề**: `DSA/01_Toan_Hoc_va_Ly_Thuyet_So/san_snt/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Thuật toán sàng Eratosthenes lọc số nguyên tố.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Đánh dấu hợp số bằng mảng boolean.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Đánh dấu hợp số bằng mảng boolean.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Nhập giới hạn N"] --> Init["Khởi tạo mảng snt[0..N] = true; Đặt snt[0] = snt[1] = false"]
    Init --> LoopI["Vòng lặp i chạy từ 2 đến sqrt(N)"]
    LoopI --> CheckPrime{"snt[i] == true?"}
    CheckPrime -- "Đúng (i là SNT)" --> MarkMultiples["Vòng lặp j chạy từ i*i đến N với bước nhảy i"]
    MarkMultiples --> SetFalse["Gán snt[j] = false (Đánh dấu hợp số)"]
    SetFalse --> MarkMultiples
    CheckPrime -- "Sai" --> LoopI
    MarkMultiples -- "Hoàn thành duyệt j" --> LoopI
    LoopI -- "Hoàn thành duyệt i" --> Output["Duyệt từ 2 đến N: in các chỉ số có snt[k] == true"]
    Output --> End["Kết thúc"]
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(N log(log N))`
- **Độ phức tạp không gian (Space Complexity)**: `O(N)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
15
```

### Output mẫu:
```text
Mời bạn nhập n:2 3 5 7 11 13
```

### Giải thích:
SNT nhỏ hơn hoặc bằng 15.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/01_Toan_Hoc_va_Ly_Thuyet_So/san_snt"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "san_snt.c++" -o "san_snt"

# Chạy chương trình
./"san_snt"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

# Lũy Thừa Nhị Phân (Binary Exponentiation)

## 1. Thông tin tệp mã nguồn
- [`Luy_thua_nhi_phan.cpp`](./Luy_thua_nhi_phan.cpp)
- **Thư mục chuyên đề**: `DSA/01_Toan_Hoc_va_Ly_Thuyet_So/Luy_thua_nhi_phan/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Tính a^b trong O(log b) bằng chia để trị bitwise.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Nhân dồn cơ số a khi bit mũ lẻ, bình phương cơ số a và dịch bit b.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Nhân dồn cơ số a khi bit mũ lẻ, bình phương cơ số a và dịch bit b.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Nhập cơ số a và số mũ b"] --> Init["Khởi tạo kết quả res = 1"]
    Init --> CheckB{"b > 0?"}
    CheckB -- "Không" --> Output["Trả về kết quả res"]
    Output --> End["Kết thúc"]
    CheckB -- "Có" --> CheckOdd{"b % 2 == 1 (Bit cuối là 1)?"}
    CheckOdd -- "Đúng" --> Mult["res = res * a"]
    CheckOdd -- "Sai" --> Square["a = a * a (Bình phương cơ số)"]
    Mult --> Square
    Square --> Shift["b = b / 2 (Dịch phải số mũ)"]
    Shift --> CheckB
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(log b)`
- **Độ phức tạp không gian (Space Complexity)**: `O(1)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
Cach 1:Vong lap for
Cach 2:Vong lap while
Cach 3:De Quy
```

### Output mẫu:
```text
1
1
1
```

### Giải thích:
2^10 = 1024

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/01_Toan_Hoc_va_Ly_Thuyet_So/Luy_thua_nhi_phan"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Luy_thua_nhi_phan.cpp" -o "Luy_thua_nhi_phan"

# Chạy chương trình
./"Luy_thua_nhi_phan"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

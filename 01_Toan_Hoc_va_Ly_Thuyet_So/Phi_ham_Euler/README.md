# Hàm Phi Euler (Euler's Totient Function)

## 1. Thông tin tệp mã nguồn
- [`Phi_ham_Euler.cpp`](./Phi_ham_Euler.cpp)
- **Thư mục chuyên đề**: `DSA/01_Toan_Hoc_va_Ly_Thuyet_So/Phi_ham_Euler/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Đếm số lượng số nguyên tố cùng nhau với n không vượt quá n.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Công thức tích Euler phi(n) = n * prod(1 - 1/p).

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Công thức tích Euler phi(n) = n * prod(1 - 1/p).
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Nhập số nguyên n"] --> Init["Khởi tạo res = n"]
    Init --> LoopP["Duyệt p từ 2 đến sqrt(n)"]
    LoopP --> CheckDiv{"n % p == 0?"}
    CheckDiv -- "Đúng (p là thừa số nguyên tố)" --> UpdateRes["res = res - res / p"]
    UpdateRes --> DivideOut["Chia n cho p liên tục cho tới khi không chia hết"]
    DivideOut --> LoopP
    CheckDiv -- "Sai" --> LoopP
    LoopP -- "Duyệt hết vòng lặp" --> CheckRemaining{"n > 1?"}
    CheckRemaining -- "Đúng (Thừa số nguyên tố cuối)" --> FinalRes["res = res - res / n"]
    CheckRemaining -- "Sai" --> Output["Trả về kết quả res"]
    FinalRes --> Output
    Output --> End["Kết thúc"]
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(sqrt(n))`
- **Độ phức tạp không gian (Space Complexity)**: `O(1)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
int ucln(int a,int b)
return a;
```

### Output mẫu:
```text
0
```

### Giải thích:
Các số nguyên tố cùng nhau với 10 là {1, 3, 7, 9}.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/01_Toan_Hoc_va_Ly_Thuyet_So/Phi_ham_Euler"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Phi_ham_Euler.cpp" -o "Phi_ham_Euler"

# Chạy chương trình
./"Phi_ham_Euler"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

# Kỹ Thuật Cửa Sổ Trượt (Sliding Window)

## 1. Thông tin tệp mã nguồn
- [`Cua_so_truot.cpp`](./Cua_so_truot.cpp)
- **Thư mục chuyên đề**: `DSA/03_Hai_Con_Tro_va_Cua_So_Truot/Cua_so_truot/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Tìm dãy con liên tiếp độ dài K có tổng lớn nhất.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Dịch cửa sổ K phần tử: trừ phần tử ra, cộng phần tử vào.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Dịch cửa sổ K phần tử: trừ phần tử ra, cộng phần tử vào.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Nhập mảng A và kích thước cửa sổ K"] --> FirstWin["Tính tổng K phần tử đầu tiên: sum = A[0] + ... + A[K-1]"]
    FirstWin --> InitMax["Gán max_sum = sum"]
    InitMax --> LoopWin["Duyệt biến i từ K đến N-1"]
    LoopWin --> Slide["Trừ phần tử ra khỏi cửa sổ A[i-K], cộng phần tử mới A[i]"]
    Slide --> UpdateMax["Cập nhật max_sum = max(max_sum, sum)"]
    UpdateMax --> CheckLoop{"i < N-1?"}
    CheckLoop -- "Đúng" --> LoopWin
    CheckLoop -- "Sai" --> Output["In kết quả max_sum"]
    Output --> End["Kết thúc"]
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(N)`
- **Độ phức tạp không gian (Space Complexity)**: `O(1)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
6 3
1 3 6 1 8 3
```

### Output mẫu:
```text
6
6 
1837438722
1 1837438720 1 
1837438722
1 1837438720 1 
1837438722
1 1837438720 1 
1837438722
1 1837438720 1 
1837438722
1 1837438720 1
```

### Giải thích:
Cửa sổ [6, 1, 8] có tổng 15 lớn nhất.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/03_Hai_Con_Tro_va_Cua_So_Truot/Cua_so_truot"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Cua_so_truot.cpp" -o "Cua_so_truot"

# Chạy chương trình
./"Cua_so_truot"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

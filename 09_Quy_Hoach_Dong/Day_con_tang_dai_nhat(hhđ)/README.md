# Day Con Tang Dai Nhat(Hhđ)

## 1. Thông tin tệp mã nguồn
- [`Day_con_tang_dai_nhat(hhđ).c++`](./Day_con_tang_dai_nhat(hhđ).c++)
- **Thư mục chuyên đề**: `DSA/09_Quy_Hoach_Dong/Day_con_tang_dai_nhat(hhđ)/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Chương trình giải quyết bài toán Day Con Tang Dai Nhat(Hhđ) bằng C++ tối ưu.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Áp dụng cấu trúc dữ liệu và giải thuật chuyên sâu phù hợp với đặc tả bài toán.

### Các bước thực hiện chi tiết:
1. Đọc dữ liệu đầu vào.
2. Xử lý dữ liệu bằng giải thuật chuyên đề.
3. In kết quả đạt chuẩn.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Nhập mảng A gồm N phần tử"] --> InitL["Khởi tạo mảng L[0..N-1] = 1"]
    InitL --> LoopI["Duyệt biến i từ 0 đến N-1"]
    LoopI --> LoopJ["Duyệt biến j từ 0 đến i-1"]
    LoopJ --> CheckOrder{"A[i] > A[j]?"}
    CheckOrder -- "Đúng" --> UpdateL["L[i] = max(L[i], L[j] + 1)"]
    CheckOrder -- "Sai" --> LoopJ
    UpdateL --> LoopJ
    LoopJ -- "Hết j" --> LoopI
    LoopI -- "Hết i" --> MaxL["Tìm giá trị lớn nhất trong mảng L"]
    MaxL --> End["Kết thúc: Trả về độ dài dãy con tăng dài nhất"]
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(N)`
- **Độ phức tạp không gian (Space Complexity)**: `O(1)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
14
128 104 53 876 660 961 754 775 290 231 224 915 392 994
```

### Output mẫu:
```text
Nhập số lượng mảng:6
```

### Giải thích:
Thuật toán cho kết quả chính xác theo yêu cầu Day Con Tang Dai Nhat(Hhđ).

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/09_Quy_Hoach_Dong/Day_con_tang_dai_nhat(hhđ)"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Day_con_tang_dai_nhat(hhđ).c++" -o "Day_con_tang_dai_nhat(hhđ)"

# Chạy chương trình
./"Day_con_tang_dai_nhat(hhđ)"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

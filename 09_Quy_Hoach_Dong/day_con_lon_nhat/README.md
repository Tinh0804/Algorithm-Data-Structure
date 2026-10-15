# Day Con Lon Nhat

## 1. Thông tin tệp mã nguồn
- [`day_con_lon_nhat.cpp`](./day_con_lon_nhat.cpp)
- **Thư mục chuyên đề**: `DSA/09_Quy_Hoach_Dong/day_con_lon_nhat/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Chương trình giải quyết bài toán Day Con Lon Nhat bằng C++ tối ưu.

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
    Start["Bắt đầu: Nhập mảng số nguyên A"] --> InitK["Khởi tạo sum = 0, max_ans = A[0]"]
    InitK --> LoopK["Duyệt qua từng phần tử x trong mảng"]
    LoopK --> Add["sum = sum + x"]
    Add --> UpdateAns["max_ans = max(max_ans, sum)"]
    UpdateAns --> CheckNeg{"sum < 0?"}
    CheckNeg -- "Đúng (Tổng âm làm giảm các đoạn sau)" --> ResetSum["Đặt lại sum = 0"]
    CheckNeg -- "Sai" --> CheckEnd{"Đã duyệt hết mảng?"}
    ResetSum --> CheckEnd
    CheckEnd -- "Chưa" --> LoopK
    CheckEnd -- "Hết mảng" --> Output["In max_ans là tổng dãy con liên tiếp lớn nhất"]
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
Dữ liệu mẫu
```

### Output mẫu:
```text
Kết quả tương ứng
```

### Giải thích:
Thuật toán cho kết quả chính xác theo yêu cầu Day Con Lon Nhat.

---

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/09_Quy_Hoach_Dong/day_con_lon_nhat"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "day_con_lon_nhat.cpp" -o "day_con_lon_nhat"

# Chạy chương trình
./"day_con_lon_nhat"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

# Quay Lui Sinh Xâu Nhị Phân Độ Dài N

## 1. Thông tin tệp mã nguồn
- [`SinhXauNhiPhan.cpp`](./SinhXauNhiPhan.cpp)
- **Thư mục chuyên đề**: `DSA/08_Quay_Lui_va_Nhanh_Can/SinhXauNhiPhan/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Liệt kê 2^N xâu nhị phân độ dài N.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Thử gán 0 và 1 tại từng vị trí.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Thử gán 0 và 1 tại từng vị trí.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Gọi hàm Try(i)"] --> LoopCandidate["Duyệt qua tất cả các giá trị khả dĩ cho vị trí i"]
    LoopCandidate --> CheckValid{"Giá trị j có thỏa mãn ràng buộc?"}
    CheckValid -- "Đúng" --> Assign["Gán x[i] = j và ghi nhận trạng thái (used[j] = true)"]
    Assign --> CheckBase{"Đã điền đủ cấu hình (i == N)?"}
    CheckBase -- "Đúng" --> PrintConfig["In hoặc lưu cấu hình tìm được"]
    CheckBase -- "Sai" --> Recurse["Gọi đệ quy Try(i + 1) để điền vị trí tiếp theo"]
    PrintConfig --> Backtrack["Quay lui: Hoàn tác trạng thái (used[j] = false)"]
    Recurse --> Backtrack
    Backtrack --> LoopCandidate
    CheckValid -- "Sai" --> LoopCandidate
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(2^N)`
- **Độ phức tạp không gian (Space Complexity)**: `O(N)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
3
```

### Output mẫu:
```text
000
001
010
011
100
101
110
111
```

### Giải thích:
Sinh xâu nhị phân.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/08_Quay_Lui_va_Nhanh_Can/SinhXauNhiPhan"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "SinhXauNhiPhan.cpp" -o "SinhXauNhiPhan"

# Chạy chương trình
./"SinhXauNhiPhan"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

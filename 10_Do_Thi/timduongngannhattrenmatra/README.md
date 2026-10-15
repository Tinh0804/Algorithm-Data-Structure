# Đường Đi Ngắn Nhất Trên Ma Trận (Grid BFS)

## 1. Thông tin tệp mã nguồn
- [`timduongngannhattrenmatra.cpp`](./timduongngannhattrenmatra.cpp)
- **Thư mục chuyên đề**: `DSA/10_Do_Thi/timduongngannhattrenmatra/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Tìm đường đi ngắn nhất giữa hai ô trên ma trận.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
BFS trên lưới 2D 4 hướng.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: BFS trên lưới 2D 4 hướng.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Đường Đi Ngắn Nhất Trên Ma Trận (Grid BFS)"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
    ReadInput --> Process["Thực thi thuật toán chính"]
    Process --> CheckResult{"Kiểm tra điều kiện kết quả"}
    CheckResult -- "Thỏa mãn" --> PrintOutput["In kết quả đầu ra đạt chuẩn"]
    CheckResult -- "Không thỏa mãn" --> HandleAlt["Xử lý trường hợp biên hoặc xuất thông báo"]
    PrintOutput --> End["Kết thúc"]
    HandleAlt --> End
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(N*M)`
- **Độ phức tạp không gian (Space Complexity)**: `O(N*M)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
3 3
1 1 0
0 1 1
0 0 1
0 0 2 2
```

### Output mẫu:
```text
4
```

### Giải thích:
BFS tìm đường đi ngắn nhất giữa 2 điểm trong ma trận có chướng ngại vật.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/10_Do_Thi/timduongngannhattrenmatra"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "timduongngannhattrenmatra.cpp" -o "timduongngannhattrenmatra"

# Chạy chương trình
./"timduongngannhattrenmatra"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

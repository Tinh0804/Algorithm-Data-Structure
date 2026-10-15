# Đếm Số Đỉnh Trụ Trên Đồ Thị

## 1. Thông tin tệp mã nguồn
- [`Dem_so_dinh_tru.cpp`](./Dem_so_dinh_tru.cpp)
- **Thư mục chuyên đề**: `DSA/10_Do_Thi/Dem_so_dinh_tru/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Đếm các đỉnh khớp bằng thuật toán Tarjan.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Kiểm tra điều kiện gốc cây DFS và low[v] >= disc[u].

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Kiểm tra điều kiện gốc cây DFS và low[v] >= disc[u].
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Đếm Số Đỉnh Trụ Trên Đồ Thị"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
    ReadInput --> Process["Thực thi thuật toán chính"]
    Process --> CheckResult{"Kiểm tra điều kiện kết quả"}
    CheckResult -- "Thỏa mãn" --> PrintOutput["In kết quả đầu ra đạt chuẩn"]
    CheckResult -- "Không thỏa mãn" --> HandleAlt["Xử lý trường hợp biên hoặc xuất thông báo"]
    PrintOutput --> End["Kết thúc"]
    HandleAlt --> End
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(V + E)`
- **Độ phức tạp không gian (Space Complexity)**: `O(V + E)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
5 5
1 2
2 3
3 1
3 4
4 5
```

### Output mẫu:
```text
3 4 
So dinh tru:2
```

### Giải thích:
Có 2 đỉnh trụ.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/10_Do_Thi/Dem_so_dinh_tru"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Dem_so_dinh_tru.cpp" -o "Dem_so_dinh_tru"

# Chạy chương trình
./"Dem_so_dinh_tru"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

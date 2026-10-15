# Danh Sách Cạnh Sang Ma Trận Kề

## 1. Thông tin tệp mã nguồn
- [`Danh_sach_canhsangMa_tran_ke.cpp`](./Danh_sach_canhsangMa_tran_ke.cpp)
- **Thư mục chuyên đề**: `DSA/10_Do_Thi/Danh_sach_canhsangMa_tran_ke/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Chuyển danh sách cạnh thành ma trận kề N x N.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Đánh dấu a[u][v] = a[v][u] = 1.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Đánh dấu a[u][v] = a[v][u] = 1.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Danh Sách Cạnh Sang Ma Trận Kề"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
    ReadInput --> Process["Thực thi thuật toán chính"]
    Process --> CheckResult{"Kiểm tra điều kiện kết quả"}
    CheckResult -- "Thỏa mãn" --> PrintOutput["In kết quả đầu ra đạt chuẩn"]
    CheckResult -- "Không thỏa mãn" --> HandleAlt["Xử lý trường hợp biên hoặc xuất thông báo"]
    PrintOutput --> End["Kết thúc"]
    HandleAlt --> End
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(V^2 + E)`
- **Độ phức tạp không gian (Space Complexity)**: `O(V^2)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
5 9
1 2
1 3
1 4     0 1 1 1 0
2 3     1 0 1 1 1
2 4   =>1 1 0 1 1
2 5     1 1 1 0 1
3 4     0 1 1 1 0
3 5
4 5
Ma trận kề
Danh sách Cạnh
Danh sách Kề:vector<int> adj[1001];
```

### Output mẫu:
```text
1 1 1 1 0 
1 0 0 0 0 
1 0 0 0 0 
1 0 0 0 0 
0 0 0 0 0
```

### Giải thích:
Ma trận kề.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/10_Do_Thi/Danh_sach_canhsangMa_tran_ke"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Danh_sach_canhsangMa_tran_ke.cpp" -o "Danh_sach_canhsangMa_tran_ke"

# Chạy chương trình
./"Danh_sach_canhsangMa_tran_ke"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

# Tìm Đường Đi Không Trọng Số (BFS)

## 1. Thông tin tệp mã nguồn
- [`Tim_duong_di_tren_do_thi_khong_co_trong_so(BFS).cpp`](./Tim_duong_di_tren_do_thi_khong_co_trong_so(BFS).cpp)
- **Thư mục chuyên đề**: `DSA/10_Do_Thi/Tim_duong_di_tren_do_thi_khong_co_trong_so(BFS)/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Tìm đường đi ít cạnh nhất từ S đến T bằng BFS.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
BFS kết hợp mảng truy vết parent.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: BFS kết hợp mảng truy vết parent.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Tìm Đường Đi Không Trọng Số (BFS)"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
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
- **Độ phức tạp không gian (Space Complexity)**: `O(V)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
4 3 1 4
1 2
2 3
3 4
```

### Output mẫu:
```text
Nhap dinh dau va cuoi:Co duong di!
3 2 1 4
```

### Giải thích:
Đường đi ngắn nhất không trọng số.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/10_Do_Thi/Tim_duong_di_tren_do_thi_khong_co_trong_so(BFS)"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Tim_duong_di_tren_do_thi_khong_co_trong_so(BFS).cpp" -o "Tim_duong_di_tren_do_thi_khong_co_trong_so(BFS)"

# Chạy chương trình
./"Tim_duong_di_tren_do_thi_khong_co_trong_so(BFS)"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

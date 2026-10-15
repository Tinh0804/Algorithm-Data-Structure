# Kiểm Tra Chu Trình Đồ Thị Vô Hướng (DFS)

## 1. Thông tin tệp mã nguồn
- [`Kiem_tra_chu_trinh_tren_do_thi_vo_huong(DFS).cpp`](./Kiem_tra_chu_trinh_tren_do_thi_vo_huong(DFS).cpp)
- **Thư mục chuyên đề**: `DSA/10_Do_Thi/Kiem_tra_chu_trinh_tren_do_thi_vo_huong(DFS)/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Phát hiện chu trình trên đồ thị vô hướng bằng DFS.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Đệ quy gặp đỉnh đã thăm khác đỉnh cha.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Đệ quy gặp đỉnh đã thăm khác đỉnh cha.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Kiểm Tra Chu Trình Đồ Thị Vô Hướng (DFS)"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
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
3 3
1 2
2 3
3 1
```

### Output mẫu:
```text
YES
```

### Giải thích:
Có chu trình.

---

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/10_Do_Thi/Kiem_tra_chu_trinh_tren_do_thi_vo_huong(DFS)"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Kiem_tra_chu_trinh_tren_do_thi_vo_huong(DFS).cpp" -o "Kiem_tra_chu_trinh_tren_do_thi_vo_huong(DFS)"

# Chạy chương trình
./"Kiem_tra_chu_trinh_tren_do_thi_vo_huong(DFS)"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

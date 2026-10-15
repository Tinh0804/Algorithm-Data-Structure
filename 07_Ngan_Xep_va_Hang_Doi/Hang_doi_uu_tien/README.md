# Hàng Đợi Ưu Tiên (std::priority_queue)

## 1. Thông tin tệp mã nguồn
- [`Hang_doi_uu_tien.cpp`](./Hang_doi_uu_tien.cpp)
- **Thư mục chuyên đề**: `DSA/07_Ngan_Xep_va_Hang_Doi/Hang_doi_uu_tien/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Minh họa cấu trúc Max-Heap và Min-Heap trong C++.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Tự động duy trì phần tử lớn nhất/nhỏ nhất ở đỉnh.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Tự động duy trì phần tử lớn nhất/nhỏ nhất ở đỉnh.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Khởi tạo Hàng đợi Queue (FIFO)"] --> InitQ["Đẩy phần tử hạt nhân đầu tiên vào Queue"]
    InitQ --> LoopQ{"Queue còn phần tử?"}
    LoopQ -- "Không" --> End["Kết thúc"]
    LoopQ -- "Có" --> PopQ["Lấy phần tử u ở đầu Queue ra xử lý"]
    PopQ --> CheckTarget{"u thỏa mãn điều kiện bài toán?"}
    CheckTarget -- "Đúng" --> Found["Xuất kết quả u và dừng thuật toán"]
    Found --> End
    CheckTarget -- "Sai" --> GenNext["Sinh các trạng thái kế tiếp từ u và đẩy vào Queue"]
    GenNext --> LoopQ
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(log N) mỗi thao tác`
- **Độ phức tạp không gian (Space Complexity)**: `O(N)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
Không yêu cầu tham số đầu vào (dữ liệu được khởi tạo trực tiếp trong mã nguồn)
```

### Output mẫu:
```text
5
10
9
```

### Giải thích:
Chương trình thực thi và xuất kết quả trực tiếp từ dữ liệu mẫu trong mã nguồn.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/07_Ngan_Xep_va_Hang_Doi/Hang_doi_uu_tien"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Hang_doi_uu_tien.cpp" -o "Hang_doi_uu_tien"

# Chạy chương trình
./"Hang_doi_uu_tien"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

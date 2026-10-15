# Hàng Đợi Cơ Bản (std::queue FIFO)

## 1. Thông tin tệp mã nguồn
- [`hang_doi.cpp`](./hang_doi.cpp)
- **Thư mục chuyên đề**: `DSA/07_Ngan_Xep_va_Hang_Doi/hang_doi/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Minh họa cơ chế vào trước ra trước (FIFO) của Queue.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Các hàm push, pop, front, empty.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Các hàm push, pop, front, empty.
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
- **Độ phức tạp thời gian (Time Complexity)**: `O(1) mỗi thao tác`
- **Độ phức tạp không gian (Space Complexity)**: `O(N)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
Không yêu cầu tham số đầu vào (dữ liệu được khởi tạo trực tiếp trong mã nguồn)
```

### Output mẫu:
```text
1
2
3
1
```

### Giải thích:
Chương trình thực thi và xuất kết quả trực tiếp từ dữ liệu mẫu trong mã nguồn.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/07_Ngan_Xep_va_Hang_Doi/hang_doi"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "hang_doi.cpp" -o "hang_doi"

# Chạy chương trình
./"hang_doi"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

# Xóa Node Trên Cây Nhị Phân Tìm Kiếm (BST)

## 1. Thông tin tệp mã nguồn
- [`Xoanode.cpp`](./Xoanode.cpp)
- **Thư mục chuyên đề**: `DSA/11_Cay_va_Cau_Truc_Nang_Cao/Xoanode/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Xóa một khóa key khỏi cây BST bảo toàn tính chất cây.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Xét 3 trường hợp: node lá, node có 1 con, node có 2 con (thay bằng min cây con phải).

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Xét 3 trường hợp: node lá, node có 1 con, node có 2 con (thay bằng min cây con phải).
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Xóa Node Trên Cây Nhị Phân Tìm Kiếm (BST)"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
    ReadInput --> Process["Thực thi thuật toán chính"]
    Process --> CheckResult{"Kiểm tra điều kiện kết quả"}
    CheckResult -- "Thỏa mãn" --> PrintOutput["In kết quả đầu ra đạt chuẩn"]
    CheckResult -- "Không thỏa mãn" --> HandleAlt["Xử lý trường hợp biên hoặc xuất thông báo"]
    PrintOutput --> End["Kết thúc"]
    HandleAlt --> End
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(h)`
- **Độ phức tạp không gian (Space Complexity)**: `O(h)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
Không yêu cầu tham số đầu vào (dữ liệu được khởi tạo trực tiếp trong mã nguồn)
```

### Output mẫu:
```text
-5 3 3 6 7 8 13 14 20 
-5 6 7 8 13 14 20
```

### Giải thích:
Chương trình thực thi và xuất kết quả trực tiếp từ dữ liệu mẫu trong mã nguồn.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/11_Cay_va_Cau_Truc_Nang_Cao/Xoanode"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Xoanode.cpp" -o "Xoanode"

# Chạy chương trình
./"Xoanode"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

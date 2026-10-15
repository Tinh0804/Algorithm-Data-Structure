# Tìm Đường Đi Bằng DFS

## 1. Thông tin tệp mã nguồn
- [`Duong_di_thuat_toan_tim_kiem_theo_chieu_xau.cpp`](./Duong_di_thuat_toan_tim_kiem_theo_chieu_xau.cpp)
- **Thư mục chuyên đề**: `DSA/10_Do_Thi/Duong_di_thuat_toan_tim_kiem_theo_chieu_xau/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Tìm đường đi từ S đến T trên đồ thị bằng DFS.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Mảng parent truy vết ngược đường đi.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Mảng parent truy vết ngược đường đi.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Nhập chuỗi ký tự"] --> Tokenize["Sử dụng stringstream tách câu thành danh sách các từ"]
    Tokenize --> LoopWord["Duyệt qua từng từ trong danh sách"]
    LoopWord --> Transform["Chuẩn hóa chữ hoa / chữ thường theo quy tắc"]
    Transform --> Append["Ghép nối vào kết quả chuẩn"]
    Append --> CheckWord{"Còn từ tiếp theo?"}
    CheckWord -- "Có" --> LoopWord
    CheckWord -- "Hết" --> Format["Định dạng chuẩn đầu ra (thêm dấu phẩy, đuôi email)"]
    Format --> Output["In chuỗi sau khi chuẩn hóa"]
    Output --> End["Kết thúc"]
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(V + E)`
- **Độ phức tạp không gian (Space Complexity)**: `O(V)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
Danh dau u da duoc tham
neu dinh it chua duoc tham
```

### Output mẫu:
```text
8
```

### Giải thích:
Đường đi tìm thấy bằng DFS.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/10_Do_Thi/Duong_di_thuat_toan_tim_kiem_theo_chieu_xau"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Duong_di_thuat_toan_tim_kiem_theo_chieu_xau.cpp" -o "Duong_di_thuat_toan_tim_kiem_theo_chieu_xau"

# Chạy chương trình
./"Duong_di_thuat_toan_tim_kiem_theo_chieu_xau"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

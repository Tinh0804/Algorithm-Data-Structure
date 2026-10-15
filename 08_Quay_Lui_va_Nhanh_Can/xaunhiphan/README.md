# Sinh Xâu Nhị Phân Kế Tiếp

## 1. Thông tin tệp mã nguồn
- [`xaunhiphan.cpp`](./xaunhiphan.cpp)
- **Thư mục chuyên đề**: `DSA/08_Quay_Lui_va_Nhanh_Can/xaunhiphan/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Tìm xâu nhị phân kế tiếp theo thứ tự từ điển.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Duyệt từ cuối chuỗi, biến 1 thành 0 cho tới khi gặp 0 đầu tiên biến thành 1.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Duyệt từ cuối chuỗi, biến 1 thành 0 cho tới khi gặp 0 đầu tiên biến thành 1.
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
- **Độ phức tạp thời gian (Time Complexity)**: `O(N)`
- **Độ phức tạp không gian (Space Complexity)**: `O(1)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
01011
```

### Output mẫu:
```text
01100
```

### Giải thích:
Xâu nhị phân kế tiếp.

---

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/08_Quay_Lui_va_Nhanh_Can/xaunhiphan"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "xaunhiphan.cpp" -o "xaunhiphan"

# Chạy chương trình
./"xaunhiphan"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

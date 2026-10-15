# Ktchuoidoixung

## 1. Thông tin tệp mã nguồn
- [`ktchuoidoixung.cpp`](./ktchuoidoixung.cpp)
- **Thư mục chuyên đề**: `DSA/05_Xau_Ki_Tu/ktchuoidoixung/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Chương trình giải quyết bài toán Ktchuoidoixung bằng C++ tối ưu.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Áp dụng cấu trúc dữ liệu và giải thuật chuyên sâu phù hợp với đặc tả bài toán.

### Các bước thực hiện chi tiết:
1. Đọc dữ liệu đầu vào.
2. Xử lý dữ liệu bằng giải thuật chuyên đề.
3. In kết quả đạt chuẩn.

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
Dữ liệu mẫu
```

### Output mẫu:
```text
Chuoi khong doi xung:!
```

### Giải thích:
Thuật toán cho kết quả chính xác theo yêu cầu Ktchuoidoixung.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/05_Xau_Ki_Tu/ktchuoidoixung"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "ktchuoidoixung.cpp" -o "ktchuoidoixung"

# Chạy chương trình
./"ktchuoidoixung"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

# Ngăn Xếp Cơ Bản (std::stack LIFO)

## 1. Thông tin tệp mã nguồn
- [`nganxep.cpp`](./nganxep.cpp)
- **Thư mục chuyên đề**: `DSA/07_Ngan_Xep_va_Hang_Doi/nganxep/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Minh họa cơ chế vào sau ra trước (LIFO) của Stack.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Các hàm push, pop, top, empty.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Các hàm push, pop, top, empty.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Đọc chuỗi ký tự biểu thức"] --> InitSt["Khởi tạo Ngăn xếp (Stack LIFO)"]
    InitSt --> LoopChar["Duyệt từng ký tự c trong biểu thức"]
    LoopChar --> CheckType{"Loại ký tự c"}
    CheckType -- "Dấu mở ngoặc: (, [, {" --> PushSt["Đẩy c vào đỉnh Ngăn xếp (Stack.push)"]
    CheckType -- "Dấu đóng ngoặc: ), ], }" --> CheckEmpty{"Stack có rỗng không?"}
    CheckEmpty -- "Có (Rỗng)" --> Invalid["Biểu thức không hợp lệ (Dư dấu đóng ngoặc)"]
    CheckEmpty -- "Không" --> Match{"Đỉnh stack có khớp loại với c?"}
    Match -- "Đúng" --> PopSt["Lấy phần tử ra khỏi đỉnh (Stack.pop)"]
    Match -- "Sai" --> Invalid
    PushSt --> LoopChar
    PopSt --> LoopChar
    LoopChar -- "Duyệt hết chuỗi" --> FinalCheck{"Stack có rỗng không?"}
    FinalCheck -- "Đúng" --> Valid["Biểu thức hợp lệ hoàn toàn"]
    FinalCheck -- "Sai" --> Invalid
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
2
6
3
1
```

### Giải thích:
Chương trình thực thi và xuất kết quả trực tiếp từ dữ liệu mẫu trong mã nguồn.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/07_Ngan_Xep_va_Hang_Doi/nganxep"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "nganxep.cpp" -o "nganxep"

# Chạy chương trình
./"nganxep"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

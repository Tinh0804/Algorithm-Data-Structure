# Thuật Toán Sắp Xếp Chèn (Insertion Sort)

## 1. Thông tin tệp mã nguồn
- [`Insertion_Sort.cpp`](./Insertion_Sort.cpp)
- **Thư mục chuyên đề**: `DSA/04_Sap_Xep_va_Tim_Kiem/Insertion_Sort/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Chèn phần tử vào đoạn mảng con đã sắp xếp phía trước.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Dịch chuyển các phần tử lớn hơn key sang phải.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Dịch chuyển các phần tử lớn hơn key sang phải.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Nhập mảng A gồm N phần tử"] --> LoopOuter["Vòng lặp ngoài duyệt từng vị trí i"]
    LoopOuter --> LoopInner["Vòng lặp trong: so sánh các cặp phần tử hoặc tìm min"]
    LoopInner --> CheckCond{"Cần đổi chỗ hoặc dịch chuyển?"}
    CheckCond -- "Đúng" --> SwapShift["Hoán vị hoặc chèn phần tử vào đúng vị trí"]
    CheckCond -- "Sai" --> NextElement["Tiếp tục duyệt phần tử kế tiếp"]
    SwapShift --> PrintStep["In trạng thái mảng sau bước hiện tại"]
    NextElement --> PrintStep
    PrintStep --> CheckDone{"Đã duyệt hết toàn bộ mảng?"}
    CheckDone -- "Sai" --> LoopOuter
    CheckDone -- "Đúng" --> Sorted["Mảng đã được sắp xếp hoàn tất"]
    Sorted --> End["Kết thúc"]
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(N^2)`
- **Độ phức tạp không gian (Space Complexity)**: `O(1)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
Không yêu cầu tham số đầu vào (dữ liệu được khởi tạo trực tiếp trong mã nguồn)
```

### Output mẫu:
```text
1 1 2 3 4 6 8 10
```

### Giải thích:
Chương trình thực thi và xuất kết quả trực tiếp từ dữ liệu mẫu trong mã nguồn.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/04_Sap_Xep_va_Tim_Kiem/Insertion_Sort"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Insertion_Sort.cpp" -o "Insertion_Sort"

# Chạy chương trình
./"Insertion_Sort"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

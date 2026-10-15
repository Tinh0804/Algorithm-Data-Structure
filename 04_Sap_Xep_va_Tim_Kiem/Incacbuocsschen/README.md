# In Các Bước Sắp Xếp Chèn

## 1. Thông tin tệp mã nguồn
- [`Incacbuocsschen.cpp`](./Incacbuocsschen.cpp)
- **Thư mục chuyên đề**: `DSA/04_Sap_Xep_va_Tim_Kiem/Incacbuocsschen/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Mô phỏng sắp xếp chèn và in mảng sau từng bước.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Chèn phần tử vào đoạn con đã có thứ tự.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Chèn phần tử vào đoạn con đã có thứ tự.
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
4
5 7 3 2
```

### Output mẫu:
```text
Nhap so luong:
Buoc 0:5 
Buoc 1:5 7 
Buoc 2:3 5 7 
Buoc 3:2 3 5 7
```

### Giải thích:
Mô phỏng sắp xếp chèn.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/04_Sap_Xep_va_Tim_Kiem/Incacbuocsschen"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Incacbuocsschen.cpp" -o "Incacbuocsschen"

# Chạy chương trình
./"Incacbuocsschen"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

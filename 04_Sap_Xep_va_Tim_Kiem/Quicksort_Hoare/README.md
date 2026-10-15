# Quick Sort Phân Hoạch Hoare

## 1. Thông tin tệp mã nguồn
- [`Quicksort_Hoare.cpp`](./Quicksort_Hoare.cpp)
- **Thư mục chuyên đề**: `DSA/04_Sap_Xep_va_Tim_Kiem/Quicksort_Hoare/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Quick Sort sử dụng hai con trỏ phân hoạch Hoare chạy ngược chiều.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Chọn pivot ở giữa, 2 con trỏ co vào hoán vị cặp nghịch thế.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Chọn pivot ở giữa, 2 con trỏ co vào hoán vị cặp nghịch thế.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Gọi QuickSort(l, r)"] --> CheckBase{"l >= r?"}
    CheckBase -- "Đúng" --> Return["Mảng con có <= 1 phần tử, return"]
    CheckBase -- "Sai" --> ChoosePivot["Chọn phần tử chốt Pivot"]
    ChoosePivot --> Partition["Thực hiện phân hoạch mảng (Hoare hoặc Lomuto)"]
    Partition --> PivotPlaced["Đưa các phần tử <= Pivot sang trái, >= Pivot sang phải"]
    PivotPlaced --> RecurseLeft["Đệ quy QuickSort nửa bên trái"]
    RecurseLeft --> RecurseRight["Đệ quy QuickSort nửa bên phải"]
    RecurseRight --> Done["Hoàn thành sắp xếp"]
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(N log N)`
- **Độ phức tạp không gian (Space Complexity)**: `O(log N)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
6
9 2 5 1 7 4
```

### Output mẫu:
```text
4 2 5 1 7 9 
1 2 5 4 7 9 
1 2 4 5 7 9 
1 2 4 5 7 9
```

### Giải thích:
Phân hoạch Hoare hiệu quả.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/04_Sap_Xep_va_Tim_Kiem/Quicksort_Hoare"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Quicksort_Hoare.cpp" -o "Quicksort_Hoare"

# Chạy chương trình
./"Quicksort_Hoare"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

# Thuật Toán Sắp Xếp Trộn (Merge Sort)

## 1. Thông tin tệp mã nguồn
- [`Mergasort.cpp`](./Mergasort.cpp)
- **Thư mục chuyên đề**: `DSA/04_Sap_Xep_va_Tim_Kiem/Mergasort/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Sắp xếp chia để trị O(N log N).

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Chia đôi mảng, sắp xếp đệ quy và trộn hai nửa có thứ tự.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Chia đôi mảng, sắp xếp đệ quy và trộn hai nửa có thứ tự.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Gọi MergeSort(l, r)"] --> CheckBase{"l >= r?"}
    CheckBase -- "Đúng" --> Return["Đoạn có độ dài <= 1, return"]
    CheckBase -- "Sai" --> Split["Chia đôi đoạn tại mid = (l + r) / 2"]
    Split --> SortLeft["Đệ quy MergeSort(l, mid)"]
    SortLeft --> SortRight["Đệ quy MergeSort(mid + 1, r)"]
    SortRight --> Merge["Hợp nhất (Merge) 2 mảng con có thứ tự bằng 2 con trỏ"]
    Merge --> Overwrite["Ghi đè mảng đã trộn vào mảng gốc A[l..r]"]
    Overwrite --> Done["Hoàn thành sắp xếp"]
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(N log N)`
- **Độ phức tạp không gian (Space Complexity)**: `O(N)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
Không yêu cầu tham số đầu vào (dữ liệu được khởi tạo trực tiếp trong mã nguồn)
```

### Output mẫu:
```text
0 1 2 3 4 5 5 6 8 9
```

### Giải thích:
Chương trình thực thi và xuất kết quả trực tiếp từ dữ liệu mẫu trong mã nguồn.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/04_Sap_Xep_va_Tim_Kiem/Mergasort"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Mergasort.cpp" -o "Mergasort"

# Chạy chương trình
./"Mergasort"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

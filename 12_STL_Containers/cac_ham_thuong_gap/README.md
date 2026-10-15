# Các Hàm Thuật Toán STL (<algorithm>)

## 1. Thông tin tệp mã nguồn
- [`cac_ham_thuong_gap.cpp`](./cac_ham_thuong_gap.cpp)
- **Thư mục chuyên đề**: `DSA/12_STL_Containers/cac_ham_thuong_gap/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Thực hành min, max, min_element, max_element, accumulate, swap.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Các hàm giải thuật tiện ích tối ưu hóa code.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Các hàm giải thuật tiện ích tối ưu hóa code.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Các Hàm Thuật Toán STL (<algorithm>)"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
    ReadInput --> Process["Thực thi thuật toán chính"]
    Process --> CheckResult{"Kiểm tra điều kiện kết quả"}
    CheckResult -- "Thỏa mãn" --> PrintOutput["In kết quả đầu ra đạt chuẩn"]
    CheckResult -- "Không thỏa mãn" --> HandleAlt["Xử lý trường hợp biên hoặc xuất thông báo"]
    PrintOutput --> End["Kết thúc"]
    HandleAlt --> End
```

---

## 5. Đánh giá độ phức tạp
- **Độ phức tạp thời gian (Time Complexity)**: `O(N)`
- **Độ phức tạp không gian (Space Complexity)**: `O(1)`

---

## 6. Input / Output mẫu & Giải thích

### Input mẫu:
```text
Không yêu cầu tham số đầu vào (dữ liệu được khởi tạo trực tiếp trong mã nguồn)
```

### Output mẫu:
```text
20
2
1
7
18
1 2 3 5 7 
7 5 4 1 
b=6
c=5
0x16b04dc9c
```

### Giải thích:
Chương trình thực thi và xuất kết quả trực tiếp từ dữ liệu mẫu trong mã nguồn.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/12_STL_Containers/cac_ham_thuong_gap"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "cac_ham_thuong_gap.cpp" -o "cac_ham_thuong_gap"

# Chạy chương trình
./"cac_ham_thuong_gap"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

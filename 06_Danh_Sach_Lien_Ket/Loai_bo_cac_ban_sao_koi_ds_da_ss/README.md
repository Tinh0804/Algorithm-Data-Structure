# Xóa Node Trùng Lặp Trong DSLK Đã Sắp Xếp (LeetCode 83)

## 1. Thông tin tệp mã nguồn
- [`Loai_bo_cac_ban_sao_koi_ds_da_ss.cpp`](./Loai_bo_cac_ban_sao_koi_ds_da_ss.cpp)
- **Thư mục chuyên đề**: `DSA/06_Danh_Sach_Lien_Ket/Loai_bo_cac_ban_sao_koi_ds_da_ss/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Xóa tất cả các node có giá trị trùng lặp khỏi DSLK tăng dần.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Nếu curr->data == curr->next->data thì nối curr->next = curr->next->next.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Nếu curr->data == curr->next->data thì nối curr->next = curr->next->next.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu: Xóa Node Trùng Lặp Trong DSLK Đã Sắp Xếp (LeetCode 83)"] --> ReadInput["Đọc và khởi tạo dữ liệu đầu vào"]
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
1 -> 1 -> 2
```

### Output mẫu:
```text
0
```

### Giải thích:
Xóa node trùng.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/06_Danh_Sach_Lien_Ket/Loai_bo_cac_ban_sao_koi_ds_da_ss"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Loai_bo_cac_ban_sao_koi_ds_da_ss.cpp" -o "Loai_bo_cac_ban_sao_koi_ds_da_ss"

# Chạy chương trình
./"Loai_bo_cac_ban_sao_koi_ds_da_ss"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

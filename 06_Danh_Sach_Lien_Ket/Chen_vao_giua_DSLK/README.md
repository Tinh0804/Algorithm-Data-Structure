# Chèn Node Vào Vị Trí Bất Kỳ Trong DSLK

## 1. Thông tin tệp mã nguồn
- [`Chen_vao_giua_DSLK.cpp`](./Chen_vao_giua_DSLK.cpp)
- **Thư mục chuyên đề**: `DSA/06_Danh_Sach_Lien_Ket/Chen_vao_giua_DSLK/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Thêm một phần tử vào vị trí thứ K trong danh sách liên kết đơn.

---

## 3. Ý tưởng & Phương pháp giải thuật
### Phương án tiếp cận:
Duyệt tới vị trí K-1, nối con trỏ next của node mới vào K và cập nhật K-1.

### Các bước thực hiện chi tiết:
1. Khởi tạo dữ liệu và đọc đầu vào theo định dạng bài toán.
2. Thực hiện thuật toán cốt lõi: Duyệt tới vị trí K-1, nối con trỏ next của node mới vào K và cập nhật K-1.
3. Cập nhật trạng thái và tính toán kết quả.
4. Xuất kết quả đầu ra màn hình.

---

## 4. Sơ đồ thuật toán (Mermaid Workflow)
```mermaid
flowchart TD
    Start["Bắt đầu thao tác trên DSLK"] --> CheckOp{"Loại thao tác"}
    CheckOp -- "Thêm vào đầu" --> PushF["newNode->next = head; head = newNode"]
    CheckOp -- "Thêm vào cuối" --> PushB["Duyệt tới node cuối tail; tail->next = newNode"]
    CheckOp -- "Xóa node đầu" --> PopF["temp = head; head = head->next; delete temp"]
    CheckOp -- "Duyệt danh sách" --> Traverse["Con trỏ p = head; trong khi p != NULL: in p->data; p = p->next"]
    PushF --> End["Hoàn thành thao tác"]
    PushB --> End
    PopF --> End
    Traverse --> End
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
5 4 2 3 2 1
```

### Giải thích:
Chương trình thực thi và xuất kết quả trực tiếp từ dữ liệu mẫu trong mã nguồn.

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/06_Danh_Sach_Lien_Ket/Chen_vao_giua_DSLK"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Chen_vao_giua_DSLK.cpp" -o "Chen_vao_giua_DSLK"

# Chạy chương trình
./"Chen_vao_giua_DSLK"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

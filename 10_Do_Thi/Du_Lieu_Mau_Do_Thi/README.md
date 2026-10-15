# Dữ Liệu Kiểm Thử Mẫu Đồ Thị (Test Cases)

## 1. Danh sách tệp
- [`input.txt`](./input.txt): Dữ liệu mẫu đồ thị đầu vào.
- [`output.txt`](./output.txt): Kết quả chuẩn đầu ra tương ứng.

## 2. Mục đích sử dụng
Bộ dữ liệu test case mẫu chuẩn bị sẵn dùng để chạy kiểm thử (redirect input/output) cho các thuật toán đồ thị:
```bash
./"Thuat_toan" < input.txt > my_output.txt
diff -u my_output.txt output.txt
```

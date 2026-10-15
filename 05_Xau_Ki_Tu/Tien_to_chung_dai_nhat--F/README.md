# Tien To Chung Dai Nhat--F

## 1. Thông tin tệp mã nguồn
- [`Tien_to_chung_dai_nhat--F.cpp`](./Tien_to_chung_dai_nhat--F.cpp)
- **Thư mục chuyên đề**: `DSA/05_Xau_Ki_Tu/Tien_to_chung_dai_nhat--F/`
- **Ngôn ngữ**: C/C++ (Chuẩn C++11 trở lên)

## 2. Mục tiêu & Tóm tắt bài toán
Chương trình giải quyết bài toán Tien To Chung Dai Nhat--F bằng C++ tối ưu.

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
    Start["Bắt đầu: Nhập 2 xâu S1 (độ dài M) và S2 (độ dài N)"] --> InitDP["Khởi tạo bảng dp[M+1][N+1] = 0"]
    InitDP --> LoopI["Duyệt i từ 1 đến M"]
    LoopI --> LoopJ["Duyệt j từ 1 đến N"]
    LoopJ --> CheckChar{"S1[i-1] == S2[j-1]?"}
    CheckChar -- "Đúng" --> Match["dp[i][j] = dp[i-1][j-1] + 1"]
    CheckChar -- "Sai" --> NoMatch["dp[i][j] = max(dp[i-1][j], dp[i][j-1])"]
    Match --> LoopJ
    NoMatch --> LoopJ
    LoopJ -- "Hết j" --> LoopI
    LoopI -- "Hết i" --> Output["In dp[M][N] là độ dài xâu con chung dài nhất"]
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
3
flower flow flight
```

### Output mẫu:
```text
fl
```

### Giải thích:
Tiền tố chung dài nhất của các từ là "fl".

## 7. Hướng dẫn biên dịch & chạy thử
```bash
# Di chuyển vào thư mục bài toán
cd "DSA/05_Xau_Ki_Tu/Tien_to_chung_dai_nhat--F"

# Biên dịch chương trình C++
g++ -std=c++11 -O2 "Tien_to_chung_dai_nhat--F.cpp" -o "Tien_to_chung_dai_nhat--F"

# Chạy chương trình
./"Tien_to_chung_dai_nhat--F"
```

> [!NOTE]
> Toàn bộ mã nguồn C++ gốc được bảo toàn nguyên vẹn 100% không qua chỉnh sửa.

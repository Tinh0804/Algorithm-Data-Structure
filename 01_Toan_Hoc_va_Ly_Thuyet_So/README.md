# 01. Toán Học & Lý Thuyết Số (Number Theory & Math)

## 1. Giới thiệu chuyên đề
Các giải thuật lý thuyết số và toán học cơ bản: Số nguyên tố, Sàng Eratosthenes, Phân tích thừa số nguyên tố, Phi hàm Euler, Lũy thừa nhị phân, Giai thừa, Số hoàn hảo, Số thuận nghịch, Số đẹp, và các phép tính hình học/số học cơ bản.

---

## 2. Các kiến thức & Kỹ thuật trọng tâm
- Kiểm tra và sàng lọc số nguyên tố (Sieve of Eratosthenes)
- Phân tích thừa số nguyên tố & tìm số mũ lớn nhất
- Hàm phi Euler (Euler Totient Function)
- Lũy thừa nhị phân (Binary Exponentiation)
- Các dạng số đặc biệt: Số hoàn hảo, Số đối xứng, Số đẹp

---

## 3. Danh mục các bài toán trong chuyên đề
Tổng số bài toán / nhóm bài: **32**

| Bài toán / Thuật toán | Tệp mã nguồn | Tài liệu hướng dẫn | Độ phức tạp |
| :--- | :--- | :--- | :--- |
| [Chữ Số Cuối Cùng Của Số Nguyên Tố Lớn Nhất](./Chu_snt_cuoi_cung_max/) | [`Chu_snt_cuoi_cung_max.c++`](./Chu_snt_cuoi_cung_max/Chu_snt_cuoi_cung_max.c++) | [`README.md`](./Chu_snt_cuoi_cung_max/README.md) | `O(N sqrt(M))` |
| [Cộng Một Vào Mảng Chữ Số (Plus One)](./Cong_mot/) | [`Cong_mot.cpp`](./Cong_mot/Cong_mot.cpp) | [`README.md`](./Cong_mot/README.md) | `O(N)` |
| [Lũy Thừa Nhị Phân (Binary Exponentiation)](./Luy_thua_nhi_phan/) | [`Luy_thua_nhi_phan.cpp`](./Luy_thua_nhi_phan/Luy_thua_nhi_phan.cpp) | [`README.md`](./Luy_thua_nhi_phan/README.md) | `O(log b)` |
| [Hàm Phi Euler (Euler's Totient Function)](./Phi_ham_Euler/) | [`Phi_ham_Euler.cpp`](./Phi_ham_Euler/Phi_ham_Euler.cpp) | [`README.md`](./Phi_ham_Euler/README.md) | `O(sqrt(n))` |
| [Kiểm Tra Số Nguyên Tố Trong Đoạn](./Prime_2/) | [`Prime_2.cpp`](./Prime_2/Prime_2.cpp) | [`README.md`](./Prime_2/README.md) | `O((R-L+1) sqrt(R))` |
| [Sàng Số Nguyên Tố Eratosthenes](./San_snt/) | [`San_snt.cpp`](./San_snt/San_snt.cpp) | [`README.md`](./San_snt/README.md) | `O(N log(log N))` |
| [Tìm Số Đảo Ngược](./So_dao_nguoc/) | [`So_dao_nguoc.cpp`](./So_dao_nguoc/So_dao_nguoc.cpp) | [`README.md`](./So_dao_nguoc/README.md) | `O(log10 N)` |
| [Kiểm Tra Số Đẹp (Vị Trí Chẵn Lẻ)](./So_dep/) | [`So_dep.c++`](./So_dep/So_dep.c++) | [`README.md`](./So_dep/README.md) | `O(L)` |
| [Kiểm Tra Số Đẹp Bội Lũy Thừa Bậc 3](./So_dep_snt/) | [`So_dep_snt.c++`](./So_dep_snt/So_dep_snt.c++) | [`README.md`](./So_dep_snt/README.md) | `O(sqrt(N))` |
| [Tìm Phần Tử Độc Nhất (Single Number)](./So_don/) | [`So_don.cpp`](./So_don/So_don.cpp) | [`README.md`](./So_don/README.md) | `O(N)` |
| [Cộng Hai Chuỗi Nhị Phân (Add Binary)](./Them_nhi_phan/) | [`Them_nhi_phan.cpp`](./Them_nhi_phan/Them_nhi_phan.cpp) | [`README.md`](./Them_nhi_phan/README.md) | `O(max(L1, L2))` |
| [Thừa Số Nguyên Tố Có Số Mũ Lớn Nhất](./Thua_snt_so_mu_max/) | [`Thua_snt_so_mu_max.cpp`](./Thua_snt_so_mu_max/Thua_snt_so_mu_max.cpp) | [`README.md`](./Thua_snt_so_mu_max/README.md) | `O(sqrt(N))` |
| [Tiêu Đề Cột Excel (Excel Column Title)](./Tieu_de_cot_ban_tinh_excel/) | [`Tieu_de_cot_ban_tinh_excel.cpp`](./Tieu_de_cot_ban_tinh_excel/Tieu_de_cot_ban_tinh_excel.cpp) | [`README.md`](./Tieu_de_cot_ban_tinh_excel/README.md) | `O(log26 N)` |
| [Phần Tử Đa Số (Majority Element)](./Yeu_to_da_so/) | [`Yeu_to_da_so.cpp`](./Yeu_to_da_so/Yeu_to_da_so.cpp) | [`README.md`](./Yeu_to_da_so/README.md) | `O(N)` |
| [Liệt Kê Các Số Chia Hết Cho 3 Từ 10 Đến 50](./cac so chia het cho 3 tu 10-50/) | [`cac so chia het cho 3 tu 10-50.cpp`](./cac so chia het cho 3 tu 10-50/cac so chia het cho 3 tu 10-50.cpp) | [`README.md`](./cac so chia het cho 3 tu 10-50/README.md) | `O(1)` |
| [Tính Chu Vi và Diện Tích Hình Chữ Nhật](./cv and dt hinh chu nhat/) | [`cv and dt hinh chu nhat.cpp`](./cv and dt hinh chu nhat/cv and dt hinh chu nhat.cpp) | [`README.md`](./cv and dt hinh chu nhat/README.md) | `O(1)` |
| [Tính Chu Vi và Diện Tích Hình Tròn](./cv and dt hinh tron/) | [`cv and dt hinh tron.cpp`](./cv and dt hinh tron/cv and dt hinh tron.cpp) | [`README.md`](./cv and dt hinh tron/README.md) | `O(1)` |
| [Tính Giai Thừa N!](./giai thua/) | [`giai thua.cpp`](./giai thua/giai thua.cpp) | [`README.md`](./giai thua/README.md) | `O(N)` |
| [Tính Giai Thừa](./giaithua/) | [`giaithua.cpp`](./giaithua/giaithua.cpp) | [`README.md`](./giaithua/README.md) | `O(N)` |
| [Phân Tích Thừa Số Nguyên Tố](./phantichthuasongto/) | [`phantichthuasongto.cpp`](./phantichthuasongto/phantichthuasongto.cpp) | [`README.md`](./phantichthuasongto/README.md) | `O(sqrt(N))` |
| [Liệt Kê Ước Nguyên Tố](./phantichuocngto/) | [`phantichuocngto.cpp`](./phantichuocngto/phantichuocngto.cpp) | [`README.md`](./phantichuocngto/README.md) | `O(sqrt(N))` |
| [Sàng Số Nguyên Tố (C++)](./san_snt/) | [`san_snt.c++`](./san_snt/san_snt.c++) | [`README.md`](./san_snt/README.md) | `O(N log(log N))` |
| [Kiểm Tra Số Hoàn Hảo (Perfect Number)](./so hoan hao/) | [`so hoan hao.cpp`](./so hoan hao/so hoan hao.cpp) | [`README.md`](./so hoan hao/README.md) | `O(sqrt(N))` |
| [Kiểm Tra Số Nguyên Tố](./so nguyen to/) | [`so nguyen to.cpp`](./so nguyen to/so nguyen to.cpp) | [`README.md`](./so nguyen to/README.md) | `O(sqrt(N))` |
| [Kiểm Tra Số Đẹp (Thuận Nghịch Toàn Chẵn)](./so_dep/) | [`so_dep.cpp`](./so_dep/so_dep.cpp) | [`README.md`](./so_dep/README.md) | `O(log10 N)` |
| [Số Nghịch Đảo Chia Hết Cho K](./songhichdaochiahetchoK/) | [`songhichdaochiahetchoK.cpp`](./songhichdaochiahetchoK/songhichdaochiahetchoK.cpp) | [`README.md`](./songhichdaochiahetchoK/README.md) | `O(log10 N)` |
| [Tìm Thừa Số Nguyên Tố Có Số Mũ Lớn Nhất](./thuasongtosomulonnhat/) | [`thuasongtosomulonnhat.cpp`](./thuasongtosomulonnhat/thuasongtosomulonnhat.cpp) | [`README.md`](./thuasongtosomulonnhat/README.md) | `O(sqrt(N))` |
| [Tìm Số Lớn Nhất và Nhỏ Nhất M Chữ Số Tổng S](./timso_lonnhat_nhonhat_co_m_phtu_tongbang_s/) | [`timso_lonnhat_nhonhat_co_m_phtu_tongbang_s.cpp`](./timso_lonnhat_nhonhat_co_m_phtu_tongbang_s/timso_lonnhat_nhonhat_co_m_phtu_tongbang_s.cpp) | [`README.md`](./timso_lonnhat_nhonhat_co_m_phtu_tongbang_s/README.md) | `O(M)` |
| [Tìm Số Nghịch Đảo](./timsonghichdao/) | [`timsonghichdao.cpp`](./timsonghichdao/timsonghichdao.cpp) | [`README.md`](./timsonghichdao/README.md) | `O(log10 N)` |
| [Tính Điểm Trung Bình Các Môn Học](./tinh diem tb cac mon/) | [`tinh diem tb cac mon.cpp`](./tinh diem tb cac mon/tinh diem tb cac mon.cpp) | [`README.md`](./tinh diem tb cac mon/README.md) | `O(1)` |
| [Tính Giai Thừa Bằng For](./tinh giai thua bang for/) | [`tinh giai thua bang for.cpp`](./tinh giai thua bang for/tinh giai thua bang for.cpp) | [`README.md`](./tinh giai thua bang for/README.md) | `O(N)` |
| [Tính Tổng Số Chẵn Bằng For](./tinh tong so chan bang for/) | [`tinh tong so chan bang for.cpp`](./tinh tong so chan bang for/tinh tong so chan bang for.cpp) | [`README.md`](./tinh tong so chan bang for/README.md) | `O(N)` |

---

## 4. Hướng dẫn học tập & Biên dịch
Mỗi bài toán được đặt trong một thư mục riêng biệt kèm mã nguồn C++ và tệp `README.md` giải thích chi tiết có sơ đồ Mermaid.
Để biên dịch và chạy một bài toán bất kỳ:
```bash
cd "DSA/01_Toan_Hoc_va_Ly_Thuyet_So/Ten_Thu_Muc_Bai_Toan"
g++ -std=c++11 -O2 "Ten_File.cpp" -o "Ten_File"
./"Ten_File"
```

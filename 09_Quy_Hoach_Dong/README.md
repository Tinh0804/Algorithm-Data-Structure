# 09. Quy Hoạch Động (Dynamic Programming)

## 1. Giới thiệu chuyên đề
Các bài toán Quy hoạch động (Dynamic Programming - DP) kinh điển: Dãy con tăng dài nhất (LIS), Xâu con chung dài nhất (LCS), Xâu con đối xứng dài nhất (LPS), Dãy con có tổng lớn nhất (Kadane Algorithm), Leo cầu thang, Bước nhảy tối thiểu (Jump Game), Mua bán cổ phiếu, Đường đi lớn nhất trên ma trận.

---

## 2. Các kiến thức & Kỹ thuật trọng tâm
- Dãy con tăng dài nhất (LIS - Longest Increasing Subsequence) O(n^2)
- Xâu con chung dài nhất (LCS - Longest Common Subsequence) O(n*m)
- Xâu con đối xứng dài nhất (LPS - Longest Palindromic Subsequence)
- Dãy con liên tiếp có tổng lớn nhất (Thuật toán Kadane) O(n)
- Bài toán Leo cầu thang (Climbing Stairs - Fibonacci DP)
- Bước nhảy tối thiểu (Jump Game)
- Thời điểm tốt nhất để mua và bán cổ phiếu
- Đường đi có tổng lớn nhất trong bảng số / ma trận (Maximum Path Sum)

---

## 3. Danh mục các bài toán trong chuyên đề
Tổng số bài toán / nhóm bài: **8**

| Bài toán / Thuật toán | Tệp mã nguồn | Tài liệu hướng dẫn | Độ phức tạp |
| :--- | :--- | :--- | :--- |
| [Day Con Tang Dai Nhat(Hhđ)](./Day_con_tang_dai_nhat(hhđ)/) | [`Day_con_tang_dai_nhat(hhđ).c++`](./Day_con_tang_dai_nhat(hhđ)/Day_con_tang_dai_nhat(hhđ).c++) | [`README.md`](./Day_con_tang_dai_nhat(hhđ)/README.md) | `O(N)` |
| [Leo Cau Thang](./Leo_cau_thang/) | [`Leo_cau_thang.cpp`](./Leo_cau_thang/Leo_cau_thang.cpp) | [`README.md`](./Leo_cau_thang/README.md) | `O(N)` |
| [Maxsimun Path Sum3](./Maxsimun_path_sum3/) | [`Maxsimun_path_sum3.c++`](./Maxsimun_path_sum3/Maxsimun_path_sum3.c++) | [`README.md`](./Maxsimun_path_sum3/README.md) | `O(N)` |
| [Thoi Diem Tot Nhat De Mua Va Ban Co Phieu](./Thoi_diem_tot_nhat_de_mua_va_ban_co_phieu/) | [`Thoi_diem_tot_nhat_de_mua_va_ban_co_phieu.cpp`](./Thoi_diem_tot_nhat_de_mua_va_ban_co_phieu/Thoi_diem_tot_nhat_de_mua_va_ban_co_phieu.cpp) | [`README.md`](./Thoi_diem_tot_nhat_de_mua_va_ban_co_phieu/README.md) | `O(N)` |
| [Xau Con Chung Dai Nhat(Qhđ)](./Xau_con_chung_dai_nhat(qhđ)/) | [`Xau_con_chung_dai_nhat(qhđ).c++`](./Xau_con_chung_dai_nhat(qhđ)/Xau_con_chung_dai_nhat(qhđ).c++) | [`README.md`](./Xau_con_chung_dai_nhat(qhđ)/README.md) | `O(N)` |
| [Xau Con Doi Xung Dai Nhat(Qhđ)](./Xau_con_doi_xung_dai_nhat(QHĐ)/) | [`Xau_con_doi_xung_dai_nhat(QHĐ).c++`](./Xau_con_doi_xung_dai_nhat(QHĐ)/Xau_con_doi_xung_dai_nhat(QHĐ).c++) | [`README.md`](./Xau_con_doi_xung_dai_nhat(QHĐ)/README.md) | `O(N)` |
| [Buocnhaytoithieu](./buocnhaytoithieu/) | [`buocnhaytoithieu.cpp`](./buocnhaytoithieu/buocnhaytoithieu.cpp) | [`README.md`](./buocnhaytoithieu/README.md) | `O(N)` |
| [Day Con Lon Nhat](./day_con_lon_nhat/) | [`day_con_lon_nhat.cpp`](./day_con_lon_nhat/day_con_lon_nhat.cpp) | [`README.md`](./day_con_lon_nhat/README.md) | `O(N)` |

---

## 4. Hướng dẫn học tập & Biên dịch
Mỗi bài toán được đặt trong một thư mục riêng biệt kèm mã nguồn C++ và tệp `README.md` giải thích chi tiết có sơ đồ Mermaid.
Để biên dịch và chạy một bài toán bất kỳ:
```bash
cd "DSA/09_Quy_Hoach_Dong/Ten_Thu_Muc_Bai_Toan"
g++ -std=c++11 -O2 "Ten_File.cpp" -o "Ten_File"
./"Ten_File"
```

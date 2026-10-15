# 02. Mảng, Mảng Cộng Dồn & Mảng Hiệu (Arrays & Prefix Sums)

## 1. Giới thiệu chuyên đề
Kỹ thuật xử lý mảng 1 chiều, mảng 2 chiều và ma trận; Mảng cộng dồn 1D & 2D để tối ưu hóa truy vấn tổng đoạn O(1); Mảng hiệu (Difference Array) cập nhật đoạn O(1); Kỹ thuật loang trên ma trận (Flood Fill) và các thao tác mảng thường gặp.

---

## 2. Các kiến thức & Kỹ thuật trọng tâm
- Mảng cộng dồn 1 chiều & 2 chiều (Prefix Sum 1D/2D)
- Mảng hiệu (Difference Array) cập nhật đoạn [L, R] với O(1)
- Kỹ thuật loang trên lưới ma trận (Flood Fill)
- Tìm cực đại ma trận, tính chu vi vùng liên thông
- Loại bỏ phần tử trùng lặp, gộp hai danh sách đã sắp xếp

---

## 3. Danh mục các bài toán trong chuyên đề
Tổng số bài toán / nhóm bài: **28**

| Bài toán / Thuật toán | Tệp mã nguồn | Tài liệu hướng dẫn | Độ phức tạp |
| :--- | :--- | :--- | :--- |
| [Đếm Cặp Số Có Tổng Lớn Hơn K](./Cap_so_co_tong_lon_hon_k/) | [`Cap_so_co_tong_lon_hon_k.cpp`](./Cap_so_co_tong_lon_hon_k/Cap_so_co_tong_lon_hon_k.cpp) | [`README.md`](./Cap_so_co_tong_lon_hon_k/README.md) | `O(N log N)` |
| [Tính Chu Vi Hình Ghép Ma Trận](./Chu_vi/) | [`Chu_vi.cpp`](./Chu_vi/Chu_vi.cpp) | [`README.md`](./Chu_vi/README.md) | `O(N*M)` |
| [Kiểm Tra Dãy Tăng Chặt](./Day_tang_chat/) | [`Day_tang_chat.cpp`](./Day_tang_chat/Day_tang_chat.cpp) | [`README.md`](./Day_tang_chat/README.md) | `O(N)` |
| [Đếm Số Nguyên Tố Trên 2 Đường Chéo Ma Trận](./Dem_snt_tren_duong_cheo/) | [`Dem_snt_tren_duong_cheo.cpp`](./Dem_snt_tren_duong_cheo/Dem_snt_tren_duong_cheo.cpp) | [`README.md`](./Dem_snt_tren_duong_cheo/README.md) | `O(N sqrt(M))` |
| [Hợp Nhất 2 Dãy Đã Sắp Xếp](./Hop_nhat_2_ds_da_ss/) | [`Hop_nhat_2_ds_da_ss.cpp`](./Hop_nhat_2_ds_da_ss/Hop_nhat_2_ds_da_ss.cpp) | [`README.md`](./Hop_nhat_2_ds_da_ss/README.md) | `O(N + M)` |
| [Kỹ Thuật Loang Ma Trận & Điểm Cực Đại](./Ky_Thuat_Loang_tren_mang_2-chieu/) | [`Ky_Thuat_Loang_tren_mang_2-chieu.cpp`](./Ky_Thuat_Loang_tren_mang_2-chieu/Ky_Thuat_Loang_tren_mang_2-chieu.cpp) | [`README.md`](./Ky_Thuat_Loang_tren_mang_2-chieu/README.md) | `O(N*M)` |
| [Loại Bỏ Phần Tử Trùng Trong Mảng Đã Sắp Xếp (LeetCode 26)](./Loai_bo_ban_sao_trong_mang_ss/) | [`Loai_bo_ban_sao_trong_mang_ss.cpp`](./Loai_bo_ban_sao_trong_mang_ss/Loai_bo_ban_sao_trong_mang_ss.cpp) | [`README.md`](./Loai_bo_ban_sao_trong_mang_ss/README.md) | `O(N)` |
| [Loại Bỏ Phần Tử Bằng Giá Trị Val (LeetCode 27)](./Loai_bo_phan_tu/) | [`Loai_bo_phan_tu.cpp`](./Loai_bo_phan_tu/Loai_bo_phan_tu.cpp) | [`README.md`](./Loai_bo_phan_tu/README.md) | `O(N)` |
| [Kỹ Thuật Loang BFS/DFS Trên Ma Trận (Flood Fill)](./Loang_mang_2_chieu/) | [`Loang_mang_2_chieu.c++`](./Loang_mang_2_chieu/Loang_mang_2_chieu.c++) | [`README.md`](./Loang_mang_2_chieu/README.md) | `O(N*M)` |
| [Mảng Cộng Dồn (Prefix Sum)](./Mang_cong_don/) | [`Mang_cong_don.cpp`](./Mang_cong_don/Mang_cong_don.cpp) | [`README.md`](./Mang_cong_don/README.md) | `O(N)` |
| [Mảng Cộng Dồn 1 Chiều](./Mang_cong_don_1_chieu/) | [`Mang_cong_don_1_chieu.cpp`](./Mang_cong_don_1_chieu/Mang_cong_don_1_chieu.cpp) | [`README.md`](./Mang_cong_don_1_chieu/README.md) | `O(N)` |
| [Mảng Cộng Dồn 2 Chiều (2D Prefix Sum)](./Mang_cot_don_2_chieu/) | [`Mang_cot_don_2_chieu.cpp`](./Mang_cot_don_2_chieu/Mang_cot_don_2_chieu.cpp) | [`README.md`](./Mang_cot_don_2_chieu/README.md) | `O(N*M)` |
| [Mảng Hiệu (Difference Array)](./Mang_hieu/) | [`Mang_hieu.cpp`](./Mang_hieu/Mang_hieu.cpp) | [`README.md`](./Mang_hieu/README.md) | `O(1) mỗi truy vấn` |
| [Phần Tử Xuất Hiện Ở Mọi Hàng Của Ma Trận](./Phan_tu_xuat_hien_o_moi_hang/) | [`Phan_tu_xuat_hien_o_moi_hang.cpp`](./Phan_tu_xuat_hien_o_moi_hang/Phan_tu_xuat_hien_o_moi_hang.cpp) | [`README.md`](./Phan_tu_xuat_hien_o_moi_hang/README.md) | `O(N * M log M)` |
| [Thực Hiện Các Truy Vấn Trên Mảng](./Truy_van_tren_mang/) | [`Truy_van_tren_mang.c++`](./Truy_van_tren_mang/Truy_van_tren_mang.c++) | [`README.md`](./Truy_van_tren_mang/README.md) | `O(Q log N)` |
| [Bài Tập Thao Tác Mảng Cơ Bản](./bai tap mang/) | [`bai tap mang.cpp`](./bai tap mang/bai tap mang.cpp) | [`README.md`](./bai tap mang/README.md) | `O(N)` |
| [Bài Tập Ma Trận 2 Chiều](./bt mang 2 chieu/) | [`bt mang 2 chieu.cpp`](./bt mang 2 chieu/bt mang 2 chieu.cpp) | [`README.md`](./bt mang 2 chieu/README.md) | `O(N*M)` |
| [Bước Đi Ngắn Nhất Trên Ma Trận (BFS)](./buocdingannhat_matran/) | [`buocdingannhat_matran.cpp`](./buocdingannhat_matran/buocdingannhat_matran.cpp) | [`README.md`](./buocdingannhat_matran/README.md) | `O(N*M)` |
| [Tính Chu Vi Vùng Bao Trên Ma Trận 2 Chiều](./chuvi_mang2chieu/) | [`chuvi_mang2chieu.cpp`](./chuvi_mang2chieu/chuvi_mang2chieu.cpp) | [`README.md`](./chuvi_mang2chieu/README.md) | `O(N*M)` |
| [Kiểm Tra Dãy Số Tăng Chặt](./daytangchat/) | [`daytangchat.cpp`](./daytangchat/daytangchat.cpp) | [`README.md`](./daytangchat/README.md) | `O(N)` |
| [Đếm Số Dãy Con Có Tổng Nhỏ Hơn K](./demsodayconcotongnhohonk/) | [`demsodayconcotongnhohonk.cpp`](./demsodayconcotongnhohonk/demsodayconcotongnhohonk.cpp) | [`README.md`](./demsodayconcotongnhohonk/README.md) | `O(N)` |
| [Đếm Số Dãy Con Có Tổng Lớn Hơn Hoặc Bằng K](./demsodaycotonglonhonhoacbangsodacho/) | [`demsodaycotonglonhonhoacbangsodacho.cpp`](./demsodaycotonglonhonhoacbangsodacho/demsodaycotonglonhonhoacbangsodacho.cpp) | [`README.md`](./demsodaycotonglonhonhoacbangsodacho/README.md) | `O(N)` |
| [Đếm Số Lượng Phần Tử Nhỏ Hơn](./demsoluongptunhohon/) | [`demsoluongptunhohon.cpp`](./demsoluongptunhohon/demsoluongptunhohon.cpp) | [`README.md`](./demsoluongptunhohon/README.md) | `O(N log M)` |
| [Phần Tử Kế Tiếp Lớn Hơn (Next Greater Element)](./insosaulonhon/) | [`insosaulonhon.cpp`](./insosaulonhon/insosaulonhon.cpp) | [`README.md`](./insosaulonhon/README.md) | `O(N)` |
| [Kiểm Tra Số Không Tăng](./khiemtrasokhongtang/) | [`khiemtrasokhongtang.cpp`](./khiemtrasokhongtang/khiemtrasokhongtang.cpp) | [`README.md`](./khiemtrasokhongtang/README.md) | `O(log10 N)` |
| [Đếm Số Điểm Cực Đại Trong Ma Trận](./so_diem_cuc_dai/) | [`so_diem_cuc_dai.cpp`](./so_diem_cuc_dai/so_diem_cuc_dai.cpp) | [`README.md`](./so_diem_cuc_dai/README.md) | `O(N*M)` |
| [Ví Dụ Khởi Tạo & Xuất Ma Trận](./vd/) | [`vd.cpp`](./vd/vd.cpp) | [`README.md`](./vd/README.md) | `O(N*M)` |
| [Tìm Vị Trí Cân Bằng / Đứng Giữa](./vitridunggiua/) | [`vitridunggiua.cpp`](./vitridunggiua/vitridunggiua.cpp) | [`README.md`](./vitridunggiua/README.md) | `O(N)` |

---

## 4. Hướng dẫn học tập & Biên dịch
Mỗi bài toán được đặt trong một thư mục riêng biệt kèm mã nguồn C++ và tệp `README.md` giải thích chi tiết có sơ đồ Mermaid.
Để biên dịch và chạy một bài toán bất kỳ:
```bash
cd "DSA/02_Mang_va_Mang_Cong_Don/Ten_Thu_Muc_Bai_Toan"
g++ -std=c++11 -O2 "Ten_File.cpp" -o "Ten_File"
./"Ten_File"
```

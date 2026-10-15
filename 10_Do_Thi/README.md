# 10. Lý Thuyết Đồ Thị (Graph Theory)

## 1. Giới thiệu chuyên đề
Hệ thống bài toán đồ thị toàn diện: Biểu diễn đồ thị (Ma trận kề, Danh sách cạnh, Danh sách kề) và chuyển đổi qua lại; Thuật toán tìm kiếm BFS và DFS; Tìm đường đi trên đồ thị không trọng số; Thuật toán Dijkstra tìm đường đi ngắn nhất có trọng số; Đếm thành phần liên thông (đồ thị và lưới ma trận); Kiểm tra chu trình; Sắp xếp Tô-pô (DFS và thuật toán Kahn); Đồ thị hai phía (Bipartite); Đỉnh trụ và Cạnh cầu; Thành phần liên thông mạnh (SCC); Chu trình Euler; Cấu trúc tập hợp rời rạc (DSU).

---

## 2. Các kiến thức & Kỹ thuật trọng tâm
- Biểu diễn đồ thị & Chuyển đổi giữa ma trận kề, danh sách cạnh, danh sách kề
- Thuật toán tìm kiếm theo chiều sâu (DFS) & theo chiều rộng (BFS)
- Tìm đường đi ngắn nhất không trọng số (BFS) và có trọng số (Dijkstra)
- Đếm thành phần liên thông trên đồ thị vô hướng & trên lưới ô vuông
- Kiểm tra chu trình trên đồ thị vô hướng bằng BFS/DFS
- Sắp xếp Tô-pô (Topological Sort): DFS và thuật toán Kahn (xóa dần đỉnh)
- Đếm số đỉnh trụ (Articulation Points) và cạnh cầu (Bridges)
- Kiểm tra đồ thị hai phía (Bipartite Graph 2-Coloring)
- Thành phần liên thông mạnh (Strongly Connected Components - Tarjan/Kosaraju)
- Chu trình Euler trên đồ thị vô hướng
- Disjoint Set Union (DSU) - Cấu trúc các tập hợp rời nhau

---

## 3. Danh mục các bài toán trong chuyên đề
Tổng số bài toán / nhóm bài: **31**

| Bài toán / Thuật toán | Tệp mã nguồn | Tài liệu hướng dẫn | Độ phức tạp |
| :--- | :--- | :--- | :--- |
| [Biểu Diễn Đồ Thị](./Bieu_dien_do_thi/) | [`Bieu_dien_do_thi.cpp`](./Bieu_dien_do_thi/Bieu_dien_do_thi.cpp) | [`README.md`](./Bieu_dien_do_thi/README.md) | `O(V + E)` |
| [Chu Trình Euler Trên Đồ Thị Vô Hướng](./Chu_trinh_Euler(vo_huong)/) | [`Chu_trinh_Euler(vo_huong).cpp`](./Chu_trinh_Euler(vo_huong)/Chu_trinh_Euler(vo_huong).cpp) | [`README.md`](./Chu_trinh_Euler(vo_huong)/README.md) | `O(V + E)` |
| [Danh Sách Cạnh Sang Ma Trận Kề](./Danh_sach_canhsangMa_tran_ke/) | [`Danh_sach_canhsangMa_tran_ke.cpp`](./Danh_sach_canhsangMa_tran_ke/Danh_sach_canhsangMa_tran_ke.cpp) | [`README.md`](./Danh_sach_canhsangMa_tran_ke/README.md) | `O(V^2 + E)` |
| [Danh Sách Cạnh Sang Danh Sách Kề](./Danh_sach_canhsang_Danh_sach_ke/) | [`Danh_sach_canhsang_Danh_sach_ke.cpp`](./Danh_sach_canhsang_Danh_sach_ke/Danh_sach_canhsang_Danh_sach_ke.cpp) | [`README.md`](./Danh_sach_canhsang_Danh_sach_ke/README.md) | `O(V + E)` |
| [Danh Sách Kề Sang Danh Sách Cạnh](./Danh_sach_kesangDanh_sach_canh/) | [`Danh_sach_kesangDanh_sach_canh.cpp`](./Danh_sach_kesangDanh_sach_canh/Danh_sach_kesangDanh_sach_canh.cpp) | [`README.md`](./Danh_sach_kesangDanh_sach_canh/README.md) | `O(V + E)` |
| [Danh Sách Kề Sang Ma Trận Kề](./Danh_sach_kesang_ma_tran_ke/) | [`Danh_sach_kesang_ma_tran_ke.cpp`](./Danh_sach_kesang_ma_tran_ke/Danh_sach_kesang_ma_tran_ke.cpp) | [`README.md`](./Danh_sach_kesang_ma_tran_ke/README.md) | `O(V^2)` |
| [Đếm Số Cạnh Cầu Trên Đồ Thị](./Dem_so_canh_cau/) | [`Dem_so_canh_cau.cpp`](./Dem_so_canh_cau/Dem_so_canh_cau.cpp) | [`README.md`](./Dem_so_canh_cau/README.md) | `O(V + E)` |
| [Đếm Số Đỉnh Trụ Trên Đồ Thị](./Dem_so_dinh_tru/) | [`Dem_so_dinh_tru.cpp`](./Dem_so_dinh_tru/Dem_so_dinh_tru.cpp) | [`README.md`](./Dem_so_dinh_tru/README.md) | `O(V + E)` |
| [Đếm Số Thành Phần Liên Thông (DFS)](./Dem_so_lien_thong_do_thi/) | [`Dem_so_lien_thong_do_thi.cpp`](./Dem_so_lien_thong_do_thi/Dem_so_lien_thong_do_thi.cpp) | [`README.md`](./Dem_so_lien_thong_do_thi/README.md) | `O(V + E)` |
| [Đếm Số Thành Phần Liên Thông (BFS)](./Dem_so_lien_thong_do_thi(BFS)/) | [`Dem_so_lien_thong_do_thi(BFS).cpp`](./Dem_so_lien_thong_do_thi(BFS)/Dem_so_lien_thong_do_thi(BFS).cpp) | [`README.md`](./Dem_so_lien_thong_do_thi(BFS)/README.md) | `O(V + E)` |
| [Đếm Thành Phần Liên Thông Lưới Ô Vuông (DFS)](./Dem_so_lien_thong_tren_luoi_do_thi/) | [`Dem_so_lien_thong_tren_luoi_do_thi.cpp`](./Dem_so_lien_thong_tren_luoi_do_thi/Dem_so_lien_thong_tren_luoi_do_thi.cpp) | [`README.md`](./Dem_so_lien_thong_tren_luoi_do_thi/README.md) | `O(N*M)` |
| [Đếm Thành Phần Liên Thông Lưới Ô Vuông (BFS)](./Dem_so_lien_thong_tren_luoi_do_thi(BFS)/) | [`Dem_so_lien_thong_tren_luoi_do_thi(BFS).cpp`](./Dem_so_lien_thong_tren_luoi_do_thi(BFS)/Dem_so_lien_thong_tren_luoi_do_thi(BFS).cpp) | [`README.md`](./Dem_so_lien_thong_tren_luoi_do_thi(BFS)/README.md) | `O(N*M)` |
| [Cấu Trúc Các Tập Hợp Rời Nhau (DSU)](./Disjoint_Set_Union(DSU)/) | [`Disjoint_Set_Union(DSU).cpp`](./Disjoint_Set_Union(DSU)/Disjoint_Set_Union(DSU).cpp) | [`README.md`](./Disjoint_Set_Union(DSU)/README.md) | `O(alpha(N))` |
| [Tệp Dữ Liệu Đầu Vào Test Case Đồ Thị](./Du_Lieu_Mau_Do_Thi/) | [`input.txt`](./Du_Lieu_Mau_Do_Thi/input.txt) [`output.txt`](./Du_Lieu_Mau_Do_Thi/output.txt) | [`README.md`](./Du_Lieu_Mau_Do_Thi/README.md) | `O(1)` |
| [Đường Đi Ngắn Nhất Trong Ma Trận (Grid BFS)](./Duong_di_ngan_nhat_giua_2_diem_trong_ma_tran/) | [`Duong_di_ngan_nhat_giua_2_diem_trong_ma_tran.cpp`](./Duong_di_ngan_nhat_giua_2_diem_trong_ma_tran/Duong_di_ngan_nhat_giua_2_diem_trong_ma_tran.cpp) | [`README.md`](./Duong_di_ngan_nhat_giua_2_diem_trong_ma_tran/README.md) | `O(N*M)` |
| [Tìm Đường Đi Bằng DFS](./Duong_di_thuat_toan_tim_kiem_theo_chieu_xau/) | [`Duong_di_thuat_toan_tim_kiem_theo_chieu_xau.cpp`](./Duong_di_thuat_toan_tim_kiem_theo_chieu_xau/Duong_di_thuat_toan_tim_kiem_theo_chieu_xau.cpp) | [`README.md`](./Duong_di_thuat_toan_tim_kiem_theo_chieu_xau/README.md) | `O(V + E)` |
| [Thành Phần Liên Thông Mạnh (Kosaraju SCC)](./Graph_Theory(Lien_Thong_Manh)/) | [`Graph_Theory(Lien_Thong_Manh).cpp`](./Graph_Theory(Lien_Thong_Manh)/Graph_Theory(Lien_Thong_Manh).cpp) [`Lien_thong_manh.PNG`](./Graph_Theory(Lien_Thong_Manh)/Lien_thong_manh.PNG) | [`README.md`](./Graph_Theory(Lien_Thong_Manh)/README.md) | `O(V + E)` |
| [Kiểm Tra Đồ Thị Hai Phía (Bipartite Graph)](./KIem_tra_do_thi_2_phia/) | [`KIem_tra_do_thi_2_phia.cpp`](./KIem_tra_do_thi_2_phia/KIem_tra_do_thi_2_phia.cpp) | [`README.md`](./KIem_tra_do_thi_2_phia/README.md) | `O(V + E)` |
| [Kiểm Tra Chu Trình Đồ Thị Vô Hướng](./Kiem_tra_chu_trinh_tren_do_thi_vo_huong/) | [`Kiem_tra_chu_trinh_tren_do_thi_vo_huong.cpp`](./Kiem_tra_chu_trinh_tren_do_thi_vo_huong/Kiem_tra_chu_trinh_tren_do_thi_vo_huong.cpp) | [`README.md`](./Kiem_tra_chu_trinh_tren_do_thi_vo_huong/README.md) | `O(V + E)` |
| [Kiểm Tra Chu Trình Đồ Thị Vô Hướng (BFS)](./Kiem_tra_chu_trinh_tren_do_thi_vo_huong(BFS)/) | [`Kiem_tra_chu_trinh_tren_do_thi_vo_huong(BFS).cpp`](./Kiem_tra_chu_trinh_tren_do_thi_vo_huong(BFS)/Kiem_tra_chu_trinh_tren_do_thi_vo_huong(BFS).cpp) | [`README.md`](./Kiem_tra_chu_trinh_tren_do_thi_vo_huong(BFS)/README.md) | `O(V + E)` |
| [Kiểm Tra Chu Trình Đồ Thị Vô Hướng (DFS)](./Kiem_tra_chu_trinh_tren_do_thi_vo_huong(DFS)/) | [`Kiem_tra_chu_trinh_tren_do_thi_vo_huong(DFS).cpp`](./Kiem_tra_chu_trinh_tren_do_thi_vo_huong(DFS)/Kiem_tra_chu_trinh_tren_do_thi_vo_huong(DFS).cpp) | [`README.md`](./Kiem_tra_chu_trinh_tren_do_thi_vo_huong(DFS)/README.md) | `O(V + E)` |
| [Ma Trận Kề Sang Danh Sách Cạnh](./Ma_tran_kesangDanh_sach_canh/) | [`Ma_tran_kesangDanh_sach_canh.cpp`](./Ma_tran_kesangDanh_sach_canh/Ma_tran_kesangDanh_sach_canh.cpp) | [`README.md`](./Ma_tran_kesangDanh_sach_canh/README.md) | `O(V^2)` |
| [Ma Trận Kề Sang Danh Sách Kề](./Ma_tran_kesangDanh_sach_ke/) | [`Ma_tran_kesangDanh_sach_ke.cpp`](./Ma_tran_kesangDanh_sach_ke/Ma_tran_kesangDanh_sach_ke.cpp) | [`README.md`](./Ma_tran_kesangDanh_sach_ke/README.md) | `O(V^2)` |
| [Sắp Xếp Tô-pô (Topological Sort Bằng DFS)](./Sap_xep_topo/) | [`Sap_xep_topo.cpp`](./Sap_xep_topo/Sap_xep_topo.cpp) | [`README.md`](./Sap_xep_topo/README.md) | `O(V + E)` |
| [Thuật Toán Kahn (Sắp Xếp Tô-pô Bằng Queue)](./Thuat_toan_Kahn(Xoa-dan-dinh)/) | [`Thuat_toan_Kahn(Xoa-dan-dinh).cpp`](./Thuat_toan_Kahn(Xoa-dan-dinh)/Thuat_toan_Kahn(Xoa-dan-dinh).cpp) | [`README.md`](./Thuat_toan_Kahn(Xoa-dan-dinh)/README.md) | `O(V + E)` |
| [Thuật Toán Tìm Kiếm Theo Chiều Rộng (BFS)](./Thuat_toan_tim_kiem_theo_chieu_rong(BFS)/) | [`Thuat_toan_tim_kiem_theo_chieu_rong(BFS).cpp`](./Thuat_toan_tim_kiem_theo_chieu_rong(BFS)/Thuat_toan_tim_kiem_theo_chieu_rong(BFS).cpp) | [`README.md`](./Thuat_toan_tim_kiem_theo_chieu_rong(BFS)/README.md) | `O(V + E)` |
| [Thuật Toán Dijkstra Tìm Đường Đi Ngắn Nhất](./Tim_duong_di_ngan_nhat(Dijstra)/) | [`Tim_duong_di_ngan_nhat(Dijstra).cpp`](./Tim_duong_di_ngan_nhat(Dijstra)/Tim_duong_di_ngan_nhat(Dijstra).cpp) | [`README.md`](./Tim_duong_di_ngan_nhat(Dijstra)/README.md) | `O((V + E) log V)` |
| [Tìm Đường Đi Không Trọng Số (BFS)](./Tim_duong_di_tren_do_thi_khong_co_trong_so(BFS)/) | [`Tim_duong_di_tren_do_thi_khong_co_trong_so(BFS).cpp`](./Tim_duong_di_tren_do_thi_khong_co_trong_so(BFS)/Tim_duong_di_tren_do_thi_khong_co_trong_so(BFS).cpp) | [`README.md`](./Tim_duong_di_tren_do_thi_khong_co_trong_so(BFS)/README.md) | `O(V + E)` |
| [Tìm Đường Đi Không Trọng Số (DFS)](./Tim_duong_di_tren_do_thi_khong_co_trong_so(DFS)/) | [`Tim_duong_di_tren_do_thi_khong_co_trong_so(DFS).cpp`](./Tim_duong_di_tren_do_thi_khong_co_trong_so(DFS)/Tim_duong_di_tren_do_thi_khong_co_trong_so(DFS).cpp) | [`README.md`](./Tim_duong_di_tren_do_thi_khong_co_trong_so(DFS)/README.md) | `O(V + E)` |
| [Thử Nghiệm Trực Quan Hóa Đồ Thị JSON](./test/) | [`test.cpp`](./test/test.cpp) | [`README.md`](./test/README.md) | `O(1)` |
| [Đường Đi Ngắn Nhất Trên Ma Trận (Grid BFS)](./timduongngannhattrenmatra/) | [`timduongngannhattrenmatra.cpp`](./timduongngannhattrenmatra/timduongngannhattrenmatra.cpp) | [`README.md`](./timduongngannhattrenmatra/README.md) | `O(N*M)` |

---

## 4. Hướng dẫn học tập & Biên dịch
Mỗi bài toán được đặt trong một thư mục riêng biệt kèm mã nguồn C++ và tệp `README.md` giải thích chi tiết có sơ đồ Mermaid.
Để biên dịch và chạy một bài toán bất kỳ:
```bash
cd "DSA/10_Do_Thi/Ten_Thu_Muc_Bai_Toan"
g++ -std=c++11 -O2 "Ten_File.cpp" -o "Ten_File"
./"Ten_File"
```

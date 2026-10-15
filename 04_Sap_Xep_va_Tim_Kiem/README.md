# 04. Sắp Xếp & Tìm Kiếm (Sorting & Searching)

## 1. Giới thiệu chuyên đề
Các giải thuật sắp xếp từ cơ bản (Selection, Insertion, Bubble, Interchange) đến nâng cao (Quick Sort phân hoạch Lomuto/Hoare, Merge Sort); Tìm kiếm nhị phân (Binary Search), lower_bound, upper_bound; Sắp xếp tùy biến theo cặp (Pair), số nguyên tố, chẵn lẻ.

---

## 2. Các kiến thức & Kỹ thuật trọng tâm
- Sắp xếp chèn, chọn, nổi bọt, đổi chỗ trực tiếp (in từng bước thực hiện)
- Quick Sort với phân hoạch Hoare và Lomuto
- Merge Sort (Sắp xếp trộn) O(n log n)
- Tìm kiếm nhị phân (Binary Search) trên mảng đã sắp xếp
- Tìm kiếm vị trí chèn, tìm phần tử còn thiếu
- Custom Comparator sắp xếp Pair, Struct, theo điều kiện chẵn lẻ/SNT

---

## 3. Danh mục các bài toán trong chuyên đề
Tổng số bài toán / nhóm bài: **18**

| Bài toán / Thuật toán | Tệp mã nguồn | Tài liệu hướng dẫn | Độ phức tạp |
| :--- | :--- | :--- | :--- |
| [Tìm Kiếm Nhị Phân (Binary Search)](./Binary_search(tim kiem nhi phan)/) | [`Binary_search(tim kiem nhi phan).cpp`](./Binary_search(tim kiem nhi phan)/Binary_search(tim kiem nhi phan).cpp) | [`README.md`](./Binary_search(tim kiem nhi phan)/README.md) | `O(log N)` |
| [In Các Bước Sắp Xếp Đổi Chỗ Trực Tiếp](./Incacbucssdoichotructiep/) | [`Incacbucssdoichotructiep.cpp`](./Incacbucssdoichotructiep/Incacbucssdoichotructiep.cpp) | [`README.md`](./Incacbucssdoichotructiep/README.md) | `O(N^2)` |
| [In Các Bước Sắp Xếp Chèn](./Incacbuocsschen/) | [`Incacbuocsschen.cpp`](./Incacbuocsschen/Incacbuocsschen.cpp) | [`README.md`](./Incacbuocsschen/README.md) | `O(N^2)` |
| [In Các Bước Sắp Xếp Chọn](./Incacbuocsschon/) | [`Incacbuocsschon.cpp`](./Incacbuocsschon/Incacbuocsschon.cpp) | [`README.md`](./Incacbuocsschon/README.md) | `O(N^2)` |
| [In Các Bước Sắp Xếp Nổi Bọt](./Incacbuocssnoibot/) | [`Incacbuocssnoibot.cpp`](./Incacbuocssnoibot/Incacbuocssnoibot.cpp) | [`README.md`](./Incacbuocssnoibot/README.md) | `O(N^2)` |
| [Thuật Toán Sắp Xếp Chèn (Insertion Sort)](./Insertion_Sort/) | [`Insertion_Sort.cpp`](./Insertion_Sort/Insertion_Sort.cpp) | [`README.md`](./Insertion_Sort/README.md) | `O(N^2)` |
| [Sắp Xếp Chèn Biến Thể 1](./Insertion_Sort_1/) | [`Insertion_Sort_1.cpp`](./Insertion_Sort_1/Insertion_Sort_1.cpp) | [`README.md`](./Insertion_Sort_1/README.md) | `O(N^2)` |
| [Thuật Toán Sắp Xếp Trộn (Merge Sort)](./Mergasort/) | [`Mergasort.cpp`](./Mergasort/Mergasort.cpp) | [`README.md`](./Mergasort/README.md) | `O(N log N)` |
| [Sắp Xếp Nhanh (Quick Sort)](./Quicksort/) | [`Quicksort.cpp`](./Quicksort/Quicksort.cpp) | [`README.md`](./Quicksort/README.md) | `O(N log N)` |
| [Quick Sort Phân Hoạch Hoare](./Quicksort_Hoare/) | [`Quicksort_Hoare.cpp`](./Quicksort_Hoare/Quicksort_Hoare.cpp) | [`README.md`](./Quicksort_Hoare/README.md) | `O(N log N)` |
| [Quick Sort Phân Hoạch Lomuto](./Quicksort_Lomuto/) | [`Quicksort_Lomuto.cpp`](./Quicksort_Lomuto/Quicksort_Lomuto.cpp) | [`README.md`](./Quicksort_Lomuto/README.md) | `O(N log N)` |
| [Bài Tập Kiểm Tra Kiến Thức Sắp Xếp](./Quiz/) | [`Quiz.cpp`](./Quiz/Quiz.cpp) | [`README.md`](./Quiz/README.md) | `O(N log N)` |
| [Thuật Toán Sắp Xếp Chọn (Selection Sort)](./Selection_Sorrt/) | [`Selection_Sorrt.cpp`](./Selection_Sorrt/Selection_Sorrt.cpp) | [`README.md`](./Selection_Sorrt/README.md) | `O(N^2)` |
| [Tìm Số Còn Thiếu (Missing Number)](./Thieu_so/) | [`Thieu_so.cpp`](./Thieu_so/Thieu_so.cpp) | [`README.md`](./Thieu_so/README.md) | `O(N)` |
| [Tìm Vị Trí Chèn (Search Insert Position)](./Tim_vi_tri_chen/) | [`Tim_vi_tri_chen.cpp`](./Tim_vi_tri_chen/Tim_vi_tri_chen.cpp) | [`README.md`](./Tim_vi_tri_chen/README.md) | `O(log N)` |
| [Sắp Xếp Danh Sách Pair Tùy Biến](./sort_pair/) | [`sort_pair.cpp`](./sort_pair/sort_pair.cpp) | [`README.md`](./sort_pair/README.md) | `O(N log N)` |
| [Sắp Xếp Ưu Tiên Số Nguyên Tố](./sssnt/) | [`sssnt.cpp`](./sssnt/sssnt.cpp) | [`README.md`](./sssnt/README.md) | `O(N log N sqrt(M))` |
| [Sắp Xếp Số Lẻ Đứng Trước Số Chẵn](./sssoloe/) | [`sssoloe.cpp`](./sssoloe/sssoloe.cpp) | [`README.md`](./sssoloe/README.md) | `O(N log N)` |

---

## 4. Hướng dẫn học tập & Biên dịch
Mỗi bài toán được đặt trong một thư mục riêng biệt kèm mã nguồn C++ và tệp `README.md` giải thích chi tiết có sơ đồ Mermaid.
Để biên dịch và chạy một bài toán bất kỳ:
```bash
cd "DSA/04_Sap_Xep_va_Tim_Kiem/Ten_Thu_Muc_Bai_Toan"
g++ -std=c++11 -O2 "Ten_File.cpp" -o "Ten_File"
./"Ten_File"
```

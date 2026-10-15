# 12. C++ STL Containers & Algorithms

## 1. Giới thiệu chuyên đề
Khai thác tối đa Thư viện Chuẩn C++ (STL): std::vector, std::pair, std::set, std::multiset, Iterator; Các hàm giải thuật thường dùng trong header <algorithm>: min, max, min_element, max_element, accumulate, sort, binary_search, lower_bound, upper_bound.

---

## 2. Các kiến thức & Kỹ thuật trọng tâm
- Khai báo và thao tác với std::vector, Iterator, std::pair
- Cấu trúc tập hợp std::set (tự loại trùng, tự sắp xếp) và std::multiset
- Các hàm toán học và thống kê: min, max, min_element, max_element, accumulate
- Hàm tìm kiếm cận: lower_bound (vị trí đầu tiên >= X), upper_bound (vị trí đầu tiên > X)
- Sắp xếp vector và pair tùy biến

---

## 3. Danh mục các bài toán trong chuyên đề
Tổng số bài toán / nhóm bài: **8**

| Bài toán / Thuật toán | Tệp mã nguồn | Tài liệu hướng dẫn | Độ phức tạp |
| :--- | :--- | :--- | :--- |
| [Tập Hợp std::set Trong C++](./Set/) | [`Set.cpp`](./Set/Set.cpp) | [`README.md`](./Set/README.md) | `O(log N) mỗi thao tác` |
| [Tổng Quan STL Containers](./Vector,Iterator,Pair,Set/) | [`Vector,Iterator,Pair,Set.cpp`](./Vector,Iterator,Pair,Set/Vector,Iterator,Pair,Set.cpp) | [`README.md`](./Vector,Iterator,Pair,Set/README.md) | `O(1) đến O(log N)` |
| [Bài Tập Áp Dụng Lower_bound & Upper_bound](./bt lower,upper/) | [`bt lower,upper.cpp`](./bt lower,upper/bt lower,upper.cpp) | [`README.md`](./bt lower,upper/README.md) | `O(log N)` |
| [Bài Tập std::multiset](./bt multiset/) | [`bt multiset.cpp`](./bt multiset/bt multiset.cpp) | [`README.md`](./bt multiset/README.md) | `O(log N)` |
| [Bài Tập std::set](./bt set/) | [`bt set.cpp`](./bt set/bt set.cpp) | [`README.md`](./bt set/README.md) | `O(N log N)` |
| [Bài Tập std::vector](./bt vector/) | [`bt vector.cpp`](./bt vector/bt vector.cpp) | [`README.md`](./bt vector/README.md) | `O(1) thêm cuối` |
| [Các Hàm Thuật Toán STL (<algorithm>)](./cac_ham_thuong_gap/) | [`cac_ham_thuong_gap.cpp`](./cac_ham_thuong_gap/cac_ham_thuong_gap.cpp) | [`README.md`](./cac_ham_thuong_gap/README.md) | `O(N)` |
| [Các Hàm Tìm Kiếm & Sắp Xếp STL](./ham sort,binary_search,lower_bound,upper_bound/) | [`ham sort,binary_search,lower_bound,upper_bound.cpp`](./ham sort,binary_search,lower_bound,upper_bound/ham sort,binary_search,lower_bound,upper_bound.cpp) | [`README.md`](./ham sort,binary_search,lower_bound,upper_bound/README.md) | `O(log N)` |

---

## 4. Hướng dẫn học tập & Biên dịch
Mỗi bài toán được đặt trong một thư mục riêng biệt kèm mã nguồn C++ và tệp `README.md` giải thích chi tiết có sơ đồ Mermaid.
Để biên dịch và chạy một bài toán bất kỳ:
```bash
cd "DSA/12_STL_Containers/Ten_Thu_Muc_Bai_Toan"
g++ -std=c++11 -O2 "Ten_File.cpp" -o "Ten_File"
./"Ten_File"
```

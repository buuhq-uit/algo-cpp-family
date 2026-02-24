# PHÂN TÍCH ĐỀ PTNK 2023–2024
# PTNK Entrance Exam 2023–2024 – Analysis

Tổng số bài: 3  
Thời gian: 120 phút  

---

# BÀI 1 — DÃY DÀI NHẤT (MARBLE)

## Tóm tắt đề

Cho hai dãy:
- a1, a2, ..., an
- b1, b2, ..., bm

Chọn:
- Một đoạn prefix của a (a1 → ai)
- Một đoạn suffix của b (bj → bm)

Ghép lại thành một dãy không giảm.
Yêu cầu: tối đa số phần tử.

n, m ≤ 10^5

---

## Bản chất bài toán

- Dãy phải không giảm
- Prefix của a + Suffix của b
- Điều kiện nối:
  
  max(prefix a) ≤ min(suffix b)

→ Tìm i, j tối ưu.

---

## Kiến thức cần áp dụng

### ★★★★★ Quan trọng

- Mảng (Array processing)
- Tiền xử lý prefix
- Tiền xử lý suffix
- Binary search (nếu cần)
- Two pointers

---

## Mapping syllabus

- Part III – Two Pointers
- Part III – Binary Search
- Part II – Arrays
- Part III – Prefix/Suffix

---

## Nhận xét

- Không phải DP
- Không phải đồ thị
- Thuần kỹ thuật mảng + tư duy tối ưu

---

# BÀI 2 — CẮT BÁNH (CAKE)

## Tóm tắt đề

Bánh kích thước M × N (M, N ≤ 10^5)

Có 4K trái cherry đặt trên bánh.

Cắt bằng:
- 1 đường dọc
- 1 đường ngang

Tạo thành 4 phần.
Yêu cầu: mỗi phần có số cherry bằng nhau.
Đếm số cách cắt.

---

## Bản chất bài toán

- Chia 4 phần bằng nhau → mỗi phần có K cherry
- Phải tính số cherry theo vùng
- Đếm số vị trí đường cắt hợp lệ

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Prefix sum 2D (hoặc đếm theo hàng/cột)
- Đếm số lượng trong vùng
- Duyệt các vị trí đường cắt
- Tối ưu O(M + N + K)

### ★★★★ Bổ trợ

- Map hoặc mảng đếm

---

## Mapping syllabus

- Part III – Prefix Sum 2D
- Part II – Matrix
- Part VI – Complexity Analysis

---

## Nhận xét

- Bài điển hình về tiền tố 2D
- Không cần BFS
- Không cần DP

---

# BÀI 3 — TỔNG K (SUMK)

## Tóm tắt đề

Cho dãy a1..an (n ≤ 8000)

Xây bảng C:
C[i][j] = ai × aj

Đếm số hình chữ nhật con trong C có tổng bằng k.

---

## Phân tích bản chất

- C là bảng tích (multiplication table)
- Tổng hình chữ nhật con
- Tương đương:

  Chọn đoạn [l..r] cho hàng
  Chọn đoạn [x..y] cho cột

Tổng = (sum a[l..r]) × (sum a[x..y])

→ Đếm số cặp đoạn sao cho:
  (sum1 × sum2 = k)

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Prefix sum 1D
- Đếm số đoạn có tổng S
- Hash map (frequency map)
- Phân tích ước số của k
- Number theory nhẹ

### ★★★★ Bổ trợ

- Two pointers (nếu a[i] ≥ 0)
- STL map / unordered_map

---

## Mapping syllabus

- Part III – Prefix Sum
- Part IV – Number Theory
- Part III – STL (map)
- Part VI – Complexity Analysis

---

# TỔNG KẾT PHÂN LOẠI ĐỀ

| Bài | Chủ đề chính | Mức độ |
|------|--------------|--------|
| Bài 1 | Mảng + Binary Search | Trung bình |
| Bài 2 | Prefix Sum 2D | Trung bình |
| Bài 3 | Prefix + Number Theory | Khá |

---

# SO SÁNH VỚI PTNK 2025

2023–2024:
- Nặng prefix sum
- Có yếu tố number theory
- Không có DP rõ ràng

2025:
- Có DP
- Có Knapsack
- Có Greedy

→ 2023–2024 thiên về tư duy toán & xử lý mảng.
→ 2025 thiên về thuật toán chuẩn chuyên Tin hơn.

---

# KẾT LUẬN

Đề PTNK 2023–2024 bao phủ:

- Arrays
- Prefix Sum (1D & 2D)
- Binary Search
- Number Theory cơ bản
- STL map

Không có:
- DP nâng cao
- BFS/DFS
- Knapsack

→ Hoàn toàn nằm trong phạm vi syllabus luyện thi chuyên lớp 10.
# PHÂN TÍCH ĐỀ PTNK 2022–2023
# PTNK Entrance Exam 2022–2023 – Analysis

Tổng số bài: 3  
Thời gian: 120 phút  

---

# BÀI 1 — STICKERS

## Tóm tắt đề

Có 10 loại sticker số từ 0–9.  
Đặc biệt:
- 2 ↔ 5 có thể thay thế cho nhau
- 6 ↔ 9 có thể thay thế cho nhau

Cho:
- Dãy số T (các sticker có sẵn)
- Dãy số S (mẫu cần tạo)

Hỏi: Có thể tạo được tối đa bao nhiêu dãy S từ T?

---

## Bản chất bài toán

- Đếm tần suất chữ số
- Gom nhóm các chữ số tương đương:
  - Nhóm {2,5}
  - Nhóm {6,9}
- Tính số lần tối đa có thể ghép S

→ Bài toán chia theo tần suất (frequency division)

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Đếm tần suất (Frequency counting)
- Mảng đếm 0–9
- Chia nguyên (integer division)
- Xử lý nhóm phần tử tương đương

---

## Mapping syllabus

- Part II – Arrays
- Part II – Strings
- Part III – Greedy (tối đa số lần ghép)
- Part IV – Basic Number Handling

---

## Nhận xét

- Không phải DP
- Không phải đồ thị
- Bài toán đếm thuần kỹ thuật

---

# BÀI 2 — CHIA GIA TÀI (DOWRY)

## Tóm tắt đề

Cho ma trận n × m (n, m ≤ 1000).

Chia đất cho 3 người bằng:
- Cắt 1 lần (ngang hoặc dọc)
- Sau đó cắt tiếp 1 lần phần còn lại

Mỗi người nhận 1 hình chữ nhật.
Yêu cầu: tổng giá trị mỗi phần bằng nhau.

Nếu có cách chia → in YES và vị trí 2 đường cắt.
Ngược lại → NO.

---

## Bản chất bài toán

- Tổng toàn bộ phải chia hết cho 3
- Dùng prefix sum 2D để tính nhanh tổng vùng
- Duyệt các vị trí cắt ngang/dọc
- Kiểm tra điều kiện tổng bằng nhau

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Prefix sum 2D
- Ma trận (Matrix traversal)
- Duyệt các vị trí cắt
- Phân tích trường hợp

### ★★★★ Bổ trợ

- Tối ưu độ phức tạp O(nm)
- Điều kiện logic chặt chẽ

---

## Mapping syllabus

- Part III – Prefix Sum 2D
- Part II – Matrix
- Part VI – Complexity Analysis

---

## Nhận xét

- Không phải DFS/BFS
- Không phải DP
- Thuần kỹ thuật tiền tố 2D

---

# BÀI 3 — ƯỚC CHÍNH PHƯƠNG (DSQUARE)

## Tóm tắt đề

Cho L, R (R − L ≤ 1000)

Đếm số cặp (a, b), L ≤ a < b ≤ R,
sao cho a × b có ước là số chính phương > 1.

---

## Phân tích bản chất

a × b có ước là số chính phương > 1
↔ a × b có ước dạng p², với p nguyên tố

→ Tức là:
a × b không square-free
hoặc tồn tại p sao cho p² | a × b

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Number Theory
- Phân tích thừa số nguyên tố
- Kiểm tra square factor
- Duyệt cặp (do R−L nhỏ)

### ★★★★ Bổ trợ

- Sàng nguyên tố (nếu cần)
- GCD
- Tối ưu duyệt O(n²) với n ≤ 1000

---

## Mapping syllabus

- Part IV – Number Theory
- Part IV – Prime factorization
- Part VI – Complexity Analysis

---

# TỔNG KẾT PHÂN LOẠI ĐỀ

| Bài | Chủ đề chính | Mức độ |
|------|--------------|--------|
| Bài 1 | Frequency counting | Dễ |
| Bài 2 | Prefix sum 2D | Trung bình |
| Bài 3 | Number theory | Trung bình–Khá |

---

# SO SÁNH 3 NĂM PTNK

| Năm | Xu hướng chính |
|------|----------------|
| 2022–2023 | Prefix + Number theory |
| 2023–2024 | Prefix + Binary Search |
| 2025 | DP + Greedy + Knapsack |

---

# NHẬN XÉT CHUNG PTNK

PTNK thường:
- Không dùng cấu trúc dữ liệu nâng cao
- Không yêu cầu thuật toán quá phức tạp
- Tập trung vào:
  - Prefix sum
  - Number theory
  - Greedy
  - DP cơ bản

---

# KẾT LUẬN

Đề 2022–2023 bao phủ:

- Arrays
- Prefix sum 2D
- Frequency counting
- Number theory

Không có:
- DP nâng cao
- Đồ thị
- Cấu trúc dữ liệu phức tạp

→ Hoàn toàn nằm trong phạm vi syllabus luyện thi chuyên lớp 10.
# PHÂN TÍCH ĐỀ CHUYÊN TIN TP.HCM 2022–2023
# LHP Entrance Exam 2022 – Analysis

Tổng số bài: 3  
Thời gian: 150 phút  

---

# BÀI 1 — ĐỒNG HỒ (DONGHO)

## Tóm tắt đề

Cho nhiều thời điểm trong ngày (H:M).

Yêu cầu:
Tính góc nhỏ hơn hoặc bằng 180° tạo bởi kim giờ và kim phút.
Làm tròn đến 3 chữ số thập phân.

---

## Bản chất bài toán

- Kim phút: 6° mỗi phút
- Kim giờ: 30° mỗi giờ + 0.5° mỗi phút
- Tính hiệu hai góc
- Lấy min(góc, 360 − góc)

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Toán học cơ bản
- Số thực (double)
- Làm tròn số
- Xử lý input nhiều dòng

---

## Mapping syllabus

- Part I – Basic arithmetic
- Part IV – Basic Math
- Part VI – Edge case handling

---

## Nhận xét

- Bài thuần toán
- Không có thuật toán phức tạp

---

# BÀI 2 — PHÂN LOẠI RÁC THẢI (PHANLOAI)

## Tóm tắt đề

Có 3 ngăn rác.
Mỗi ngăn chứa:
- Hữu cơ
- Tái chế
- Vô cơ

Mục tiêu:
Sau khi di chuyển tối thiểu số túi rác,
mỗi ngăn chỉ chứa đúng 1 loại.

---

## Bản chất bài toán

- Có 3 loại và 3 ngăn
- Mỗi ngăn phải chọn 1 loại
- Tính số lượng cần di chuyển

Đây là:

- Bài toán duyệt hoán vị 3! = 6 cách
- Với mỗi cách, tính số túi cần chuyển

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Hoán vị (Permutation)
- Duyệt brute-force nhỏ
- Tính toán tối ưu

---

## Mapping syllabus

- Part III – Recursion / Backtracking (nhẹ)
- Part II – Arrays
- Part VI – Problem Analysis

---

## Nhận xét

- Không phải DP
- Không phải đồ thị
- Bài tổ hợp nhỏ + tư duy tối ưu

---

# BÀI 3 — MODULO (MODULO)

## Tóm tắt đề

Cho dãy N số nguyên phân biệt.

Tìm tất cả M > 1 sao cho:
Khi chia mọi số trong dãy cho M,
chúng đều có cùng số dư.

---

## Bản chất bài toán

Điều kiện:

a1 ≡ a2 ≡ ... ≡ aN (mod M)

⇔ M chia hết mọi hiệu:
(a2 − a1), (a3 − a1), ...

⇒ M là ước của GCD các hiệu.

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Number Theory
- GCD
- Phân tích ước số
- Duyệt ước

---

## Mapping syllabus

- Part IV – GCD
- Part IV – Number Theory
- Part VI – Complexity Analysis

---

# TỔNG KẾT PHÂN LOẠI ĐỀ LHP 2022

| Bài | Chủ đề chính | Mức độ |
|------|--------------|--------|
| Đồng hồ | Toán cơ bản | Dễ |
| Phân loại | Hoán vị nhỏ | Trung bình |
| Modulo | Number theory | Khá |

---

# SO SÁNH LHP 2022 – 2023 – 2024 – 2025

| Năm | Xu hướng |
|------|----------|
| 2022 | Toán + Number theory |
| 2023 | Greedy + Binary Search |
| 2024 | Prefix + Simulation |
| 2025 | Binary Search + Difference Array |

---

# NHẬN XÉT XU HƯỚNG LHP

LHP thường:

- Không ra DP nặng
- Không có đồ thị phức tạp
- Rất thích:
  - Binary Search
  - Greedy
  - Prefix
  - Number Theory

---

# KẾT LUẬN

Đề LHP 2022 bao phủ:

- Basic Math
- Permutation nhỏ
- GCD & divisor
- Tư duy số học

Không có:
- DP
- BFS/DFS
- Knapsack
- Cấu trúc dữ liệu nâng cao

→ Hoàn toàn nằm trong phạm vi syllabus luyện thi chuyên lớp 10.
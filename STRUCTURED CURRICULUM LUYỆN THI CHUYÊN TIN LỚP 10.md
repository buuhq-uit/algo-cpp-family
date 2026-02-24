# CHƯƠNG TRÌNH LUYỆN THI CHUYÊN TIN LỚP 10
## (Dựa trên phân tích 8 đề thật: LHP 2022–2025 & PTNK 2022–2025)

---

# PHẦN 0 — MỤC TIÊU CHIẾN LƯỢC

## 🎯 Mục tiêu cuối cùng
- Nhìn đề → nhận diện pattern trong 10–30 giây
- Viết code không bug prefix / BS / BFS / DP cơ bản
- Quản lý thời gian 150 phút hiệu quả

---

# PHẦN 1 — PHÂN TÍCH 8 ĐỀ THẬT (TÓM LƯỢC CHIẾN LƯỢC)

## LHP thường ra:
- Binary Search (đặc biệt on answer)
- Greedy + interval
- Difference array / event
- Number theory nhẹ
- Simulation tối ưu

## PTNK thường ra:
- Prefix sum 1D/2D
- BFS/DFS grid
- DP chuỗi hoặc knapsack
- Counting + number blocks

---

# PHẦN 2 — TIER KIẾN THỨC (ƯU TIÊN THEO TẦN SUẤT RA ĐỀ)

---

## 🟥 TIER S — BẮT BUỘC CỰC CHẮC

### 1. Prefix Sum 1D / 2D
- Range sum
- Counting subarray
- Sum submatrix

### 2. Difference Array / Sweep Line

### 3. Binary Search (cơ bản + on answer)

### 4. Greedy (interval / phủ đoạn)

### 5. BFS/DFS grid

### 6. DP cơ bản
- LPS
- 0/1 Knapsack

### 7. Number Theory nền
- GCD
- Divisors
- Modulo
- Digit counting

---

## 🟧 TIER A — NÊN VỮNG

- Two pointers
- Simulation tối ưu
- String parsing
- Fast exponentiation

---

## 🟨 TIER B — BIẾT LÀ ĐỦ

- Hoán vị nhỏ
- Hình học cơ bản
- Brute force nhỏ

---

# PHẦN 3 — 20 PATTERN NHẬN DIỆN NHANH

(Trích từ tài liệu #7)

- Range sum → Prefix
- Range update → Difference array
- Monotonic condition → Binary search
- Grid island → BFS/DFS
- Chia cùng số dư → GCD hiệu
- Tối ưu chọn ≤W → Knapsack
- Chuỗi thành palindrome → LPS
- Phủ đoạn ≤K → Greedy + BS
- Đếm chữ số cuối → Mod 10 cycle
- Event theo thời gian → Sweep line

---

# PHẦN 4 — ROADMAP 12 TUẦN

## Giai đoạn 1 (Tuần 1–4)
- Arrays + Hashmap
- Prefix 1D/2D
- Difference array
- Binary search
- Greedy

## Giai đoạn 2 (Tuần 5–7)
- BFS/DFS grid
- DP chuỗi
- Knapsack
- Number theory

## Giai đoạn 3 (Tuần 8–12)
- Làm full đề LHP
- Làm full đề PTNK
- Random medium 90 phút
- Ôn Tier S

---

# PHẦN 5 — BÀI LUYỆN CHUẨN (TRÍCH DẪN NGUỒN)

## Prefix / Hashmap
- LC 560
- LC 974
- LC 1074

## Binary Search
- LC 875
- LC 1482
- LC 1011

## Greedy
- LC 452
- LC 435
- LC 1029

## BFS Grid
- LC 200
- LC 695
- LC 130

## DP
- LC 516
- LC 416
- LC 1143

## Difference Array
- LC 1109
- LC 1094

## Number Theory
- LC 2427
- LC 1015

---

# PHẦN 6 — TEMPLATE C++ CHUẨN THI

Bao gồm:
- Fast IO
- Prefix 1D/2D
- Difference array
- Binary search template
- BFS grid
- Knapsack 0/1
- GCD
- Fast power

(Đã trình bày trong tài liệu #5)

---

# PHẦN 7 — 100 LỖI PHỔ BIẾN CẦN TRÁNH

Nhóm lỗi quan trọng nhất:

- Sai prefix index
- Sai binary search biên
- Không nhận ra diff array
- Không dùng GCD khi cần
- Sai DP transition
- Không reset visited

---

# PHẦN 8 — CHECKLIST TRƯỚC KHI THI

Bạn sẵn sàng khi:

☑ Viết prefix 2D trong 5 phút  
☑ Binary search on answer không sai biên  
☑ BFS grid template thuộc lòng  
☑ DP LPS code lại không xem tài liệu  
☑ Knapsack 0/1 làm được  
☑ GCD + divisor không lúng túng  

---

# PHẦN 9 — CHIẾN LƯỢC LÀM BÀI

## Khi thi LHP:
1. Làm bài math / BS trước
2. Sau đó greedy / diff
3. Không quá lo DP nặng

## Khi thi PTNK:
1. Đọc kỹ constraint
2. Chuẩn bị 1 bài DP/BFS
3. Quản lý thời gian 3 bài

---

# PHẦN 10 — TRIẾT LÝ ÔN THI

- Không học thuật toán nâng cao không cần thiết
- Master Tier S
- Làm đề thật
- Phân tích sai nhiều hơn làm nhiều

---

# KẾT LUẬN

Sau khi hoàn thành curriculum này:

✔ Bao phủ 90% pattern của 8 đề thật  
✔ Không sợ đề LHP  
✔ Không sợ đề PTNK  
✔ Có hệ thống rõ ràng thay vì học rời rạc  

---
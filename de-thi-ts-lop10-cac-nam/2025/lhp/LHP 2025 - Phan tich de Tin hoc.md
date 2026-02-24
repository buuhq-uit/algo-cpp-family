# PHÂN TÍCH ĐỀ CHUYÊN TIN TP.HCM 2025–2026 THI VÀO LHP
# Specialized IT Entrance Exam – HCMC 2025–2026

Tổng số bài: 3  
Thời gian: ... phút  

---

# CÂU 1 — CASE (KỆ SÁCH)

## Tóm tắt đề

Kệ sách xếp dạng tam giác:

Tầng 1: 1  
Tầng 2: 2 3  
Tầng 3: 4 5 6  
...

Cho P (1 ≤ P ≤ 10^18).  
Tìm:
- Tầng chứa tài liệu thứ P
- Vị trí trong tầng đó

---

## Bản chất bài toán

Tổng số phần tử đến tầng h là:

    1 + 2 + ... + h = h(h+1)/2

→ Tìm h sao cho:

    h(h+1)/2 ≥ P

Sau đó xác định vị trí trong tầng.

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Toán học (Tam giác số)
- Giải phương trình bậc 2
- Binary search trên đáp án
- Số lớn (long long, __int128)

---

## Mapping syllabus

- Part IV – Number Theory Basics
- Part III – Binary Search
- Part VI – Complexity Analysis

---

## Nhận xét

- Không phải DP
- Không phải đồ thị
- Bài toán toán học + tìm kiếm nhị phân

---

# CÂU 2 — LUCKYNUM (XỔ SỐ MAY MẮN)

## Tóm tắt đề

Cho L, R (L ≤ R < 10^9), P (0 ≤ P ≤ 9).

Đếm số cặp (a, b) sao cho:
- L ≤ a, b ≤ R
- Chữ số hàng đơn vị của a × b = P

Lưu ý: cặp có thứ tự (a, b)

---

## Bản chất bài toán

Chỉ phụ thuộc vào:
- a % 10
- b % 10

→ Chữ số cuối = (a%10 × b%10) % 10

Không thể duyệt toàn bộ [L, R] nếu R lớn.

Phải:
- Đếm tần suất chữ số cuối trong đoạn [L, R]
- Dùng toán học chia theo chu kỳ 10

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Number theory (mod 10)
- Đếm theo chu kỳ
- Tính số phần tử trong đoạn
- Phân tích tổ hợp theo chữ số cuối

### ★★★★ Bổ trợ

- Tối ưu O(1) hoặc O(100)
- Không brute force

---

## Mapping syllabus

- Part IV – Number Theory
- Part II – Arrays (frequency count)
- Part VI – Complexity Analysis

---

## Nhận xét

- Không cần DP
- Không cần đồ thị
- Bài toán đếm theo modulo

---

# CÂU 3 — HOSTING (MÁY CHỦ)

## Tóm tắt đề

Có N khách hàng (N ≤ 8×10^5)

Mỗi khách:
- Ngày bắt đầu xi
- Số ngày sử dụng di
- Dung lượng ki

Cần theo dõi:
- Tổng dung lượng mỗi ngày
- In ra những lần dung lượng thay đổi

---

## Bản chất bài toán

Đây là bài toán:

- Cộng đoạn (range add)
- Theo dõi biến động theo thời gian

Nếu làm naïve:
- Mỗi ngày cộng từng khách → TLE

Phải dùng:

- Difference array
- Event-based processing

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Mảng hiệu (Difference array)
- Prefix sum
- Xử lý sự kiện (Event simulation)
- Sort theo thời gian

### ★★★★ Bổ trợ

- Vector
- Tối ưu bộ nhớ
- Duyệt tuyến tính

---

## Mapping syllabus

- Part III – Difference Array
- Part III – Prefix Sum
- Part II – Arrays
- Part VI – Complexity Analysis

---

# TỔNG KẾT PHÂN LOẠI ĐỀ

| Bài | Chủ đề chính | Mức độ |
|------|--------------|--------|
| CASE | Toán + Binary Search | Trung bình |
| LUCKYNUM | Number theory + Counting | Trung bình |
| HOSTING | Difference array | Khá |

---

# SO SÁNH VỚI PTNK 2025

PTNK 2025:
- Có DP
- Có Knapsack

Chuyên Tin TP.HCM 2025:
- Không có DP
- Không có đồ thị
- Thiên về toán + xử lý mảng nâng cao

---

# ĐÁNH GIÁ PHONG CÁCH ĐỀ

Đề chuyên Tin TP.HCM 2025 thiên về:

- Tư duy toán học
- Tối ưu xử lý đoạn
- Kỹ thuật difference array
- Không yêu cầu cấu trúc dữ liệu phức tạp

---

# KẾT LUẬN

Đề này bao phủ:

- Binary Search
- Number Theory (mod)
- Prefix / Difference Array
- Xử lý sự kiện

Không có:
- DP
- BFS/DFS
- Knapsack
- Segment Tree

→ Hoàn toàn nằm trong phạm vi syllabus luyện thi chuyên lớp 10.
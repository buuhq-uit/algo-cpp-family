# PHÂN TÍCH ĐỀ CHUYÊN TIN TP.HCM 2023–2024
# LHP Entrance Exam 2023 – Analysis

Tổng số bài: 3  
Thời gian: 150 phút  

---

# BÀI 1 — LŨY THỪA (LUYTHUA)

## Tóm tắt đề

Biểu thức có dạng:

Y = A1^X1 + A2^X2 + ... + AN^XN

Nhưng input chỉ cho:
P1, P2, ..., PN
trong đó Pi là dạng ghép chữ số của Ai và Xi.

Ví dụ:
25 → 2^5
103 → 10^3
2152 → 21^52

Yêu cầu:
Tính tổng các lũy thừa.

---

## Bản chất bài toán

- Phải tách số Pi thành:
  - Phần cơ số Ai
  - Phần số mũ Xi
- Tính lũy thừa
- Cộng tổng

Ràng buộc nhỏ → không cần thuật toán phức tạp.

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Xử lý chuỗi / tách số
- Lũy thừa nhanh (Fast exponentiation)
- Kiểu long long
- Cộng dồn kết quả

---

## Mapping syllabus

- Part IV – Fast Exponentiation
- Part II – Strings
- Part I – Basic arithmetic

---

## Nhận xét

- Bài kỹ thuật xử lý số
- Không có thuật toán nâng cao
- Mức độ: Dễ – Trung bình

---

# BÀI 2 — GIAO HÀNG (GIAOHANG)

## Tóm tắt đề

Robot đi trên trục số từ 0 đến M.
Có N đơn hàng.
Mỗi đơn có:
- Điểm lấy hàng
- Điểm giao hàng

Robot bắt đầu tại 0, phải hoàn thành tất cả đơn và kết thúc tại M.

Tìm tổng quãng đường nhỏ nhất.

---

## Bản chất bài toán

- Bài toán trên trục số 1D
- Robot có thể làm đơn theo thứ tự bất kỳ
- Phải tối ưu quãng đường

Đây là:

- Bài toán tham lam + xử lý khoảng
- Hoặc bài toán quy về:
  - Tìm min/max vị trí cần đi qua
  - Phân tích chiều di chuyển

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Tư duy greedy
- Phân tích trục số
- Sắp xếp (nếu cần)
- Xử lý khoảng (interval thinking)

### ★★★★ Bổ trợ

- Biến lưu min/max
- Phân tích trường hợp

---

## Mapping syllabus

- Part III – Greedy
- Part II – Arrays
- Part VI – Problem Analysis

---

## Nhận xét

- Không phải DP
- Không phải đồ thị
- Thiên về tư duy hình học 1 chiều

---

# BÀI 3 — ĐÀO VÀNG (DAOVANG)

## Tóm tắt đề

Có N thỏi vàng tại vị trí Xi trên trục số.
Mỗi lần đào tại vị trí X với lực R:
→ Lấy được vàng trong đoạn [X − R, X + R]

Được đào tối đa K lần.
Tìm R nhỏ nhất để lấy được toàn bộ N thỏi vàng.

---

## Bản chất bài toán

- Phải phủ toàn bộ điểm Xi bằng ≤ K đoạn độ dài 2R
- Tương đương:
  - Chia các điểm thành ≤ K nhóm
  - Mỗi nhóm có độ rộng ≤ 2R

Đây là:

- Binary search trên R
- Kiểm tra greedy xem có thể phủ ≤ K đoạn không

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Binary Search trên đáp án
- Greedy kiểm tra điều kiện
- Sắp xếp mảng
- Duyệt tuyến tính

---

## Mapping syllabus

- Part III – Binary Search
- Part III – Greedy
- Part II – Arrays
- Part VI – Complexity Analysis

---

# TỔNG KẾT PHÂN LOẠI ĐỀ LHP 2023

| Bài | Chủ đề chính | Mức độ |
|------|--------------|--------|
| Lũy thừa | Fast power | Dễ |
| Giao hàng | Greedy trục số | Trung bình |
| Đào vàng | Binary Search + Greedy | Khá |

---

# SO SÁNH LHP 2023 – 2024 – 2025

| Năm | Đặc trưng |
|------|-----------|
| 2023 | Greedy + Binary Search |
| 2024 | Prefix + Simulation |
| 2025 | Binary Search + Difference Array |

---

# NHẬN XÉT XU HƯỚNG LHP

LHP thường:

- Không có DP nặng
- Không có đồ thị phức tạp
- Rất thích:
  - Binary Search
  - Greedy
  - Prefix / Difference
  - Xử lý trục số

---

# KẾT LUẬN

Đề LHP 2023 bao phủ:

- Fast exponentiation
- Greedy
- Binary search
- Tư duy phủ đoạn

Không có:
- DP
- BFS/DFS
- Knapsack
- Cấu trúc dữ liệu nâng cao

→ Hoàn toàn phù hợp với syllabus luyện thi chuyên lớp 10.
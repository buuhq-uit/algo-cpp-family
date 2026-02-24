# PHÂN TÍCH ĐỀ CHUYÊN TIN TP.HCM 2024–2025
# LHP Entrance Exam 2024 – Analysis

Tổng số bài: 3  
Thời gian: 150 phút  

---

# BÀI 1 — TUYỆT CHIÊU (TUYETCHIEU)

## Tóm tắt đề

Cho:
- n, k
- Dãy a1, a2, ..., an

Quy tắc:
Nếu tuyệt chiêu x được dùng ở lượt i,
thì lần tiếp theo chỉ được dùng lại ở lượt ≥ i + k.

Yêu cầu:
Tìm tuyệt chiêu có vi phạm (dùng lại quá sớm).
Nếu có nhiều → in nhỏ nhất.
Nếu không có → in -1.

---

## Bản chất bài toán

- Theo dõi lần xuất hiện gần nhất của mỗi giá trị
- Kiểm tra khoảng cách giữa hai lần xuất hiện
- Phát hiện vi phạm điều kiện khoảng cách ≥ k

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Hash map / mảng đánh dấu last position
- Duyệt tuyến tính O(n)
- So sánh khoảng cách chỉ số

---

## Mapping syllabus

- Part III – STL (map / unordered_map)
- Part II – Arrays
- Part VI – Complexity Analysis

---

## Nhận xét

- Bài kiểm tra kỹ thuật xử lý mảng
- Không có DP
- Không có đồ thị

---

# BÀI 2 — ĐẮP NÚI (DAPNUI)

## Tóm tắt đề

Cho dãy A1, A2, ..., An

Muốn biến thành dạng:
A1 < A2 < ... < Ai > Ai+1 > ... > An

Tăng mỗi đơn vị chiều cao tốn 1 điểm.
Tìm chi phí nhỏ nhất.

---

## Bản chất bài toán

- Dạng "mountain array"
- Phải tăng một số phần tử để tạo:
  - Dãy tăng bên trái
  - Dãy giảm bên phải
- Tìm đỉnh i tối ưu

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Prefix processing
- Suffix processing
- Tính chi phí tăng tối thiểu
- Duyệt mọi vị trí làm đỉnh

### ★★★★ Bổ trợ

- Tối ưu O(n)
- Không brute force O(n²)

---

## Mapping syllabus

- Part III – Prefix techniques
- Part V – Dynamic Programming (nhẹ)
- Part II – Arrays

---

## Nhận xét

- Không phải DP phức tạp
- Không cần cấu trúc dữ liệu nâng cao
- Thiên về tư duy tối ưu dãy

---

# BÀI 3 — LỌC NƯỚC (LOCNUOC)

## Tóm tắt đề

Có:
- n hệ thống
- Mỗi hệ thống có m bồn chứa
- Nước đổ vào theo thứ tự
- Dung tích từng bồn

Sau khi phân phối nước:
In lượng nước mỗi máy xử lý nhận được.

---

## Bản chất bài toán

- Mô phỏng phân phối theo tầng
- Nước đi qua các bồn theo thứ tự
- Có giới hạn dung tích

Đây là:

- Bài toán mô phỏng
- Hoặc có thể dùng prefix sum
- Hoặc xử lý theo lớp

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Mô phỏng (Simulation)
- Prefix sum
- Duyệt tầng
- Tối ưu tránh O(n × m) nếu lớn

### ★★★★ Bổ trợ

- Difference array (nếu xử lý theo tầng)
- Vector

---

## Mapping syllabus

- Part III – Prefix Sum
- Part III – Difference Array
- Part II – Arrays
- Part VI – Complexity Analysis

---

# TỔNG KẾT PHÂN LOẠI ĐỀ

| Bài | Chủ đề chính | Mức độ |
|------|--------------|--------|
| Tuyệt chiêu | Hash + khoảng cách | Dễ–Trung |
| Đắp núi | Tối ưu dãy | Trung bình |
| Lọc nước | Simulation + prefix | Khá |

---

# SO SÁNH LHP 2024 vs LHP 2025

LHP 2024:
- Không có Binary Search
- Không có Number Theory nặng
- Có mô phỏng
- Có tối ưu dãy

LHP 2025:
- Có Binary Search
- Có Difference Array rõ ràng
- Có bài toán mod 10

→ LHP 2025 thiên về kỹ thuật hơn.
→ LHP 2024 thiên về tư duy xử lý dãy và mô phỏng.

---

# KẾT LUẬN

Đề LHP 2024 bao phủ:

- Hash / map
- Prefix techniques
- Simulation
- Tối ưu dãy

Không có:
- DP nâng cao
- BFS/DFS
- Knapsack
- Cấu trúc dữ liệu phức tạp

→ Rất sát với syllabus luyện thi chuyên lớp 10.
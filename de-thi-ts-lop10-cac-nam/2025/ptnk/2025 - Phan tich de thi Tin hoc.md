# PHÂN TÍCH ĐỀ PTNK 2025
# PTNK Entrance Exam 2025 – Analysis

Tổng số bài: 4  
Thời gian: 150 phút  
Ngôn ngữ: Pascal / C++ / Python  

---

# BÀI 1 — CHUỖI ONLINE BẠN BÈ (STREAK)

## Tóm tắt đề
Cho T phút trong ngày (T ≤ 1440).  
Mỗi phút có trạng thái: ONLINE / IDLE / OFFLINE.  
Tìm độ dài chuỗi ONLINE liên tiếp dài nhất.

---

## Bản chất bài toán

- Duyệt một dãy trạng thái
- Đếm đoạn liên tiếp dài nhất thỏa điều kiện
- Bài toán “Longest consecutive segment”

---

## Kiến thức cần áp dụng

### ★★★★★ Cơ bản nhưng bắt buộc chắc

- Mảng (Array traversal)
- Chuỗi (String comparison)
- Biến đếm (Counter)
- Duyệt tuyến tính O(n)

---

## Mapping syllabus

- Part II – Arrays
- Part II – Strings
- Part I – Loops
- Part VI – Complexity Analysis

---

## Nhận xét

- Bài khởi động
- Không cần STL nâng cao
- Không cần thuật toán đặc biệt

---

# BÀI 2 — HÀNH TRÌNH XE ĐIỆN (EVTRIP)

## Tóm tắt đề

Xe xuất phát từ 0 km.
Pin tối đa Pmax.
Mỗi km tốn 1 pin.
Có N trạm sạc tại vị trí Di.
Đến trạm có thể sạc đầy.
Mục tiêu: đến Dtarget với số lần sạc ít nhất.

Nếu không thể đến → -1.

---

## Bản chất bài toán

- Bài toán tham lam (Greedy)
- Luôn chọn trạm xa nhất có thể trong tầm pin hiện tại
- Hoặc:
  - Dùng priority_queue (heap)
  - Hoặc mô phỏng greedy chuẩn

---

## Kiến thức cần áp dụng

### ★★★★★ Quan trọng

- Greedy Algorithm
- Sắp xếp (Sorting nếu cần)
- Duyệt tuyến tính
- Điều kiện logic

### ★★★★ Bổ trợ

- priority_queue (nếu dùng giải pháp heap)

---

## Mapping syllabus

- Part III – Greedy Algorithms
- Part III – STL (priority_queue)
- Part II – Arrays
- Part VI – Problem Analysis

---

## Nhận xét

- Bài greedy điển hình
- Rất sát chuyên đề “Giải thuật tham lam”

---

# BÀI 3 — TRÒ CHƠI XẾP CHỮ (WORDGAME)

## Tóm tắt đề

Cho chuỗi s (|s| ≤ 2000).
Mỗi lượt được xóa một ký tự.
Mục tiêu: làm chuỗi thành palindrome.
Tìm số lượt xóa ít nhất.

---

## Bản chất bài toán

- Bài toán tối ưu số bước
- Chính là:
  
  Số ký tự cần xóa = n − LPS  
  (LPS = Longest Palindromic Subsequence)

→ Quy hoạch động (Dynamic Programming)

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Quy hoạch động 2 chiều
- Chuỗi
- Subsequence
- So sánh ký tự hai đầu

---

## Mapping syllabus

- Part V – Basic Dynamic Programming
- Part II – Strings
- Part VI – Complexity Analysis

---

## Nhận xét

- Đây là bài DP rõ ràng nhất đề
- Không quá nâng cao
- Rất sát chuyên đề “DP cơ bản”

---

# BÀI 4 — TỐI ƯU GIAO DỊCH BLOCKCHAIN (BLOCKOPT)

## Tóm tắt đề

Có N giao dịch:
- Phí Fi
- Kích thước Si

Chọn tập giao dịch sao cho:
- Tổng kích thước ≤ Smax
- Tối đa tổng phí

Có thêm D ràng buộc:
Nếu chọn A thì phải chọn B.
Các ràng buộc không tạo chu trình.

---

## Bản chất bài toán

Đây là:

- Knapsack (0/1 Knapsack)
- Kèm ràng buộc phụ thuộc (Dependency constraint)
- Ràng buộc tạo DAG

→ Có thể:
- Gom nhóm theo DAG
- Hoặc xử lý topo trước
- Sau đó Knapsack

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Dynamic Programming (Knapsack)
- Đồ thị DAG
- Topological sort
- Mảng 2D hoặc DP 1D

### ★★★★ Bổ trợ

- Adjacency list
- DFS

---

## Mapping syllabus

- Part V – Basic Dynamic Programming
- Part V – Basic Graph Algorithms
- Part III – STL (vector)
- Part VI – Complexity Analysis

---

# TỔNG KẾT PHÂN LOẠI ĐỀ PTNK 2025

| Bài | Chủ đề chính | Mức độ |
|------|--------------|--------|
| Bài 1 | Duyệt mảng | Dễ |
| Bài 2 | Greedy | Trung bình |
| Bài 3 | DP chuỗi | Trung bình–Khá |
| Bài 4 | Knapsack + DAG | Khá |

---

# SO SÁNH VỚI PTNK 2024

PTNK 2024 thiên về:
- Toán học + quy luật

PTNK 2025 thiên về:
- DP
- Greedy
- Knapsack

→ 2025 mang tính “thuật toán chuẩn chuyên Tin” hơn.

---

# ĐÁNH GIÁ THEO SYLLABUS ĐÃ XÂY DỰNG

★★★★★
- Greedy
- Basic DP
- Knapsack
- Arrays

★★★★
- Graph cơ bản (DAG)
- STL

★★
- Number theory (không xuất hiện)

---

# KẾT LUẬN

Đề PTNK 2025 bao phủ:

- Mảng
- Greedy
- DP chuỗi
- Knapsack
- Đồ thị cơ bản

Không có:
- Bitmask nâng cao
- Dijkstra
- Cấu trúc dữ liệu phức tạp

→ Hoàn toàn nằm trong phạm vi syllabus luyện thi chuyên lớp 10.
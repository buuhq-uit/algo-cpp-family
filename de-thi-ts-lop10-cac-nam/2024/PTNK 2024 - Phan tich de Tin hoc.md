# PHÂN TÍCH ĐỀ PTNK 2023–2024
# PTNK Entrance Exam Analysis (2023–2024)

Tổng số bài: 3  
Thời gian: 150 phút  
Ngôn ngữ: Pascal / C++ / Python  

---

# BÀI 1 — SỐ MAY MẮN (LUCK)

## Mô tả ngắn
Có n lá bài đánh số 1 → n.
Mỗi vòng:
- Sắp lại theo thứ tự tăng dần.
- Giữ các lá ở vị trí có chỉ số ≡ 2 (mod 3).
- Lặp lại đến khi còn đúng 1 lá.

n ≤ 10^9

---

## Phân tích bản chất

Đây là bài toán:

- Mô phỏng loại bỏ theo chu kỳ
- Có tính chất chu kỳ / đệ quy
- Không thể mô phỏng trực tiếp vì n lớn (10^9)

---

## Kiến thức cần áp dụng trong syllabus

### ★★★★★ Quan trọng

- Phân tích quy luật (Pattern recognition)
- Toán học trong lập trình (Number Theory thinking)
- Chia để trị (Divide & Conquer mindset)
- Tối ưu độ phức tạp O(log n)

### Cụ thể trong syllabus:

- Part IV – Number Theory Basics
- Part V – Divide and Conquer
- Part VI – Complexity Analysis

---

## Nhận xét mức độ

- Không phải BFS / DP
- Không cần STL phức tạp
- Chủ yếu là tư duy toán + mô hình hóa

---

# BÀI 2 — SAN LẤP (ISLANDS)

## Mô tả ngắn

Cho ma trận m × n (m,n ≤ 1000)
0 = nước
1 = đất

Được phép đổi đúng 1 ô 0 thành 1.
Hỏi diện tích đảo lớn nhất có thể đạt được.

---

## Phân tích bản chất

- Đếm các thành phần liên thông (connected components)
- Gán nhãn mỗi đảo
- Tính diện tích từng đảo
- Thử đổi mỗi ô 0 → 1 và nối các đảo kề

---

## Kiến thức cần áp dụng

### ★★★★★ Cốt lõi

- Ma trận (Matrix)
- Đồ thị cơ bản (Graph Representation)
- DFS hoặc BFS
- Connected Components
- Flood Fill

### ★★★★ Bổ trợ

- map / set để tránh cộng trùng diện tích
- Mảng đánh dấu (visited)

---

## Mapping syllabus

- Part II – Matrix
- Part V – Basic Graph Algorithms (DFS/BFS)
- Part V – Grid Search
- Part III – STL (set/map)

---

## Nhận xét

- Đây là bài BFS/DFS điển hình
- Mức độ trung bình–khá
- Rất sát chuyên đề “Tìm kiếm trên ma trận”

---

# BÀI 3 — MẬT KHẨU (PASSWORD)

## Mô tả ngắn

Tạo dãy số vô hạn:

12345678910111213...

Cho k (k ≤ 10^14)
Tìm 4 chữ số liên tiếp bắt đầu từ vị trí k.

---

## Phân tích bản chất

- Không thể tạo chuỗi thật
- Phải tính vị trí thuộc khối số:
  - 1 chữ số
  - 2 chữ số
  - 3 chữ số
  - ...
- Tìm số chứa vị trí k
- Trích xuất chữ số

---

## Kiến thức cần áp dụng

### ★★★★★ Quan trọng

- Số học (Number theory thinking)
- Đếm chữ số theo block
- Xử lý số lớn (k tới 10^14)
- long long

### ★★★★ Bổ trợ

- Xử lý chuỗi (String)
- Toán học tổ hợp nhỏ

---

## Mapping syllabus

- Part IV – Number Theory Basics
- Part IV – Big Integer Handling (tư duy xử lý số lớn)
- Part II – Strings
- Part VI – Complexity Analysis

---

# TỔNG KẾT PHÂN LOẠI ĐỀ PTNK 2024

| Bài | Chủ đề chính | Thuộc syllabus |
|------|--------------|----------------|
| Bài 1 | Quy luật – chia để trị | Divide & Conquer + Math |
| Bài 2 | DFS/BFS trên lưới | Graph + Matrix |
| Bài 3 | Số học + xử lý vị trí | Number Theory |

---

# ĐÁNH GIÁ ĐỀ THEO HƯỚNG LUYỆN THI

PTNK thiên về:
- Tư duy toán (Bài 1 & 3)
- Không thuần kỹ thuật code
- Ít cấu trúc dữ liệu nâng cao
- Không yêu cầu Segment Tree, Dijkstra

---

# MỨC ĐỘ KHỚP VỚI SYLLABUS ĐÃ XÂY DỰNG

★★★★★
- Matrix + BFS/DFS
- Number Theory
- Complexity Analysis

★★★★
- STL cơ bản

★★
- Backtracking
- Bit manipulation (không xuất hiện)

---

# KẾT LUẬN

Đề PTNK 2024 tập trung vào:

1. Toán học + quy luật
2. BFS/DFS trên lưới
3. Tính toán chỉ số lớn

Không có:
- DP nặng
- Cấu trúc dữ liệu phức tạp

→ Hoàn toàn phù hợp với syllabus đã xây dựng.
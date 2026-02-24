# (7) 20 PATTERN GIẢI BÀI CHUYÊN TIN PHỔ BIẾN
> Nhìn đề → nhận diện pattern → chọn đúng kỹ thuật ngay.

---

# I. PREFIX / COUNTING PATTERNS (Xuất hiện rất nhiều)

---

## 1️⃣ Range Sum / Tổng đoạn
🔎 Dấu hiệu:
- Nhiều truy vấn tổng đoạn
- Tính tổng nhiều lần
- Ma trận cần tính tổng vùng

🎯 Nghĩ ngay: PREFIX SUM (1D hoặc 2D)

---

## 2️⃣ Range Update / Cộng đoạn
🔎 Dấu hiệu:
- Cộng giá trị cho nhiều đoạn
- Hỏi giá trị cuối cùng mỗi vị trí

🎯 Nghĩ ngay: DIFFERENCE ARRAY

---

## 3️⃣ Đếm số đoạn có tổng = K
🔎 Dấu hiệu:
- Đếm số subarray
- Tổng bằng k

🎯 Nghĩ ngay:
- Prefix sum + hashmap

---

## 4️⃣ Chia 4 vùng / nhiều vùng bằng nhau
🔎 Dấu hiệu:
- Cắt 1–2 đường
- Tính tổng từng vùng

🎯 Nghĩ ngay:
- Prefix sum 2D
- Casework

---

# II. BINARY SEARCH PATTERNS (LHP rất thích)

---

## 5️⃣ Tìm giá trị nhỏ nhất thỏa điều kiện
🔎 Dấu hiệu:
- “Tìm R nhỏ nhất”
- “Tìm số ngày ít nhất”
- “Tìm tầng chứa P”

🎯 Nghĩ ngay:
- Binary Search on Answer

---

## 6️⃣ Điều kiện monotonic
🔎 Dấu hiệu:
- Nếu X được thì mọi X lớn hơn cũng được

🎯 Nghĩ ngay:
- Binary Search

---

## 7️⃣ Phủ đoạn tối đa K lần
🔎 Dấu hiệu:
- Chọn ≤ K đoạn
- Bao phủ tất cả điểm

🎯 Nghĩ ngay:
- Sort + Greedy check
- Binary Search trên đáp án

---

# III. GREEDY PATTERNS

---

## 8️⃣ Interval Scheduling
🔎 Dấu hiệu:
- Chọn nhiều đoạn không chồng nhau
- Tối thiểu số đoạn

🎯 Nghĩ ngay:
- Sort theo end
- Greedy chọn end nhỏ nhất

---

## 9️⃣ Trạm xăng / sạc pin
🔎 Dấu hiệu:
- Đi xa nhất có thể
- Số lần dừng ít nhất

🎯 Nghĩ ngay:
- Greedy + heap hoặc greedy tuyến tính

---

## 🔟 Trục số 1 chiều
🔎 Dấu hiệu:
- Đi từ 0 đến M
- Các điểm trên trục

🎯 Nghĩ ngay:
- Interval thinking
- Min/max position

---

# IV. BFS/DFS GRID PATTERNS (PTNK thích)

---

## 1️⃣1️⃣ Đếm số đảo / thành phần liên thông
🔎 Dấu hiệu:
- Ma trận 0/1
- “Đảo”, “vùng”

🎯 Nghĩ ngay:
- BFS/DFS grid

---

## 1️⃣2️⃣ Tối đa diện tích vùng
🔎 Dấu hiệu:
- Diện tích lớn nhất
- Sau khi đổi 1 ô

🎯 Nghĩ ngay:
- DFS + đánh nhãn + cộng diện tích

---

# V. DP PATTERNS (PTNK có thể ra 1 bài)

---

## 1️⃣3️⃣ Chuỗi thành palindrome
🔎 Dấu hiệu:
- Xóa/Thêm ký tự để thành palindrome

🎯 Nghĩ ngay:
- DP LPS

---

## 1️⃣4️⃣ Chọn tập tối ưu ≤ W
🔎 Dấu hiệu:
- Tổng trọng lượng ≤ W
- Tối đa giá trị

🎯 Nghĩ ngay:
- 0/1 Knapsack

---

## 1️⃣5️⃣ Đếm số cách
🔎 Dấu hiệu:
- “Có bao nhiêu cách”
- Điều kiện theo bước

🎯 Nghĩ ngay:
- DP 1D

---

# VI. NUMBER THEORY PATTERNS

---

## 1️⃣6️⃣ Chia cùng số dư mod M
🔎 Dấu hiệu:
- “Các số có cùng số dư khi chia M”

🎯 Nghĩ ngay:
- GCD của hiệu

---

## 1️⃣7️⃣ Chữ số cuối tích / mod 10
🔎 Dấu hiệu:
- Hỏi chữ số cuối
- R ≤ 1e9

🎯 Nghĩ ngay:
- Đếm theo chu kỳ 10

---

## 1️⃣8️⃣ a × b có ước là số chính phương
🔎 Dấu hiệu:
- Square factor
- Ước chính phương

🎯 Nghĩ ngay:
- Phân tích prime factor

---

# VII. SIMULATION / EVENT PATTERNS

---

## 1️⃣9️⃣ Cộng dung lượng theo ngày
🔎 Dấu hiệu:
- Ngày bắt đầu + số ngày
- Tổng dung lượng mỗi ngày

🎯 Nghĩ ngay:
- Difference array
- Sweep line events

---

## 2️⃣0️⃣ Mô phỏng nhiều tầng / phân phối
🔎 Dấu hiệu:
- Phân phối qua nhiều lớp
- Dung tích giới hạn

🎯 Nghĩ ngay:
- Simulation tối ưu
- Prefix/diff nếu cần

---

# VIII. SUPER PATTERN (NHẬN DIỆN NHANH)

Khi đọc đề, tự hỏi 5 câu:

1) Có phải bài đếm không? → prefix/map  
2) Có tính đơn điệu không? → binary search  
3) Có nhiều cập nhật đoạn không? → diff array  
4) Có ma trận vùng không? → prefix 2D / BFS  
5) Có tối ưu chọn tập không? → greedy / knapsack  

---

# KẾT LUẬN

Nếu bạn thuộc 20 pattern này:
- 70–80% đề LHP/PTNK sẽ “nhìn là biết hướng”
- Giảm thời gian nghĩ từ 20 phút xuống còn 2–5 phút

Mục tiêu luyện:
- Đọc đề 3 phút → đoán pattern → commit hướng giải
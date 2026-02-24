# (1) SO SÁNH 8 ĐỀ LHP vs PTNK + TRỌNG TÂM KIẾN THỨC
> Mục tiêu: xác định phần nào hay ra + phần nào bắt buộc phải “cực chắc” khi thi cả 2.

---

## A. Danh sách 8 đề & “bản đồ kỹ năng” theo từng bài

### 1) LHP 2022 (HCM chuyên Tin 2022–2023)
- B1 Đồng hồ: **Math cơ bản + số thực + làm tròn**
- B2 Phân loại rác: **Bruteforce nhỏ (hoán vị 3!) + tính tối ưu**
- B3 Modulo: **Number theory: gcd + ước số**

**Kỹ năng trúng:** math, gcd/divisors, brute force nhỏ

---

### 2) LHP 2023 (HCM chuyên Tin 2023–2024)
- B1 Lũy thừa: **Tách số/chuỗi + fast power**
- B2 Giao hàng: **Greedy trên trục số/interval thinking**
- B3 Đào vàng: **Binary search on answer + greedy check + sort**

**Kỹ năng trúng:** binary search (đặc biệt “trên đáp án”), greedy, parsing/number

---

### 3) LHP 2024 (HCM chuyên Tin 2024–2025)
- B1 Tuyệt chiêu: **Map/last occurrence + duyệt 1 lần**
- B2 Đắp núi: **Xử lý dãy tối ưu (prefix/suffix cost), dạng “mountain”**
- B3 Lọc nước: **Simulation theo tầng + prefix/diff idea để tối ưu**

**Kỹ năng trúng:** hashmap, prefix/suffix, simulation, tối ưu O(n)

---

### 4) LHP 2025 (HCM chuyên Tin 2025–2026)
- B1 CASE: **Math tam giác số + binary search**
- B2 LUCKYNUM: **Modulo 10 + đếm theo chu kỳ + frequency**
- B3 HOSTING: **Difference array / sweep line events + sort theo thời gian**

**Kỹ năng trúng:** diff array/events, math + binary search, mod counting

---

### 5) PTNK 2022–2023
- B1 STICKERS: **Frequency counting + nhóm chữ số tương đương**
- B2 DOWRY: **Prefix sum 2D + duyệt đường cắt (casework)**
- B3 DSQUARE: **Number theory (prime factor / square factor) + duyệt cặp (n<=1000)**

**Kỹ năng trúng:** prefix 2D, counting, number theory

---

### 6) PTNK 2023–2024 (Đề A: LUCK / ISLANDS / PASSWORD)
- B1 LUCK: **Quy luật + giảm kích thước (log n)**
- B2 ISLANDS: **BFS/DFS grid + connected components + set tránh cộng trùng**
- B3 PASSWORD: **Number blocks (đếm chữ số theo nhóm) + long long + string slicing**

**Kỹ năng trúng:** BFS/DFS lưới, math/counting theo khối, pattern

---

### 7) PTNK 2023–2024 (Đề B: MARBLE / CAKE / SUMK)
- B1 MARBLE: **Prefix/suffix + two pointers/binary search**
- B2 CAKE: **Prefix sum 2D / counting theo vùng**
- B3 SUMK: **Prefix sum 1D + hashmap đếm + ước số của k (number theory nhẹ)**

**Kỹ năng trúng:** prefix (1D/2D), hashmap, two pointers, divisors nhẹ

---

### 8) PTNK 2025 (STREAK / EVTRIP / WORDGAME / BLOCKOPT)
- B1 STREAK: **Duyệt đoạn liên tiếp (count segment)**
- B2 EVTRIP: **Greedy (chọn trạm) + sort/heap (tùy hướng)**
- B3 WORDGAME: **DP chuỗi (LPS/min deletions to palindrome)**
- B4 BLOCKOPT: **Knapsack + dependency DAG (mức vừa, nhưng vẫn là DP trọng tâm)**

**Kỹ năng trúng:** greedy, DP chuỗi, knapsack cơ bản

---

## B. “Tần suất xuất hiện” theo nhóm kỹ năng (8 đề)

### Nhóm xuất hiện dày đặc (Gần như đề nào cũng chạm)
1) **Mảng + duyệt O(n) + xử lý biên**  
2) **Prefix sum / prefix-suffix / counting** (đặc biệt PTNK)  
3) **Math/Number theory nhẹ** (gcd, divisors, modulo, digit blocks)

### Nhóm xuất hiện rất nhiều ở LHP
1) **Binary Search (đặc biệt binary search on answer)**  
2) **Difference array / Event (sweep line)**  
3) **Greedy + tư duy trục số/đoạn**

### Nhóm xuất hiện quan trọng ở PTNK
1) **BFS/DFS trên lưới (connected components)**  
2) **DP cơ bản (ít bài nhưng “ăn điểm lớn”)**  
3) **Prefix sum 2D / counting vùng**

---

## C. PHẦN BẮT BUỘC PHẢI “CỰC CHẮC” nếu thi cả LHP + PTNK (Tier S)

### Tier S (bắt buộc cực chắc)
- **Prefix sum 1D/2D + prefix-suffix + counting theo vùng/đoạn**
- **Binary Search + Binary Search on Answer**
- **Greedy cơ bản (chọn tối ưu sau khi sort / trạm / interval)**
- **Hashmap (map/unordered_map) cho “đếm & last occurrence”**
- **Number theory nền (gcd, divisors, modulo, prime basics)**
- **BFS/DFS grid (flood fill / connected components)**
- **DP cơ bản**: ít nhất phải biết:
  - DP chuỗi kiểu LPS
  - DP knapsack 0/1 mức cơ bản

### Tier A (nên chắc vì hay gặp để tối ưu)
- **Difference array / sweep line events**
- **Two pointers / sliding window**
- **Simulation tối ưu (không mô phỏng từng bước nếu dữ liệu lớn)**
- **String parsing (tách số/khối chữ số)**

### Tier B (đủ biết làm, không cần quá sâu)
- **Backtracking nhỏ (hoán vị 3! / 4!)**
- **Hình học cơ bản / góc / khoảng cách** (thường dạng 1 bài nhẹ)

---

## D. Gợi ý cập nhật chiến lược ôn (từ dữ liệu 8 đề)
- Nếu ôn “đúng trọng tâm”: ưu tiên **Prefix/Diff + BS + Greedy + BFS + DP cơ bản + Number theory nhẹ**
- LHP thường “kỹ thuật tối ưu” (BS, diff/events, greedy)
- PTNK thường “tư duy mô hình hóa” (prefix 2D, BFS grid, DP chuỗi/knapsack, đếm theo khối số)

---
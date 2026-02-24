# (2) SYLLABUS CẬP NHẬT (SAU KHI PHÂN TÍCH 8 ĐỀ)
> Tag:
> - [S] = Bắt buộc cực chắc (thi cả LHP & PTNK)
> - [LHP] = Hay gặp trong LHP
> - [PTNK] = Hay gặp trong PTNK
> - [A] = Nên chắc (tối ưu)
> - [B] = Biết làm cơ bản là đủ

---

## PHẦN I – C++ FOUNDATION (Cơ bản nhưng phải sạch)
- Fast I/O, long long, __int128 khi cần [S]
- Vòng lặp, điều kiện, hàm, mảng, vector, string [S]
- Debug & edge cases (0, 1, biên, overflow) [S]

---

## PHẦN II – ARRAYS & COUNTING
- Duyệt mảng O(n), min/max, frequency counting [S]
- Hashmap / last occurrence / frequency map [S]
  - (LHP 2024 Tuyệt chiêu, PTNK 2022 STICKERS)

---

## PHẦN III – PREFIX / SUFFIX / DIFFERENCE (TRỤ CỘT CỦA 8 ĐỀ)
- Prefix sum 1D (range sum, counting subarray) [S]
- Prefix sum 2D (tính tổng vùng nhanh) [S][PTNK]
  - (PTNK 2022 DOWRY, PTNK 2023–2024 CAKE)
- Prefix-suffix preprocessing (tối ưu dãy) [S]
  - (PTNK MARBLE, LHP 2024 Đắp núi)
- Difference array + sweep line events [S][LHP]
  - (LHP 2025 HOSTING, LHP 2024 Lọc nước – hướng tối ưu)

---

## PHẦN IV – BINARY SEARCH
- Binary search cơ bản (lower/upper_bound) [S]
- Binary search on answer (tìm R nhỏ nhất, tốc độ nhỏ nhất, tầng chứa P, …) [S][LHP]
  - (LHP 2023 Đào vàng, LHP 2025 CASE)

---

## PHẦN V – GREEDY & INTERVAL THINKING
- Greedy sau sort (interval scheduling / chọn tối ưu) [S]
- Greedy kiểm tra / greedy phủ đoạn [S]
  - (LHP 2023, PTNK 2025 EVTRIP)

---

## PHẦN VI – GRAPH GRID (BFS/DFS)
- BFS/DFS trên lưới, flood fill, connected components [S][PTNK]
  - (PTNK 2023–2024 ISLANDS)

> NOTE: Không cần đồ thị nâng cao (Dijkstra/DSU/Segment tree) cho mục tiêu này.

---

## PHẦN VII – DYNAMIC PROGRAMMING (CƠ BẢN, NHƯNG ĂN ĐIỂM)
- DP chuỗi kiểu palindrome / LPS [S][PTNK]
  - (PTNK 2025 WORDGAME)
- DP knapsack 0/1 cơ bản [S][PTNK]
  - (PTNK 2025 BLOCKOPT – mức vừa)
- DP 1D đơn giản (đếm cách / tối ưu tổng) [A]

> NOTE: Chỉ cần DP cơ bản, không cần DP bitmask/phức tạp.

---

## PHẦN VIII – NUMBER THEORY & MATH MODELING
- GCD/LCM, divisors, prime basics, modulo [S]
  - (LHP 2022 MODULO, LHP 2025 LUCKYNUM, PTNK 2023–2024 SUMK)
- Fast exponentiation [A]
  - (LHP 2023 LUYTHUA)
- Digit blocks / counting by ranges (đếm chữ số theo nhóm độ dài) [A][PTNK]
  - (PTNK PASSWORD)
- Math geometry/angle basics [B]
  - (LHP 2022 Đồng hồ)

---

## PHẦN IX – SMALL BRUTE FORCE / BACKTRACKING (NHẸ)
- Hoán vị nhỏ 3! / 4! + tính chi phí [B]
  - (LHP 2022 Phân loại)

---

## “CHECKLIST TRƯỚC KHI THI” (rất nên tự tick)
- Prefix 1D/2D làm trong 5–10 phút/bài? [S]
- Binary search on answer viết chuẩn, không bug biên? [S]
- BFS grid template thuộc lòng? [S]
- Hashmap đếm/last occurrence không TLE? [S]
- DP LPS & knapsack cơ bản có thể code lại? [S]
- Difference array / sweep line có thể áp dụng cho bài cộng đoạn? [S]

---
# (6) 100 LỖI PHỔ BIẾN KHI THI CHUYÊN TIN (LHP + PTNK)
> Tập trung vào lỗi thực tế từ 8 đề đã phân tích.
> Mỗi lỗi có: Nguyên nhân → Cách tránh.

---

# I. LỖI TƯ DUY & ĐỌC ĐỀ (1–15)

1. Không đọc kỹ constraint → chọn thuật toán sai  
   → Luôn đọc n, m trước khi nghĩ giải pháp.

2. Không phát hiện cần tối ưu O(n log n) thay vì O(n²)  
   → Ước lượng n: nếu n ≥ 1e5, tránh O(n²).

3. Nhầm đề yêu cầu “nhỏ nhất” thành “lớn nhất”  
   → Gạch chân keyword trong đề.

4. Không nhận ra monotonic → bỏ lỡ binary search  
   → Tự hỏi: “Có tính đơn điệu không?”

5. Không phát hiện bài là prefix sum  
   → Nếu có nhiều truy vấn tổng đoạn → nghĩ prefix.

6. Không nhận ra bài là counting  
   → Nếu hỏi “đếm số cách” → nghĩ map/frequency.

7. Không phát hiện cần BFS thay vì DFS (grid lớn)  
   → Grid + connected component → BFS/DFS.

8. Mô phỏng brute force khi có difference array  
   → Range update lớn → nghĩ diff array.

9. Không nhận ra bài có thể chuyển sang trục số  
   → Nếu chỉ có 1 chiều → nghĩ interval/greedy.

10. Không phát hiện dependency DAG → nhảy vào brute  
   → Nếu có “phải chọn A thì chọn B” → nghĩ topo.

11. Không phân tích ví dụ mẫu  
   → Luôn thử tay 1–2 case.

12. Không kiểm tra dữ liệu âm/0  
   → Luôn hỏi: có âm không? có 0 không?

13. Không đọc kỹ “cặp có thứ tự” vs “không thứ tự”  
   → Đếm cặp nhớ phân biệt.

14. Không phát hiện cần long long  
   → Nếu có tổng lớn → dùng ll.

15. Không phát hiện input nhiều test  
   → Xem kỹ format.

---

# II. LỖI MẢNG & PREFIX (16–30)

16. Quên prefix[0] = 0  
17. Sai công thức prefix 2D (thiếu trừ góc chéo)  
18. Off-by-one index  
19. Lẫn lộn 0-index và 1-index  
20. Không reset mảng giữa test  
21. Overflow khi prefix sum  
22. Nhầm lẫn range [l,r] inclusive  
23. Quên kiểm tra l=1 khi tính prefix  
24. Không tối ưu prefix 2D khi m,n lớn  
25. Lặp lại tính tổng đoạn thay vì dùng prefix  
26. Không dùng unordered_map khi n lớn  
27. Không reserve() khi dùng vector lớn  
28. Dùng map thay vì unordered_map gây TLE  
29. Không xóa map giữa test  
30. Không nghĩ tới frequency compression

---

# III. LỖI BINARY SEARCH (31–45)

31. Infinite loop do mid sai  
32. Dùng (l+r)/2 gây overflow  
33. Không cập nhật ans khi thỏa  
34. Sai điều kiện monotonic  
35. Check function không tối ưu → TLE  
36. Không phân biệt tìm min hay max  
37. Lẫn lộn l<r vs l<=r  
38. Không test case nhỏ nhất  
39. Không test case không tồn tại đáp án  
40. Không set r đủ lớn  
41. Sai khi l=r  
42. Quên dùng long long cho mid  
43. Sai khi n=1  
44. Không reset biến trước loop  
45. Không test biên extreme

---

# IV. LỖI GREEDY (46–55)

46. Không sort trước khi greedy  
47. Sort sai key  
48. Không chứng minh greedy hợp lý  
49. Nhầm greedy thành DP  
50. Không xử lý trùng interval  
51. Không xử lý interval chạm biên  
52. Không reset biến tạm  
53. Không chọn đúng tiêu chí (end nhỏ nhất)  
54. Duyệt sai thứ tự  
55. Không thử ví dụ phản ví dụ

---

# V. LỖI BFS/DFS (56–65)

56. Quên visited  
57. Đánh dấu visited sai thời điểm  
58. Quên kiểm tra biên grid  
59. Không reset visited  
60. Nhầm dx/dy  
61. Stack overflow do DFS sâu  
62. Không kiểm tra cell hợp lệ  
63. Đếm diện tích sai  
64. Không xử lý grid 1x1  
65. Không dùng queue đúng

---

# VI. LỖI DP (66–80)

66. Không xác định đúng state  
67. Sai base case  
68. Không initialize dp  
69. Lẫn lộn dp[i][j]  
70. Quên reset dp giữa test  
71. Không dùng long long cho dp  
72. Sai thứ tự vòng lặp knapsack  
73. Không tối ưu 2D → 1D  
74. Nhầm subsequence với substring  
75. Không hiểu LPS vs palindrome substring  
76. Không kiểm tra n=0  
77. Sai transition  
78. Không test case nhỏ  
79. Không hiểu complexity O(n²)  
80. TLE do dp quá lớn

---

# VII. LỖI NUMBER THEORY (81–90)

81. Không dùng gcd khi cần  
82. Quên xét ước >1  
83. Nhầm lẫn mod âm  
84. Quên abs khi tính hiệu  
85. Không xét trường hợp tất cả bằng nhau  
86. Không duyệt đủ ước  
87. Tính divisors quá chậm  
88. Không xét overflow khi nhân  
89. Không hiểu square factor  
90. Không xử lý k=0

---

# VIII. LỖI KHÁC & TÂM LÝ (91–100)

91. Không quản lý thời gian  
92. Dành quá nhiều thời gian cho 1 bài  
93. Không chuyển bài khi bí  
94. Không test trước khi nộp  
95. Không đọc lại output format  
96. In dư khoảng trắng  
97. Không flush output khi cần  
98. Sợ DP nên bỏ qua  
99. Mất bình tĩnh khi WA  
100. Không luyện full đề trước khi thi

---

# KẾT LUẬN

Top lỗi nguy hiểm nhất:
- Prefix sai index
- Binary search sai biên
- Không phát hiện cần diff array
- Không dùng gcd/divisor khi cần
- Không biết LPS/knapsack cơ bản

Nếu tránh được 20 lỗi quan trọng nhất → xác suất đạt điểm cao tăng rất mạnh.
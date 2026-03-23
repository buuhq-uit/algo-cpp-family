## 🟦 Số Chính Phương (Square Number)
<br>
<div class="step-card border-blue"><div class="step-badge bg-blue">1. Khái niệm</div>

Số chính phương là số bằng bình phương của một số nguyên. Nói cách khác, một số tự nhiên $n$ là số chính phương nếu tồn tại số nguyên $k$ sao cho $n = k^2$.
* **Ví dụ:** $0, 1, 4, 9, 16, 25, 36, \dots$.
* **Tính chất:** Số chính phương không bao giờ tận cùng bằng các chữ số $2, 3, 7, 8$.
</div>

<div class="step-card border-orange"><div class="step-badge bg-orange">2. Các cách kiểm tra số chính phương</div>

**🔹 Cách 1: Sử dụng hàm `sqrt` (phổ biến nhất)**
* **Phân tích:** Lấy căn bậc hai của $n$, sau đó bình phương phần nguyên của kết quả đó để so sánh lại với $n$.
```cpp
bool isSquare(long long n) {
    if (n < 0) return false;
    long long root = round(sqrt(n));
    return root * root == n;
}
```
**🔹 Cách 2: Sử dụng Tìm kiếm nhị phân (dùng cho số lớn)**
* **Phân tích:** Tìm giá trị $x$ trong đoạn $[0, n]$ sao cho $x \cdot x = n$. Cách này tránh sai số của số thực khi $n$ quá lớn (vượt quá độ chính xác của `double`).
```cpp
bool isSquareBinary(long long n) {
    if (n < 0) return false;
    long long low = 0, high = 2e9; // Căn bậc hai của 10^18 tối đa là 10^9
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long res = mid * mid;
        if (res == n) return true;
        if (res < n) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}
```
**🔹 Cách 3: Phương pháp Newton (tiệm cận cực nhanh)**
* **Phân tích:** Sử dụng công thức lặp Newton $x_{new} = \frac{1}{2}(x + \frac{n}{x})$ để hội tụ về giá trị căn bậc hai.
```cpp
bool isSquareNewton(long long n) {
    if (n < 0) return false;
    if (n == 0) return true;
    long long x = n;
    while (x * x > n) {
        x = (x + n / x) / 2;
    }
    return x * x == n;
}
```
</div>

<div class="step-card border-green"><div class="step-badge bg-green">3. Tìm các số chính phương trong đoạn [a, b]</div>

**💡 Kỹ thuật tối ưu:** Thay vì duyệt từng số $i$ từ $a$ đến $b$ và kiểm tra $isSquare(i)$ (tốn $O(N\sqrt{N})$), ta chỉ cần duyệt căn bậc hai của chúng. 
* **Bước 1:** Tìm căn bậc hai của $a$ (làm tròn lên): $r_a = \lceil \sqrt{a} \rceil$.
* **Bước 2:** Tìm căn bậc hai của $b$ (làm tròn xuống): $r_b = \lfloor \sqrt{b} \rfloor$.
* **Bước 3:** Các số chính phương là $i \times i$ với $i$ chạy từ $r_a$ đến $r_b$.
```cpp
void findSquares(long long a, long long b) {
    long long start = ceil(sqrt(a));
    long long end = floor(sqrt(b));
    for (long long i = start; i <= end; i++) {
        cout << i * i << " ";
    }
}
```
</div>

<div class="important-note">
💡 <b>Lưu ý lập trình:</b>

* Khi sử dụng hàm `sqrt()`, hãy dùng `round()` hoặc cộng thêm một lượng sai số nhỏ `1e-9` để tránh lỗi làm tròn của số thực (`double`).
* Đối với bài toán đếm số lượng số chính phương trong đoạn $[a, b]$, công thức nhanh là: `floor(sqrt(b)) - ceil(sqrt(a)) + 1`.
</div>
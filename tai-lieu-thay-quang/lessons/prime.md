## 🧬 Số Nguyên Tố (Prime Number)
<br>
<div class="step-card border-blue"><div class="step-badge bg-blue">1. Khái niệm</div>

Số nguyên tố là số tự nhiên lớn hơn 1, chỉ có đúng hai ước là 1 và chính nó.
* **Ví dụ:** $2, 3, 5, 7, 11, 13, 17, 19, 23, \dots$
* **Lưu ý:** Số 2 là số nguyên tố chẵn duy nhất và cũng là số nguyên tố nhỏ nhất. Các số không phải số nguyên tố và lớn hơn 1 được gọi là **Hợp số**.
</div>

<div class="step-card border-orange"><div class="step-badge bg-orange">2. Các phương pháp kiểm tra số nguyên tố</div>

**🔹 Cách 1: Vét cạn (Naïve Approach)**
* **Phân tích:** Duyệt tất cả các số từ 2 đến $n-1$. Nếu $n$ chia hết cho bất kỳ số nào, $n$ không là số nguyên tố.
* **Độ phức tạp:** $O(n)$.
```cpp
bool isPrime(long long n) {
    if (n < 2) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
```
**🔹 Cách 2: Duyệt đến căn bậc hai (Tối ưu cơ bản)**
* **Phân tích:** Nếu $n$ có ước lớn hơn $\sqrt{n}$ thì nó chắc chắn phải có một ước tương ứng nhỏ hơn $\sqrt{n}$. Do đó chỉ cần duyệt đến $\sqrt{n}$.
* **Độ phức tạp:** $O(\sqrt{n})$.
```cpp
bool isPrime(long long n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
```
**🔹 Cách 3: Thuật toán $6k \pm 1$ (Tối ưu nâng cao)**
* **Phân tích:** Mọi số nguyên tố lớn hơn 3 đều có dạng $6k+1$ hoặc $6k-1$. Ta loại bỏ các số chia hết cho 2 và 3 ngay từ đầu, sau đó bước nhảy của vòng lặp sẽ là 6.
```cpp
bool isPrime6k(long long n) {
    if (n <= 3) return n > 1;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
```
</div>

<div class="step-card border-purple"><div class="step-badge bg-purple">3. Phân tích thừa số nguyên tố</div>

Mọi hợp số đều có thể phân tích duy nhất dưới dạng tích các thừa số nguyên tố.
```cpp
void factorize(long long n) {
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1) cout << n; // Trường hợp n là số nguyên tố cuối cùng
}
```
</div>

<div class="step-card border-green"><div class="step-badge bg-green">4. Sàng số nguyên tố (Sieve of Eratosthenes)</div>

**🔹 Sàng cơ bản:** Dùng để tìm tất cả các số nguyên tố trong đoạn $[1, N]$ với độ phức tạp $O(N \log \log N)$.
```cpp
const int MAXN = 1e6+5;
bool is_prime[MAXN];

void SieveOfEratosthenes(int n) {
    is_prime[0] = 0;
    is_prime[1] = 0;
    for (int i = 2; i*i <= n; i++) {
        if (is_prime[i]) {
            primeCount[i] = 1;
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = 0;
        }
    }
}
```
**🔹 Sàng cải tiến (Đếm số lượng ước nguyên tố):** Kỹ thuật này giúp giải quyết các bài toán yêu cầu biết số lượng ước nguyên tố của mỗi số trong dải $N$ lớn.
```cpp
const int MAXN = 1e6+5;
int primeCount[MAXN]; // Lưu số lượng ước nguyên tố
bool is_prime[MAXN];

void improvedSieve(int n) {
    fill(is_prime + 2, is_prime + n + 1, true);
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primeCount[i] = 1;
            for (int j = 2 * i; j <= n; j += i) {
                is_prime[j] = false;
                primeCount[j]++; // i là một ước nguyên tố của j
            }
        }
    }
}
```
</div>

<div class="step-card border-red"><div class="step-badge bg-red">5. Kỹ thuật Sàng phân đoạn (Segmented Sieve)</div>

### ❓Tại sao cần Sàng phân đoạn?
* **Hạn chế của Sàng Eratosthenes truyền thống:** Để sàng đến $N = 10^9$, ta cần mảng bool có $10^9$ phần tử (~1GB RAM), điều này thường gây lỗi MLE (Memory Limit Exceeded) trên các hệ thống chấm thi.
* **Giải pháp:** Nếu chỉ cần tìm số nguyên tố trong đoạn $[L, R]$ với hiệu $R - L + 1 \le 10^6$, ta không cần sàng toàn bộ từ $1$ đến $R$. Ta chỉ cần các số nguyên tố nhỏ hơn hoặc bằng $\sqrt{R}$ để "gạch tên" các hợp số trong đoạn mục tiêu.
* **Các bước thực hiện chi tiết:**
    1. **Tìm các số nguyên tố nhỏ:** Dùng sàng Eratosthenes cơ bản để tìm tất cả số nguyên tố trong đoạn $[2, \sqrt{R}]$.
    2. **Khởi tạo mảng đánh dấu đoạn:** Tạo mảng mark có kích thước (R - L + 1). Mặc định tất cả là true (nghĩa là số nguyên tố).
    3. **Ánh xạ chỉ số (Mapping):** Vì mảng bắt đầu từ chỉ số $0$, ta ánh xạ số $X$ trong đoạn $[L, R]$ vào vị trí X - L trong mảng mark.
    4. **Sàng trên đoạn:** Với mỗi số nguyên tố $p$ tìm được ở Bước 1:
        - Tìm bội số nhỏ nhất của $p$ nằm trong đoạn $[L, R]$ và lớn hơn hoặc bằng $p^2$.
        - Duyệt qua các bội số của $p$ trong đoạn và đánh dấu `false`.
    5. **Xử lý trường hợp đặc biệt:** Nếu $L = 1$, ta phải đánh dấu số $1$ không phải là số nguyên tố (`mark[0] = false`).

### 🔍 Ví dụ minh họa Sàng phân đoạn
**Yêu cầu:** Tìm các số nguyên tố trong đoạn $[L, R]$ với $L = 10$ và $R = 20$.
* **Bước 1: Tìm các số nguyên tố nhỏ đến $\sqrt{R}$**
    * Ta có $\sqrt{20} \approx 4.47$. Các số nguyên tố $\le 4$ là: $\{2, 3\}$.
* **Bước 2: Khởi tạo mảng đánh dấu đoạn $[10, 20]$**
    * Kích thước mảng: $R - L + 1 = 20 - 10 + 1 = 11$ phần tử.
    * Trạng thái ban đầu: Tất cả là `true` (T).

<div style="overflow-x: auto; margin: 15px 0;">
        <table class="garden-table" style="width: 100%; text-align: center; border-collapse: collapse; background: #1e293b; color: #d4d4d4;">
            <thead>
                <tr style="background: #334155; color: #fbbf24;">
                    <th style="padding: 10px; border: 1px solid #475569;">Chỉ số (Index)</th>
                    <td style="padding: 10px; border: 1px solid #475569;">0</td>
                    <td style="padding: 10px; border: 1px solid #475569;">1</td>
                    <td style="padding: 10px; border: 1px solid #475569;">2</td>
                    <td style="padding: 10px; border: 1px solid #475569;">3</td>
                    <td style="padding: 10px; border: 1px solid #475569;">4</td>
                    <td style="padding: 10px; border: 1px solid #475569;">5</td>
                    <td style="padding: 10px; border: 1px solid #475569;">6</td>
                    <td style="padding: 10px; border: 1px solid #475569;">7</td>
                    <td style="padding: 10px; border: 1px solid #475569;">8</td>
                    <td style="padding: 10px; border: 1px solid #475569;">9</td>
                    <td style="padding: 10px; border: 1px solid #475569;">10</td>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <th style="padding: 10px; border: 1px solid #475569; background: #334155;">Giá trị ($j$)</th>
                    <td style="padding: 10px; border: 1px solid #475569;"><b>10</b></td>
                    <td style="padding: 10px; border: 1px solid #475569;"><b>11</b></td>
                    <td style="padding: 10px; border: 1px solid #475569;"><b>12</b></td>
                    <td style="padding: 10px; border: 1px solid #475569;"><b>13</b></td>
                    <td style="padding: 10px; border: 1px solid #475569;"><b>14</b></td>
                    <td style="padding: 10px; border: 1px solid #475569;"><b>15</b></td>
                    <td style="padding: 10px; border: 1px solid #475569;"><b>16</b></td>
                    <td style="padding: 10px; border: 1px solid #475569;"><b>17</b></td>
                    <td style="padding: 10px; border: 1px solid #475569;"><b>18</b></td>
                    <td style="padding: 10px; border: 1px solid #475569;"><b>19</b></td>
                    <td style="padding: 10px; border: 1px solid #475569;"><b>20</b></td>
                </tr>
                <tr style="color: #4ec9b0;">
                    <th style="padding: 10px; border: 1px solid #475569; background: #334155;">Trạng thái</th>
                    <td style="padding: 10px; border: 1px solid #475569;">T</td>
                    <td style="padding: 10px; border: 1px solid #475569;">T</td>
                    <td style="padding: 10px; border: 1px solid #475569;">T</td>
                    <td style="padding: 10px; border: 1px solid #475569;">T</td>
                    <td style="padding: 10px; border: 1px solid #475569;">T</td>
                    <td style="padding: 10px; border: 1px solid #475569;">T</td>
                    <td style="padding: 10px; border: 1px solid #475569;">T</td>
                    <td style="padding: 10px; border: 1px solid #475569;">T</td>
                    <td style="padding: 10px; border: 1px solid #475569;">T</td>
                    <td style="padding: 10px; border: 1px solid #475569;">T</td>
                    <td style="padding: 10px; border: 1px solid #475569;">T</td>
                </tr>
            </tbody>
        </table>
    </div>

* **Bước 3: Sàng bằng số nguyên tố $p = 2$**
    * Bội số đầu tiên của $2$ trong đoạn $[10, 20]$ là $10$.
    * Đánh dấu `false` (F) các bội của 2: $10, 12, 14, 16, 18, 20$ (tương ứng chỉ số $0, 2, 4, 6, 8, 10$).

* **Bước 4: Sàng bằng số nguyên tố $p = 3$**
    * Bội số đầu tiên của $3$ trong đoạn $[10, 20]$ là $12$.
    * Đánh dấu `false` (F) các bội của 3: $12, 15, 18$ (tương ứng chỉ số $2, 5, 8$).

<div style="overflow-x: auto; margin: 15px 0;">
        <table class="garden-table" style="width: 100%; text-align: center; border-collapse: collapse; background: #1e293b; color: #d4d4d4;">
            <thead>
                <tr style="background: #334155; color: #fbbf24;">
                    <th style="padding: 10px; border: 1px solid #475569;">Giá trị ($j$)</th>
                    <td style="padding: 10px; border: 1px solid #475569;">10</td>
                    <td style="padding: 10px; border: 1px solid #475569; color: #4ec9b0;">11</td>
                    <td style="padding: 10px; border: 1px solid #475569;">12</td>
                    <td style="padding: 10px; border: 1px solid #475569; color: #4ec9b0;">13</td>
                    <td style="padding: 10px; border: 1px solid #475569;">14</td>
                    <td style="padding: 10px; border: 1px solid #475569;">15</td>
                    <td style="padding: 10px; border: 1px solid #475569;">16</td>
                    <td style="padding: 10px; border: 1px solid #475569; color: #4ec9b0;">17</td>
                    <td style="padding: 10px; border: 1px solid #475569;">18</td>
                    <td style="padding: 10px; border: 1px solid #475569; color: #4ec9b0;">19</td>
                    <td style="padding: 10px; border: 1px solid #475569;">20</td>
                </tr>
            </thead>
            <tbody>
                <tr style="color: #f87171;">
                    <th style="padding: 10px; border: 1px solid #475569; background: #334155; color: #d4d4d4;">Trạng thái</th>
                    <td style="padding: 10px; border: 1px solid #475569;">F</td>
                    <td style="padding: 10px; border: 1px solid #475569; color: #4ec9b0;">T</td>
                    <td style="padding: 10px; border: 1px solid #475569;">F</td>
                    <td style="padding: 10px; border: 1px solid #475569; color: #4ec9b0;">T</td>
                    <td style="padding: 10px; border: 1px solid #475569;">F</td>
                    <td style="padding: 10px; border: 1px solid #475569;">F</td>
                    <td style="padding: 10px; border: 1px solid #475569;">F</td>
                    <td style="padding: 10px; border: 1px solid #475569; color: #4ec9b0;">T</td>
                    <td style="padding: 10px; border: 1px solid #475569;">F</td>
                    <td style="padding: 10px; border: 1px solid #475569; color: #4ec9b0;">T</td>
                    <td style="padding: 10px; border: 1px solid #475569;">F</td>
                </tr>
            </tbody>
        </table>
    </div>

* **Bước 5: Kết luận**
    * Các vị trí còn giữ trạng thái **T** ứng với các giá trị: **11, 13, 17, 19**.
    * Đây chính là danh sách số nguyên tố trong đoạn $[10, 20]$.

```cpp
// Hàm sàng cơ bản để tìm các số nguyên tố nhỏ đến sqrt(R)
vector<int> getSmallPrimes(int limit) {
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= limit; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= limit; i += p)
                is_prime[i] = false;
        }
    }
    vector<int> primes;
    for (int p = 2; p <= limit; p++) {
        if (is_prime[p]) primes.push_back(p);
    }
    return primes;
}

void segmentedSieve(long long L, long long R) {
    // Bước 1: Tìm các số nguyên tố nhỏ đến sqrt(R)
    int limit = sqrt(R);
    vector<int> primes = getSmallPrimes(limit);

    // Bước 2 & 3: Khởi tạo mảng đánh dấu đoạn [L, R]
    // Kích thước mảng chỉ cần R - L + 1
    vector<bool> is_prime_range(R - L + 1, true);

    // Bước 4: Dùng các số nguyên tố nhỏ để sàng trên đoạn [L, R]
    for (int p : primes) {
        // Tìm bội số đầu tiên của p trong đoạn [L, R]
        // Công thức: max(p*p, bội số nhỏ nhất của p >= L)
        long long firstMultiple = max((long long)p * p, (L + p - 1) / p * p);
        
        for (long long j = firstMultiple; j <= R; j += p) {
            is_prime_range[j - L] = false; // Ánh xạ j vào index j-L
        }
    }

    // Bước 5: Xử lý số 1 (không phải số nguyên tố)
    if (L == 1) is_prime_range[0] = false;

    // Xuất kết quả
    for (long long i = L; i <= R; i++) {
        if (is_prime_range[i - L]) {
            cout << i << " ";
        }
    }
}

int main() {
    long long L = 10, R = 50;
    cout << "Cac so nguyen to trong doan [" << L << ", " << R << "] la:\n";
    segmentedSieve(L, R);
    return 0;
}
```
</div>

<div class="important-note">
💡 <b>Lưu ý lập trình:</b>

* Với các bài toán có nhiều bộ test dữ liệu, hãy sử dụng Sàng số nguyên tố một lần duy nhất trước khi xử lý truy vấn để đạt hiệu suất cao nhất.
* Khi cài đặt **segmentedSieve**, hãy chú ý vị trí **index** là `j - L` để ánh xạ đúng vào mảng đánh dấu.
</div>
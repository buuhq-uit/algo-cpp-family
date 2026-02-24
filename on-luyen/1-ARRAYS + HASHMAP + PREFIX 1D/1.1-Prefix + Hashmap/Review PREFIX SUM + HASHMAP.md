# Week 1. PREFIX SUM + HASHMAP
## Pattern cực quan trọng trong thi chuyên (LHP + PTNK)

---

# I. PREFIX SUM LÀ GÌ?

## 1️⃣ Định nghĩa (Definition)

Prefix sum là mảng tích lũy:

prefix[i] = tổng các phần tử từ đầu mảng đến vị trí i

Nếu mảng a có n phần tử (0-index):

prefix[0] = a[0]  
prefix[i] = prefix[i-1] + a[i]

---

## 2️⃣ Công thức tính tổng đoạn

Tổng đoạn từ l → r:

sum(l,r) = prefix[r] - prefix[l-1]

(Trường hợp l = 0 thì sum = prefix[r])

---

## 3️⃣ Khi nào nghĩ đến Prefix?

🔎 Dấu hiệu:
- Tính tổng nhiều đoạn
- Đếm số đoạn có tổng thỏa điều kiện
- Có từ khóa: "subarray", "continuous", "range sum"

---

# II. HASHMAP DÙNG ĐỂ LÀM GÌ?

HashMap dùng để:

- Lưu tần suất prefix
- Lưu lần xuất hiện trước đó
- Truy xuất O(1)

Ví dụ:

unordered_map<long long,int> freq;

freq[x] = số lần prefix = x xuất hiện

---

# III. PREFIX + HASHMAP KẾT HỢP KHI NÀO?

Khi bài có dạng:

- Đếm số đoạn con
- Tổng bằng k
- Có thể có số âm

Công thức cốt lõi:

prefix[r] - prefix[l-1] = k

⇔ prefix[l-1] = prefix[r] - k

---

# IV. TEMPLATE CHUẨN THI

```cpp
long long prefix = 0;
unordered_map<long long,int> freq;
freq[0] = 1;

int ans = 0;

for(int i = 0; i < n; i++){
    prefix += a[i];

    if(freq.count(prefix - k))
        ans += freq[prefix - k];

    freq[prefix]++;
}
```
# V. TẠI SAO PHẢI freq[0] = 1?

Vì nếu prefix[i] = k
→ prefix[i] - k = 0
→ đoạn từ đầu mảng đến i là hợp lệ

Nếu không khởi tạo freq[0] = 1
→ sẽ bỏ sót trường hợp này.

# VI. KHÁC BIỆT VỚI TWO POINTER

Two pointer chỉ dùng khi:
Tất cả số dương
Tổng tăng đơn điệu
Nếu có số âm → bắt buộc prefix + hashmap

# VII. CÁC BIẾN THỂ THƯỜNG GẶP

1️⃣ Tổng bằng k

LC 560

2️⃣ Tổng chia hết cho k

LC 974

Khi đó dùng:
(prefix % k + k) % k

3️⃣ Đếm đoạn có tổng <= k

→ Không dùng hashmap
→ Dùng two pointers (nếu số dương)

4️⃣ Submatrix sum

→ Prefix 2D + hashmap

# VIII. LỖI PHỔ BIẾN

❌ Quên freq[0] = 1
❌ Dùng int thay vì long long
❌ Không xử lý mod âm
❌ Không reset map giữa test
❌ Nhầm substring và subsequence

# IX. ĐỘ PHỨC TẠP

Time: O(n)
Space: O(n)

# X. CHECKLIST NẮM CHẮC

☑ Hiểu vì sao phải dùng prefix
☑ Hiểu vì sao không dùng two pointer
☑ Code lại không nhìn tài liệu
☑ Giải thích được công thức prefix[r] - prefix[l-1]
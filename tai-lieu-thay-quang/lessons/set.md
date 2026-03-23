## 🔍 Set (tập hợp)
<br>
<div class="step-card border-blue">
    <div class="step-badge bg-blue">1. Khái niệm</div>

**Set** là một container trong thư viện **STL** của **C++**, dùng để lưu trữ các phần tử mà mỗi phần tử là **duy nhất** (không trùng lặp).

**Đặc điểm:** 
* Tự động sắp xếp các phần tử theo thứ tự tăng dần.
* Mỗi giá trị chỉ xuất hiện đúng một lần trong Set.
* Được xây dựng dựa trên cấu trúc cây nhị phân tìm kiếm cân bằng (Red-Black Tree), giúp các thao tác tìm kiếm, thêm, xóa có độ phức tạp là $O(\log n)$.
</div>

<div class="step-card border-orange">
    <div class="step-badge bg-orange">2. Khai báo</div>

```cpp
// Khai báo set chứa các số nguyên
set<int> s;

// Khai báo và khởi tạo giá trị
set<int> s2 = {5, 1, 4, 1, 2};  
// Kết quả s2 sẽ chỉ còn {1, 2, 4, 5} - tự sắp xếp và lọc trùng
```
</div>

<div class="step-card border-green">
    <div class="step-badge bg-green">3. Các hàm xử lý thông dụng</div>

```cpp
set<int> s;

s.insert(10);          // Thêm phần tử vào set
s.size();              // Lấy số lượng phần tử hiện có
s.empty();             // Kiểm tra set có rỗng không

// Tìm kiếm phần tử
if (s.count(10)) 
    cout << "Co phan tu 10 trong set";

// Xóa phần tử
s.erase(10);           // Xóa theo giá trị
s.clear();             // Xóa toàn bộ set

// Tìm kiếm trả về iterator
auto it = s.find(20);
if (it != s.end()) s.erase(it); // Xóa theo vị trí iterator
```
</div>

<div class="step-card border-purple">
    <div class="step-badge bg-purple">4. Duyệt Set</div>

Vì Set không hỗ trợ truy cập qua chỉ số $s[i]$, chúng ta phải dùng Iterator hoặc For-each:
```cpp
set<int> s = {10, 20, 30, 40};

// Cách 1: Dùng For-each (C++11) - Khuyên dùng vì ngắn gọn
for (int x : s) {
    cout << x << " ";
}

// Cách 2: Dùng Iterator truyền thống
for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
    cout << *it << " ";
}

// Cách 3: Duyệt ngược Set
for (auto it = s.rbegin(); it != s.rend(); ++it) {
    cout << *it << " ";
}
```
</div>

<div class="step-card border-red">
    <div class="step-badge bg-red">5. Phân biệt Set, Multiset và Unordered_set</div>

<table class="garden-table" style="table-layout: fixed; width: 100%;">
        <colgroup>
            <col style="width: 25%;">
            <col style="width: 25%;">
            <col style="width: 25%;">
            <col style="width: 25%;">
        </colgroup>
        <tr class="idx-row">
            <td>Đặc điểm</td>
            <td>Set</td>
            <td>Multiset</td>
            <td>Unordered_set</td>
        </tr>
        <tr>
            <td class="idx-row">Trùng lặp</td>
            <td class="val-cell">Không</td>
            <td class="val-cell">Có</td>
            <td class="val-cell">Không</td>
        </tr>
        <tr>
            <td class="idx-row">Sắp xếp</td>
            <td class="val-cell">Tăng dần</td>
            <td class="val-cell">Tăng dần</td>
            <td class="val-cell">Không</td>
        </tr>
        <tr>
            <td class="idx-row">Độ phức tạp</td>
            <td class="val-cell">$O(\log n)$</td>
            <td class="val-cell">$O(\log n)$</td>
            <td class="val-cell">$O(1)$ trung bình</td>
        </tr>
    </table>

**Trường hợp áp dụng:**
* **Set:** Khi cần lưu danh sách các giá trị phân biệt và cần lấy ra theo thứ tự (Vd: Liệt kê các số khác nhau trong mảng theo thứ tự tăng dần).
* **Multiset:** Khi cần lưu các giá trị có thể trùng nhau nhưng vẫn phải luôn được sắp xếp (Vd: Tìm kiếm phần tử lớn thứ k khi thêm/xóa liên tục).
* **Unordered_set:** Khi chỉ quan tâm phần tử có tồn tại hay không và cần tốc độ nhanh nhất, không quan tâm thứ tự (Vd: Kiểm tra một từ có nằm trong từ điển hay không).

**💡Lưu ý:** về `multiset::erase(x)`: Nếu dùng `s.erase(x)` với `x` là một giá trị, nó sẽ xóa tất cả các giá trị `x` trong multiset. Để chỉ xóa **một** phần tử `x`, ta sử dụng `s.erase(s.find(x))`.
</div>

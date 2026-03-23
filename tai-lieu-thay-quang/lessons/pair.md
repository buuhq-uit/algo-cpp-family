## 👥 Pair (Cặp dữ liệu)
<br>
<div class="step-card border-blue">
    <div class="step-badge bg-blue">1. Khái niệm</div>
    
**Pair** là một template đơn giản trong thư viện `utility`, cho phép gộp hai đối tượng (có thể khác kiểu dữ liệu) thành một đơn vị duy nhất.
    
<div style="display: flex; justify-content: center; background: #1e293b; padding: 20px; border-radius: 12px; margin: 20px 0; border: 1px dashed #334155;">
        <div style="display: flex; align-items: center; gap: 10px;">
            <div style="background: #569cd6; color: white; padding: 15px; border-radius: 8px 0 0 8px; font-weight: bold; border: 2px solid #569cd6;">first</div>
            <div style="font-size: 24px; color: #fbbf24;">&harr;</div>
            <div style="background: #4ec9b0; color: white; padding: 15px; border-radius: 0 8px 8px 0; font-weight: bold; border: 2px solid #4ec9b0;">second</div>
        </div>
    </div>

**Đặc điểm:**
* Thành phần thứ nhất được truy cập qua tên biến `.first`.
* Thành phần thứ hai được truy cập qua tên biến `.second`.
* `pair` hỗ trợ các phép toán so sánh (`==`, `<`, `>`). Nó sẽ so sánh `first` trước, nếu bằng nhau mới so sánh đến `second`.
</div>

<div class="step-card border-orange">
    <div class="step-badge bg-orange">2. Khai báo</div>

```cpp
// 1. Khai báo pair rỗng
pair<int, string> p;

// 2. Khai báo và khởi tạo giá trị
pair<int, int> point = {10, 20};

// 3. Sử dụng hàm make_pair (C++ cũ)
pair<string, double> item = make_pair("Apple", 1.5);
```
</div>

<div class="step-card border-green">
    <div class="step-badge bg-green">3. Các thao tác cơ bản</div>

```cpp
pair<string, int> sv;

// Gán giá trị
sv.first = "Nguyen Van A";
sv.second = 2005;

// Truy xuất giá trị
cout << "Ten: " << sv.first << endl;
cout << "Nam sinh: " << sv.second << endl;

// Gán pair cho pair
pair<string, int> sv2 = sv; 
```
</div>

<div class="step-card border-purple">
    <div class="step-badge bg-purple">4. Ứng dụng của Pair</div>

**A. Trả về nhiều giá trị từ một hàm:**
```cpp
pair<int, int> findMinMax(int a[], int n) {
    // Giả sử tìm được min, max
    return {min_val, max_val};
}
```
**B. Kết hợp với Vector (Rất quan trọng trong CP):**
Dùng để lưu tọa độ $(x, y)$ hoặc danh sách đồ vật có trọng lượng và giá trị.
```cpp
vector<pair<int, int>> coordinates;
coordinates.push_back({1, 2});
coordinates.push_back({5, 10});

// Duyệt vector pair
for (auto p : coordinates) {
    cout << p.first << " " << p.second << endl;
}
```
</div>

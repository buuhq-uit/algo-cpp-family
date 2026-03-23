## 🏗️ Struct (Kiểu dữ liệu cấu trúc)
<br>
<div class="step-card border-blue">
    <div class="step-badge bg-blue">1. Khái niệm</div>
    
**Struct** là một kiểu dữ liệu do người dùng tự định nghĩa, cho phép gộp nhiều biến có kiểu dữ liệu khác nhau vào một tên gọi duy nhất.

```cpp
struct sinh_vien {
    int id;
    string ho_ten;
    string date;
    double diem;
}
```

**Đặc điểm:**
* Các biến bên trong được gọi là các **thành viên** (members).
* Giúp quản lý dữ liệu đối tượng thực tế một cách logic và trực quan (Ví dụ: Một thí sinh có số báo danh, họ tên, điểm các môn).
* Truy cập các thành viên thông qua toán tử dấu chấm `.`.
</div>

<div class="step-card border-orange">
    <div class="step-badge bg-orange">2. Khai báo và Khởi tạo</div>

```cpp
struct ToaDo {
    int x, y;
};

int main() {
    // 1. Khai báo biến kiểu struct
    ToaDo p1;
    
    // 2. Khởi tạo giá trị trực tiếp
    ToaDo p2 = {10, 20};
    
    // 3. Gán giá trị cho từng thành viên
    p1.x = 5;
    p1.y = 15;
}
```
</div>

<div class="step-card border-green">
    <div class="step-badge bg-green">3. Constructor (Hàm khởi tạo)</div>

Để viết code **nhanh hơn** trong lập trình thi đấu, ta nên định nghĩa hàm khởi tạo ngay trong **struct**:

```cpp
struct Student {
    string name;
    double gpa;

    // Constructor giúp tạo biến nhanh: Student s("An", 9.5);
    Student(string n, double g) {
        name = n;
        gpa = g;
    }
    
    // Constructor mặc định (cần thiết khi khai báo mảng)
    Student() {}
};
```
</div>

<div class="step-card border-purple">
    <div class="step-badge bg-purple">4. Nạp chồng toán tử so sánh (Operator Overloading)</div>

Đây là kỹ thuật cực kỳ quan trọng để sử dụng hàm `sort()` cho **mảng các struct**.

```cpp
struct Point {
    int x, y;
    
    // Định nghĩa phép toán < để sắp xếp
    bool operator < (const Point& other) const {
        // 1. Kiểm tra nếu hoành độ x khác nhau
        if (x != other.x) return x < other.x; // Nếu x nhỏ hơn thì Point này nhỏ hơn Point kia
        // 2. Nếu x bằng nhau, máy tính sẽ chạy xuống dòng này
        return y < other.y; // So sánh tiếp đến tung độ y
    }
};

vector<Point> a;
// Để sắp xếp danh sách các điểm lưu tỏng vector a tăng dần ta chỉ cần gọi hàm sort như bên dưới
sort(a.begin(), a.end());
```
</div>

<div class="step-card border-red">
    <div class="step-badge bg-red">5. Khi nào dùng Struct thay vì Pair?</div>

<table class="garden-table" style="table-layout: fixed; width: 100%;">
    <colgroup>
        <col style="width: 20%;">
        <col style="width: 40%;">
        <col style="width: 40%;">
    </colgroup>
    <tr class="idx-row">
        <td>Tiêu chí</td>
        <td>Pair</td>
        <td>Struct</td>
    </tr>
    <tr>
        <td class="idx-row">Số biến</td>
        <td class="val-cell">Luôn là 2</td>
        <td class="val-cell">Tùy ý (1, 2, 3...)</td>
    </tr>
    <tr>
        <td class="idx-row">Tên biến</td>
        <td class="val-cell">Cố định `first`, `second`</td>
        <td class="val-cell">Tự đặt theo ý nghĩa</td>
    </tr>
    <tr>
        <td class="idx-row">Ứng dụng</td>
        <td class="val-cell">Tọa độ 2D, cặp Key-Value</td>
        <td class="val-cell">Đối tượng phức tạp (Học sinh, SP...)</td>
    </tr>
</table>

**💡 Mẹo:** Trong các bài toán hình học, nếu chỉ có tọa độ $x, y$, dùng `pair<int, int>` cho nhanh. Nếu tọa độ $x, y, z$ hoặc cần lưu thêm màu sắc, ID điểm, hãy dùng `struct`.
</div>
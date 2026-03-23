## 🔤 Xâu Ký Tự (String)
<br>
<div class="step-card border-blue">
    <div class="step-badge bg-blue">1. Khái niệm</div>
    Trong C++, <b>String</b> thực chất là một mảng các ký tự. Mỗi ký tự trong xâu được đánh chỉ số (index) bắt đầu từ <b>0</b>.
    
<div class="illustration">
        <p><strong>📊 Minh họa xâu <code>s = "HELLO"</code>:</strong></p>
        <table class="garden-table">
            <tr class="idx-row">
                <td>Index</td>
                <td>0</td>
                <td>1</td>
                <td>2</td>
                <td>3</td>
                <td>4</td>
            </tr>
            <tr>
                <td class="idx-row">Value</td>
                <td class="val-cell">'H'</td>
                <td class="val-cell">'E'</td>
                <td class="val-cell">'L'</td>
                <td class="val-cell">'L'</td>
                <td class="val-cell">'O'</td>
            </tr>
        </table>
    </div>
</div>

<div class="step-card border-orange">
    <div class="step-badge bg-orange">2. Khai báo & Truy xuất</div>

```cpp
string s1; // Khai báo xâu rỗng
string s2 = "ChuyenTin"; // Khai báo có khởi tạo

// Truy xuất phần tử: dùng s[index] như mảng
char c = s2[0]; // c = 'C'
s2[0] = 'c'; // s2 trở thành "chuyenTin"
```
</div>

<div class="step-card border-green">
<div class="step-badge bg-green">3. Phép cộng chuỗi (Concatenation)</div>
Cần phân biệt kỹ hai cách cộng chuỗi vì chúng có <b>độ phức tạp thuật toán</b> khác nhau:

```cpp
s = s + A; // Thêm vào cuối (Nhanh).
s = A + s; // Thêm vào đầu (Chậm hơn vì phải đẩy toàn bộ xâu cũ về sau).

string s = "ABC";
s = s + "D"; // s = "ABCD"
s = "0" + s; // s = "0ABCD"
```
</div>

<div class="step-card border-red">
<div class="step-badge bg-red">4. Nguyên lý so sánh chuỗi</div>
C++ so sánh xâu theo <b>thứ tự từ điển (Lexicographical order)</b>: So sánh từng cặp ký tự từ trái sang phải dựa trên mã ASCII.

<div class="math-formula">
    Ví dụ: <code>"apple" < "apply"</code> vì <code>'e' < 'y'</code>. <br>
    Ví dụ: <code>"banana" > "band"</code> vì <code>'a' > 'd'</code> là sai, thực tế là <code>"banana" < "band"</code> vì <code>'a' < 'd'</code>.
</div>
</div>

<div class="step-card border-yellow">
<div class="step-badge bg-yellow">5. Các hàm xử lý thông dụng</div>

```cpp
string s = "Hello World";

// 1. Lấy độ dài xâu
int len = s.size(); // hoặc s.length()

// 2. Cắt xâu: s.substr(vị_trí_đầu, số_lượng)
string sub = s.substr(0, 5); // sub = "Hello"

// 3. Xóa ký tự: s.erase(vị_trí_đầu, số_lượng)
s.erase(0, 6); // s còn lại "World"

// 4. Chèn xâu kí tự: s.insert(vi_tri_bat_dau_chen, chuoi_can_chen)
string s = "Hello";
s.insert(5, " World"); // s = "Hello World"

// 5. Chuyển đổi Hoa/Thường (dùng cho từng ký tự)
char ToUpper(char c) {
    if (97 <= c && c <= 123) c -= 32; // Kiểm tra kí tự là chữ thường thì mới đổi
    return c;
}

char ToLower(char c) {
    if (65 <= c && c <= 91) c += 32; // Kiểm tra kí tự là chữ thường thì mới đổi
    return c;
}

// 6. Chuyển Xâu -> Số
int stringToInt(string s) {
    stringstream ss(s);
    int res;
    ss >> res;        // Đẩy từ luồng vào biến số
    return res;
}

long long stringToLL(string s) {
    stringstream ss(s);
    long long res;
    ss >> res;        // Đẩy từ luồng vào biến số
    return res;
}

double stringToDouble(string s) {
    stringstream ss(s);
    double res;
    ss >> res;        // Đẩy từ luồng vào biến số
    return res;
}

// 7. Chuyển Số -> Xâu
string numToString(double n) {
    stringstream ss;
    ss << n;          // Đẩy số vào luồng
    return ss.str();  // Trích xuất luồng thành xâu
}

// 8. Nhập xâu có dấu cách
getline(cin, s);
```
</div>

<div class="step-card border-purple">
<div class="step-badge bg-purple">6. Sắp xếp chuỗi</div>
Sắp xếp các ký tự trong xâu theo thứ tự bảng chữ cái:

```cpp
string s = "cba";
sort(s.begin(), s.end()); // s = "abc"
sort(s.begin(), s.end(), greater<char>()); // s = "cba"
```
</div>

<div class="step-card border-green">
<div class="step-badge bg-green">7. Tách từ bằng stringstream</div>
Kỹ thuật cực kỳ hữu ích để tách các từ trong một câu cách nhau bởi dấu cách.

```cpp
#include <sstream>
// ...
string line = "hoc sinh gioi tin hoc";
stringstream ss(line);
string word;
while (ss >> word) {
    cout << word << endl; // In ra từng từ trên mỗi dòng
}
```
</div>
#include <bits/stdc++.h>
using namespace std;

/* Cach 1:
long long subarraySum(const vector<int>& nums, long long k) {
    unordered_map<long long,long long> freq;
    freq[0] = 1;
    long long prefix = 0;
    long long count = 0;
    for (int num : nums) {
        prefix += num;
        auto it = freq.find(prefix - k);
        if (it != freq.end()) count += it->second;
        freq[prefix]++;
    }
    return count;
}
*/

/* thuật toán
cho mảng: nums = [1, 2, 3, 4]
prefix[i] = tổng từ từ vị trí 0 → tới vị trí i

prefix[0] = 1
prefix[1] = 1+2 = 3
prefix[2] = 1+2+3 = 6
prefix[3] = 1+2+3+4 = 10

# tổng của đoạn từ l → r
sum(l → r) = prefix[r] − prefix[l−1]
sum(1 → 3) = prefix[3] − prefix[0] = 10 - 1 = 9

sum(l → r) = k => prefix[r] - prefix[l-1] = k
prefix[r] - k = prefix[l-1] // Đây là dòng quan trọng nhất.

*/



long long subarraySum(const vector<int>& nums, long long k) {
    unordered_map<long long,long long> freq;
    freq[0] = 1;   // prefix = 0 xuất hiện 1 lần
    /* Vì nếu đoạn từ đầu mảng đến vị trí i có tổng = k:
    Gọi:    prefix[i] = tổng từ 0 → i
            prefix[i] = k   
            prefix[i] - k = 0

            sum(l → r) = prefix[r] − prefix[l−1] = k
            prefix[r] - k = prefix[l-1]
    */

    long long prefix = 0;
    long long count = 0;

    for (int num : nums) {
        prefix += num;

        if (freq.count(prefix - k))
            count += freq[prefix - k];

        freq[prefix]++;
    }

    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("LC560.INP", "r", stdin);
    freopen("LC560.OUT", "w", stdout);
    
    // code here with input: line 1: nums, line 2: k
    /*
    1 2 3
    3
    */
    vector<int> nums;
    long long k;
    
    // Đọc dòng 1: dãy số
    string line;
    getline(cin, line);

    stringstream ss(line);
    int x;
    while (ss >> x) {
        nums.push_back(x);
    }

    // Đọc dòng 2: k
    cin >> k;

    cout << subarraySum(nums, k) << "\n";

    return 0;
}
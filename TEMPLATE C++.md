# (5) TEMPLATE C++ THI CHUYÊN LHP + PTNK
> Không có code lời giải cụ thể.
> Chỉ template chuẩn để thi.

---

# I. FAST I/O + HEADER

```cpp
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
```

# II. PREFIX SUM 1D

```cpp
vector<ll> prefix(n+1, 0);
for(int i=1;i<=n;i++)
    prefix[i] = prefix[i-1] + a[i];
```

# III. PREFIX SUM 2D

```cpp
for(int i=1;i<=n;i++)
for(int j=1;j<=m;j++)
    pref[i][j] = a[i][j]
               + pref[i-1][j]
               + pref[i][j-1]
               - pref[i-1][j-1];
```

# IV. DIFFERENCE ARRAY

```cpp
vector<ll> diff(n+2,0);
diff[l] += val;
diff[r+1] -= val;

for(int i=1;i<=n;i++)
    diff[i] += diff[i-1];
```

# V. BINARY SEARCH ON ANSWER

```cpp
ll l = 0, r = 1e18, ans = -1;
while(l <= r){
    ll mid = l + (r-l)/2;
    if(check(mid)){
        ans = mid;
        r = mid - 1;
    } else {
        l = mid + 1;
    }
}
```

# VI. BFS GRID TEMPLATE

```cpp
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

queue<pii> q;
q.push({sx,sy});
visited[sx][sy] = true;

while(!q.empty()){
    auto [x,y] = q.front(); q.pop();
    for(int i=0;i<4;i++){
        int nx = x+dx[i], ny = y+dy[i];
        if(valid(nx,ny) && !visited[nx][ny]){
            visited[nx][ny]=true;
            q.push({nx,ny});
        }
    }
}
```

# VII. FAST POWER

```cpp
ll power(ll a, ll b){
    ll res = 1;
    while(b){
        if(b&1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
```

# VIII. GCD

```cpp
ll gcd(ll a, ll b){
    return b==0? a : gcd(b, a%b);
}
```

# IX. KNAPSACK 0/1

```cpp
vector<int> dp(W+1,0);
for(int i=0;i<n;i++){
    for(int w=W; w>=weight[i]; w--){
        dp[w] = max(dp[w], dp[w-weight[i]] + value[i]);
    }
}
```

# X. HASHMAP FREQUENCY

```cpp
unordered_map<ll,int> mp;
for(auto x : arr)
    mp[x]++;
```

# XI. CHECKLIST TRƯỚC KHI NỘP

- Kiểm tra overflow
- Kiểm tra biên
- Test n=1
- Test rỗng
- Test max constraint
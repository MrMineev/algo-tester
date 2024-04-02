#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <cstring>
#include <iomanip>
#include <climits>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <random>
#include <numeric>
  
// Policy Based Structures
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
  
using namespace __gnu_pbds;
using namespace std;
  
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<vector<ll>> vvll;
typedef vector<pair<ll, ll>> vpll;
  
const ll INF = 1e18;
  
#define _MATH_DEFINES_DEFINED
  
#define MP make_pair
#define pb push_back
#define printl cout << "\n";
#define dprintl cout << endl;
#define loop(x, n) for (ll x = 0; x < n; x++)
#define range(x, l, r) for (ll x = l; x < r; x++)
#define show(a) cout << (a) << "\n";
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define con cout << "NO\n"
#define coy cout << "YES\n";
#define max_el max_element
#define min_el min_element
#define stf shrink_to_fit
  
template<typename T>
void input(vector<T> &mas) {
  loop(i, mas.size()) {
    cin >> mas[i];
  }
}
  
template<typename T>
void output(vector<T> &mas) {
  loop(i, mas.size()) {
    cout << mas[i] << " ";
  }
  printl;
}
  
template<typename T>
void waste_read(ll n) {
  T ignore;
  for (ll i = 0; i < n; i++) cin >> ignore;
}
  
ll to_number(char c) {
  return (ll)c - (ll)'a' + 1;
}
  
char to_char(ll x) {
  return (char)(x + (ll)'a' - 1);
}
  
ll labs(ll n) {
  return (n < 0) ? -n : n;
}
  
ll lmin(ll a, ll b) {
  return (a < b) ? a : b;
}
  
ll lmax(ll a, ll b) {
  return (a > b) ? a : b;
}
  
ll lmod(ll a, ll b) {
  return ((a % b) + b) % b;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll a, b;
  cin >> a >> b;
  cout << a * b << endl;
  return 0;
}












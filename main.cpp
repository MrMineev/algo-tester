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
void waste_read(int n) {
  T ignore;
  for (int i = 0; i < n; i++) cin >> ignore;
}

ll to_number(char c) {
  return (ll)c - (ll)'a' + 1;
}

char to_char(ll x) {
  return (char)(x + (ll)'A' - 1);
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

ll mod(ll a, ll b) {
  return ((a % b) + b) % b;;
}

struct Triple {
  ll x, y, z;

  Triple() {}
  Triple(ll _x, ll _y, ll _z) : x(_x), y(_y), z(_z) {}
};

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) {
    ll n, k;
    cin >> n >> k;
  }
  return 0;
}













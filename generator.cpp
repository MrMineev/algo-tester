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
#define prlll cout << "\n";
#define dprlll cout << endl;
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
 
using namespace std;

int gen(int k) {
  random_device rd;
  mt19937 eng(rd());
  uniform_int_distribution<> distr(1, k);
  return distr(eng);
}

signed main() {
  ll n = gen(10);
  cout << n << endl;
  vll mas(n);
  iota(mas.begin(), mas.end(), 1);
  random_shuffle(mas.begin(), mas.end());
  for (int i = 0; i < n - 1; i++) {
    cout << mas[i] + mas[i + 1] << " ";
  }
  cout << endl;
  return 0;
}




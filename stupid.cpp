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

using namespace std;

using ll = long long;

typedef vector<ll> vll;

signed main() {
  ll n;
  cin >> n;
  vll sums(n - 1);
  for (ll i = 0; i < n - 1; i++) {
    cin >> sums[i];
  }
  vll mas(n);
  iota(mas.begin(), mas.end(), 1);
  do {
    bool a = true;
    for (ll i = 0; i < n - 1; i++) {
      if (mas[i] + mas[i + 1] != sums[i]) {
        a = false;
      }
    }
    if (a) {
      for (ll i = 0; i < mas.size(); i++) {
        cout << mas[i] << " ";
      }
      cout << endl;
      return 0;
    }
  } while (next_permutation(mas.begin(), mas.end()));
  return 0;
}





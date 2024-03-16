#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

using ll = long long;

signed main() {
  ll a, b;
  cin >> a >> b;
  if ((a + b) % 50 == 0) {
    cout << a + b + 1 << endl;
  } else {
    cout << a + b << endl;
  }
  return 0;
}





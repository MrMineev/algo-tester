#include <iostream>
#include <chrono>
#include <random>

using namespace std;

int gen(int k) {
  random_device rd;
  mt19937 eng(rd());
  uniform_int_distribution<> distr(1, k);
  return distr(eng);
}

signed main() {
  int a = gen(100000), b = gen(100000);
  cout << a << " " << b << endl;
  return 0;
}




#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> a = {1, 1, 2, 2};
  vector<int> b = {3, 3, 3, 4};
  int k = 5;
  bool flag;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] + b[i] < k) {
      flag = false;
      break;
    }
    flag = true;
  }
  string result = (flag ? "YES" : "No");

  cout << result << endl;
  return 0;
}

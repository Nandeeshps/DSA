#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> a = {1, 5, 10, 20, 40, 80};
  vector<int> b = {6, 7, 20, 80, 100};
  vector<int> c = {3, 4, 15, 20, 30, 70, 80, 120};
  vector<int> d;

  for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < b.size(); j++) {
      for (int k = 0; k < c.size(); k++) {
        if (a[i] == b[j] && b[j] == c[k]) {
          d.push_back(a[i]);
        }
      }
    }
  }
  for (int i = 0; i < d.size(); i++) {
    cout << d[i] << " ";
  }
  return 0;
}

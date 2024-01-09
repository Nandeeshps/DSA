#include <iostream>
#include <vector>
using namespace std;

int linear_search(const vector<int> &arr, int k) {
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == k) {
      return i;
    }
  }
  return -1;
}

int main() {
  vector<int> arr = {8, 5, 6, 7};
  int key = 6;
  cout << linear_search(arr, key) << endl;
  return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> a = {1, 2, 8, 10, 10, 19};
  int x;
  cin >> x;
  int floor = 0, ceil = 0;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] > x) {
      ceil = a[i];
      break;
    } else if (a[i] < x) {
      floor = a[i];
    }
  }
  if (floor == 0) {
    cout << "Floor not found"
         << " ceil: " << ceil << endl;
  } else if (ceil == 0) {
    cout << "Floor: " << floor << " ceil not found" << endl;
  } else {
    cout << "Floor:" << floor << " ceil: " << ceil << endl;
  }
  return 0;
}

#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &a) {
  int min;
  for (int i = 0; i < a.size() - 1; i++) {
    min = i;
    for (int j = i + 1; j < a.size(); j++) {
      if (a[j] < a[min])
        min = j;
    }
    if (min != i)
      swap(a[min], a[i]);
  }
}

int main() {
  vector<int> arr = {2, 7, 4, 1, 5, 3};
  selection_sort(arr);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
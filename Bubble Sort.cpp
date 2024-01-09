#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &arr){
  for(int i=0;i<arr.size()-1;i++){
    for(int j=0;j<arr.size();j++){
      if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    }
  }
}
int main() {
 vector<int> a = {2,7,4,1,5,3};
  bubble_sort(a);
  for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
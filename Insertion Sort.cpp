#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &arr){
  for(int i=1;i<arr.size();i++){
    int curr = arr[i];
    int j=i-1;
    while(arr[j] > curr && j>=0){
      arr[j+1] = arr[j];
      j = j-1;
    }
    arr[j+1] = curr;
  }
}

int main() {
vector<int> a = {12,45,23,51,19,8};
  insertion_sort(a);
  for(int i=0;i<a.size();i++){  
  cout<<a[i]<<' ';
  }
  
}
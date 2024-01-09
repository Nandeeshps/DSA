#include <iostream>
#include <vector>
using namespace std; 

void merge(vector<int> &arr,int l,int mid,int e){
  int n1 = mid-l+1;
  int n2 = e-mid;

  int a[n1],b[n2];
  for(int i=0;i<n1;i++){
   a[i] = arr[l+i];
  }
  for(int i=0;i<n2;i++){
   b[i] = arr[mid+1+i];
  }

  int i=0,j=0,k=l;
  while(i<n1 && j< n2){
    if(a[i]<b[j]){
      arr[k] = a[i];
      k++;
      i++;
    }else{
      arr[k] = b[j];
      k++;
      j++;
    }
  }

  while(i<n1){
    arr[k] = a[i];
    k++;
    i++;
  }

  while(j<n2){
    arr[k] = b[j];
    k++;
    j++;
  }
}

void merge_sort(vector<int> &arr,int l,int e){
 if(l<e){
  int mid = (l+e)/2;
  merge_sort(arr, l, mid);
  merge_sort(arr, mid+1, e);

  merge(arr,l,mid,e);
}
}

int main() {
  vector<int> a={9,8,7,6,5,2,1,3};
  int l=0;
  int e = a.size()-1;
  merge_sort(a,l,e);
  for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
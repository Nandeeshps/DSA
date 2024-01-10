int search(int arr[], int n, int x, int k)
{
    int index=0;
   for(int i=0;i<n;i++){
       if(arr[i] == x){
           index = i;
           return index;
       }
   }
   return -1;
}    
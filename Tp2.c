#include <stdio.h>
int add(int a, int b ){
 return a+b; 
}
int max(int a,int b) {
  if(a>b)
 return a;
  else
 return b;
}
float average (int arr[],int n){
 int sum=0;
 for(int i=0 ;i<n ;i++){
 sum=add(sum ,arr[i]);
}
 return(float)sum/n;
}
int main() {
  int n, i, largest;
  float avg;
  printf("enter the number of elements:");
  scanf("%d",&n);
  int arr[n];
  printf("enter the elements:\n");
  for(i=0; i<n;i++){
    scanf("%d",&arr[n]);
  }
  largest=arr[0];
  for(i=1;i<n;i++){
    largest=max(largest,arr[i]);
  }
  avg= average(arr,n);
  printf("largest number:%d\n",largest)
  printf("average:%.2f\n",avg);
 return 0;
}

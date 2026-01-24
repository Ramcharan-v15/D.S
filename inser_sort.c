#include <stdio.h>
void main() {
int arr[]={11, 13, 7, 4, 8, 9, 6};
int n=sizeof(arr)/sizeof(arr[0]) ;
int i,j,key;

for( i = 1; i < n; i++) {
  j=i-1;
key=arr[i];
while(j>=0 && key<arr[j]){
arr[j+1]=arr[j];
j--;
  }
arr[j+1]=key;
}
printf("Sorted array are: \n");
for(i=0;i<n;i++) {
printf("%d ", arr[i]);
}

}

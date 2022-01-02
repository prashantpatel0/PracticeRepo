#include<iostream>
using namespace std;
void reverse_array(int arr[],int start, int end){
  int temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;
  start++;
  end--;
  
}
void print_array(int arr[], int n){
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<"";
    cout<<endl;
  }
}
void main(){
  int arr[]={1,2,3,4,5};
  int n = sizeof(arr) / sizeof(arr[0]);
  print_array(arr, n);
  reverse_array(arr,0,n-1);
  print_array(arr, n);
}
#include <iostream>

using namespace std;
struct Pair{
    int min;
    int max;
};
Pair getminmax(int arr[], int n){
    struct Pair minmax;
    
    if(n==1){
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }
    
    if(arr[0]>arr[1]){
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else{
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
        
    for(int i=2; i<n; i++){
        if(arr[i]>minmax.max)
        minmax.max =arr[i];
        
        else if(arr[i]>minmax.min)
        minmax.min = arr[i] ;
    }
    return minmax;
    
}



int main()
{
   int arr[]={6,1,2,3};
   int n = 4;
   struct Pair minmax = getminmax(arr, n);
   cout<<minmax.min<<endl;
   cout<<minmax.max;
   return 0;
}

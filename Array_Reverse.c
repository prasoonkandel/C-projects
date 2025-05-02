#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <string.h>
void printArray(int arr[], int n);
void reverse (int arr[], int n);
int main()
{
    int arr[]= {1 , 2 , 3, 4 , 5 , 6 };
 reverse(arr,6);
 printArray(arr, 6);
    printf("\n");
    return 0;
}
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    
}
void reverse (int arr[], int n){
for (int i = 0; i < n/2; i++)

{


  int  firstVal = arr[i];
   int lastVal = arr[n - i - 1];
   arr[i]= lastVal;
    arr[n - i - 1] = firstVal;
}


    

}

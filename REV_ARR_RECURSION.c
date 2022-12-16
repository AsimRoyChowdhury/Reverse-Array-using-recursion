#include <stdio.h>

// recursive function to reverse an Array
int* reverse(int i, int n, int arr[])
{
    int temp;
    if(i>=n){
        return arr;
    }
    temp = arr[i];
    arr[i] = arr[n];
    arr[n] = temp;
    reverse(i+1, n-1, arr);
}


int main()
{
     int i, n, *arr;

     printf("Enter size of array: ");
     scanf("%d",&n);
    
    arr = (int*)malloc(n*sizeof(int));
     printf("Enter the elements of the array: ");
     for (i = 0; i < n; i++)
          scanf("%d", &arr[i]);
  
     printf("\nAfter reversing the array: ");
     // call the recursive function 
     arr = reverse(0, n-1, arr);
     
     for(int j = 0; j<n; j++){
         printf(" %d", arr[j]);
     }
     return 0;
}

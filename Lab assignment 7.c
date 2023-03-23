#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;

}// end swap
// implement bubble sort
void bubbleSort(int arr[], int n){
  int i, j, temp, swaps;
    for (i = 0; i < n - 1; i++) {
        swaps = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                // swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps++;
            }
        }
        printf("Number of swaps for index %d: %d\n", i, swaps);
    }

  
}// end bubbleSort
void printArray(int arr[], int size){
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
    printf("\n");
}// end printArray
// Driver program to test above functions
int main(){

  int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  int n = 9;
  printf("\nArray before sorting:\n");
  for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  printf("\n\n");
  bubbleSort(arr, n);
  printf("\nSorted array: \n");
  printArray(arr, n);
  return 0;
}// end main

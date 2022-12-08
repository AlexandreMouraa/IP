#include <stdio.h>
 
void countingSort(int array[], int size) {
  int output[size], i;
  
  int max = array[0];
  for (i = 1; i < size; i++) 
  {
    if (array[i] > max)
      max = array[i];
  }
 
  int count[max];
 
  for (i = 0; i <= max; ++i) 
  {
    count[i] = 0;
  }
  
  for (i = 0; i < size; i++) 
  {
    count[array[i]]++;
  }
 
  for (i = 1; i <= max; i++) 
  {
    count[i] += count[i - 1];
  }
  
  for (i = size - 1; i >= 0; i--) 
  {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }
 
  for (i = 0; i < size; i++) 
  {
    array[i] = output[i];
  }
}
 
void printArray(int array[], int size) 
{
  int i;
  for (i = 0; i < size; i++) 
  {
    printf("%d ", array[i]);
  }
 printf("\n");
}
 
int main() {
 
  int N = 0, i;
 
  scanf("%d", &N);
  
  while(N != 0)
  {
      int array[N];
    
      for(i = 0; i < N; i++)
      {
        scanf("%d", &array[i]);
      }
      
      countingSort(array, N);
      printArray(array, N);
    
      scanf("%d", &N);
  }
  return (0);
  
}
  
  

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int ARR_SIZE = 10;
  int ray[ARR_SIZE];
  int index;
  srand(time(NULL));
  for (index = 0; index < ARR_SIZE; index++){
    ray[index] = rand();
  }
  ray[9] = 0;
  for (index = 0; index < ARR_SIZE; index++){
    printf("%d ", ray[index]);
  }
  printf("\n");
  int yar[ARR_SIZE];
  int* r = ray;
  int* y = yar;
  for (index = 0; index < ARR_SIZE; index++){
    *(y + index) = *(r + ARR_SIZE - index - 1);
  }
  y = yar;
  for (index = 0; index < ARR_SIZE; index++){
    printf("%d ", *(y + index));
  }
  printf("\n");
  return 0;
}


#include <stdio.h>
int main(){
  int arr[6] = {8,9,6,5,4,3};
  int target = 3;
  int i;
  for (i = 0; i < 6; i++) {
    if (arr[i] == target) {
      printf("Position: %d\n", i);
    }
  }
  return 0;
}

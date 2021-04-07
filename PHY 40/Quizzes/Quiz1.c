#include <stdio.h>
#include <math.h>

int main() {
  int j;

  printf("Enter an integer\n");
  scanf("%i", &j);

  if(j % 2 == 0){
    printf("Integer is even\n");
  }
  else{
    printf("Integer is odd\n");
  }

  return 0;
}

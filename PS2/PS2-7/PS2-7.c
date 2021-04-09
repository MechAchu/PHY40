#include <stdio.h>
#include <math.h>
double myfunction();

int main(void){
  int j, N;
  double a, b, x, dx, f, integral=0;
  printf("Enter a, b, and N \n");
  scanf("%lf %lf %i", &a, &b, &N);
  dx = (b-a)/N;
  for(j = 0; j < N; j++){
    x = a + (j * dx);
    f = myfunction(x);
    integral += 2 * f;
  }
  integral = (dx/2) * (myfunction(a) + integral + myfunction(b));
  printf(" integral =   %lf  \n", integral);
}

double myfunction(double x){
  double fofx;
  fofx = pow((9-pow(x,2)), 0.5);
  return fofx;
}

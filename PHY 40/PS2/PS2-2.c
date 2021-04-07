#include <stdio.h>
#include <math.h>
double myfunction();

int main(void){
  double x, dx, A, B, deriv;
  printf("Enter x and dx \n");
  scanf("%lf %lf", &x, &dx);
  A = myfunction(x);
  B = myfunction(x+dx);
  deriv = (B-A)/dx;
  printf(" df/dx =  %lf    \n", deriv);
}

double myfunction(double x){
  double fofx;
  fofx = cos(x);
  return fofx;
}

/*
For x = 0.0 and dx = 0.01, we get df/dx = -0.050
For x = 1.57 and dx = 0.01, we get df/dx = -0.999987
*/

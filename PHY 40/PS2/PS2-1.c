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
  fofx = x*x;
  return fofx;
}

/*
For x = 3.0 and dx = 0.1, we get df/dx = 6.100
For x = 3.0 and dx = 0.01, we get df/dx = 6.010
For x = 3.0 and dx = 0.001, we get df/dx = 6.001
*/

#include <stdio.h>
#include <math.h>

int main() {

  double x, v, t=0, k, dt, a, m, b;
  int i, N;

  FILE * fileout;
  fileout = fopen("PS3-1-Data.txt", "w");

  printf("\nEnter initial x and v\n");
  scanf("%lf %lf", &x, &v);
  printf("\nEnter k, b, m, dt, and N\n");
  scanf("%lf %lf %lf %lf %i", &k, &b, &m, &dt, &N);

  for(i=1; i<N; i++){
    x += v*dt;
    a = ((-k*x)-(b*v))/m;
    v += a*dt;
    t += dt;

    fprintf(fileout, "\n%12.6lf %12.6lf %12.6lf", t, x, v);
  }
  fclose(fileout);
}

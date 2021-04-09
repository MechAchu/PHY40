#include <stdio.h>
#include <math.h>

int main() {
  double x, v, k, t=0, dt, a, m;
  int i, N;

  FILE * fileout;
  fileout = fopen("Dumbledore9.txt", "w");
  printf("\nEnter initial x, v\n");
  scanf("%lf %lf", &x, &v);
  printf("\nEnter k, m, N, dt\n");
  scanf("%lf %lf %i %lf", &k, &m, &N, &dt);

  for(i = 1; i < N + 1; i++){
    x += v*dt;
    a = (-k*x)/m;
    v += a*dt;
    t += dt;
    fprintf(fileout, "\nt :     %12.6lf         x :        %12.6lf\n", t, x);
  }
  fclose(fileout);
}

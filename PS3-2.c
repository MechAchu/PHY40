#include <stdio.h>
#include <math.h>

int main(){

  double x, m, v, k, dt, t=0, F, a;
  int i, N;

  FILE * fileout;
  fileout = fopen("PS3-2-Return.txt", "w");

  printf("\nEnter values for x, m, v, dt, N, and F\n");
  scanf("%lf %lf %lf %lf %i %lf", &x, &m, &v, &dt, &N, &F);

  for(i=1; i<N; i++){
    x += v*dt;
    a = F/m;
    v += a*dt;
    t += dt;

    fprintf(fileout, "\n%12.6lf, %12.6lf, %12.6lf\n", t, x, v);
  }
  fclose(fileout);
}

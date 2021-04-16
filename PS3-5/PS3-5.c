#include <stdio.h>
#include <math.h>

int main(){

  double x, y, vx, vy, ax, ay, dt, t=0;
  int i, N, m;

  printf("\nEnter x, y, vx, vy, dt\n");
  scanf("%lf %lf %lf %lf %lf", &x, &y, &vx, &vy, &dt);
  printf("\nEnter N and m\n");
  scanf("%i %i", &N, &m);

  FILE * fileout;
  fileout = fopen("PS3-5-Results.txt", "w");

  for(i=1; i < N+1; i++){
    x += vx*dt;
    y += vy*dt;
    ax = 0.0;
    ay = -9.8;
    vx += ax*dt;
    vy += ay*dt;
    t += dt;
    fprintf(fileout, "\n%12.6lf %12.6lf", x, y);
  }
  fclose(fileout);
}

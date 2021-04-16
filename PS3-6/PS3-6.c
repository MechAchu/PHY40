#include <stdio.h>
#include <math.h>

int main(){

  double G, Ms, Me, R, V, F;
  double x, y, vx, vy, dt, t=0, ax, ay, Fx, Fy;
  G = 6.67 * pow(10, -11);
  Ms = 2 * pow(10, 30);
  Me = 6 * pow(10, 24);
  R = 1.5 * pow(10, 11);
  V = 3 * pow(10, 4);
  F = (G*Ms*Me)/pow(R, 2);

  int i, N;

  printf("Enter N and dt\n");
  scanf("%i %lf", &N, &dt);

  printf("\nEnter x, y, vx, and vy\n");
  scanf("%lf %lf %lf %lf", &x, &y, &vx, &vy);

  FILE * fileout;
  fileout = fopen("PS3-6-Results.txt", "w");

  for(i=1; i < N+1; i++){
    x += vx*dt;
    y += vy*dt;
    Fx = (-F*x)/R;
    Fy = (-F*y)/R;
    ax = Fx/Me;
    ay = Fy/Me;
    vx += ax*dt;
    vy += ay*dt;
    t += dt;
    fprintf(fileout, "%12.6lf, %12.6lf\n", x, y);
  }
  fclose(fileout);
}

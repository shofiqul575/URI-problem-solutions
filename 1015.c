#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2;
    double distance,x,y;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    x=x2-x1;
    y=y2-y1;
    distance=sqrt((x*x)+(y*y));
    printf("%.4lf\n",distance);

}

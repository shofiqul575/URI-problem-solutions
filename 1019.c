#include<stdio.h>
int main()
{
    int N,h,m,s;
    scanf("%d",&N);
    //h=N/60;
    h=N/3600;
    m=N/60;
    m=m%60;
    s=N%60;
    printf("%d:%d:%d\n",h,m,s);
}

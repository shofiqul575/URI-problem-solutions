#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    float a,b,c,tarea,perimeter;
    cin>>a>>b>>c;
    if((a+b)>c&&(b+c)>a&&(c+a)>b){
        perimeter=a+b+c;
        printf("Perimetro = %.1f\n",perimeter);
    }
    else{
        tarea=((a+b)*c)/2;
        printf("Area = %.1f\n",tarea);
    }
    return 0;
}

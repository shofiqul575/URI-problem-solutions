#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,x_1,y_1,x_2,y_2,i,sum,sub,mul,div;
    char oprt_1,oprt_2,oprt;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x_1>>oprt_1>>y_1>>oprt>>x_2>>oprt_2>>y_2;
    }
    if(oprt=='+'){
        sum=(x_1*y_2+x_2*y_1)/(y_1*y_2);
        cout<<((x_1*y_2)+(x_2*y_1))<<"/"<<(y_1*y_2)<<" = "<<sum<<endl;
    }
}

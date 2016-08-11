#include<iostream>
using namespace std;
int main()
{
    int i,countr_1=0,countr_2=0,countr_3=0,countr_4=0;
    int n[5];
    for(i=0; i<5; i++)
    {
        cin>>n[i];
    }
    for(i=0; i<5; i++)
    {
        if(n[i]%2==0)
        {
            countr_1++;
        }
        if(n[i]%2!=0)
        {
            countr_2++;
        }
        if(n[i]>0)
        {
            countr_3++;
        }
        if(n[i]<0)
        {
            countr_4++;
        }
    }
    cout<<countr_1<<" valor(es) par(es)"<<endl;
    cout<<countr_2<<" valor(es) impar(es)"<<endl;
    cout<<countr_3<<" valor(es) positivo(s)"<<endl;
    cout<<countr_4<<" valor(es) negativo(s)"<<endl;
}





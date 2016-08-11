#include<iostream>
using namespace std;
int main()
{
    int val[3],i,j,temp;
    for(i=0; i<3; i++)
    {
        cin>>val[i];
    }
    for(i=0; i<3; i++)
    {
        j=i;
        while(j>0&&val[j-1]>val[j])
        {
            temp=val[j];
            val[j]=val[j-1];
            val[j-1]=temp;
            j--;
        }
        cout<<val[j]<<endl;
    }
}

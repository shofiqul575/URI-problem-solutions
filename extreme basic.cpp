#include<iostream>
using namespace std;
int main()
{
    int employ,salary;
    float amount,salary2,conv;
    cin>>employ>>salary>>amount;
    conv=100.0;//float(salary);
    salary2=(conv*amount);
    cout<<"NUMBER = "<<employ<<"\n"<<"SALARY = U$ "<<salary2<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    char operation;
    float no1,no2;
    cout<<"please enter the arithmetic operation you have to perform"<<endl;

    cin>>operation;
    cout<<"enter the two values"<<endl;
    cin>>no1>>no2;
    switch (operation)
    {
    case '+':
         cout<<"addition of values"<<endl;
         cout<<no1<<"+"<<no2<<"="<<endl;
        cout<<no1+no2;
        break;
    
        case '-' :
        cout<<"subtraction of values "<<endl;
        cout<<no1<<"-"<<no2<<"="<<endl;
        cout<<no1-no2;
        break;

        case '*' :
        cout<<"multiplication of values"<<endl;
        cout<<no1<<"*"<<no2<<"="<<endl;
        cout<<no1*no2;
        break;

        case '/' :
        cout<<"division of values"<<endl;
        cout<<no1<<"/"<<no2<<"="<<endl;
        cout<<no1/no2;
        break;

       
    default:
    cout<<"error!!... please enter the correct operation to perform";
        break;
    }

  return(0);
}

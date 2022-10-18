#include<iostream>
using namespace std;

int main()
{
    // swap the values of a and b
    int a,b,c ;
    cout<<"a :";
    cin>>a;
    cout<<"b :";
    cin>>b;
    
    c=b;
    b=a;
    a=c;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

    return 0;
}
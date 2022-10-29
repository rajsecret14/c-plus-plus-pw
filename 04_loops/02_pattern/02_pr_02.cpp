#include<iostream>
using namespace std;
int main(){

    int a ;
    cout << "write no.";
    cin>>a;
    int sum = 0;


    while (a>0){
        int lastdigit = a % 10;
        sum+=lastdigit;
        a/=10;

    }
cout<<sum<<endl;




    return 0;
}
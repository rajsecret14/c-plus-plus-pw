#include<iostream>
using namespace std;
int main(){

    bool exp1 = true;
    bool exp2 = false;
    cout << (exp1&&exp2)<<endl; //0
    cout<< (exp1||exp2)<<endl; //1
    cout<< (!exp1)<<endl; //0
    cout<< (!exp2)<<endl; //1

    int num1, num2;
    num1 = 6;
    num2 = 3;
    num1+=3; // 6 + 3 = 9
    num2+=2; // 3 + 2 = 5
    cout<<num1<<endl;
    cout<< num2 <<endl;


    return 0;
}
#include<iostream>
using namespace std;

int add(int num1, int num2){
        int sum = num1 + num2;
        return sum;
}

int add(int num1, int num2 ,int num3){
        int add_up = num1 + num2 - num3;
        return add_up;
}


int add(int num1, int num2 ,int num3, int num4){
        int add_up = num1 + num2 - num3 +num4;
        return add_up;
}

float add(float num1 , float num2){
        float sum = num1 + num2 ;
        return sum;
}

int main(){

     int a, b ;
     a = 113;
     b = 2 ;
     int c = 5 ;
     cout<< add(a,b)<<endl; // write the name of the function and then put he values in parenthesis.

     cout<<add(b,c)<<endl;

     cout<<add(a,a,c)<<endl;

     cout<<add(a,a,b,3)<<endl;

     cout<<add(5.2,3.4);

    




    return 0;
}

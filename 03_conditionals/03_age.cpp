#include<iostream>
using namespace std;
int main(){

    int age ;
    cout << "enter ur age "<<endl;
    cin >> age;
    if (age<12){
        (cout << "you are a child.");
    }
    else if (age>12 & age <18){
        (cout<< "you are a teenager.");
    }
    else if (age >=18 & age <50){
        (cout<<"you are an adult.");
    }
    else {
        (cout<<"you are old.");
    }



    return 0;
}
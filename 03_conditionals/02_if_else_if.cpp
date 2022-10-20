#include<iostream>
using namespace std;
int main(){

    int marks;
    cout << "Please input a number" <<endl;
    cin >>marks;
    if(marks>80){
        (cout<<"you got : A"<<endl);
    }
    else if (marks>60){
        (cout<<"you got : B"<<endl);
    }
    else if (marks>40){
        (cout<<"you got : C"<<endl);
    }
    else {
        (cout<<"you got : fail" <<endl);
    }





    return 0;
}
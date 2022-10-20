#include<iostream>
using namespace std;
int main(){
// this nested loop , i have modified it a little bit, somewhat tough to understand
    int marks;
    cout<<"enter ur marks"<<endl;
    cin>>marks;

    if (marks>33){
        if (marks>80){
            if (marks<=100){
            (cout<<"u passed with  great marks. EXELLENT");}
            else {
            (cout<<"good");
           }
        }
        else {
            (cout<<"just passed");
        }
    }
    else {
        (cout<<"fail"<<endl);
    }







    return 0;
}
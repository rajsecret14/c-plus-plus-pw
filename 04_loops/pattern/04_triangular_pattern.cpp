#include<iostream>
using namespace std;
int main(){
    cout<<"please enter ur no";
 int n;
 cin>>n;
 for(int i = 1; i<= n;i++){ //row
    for(int j = 1; j<= i;j++){ //column
        cout<<"*";

    }
    cout<<endl;
 }
    




    return 0;
}
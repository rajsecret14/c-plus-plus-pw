#include<iostream>
using namespace std;
int main(){
//print sum of n natural nos. / take input from user
    cout<<"please enter ur no."<<endl;
    int n ;
    cin>> n ;
    int sum = 0;

    for (int i = 0; i <= n; i++){
        sum = sum + i;

    }
    cout<<sum<<endl;

    




    return 0;
}
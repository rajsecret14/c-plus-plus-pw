#include<iostream>
using namespace std ;
int main (){
// search a number in an array
    int number [5] = {1,5,6,9,8};
    cout<<"Please input ur number"<<endl;
    int n ; 
    cin>>n;

    for (int a = 0 ; a < 5 ; a++){

        if (n == number[a]){
            cout<< "your number matched "<<n ;
            break;
        }
    }
     cout<<"ERROR... Ur no. "<<n<<" doesn't matched";

   

    return 0;
}
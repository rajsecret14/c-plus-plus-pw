#include<iostream>
using namespace std;
int main(){

    bool p = false;
    bool q = false;
    bool r = true;
    cout<<(p==q==r); //true
    // step wise understand
    /* 
    == will go left to right
    false == false means true 
    true ==  true means true 
    true means 1.
    output = 1
    
    */



    return 0;
}
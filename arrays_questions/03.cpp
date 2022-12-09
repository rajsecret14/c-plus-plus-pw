#include<iostream>
using namespace std;
int main(){
// ma'am way
    int array []= {100,6,119,411,5};

    int max = array[0];

    for(int i = 0; i < 5 ; i++){
        if (max < array[i]){
            max = array[i];
        }
    }
    cout<<max;  

    




    return 0;
}
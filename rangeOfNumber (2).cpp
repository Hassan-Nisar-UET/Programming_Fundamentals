#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter number"<<endl;
    cin>>number;
    if(number <=100 && number >=1){
        cout<<"number is in range of 100"<<endl;

    }
    else if(number <=500  && number >=100){
        cout<<"number is in range of 500"<<endl;

    }
    else if(number <=1000 && number >=500){
        cout<<"number is in range of 1000"<<endl;

    }
    else if(number > 1000){
           cout<<"number is out of range"<<endl;
    }
    else if(number<0){
        cout<<"number is negative"<<endl;
    }
}
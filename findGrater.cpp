#include <iostream>
using namespace std;
int main(){
    int number1;
    cout<<"enter number 1"<<endl;
    cin>>number1;
    int number2;
    cout<<"enter number 2"<<endl;
    cin>>number2;
    int number3;
    cout<<"enter number 3"<<endl;
    cin>>number3;
    if(number1 > number2 && number1 >number3){
        cout<<"number 1 is greater"<<number1<<endl;
    }
    else if(number2 > number1 && number2 > number3){
        cout<<"numer 2 is greater"<<number2<<endl;

    }
    else if(number3 > number1 && number3 > number2){
        cout<<"numer 3 is greater"<<number3<<endl;

    }
}
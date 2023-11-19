#include <iostream>
using namespace std;
int main(){
    float num2;
    float num;
    float avg=0;
    cout<<"enter number of inputs"<<endl;
    cin>>num;
    float num1=0;
    for(int i=1; i <=num ;i++){
        cout<<"enter your inputs"<<endl;
        cin>>num2;
        num1=num1+num2;
        cout<<num1<<endl;
    }
    avg=(num1)/(num);
    cout<<"average"<<avg<<endl;

}
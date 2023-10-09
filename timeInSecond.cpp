#include <iostream>
using namespace std;
int main(){
    int seconds;
    cout<<"enter seconds"<<endl;
    cin>>seconds;
    int hours;
    int minutes;
    hours=seconds/3600;
    seconds=seconds%3600;
    minutes=seconds/60;
    seconds=seconds%60;
    cout<<"hours..."<<hours<<endl;
    cout<<"minutes.."<<minutes<<endl;
    cout<<"seconds.."<<seconds<<endl;



} 
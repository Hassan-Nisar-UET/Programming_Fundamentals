#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"************************"<<endl;
    cout<<"     EXAMPLE  4.2       "<<endl;
    cout<<"************************"<<endl;
    float mass;
    float height;
    float time;
    float power;
    float g=9.8;
    cout<<"enter mass"<<endl;
    cin>>mass;
    cout<<"enter height"<<endl;
    cin>>height;
    cout<<"enter time"<<endl;
    cin>>time;
    power=(mass*g*height)/time;
    cout<<"power is"<<"  "<<power<<endl;
    }

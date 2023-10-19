#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"************************"<<endl;
    cout<<"     EXAMPLE  3.5       "<<endl;
    cout<<"************************"<<endl;
    float mass1;
    float mass2;
    float Vf;
    float V1;
    float V2;
    cout<<"enter mass1"<<endl;
    cin>>mass1;
    cout<<"enter mass2"<<endl;
    cin>>mass2;
    cout<<"enter Vf"<<endl;
    cin>>Vf;
    V1=(mass1-mass2)/(mass1+mass2);
    V1=V1*Vf;
    cout<<"value of V1 is"<<"..."<<V1<<endl;
    V2=(mass1*2)/(mass1+mass2);
    V2=V2*Vf;
    cout<<"value of V2 is"<<"..."<<V2<<endl;

}
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"**************************"<<endl;
    cout<<" EXAMPLE potential Energy "<<endl;
    cout<<"**************************"<<endl;
    float mass;
    float height;
    float g=9.8;
    float PE;
    cout<<"enter mass"<<endl;
    cin>>mass;
    cout<<"enter height"<<endl;
    cin>>height;
    PE=mass*g*height;
    cout<<"the potential energy is"<<"   "<<PE<<endl;

}
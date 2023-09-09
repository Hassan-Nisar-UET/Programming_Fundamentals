#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"************************"<<endl;
    cout<<"     EXAMPLE  5.4       "<<endl;
    cout<<"************************"<<endl;
    float mass=0;
    float time=0;
    float radius=0;
    float R=0;
    cout<<"enter mass"<<endl;
    cin>>mass;
    cout<<"enter time"<<endl;
    cin>>time;
    cout<<"enter radius"<<endl;
    cin>>radius;
    R=(2*3.1428)*(radius*radius)*(mass);
    R=R/time;
    cout<<"THE RADIUS IS"<<"   "<<R<<endl;

}

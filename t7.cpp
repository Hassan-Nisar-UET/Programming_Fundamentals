#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"************************"<<endl;
    cout<<"     EXAMPLE  5.2       "<<endl;
    cout<<"************************"<<endl;
    float mass=0;
    float velocity=0;
    float radius=0;
    float force=0;
    cout<<"enter mass"<<endl;
    cin>>mass;
    cout<<"enter velocity"<<endl;
    cin>>velocity;
    cout<<"enter radius"<<endl;
    cin>>radius;
    force=(velocity*velocity);
    force=force*mass;
    force=force/radius;

    cout<<"the required force is"<<"..."<<force<<endl;
}
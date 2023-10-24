#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"************************"<<endl;
    cout<<" EXAMPLE kinetic Energy "<<endl;
    cout<<"************************"<<endl;
    float mass;
    float velocity;
    float ke;
    cout<<"enter mass"<<endl;
    cin>>mass;
    cout<<"enter velocity"<<endl;
    cin>>velocity;
    ke=mass*(velocity*velocity);
    ke=ke/2;
    cout<<"THE Kinetic Energy is"<<"  "<<ke<<endl;

}
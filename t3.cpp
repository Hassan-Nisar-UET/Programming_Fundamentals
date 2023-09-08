#include <iostream>
using namespace std;
int main(){
    cout<<"************************"<<endl;
    cout<<"     EXAMPLE  3.2       "<<endl;
    cout<<"************************"<<endl;
    float mass;
    float Vf;
    float Vi;
    float time;
    float force;
    cout<<"enter mass"<<endl;
    cin>>mass;
    cout<<"enter Vf"<<endl;
    cin>>Vf;
    cout<<"enter Vi"<<endl;
    cin>>Vi;
    cout<<"enter time"<<endl;
    cin>>time;
    force=(mass*Vf-mass*Vi)/time;
    cout<<"FORCE IS"<<"  "<<force<<endl;
}
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"**************************"<<endl;
    cout<<"   EXAMPLE 9.2            "<<endl;
    cout<<"**************************"<<endl;
    float lamda;
    float distance;
    float length;
    float daltaY;
    cout<<"enter the value of lamda"<<endl;
    cin>>lamda;
    cout<<"enter value of distance"<<endl;
    cin>>distance;
    cout<<"enter value of length"<<endl;
    cin>>length;
    daltaY=(lamda*length)/distance;
    cout<<"the value of daltaY is"<<"  "<<daltaY<<endl;
    }
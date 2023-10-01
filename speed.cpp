#include <iostream>
using namespace std;
int main(){
    float speed;
    cout<<"enter the speed"<<endl;
    cin>>speed;
    if(speed <=10){
        cout<<"speed is slow"<<endl;
    }
    else if(speed > 10 && speed <= 50){
        cout<<"speed is average"<<endl;
    }
    else if(speed > 50 && speed <= 150){
        cout<<"speed is fast"<<endl;
    }
     else if(speed > 150 && speed <= 1000){
        cout<<"speed is ultra fast"<<endl;
    }
     else if(speed > 1000){
        cout<<"speed is extreamly fast"<<endl;
    }
}
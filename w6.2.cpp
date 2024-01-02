#include <iostream>
#include <cmath>
using namespace std;
float powerF(int num);
float fictorial(int);
int times=0;
int num=0;
int main(){
    cout<<""<<endl;
    cin>>times;
    powerF();
    
}
float powerF(){
float power;
    for(int i=0; i<=times; i=i+2){
        power=pow(num,times);
    }
    return power;
}
float fictorial(){
    float fic=1;
    for(int i=1; i<=num; i++){
        fic=fic*i;
    }
    return fic;
}
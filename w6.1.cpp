#include <iostream>
using namespace std;
int main(){
float num = 5.0;
float sqr = 6;
float sign=1;
float power=1;
float sum=0;
for(float i=0; i<=sqr; i=i+2){
    float fictorial =1;
    float power =1;
    for(float j=0; j<=num; j++){
        fictorial=fictorial*j;
        power=power*2;
    }    
        sum=sum+(sign*power/fictorial);
        sign=sign*-1;
    cout<<sum<<endl;
}
}
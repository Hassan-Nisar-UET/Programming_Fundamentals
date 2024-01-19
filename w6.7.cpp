#include <iostream>
using namespace std;
float bus(string time,int km);
float taxi(string time,int km);
float train(string time,int km);
void compair();
float f1=0;
float f2=0;
float f3=0;
int main(){
    
    string time;
    cout<<"enter the time"<<endl;
    cin>>time;
    float km;
    cout<<"enter tne kilometers"<<endl;
    cin>>km;
    f1=taxi(time,km);
    f2=bus(time,km);
    f3=train(time,km);
    compair();

}
float taxi(string time,int km){
    float fair=0;
   if(time == "day"){
      fair=km*0.79;
   }
   else if(time=="night"){
       fair=km*0.90;
   }
   return fair;
}
float bus(string time,int km){
    float fair=0;
    if(time == "day" || time == "night" && km >= 20){
        fair=km*0.09;
    }
    return fair;
}
float train(string time,int km){
    float fair=0;
    if(time == "day" || time == "night" && km >=100){
        fair=km*0.06;
    }
    return fair;
}
void compair(){

     if(f1<f2 && f1<f3){
         cout<<f1<<endl;
     }
     else if(f2<f1 && f2<f3){
         cout<<f2<<endl;
     }
     else if(f3<f1 && f3<f2){
         cout<<f3<<endl;
     }
}
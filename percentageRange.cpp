#include <iostream>
using namespace std;
int main(){
    float count,value,p1,p2,p3,p4,p5;
    float total1=0,total2=0,total3=0,total4=0,total5=0;
    cout<<"enter the value of count"<<endl;
    cin>>count;
    for(int i=1; i<=count; i++){
        cout<<"enter the values"<<endl;
        cin>>value;
        if(value >=0 && value <=200){
              p1++;
              total1=(p1/count)*100;
              
        }
        else if(value >=200 && value <=399){
              p2++;
              total2=(p2/count)*100;
              
        }
         else if(value >=400 && value <=599){
              p3++;
              total3=(p3/count)*100;
              
        }
         else if(value >=600 && value <=799){
              p4++;
              total4=(p4/count)*100;
              
        }
         else if(value >=800 && value <=1000){
              p5++;
              total5=(p5/count)*100;
              
        }
    }
    
    cout<<"p1"<<total4<<endl;
    cout<<"p2"<<total2<<endl;
    cout<<"p3"<<total3<<endl;
    cout<<"p4"<<total4<<endl;
    cout<<"p5"<<total5<<endl;
}
#include <iostream>
using namespace std;
float rateAndTime(int rate,int time,int incom);
float rateAndTimeO(int rate,int time,int incom);
int main(){
    int rate,time,incom;
    cout<<"enter the rate"<<endl;
    cin>>rate;
    cout<<"enter the time"<<endl;
    cin>>time;
    cout<<"enter the incom"<<endl;
    cin>>incom;
    cout<<"enter R if you are assistant other wise enter O"<<endl;
    char cheracter;
    cin>>cheracter;
    if(cheracter == 'R'){
      time=rateAndTime(rate,time,incom);
      cout<<time<<endl;
    }
    else if(cheracter == 'O'){
          time=rateAndTimeO(rate,time,incom);
          cout<<time<<endl; 
    }




}
float rateAndTime(int r,int t,int i){
     float bill;
    if(i<=25000 && t <= 30){
      
      bill=r;
    }
    
    else if(i>25000 && t > 30){
      int realTime;
      realTime=t-30;
      bill=r*0.40*(realTime/60);
    }
    return bill;
}
float rateAndTimeO(int r,int t,int i){
     float bill;
    if(i <= 25000 && t <= 20){
      
      bill=r;
    }
    
    else if(i>25000 && t > 20){
      int realTime;
      realTime=t-30;
      bill=r*0.70*(realTime/60);
    }
    return bill;
}
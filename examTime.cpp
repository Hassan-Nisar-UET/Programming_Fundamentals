#include <iostream>
using namespace std;
int main(){
    int hours1;
    cout<<"eter the starting hours"<<endl;
    cin>>hours1;
     int minutes1;
    cout<<"eter the starting miutes"<<endl;
    cin>>minutes1;
    int hours2;
    cout<<"eter the arrival arrival hours"<<endl;
    cin>>hours2;
    int minutes2;
    cout<<"eter the arival miutes"<<endl;
    cin>>minutes2;
    int minuteT;
    int hoursT;
    if(hours1 > 0 && hours1 <=23 && hours2 > 0 && hours2 <=23 && minutes1 > 0 && minutes1 <=59 && minutes2 > 0 && minutes2 <=59){
       if(hours1 == hours2 && minutes1 == minutes2){
           cout<<"student is on time"<<hours1<<":"<<  minutes1<<endl;
       }
      /* else if(hours1 >= hours2 && minutes1 >= minutes2 ){
           minuteT=minutes1-minutes2;
           hoursT=hours1-hours2;
           if(minuteT <= 30){
               cout<<"student is on time"<<hoursT<<":"<<minuteT<<endl;
           }*/
           
       
    }   
    else if(hours1 < hours2 || hours1 > hours2 && minutes1 < minutes2 || minutes1 > minutes2){
        if(minutes1 < minutes2 && hours1 < hours2){
            minuteT=(minutes1-minutes2)*(-1);
            hoursT=(hours1-hours2)*(-1);
            cout<<"student is lata"<<hoursT<<":"<<minuteT<<endl;
        }
        else if (hours1 >= hours2 && minutes1 >= minutes2){
            minuteT=minutes1-minutes2;
            hoursT=hours1-hours2;
            cout<<"student is on time"<<hoursT<<":"<<minuteT<<endl;
        }
        
          
    }
}

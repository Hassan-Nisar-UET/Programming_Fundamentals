#include <iostream>
using namespace std;
int main(){
    
    int bill;
    char scode;
    cout<<"enter your service code"<<endl;
    cin>>scode;
    if(scode == 'r'){
        int minutes;
        cout<<"enter the minutes"<<endl;
        cin>>minutes;
        if( minutes > 50){
            bill=10+(minutes * 0.20);
            cout<<"amount..."<<bill<<endl;
            cout<<"type..."<<scode<<endl;
            cout<<"minutes..."<<minutes<<endl;
       }
    
     else if( minutes < 50){
             cout<<"bill..0"<<endl;
        }
    }
    if(scode == 'p' ){
       string ptime;
       cout<<"enter the time d or n"<<endl;
       cin>>ptime;
       int minutes;
        cout<<"enter the minutes"<<endl;
        cin>>minutes;
       if(ptime == "d" && minutes < 75){
           cout<<"bill..0"<<endl;
       }
       else if(ptime == "d" && minutes > 75){
           bill=25+(minutes*0.10);
           cout<<"amount..."<<bill<<endl;
           cout<<"type..."<<scode<<endl;
           cout<<"minutes..."<<minutes<<endl;
       }
       else if(ptime == "n" && minutes < 100){
           cout<<"bill..0"<<endl;
       }
       else if(ptime == "n" && minutes > 100){
           bill=25+(minutes*0.05);
           cout<<"amount..."<<bill<<endl;
           cout<<"type..."<<scode<<endl;
           cout<<"minutes..."<<minutes<<endl;
       }
    }
    if(scode != 'r' || scode != 'p'){
        cout<<"in valid code type"<<endl;
    }
}

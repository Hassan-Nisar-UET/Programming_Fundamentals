#include <iostream>
using namespace std;
int days;
float workingDays(int days);
float gameTime(int holyDays,int totalDays);
float sleepTime(float playTime);
void minutesToHours(int tomSleep);


float playTime;
int tomSleep;
float hours;
float minutes;

int main(){
    int holyDays;
    int totalDays;
    cout<<"enter the holydays"<<endl;
    cin>>holyDays;
    totalDays = workingDays(holyDays);
    gameTime( holyDays, totalDays);
    sleepTime(playTime);
    minutesToHours(tomSleep);
}
float workingDays(int days){
    int work;
    work = 365 - days;
    return work;
}
float gameTime(int holyDays,int totalDays){
    playTime=(totalDays * 63 + holyDays * 127);
    return playTime;
}
float sleepTime(float playTime){
    tomSleep=30000-playTime;
    return tomSleep;
}
void minutesToHours(int tomSleep){
    hours=tomSleep/60;
    minutes=tomSleep%60;
    if(playTime <= 30000){
        cout<<"tom sleep well"<<endl;
        cout<<hours<<"hours and"<<minutes<<"   minutes less for play"<<endl;
    }
    else if(playTime > 30000){
        cout<<"tom will run"<<endl;
        cout<<hours*-1<<"hours and"<<minutes*-1<<"   for play"<<endl;
    }

    
}
#include <iostream>
using namespace std;
int main(){
    int player1;
    cout<<"enter the time of player 1"<<endl;
    cin>>player1;
    int player2;
    cout<<"enter the time of player 2"<<endl;
    cin>>player2;
    int player3;
    cout<<"enter the time of player 3"<<endl;
    cin>>player3;
    int total_time;
    total_time=player1+player2+player3;
    int minutes;
    minutes=total_time/60;
    int seconds;
    seconds=total_time%60;
    cout<<"total time is.."<<minutes<<":"<<seconds<<endl;
}
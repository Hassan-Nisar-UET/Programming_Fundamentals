#include <iostream>
using namespace std;
int main(){
    char a; 
    cout<<"enter the customer type"<<endl;
    cin>>a;
    int minutes;
    cout<<"enter the minutes"<<endl;
    cin>>minutes;
    int bill;
        if(minutes < 0 && a != 'r' || a != 'c' ){
            cout<<"you enter negative value"<<endl;
        }
            else if(minutes < 300 && a == 'c'){
            bill=(minutes*20)/100;
            cout<<"your bill is"<<bill<<endl;
        }
        else if(minutes > 300 && a == 'c'){
            minutes=minutes-300;
            bill=(300*20)+(minutes*15);
            bill=bill/100;
            cout<<"your bill is"<<bill<<endl;
        }
        else if(minutes > 60 && a == 'r' && minutes <=168){
            bill=minutes-60;
            bill=(bill*10)/100;
            bill=bill+5;
            cout<<"your bill is"<<bill<<endl;
        }
        else if(minutes < 60 && a == 'r'){
            cout<<"your bill is 5 dollars"<<endl;
        }
        else if(minutes > 168 ){
            cout<<"you enter invalid minutes"<<endl;
        }
        else if(a != 'r' || a != 'c' ){
            cout<<"you enter invalid type"<<endl;
        }
        
       


}
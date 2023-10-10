#include <iostream>
using namespace std;
int main(){
    float bill;
    int unit;
    cout<<"enter the units"<<endl;
    cin>>unit;
    float percent;
    percent=(20/100)*100;
    if(unit <=50){
       bill=unit*0.05;
       bill=bill+percent;
       cout<<"your total bill is.."<<bill<<endl;
    }
    else if(unit >= 50 && unit <=150){
        bill=unit*0.75;
        bill=bill+percent;
        cout<<"your total bill is.."<<bill<<endl;
    }
    else if(unit >= 150 && unit <=250){
        bill=unit*1.20;
        bill=bill+percent;
        cout<<"your total bill is.."<<bill<<endl;
    }
    else if(  unit > 250){
        bill=unit*1.50;
        bill=bill+percent;
        cout<<"your total bill is.."<<bill<<endl;
    }
}
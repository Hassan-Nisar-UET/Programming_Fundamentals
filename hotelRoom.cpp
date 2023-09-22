#include <iostream>
using namespace std;
int main(){
    float totalAmount;
    string month;
    cout<<"enter month"<<endl;
    cin>>month;
    int stay;
    cout<<"enter the number of stay"<<endl;
    cin>>stay;
    if(month == "may" || month == "october" && stay <= 14 && stay >7 ){
       totalAmount = (65*stay);
       cout<<"price of apartment"<<totalAmount<<endl;
       totalAmount = (50*stay)- (50*stay*5)/100;
       cout<<"price of studio"<<totalAmount<<endl;
    
     if(month == "may" || month == "october" && stay > 14 ){
       totalAmount = (65*stay)-(65*stay*10)/100;
       cout<<"price of apartment"<<totalAmount<<endl;
       totalAmount = (50*stay)- (50*stay*30)/100;
       cout<<"price of studio"<<totalAmount<<endl;
    }
     else if(month == "may" || month == "october" && stay <= 7 ){
       totalAmount = (65*stay);
       cout<<"price of apartment"<<totalAmount<<endl;
       totalAmount = (50*stay);
       cout<<"price of studio"<<totalAmount<<endl;
    }
    }
     else if(month == "june" || month == "september" && stay > 14 ){
       totalAmount = (68.70*stay)-(68.70*stay*10)/100;
       cout<<"price of apartment"<<totalAmount<<endl;
       totalAmount = (75.20*stay)- (75.20*stay*20)/100;
       cout<<"price of studio"<<totalAmount<<endl;
    }
      else if(month == "june" || month == "september" && stay <= 14 ){
       totalAmount = (68.70*stay);
       cout<<"price of apartment"<<totalAmount<<endl;
       totalAmount = (75.20*stay);
       cout<<"price of studio"<<totalAmount<<endl;
    }
      else if(month == "july" || month == "august" && stay <= 200 && stay >14 ){
       totalAmount = (77*stay)-(77*stay*10)/100;
       cout<<"price of apartment"<<totalAmount<<endl;
       totalAmount = (76*stay);
       cout<<"price of studio"<<totalAmount<<endl;
    }
      else if(month == "july" || month == "august" && stay <= 14 ){
       totalAmount = (77*stay);
       cout<<"price of apartment"<<totalAmount<<endl;
       totalAmount = (76*stay);
       cout<<"price of studio"<<totalAmount<<endl;
    }
}
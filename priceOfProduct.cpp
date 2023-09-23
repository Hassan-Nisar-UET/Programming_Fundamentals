#include <iostream>
using namespace std;
int main(){
    float discount1;
    float discount2;
    float discount3;
    float discount;
    int totalPrice;
    int product1;
    cout<<"enter the price of product 1"<<endl;
    cin>>product1;
    int product2;
    cout<<"enter the price of product 2"<<endl;
    cin>>product2;
    int product3;
    cout<<"enter the price of product 3"<<endl;
    cin>>product3;
    int product4;
    cout<<"enter the price of product 4"<<endl;
    cin>>product4;
    int product5;
    cout<<"enter the price of product 5"<<endl;
    cin>>product5;
    totalPrice=product1+product2+product3+product4+product5;
    if (totalPrice>1 && totalPrice<=1000){
        discount=totalPrice-(totalPrice*1)/100;
        discount1=(1*totalPrice)/100;
         cout<<"your discount is.."<<discount1<<endl;
        cout<<"your discount is.."<<discount<<endl;
        cout<<"total price is .."<<totalPrice<<endl;
    }
     else if (totalPrice>1000 && totalPrice<=10000){
        discount=totalPrice-(5*totalPrice)/100;
        discount2=(5*totalPrice)/100;
         cout<<"your discount is.."<<discount2<<endl;
        cout<<"your after discount is.."<<discount<<endl;
        cout<<"total price is .."<<totalPrice<<endl;
    }
     else if (totalPrice>10000 && totalPrice<=100000){
        discount=totalPrice-(10*totalPrice)/100;
        discount3=(10*totalPrice)/100;
         cout<<"your discount is.."<<discount3<<endl;
        cout<<"your after discount is.."<<discount<<endl;
        cout<<"total price is .."<<totalPrice<<endl;
    }

    
    

}
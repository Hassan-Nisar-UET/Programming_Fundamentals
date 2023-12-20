#include <iostream>
using namespace std;
int main(){
    int idx=-2;
    string fruit1;
    int kg;
    string fruit[]={"peach","apple","banana","orange"};
    int price[]={60,70,40,30};
    float total=0;
    cout<<"enter the fruit name"<<endl;
    cin>>fruit1;
    cout<<"enter the weight of fruit in kg"<<endl;
    cin>>kg;
    for(int i=0;i<=3;i++){
       if(fruit1 == fruit[i]){
          total=kg*price[i];
        
                
        }
        
    }
    
    cout<<"the total price is.."<<total<<endl;


    
}
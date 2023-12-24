#include <iostream>
using namespace std;
int main(){
    float total=0;
    int idx=-5;
    string arr[]={"war","appe","empire","meg","kingdom"};
    string movie;
    cout<<"enter the movie name"<<endl;
    cin>>movie;
    for(int i=0; i<=4; i++){
        if(movie == arr[i]){
           idx=i;

    }    
    }   
           if(idx%2==1){
              total=(500*5)/100;
              cout<<"price with 5 % discount.. "<<500-total<<endl;
           }
           else{
               total=(500*10)/100;
               cout<<"price with 10 % discount.."<<500-total<<endl;
           }
        
    
}
#include <iostream>
using namespace std;
int main(){
    int bonus;
    int points;
    cout<<"enter points"<<endl;
    cin>>points;
    
    if(points <= 100){
        if(points % 2 == 0){
            bonus=(points*5)/100;
            cout<<" points"<<bonus+1<<endl;
             cout<<"total points"<<bonus+points+1<<endl;
        }
        else if(points % 5 == 0){
           bonus=(points*5)/100;
           cout<<" points"<<bonus+2<<endl;
             cout<<"total points"<<bonus+points+2<<endl;
        }
        else{bonus=(points*5)/100;
             cout<<" points"<<bonus<<endl;
             cout<<"total points"<<bonus+points<<endl;
             }
    }
    else if(points > 100 && points <=1000){
          if(points % 2 == 0){
            bonus=(points*20)/100;
            cout<<" points"<<bonus+1<<endl;
             cout<<"total points"<<bonus+points+1<<endl;
        }
        else if(points % 5 == 0){
           bonus=(points*20)/100;
            cout<<" points"<<bonus+2<<endl;
             cout<<"total points"<<bonus+points+2<<endl;
        }
        else{bonus=(points*20)/100;
             cout<<" points"<<bonus<<endl;
             cout<<"total points"<<bonus+points<<endl;
             }
    }
     else if(points > 1000){
          if(points % 2 == 0){
            bonus=(points*10)/100;
            cout<<"points"<<bonus+1<<endl;
             cout<<"total points"<<bonus+points+1<<endl;
        }
        else if(points % 5 == 0){
           bonus=(points*10)/100;
           cout<<"points"<<bonus+2<<endl;
             cout<<"total points"<<bonus+points+2<<endl;
        }
        else{bonus=(points*10)/100;
             cout<<" points"<<bonus<<endl;
             cout<<"total points"<<bonus+points<<endl;
             }
    }
}

#include <iostream>
using namespace std;
int main(){
    string type;
    cout<<"enter the type of screening"<<endl;
    cin>>type;
    int rows;
    cout<<"enter the rows"<<endl;
    cin>>rows;
    int colum;
    cout<<"enter the colum"<<endl;
    cin>>colum;
    float price;
    if(type == "premiere" ){
       price=(rows*colum)*12;
       cout<<"total incom is..."<<price<<endl;
    }
    else if(type == "normal" ){
       price=(rows*colum)*7.50;
       cout<<"total incom is..."<<price<<endl;
    }
    else if(type == "discount" ){
       price=(rows*colum)*7.50-5;
       cout<<"total incom of discount for normal."<<price<<endl;
       price=(rows*colum)*12-5;
       cout<<"total incom of discount for premiere."<<price<<endl;
    }
}
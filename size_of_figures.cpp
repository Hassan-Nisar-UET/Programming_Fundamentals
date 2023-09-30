#include <iostream>
using namespace std;
int main(){
    string figure;
    cout<<"enter the figure name"<<endl;
    cin>>figure;
    if(figure == "square"){
        int sqr;
        cout<<" enter length"<<endl;
        cin>>sqr;
        sqr=sqr*sqr;
        cout<<"sqr.."<<sqr<<endl;
    }
    else if(figure == "rectangle"){
        float length,width,total;
        cout<<" enter length"<<endl;
        cin>>length;
        cout<<" enter width"<<endl;
        cin>>width;
        total=length*width;
        cout<<"rectangle"<<total<<endl;
    }
    else if(figure == "circle"){
        float radius,area;
        cout<<"enter radius"<<endl;
        cin>>radius;
        area=(radius*radius)*(3.1428);
        cout<<"circle"<<area<<endl;
    }
    else if(figure == "triangle"){
        float base,height,total;
        cout<<" enter base"<<endl;
        cin>>height;
        cout<<" enter height"<<endl;
        cin>>base;
        total=(base*height)/2;
        cout<<"triangle"<<total<<endl;
    }
}
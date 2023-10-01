#include <iostream>
using namespace std;
int main(){
    float avg;
    int math;
    cout<<"enter math  grades"<<endl;
    cin>>math;
    int eng;
    cout<<"enter eng  grades"<<endl;
    cin>>eng;
    int phy;
    cout<<"enter physics  grades"<<endl;
    cin>>phy;
    int chem;
    cout<<"enter chemistry  grades"<<endl;
    cin>>chem;
    int urdu;
    cout<<"enter urdu  grades"<<endl;
    cin>>urdu;
    avg=(math+phy+chem+eng+urdu)/5;
    if(avg >= 50 && avg < 60){
        cout<<"you got E grade"<<endl;
    }else if(avg >= 90 && avg < 100){
        cout<<"you got A grade"<<endl;
    }
    else if(avg >= 80 && avg < 90){
        cout<<"you got B grade"<<endl;
    }
    else if(avg >= 70 && avg < 80){
        cout<<"you got C grade"<<endl;
    }
    else if(avg >= 60 && avg < 70){
        cout<<"you got D grade"<<endl;
    }
    else if(avg >= 40 && avg < 30){
        cout<<"you got E grade"<<endl;
    }
    else if(avg < 40 ){
        cout<<"you got A grade"<<endl;
    }
    
}
#include <iostream>
using namespace std;
int main(){
    int milk;
    cout<<"enter the amount of milk"<<endl;
    cin>>milk;
    float carton=3.78;
    float profit;
    cout<<"enter producing profit"<<endl;
    cin>>profit;
    float cost;
    cout<<"enter the producing cost"<<endl;
    cin>>cost;
    float cartonNeed;
    float totalProfit;
    float producingCost;
    cartonNeed=milk/carton;
    producingCost=cost*milk;
    totalProfit=profit*cartonNeed;
    cout<<"total profit is.."<<totalProfit<<endl;
    cout<<"producing cost is.."<<producingCost<<endl;
    cout<<"cartons required.."<<cartonNeed<<endl;

}
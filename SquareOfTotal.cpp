#include<iostream>

using namespace std;

double power(double a){
    return a*a;
}

double SOT(double a, double b){
    return power(a+b);
}

int main(){
    double a, b;
    cin>>a>>b;

    cout<<SOT(a, b);

    return 0;
}
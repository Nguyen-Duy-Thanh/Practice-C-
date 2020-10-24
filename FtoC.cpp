#include<iostream>

using namespace std;

double FtoC(double F){
    F-=273;
    return F;
}

int main(){
    double F=400;
    //cin >> F;//
    double C=FtoC(F);
    cout << F<< endl<< C;
    return 0;
}
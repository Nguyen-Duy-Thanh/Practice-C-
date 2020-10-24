#include<iostream>

using namespace std;

bool isFactor(int a,int b){
    if(a%b==0) return true;
    return false;
}

void perfectNumber(int a){
    int k=a;

    for(int i=1; i<a; i++){
        if(isFactor(a, i)) k-=i;
    }
    if(k==0) cout<<a<<endl;
}

int main(){
    int a;
    cin>>a;

    for(int i=1; i<=a; i++){
        perfectNumber(i);
    }

    return 0;
}
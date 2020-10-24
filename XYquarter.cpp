#include<iostream>

using namespace std;

void XYquarter(double x, double y){
    int quarter;
    
    if(x!=0&&y!=0){
        if(x>0&&y>0) quarter=1;
        if(x<0&&y>0) quarter=2;
        if(x<0&&y<0) quarter=3;
        if(x>0&&y<0) quarter=4;
        cout<<"Diem thuoc goc phan tu thu "<<quarter;
    }

    if(x==0&&y!=0) cout<<"Diem thuoc Oy";
    if(y==0&&x!=0) cout<<"Diem thuoc Ox";
    if(x==0&&y==0) cout<<"Diem la goc toa do";
}

int main(){
    double x, y;
    cin>>x>>y;

    XYquarter(x, y);
    
    return 0;
}
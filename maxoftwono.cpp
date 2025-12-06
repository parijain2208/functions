#include <iostream>
using namespace std;
void max(int a,int b){
    if (a>b){
        cout<<"maximum"<<a;
    }else{
        cout<<"maximum"<<b;
    }
}
int main(){
    int a,b;
    cout<<"enter first no";
    cin>>a;
    cout<<"enter second no";
    cin>>b;
    max(a,b);
}

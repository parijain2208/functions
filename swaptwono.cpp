#include <iostream>
using namespace std;
void swap(int a,int b){
    int temp;
    //temp=a;
    //a=b;
    //b=temp;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapped "<<a<<" "<<b;
}
int main(){
    int a,b;
    cout<<"enter number";
    cin>>a;
    cout<<"enter number";
    cin>>b;
    swap(a,b);
}
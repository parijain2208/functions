#include <iostream>
using namespace std;
void factorail(int a){
    int fact=1;
    for (int i=1;i<=a;i++){
        fact*=i;
    }
    cout<<fact;
}
int main(){
    int a;
    cout<<"enter number";
    cin>>a;
    factorail(a);
}
#include <iostream>
using namespace std;
void square(int a){
    int sq=a*a;
    cout<<sq;
}
int main(){
    int a;
    cout<<"enter number";
    cin>>a;
    square(a);
}
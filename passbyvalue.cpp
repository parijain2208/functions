#include<iostream>
#include<vector>
using namespace std;
void change(int &x){
    x=10;
}
int main(){
    int x=5;
    cout<<x;
    change(x);
    cout<<x;
}
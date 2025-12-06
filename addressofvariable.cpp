#include <iostream>
using namespace std;
void function(int x,int y){
    cout<<"address in x func"<<&x<<endl;
    cout<<"address in y func"<<&y<<endl;
}
int main(){
    int x=5;
    int y=3;
    cout<<"address in mainx func"<<&x<<endl;
    cout<<"address in mainy func"<<&y<<endl;
    function(x,y);
}
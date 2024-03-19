#include<iostream>
using namespace std;
int product(int x,int y){
    int *p1=&x;
    int *p2=&y;
    int mul=(*p1)*(*p2);
    int *product =&mul;
    return *product;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"the product is "<<product(a,b);
}
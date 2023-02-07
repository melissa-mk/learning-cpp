#include<iostream>
using namespace std;

int fact(int n){
    if(n < 0) return -1;
    if(n==0) return 1;

    int smallerAnswer = fact(n-1);
    return n*smallerAnswer ;
}

int main(){
int num;
cout<<"Enter a number to find a factorial for: ";
cin>>num;
    int res = fact(num);
    cout<< res <<endl;
    return 0;
}


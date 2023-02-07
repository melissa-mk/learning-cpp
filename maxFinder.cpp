#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3, max;
    cout<<"Enter the three numbers"<<endl;
    cin>>n1>>n2>>n3;
    
    max = ((n1 > n2)&&(n1>n3)) ? n1 : (n2>n3)?n2:n3; 
    cout << "The largest number is "<< max;
    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b, hypo;
    char userRepeatBool;

    startCalc:
        cout<<"Enter the first side of the right triangle: ";
        cin>>a;

        cout<<"Enter the second side of the right triangle: ";
        cin>>b;

        hypo=sqrt(pow(a,2)+pow(b,2));

        cout<<"The hypotenuse is "<<hypo<<endl;
        cout<<"\nDo you want to calculate again? Y/N "<<endl;
        cin>>userRepeatBool;

    if(userRepeatBool=='Y'||userRepeatBool=='y'){
        cout<<endl;
        goto startCalc;
    }else{
        return 0;
    }
}

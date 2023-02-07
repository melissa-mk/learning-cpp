#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, x1, x2, discriminant;
    char userRepeatBool;

    startCalc:
        cout << "Enter coefficients a, b and c: \n";
        cin >> a >> b >> c;
        discriminant = b*b - 4*a*c;

        if (discriminant > 0) {
            x1 = (-b + sqrt(discriminant)) / (2*a);
            x2 = (-b - sqrt(discriminant)) / (2*a);
            cout << "Roots are " << x1 <<" and " << x2 << endl;
        }

        else if (discriminant == 0) {
            x1 = -b/(2*a);
            cout << "x1 = x2 =" << x1 << endl;
        }

        else {
            cout<<"There are no real roots.\n";
        }
        cout<<"\nDo you want to calculate again? Y/N "<<endl;
        cin>>userRepeatBool;

    if(userRepeatBool=='Y'||userRepeatBool=='y'){
        cout<<endl;
        goto startCalc;
    }else{
        return 0;
    }
}
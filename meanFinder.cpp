#include <iostream>
using namespace std;

int main(){
    int n, i, average, sum;

    start:
        cout<<"How many positive numbers will you enter? ";
        cin>>n;
        if(n>0){
            cout<<"Enter "<<n<<" positive numbers: \n";
        }else{
            goto start;
        }

    for(i=0;i<n;i++){
        cin>>i;
    }
    sum=i+i;
    cout<<"The sum is "<<sum<<endl;
    average=sum/n;
    cout<<"The average is "<<average<<endl;

    return 0;
}

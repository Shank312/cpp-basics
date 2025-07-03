
#include <iostream>
using namespace std;

int main () {

    int num, num1, a;

    cout<<"Enter the last number for adding odd number : ";
    cin>>num1;

    a = ((num1)/2);

    num = a*a;

    cout<<"The sum of the all the odd numbers till "<<num1<<" is "<<num;

    return 0;

}
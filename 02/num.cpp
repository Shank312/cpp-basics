
#include <iostream>
using namespace std;

int main() {
    int x;

    cout<<"Enter the number";
    cin>>x;

    if (x>0) {
        cout<<"positive";
    } 
    else if (x<0) {
        cout<<"Negative";
    }
    else 
    cout<<"Zero";

    return 0;
}
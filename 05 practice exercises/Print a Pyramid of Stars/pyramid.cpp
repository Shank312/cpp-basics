
#include <iostream>
using namespace std;

int main() {
    int rows;

    cout<<"Enter the number of rows for pyramid : ";

    cin>>rows;

    for (int i = 1; i<= rows; ++i) {

        for (int k = 1; k<= rows - i; ++k) {

            cout<<" ";

        }

            for (int j = 1; j<= 2*i-1; ++j) {

                cout<<"*";

            }

            cout<<endl;
        }
    

    return 0;
}
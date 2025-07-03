

#include <iostream>                               // 1. Include input-output stream library
using namespace std;                              // 2. Use the standard namespace

int main() {                                     // 3. Main function where execution starts
    int num1, num2, sum;                         // 4. Declare three integer variables

    // 5. Ask user to enter first number
    cout<<"Enter the first number : " ;
    cin >> num1;                                 // 6. Take input from user and store in num1

    // 7. Ask user to enter second number
    cout <<"Enter the second number " ;          
    cin>>num2;                                   // 8. Take input from user and store in num2

    sum = num1 + num2;                           // 9. Perform addition and store result in sum


     // 10. Output the result

     cout<<"The sum of " << num1 << " and " << num2 << " is " << sum << endl;

     return 0;                                   // 11. Return 0 to indicate successful completion

     
}
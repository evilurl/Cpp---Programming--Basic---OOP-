#include<iostream>
using namespace std;

int main(){

/*
ARITHMETIC OPERATORS

Arithmetic operators are used to perform basic mathematical operations.

- Multiplication ‘*’
- Division ‘/’
- Modulus ‘%’
- Addition ‘+’
- Subtraction ‘–’
*/
cout<<"ARITHMETIC OPERATORS";
int sum = 5 + 3; // sum is 8
cout<<"\nSum is: "<<sum;

int difference = 5 - 3; // difference is 2
cout<<"\nDifference is: "<<difference;

int product = 5 * 3; // product is 15
cout<<"\nProduct is: "<<product;

int quotient = 5 / 3; // quotient is 1
float quotientFloat = 5.0 / 3.0; // quotientFloat is approximately 1.67
cout<<"\nDivision (int) is: "<<quotient;
cout<<"\nDivision (float) is: "<<quotientFloat;

int modulus = 5 % 3; // remainder is 2
cout<<"\nModulus is: "<<modulus;
cout<<endl;

/*
RELATIONAL OPERATORS

Relational operators compare two values and return a boolean result (true or false).

- Equal to ‘==‘
- Not equal to ‘!=‘
- Greater than ‘>’
- Less than ‘<‘
- Greater than equal to ‘>=‘
- Less than equal to ‘<=‘

*/
cout<<endl;
cout<<"RELATIONAL OPERATORS";

bool isEqual = (5 == 3); // isEqual is false
cout<<"\nisEqual: "<<isEqual;

bool isNotEqual = (5 != 3); // isNotEqual is true
cout<<"\nisNotEqual: "<<isNotEqual;

bool isGreater = (5 > 3); // isGreater is true
cout<<"\nisGreater: "<<isGreater;

bool isLess = (5 < 3); // isLess is false
cout<<"\nisLess: "<<isLess;

bool isGreaterOrEqual = (5 >= 3); // isGreaterOrEqual is true
cout<<"\nisGreaterOrEqual: "<<isGreaterOrEqual;

bool isLessOrEqual = (5 <= 3); // isLessOrEqual is false
cout<<"\nisLessOrEqual: "<<isLessOrEqual;
cout<<endl;
/*
LOGICAL OPERATORS

Logical operators are used to combine multiple boolean expressions or values and return a boolean result.

- Logical AND ‘&&’
- Logical OR ‘||’
- Logical NOT ‘!’

*/
cout<<endl;
cout<<"LOGICAL OPERATORS";

bool result = (true && false); // result is false
cout<<"\nresult "<<result;

bool result2 = (true || false); // result is true
cout<<"\nresult2 "<<result2;

bool result3 = !true; // result is false
cout<<"\nresult3 "<<result3;
cout<<endl;
/*
ASSIGNMENT OPERATOR

Assignment operators are used to assign values to variables.

- Assignment  ‘=‘
- Add and Assign ‘+=‘
- Subtract and Assign ‘-=’
- Multiply and Assign ‘*=‘
- Divide and Assign ‘/=‘
- Modulus and Assign ‘%=‘
*/
cout<<endl;
cout<<"ASSIGNMENT OPERATORS";

int x = 5; // x is assigned the value 5
cout<<"\n x = "<<x;

x += 3; // x is now 8
// x = x + 3;
cout<<"\n x = "<<x;

x -= 3; // x is now 2
// x = x - 3;
cout<<"\n x = "<<x;

x *= 3; // x is now 15
// x = x * 3;
cout<<"\n x = "<<x;

int y = 6;
y /= 3; // x is now 2
// y = y / 3;
cout<<"\n y = "<<y;

int z = 8;
z %= 3; // x is now 2
// z = z % 8;
cout<<"\n z = "<<z;

	return 0;
}

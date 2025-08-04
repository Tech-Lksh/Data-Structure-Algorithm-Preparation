#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<math.h>
using namespace std;
 
int main() {

    // implicit type conversion
    int num1  = 5;
    float num2 = 5.5f;

    int result = num1 + num2;
    cout << " Result is : " << result << endl;



    char ch = 'A';
    char num3 = 5;

    int result1 = ch + num3;
    cout << "Result1 is : " << result1 << endl;

    

    // Explicit type conversion
    int num4 = 10;
    int num5 = 3;

    float result2 = (float)num4 / num5;

    cout << "Result2 is : " << result2 << endl;
    return 0;
}
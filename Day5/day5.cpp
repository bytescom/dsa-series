// Additon using function
// #include <iostream>
// using namespace std;

// int sumOfTwo(int a, int b){
//     int sum = a + b;
//     return sum;
// }

// int main(){
    // int a, b;
    // cout<<"Enter a ";
    // cin>>a;
    // cout<< "Enter b ";
    // cin>>b;
    // cout<< "Sum of a+b is "<< sumOfTwo(a,b)<<endl;
    // return 0;
// }
    //  or we simply calculate by using below method

//  int main(){
//     cout<<"The sum of two no is "<< sumOfTwo(10, 5)<< endl;
//     return 0;
//  }



// Simple code of run Hello World
// #include <iostream>
// using namespace std;

// void printHello(){
//     cout<<"hello world";
// }

// int main(){
//     printHello();
//     cout << endl;

//     return 0;
// }


// Min of two number
// #include <iostream>
// using namespace std;

// int minOfTwo(int a, int b){
//     if(a<b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// int main(){
//     int a, b;
//     cout<<"Enter a ";
//     cin>>a;
//     cout<< "Enter b ";
//     cin>>b;

//     cout<<"Min = "<< minOfTwo(a,b)<<endl;
//     return 0;
// }


// Sum of first n numbers
// #include <iostream>
// using namespace std;

// int sumOfN(int n){
//     int sum=0; 
//     for(int i=1; i<= n; i++){
//     sum += i;
// }
// return sum;
// }

// int main(){
//     int n;
//     cout<<"Enter n ";
//     cin>>n;
//     cout<<"Sum = "<< sumOfN(n)<<endl;
//     return 0;
// }


// Calculate N factorial
// #include <iostream>
// using namespace std;

// int facOfN(int n){
//     int fact=1; 
//     for(int i=1; i<= n; i++){
//     fact *= i;
// }
// return fact;
// }

// int main(){
//     int n;
//     cout<<"Enter n ";
//     cin>>n;
//     cout<<"factorial = "<< facOfN(n)<<endl;
//     return 0;
// }



// calculate digit of sum
#include <iostream>
using namespace std;

int sumOfDigit(int n){
    int digSum = 0;

    while (n > 0){
    int  lastDigit = n % 10;
     n /= 10;
    digSum += lastDigit;
    }
    return digSum;
}

int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    cout<<"Sum Of Digit = "<< sumOfDigit(n)<<endl;
    return 0;
}


//  To check if a number is prime or not
// #include <iostream>
// using namespace std;

// bool checkPrime(int n){
//     for(int i=2; i<n; i++){
//         if( n % 2== 0){
//             return true;
//         }else{
//             return false;
//         }
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter n ";
//     cin>>n;
//     if (checkPrime(n)){
//         cout << "Prime number"<< endl;
//     }
//     else{
//         cout << "Prime number." << endl;
//     }
//     return 0;
// }


// to print all the prime number
// #include <iostream>
// using namespace std;

// // Function to print all prime numbers up to n
// void printPrimesUpTo(int n) {
//     cout << "Prime numbers up to " << n << " are: 1 ";

//     for (int i = 2; i <= n; i++) {
//         bool isPrime = true;

//         for (int j = 2; j <= i / 2; j++) {
//             if (i % j == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }

//         if (isPrime) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     printPrimesUpTo(n);

//     return 0;
// }



// To print nth fibonacci
// calculate nCr binomial coefficient for n or r

// if-else statement
// Q1
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 21;

//     if (a <= 21)
//     {
//         cout << "Hey, This is a.\n";
//     }
//     else
//     {
//         cout << "hey, This is not a.\n";
//     }
//     return 0;
// }

// Q2
// #include <iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"Enter the Valid age:-";
//     cin>>age;

//     if(age>=18){
//         cout<<"Congratulation, You are eligible for driving license.";
//     }else{
//         cout<<"Sorry, You are not eligible for driving license.";
//     }

//     return 0;
// }

// if else-if statement
// #include <iostream>
// using namespace std;

// int main()
// {
//     char ch;
//     cout << "Enter the character:-";
//     cin >> ch;

//     if (ch >= 'a' && ch <= 'z') {
//         cout << "lowercase";
//     }
//     else if (ch >= 'A' && ch <= 'Z') {
//         cout << "uppercase";
//     }
//     else {
//         cout << "Not in range";
//     }

//     return 0;
// }

// while loop
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the num:-";
//     cin>>n;

//     int count = 1;
//     while(count <=n){
//         cout<< count<<" ";
//         count ++;
//     }
//     cout<<endl;

// return 0;
// }

// for loop
// Q1
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number:-";
//     cin >> n;

//     int sum=0;
//     for (int i=1; i<=n; i++ ){
//         cout<<i<<" ";
//         sum += i;
//     }
//     cout<<endl;
//     cout << sum<<endl;
//     return 0;
// }

// Q2
// #include <iostream>
// using namespace std;

// int main(){
//     int n, sum=0;
//     cout << "Enter the number:-";
//     cin >> n;

//     for (int i=1; i<=n; i+=2 ){
//         cout<<i<<" ";
//         sum += i;
//     }
//     cout<<endl;
//     cout<< "the sum of odd number is:-"<< sum;

//     return 0;
// }

// prime or not question
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     bool isPrime = true;
//     cout << "Enter the number:-";
//     cin >> n;

//     for(int i=2; i<= n-1; i++){
//         if ( n % i ==0){
//             isPrime = false;
//             break;
//         }
//     }

//     if(isPrime){
//         cout<<"This is a prime number";
//     }else{
//         cout<<"This is not a prime number";
//     }

//     return 0;
// }
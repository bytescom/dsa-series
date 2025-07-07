// decimal to binary
#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans=0, pow=1;

    while (decNum>0){
        int rem = decNum % 2;
        decNum /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main(){ 
    int decNum;
    cout<<"Enter decimal Number ";
    cin>>decNum;

        cout<< decToBinary(decNum)<<endl;
    return 0;
}


// binary to decimal
// #include <iostream>
// using namespace std;

// int binaryToDec(int binNum){
//     int ans=0, pow=1;

//     while (binNum>0){
//         int rem = binNum % 10; 
//         ans += rem * pow;
//         pow *= 2;
//         binNum /= 10;
//     }
//     return ans;
// }

// int main(){ 
//     int binNum;
//     cout<<"Enter decimal Number ";
//     cin>>binNum;

//         cout<< binaryToDec(binNum)<<endl;
//     return 0;
// }
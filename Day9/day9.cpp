// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"Welcome to the day9 of dsa-series";
//     cout<<"lecture - vector array";
// }



// linear search 
// #include <iostream>
// #include<vector>
// using namespace std;

// int linerSearch(vector<int>&  nums, int target){
//     for(int i=0; i< nums.size(); i++){
//         if (nums[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> nums = {4, 2, 7, 8, 1, 2, 5};

//     int index = linerSearch(nums, target);
//     cout<< index<<" ";
// }


// reverse in an array
#include <iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>&  nums){
    int st=0, en= nums.size() -1;

    while(st< en){
        swap(nums[st], nums[en]);
        st++;
        en--;
    }
}

int main(){
    vector<int> nums = {4, 2, 7, 8, 1, 2, 5};

    reverseArray(nums);

    for(int i=0; i<nums.size(); i++){

        cout<< nums[i]<<" ";
    }
    return 0;
}
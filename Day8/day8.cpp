// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"Welcome to the day8 of dsa-series";
//     cout<<"Lecture- Array data structure";
// }


// find the indexs of min and max
// #include <iostream>
// #include <climits>
// using namespace std;

// int findIdxMax(int arr[], int size){
//     int largestIndex = 0;
//     for(int i=0; i<size; i++){
//         if (arr[i] > arr[largestIndex]){
//             largestIndex = i;
//         }
//     }
//     return largestIndex;
// }

// int main(){
//     int arr[] = {3, 5, 7, 2, 45, 78, 9, 96};
//     int size = 8;

//     int largIndex = findIdxMax(arr, size);

//     cout<< "index of max: "<< largIndex<<"\n";
//     cout<< "value of max: "<< arr[largIndex]<<" ";
// }


// Part-2
// #include <iostream>
// #include <climits>
// using namespace std;

// int findIdxOfMinMax(int arr[], int size, int& minIdx, int& maxIdx){

//     for(int i=0; i<size; i++){
//         if(arr[i] < arr[minIdx]){
//                minIdx = i;
//         }

//         if (arr[i] > arr[maxIdx]){
//             maxIdx = i;
//         }
//     }
// }

// int main(){
//     int arr[] = {3, 5, 7, 2, 45, 78, 9, 96};
//     int size = 8;
//     int minIdx=0, maxIdx=0;

//     findIdxOfMinMax(arr, size, minIdx, maxIdx);

//     cout<< "index of min value"<< arr[minIdx]<<"\n";
//     cout<< "index of max value"<< arr[maxIdx]<<" ";
// }


// #include <iostream>
// using namespace std;

// void findMinMaxIndices(int arr[], int size, int* minIdx, int* maxIdx) {
//     *minIdx = *maxIdx = 0;
//     for(int i = 1; i < size; i++) {
//         if(arr[i] < arr[*minIdx]) *minIdx = i;
//         if(arr[i] > arr[*maxIdx]) *maxIdx = i;
//     }
// }

// int main() {
//     int arr[] = {3, 5, 7, 2, 45, 78, 9, 96};
//     int size = 8;
//     int minIdx, maxIdx;
    
//     findMinMaxIndices(arr, size, &minIdx, &maxIdx);
    
//     cout << "Index of min value: " << minIdx << " (Value: " << arr[minIdx] << ")\n";
//     cout << "Index of max value: " << maxIdx << " (Value: " << arr[maxIdx] << ")\n";
    
//     return 0;
// }



// write a function to swap the max& min number of an array. 
// #include <iostream>
// #include <climits>
// using namespace std;

// void swapMinMax(int arr[], int size) {
//     if (size == 0) return;  // Handle empty array case

//     int minIndex = 0, maxIndex = 0;

//     // Find indices of min and max elements
//     for (int i = 1; i < size; i++) {
//         if (arr[i] < arr[minIndex]) {
//             minIndex = i;
//         }
//         if (arr[i] > arr[maxIndex]) {
//             maxIndex = i;
//         }
//     }

//     swap(arr[minIndex], arr[maxIndex]);
// }

// int main() {
//     int arr[] = {3, 5, 7, 2, 45, 78, 9, 96};
//     int size = 8;
    
//     cout << "Original array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     swapMinMax(arr, size);

//     cout << "After swapping: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }



// waf tp calculate sum and product of all the numbers in an array
// #include <iostream>
// #include <climits>
// using namespace std;

// void findIdxOfMinMax(int arr[], int size, int& sum, int& product){

//     sum = 0;
//     product = 1;

//     for(int i=0; i<size; i++){
//        sum += arr[i];
//        product *= arr[i];
//     }
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int size = 6;
//     int sum, product;

//     findIdxOfMinMax(arr, size, sum, product);
//     cout<< "sum of arr[] is: "<<sum<<'\n';
//     cout<< "Product of arr[] is: "<<product<<'\n';
//     return 0;
// }


// waf to print all uniques values in array
// [this code works only for one uniique value]
// #include <iostream>
// using namespace std;

// int findUniqueVal(int arr[], int size){
//     int result=0;
//     for ( int i=0; i<size; i++){
//         result ^= arr[i];
//     }
//     return result;
// }

// int main(){
//     int arr[] = {1, 2, 6, 2, 1};
//     int size = 5;

//     int result = findUniqueVal(arr, size);
//     cout<<"Unique values in array: "<<result;

//     return 0;
// }



// insection of two array
// #include <iostream>
// using namespace std;

// int main() {
//     int nums1[] = {1, 2, 5, 6, 2, 1};
//     int nums2[] = {2, 5};
//     int size1 = sizeof(nums1) / sizeof(nums1[0]);
//     int size2 = sizeof(nums2) / sizeof(nums2[0]);

//     int result[100]; 
//     int k = 0;

//     for (int i = 0; i < size1; i++) {
//         for (int j = 0; j < size2; j++) {
//             if (nums1[i] == nums2[j]) {
//                 // Check if already added to result
//                 bool alreadyExists = false;
//                 for (int m = 0; m < k; m++) {
//                     if (result[m] == nums1[i]) {
//                         alreadyExists = true;
//                         break;
//                     }
//                 }
//                 if (!alreadyExists) {
//                     result[k++] = nums1[i];
//                 }
//                 break; // move to next nums1[i]
//             }
//         }
//     }

//     // Print the result
//     for (int i = 0; i < k; i++) {
//         cout << result[i] << " ";
//     }
//     return 0;
// }

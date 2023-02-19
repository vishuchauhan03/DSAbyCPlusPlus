#include <iostream>
using namespace std;

// fatorial of a number
// long long fact(int n){
//     long long fact=1;
//     for (int i = n; i > 1; i--)
//     {
//         fact*=i;
//     }
//     return fact;
// }

//reverse integer from leet code >>> Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

//  int reverse(int x) {
//         int ans=0;
//         bool isNeg=false;
//         if(x<=INT_MIN){
//             return 0;
//         }
//         if(x<0){
//             isNeg=true;
//             x=-x;
//         }
//         while(x>0){
//              if(ans>INT_MAX/10){
//                 return 0;
//             }
//             int digit = x % 10;
//             ans=ans*10 + digit;
//             x/=10;
//         }
//         return isNeg?-ans:ans;
        
//     }

    // set kth bit from geeksforgeek >>> Given a number N and a value K. From the right, set the Kth bit in the binary representation of N. The position of Least Significant Bit(or last bit) is 0, the second last bit is 1 and so on. 

    // int setKthBit(int N, int K)
    // {
    //     // Write Your Code here
    //     int mask = 1<<K;
    //     int ans = N |mask;
    //     return ans;
    // }

    // swapping two number

    // void swap(int a,int b){
    //     int x = a;
    //     a=b;
    //     b=x;
    //     cout<<"a is"<<a<<endl;
    //     cout<<"b is"<<b;
    // }

int main(){
    // int number ;
    // cout<<"enter the number"<<endl;
    // cin>>number;
    // cout<<fact(number);
    // if(-3){
    //     cout<<"hello";
    // }
    // int a=(2,6);
    // cout<<a;
    // return 0;
    // swap(2,6);
}
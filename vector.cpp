#include <iostream>
#include <vector>
using namespace std;

int main(){

    // find unique element

    int n;
    cout<<"enter the size of array";
    cin>>n; 
    vector<int> arr(n);

    cout<<"enter the value in array";

    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    
    return 0;
}
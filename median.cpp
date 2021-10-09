#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getmedian(vector<int>arr1,vector<int>ar2);

int main(){
    vector<int>arr1 = { 1, 12, 15, 26, 38 };
    vector<int>arr2 = { 2, 13, 17, 30, 45 };
 
  

    cout<<getmedian(arr1,arr2)<<endl; 
    return 0;
}

int getmedian(vector<int>arr1,vector<int>arr2){
    int n = arr1.size() - 1;

    int i = n;
    int j = 0;
    while( arr1[i] > arr2[j] && i>-1 && j < n){
        swap(arr1[i--],arr2[j++]);
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    

    return (arr1[n] + arr2[0])/2;


}
#include <iostream>
#include <vector>
using namespace std;
int subarry(vector<int> arr, int k){
    int n = arr.size();
    int ans =1;
    int count =0;
    for(int i=0;i<n;i++){
       ans *= arr[i];
       if(ans < k){
           count++;
       }
    }
    return count;
}
int main(){
    vector<int> arr = {1, 2, 0, 8};
    int k =0;
    subarry(arr, k);
}
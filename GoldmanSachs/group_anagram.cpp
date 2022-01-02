#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 vector<vector<string> > Anagrams(vector<string>& arr) {
        //code here
        int n = arr.size();
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        for(auto it: arr){
            string word = it;
            sort(word.begin(), word.end());
            m[word].push_back(it);
        }
        for(auto it: m){
                ans.push_back(it.second);
        }
        return ans;
    }
int main(){
   vector<string>arr;
   int n = arr.size();
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin >> arr[i][j];
       }
   }
   Anagrams(arr);
}
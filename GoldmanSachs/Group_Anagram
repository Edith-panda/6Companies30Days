#Q1. Print Anagram Togeather  
[![Problem Link](https://img.shields.io/badge/GeeksforGeeks-298D46?style=for-the-badge&logo=geeksforgeeks&logoColor=white)](https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#)

Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.

### Sample Input
```
5
act god cat dog tac
```
### Sample Output
```
act cat tac 
god dog 
```
### Solution 
class Solution{
  public:
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
};
### Accepted
[![image](https://user-images.githubusercontent.com/44930179/147873107-6516b2e3-9430-4e8d-af6c-a95529eef3b2.png)](https://practice.geeksforgeeks.org/viewSol.php?subId=7f3f873140b9bde7b2ad7262669ac610&pid=701966&user=yashasvi05sakure)

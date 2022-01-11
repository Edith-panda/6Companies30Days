#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> ans(vector<int> arr, int n , int k){
    priority_queue<int> q;
    vector<int> v;
    while(k--){
        v.push_back(q.top());
        q.pop();
    }
    return v;
}

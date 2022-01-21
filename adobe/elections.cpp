class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        string s = "";

        map<string, int> m;
        int maxs = INT_MIN;
        vector<string> v;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto it: m){
            if(it.second > maxs){
                maxs = it.second;
                s = it.first;
            }
        }
        v.push_back(s);
        v.push_back(to_string(maxs));
        return v;
    }
};
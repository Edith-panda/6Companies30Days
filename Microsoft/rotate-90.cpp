void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j], matrix[j][i]);
            
           // swap(i, j);
        }
    }
    reverse(matrix.begin(), matrix.end());
    
}
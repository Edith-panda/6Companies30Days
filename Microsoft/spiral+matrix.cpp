
class {   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > A, int m, int n) 
    {
        // code here
        int T,B,L,R,dir;
    T=0;
    B=m-1;
    L=0;
    R=n-1;
    dir=0;
    int i;
    vector<int> ans;
    
    while(T<=B && L<=R)
    {
        if(dir==0)
        {
            for(i=L;i<=R;i++)
                ans.push_back(A[T][i]);
            T++;
        }
        else if(dir==1)
        {
            for(i=T;i<=B;i++)
                ans.push_back(A[i][R]);
            R--;
        }
        else if(dir==2)
        {
            for(i=R;i>=L;i--)
                ans.push_back(A[B][i]);
            B--;
        }
        else if(dir==3)
        {
            for(i=B;i>=T;i--)
                ans.push_back(A[i][L]);
            L++;
        }
        dir=(dir+1)%4;
    }
    return ans;
    }
};
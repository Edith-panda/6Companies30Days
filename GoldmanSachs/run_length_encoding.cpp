string encode(string arr)
{     
  //Your code here 
  int n = arr.size();
  string ans = "";
  int count =0;
  char cu = arr[0];
  for(int i=0;i<n;i++){
      if(arr[i] != cu){
       ans += (cu + to_string(count));
       cu = arr[i];
       count =0;
      }
      count++;
      }
  
  
  ans += cu + to_string(count);
  return ans;
}     
 

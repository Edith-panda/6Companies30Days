# Q2. Print Anagram Togeather  
[![Problem Link](https://img.shields.io/badge/GeeksforGeeks-298D46?style=for-the-badge&logo=geeksforgeeks&logoColor=white)](https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#)

Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included. Write a program to find Nth Ugly Number.

### Sample Input
```
10
4
```
### Sample Output
```
12
4 
```
### Solution 
```cpp
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	   set <long long int> s;
	   s.insert(1);
	   n--;
	   while(n--){
	       auto it = s.begin();
	       long long int x = *it;
	       s.erase(it);
	       s.insert(x*2);
	       s.insert(x*3);
	       s.insert(x*5);
	   }
	   return *s.begin();
	}
};
```
### Accepted
[![image](https://user-images.githubusercontent.com/44930179/147873107-6516b2e3-9430-4e8d-af6c-a95529eef3b2.png)](https://practice.geeksforgeeks.org/viewSol.php?subId=4414e23d7e25bdddf6d738461ed8e97b&pid=703093&user=yashasvi05sakure)

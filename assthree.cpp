
#include <bits/stdc++.h>

using namespace std;

 
class Solution 
{
  
public:
   
 long long int convertEvenBitToZero(long long int n)
 {
   
 int to_subtract = 0;
   
 int m = 0;
   
 for (int x = n; x; x >>= 2) 
{
    
    if (x & 1)
 
           to_subtract += (1 << m);
  
      m += 2;
  
  }
 
  
  return n - to_subtract;
}
 
   
};


int main()
 {
   
 int t;
 
   cin >> t;
 
  while (t--)
 {
       
 long long int n;
 
       cin >> n;
    
    Solution ob;
   
     cout << ob.convertEvenBitToZero(n) << endl;
  
  }
    
return 0;

}
 

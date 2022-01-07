// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        string res = "";
        int hash[257] = {0};
        
        for(int i=0; i<string2.size(); i++)
        {
            hash[string2[i]]++;
        }
        for(int j=0; j<string1.size(); j++)
        {
            if(hash[string1[j]] == 0)
            {
                res = res + string1[j];
            }
        }
        return res;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}
  // } Driver Code Ends

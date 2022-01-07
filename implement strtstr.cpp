// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
string lowercase(string res)
{
    for(int i=0;i<res.size();i++)
    {
        if(res[i] >= 'A' && res[i] <= 'Z')
        {
            res[i] = res[i] + ('a'-'A');
        }
    }
    return res;
}

int strstr(string s, string x)
{
     //Your code here
     s = lowercase(s);
     x = lowercase(x);
     int i = 0;
     int k;
     int j;
     while(i<s.size())
     {
        if(s[i] == x[0])
        {
            for(j=i, k=0; k<x.size();k++,j++)
            {
                if(s[j] != x[k])
                {
                    break;
                }
                else
                {
                    if(k == (x.size()-1))
                    {
                        return i;
                    }
                }
                
            }
        }
        i++;
     }
     return -1;
     
}

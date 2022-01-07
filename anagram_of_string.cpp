// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
    int hash[26] = {0};
    for(int i=0;i<str1.size();i++)
    {
        int index = str1[i]-'a';
        hash[index]++;
    }
    
    for(int k=0;k<str2.size();k++)
    {
        int index = str2[k]-'a';
        hash[index]--;
    }
    
    int count=0;
    for(int j=0;j<26;j++)
    {
        if(hash[j] != 0)
        {
            count = count + abs(hash[j]);
        }
    }
    return count;
}
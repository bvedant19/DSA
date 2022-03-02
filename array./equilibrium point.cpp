// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
    
        // Your code here
        if(n == 1)
        {
            return 1;
        }
        if(n == 0)
        {
            return -1;
        }
        int leftsum = 0;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
           sum = sum + arr[i]; 
        }
        leftsum = arr[0];
        sum = sum - (arr[0]+arr[1]);
        for(int i=1;i<n;i++)
        {
            if(leftsum == sum)
            {
                return i+1;
            }
            else
            {
                sum = sum - arr[i+1];
                leftsum = leftsum+arr[i];
            }
        }
        return -1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int inSequence(int a, int b, int c){
        // code here
        
        //-9+2+7=nd
        // nt term=a+(n-1)*d
        //n=(b-a)/c+1; using this we solve the problem 
        if(c==0)
        {
            if(a==b)
                return 1;
            return 0;
        }
        else
        {
            if((b-a)/c<0)
                return 0;
            if((b-a)%c==0)
                return 1;
            else
            return 0;
        }
    }
}; 

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B, C;
        cin>>A>>B>>C;
        
        Solution ob;
        cout<<ob.inSequence(A, B, C)<<endl;
    }
    return 0;
}  // } Driver Code Ends

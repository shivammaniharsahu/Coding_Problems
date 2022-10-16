// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    int n=s.length();
    if(n&1)//if n is odd than balancing not possible
        return -1;
    else
    {
        stack<char> st;
        int c1=0;//for '{'
        int c2=0;//for '}'
        for(int i=0;i<n;i++)
        {
            if(s[i]=='{')
            {
                st.push('{');
                c1++;
            }   
            else if(!st.empty()&&s[i]=='}'&&st.top()=='{')//we willtry to remove all balanced brakets
            {
                st.pop();
                c1--;
            }
            else
            {
                c2++;
            }
        }
        // now there can be total 2 possiblity
        //1 }} {{{{ both c1 and c2 are even than answer can be c1/2 + c2/2
        
        //2 }}} {{{ both c1 and c2 are odd than answer can be c1/2+1 + c2/2+1
        // } { since in case 2 after balanceing with adajacent these will be only left
        //and this can be balanced by reversing both means adding 2  to the anser
        
        if(c1&1)//c1 count is odd
        {
            c1=c1/2+1;
        }
        else
            c1=c1/2;
        if(c2&1)//c2 count is odd
        {
            c2=c2/2+1;
        }
        else
            c2=c2/2;
        return c1+c2;        
    }
}

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        
        string ans="";
        if(str.size()==1)
        {
            return str[0];
        }
        string s1="",s2="";
        s1=str[0];
        s2=str[1];
        string newstr="";
        for(int i=0;i<min(s1.length(),s2.length());i++)
        {
            if(s1[i]!=s2[i])
                break;
            else
                newstr+=s1[i];
        }
       // cout<<newstr<<endl;
        for(int i=2;i<str.size();i++)
        {

            s1=newstr;
            newstr="";
            s2=str[i];
              for(int j=0;j<min(s1.length(),s2.length());j++)
            {
                if(s1[j]!=s2[j])
                    break;
                else
                    newstr+=s1[j];
            }   
            
        }
        return newstr;
        
    }
};

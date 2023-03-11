class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string temp="";    // temp string
        string result="";  // this is our resulting string
        for(int i=S.length()-1; i>=0; i--)
        {
           if(S[i]=='.')
            {
               temp=temp+S[i];
               result=result+temp;
               temp="";
            }
            else
            {
               temp=S[i]+temp;
            }
        }
       result=result+temp;
       return result;
        
    } 
};

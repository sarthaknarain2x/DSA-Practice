bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.length() != str2.length())
            return false;
        int n = str1.length();
        string temp1 = str1;
        string temp2 = str1;
        
        string total1 = temp1.substr(2, n) + temp1.substr(0, 2);
        string total2 = temp2.substr(n-2, n) + temp2.substr(0, n-2);
        
        return(total1 == str2 || total2 == str2);
    }

int splitNum(int num) {
        string s = to_string(num);
        sort(begin(s), end(s));
        string num1, num2;
        for(int i = 0; i < size(s); i += 2)
          num1 += s[i];
        for(int i = 1; i < size(s); i += 2)
          num2 += s[i];
        return (stoi(num1) + stoi(num2));
    }

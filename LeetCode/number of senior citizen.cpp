class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c=0;
        for(int i=0; i<details.size(); i++) {
            string det = details[i];
            int len = det.length();
            int age = stoi(det.substr(len-4, 2));
            if(age>60) {
                c++;
            }
        }
        return c;
    }
};

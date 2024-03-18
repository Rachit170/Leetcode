class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size(),count=0,index;
        for(int i=n-1;i>=0;i--){
            if(s[i]>=97 && s[i]<=122 || s[i]>=65 && s[i]<=90){
                index=i;
                break;
            }
        }
        for(int i=index;i>=0 && s[i]!=' ';i--){
            count++;
        }
        return count;
    }
};

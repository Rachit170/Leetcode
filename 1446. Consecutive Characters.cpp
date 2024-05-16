class Solution {
public:
    int maxPower(string s) {
        if(s.size()==1) return 1;
        int maxi=0;
        int j=0;
        for(int i=0;i<s.size();){
            int count =0;
            j=i;
            while(s[i]==s[j] && j<s.size()){
                count++;
                j++;
            }
            maxi = max(maxi,count);
            i=j;
        }
        return maxi;
    }
};

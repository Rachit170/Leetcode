class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=0;
        int n=accounts[0].size();
        for(int i=0;i<accounts.size();i++){
            int count =0;
                for(int j=0;j<n;j++){
                    count +=accounts[i][j];
                }
                if(count>maxi)
                    maxi=count;
        }
        return maxi;
    }
};

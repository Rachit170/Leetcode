class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        if(people.size()==1)
            return 1;
        sort(people.begin(),people.end());
        int l=0,r=people.size()-1;
        int boat=0;
        while(l<=r){
            if(people[l]+people[r]<=limit){
                boat++;
                l++;
                r--;
            }
            else if(people[r]<=limit){
                boat++;
                r--;
            }
        }
        return boat;
    }
};

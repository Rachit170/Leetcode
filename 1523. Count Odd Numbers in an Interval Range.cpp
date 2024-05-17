class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            if(i%2!=0)
                count++;
        }
        return count;
    }
};
/* 
  OR

int countOdds(int low, int high) {
    if (low % 2 == 0 && high % 2 == 0)
        return (high - low) / 2;
    return (high - low) / 2 + 1;
}
*/

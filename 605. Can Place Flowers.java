class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int b) {
        int n=flowerbed.length;
        int count=0;
        for(int i=0;i<n;i++){
            if(flowerbed[i]==0){
                int prev = (i==0) ? 0:flowerbed[i-1];
                int next = (i==n-1)? 0:flowerbed[i+1];
                if(prev==0 && next==0){
                flowerbed[i]=1;
                count++;
            }
            }
        }
        return count>=b;
    }
}

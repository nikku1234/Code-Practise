class Solution {
    int[] sum;
    Random rand;
    public Solution(int[] w) {
        for(int i=1;i<w.length;i++){
            w[i]+=w[i-1];
        }
        sum=w;
        rand=new Random();
    }

    public int pickIndex() {
        int index=rand.nextInt(sum[sum.length-1])+1;
        int left=0,right=sum.length-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(sum[mid]<index)
                left=mid+1;
            else
                right=mid;
        }

        return left;
    }
}

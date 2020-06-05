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

// Without optimisation
class Solution {
    int cumilative_frequency[];
    public Solution(int[] w) {
         cumilative_frequency = new int[w.length];
        cumilative_frequency[0] = w[0];
        for(int i=1;i<w.length;i++){
            cumilative_frequency[i] = cumilative_frequency[i-1] + w[i];
        }


    }

    public int pickIndex() {
        int length = cumilative_frequency.length;
        int random = new Random().nextInt(cumilative_frequency[length-1])+1;
        for(int i=0;i<length;i++){
            if(cumilative_frequency[i]>random)
                return i;
        }
        return 0;

    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(w);
 * int param_1 = obj.pickIndex();
 */
   

class Solution {
    public int maxArea(int[] height) {

        int max_area = 0;

        for(int i = 0; i < height.length; i++){
            for(int j = i+1; j < height.length; j++){
                max_area = Math.max(max_area, Math.min(height[i], height[j]) * (j - i));
            }
        }
        return max_area;

    }
}

// Brute Force
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

// Optimal
class Solution {
    public int maxArea(int[] height) {

//         int max_area = 0;

//         for(int i = 0; i < height.length; i++){
//             for(int j = i+1; j < height.length; j++){
//                 max_area = Math.max(max_area, Math.min(height[i], height[j]) * (j - i));
//             }
//         }
//         return max_area;
//     }


        int max_area = 0;
        int l = 0;
        int r = height.length - 1;
        while (l < r){
            max_area = Math.max(max_area, Math.min(height[l], height[r]) * (r - l));
            if (height[l] < height[r]){
               l += 1;
            }
            else{
                r -= 1;
            }
            }
        return max_area;
}
}

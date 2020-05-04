class Solution {
public:
    int heightChecker(vector<int>& heights) {

        vector<int> compare_vector;
        compare_vector = heights;

        sort(compare_vector.begin(),compare_vector.end());

            int temp=0,val ;
           for(int i=0;i<heights.size();i++){

               if(heights[i]!=compare_vector[i])
               {
                   temp++;
               }
           }



        return temp;
        }
};

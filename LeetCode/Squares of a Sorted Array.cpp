class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {

        vector<int> result;

        for(int i=0; i< A.size(); i++)
        {
            result.push_back(A[i]*A[i]);
        }
        sort(result.begin(),result.end());
        return result;
    }
};

class Solution {
public:
    /**
     * @param A: sorted integer array A
     * @param B: sorted integer array B
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        int  n = A.size() + B.size();
        vector<int> result(n);

        merge(A.begin(),A.end(),B.begin(),B.end(),result.begin());
        sort(result.begin(),result.end());
        return result;
    }
};

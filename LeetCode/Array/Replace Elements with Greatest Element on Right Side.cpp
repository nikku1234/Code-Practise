class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int great =0;

        for(int i=0;i<arr.size();i++){
            if(i==arr.size()-1){
                arr[i]=-1;
            }
            else{
                great = arr[i+1];
            for(int j=i+1;j<arr.size();j++){
                if(great<arr[j]){
                    great = arr[j];
                }
            }
            arr[i]=great;
            }
        }
        return arr;
    }
};

    vector<int> replaceElements(vector<int>& A, int mx = -1) {
        for (int i = A.size() - 1; i >= 0; --i)
            mx = max(mx, exchange(A[i], mx));
        return A;
    }

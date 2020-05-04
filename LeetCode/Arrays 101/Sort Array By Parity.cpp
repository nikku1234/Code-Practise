//Brute Force Methpd
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {

        int temp=0;

        for(int i=0;i<A.size();i++){
          //  if(A[i]%2==0)
            //    count++;
            if(A[i]%2!=0){
                for(int j=i+1;j<A.size();j++){
                    if(A[j]%2==0){
                    temp = A[j];
                    A[j] = A[i];
                    A[i] = temp;
                    break;
                    }
                }
            }
        }
        
       // for(int i=0;i<)
        return A;

    }
};
//Simple Method
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {

        int j=0;

        for(int i=0;i<A.size();i++){

            if(A[i]%2!=0){
                swap(A[i],A[j]);
                j++;
                    }
                }
        return A;

    }
};

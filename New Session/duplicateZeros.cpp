class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int length = arr.size();
        int no_of_zeros = count(arr.begin(),arr.end(),0);
        int fake_length = length + no_of_zeros;
        
        int i = length-1;
        int j = fake_length-1;
        
        for(;i>=0;i--){
            
            if(arr[i]==0)
            {
                if(j<length){           //Only if j is less than length, otherwise its already zero
                    arr[j] = 0; 
                }
                j--;
                
                if(j<length){           // intialize zero
                    arr[j] = 0;
                }
            }
            
            else
            {
                
             if(j<length){
                 arr[j] = arr[i];
             }   
                
            }
            j--;
        }
        
        
    }
};

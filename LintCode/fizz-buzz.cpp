class Solution {
public:
    /**
     * @param n: An integer
     * @return: A list of strings.
     */
    vector<string> fizzBuzz(int n) {
        // write your code here
        vector<string> ve;
        for(int i = 1; i <= n; i++){
            if (i % 3 == 0 && i % 5 == 0) ve.push_back("fizz buzz");
            else if (i % 3 == 0) ve.push_back("fizz");
            else if (i % 5 == 0) ve.push_back("buzz");
            else ve.push_back(to_string(i));
        }
        return ve;
    }
};

class Solution {
    public int lengthOfLongestSubstring(String s) {

        int first_pointer = 0;
        int second_pointer = 0;
        int max = 0;

        HashSet<Character> hash_set = new HashSet();

        while(second_pointer < s.length()){

            if(!hash_set.contains(s.charAt(second_pointer))){

                hash_set.add(s.charAt(second_pointer));
                second_pointer++;
                max = Math.max(hash_set.size(),max);

            }
            else{
                hash_set.remove(s.charAt(first_pointer));
                first_pointer++;
            }

        }

        return max;

    }
}

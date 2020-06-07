class Solution {
    public int change(int amount, int[] coins) {

        int[] combinations = new int[amount+1];

        combinations[0] = 1;

        for(int coin : coins){

            for(int i=1;i<combinations.length;i++){

                if(i>=coin){

                    combinations[i] = combinations[i] + combinations[i-coin];

                }
            }
        }
        for(int i=0;i<combinations.length;i++)
                System.out.println(combinations[i]);
        return combinations[amount];
    }
}

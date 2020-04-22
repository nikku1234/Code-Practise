

    static boolean isAnagram(String a, String b) {
        // Complete the function
/*
        if(a=="null"||b=="null"||a.equals("")||b.equals(""))
        {
            throw new IllegalArgumentException();
        }

        if ( a.length() != b.length() )
            return false;

        a = a.toLowerCase();
        b = b.toLowerCase();

        Map<Character, Integer> map = new HashMap<>();

        for(int i=0;i<a.length();i++)
        {
            char l = a.charAt(i);

            if(!map.containsKey(l))
            {
                map.put(l,1);
            }
            else
            {
                int count = map.get(l);
                count = count+1;
                map.put(l,count);
            }
        }

        for(int i=0;i<b.length();i++)
        {
            char l = b.charAt(i);

            if(!map.containsKey(l))
                return false;

            int count = map.get(l);
            if(count==0)
                return false;
            else
                map.put(l,--count);



            
        }
    return true;*/

            //initial check
        if (a.length() != b.length()) return false;
        
        a = a.toLowerCase();
        b = b.toLowerCase();
        
        char Aarr[] = new char[26];
        char Barr[] = new char[26];
        
        for(int i=0 ; i<a.length() ; i++)
            Aarr[a.charAt(i)-97]++;
        for (int i=0 ; i<b.length() ; i++)
            Barr[b.charAt(i)-97]++;
        
        return java.util.Arrays.equals(Aarr, Barr);
    
    }



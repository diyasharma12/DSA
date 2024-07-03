//brute force approch is to generate all the substringss and check the longest one without duplicates and using a hash map we check if value is reapting. tc=O(n^2) sc=O(256)
//hashtable
int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        unordered_set<char> charSet;
        int left = 0;
        
        for(int i=0;i<s.size();i++){
            if(charSet.count(s[i]==0)){
                set.insert(s[i]);
                maxl=max(maxl,i-right+1;)
            }
            else{
                while(set.cout(s[i])){
                    set.erase(s[left]);
                    left++;
                }
                set.insert(s[right])
            }
        }
        
        return maxLength;
    }

//sliding window


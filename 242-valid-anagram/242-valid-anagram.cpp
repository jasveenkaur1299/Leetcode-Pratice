class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        // int alphabet[26]={0};
        // for(int i=0;i<s.size();i++)
        //     alphabet[s[i]-'a']++;
        // for(int i=0;i<t.size();i++)
        // {
        //     alphabet[t[i]-'a']--;
        //     if(alphabet[t[i]-'a']<0)
        //         return false;
        // }
        // for(int i=0;i<26;i++)
        // {
        //     if(alphabet[i]>0)
        //         return false;
        // }
        // return true;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(t==s)
            return true;
        else return false;
        
    }
};
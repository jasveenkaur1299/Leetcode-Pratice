class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        vector<int> answer;
        unordered_map<char,int> mp;
        unordered_map<char,int>:: iterator it;
        for(int i=0;i<p.size();i++)
        {
            mp[p[i]]++;
        }
        int i=0,j=0,count=0,k=p.size(),n=s.size();
        count=mp.size();
        
        while(j<n)
        {
            // a->1 b->1 
        if(mp.find(s[j])!=mp.end())
        {
         mp[s[j]]--;
         if(mp[s[j]]==0)
         count--;             
        }
            
        if(j-i+1<k)
                j++;
            
        else if (j-i+1==k)
            {
            if(count==0)
            {
            answer.push_back(j-k+1);  
            } 
                
            if(mp.find(s[i])!=mp.end())
            {
                mp[s[i]]++;
                if(mp[s[i]]==1)
                    count++;
            }
        
            i++;
            j++;
            }
        }
        return answer;
    }
    
};
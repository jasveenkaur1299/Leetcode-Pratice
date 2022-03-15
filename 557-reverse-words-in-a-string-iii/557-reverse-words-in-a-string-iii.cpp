class Solution {
public:
    string reverseWords(string s) 
    {
        int index=0;
        cout<<s.size();
        int first=0,second=0;
        
        while(index<=s.size())
        {
            if(s[index]==' ' || s[index]=='\0')
            {
                second=index-1;
                while(first<second)
                {
                    swap(s[first],s[second]);
                    first++;
                    second--;
                }
                first=index+1;     
            }
            index++;
        }
        return s;
        
    }
};
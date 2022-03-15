class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int first=0;
        char temp;
        int second=s.size()-1;
        cout<<second;
        while(first<second)
        {
          temp=s[first];
           s[first]=s[second];
            s[second]=temp;
                
            first++;
            second--;
        }
        
    }
};
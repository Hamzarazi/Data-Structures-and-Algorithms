class Solution {
public:
    void rev(string& s , int i , int j)
    {
        while(i<j)
        {
            swap(s[i] , s[j]);
            i++;
            j--;
        }
    }
    string reverseWords(string s) 
    {
        int i , j , n=s.size();
        for(int i=0,j=0 ; j<n ; ++j)
        {
            if(s[j]==' ')
            {
                rev(s , i , j-1);
                i=j+1;
            }
            else if(j == n-1)
                rev(s , i , j);
                
        }
        return s;
    }
};
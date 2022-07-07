20. Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 
 class Solution {
public:
    bool isValid(string s) {
        
      string a;
        
     
        map<char,char>mp;
        mp['('] = ')';
        mp['{'] = '}';
        mp['['] = ']';
        a.push_back(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(mp[a.back()]==s[i])
            {
                a.pop_back();
            }
            else
                a.push_back(s[i]);
        }
        return a.size()?0:1;
          
    }
};
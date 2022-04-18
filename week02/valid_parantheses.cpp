// TC : O(N)
// MC : O(N)
class Solution {
public:
    bool isValid(string s) {
        
        stack<char>stk;
        
        for(char i: s) {
            if(i == '{' or i == '(' or i == '[') stk.push(i);
            
            else{
                if(stk.empty()) return false;
                else if(i == ']' and stk.top() != '[') return false;
                else if(i == '}' and stk.top() != '{') return false;
                else if(i == ')' and stk.top() != '(') return false;
                else stk.pop();
            }
        }
        if(stk.empty()) return true;
        return false;
        
          
    }
};

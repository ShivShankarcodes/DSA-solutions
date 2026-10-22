class Solution {
public:
    bool isValid(string s) {
        if(s.length() %2 == 1) return false;
        stack<char> st;
        for(char ch : s){
            if(ch == '(' || ch == '{' || ch == '[') st.push(ch);
            else{
                if(st.size() == 0) return false;
                else if(ch == ')' && st.top() == '(') st.pop();
                else if(ch == '}' && st.top() == '{') st.pop();
                else if(ch == ']' && st.top() == '[') st.pop();
                else return false;
            }
        }
        return (st.size() == 0);
    }
};
class Solution {
public:
    int scoreOfParentheses(string S) {
        stack<char> st;
        int out=0;
        for(int i=0;i<S.size();i++){
            switch(S[i]){
                case '(':
                    st.push(S[i]);
                    break;
                case ')':
                    if(st.top() != '('){
                        int top=(int)st.top();                        
                        st.pop();
                        if(st.top() == '('){
                            st.pop();
                            st.push(2*top);                        
                            cout<<"st.top: "<<(int)st.top()<<endl;
                        }
                        else{
                            int pen=(int)st.top();
                            cout<<"pen: "<<pen<<"top: "<<top<<endl;
                            st.pop();
                            st.pop();
                            st.push(2*(pen+top));                            
                        }
                    }
                    else{                        
                        st.pop();                        
                        st.push(1);
                    }
                    break;
                default:
                  break;
            }
            
            
        }
        
        
        while(st.size()){               
            out+=(int)st.top();
            cout<<(int)st.top()<<endl;
            st.pop();
        }        
        return out;    
    }
};
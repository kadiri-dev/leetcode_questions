

class Solution {
public:
    int scoreOfParentheses(string S) {
        stack<char> st;
        int out=0;
        for(int i=0;i<S.size();i++){
            switch(S[i]){
                case '(':
                    cout<<"case 1:"<<"i: "<<i<<endl;
                    st.push(S[i]);
                    break;
                case ')':
                    if(st.top() != '('){
                        if(st.size()){
                            int top = 2*(int)st.top();
                            cout<<"case 2:"<<"i: "<<i<<"top: "<<top<<"size: "<<st.size()<<endl;
                            st.pop();
                            st.pop();
                            st.push(top);
                        }
                    }
                    else{                      
                        cout<<"case 3:"<<"i: "<<i<<endl;
                        st.pop();                        
                        st.push(1);
                    }
                    break;
                default:                  
                  break;
            }
            if(st.size() && st.top() != '('){                
                int top=(int)st.top();               
                st.pop();
                cout<<"case 4:"<<"i: "<<i<<"top: "<<top<<endl;
                if( st.top() != '('){                    
                    int pen=st.top();
                    st.pop();                    
                    st.push(pen+top);
                    cout<<"case 5:"<<"i: "<<i<<"pen+top: "<<pen+top<<endl;
                }
                else{
                    st.push(top);
                }
            }
            
            
        }
        
      
        while(st.size()){               
            out+=(int)st.top();            
            st.pop();
        }        
        return out;    
    }
};
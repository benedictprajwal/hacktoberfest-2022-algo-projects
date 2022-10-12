/*
Name :- Vicky
Github Id :- vicky925
*/



class Solution {
public:
    char evaluate(stack<char>&s){
        bool has_true=false;
        bool has_false=false;
        while(s.top()!='&' && s.top()!='!' && s.top()!='|'){
            if(s.top()=='t')
                has_true=true;
            else
                has_false=true;
            s.pop();
        }
        if(s.top()=='&'){
            if(has_false==false)
                return 't';
        }
        else if(s.top()=='!'){
            if(has_false==true)
                return 't';
        }
        else{
            if(has_true==true)
                return 't';
        }
        return 'f';
    }
    bool parseBoolExpr(string expression) {
        stack<char>s;
        for(auto ch:expression){
            if(ch!=')' && ch!='(' && ch!=',')
                s.push(ch);
            if(ch==')'){
                char temp=evaluate(s);
                s.pop();
                s.push(temp);
            }
        }
        return s.top()=='t'?true:false;
    }
};

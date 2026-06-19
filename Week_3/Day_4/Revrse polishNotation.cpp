class Solution {
public:
long result(long a,long b,string token){
    if(token=="+") return a+b;
    else if(token=="-") return a-b; //In string double quotes 
    else if(token=="*") return a*b; //For char single quotes
    else if(token=="/") return a/b;
    else return -1;
}
    int evalRPN(vector<string>& tokens) {
        stack<long>st;

        for(string token:tokens){
            if(token=="+" || token=="-" || token=="*" || token=="/"){
                long a=st.top();
                st.pop();
                long b=st.top();
                st.pop();
                long ans=result(b,a,token); //order matters
                st.push(ans);
            }
            else{
                long a=stol(token); //Important->string to long
                st.push(a);
            }
        }
        return st.top();
        
    }
};
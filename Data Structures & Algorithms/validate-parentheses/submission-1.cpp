class Solution {
public:
    bool isValid(string s) 
    {
        int top=-1;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                top++;
                s[top]=s[i];
            }
            else
            {
                if(top==-1)
                return false;
                
                if((s[i]==')'&&s[top]=='(')||(s[i]=='}'&&s[top]=='{')|| (s[i]==']'&&s[top]=='['))
                {
                    top--;
                }
                else
                return false;
            }
        }
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class MinStack {
public:
    int stack[30005];
    int topindex;
    MinStack() {
        topindex=-1;
    }
    
    void push(int val) {
        if(topindex!=30004)
        {
            stack[++topindex]=val;
        }
        else
        {
            cout<<"overflow"<<endl;
        }
    }
    
    void pop()
    {
        if(topindex!=-1)
        {
            stack[topindex--];
        } 
        else
        {
            cout<<"underflow"<<endl;
        }  
    }
    
    int top()
    {
        if(topindex==-1)
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {
           return stack[topindex];
        }  
    }
    
    int getMin()
    {
        int min=stack[0];
        for(int i=0;i<=topindex;i++)
        {
            if(stack[i]<min)
            {
                min=stack[i];
            }
        }
        return min;
    }
};

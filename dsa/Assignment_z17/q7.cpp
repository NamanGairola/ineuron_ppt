class FrontMiddleBackQueue {
public:
    deque<int>q;
    stack<int>st;
    int n;
    FrontMiddleBackQueue() {
        while(!q.empty())
        {
            q.pop_back();
        }
    }
    
    void pushFront(int val) {
        q.push_front(val);
    }
    
    void pushMiddle(int val) {
        n=q.size()/2;
        while(n--)
        {
            st.push(q.front());
            q.pop_front();
        }
        q.push_front(val);
        while(!st.empty())
        {
            q.push_front(st.top());
            st.pop();
        }
    }
    
    void pushBack(int val) {
        q.push_back(val);
    }
    
    int popFront() {
        if(q.size()==0)
        {
            return -1;
        }
        n=q.front();
        q.pop_front();
        return n;
    }
    
    int popMiddle() {
        if(q.size()==0)
        {
            return -1;
        }
        n=(q.size()+1)/2;
        while(n--)
        {
            st.push(q.front());
            q.pop_front();
        }
        if(!st.empty())
        {
            n=st.top();
            st.pop();
        }
        while(!st.empty())
        {
            q.push_front(st.top());
            st.pop();
        }
        return n;
    }
    
    int popBack() {
        if(q.size()==0)
        {
            return -1;
        }
        n=q.back();
        q.pop_back();
        return n;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */
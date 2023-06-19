class DataStream {
public:
    int lastnot=0,v,n;
    DataStream(int value, int k) {
        v=value;
        n=k;
    }
    
    bool consec(int num) {
        if(num==v)
        {
            lastnot++;
        }
        else
        {
            lastnot=0;
        }
        return lastnot>=n;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
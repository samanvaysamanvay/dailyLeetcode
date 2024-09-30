class CustomStack {
    vector<int> nums;
    int top;
public:
    CustomStack(int maxSize) {
        nums.resize(maxSize,0);
        top=-1;
    }
    
    void push(int x) {
        if(top!=nums.size()-1){
        top++;
        nums[top]=x;
        }
    }
    
    int pop() {
        if(top!=-1){
        int temp=nums[top];    
        top--;
        return temp;
        }
        else return -1;
    }
    
    void increment(int k, int val) {
        for(int i=0;i<k && i<nums.size();i++){
            nums[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
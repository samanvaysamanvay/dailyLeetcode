class Solution {
private:
    vector<int> arr;    
public:
    void solve(int i,int n){
       if(i > n) return;

       arr.push_back(i);
       solve(i*10,n);
       if((i + 1)%10 != 0) solve(i+1,n);
    }
    vector<int> lexicalOrder(int n) {      
        solve(1,n);
        
        return arr;
    }
};
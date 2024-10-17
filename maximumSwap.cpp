class Solution {
public:
    int maximumSwap(int num) {
        string gg=to_string(num);
        int maxidx=-1;int maxdigit=-1;
        int leftidx=-1;int rightidx=-1;
        for(int i=gg.length()-1;i>=0;--i){
            if(gg[i]>maxdigit){
                maxidx=i;
                maxdigit=gg[i];
                continue;
            }
            if(gg[i]<maxdigit){
                leftidx=i;
                rightidx=maxidx;
            }
        }
        if(leftidx==-1) return  num;
        swap(gg[leftidx],gg[rightidx]);
        return stoi(gg);
    }
};
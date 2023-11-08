class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(abs(sx - fx)==0 && abs(sy - fy)==0){
            return t != 1;
        }
        if(abs(sx - fx)<=t && abs(sy - fy)<=t){
            return true;
        }
        
        return false;
              
    }
};

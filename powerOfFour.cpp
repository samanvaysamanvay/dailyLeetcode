class Solution {
public:
    bool isPowerOfFour(int n) {
        long i=0,x=1;
        while(true){
          if(x==n) return true;
          if(x>n) break;
          x=pow(4,i+1);
          i++;
        }
        return false;
    }
};
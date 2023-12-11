class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size()/4;
        int curnum=arr[0],count=0;
        for(int i=0;i<arr.size();i++){
            if(curnum!=arr[i]){
             curnum=arr[i];
             count=1;
            }
        else{
            count++;
            if(count>n) break;
            }    
        }
        return curnum;
    }
};
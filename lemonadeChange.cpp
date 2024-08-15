class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int note10=0,note5=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) note5++;
            else if(bills[i]==10 && note5>=1){
                note10++;
                note5--;
            }
            else if(bills[i]==20 && note5>=1 && note10>=1){
                note10--;
                note5--;
            }
            else if(bills[i]==20 && note5>=3){
                note5-=3;
            }
            else return false; 
        }
        return true;
    }
};
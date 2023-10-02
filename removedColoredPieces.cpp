class Solution {
public:
    bool winnerOfGame(string colors) {
        int alice=0,bob=0;
        if(colors.length()<=2) return false;
        int l=0;
        while(l<colors.length()-2){
            if(colors[l]=='A' && colors[l+1]=='A' && colors[l+2]=='A') alice++;
            if(colors[l]=='B' && colors[l+1]=='B' && colors[l+2]=='B') bob++;
            l++;
        }
        if(alice>bob) return true;
        else return false;
    }
};
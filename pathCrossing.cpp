class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>>visi;
        int x=0,y=0;
        visi.insert({x,y});
        for(auto it:path)
        {
            if(it=='N')x++;
            else if(it=='S')x--;
            else if(it=='E')y++;
            else if(it=='W')y--;
            if(visi.count({x,y})) return true;            
            visi.insert({x,y});
        }
        return false;;  
    }
};
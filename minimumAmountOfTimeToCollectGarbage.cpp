class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int time=0,timem=0,timep=0,timeg=0;
        for(int i=0;i<garbage.size();i++){
            bool flagp=false,flagm=false,flagg=false;
            for(int j=0;j<garbage[i].length();j++){
                if(garbage[i][j]=='M') flagm=true;
                if(garbage[i][j]=='P') flagp=true;
                if(garbage[i][j]=='G') flagg=true;
                time++;                                 
            }
            if(flagm){
               time+=timem;
               timem=0;
            }
            if(flagp){
               time+=timep;
               timep=0;
            }
            if(flagg){
               time+=timeg;
               timeg=0;
            }
            if(i!=garbage.size()-1){
            timep+=travel[i];
            timeg+=travel[i];
            timem+=travel[i];
            }
        }
        return time;
    }
};
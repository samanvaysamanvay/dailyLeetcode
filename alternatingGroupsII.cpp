class Solution {
    public:
        int numberOfAlternatingGroups(vector<int>& colors, int k) {
            vector<int> circle;
            for(int i=0;i<colors.size();i++){
                circle.push_back(colors[i]);
            } 
            for(int i=0;i<k-1;i++){
                circle.push_back(colors[i]);  
            }
            int left=0,right=k-1,count=0;
            bool alternating=false;
            while(right<circle.size()){
                  if(alternating){
                    if(circle[right]==circle[right-1]){
                        alternating=false;
                        left=right;
                        right=right+k-1;
                    }
                    else{
                    count++;    
                    right++;
                    left++;
                    }
                  }
                  else{
                    int flag=0;
                    for(int i=left+1;i<=right-1;i++){
                        if(circle[i-1]==circle[i] || circle[i]==circle[i+1]){
                            flag=1;
                            break;
                        }
                    }
                    if(flag==0){
                        alternating=true;
                        count++;
                    }
                    left++;
                    right++;
                  }
            }
            return count;
        }
    };
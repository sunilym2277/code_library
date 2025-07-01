class Solution {
public:
    int pos(int n){
        if (n==1){
            return -1;
        }
       else if (n==2 || n==3){
            return 1;
        }
       else if (n==4 || n==5){
            return 2;
        }
        else {
            return (n/3) + 1;
        }
    }
    
    int minimumRounds(vector<int>& t) {
        map<int ,int> m;
        int c=0;
        for (int i:t){
            m[i]++;
        }
        for(auto i:m){
            int f = i.first;
            int s = i.second;
            if (s==1){
                return -1;
            }
            if(s%3==0){
                c=c+ (s/3);
            }
            else {
               c =c+ pos(s);
                
            }
        }
        return c;
    }
};

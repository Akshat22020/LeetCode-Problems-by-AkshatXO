class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>h; //heap

        for(int i=0;i<stones.size();i++){
            h.push(stones[i]);
        }

        while(h.size()>1){
            int a=h.top();
            h.pop();
            int b=h.top();
            h.pop();
            if(a==b) h.push(0);
            else if(a!=b){
                b=a-b;
                h.push(b);
            }
        }
        return h.top();

    }
};
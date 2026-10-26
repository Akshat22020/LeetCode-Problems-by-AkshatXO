class Solution {
public:
    int trap(vector<int>& h) {
        stack<int> st;
        int water = 0;

        for (int i = 0; i < h.size(); i++) {

            while (!st.empty() && h[i] > h[st.top()]) {
                int mid = st.top(); 
                st.pop();

                if (st.empty()) break;

                int left = st.top();

                int width = i - left - 1;
                int height = min(h[left], h[i]) - h[mid];

                water += width * height;
            }

            st.push(i);
        }

        return water;
    }
};
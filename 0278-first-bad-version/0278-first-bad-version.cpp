class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (isBadVersion(mid)) {
                high = mid;       // mid could be the first bad
            } else {
                low = mid + 1;    // first bad is after mid
            }
        }

        return low;
    }
};
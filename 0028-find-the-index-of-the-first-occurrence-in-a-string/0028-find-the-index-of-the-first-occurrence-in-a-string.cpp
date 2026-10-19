class Solution {
public:
    int strStr(string haystack, string needle) {
        int size_1 = haystack.size();
        int size_2 = needle.size();

        // if (size_2 == 0) return 0; // Edge case: empty needle

        for (int i = 0; i <= size_1 - size_2; i++) {
            int j = 0;
            while (j < size_2 && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == size_2) return i; // Found full match
        }

        return -1; // Not found
    }
};

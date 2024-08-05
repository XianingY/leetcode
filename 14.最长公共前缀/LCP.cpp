class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = strs[0];

        for (int j = 1; j < strs.size(); j++) {
            result = LCP(result, strs[j]);
        }
        return result;
    }

    string LCP(string s1, string s2) {
        string rst;
        int loop = min(s1.size(), s2.size());

        int i = 0;
        while (s1[i] == s2[i] && i < loop) {
            rst.push_back(s1[i]);
            i++;
        }

        return rst;
    }
};
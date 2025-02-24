// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string

/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~
--||author : codechaser||-- 
~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
class Solution {
public:
    string removeDuplicates(string s) {
        for(int i = 1; i < s.size(); i++) {
            if(s[i - 1] == s[i]) {
                s.erase(i - 1, 2);
                i -= 2;
            }
            if(i < 0) i = 0;
        }
        return s;
    }
};
/*
    |---------------------------------------------------|
    |||   https://codeforces.com/profile/codechaser   |||
    |||   https://www.codechef.com/users/codechaser   |||
    |||        https://github.com/code-chaser         |||
    |---------------------------------------------------|
*/
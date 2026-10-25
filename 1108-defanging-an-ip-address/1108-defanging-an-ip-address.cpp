
class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        ans.reserve(address.size() + 6);

        for (char c : address) {
            if (c == '.') {
                ans += "[.]";
            } else {
                ans += c;
            }
        }

        return ans;
    }
};

class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0)
            return "0";
        string ans = "";
        if ((numerator < 0) ^ (denominator < 0)) {
            ans += "-";
        }
        long n = abs((long)numerator);
        long d = abs((long)denominator);
        ans += (to_string)(n / d);
        long rem = n % d;
        if (rem == 0)
            return ans;
        ans += ".";
        unordered_map<long, int> mp;
        while (rem != 0) {
            if (mp.find(rem) != mp.end()) {
                int pos = mp[rem];
                ans.insert(pos,"(");
                ans += ")";
                break;
            }
            mp[rem] = ans.size();
            rem *= 10;
            ans += to_string(rem / d);
            rem %= d;
        }
        return ans;
    }
};
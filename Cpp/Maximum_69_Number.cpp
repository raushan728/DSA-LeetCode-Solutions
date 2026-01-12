class Solution {
public:
    int maximum69Number(int num) {
        // string s = to_string(num);
        // for (int i = 0; i < s.size(); i++) {
        //     if (s[i] == '6') {
        //         s[i] = '9';
        //         break;
        //     }
        // }
        // return stoi(s);

        int temp = num;
        int pos = 0;
        int sixPos = -1;
        while (temp > 0) {
            if (temp % 10 == 6)
                sixPos = pos;
            temp = temp / 10;
            pos++;
        }
        if (sixPos != -1) {
            num += 3 * (pow(10, sixPos));
        }
        return num;
    }
};

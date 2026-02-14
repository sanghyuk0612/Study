class Solution {
public:
//"PAYPALISHIRING", 3
        string convert(string s, int numRows) {
        vector<string> result(numRows,"");
        int i = 0;
        while (i<s.size()){
            int j;
            for (j = 0; j<numRows; j++) {
                result[j] += s[i];
                cout << s[i] << "what " << i << " "<< j << "\n";
                i++;
                if (i>=s.size()) {
                    break;
                }
            }
            j--;
            j--;
            while (j>0) {
                if (i>=s.size()) {
                    break;
                }
                result[j]+=s[i];
                i++;
                j--;
            }
        }
        string returnV = "";
        for (int i = 0 ; i<result.size();i++) {
            returnV += result[i];
            cout<< result[i] << "\n";
        }

        return returnV;
    }
};
//TC: O(n) and SC: O(1)

class Solution {
public:
    /*
     * @param strs: a list of strings
     * @return: encodes a list of strings to a single string.
     */
    string encode(vector<string> &strs) {
        int size=strs.size();

        string result="";
        for(int i=0;i<size;i++){
            string str=strs[i];
            result+=to_string(str.size())+"#"+str;
        }
        return result;
    }

    /*
     * @param str: A string
     * @return: dcodes a single string to a list of strings
     */
     
    vector<string> decode(string &str) {
        vector<string> result;
        int size=str.size();

        for(int i=0;i<size;i++){
            if(isdigit(str[i])){
                int len=0;
                while(isdigit(str[i]) && i<size){
                    len=len*10 + (str[i]-'0');
                    i++;
                }
                if(str[i]=='#'){
                    i++;
                    string res=str.substr(i,len);
                    result.push_back(res);
                    i+=len-1;
                }
            }
        }
        return result;
    }
};

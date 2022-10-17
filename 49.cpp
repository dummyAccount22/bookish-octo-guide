class Solution {
public:
    
    string getSortedString(string str) {
        vector<int> count(26,0);
        for(char s:str) count[s-'a']++;
        
        string temp;
        for(int i=0;i<26;i++) {
            temp+= string(count[i], (i+'a'));
        }
            
        return temp;
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size()==0) return {{}};
        unordered_map<string, vector<string>> groups;
        vector<vector<string>> anagrams;
        
        for(string str:strs) 
            groups[getSortedString(str)].push_back(str);
        
        
        for(auto g:groups)
            anagrams.push_back(g.second);
        
        groups.clear();
        return anagrams;
    }
};

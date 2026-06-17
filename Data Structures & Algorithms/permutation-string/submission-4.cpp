class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> m;
        for(auto s: s1){
            m[s]++;
        }
        
        for(int i=0; i<s2.size()-s1.size()+1; i++){
            bool flag = true;
            unordered_map<char, int> m_new = m;
            int k = i;
            int j = s1.size();
            while(k < i+j){
                if(m_new.find(s2[k]) != m_new.end()){
                    m_new[s2[k]]--;
                }
                k++;
            }
            for(auto pair: m_new){
                if(pair.second != 0){
                    flag = false;;
                }
            }
            if(flag){
                return true;
            }
        }
        return false;
    }
};

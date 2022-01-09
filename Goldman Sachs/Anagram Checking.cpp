class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<string>sorted_vec;
        map<int, vector<string>>m;
        vector<vector<string>>ans;
        int ind=0;
        for (int i=0;i<string_list.size();i++){
            string word = string_list[i];
            string sorted_word = word;
            sort(sorted_word.begin(), sorted_word.end());
            auto it = find(sorted_vec.begin(), sorted_vec.end(), sorted_word);
            if (it==sorted_vec.end()){
                sorted_vec.push_back(sorted_word);
                m[ind] = {};
                m[ind].push_back(word);
                ind++;
            }else{
                int index = it-sorted_vec.begin();
                m[index].push_back(word);
            }
        }
        for (map<int, vector<string>>::iterator i=m.begin(); i!=m.end(); ++i){
            ans.push_back(i->second);
        }
        return ans;
    }
};

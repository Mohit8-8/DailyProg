class Solution {
public:
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> adj;

    void dfs(string word, string beginWord, vector<string>& path){
        if(word == beginWord){
            reverse(path.begin(), path.end());
            ans.push_back(path);
            reverse(path.begin(), path.end());
            return;
        }

        for(auto &parent : adj[word]){
            path.push_back(parent);
            dfs(parent, beginWord, path);
            path.pop_back();
        }
    }

    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {

        unordered_set<string> s(wordList.begin(), wordList.end());
        if(s.find(endWord) == s.end()) return {};

        queue<string> q;
        q.push(beginWord);

        unordered_map<string, int> level;
        level[beginWord] = 0;

        int wordLen = beginWord.length();

        while(!q.empty()){
            string curr = q.front();
            q.pop();

            string temp = curr;

            for(int i = 0; i < wordLen; i++){
                char original = temp[i];

                for(char c = 'a'; c <= 'z'; c++){
                    temp[i] = c;

                    if(s.find(temp) != s.end()){
                        if(level.find(temp) == level.end()){
                            level[temp] = level[curr] + 1;
                            q.push(temp);
                            adj[temp].push_back(curr);
                        }
                        else if(level[temp] == level[curr] + 1){
                            adj[temp].push_back(curr);
                        }
                    }
                }
                temp[i] = original;
            }
        }

        if(level.find(endWord) == level.end()) return {};

        vector<string> path;
        path.push_back(endWord);

        dfs(endWord, beginWord, path);

        return ans;
    }
};
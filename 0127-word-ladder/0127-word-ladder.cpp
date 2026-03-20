class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        if(find(wordList.begin(), wordList.end(), endWord)==wordList.end()) return 0;

        set<string>s;
        for(auto i: wordList){
            s.insert(i);
        }
        queue<string>q;
        q.push(beginWord);
        int w = 0;
        while(!q.empty()){
            w++;
            int n = q.size();
            while(n--){
                string curr = q.front();
                q.pop();
                for(int i = 0; i < curr.length(); i++){
                    string temp = curr;
                    for(char c = 'a'; c<='z'; c++){
                        temp[i] = c;
                        if(temp == endWord){
                            return w+1;
                        }
                        if(s.find(temp)!= s.end()){
                            q.push(temp);
                            s.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};
class TrieNode {
  public:
    int val;
    unordered_map<char, TrieNode*> children;
    TrieNode() : val(0) {}
};

class Trie {
    TrieNode *root;

  public:
    Trie() { root = new TrieNode(); }

    void insert(const string &word) {
        TrieNode *cur = root;
        for (char ch : word) {
            if (cur->children.find(ch) == cur->children.end()) {
                cur->children[ch] = new TrieNode();
            }
            cur = cur->children[ch];
            cur->val++;
        }
    }

    int startsWith(const string &prefix) {
        TrieNode *cur = root;
        int count = 0;
        for (char ch : prefix) {
            if (cur->children.find(ch) == cur->children.end()) {
                return count; 
            }
            cur = cur->children[ch];
            count += cur->val; 
        }
        return count;
    }
};

class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        Trie t;

        for (const string &word : words) {
            t.insert(word);
        }
        
        vector<int> ans;

        for (const string &word : words) {
            ans.push_back(t.startsWith(word));
        }
        
        return ans;
    }
};

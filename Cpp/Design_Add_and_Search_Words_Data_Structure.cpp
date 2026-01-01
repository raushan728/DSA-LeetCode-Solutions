class WordDictionary {
private:
    struct TrieNode {
        TrieNode* children[26];
        bool isEnd;

        TrieNode() {
            isEnd = false;
            for (int i = 0; i < 26; i++)
                children[i] = nullptr;
        }
    };

    TrieNode* root;
    bool dfs(int index, TrieNode* node, string& word) {
        if (index == word.size())
            return node->isEnd;

        char ch = word[index];
        if (ch != '.') {
            int idx = ch - 'a';

            if (node->children[idx] == nullptr)
                return false;

            return dfs(index + 1, node->children[idx], word);
        } else {
            for (int i = 0; i < 26; i++) {
                if (node->children[i] != nullptr) {
                    if (dfs(index + 1, node->children[i], word))
                        return true;
                }
            }
            return false;
        }
    }

public:
    WordDictionary() { root = new TrieNode(); }

    void addWord(string word) {
        TrieNode* node = root;

        for (char ch : word) {
            int idx = ch - 'a';

            if (node->children[idx] == nullptr)
                node->children[idx] = new TrieNode();

            node = node->children[idx];
        }

        node->isEnd = true;
    }

    bool search(string word) { return dfs(0, root, word); }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
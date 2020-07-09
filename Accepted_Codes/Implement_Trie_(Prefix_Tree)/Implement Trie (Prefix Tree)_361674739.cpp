struct TrieNode{
    map<char,TrieNode*> child;
    bool isWord;
    TrieNode() : isWord(false) {}
};


class Trie {
public:
    /** Initialize your data structure here. */
  TrieNode* root;
Trie() {
    root=new TrieNode();
}
~Trie(){
    root->child.clear();
    delete(root);
}  
    /** Inserts a word into the trie. */
    void insert(string s) {
        TrieNode* node=root;
    for(int i=0; i<s.size(); i++){
        map<char, TrieNode*> &mp=node->child;
        if(mp.find(s[i])==mp.end()){
            mp[s[i]]=new TrieNode();
        }
        node=mp[s[i]];
    }
    node->isWord=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string s) {
        TrieNode* node=root;
    for(int i=0; i<s.size(); i++){
        map<char, TrieNode*> &mp=node->child;
        if(mp.find(s[i])==mp.end()){
            return false;
        }
        node=mp[s[i]];
    }
    return node->isWord;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string s) {
        TrieNode* node=root;
    for(int i=0; i<s.size(); i++){
        map<char, TrieNode*> &mp=node->child;
        if(mp.find(s[i])==mp.end()){
            return false;
        }
        node=mp[s[i]];
    }
    return true;

    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

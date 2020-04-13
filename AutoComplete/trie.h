/****************************************************
 * 
 * Description: Trie Data Structure
 * Author: Arya Nguyen
 * Project: EyeTracking_SpeechGenerating
 * 
 ****************************************************/
#include <iostream>
#include "node.h"

class Trie
{
    friend class Node;
    
private:
    bool space;           // string stores user query with space
    std::string noPrefix; // string that stores user query without prefix
    Node* root;

public:
    Trie()
    {
        root = new Node();
        this->space = false;
    };
    ~Trie(){};

    // search quey for space
    void isSpace(std::string data);

    // return space
    bool getSpace() { return space; }

    // insert data into tree
    void insert(std::string data);

    // search key in tree
    void search(std::string data);

    // print suggested queries
    void print_tree(Node* root, std::string data, std::string str);
    void print_tree(Node* root, std::string data);

    // remove prefix, if space in string
    void remove_prefix(std::string data);

    // return noPrefix
    std::string getNo_prefix() { return noPrefix; };

    // returns prefix
    std::string break_string(std::string){};
};
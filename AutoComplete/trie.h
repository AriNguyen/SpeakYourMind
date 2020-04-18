/****************************************************
 * trie.h
 * 
 * Description: Trie Data Structure
 * Author: Arya Nguyen
 * Project: EyeTracking_SpeechGenerating
 * 
 ****************************************************/
#ifndef TRIE_H
#define TRIE_H

#include <iostream>
#include "node.h"

class Trie
{
    // class Node can access private memebers of Trie
    friend class Node;

private:
    bool space;           // true if space in string storing user query
    std::string noPrefix; // string storing user query without prefix
    Node *root;

public:
    Trie() // Constructor
    {
        root = new Node();
        this->space = false;
    }
    ~Trie() {} // Destructor

    void isSpace(std::string data);                                 // search quey for space, set bool space
    bool getSpace() { return space; }                               // return space
    void insert(std::string data);                                  // insert data into tree
    void search(std::string data);                                  // search key in tree
    void print_tree(Node *root, std::string data, std::string str); // print suggested queries
    void print_tree(Node *root, std::string data);                  // overloaded print_tree method for recursion
    void remove_prefix(std::string data);                           // remove prefix, if space in string
    std::string getNo_prefix() { return noPrefix; }                 // return noPrefi
    std::string break_string(std::string data);                        // returns prefix
};

#endif

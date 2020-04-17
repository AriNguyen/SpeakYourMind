/****************************************************
 * node.h
 * 
 * Description: Trie Node
 * Author: Arya Nguyen
 * Project: EyeTracking_SpeechGenerating
 * 
 ****************************************************/
#ifndef NODE_H
#define NODE_H

#include <iostream>

const int ALPHABET_SIZE = 128;

// Node that holds data for Trie Data Structure
class Node
{
    // class Trie can access members of Node
    friend class Trie;

private:
    char c;                     // character
    bool isEndOfWord;           // true if c marks the end of the word
    Node *child[ALPHABET_SIZE]; // points to next node, each pointer for each char in ASCII table (127 characters)

public:
    Node() {}  // Constructor
    ~Node() {} // Destructor
    void setEndOfWord(int boo) { this->isEndOfWord = boo; }
    bool isEndOfWord() { this->isEndOfWord; }
    void setChar(char ch) { this->c = ch; }
    char getChar() const { return this->c; }
};

#endif

/****************************************************
 * 
 * Description: Trie Node
 * Author: Arya Nguyen
 * Project: EyeTracking_SpeechGenerating
 * 
 ****************************************************/
#include <iostream>

const int ALPHABET_SIZE = 128;


// Node that holds data for Trie Data Structure
class Node
{
private:
    char c;
    bool isEndOfWord; 
    Node* child[ALPHABET_SIZE];
public:
    Node() {};
    ~Node() {};  
    void setEndOfWord(int boo) {this->isEndOfWord = boo;};
    bool isEndOfWord() {this->isEndOfWord;};
    void setChar(char ch) {this->c = ch;}; 
    char getChar() const {return this->c;};
};  
/****************************************************
 * node.cpp
 * 
 * Description: Trie Node
 * Author: Arya Nguyen
 * Project: EyeTracking_SpeechGenerating
 * 
 ****************************************************/

#include "node.h"

Node::Node() // Node Constructor
{
    this->setChar('\0');
    this->setEndOfWord(false);
    for (int i = 0; i < 128; i++)
        this->child[i] = NULL;
}

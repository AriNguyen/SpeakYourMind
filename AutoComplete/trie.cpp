/****************************************************
 * trie.cpp
 * 
 * Description: Trie Data Structure
 * Author: Arya Nguyen
 * Project: EyeTracking_SpeechGenerating
 * 
 ****************************************************/

#include <iostream>
#include <string>
#include "node.h"
#include "trie.h"

void Trie::isSpace(std::string data) // checks user input for space
{
    char cstr[data.length()];

    data.copy(cstr, data.length());
    for (int i = 0; i < data.length(); i++)
    {
        if (cstr[i] == ' ')
        {
            space = true;
            return;
        }
        else
            continue;
    }
}

void Trie::insert(std::string data)
{
    Node *tmp = root;
    char cstr[data.length()];

    data.copy(cstr, data.length());
    for (int i = 0; i < data.length(); i++)
    {
        if (tmp->child[static_cast<int>(cstr[i])] != NULL)
            tmp = tmp->child[static_cast<int>(cstr[i])];
        else
        {
            tmp->child[static_cast<int>(cstr[i])] = new Node();
            tmp = tmp->child[static_cast<int>(cstr[i])];
            tmp->setChar(cstr[i]); // insert char in new node
        }
    }
    tmp->setEndOfWord(true);
}

void Trie::search(std::string data)
{
    Node *tmp = root;
    char cstr[data.length()];

    data.copy(cstr, data.length());
    for (int i = 0; i < data.length(); i++)
    {
        if (tmp->child[static_cast<int>(cstr[i])] == NULL)
        {
            std::cout << "error: not found" << std::endl;
            return;
        }
        else
            tmp = tmp->child[static_cast<int>(cstr[i])];

        if (tmp->getChar() != cstr[i])
        {
            std::cout << "error: not found" << std::endl;
        }
    }
    std::string str = data;
    print_tree(tmp, data, str);
}

void Trie::print_tree(Node *root, std::string data, std::string str)
{
    for (int i = 0; i < 128; i++)
    {
        Node *adv = root;
        if (adv->child[i] != NULL) // child exits
        {
            str += adv->getChar();
            if (adv->isEndOfWord()) // if points at the end of the root, print word
            {
                if (this->getSpace())
                    std::cout << this->getNo_prefix();
                std::cout << str << std::endl;
            }
            print_tree(adv, str); // recursive call to keep moving down the tree
        }
        str = data;
    }
}

void Trie::print_tree(Node *root, std::string str) // overloaded function for recursive call
{
    std::string str_tmp = str;

    for (int i = 0; i < 128; i++)
    {
        Node *adv = root;
        if (adv->child[i] != NULL)
        {
            adv = adv->child[i];
            str += adv->getChar();
            if (adv->isEndOfWord())
            {
                if (this->getSpace())
                    std::cout << this->noPrefix;
                std::cout << str << std::endl;
            }
            print_tree(adv, str);
        }
        str = str_tmp;
    }
}

void Trie::remove_prefix(std::string data)
{
    char cstr[data.length()];
    data.copy(cstr, data.length());

    for (int i = data.length(); i-- > 0;) // reverse loop
    {
        if (cstr[i] == ' ') 
            break;
        else 
            cstr[i] = '\0';
    }
    noPrefix = cstr; 
}

std::string Trie::break_string(std::string data)
{
    char cstr[data.length()];
    std::string str;
    data.copy(cstr, data.length());

    for (int i = data.length(); i-- > 0;)
    {
        if (cstr[i] == ' ')
            break;
        else
            str.insert(str.begin(), cstr[i]);
    }
    return str;
}

/****************************************************
 * search.cpp
 * 
 * Description: Implement Trie Data Structure
 * Author: Arya Nguyen
 * Project: EyeTracking_SpeechGenerating
 * 
 ****************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

#include "node.h"
#include "trie.h"

int main()
{
    std::string data;
    std::fstream dictionary;
    Trie complete_query;
    std::string dict_path = "../data/words_dicitonary.json";

    dictionary.open(dict_path, std::fstream::in); // read dictionary to trie data structure
    if (dictionary.is_open())
    {
        while (dictionary)
        {
            dictionary >> data;
            complete_query.insert(data);
        }
    }
    else
    {
        std::cout << "erro: file not open." << std::endl;
        return -1;
    }
    dictionary.close();
    data.clear();

    std::cout << "Enter search query: " << std::endl;
    std::getline(std::cin, data); // use getline to catch spaces
    complete_query.isSpace(data);
    std::cout << "Your search options are: " << std::endl;
    if (complete_query.getSpace() == true)
    {
        complete_query.remove_prefix(data);
        complete_query.search(complete_query.break_string(data));
    }
    else
        complete_query.search(data);
    return 0;
}
# Auto Suggestion

## Files Description
- bin     # executable files
- include # all header files
- src     # .cpp files

## How to compile

```shell script
cd /path/to/AutoComplete

# Compile node.cpp
g++ -I ./include/ -c ./src/node.cpp -o ./bin/node.o

# Compile trie.cpp
g++ -I ./include/ -c ./src/trie.cpp -o ./bin/trie.o

# Compile search.cpp 
g++ -I ./include ./src/search.cpp ./bin/node.o ./bin/trie.o -o ./bin/search.o

# Run search.o
./bin/search.o
```

## Result
```shell script
>> ./bin/search.o
Enter search query: 
my nam

Your search options are: 
my nammability
my nammable
my nammare
...
my namming
my nammma
my nammmad
my nammmo

```

## Conclusion
The result suggests all the possible combination, which can results in up to more than 50 suggested words.

However, we want just a few options, approximately 3, that best followed the whole sentence that the user enters. For example, in this case, we all know that "name" is the best fit. 

In order to predict the best word followed a whole sentence, we would need to train a LSTM neural network, a NN that takes a sequence of words learn the way ...
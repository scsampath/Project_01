//Sachen Sampath, Kai Hilbourne 1 /17 / 20
#include "bag.h"
#include <iostream>
#include <assert.h>

// YOU CAN INCLUDE OTHER HEADER FILES HERE IF NEEDED
// DO NOT ADD THE FOLLOWING HEADERS:
// 1. <vector>, 2. <queue>, 3. <deque>, 4. <stack>,
// 5. <map>, 6. <algorithm>, 7. <set>, 8. <utility>
// In summary do not use any built-in data structures
// other than arrays. Also, do not use any built-in
// algorithms related to sorting and searching

// you are allowed to use the header files: <cstring>, <string>
// you can use the string manipulation functions
// provided by those header files if needed

using namespace std;

// implementation of word constructor; you may modify this if required
Word::Word(std::string name){
  word = name;
  count = 1;
}

// Implement the print_words function
void Bag::print_words() const {
  int i = 0;
  while(container[i].getCount() > 0) {
    cout<<container[i].getWord()<<"::"<<container[i].getCount() << endl;
    i++;
  }
}

// Implement any other memeber functions you may have
// added to the class definitions
int Word::getCount() const {
  return this->count;
}

//increments count member variable in class word
void Word::addCount() {
  this->count++;
}

//returns word member variable in class word
string Word::getWord() const {
  return this->word;
}

//puts a new word into bag
void Bag::insert(string newWord) {
  assert(amount < LIMIT);
  bool exists = false;
  for(int i = 0; i < amount; i++) {
    if(container[i].getWord() == newWord) {
      container[i].addCount();
      exists = true;
    }
  }
  if(!exists){
    Word brandNewWord(newWord);
    Word word = brandNewWord;
    Word tempWord;
    if(amount == 0){
      container[0] = word;
    }
    else{
      for(int i = 0; i <= amount; i++){
        //sorting algorithm
        if(word.getWord() < container[i].getWord()){
          tempWord = container[i];
          container[i] = word;
          word = tempWord;
        }
        else if(container[i].getWord() == "") {
          container[i] = word;
        }
      }
    }
    addAmount();
  }
}

//increments amount member variable of bag
void Bag::addAmount() {
  amount++;
}





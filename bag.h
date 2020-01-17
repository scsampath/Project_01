//Sachen Sampath, Kai Hilbourne 1 /17 / 20
#ifndef _BAG_H
#define _BAG_H

#include <string>

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



#define LIMIT 10000 

// This is the class that will store
// a word and its count
class Word{
  std::string word;
  int count;
  // DO NOT REMOVE THE ABOVE MEMBER VARIABLES

  // ADD NEW MEMBER VARIABLES HERE IF NEEDED
public:
  Word() {word = ""; count = -1;}  // default constructor to keep compiler happy; DO NOT DELETE
  Word(std::string name); // constructor
  
  // ADD NEW MEMBER FUNCTIONS HERE AS NEEDED
  int getCount() const;
  void addCount();
  std::string getWord() const;
};

class Bag{
  // Below is an array of Word objects.
  // You must store new objects or modify existing objects in this array.
  Word container[LIMIT];
  // It will be useful to maintain this array in lexicographically
  // increasing order of words stored in the objects
  // i.e the Word object for "apple" is stored at a lower index
  // than the Word object for "zoo"


  // ADD NEW MEMBER VARIABLES HERE IF NEEDED
  int amount = 0;
  
public:
  // the below function is used to print the contents of
  // container array (declared at line 40)  in the format <WORD::COUNT>
  void print_words() const;

  // ADD NEW MEMBER FUNCTIONS HERE AS NEEDED
  void insert(std::string newWord);

  void addAmount();
};

#endif

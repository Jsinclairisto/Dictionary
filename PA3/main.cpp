#include <string>
#include <iostream>
#include <ifstream>
#include <ostream>
#include <sstream>
#include "Trie.h"
using namespace std;

//PA #3 Checkin TODO: Implement!
void walk(TrieNode *node, vector<string> &words, string current_word)
{


}

//PA #3 Checkin TODO: Implement!
void search(TrieNode *node, vector<string> &words, string current_word, string prefix)
{


}

//NOTE: You do not have to modify this function.  Its purpose is to call your checkin code
void pa3CheckinDriver()
{
    TrieNode *root = new TrieNode{};

    //build practice word ('apple')
    root->setChild('a', new TrieNode{ 'a' });
    root->getChild('a')->setChild('p', new TrieNode{ 'p' });
    root->getChild('a')->getChild('p')->setChild('p', new TrieNode{ 'p' });
    root->getChild('a')->getChild('p')->getChild('p')->setChild('l', new TrieNode{ 'l' });
    root->getChild('a')->getChild('p')->getChild('p')->getChild('l')->setChild('e', new TrieNode{ 'e' });

    //complete word
    root->getChild('a')->getChild('p')->getChild('p')->getChild('l')->getChild('e')->setChild('$', new TrieNode{ '$' });

    //add branch word ('apples')
    root->getChild('a')->getChild('p')->getChild('p')->getChild('l')->getChild('e')->setChild('s', new TrieNode{ 's' });

    //complete branch word
    root->getChild('a')->getChild('p')->getChild('p')->getChild('l')->getChild('e')->getChild('s')->setChild('$', new TrieNode{ '$' });

    //add 2nd practice word ('age')
    root->getChild('a')->setChild('g', new TrieNode{ 'g' });
    root->getChild('a')->getChild('g')->setChild('e', new TrieNode{ 'e' });
    root->getChild('a')->getChild('g')->getChild('e')->setChild('$', new TrieNode{ '$' });

    vector<string> all_words{};
    walk(root, all_words, "");
    //Expect: APPLE, APPLES, AGE
    for (auto word : all_words)
    {
        cout << word << endl;
    }

    //search tree
    //EXPECTED: APPLE, APPLES
    vector<string> words{};
    search(root, words, "", "AP");
    for (string word : words)
    {
        cout << word << endl;
    }
}

int main(void)
{
    Trie dictionary{};

    string line = "";

    string file_to_open;
    //PA #3 Checkin hook.  Remove before turning in your final PA3
    
    
    //First, prompt the user for a file containing all of the words to look up

    cout << "Enter file name: ";
    cin >> file_to_open;

    ifstream input_file(file_to_open);

    if (input_file.is_open())
    {



    }
    pa3CheckinDriver();

    //Next, add all words in the file into the Trie using the addWord() function
    addword(file_to_open);

    //Then, prompt the user for a list of partial words to look up.  Display all matches 
    //on the screen.

}
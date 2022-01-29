//Noah Miller





#include <iostream>
#include <string>
using std::string;

int main()
{
  
    //variables 
    string word;
    string spelledBackwards;
    int NumberOfletters = 0;

    //gets user input
    std::cout << "Please enter a word \n";
    std::getline(std::cin, word);

    //get length of string 
    NumberOfletters = word.length();

    // shows user what was entered 
    std::cout << "\nthe word you entered was " << word;
   
    // declare vairable for to getting value from string position in word var 
    int l = NumberOfletters - 1;

    // puts word into spelledBackward this is mainly to give spelledBackward a length 
    spelledBackwards = word;

    //replaces spelledBackward characters 
    for (int w = 0; w < NumberOfletters; w++) {

        spelledBackwards[w] = word[l];
            l--;


    }
    //outputs spelledBackward
    std::cout << "\nif you spell it backwards the word becomes " << spelledBackwards;

    // outputs letters
    std::cout << "\nthere are " << NumberOfletters << " letters in " << word;

    // print letters 
    std::cout << "\nthe letters are ";
    for (int w = 0; w < NumberOfletters; w++) {

        std::cout << word[w] << " ";
        

    }

   





}
#include <iostream>
#include <string> 
#include <fstream>
#include <vector>
#include <iomanip>
#include <cstring>
#include <sstream>
#include <windows.h>
#include<map>


//add lastname,firstname,phone# to hash table (linked)
//return an array of vectors paired<firstlast,phonenum>


//add lastname,firstname,phone# to hash table (quadratic)
//return 2 column array firstlast,phonenum
//if hash value spot is taken, square it (^2), check if bigger than array size, if it is hash the squared value, then check new spot. ALSO keep list of array places visited


//have function what maps name to position in hash function being name#%hash size. resize hash if load factor is over 70% (rehash every value to new hash)

//make function to convert letters to intergers. 
std::string letterval(char l) {
    switch (l) {
    case 'A': return "00";
    case 'B':return "01";
    case 'C':return "02";
    case 'D':return "03";
    case 'E':return "04";
    case 'F':return "05";
    case 'G':return "06";
    case 'H':return "07";
    case 'I':return "08";
    case 'J':return "09";
    case 'K':return "10";
    case 'L':return "11";
    case 'M':return "12";
    case 'N':return "13";
    case 'O':return "14";
    case 'P':return "15";
    case 'Q':return "16";
    case 'R':return "17";
    case 'S':return "18";
    case 'T':return "19";
    case 'U':return "20";
    case 'V':return "21";
    case 'W':return "22";
    case 'X':return "23";
    case 'Y':return "24";
    case 'Z':return "25";
    }
}

//make fucntion that changes name to series of numbers
std::string adjustedletterval(std::string name) {
    std::string nameval = "";
    for (int i = 0; i < name.length(); i++) {//first letter of name is position 0
        nameval = nameval + letterval(name[i]);
    }
    return nameval;
}

//make function to generate random lastname
std::string randname(std::string names[]) {//given array of names (first or last)

    return "";
}


//make function to generate random phone number (return string)
std::string makePhoneNumber() {
    std::string phonenum = "";
    phonenum += std::to_string((rand() % 8) + 2); //ensures number doesn't start with a 0 or 1
    for (int i = 0; i < 9; i++) {
        int Randnum = rand() % 10;
        phonenum += std::to_string(Randnum);
    }
        return phonenum;
}

int main()
{
    //how many names
    int numofnames = 0;
    std::cout << "How many random names would you like to add to this phonebook?" << std::endl;
    std::cin >> numofnames;
    if (numofnames == 0) {
        std::cout << "If you don't want any names stored, why are you using this? Please restart and try again.";
        exit(0);
    }
    
    //load first names from csv file
    std::string fname = "FIRST_NAMES.txt.csv";
    std::fstream file(fname);
    std::string firstnames[400];
    std::string line, word;
    
    if (file.is_open()) {
            int i = 0;
            while (getline(file, line)) {
                firstnames[i] = line;
                i++;
            }
        
    }
    
    //load last names from csv file
    fname = "LAST_NAMES.txt.csv";
    std::fstream mfile(fname);
    std::string lastnames[400];
    file.open(fname);
    if (mfile.is_open()) {
        int i = 0;
        while (getline(mfile, line)) {
            lastnames[i] = line;
            i++;
        }

    }
    
    //initialize array of vectors (linked hash)
    std::vector <std::string> linkedhash[8];
    //initialize array of strings (quadratic resolution)
    std::string quadhash[8];
    //makes maps to check how many unique values in each array
    std::map<int, bool> hashpos;
    std::map<int, bool> quadpos;

    //forloop numofnames times
    for (int i = 0; i < numofnames; i++) {
        //check if load factor is 0.7 or higher. for linked it;s only the array positions with a vector in it. ddoesn't matter how many names in that array position

        //generate hash value from first/last name
        //if a name already exists at that position
            //if it's the linked hash, add it to the vector at that position
            //if quadratic, make while loop, square the hash value (then subtract if greater than size of array), check if that spot has already been checked (make a temp vector to store what positions have been accessed, if not store it, if it has repeat
        //when rehashing, clear hashpos and quadpos
            //else just add the name to that position
    }


//complete! give comparisons on which hash table was generated faster. maybe i can with multiple start/stop functions
    std::cout << "The 2 seperate hash maps have been created! \nThe quadratic hash map took " << "filler" << " seconds while the linked hash map took " << "filler" << " seconds!";
//what name would you like to search for? keep repeating until they are done
    std::string namesearch = "";
    while (true) {
        std::cout << "What name would you like to search for in the phone books? If you're done searching, enter 1.";
        std::cin >> namesearch;
        if (namesearch.compare("1") == 0) {
            exit(0);
        }
        //give name and phone number. if duplicates, give every number. say how long each hash function took

    }
    
        
        



    return 0;
}
    

    
    
/*
Dear reader,

Thank you for taking the time to look at my incomplete code.
If i had completed it you wouldn't be having to look at it
I'm sorry
I wish i had friends to work with
I dont think i work well alone
I hope you have a nice winter break

*/


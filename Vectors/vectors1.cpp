
#include <iostream>
#include <vector>

// answer questions that have "TODO" in them


void print_vector(std::vector<string> vect)


int main() {

    // a double is just a decimal number

    // a vector is a list of elements. In this case, strings:

    std::vector<string> kids = {"Zaire", "Kaitlyn"};
    // indexes start at 0:       0        1 
    

    // use the index like this to get a value from a vector:

    std::cout << numbers[0];
    // prints "Zaire"

    std::cout << numbers[1];
    // prints "Kaitlyn"

    
    // size() gives you the number of elements.

    std::cout << numbers.size();
    // prints "2"


    // finish print_vector below
    print_vector(kids);
    // prints the names in the vector


    names.push_back("Joe");
    // adds "Joe" to the vector, 
    // which is now {"Zaire", "Kaitlyn", "Joe"}

    names.pop_back();
    // removes the last element, which is "Joe"
    // vector is now back to {"Zaire", "Kaitlyn"}



    // TODO 1. ADD "Noah" to the vector and then call print_vector ***
    


}



// TODO 2. COMPLETE THIS FUNCTION ***

void print_vector(std::vector<string> vect) {
    // loop through vect by counting through size() and print each element
}
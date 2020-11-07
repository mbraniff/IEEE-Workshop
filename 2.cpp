#include <iostream>
#include <unistd.h>
#include <signal.h>

using namespace std;

int main(void)
{
    int declared;
    int initialized = 5;

    cout << "declared: " << declared << endl;
    cout << "initialized: " << initialized << endl << endl;


    unsigned char character = -1; // This is an 8 bit (1 byte) variable
    unsigned short halfword = -1; // This is a 16 bit (2 byte) variable
    unsigned int word = -1;       // This is a 32 bit (4 byte) variable
    unsigned long depends = -1;   // This can be a 32 bit or 64 bit variable depending on your system
    unsigned long long doubleword = -1;   // This is always a 64 bit (8 byte) variable

    cout << "This is the largest value a unsigned 8 bit variable can be: " << (unsigned int)character << endl;
    cout << "This is the largest value a unsigned 16 bit variable can be: " << halfword << endl;
    cout << "This is the largest value a unsigned 32 bit variable can be: " << word << endl;
    cout << "This is the largest value a unsigned 64 bit variable can be: " << doubleword << endl << endl;


    // We can reassign any variable at any time
    int assignMe = 10; // Initialized to 10
    assignMe = -20; // Reassigned to -20

    // Since code is run sequentially, assignMe takes on -20 as it value now
    cout << "assignMe: " << assignMe << endl;

    /* Math in programming is the same as we all know it.
       If we have a variable x and want to add 4 to it 
       all we need to do is x=x+4 */

    int add4 = 1;

    add4 + 4; // This line does nothing
    // We can do calculations on the fly but the result is not saved
    cout << "add4 on the fly: " << add4 + 4 << endl;
    cout << "add4 after fly add: " << add4 << endl;
    add4 = add4 + 4; // we reassign add4 to be previous data in add4 plus 4
    cout << "add4 after adding 4: " << add4 << endl << endl;

    /***********************************************
     * Now you try!
     * define a new variable with type "unsigned short"
     * initialize it to -1 then divide it by 2 and 
     * print out the result (it should end up as 32767)
     ***********************************************/
    


    // Now lets try to push this new code to github!
    return 0;
}
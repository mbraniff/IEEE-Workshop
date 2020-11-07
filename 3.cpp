#include <iostream>
#include <string>
#include <random>

using namespace std;

int main(void)
{
    srand(time(0)); // Nothing to see here o.O

    /* Arrays allow you to hold multiple variables 
       of the same type inside one structure */
    int array[5]; // An array of 5 integers
    char string1[15] = "I am a string"; // An array of 15 characters
    string string2 = "I am also a string";

    /* Indexing is the way we access specific
       locations in our array to look at one
       specific variable */
    array[0] = 100; // Accessing the first element and assigning it 100
    array[4] = -100; // Accessing the last element and assigning it -100

    /* Indexing a string lets us manipulate a 
       individual character */
    cout << "string1[0]: " << string1[0] << endl;
    cout << "string2[5]: " << string2[5] << endl << endl;


    /* Now we will dive into conditional statements! */

    bool condition1 = false;
    bool condition2 = true;
    bool condition3 = true;

    cout << "using else if blocks" << endl;
    if(condition1)
    {
        cout << "1 is true" << endl;
    }else if(condition2)
    {
        cout << "2 is true" << endl;
    }else if(condition3)
    {
        cout << "3 is true" << endl;
    }else
    {
        cout << "none were true" << endl;
    }
    cout << endl;


    cout << "using just if blocks" << endl;
    if(condition1)
    {
        cout << "1 is true" << endl;
    }if(condition2)
    {
        cout << "2 is true" << endl;
    }if(condition3)
    {
        cout << "3 is true" << endl;
    }else
    {
        cout << "none were true" << endl;
    }
    cout << endl;

    /****************************************************************/

    // Logical operations
    int smaller = 2;
    int greater = 5;
    if(greater > smaller) // using a greater than operator
    {
        /*code*/
    }

    if(smaller == 2) // using a equal to operator
    {
        /*code*/
    }

    if(greater >= 5 && greater > smaller) // using a logical "and" operator
    {
        /*code*/
    }

    if(greater < 2 || smaller == 2) // using a logical "or" operator
    {
        /*code*/
    }

    /****************************************************************/
    
    // Now lets look at loops!

    for (int i=0 ; i<5 ; i++) // Loop this code 5 times
    {
        /*code*/        
    }

    int condition = 0;
    while(condition) // Loop this code until condition is false
    {
        /*code*/
    }

    /* Lets iterate through an array */

    string spaceMe = "spaced";

    // using a for loop
    for(int i=0;i<6;i++)
    {
        cout << spaceMe[i] << " ";
    }
    cout << endl;

    // using a while loop
    int j=0;
    while(j<6)
    {
        cout << spaceMe[j] << " ";
        j++;
    }
    cout << endl << endl;

    // Those should print the exact same thing


    /***********************************************
     * Now you try!
     * You will be given an array of random integers.
     * Iterate through the entire array and keep track
     * of how many of those integers are greater than
     * or equal to 5 and print the result at the end!
     ***********************************************/

    /****This is given code, do NOT change it****/
    int randNums[10]; // You will iterate through this

    cout << "The random array" << endl;
    for(int i=0;i<10;i++)
    {
        randNums[i] = rand()%10;
        string temp = (i<9) ? ", " : "";
        cout << randNums[i] << temp;
    }
    cout << endl << "Your result" << endl;

    /****Start coding here****/
    
    return 0;
}
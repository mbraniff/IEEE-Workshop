#include <iostream>
#include <random>

using namespace std;

int main(void)
{
    srand(time(0));

    string string_number = "5";
    int actual_number = stoi(string_number); // This will make actual number hold the value 5

    // You can read user input by using cin >> string_number
    // This will put the user input into the string string_number

    /***********************************************
     * Putting it all together!
     * You are given a random number in a random range
     * and have the user guess that number.
     * If the user guesses above the number tell them 
     * they guessed too high, and if they guessed
     * below the number tell them they guessed too low.
     * If the user can not guess the number in 10
     * tries then you should tell them they lost the
     * game. If they guess the number then end the game
     * and print out how many times it took them to
     * guess the value!
     ***********************************************/

    /****This is given code, do NOT change it****/
    int upperLimit = 400 + rand()%1100;
    int randNum = rand()%upperLimit;

    cout << "I just generated a number between 0 and " << upperLimit << " can you guess it?" << endl;

    /****Start coding here****/
    string guess;
    bool playing = true;

    do{
        cout << "Enter a guess!\n> ";
    }while(playing);

    return 0;
}
#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;
int playerChoice1, playerChoice2;
string choices[] = {"Rock", "Paper", "Scissors"};
void playgame() ;
int main() {
    // Seed for random number generation
    //srand(time(0));
    while (true) {
        // Display menu
        cout << "Rock, Paper, Scissors Game!" << endl;
        cout << "Choose:" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "playerChoice1 (1/2/3): ";
        cin >> playerChoice1;
        cout << "playerChoice2 (1/2/3): ";
        cin >> playerChoice2;

         playgame() ;
        char playAgain;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y') {
            cout << "Thanks for playing!" << endl;
            // Exit the loop to end the game
            break;
        }
    }

    return 0;
}
void playgame() {

    // Check for invalid input
    if (playerChoice1 < 1 || playerChoice1 > 3) {
        cout << "Invalid choice, please choose 1, 2, or 3." << endl;
    }
    if (playerChoice2 < 1 || playerChoice2 > 3) {
        cout << "Invalid choice, please choose 1, 2, or 3." << endl;

    }

    // Generate the computer's choice (1 to 3)
    //computerChoice = rand() % 3 + 1;

    // Display choices
    cout << "playerChoice1  chose: " << choices[playerChoice1 - 1] << endl;
    cout << "playerChoice2 chose: " << choices[playerChoice2 - 1] << endl;

    // Determine the winner
    if (playerChoice1 == playerChoice2) {
        cout << "It's a tie!" << endl;
    }
    else if ((playerChoice1 == 1 && playerChoice2 == 3) ||
             (playerChoice1 == 2 && playerChoice2 == 1) ||
             (playerChoice1 == 3 && playerChoice2 == 2)) {
        cout << "playerChoice1 wins!" << endl;
             }
    else {
        cout << "playerChoice2 wins!" << endl;
    }

    // Ask if the player wants to play again


}
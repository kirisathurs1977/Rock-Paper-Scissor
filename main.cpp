#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Seed for random number generation
    srand(time(0));

    int playerChoice, computerChoice;
    string choices[] = {"Rock", "Paper", "Scissors"};

    while (true) {
        // Display menu
        cout << "Rock, Paper, Scissors Game!" << endl;
        cout << "Choose:" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "Enter your choice (1/2/3): ";
        cin >> playerChoice;

        // Check for invalid input
        if (playerChoice < 1 || playerChoice > 3) {
            cout << "Invalid choice, please choose 1, 2, or 3." << endl;
            continue;
        }

        // Generate the computer's choice (1 to 3)
        computerChoice = rand() % 3 + 1;

        // Display choices
        cout << "You chose: " << choices[playerChoice - 1] << endl;
        cout << "Computer chose: " << choices[computerChoice - 1] << endl;

        // Determine the winner
        if (playerChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        }
        else if ((playerChoice == 1 && computerChoice == 3) ||
                 (playerChoice == 2 && computerChoice == 1) ||
                 (playerChoice == 3 && computerChoice == 2)) {
            cout << "You win!" << endl;
                 }
        else {
            cout << "Computer wins!" << endl;
        }

        // Ask if the player wants to play again
        char playAgain;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y') {
            cout << "Thanks for playing!" << endl;
            break; // Exit the loop to end the game
        }
    }

    return 0;
}

#include<iostream>
#include "Bracket.h"
#include <fstream>
#include <vector>

using namespace std;

int main() {
    BracketGenerate bracket;

    // Get the number of participants
    int n;
    cout << "Enter the number of participants: ";
    cin >> n;

    // Load participants from the file
    bracket.LoadParticipants("name.txt", n);

    // Get the number of groups
    int group;
    cout << "How many groups do you want?: ";
    cin >> group;

    // Group participants randomly and display group information
    bracket.Grouping(group);

    // Generate the tournament bracket
    bracket.generateBracket();

    // Display the bracket in 2D format
    bracket.displayBracket();

    // Simulate and display the tournament winner
    bracket.simulateTournament();

    return 0;
}

#include <stdio.h>

#define CANDIDATES 5 // Number of candidates

int main() {
    int votes[CANDIDATES] = {0}; // Array to store votes for each candidate
    int spoiltBallots = 0; // Variable to count spoilt ballots
    int totalVotes; // Total number of votes
    int vote; // Variable to store each vote

    // Input the total number of votes
    printf("Enter the total number of votes: ");
    scanf("%d", &totalVotes);

    // Read the votes
    printf("Enter the votes (1 to 5 for candidates, any other number for spoilt ballot):\n");
    for (int i = 0; i < totalVotes; i++) {
        printf("Vote %d: ", i + 1);
        scanf("%d", &vote);

        if (vote >= 1 && vote <= CANDIDATES) {
            votes[vote - 1]++; // Increment the vote count for the candidate
        } else {
            spoiltBallots++; // Increment the count for spoilt ballots
        }
    }

    // Display the results
    printf("\nVote count for each candidate:\n");
    for (int i = 0; i < CANDIDATES; i++) {
        printf("Candidate %d: %d votes\n", i + 1, votes[i]);
    }
    printf("Spoilt ballots: %d\n", spoiltBallots);

    return 0;
}
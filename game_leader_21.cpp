#include <iostream>
#include <string>
using namespace std;

class GameEntry {
private:
    string name;
    int score;

public:
    GameEntry(string n, int s) : name(n), score(s) {
    }

    string getName() {
        return name;
    }

    int getScore() {
        return score;
    }

    void display() {
        cout << "playerName: " << name << endl;
        cout << "playerScore: " << score << endl;
    }
};

int main() {
    string playerName;
    int playerScore;

    cout << "playerName: ";
    cin >> playerName;

    cout << "playerScore: ";
    cin >> playerScore;

    GameEntry player1(playerName, playerScore);

    cout << "\n===== PLAYER DETAILS =====" << endl;
    player1.display();

    return 0;
}
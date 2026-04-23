#include <iostream>
#include <string>
using namespace std;

class Game 
{
private:
	int score;
public:
	Game() 
	{
		score = 0;
	}

	void setScore(int score) 
	{
		this->score = score;
	}

	int getScore() 
	{
		return score;
	}
};

class Player : public Game 
{
private:
	string player_name;
public:
	Player() 
	{
		player_name = "unknown";
	}

	void setName(string name) 
	{
		player_name = name;
	}

	string getName() 
	{
		return player_name;
	}

	void displayDetails() 
	{
		cout << "---- Game Result ----" << endl;
		cout << "Player Name: " << getName() << endl;
		cout << "Score " << getScore() << endl;
		cout << "Level: Winner Zone" << endl;
	}
};

int main() 
{
	Player player_1;
	string name_input;
	int score_input;

	cout << "Enter player name: ";
	getline(cin, name_input);

	cout << "Enter score: ";
	cin >> score_input;

	player_1.setScore(score_input);
	player_1.setName(name_input);

	player_1.displayDetails();

	return 0;
}

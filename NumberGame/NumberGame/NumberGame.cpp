#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	cout << "Guess a number between 1 and 100!" << endl;
	srand(time(0));
	int randNum = rand() % 100 + 1;
	int x, i;
	
	for (i = 1; i < 11; i++)
	{
		cout << "Guess #" << i << ": ";
		cin >> x;
		if (x < randNum)
		{
			cout << "Too Low!";
		}
		else if (x > randNum)
		{
			cout << "Too High!";
		}
		else
		{
			break;
		}
	}
	if (i == 11)
	{
		cout << "You Lose!";
	}
	else 
	{
		cout << "You Win!";
	}

	cout << endl;
}
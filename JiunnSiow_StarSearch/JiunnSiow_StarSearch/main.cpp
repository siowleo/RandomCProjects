//Jiunn Siow
//07-15-2016
//Star search lab assignment

#include<iostream>
using namespace std;
void getJudgeData(double&);
void calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

int main()
{
	cout << "Hello, this program will calculate a contestant's score." << endl;
	cout << "Please enter the score for each judge." << endl;
	double getScore, score1, score2, score3, score4, score5;
	getJudgeData(score1);
	getJudgeData(score2);
	getJudgeData(score3);
	getJudgeData(score4);
	getJudgeData(score5);
	calcScore(score1, score2, score3, score4, score5);
	system("pause");
	return 0;
}
//----------------------------------------------
void getJudgeData(double& getScore)
{
	cout << "What is the judge's score?: ";
	cin >> getScore;
	if (getScore < 0 || getScore > 10)
	{
		cout << "You entered an incorrect value. Please enter a number between 0 an 10: ";
			cin >> getScore;
	}
	return;
}
//----------------------------------------
void calcScore(double score1a, double score2a, double score3a, double score4a, double score5a) //Find the average score
{
	double average, lowest, highest;
	lowest = findLowest(score1a, score2a, score3a, score4a, score5a);
	highest = findHighest(score1a, score2a, score3a, score4a, score5a);
	cout << "The highest score is: " << highest << endl;
	cout << "The lowest score is: " << lowest << endl;
	average = (score1a + score2a + score3a + score4a + score5a - highest - lowest) / 3;
	cout << "The average score is: " << average << endl;
}
//-------------------------------------
double findLowest(double score1b, double score2b, double score3b, double score4b, double score5b) //Find the lowest score
{
	double findlowestlist[5] = { score1b, score2b, score3b, score4b, score5b };
	double lowest = findlowestlist[0];
	for (int count = 1; count < 5; count++)
	{	
		if (findlowestlist[count]<lowest)
		{
			lowest = findlowestlist[count];
		}
	}
	return lowest;
}
//---------------------------------
double findHighest(double  score1b, double score2b, double score3b, double score4b, double score5b) //Find the highest score
{
	double findhighestlist[5] = { score1b, score2b, score3b, score4b, score5b };
	double highest = findhighestlist[0];
	for (int count = 1; count < 5; count++)
	{
		if (findhighestlist[count]>highest)
		{
			highest = findhighestlist[count];
		}
	}
	return highest;
}
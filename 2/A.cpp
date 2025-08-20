#include<iostream>
#include<map>
#include<vector>
#include<set>

using namespace std;

#define player first
#define points second

set<string> GetCandidates(vector<pair<string, int>> &rounds, int &maxFinalScore)
{
	map<string, int> playerPoints;
	map<int, set<string>> candidates;
	
	for(auto &round : rounds) 
	{
		cin >> round.player >> round.points;

		playerPoints[round.player] += round.points;
	}
	
	for(auto &finalScore : playerPoints)
	{
		maxFinalScore = max(maxFinalScore, finalScore.points); 
		candidates[finalScore.points].insert(finalScore.player);
	}

	return candidates[maxFinalScore];
}

string Look4First(vector<pair<string, int>> &rounds, set<string> &candidates, int &maxPoints)
{
	map<string, int> playerPoints;

	for(auto round : rounds)
	{
		if(candidates.find(round.player) == candidates.end()) continue;
		
		playerPoints[round.player] += round.points;

		if( playerPoints[round.player] >= maxPoints)
		{
			return round.player;
		}
	}
	return "";
}

int main()
{
	int turns, maxFinalScore = -1000001;;
	set<string> candidates;
	
	cin >> turns;
	vector<pair<string, int>> rounds = vector<pair<string, int>>(turns, pair<string, int>());
	
	candidates = GetCandidates(rounds, maxFinalScore);

	cout << Look4First(rounds, candidates, maxFinalScore);

	return 0;
}
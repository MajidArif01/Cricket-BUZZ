#include<iostream>
#include<iomanip>
#include<exception>
#include<string>
#include<cstring>
#include<fstream>

using namespace std;

class Player
{
protected:

	string Name[10];
	int ShirtNo[10];
	float Average[10];
	int IccPlayerRanking[10];
	float TotalRuns[10];
	float MatchesPlayed[10];
	int TotalWickets[10];
	static int playerCount;
	int sixes[10];
	int fours[10];
	float TeamRuns;
	int TeamWickets;
public:

	Player(int players)
	{
		this->playerCount = players;
		for (int i = 0; i < players; i++)
		{
			Name[i] = "";
			ShirtNo[i] = NULL;
			Average[i] = NULL;
			IccPlayerRanking[i] = NULL;
			TotalRuns[i] = NULL;
			MatchesPlayed[i] = NULL;
			TotalWickets[i] = NULL;
			sixes[i] = NULL;
			fours[i] = NULL;
			
		}
	}
	virtual void Insertion()=0;
	virtual void add_Player(int i)=0;
	virtual void remove_Player(int i)=0;
	virtual void search_Player(string name)=0;
	void display();
	~Player()
	{

	}
};

// team class
class Team :public Player
{
protected:
	int noOfPlayers = 10;
	string teamName;
	int IccTeamRanking[3];
	int totalMatchesWon;
	int totalMatchesLost;
	string teamCaptain;
	string teamCoach;
	const string userName;
	const string passWord;
public:
	Team():Player(10),userName("pakistan"),passWord("hello")
	{
		this->teamName = "";
		string teamCaptain= "";
		string teamCoach="";
		this->totalMatchesWon = NULL;
		this->totalMatchesLost= NULL;
	}
	void matches_Concduct(int i);
	void null();
	void Insertion();
	void display();
	void update_captain(string captain);
	void update_coach(string coach);
	void add_Player(int i);
	void remove_Player(int i);
	string get_teamName();
	void search_Player(string name);
	bool check(const string username,const string password);
	void updatePlayer(string name,int runs,int wickets,int ranking);
	void team_NameFile();
	void Display_TeamName(int readteams);
	void read_File(ifstream &input);
	void clear_File();
	void input_File();
	~Team()
	{

	}
};

class Matches :public Team
{

private:
	string team1;
	string team2;
	int Date;
	int Year;
	string month;
	string Venue;
	string matchType;
	string tournamentName;   //can be t20 or odi
	string Commentators[2];
	string Umpires[2];
	string MatchStatus;     // upcoming or recent

public:

	Matches()
	{
		Date=NULL;
		Year=NULL;
	    month="";
	    Venue="";
		matchType="";
		tournamentName="";
		Commentators[0] = "Ahsan ";
		Commentators[1] = "hussnain ";
		Umpires[0] = "Mudassar ";
		Umpires[1] = "Mustafa";
		MatchStatus="";
	}

	//functions
	void conductMatches(int date, string month, int year,string team,string team2);
	void set_Venue(string venue);
	string get_Venue();
	void set_TeamName1(string teamname);
	void set_TeamName2(string teamname);
	string get_TeamName();
	string get_TeamName2();
	void update_WorldRecords(int read,int i);
	void update_TeamRanking();
	void ClearfileT();
	void display_RecentMatches();
	void set_Date(int year, string month, int date);
	void TournamentData();
	string get_month();
	int get_year();
	int get_date();
	void ReadFileMa(ifstream &input);
	void DisplayeResult();
};
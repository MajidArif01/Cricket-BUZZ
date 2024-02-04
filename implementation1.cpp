#include"Header1.h"
void Player:: get_PlayerName(int i)
{
	cout << this->Name[i];
}
int Player::playerCount = 0;
void Player::display()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "\nplayer name = " << this->Name[i] << endl;
		cout << "shirt number = " << this->ShirtNo[i] << endl;
		cout << "ICC ranking = " << this->IccPlayerRanking[i] << endl;
		cout << "total runs = " << this->TotalRuns[i] << endl;
		cout << "enter the most wickets = " << this->MatchesPlayed[i] << endl;
		cout << "total wickets = " << this->TotalWickets[i] << endl;
		cout << "the average = " << this->Average[i] << endl;
	}
}

// team class
void Team::Insertion()
{
	ofstream out;
	out.open("Player.TxT", ios::app);
	if (out.is_open())
	{
		 
		cout << "\nenter the team name ";
		cin >> this->teamName;
		out << this->teamName << endl;
		cout << "enter the team coach ";
		cin >> this->teamCoach;
		out << this->teamCoach << endl;
		cout << "enter the team captain name ";
		cin >> this->teamCaptain;
		out << this->teamCaptain << endl;
		cout << "enter the icc ranking of team in t20 ";
		try
		{
			if (!(cin >> this->IccTeamRanking[0]))
			{
				cin.clear();
				cin.ignore(20, '\n');
				throw this->IccTeamRanking[0];
			}
			else
			{

			}
		}
		 catch (...)
		 {
			 cout << "error cin  should be an integer\n";
			 while (!(cin >> this->IccTeamRanking[0]))
			 {
				 cout << "error enter a number and it should not be 0 :";
				 cin.clear();
				 cin.ignore(20, '\n');
			 }
		 }
		out << this->IccTeamRanking[0] << endl;
		cout << "enter the icc ranking of team in test ";
		try
		{
			if (!(cin >> this->IccTeamRanking[1]))
			{
				cin.clear();
				cin.ignore(20, '\n');
				throw this->IccTeamRanking[1];
			}
			else
			{

			}
		}
		catch (...)
		{
			cout << "error cin  should be an integer\n";
			while (!(cin >> this->IccTeamRanking[1]))
			{
				cout << "error enter a number and it should not be 0 :";
				cin.clear();
				cin.ignore(20, '\n');
			}
		}
		out << this->IccTeamRanking[1] << endl;
		cout << "enter the icc ranking of team in odi";
		try
		{
			if (!(cin >> this->IccTeamRanking[2]))
			{
				cin.clear();
				cin.ignore(20, '\n');
				throw this->IccTeamRanking[2];
			}
			else
			{

			}
		}
		catch (...)
		{
			cout << "error cin  should be an integer\n";
			while (!(cin >> this->IccTeamRanking[2]))
			{
				cout << "error enter a number and it should not be 0 :";
				cin.clear();
				cin.ignore(20, '\n');
			}
		}
		out << this->IccTeamRanking[2] << endl;
		cout << "total matches won ";
		try
		{
			if (!(cin >> this->totalMatchesWon))
			{
				cin.clear();
				cin.ignore(20, '\n');
				throw this->totalMatchesWon;
			}
			else
			{

			}
		}
		catch (...)
		{
			cout << "error cin  should be an integer\n";
			while (!(cin >> this->totalMatchesWon))
			{
				cout << "error enter a number and it should not be 0 :";
				cin.clear();
				cin.ignore(20, '\n');
			}
		}
		out << this->totalMatchesWon << endl;

		cout << "total matches lost ";
		try
		{
			if (!(cin >> this->totalMatchesLost))
			{
				cin.clear();
				cin.ignore(20, '\n');
				throw this->totalMatchesLost;
			}
			else
			{

			}
		}
		catch (...)
		{
			cout << "error cin  should be an integer\n";
			while (!(cin >> this->totalMatchesLost))
			{
				cout << "error enter a number and it should not be 0 :";
				cin.clear();
				cin.ignore(20, '\n');
			}
		}
		out << this->totalMatchesLost << endl;

		for (int j = 0; j < 10; j++)
		{
			cout << "enter the player name : ";
			cin >> this->Name[j];
			out << this->Name[j] << endl;
			cout << "enter the shirt number : ";
			try
			{
				if (!(cin >> this->ShirtNo[j]))
				{
					cin.clear();
					cin.ignore(20, '\n');
					throw this->ShirtNo[j];
				}
				else
				{

				}
			}
			catch (...)
			{
				cout << "error cin  should be an integer\n";
				while (!(cin >> this->ShirtNo[j]))
				{
					cout << "error enter a number and it should not be 0 :";
					cin.clear();
					cin.ignore(20, '\n');
				}
			}
			out << this->ShirtNo[j] << endl;
			cout << "enter the ICC ranking : ";
			try
			{
				if (!(cin >> this->IccPlayerRanking[j]))
				{
					cin.clear();
					cin.ignore(20, '\n');
					throw this->IccPlayerRanking[j];
				}
				else
				{

				}
			}
			catch (...)
			{
				cout << "error cin  should be an integer\n";
				while (!(cin >> this->IccPlayerRanking[j]))
				{
					cout << "error enter a number and it should not be 0 :";
					cin.clear();
					cin.ignore(20, '\n');
				}
			}
			out << this->IccPlayerRanking[j] << endl;
			cout << "enter the total runs : ";
			
			try
			{
				if (!(cin >> this->TotalRuns[j]))
				{
					cin.clear();
					cin.ignore(20, '\n');
					throw this->TotalRuns[j];
				}
				else
				{

				}
			}
			catch (...)
			{
				cout << "error cin  should be an integer\n";
				while (!(cin >> this->TotalRuns[j]))
				{
					cout << "error enter a number and it should not be 0 :";
					cin.clear();
					cin.ignore(20, '\n');
				}
			}
			out << this->TotalRuns[j] << endl;
			cout << "enter the matches played : ";
			try
			{
				if (!(cin >> this->MatchesPlayed[j]))
				{
					cin.clear();
					cin.ignore(20, '\n');
					throw  this->MatchesPlayed[j];
				}
				else
				{

				}
			}
			catch (...)
			{
				cout << "error cin  should be an integer\n";
				while (!(cin >> this->MatchesPlayed[j]))
				{
					cout << "error enter a number and it should not be 0 :";
					cin.clear();
					cin.ignore(20, '\n');
				}
			}
			out << this->MatchesPlayed[j] << endl;
			cout << "enter the total wickets of a player";
			try
			{
				if (!(cin >> this->TotalWickets[j]))
				{
					cin.clear();
					cin.ignore(20, '\n');
					throw  	this->TotalWickets[j];
				}
				else
				{

				}
			}
			catch (...)
			{
				cout << "error cin  should be an integer\n";
				while (!(cin >> this->TotalWickets[j]))
				{
					cout << "error enter a number and it should not be 0 :";
					cin.clear();
					cin.ignore(20, '\n');
				}
			}
			out << this->TotalWickets[j] << endl;
			this->Average[j] = this->TotalRuns[j] / this->MatchesPlayed[j];
			out << this->Average[j] << endl;
		}
	}
	else
	{
		cout << "error in openning file";
	}
}
//data initialiizing to zero to store for the tournament
void Team::null()
{
	for (int j = 0; j < 10; j++)
	{
		this->TotalRuns[j]=0;
		this->TotalWickets[j]=0;
		this->Average[j] = 0;
	}
}
// for reading the file and storing it in the dynamic array
// passing ifstream variable by reffrence so when the function ends
//the file does not close untill the loop ends in int main

void Team::read_File(ifstream &input)
{
 
		string name="";
		input >> this->teamName;
		input >> this->teamCoach;
		input >> this->teamCaptain;
		input >> this->IccTeamRanking[0];
		input >> this->IccTeamRanking[1];
		input >> this->IccTeamRanking[2];
		input >> this->totalMatchesWon;
		input >> this->totalMatchesLost;

		for (int j = 0; j < 10; j++)
		{

			input >> this->Name[j];
			input >> this->ShirtNo[j];
			input >> this->IccPlayerRanking[j];
			input >> this->TotalRuns[j];

			input >> this->MatchesPlayed[j];

			input >> this->TotalWickets[j];
			input >> this->Average[j];
		}
}
void Team::Display()
{
	cout << this->teamName;
	cout << this->teamCoach;
	cout << this->teamCaptain;
	cout << this->IccTeamRanking[0];
	cout << this->IccTeamRanking[1];
	cout << this->IccTeamRanking[2];
	cout << this->totalMatchesWon;
	cout << this->totalMatchesLost;

	for (int j = 0; j < 10; j++)
	{

		cout << this->Name[j];
		cout << this->ShirtNo[j];
		cout << this->IccPlayerRanking[j];
		cout << this->TotalRuns[j];

		cout << this->MatchesPlayed[j];

		cout << this->TotalWickets[j];
		cout << this->Average[j];
		cout << endl;
	}
	cout << endl;
}
//for file 
void Team::team_NameFile()
{
	ofstream out;
	out.open("Team Name.TXT", ios::app);
	if (out.is_open())
	{
		out << this->teamName << endl;
	}
	else
	{
		cout << "file did not open";
	}
}
//when a player is removed we add a player through this function

void Team::add_Player(int i)
{
	cout << "enter the player name : ";
	cin >> this->Name[i];
	cout << "enter the shirt number : ";
	try
	{
		if (!(cin >> this->ShirtNo[i]))
		{
			cin.clear();
			cin.ignore(20, '\n');
			throw this->ShirtNo[i];
		}
		else
		{

		}
	}
	catch (...)
	{
		cout << "error cin  should be an integer\n";
		while (!(cin >> this->ShirtNo[i]))
		{
			cout << "error enter a number and it should not be 0 :";
			cin.clear();
			cin.ignore(20, '\n');
		}
	}
	cout << "enter the ICC ranking : ";
	try
	{
		if (!(cin >> this->IccPlayerRanking[i]))
		{
			cin.clear();
			cin.ignore(20, '\n');
			throw this->IccPlayerRanking[i];
		}
		else
		{

		}
	}
	catch (...)
	{
		cout << "error cin  should be an integer\n";
		while (!(cin >> this->IccPlayerRanking[i]))
		{
			cout << "error enter a number and it should not be 0 :";
			cin.clear();
			cin.ignore(20, '\n');
		}
	}
	cout << "enter the total runs : ";
	
	try
	{
		if (!(cin >> this->TotalRuns[i]))
		{
			cin.clear();
			cin.ignore(20, '\n');
			throw this->TotalRuns[i];
		}
		else
		{

		}
	}
	catch (...)
	{
		cout << "error cin  should be an integer\n";
		while (!(cin >> this->TotalRuns[i]))
		{
			cout << "error enter a number and it should not be 0 :";
			cin.clear();
			cin.ignore(20, '\n');
		}
	}
	cout << "enter the most matches : ";
	try
	{
		if (!(cin >> this->MatchesPlayed[i]))
		{
			cin.clear();
			cin.ignore(20, '\n');
			throw this->MatchesPlayed[i];
		}
		else
		{

		}
	}
	catch (...)
	{
		cout << "error cin  should be an integer\n";
		while (!(cin >> this->MatchesPlayed[i]))
		{
			cout << "error enter a number and it should not be 0 :";
			cin.clear();
			cin.ignore(20, '\n');
		}
	}
	cout << "enter the total wicket of a player";
	try
	{
		if (!(cin >> this->TotalWickets[i]))
		{
			cin.clear();
			cin.ignore(20, '\n');
			throw this->TotalWickets[i];
		}
		else
		{

		}
	}
	catch (...)
	{
		cout << "error cin  should be an integer\n";
		while (!(cin >> this->TotalWickets[i]))
		{
			cout << "error enter a number and it should not be 0 :";
			cin.clear();
			cin.ignore(20, '\n');
		}
	}
	this->Average[i] = this->TotalRuns[i] / this->MatchesPlayed[i];
}
string Team::set_teamName()
{
	return this->teamName;
}
void Team::get_teamName()
{
	
	cout << this->teamName;
}
//searching the player by comparing the name the user given and 
//the stored named if name==this->name then we can upadate in the player
void Team::search_Player(string name)
{
	for (int i = 0; i <=10; i++)
	{
		if (this->Name[i] == name)
		{
			cout << "the Player found at : " << i << "number " << endl;
			remove_Player(i);
			break;
		}
		else if (i == 10)
		{
			cout << "the name you entered was not found in the team\nyou entered the name wrong" << endl;
		}
	}
}
void Team::Display_TeamName(int readteams)
{
	string Names[10];
	ifstream in;
	in.open("Team Name.txt");
	if (in.is_open())
	{
		for (int i = 0; i < readteams; i++)
		{
			in >> Names[i];
		}
		cout << "displaying the team names\n";
		for (int i = 0; i < readteams; i++)
		{
			cout << Names[i] << endl;
		}
	}
	else
	{
		cout << "error";
	}
}
void Team::update_captain(string captain)
{
	this->teamCaptain = captain;
}
void Team::update_coach(string coach)
{
	this->teamCoach = coach;
}
void Team::remove_Player(int i)
{
	this->Name[i] = "";
	this->ShirtNo[i] = NULL;
	this->Average[i] = NULL;
	this->IccPlayerRanking[i] = NULL;
	this->TotalRuns[i] = NULL;
	this->MatchesPlayed[i] = NULL;
	this->TotalWickets[i] = NULL;
	cout << "\nnow you can add player at  this number " << endl;
	add_Player(i);
}

//to check or compare the password and username
bool Team::check(const string username, const string password)
{
	if (this->userName == username && this->passWord == password)
	{
		return true;
	}
	else
	{
		cout << "\nyou enter the wrong credentials try again" << endl;
		return false;
	}
}
void Team::updatePlayer(string name, int runs, int wickets, int ranking)
{
	for (int i = 0; i <= 10; i++)
	{
		if (this->Name[i] == name)
		{
			this->IccPlayerRanking[i] = ranking;
			this->TotalRuns[i] += runs;
			this->TotalWickets[i] += wickets;
			this->Average[i] += this->TotalRuns[i] / this->MatchesPlayed[i];
			break;
		}
		else if (i == 10)
		{
			cout << "name not found ";
		}
	}

}
//for clearing the file before updating it
void Team::clear_File()
{
	ofstream out;
	out.open("player.txt", ios::trunc);
}
//updating the data in the file
void Team::input_File()
{
	ofstream input;
	input.open("player.txt",ios::app);
	input << this->teamName<<endl;
	input << this->teamCoach << endl;
	input << this->teamCaptain << endl;
	input << this->IccTeamRanking[0] << endl;
	input << this->IccTeamRanking[1] << endl;
	input << this->IccTeamRanking[2] << endl;
	input << this->totalMatchesWon << endl;
	input << this->totalMatchesLost << endl;

	for (int j = 0; j < 10; j++)
	{

		input << this->Name[j] << endl;
		input << this->ShirtNo[j] << endl;
		input<< this->IccPlayerRanking[j] << endl;
		input <<this->TotalRuns[j] << endl;

		input << this->MatchesPlayed[j] << endl;

		input << this->TotalWickets[j] << endl;
		input <<this->Average[j] << endl;
	}

}
//conducting matches inputting values and storing it in the file
void Team::matches_Concduct(int i)
{
	this->TeamRuns = NULL;
	this->TeamWickets = 0;
	ofstream out;
	out.open("Matches.txt", ios::app);
	out<<this->teamName<<endl;
	for (int i = 0; i < 10; i++)
	{ 
		cout <<"player name "<<this->Name[i] << endl;
		out << this->Name[i] << endl;
		cout << "enter the runs of the player :";
		try
		{
			if (!(cin >> this->TotalRuns[i]))
			{
				cin.clear();
				cin.ignore(20, '\n');
				throw this->TotalRuns[i];
			}
			else
			{
				
			}
		}
		catch (...)
		{
			cout << "error cin  should be an integer\n";
			while (!(cin >> this->TotalRuns[i]))
			{
				cout << "error enter a number and it should not be 0 :";
				cin.clear();
				cin.ignore(20, '\n');
			}
		}
		out << this->TotalRuns[i] << endl;
		cout << "enter the fours of the player :";
		try
		{
			if (!(cin >> this->fours[i]))
			{
				cin.clear();
				cin.ignore(20, '\n');
				throw this->fours[i];
			}
			else
			{
				
			}
		}
		catch (...)
		{
			cout << "error cin  should be an integer\n";
			while (!(cin >> this->fours[i]))
			{
				cout << "error enter a number and it should not be 0 :";
				cin.clear();
				cin.ignore(20, '\n');
			}
		}
		out << this->fours[i] << endl;
		cout << "enter the sixes of the player :";
		try
		{
			if (!(cin >> this->sixes[i]))
			{
				cin.clear();
				cin.ignore(20, '\n');
				throw this->sixes[i];
			}
			else
			{
				
			}
		}
		catch (...)
		{
			cout << "error cin  should be an integer\n";
			while (!(cin >> this->sixes[i]))
			{
				cout << "error enter a number and it should not be 0 :";
				cin.clear();
				cin.ignore(20, '\n');
			}
		}
		out << this->sixes[i] << endl;
		cout << "enter the wickets of the player :";
		try
		{
			if (!(cin >> this->TotalWickets[i]))
			{
				cin.clear();
				cin.ignore(20, '\n');
				throw  this->TotalWickets[i];
			}
			else
			{
			
			}
		}
		catch (...)
		{
			cout << "error cin  should be an integer\n";
			while (!(cin >> this->TotalWickets[i]))
			{
				cout << "error enter a number and it should not be 0 :";
				cin.clear();
				cin.ignore(20, '\n');
			}
		}
		out << this->TotalWickets[i] << endl;
		this->TeamRuns += TotalRuns[i];
		this->TeamWickets += TotalWickets[i];
	}
	out << this->TeamRuns<<endl;
	out << this->TeamWickets << endl;
}

// matches class functions
void Matches ::set_Venue(string venue)
{
	this->Venue = venue;
}

string Matches ::get_Venue()
{
	return this->Venue;
}

//conducting matches the user is giving the schedule of the matches 
//and storing it in the file named fixtures 
void Matches::conductMatches(int date,string month,int year,string team,string team2)
{
	set_TeamName1(team);
	set_TeamName2(team2);
	string stadium;
	set_Date(year,month,date);
	/*cout << "now select the venue\nlike iqbal statidum and ghaddafi stadium";
	cin >> stadium;
	set_Venue(stadium);*/
	ofstream out;
	out.open("fixtures.txt",ios::app);
	out << get_date()<<",";
	out << get_month()<<",";
	out << get_year()<<endl;
	/*out << get_Venue()<<endl;*/
	out << get_TeamName()<<endl;
	out << get_TeamName2()<<endl;
}

void Matches ::set_TeamName1(string teamname)
{
	this->team1=teamname;
}
void Matches::set_TeamName2(string teamname)
{
	this->team2=teamname;
}
string Matches::get_TeamName()
{
	return this->team1;
}
string Matches::get_TeamName2()
{
	return this->team2;
}
//setting the date
void Matches::set_Date(int year, string month, int date)
{
	for (int i = 0; i < 1; i++)
	{
		if (date > 0 && date <= 31)
		{
			this->Date = date;
			i++;
			break;
		}
		else
		{
			i--;
			cout << "enter the date again ";
			cin >> date;
		}
	}
	for (int i = 0; i < 1; i++)
	{
		//if input is in digits
		if (month > "0" && month <= "12")
		{
			this->month = month;
			i++;
			break;
		}
		//if input is a word change it in didgit or nuumber
		else if (month == "january" || month == "January")
		{
			this->month = "1";
		}
		else if (month == "february")
		{
			this->month = "2";
		}
		else if (month == "march")
		{
			this->month = "3";
		}
		else if (month == "april")
		{
			this->month = "4";
		}
		else if (month == "may")
		{
			this->month = "5";
		}
		else if (month == "june")
		{
			this->month = "6";
		}
		else if (month == "july")
		{
			this->month = "7";
		}
		else if (month == "august")
		{
			this->month = "8";
		}
		else if (month == "september")
		{
			this->month = "9";
		}
		else if (month == "october")
		{
			this->month = "10";
		}
		else if (month == "november")
		{
			this->month = "11";
		}
		else if (month == "december")
		{
			this->month = "12";
		}
		else
		{
			i--;
			cout << "you entered the wrong month\ntry again";
			cin >> month;
		}
	}
	for (int i = 0; i < 1; i++)
	{
		if (year == 2022)
		{
			this->Year = year;
			i++;
			break;
		}
		else
		{
			i--;
			cout << "enter the year again should be 2022 ";
			cin >> year;
		}
	}
	cout << "date is " << this->Date <<" "<<this->month << " " << this->Year;
}

//getters of date
string Matches::get_month()
{
	return this->month;
}
int Matches::get_year()
{
	return this->Year;
}
int Matches::get_date()
{
	return this->Date;
}

//clearing the tournament file
void Matches::ClearfileT()
{
	ofstream out;
	out.open("Tournament Recordes.txt", ios::trunc);
}
//storing the tournament details
//players wickets,runs,fours and sixes
void Matches::update_WorldRecords(int read,int i)
{ 
	ofstream out;
	out.open("Tournament Recordes.txt", ios::app);
	out << this->teamName << endl;
	for (int i = 0; i < 10; i++)
	{
		out << this->Name[i] << endl;
		out << this->TotalRuns[i] << endl;
		out << this->fours[i] << endl;
		out << this->sixes[i] <<endl;
		out << this->TotalWickets[i] << endl;
	}
}

//for comparing the Maximum runs of a player in matches
//R=runs
//w for wickets,indexW for sotring the index of player which has most wickets
//index r for stroing the index of player which scored maximum
// T for which T the function was called 
//TR for storing the index of Team player with maximum runs
// Tw storign the index of team with 
void Matches::Compare(float& R, int& W,int &T, int & TR,int &TW, int &indexR,int &indexW)
{
	
	for (int i = 0; i < 10; i++)
	{
		if (this->TotalRuns[i]>R)
		{
			R = this->TotalRuns[i];
			indexR = i;
			
			if (TR != T)
			{
				TR = T;
			}
		}
		if (this->TotalWickets[i] >	W)
		{
			W = this->TotalWickets[i];
			indexW = i;
			if (TW != T)
			{
				TW = T;
			}
		}
	}
}
void Matches::ReadComparing(ifstream &input)
{
	input >> this->teamName;
	for (int i = 0; i < 10; i++)
	{
		input >> this->Name[i];
		input >> this->TotalRuns[i];
		input >> this->fours[i];
		input >> this->sixes[i];
		input >> this->TotalWickets[i];
	}
}
void Matches::ReadFileMa(ifstream &input)
{
	input >> this->teamName;
	for (int i = 0; i < 10; i++)
	{
		input >> this->Name[i];
		input >> this->TotalRuns[i];
		input >> this->fours[i];
		input >> this->sixes[i];
		input >> this->TotalWickets[i];
	}
	input >> this->TeamRuns;
	input >> this->TeamWickets;
}

//for comparing and displaying the result of the match held on the entered date
void Matches::DisplayeResult()
{
	    cout <<"teamname        " <<this->teamName<<endl;
	for (int i = 0; i < 10; i++)
	{
		cout <<"nAME            "<< this->Name[i]<<endl;
		cout <<"runs            "<< this->TotalRuns[i] << endl;
		cout <<"fours           "<< this->fours[i] << endl;
		cout <<"sixes           "<< this->sixes[i] << endl;
		cout <<"wickets         "<< this->TotalWickets[i] << endl;
	}
	    cout <<"total runs      " << this->TeamRuns<<endl;
	    cout <<"total wickets   " << this->TeamWickets<<endl;
}

void Matches::TournamentData()
{
	ofstream out;
	out.open("Tournament Recordes.txt", ios::app);
	out<<this->teamName<<endl;
	for (int i = 0; i < 10; i++)
	{ 
		out << this->Name[i] << endl;
		out << this->TotalRuns[i] << endl;
		out << this->fours[i] << endl;
		out << this->sixes[i] << endl;
		out << this->TotalWickets[i] << endl;
	}
}
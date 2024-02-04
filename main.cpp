#include"Header1.h"
int main()
{
	int n = 1;
	while (n != 0)
	{
		Team obj;
		int teams;
		int choice = 0;
		cout << "press 1 if you are an admin\npress 2 if you are a user ";
		cin >> choice;
		//programmers side

		if (choice == 1)
		{
			cout << "\nnow u need to enter the credentials ";
			string password, username;
			cout << "enter the username ";
			cin >> username;
			cout << "enter the password ";
			cin >> password;
			bool check;
			check = obj.check(username, password);
			if (check == 1)
			{
				int choices;
				cout << "press 1 to insert a team " << "press 2 update in the team ";
				try
				{
					if (!(cin >> choices))
					{
						cin.clear();
						cin.ignore(20, '\n');
						throw choices;
					}
					else
					{
						
					}
				}
				catch (...)
				{
					cout << "error cin  should be an integer\n";
					while (!(cin >> choices))
					{
						cout << "error enter a number and it should not be 0 :";
						cin.clear();
						cin.ignore(20, '\n');
					}
				}

				if (choices == 1)
				{
					cout << "enter how many teams you want to enter ";
					try
					{
						if (!(cin >> teams))
						{
							cin.clear();
							cin.ignore(20, '\n');
							throw teams;
						}
						else
						{

						}
					}
					catch (...)
					{
						cout << "error cin  should be an integer\n";
						while (!(cin >> teams))
						{
							cout << "error enter a number and it should not be 0 :";
							cin.clear();
							cin.ignore(20, '\n');
						}
					}
					ofstream out;
					out.open("Teamcount.txt");
					out << teams;
					out.close();
					Matches* ptr = new Matches[teams];
					for (int i = 0; i < teams; i++)
					{
						ptr[i].Insertion();
					}

					//for storing team name in the file
					for (int i = 0; i < teams; i++)
					{
						ptr[i].team_NameFile();
					}
					delete[]ptr;
				}
				else if (choices == 2)
				{
					int	Readteams;
					//for string the count of teams

					ifstream  read;
					read.open("Teamcount.txt");
					read >> Readteams;
					Matches* ptr2;

					ptr2 = new Matches[Readteams];
					ifstream input;
					input.open("Player.txt");
					for (int i = 0; i < Readteams; i++)
					{
						ptr2[i].read_File(input);
					}
					for (int i = 0; i < Readteams; i++)
					{
						ptr2[i].display();
						cout << endl;
					}
					int in;
					cout << "press 1 to remove player press 2 to update a player in team and"
						<< "press 3 to conuct monthes or enter the data of matches\n";
					try
					{
						if (!(cin >> in))
						{
							cin.clear();
							cin.ignore(20, '\n');
							throw in;
						}
						else
						{
							
						}
					}
					catch (...)
					{
						cout << "error cin  should be an integer\n";
						while (!(cin >> in))
						{
							cout << "error enter a number and it should not be 0 :";
							cin.clear();
							cin.ignore(20, '\n');
						}
					}
					//for remove player
					if (in == 1)
					{
						string Tname, name;
						cout << "enter the team name ";
						cin >> Tname;
						for (int i = 0; i <= Readteams; i++)
						{
							if (ptr2[i].get_teamName() == Tname)
							{
								cout << "found the team now enter the player name you want to remove ";
								cin >> name;
								ptr2[i].search_Player(name);
								/*for (int i = 0; i < Readteams; i++)
								{
									ptr2[i].display();
									cout << endl;
								}*/
								ptr2[i].clear_File();
								for (int i = 0; i < Readteams; i++)
								{
									ptr2[i].input_File();
								}
								break;
							}
							else if (i == Readteams)
							{
								cout << "\nyou the wrong team name try again ";
								i--;
								cin >> Tname;
							}
						}
						delete[]ptr2;
					}
					//for updateplayer
					else if (in == 2)
					{
						int wickets, runs, ranking;
						string Tname, name;
						cout << "enter the team name ";
						cin >> Tname;
						for (int i = 0; i < Readteams; i++)
						{

							if (ptr2[i].get_teamName() == Tname)
							{
								cout << "found the team now enter the player name you want to update ";
								cin >> name;
								cout << "enter the player wckets";
								cin >> wickets;
								cout << "enter the player runs";
								cin >> runs;
								cout << "enter the player current ranking ";
								cin >> ranking;
								ptr2[i].updatePlayer(name, runs, wickets, ranking);
								/*for (int i = 0; i < Readteams; i++)
								{
									ptr2[i].display();
									cout << endl;
								}*/
								ptr2[i].clear_File();
								for (int i = 0; i < Readteams; i++)
								{
									ptr2[i].input_File();
								}
								break;
							}
							else if (i == Readteams)
							{
								cout << "try again you entered the wrong name";
								i = 0;
								cout << "try again :";
								cin >> Tname;
							}
						}
						delete[]ptr2;
					}
					//for sotring data 
					else if (in == 3)
					{
						//for a simplematch means when we have only two teams
						if (Readteams == 2)
						{
							for (int i = 0; i < Readteams; i++)
							{
								ptr2[i].null();
							}
							Matches obj;
							ifstream fileinput;
							fileinput.open("fixtures.txt");
							string date;
							string name, name2;
							fileinput >> date;
							fileinput >> name;
							fileinput >> name2;
							fileinput.close();
							cout << "now you can conuct matches ";
							for (int i = 0; i < Readteams; i++)
							{
								ptr2[i].null();
							}
							ofstream out;
							out.open("Matches.txt", ios::app);
							out << date << endl;
							for (int i = 0; i < Readteams; i++)
							{
								cout << "conducting the matches ";
								ptr2[i].matches_Concduct(i);
							}
						}
						//if the teams are more than 2
						//in case of tournament
						else if (Readteams > 2)
						{
							for (int i = 0; i < Readteams; i++)
							{
								ptr2[i].null();
							}
							ofstream in;
							/*for (int i = 0; i < Readteams; i++)
							{
								ptr2[i].TournamentData();
							}*/
							Matches obj;
							ifstream fileinput;
							fileinput.open("fixtures.txt");
							string date[10];
							string name[20], name2[20];
							int k = 0;
							for (int i = 0; i < Readteams / 2; i++)
							{
								fileinput >> date[i];
								fileinput >> name[k];
								fileinput >> name[k + 1];
								k = k + 2;
							}
							fileinput.close();
							cout << "now you can conduct matches ";

							ofstream out;
							out.open("Matches.txt", ios::app);
							for (int i = 0; i < Readteams; i++)
							{
								int k = 0;
								if (i == 0 || i == 2 || i == 4 || i == 6 || i == 8 || i == 10 || i == 12)
								{
									out << date[k] << endl;
									k++;
								}
								for (int j = 0; j <= Readteams; j++)
								{
									if (ptr2[j].get_teamName() == name[i])
									{
										cout << "conducting the matches ";
										ptr2[j].matches_Concduct(i);
										break;
									}
									else if (j == Readteams)
									{
										cout << "name not found";
									}
								}
							}
							ofstream output;
							out.open("Tournament Recordes.txt", ios::trunc);
							for (int k = 0; k < Readteams; k++)
							{
								ptr2[k].update_WorldRecords(Readteams, k);
							}
						}
						delete[]ptr2;
					}
				}
			}
			else
			{
				cout << "incorrect password " << endl;
			}
		}
		else if (choice == 2)
		{
			int num;
			int readTeams;
			ifstream  read;
			Matches obj;
			read.open("Teamcount.txt");
			read >> readTeams;
			cout << "-----------------------welcome----------------------------\n";
			cout << "press 1 if you want to conduct a match press 2 to proceed to news";
			try
			{
				if (!(cin >> num))
				{
					cin.clear();
					cin.ignore(20, '\n');
					throw num;
				}
				else
				{
					
				}
			}
			catch (...)
			{
				cout << "error cin  should be an integer\n";
				while (!(cin >> num))
				{
					cout << "error enter a number and it should not be 0 :";
					cin.clear();
					cin.ignore(20, '\n');
				}
			}
			if (num == 1)
			{
				int year, date;
				string month;
				string team, team2;
				for (int i = 1; i <= readTeams / 2; i++)
				{
					cout << "there are the teams\n";
					obj.Display_TeamName(readTeams);
					cout << "enter the team name";
					cin >> team;
					cout << "enter the 2 team name";
					cin >> team2;
					cout << "enter the date ";
					try
					{
						if (!(cin >> date))
						{
							cin.clear();
							cin.ignore(20, '\n');
							throw date;
						}
						else
						{
							
						}
					}
					catch (...)
					{
						cout << "error cin  should be an integer\n";
						while (!(cin >> date))
						{
							cout << "error enter a number and it should not be 0 :";
							cin.clear();
							cin.ignore(20, '\n');
						}
					}
					cout << "enter the month";
					cin >> month;
					cout << "enter the year ";
					try
					{
						if (!(cin >> year))
						{
							cin.clear();
							cin.ignore(20, '\n');
							throw year;
						}
						else
						{
						
						}
					}
					catch (...)
					{
						cout << "error cin  should be an integer\n";
						while (!(cin >> year))
						{
							cout << "error enter a number and it should not be 0 :";
							cin.clear();
							cin.ignore(20, '\n');
						}
					}
					obj.conductMatches(date, month, year, team, team2);
				}
			}
			else if (num == 2)
			{
				string date;
				int news;
				cout << "-------------------------------------------------welcome\n-----------------------------------------here is the news you can enter the date and if the date is correct then you can see the "
					<< "the result of that match press 1 to enter the date\n";
				try
				{
					if (!(cin >> news))
					{
						cin.clear();
						cin.ignore(20, '\n');
						throw news;
					}
					else
					{
						
					}
				}
				catch (...)
				{
					cout << "error cin  should be an integer\n";
					while (!(cin >> news))
					{
						cout << "error enter a number and it should not be 0 :";
						cin.clear();
						cin.ignore(20, '\n');
					}
				}
				if (news == 1)
				{
					string date1;
					cout << "enter the date in this format:14,7,2022";
					cin >> date1;
					Matches* obj1 = new Matches[readTeams];
					ifstream input;
					string date[20];
					input.open("Matches.txt");
					int k = 0;
					for (int i = 0; i < readTeams; i++)
					{

						if (i == 0 || i == 2 || i == 4 || i == 6 || i == 7 || i == 8)
						{
							input >> date[k];
							k = k + 2;
						}
						obj1[i].ReadFileMa(input);
					}
					int j = 0;
					for (int i = 0; i <= readTeams; i++)
					{

						if (date[j] == date1)
						{
							for (int k = i; k < i + 2; k++)
							{
								obj1[k].DisplayeResult();
							}
						}
						j = j + 2;
						i++;
						if (i == readTeams)
						{
							cout << "you entered the date wrong try again and\nremeber the format 14,9,2022 : ";
							cin >> date1;
							i = 0;
						}
					}

				}

			}
		}
		else
		{
			n = 0;
			cout << "-------------------------------thank you ----------------------------";
			break;
		}
	}
}
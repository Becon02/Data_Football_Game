#include <string>
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds


class Stats
{
public:

    int pace;
    int shooting;
    int passing;
    int dribbling;
    int defending;
    int physical;

    Stats()
    {
        pace = 0;
        shooting = 0;
        passing = 0;
        dribbling = 0;
        defending = 0;
        physical = 0;
    }

};

class TeamStadium
{
public:

    string name;
    string city;
    int totalSeats;

    TeamStadium()
    {
        name = "Null";
        city = "Null";
        totalSeats = 0;
    }
};

class Cordinates
{
public:

    int CordsX;
    int CordsY;
    int CordsZ;

    Cordinates()
    {
        CordsX = 0;
        CordsY = 0;
        CordsZ = 0;
    }
};

class Player
{
public:

    string name;
    int age;
    bool isRightFooted;
    int teamNumber;
    string gamePosition;

    Stats stats;
    Cordinates cordinates;

    Player()
    {
        name = "Null";
        age = 18;
        isRightFooted = true;
        teamNumber = 0;
        gamePosition = "Null";
    }
};

class Team 
{
public:

    string name;
    int totalTrophies;
    string coachName;
    int yearFounded;
    int positionInLeague;
    string tshirtColour;
    
    TeamStadium teamStadium;
    Player player[11];

    Team()
    {
        name = "Null";
        totalTrophies = 0;
        coachName = "Null";
        yearFounded = 0;
        positionInLeague = 0;
        tshirtColour = "Null";
    }


};

class BallPosition
{
public:

    Cordinates cordinates;
};

class GameInfo 
{
public:

    int scoreTeamA;
    int scoretTeamB;
    int gameTime;

    BallPosition ballPosition;

    GameInfo()
    {
        scoreTeamA = 0;
        scoretTeamB = 0;
        gameTime = 0;
    }
};

class GameStadium
{
public:
    string city;
    string weather;


    GameStadium()
    {
        city = "Null";
        weather = "Null";
    }
};

class FootballGame
{
public:

    Team team[2];
    GameInfo GameInfo;
    GameStadium gameStadium;
};

void timeDelay();

int main()
{
    FootballGame footballGame;

    //This code is made for Kun Aguero, player of Barcelona team

    cout << "-----------------------------------------------------------------------------------------------" << endl;

    cout << "What team is playing today?" << endl;
    getline(cin, footballGame.team[0].name);

    cout << endl;

    timeDelay();

    cout << footballGame.team[0].name << " is playing against? " << endl;
    getline(cin, footballGame.team[1].name);

    cout << endl;

    timeDelay();

    cout << "Today is playing " << footballGame.team[0].name << " vs " << footballGame.team[1].name << " !!!!!!!" << endl;

    cout << "-----------------------------------------------------------------------------------------------" << endl;

    timeDelay();

    cout << "Whats your favourite player in " << footballGame.team[0].name << " ?" << endl;
    getline(cin, footballGame.team[0].player[0].name);

    footballGame.team[0].player[0].teamNumber = 9;

    cout << endl;

    timeDelay();

    cout << footballGame.team[0].player[0].name << " is number " << footballGame.team[0].player[0].teamNumber << " on the team." << endl;

    footballGame.team[0].player[0].stats.shooting = 90;

    cout << endl;

    timeDelay();

    cout << footballGame.team[0].player[0].name << " in fifa has a shooting skill of " << footballGame.team[0].player[0].stats.shooting << " He is really good at shooting." << endl;

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    
    footballGame.team[0].player[0].cordinates.CordsX = 10;
    footballGame.team[0].player[0].cordinates.CordsY = 13;
    footballGame.team[0].player[0].cordinates.CordsZ = 1;

    timeDelay();

    cout << footballGame.team[0].player[0].name << " position in the game is X: " << footballGame.team[0].player[0].cordinates.CordsX << ", Y: " << footballGame.team[0].player[0].cordinates.CordsY << " y Z: " << footballGame.team[0].player[0].cordinates.CordsZ << endl;

    cout << "-----------------------------------------------------------------------------------------------" << endl;


    return 0;
}

void timeDelay()
{
    sleep_for(nanoseconds(20));
    sleep_until(system_clock::now() + seconds(1));
}


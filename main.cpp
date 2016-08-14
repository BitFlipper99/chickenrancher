
// My Classes
#include "rpgtype.h"

// Dependencies
#include <stdlib.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include <vector>
#include <iomanip>
#include <math.h> 
#include <sstream>
#include <algorithm> 
#include <windows.h>
#include <MMSystem.h>
#include <fstream>
#include <direct.h>
#include <AtlBase.h>
#include <array>
#include <conio.h>
#pragma comment( lib, "winmm" ) 

#define sndPlaySoundW
using namespace std;

/*
string readfile(){
string STRING;
ifstream infile;
infile.open("file.txt");
while (!infile.eof) // To get you all the lines.
{
getline(infile, STRING); // Saves the line in STRING.
cout << STRING; // Prints our STRING.
}
infile.close();
}
*/




string ebird[12] = {
	"::                    ::",
	"::`.     .-\"\"-.     .'::", //3
	": `.`-._ : '>': _.-'.' :",
	":`. `=._`'.  .''_.=' .':",
	" : `=._ `- '' -' _.-'.: ", //6
	"  :`=._`=.    .='_.=':  ",
	"   `.._`.      .'_..'   ",
	"     `-.:      :.-'     ", //9
	"        :      :        ",
	"        `:.__.:'        ",
	"         :    :         ", //12
	"        -'=  -'=        " };

string injuredbird[12] = {
	"::                    ::",
	"::`.     .-\"\"-.     .'::", //3
	": `.`-._ : '>': _.-'.' :",
	":`. `=._`'.  .''_.=' .':",
	" : `=._ `- '' -' _.-'.: ", //6
	"  :`=._`=.    .='_.=':  ",
	"   `.._`.    , .'_..'   ",
	"     `-.:   ,/ :.-'     ", //9
	"        :  /'  :        ",
	"        `:.__.:'        ",
	"         :    :         ", //12
	"        -'=  -'=        " };
string bat[12] = {
	"                          ",
	"  _..__.          .__.._  ",
	".^\"-.._ '-(\\__/)-' _..-\"^.",
	"       '-.' oo '.-'       ",
	"          `-..-'          ",
	"                          ",
	"                          ",
	"                          ",
	"                          ",
	"                          ",
	"                          ",
	"                          " };

string bleedingbat[12] = {
	"                          ",
	"  _..__.          .__.._  ",
	".^\"-.|_ '-(\\__/)-' _..-\"^.",
	"     /\\'-.' oo '.-'       ",
	"    /  \\  `-..-'          ",
	"    \\__/                   ",
	"                          ",
	"                          ",
	"                          ",
	"                          ",
	"                          ",
	"                          " };

string bigbat[12] = {
	"                   _-.                   .-_                   ",
	"              _..-'(                       )`-.._              ",
	"           ./'. '||\\\\.       (\\_/)       .//||` .`\\.           ",
	"        ./'.|'.'||||\\\\|..    )*.*(    ..|//||||`.`|.`\\.        ",
	"     ./'..|'.|| |||||\\```````  \"  '''''''/||||| ||.`|..`\\.     ",
	"   ./'.||'.|||| ||||||||||||.     .|||||||||||| ||||.`||.`\\.   ",
	"  /'|||'.|||||| ||||||||||||{     }|||||||||||| ||||||.`|||`\\  ",
	" '.|||'.||||||| ||||||||||||{     }|||||||||||| |||||||.`|||.` ",
	"'.||| ||||||||| |/'   ``\\||/`     '\\||/''   `\\| ||||||||| |||.`",
	"|/' \\./'     `\\./          |/\\   /\\|          \\./'     `\\./ `\\|",
	"V    V         V          }' `\\ /' `{          V         V    V",
	"`    `         `               U               '         '     " };

rpgtype boss[] = { rpgtype("Massive Bat", bigbat, 18, 18, 3, 1) };
rpgtype easyenemies[] = { rpgtype("Bird",ebird, 3, 3, 1, 0), rpgtype("Injured Bird",injuredbird, 3, 2, 2, 0), rpgtype("Bat",bat, 2, 2, 2, 0), rpgtype("Bleeding Bat",bleedingbat, 2, 1, 3, 0) };
rpgtype dungeonpool[] = { rpgtype("Bat", bat, 2, 2, 2, 0), rpgtype("Skeleton",ebird, 5, 5, 3, 0),  rpgtype("Vampire", ebird, 10, 10, 4, 1), rpgtype("Golem", ebird, 3, 3, 8, 5) };

WCHAR combined[MAX_PATH];



bool sound = false;
wstring folder = L"soundbites\\";
void PlaySoundBite(LPTSTR file) {
	if (sound) {
		PlaySound((folder + file).c_str(), NULL, SND_ASYNC);
	}
}
void PlayLoop(LPTSTR file) {
	if (sound) {
		PlaySound((folder + file).c_str(), NULL, SND_LOOP | SND_ASYNC);
	}
}
void cutmusic() {
	PlaySound(NULL, 0, 0);
}

/*
void PlaySoundBite(LPCWSTR file) {
	file = (wstring(L"open \"") + wstring(file) + wstring(L"\" type mpegvideo alias mp3")).c_str();
	mciSendString(file, NULL, 0, NULL); //opens file
	mciSendString(L"play mp3", NULL, 0, NULL);
}
void PlayLoop(LPCWSTR file) {
	file = (wstring(L"open ") + wstring(file) + wstring(L" type mpegvideo alias mp3")).c_str();
	mciSendString(file, NULL, 0, NULL); //opens file
	mciSendString(L"play mp3 repeat", NULL, 0, NULL);
}
void cutmusic() {
	mciSendString(L"stop mp3", NULL, 0, NULL);
}
*/
static string title[] = { //6 elements
	"   ______  __        _          __                       _______                            __                     ",
	" .' ___  |[  |      (_)        [  |  _                  |_   __ \\                          [  |                    ",
	"/ .'   \\_| | |--.   __   .---.  | | / ] .---.  _ .--.     | |__) |   ,--.   _ .--.   .---.  | |--.  .---.  _ .--.  ",
	"| |        | .-. | [  | / /'`\\] | '' < / /__\\\\[ `.-. |    |  __ /   `'_\\ : [ `.-. | / /'`\\] | .-. |/ /__\\\\[ `/'`\\] ",
	"\\ `.___.'\\ | | | |  | | | \\__.  | |`\\ \\| \\__., | | | |   _| |  \\ \\_ // | |, | | | | | \\__.  | | | || \\__., | |     ",
	" `.____ .'[___]|__][___]'.___.'[__|  \\_]'.__.'[___||__] |____| |___|\\'-;__/[___||__]'.___.'[___]|__]'.__.'[___]    "
};

static string optionsicon[] = { //8 elements
	"  ____        _   _                 ",
	" / __ \\      | | (_)                ",
	"| |  | |_ __ | |_ _  ___  _ __  ___ ",
	"| |  | | '_ \\| __| |/ _ \\| '_ \\/ __|",
	"| |__| | |_) | |_| | (_) | | | \\__ \\",
	" \\____/| .__/ \\__|_|\\___/|_| |_|___/",
	"     | |                          ",
	"     |_|                          " };

static string town[] = { //8 elements
	"                                    +              #####               ",
	"                                   / \\                                 ",
	" _____         ____     __________/ o \\/\\_________      _________      ",
	"|o o o|_______|    |___|               | | # # #  |____|o o o o  | /\\  ",
	"|o o o|  * * *|: ::|. .|Chickens 'R Us |o| # # #  |. . |o o o o  |//\\\\ ",
	"|o o o|* * *  |::  |. .| []  []  []  []|o| # # #  |. . |o o o o  |((|))",
	"|o o o|**  ** |:  :|. .| []  []  []    |o| # # #  |. . |o o o o  |((|))",
	"|_[]__|__[]___|_||_|__<|____________;;_|_|___/\\___|_.|_|____[]___|  |  "
};
static string cell[] = { //39 Elements
	"     \\                  ###########                  /      ",
	"      \\                  #########                  /       ",
	"       \\                                           /        ", //3
	"        \\                                         /         ",
	"         \\          The Black Market             /          ",
	"          \\                                     /           ", //6
	"           \\                                   /            ",
	"            \\_________________________________/             ",
	"            |                                 |             ", //9
	"            |                                 |             ",
	"            |                                 |             ",
	"            |            _________            |             ", //12
	"            |           |         |           |             ",
	"            |           |   ___   |           |             ",
	"            |           I  |___|  |           |             ", //15
	"            |           |         |           |             ",
	"            |           |         |           |             ",
	"            |           |        _|           |             ", //18
	"            |           |       |#|           |  ;,         ",
	"    -- ___  |           |         |           |   ;'        ",
	"    H*/   ` |           |         |      _____|    .,`      ", //21
	"    */     )|           I         |     \\_____\\     ;'      ",
	"    /___.,';|           |         |     \\\\     \\     .\"`    ",
	"    |     ; |___________|_________|______\\\\     \\      ;:   ", //24
	"    | ._,'  /                             \\\\     \\      .   ",
	"    |,'    /                               \\\\     \\         ",
	"    ||    /                                 \\\\_____\\        ", //27
	"    ||   /                                   \\_____|        ",
	"    ||  /              ___________                \\         ",
	"    || /              / =====o    |                \\        ", //30
	"    ||/              /  |   /-\\   |                 \\       ",
	"    //              /   |         |                  \\      ",
	"   //              /    |   ____  |______             \\     ", //33
	"  //              /    (O) |    | |      \\             \\    ",
	" //              /         |____| |  0    \\             \\   ",
	"//              /          o----  |________\\             \\  ", //36
	"/              /                  |     |  |              \\ ",
	"              /                   |        |               \\",
	"             /                    |        |                " }; //39
static string wizard[] = { //22 elements
" ____________________________________________________________________________ ",
"|_____________ \"Hnn__      __________________________________________________|",
"|\\_____________ \"HHHHHhnnj' _ ? ____________________________________________/|", //3
"| ||  ///  |_| ///HHHHHHH;;\\ / ////  | |     //////_    __    H    //|_|  || |",
"| || |-|///|=||  ||HHHH\";' o) |==| //|=| ///|=||=|, , | ||   / \\  |=||_||||| |",
"| || |=||=|| ||==|| HH;;;    \\   ||=||=||__|| || |---| /  \\ |---| |H|| ||||| |", //6
"| || | || || ||  || H;;;;, ,,-'  || || ||__|_____|---||[==]||---| /=\\|_/==\\|_|",
"| || |_||_||_||__|//,;;;;;;< ||__||_||_||_/      |___||____||___||___|(____) |",
"| ||/         ___//,;;; ``;;;       (    /                    _         _____|", //9
"| ||=========/__/|| ;;  \\ `;'\\====== )==/    .______  ____   (_)       //o---|",
"| || |__| //|___||  ;    |    |-__  (  /    / // // \\/  / \\  /_\\ *    //--o--|",
"| || |__||=||| || (       \\____|__-,||/     \\// //// //// /     {*}  //--o---|", //12
"| || |  || ||| ||  \\              |---,   /\"\"/ //// ////,/       |  //o------|",
"| || |__||_||| | |  \"-_          |_}||   \"- ////// ////<  \\|/    |;//--o----/|",
"| ||/        | | |     \"----,   |/ /Oo\\  ,'// /// //// / \\|/    ; ;\"\"\"\"\"\"\"\"/ |", //15
"| ||=========| | |           `.|/_(_o__)<_____/\\______/ \\|/     ; ;       / /|",
"|/ \"\"/\"\"\"\"/\"\"| ||              /        _________       \\|/  {}/; ;\\     / / |",
"|   /    /   | ||             /        /   / /  /;      \\|/    `==='    / /  |", //18
"|  /    /    | | |           / ,-____ /___/_/_ //       |=|            / /|  |",
"| /    /    /| |__\\_________/   ~  ''(________(/       [___]          / / |  |",
"|/    /    / |_____________/________________________________________ / /| |  |", //21
"|____/____/___|_||_________|________________________________________|_/_|_|__|" //22

};


static string shop[] = { //9 elements
	"    ================================",
	"     ||     ||<(.)>||<(.)>||     || ",
	"     ||    _||     ||     ||_    || ",
	"     ||   (__D     ||     C__)   || ",
	"     ||   (__D     ||     C__)   || ",
	"     ||   (__D     ||     C__)   || ",
	"     ||   (__D     ||     C__)   || ",
	"     ||     ||     ||     ||     || ",
	"    ================================"
};


static string chef[] = { //11 elements
	"           .--,--.        ",
	"           `.  ,.'        ",
	"            |___|         ",
	"            :o o:   O     ",
	"           _`~^~'_  |     ",
	"         /'   ^   `\\=)    ",
	"       .'  _______ '~|    ",
	"       `(<=|     |= /'    ",
	"           |     |        ",
	"           |_____|        ",
	"    ~~~~~~~ ===== ~~~~~~~~"
};

const int houselength = 14;
static string houses[][houselength] = {
	{ "                                              ",
	"                                              ",
	"                                              ",
	"                                +&-           ", //starter barn
	"        Your Barn             _.-^-._    .--. ",
	"                           .-'   _   '-. |__| ",
	"                          /     |_|     \\|  | ",
	"                         /               \\  | ",
	"                        /|     _____     |\\ | ",
	"                         |    |==|==|    |  | ",
	"     |---|---|---|---|---|    |--|--|    |  | ",
	"     |---|---|---|---|---|    |==|==|    |  | ",
	"    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
	"                                          " },


	{ "                           (  (                  /\\        ",
	"                            (_)                 /  \\  /\\   ",
	"                    ________[_]________      /\\/    \\/  \\  ", //3
	"           /\\      /\\        ______    \\    /   /\\/\\  /\\/\\ ",
	"          /  \\    //_\\       \\    /\\    \\  /\\/\\/    \\/    \\",
	"   /\\    / /\\/\\  //___\\       \\__/  \\    \\/                ", //6
	"  /  \\  /\\/    \\//_____\\       \\ |[]|     \\                ",
	" /\\/\\/\\/       //_______\\       \\|__|      \\               ",
	"/      \\      /XXXXXXXXXX\\                  \\              ", //9
	"        \\    /_I_II  I__I_\\__________________\\             ",
	"               I_I|  I__I_____[]_|_[]_____I                ",
	"               I_II  I__I_____[]_|_[]_____I                ", //12
	"               I II__I  I     XXXXXXX     I                ",
	"            ~~~~~\"   \"~~~~~~~~~~~~~~~~~~~~~~~~             " },
	{ "            __                         __            ",
	"           /%%\\                  ^    /%%\\           ",
	"       ^  /%%%%\\      *-*            /%%%%\\          ",
	"   ^     /%%%%%%\\______|____________/%%%%%%\\         ",
	"          |\"\"\"\"|%%%/^\\%%%/^\\%%%/^\\%%%|\"\"\"\"|   ^       ",
	"          | H  |%%%|H|%%%|H|%%%|H|%%%| H  |      ^   ",
	"          |    |���������������������|    |          ",
	"          |    |   HHH   HHH   HHH   |    |          ",
	"()) ______|    |_____________________|    |_____  () ",
	"(()/%/^\\%%|    |%%%%%%%%%%%%%%%%%%%%%|    |%%/^\\%\\(()",
	"()/%%|H|%%|    |%%%%%%%%%%%%%%%%%%%%%|    |%%|H|%%\\()",
	")/%%%%%%%%|    |  ___  _/-o-\\_  ___  |    |%%%%%%%%\\(",
	"()| HH HH |    |  HHH   | | |   HHH  |    | HH HH |()",
	"|||_______|____|__HHH___|_|_|___HHH__|____|_______|||" }
};

static string chickenicon[] = {
	"                  ,.     ",
	"                 (\\(\\)   ",
	" ,_              ;  o >  ",
	"  {`-.          /  (_)   ",
	"  `={\\`-._____/`   |     ",
	"   `-{ /    -=`\\   |     ",
	" .=\"`={ -= = _ / / `\"-. ",
	"(M==M=M==M=M==M==M==M==M)",
	" \\=N=N==N=N==N=N==N=NN=/ ",
	"  \\M==M=M==M=M==M===M=/  ",
	"   \\N=N==N=N==N=NN=N=/   ",
	"    \\M==M==M=M==M==M/    ",
	"     `-------------'     " };

static string sheepicon[] = {
	"  ,-''''-.                        ",
	" (.  ,.   L        ___...__       ",
	" /7} ,-`  `'-==''``        ''._   ",
	"//{                           '`. ",
	"\\_,X ,                         : )",
	"    7                          ;` ",
	"    :                  ,       /  ",
	"     \\_,                \\     ;   ",
	"       Y   L_    __..--':`.    L  ",
	"       |  /| ````       ;  y  J   ",
	"      [ j J            / / L ;    ",
	"      | |Y \\          /_J  | |    ",
	"      L_J/_)         /_)   L_J    ",
	"     /_)                  /_)     " }; //14

const int CiconL = sizeof(chickenicon) / sizeof(chickenicon[0]);

const int mazefloors = 3;

char mazegrid[mazefloors][7][7] = {
						  { { 'c','1','0','0','m','0','0' },
							{ '0','1','0','1','1','c','m' },
							{ '0','1','0','m','1','1','1' },
							{ '0','1','1','0','1','s','0' },
							{ '0','0','0','0','m','0','0' },
							{ '1','0','1','1','1','1','j' },
							{ 'm','0','0','e','0','1','b' } },

						  { { 'c','1','0','0','m','0','0' },
							{ '0','1','0','1','1','c','m' },
							{ '0','1','0','m','1','1','1' },
							{ '0','1','1','0','1','s','0' },
							{ '0','0','0','0','m','0','0' },
							{ '1','0','1','1','1','1','j' },
							{ 'm','0','0','0','0','1','u' } },

};
char mazemap[mazefloors][7][7];


bool playerdead = false;
bool bossdead = false;
bool stickym = true;
bool playmusic = true;
int msdelay = 2500;
double cash = 0;
double cprice = 0.50;

bool statbar = false;
bool map = false;
bool hasmazemap = false;
bool hasrooster = false;
rpgtype proost;
rpgtype enemy;

int bedmulti = 1;
int boatq = 1;
int dfloor = 0;

int bottles = 0;
int hpots = 0;


int hens = 1;
int totalchickens = 0;
int chickens = 0;
int cookedchicken = 0;
int controlchickens = 0;
int sheep = 0;
int craftmats[2] = { 0,0 };
int totalcraftmats[2] = { 0,0 };
double sheepconception = 0;

int hlvl = 0;
int cookinglvl = 1;

clock_t timer;

//Prints the array.
void prarrtostr(string arr[], int length) { for (int i = 0; i < length; i++) { cout << arr[i] + "\n"; } }

string dbltostr(double d) {
	string str = to_string(d);
	str.erase(str.find_last_not_of('0') + 1, string::npos);
	double temp;
	if (modf(d, &temp) == 0) { str = str.substr(0, str.size() - 1); }
	return str;
}
int getinput(int max, int min) {
	int intchoice = min;
	string stringput = "no";

	while (true) {
		if (max > 9) {
			cin >> intchoice;
			if (cin.fail()) {
				cin.clear();
				cin.sync();
			}
		}
		else {
			intchoice = _getch() - '0';
		}
		
		if (intchoice == max + 1) {
			cout << "Enter Cheat: ";
			FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
			cin.sync();
			getline(cin, stringput);
			if (stringput == "chicken overwhelming") {
				chickens += 10000; totalchickens += 10000;
				cout << "Check your coop :)" << endl;
				PlaySoundBite(L"secret.wav");
			}
			else if (stringput == "reduce delay") {
				if (msdelay >= 1000) msdelay -= 500;
			}
			else if (stringput == "wake me up inside") {
				proost.currenthp = proost.maxhp;
				cout << "Full heal!" << endl;
				PlaySoundBite(L"wmu.wav");
			}
			else { cout << "\nNot Recognized / Input too fast" << endl;
				cin.clear();
				FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
			}
			intchoice = getinput(max, min);
		}
		if (intchoice <= max && intchoice > min) break;
		cin.clear();
		if (max > 9) {
			cin >> intchoice;
		}
		else {
			intchoice = _getch() - '0';
		}
	} // end while
	FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
	return intchoice;
} //end method

string arrtostr(string arr[], int length, int breaker) {
	string final = "";
	for (int i = 0; i < length; i++) {
		final += arr[i];
		if (i < breaker) {
			final += "\n";;
		}
	}
	return final;
}


void sleep(int milliseconds) {
	this_thread::sleep_for(chrono::milliseconds(milliseconds));
}
void clear() { system("cls");
if (statbar) {
	string stats;
	stats += "Money: ";

	}
}

void checkcoop()
{
	clear();

	int chickencoop = ((((clock() - timer) / (int)CLOCKS_PER_SEC) / 2) * hens * bedmulti) - (controlchickens *hens * bedmulti);
	controlchickens = ((clock() - 9) / (int)CLOCKS_PER_SEC) / 2;

	chickens += chickencoop;
	totalchickens += chickencoop;
	string coop[CiconL];
	for (int i = 0; i < CiconL; i++) { coop[i] = chickenicon[i]; } //Copy the chickenicon array.

	coop[3] += ("    You have a total of: " + to_string(hens) + " hens ");
	coop[4] += ("    You found: " + to_string(chickencoop) + " chickens in your coop!");
	coop[5] += ("    You have found a total of: " + to_string(totalchickens) + " chickens");
	coop[6] += ("    You currently have: " + to_string(chickens) + " chickens");
	prarrtostr(coop, CiconL);
	sleep(msdelay);

}

vector<string> split(string str, char delimiter) {
	vector<string> internal;
	stringstream ss(str); // Turn the string into a stream.
	string tok;

	while (getline(ss, tok, delimiter)) {
		internal.push_back(tok);
	}

	return internal;
}

void createnemy(rpgtype en) {
	string enicon[12];
	for (int i = 0; i < 12; i++) {
		enicon[i] = en.get_icon(i);
	}
	enemy.set_icon(enicon);
	enemy.name = en.name;
	enemy.maxhp = en.maxhp;
	enemy.currenthp = en.currenthp;
	enemy.atk = en.atk;
	enemy.def = en.def;
}

void death() {
	clear();
	string death[21]
	{ "               ...                            ",
		"             ;::::;                           ",
		"           ;::::; :;                          ",
		"         ;:::::'   :;                         ",
		"        ;:::::;     ;.                        ",
		"       ,:::::'       ;           OOO\\         ",
		"       ::::::;       ;          OOOOO\\        ",
		"       ;:::::;       ;         OOOOOOOO       ",
		"      ,;::::::;     ;'         / OOOOOOO      ",
		"    ;:::::::::`. ,,,;.        /  / DOOOOOO    ",
		"  .';:::::::::::::::::;,     /  /     DOOOO   ",
		" ,::::::;::::::;;;;::::;,   /  /        DOOO  ",
		";`::::::`'::::::;;;::::: ,#/  /          DOOO ",
		":`:::::::`;::::::;;::: ;::#  /            DOOO",
		"::`:::::::`;:::::::: ;::::# /              DOO",
		"`:`:::::::`;:::::: ;::::::#/               DOO",
		" :::`:::::::`;; ;:::::::::##                OO",
		" ::::`:::::::`;::::::::;:::#                OO",
		" `:::::`::::::::::::;'`:;::#                O ",
		"  `:::::`::::::::;' /  / `:#                  ",
		"   ::::::`:::::;'  /  /   `#                  " }; //21

	for (int i = 0; i < 20; i++) {
		death[i] += "      ";

	}
	for (int g = 0; g < 12; g++) {
		death[g + 8] += proost.get_icon(g);
	}
	prarrtostr(death, 21);

	proost.currenthp = 1;
	PlaySoundBite(L"deathstronger.wav");
	sleep(3500);

}

string buttons(vector<string> vec) {
	int linefix = 0;
	string arr[15];
	string fix = "";
	string modfix = "";
	int intfix = 0;
	for (int i = 0; i < (int)vec.size(); i++) {
		if ((i + 1) % 6 == 0) { linefix = 8; }
		vector<string> words = split(vec.at(i), ' ');
		arr[0 + linefix] += "  ____________________  "; //length 24
		arr[1 + linefix] += " /\\ " + to_string(i + 1) + "                 \\ ";
		// previous 2 not to change
		if (words.size() == 1) { intfix = 1; }
		for (int g = 0; g < 3; g++) {

			if (g < (int)words.size()) {
				fix = string((18 - words.at(g).length()) / 2, ' ');
				if (words.at(g).length() % 2 == 1) modfix = " ";
				switch (g + intfix) {
				case 0:
					arr[2 + linefix] += " \\_|" + fix + words.at(g) + fix + modfix + "| ";
					break;
				case 1:
					arr[3 + linefix] += "   |" + fix + words.at(g) + fix + modfix + "| "; //18 spaces
					break;
				case 2:
					arr[4 + linefix] += "   |" + fix + words.at(g) + fix + modfix + "| ";
					break;
				}
				modfix = "";
			}
			else if (g != 3) {
				if (g == 2 || intfix == 1) arr[4 + linefix] += "   |                  | ";
				if (g <= 1) arr[2 + linefix] += " \\_|                  | ";
				break;
			}
		}
		intfix = 0;
		// next 2 not to change
		arr[5 + linefix] += "   |  ________________|_";
		arr[6 + linefix] += "   \\_/_________________/";
	}
	int breaker = 15;
	if (vec.size() < 6) {
		for (int i = 8; i < 14; i++) {
			arr[i] = "";
			breaker = 8;
		}
	}

	string stringbuttons = arrtostr(arr, 15, breaker);
	/*
	if (vec.size() < 6) {
	for (int j = 0; j < 8; j++) {
	stringbuttons[(168 * vec.size() + 7 + j)] = '\0';
	}
	}
	*/
	return stringbuttons;
}

void changeoptions() {
	clear();
	prarrtostr(optionsicon, 8);
	vector<string> options = { "Change Delay", "Toggle Music", "Toggle Sound", "Return" };

	cout << buttons(options);
	while (1) {
		int intput = getinput(options.size(), 0);
		string choice = options.at(intput - 1);
		if (choice == "Change Delay") {
			cout << "Enter the millisecond delay you would like between actions: ";
			msdelay = getinput(5000, 0);
		}
		else if (choice == "Toggle Music") {
			playmusic = (playmusic == true) ? false : true;
			cout << "Music Toggled" << endl;
		}
		else if (choice == "Toggle Sound") {
			sound = (sound == true) ? false : true;
			cout << "Sound Toggled" << endl;
		}
		else if (choice == "Return") break;
	}
}

bool fight(string background[12]) {
	bool win = false;
	bool flee = false;
	string final[12];
	bool autofight = false;
	string choice = "Scratch";
	vector<string> options = { "Scratch","Peck","Flee","Auto Battle" };
	for (int i = 0; i < 12; i++) {
		final[i] = proost.get_icon(i) + "   " + background[i] + "   " + enemy.get_icon(i);
	}
	int finalsize = sizeof(final) / sizeof(final[0]);
	while (enemy.currenthp > 0 && proost.currenthp > 0) {
		clear();
		prarrtostr(final, 12);

		cout << "    hp:" + to_string(proost.currenthp) + "/" + to_string(proost.maxhp)
			<< string(finalsize - 10, ' ') + "   hp:" + to_string(enemy.currenthp) + "/" + to_string(enemy.maxhp) << endl;
		if (autofight) sleep(msdelay);

		else {
			cout << buttons(options);
		}
		if (!autofight) {
			int intchoice = getinput(options.size(), 0);
			choice = options.at(intchoice - 1);
		}
		if (choice == "Scratch") {
			enemy.currenthp = enemy.currenthp - proost.atk + enemy.def;
		}
		else if (choice == "Peck") {
			enemy.currenthp = enemy.currenthp - proost.atk + enemy.def;
		}
		else if (choice == "Flee") {
			flee = true;
			break;
		}
		else if (choice == "Auto Battle") {
			autofight = true; choice = "Scratch"; continue;
		}
		if (enemy.currenthp > 0) {
			proost.currenthp = proost.currenthp - enemy.atk - proost.def;
		}
	} //end while
	if (flee) {
		if (enemy.currenthp > 0) {
			proost.currenthp = proost.currenthp - enemy.atk - proost.def;
		}
	}
	if (proost.currenthp < 1) {
		playerdead = true;
		PlaySoundBite(L"wilhelm.wav");
		sleep(800);
		death();
		cash = 0;

	}

	else if (!flee) {
		win = true;


	}
	return win;
}


void sellchickens() {
	clear();
	string townsell[8];
	for (int i = 0; i < 8; i++) { townsell[i] = town[i]; } //Copy the house array.

	cash += (double)cookedchicken * cprice;
	double gained = cookedchicken * cprice;

	string strcp = dbltostr(cprice);

	string strcash = dbltostr(cash);

	string strgained = dbltostr(gained);

	townsell[2] += "   You sold: " + to_string(cookedchicken) + " cooked chicken.";
	townsell[3] += "   The value of your chicken is: $" + strcp + " per chicken";
	townsell[5] += "   You gained $" + strgained;
	townsell[6] += "   Your balance is now: $" + strcash;

	prarrtostr(townsell, 8);

	cookedchicken = 0;
	sleep(msdelay);
}

void store() {
	bool shopping = true;
	vector<string> options;
	PlaySoundBite(L"what are you.wav");
	while (shopping) {
		string shopkeep[9];
		for (int i = 0; i < 9; i++) { shopkeep[i] = shop[i]; } //Copy the house array.

		string strcash = dbltostr(cash);

		shopkeep[1] += "Browse my wares!";
		shopkeep[3] += "Balance: $" + strcash;
		shopkeep[4] += "Hens: " + to_string(hens);
		shopkeep[5] += "Level " + to_string(cookinglvl) + " chef";
		clear();
		prarrtostr(shopkeep, 9);

		double henprice = 5.0 * pow(2.0, hens - 1);
		string strhenprice = dbltostr(henprice);

		double manualprice = 50.0 * pow(3.0, cookinglvl - 1);
		string strmanualprice = dbltostr(manualprice);

		double houseprice = 2500.0 * pow(6.0, hlvl);
		string strhouseprice = dbltostr(houseprice);

		options.clear();
		options.push_back("Buy Hen $" + strhenprice);
		options.push_back("Cooking Manual $" + strmanualprice);
		if (cash >= 75 && !map) options.push_back("Buy Map $100");
		if (hasrooster && hlvl < 2) options.push_back("Upgrade House $" + strhouseprice);

		options.push_back("Leave Shop");
		cout << buttons(options);

		int intchoice = getinput(options.size(), 0);
		string choice = options.at(intchoice - 1);

		if (choice == ("Buy Hen $" + strhenprice)) {
			if (cash < henprice) {
				PlaySoundBite(L"bargain.wav");
			}
			else {
				hens++;
				cash -= henprice;
				PlaySoundBite(L"finally.wav");
			}
		}

		else if (choice == ("Cooking Manual $" + strmanualprice)) {
			if (cookinglvl == 10 || cash < manualprice) {
				PlaySoundBite(L"bargain.wav");
			}
			else {
				cookinglvl++;
				cash -= manualprice;
			}
		}
		else if (choice == "Buy Map $100") {
			if (cash < 100) { PlaySoundBite(L"bargain.wav"); }
			else {
				cash -= 100;
				map = true;
			}
		}
		else if (choice == "Upgrade House $" + strhouseprice) {
			if (cash < houseprice) {
				cout << "You must construct additional Pylons" << endl; sleep(600);
			}
			else {
				cash -= houseprice;
				hlvl++;
			}
		}
		else if (choice == "Leave Shop") shopping = false;
	}

	if (bossdead) {
		if (sound) {
			PlaySoundBite(L"vengeance.wav");
			sleep(2800);
		}
	}
	else if (hlvl == 2) {
		if (sound) {
			PlaySoundBite(L"reckoning.wav");
			sleep(3000);
		}
	}
	else if (playerdead) {
		if (sound) {
			PlaySoundBite(L"killed you.wav");
			sleep(3500);
		}
	}
}

void cookchicken() {
	clear();
	string cooking[11];
	for (int i = 0; i < 11; i++) { cooking[i] = chef[i]; } //Copy the house array.
	string skill = "";
	if (cookinglvl < 3) skill = "Gah! You are such a bad chef, you burn " + to_string((10 - cookinglvl) * 10) + "% of chicken!";
	else if (cookinglvl < 6 && cookinglvl > 2) skill = "Not... terrible. you only yielded " + to_string(cookinglvl * 10) + "% of chicken.";
	else if (cookinglvl < 10 && cookinglvl > 5) skill = "You're getting pretty good! " + to_string((10 - cookinglvl) * 10) + "% chicken burned";
	else if (cookinglvl >= 10) skill = "You're a master!";
	cooking[2] += skill;

	int chickenloss = (chickens / 10) * 10;
	int success = (chickens / 10) * cookinglvl;
	cookedchicken += success;
	chickens -= chickenloss;
	cooking[4] += "You cooked: " + to_string(success) + " Chickens, and burned " + to_string(chickenloss - success) + " chickens";

	prarrtostr(cooking, 11);
	sleep(msdelay);
}

char mazemove(int dir, string special) {
	string arrows[19]; //40 char each element
	int i;
	string spaces = "                                         ";
	bool isleft = (dir >> 0) & 1;
	bool isup = (dir >> 1) & 1;
	bool isright = (dir >> 2) & 1;
	bool isdown = (dir >> 3) & 1;
	if (isleft) {
		arrows[7] += "        .          ";
		arrows[8] += "      .;;..........     ";
		arrows[9] += "    .;;;;::::A:::::     ";
	    arrows[10]+= "     ':;;::::::::::     ";
	    arrows[11]+= "       ':          ";
	}
	else { //creates ghost arrow
		arrows[7] += string(19, ' ');
		arrows[11] += string(19, ' ');
		for (i = 8; i < 11; i++) {arrows[i] += string(24, ' ');}
	}
	if (isup) {
		arrows[0] += "                     .                  ";
		arrows[1] += "                   .:;:.                ";
		arrows[2] += "                 .:;;;;;:.              ";
		arrows[3] += "                   ;;;;;                ";
		arrows[4] += "                   ;;;;;                ";
		arrows[5] += "                   ;;W;;                ";
		arrows[6] += "                   ;;;;;                ";
		arrows[7] += ";;;;;";
	}
	else { //ghost arrow
		arrows[7] += string(5, ' ');
		for (i = 0; i < 7; i++) {arrows[i] += string(40, ' ');}
	}
	if (isdown) {
		arrows[11] += ";;;;;";
		arrows[12] += "                   ;;;;;                ";
		arrows[13] += "                   ;;S;;                ";
		arrows[14] += "                   ;;;;;                ";
		arrows[15] += "                   ;;;;;                ";
		arrows[16] += "                 ..;;;;;..              ";
		arrows[17] += "                  ':::::'               ";
		arrows[18] += "                    ':`                 ";
	}
	else {
		arrows[11] += string(5, ' ');
		for (i = 12; i < 19; i++) {arrows[i] += string(40, ' ');}
	}
	if (isright) {
		arrows[7] += "           .    ";
		arrows[8] += "...........;;.  ";
		arrows[9] += ":::::D:::::;;;;.";
		arrows[10]+= ":::::::::::;;:' ";
		arrows[11]+= "           :'   ";
	}
	else {
		for (i = 7; i < 12; i++) {arrows[i] += string(16, ' ');}
	}
	
	int speclen = special.size();
	bool opexist = (speclen > 0);
	if (opexist) {
		arrows[7] += "    Press R:";
		arrows[8] += "    " + string(speclen, ',');
		arrows[9] += "   |" + special + "|";
		arrows[10]+= "    " + string(speclen, '\'');
	}
	//add special

	prarrtostr(arrows, 19);
	while (1) {
		if (GetAsyncKeyState('W') & 0x8000 && isup) return 'W';
		if (GetAsyncKeyState('A') & 0x8000 && isleft) return 'A';
		if (GetAsyncKeyState('D') & 0x8000 && isright) return 'D';
		if (GetAsyncKeyState('S') & 0x8000 && isdown) return 'S';
		if (GetAsyncKeyState('R') & 0x8000 && opexist) return 'R';
	}
}

string strmazemap(int index, int dfloor, int x, int y) {
	string returner = "";
	if (index % 2 == 0) {
		for (int i = 0; i < 7; i++) {returner += (index != 0 && (mazemap[dfloor][index / 2][i] != '1' && mazemap[dfloor][index / 2][i] != '?') && (mazemap[dfloor][index / 2 - 1][i] != '1' && mazemap[dfloor][index / 2 - 1][i] != '?')) ? "+ " : "+-";}
		returner += '+';
	}
	else {
		returner = '|'; 
		for (int i = 0; i < 7; i++) {
			returner += (mazemap[dfloor][(index / 2)][i] != '1') ? (mazemap[dfloor][index / 2][i] == '0') ? (x == i && y == index /2) ? 'o' : ' ' : mazemap[dfloor][index / 2][i] : 'X';
			returner += (i != 6 && (mazemap[dfloor][index / 2][i] != '1' && mazemap[dfloor][index / 2][i] != '?') && (mazemap[dfloor][index / 2][i + 1] != '1' && mazemap[dfloor][index / 2][i + 1] != '?')) ? ' ' : '|';
		}
	}
	return returner;
}

void blackmarket() {
	bool shopping = true;
	vector<string> options;
	PlaySoundBite(L"what are you.wav");
	while (shopping) {
		string shopkeep[39];
		for (int i = 0; i < 39; i++) { shopkeep[i] = cell[i]; } //Copy the house array.

		string strcash = dbltostr(cash);
		string mapownership = (hasmazemap) ? "yes" : "no";

		shopkeep[1] += "What are you doing here?";
		shopkeep[3] += "Balance: $" + strcash;
		shopkeep[4] += "Map: " + mapownership;
		shopkeep[5] += "Stones: " + to_string(craftmats[1]);
		shopkeep[6] += "Bottles: " + to_string(bottles);
		

		options.clear();
		if (!hasmazemap) options.push_back("Buy Map $100");
		options.push_back("Stone $10");
		options.push_back("5 Bottles $50");

		if (proost.def > 0) options.push_back("Defense Flask $5000");
		if (!statbar) options.push_back("Stat Bar $1000");

		options.push_back("Leave Black Market");

		clear();
		prarrtostr(shopkeep, 39);
		cout << buttons(options);

		int intchoice = getinput(options.size(), 0);
		string choice = options.at(intchoice - 1);

		if (choice == ("Buy Map $100")) {
			if (cash >= 100) {
				cash -= 100;
				hasmazemap = true;
			}
		}
		else if (choice == ("Stone $10")) {
			if (cash >= 10) {
				cash -= 10;
				craftmats[1]++;
			}
		}
		else if (choice == ("5 Bottles $50")) {
			if (cash >= 50) {
				cash -= 50;
				bottles += 5;
			}
		}
		else if (choice == ("Stat Bar $1000")) {
			if (cash >= 1000) {
				cash -= 1000;
				statbar = true;
			}
		}
		else if (choice == ("Defense Flask $5000")) {
			if (cash >= 5000) {
				cash -= 5000;
				proost.def = proost.def + 1;
			}
		}
		else if (choice == ("Leave Black Market")) shopping = false;
	}
}

void librarymaze() {
	bool inmaze = true;
	char encounter = 'e';
	string mazeops[][20] = {
	{   " _____________________________________________ ", //6
		"|.'',                                     ,''.|",
		"|.'.'',                                 ,''.'.|", //3
		"|.'.'.'',                             ,''.'.'.|",
		"|.'.'.'.'',                         ,''.'.'.'.|",
		"|.'.'.'.'.'',                     ,''.'.'.'.'.|", //6
		"|.'.'.'.'.'.'',                 ,''.'.'.'.'.'.|",
		"|.'.'.'.'.'.'.'', ___________ ,''.'.'.'.'.'.'.|",
		"|.'.'.'.'.'.'.'.'|'.'.'.'.'.'|.''.'.'.'.'.'.'.|", //9
		"|.'.'.'.'.'.'.'.'|'.'.'.'.'.'|.''.'.'.'.'.'.'.|",
		"|.'.'.'.'.'.'.'.'|'.'.'.'.'.'|,''.'.',',',',',|",
		"|.'.'.'.'.'.'.'.'|'.'.'.'.'.'|.''.'.'.'.'.'.'.|", //12
		"|.'.'.'.'.'.'.','             ','.'.'.'.'.'.'.|",
		"|.'.'.'.'.'.','     _______     ','.'.'.'.'.'.|",
		"|.'.'.'.'.','      /%%%%%%%\\      ','.'.'.'.'.|", //15
		"|.'.'.'.','       /%%%%%%%%%\\       ','.'.'.'.|",
		"|.'.'.','        /%%%%%%%%%%%\\        ','.'.'.|",
		"|.'.','         /%%%%%%%%%%%%%\\         ','.'.|", //18
		"|.','          /%%%%%%%%%%%%%%%\\          ','.|",
		"|;____________/%%%%%%%%%%%%%%%%%\\____________;|" },
		{ " _____________________________________________ ", //7
		"|.'',                                     ,''.|",
		"|.'.'',                                 ,''.'.|", //3
		"|.'.'.'',                             ,''.'.'.|",
		"|.'.'.'.'',                         ,''.'.'.'.|",
		"|.'.'.'.'.|                       ,''.'.'.'.'.|", //6
		"|.'.'.'.'.|===;                 ,''.'.'.'.'.'.|",
		"|.'.'.'.'.|:::|', ___________ ,''.'.'.'.'.'.'.|",
		"|.'.'.'.'.|---|'.|'.'.'.'.'.'|.''.'.'.'.'.'.'.|", //9
		"|.'.'.'.'.|:::|'.|'.'.'.'.'.'|.''.'.'.'.'.'.'.|",
		"|,',',',',|---|',|'.'.'.'.'.'|,''.'.',',',',',|",
		"|.'.'.'.'.|:::|'.|'.'.'.'.'.'|.''.'.'.'.'.'.'.|", //12
		"|.'.'.'.'.|---|','           ',''.'.'.'.'.'.'.|",
		"|.'.'.'.'.|===:'    _______    ',.'.'.'.'.'.'.|",
		"|.'.'.'.'.|%%%%%%%%%%%%%%%%\\     ',.'.'.'.'.'.|", //15
		"|.'.'.'.','       /%%%%%%%%%\\      ',.'.'.'.'.|",
		"|.'.'.','        /%%%%%%%%%%%\\       ',.'.'.'.|",
		"|.'.','         /%%%%%%%%%%%%%\\        ',.'.'.|", //18
		"|.','          /%%%%%%%%%%%%%%%\\         ',.'.|",
		"|;____________/%%%%%%%%%%%%%%%%%\\____________;|" },
		{ " _____________________________________________ ", //5
		"|.'',                                     ,''.|",
		"|.'.'',                                 ,''.'.|", //3
		"|.'.'.'',                             ,''.'.'.|",
		"|.'.'.'.'',                         ,''.'.'.'.|",
		"|.'.'.'.'.'',                     ,''.'.'.'.'.|", //6
		"|.'.'.'.'.'.'',                 ,''.'.'.'.'.'.|",
		"|.'.'.'.'.'.'.'',             ,''.'.'.'.'.'.'.|",
		"|.'.'.'.'.'.'.'.''|'.''__''.'|'.'.'.'.'.'.'.'.|", //9
		"|.'.'.'.'.'.'.''.'|'.'|  |'.'|'.'.'.'.'.'.'.'.|",
		"|,',',',',',','','|'.'|  |'.'|'.'.'.',',',',',|",
		"|.'.'.'.'.'.'.''.,'   /%\\    ',.'.'.'.'.'.'.'.|", //12
		"|.'.'.'.'.'.'.','    /%%%\\     ',.'.'.'.'.'.'.|",
		"|.'.'.'.'.'.','     /%%%%%\\      ',.'.'.'.'.'.|",
		"|.'.'.'.'.','      /%%%%%%%\\       ',.'.'.'.'.|", //15
		"|.'.'.'.','       /%%%%%%%%%\\        ',.'.'.'.|",
		"|.'.'.','        /%%%%%%%%%%%\\         ',.'.'.|",
		"|.'.','         /%%%%%%%%%%%%%\\          ',.'.|", //18
		"|.','          /%%%%%%%%%%%%%%%\\           ',.|",
		"|;____________/%%%%%%%%%%%%%%%%%\\____________;|" },
		{ " _____________________________________________ ", //4
		"|.'',                                     ,''.|",
		"|.'.'',                                 ,''.'.|", //3
		"|.'.'.'',                             ,''.'.'.|",
		"|.'.'.'.'',                         ,''.'.'.'.|",
		"|.'.'.'.'.|                       ,''.'.'.'.'.|", //6
		"|.'.'.'.'.|===;                 ,''.'.'.'.'.'.|",
		"|.'.'.'.'.|:::|',             ,''.'.'.'.'.'.'.|",
		"|.'.'.'.'.|---|'.'|'.''__''.'|'.'.'.'.'.'.'.'.|", //9
		"|.'.'.'.'.|:::|'.'|'.'|  |'.'|'.'.'.'.'.'.'.'.|",
		"|,',',',',|---|','|'.'|  |'.'|'.'.'.',',',',',|",
		"|.'.'.'.'.|:::|'.''   /%\\    ',.'.'.'.'.'.'.'.|", //12
		"|.'.'.'.'.|---|','   /%%%\\     ',.'.'.'.'.'.'.|",
		"|.'.'.'.'.|===:'    /%%%%%\\      ',.'.'.'.'.'.|",
		"|.'.'.'.'.|%%%%%%%%%%%%%%%%\\       ',.'.'.'.'.|", //15
		"|.'.'.'.','       /%%%%%%%%%\\        ',.'.'.'.|",
		"|.'.'.','        /%%%%%%%%%%%\\         ',.'.'.|",
		"|.'.','         /%%%%%%%%%%%%%\\          ',.'.|", //18
		"|.','          /%%%%%%%%%%%%%%%\\           ',.|",
		"|;____________/%%%%%%%%%%%%%%%%%\\____________;|" },
		{ " _____________________________________________ ", //2
		"|.'',                                     ,''.|",
		"|.'.'',                                 ,''.'.|", //3
		"|.'.c.'',                             ,''.'.'.|",
		"|.'.'.h.'',                         ,''.'.'.'.|",
		"|o'.'.'.i.'',                       |.'.'.'.'.|", //6
		"|.v.'.'.'.c.'',                 ;===|.'.'.'.'.|",
		"|.'.e.'.'.'.k.'', ___________ ,'|:::|.'.'.'.'.|",
		"|.'.'.r.'.'.'.e.'|'.'.'.'.'.'|.'|---|.'.'.'.'.|", //9
		"|.'m'.'.w.'.'.'n.|'.'.'.'.'.'|.'|:::|.'.'.'.'.|",
		"|,','i',',h.'.'',|'.'.'.'.'.'|,'|---|,',',',',|",
		"|.'.'.'n'.'.e.''.|'.'.'.'.'.'|.'|:::|.'.'.'.'.|", //12
		"|.'.'.'.'g'.'.l,'            ','|---|.'.'.'.'.|",
		"|.'.'.'.'.'.','    ____________':===|.'.'.'.'.|",
		"|.'.'.'.'.','     /%%%%%%%%%%%%%%%%%|.'.'.'.'.|", //15
		"|.'.'.'.','      /%%%%%%%%%%%\\      ','.'.'.'.|",
		"|.'.'.','       /%%%%%%%%%%%%%\\       ','.'.'.|",
		"|.'.','        /%%%%%%%%%%%%%%%\\        ','.'.|", //18
		"|.','         /%%%%%%%%%%%%%%%%%\\         ','.|",
		"|;___________/%%%%%%%%%%%%%%%%%%%\\___________;|" },
	  { " _____________________________________________ ", //3
		"|.'',                                     ,''.|",
		"|.'.'',                                 ,''.'.|", //3
		"|.'.'.'',                             ,''.'.'.|",
		"|.'.'.'.'',                         ,''.'.'.'.|",
		"|.'.'.'.'.|                         |.'.'.'.'.|", //6
		"|.'.'.'.'.|===;                 ;===|.'.'.'.'.|",
		"|.'.'.'.'.|:::|', ___________ ,'|:::|.'.'.'.'.|",
		"|.'.'.'.'.|---|'.|'.'.'.'.'.'|.'|---|.'.'.'.'.|", //9
		"|.'.'.'.'.|:::|'.|'.'.'.'.'.'|.'|:::|.'.'.'.'.|",
		"|,',',',',|---|',|'.'.'.'.'.'|,'|---|,',',',',|",
		"|.'.'.'.'.|:::|'.|'.'.'.'.'.'|.'|:::|.'.'.'.'.|", //12
		"|.'.'.'.'.|---|','           ','|---|.'.'.'.'.|",
		"|.'.'.'.'.|===:'_______________':===|.'.'.'.'.|",
		"|.'.'.'.'.|%%%%%%%%%%%%%%%%%%%%%%%%%|.'.'.'.'.|", //15
		"|.'.'.'.','       /%%%%%%%%%\\       ','.'.'.'.|",
		"|.'.'.','        /%%%%%%%%%%%\\        ','.'.'.|",
		"|.'.','         /%%%%%%%%%%%%%\\         ','.'.|", //18
		"|.','          /%%%%%%%%%%%%%%%\\          ','.|",
		"|;____________/%%%%%%%%%%%%%%%%%\\____________;|" },
	  { " _____________________________________________ ", //1
		"|.'',                                     ,''.|",
		"|.'.'',                                 ,''.'.|", //3
		"|.'.'.'',                             ,''.'.'.|",
		"|.'.'.'.'',                         ,''.'.'.'.|",
		"|.'.'.'.'.'',                       |.'.'.'.'.|", //6
		"|.'.'.'.'.'.'',                 ;===|.'.'.'.'.|",
		"|.'.'.'.'.'.'.'',             ,'|:::|.'.'.'.'.|",
		"|.'.'.'.'.'.'.'.''|'.''__''.'|.'|---|.'.'.'.'.|", //9
		"|.'.'.'.'.'.'.''.'|'.'|  |'.'|.'|:::|.'.'.'.'.|",
		"|,',',',','.'.'','|'.'|  |'.'|,'|---|,',',',',|",
		"|.'.'.'.'.'.'.''.,'   /%\\   '|.'|:::|.'.'.'.'.|", //12
		"|.'.'.'.'.'.'.','    /%%%\\   ','|---|.'.'.'.'.|",
		"|.'.'.'.'.'.','     /%%%%%\\    ':===|.'.'.'.'.|",
		"|.'.'.'.'.','      /%%%%%%%%%%%%%%%%|.'.'.'.'.|", //15
		"|.'.'.'.','       /%%%%%%%%%\\       ','.'.'.'.|",
		"|.'.'.','        /%%%%%%%%%%%\\        ','.'.'.|",
		"|.'.','         /%%%%%%%%%%%%%\\         ','.'.|", //18
		"|.','          /%%%%%%%%%%%%%%%\\          ','.|",
		"|;____________/%%%%%%%%%%%%%%%%%\\____________;|" },
		{ " _____________________________________________ ", //0
		"|.'',                                     ,''.|",
		"|.'.'',                                 ,''.'.|", //3
		"|.'.'.'',                             ,''.'.'.|",
		"|.'.'.'.'',                         ,''.'.'.'.|",
		"|.'.'.'.'.|                         |.'.'.'.'.|", //6
		"|.'.'.'.'.|===;                 ;===|.'.'.'.'.|",
		"|.'.'.'.'.|:::|',             ,'|:::|.'.'.'.'.|",
		"|.'.'.'.'.|---|'.'|'.''__''.'|.'|---|.'.'.'.'.|", //9
		"|.'.'.'.'.|:::|'.'|'.'|  |'.'|.'|:::|.'.'.'.'.|",
		"|,',',',',|---|','|'.'|  |'.'|,'|---|,',',',',|",
		"|.'.'.'.'.|:::|'.,'   /%\\   ',.'|:::|.'.'.'.'.|", //12
		"|.'.'.'.'.|---|,'    /%%%\\    ',|---|.'.'.'.'.|",
		"|.'.'.'.'.|===:     /%%%%%\\     :===|.'.'.'.'.|",
		"|.'.'.'.'.|%%%%%%%%%%%%%%%%%%%%%%%%%|.'.'.'.'.|", //15
		"|.'.'.'.','       /%%%%%%%%%\\       ','.'.'.'.|",
		"|.'.'.','        /%%%%%%%%%%%\\        ','.'.'.|",
		"|.'.','         /%%%%%%%%%%%%%\\         ','.'.|", //18
		"|.','          /%%%%%%%%%%%%%%%\\          ','.|",
		"|;____________/%%%%%%%%%%%%%%%%%\\____________;|" },

		{ "*******************************************************************************", //8
		"          |                     |                |                     |       ",
		" _________|________________.=\"\"_;=.______________|_____________________|_______",
		"|                   |  ,-\"_,=\"\"     `\"=.|                  |                   ",
		"|___________________|__\"=._o`\"-._        `\"=.______________|___________________",
		"          |                `\"=._o`\"=._      _`\"=._                     |       ",
		" _________|_____________________:=._o \"=._.\"_.-=\"'\"=.__________________|_______",
		"|                   |    __.--\" , ; `\"=._o.\" ,-\"\"\"-._ \".   |                   ",
		"|___________________|_._\"  ,. .` ` `` ,  `\"-._\"-._   \". '__|___________________",
		"          |           |o`\"=._` , \"` `; .\". ,  \"-._\"-._; ;              |       ",
		" _________|___________| ;`-.o`\"=._; .\" ` '`.\"\\` . \"-._ /_______________|_______",
		"|                   | |o;    `\"-.o`\"=._``  '` \" ,__.--o;   |                   ",
		"|___________________|_| ;     (#) `-.o `\"=.`_.--\"_o.-; ;___|___________________",
		"____/______/______/___|o;._    \"      `\".o|o_.--\"    ;o;____/______/______/____",
		"/______/______/______/_\"=._o--._        ; | ;        ; ;/______/______/______/_",
		"____/______/______/______/__\"=._o--._   ;o|o;     _._;o;____/______/______/____",
		"/______/______/______/______/____\"=._o._; | ;_.--\"o.--\"_/______/______/______/_",
		"____/______/______/______/______/_____\"=.o|o_.--\"\"___/______/______/______/____",
		"/______/______/______/______/______/______/______/______/______/______/______/_",
		"*******************************************************************************" },
		{ "                                              ", //9
		"                                              ",
		"               The Black Market               ",
		" ____________________________________________ ",
		"|____________________________________________|",
		"|__||  ||___||  |_|___|___|__|  ||___||  ||__|",
		"||__|  |__|__|  |___|___|___||  |__|__|  |__||",
		"|__||  ||___||  |_|___|___|__|  ||___||  ||__|",
		"||__|  |__|__|  |    || |    |  |__|__|  |__||",
		"|__||  ||___||  |    || |    |  ||___||  ||__|",
		"||__|  |__|__|  |    || |    |  |__|__|  |__||",
		"|__||  ||___||  |    || |    |  ||___||  ||__|",
		"||__|  |__|__|  |    || |    |  |__|__|  |__||",
		"|__||  ||___||  |   O|| |O   |  ||___||  ||__|",
		"||__|  |__|__|  |    || |    |  |__|__|  |__||",
		"|__||  ||___||  |    || |    |  ||___||  ||__|",
		"||__|  |__|__|__|____||_|____|  |__|__|  |__||",
		"|LLL|  |LLLLL|______________||  |LLLLL|  |LLL|",
		"|LLL|  |LLL|______________|  |  |LLLLL|  |LLL|",
		"|LLL|__|L|______________|____|__|LLLLL|__|LLL|", },

		{ "    =/\\                 /\\=                                     ", //10
		"    / \\'._   (\\_/)   _.'/ \\       (_                   _)       ",
		"   / .''._'--(o.o)--'_.''. \\       /\\                 /\\        ",
		"  /.' _/ |`'=/ \" \\='`| \\_ `.\\     / \\'._   (\\_/)   _.'/ \\       ",
		" /` .' `\\;-,'\\___/',-;/` '. '\\   /_.''._'--('.')--'_.''._\\      ",
		"/.-'       `\\(-V-)/`       `-.\\  | \\_ / `;=/ \" \\=;` \\ _/ |      ",
		"             \"   \"               \\/  `\\__|`\\___/`|__/`  \\/      ",
		"              (,_    ,_,    _,)   `       \\(/|\\)/       `       ",
		"              /|\\`-._( )_.-'/|\\            \" ` \"                ",
		"             / | \\`'-/ \\-'`/ | \\         _   ,_,   _            ",
		"            /  |_.'-.\\ /.-'._|  \\       / `'=) (='` \\           ",
		"           /_.-'      \"      `-._\\     /.-.-.\\ /.-.-.\\          ",
		"   /\\                 /\\               `      \"      `          ",
		"  / \\'._   (\\_/)   _.'/ \\            =/\\                 /\\=    ",
		" /_.''._'--('.')--'_.''._\\           / \\'._   (\\_/)   _.'/ \\    ",
		" | \\_ / `;=/ \" \\=;` \\ _/ |          / .''._'--(e.e)--'_.''. \\   ",
		"  \\/ `\\__|`\\___/`|__/` \\/          /.' _/ |`'=/ \" \\='`| \\_ `.\\  ",
		"   `      \\(/|\\)/      `          /` .' `\\;-,'\\___/',-;/` '. '\\ ",
		"           \" ` \"                 /.-'       `\\(/V\\)/`       `-.\\",
		"                                 `            \"   \"            `" }
	}; //20
	if (!hasrooster) {
		clear();
		prarrtostr(mazeops[0], 20);
		cout << "Without a guardian rooster, you quiver in fear and run away." << endl;
		sleep(msdelay);
	}
	else {
		bool treasure = false;
		bool jumpscare = false;
		string special = "Leave Through Exit";
		int correction;
		string mazeandmap[20];
		string justmazemap[20];
		int cpos[2] = { 3,6 }; //x and y
		//bool bdir[4];
		int dir;
		bool win;
		while (inmaze) {
			win = false;
			dir = 0;
			PlaySoundBite(L"maze.wav");

			if (cpos[0] != 0 && mazegrid[dfloor][cpos[1]][cpos[0] - 1] != '1')
				dir |= 1 << 0; //left 

			if (cpos[1] != 0 && mazegrid[dfloor][cpos[1] - 1][cpos[0]] != '1')
				dir |= 1 << 1; //forwards

			if (cpos[0] != 6 && mazegrid[dfloor][cpos[1]][cpos[0] + 1] != '1')
				dir |= 1 << 2; //right

			if (treasure) correction = 8;
			else if (jumpscare) correction = 10;
			else { correction = dir; }

			if (cpos[1] != 6 && mazegrid[dfloor][cpos[1] + 1][cpos[0]] != '1')
				dir |= 1 << 3; //backwards

			for (int i = 0; i < 20; i++) {
				mazeandmap[i] = mazeops[correction][i];
			}			//add map here ***

			/*
				bool isleft = (dir >> 0) & 1;
				bool isup = (dir >> 1) & 1;
				bool isright = (dir >> 2) & 1;
				bool isdown = (dir >> 3) & 1;
			*/

			if (hasmazemap) {
				if (cpos[0] != 0 && mazemap[dfloor][cpos[1]][cpos[0] - 1] == '?') 
					mazemap[dfloor][cpos[1]][cpos[0] - 1] = ((dir >> 0) & 1) ? (mazegrid[dfloor][cpos[1]][cpos[0] - 1] != '0') ? '!' : '0' : '1';

				if (cpos[1] != 0 && mazemap[dfloor][cpos[1] - 1][cpos[0]] == '?')
					mazemap[dfloor][cpos[1] - 1][cpos[0]] = ((dir >> 1) & 1) ? (mazegrid[dfloor][cpos[1] - 1][cpos[0]] != '0') ? '!' : '0' : '1';

				if (cpos[0] != 6 && mazemap[dfloor][cpos[1]][cpos[0] + 1] == '?')
					mazemap[dfloor][cpos[1]][cpos[0] + 1] = ((dir >> 2) & 1) ? (mazegrid[dfloor][cpos[1]][cpos[0] + 1] != '0') ? '!' : '0' : '1';

				if (cpos[1] != 6 && mazemap[dfloor][cpos[1] + 1][cpos[0]] == '?')
					mazemap[dfloor][cpos[1] + 1][cpos[0]] = ((dir >> 3) & 1) ? (mazegrid[dfloor][cpos[1] + 1][cpos[0]] != '0') ? '!' : '0' : '1';

				mazeandmap[3] += "           Map:";

				for (int i = 0; i < 15; i++) {
					mazeandmap[i+5] += ("      " + strmazemap(i, dfloor, cpos[0], cpos[1]));
				}
			}

			clear(); //clears previous graphics
			prarrtostr(mazeandmap, 20);

			if (treasure) { //change for other floors
				PlaySoundBite(L"lootget.wav");
				cout << "You found a treasure chest and collected 3 wool!" << endl;
				craftmats[0] += 3;
				treasure = false;
			}
			if (jumpscare) {
				PlaySoundBite(L"maniclaugh.wav");
				cout << "You've been spooked by the scary bats!\nThey have rewarded you with $100" << endl;
				cash += 100;
				jumpscare = false;
			}


			/*
			cout << buttons(directions);
			int intchoice = getinput(directions.size(), 0);
			string choice = directions.at(intchoice - 1); 
			*/
			//put special encounters here

			char choice = mazemove(dir, special);

			if (choice == 'W') cpos[1] -= 1;
			else if (choice == 'A') cpos[0] -= 1;
			else if (choice == 'S') cpos[1] += 1;
			else if (choice == 'D') cpos[0] += 1;
			else if (choice == 'R') { // check for specials
				if (encounter == 'e') inmaze = false;     //leave house
				else if (encounter == 'd') dfloor++;      //down stairs
				else if (encounter == 'u') dfloor--;      //up stairs
				else if (encounter == 's') blackmarket(); //black market

			}
			FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
			sleep(250);

			/*
			if (choice == "Forwards") cpos[1] -= 1;
			else if (choice == "Left") cpos[0] -= 1;
			else if (choice == "Right") cpos[0] += 1;
			else if (choice == "Backwards") cpos[1] += 1;
			else if (choice == "Leave Through Exit") inmaze = false;
			*/ //old options

			special = "";
			encounter = mazegrid[dfloor][cpos[1]][cpos[0]];

			if (mazemap[dfloor][cpos[1]][cpos[0]] == '!') mazemap[dfloor][cpos[1]][cpos[0]] = encounter;

			if (encounter == 'c') {
				treasure = true;
				mazegrid[dfloor][cpos[1]][cpos[0]] = '0';
			}
			else if (encounter == 'j') {
				jumpscare = true;
				mazegrid[dfloor][cpos[1]][cpos[0]] = '0';
			}
			else if (encounter == 'b') {
				createnemy(boss[0]); //if multiple levels make sure to fix
				win = fight(bat);
				if (win) {
					bossdead = true;
					cash += 10000;
					mazegrid[dfloor][cpos[1]][cpos[0]] = 'd';
				}
				else { inmaze = false; }
			}
			else if (encounter == 'm') { //monster battle
				createnemy(dungeonpool[dfloor]);
				win = fight(bat);
				if (win) {
					cash += (dfloor + 1) * 50;
					mazegrid[dfloor][cpos[1]][cpos[0]] = '0';
				}
				else {
					inmaze = false;
				}
			}
			else if (encounter == 's') {
				special = "Enter Black Market";
				correction = 9;
			} //black market / dungeon market 
			else if (encounter == 'd') special = "Descend Stairs";     //down stair
			else if (encounter == 'u') special = "Ascend Stairs";      //upstair
			else if (encounter == 'e') special = "Leave Through Exit"; //Exit
		}
	}
}

void talking(string words) {
	cout << endl;
	for (string::iterator it = words.begin(); it != words.end(); ++it) {
		cout << *it;
		sleep(23);
	}
	cout << endl;
}

bool questioncheck(string tocheck) {
	string stringput = "";
	FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
	getline(cin, stringput);
	transform(stringput.begin(), stringput.end(), stringput.begin(), ::tolower);
	if (stringput.find(tocheck) != string::npos) return true;
	else {
		talking("That doesn't sound right!");
		sleep(400);
		return false;
	}
}



void boat() {
	bool boating = true;
	string penguin[] = {
		"   Your Penguin  ",
		"                 ",
		"      .___.      ", //3
		"     /     \\     ",
		"    | O _ O |    ",
		"    /  \\_/  \\    ", //6
		"  .' /     \\ `.  ",
		" / _|       |_ \\ ",
		"(_/ |       | \\_)", //9
		"    \\       /    ",
		"   __\\_>-<_/__   ",
		"   ~;/     \;~   " //12
	};

	string boat[] = {
		"                         _._                                           ",
		"                          :.        Hi! I'm Chester The Penguin        ",
		"                          : :                                          ", //3
		"                          :  .                                         ",
		"                         .:   :             .___.                      ",
		"                        : :    .           /     \\                     ", //6
		"                       :  :     :         | O _ O |                    ",
		"                      .   :      .        /  \\_/  \\                    ",
		"                     :    :       :     .' /     \\ `.                  ", //9
		"                    :     :        .   / _|       |_ \\                 ",
		"                   .      :         : (_/ |   C   | \\_)                  ",
		"                  :       :          .    \\       /                    ", //12
		"                 :        :           :  __\\_>-<_/__                   ",
		"                .=w=w=w=w=:            . ~;/     \\;~                   ", 
		"                          :=w=w=w=w=w=w=.   ....                       ", //15
		"           <--._______:U~~~~~~~~\\_________.:---/                       ",
		"            \\      ____===================____/                        ",
		".,-~\"^\"p-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.", //18
		"\"^\"~-,.,i~\"z\"a-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"",
		"\"~-,.,-~\"^z~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"" //20
	};
	string intro = "Hello and welcome to my boat!\nI hope you will be able to answer some questions for me.  I will reward you if you are correct!";
	string q1 = "First Question: Do you really love penguins?";
	string q2 = "What side of a chicken has the most feathers?";
	string q3 = "Complete this sequence: R, E, T, S, E, H, ?";
	string q4 = "How many chickens does the best rancher in town have?";
	string q5 = "Who created this program?";
	clear();
	prarrtostr(boat, 20);
	while (boating) {
		switch (boatq) {
			case 1:
				talking(intro);
				talking(q1);
				boating = questioncheck("y");
				if (!boating) break;
				boatq++;
				talking("That's correct! here is 3 wool!");
				craftmats[0] += 3;
				break;
			case 2:
				talking(q2);
				boating = questioncheck("outside");
				if (!boating) break;
				boatq++;
				talking("Right answer! here are 50 monies.");
				cash += 50;
				break;
			case 3:
				talking(q3);
				boating = questioncheck("c");
				if (!boating) break;
				boatq++;
				talking("You got it! it was my name. Here are two stones!");
				craftmats[1] += 2;
				break;
			case 4:
				talking(q4);
				boating = questioncheck(to_string(chickens));
				if (!boating) break;
				boatq++;
				talking("I was talking about you! Here are 3000 chickens, and a map!");
				chickens += 3000;
				hasmazemap = true;
				break;
			case 5:
				talking(q5);
				boating = questioncheck("logan");
				if (!boating) break;
				boatq++;
				talking("Here, have this penguin!");
				hasrooster = true;
				proost.set_icon(penguin);
				break;

			case 6:
				if (hlvl > 0) {

					boating = false;
				}
				else {
					talking("You've answered all my questions!");
					sleep(200);
					boating = false;
				}
			}
	}
}


void oldmcdonald() {
	boolean shopping = true;
	string mcdonald[] = { //29 elements
		"	                                                __,-O<         ,-- ",
		"--.                                  \\.          -='            -'    ",
		"   \\                                __\\\\O-                      ,---  ", //3
		"   --.                                `^                       /      ",
		"      ).          __,-O<    \\              __,-O<            ,--          Howdy Rancher! My name is Old McDonald", //4 added spaces
		" ----'  `.          `\\)   __)\\O-__           )/          ,--(    ,;:.     I'd be willing to sell you some of my goods!",//6
		"",
		"",
		"", //9
		"",
		"'-'-'-[=]/'-'-'-[=]/'-'-'-/'.=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=",
		"-'-'-'-'-'-'-'-'-'-'-'-'-/   '.                                      |", //12
		"'-'-'-'-'-'-'-'-'-'-'-'-/    .-'            .--.--.                |/|",
		"-'-'-'-'-'-'-'-'-'-'-'-/ _.-'.-:          .; .;|;. ;.            |/|/ ",
		"       ___       ___   |' _.'\\ :|--|--|- .;_;'   ';_;. --|--|--|/|/   ", //15
		"|]   [|_|_|]   [|_|_|] | |\\ | \\:|--|--| ; ;'       '; ; -|--|--|/     ",
		"|]   [|_|_|]   [|_|_|] | | \\|--'       ;; .--.___.--. ;;              ",
		"_______________________| |.-'          ;-[  O )=( O  ]-;              ", //18
		"                     |/|               (  `--' | `--'  )              ",
		"     ____.-\".      |/|/                 \\|    (      |/               ",
		"   ;( ,__.)/='   |/|/                    .  .:::::.  .                ", //21
		"   ; |/  \\|    |/|/                       .  '---'  .                 ",
		"     \\    |  |/|/                         |`.     .'|                 ",
		"      `   `|/|/                  ,-------/|  `...'  |\\-------,        ", //24
		"|--|--|--|/|/                  ,'       | `.       ,' |       `,      ",
		"|--|--|--|/                   /         \\  /'.   ,'\\  /         \\     ",
		"                             ;           |/   \\ /   \\|           ;    ", //27
		"                             ;    ;   /  '     |.    '  \\  \\;    ;    ",
		"                            ;      `-'         |         `-'      ;   " }; //29
	vector<string> options;
	PlaySoundBite(L"hey_there.wav");
	while (shopping) {
		string ownership = (hasrooster) ? "yes" : "no";
		mcdonald[6] = "         _)          /      `^  _)\\O<        /          (_      .:;:;.    bought rooster = " + ownership;
		mcdonald[7] = "       |         |               `^                           :;';.;:'    Sheep: " + to_string(sheep);
		mcdonald[8] = "       |_        |_        |                                   ';\\||'     Improved Feed: " + to_string((int)(cprice / 0.5));
		mcdonald[9] = "______/=\\\\______/=\\\\_______|                                      :|      Current Cash: " + dbltostr(cash);
		if (hasrooster) mcdonald[10] = "'-'-'-[=]/'-'-'-[=]/'-'-'-/'.=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=    Rooster hp: " + to_string(proost.currenthp) + "/" + to_string(proost.maxhp);
		clear();
		prarrtostr(mcdonald, 29);
		options.clear();
		if (!hasrooster) options.push_back("Buy Rooster $15");
		double feedprice = 100 * pow(2.5, (cprice / 0.5) - 1);
		options.push_back("Improved Feed $" + dbltostr(feedprice));

		double sheepprice;
		if (sheep == 0) {
			sheepprice = 500 * pow(2.0, sheep);
			options.push_back("Sheep $" + dbltostr(sheepprice));
		}

		if (proost.currenthp != proost.maxhp) { options.push_back("Heal Rooster $10"); }

		options.push_back("View Map");

		cout << buttons(options);

		int intchoice = getinput(options.size(), 0);
		string choice = options.at(intchoice - 1);
		if (choice == "Buy Rooster $15") {
			if (cash >= 15) {
				hasrooster = true;
				cash -= 15;
				PlaySoundBite(L"thats_a_beauty.wav");
			}
		}
		else if (choice == "Improved Feed $" + dbltostr(feedprice)) {
			if (cash >= feedprice) {
				cash -= feedprice;
				cprice += 0.5;
				PlaySoundBite(L"much obliged.wav");
			}

		}
		else if (choice == "Sheep $" + dbltostr(sheepprice)) {
			if (cash >= sheepprice) {
				cash -= sheepprice;
				sheep++;
				sheepconception = ((clock() - timer) / (int)CLOCKS_PER_SEC);
			}
		}

		else if (choice == "Heal Rooster $10") {
			if (cash >= 10) {
				cash -= 10;
				proost.currenthp = (proost.maxhp);
				PlaySoundBite(L"patched up.wav");
			}
		}

		else if (choice == "View Map")  shopping = false;
	}


}

void forest() {
	string trees[] = {
		"                                   ",
		"                                   ",
		"            ,@@@@@@@,              ",
		"    ,,,.   ,@@@@@@/@@,  .oo8888o.  ",
		" ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o ",
		",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'",
		"%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'",
		"%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88' ",
		"`&%\\ ` /%&'    |.|        \\ '|8'   ",
		"    |o|        | |         | |     ",
		"    |.|        | |         | |     ",
		" \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//_" }; //12
	bool win = false;
	if (!hasrooster) {
		prarrtostr(trees, 10);
		cout << "Without a rooster, the forest is much too dangerous!" << endl;
		sleep(msdelay);
	}

	else {
		bool fighting = true;

		while (fighting) {
			srand((int)time(0));
			int random = rand() % 4;
			createnemy(easyenemies[random]);
			win = fight(trees);

			if (win) {
				cout << "You gained: 12$" << endl;
				cash += 12;
				sleep(msdelay);
			}
			else {
				fighting = false;
			}
		} //end while
	} //end else
} //end method

void adventure() {
	bool adventuring = true;
	string mapicon[] = { // 19 elements

		" ^  ^  ^   ^      ___I_      ^  ^   ^  ^  ^   ^  ^     .                '      .           ",
		"/|\\/|\\/|\\ /|\\    /\\-_--\\    /|\\/|\\ /|\\/|\\/|\\ /|\\/|\\        .      .     :     .      .     ",
		"/|\\/|\\/|\\ /|\\   /  \\_-__\\   /|\\/|\\ /|\\/|\\/|\\ /|\\/|\\          '.        ______       .'     ",
		"/|\\/|\\/|\\ /|\\   |[]| [] |   /|\\/|\\ /|\\/|\\/|\\ /|\\/|\\    .       '  _.-\"`      `\" - ._ '        ",
		"       _                                                       .'                '.        ",
		"     _|=|__________                                     `'--. /                    \\ .--'` ",
		"    /              \\                                         /                      \\      ",
		"   /                \\                                       ;                        ;     ",
		"  /__________________\\                 ;~              - -- |                        | -- -",
		"   ||  || /--\\ ||  ||                ./|\\.                  |     _.                 |     ",
		"   ||[]|| | .| ||[]||              ./ /| `\\.                ;    /__`A   ,_          ;     ",
		" ()||__||_|__|_||__||()           /  | |   `\\.          -'   \\   |= |;._.}{__       /  '-.  ",
		"( )|-|-|-|====|-|-|-|( )         |   | |     `\\.           _.-\"\"-|.' # '. `  `.-\\\"{} < ._  ",
		"^^^^^^^^^^====^^^^^^^^^^^        |    \\|       `\\.               /       \\     \\  x   `\"   ",
		"                               .  `----|__________\\.        ----/   OLD   \\_.-'|--X----    ",
		"                                \\-----''----.....___        -=_ | McDonald|    |- X.  =_   ",
		"                                 \\               \"\"/       - __ |_________|_.-'|_X-X##     ",
		"                            ~^~^~^~^~^`~^~^`^~^~^`^~^~^        `'-._|_|;:;_.-'` '::.  `\" - ",
		"                             ~^~^~`~~^~^`~^~^~`~~^~^~        .:; .      .:.   ::.     '::.\"" };

	string input;
	int zero = 0;
	while (adventuring) {
		FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
		if (playmusic) {
			PlayLoop(L"minecraft.wav");
		}
		clear();
		prarrtostr(mapicon, 19);
		cout << "Where would you like to go?" << endl;
		
	help:

		cin >> input;
		cin.ignore();
		transform(input.begin(), input.end(), input.begin(), ::toupper);
		if (input == "FOREST" || input == "WOODS") {
			forest();
		}
		else if (input == "HOUSE" || input == "HUT") {
			librarymaze();
		}
		else if (input == "BARN" || input == "FARM") {
			oldmcdonald();
		}
		else if (input == "BOAT" || input == "SAILBOAT") {
			boat();
		}
		else if (input == "EXIT" || input == "LEAVE" || input == "HOME") {
			adventuring = false;
		}
		else if (input == "HELP") {
			cout << "Your options are:\n1. Forest\n2. House\n3. Boat\n4. Farm\n5. Home\n6. Help" << endl;
			goto help;
		}
		else {
			cout << "Invalid input, type help if stuck." << endl;
			FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
			goto help;
		}


	}
}

bool checkcraft(int arr[3][3]) {
	bool success = true;
	armor wcp = armor("Woolen Chestplate", 5);
	armor whelm = armor("Woolen Hat", 3);
	armor wboots = armor("Woolen Boots", 2);
	armor wlegs = armor("Woolen Leggings", 5);
	weapon wwep = weapon("Woolen Gloves", 1);

	armor scp = armor("Stone Chestplate", 10);
	armor shelm = armor("Stone Hat", 5);
	armor sboots = armor("Stone Boots", 4);
	armor slegs = armor("Stone Leggings", 8);
	weapon swep = weapon("Stone Gloves", 2);

	string cbuild;

	for (int i = 0; i < 9; i++) {
		cbuild += to_string(arr[i / 3][i % 3]);
	}

	string woolcp =     "101111111";
	string woolhelm =   "111101000";
	string woollegs =   "111101101";
	string woolboots =  "000101101";
	string woolglove =  "000111010";

	string stonecp =    "202222222";
	string stonehelm =  "222202000";
	string stonelegs =  "222202202";
	string stoneboots = "000202202";
	string stoneglove = "000222020";


	string bed = "000111202";

	if (cbuild == woolcp) proost.set_chest(wcp);
	else if (cbuild == woolhelm) proost.set_helm(whelm);
	else if (cbuild == woollegs) proost.set_legs(wlegs);
	else if (cbuild == woolboots) proost.set_boots(wboots);
	else if (cbuild == woolglove) proost.set_weapon(wwep);

	else if (cbuild == stonecp) proost.set_chest(scp);
	else if (cbuild == stonehelm) proost.set_helm(shelm);
	else if (cbuild == stonelegs) proost.set_legs(slegs);
	else if (cbuild == stoneboots) proost.set_boots(sboots);
	else if (cbuild == stoneglove) proost.set_weapon(swep);

	else if (cbuild == bed) bedmulti = 2;

	else success = false;

	return success;
}

void craft() { //craft tools


	string mats[2][5] = { {
		" ..... ",
		";     ;",
		";  W  ;",
		";     ;",
		" ''''' " },
	   {"_______",
		"|\\   /|",
		"|  S  |",
		"|/ T \|",
		"\\_____/"} };

	string e[5] = {
		"       ",
		"       ",
		"",
		"       ",
		"       " };
	bool crafting = true;
	bool crafted;
	string endproduct[19];
	int *pointer;
	int intproduct[3][3] = { { 0, 0, 0 },{ 0, 0, 0 },{ 0, 0, 0 } };
	int temploss[2] = { 0,0 };
	vector<string> options;
	if (sheep > 0) {
		options.push_back("Wool");
		if (sheep > 0) { options.push_back("Stone"); }
	} //fix later
	options.push_back("Craft");
	options.push_back("Return Home");
	while (crafting) {
		fill_n(endproduct, 19, "");
		clear();
		for (int i = 0; i < 3; i++) {
			endproduct[0] += " " + string(7, '-');
			endproduct[6] += " " + string(7, '-');
			endproduct[12] += " " + string(7, '-');
			endproduct[18] += " " + string(7, '-');
		}
		for (int i = 0; i < 3; i++) {
			for (int g = 0; g < 3; g++) {
				for (int s = 0; s < 5; s++) {
					if (intproduct[i][g] == 0) {
						if (s == 2) {
							endproduct[s + 1 + (6 * i)] += "|   " + to_string(g+(i*3)+1) + "   ";
						}
						else {
							endproduct[s + 1 + (6 * i)] += "|" + e[s];
						}
					}
					else { 
						int mat = intproduct[i][g];
						endproduct[s + 1 + (6 * i)] += "|" + mats[mat-1][s]; }
					if (g == 2) {
						endproduct[s + 1 + (6 * i)] += "|";
					}
				}
			}

		}
		for (int i = 0; i < 12; i++) {
			endproduct[i + 6] += proost.get_icon(i);
		}
		endproduct[1] += "Current Helmet: " + proost.helmet.name;
		endproduct[2] += "Current Chestplate: " + proost.chestplate.name;
		endproduct[3] += "Current Leggings: " + proost.pants.name;
		endproduct[4] += "Current Boots: " + proost.boots.name;
		endproduct[5] += "Current Weapon: " + proost.weap.name;

		prarrtostr(endproduct, 19);
		cout << buttons(options);

		int intchoice = getinput(options.size(), 0);
		string choice = options.at(intchoice - 1);
		if (choice == "Return Home") break;

		else if (choice == "Craft") {
			crafted = checkcraft(intproduct);
			if (crafted) {
				for (int i = 0; i < (sizeof(craftmats) / sizeof(craftmats[0])); i++) {
					craftmats[i] -= temploss[i]; 
					temploss[i] = 0;
				}
				for (int i = 0; i < 9; i++) { intproduct[i / 3][i % 3] = 0; }
				crafted = false;
			}
		}
		else {
			cout << "Please enter an integer (1-9)" << endl;
			int indexchoice = getinput(9, 0);		
			int currentval = intproduct[(indexchoice - 1) / 3][(indexchoice - 1) % 3];
			pointer = &intproduct[(indexchoice - 1) / 3][(indexchoice - 1) % 3];
			if (currentval != 0) {
				*pointer = 0; temploss[currentval - 1]--;
			}
			else  {
				if (temploss[intchoice - 1] + 1 > craftmats[intchoice - 1]) {
					cout << "You don't have enough!" << endl;
				}
				else {
					*pointer = intchoice;
					temploss[intchoice - 1]++;
				}


			}
		}
	} //end while
}

void alchemy() { //upgrade tools



}

void checksheep() {
	clear();

	int woolgain = ((((clock() - timer) / (int)CLOCKS_PER_SEC)) - sheepconception) / 60 - totalcraftmats[0];

	craftmats[0] += woolgain;
	totalcraftmats[0] += woolgain;
	string coop[14];
	for (int i = 0; i < 14; i++) { coop[i] = sheepicon[i]; } //Copy the sheepicon array.

	coop[4] += ("    You found: " + to_string(woolgain) + " pieces of wool");
	coop[5] += ("    You have found a total of: " + to_string(totalcraftmats[0]) + " pieces of wool");
	coop[6] += ("    You currently have: " + to_string(craftmats[0]) + " wool");
	prarrtostr(coop, 14);
	sleep(msdelay);
}

void game() {
	int intchoice;
	string choice = "";
	int possible = 1;

	vector<string> options;
	bool playing = true;
	while (playing) {
		if (playmusic  && stickym) PlayLoop(L"Robin-Hood-Rooster.wav");
		intchoice = 0;
		clear();

		options.clear();
		options.push_back("Check Coop");
		if (sheep > 0) options.push_back("Shear Sheep");
		if (chickens >= 10) options.push_back("Cook Chicken");
		if (cookedchicken >= 3) options.push_back("Sell Cooked Chicken");
		if (cash >= 5) options.push_back("Go To Store");
		if (map) options.push_back("View Map");
		if (hlvl > 0) options.push_back("Craft");
		if (hlvl > 1) options.push_back("Alchemy");

		string finishbarn[houselength];
		for (int i = 0; i < houselength; i++) { finishbarn[i] = houses[hlvl][i]; } //Copy the house array.
		if (cash != 0) {
			string strcash = dbltostr(cash);
			finishbarn[2] += "$" + strcash;
		}
		if (chickens != 0) finishbarn[3] += to_string(chickens) + " chickens";
		if (cookedchicken != 0) finishbarn[4] += to_string(cookedchicken) + " cooked chickens";
		if (craftmats[0] != 0) finishbarn[5] += to_string(craftmats[0]) + " pieces of wool";

		prarrtostr(finishbarn, houselength);
		cout << buttons(options);
		sleep(100);


		intchoice = getinput(options.size(), 0);
		choice = options.at(intchoice - 1);
		if (choice == "Check Coop") { checkcoop(); stickym = false; } //make sure music is sticky

		else if (choice == "Shear Sheep") { checksheep(); stickym = false; }

		else if (choice == "Cook Chicken") { cookchicken(); stickym = false; }

		else if (choice == "Sell Cooked Chicken") { sellchickens(); stickym = false; }

		else if (choice == "Go To Store") { cutmusic(); store(); stickym = true; } //make sure music is not sticky

		else if (choice == "View Map") { cutmusic(); adventure(); stickym = true; }

		else if (choice == "Craft") { craft(); }

		else if (choice == "Alchemy") { alchemy(); }

	} //end while
} //end method 


int main(int argc, char* argv[]){
	cout << "This is a virus.\n\nJust Kidding!\n\nPlease take a second to resize the cmd window!\nMade by: You know :)\nSound: Disabled" << endl;
	for (int j = 0; j < mazefloors; j++){ //initialize map of maze at beginning of program
		for (int i = 0; i < 49; i++) {
			mazemap[j][i / 7][i % 7] = '?';
		}
	}
	mazemap[0][6][3] = 'e';

	system("pause");
	bool playing = true;
	vector<string> options = { "New Game","Options","Exit" };
	cout << endl;
	while (playing) {
		clear();
		PlaySoundBite(L"murloc.wav");

		prarrtostr(title, 6);
		cout << buttons(options);
		int intput = getinput(options.size(), 0);
		string choice = options.at(intput - 1);
		if (choice == "New Game") game();
		else if (choice == "Options") {
			changeoptions();
		}
		else if (choice == "Exit") playing = false;
	} //end while
}
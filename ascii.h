#pragma once
#include <string>
#include <iostream>

using namespace std;
//Crafting Materials

string mats[2][5] = { {
		" ..... ",
		";     ;",
		";  W  ;",
		";     ;",
		" ''''' " },
	  { "_______",
		"|\\   /|",
		"|  S  |",
		"|/ T \|",
		"\\_____/" } };

string e[5] = {
	"       ",
	"       ",
	"",
	"       ",
	"       " };


//enemies
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

//ascii titles
string title[6] = { //6 elements
	"   ______  __        _          __                       _______                            __                     ",
	" .' ___  |[  |      (_)        [  |  _                  |_   __ \\                          [  |                    ",
	"/ .'   \\_| | |--.   __   .---.  | | / ] .---.  _ .--.     | |__) |   ,--.   _ .--.   .---.  | |--.  .---.  _ .--.  ",
	"| |        | .-. | [  | / /'`\\] | '' < / /__\\\\[ `.-. |    |  __ /   `'_\\ : [ `.-. | / /'`\\] | .-. |/ /__\\\\[ `/'`\\] ",
	"\\ `.___.'\\ | | | |  | | | \\__.  | |`\\ \\| \\__., | | | |   _| |  \\ \\_ // | |, | | | | | \\__.  | | | || \\__., | |     ",
	" `.____ .'[___]|__][___]'.___.'[__|  \\_]'.__.'[___||__] |____| |___|\\'-;__/[___||__]'.___.'[___]|__]'.__.'[___]    "
};

string optionsicon[8] = { //8 elements
	"  ____        _   _                 ",
	" / __ \\      | | (_)                ",
	"| |  | |_ __ | |_ _  ___  _ __  ___ ",
	"| |  | | '_ \\| __| |/ _ \\| '_ \\/ __|",
	"| |__| | |_) | |_| | (_) | | | \\__ \\",
	" \\____/| .__/ \\__|_|\\___/|_| |_|___/",
	"     | |                          ",
	"     |_|                          " };


//locations
string town[8] = { //8 elements
	"                                    +              #####               ",
	"                                   / \\                                 ",
	" _____         ____     __________/ o \\/\\_________      _________      ",
	"|o o o|_______|    |___|               | | # # #  |____|o o o o  | /\\  ",
	"|o o o|  * * *|: ::|. .|Chickens 'R Us |o| # # #  |. . |o o o o  |//\\\\ ",
	"|o o o|* * *  |::  |. .| []  []  []  []|o| # # #  |. . |o o o o  |((|))",
	"|o o o|**  ** |:  :|. .| []  []  []    |o| # # #  |. . |o o o o  |((|))",
	"|_[]__|__[]___|_||_|__<|____________;;_|_|___/\\___|_.|_|____[]___|  |  " };

string cell[39] = { //39 Elements
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

string wizard[22] = { //22 elements
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

string shop[9] = { //9 elements
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

string chef[11] = { //11 elements
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
	"    ~~~~~~~ ===== ~~~~~~~~"};

const int houselength = 14;
string houses[][houselength] = {
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

string chickenicon[] = {
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

string sheepicon[] = {
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

string boatpeng[20] = {
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
	"\"~-,.,-~\"^z~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"" }; //20

string mcdonald[29] = { //29 elements
	"	                                                __,-O<         ,-- ",
	"--.                                  \\.          -='            -'    ",
	"   \\                                __\\\\O-                      ,---  ", //3
	"   --.                                `^                       /      ",
	"      ).          __,-O<    \\              __,-O<            ,--          Howdy Rancher! My name is Old McDonald", //4 added spaces
	" ----'  `.          `\\)   __)\\O-__           )/          ,--(    ,;:.     I'd be willing to sell you some of my goods!",//6
	"         _)          /      `^  _)\\O<        /          (_      .:;:;.",
	"       |         |               `^                           :;';.;:'",
	"       |_        |_        |                                   ';\\||' ", //9
	"______/=\\\\______/=\\\\_______|                                      :|  ",
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
string mapicon[19] = { // 19 elements

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
string trees[12] = {
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

string reaper[21]
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

//maze
string mazeops[][20] = {
	{ " _____________________________________________ ", //6
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
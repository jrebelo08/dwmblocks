//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/                             /*Update Interval*/ /*Update Signal*/
    {"",        "~/.local/bin/kb.sh",   
                                300,                 0},
    {" ",      "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",  
                                5,                 0},
    {"",        "~/.local/bin/battery.sh",   
                                5,                 0},
    {" ",      "date '+%a %b %d  %H:%M'",                               
                                60,                  0},
    {"",        "~/.local/bin/volume.sh",   
                                1,                 0},
};
//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;


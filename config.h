//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",  "/home/gyan/.local/bin/sb-nettraf",  1,  16}, 
  {"",  "/home/gyan/.local/bin/sb-volume", 1,  10},
  {"",  "/home/gyan/.local/bin/sb-clock",  60, 1},
  {"",  "/home/gyan/.local/bin/sb-battery",  60, 1},
  {"",  "/home/gyan/.local/bin/sb-internet", 5,  4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 2;

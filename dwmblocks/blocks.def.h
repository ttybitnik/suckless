//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

  	{"", "vpn-bar",	  		        1,  	  	 0},
	
  	{"", "net-bar",	  		        1,  	  	 0},

	{" ", "ram-bar",			5,  	  	 0},

	{" ", "cpu-bar",			5,   	         0},
	
 	{" ", "volume-bar",                    0,	         5},

	//{"", "battery-bar",		        3600,		 0},
	
       	{" ", "weather-bar",		        3600,		 0},
	
	{" ", "clock-bar",		        60,		 0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

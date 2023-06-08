//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

  	{"", "vpn_bar",	  		        1,  	  	 0},
	
  	{"", "net_bar",	  		        1,  	  	 0},

	{" ", "ram_bar",			5,  	  	 0},

	{" ", "cpu_bar",			5,   	         0},
	
 	{" ", "volume_bar",                    0,	         5},

	//{"", "battery_bar",		        3600,		 0},
	
       	{" ", "weather_bar",		        3600,		 0},
	
	{" ", "clock_bar",		        60,		 0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

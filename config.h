#define CMDLENGTH 128
#define DELIMITER "    "
#define CLICKABLE_BLOCKS

#define STATUSBAR_SCRPTS_DIR	"/home/barti/.local/bin/statusbar/"

const Block blocks[] = {
	//BLOCK("sb-mail",    1800, 17),
	//BLOCK("sb-music",   0,    18),
	//BLOCK("sb-disk",    1800, 19),
	//BLOCK("sb-memory",  10,   20),
	//BLOCK("sb-loadavg", 5,    21),
	//BLOCK("sb-mic",     0,    26),
	//BLOCK("sb-record",  0,    27),
	//BLOCK("sb-volume",  0,    22),
	 BLOCK("/home/barti/.local/bin/statusbar/sb_cpu",		5,		0),
	 BLOCK("/home/barti/.local/bin/statusbar/sb_memory",	5,		0),
	 BLOCK("/home/barti/.local/bin/statusbar/sb_internet",	60,		0),
	 BLOCK("/home/barti/.local/bin/statusbar/sb_battery",	60,		0),
	 BLOCK("/home/barti/.local/bin/statusbar/sb_clock",		60,		0),
};

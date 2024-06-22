/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";
static char font[64] = "BlexMono Nerd Font";

static const unsigned char txtcolor[3][NUMCOLS] = {
        [INIT] = { 255, 255, 255 },
        [INPUT] = { 0, 255, 255 },
        [FAILED] = { 255, 0, 0 },
};

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static int blurRadius=8;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=0;

#define UPDATE_TIME_INTERVAL 5

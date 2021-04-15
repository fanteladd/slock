/* user and group to drop privileges to */
static const char *user  = "davide";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282828",   /* after initialization */
	[INPUT] =  "#928374",   /* during input */
	[FAILED] = "#282828",   /* wrong password */
	[PAM] =    "#a89984",   /* waiting for PAM */
};

/* lock screen opacity */
static const float alpha = 0.5;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* default message */
static const char * message = "Enter password to unlock";

/* text color */
static const char * text_color = "#ebdbb2";

/* text size (must be a valid size) */
static const char * font_name = "sans-serif:size:pixelsize=24:antialias=true:autohint=true";

/* PAM service that's used for authentication */
static const char* pam_service = "login";

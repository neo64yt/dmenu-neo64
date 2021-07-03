/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant = 0;
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static int colorprompt = 0;                /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrains Mono:size=11", 
	"Material Design Icons:size=13",
	"JoyPixels:pixelsize=14"
};
static const char *prompt           = NULL;      /* -p  option; prompt to the left of input field */
/* Color variables */
static const char col_bg[]          = "#272a34";
static const char col_font[]        = "#ffffff";
static const char col_sel[]         = "#12846e";
static const char black[]           = "#000000";
static const char *colors[SchemeLast][2] = {
	/*     fg                       bg       */
	[SchemeNorm]                    = { col_font, col_bg },
	[SchemeSel]                     = { col_font, col_sel },
	[SchemeSelHighlight]            = { col_sel, black },
	[SchemeNormHighlight]           = { col_sel, black },
	[SchemeOut]                     = { black, "#00ffff" },
	[SchemeMid] 			= { col_bg, col_font },
};
/* -l options; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;

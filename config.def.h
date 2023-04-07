/* See LICENSE file for copyright and license details. */

static int barheight			= 5;		/* bar height in pixels */
static int topbar				= 1;		/* -b option */
static int borderpx				= 5;		/* -bw option */
static unsigned int lines		= 5;		/* -l option  */
static const char *prompt		= NULL;		/* -p option */
static const unsigned int alpha = 0xf0;		/* alpha value */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};
/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

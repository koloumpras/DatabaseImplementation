#include "retcodes.h"
#include <cstdio>

void DisplayReturnCode(t_rc rc)
{
	char *msg;

	switch(rc)
	{
	case OK: msg = "OK"; break;
	case STORM_FILENOTFOUND: msg = "Specified file is not found."; break;
	case STORM_FILEEXISTS: msg = "File already exists."; break;
	case STORM_FILEDOESNOTEXIST: msg="File does not exist."; break;
	case STORM_FILEALREADYOPENED: msg = "File already opened."; break;
	case STORM_EOF: msg = "End Of File (EOF) has been reached."; break;
	case STORM_FILEFULL: msg = "File has reached its maximum capacity."; break;
	case STORM_FILEOPENERROR: msg = "File open error."; break;
	case STORM_FILECLOSEERROR: msg = "File close error."; break;
	case STORM_FILENOTOPENED: msg = "File is not opened."; break;
	case STORM_OPENEDFILELIMITREACHED: msg = "Limit of opened files reached."; break;
	case STORM_INVALIDFILEHANDLE: msg = "Invalid File Handle."; break;
	case STORM_INVALIDPAGE: msg = "Page is not valid."; break;
	case STORM_CANNOTCREATEFILE: msg = "Cannot create file."; break;
	case STORM_CANNOTDESTROYFILE: msg = "Cannot destroy file."; break;
	case STORM_PAGENOTINBUFFER: msg = "Page is not in buffer."; break;
	case STORM_PAGEISPINNED: msg = "Page is pinned."; break;
	case STORM_ALLPAGESPINNED: msg = "All pages are pinned."; break;
	case STORM_IOERROR: msg = "Input/Output error."; break;
	case STORM_MEMALLOCERROR: msg = "Memory allocation error."; break;
	
	default: msg = "Unknown return code."; break;

	}

	fprintf (stderr, "ERROR: %s\n", msg);
}

void DisplayMessage(char *msg)
{
	fprintf (stderr, "ERROR: %s\n", msg); 
}

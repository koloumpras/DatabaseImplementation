#ifndef _retcodes_h
#define _retcodes_h

typedef enum
{
	OK=0,

	// return codes for STORAGE MODULE (STORM)
	STORM_FILENOTFOUND,
	STORM_FILELIMITREACHED,
	STORM_FILEEXISTS,
	STORM_FILEDOESNOTEXIST,
	STORM_FILEALREADYOPENED,
	STORM_FILEALREADYCLOSED,
	STORM_EOF,
	STORM_FILEFULL,
	STORM_FILEOPENERROR,
	STORM_FILECLOSEERROR,
	STORM_FILENOTOPENED,
	STORM_OPENEDFILELIMITREACHED,
	STORM_INVALIDPAGE,
	STORM_INVALIDFILEHANDLE,
	STORM_CANNOTCREATEFILE,
	STORM_CANNOTDESTROYFILE,
	STORM_PAGENOTINBUFFER,
	STORM_PAGEISPINNED,
	STORM_ALLPAGESPINNED,
	STORM_IOERROR,
	STORM_MEMALLOCERROR


	// return codes for RECORD MODULE (REM)





	// return codes for INDEX MODULE (INXM)





	// return codes for SYSTEM MODULE (SYSM)






	// return codes for SirenSQL MODULE (SSQLM)





	// return code for USER INTERFACE MODULE (UIM)






} t_rc;

void DisplayReturnCode(t_rc rc);
void DisplayMessage(char *msg);

#endif

#ifndef _REM_RecordFileManager_h
#define _REM_RecordFileManager_h

#include "STORM.h"
#include "REM_RecordFileHandle.h"
#include "REM_RecordID.h"
#include "REM_RecordHandle.h"

class REM_RecordFileManager
{
private:
STORM_StorageManager *a_storage_manager;
STORM_FileHandle *a_file_handle;
STORM_PageHandle *a_page_handle;
REM_RecordFileHandle *a_record_file_handle;
int number_of_open_files ;

struct file_manager_struct
{
	int pinned_page_number; //=1, initialized in the constructor, since one is only to be done
	int record_type[5];
	int slots[5];
	const int *records;		//pointer o opoios tha pernei to antikeimeno to opoio tha dimiourgeite to opoio tha einai kai monadiko
													//etsi tha kanoume parsw ta id ton files gia na mporoume na ta anoigoume kai na ta peirazoume
}file_manager;
	//isws na kanoume mia private na mas girizei getFisrt-> getNext

public:
	REM_RecordFileManager (STORM_StorageManager *sm);
	~REM_RecordFileManager ();
	t_rc CreateRecordFile (const char *fname, int rs);
	t_rc DestroyRecordFile (const char *fname);
	t_rc OpenRecordFile (const char *fname, REM_RecordFileHandle &rfh);
	t_rc CloseRecordFile (REM_RecordFileHandle &rfh);


};
#endif
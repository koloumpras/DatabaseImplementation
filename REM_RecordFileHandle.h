#ifndef _REM_RecordFileHandle_h
#define _REM_RecordFileHandle_h

#include "REM_RecordID.h"
#include "REM_RecordHandle.h"
//#include "REM_RecordFileManager.h"

class REM_RecordFileHandle
{
private:
	int recordID;
	char *pData;
	REM_RecordHandle *rh;
public:
	REM_RecordFileHandle();
	~REM_RecordFileHandle();
	t_rc ReadRecord (const REM_RecordID &rid, REM_RecordHandle &rh) const;
	t_rc InsertRecord (const char *pData, REM_RecordID &rid);
	t_rc DeleteRecord (const REM_RecordID &rid);
	t_rc UpdateRecord (const REM_RecordHandle &rh);
	t_rc FlushPages () const;
};

#endif
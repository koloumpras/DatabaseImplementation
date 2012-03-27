#ifndef _REM_RecordHandle_h
#define _REM_RecordHandle_h

#include "retcodes.h"
#include "REM_RecordID.h"
#include"STORM_StorageManager.h"

class REM_RecordHandle
{
public:
	REM_RecordHandle();
	~REM_RecordHandle();
	t_rc GetData(char *&pData) const;
	t_rc GetRecordID(REM_RecordID &rid) const;
};

#endif
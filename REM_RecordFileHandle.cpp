#include"REM_RecordFileHandle.h"

	REM_RecordFileHandle::REM_RecordFileHandle()
	{
		
		rh = new REM_RecordHandle();
	}
	REM_RecordFileHandle::~REM_RecordFileHandle()
	{

	}
	t_rc ReadRecord (REM_RecordID &rid, REM_RecordHandle &rh)
	{ 
		t_rc rc;
		//rh.GetRecordID(rid);
		return rc = (OK);
	}
	t_rc InsertRecord (const char *pData, REM_RecordID &rid)
	{
		t_rc rc;
		char * buffer;
		rh[].GetRecordID(rid);
		(*rh).GetData(buffer);
		strcpy(buffer, pData);
		return rc ;

	}
	t_rc DeleteRecord (const REM_RecordID &rid)
	{
		t_rc rc;
		return rc;

	}
	t_rc UpdateRecord (const REM_RecordHandle &rh)
	{
		t_rc rc;
		return rc = (OK);
	}
	const t_rc FlushPages() 
	{
		t_rc rc;
		return rc = (OK);
	}
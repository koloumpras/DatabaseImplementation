#ifndef _REM_RecordFileScan_h
#define _REM_RecordFileScan_h

#include "REM_RecordFileHandle.h"
#include "REM_RecordHandle.h"

class REM_RecordFileScan
{
private:
	//int 
public:
	REM_RecordFileScan();
	~REM_RecordFileScan();
	t_rc OpenRecordScan (const REM_RecordFileHandle &rfh,
	t_attrType attrType,
	int attrLength,
	int attrOffset,
	t_compOp compOp,
	void *value);
	t_rc GetNextRecord(REM_RecordHandle &rh);
	t_rc CloseRecordScan();
};

typedef enum
{
	EQ_OP /* equal */,
	LT_OP /* less than */,
	GT_OP /* greater than */,
	NE_OP /* not equal */,
	LE_OP /* less than or equal */,
	GE_OP /* greater than or equal */,
	NO_OP /* No comparison. Should be used when file scan value is NULL. */
} t_compOp;
typedef enum
{
	TYPE_INT, /* for integers */
	TYPE_STRING /* character string up to 255 chars */
} t_attrType;

#endif
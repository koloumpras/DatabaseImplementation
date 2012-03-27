#include"REM_RecordID.h"




REM_RecordID::REM_RecordID()
{

}
REM_RecordID::~REM_RecordID()
{

}

REM_RecordID::REM_RecordID(int pageID,int slot)
{
	
	this->page=pageID;
	this->slot=slot;
}

t_rc REM_RecordID::GetPageID(int &pageID) const
{
	pageID = this-> page;
	return OK;
}
t_rc REM_RecordID::GetSlot(int &slot) const
{
	slot = this-> slot;
	return OK;
}
t_rc REM_RecordID:: SetPageID(int pageID)
{
	this->page = pageID;
	return OK;
}
t_rc REM_RecordID:: SetSlot(int slot)
{
	this->slot = slot;
	return OK;
}
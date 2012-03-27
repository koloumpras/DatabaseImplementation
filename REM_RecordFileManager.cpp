#include "REM_RecordFileManager.h"


REM_RecordFileManager::REM_RecordFileManager(STORM_StorageManager *sm)
{
	number_of_open_files = 0;
	//a_storage_manager = new STORM_StorageManager();
	a_storage_manager = sm;
}
REM_RecordFileManager::~REM_RecordFileManager()
{
	
}
t_rc REM_RecordFileManager::CreateRecordFile(const char *fname, int rs) 
{
		return a_storage_manager->CreateFile(fname);
		

//	if ( page_id == 1)
	//{
		//initializing the bit map on the first page to store empty and non empty slots
		//int firty[sizeof(slots)] = {0,0,0,0,0};
//		*yos.slots = *yo;
//		char *data;
		//getting the pointer to write
	//	a_page_handle->GetDataPtr(&data);
		//writng the data
	//	memcpy(data, &file_manager.slots, 5*sizeof(int));
		//save the type of data
	//	*yos.record_type = rs;
		//since we have succeeded, write it down we shall
	//	number_of_open_files++;
		//mark the page as dirty
	//	rc = a_file_handle->MarkPageDirty(page_id);
		//unpin the page
	//	rc = a_file_handle->UnpinPage(page_id);
		//close the file
	//	rc = a_storage_manager->CloseFile(*a_file_handle);
	//
//	else 
//		puts("Thn poutsisame");


}
t_rc REM_RecordFileManager::DestroyRecordFile(const char *fname)
{
	t_rc rc;
	rc = a_storage_manager->DestroyFile(fname);
	if(rc != OK){DisplayReturnCode(rc); exit(-1);}

	return rc;
}
t_rc REM_RecordFileManager::OpenRecordFile(const char *fname, REM_RecordFileHandle &rfh)
{
	t_rc rc;
	//Opening the file 
	if((rc = a_storage_manager->OpenFile(fname, *a_file_handle)))
	{
		if(rc!=OK){DisplayReturnCode(rc); exit(-1);}
		new REM_RecordFileHandle(rfh);
	}
	return rc;
}
t_rc REM_RecordFileManager::CloseRecordFile(REM_RecordFileHandle &rfh)
{
	t_rc rc;
	//Flashing Pages before closing 
	rc = rfh.FlushPages();
	if(rc!=OK){DisplayReturnCode(rc); exit(-1);}
	//Closing the open file
	rc = a_storage_manager->CloseFile(*a_file_handle);
	if(rc!=OK){DisplayReturnCode(rc); exit(-1);}
	return rc= (OK);
}



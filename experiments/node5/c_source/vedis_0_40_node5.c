#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int remainder_check(char* parameter_1,int checksum_div,int length);


int remainder_check(char* parameter_1,int checksum_div,int length)
{
   if(strlen(parameter_1)!=length)  return 0;
   int sum = 0;
   for(int i=0;i<length;i++)  sum = sum + parameter_1[i];
   if((sum % checksum_div==0))  return 1;
   else return 0;
}

int v_vedisRemoveCommand( float parameter_1,int parameter_2);
int v_vedis_delete_command( long parameter_1,unsigned int parameter_2);
int v_vedisDeleteBuiltinCommands( short parameter_1);
int v_vedis_close( int parameter_1);
void v_DataConsumerCallback( double parameter_1,long parameter_2);
int v_vedisKvFetchCallback( char parameter_1,double parameter_2,int parameter_3,char parameter_4,float parameter_5);
int v_vedis_kv_fetch_callback( double parameter_1,short parameter_2,int parameter_3,unsigned int parameter_4,short parameter_5);
int v_vedis_rollback( short parameter_1);
int v_vedis_commit( short parameter_1);
int v_vedis_kv_store_fmt( double parameter_1,double parameter_2,int parameter_3,double parameter_4,float parameter_5);
void v_vedisKvStore( long parameter_1,short parameter_2,int parameter_3,long parameter_4,unsigned int parameter_5);
int v_vedis_kv_store( char parameter_1,long parameter_2,int parameter_3,float parameter_4,unsigned int parameter_5);
long v_vedisPagerRandomString( float parameter_1,char parameter_2,char parameter_3);
int v_vedis_util_random_string( short parameter_1,char parameter_2,double parameter_3);
short v_SySetRelease( long parameter_1);
long v_vedisPagerClose( int parameter_1);
double v_pager_reset_state( char parameter_1,int parameter_2);
float v_vedisPagerRollback( int parameter_1,int parameter_2);
long v_vedisBitvecDestroy( float parameter_1);
void v_pager_commit_phase2( char parameter_1);
void v_pager_write_dirty_pages( int parameter_1,unsigned int parameter_2);
unsigned int v_page_merge_dirty( short parameter_1,char parameter_2);
double v_pager_get_dirty_pages( unsigned int parameter_1);
long v_pager_commit_phase1( long parameter_1);
float v_vedisPagerCommit( double parameter_1);
float v_vedisEngineRelease( float parameter_1);
char v_vedisCoreShutdown();
int v_vedis_lib_shutdown();
unsigned int v_vedisObjectValueDestroy( double parameter_1,double parameter_2);
float v_vedisHashmapRef( float parameter_1);
short v_vedisMemObjStore( unsigned int parameter_1,float parameter_2);
char v_SyStrToReal( short parameter_1,long parameter_2,int parameter_4);
double v_MemObjRealValue( char parameter_1);
double v_vedisMemObjToReal();
short v_vedisMemObjRelease();
int v_vedisHashmapRelease( int parameter_1);
void v_vedisHashmapUnref();
void v_vedisHashmapCount( short parameter_1);
long v_SyStrToInt64( char parameter_1,float parameter_2,float parameter_4);
long v_SyOctalStrToInt64( unsigned int parameter_1,char parameter_2,double parameter_4);
char v_SyBinaryStrToInt64( long parameter_1,int parameter_2,float parameter_4);
float v_SyHexToint( double parameter_1);
char v_SyHexStrToInt64( short parameter_1,int parameter_2,unsigned int parameter_4);
int v_vedisTokenValueToInt64( int parameter_1);
long v_MemObjStringToInt( float parameter_1);
void v_MemObjRealToInt( long parameter_1);
double v_MemObjIntValue( long parameter_1);
short v_vedisMemObjToInteger( char parameter_1);
void v_vedisMemObjInitFromString( int parameter_1,long parameter_2,int parameter_3);
void v_vedisNewObjectValue( double parameter_1,double parameter_2);
long v_SyBlobNullAppend( unsigned int parameter_1);
double v_vedisPagerSetCachesize( float parameter_1,int parameter_2);
short v_vedisConfigure( float parameter_1,int parameter_2,char parameter_3);
int v_vedis_config( float parameter_1,int parameter_2,short parameter_3);
char v_Fatal( short parameter_1,float parameter_2);
char v_SyBlobAppendBig32( float parameter_1,float parameter_2);
float v_SyBlobAppendBig16( float parameter_1,short parameter_2);
long v_SyBlobFormat( double parameter_1,float parameter_2,short parameter_3);
long v_vedisPagerGetKvEngine( unsigned int parameter_1);
void v_vedisTableSerialize( long parameter_1);
int v_vedisPagerisMemStore( short parameter_1);
unsigned int v_vedisOnCommit();
float v_vedisPagerSetCommitCallback( float parameter_1,double parameter_2);
int v_SySetReset( unsigned int parameter_1);
double v_SyBinHash( int parameter_1,int parameter_2);
int v_vedisFetchCommand( int parameter_1,char parameter_2);
void v_vedisInstallCommand( float parameter_1,unsigned int parameter_2,long parameter_3);
int v_vedis_register_command( char parameter_1,int parameter_2,char parameter_3,int parameter_4,unsigned int parameter_5);
long v_vedisRegisterBuiltinCommands( long parameter_1);
long v_vedisMemObjInit( unsigned int parameter_1,double parameter_2);
float v_vedisInitCursor( unsigned int parameter_1,int parameter_2);
long v_vedisKvIoErr( double parameter_1,char parameter_2);
char v_vedisKvIoPageReload( short parameter_1,unsigned int parameter_2);
void v_vedisKvIoPageUnpin( char parameter_1,short parameter_2);
unsigned int v_vedisKvIoTempPage( long parameter_1);
double v_vedisKvIoReadOnly( double parameter_1);
unsigned int v_vedisKvIoPageSize( char parameter_1);
long v_page_unref( float parameter_1);
int v_vedisKvIoPageUnRef( int parameter_1);
long v_vedisKvIopage_ref( short parameter_1);
char v_vedisKvIoPageDontMakeHot();
long v_vedisKvIoPageDontJournal( long parameter_1);
float v_vedisPagerDontWrite();
long v_vedisKvIoPageDontWrite( int parameter_1);
double v_vedisBitvecSet( unsigned int parameter_1,unsigned int parameter_2);
void v_WriteInt64( char parameter_1,long parameter_2,double parameter_3);
float v_vedisBitvecTest( short parameter_1,long parameter_2);
int v_page_write( long parameter_1,short parameter_2);
char v_pager_release_page( short parameter_1,double parameter_2);
double v_pager_unlink_page( char parameter_1,char parameter_2);
double v_pager_write_hot_dirty_pages( float parameter_1,double parameter_2);
unsigned int v_page_merge_hot( long parameter_1,unsigned int parameter_2);
int v_pager_get_hot_pages();
short v_WriteInt32( double parameter_1,int parameter_2,int parameter_3);
long v_vedisFinalizeJournal( long parameter_1,int parameter_2,int parameter_3);
long v_pager_dirty_commit( long parameter_1);
double v_pager_write_journal_header( float parameter_1,int parameter_2);
void v_vedisOpenJournal( double parameter_1);
void v_SyTimeFormatToDos( float parameter_1,short parameter_2);
void v_pager_write_db_header( char parameter_1);
unsigned int v_pager_page_to_dirty_list( char parameter_1,char parameter_2);
int v_pager_create_header( int parameter_1);
double v_vedisBitvecCreate( long parameter_1,short parameter_2);
double v_vedisPagerBegin( float parameter_1,int uni_para);
int v_vedisPageWrite(int uni_para);
float v_vedisKvIopageWrite( float parameter_1,int uni_para);
long v_vedisKvIoNewPage( double parameter_1,double parameter_2);
int v_vedisKvIoPageLookup( char parameter_1,float parameter_2,int parameter_3);
char v_page_ref( char parameter_1);
double v_pager_link_page( int parameter_1,long parameter_2);
long v_pager_get_page_contents( unsigned int parameter_1,long parameter_2,int parameter_3);
char v_pager_alloc_page( long parameter_1,long parameter_2);
int v_vedisGetPageSize();
void v_vedisOsSectorSize( double parameter_1);
double v_GetSectorSize( float parameter_1);
char v_SyDosTimeFormat( float parameter_1,float parameter_2);
double v_pager_extract_header( float parameter_1,unsigned int parameter_2,float parameter_3);
void v_pager_read_db_header( double parameter_1);
int v_vedisOsCloseFree( long parameter_1,double parameter_2);
float v_pager_fetch_page( char parameter_1,unsigned int parameter_2);
void v_pager_fill_page( int parameter_1,int parameter_2);
short v_vedisOsWrite( int parameter_1,long parameter_2,long parameter_3,char parameter_4);
long v_pager_cksum( unsigned int parameter_1,short parameter_2);
unsigned int v_pager_play_back_one_page( char parameter_1,long parameter_2,double parameter_3);
unsigned int v_vedisOsTruncate( unsigned int parameter_1,char parameter_2);
char v_ReadInt64( long parameter_1,unsigned int parameter_2,short parameter_3);
double v_ReadInt32( short parameter_1,float parameter_2,int parameter_3);
int v_vedisOsRead( int parameter_1,unsigned int parameter_3,int parameter_4);
unsigned int v_pager_read_journal_header( char parameter_1,int parameter_2,short parameter_3);
float v_pager_playback( int parameter_1);
unsigned int v_vedisOsSync( int parameter_1,int parameter_2);
char v_vedisOsUnlock( float parameter_1,int parameter_2);
float v_pager_unlock_db( int parameter_1,int parameter_2);
int v_vedisOsDelete( int parameter_1,unsigned int parameter_2,int parameter_3);
long v_vedisOsFileSize( int parameter_1,int parameter_2);
long v_vedisOsCheckReservedLock( long parameter_1,int parameter_2);
double v_vedisOsAccess( float parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
char v_pager_has_hot_journal( unsigned int parameter_1,int parameter_2,int uni_para);
double v_pager_journal_rollback( long parameter_1,int parameter_2,int uni_para);
unsigned int v_vedisOsLock( float parameter_1,int parameter_2);
double v_pager_lock_db( long parameter_1,int parameter_2,int uni_para);
int v_pager_wait_on_lock( short parameter_1,int parameter_2);
short v_SyBlobFormatAp( long parameter_1,long parameter_2,int parameter_3);
float v_vedisGenErrorFormat( char parameter_1,long parameter_2,short parameter_3);
short v_vedisOsOpen( unsigned int parameter_1,unsigned int parameter_2,float parameter_3,unsigned int parameter_4,long parameter_5);
char v_pager_shared_lock( int parameter_1,int uni_para);
int v_vedisPagerAcquire( float parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5);
short v_vedisKvIoPageGet( short parameter_1,float parameter_2,short parameter_3);
double v_pager_kv_io_init( float parameter_1,int parameter_2,double parameter_3,int uni_para);
double v_vedisGenOutofMem( float parameter_1);
float v_vedisReleaseCursor( short parameter_1,long parameter_2);
char v_pager_release_kv_engine( int parameter_1);
long v_vedisPagerRegisterKvEngine( long parameter_1,short parameter_2,int uni_para);
float v_randomByte();
float v_SyRandomness( double parameter_1,float parameter_3);
short v_SyOSUtilRandomSeed(short parameter_2);
short v_SyRandomnessInit( int parameter_1,float parameter_2);
float v_vedisGenError( unsigned int parameter_1,float parameter_2,int uni_para);
char v_vedisFindKVStore( char parameter_1,unsigned int parameter_2);
unsigned int v_SyStrnicmp( float parameter_1,double parameter_2,unsigned int parameter_3);
void v_vedisInMemory( unsigned int parameter_1);
int v_vedisPagerOpen( double parameter_1,unsigned int parameter_2,char parameter_3,double parameter_4,int uni_para);
void v_vedisSanityzeFlag( double parameter_1);
float v_vedisInitDatabase( int parameter_1,long parameter_2,short parameter_3,long parameter_4,int uni_para);
unsigned int v_lhCursorReset( short parameter_1);
float v_lhCursorData( int parameter_1,long parameter_2,long parameter_3);
int v_lhCursorDataLength( int parameter_1,short parameter_2);
short v_lhCursorKey( double parameter_1,float parameter_2,int parameter_3);
float v_lhCursorKeyLength( short parameter_1,int parameter_2);
unsigned int v_lhRecordRemove( char parameter_1);
short v_lhCursorDelete( float parameter_1);
char v_lhCursorPrev( long parameter_1);
long v_lhCursorNext( float parameter_1);
char v_lhCursorValid( short parameter_1);
short v_lhCursorPrevPage( double parameter_1);
unsigned int v_lhCursorLast();
float v_lhCursorNextPage();
void v_lhCursorFirst( double parameter_1);
unsigned int v_lhRecordLookup( unsigned int parameter_1,char parameter_2,long parameter_3,float parameter_4);
float v_lhCursorSeek( int parameter_1,short parameter_2,int parameter_3,int parameter_4);
char v_lhInitCursor( char parameter_1);
void v_lhash_kv_append( char parameter_1,short parameter_2,int parameter_3,short parameter_4,int parameter_5);
double v_lhRestorePage( float parameter_1,unsigned int parameter_2);
void v_lhRecordOverwrite( long parameter_1,char parameter_2,float parameter_3);
char v_lhMoveLocalCell( double parameter_1,float parameter_2,long parameter_3,long parameter_4);
char v_lhRecordAppend( char parameter_1,short parameter_2,float parameter_3);
char v_lhFindSibeling( char parameter_1);
long v_lhUnlinkCell( float parameter_1);
char v_lhConsumeCellData( char parameter_1,char parameter_2,double parameter_3);
long v_SyBlobReset( unsigned int parameter_1);
short v_SyBlobDup( long parameter_1,long parameter_2);
short v_lhTransferCell( long parameter_1,double parameter_2);
void v_lhPageSplit( int parameter_1,unsigned int parameter_2,short parameter_3,long parameter_4);
short v_lhSplit( long parameter_1,int parameter_2);
float v_lhRecordInstall( unsigned int parameter_1,long parameter_2,unsigned int parameter_3,unsigned int parameter_4,float parameter_5,long parameter_6);
int v_lhKeyCmp( unsigned int parameter_1,short parameter_2);
double v_lhFindCell( char parameter_1,double parameter_2,long parameter_3,double parameter_4);
double v_vedisDataConsumer( long parameter_1,char parameter_2);
long v_lhConsumeCellkey( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_6);
short v_lhParseOneCell( double parameter_1,double parameter_2,double parameter_3,unsigned int parameter_4);
short v_lhPageFreeSpace( long parameter_1);
short v_lhLoadCells( unsigned int parameter_1);
int v_lhParsePageHeader( double parameter_1);
void v_lhLoadPage( long parameter_1,long parameter_2,long parameter_3,long parameter_4,int parameter_5);
int v_lhMapWriteRecord( int parameter_1,float parameter_2,short parameter_3);
float v_lhCellWriteHeader( short parameter_1);
short v_lhCellWriteLocalPayload( int parameter_1,int parameter_2,long parameter_3,short parameter_4,char parameter_5);
long v_lhCellDiscard();
double v_lhCellWriteOvflPayload( long parameter_1,unsigned int parameter_2,double parameter_3,short parameter_4);
int v_lhInstallCell( char parameter_1);
float v_SyBlobInit( float parameter_1,long parameter_2);
unsigned int v_lhNewCell( unsigned int parameter_1,int parameter_2);
char v_lhRestoreSpace( double parameter_1,unsigned int parameter_2,char parameter_3);
float v_lhFindSlavePage( double parameter_1,char parameter_2,int parameter_3,float parameter_4);
long v_lhSlaveStore( char parameter_1,short parameter_2,unsigned int parameter_3,long parameter_4,long parameter_5,char parameter_6);
float v_lhPageDefragment();
void v_SyBigEndianUnpack16( long parameter_1,short parameter_2);
long v_lhAllocateSpace( char parameter_1,int parameter_2,short parameter_3);
int v_lhStoreCell( long parameter_1,float parameter_2,int parameter_3,int parameter_4,float parameter_5,char parameter_6,int parameter_7);
double v_SyBigEndianPack16( char parameter_1,unsigned int parameter_2);
char v_lhSetEmptyPage( unsigned int parameter_1);
short v_lhNewPage( long parameter_1,short parameter_2,long parameter_3);
double v_lhAcquirePage( double parameter_1,char parameter_2);
short v_lhMapFindBucket( unsigned int parameter_1,long parameter_2);
float v_lh_record_insert( float parameter_1,short parameter_2,double parameter_3,char parameter_4,float parameter_5,int parameter_6);
long v_lhash_kv_replace( int parameter_1,int parameter_2,int parameter_3,char parameter_4,short parameter_5);
short v_MemPoolBucketAlloc( short parameter_1,short parameter_2);
int v_MemBackendPoolAlloc( long parameter_1,int parameter_2);
int v_SyMemBackendPoolAlloc( float parameter_1,long parameter_2);
short v_lhMapInstallBucket( short parameter_1,double parameter_2,short parameter_3);
long v_lhMapLoadPage( float parameter_1,double parameter_2,double parameter_3);
unsigned int v_SyBigEndianUnpack64( float parameter_1,int parameter_2);
char v_SyBigEndianUnpack32( float parameter_1,float parameter_2);
double v_lhash_read_header( char parameter_1,long parameter_2);
long v_SyBigEndianPack64( unsigned int parameter_1,float parameter_2);
void v_SyBigEndianPack32( int parameter_1,double parameter_2);
unsigned int v_lhash_write_header( short parameter_1,short parameter_2);
int v_lhash_kv_open( float parameter_1,int parameter_2);
int v_lhash_kv_config( char parameter_1,int parameter_2,float parameter_3);
short v_lhash_kv_release( float parameter_1);
long v_MemBackendPoolFree( int parameter_1);
short v_SyMemBackendPoolFree( short parameter_1);
float v_SyBlobRelease( short parameter_1);
unsigned int v_lhash_page_release();
void v_lhash_bin_hash( int parameter_1,char parameter_2);
double v_lhash_kv_init( short parameter_1,int parameter_2);
long v_vedisExportDiskKvStorage();
short v_MemHashCursorReset( short parameter_1);
void v_MemHashCursorData( int parameter_1,long parameter_2,long parameter_3);
void v_MemHashCursorDataLength( long parameter_1,char parameter_2);
float v_MemHashCursorKey( unsigned int parameter_1,char parameter_2,long parameter_3);
long v_MemHashCursorKeyLength( int parameter_1,int parameter_2);
int v_MemHashUnlinkRecord( long parameter_1,int parameter_2);
unsigned int v_MemHashCursorDelete( int parameter_1);
short v_MemHashCursorPrev( char parameter_1);
float v_MemHashCursorNext( char parameter_1);
long v_MemHashCursorValid( double parameter_1);
unsigned int v_MemHashCursorLast( int parameter_1);
double v_MemHashCursorFirst( unsigned int parameter_1);
int v_MemHashCursorSeek( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
short v_MemHashInitCursor( long parameter_1);
double v_MemHashAppend( short parameter_1,float parameter_2,int parameter_3,float parameter_4,char parameter_5);
int v_MemHashGrowTable( int parameter_1);
unsigned int v_MemHashLinkRecord( long parameter_1,char parameter_2);
short v_MemHashNewRecord( float parameter_1,char parameter_2,int parameter_3,float parameter_4,char parameter_5,int parameter_6);
int v_MemHashGetEntry( int parameter_1,int parameter_2,int parameter_3);
char v_MemHashReplace( long parameter_1,double parameter_2,int parameter_3,long parameter_4,char parameter_5);
void v_MemHashConfigure( double parameter_1,int parameter_2,short parameter_3);
short v_MemBackendRelease( double parameter_1);
float v_SyMemBackendRelease();
void v_MemHashRelease();
void v_MemHashFunc( int parameter_1,char parameter_2);
long v_SyMemBackendInitFromParent( char parameter_1,short parameter_2);
double v_MemHashInit( unsigned int parameter_1,int parameter_2);
long v_vedisExportMemKvStorage();
long v_SySetInit( int parameter_1,long parameter_2,short parameter_3);
double v_UnixUnmap(long parameter_2);
long v_UnixMmap( char parameter_1,float parameter_3);
void v_unixCurrentTime( unsigned int parameter_1,char parameter_2);
void v_unixSleep( double parameter_1,int parameter_2);
unsigned int v_SyMemBackendDup( unsigned int parameter_1,int parameter_2,short parameter_3,int uni_para);
void v_BlobPrepareGrow( float parameter_1,long parameter_2,int uni_para);
short v_SyBlobAppend( float parameter_1,double parameter_2,float parameter_3,int uni_para);
unsigned int v_FormatConsumer( short parameter_1,unsigned int parameter_2);
void v_getdigit( int parameter_1,int parameter_2);
double v_InternFormat( char parameter_1,int parameter_3,int parameter_4);
long v_FormatMount( int parameter_1,int parameter_3,unsigned int parameter_5,int parameter_6,char parameter_7);
float v_SyBlobInitFromBuf( unsigned int parameter_1,float parameter_3);
double v_SyBufferFormat( char parameter_1,int parameter_2,float parameter_3,double parameter_4);
double v_unixFullPathname( int parameter_1,double parameter_2,int parameter_3,char parameter_4);
long v_unixAccess( short parameter_1,float parameter_2,int parameter_3,int parameter_4);
double v_unixDelete( char parameter_1,char parameter_2,int parameter_3);
long v_MemBackendFree( int parameter_1);
void v_SyMemBackendFree( float parameter_1);
short v_vedis_free();
float v_SyMemcpy( char parameter_1,int parameter_3);
void v_SyMemcmp( char parameter_1,float parameter_2,short parameter_3);
int v_findInodeInfo( float parameter_1,int parameter_2);
unsigned int v_fillInUnixFile( int parameter_1,int parameter_2,int parameter_3,double parameter_4,double parameter_5,int parameter_6,int parameter_7);
void v_SyStrlen( unsigned int parameter_1);
void v_Systrcpy( char parameter_1,double parameter_2,char parameter_3,int parameter_4);
double v_openDirectory( short parameter_1,int parameter_2);
long v_findCreateFileMode( unsigned int parameter_1,int parameter_2,float parameter_3);
int v_SyMemBackendAlloc( int parameter_1,int parameter_2,int uni_para);
short v_vedisExportMemBackend();
void v_vedis_malloc( int parameter_1);
void v_unixLeaveMutex();
unsigned int v_unixEnterMutex();
double v_findReusableFd( float parameter_1,int parameter_2);
double v_unixOpen( float parameter_1,int parameter_2,short parameter_3,long parameter_4);
unsigned int v_vedisExportBuiltinVfs();
char v_SyMemBackendInitFromOthers( float parameter_1,long parameter_2,unsigned int parameter_3);
void v_SyZero(int parameter_2);
char v_SyMemBackendInit( double parameter_1,double parameter_2);
unsigned int v_MemBackendAlloc( short parameter_1,char parameter_2,int uni_para);
long v_MemBackendRealloc( float parameter_1,float parameter_3);
unsigned int v_SyMemBackendRealloc( char parameter_1,char parameter_3);
double v_SySetPut( double parameter_1,long parameter_2);
unsigned int v_vedisCoreConfigure( float parameter_1,unsigned int parameter_2);
int v_vedis_lib_config( int parameter_1,char parameter_2);
double v_vedisCoreInitialize();
int v_vedis_open( unsigned int parameter_1,short parameter_2,int uni_para);
int v_vedisRemoveCommand( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	v_SyMemBackendFree(float_1);

	float_4 = float_2 + float_3;
	short_1 = short_2;
	double_2 = double_1 * double_1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
		double double_3 = 1;
		v_SyStrlen(unsigned_int_1);

		int_4 = v_vedisFetchCommand(int_2,char_1);

		double_3 = double_2 + double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		int int_6 = 1;
		unsigned int unsigned_int_4 = 1;
		int_3 = int_1 + int_5;
		int_6 = int_1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	}
	long_2 = long_1 * long_2;
	short_2 = short_3;
	double_4 = double_1 + double_4;
	return int_5;
}
int v_vedis_delete_command( long parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = v_vedisRemoveCommand(float_1,int_1);

	int_2 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_2 + float_1;
	}
	if(1)
	{
	}
	int_3 = int_2 + int_2;
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	return int_3;
}
int v_vedisDeleteBuiltinCommands( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = v_vedis_delete_command(long_1,unsigned_int_1);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	return int_2;
}
int v_vedis_close( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		int int_4 = 1;
		float_1 = v_vedisEngineRelease(float_2);

		int_4 = int_2 * int_3;
	}
	if(1)
	{
	}
	int_3 = v_vedisDeleteBuiltinCommands(short_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	char_2 = char_1 + char_2;
	short_1 = v_SyMemBackendPoolFree(short_2);

	char_1 = char_3;
	if(1)
	{
		int_1 = int_1;
	}
	unsigned_int_2 = unsigned_int_3;
	return int_5;
}
void v_DataConsumerCallback( double parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	double_1 = double_1 + double_2;
	if(1)
	{
	}
}
int v_vedisKvFetchCallback( char parameter_1,double parameter_2,int parameter_3,char parameter_4,float parameter_5)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float_1 = v_vedisGenError(unsigned_int_1,float_2,-1 );

	int_1 = int_1 + int_1;
	v_SyStrlen(unsigned_int_1);

	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_3 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	char_2 = char_3 * char_3;
	int_1 = int_2 + int_1;
	if(1)
	{
		char char_4 = 1;
		char_4 = char_4 * char_2;
	}
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 * long_1;
		int_3 = int_1 + int_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		long_2 = v_vedisPagerGetKvEngine(unsigned_int_3);

		int_3 = int_3;
	}
	return int_1;
}
int v_vedis_kv_fetch_callback( double parameter_1,short parameter_2,int parameter_3,unsigned int parameter_4,short parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2;
	}
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 + long_2;
	}
	return int_1;
	int_1 = v_vedisKvFetchCallback(char_1,double_2,int_3,char_1,float_1);

}
int v_vedis_rollback( short parameter_1)
{
	double double_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	if(1)
	{
		int_1 = int_1;
	}
	return int_1;
	float_2 = v_vedisPagerRollback(int_1,int_2);

}
int v_vedis_commit( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	if(1)
	{
	}
	float_1 = v_vedisPagerCommit(double_1);

	double_2 = double_1 + double_2;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "UJ") < 0)
	{
		int int_3 = 1;
		int_3 = int_1 * int_3;
	}
	return int_2;
}
int v_vedis_kv_store_fmt( double parameter_1,double parameter_2,int parameter_3,double parameter_4,float parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double_2 = double_1 + double_1;
	char_1 = char_2;
	v_vedisKvStore(long_1,short_1,int_1,long_2,unsigned_int_1);

	double_3 = double_3;
	if(1)
	{
	}
	if(1)
	{
		float_1 = v_SyBlobInit(float_1,long_1);

		int_2 = int_1 + int_2;
	}
	if(1)
	{
	}
	char_3 = char_2 * char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_4 = char_1 + char_3;
	int_1 = int_2 + int_2;
	float_1 = v_SyBlobRelease(short_2);

	short_4 = short_3 * short_4;
	short_1 = short_2 + short_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		short_2 = v_SyBlobFormatAp(long_1,long_1,int_2);

		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	return int_2;
}
void v_vedisKvStore( long parameter_1,short parameter_2,int parameter_3,long parameter_4,unsigned int parameter_5)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float_1 = float_1 * float_1;
	int_1 = int_1 * int_2;
	short_1 = short_2;
	if(1)
	{
		float float_3 = 1;
		float_2 = float_2 + float_3;
		int_3 = int_3 * int_2;
	}
	if(1)
	{
		double double_2 = 1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			float_4 = v_vedisGenError(unsigned_int_1,float_2,-1 );

			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			double double_1 = 1;
			double double_3 = 1;
			int_5 = int_4 + int_3;
			double_3 = double_1 + double_2;
		}
		char controller_5[2];
		fgets(controller_5 ,2 ,stdin);
		if( strcmp( controller_5, "q") > 0)
		{
			double double_4 = 1;
			long_1 = v_vedisPagerGetKvEngine(unsigned_int_1);

			v_SyStrlen(unsigned_int_3);

			double_2 = double_2 + double_4;
		}
	}
}
int v_vedis_kv_store( char parameter_1,long parameter_2,int parameter_3,float parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_3 = short_1 + short_2;
	}
	if(1)
	{
	}
	v_vedisKvStore(long_1,short_3,int_3,long_2,unsigned_int_1);

	char_1 = char_2;
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	return int_1;
}
long v_vedisPagerRandomString( float parameter_1,char parameter_2,char parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float_1 = v_SyRandomness(double_1,float_1);

	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = long_2 * long_1;
	}
	return long_1;
}
int v_vedis_util_random_string( short parameter_1,char parameter_2,double parameter_3)
{
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	if(1)
	{
	}
	long_1 = v_vedisPagerRandomString(float_1,char_1,char_2);

	int_2 = int_1 * int_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_2 * long_3;
	}
	return int_2;
}
short v_SySetRelease( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
		float_1 = float_1;
	}
	int_1 = int_2 + int_2;
	v_SyMemBackendFree(float_1);

	long_2 = long_1 + long_1;
	short_2 = short_1 * short_2;
	return short_2;
}
long v_vedisPagerClose( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	long long_4 = 1;
	long_1 = long_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		}
	}
	if(1)
	{
		char char_2 = 1;
		char_1 = v_pager_release_kv_engine(int_1);

		float_1 = v_pager_unlock_db(int_2,int_1);

		int_1 = v_vedisOsCloseFree(long_3,double_1);

		int_1 = int_1 + int_1;
		char_2 = char_2;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char_4 = char_3 * char_3;
		long_3 = v_vedisBitvecDestroy(float_1);

		unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	}
	return long_4;
	unsigned_int_3 = v_vedisExportBuiltinVfs();

}
double v_pager_reset_state( char parameter_1,int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	float float_2 = 1;
	long long_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_5 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	float_1 = v_pager_unlock_db(int_1,int_1);

	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 + short_1;
	int_2 = int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	char_2 = char_1 * char_1;
	short_2 = short_2;
	char_2 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			short_1 = short_2 + short_1;
		}
		long_3 = long_3 * long_4;
		unsigned_int_3 = unsigned_int_3;
		long_4 = v_vedisBitvecDestroy(float_2);

		char_1 = char_2 + char_1;
		long_3 = long_4 + long_5;
	}
	double_2 = double_1 + double_2;
	int_1 = int_3;
	float_1 = float_1 * float_3;
	int_2 = int_1 + int_3;
	double_3 = double_1 * double_1;
	if(1)
	{
		double double_4 = 1;
		double_5 = double_1 * double_4;
	}
	if(1)
	{
		char_3 = char_1;
		double_3 = double_1 * double_2;
	}
	v_SyZero(int_1);

	int_5 = int_2 + int_4;
	double_5 = double_5 + double_2;
	if(1)
	{
		long_2 = long_2 * long_5;
		if(1)
		{
			double double_7 = 1;
			double_6 = double_7;
		}
		float_2 = float_3 + float_2;
		double_3 = double_3 + double_6;
		if(1)
		{
			char_3 = v_pager_release_page(short_2,double_6);

			char_1 = char_2 + char_3;
			if(1)
			{
			}
		}
		if(1)
		{
			double_1 = double_1 * double_1;
			if(1)
			{
			}
		}
	}
	return double_2;
}
float v_vedisPagerRollback( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	int int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		float_3 = float_1 + float_2;
	}
	if(1)
	{
		double double_2 = 1;
		double double_4 = 1;
		char char_2 = 1;
		if(1)
		{
			int int_2 = 1;
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_2;
			}
			int_1 = int_1 * int_2;
			double_1 = v_pager_journal_rollback(long_1,int_3,-1 );

			double_2 = double_3;
			if(1)
			{
				int_5 = int_4 * int_1;
				if(1)
				{
					long long_2 = 1;
					unsigned_int_1 = v_vedisOsSync(int_1,int_3);

					long_1 = long_2 * long_1;
				}
			}
		}
		double_3 = v_pager_reset_state(char_1,int_6);

		float_3 = v_pager_unlock_db(int_1,int_1);

		double_4 = double_2 + double_2;
		char_2 = char_2 * char_2;
		if(1)
		{
			float_2 = v_vedisGenError(unsigned_int_1,float_2,-1 );

			short_2 = short_1 + short_1;
			int_1 = int_1 + int_3;
		}
	}
	if(1)
	{
		int_6 = v_vedisOsCloseFree(long_3,double_5);

		short_2 = short_1;
		int_4 = v_vedisOsDelete(int_5,unsigned_int_1,int_4);

		int_1 = int_6 * int_4;
	}
	return float_1;
}
long v_vedisBitvecDestroy( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		if(1)
		{
			long_2 = long_1 + long_1;
		}
		double_2 = double_1 * double_1;
		char_1 = char_1;
		short_1 = v_SyMemBackendPoolFree(short_2);

		int_3 = int_1 * int_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
		if(1)
		{
			int_3 = int_1 * int_1;
		}
		short_2 = short_2 * short_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		long_1 = long_2;
		int_4 = int_4;
		if(1)
		{
			float_1 = float_1 + float_2;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
		v_SyMemBackendFree(float_1);

		char_1 = char_1;
		unsigned_int_4 = unsigned_int_7 + unsigned_int_6;
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			float_4 = float_2 + float_3;
		}
		int_4 = int_3 * int_3;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_6;
		char_4 = char_2 + char_3;
		char_2 = char_1;
	}
	unsigned_int_8 = unsigned_int_4 + unsigned_int_5;
	long_3 = long_2 + long_3;
	return long_4;
}
void v_pager_commit_phase2( char parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_2 = 1;
			if(1)
			{
				long_1 = long_1 + long_1;
			}
			int_1 = v_vedisOsDelete(int_1,unsigned_int_1,int_1);

			char_1 = char_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				long long_2 = 1;
				char_2 = char_1 * char_2;
				long_1 = v_vedisBitvecDestroy(float_1);

				long_2 = long_1;
			}
		}
	}
	float_1 = v_pager_unlock_db(int_1,int_1);

}
void v_pager_write_dirty_pages( int parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_4 = 1;
	double double_3 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	double double_7 = 1;
	float float_2 = 1;
	char char_5 = 1;
	char_1 = char_1 * char_2;
	char_2 = v_pager_release_page(short_1,double_1);

	short_4 = short_2 * short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_5 = 1;
		if(1)
		{
			char char_3 = 1;
			char_1 = char_3 + char_4;
		}
		double_3 = double_1 * double_2;
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 + long_2;
			if(1)
			{
				double double_4 = 1;
				double_4 = double_4 * double_4;
			}
		}
		short_2 = v_vedisOsWrite(int_1,long_3,long_2,char_1);

		double_5 = double_1;
		if(1)
		{
			double double_6 = 1;
			double_3 = double_6 + double_3;
			float_1 = float_1 * float_1;
		}
		char_1 = char_2 + char_1;
	}
	double_7 = double_7 * double_3;
	int_1 = int_1 * int_1;
	float_1 = float_2 + float_2;
	double_3 = v_pager_unlink_page(char_5,char_4);

}
unsigned int v_page_merge_dirty( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double v_pager_get_dirty_pages( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float_3 = float_1 * float_2;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	int_1 = int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		if(1)
		{
			int int_3 = 1;
			unsigned_int_1 = v_page_merge_dirty(short_3,char_1);

			int_3 = int_1 + int_2;
		}
	}
	return double_1;
	v_SyZero(int_2);

}
long v_pager_commit_phase1( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_6 = 1;
	long_3 = long_1 * long_2;
	long_2 = long_1;
	long_4 = long_2;
	if(1)
	{
	}
	if(1)
	{
		long_5 = long_5 + long_5;
	}
	if(1)
	{
		double_2 = double_1 + double_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		long_5 = long_2;
	}
	if(1)
	{
	}
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	int_1 = int_1;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
		if(1)
		{
			int int_2 = 1;
			float_1 = v_vedisGenError(unsigned_int_3,float_2,-1 );

			int_2 = int_1 * int_1;
		}
	}
	if(1)
	{
		double_3 = v_pager_get_dirty_pages(unsigned_int_2);

		v_pager_write_dirty_pages(int_1,unsigned_int_3);

		unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	}
	double_1 = double_2 + double_1;
	if(1)
	{
		double double_4 = 1;
		int_3 = v_pager_wait_on_lock(short_1,int_3);

		double_2 = double_4 + double_4;
		unsigned_int_4 = v_vedisOsSync(int_4,int_4);

		short_2 = short_2 + short_2;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_2 + short_3;
	}
	int_4 = int_3 + int_4;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
	long_3 = v_vedisFinalizeJournal(long_3,int_4,int_3);

	unsigned_int_1 = v_vedisOsTruncate(unsigned_int_3,char_1);

	unsigned_int_5 = unsigned_int_6 + unsigned_int_1;
	return long_5;
}
float v_vedisPagerCommit( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 * double_2;
	double_2 = double_1 * double_1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_2;
	}
	double_4 = double_3 + double_3;
	if(1)
	{
		int int_3 = 1;
		v_pager_commit_phase2(char_1);

		int_3 = int_2 + int_2;
	}
	long_1 = v_pager_commit_phase1(long_2);

	short_1 = short_1 * short_1;
	float_1 = float_1 * float_2;
	return float_2;
}
float v_vedisEngineRelease( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short_1 = short_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			float_1 = v_vedisPagerRollback(int_1,int_1);

			int_4 = int_2 * int_3;
		}
	}
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	long_2 = v_vedisPagerClose(int_4);

	float_1 = float_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = v_vedisPagerCommit(double_1);

	float_3 = v_SyMemBackendRelease();

	unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	return float_1;
}
char v_vedisCoreShutdown()
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	float_1 = v_SyMemBackendRelease();

	double_3 = double_1 * double_2;
	short_2 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_2;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		short_1 = v_SySetRelease(long_1);

		double_2 = double_2;
		float_1 = float_1 * float_1;
		long_2 = long_1 + long_1;
	}
	int_4 = int_3 * int_4;
	if(1)
	{
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, " 5") > 0)
		{
			unsigned int unsigned_int_2 = 1;
			long long_3 = 1;
			if(1)
			{
				double double_4 = 1;
				double_4 = double_1 * double_4;
				float_2 = v_vedisEngineRelease(float_2);

				unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
			}
			long_3 = long_1 + long_2;
		}
		short_1 = short_1 * short_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	}
	short_4 = short_3 * short_3;
	return char_1;
}
int v_vedis_lib_shutdown()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_1;
	char_1 = v_vedisCoreShutdown();

}
unsigned int v_vedisObjectValueDestroy( double parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_2 = float_1 * float_2;
	short_1 = v_vedisMemObjRelease();

	short_2 = v_SyMemBackendPoolFree(short_2);

	short_2 = short_2;
	return unsigned_int_1;
}
float v_vedisHashmapRef( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return float_1;
}
short v_vedisMemObjStore( unsigned int parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_6 = 1;
	double_1 = double_2;
	float_1 = v_vedisHashmapRef(float_1);

	float_1 = v_SyBlobRelease(short_1);

	int_1 = int_1 + int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	short_2 = short_1 + short_1;
	float_1 = v_SyMemcpy(char_1,int_1);

	short_1 = v_SyBlobDup(long_1,long_1);

	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		long_1 = v_SyBlobReset(unsigned_int_4);

		int_1 = int_2 + int_2;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_6 = unsigned_int_6 * unsigned_int_2;
		}
	}
	if(1)
	{
		int_2 = int_2 * int_2;
	}
	return short_1;
	v_vedisHashmapUnref();

}
char v_SyStrToReal( short parameter_1,long parameter_2,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float_1 = float_1 * float_2;
	int_2 = int_1 + int_2;
	short_3 = short_1 + short_2;
	double_2 = double_1 * double_1;
	char_1 = char_1 + char_2;
	char_3 = char_2 * char_3;
	double_1 = double_1 * double_3;
	int_2 = int_2 * int_3;
	int_4 = int_2 + int_2;
	long_1 = long_1 * long_1;
	return char_2;
}
double v_MemObjRealValue( char parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	if(1)
	{
		v_vedisHashmapCount(short_1);

		v_vedisHashmapUnref();

		float_1 = float_1 * float_1;
	}
	if(1)
	{
		int int_2 = 1;
		long_1 = v_MemObjStringToInt(float_1);

		int_2 = int_1 * int_2;
	}
	return double_1;
	char_1 = v_SyStrToReal(short_1,long_2,int_1);

}
double v_vedisMemObjToReal()
{
	float float_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	if(1)
	{
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float_1 = v_SyBlobRelease(short_1);

		char_2 = char_1 * char_1;
		int_3 = int_1 * int_2;
		double_1 = v_MemObjRealValue(char_2);

		int_2 = int_3 * int_2;
	}
	return double_1;
}
short v_vedisMemObjRelease()
{
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "q") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 + float_2;
		}
		v_vedisHashmapUnref();

		float_3 = v_SyBlobRelease(short_1);

		int_2 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_2;
	}
	return short_2;
}
int v_vedisHashmapRelease( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_7 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_2;
	short_2 = short_3 * short_2;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		float float_1 = 1;
		long long_2 = 1;
		short short_4 = 1;
		short short_5 = 1;
		if(1)
		{
			int_1 = int_1;
		}
		long_1 = long_1 + long_1;
		short_3 = v_vedisMemObjRelease();

		float_1 = float_1 * float_1;
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 + double_1;
		}
		long_2 = long_1 + long_1;
		short_5 = short_4 * short_4;
		short_6 = v_SyMemBackendPoolFree(short_2);

		long_2 = long_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		v_SyMemBackendFree(float_2);

		char_2 = char_1 + char_1;
	}
	float_3 = v_SyBlobRelease(short_7);

	int_3 = int_2 + int_1;
	return int_1;
}
void v_vedisHashmapUnref()
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = v_vedisHashmapRelease(int_1);

	long_2 = long_1 + long_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
}
void v_vedisHashmapCount( short parameter_1)
{
}
long v_SyStrToInt64( char parameter_1,float parameter_2,float parameter_4)
{
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	return long_1;
	v_SyMemcmp(char_1,float_1,short_1);

}
long v_SyOctalStrToInt64( unsigned int parameter_1,char parameter_2,double parameter_4)
{
	long long_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 * long_1;
	}
	return long_2;
}
char v_SyBinaryStrToInt64( long parameter_1,int parameter_2,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_3 = char_1 * char_2;
	return char_2;
}
float v_SyHexToint( double parameter_1)
{
	float float_1 = 1;
	return float_1;
}
char v_SyHexStrToInt64( short parameter_1,int parameter_2,unsigned int parameter_4)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_2 = 1;
		float_1 = v_SyHexToint(double_1);

		char_1 = char_1;
		char_1 = char_2 + char_2;
		float_1 = float_2;
	}
	int_1 = int_1 + int_1;
	short_2 = short_1 * short_1;
	int_2 = int_2 * int_1;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	return char_3;
}
int v_vedisTokenValueToInt64( int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
		char_1 = v_SyBinaryStrToInt64(long_1,int_1,float_1);

		int_2 = int_2 * int_2;
		if(1)
		{
		}
		char_2 = v_SyHexStrToInt64(short_1,int_1,unsigned_int_1);

		long_2 = v_SyStrToInt64(char_3,float_1,float_1);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			long_1 = v_SyOctalStrToInt64(unsigned_int_1,char_2,double_2);

			double_4 = double_3 * double_1;
		}
		if(1)
		{
			double_1 = double_2;
		}
		if(1)
		{
			char char_4 = 1;
			char_1 = char_4 * char_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	}
	return int_2;
}
long v_MemObjStringToInt( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return long_1;
	int_1 = v_vedisTokenValueToInt64(int_1);

}
void v_MemObjRealToInt( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_2;
	int_4 = int_2 + int_3;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double double_4 = 1;
		int int_5 = 1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_2 = 1;
			float_3 = float_1 * float_2;
			double_4 = double_1 * double_3;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			if(1)
			{
				int_5 = int_2 + int_3;
			}
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long_2 = long_1 + long_2;
			}
			double_1 = double_4 * double_3;
			short_2 = short_1 + short_2;
		}
		if(1)
		{
			double double_5 = 1;
			double_4 = double_5 + double_3;
		}
		char controller_7[2];
		fgets(controller_7 ,2 ,stdin);
		if( strcmp( controller_7, "D") < 0)
		{
			int_5 = int_3 * int_1;
		}
		if(1)
		{
			double double_6 = 1;
			double_4 = double_6 + double_4;
		}
	}
}
double v_MemObjIntValue( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	v_vedisHashmapUnref();

	char_1 = char_2;
	long_1 = v_MemObjStringToInt(float_1);

	v_vedisHashmapCount(short_1);

	int_2 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v_MemObjRealToInt(long_2);

		double_1 = double_1 + double_1;
		float_2 = float_1 + float_1;
		unsigned_int_1 = unsigned_int_2;
	}
	return double_1;
}
short v_vedisMemObjToInteger( char parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		float_1 = v_SyBlobRelease(short_1);

		int_2 = int_1 * int_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	return short_2;
	double_1 = v_MemObjIntValue(long_1);

}
void v_vedisMemObjInitFromString( int parameter_1,long parameter_2,int parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	long_1 = long_1;
	int_3 = int_1 * int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_1 = v_SyBlobAppend(float_1,double_1,float_2,-1 );

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	v_SyZero(int_2);

	float_2 = v_SyBlobInit(float_2,long_1);

	long_1 = long_1;
}
void v_vedisNewObjectValue( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	long long_4 = 1;
	double_1 = v_vedisMemObjToReal();

	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int_3 = int_1 * int_2;
		int_3 = v_SyMemBackendPoolAlloc(float_1,long_1);

		long_1 = v_vedisMemObjInit(unsigned_int_3,double_1);

		long_3 = long_2 + long_1;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_3 = char_1 + char_2;
		}
		if(1)
		{
			short_1 = v_vedisMemObjToInteger(char_3);

			long_2 = long_4 * long_2;
		}
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "!A") < 0)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	v_vedisMemObjInitFromString(int_3,long_4,int_1);

}
long v_SyBlobNullAppend( unsigned int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1;
	char_1 = char_2;
	double_1 = double_2 * double_3;
	int_1 = int_2;
	if(1)
	{
		char char_3 = 1;
		char_3 = char_3 + char_1;
	}
	return long_1;
	short_1 = v_SyBlobAppend(float_1,double_2,float_2,-1 );

}
double v_vedisPagerSetCachesize( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "(") > 0)
	{
	}
	char_1 = char_2;
	return double_1;
}
short v_vedisConfigure( float parameter_1,int parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	char char_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_2 = 1;
	char_2 = char_1 * char_1;
	char_3 = char_1 * char_1;
	v_vedisNewObjectValue(double_1,double_1);

	char_4 = char_3 * char_3;
	double_1 = double_1;
	double_3 = double_1 + double_2;
	double_5 = double_2 * double_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		long_1 = long_1 * long_1;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_1 + int_1;
	if(1)
	{
		if(1)
		{
			short_1 = short_1 + short_1;
		}
		if(1)
		{
			double_4 = double_1 * double_5;
		}
	}
	double_5 = v_vedisPagerSetCachesize(float_1,int_1);

	float_2 = float_1 * float_2;
	int_1 = int_3 * int_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	double_4 = double_1 * double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		long_1 = long_2 * long_2;
		double_1 = double_3 + double_5;
	}
	short_1 = v_vedisMemObjStore(unsigned_int_2,float_1);

	long_4 = long_2 * long_3;
	float_4 = float_2 * float_3;
	if(1)
	{
		long_3 = long_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
			double_5 = double_4 + double_4;
		}
		long_4 = v_vedisPagerGetKvEngine(unsigned_int_4);

		unsigned_int_4 = unsigned_int_2;
		long_3 = v_SyBlobNullAppend(unsigned_int_1);

		float_2 = float_3 * float_3;
	}
	int_1 = int_4 + int_4;
	int_2 = int_5;
	if(1)
	{
		char char_5 = 1;
		char_2 = char_3 + char_5;
	}
	long_1 = long_2 * long_1;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_6;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_6 = unsigned_int_7 * unsigned_int_3;
	int_5 = int_5;
	unsigned_int_4 = v_vedisObjectValueDestroy(double_5,double_3);

	double_2 = double_3;
	unsigned_int_1 = unsigned_int_8 + unsigned_int_5;
	return short_2;
}
int v_vedis_config( float parameter_1,int parameter_2,short parameter_3)
{
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_3 = 1;
	char_1 = char_1 + char_1;
	short_1 = v_vedisConfigure(float_1,int_1,char_1);

	short_2 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	short_3 = short_2 * short_2;
	short_5 = short_4 + short_3;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	return int_3;
}
char v_Fatal( short parameter_1,float parameter_2)
{
	int int_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		long_2 = long_1 * long_2;
		double_1 = double_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		}
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			int_1 = v_vedis_lib_shutdown();

			float_1 = float_1 + float_1;
		}
	}
	long_4 = long_3 * long_4;
	char_1 = char_1 * char_1;
	return char_1;
	int_1 = v_vedis_config(float_2,int_2,short_1);

}
char v_SyBlobAppendBig32( float parameter_1,float parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_1 = long_1 * long_1;
	short_2 = short_1 + short_2;
	short_3 = short_2 * short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return char_1;
	v_SyBigEndianPack32(int_1,double_1);

	short_2 = v_SyBlobAppend(float_1,double_1,float_2,-1 );

}
float v_SyBlobAppendBig16( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	double_2 = double_1 * double_2;
	short_1 = v_SyBlobAppend(float_1,double_3,float_1,-1 );

	int_1 = int_1 * int_1;
	double_1 = v_SyBigEndianPack16(char_1,unsigned_int_1);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	short_2 = short_1 * short_1;
	return float_1;
}
long v_SyBlobFormat( double parameter_1,float parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		short short_4 = 1;
		if(1)
		{
		}
		short_4 = short_2;
	}
	int_1 = int_1 + int_1;
	long_1 = v_FormatMount(int_2,int_2,unsigned_int_2,int_3,char_1);

	char_1 = char_1 * char_1;
	return long_1;
}
long v_vedisPagerGetKvEngine( unsigned int parameter_1)
{
	long long_1 = 1;
	return long_1;
}
void v_vedisTableSerialize( long parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	long long_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	double double_4 = 1;
	long_1 = v_vedisPagerGetKvEngine(unsigned_int_1);

	int_1 = int_1 + int_1;
	double_1 = double_1;
	double_1 = double_1;
	short_2 = short_1 * short_2;
	short_1 = short_3;
	double_1 = double_1 * double_1;
	double_1 = double_2;
	char_1 = v_SyBlobAppendBig32(float_1,float_1);

	float_1 = v_SyBlobRelease(short_1);

	float_1 = float_1 * float_1;
	if(1)
	{
		float_3 = float_2 + float_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = v_SyBlobFormat(double_3,float_3,short_1);

	float_1 = v_SyBlobAppendBig16(float_2,short_2);

	char_1 = char_1 * char_1;
	int_2 = int_3;
	short_2 = short_2 + short_3;
	float_4 = v_vedisGenErrorFormat(char_2,long_2,short_1);

	int_4 = int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	short_3 = short_4;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if(remainder_check(controller_2,100,1))
	{
	}
	double_4 = double_3 + double_2;
	float_1 = v_SyBlobInit(float_2,long_1);

}
int v_vedisPagerisMemStore( short parameter_1)
{
	int int_1 = 1;
	return int_1;
}
unsigned int v_vedisOnCommit()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_3 = double_1 + double_2;
	int_1 = v_vedisPagerisMemStore(short_1);

	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	v_vedisTableSerialize(long_2);

	double_3 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char_2 = char_1 + char_4;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, ";&") > 0)
		{
		}
		int_3 = int_2 + int_3;
	}
	return unsigned_int_2;
}
float v_vedisPagerSetCommitCallback( float parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long_1 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return float_1;
}
int v_SySetReset( unsigned int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1;
	int_1 = int_1 + int_1;
	return int_2;
}
double v_SyBinHash( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 * float_1;
	char_2 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_3 = 1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		}
		float_1 = float_1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
			short_2 = short_1 + short_2;
		}
		short_1 = short_2 + short_1;
		int_2 = int_3 * int_4;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_1;
		}
		double_2 = double_1 + double_2;
		long_3 = long_3 * long_4;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
		double_3 = double_2 * double_1;
		int_2 = int_4 * int_3;
	}
	return double_1;
}
int v_vedisFetchCommand( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	char char_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int_1 = int_2;
	char_2 = char_1 * char_2;
	if(1)
	{
	}
	double_1 = v_SyBinHash(int_3,int_3);

	char_1 = char_3 * char_3;
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
		}
		v_SyMemcmp(char_3,float_1,short_1);

		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	return int_3;
}
void v_vedisInstallCommand( float parameter_1,unsigned int parameter_2,long parameter_3)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	long long_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_6 = 1;
	float_1 = float_1 + float_1;
	short_1 = short_2;
	long_1 = v_SySetInit(int_1,long_1,short_1);

	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_vedisFetchCommand(int_1,char_1);

	char_2 = char_1 * char_1;
	float_3 = float_1 * float_2;
	long_3 = long_2 * long_3;
	char_3 = char_1 * char_2;
	char_2 = char_3 + char_3;
	if(1)
	{
		double_2 = double_1 * double_3;
		v_SyStrlen(unsigned_int_1);

		double_1 = double_3 * double_2;
		short_3 = short_4;
	}
	double_5 = double_2 * double_4;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	float_1 = float_2 * float_4;
	long_3 = long_1 + long_4;
	v_SyMemBackendFree(float_4);

	char_5 = char_4 + char_5;
	float_3 = float_1 + float_1;
	float_2 = float_1 + float_4;
	char_3 = char_4 + char_5;
	int_1 = v_SySetReset(unsigned_int_2);

	float_5 = float_3 + float_3;
	double_5 = double_6;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	if(1)
	{
		short short_5 = 1;
		double_7 = v_SyBinHash(int_1,int_1);

		short_1 = short_2 * short_5;
	}
	unsigned_int_1 = unsigned_int_4;
	if(1)
	{
		int int_5 = 1;
		double double_8 = 1;
		int_1 = int_2 * int_2;
		v_SyZero(int_2);

		int_2 = int_2 + int_3;
		int_5 = int_4 * int_2;
		double_8 = double_6 + double_1;
		long_2 = long_4 * long_1;
		if(1)
		{
			long long_5 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_5 = 1;
			long_5 = long_1;
			double_9 = double_1 * double_1;
			char_3 = char_2;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double double_10 = 1;
				short short_6 = 1;
				float float_6 = 1;
				if(1)
				{
					long_3 = long_3 * long_4;
				}
				double_4 = double_2 + double_10;
				int_1 = v_SyMemBackendAlloc(int_6,int_3,-1 );

				short_4 = short_3 * short_6;
				long_5 = long_4 + long_1;
				if(1)
				{
					float_5 = v_SyMemcpy(char_4,int_4);

					double_7 = double_3 * double_10;
				}
				float_4 = float_5 * float_6;
				double_6 = double_8 + double_7;
				float_6 = float_1 * float_3;
			}
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
			unsigned_int_5 = unsigned_int_3 * unsigned_int_3;
			float_4 = float_2 + float_3;
		}
	}
}
int v_vedis_register_command( char parameter_1,int parameter_2,char parameter_3,int parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		short_1 = short_2;
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		v_vedisInstallCommand(float_1,unsigned_int_2,long_1);

		short_2 = short_2 + short_1;
	}
	return int_1;
}
long v_vedisRegisterBuiltinCommands( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_6 = 1;
	long long_3 = 1;
	int_1 = int_2;
	int_3 = v_vedis_register_command(char_1,int_4,char_1,int_5,unsigned_int_1);

	int_6 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	return long_3;
}
long v_vedisMemObjInit( unsigned int parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short_2 = short_1 * short_1;
	double_2 = double_1 * double_1;
	v_SyZero(int_1);

	short_4 = short_3 + short_4;
	return long_1;
	float_1 = v_SyBlobInit(float_1,long_1);

}
float v_vedisInitCursor( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int_2 = int_1 + int_1;
	double_2 = double_1 + double_2;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double_1 = v_vedisGenOutofMem(float_1);

		short_1 = short_2 * short_1;
	}
	double_2 = double_3 + double_1;
	if(1)
	{
		float_1 = v_vedisGenErrorFormat(char_1,long_1,short_3);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	int_2 = v_SyMemBackendPoolAlloc(float_2,long_2);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		long long_3 = 1;
		v_SyZero(int_1);

		long_2 = long_2 * long_3;
	}
	int_4 = int_3 * int_4;
	float_3 = float_3 + float_4;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_2 = char_3;
	}
	short_3 = short_2;
	return float_4;
}
long v_vedisKvIoErr( double parameter_1,char parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float_1 = v_vedisGenError(unsigned_int_1,float_2,-1 );

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 * char_1;
	return long_1;
}
char v_vedisKvIoPageReload( short parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_1;
	float_2 = float_1 + float_2;
	return char_1;
}
void v_vedisKvIoPageUnpin( char parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_3 = float_1 * float_2;
	double_1 = double_1 * double_2;
}
unsigned int v_vedisKvIoTempPage( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double v_vedisKvIoReadOnly( double parameter_1)
{
	double double_1 = 1;
	return double_1;
}
unsigned int v_vedisKvIoPageSize( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
long v_page_unref( float parameter_1)
{
	double double_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			double double_2 = 1;
			double_1 = double_1 + double_1;
			double_2 = double_2;
		}
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "p") < 0)
		{
			if(1)
			{
			}
			if(1)
			{
				int int_1 = 1;
				short short_1 = 1;
				double_3 = v_pager_unlink_page(char_1,char_1);

				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
				if(1)
				{
					int int_2 = 1;
					int_2 = int_1 * int_1;
				}
				if(1)
				{
					float float_1 = 1;
					float float_2 = 1;
					float_1 = float_1;
					if(1)
					{
						int int_3 = 1;
						int_3 = int_1 + int_3;
					}
					float_1 = float_2;
				}
				short_1 = short_2;
				unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
			}
		}
	}
	return long_1;
	char_2 = v_pager_release_page(short_2,double_3);

}
int v_vedisKvIoPageUnRef( int parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	return int_1;
	long_1 = v_page_unref(float_1);

}
long v_vedisKvIopage_ref( short parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return long_1;
	char_1 = v_page_ref(char_1);

}
char v_vedisKvIoPageDontMakeHot()
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int_1 = int_1 + int_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_2;
		}
		if(1)
		{
			long_3 = long_1 + long_2;
		}
		if(1)
		{
			int int_2 = 1;
			int_1 = int_2 + int_2;
		}
		char_1 = char_1 * char_1;
		long_1 = long_3 * long_2;
	}
	return char_1;
}
long v_vedisKvIoPageDontJournal( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = v_vedisBitvecTest(short_1,long_1);

	long_1 = long_1 * long_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
			float float_2 = 1;
			double_1 = v_vedisBitvecSet(unsigned_int_2,unsigned_int_1);

			float_1 = float_2 * float_1;
		}
	}
	return long_1;
}
float v_vedisPagerDontWrite()
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
	}
	return float_1;
}
long v_vedisKvIoPageDontWrite( int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	return long_1;
	float_1 = v_vedisPagerDontWrite();

}
double v_vedisBitvecSet( unsigned int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	int int_6 = 1;
	int_1 = v_SyMemBackendAlloc(int_2,int_1,-1 );

	double_2 = double_1 * double_2;
	short_1 = short_1 * short_1;
	v_SyMemBackendFree(float_1);

	int_2 = int_2 * int_3;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_1;
	int_4 = int_3 * int_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	short_2 = short_1;
	double_1 = double_2 + double_2;
	short_4 = short_3 + short_4;
	double_1 = double_2 + double_2;
	if(1)
	{
		int int_5 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int_2 = v_SyMemBackendPoolAlloc(float_1,long_1);

		int_5 = int_4 * int_2;
		double_2 = double_3;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		int_3 = int_2 * int_5;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			long long_2 = 1;
			char char_3 = 1;
			double double_5 = 1;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
			char_2 = char_1 + char_1;
			int_4 = int_1 * int_1;
			double_4 = double_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				float float_2 = 1;
				float float_3 = 1;
				int int_7 = 1;
				if(1)
				{
					int_1 = int_2 + int_3;
				}
				float_3 = float_1 + float_2;
				v_SyZero(int_6);

				float_1 = float_1 + float_2;
				int_1 = int_4;
				int_1 = int_7 * int_3;
				double_1 = double_1 + double_4;
				long_1 = long_1;
			}
			long_2 = long_2;
			char_1 = char_3 * char_2;
			double_5 = double_2;
		}
	}
	return double_2;
}
void v_WriteInt64( char parameter_1,long parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 * int_2;
	long_1 = v_SyBigEndianPack64(unsigned_int_1,float_1);

	short_1 = v_vedisOsWrite(int_3,long_2,long_3,char_1);

	unsigned_int_2 = unsigned_int_2;
	long_2 = long_1 + long_1;
	double_1 = double_2;
}
float v_vedisBitvecTest( short parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_2;
	long_2 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		if(1)
		{
			long_1 = long_1 + long_2;
		}
		if(1)
		{
		}
		double_2 = double_1 + double_1;
		if(1)
		{
			int_3 = int_2;
		}
		if(1)
		{
		}
		double_1 = double_1 * double_2;
		if(1)
		{
			int int_4 = 1;
			int_4 = int_3;
		}
		if(1)
		{
		}
		long_2 = long_1 + long_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
		if(1)
		{
		}
		double_1 = double_1;
	}
	return float_1;
}
int v_page_write( long parameter_1,short parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_7 = 1;
	double_1 = v_vedisBitvecSet(unsigned_int_1,unsigned_int_1);

	long_2 = long_1 * long_1;
	if(1)
	{
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
			if(1)
			{
				unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
			}
			short_1 = v_vedisOsWrite(int_1,long_2,long_1,char_1);

			unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
			if(1)
			{
			}
			long_2 = long_3 * long_1;
			if(1)
			{
			}
			double_2 = double_2 * double_1;
			double_3 = double_3 * double_4;
			if(1)
			{
			}
			v_WriteInt64(char_2,long_1,double_4);

			int_2 = int_1 + int_1;
			long_3 = long_2;
			float_1 = v_vedisGenError(unsigned_int_6,float_1,-1 );

			int_1 = int_3 + int_1;
		}
	}
	short_1 = v_WriteInt32(double_4,int_3,int_2);

	unsigned_int_4 = unsigned_int_6 * unsigned_int_2;
	if(1)
	{
		short short_3 = 1;
		float_1 = v_vedisBitvecTest(short_2,long_4);

		short_2 = short_1 + short_3;
		if(1)
		{
			long_3 = v_pager_cksum(unsigned_int_5,short_2);

			unsigned_int_7 = v_pager_page_to_dirty_list(char_2,char_2);

			unsigned_int_3 = unsigned_int_6 + unsigned_int_2;
		}
	}
	return int_2;
}
char v_pager_release_page( short parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long_1 = long_2;
	if(1)
	{
		double double_3 = 1;
		long long_3 = 1;
		if(1)
		{
			double double_2 = 1;
			double_1 = double_1 * double_2;
		}
		double_3 = double_3 + double_1;
		short_1 = v_SyMemBackendPoolFree(short_1);

		long_3 = long_2 * long_1;
	}
	if(1)
	{
		double_1 = double_1;
	}
	return char_1;
}
double v_pager_unlink_page( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double_1 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	double_1 = double_2 + double_1;
	double_1 = double_2;
	return double_2;
}
double v_pager_write_hot_dirty_pages( float parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_2 = int_1 * int_1;
	char_1 = v_pager_release_page(short_1,double_1);

	char_2 = char_2 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		if(1)
		{
			int_4 = int_2 * int_3;
		}
		double_1 = v_pager_unlink_page(char_1,char_2);

		int_2 = int_5 + int_3;
		if(1)
		{
			int_5 = int_4 + int_1;
			if(1)
			{
				short_1 = v_vedisOsWrite(int_1,long_1,long_2,char_1);

				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			double double_3 = 1;
			double_3 = double_2 + double_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		}
		if(1)
		{
			double_4 = double_2 + double_2;
		}
		if(1)
		{
			char_2 = char_1;
		}
		double_1 = double_4;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
		float_2 = float_1 * float_2;
	}
	return double_1;
}
unsigned int v_page_merge_hot( long parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_3 = 1;
	int int_5 = 1;
	short short_4 = 1;
	float float_7 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_6 = 1;
	char char_4 = 1;
	short short_5 = 1;
	double double_9 = 1;
	char char_5 = 1;
	int int_7 = 1;
	char char_7 = 1;
	float float_8 = 1;
	char char_8 = 1;
	int int_8 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_12 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_4 = 1;
	double_2 = double_1 + double_2;
	double_2 = double_3 * double_1;
	double_4 = double_2 + double_1;
	short_1 = short_1 * short_1;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_2;
	long_3 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = short_1 * short_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		}
		if(1)
		{
			double_2 = double_4;
			float_2 = float_1 + float_2;
		}
		if(1)
		{
			float_3 = float_3 + float_4;
			float_6 = float_5 * float_2;
		}
		if(1)
		{
			int_2 = int_3 * int_3;
			short_1 = short_1 + short_2;
		}
		if(1)
		{
			int_1 = int_2 + int_1;
			int_2 = int_4 + int_1;
			char_3 = char_1 * char_2;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				double_3 = double_4 + double_4;
			}
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
			}
			double_5 = double_1 + double_2;
			double_3 = double_6 * double_1;
			short_3 = short_3 * short_2;
			int_5 = int_4 * int_4;
		}
		if(1)
		{
			double_5 = double_2 + double_2;
			short_3 = short_2 + short_4;
			float_7 = float_6 * float_3;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			int_2 = int_5 * int_3;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
			float_4 = float_5 * float_2;
		}
		double_8 = double_5 * double_7;
	}
	if(1)
	{
		int_1 = int_5 * int_3;
	}
	if(1)
	{
		int_5 = int_2 + int_6;
		long_3 = long_1 + long_3;
		int_4 = int_1 + int_6;
		unsigned_int_2 = unsigned_int_1;
		short_3 = short_3 + short_3;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		char_1 = char_2 + char_4;
	}
	if(1)
	{
		double_3 = double_7 * double_2;
	}
	double_2 = double_7 * double_5;
	if(1)
	{
		short_1 = short_2 + short_3;
		if(1)
		{
			char char_6 = 1;
			int_4 = int_2 * int_1;
			short_5 = short_4 + short_1;
			long_2 = long_3;
			short_2 = short_4 + short_2;
			double_3 = double_9 * double_4;
			float_2 = float_7 * float_3;
			char_3 = char_5 + char_6;
			double_9 = double_4;
			int_7 = int_2;
		}
		if(1)
		{
			char_4 = char_7 + char_3;
			short_5 = short_5;
			double_5 = double_2 + double_8;
			char_4 = char_5 + char_7;
			float_2 = float_6 + float_5;
			long_3 = long_3 + long_1;
			char_1 = char_5 + char_4;
			float_8 = float_3;
		}
	}
	if(1)
	{
		int_7 = int_2 * int_2;
		long_1 = long_1 * long_3;
		char_3 = char_1 + char_8;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int int_9 = 1;
			if(1)
			{
				int_7 = int_2 * int_6;
			}
			if(1)
			{
				if(1)
				{
					int_8 = int_9;
				}
				if(1)
				{
					short_4 = short_5 * short_1;
				}
			}
			if(1)
			{
				double double_10 = 1;
				if(1)
				{
					unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
					float_5 = float_8 + float_7;
					double_5 = double_3 * double_10;
					double_11 = double_6 + double_11;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
					double_9 = double_3 + double_10;
					char_4 = char_1 + char_8;
					unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
				}
			}
			if(1)
			{
				float_7 = float_2 * float_2;
				char_7 = char_3 + char_1;
				double_1 = double_3 + double_6;
				unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
			}
			if(1)
			{
				if(1)
				{
					short_5 = short_5;
					short_4 = short_5 + short_5;
					float_1 = float_6 * float_8;
				}
				if(1)
				{
					double_8 = double_1;
					double_2 = double_4 + double_7;
					double_9 = double_7 + double_7;
				}
			}
			if(1)
			{
				char char_9 = 1;
				double_12 = double_2 + double_4;
				char_9 = char_5;
				float_1 = float_1 + float_5;
			}
			if(1)
			{
				unsigned int unsigned_int_7 = 1;
				char_4 = char_2 * char_3;
				unsigned_int_6 = unsigned_int_7;
				if(1)
				{
					float float_9 = 1;
					float_8 = float_9 * float_8;
				}
				if(1)
				{
					long_2 = long_3 + long_4;
					double_5 = double_11;
				}
				if(1)
				{
					int_1 = int_9;
				}
				float_2 = float_4 * float_2;
			}
			unsigned_int_5 = unsigned_int_2;
		}
	}
	if(1)
	{
		int_3 = int_7;
		short_3 = short_5 * short_1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	}
	if(1)
	{
		long_4 = long_3 + long_3;
		int_3 = int_8 * int_8;
		double_1 = double_6;
		long_3 = long_4;
	}
	if(1)
	{
		double double_13 = 1;
		int int_10 = 1;
		float_5 = float_2 + float_6;
		double_11 = double_13 + double_12;
		int_4 = int_10 + int_4;
		double_13 = double_9 * double_3;
	}
	int_8 = int_7 + int_7;
	return unsigned_int_6;
}
int v_pager_get_hot_pages()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_3 = double_1 * double_2;
	double_4 = double_4 * double_4;
	return int_1;
	v_SyZero(int_2);

	unsigned_int_1 = v_page_merge_hot(long_1,unsigned_int_2);

}
short v_WriteInt32( double parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	short_1 = v_vedisOsWrite(int_1,long_1,long_2,char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_2;
	double_1 = double_1 + double_1;
	int_1 = int_1 * int_1;
	return short_1;
	v_SyBigEndianPack32(int_2,double_1);

}
long v_vedisFinalizeJournal( long parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_2;
	int_3 = int_3 + int_2;
	short_1 = v_WriteInt32(double_1,int_3,int_3);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double_2 = v_pager_lock_db(long_1,int_1,-1 );

		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			int_4 = v_vedisOsCloseFree(long_2,double_2);

			short_1 = short_1 + short_1;
		}
	}
	unsigned_int_4 = v_vedisOsSync(int_3,int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_5;
	if(1)
	{
		if(1)
		{
			if(1)
			{
			}
		}
		float_1 = float_3 + float_3;
	}
	if(1)
	{
		if(1)
		{
			float float_4 = 1;
			float_4 = float_2 + float_2;
		}
	}
	return long_1;
}
long v_pager_dirty_commit( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	long long_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	int_1 = v_pager_get_hot_pages();

	float_1 = v_vedisGenError(unsigned_int_4,float_2,-1 );

	double_2 = double_1 * double_2;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 * long_2;
		if(1)
		{
		}
	}
	int_1 = v_pager_wait_on_lock(short_2,int_2);

	double_1 = v_pager_write_hot_dirty_pages(float_2,double_3);

	char_1 = char_1;
	long_2 = v_vedisFinalizeJournal(long_2,int_2,int_1);

	unsigned_int_6 = unsigned_int_4 * unsigned_int_6;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned_int_7 = unsigned_int_8;
		int_2 = int_1;
	}
	double_3 = double_1 + double_2;
	double_4 = double_3 + double_2;
	return long_3;
}
double v_pager_write_journal_header( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3;
	short_2 = short_1 * short_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	v_SyBigEndianPack32(int_2,double_1);

	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	float_2 = v_SyMemcpy(char_1,int_3);

	long_1 = long_2;
	int_3 = int_4 * int_4;
	short_2 = short_1 + short_1;
	long_1 = v_SyBigEndianPack64(unsigned_int_2,float_1);

	int_3 = int_2 * int_5;
	return double_2;
}
void v_vedisOpenJournal( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	char char_5 = 1;
	long long_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_7 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_8 = 1;
	float float_3 = 1;
	int int_5 = 1;
	double_2 = double_1 * double_1;
	char_2 = char_1 + char_2;
	if(1)
	{
		long_3 = long_1 + long_2;
	}
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	double_5 = double_3 * double_4;
	if(1)
	{
		char_2 = char_3 * char_4;
	}
	float_1 = v_vedisGenErrorFormat(char_5,long_4,short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_6 = 1;
		double_5 = v_pager_write_journal_header(float_2,int_1);

		double_2 = double_5 + double_3;
		double_2 = double_4 * double_6;
	}
	short_1 = v_vedisOsOpen(unsigned_int_3,unsigned_int_2,float_2,unsigned_int_4,long_3);

	char_3 = char_4;
	short_2 = v_vedisOsWrite(int_4,long_4,long_1,char_2);

	int_2 = int_3 * int_3;
	int_4 = v_vedisOsCloseFree(long_2,double_7);

	short_1 = short_3 + short_4;
	double_7 = double_8 + double_3;
	if(1)
	{
		v_SyMemBackendFree(float_3);

		unsigned_int_2 = unsigned_int_4;
	}
	float_1 = float_3 + float_3;
	int_1 = v_SyMemBackendAlloc(int_2,int_1,-1 );

	int_5 = int_2;
	double_2 = double_7;
	int_4 = v_vedisOsDelete(int_4,unsigned_int_3,int_3);

}
void v_SyTimeFormatToDos( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = double_1 * double_1;
	short_1 = short_2;
	double_1 = double_1 * double_2;
	double_2 = double_2 + double_3;
}
void v_pager_write_db_header( char parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	float_1 = v_SyMemcpy(char_1,int_1);

	short_1 = short_1 + short_2;
	v_SyBigEndianPack32(int_1,double_1);

	float_2 = float_2 + float_1;
	int_2 = int_2 * int_1;
	double_2 = double_2;
	int_1 = int_1 + int_2;
	double_2 = double_1 + double_2;
	double_2 = double_3 + double_2;
	char_2 = char_1 * char_2;
	v_SyTimeFormatToDos(float_3,short_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	double_1 = v_SyBigEndianPack16(char_2,unsigned_int_3);

	int_3 = int_2 * int_3;
	short_2 = short_3 * short_2;
	long_1 = long_1;
	int_4 = int_1 + int_1;
	double_2 = double_2 + double_2;
	v_SyZero(int_2);

	short_3 = short_2;
	long_2 = long_2;
	double_4 = double_4 * double_5;
	int_4 = int_3 * int_4;
	long_2 = long_2 + long_2;
	int_1 = int_5 + int_2;
	double_5 = double_4 + double_1;
	v_SyStrlen(unsigned_int_3);

}
unsigned int v_pager_page_to_dirty_list( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_2;
	short_3 = short_1 * short_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	char_1 = char_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return unsigned_int_3;
}
int v_pager_create_header( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = v_pager_alloc_page(long_1,long_2);

	long_3 = long_3 * long_1;
	v_pager_write_db_header(char_2);

	long_2 = long_2 * long_2;
	if(1)
	{
	}
	short_1 = short_2;
	int_3 = int_1 * int_2;
	double_1 = v_pager_link_page(int_4,long_3);

	double_2 = double_1 * double_1;
	char_3 = char_2 * char_2;
	return int_2;
	unsigned_int_2 = v_pager_page_to_dirty_list(char_3,char_3);

}
double v_vedisBitvecCreate( long parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_1;
	double_3 = double_1 * double_2;
	long_2 = long_1 * long_1;
	if(1)
	{
		int_1 = v_SyMemBackendAlloc(int_2,int_3,-1 );

		long_1 = long_3 + long_2;
	}
	double_3 = double_4 + double_3;
	v_SyZero(int_4);

	short_2 = short_1 * short_2;
	short_3 = short_1 * short_2;
	if(1)
	{
		long_2 = long_3 * long_2;
	}
	double_5 = double_3;
	float_1 = float_1;
	int_2 = int_3 + int_2;
	return double_4;
	v_SyMemBackendFree(float_1);

}
double v_vedisPagerBegin( float parameter_1,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_2 = short_1 + short_2;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		char_3 = char_1 + char_2;
	}
	double_3 = double_1 * double_2;
	char controller4vul_1295[3];
	fgets(controller4vul_1295 ,3 ,stdin);
	if( strcmp( controller4vul_1295, "zt") < 0)
	{
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_2 = short_3;
		if(1)
		{
			int int_1 = 1;
			short short_4 = 1;
			float float_3 = 1;
			int_1 = int_1 * int_1;
			short_4 = short_1 + short_2;
			float_3 = float_2 * float_3;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_2 = double_1 * double_3;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_2;
		char controller4vul_1296[2];
		fgets(controller4vul_1296 ,2 ,stdin);
		if( strcmp( controller4vul_1296, "G") > 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_2;
			char controller4vul_1297[2];
			fgets(controller4vul_1297 ,2 ,stdin);
			if( strcmp( controller4vul_1297, "F") < 0)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				char_3 = v_pager_shared_lock(int_2,uni_para);

				unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
			}
			char_2 = char_1;
		}
	}
	if(1)
	{
		double_3 = double_3 + double_2;
	}
	int_3 = int_3 + int_3;
	return double_3;
}
int v_vedisPageWrite(int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	float_2 = float_1 * float_1;
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_2 * double_2;
	if(1)
	{
	}
	char controller4vul_1293[2];
	fgets(controller4vul_1293 ,2 ,stdin);
	if( strcmp( controller4vul_1293, "(") > 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
		char controller4vul_1294[2];
		fgets(controller4vul_1294 ,2 ,stdin);
		if( strcmp( controller4vul_1294, "Z") > 0)
		{
			double_4 = v_vedisPagerBegin(float_2,uni_para);

		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_4 = unsigned_int_5;
		if(1)
		{
			float_2 = float_1 * float_1;
		}
	}
	char_3 = char_3 * char_4;
	return int_1;
}
float v_vedisKvIopageWrite( float parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char_1 = char_1 * char_2;
	char controller4vul_1292[2];
	fgets(controller4vul_1292 ,2 ,stdin);
	if( strcmp( controller4vul_1292, "P") < 0)
	{
		int_1 = v_vedisPageWrite(uni_para);

	}
	double_1 = double_1 * double_2;
	return float_1;
}
long v_vedisKvIoNewPage( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1;
	float_2 = float_1 + float_2;
	char_1 = v_pager_shared_lock(int_1,-1 );

	float_1 = float_2 * float_2;
	if(1)
	{
		float float_3 = 1;
		float_2 = float_2 * float_3;
	}
	return long_1;
	int_1 = v_vedisPagerAcquire(float_1,int_1,short_1,int_2,int_3);

}
int v_vedisKvIoPageLookup( char parameter_1,float parameter_2,int parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_1;
	int_1 = v_vedisPagerAcquire(float_1,int_2,short_1,int_2,int_3);

}
char v_page_ref( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 + char_2;
	return char_2;
}
double v_pager_link_page( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_8 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = v_SyMemBackendAlloc(int_2,int_2,-1 );

	short_2 = short_1 * short_2;
	double_3 = double_1 + double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "K") > 0)
	{
		double_4 = double_2 + double_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_SyMemBackendFree(float_1);

	char_1 = char_1 + char_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_1 = float_1;
		int_3 = int_1 + int_1;
		float_3 = float_1 * float_2;
		int_1 = int_2 * int_1;
		if(1)
		{
			long long_3 = 1;
			short short_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			long long_4 = 1;
			long_3 = long_1 + long_2;
			short_2 = short_3;
			int_2 = int_3;
			float_1 = float_1 * float_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				int int_4 = 1;
				int int_5 = 1;
				int int_6 = 1;
				unsigned int unsigned_int_4 = 1;
				if(1)
				{
					float float_4 = 1;
					float float_5 = 1;
					v_SyZero(int_2);

					float_5 = float_3 * float_4;
				}
				double_7 = double_5 + double_6;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
				int_4 = int_2 + int_4;
				if(1)
				{
					char char_2 = 1;
					char char_3 = 1;
					char_3 = char_1 + char_2;
				}
				double_2 = double_1 * double_4;
				int_6 = int_5 + int_5;
				unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
			}
			long_4 = long_4;
			double_5 = double_6 + double_7;
			double_2 = double_2 + double_7;
		}
	}
	return double_8;
}
long v_pager_get_page_contents( unsigned int parameter_1,long parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
		char_1 = char_2;
	}
	if(1)
	{
		int_1 = v_vedisOsRead(int_2,unsigned_int_3,int_1);

		int_2 = int_2 * int_1;
	}
	return long_1;
	v_SyZero(int_3);

}
char v_pager_alloc_page( long parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long_2 = long_1 * long_1;
	long_2 = long_3 + long_4;
	if(1)
	{
	}
	int_1 = v_SyMemBackendPoolAlloc(float_1,long_4);

	int_1 = int_2 * int_2;
	int_1 = int_1 + int_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_1;
	v_SyZero(int_2);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	return char_1;
}
int v_vedisGetPageSize()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	return int_2;
}
void v_vedisOsSectorSize( double parameter_1)
{
	if(1)
	{
	}
}
double v_GetSectorSize( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	long_3 = long_1 * long_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float_2 = float_1 * float_2;
		if(1)
		{
			v_vedisOsSectorSize(double_1);

			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		}
	}
	return double_1;
}
char v_SyDosTimeFormat( float parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int_2 = int_1 + int_1;
	int_1 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_2;
	long_2 = long_1 + long_2;
	char_4 = char_3 * char_1;
	int_2 = int_1 * int_3;
	float_2 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_4;
	return char_4;
}
double v_pager_extract_header( float parameter_1,unsigned int parameter_2,float parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	int int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	char char_4 = 1;
	float float_5 = 1;
	char_2 = char_1 + char_1;
	double_2 = double_1 + double_1;
	int_1 = int_1 * int_2;
	double_3 = double_2 * double_1;
	if(1)
	{
	}
	int_1 = int_3;
	double_3 = double_3;
	double_2 = double_3 * double_2;
	if(1)
	{
	}
	char_2 = char_3;
	float_2 = float_1 * float_1;
	v_SyMemcmp(char_1,float_2,short_1);

	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_3 = v_SyMemBackendDup(unsigned_int_1,int_2,short_2,-1 );

	int_2 = int_4 + int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
	}
	int_2 = int_4 + int_4;
	char_2 = v_SyBigEndianUnpack32(float_2,float_3);

	int_2 = int_1 + int_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	}
	float_4 = float_4 + float_3;
	if(1)
	{
	}
	v_SyBigEndianUnpack16(long_1,short_2);

	float_2 = float_4 + float_2;
	return double_2;
	char_4 = v_SyDosTimeFormat(float_5,float_3);

}
void v_pager_read_db_header( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	long long_4 = 1;
	short short_4 = 1;
	float float_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int_2 = int_1 * int_1;
	short_1 = short_1 * short_2;
	double_1 = v_GetSectorSize(float_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	double_2 = double_2;
	if(1)
	{
		long long_1 = 1;
		long long_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long_1 = long_1 * long_2;
		long_3 = long_2 + long_2;
		int_2 = int_2;
		if(1)
		{
			char_2 = char_3;
		}
		int_1 = v_vedisOsRead(int_1,unsigned_int_1,int_2);

		int_1 = int_2 * int_1;
		if(1)
		{
			char_2 = v_vedisFindKVStore(char_3,unsigned_int_2);

			char_2 = char_1 * char_1;
		}
		int_2 = v_vedisGetPageSize();

		double_3 = v_vedisGenOutofMem(float_1);

		v_SyZero(int_2);

		short_3 = short_1 * short_2;
		if(1)
		{
			int_3 = v_SyMemBackendAlloc(int_1,int_4,-1 );

			float_1 = float_2;
		}
		int_1 = int_4;
		if(1)
		{
			double_4 = double_2 + double_2;
		}
		double_1 = double_4 * double_4;
		long_4 = v_vedisPagerRegisterKvEngine(long_4,short_2,-1 );

		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		short_4 = short_1 + short_3;
		if(1)
		{
			float float_4 = 1;
			float_2 = v_vedisGenError(unsigned_int_1,float_3,-1 );

			float_4 = float_2 * float_3;
		}
		v_SyStrlen(unsigned_int_2);

		unsigned_int_4 = unsigned_int_4;
		if(1)
		{
		}
	}
	if(1)
	{
		double double_5 = 1;
		short_4 = short_2;
		short_3 = short_2 * short_3;
		double_3 = double_2 * double_5;
		long_2 = v_vedisOsFileSize(int_5,int_6);

		int_7 = int_2;
	}
	int_8 = int_8 + int_6;
	if(1)
	{
		int_5 = int_4;
	}
	double_3 = v_pager_extract_header(float_1,unsigned_int_2,float_2);

	int_2 = int_7 + int_8;
	float_3 = v_vedisGenErrorFormat(char_3,long_4,short_4);

}
int v_vedisOsCloseFree( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
		int int_2 = 1;
		long long_1 = 1;
		v_SyMemBackendFree(float_1);

		int_2 = int_1 * int_2;
		long_1 = long_1 * long_1;
	}
	return int_1;
}
float v_pager_fetch_page( char parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 + long_1;
		}
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	return float_1;
}
void v_pager_fill_page( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_2;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	long_1 = long_2 * long_3;
	float_1 = v_pager_fetch_page(char_1,unsigned_int_1);

	float_1 = v_SyMemcpy(char_2,int_1);

}
short v_vedisOsWrite( int parameter_1,long parameter_2,long parameter_3,char parameter_4)
{
	short short_1 = 1;
	return short_1;
}
long v_pager_cksum( unsigned int parameter_1,short parameter_2)
{
	long long_1 = 1;
	return long_1;
}
unsigned int v_pager_play_back_one_page( char parameter_1,long parameter_2,double parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_3 = 1;
	short_1 = v_vedisOsWrite(int_1,long_1,long_1,char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1;
	long_2 = v_pager_cksum(unsigned_int_4,short_2);

	short_3 = short_3 + short_4;
	double_2 = double_1 * double_1;
	int_2 = int_1;
	short_3 = short_3 * short_4;
	if(1)
	{
	}
	int_1 = int_1 * int_3;
	int_2 = v_vedisOsRead(int_2,unsigned_int_1,int_2);

	short_2 = short_2 + short_1;
	if(1)
	{
	}
	int_4 = int_3 * int_3;
	v_pager_fill_page(int_1,int_3);

	int_4 = int_5;
	if(1)
	{
	}
	char_2 = char_2 * char_3;
	double_2 = v_ReadInt32(short_4,float_1,int_5);

	char_1 = char_2 * char_4;
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = int_5 * int_5;
	if(1)
	{
		char_5 = v_ReadInt64(long_3,unsigned_int_3,short_3);

		long_2 = long_2 * long_1;
	}
	return unsigned_int_4;
}
unsigned int v_vedisOsTruncate( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
char v_ReadInt64( long parameter_1,unsigned int parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int_1 = v_vedisOsRead(int_2,unsigned_int_1,int_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 * char_2;
	unsigned_int_2 = v_SyBigEndianUnpack64(float_1,int_2);

	char_1 = char_2 * char_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return char_2;
}
double v_ReadInt32( short parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int_1 = v_vedisOsRead(int_1,unsigned_int_1,int_2);

	long_1 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	char_1 = v_SyBigEndianUnpack32(float_1,float_2);

	double_2 = double_1 * double_2;
	if(1)
	{
	}
	int_3 = int_3 * int_1;
	return double_3;
}
int v_vedisOsRead( int parameter_1,unsigned int parameter_3,int parameter_4)
{
	int int_1 = 1;
	return int_1;
}
unsigned int v_pager_read_journal_header( char parameter_1,int parameter_2,short parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	char char_4 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float_1 = float_1;
	int_1 = v_vedisOsRead(int_1,unsigned_int_1,int_1);

	float_3 = float_1 * float_2;
	double_2 = double_1 * double_1;
	long_1 = long_1 + long_1;
	char_2 = char_1 * char_1;
	double_2 = double_1 + double_2;
	char_2 = char_2 * char_3;
	if(1)
	{
	}
	if(1)
	{
	}
	long_2 = long_2 * long_1;
	if(1)
	{
	}
	if(1)
	{
	}
	char_1 = char_2 * char_4;
	long_3 = long_2 + long_3;
	if(1)
	{
	}
	short_1 = short_1 * short_2;
	int_1 = int_1;
	if(1)
	{
	}
	double_3 = double_2 * double_3;
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	float_2 = float_4 + float_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	float_3 = float_1;
	long_2 = v_vedisOsFileSize(int_1,int_2);

	short_3 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = v_ReadInt32(short_1,float_4,int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_3 * short_3;
	char_2 = v_ReadInt64(long_1,unsigned_int_1,short_4);

	double_2 = double_2 + double_3;
	return unsigned_int_4;
	v_SyMemcmp(char_1,float_4,short_4);

}
float v_pager_playback( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	char char_1 = 1;
	long long_3 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	char char_3 = 1;
	int_1 = v_SyMemBackendAlloc(int_1,int_2,-1 );

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 + float_2;
	int_1 = int_3 * int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 + long_1;
		}
		double_1 = v_vedisGenOutofMem(float_3);

		short_2 = short_1 + short_2;
	}
	unsigned_int_3 = v_pager_play_back_one_page(char_1,long_3,double_2);

	short_3 = short_4;
	if(1)
	{
		double_2 = double_2 * double_2;
	}
	unsigned_int_1 = v_vedisOsTruncate(unsigned_int_1,char_1);

	int_2 = int_2 + int_2;
	if(1)
	{
		v_SyMemBackendFree(float_2);

		float_2 = float_2;
	}
	float_4 = float_1 + float_2;
	int_3 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_2 = v_vedisGenErrorFormat(char_1,long_1,short_3);

		int_4 = int_2 + int_3;
		if(1)
		{
			if(1)
			{
				double double_3 = 1;
				double double_4 = 1;
				double_2 = double_2 * double_1;
				float_2 = v_vedisGenError(unsigned_int_2,float_1,-1 );

				double_2 = double_3 * double_4;
			}
		}
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		char char_2 = 1;
		unsigned_int_5 = v_vedisOsSync(int_1,int_3);

		char_2 = char_1 + char_1;
	}
	if(1)
	{
		v_SyZero(int_3);

		int_4 = int_3 * int_5;
	}
	return float_1;
	unsigned_int_1 = v_pager_read_journal_header(char_3,int_5,short_3);

}
unsigned int v_vedisOsSync( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
char v_vedisOsUnlock( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
float v_pager_unlock_db( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long_1 = long_1 * long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "MB") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		char_1 = v_vedisOsUnlock(float_1,int_1);

		double_1 = double_2;
		char_1 = char_1 + char_2;
	}
	return float_1;
}
int v_vedisOsDelete( int parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	return int_1;
}
long v_vedisOsFileSize( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
long v_vedisOsCheckReservedLock( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
double v_vedisOsAccess( float parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	return double_1;
}
char v_pager_has_hot_journal( unsigned int parameter_1,int parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	char controller4vul_1306[3];
	fgets(controller4vul_1306 ,3 ,stdin);
	if( strcmp( controller4vul_1306, "rA") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		char controller4vul_1307[2];
		fgets(controller4vul_1307 ,2 ,stdin);
		if( strcmp( controller4vul_1307, "I") < 0)
		{
			long long_3 = 1;
			char char_3 = 1;
			long_3 = long_2 + long_2;
			char_3 = char_2 * char_2;
			char controller4vul_1308[3];
			fgets(controller4vul_1308 ,3 ,stdin);
			if( strcmp( controller4vul_1308, "8c") > 0)
			{
				char controller4vul_1309[2];
				fgets(controller4vul_1309 ,2 ,stdin);
				if( strcmp( controller4vul_1309, ":") > 0)
				{
					char controller4vul_1310[3];
					fgets(controller4vul_1310 ,3 ,stdin);
					if( strcmp( controller4vul_1310, "Fg") > 0)
					{
						long long_4 = 1;
						int int_2 = 1;
						int int_3 = 1;
						int int_4 = 1;
						double_1 = v_pager_lock_db(long_2,int_1,uni_para);

						long_3 = long_2 * long_4;
						int_4 = int_2 + int_3;
					}
				}
				if(1)
				{
					double double_2 = 1;
					double_1 = double_2;
				}
			}
		}
	}
	return char_2;
}
double v_pager_journal_rollback( long parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	char char_2 = 1;
	int int_4 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_1304[2];
	fgets(controller4vul_1304 ,2 ,stdin);
	if( strcmp( controller4vul_1304, "6") > 0)
	{
		long long_1 = 1;
		double_1 = double_1 + double_1;
		long_1 = long_1 * long_1;
		char controller4vul_1305[2];
		fgets(controller4vul_1305 ,2 ,stdin);
		if( strcmp( controller4vul_1305, "a") < 0)
		{
			char_1 = v_pager_has_hot_journal(unsigned_int_1,int_1,uni_para);

		}
		if(1)
		{
		}
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1;
	}
	float_1 = float_1 + float_2;
	if(1)
	{
		double double_3 = 1;
		double_1 = double_1 + double_3;
		int_2 = int_1 + int_1;
	}
	int_2 = int_2;
	if(1)
	{
		int int_3 = 1;
		char_2 = char_1 * char_1;
		int_3 = int_1;
	}
	char_2 = char_1;
	int_4 = int_4 + int_1;
	float_2 = float_3;
	int_2 = int_1 * int_2;
	float_2 = float_2 * float_1;
	if(1)
	{
		int_4 = int_1 + int_2;
	}
	return double_1;
}
unsigned int v_vedisOsLock( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double v_pager_lock_db( long parameter_1,int parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float_1 = float_1 * float_2;
	char controller4vul_1311[2];
	fgets(controller4vul_1311 ,2 ,stdin);
	if( strcmp( controller4vul_1311, "E") > 0)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
		char controller4vul_1312[3];
		fgets(controller4vul_1312 ,3 ,stdin);
		if( strcmp( controller4vul_1312, "Ed") > 0)
		{
			int int_2 = 1;
			float_1 = v_vedisGenError(unsigned_int_1,float_1,uni_para);

			int_2 = int_1 * int_1;
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
		}
	}
	return double_1;
}
int v_pager_wait_on_lock( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = v_pager_lock_db(long_1,int_1,-1 );

	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			int int_2 = 1;
			float float_1 = 1;
			char_3 = char_1 * char_2;
			int_1 = int_1 * int_2;
			float_1 = float_1 * float_1;
		}
	}
	short_2 = short_1 + short_2;
	return int_1;
}
short v_SyBlobFormatAp( long parameter_1,long parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		if(1)
		{
		}
		double_1 = double_1 + double_2;
	}
	return short_2;
	long_1 = v_FormatMount(int_1,int_1,unsigned_int_1,int_1,char_1);

}
float v_vedisGenErrorFormat( char parameter_1,long parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = v_SyBlobFormatAp(long_1,long_1,int_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_1 = v_SyBlobAppend(float_1,double_1,float_2,-1 );

	int_1 = int_2 + int_2;
	long_2 = long_2 + long_1;
	float_5 = float_3 + float_4;
	char_1 = char_1 * char_1;
	return float_3;
}
short v_vedisOsOpen( unsigned int parameter_1,unsigned int parameter_2,float parameter_3,unsigned int parameter_4,long parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = short_2;
	float_1 = float_1 * float_2;
	int_1 = v_SyMemBackendAlloc(int_2,int_2,-1 );

	v_SyZero(int_2);

	int_1 = int_2 + int_2;
	if(1)
	{
	}
	v_SyMemBackendFree(float_3);

	short_2 = short_3;
	if(1)
	{
	}
	int_1 = int_2 + int_2;
	int_4 = int_2 + int_3;
	if(1)
	{
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long_1 = long_1 * long_1;
		char_1 = char_2;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
char v_pager_shared_lock( int parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_1298[3];
	fgets(controller4vul_1298 ,3 ,stdin);
	if( strcmp( controller4vul_1298, "Mr") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_1 = 1;
		char char_3 = 1;
		short short_1 = 1;
		char char_4 = 1;
		float_3 = float_1 * float_2;
		char_3 = char_1 * char_2;
		if(1)
		{
			short_1 = short_1;
		}
		float_2 = float_1;
		char controller4vul_1299[2];
		fgets(controller4vul_1299 ,2 ,stdin);
		if( strcmp( controller4vul_1299, "k") > 0)
		{
			short short_2 = 1;
			short short_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_4 = 1;
			if(1)
			{
				short_3 = short_2 * short_3;
				if(1)
				{
				}
			}
			double_2 = double_1 + double_2;
			if(1)
			{
			}
			char controller4vul_1300[2];
			fgets(controller4vul_1300 ,2 ,stdin);
			if( strcmp( controller4vul_1300, "P") > 0)
			{
				char controller4vul_1301[2];
				fgets(controller4vul_1301 ,2 ,stdin);
				if( strcmp( controller4vul_1301, "m") > 0)
				{
					double_2 = double_1 * double_2;
					char controller4vul_1302[3];
					fgets(controller4vul_1302 ,3 ,stdin);
					if( strcmp( controller4vul_1302, ".!") > 0)
					{
						long long_2 = 1;
						short_2 = short_2 * short_2;
						long_2 = long_1 + long_1;
						char controller4vul_1303[2];
						fgets(controller4vul_1303 ,2 ,stdin);
						if( strcmp( controller4vul_1303, "4") > 0)
						{
							double_3 = v_pager_journal_rollback(long_1,int_1,uni_para);

							double_3 = double_2;
							double_3 = double_3 * double_2;
						}
					}
					if(1)
					{
						int int_3 = 1;
						int_3 = int_2 + int_3;
						float_1 = float_1;
					}
				}
			}
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			int_4 = int_1 * int_2;
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
				if(1)
				{
					char_4 = char_3;
					int_2 = int_4 + int_4;
					short_3 = short_3 * short_1;
				}
			}
		}
		if(1)
		{
			char char_5 = 1;
			char_4 = char_5 + char_2;
		}
	}
	return char_2;
}
int v_vedisPagerAcquire( float parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	char char_2 = 1;
	int int_6 = 1;
	int_2 = int_1 * int_1;
	char_1 = v_pager_shared_lock(int_1,-1 );

	short_3 = short_1 + short_2;
	double_1 = v_pager_link_page(int_1,long_1);

	int_2 = int_3 * int_1;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "7$") == 0)
	{
		if(1)
		{
			short_3 = v_SyMemBackendPoolFree(short_2);

			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		long_2 = v_pager_get_page_contents(unsigned_int_3,long_1,int_1);

		short_3 = short_3;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_4 = 1;
		float_2 = float_1 * float_1;
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, "(I") > 0)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double_1 = v_vedisGenOutofMem(float_3);

			unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
		}
		float_3 = v_pager_fetch_page(char_1,unsigned_int_2);

		int_5 = int_2 + int_4;
		if(1)
		{
			char_1 = v_pager_alloc_page(long_3,long_1);

			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		}
		long_4 = long_1;
	}
	if(1)
	{
		if(1)
		{
			float float_4 = 1;
			float_4 = float_4;
		}
	}
	if(1)
	{
		char_2 = v_page_ref(char_2);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	return int_6;
}
short v_vedisKvIoPageGet( short parameter_1,float parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long_1 = long_1 * long_2;
	int_1 = v_vedisPagerAcquire(float_1,int_1,short_1,int_2,int_3);

	char_2 = char_1 * char_1;
	return short_1;
}
double v_pager_kv_io_init( float parameter_1,int parameter_2,double parameter_3,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float_1 = v_vedisKvIopageWrite(float_2,uni_para);

	long_2 = long_1 * long_2;
	short_2 = short_1 + short_2;
	char_3 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1 * double_2;
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	double_3 = double_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
	short_2 = short_2 * short_1;
	long_3 = long_2;
	long_4 = long_1 * long_2;
	long_4 = long_5 + long_4;
	char_2 = char_3 + char_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	return double_3;
}
double v_vedisGenOutofMem( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	double_1 = double_1 * double_2;
	float_1 = v_vedisGenError(unsigned_int_1,float_2,-1 );

	unsigned_int_1 = unsigned_int_1;
	return double_1;
}
float v_vedisReleaseCursor( short parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "M") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	short_1 = v_SyMemBackendPoolFree(short_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return float_1;
}
char v_pager_release_kv_engine( int parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	v_SyMemBackendFree(float_1);

	int_1 = int_2;
	short_1 = short_1 * short_2;
	if(1)
	{
		int int_3 = 1;
		double double_1 = 1;
		int_2 = int_1 + int_3;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		int_1 = int_2 * int_2;
	}
	long_1 = long_2;
	int_1 = int_4 * int_1;
	short_4 = short_3 * short_1;
	return char_1;
	float_2 = v_vedisReleaseCursor(short_2,long_3);

}
long v_vedisPagerRegisterKvEngine( long parameter_1,short parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	int int_7 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_2;
	float_1 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_2;
	int_1 = int_3 + int_1;
	char controller4vul_1290[3];
	fgets(controller4vul_1290 ,3 ,stdin);
	if( strcmp( controller4vul_1290, "pI") < 0)
	{
		char controller4vul_1291[3];
		fgets(controller4vul_1291 ,3 ,stdin);
		if( strcmp( controller4vul_1291, "Wc") < 0)
		{
			double_1 = v_pager_kv_io_init(float_1,int_3,double_1,uni_para);

		}
		int_3 = int_4;
	}
	short_1 = short_1 + short_1;
	char_2 = char_1 + char_2;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	int_1 = int_5;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		int_6 = int_4 * int_6;
	}
	long_3 = long_1 + long_2;
	char_1 = char_1 + char_2;
	int_6 = int_5 + int_4;
	float_3 = float_3 * float_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		if(1)
		{
			int_6 = int_6;
			int_7 = int_4 * int_3;
		}
		double_1 = double_1 * double_1;
	}
	int_4 = int_6 + int_3;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	}
	int_2 = int_7 * int_5;
	double_2 = double_1 + double_2;
	return long_1;
}
float v_randomByte()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_2;
	double_1 = double_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	short_1 = short_1 + short_1;
	short_1 = short_1 * short_1;
	return float_1;
}
float v_SyRandomness( double parameter_1,float parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_1;
	char_2 = char_1 * char_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_1 = 1;
			float float_3 = 1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			}
			float_1 = float_1;
			int_1 = int_2;
			if(1)
			{
				long_1 = long_1 + long_2;
			}
			float_2 = float_1 * float_2;
			int_4 = int_3 + int_2;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
			}
			double_1 = double_1 + double_1;
			long_1 = long_1 * long_1;
			if(1)
			{
				double double_2 = 1;
				double_2 = double_1 * double_2;
			}
			float_3 = float_1;
			long_2 = long_1 * long_2;
		}
	}
	return float_2;
	float_1 = v_randomByte();

}
short v_SyOSUtilRandomSeed(short parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = int_1 + int_1;
	float_1 = v_SyMemcpy(char_1,int_2);

	int_3 = int_1 * int_1;
	int_2 = int_2 * int_4;
	short_2 = short_1 + short_1;
	long_3 = long_1 + long_2;
	return short_1;
}
short v_SyRandomnessInit( int parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1 * int_2;
	long_1 = long_1 + long_1;
	double_2 = double_1 * double_1;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_2 * int_1;
	}
	double_2 = double_3 * double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = v_SyOSUtilRandomSeed(short_1);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_4 = 1;
		double double_5 = 1;
		short short_2 = 1;
		char char_4 = 1;
		double_5 = double_1 * double_4;
		double_2 = double_2 * double_2;
		short_2 = short_3;
		char_4 = char_2 * char_3;
	}
	unsigned_int_3 = unsigned_int_4;
	return short_3;
}
float v_vedisGenError( unsigned int parameter_1,float parameter_2,int uni_para)
{
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	short_1 = v_SyBlobAppend(float_1,double_1,float_1,uni_para);

	char_3 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2;
	return float_2;
}
char v_vedisFindKVStore( char parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double_1 = double_2;
	double_2 = double_3 * double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		v_SyStrlen(unsigned_int_1);

		int_1 = int_1 * int_1;
		if(1)
		{
		}
	}
	return char_1;
	unsigned_int_1 = v_SyStrnicmp(float_1,double_2,unsigned_int_2);

}
unsigned int v_SyStrnicmp( float parameter_1,double parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 * int_1;
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		float float_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
		}
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "g8") > 0)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		}
		float_3 = float_2;
		int_1 = int_3 * int_3;
		int_4 = int_2 * int_1;
		if(1)
		{
		}
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 + long_1;
		}
		float_4 = float_3 * float_2;
		long_2 = long_3;
		unsigned_int_2 = unsigned_int_3;
		if(1)
		{
		}
		if(1)
		{
			float_1 = float_2 + float_3;
		}
		long_4 = long_4;
		float_1 = float_3 + float_1;
		float_2 = float_1 * float_3;
		if(1)
		{
		}
		if(1)
		{
			float_4 = float_3 + float_1;
		}
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
		char_2 = char_1 + char_1;
	}
	return unsigned_int_4;
}
void v_vedisInMemory( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = v_SyStrnicmp(float_1,double_1,unsigned_int_1);

	float_4 = float_2 * float_3;
	if(1)
	{
	}
	v_SyStrlen(unsigned_int_2);

	long_1 = long_1;
	if(1)
	{
	}
	if(1)
	{
	}
}
int v_vedisPagerOpen( double parameter_1,unsigned int parameter_2,char parameter_3,double parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_4 = 1;
	long long_3 = 1;
	int int_7 = 1;
	double double_7 = 1;
	long long_4 = 1;
	int int_8 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double_1 = double_1 * double_1;
	double_2 = double_1;
	int_1 = int_2;
	long_1 = long_1;
	long_2 = long_2 * long_2;
	double_2 = double_2 * double_3;
	if(1)
	{
		float_2 = float_1 * float_1;
		short_1 = short_1 * short_2;
	}
	char controller4vul_1288[3];
	fgets(controller4vul_1288 ,3 ,stdin);
	if( strcmp( controller4vul_1288, "qD") > 0)
	{
		float_2 = float_1 + float_1;
		char controller4vul_1289[2];
		fgets(controller4vul_1289 ,2 ,stdin);
		if( strcmp( controller4vul_1289, "=") < 0)
		{
			long_1 = v_vedisPagerRegisterKvEngine(long_1,short_2,uni_para);

			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	int_2 = int_2 * int_3;
	double_2 = double_2 * double_3;
	int_3 = int_3 + int_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_5 * unsigned_int_1;
	}
	char_2 = char_1 * char_2;
	char_1 = char_1 + char_1;
	if(1)
	{
		double_5 = double_4 * double_4;
		int_3 = int_3;
	}
	float_1 = float_2;
	if(1)
	{
	}
	short_3 = short_2 * short_3;
	double_5 = double_3 + double_6;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_6;
	int_3 = int_1;
	double_5 = double_3;
	unsigned_int_5 = unsigned_int_3;
	float_1 = float_2 * float_1;
	if(1)
	{
		int_3 = int_5 * int_2;
		int_5 = int_6 + int_6;
	}
	short_3 = short_4 + short_3;
	char_1 = char_1 * char_1;
	long_3 = long_1 + long_2;
	double_2 = double_2 * double_5;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
	int_3 = int_6 * int_6;
	int_5 = int_1 * int_7;
	double_7 = double_7 * double_6;
	int_7 = int_1 + int_3;
	if(1)
	{
		float float_3 = 1;
		double double_8 = 1;
		long_4 = long_2 * long_2;
		unsigned_int_6 = unsigned_int_6;
		if(1)
		{
			int_4 = int_5 * int_7;
		}
		if(1)
		{
			long long_5 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int_7 = int_3;
			long_5 = long_3 * long_4;
			char_3 = char_4;
		}
		if(1)
		{
			short_3 = short_2 + short_3;
		}
		float_3 = float_1;
		if(1)
		{
			unsigned_int_5 = unsigned_int_2;
			double_7 = double_3 + double_2;
		}
		double_1 = double_7 * double_1;
		int_1 = int_7 * int_7;
		double_2 = double_4 + double_8;
	}
	int_4 = int_6 * int_8;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_5 * unsigned_int_5;
	}
	if(1)
	{
		int_3 = int_6 * int_7;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		long long_6 = 1;
		long_4 = long_3 * long_1;
		long_3 = long_3 * long_6;
	}
	short_6 = short_3 * short_5;
	return int_5;
}
void v_vedisSanityzeFlag( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2 + double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char_2 = char_1 * char_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 * int_2;
		}
	}
}
float v_vedisInitDatabase( int parameter_1,long parameter_2,short parameter_3,long parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = double_1 * double_2;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_1287[3];
	fgets(controller4vul_1287 ,3 ,stdin);
	if( strcmp( controller4vul_1287, "$o") < 0)
	{
		char char_2 = 1;
		char char_3 = 1;
		int_2 = v_vedisPagerOpen(double_2,unsigned_int_2,char_1,double_3,uni_para);

		char_3 = char_1 + char_2;
	}
	double_5 = double_1 * double_4;
	double_6 = double_2 * double_3;
	int_4 = int_2 * int_3;
	if(1)
	{
	}
	double_1 = double_4 + double_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
	float_1 = float_2;
	double_6 = double_4 * double_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
	long_2 = long_1 * long_2;
	return float_1;
}
unsigned int v_lhCursorReset( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_2;
	return unsigned_int_1;
	v_lhCursorFirst(double_1);

}
float v_lhCursorData( int parameter_1,long parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 * short_1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	char_1 = v_lhConsumeCellData(char_1,char_2,double_2);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	int_2 = int_1 * int_1;
	return float_1;
}
int v_lhCursorDataLength( int parameter_1,short parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char_1 = char_1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1;
	return int_1;
}
short v_lhCursorKey( double parameter_1,float parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	char_1 = char_1 * char_1;
	char_2 = char_1 + char_1;
	long_1 = v_lhConsumeCellkey(short_1,unsigned_int_1,int_1,int_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		long long_2 = 1;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_3 * char_2;
	}
	return short_2;
}
float v_lhCursorKeyLength( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	char_1 = char_1 + char_2;
	long_1 = long_1 + long_1;
	return float_1;
}
unsigned int v_lhRecordRemove( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = v_SyBigEndianUnpack64(float_1,int_1);

	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		long_1 = v_lhUnlinkCell(float_2);

		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		int_2 = int_1 * int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			double double_2 = 1;
			char_2 = char_1 * char_2;
			if(1)
			{
			}
			double_1 = v_lhRestorePage(float_3,unsigned_int_2);

			int_3 = int_1 * int_1;
			int_3 = int_2 + int_1;
			if(1)
			{
			}
			double_2 = double_1;
			if(1)
			{
				char char_3 = 1;
				char_3 = char_2 + char_1;
			}
		}
	}
	double_1 = double_1;
	return unsigned_int_5;
}
short v_lhCursorDelete( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int_1 = int_2;
	char_1 = char_1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = v_lhRecordRemove(char_2);

	char_3 = char_3 + char_2;
	long_1 = long_1 * long_2;
	return short_1;
}
char v_lhCursorPrev( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 + char_2;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 + int_3;
	}
	float_3 = float_1 + float_2;
	long_1 = long_1 * long_2;
	if(1)
	{
		short_1 = v_lhCursorPrevPage(double_1);

		long_2 = long_1 * long_1;
	}
	return char_3;
}
long v_lhCursorNext( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long_1 = long_2;
	float_1 = float_2;
	double_3 = double_1 + double_2;
	if(1)
	{
		float_3 = v_lhCursorNextPage();

		double_2 = double_2 * double_1;
	}
	char_2 = char_1 * char_1;
	char_3 = char_3 * char_4;
	if(1)
	{
		double double_4 = 1;
		double_4 = double_2 * double_4;
	}
	return long_1;
}
char v_lhCursorValid( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float_2 = float_1 + float_1;
	return char_1;
}
short v_lhCursorPrevPage( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_2;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		float float_2 = 1;
		int int_4 = 1;
		float float_3 = 1;
		double_1 = double_1 + double_1;
		if(1)
		{
			v_lhLoadPage(long_1,long_2,long_2,long_1,int_3);

			double_1 = double_1;
		}
		if(1)
		{
			float float_1 = 1;
			double_1 = double_1 * double_1;
			float_2 = float_1 + float_2;
		}
		int_2 = int_4 * int_4;
		long_1 = long_2 * long_1;
		if(1)
		{
		}
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "t)") < 0)
		{
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_2 = 1;
			double_2 = double_1 + double_2;
			double_1 = double_2;
			double_2 = double_1 + double_3;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		}
		float_3 = float_2;
	}
	return short_1;
}
unsigned int v_lhCursorLast()
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_2 = float_1 + float_1;
	double_2 = double_1 + double_1;
	short_1 = short_2;
	if(1)
	{
		long long_1 = 1;
		double_2 = double_3;
		if(1)
		{
		}
		long_1 = long_1 * long_1;
	}
	short_1 = v_lhCursorPrevPage(double_3);

	short_1 = short_2 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return unsigned_int_2;
}
float v_lhCursorNextPage()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	v_lhLoadPage(long_1,long_2,long_2,long_2,int_1);

	int_2 = int_1 * int_2;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_2 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		double double_1 = 1;
		int int_5 = 1;
		float float_2 = 1;
		int int_6 = 1;
		int_3 = int_1 * int_4;
		if(1)
		{
			long long_3 = 1;
			long_3 = long_3 * long_3;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			double_1 = double_1;
		}
		int_5 = int_4 + int_5;
		float_1 = float_1 * float_2;
		if(1)
		{
		}
		if(1)
		{
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double_2 = double_1 + double_2;
			char_3 = char_1 + char_2;
			unsigned_int_2 = unsigned_int_3;
			short_1 = short_2;
		}
		int_3 = int_6 * int_5;
	}
	return float_1;
}
void v_lhCursorFirst( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_2;
	float_1 = v_lhCursorNextPage();

	char_1 = char_1 + char_2;
	short_1 = short_2;
	if(1)
	{
		int_2 = int_1;
		if(1)
		{
		}
		float_1 = float_1 + float_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
}
unsigned int v_lhRecordLookup( unsigned int parameter_1,char parameter_2,long parameter_3,float parameter_4)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_4 = 1;
	double double_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float_1 = float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1;
	short_1 = short_1;
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	short_1 = v_lhMapFindBucket(unsigned_int_4,long_2);

	v_lhLoadPage(long_3,long_2,long_2,long_1,int_1);

	short_2 = short_2 * short_3;
	double_1 = v_lhFindCell(char_1,double_1,long_4,double_2);

	char_1 = char_2;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_2 * float_2;
	}
	int_2 = int_2 * int_3;
	if(1)
	{
	}
	double_3 = double_1 + double_3;
	if(1)
	{
	}
	int_3 = int_3 + int_1;
	if(1)
	{
	}
	if(1)
	{
		short_1 = short_3 * short_1;
	}
	return unsigned_int_5;
}
float v_lhCursorSeek( int parameter_1,short parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	long long_2 = 1;
	unsigned_int_1 = v_lhRecordLookup(unsigned_int_2,char_1,long_1,float_1);

	char_2 = char_2;
	int_2 = int_1 + int_1;
	float_2 = float_2;
	if(1)
	{
		double double_1 = 1;
		unsigned_int_2 = unsigned_int_2;
		double_1 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	long_2 = long_2 * long_1;
	return float_1;
}
char v_lhInitCursor( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_2;
	double_1 = double_3 + double_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1;
	double_2 = double_2;
	return char_1;
}
void v_lhash_kv_append( char parameter_1,short parameter_2,int parameter_3,short parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double_1 = double_2;
	float_1 = v_lh_record_insert(float_2,short_1,double_1,char_1,float_1,int_1);

	double_3 = double_3 + double_1;
}
double v_lhRestorePage( float parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float_3 = float_1 * float_2;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	long_2 = v_SyBigEndianPack64(unsigned_int_1,float_4);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	double_1 = double_1 + double_2;
	double_4 = double_1 + double_3;
	return double_1;
}
void v_lhRecordOverwrite( long parameter_1,char parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_4 = 1;
	int int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_4 = 1;
	int int_5 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	double double_7 = 1;
	char char_8 = 1;
	char char_9 = 1;
	float_1 = float_1 + float_2;
	char_1 = char_2;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_1;
	double_2 = double_1 + double_2;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		long_1 = long_1;
		if(1)
		{
			double_2 = double_1;
		}
		if(1)
		{
			int_1 = int_3 + int_3;
			int_2 = int_1 + int_2;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
			unsigned_int_3 = unsigned_int_6 + unsigned_int_3;
			if(1)
			{
				long_2 = long_1 + long_1;
				if(1)
				{
				}
				long_2 = v_lhAllocateSpace(char_2,int_3,short_1);

				int_1 = int_3;
				char_3 = v_lhMoveLocalCell(double_1,float_2,long_2,long_1);

				unsigned_int_7 = unsigned_int_1 + unsigned_int_4;
				unsigned_int_6 = unsigned_int_6 + unsigned_int_1;
			}
			if(1)
			{
				unsigned_int_8 = unsigned_int_4 * unsigned_int_5;
				short_2 = short_1 + short_3;
				long_2 = v_SyBigEndianPack64(unsigned_int_4,float_1);

				float_2 = float_3 + float_3;
				double_2 = double_1 + double_2;
			}
		}
	}
	float_4 = v_SyMemcpy(char_4,int_4);

	double_2 = v_lhCellWriteOvflPayload(long_1,unsigned_int_6,double_3,short_3);

	unsigned_int_9 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
	}
	double_2 = double_4 + double_4;
	int_3 = int_2 + int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short_2 = short_2 + short_3;
		}
		if(1)
		{
			int_4 = int_5 + int_4;
		}
		float_4 = float_3 * float_3;
		if(1)
		{
			char_5 = char_2 + char_5;
			unsigned_int_7 = unsigned_int_1 * unsigned_int_9;
		}
	}
	double_1 = double_2 * double_3;
	double_2 = v_lhRestorePage(float_2,unsigned_int_9);

	double_1 = double_4;
	unsigned_int_11 = unsigned_int_10 * unsigned_int_5;
	unsigned_int_4 = unsigned_int_10 + unsigned_int_8;
	double_1 = double_2 * double_4;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_5 = 1;
		unsigned int unsigned_int_12 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_13 = 1;
		char char_7 = 1;
		short_1 = short_1 * short_2;
		if(1)
		{
			double double_6 = 1;
			double_7 = double_5 * double_6;
		}
		if(1)
		{
			short short_4 = 1;
			short short_5 = 1;
			int int_6 = 1;
			int int_7 = 1;
			int int_8 = 1;
			char char_6 = 1;
			short_1 = short_4 + short_1;
			if(1)
			{
			}
			unsigned_int_6 = unsigned_int_10 + unsigned_int_7;
			if(1)
			{
			}
			short_4 = short_5 * short_3;
			int_5 = int_6 * int_2;
			short_3 = short_4;
			float_1 = float_2;
			int_7 = int_7 * int_8;
			char_3 = char_4 + char_6;
		}
		unsigned_int_11 = unsigned_int_12 + unsigned_int_12;
		double_8 = double_2 + double_4;
		if(1)
		{
			double double_9 = 1;
			double_5 = double_1 + double_9;
		}
		unsigned_int_13 = unsigned_int_1 * unsigned_int_6;
		char_3 = char_3 + char_3;
		char_7 = char_2 * char_7;
	}
	char_5 = char_1;
	double_4 = v_lhAcquirePage(double_4,char_8);

	char_8 = char_4 * char_2;
	char_9 = v_lhRestoreSpace(double_7,unsigned_int_6,char_3);

	unsigned_int_10 = v_SyBigEndianUnpack64(float_2,int_4);

	int_4 = int_3 + int_1;
}
char v_lhMoveLocalCell( double parameter_1,float parameter_2,long parameter_3,long parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	short_1 = v_lhCellWriteLocalPayload(int_1,int_3,long_1,short_2,char_1);

	char_1 = char_2 * char_3;
	if(1)
	{
		double double_1 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
		double_2 = double_2 * double_2;
	}
	if(1)
	{
		int int_4 = 1;
		float_1 = float_1;
		int_4 = int_3 + int_3;
	}
	short_2 = short_1 + short_1;
	short_2 = short_3 + short_1;
	short_3 = short_2;
	char_4 = v_lhFindSibeling(char_2);

	double_2 = v_SyBigEndianPack16(char_2,unsigned_int_2);

	int_2 = int_1 * int_5;
	return char_1;
	float_1 = v_lhCellWriteHeader(short_3);

}
char v_lhRecordAppend( char parameter_1,short parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	short short_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_5 = 1;
	int int_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_6 = 1;
	short short_5 = 1;
	double double_4 = 1;
	long long_4 = 1;
	double double_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_6 = 1;
	float_1 = v_SyBlobInit(float_2,long_1);

	double_1 = v_lhAcquirePage(double_2,char_1);

	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_2 * int_2;
	float_3 = float_2 * float_2;
	short_1 = short_2;
	long_1 = long_1 * long_1;
	float_1 = float_3 * float_2;
	long_1 = long_1 + long_2;
	short_3 = short_1;
	if(1)
	{
		long_3 = long_1 * long_1;
	}
	int_1 = int_3;
	if(1)
	{
	}
	if(1)
	{
		int_4 = int_1;
		long_2 = v_lhAllocateSpace(char_2,int_1,short_4);

		char_4 = char_3 + char_4;
		if(1)
		{
			int_1 = int_2 + int_4;
			if(1)
			{
			}
			float_1 = float_2 + float_3;
			float_5 = float_2 * float_4;
			float_7 = float_1 + float_6;
		}
		if(1)
		{
			int int_6 = 1;
			long_3 = long_2 * long_3;
			double_2 = double_2 * double_2;
			unsigned_int_2 = v_SyBigEndianUnpack64(float_5,int_4);

			float_4 = v_SyMemcpy(char_5,int_5);

			int_6 = int_3;
			double_1 = double_1 + double_3;
			short_4 = short_2 + short_1;
			if(1)
			{
				char_3 = v_lhRestoreSpace(double_1,unsigned_int_3,char_6);

				double_3 = double_3;
			}
			if(1)
			{
				float_5 = v_SyBlobRelease(short_4);

				int_4 = int_4 + int_6;
			}
			short_5 = short_2 * short_1;
			long_3 = v_SyBigEndianPack64(unsigned_int_1,float_3);

			int_5 = int_1;
			char_5 = char_4;
		}
	}
	short_5 = short_3 * short_4;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1;
	float_5 = float_7 * float_2;
	double_4 = v_lhCellWriteOvflPayload(long_4,unsigned_int_1,double_4,short_4);

	long_4 = long_4;
	double_5 = double_2 * double_2;
	short_6 = short_3 * short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_7 = 1;
			if(1)
			{
				double_2 = double_4;
			}
			short_4 = v_SyBlobAppend(float_5,double_4,float_2,-1 );

			unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
			if(1)
			{
			}
			char_2 = char_7;
			float_6 = float_6 * float_1;
			float_4 = float_7 * float_5;
			float_2 = float_5 + float_6;
			char_6 = v_lhMoveLocalCell(double_1,float_6,long_4,long_4);

			int_4 = int_2 * int_5;
			double_5 = double_1 + double_5;
		}
		if(1)
		{
			char_1 = char_5 * char_4;
			double_2 = double_3 + double_2;
		}
		if(1)
		{
			long_4 = long_1 * long_1;
		}
		long_4 = long_5 * long_6;
	}
	unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
	float_6 = float_6 + float_7;
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_8 = 1;
		double double_6 = 1;
		short_4 = short_1;
		if(1)
		{
			char_6 = char_4;
		}
		if(1)
		{
			int int_7 = 1;
			int int_8 = 1;
			unsigned int unsigned_int_7 = 1;
			float_1 = float_4 * float_6;
			if(1)
			{
			}
			long_2 = long_5 * long_2;
			if(1)
			{
			}
			int_1 = int_7;
			int_4 = int_8 * int_8;
			unsigned_int_5 = unsigned_int_5 + unsigned_int_7;
			double_3 = double_3 + double_1;
			double_2 = double_2;
			double_3 = double_1 + double_3;
		}
		float_8 = float_8 * float_1;
		long_2 = long_6 + long_6;
		if(1)
		{
			unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
		}
		double_3 = double_6 + double_2;
		short_6 = short_3;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_6;
	}
	short_4 = short_5 + short_2;
	double_1 = double_2 + double_2;
	char_3 = char_1;
	return char_4;
}
char v_lhFindSibeling( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	long_3 = long_1 + long_2;
	return char_1;
}
long v_lhUnlinkCell( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1 * float_2;
	char_1 = v_lhFindSibeling(char_1);

	double_3 = v_SyBigEndianPack16(char_2,unsigned_int_1);

	char_2 = char_2;
	short_2 = short_1 * short_1;
	long_1 = v_lhCellDiscard();

	float_1 = float_1;
	if(1)
	{
	}
	double_3 = double_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_5 = short_3 * short_4;
		char_2 = v_lhRestoreSpace(double_1,unsigned_int_3,char_3);

		unsigned_int_3 = unsigned_int_4;
	}
	if(1)
	{
		short short_6 = 1;
		short_2 = short_5 + short_6;
	}
	long_3 = long_1 * long_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	return long_3;
}
char v_lhConsumeCellData( char parameter_1,char parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_3 = 1;
	int int_6 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	float_3 = float_1 + float_2;
	short_1 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		long long_2 = 1;
		short_3 = short_3;
		long_1 = long_2;
		if(1)
		{
			int_1 = int_1 + int_1;
		}
	}
	if(1)
	{
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		float_1 = float_3 + float_2;
		int_2 = int_2;
		double_1 = double_1 + double_2;
		double_3 = double_3 * double_3;
		float_1 = float_2 * float_1;
		int_4 = int_2 + int_3;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_1 = 1;
			int int_5 = 1;
			double double_4 = 1;
			long long_3 = 1;
			char char_2 = 1;
			if(1)
			{
				char_1 = char_1 * char_1;
			}
			int_5 = int_1 * int_1;
			if(1)
			{
			}
			double_2 = double_4 * double_1;
			if(1)
			{
				short short_4 = 1;
				short_3 = short_4 * short_3;
				char_1 = char_1;
				short_2 = short_3 + short_2;
			}
			if(1)
			{
				long_3 = long_1 + long_1;
				int_2 = int_2 + int_2;
			}
			if(1)
			{
				long long_4 = 1;
				long_4 = long_3 * long_4;
				if(1)
				{
					short short_5 = 1;
					short_1 = short_5 + short_5;
				}
				unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
			}
			if(1)
			{
				if(1)
				{
					double_4 = double_2;
					if(1)
					{
						unsigned int unsigned_int_4 = 1;
						unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
					}
					double_1 = double_3 + double_2;
				}
			}
			char_3 = char_1 * char_2;
			unsigned_int_2 = v_SyBigEndianUnpack64(float_3,int_6);

			float_1 = float_3 + float_3;
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	return char_3;
}
long v_SyBlobReset( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short_2 = short_1 + short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "88") > 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char_3 = char_1 * char_2;
		int_1 = int_1 * int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	return long_1;
}
short v_SyBlobDup( long parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_1;
	}
	return short_1;
	short_1 = v_SyBlobAppend(float_1,double_2,float_2,-1 );

}
short v_lhTransferCell( long parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_2;
	long_3 = long_1 * long_2;
	int_1 = v_lhInstallCell(char_1);

	float_3 = float_1 + float_2;
	if(1)
	{
		double_1 = double_1 * double_1;
		if(1)
		{
		}
	}
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	float_1 = v_lhCellWriteHeader(short_3);

	double_4 = double_2 + double_3;
	long_2 = v_lhAllocateSpace(char_3,int_1,short_3);

	double_1 = double_1 + double_2;
	char_5 = char_4 * char_4;
	float_3 = float_3 * float_2;
	int_3 = int_2 + int_2;
	double_2 = double_3 * double_1;
	short_2 = v_SyBlobDup(long_3,long_1);

	float_4 = float_2 * float_3;
	long_3 = long_3 + long_3;
	double_1 = double_1 + double_4;
	if(1)
	{
	}
	unsigned_int_3 = v_lhNewCell(unsigned_int_2,int_2);

	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	return short_1;
	float_3 = v_lhFindSlavePage(double_2,char_4,int_3,float_5);

}
void v_lhPageSplit( int parameter_1,unsigned int parameter_2,short parameter_3,long parameter_4)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	short short_2 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	double double_6 = 1;
	long long_3 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_4 = 1;
	float_1 = v_SyBlobRelease(short_1);

	int_2 = int_1 * int_2;
	long_1 = v_lhUnlinkCell(float_2);

	int_3 = int_1 + int_1;
	int_3 = int_4;
	char_1 = char_1;
	char_1 = v_lhConsumeCellData(char_2,char_3,double_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		if(1)
		{
			long_1 = v_SyBlobReset(unsigned_int_1);

			int_5 = int_2 + int_1;
		}
		long_1 = v_lhConsumeCellkey(short_2,unsigned_int_1,int_3,int_5);

		double_1 = double_2;
		int_4 = v_lhStoreCell(long_1,float_3,int_4,int_1,float_4,char_1,int_5);

		char_3 = char_3 + char_2;
		if(1)
		{
			double double_3 = 1;
			int int_6 = 1;
			long long_4 = 1;
			double_1 = double_3;
			if(1)
			{
				double double_4 = 1;
				double_5 = double_1 + double_4;
			}
			if(1)
			{
				double double_7 = 1;
				int_4 = int_6;
				if(1)
				{
					double_2 = v_vedisDataConsumer(long_2,char_1);

					double_6 = double_3 + double_6;
					if(1)
					{
						int_4 = int_4 + int_1;
					}
				}
				float_2 = float_4;
				if(1)
				{
					long_2 = long_2 + long_3;
				}
				double_6 = double_7 + double_6;
			}
			if(1)
			{
				int_4 = int_2 * int_6;
			}
			float_3 = v_SyBlobInit(float_4,long_3);

			short_2 = v_lhTransferCell(long_3,double_6);

			long_4 = long_4 + long_1;
		}
		double_5 = double_2 * double_1;
	}
	double_6 = double_6 * double_8;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
}
short v_lhSplit( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	short short_3 = 1;
	int_1 = int_1 * int_2;
	int_2 = v_lhMapWriteRecord(int_1,float_1,short_1);

	int_2 = int_3;
	long_2 = long_1 + long_1;
	float_1 = float_2 * float_1;
	int_3 = int_2 * int_1;
	v_lhLoadPage(long_2,long_3,long_2,long_4,int_4);

	v_lhPageSplit(int_3,unsigned_int_1,short_1,long_2);

	int_3 = int_2 + int_4;
	if(1)
	{
	}
	int_1 = int_4 + int_1;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	long_4 = long_3 + long_5;
	if(1)
	{
	}
	float_3 = float_2 + float_1;
	if(1)
	{
		long_5 = v_SyBigEndianPack64(unsigned_int_1,float_2);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	float_3 = float_2 * float_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
		int_3 = int_2 + int_2;
	}
	double_2 = double_2 * double_2;
	int_3 = int_3 * int_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		int_4 = int_2 + int_4;
		char_1 = char_1;
		short_2 = v_lhMapFindBucket(unsigned_int_4,long_3);

		unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			int int_5 = 1;
			double_3 = v_lhAcquirePage(double_4,char_2);

			int_2 = int_5;
		}
		float_3 = float_1;
		double_2 = double_1 * double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		short_3 = v_lhNewPage(long_5,short_1,long_1);

		char_1 = v_lhSetEmptyPage(unsigned_int_2);

		unsigned_int_6 = unsigned_int_7;
	}
	double_2 = double_4 * double_3;
	return short_1;
}
float v_lhRecordInstall( unsigned int parameter_1,long parameter_2,unsigned int parameter_3,unsigned int parameter_4,float parameter_5,long parameter_6)
{
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	float float_3 = 1;
	int_1 = v_lhStoreCell(long_1,float_1,int_2,int_2,float_2,char_1,int_2);

	long_3 = long_1 + long_2;
	long_2 = long_4;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short_1 = v_lhSplit(long_1,int_2);

		unsigned_int_1 = unsigned_int_1;
		double_2 = double_1 + double_1;
		if(1)
		{
			if(1)
			{
			}
			int_2 = int_1 * int_2;
		}
	}
	return float_3;
}
int v_lhKeyCmp( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_1;
	short_1 = short_1 + short_2;
	if(1)
	{
		if(1)
		{
		}
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	return int_2;
}
double v_lhFindCell( char parameter_1,double parameter_2,long parameter_3,double parameter_4)
{
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	long_1 = v_lhConsumeCellkey(short_1,unsigned_int_1,int_1,int_2);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
		}
		if(1)
		{
			if(1)
			{
				int int_3 = 1;
				unsigned int unsigned_int_5 = 1;
				long long_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int_3 = int_2 * int_3;
				int_1 = v_lhKeyCmp(unsigned_int_3,short_1);

				unsigned_int_2 = unsigned_int_5;
				float_1 = float_2 * float_1;
				long_1 = long_2;
				int_3 = int_1 + int_2;
				double_2 = double_1 * double_2;
				if(1)
				{
				}
			}
			if(1)
			{
			}
		}
		int_2 = int_4 + int_1;
	}
	return double_3;
}
double v_vedisDataConsumer( long parameter_1,char parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short_1 = v_SyBlobAppend(float_1,double_1,float_2,-1 );

	int_2 = int_1 * int_2;
	long_1 = long_1 * long_1;
	return double_1;
}
long v_lhConsumeCellkey( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_6)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_3 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1;
	short_2 = short_2 * short_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		double_2 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "<a") < 0)
		{
			v_SyBigEndianUnpack16(long_1,short_1);

			int_1 = int_1 + int_1;
		}
	}
	if(1)
	{
		long long_2 = 1;
		double_2 = double_2 + double_2;
		short_1 = short_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
		unsigned_int_4 = v_SyBigEndianUnpack64(float_1,int_1);

		long_2 = long_2 + long_2;
		short_1 = short_2 + short_1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_2 = 1;
			double double_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			if(1)
			{
				long_1 = long_1 * long_3;
			}
			int_1 = int_1;
			if(1)
			{
			}
			float_1 = float_2 * float_1;
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				long long_4 = 1;
				float float_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
				long_4 = long_1;
				double_1 = double_2 * double_3;
				float_3 = float_1 * float_1;
				if(1)
				{
					short_2 = short_1 + short_1;
				}
				double_5 = double_4 + double_4;
			}
			if(1)
			{
				double_2 = double_1 + double_3;
				if(1)
				{
					char char_1 = 1;
					char char_2 = 1;
					char_1 = char_1 * char_2;
				}
				short_1 = short_2 * short_2;
			}
			if(1)
			{
				char char_3 = 1;
				char char_4 = 1;
				char_4 = char_3 + char_4;
				if(1)
				{
					unsigned int unsigned_int_6 = 1;
					unsigned_int_3 = unsigned_int_1 + unsigned_int_6;
				}
				int_2 = int_1 + int_1;
			}
			int_2 = int_3 * int_4;
			float_2 = float_2;
		}
		unsigned_int_2 = unsigned_int_4;
	}
	return long_3;
}
short v_lhParseOneCell( double parameter_1,double parameter_2,double parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	char char_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	double_1 = v_vedisDataConsumer(long_1,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_2 + double_3;
	float_1 = float_1;
	float_2 = float_1 * float_1;
	int_3 = int_1 * int_3;
	double_3 = double_3 * double_3;
	char_1 = v_SyBigEndianUnpack32(float_3,float_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_1;
	unsigned_int_3 = v_SyBigEndianUnpack64(float_2,int_2);

	double_2 = double_1 * double_3;
	unsigned_int_4 = v_lhNewCell(unsigned_int_5,int_1);

	double_1 = double_2 + double_2;
	int_4 = v_lhInstallCell(char_2);

	int_2 = int_2 * int_3;
	if(1)
	{
	}
	short_2 = short_3;
	float_3 = float_1 + float_3;
	if(1)
	{
	}
	double_4 = double_4 + double_1;
	int_2 = int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	char_3 = char_4;
	int_2 = int_4 + int_5;
	long_1 = long_2 + long_1;
	short_4 = short_3 + short_2;
	v_SyBigEndianUnpack16(long_1,short_2);

	unsigned_int_5 = unsigned_int_6;
	if(1)
	{
		long_3 = v_lhConsumeCellkey(short_4,unsigned_int_4,int_1,int_1);

		float_3 = v_SyBlobRelease(short_2);

		double_2 = double_4;
	}
	unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
		double double_5 = 1;
		double_2 = double_5;
	}
	return short_2;
}
short v_lhPageFreeSpace( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 + int_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	int_2 = int_2;
	long_2 = long_2 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		int int_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		v_SyBigEndianUnpack16(long_1,short_1);

		double_3 = double_3 * double_1;
		unsigned_int_1 = unsigned_int_2;
		int_3 = int_2 + int_2;
		if(1)
		{
			double_2 = double_1 * double_2;
		}
		double_5 = double_4 + double_1;
		if(1)
		{
		}
	}
	float_1 = float_1 * float_1;
	return short_2;
}
short v_lhLoadCells( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_2 = double_1 + double_2;
	short_1 = v_lhPageFreeSpace(long_1);

	int_1 = int_1;
	int_3 = int_1 + int_2;
	float_1 = float_1;
	short_3 = short_2 + short_2;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_3 + int_1;
	char_1 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
		if(1)
		{
			char char_3 = 1;
			char_3 = char_3 * char_2;
		}
		short_1 = v_lhParseOneCell(double_3,double_4,double_4,unsigned_int_1);

		unsigned_int_2 = unsigned_int_3;
		if(1)
		{
		}
	}
	return short_2;
}
int v_lhParsePageHeader( double parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_1;
	unsigned_int_2 = v_SyBigEndianUnpack64(float_1,int_2);

	char_1 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1;
	double_2 = double_1 * double_2;
	return int_2;
	v_SyBigEndianUnpack16(long_1,short_1);

}
void v_lhLoadPage( long parameter_1,long parameter_2,long parameter_3,long parameter_4,int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	long_3 = long_1 * long_2;
	char_3 = char_1 + char_2;
	int_3 = int_1 + int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		short_1 = v_lhLoadCells(unsigned_int_1);

		int_1 = int_3 + int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_4 = 1;
		int_2 = v_lhParsePageHeader(double_2);

		float_3 = float_1 * float_2;
		if(1)
		{
		}
		int_1 = int_4 * int_4;
		if(1)
		{
			int_2 = int_4 + int_3;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			if(1)
			{
				double double_3 = 1;
				double_2 = double_3;
			}
			short_2 = v_lhNewPage(long_1,short_2,long_3);

			int_1 = int_3 * int_4;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
}
int v_lhMapWriteRecord( int parameter_1,float parameter_2,short parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_3 = 1;
	int int_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	long_1 = v_SyBigEndianPack64(unsigned_int_1,float_1);

	double_1 = double_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	char_2 = char_1 + char_2;
	if(1)
	{
		char char_3 = 1;
		double double_3 = 1;
		char char_4 = 1;
		char char_6 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		double_2 = v_lhAcquirePage(double_1,char_2);

		char_1 = char_3 * char_2;
		if(1)
		{
		}
		float_2 = float_1 + float_2;
		if(1)
		{
		}
		unsigned_int_4 = unsigned_int_3;
		short_1 = v_lhMapInstallBucket(short_1,double_1,short_1);

		double_2 = double_1 * double_3;
		char_3 = char_4;
		char_6 = char_3 * char_5;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_1;
		if(1)
		{
		}
		if(1)
		{
			short_2 = short_3;
		}
		if(1)
		{
			double double_4 = 1;
			int_1 = int_1 * int_1;
			double_4 = double_4 * double_4;
		}
		double_3 = double_2 + double_3;
		if(1)
		{
		}
		short_3 = short_2 + short_2;
	}
	if(1)
	{
		long_1 = long_1 + long_1;
		if(1)
		{
		}
	}
	unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
	if(1)
	{
	}
	long_3 = long_2 + long_2;
	unsigned_int_7 = unsigned_int_1 + unsigned_int_5;
	float_3 = float_2 * float_2;
	v_SyBigEndianPack32(int_2,double_5);

	int_2 = int_1 * int_3;
	long_1 = long_3 * long_1;
	if(1)
	{
		char char_7 = 1;
		char_1 = char_7 * char_5;
		if(1)
		{
			long long_4 = 1;
			long_1 = long_1 * long_4;
		}
		if(1)
		{
			float_3 = float_3 * float_2;
			if(1)
			{
			}
			unsigned_int_3 = unsigned_int_4 * unsigned_int_7;
		}
	}
	return int_2;
}
float v_lhCellWriteHeader( short parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_5 = 1;
	v_SyBigEndianPack32(int_1,double_1);

	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_2 + double_2;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1;
	int_4 = int_1 + int_3;
	short_1 = short_1 + short_1;
	double_3 = double_3 + double_4;
	long_1 = v_SyBigEndianPack64(unsigned_int_3,float_1);

	double_4 = double_4 + double_3;
	float_3 = float_2 * float_2;
	double_5 = v_SyBigEndianPack16(char_2,unsigned_int_3);

	int_3 = int_4 + int_3;
	int_2 = int_2 * int_4;
	double_2 = double_4 + double_4;
	int_3 = int_2 + int_3;
	double_5 = double_3 + double_5;
	return float_2;
}
short v_lhCellWriteLocalPayload( int parameter_1,int parameter_2,long parameter_3,short parameter_4,char parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1;
	float_1 = v_SyMemcpy(char_1,int_3);

	long_1 = long_1 * long_1;
	double_1 = double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "T") < 0)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_3 = double_4;
	}
	return short_1;
}
long v_lhCellDiscard()
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	long long_1 = 1;
	short_1 = v_SyMemBackendPoolFree(short_2);

	float_2 = float_1 + float_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_3;
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_1 * float_3;
	}
	float_1 = v_SyBlobRelease(short_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
	float_2 = float_1 + float_4;
	return long_1;
}
double v_lhCellWriteOvflPayload( long parameter_1,unsigned int parameter_2,double parameter_3,short parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	float float_5 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_6 = 1;
	int int_5 = 1;
	short short_3 = 1;
	float float_6 = 1;
	int int_6 = 1;
	double double_6 = 1;
	int int_8 = 1;
	float_2 = float_1 + float_1;
	char_1 = char_1 * char_2;
	long_1 = v_SyBigEndianPack64(unsigned_int_1,float_2);

	double_1 = double_1;
	char_3 = char_1 + char_2;
	float_4 = float_2 + float_3;
	double_1 = v_lhAcquirePage(double_2,char_4);

	unsigned_int_2 = unsigned_int_1;
	int_1 = int_1;
	long_2 = long_2 * long_3;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	int_1 = int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_3 = double_1;
	float_1 = float_4 + float_2;
	int_3 = int_1 + int_2;
	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	long_3 = long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_3 = int_1 * int_4;
		}
		if(1)
		{
			float_4 = float_3 + float_5;
			if(1)
			{
			}
			long_2 = long_1 * long_2;
			if(1)
			{
			}
			char_3 = char_1 + char_5;
			double_3 = double_1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_6;
			char_1 = char_2 + char_6;
			char_2 = char_2 * char_3;
			int_5 = int_1 + int_4;
		}
		int_4 = int_1;
		unsigned_int_1 = unsigned_int_6 * unsigned_int_3;
		if(1)
		{
			short_1 = short_2 + short_3;
		}
		int_1 = int_5 + int_5;
		char_1 = char_4 + char_6;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	}
	float_6 = float_3 * float_1;
	char_1 = char_6;
	int_4 = int_5;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	float_5 = v_SyMemcpy(char_5,int_4);

	int_6 = int_3 + int_3;
	long_3 = long_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_7 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_4 = 1;
		char_3 = char_7;
		char_1 = char_1 * char_7;
		double_4 = double_2 + double_4;
		double_3 = v_SyBigEndianPack16(char_6,unsigned_int_5);

		float_5 = float_1 + float_3;
		double_1 = double_5 * double_3;
		if(1)
		{
			long_4 = long_2;
		}
		short_1 = short_1 + short_2;
		double_3 = double_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long long_5 = 1;
			int int_7 = 1;
			short short_5 = 1;
			long long_6 = 1;
			if(1)
			{
				long_1 = long_4 * long_5;
			}
			if(1)
			{
				unsigned int unsigned_int_7 = 1;
				unsigned int unsigned_int_8 = 1;
				int_3 = int_4;
				if(1)
				{
					char char_8 = 1;
					char_8 = char_4 + char_6;
				}
				double_5 = double_5 * double_2;
				if(1)
				{
					float_2 = float_6;
				}
				float_6 = float_1 * float_5;
				int_1 = int_6 + int_1;
				int_3 = int_5 * int_3;
				long_2 = long_2 + long_2;
				unsigned_int_8 = unsigned_int_7 + unsigned_int_4;
				int_4 = int_4;
			}
			unsigned_int_4 = unsigned_int_6 + unsigned_int_2;
			int_7 = int_5 + int_6;
			if(1)
			{
				short short_4 = 1;
				short_4 = short_3;
			}
			short_5 = short_2 + short_3;
			long_6 = long_5;
			double_1 = double_3 * double_6;
		}
	}
	int_3 = int_2 + int_2;
	int_5 = int_8;
	return double_6;
}
int v_lhInstallCell( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	float float_5 = 1;
	char_2 = char_1 + char_1;
	long_2 = long_1 + long_2;
	if(1)
	{
		int_1 = int_1 + int_1;
		double_1 = double_2;
		double_3 = double_2 * double_2;
		if(1)
		{
		}
		short_2 = short_1 * short_1;
		long_4 = long_1 + long_3;
		float_2 = float_1 * float_1;
	}
	int_1 = int_1;
	double_1 = double_3 + double_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_3 = int_2 + int_2;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_2 * short_1;
	}
	if(1)
	{
		v_SyZero(int_3);

		float_4 = float_1 + float_3;
	}
	float_3 = float_2 * float_3;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		char char_6 = 1;
		long long_5 = 1;
		char_5 = char_3 + char_4;
		char_1 = char_6 + char_6;
		short_2 = short_2 * short_2;
		long_5 = long_5;
		int_3 = v_SyMemBackendAlloc(int_2,int_4,-1 );

		long_1 = long_5 + long_2;
		if(1)
		{
			long long_6 = 1;
			short short_4 = 1;
			short short_5 = 1;
			short short_6 = 1;
			long_5 = long_3 + long_6;
			double_2 = double_1;
			long_2 = long_3 + long_4;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int int_5 = 1;
				int int_6 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				long long_9 = 1;
				float float_6 = 1;
				if(1)
				{
					double_3 = double_2 + double_2;
				}
				int_2 = int_5 * int_6;
				unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
				float_4 = float_3 + float_1;
				if(1)
				{
					long long_7 = 1;
					long long_8 = 1;
					long_8 = long_3 + long_7;
				}
				int_1 = int_6;
				long_9 = long_5 + long_1;
				float_6 = float_5 + float_2;
			}
			unsigned_int_1 = unsigned_int_1;
			short_4 = short_5;
			v_SyMemBackendFree(float_5);

			short_6 = short_6 * short_6;
		}
	}
	return int_4;
}
float v_SyBlobInit( float parameter_1,long parameter_2)
{
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "cb") < 0)
	{
		int int_1 = 1;
		if(1)
		{
		}
		int_1 = int_1 + int_2;
	}
	int_3 = int_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_2 + int_3;
	return float_1;
}
unsigned int v_lhNewCell( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_2;
	int_1 = v_SyMemBackendPoolAlloc(float_1,long_1);

	v_SyZero(int_1);

	float_2 = v_SyBlobInit(float_2,long_2);

	int_1 = int_1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	return unsigned_int_2;
}
char v_lhRestoreSpace( double parameter_1,unsigned int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	double_4 = double_2 * double_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	double_2 = double_1 + double_3;
	double_1 = v_SyBigEndianPack16(char_1,unsigned_int_2);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_5;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_4;
	return char_1;
}
float v_lhFindSlavePage( double parameter_1,char parameter_2,int parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	short short_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	char char_6 = 1;
	double double_6 = 1;
	long long_2 = 1;
	int int_7 = 1;
	double double_7 = 1;
	short short_4 = 1;
	double_3 = double_1 * double_2;
	double_4 = double_2 + double_3;
	int_2 = int_1 + int_2;
	short_2 = short_1 + short_1;
	char_1 = v_lhSetEmptyPage(unsigned_int_1);

	long_1 = v_SyBigEndianPack64(unsigned_int_1,float_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	char_3 = char_2 * char_1;
	double_5 = double_2 + double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_4 = char_3 * char_3;
		unsigned_int_4 = unsigned_int_1;
		if(1)
		{
			double_1 = double_2 + double_2;
			int_3 = int_3 + int_3;
		}
		if(1)
		{
			if(1)
			{
				short_3 = short_3 + short_3;
			}
			if(1)
			{
				char_5 = char_1 * char_5;
			}
			double_4 = double_4 * double_3;
		}
		long_1 = v_lhAllocateSpace(char_5,int_3,short_1);

		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	}
	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	if(1)
	{
	}
	int_4 = int_4;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_2 + float_1;
	}
	short_1 = short_1;
	if(1)
	{
	}
	double_3 = v_lhAcquirePage(double_3,char_4);

	double_5 = double_5 + double_1;
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
	}
	if(1)
	{
		if(1)
		{
			int int_5 = 1;
			int int_6 = 1;
			char_6 = v_lhRestoreSpace(double_6,unsigned_int_3,char_6);

			int_6 = int_1 + int_5;
		}
		short_2 = short_3 * short_2;
	}
	long_1 = long_2 + long_1;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_5 + unsigned_int_6;
	}
	int_2 = int_7 * int_2;
	double_1 = double_2;
	double_7 = double_1 * double_3;
	double_7 = double_3 + double_5;
	return float_1;
	short_4 = v_lhNewPage(long_2,short_2,long_2);

}
long v_lhSlaveStore( char parameter_1,short parameter_2,unsigned int parameter_3,long parameter_4,long parameter_5,char parameter_6)
{
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	long long_2 = 1;
	float_1 = v_lhFindSlavePage(double_1,char_1,int_1,float_2);

	int_1 = v_lhStoreCell(long_1,float_2,int_2,int_2,float_3,char_1,int_2);

	short_1 = short_1 + short_1;
	int_2 = int_3 * int_3;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	return long_1;
}
float v_lhPageDefragment()
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	int_1 = int_1;
	float_1 = float_1 * float_1;
	double_2 = double_1 + double_1;
	v_SyBigEndianPack32(int_2,double_2);

	char_2 = char_1 * char_1;
	int_2 = int_3 + int_1;
	short_2 = short_1 + short_1;
	double_4 = double_3 * double_3;
	double_4 = double_4 * double_5;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char_3 = char_1 + char_1;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_5 = 1;
			long long_3 = 1;
			int_2 = int_4 * int_5;
			if(1)
			{
				double_6 = v_SyBigEndianPack16(char_4,unsigned_int_1);

				double_5 = double_3 * double_1;
			}
			char_2 = char_2 * char_1;
			char_2 = char_3;
			long_1 = long_1 + long_2;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
			float_2 = float_2 + float_1;
			long_2 = v_SyBigEndianPack64(unsigned_int_1,float_1);

			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
			char_5 = char_2 * char_3;
			long_1 = long_3 * long_3;
			short_2 = short_1 + short_2;
			int_2 = int_5 + int_5;
			double_2 = double_5 + double_1;
			float_1 = float_2 * float_3;
			long_2 = long_2 + long_3;
			if(1)
			{
				short_1 = short_1 + short_3;
				char_2 = char_4 + char_3;
			}
			if(1)
			{
				int_3 = int_4 + int_1;
			}
		}
		int_1 = int_2 + int_2;
	}
	long_1 = long_4 * long_1;
	if(1)
	{
		char_1 = char_3 * char_4;
		int_2 = int_2 + int_3;
		float_3 = float_3 * float_3;
	}
	if(1)
	{
		int_1 = int_3 + int_4;
		float_2 = v_SyMemcpy(char_3,int_5);

		float_2 = float_4 * float_2;
	}
	float_4 = float_2;
	short_2 = short_3 + short_3;
	short_1 = short_3;
	return float_3;
}
void v_SyBigEndianUnpack16( long parameter_1,short parameter_2)
{
	float float_1 = 1;
	float_1 = float_1 + float_1;
}
long v_lhAllocateSpace( char parameter_1,int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	long long_1 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	int int_9 = 1;
	double_2 = double_1 * double_1;
	double_2 = v_SyBigEndianPack16(char_1,unsigned_int_1);

	double_2 = double_1 + double_2;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	int_3 = int_3;
	float_1 = v_lhPageDefragment();

	double_2 = double_1 + double_1;
	char_2 = char_1 * char_2;
	int_4 = int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		char char_4 = 1;
		if(1)
		{
		}
		double_2 = double_3 + double_3;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		if(1)
		{
			int_5 = int_2;
		}
		int_4 = int_1;
		if(1)
		{
			long_1 = long_1 * long_1;
			if(1)
			{
				int int_6 = 1;
				int_6 = int_6;
				int_6 = int_3 * int_7;
				unsigned_int_3 = unsigned_int_1;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
				int_8 = int_5 + int_7;
			}
			if(1)
			{
			}
		}
		char_4 = char_1 * char_3;
	}
	short_3 = short_1 * short_2;
	if(1)
	{
	}
	v_SyBigEndianUnpack16(long_2,short_1);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		short short_4 = 1;
		double double_4 = 1;
		long_3 = long_2 + long_2;
		char_1 = char_2 + char_1;
		int_7 = int_2 + int_5;
		int_7 = int_1 * int_2;
		short_3 = short_4;
		double_4 = double_3 + double_4;
	}
	if(1)
	{
		int_3 = int_3 + int_1;
	}
	if(1)
	{
		long long_4 = 1;
		long_4 = long_1 * long_3;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	}
	int_8 = int_5 + int_9;
	return long_3;
}
int v_lhStoreCell( long parameter_1,float parameter_2,int parameter_3,int parameter_4,float parameter_5,char parameter_6,int parameter_7)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	short short_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	float float_2 = 1;
	short short_5 = 1;
	int int_7 = 1;
	char_1 = char_1 * char_1;
	long_1 = v_lhAllocateSpace(char_1,int_1,short_1);

	int_2 = int_1;
	short_3 = short_2 * short_2;
	char_3 = char_2 + char_1;
	int_2 = int_2 + int_3;
	short_3 = v_SyBlobAppend(float_1,double_1,float_1,-1 );

	float_1 = float_1 + float_1;
	if(1)
	{
	}
	double_3 = double_2 + double_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
			}
		}
		int_3 = v_lhInstallCell(char_2);

		short_2 = short_3 * short_1;
	}
	long_1 = v_lhSlaveStore(char_4,short_4,unsigned_int_1,long_2,long_3,char_1);

	double_4 = double_1 * double_1;
	if(1)
	{
		long_3 = v_lhCellDiscard();

		int_3 = int_2 * int_1;
	}
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_2 = v_lhNewCell(unsigned_int_1,int_4);

	int_3 = int_5 + int_5;
	int_4 = int_3 * int_2;
	double_2 = double_1 * double_2;
	if(1)
	{
		short_1 = v_lhCellWriteLocalPayload(int_5,int_6,long_3,short_1,char_1);

		unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
	if(1)
	{
	}
	if(1)
	{
		int_6 = int_1 * int_2;
		if(1)
		{
			char char_5 = 1;
			double_2 = v_lhCellWriteOvflPayload(long_2,unsigned_int_5,double_5,short_2);

			char_1 = char_5 + char_1;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
	}
	float_2 = v_lhCellWriteHeader(short_3);

	short_5 = short_2 + short_2;
	return int_7;
}
double v_SyBigEndianPack16( char parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	return double_1;
}
char v_lhSetEmptyPage( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	char char_4 = 1;
	int_2 = int_1 * int_1;
	long_1 = v_SyBigEndianPack64(unsigned_int_1,float_1);

	int_2 = int_2 + int_1;
	float_1 = float_2 * float_3;
	float_4 = float_1 + float_2;
	double_1 = double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_1 = short_2;
	int_2 = int_2 + int_1;
	int_1 = int_3;
	double_2 = double_3;
	double_3 = v_SyBigEndianPack16(char_1,unsigned_int_2);

	int_3 = int_3 + int_2;
	char_1 = char_2 + char_3;
	long_2 = long_2 + long_1;
	unsigned_int_3 = unsigned_int_4;
	float_5 = float_3;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	short_1 = short_2 + short_2;
	float_1 = float_1 + float_1;
	return char_4;
}
short v_lhNewPage( long parameter_1,short parameter_2,long parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int_1 = int_1;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 + int_1;
	int_1 = v_SyMemBackendPoolAlloc(float_3,long_2);

	int_2 = int_2 * int_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long_2 = long_2 + long_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		int_1 = int_3 + int_3;
	}
	int_1 = int_2 + int_3;
	return short_1;
	v_SyZero(int_2);

}
double v_lhAcquirePage( double parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1 * double_2;
	short_2 = short_1 * short_1;
	if(1)
	{
		double_3 = double_3 * double_1;
		if(1)
		{
			float float_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			float_2 = float_1 + float_1;
			float_2 = float_1 + float_2;
			if(1)
			{
			}
			long_3 = long_1 * long_2;
			unsigned_int_1 = v_SyBigEndianUnpack64(float_2,int_1);

			long_3 = v_SyBigEndianPack64(unsigned_int_1,float_2);

			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			int_4 = int_2 * int_3;
		}
	}
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
	}
	int_2 = int_3 * int_4;
	return double_3;
}
short v_lhMapFindBucket( unsigned int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		if(1)
		{
			int_2 = int_2 + int_1;
		}
		if(1)
		{
		}
		float_1 = float_1;
	}
	return short_1;
}
float v_lh_record_insert( float parameter_1,short parameter_2,double parameter_3,char parameter_4,float parameter_5,int parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	long long_7 = 1;
	short short_5 = 1;
	double double_4 = 1;
	char char_3 = 1;
	double double_5 = 1;
	int_1 = int_2;
	float_1 = v_lhRecordInstall(unsigned_int_1,long_1,unsigned_int_1,unsigned_int_1,float_1,long_2);

	double_2 = double_1 + double_1;
	short_2 = short_1 * short_1;
	float_2 = float_1 + float_2;
	float_2 = float_1 * float_2;
	long_2 = long_3 * long_4;
	short_1 = v_lhMapFindBucket(unsigned_int_1,long_5);

	double_1 = double_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	short_3 = short_1;
	long_3 = long_3 + long_1;
	if(1)
	{
	}
	int_3 = v_lhStoreCell(long_3,float_1,int_3,int_1,float_1,char_1,int_1);

	int_3 = int_2;
	long_1 = long_5 + long_4;
	float_4 = float_1 * float_3;
	if(1)
	{
		int int_4 = 1;
		int_4 = int_4;
	}
	v_lhLoadPage(long_6,long_1,long_2,long_4,int_3);

	double_3 = double_1 * double_2;
	if(1)
	{
		short short_4 = 1;
		long_5 = long_1;
		if(1)
		{
		}
		v_lhRecordOverwrite(long_4,char_1,float_4);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
		}
		unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
		if(1)
		{
			char_1 = v_lhRecordAppend(char_1,short_2,float_3);

			int_3 = int_1 + int_5;
		}
		long_1 = long_3 + long_7;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
		}
		short_4 = short_4 * short_5;
	}
	if(1)
	{
		char char_2 = 1;
		unsigned int unsigned_int_6 = 1;
		double_3 = v_lhAcquirePage(double_4,char_1);

		char_1 = v_lhSetEmptyPage(unsigned_int_3);

		int_5 = int_3 + int_1;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		short_5 = v_lhNewPage(long_5,short_5,long_2);

		char_3 = char_2 * char_1;
		if(1)
		{
			short_1 = short_3 + short_5;
			if(1)
			{
				char char_4 = 1;
				char char_5 = 1;
				char char_6 = 1;
				char_4 = char_3 + char_1;
				char_3 = char_5 + char_6;
			}
		}
		if(1)
		{
			if(1)
			{
				int_2 = v_lhMapWriteRecord(int_1,float_3,short_5);

				unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
			}
			if(1)
			{
				int int_6 = 1;
				double_5 = v_lhFindCell(char_3,double_1,long_7,double_4);

				int_1 = int_1 + int_6;
			}
		}
		unsigned_int_5 = unsigned_int_4 + unsigned_int_6;
	}
	return float_2;
}
long v_lhash_kv_replace( int parameter_1,int parameter_2,int parameter_3,char parameter_4,short parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float_1 = v_lh_record_insert(float_2,short_1,double_1,char_1,float_3,int_1);

	int_4 = int_2 + int_3;
	char_2 = char_1 + char_1;
	return long_1;
}
short v_MemPoolBucketAlloc( short parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float_1 = float_1 + float_2;
	int_2 = int_1 + int_1;
	char_3 = char_1 + char_2;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	float_4 = float_3 * float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 + double_1;
		}
		int_1 = int_3 + int_4;
		int_3 = int_3 + int_3;
		unsigned_int_4 = v_MemBackendAlloc(short_1,char_1,-1 );

		unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
	return short_1;
}
int v_MemBackendPoolAlloc( long parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		char_2 = char_1 * char_2;
		long_2 = long_1 * long_2;
		if(1)
		{
			double double_1 = 1;
			short short_1 = 1;
			double_1 = double_1 + double_1;
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float_2 = float_1 * float_1;
			}
			if(1)
			{
				int int_2 = 1;
				unsigned int unsigned_int_1 = 1;
				int_1 = int_2;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			}
			short_1 = short_2;
			if(1)
			{
				char_1 = char_1 * char_2;
			}
		}
		if(1)
		{
			if(1)
			{
				double double_2 = 1;
				double double_3 = 1;
				double_2 = double_2 * double_3;
			}
		}
	}
	if(1)
	{
		char controller_9[3];
		fgets(controller_9 ,3 ,stdin);
		if( strcmp( controller_9, "a=") > 0)
		{
			short_3 = v_MemPoolBucketAlloc(short_2,short_2);

			char_2 = char_2 + char_1;
		}
	}
	return int_1;
	unsigned_int_2 = v_MemBackendAlloc(short_4,char_2,-1 );

}
int v_SyMemBackendPoolAlloc( float parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int_1 = int_1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
		}
		int_1 = int_2 + int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int_3 = v_MemBackendPoolAlloc(long_1,int_2);

		short_3 = short_1 * short_2;
	}
	return int_2;
}
short v_lhMapInstallBucket( short parameter_1,double parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_6 = 1;
	int_1 = int_1;
	int_2 = int_1 + int_1;
	int_3 = v_SyMemBackendAlloc(int_2,int_2,-1 );

	short_1 = short_1 + short_1;
	if(1)
	{
	}
	short_2 = short_3;
	int_2 = int_3 + int_3;
	short_4 = short_2 + short_3;
	double_2 = double_1 + double_1;
	v_SyZero(int_2);

	int_3 = int_4;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	double_2 = double_2 * double_3;
	if(1)
	{
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	double_2 = double_2 * double_4;
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_6 = 1;
		long_5 = long_4 * long_2;
		int_1 = int_3 + int_3;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		int_4 = int_1 * int_3;
		v_SyMemBackendFree(float_2);

		long_6 = long_1 * long_4;
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			long long_7 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_7 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_5 = 1;
			float_3 = float_4;
			short_2 = short_1 + short_1;
			long_3 = long_3 * long_7;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char char_1 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_5 = 1;
				if(1)
				{
					short short_5 = 1;
					short_4 = short_5 + short_3;
				}
				char_2 = char_1 * char_1;
				short_3 = short_2 * short_2;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
				char controller_8[2];
				fgets(controller_8 ,2 ,stdin);
				if( strcmp( controller_8, "m") < 0)
				{
					float float_5 = 1;
					float_3 = float_5 * float_1;
				}
				int_3 = int_4;
				int_4 = int_2 * int_5;
				int_6 = v_SyMemBackendPoolAlloc(float_2,long_2);

				int_5 = int_6 + int_3;
			}
			int_4 = int_7 * int_2;
			float_6 = float_3 + float_2;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
		}
	}
	return short_3;
}
long v_lhMapLoadPage( float parameter_1,double parameter_2,double parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	float float_3 = 1;
	long_1 = long_1 + long_1;
	char_2 = char_1 * char_1;
	short_2 = short_1 * short_1;
	short_3 = v_lhMapInstallBucket(short_4,double_1,short_1);

	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
		long_3 = long_2 * long_3;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		short short_5 = 1;
		short_6 = short_3 + short_5;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		if(1)
		{
			float_1 = float_2;
		}
		unsigned_int_6 = v_SyBigEndianUnpack64(float_1,int_1);

		char_3 = v_SyBigEndianUnpack32(float_3,float_2);

		long_1 = long_1 + long_1;
		int_3 = int_3;
		int_2 = int_2 + int_2;
		short_4 = short_6 + short_6;
		double_3 = double_2 + double_3;
		if(1)
		{
		}
	}
	short_6 = short_2 + short_6;
	return long_1;
}
unsigned int v_SyBigEndianUnpack64( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_2;
	double_3 = double_1 * double_2;
	int_2 = int_1 + int_1;
	short_2 = short_1 + short_2;
	return unsigned_int_1;
}
char v_SyBigEndianUnpack32( float parameter_1,float parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	long_1 = long_1 + long_1;
	return char_1;
}
double v_lhash_read_header( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_5 = 1;
	double double_4 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_2;
	int_1 = int_1 * int_1;
	short_2 = short_1 + short_1;
	long_1 = v_lhMapLoadPage(float_1,double_3,double_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
	}
	double_3 = double_2 + double_2;
	float_2 = float_2;
	if(1)
	{
		double_2 = double_2 * double_1;
	}
	short_2 = short_2 + short_1;
	int_3 = int_1 + int_2;
	float_2 = float_2 * float_3;
	unsigned_int_2 = v_SyBigEndianUnpack64(float_4,int_4);

	long_3 = long_2 * long_2;
	double_3 = double_2 * double_3;
	double_2 = double_1 + double_1;
	long_2 = long_3 + long_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	short_1 = short_2;
	double_3 = double_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	char_1 = v_SyBigEndianUnpack32(float_5,float_5);

	double_1 = double_3;
	double_3 = double_4 * double_2;
	int_4 = int_4 + int_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_4 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float float_6 = 1;
		short short_5 = 1;
		unsigned_int_4 = unsigned_int_5;
		long_1 = long_4 + long_3;
		if(1)
		{
			short_4 = short_1 + short_3;
		}
		int_4 = int_2;
		if(1)
		{
		}
		float_6 = float_1 + float_4;
		short_1 = short_5 + short_3;
		short_3 = short_1 * short_4;
		if(1)
		{
		}
	}
	return double_2;
}
long v_SyBigEndianPack64( unsigned int parameter_1,float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_3 = float_1 * float_2;
	char_1 = char_1;
	float_2 = float_2 * float_4;
	float_3 = float_5 + float_6;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1 + short_2;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2 * double_3;
	float_2 = float_5;
	long_1 = long_1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_2 * int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	return long_1;
}
void v_SyBigEndianPack32( int parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short_1 = short_1 + short_2;
	long_2 = long_1 * long_1;
	int_2 = int_1 * int_2;
	short_4 = short_3 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1;
	int_4 = int_2 + int_3;
}
unsigned int v_lhash_write_header( short parameter_1,short parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	short_1 = short_1 + short_1;
	float_2 = float_1 * float_2;
	short_2 = short_2;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_2 * double_3;
	long_1 = long_3;
	long_2 = v_SyBigEndianPack64(unsigned_int_1,float_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_SyBigEndianPack32(int_1,double_1);

	unsigned_int_4 = unsigned_int_4;
	int_3 = int_2 + int_3;
	long_1 = long_3 + long_3;
	unsigned_int_4 = unsigned_int_4;
	long_2 = long_3 * long_1;
	double_4 = double_4;
	char_1 = char_1 + char_1;
	return unsigned_int_5;
}
int v_lhash_kv_open( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_3 = int_1 + int_2;
	short_1 = short_2;
	unsigned_int_1 = v_lhash_write_header(short_1,short_2);

	double_1 = v_lhash_read_header(char_1,long_1);

	float_1 = float_1 * float_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
		double_2 = double_2 + double_3;
		if(1)
		{
		}
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_1;
		if(1)
		{
		}
		short_1 = short_1 + short_1;
		if(1)
		{
		}
	}
	return int_3;
}
int v_lhash_kv_config( char parameter_1,int parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short_2 = short_1 * short_1;
	int_1 = int_1 + int_1;
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_2 = int_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
	}
	char_1 = char_1 * char_1;
	double_1 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	short_4 = short_2 + short_3;
	char_2 = char_1 + char_2;
	unsigned_int_4 = unsigned_int_4;
	return int_2;
}
short v_lhash_kv_release( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	float_1 = float_2;
	char_2 = char_1 + char_1;
	return short_1;
	float_3 = v_SyMemBackendRelease();

}
long v_MemBackendPoolFree( int parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1;
	if(1)
	{
	}
	char_3 = char_1 * char_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned_int_2 = unsigned_int_3;
		int_3 = int_1 * int_2;
	}
	return long_2;
	long_2 = v_MemBackendFree(int_1);

}
short v_SyMemBackendPoolFree( short parameter_1)
{
	int int_1 = 1;
	short short_4 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
		long long_1 = 1;
		if(1)
		{
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 + short_2;
		}
		long_1 = long_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	return short_4;
	long_2 = v_MemBackendPoolFree(int_3);

}
float v_SyBlobRelease( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	int_2 = int_1 * int_1;
	v_SyMemBackendFree(float_1);

	float_2 = float_2 + float_2;
	long_2 = long_1 * long_1;
	return float_2;
}
unsigned int v_lhash_page_release()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double_3 = double_1 + double_2;
	int_3 = int_1 * int_2;
	double_2 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_SyMemBackendFree(float_1);

	double_3 = double_3 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float_2 = v_SyBlobRelease(short_1);

		long_1 = long_1 + long_1;
		double_3 = double_2 * double_3;
		double_3 = double_4 + double_3;
		unsigned_int_3 = unsigned_int_4;
	}
	if(1)
	{
		short_2 = short_1 + short_2;
	}
	float_4 = float_1 + float_3;
	long_1 = long_2 * long_2;
	return unsigned_int_5;
	short_1 = v_SyMemBackendPoolFree(short_2);

}
void v_lhash_bin_hash( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_1;
	char_1 = char_2 * char_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	double_1 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		float float_1 = 1;
		if(1)
		{
			int_3 = int_1 + int_2;
		}
		char_2 = char_1 * char_2;
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			double_3 = double_3 * double_4;
		}
		double_3 = double_4 * double_4;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			int_1 = int_1 * int_3;
		}
		char_2 = char_1;
		long_1 = long_1 * long_1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_2;
		}
		float_1 = float_1 * float_1;
		int_2 = int_2 * int_2;
	}
}
double v_lhash_kv_init( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	double_1 = double_1 * double_2;
	float_1 = v_SyMemBackendRelease();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = v_SyMemBackendInitFromParent(char_1,short_1);

	short_1 = v_vedisExportMemBackend();

	int_1 = int_1 * int_1;
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	v_SyZero(int_3);

	char_1 = char_1 + char_2;
	int_1 = int_2 + int_3;
	float_2 = float_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_2 + double_1;
	if(1)
	{
		double_2 = double_1 + double_1;
		int_3 = v_SyMemBackendAlloc(int_2,int_2,-1 );

		float_3 = float_1 * float_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_2 * long_1;
	float_1 = float_2 * float_1;
	double_2 = double_4 + double_3;
	float_3 = float_2 + float_1;
	long_1 = long_3 * long_3;
	v_SyMemcmp(char_1,float_2,short_1);

	unsigned_int_1 = v_lhash_page_release();

	long_3 = long_3 + long_1;
	v_lhash_bin_hash(int_3,char_2);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	return double_5;
}
long v_vedisExportDiskKvStorage()
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	float float_2 = 1;
	int int_5 = 1;
	short short_3 = 1;
	long long_2 = 1;
	short short_4 = 1;
	int int_6 = 1;
	long long_3 = 1;
	short short_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_4 = 1;
	int int_7 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = v_lhash_kv_init(short_1,int_1);

	short_2 = v_lhash_kv_release(float_1);

	int_2 = v_lhash_kv_config(char_1,int_1,float_1);

	int_1 = v_lhash_kv_open(float_1,int_1);

	long_1 = v_lhash_kv_replace(int_1,int_3,int_4,char_2,short_2);

	float_2 = v_lhCursorSeek(int_5,short_3,int_4,int_3);

	char_1 = v_lhCursorValid(short_1);

	long_2 = v_lhCursorNext(float_2);

	short_2 = v_lhCursorDelete(float_2);

	float_1 = v_lhCursorKeyLength(short_1,int_4);

	short_4 = v_lhCursorKey(double_1,float_1,int_2);

	float_2 = v_lhCursorData(int_6,long_2,long_3);

	short_4 = short_1 * short_4;
	return long_3;
	v_lhash_kv_append(char_2,short_2,int_1,short_5,int_2);

	char_3 = v_lhInitCursor(char_2);

	v_lhCursorFirst(double_1);

	unsigned_int_1 = v_lhCursorLast();

	char_4 = v_lhCursorPrev(long_2);

	int_4 = v_lhCursorDataLength(int_7,short_6);

	unsigned_int_2 = v_lhCursorReset(short_6);

}
short v_MemHashCursorReset( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return short_1;
}
void v_MemHashCursorData( int parameter_1,long parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_1 = double_1;
	double_1 = double_2;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
}
void v_MemHashCursorDataLength( long parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
}
float v_MemHashCursorKey( unsigned int parameter_1,char parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float_1 = float_2;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	short_1 = short_1;
	return float_2;
}
long v_MemHashCursorKeyLength( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	short_4 = short_1 + short_2;
	return long_1;
}
int v_MemHashUnlinkRecord( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 * int_2;
	v_SyMemBackendFree(float_1);

	int_2 = int_2 * int_1;
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	double_3 = double_1 + double_2;
	int_2 = int_3 + int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	return int_1;
}
unsigned int v_MemHashCursorDelete( int parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v_MemHashUnlinkRecord(long_1,int_2);

	short_1 = short_1 + short_2;
	double_1 = double_2;
	if(1)
	{
	}
	float_2 = float_1 + float_1;
	int_2 = int_3 * int_2;
	double_3 = double_1;
	return unsigned_int_1;
}
short v_MemHashCursorPrev( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	int_1 = int_1;
	return short_1;
}
float v_MemHashCursorNext( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	double_2 = double_1 * double_3;
	return float_1;
}
long v_MemHashCursorValid( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long_1 = long_1 * long_2;
	long_4 = long_3 * long_1;
	return long_5;
}
unsigned int v_MemHashCursorLast( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_2;
	double_1 = double_1 + double_2;
	char_2 = char_1 * char_1;
	return unsigned_int_1;
}
double v_MemHashCursorFirst( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	short_1 = short_1 * short_1;
	return double_1;
}
int v_MemHashCursorSeek( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		if(1)
		{
		}
	}
	return int_1;
	int_1 = v_MemHashGetEntry(int_1,int_2,int_1);

}
short v_MemHashInitCursor( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char_3 = char_1 + char_2;
	short_3 = short_1 + short_2;
	char_2 = char_2;
	return short_2;
}
double v_MemHashAppend( short parameter_1,float parameter_2,int parameter_3,float parameter_4,char parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_3 = 1;
	int_1 = v_MemHashGetEntry(int_2,int_1,int_1);

	int_3 = int_1 + int_1;
	double_1 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "L&") > 0)
	{
		double_2 = double_1;
	}
	unsigned_int_1 = v_SyMemBackendRealloc(char_1,char_1);

	char_2 = char_1 * char_2;
	if(1)
	{
		double_2 = double_2 * double_1;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			int_2 = int_2 * int_1;
		}
	}
	if(1)
	{
		int int_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_4 = 1;
		double double_3 = 1;
		double_2 = double_1 * double_1;
		double_1 = double_2 + double_1;
		int_3 = v_MemHashGrowTable(int_3);

		int_2 = int_1 * int_4;
		short_1 = v_MemHashNewRecord(float_1,char_1,int_1,float_2,char_1,int_3);

		float_2 = v_SyMemcpy(char_2,int_3);

		float_1 = float_2 + float_2;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1;
		}
		unsigned_int_3 = v_MemHashLinkRecord(long_1,char_3);

		float_1 = float_2 + float_1;
		long_2 = long_2 * long_1;
		if(1)
		{
		}
		long_3 = long_2 + long_2;
		char_4 = char_3 + char_3;
		double_3 = double_3 + double_1;
	}
	return double_1;
}
int v_MemHashGrowTable( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_9 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_7 = 1;
	char_3 = char_1 + char_2;
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_SyZero(int_1);

	unsigned_int_4 = unsigned_int_3;
	char_2 = char_4 * char_2;
	if(1)
	{
	}
	unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
	double_1 = double_2;
	int_2 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_6 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		float float_4 = 1;
		int int_6 = 1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
		}
		char_2 = char_5 * char_5;
		short_3 = short_1 + short_2;
		int_1 = int_2 * int_1;
		if(1)
		{
			short_1 = short_1;
		}
		char_5 = char_6;
		int_3 = int_2 * int_3;
		unsigned_int_3 = unsigned_int_6 + unsigned_int_1;
		if(1)
		{
			int_2 = int_1 * int_4;
		}
		double_3 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_6;
		int_3 = int_4 * int_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_5;
		}
		long_1 = long_1 + long_2;
		double_4 = double_4 + double_2;
		int_1 = int_1 * int_4;
		if(1)
		{
			int_4 = int_1 + int_4;
		}
		int_1 = int_5;
		float_1 = float_1 + float_1;
		double_1 = double_5 + double_4;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2;
		}
		double_5 = double_4 + double_6;
		double_5 = double_7 * double_7;
		float_4 = float_2 + float_3;
		if(1)
		{
			double double_8 = 1;
			double_1 = double_3 * double_8;
		}
		int_3 = v_SyMemBackendAlloc(int_5,int_4,-1 );

		double_4 = double_5 * double_9;
		float_4 = float_5;
		char_6 = char_3;
		if(1)
		{
			short short_4 = 1;
			short_4 = short_3 * short_1;
		}
		v_SyMemBackendFree(float_3);

		unsigned_int_6 = unsigned_int_6 * unsigned_int_4;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
		int_4 = int_4 + int_6;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	double_1 = double_9 + double_4;
	float_6 = float_2 + float_5;
	return int_7;
}
unsigned int v_MemHashLinkRecord( long parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_3 = double_1 * double_2;
	float_1 = float_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	long_3 = long_3 + long_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	return unsigned_int_2;
}
short v_MemHashNewRecord( float parameter_1,char parameter_2,int parameter_3,float parameter_4,char parameter_5,int parameter_6)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_7 = 1;
	short short_5 = 1;
	v_SyZero(int_1);

	float_1 = float_1 * float_1;
	double_1 = double_1;
	v_SyMemBackendFree(float_1);

	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_2;
	float_2 = float_1 + float_2;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	double_2 = double_1 + double_1;
	char_2 = char_2 + char_1;
	double_3 = double_2 + double_3;
	int_1 = int_2 * int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	double_3 = double_1;
	float_1 = v_SyMemcpy(char_1,int_3);

	char_2 = char_3 * char_1;
	short_2 = short_1 * short_2;
	int_4 = v_SyMemBackendAlloc(int_5,int_6,-1 );

	double_4 = double_1 + double_3;
	short_1 = short_3 * short_4;
	int_7 = int_3 + int_3;
	return short_5;
}
int v_MemHashGetEntry( int parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			int_1 = int_1;
		}
		if(1)
		{
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	}
	return int_2;
}
char v_MemHashReplace( long parameter_1,double parameter_2,int parameter_3,long parameter_4,char parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	char char_3 = 1;
	long long_2 = 1;
	int int_5 = 1;
	char char_4 = 1;
	short_1 = short_1 * short_2;
	float_1 = v_SyMemcpy(char_1,int_1);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		v_SyMemBackendFree(float_2);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	long_1 = long_1;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
		if(1)
		{
		}
		short_1 = short_2;
		if(1)
		{
			int_4 = int_2 * int_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			short_3 = v_MemHashNewRecord(float_1,char_3,int_2,float_2,char_1,int_1);

			unsigned_int_1 = v_MemHashLinkRecord(long_2,char_1);

			double_1 = double_2;
		}
		if(1)
		{
			int_5 = v_MemHashGrowTable(int_2);

			unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
			if(1)
			{
			}
			float_1 = float_2;
		}
		unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
		int_4 = v_SyMemBackendAlloc(int_5,int_5,-1 );

		unsigned_int_1 = unsigned_int_6 * unsigned_int_7;
		int_3 = v_MemHashGetEntry(int_2,int_4,int_3);

		unsigned_int_1 = unsigned_int_1;
	}
	return char_4;
}
void v_MemHashConfigure( double parameter_1,int parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	short_3 = short_1 * short_2;
	float_1 = float_1 + float_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
		if(1)
		{
			float float_3 = 1;
			float_2 = float_2 * float_3;
		}
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
	}
	short_2 = short_2 * short_3;
	short_1 = short_1 + short_4;
}
short v_MemBackendRelease( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		short short_2 = 1;
		char char_1 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		if(1)
		{
			double_1 = double_3 * double_4;
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		int_1 = int_1 + int_1;
		int_2 = int_1 * int_2;
		int_3 = int_1 + int_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		int_1 = int_1 * int_3;
		unsigned_int_1 = unsigned_int_2;
		long_1 = long_1 * long_2;
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
		long_3 = long_1 * long_2;
		short_2 = short_1 + short_1;
		double_3 = double_5 + double_2;
		if(1)
		{
			double_1 = double_1 + double_4;
		}
		char_1 = char_1;
		short_4 = short_2 + short_3;
		short_3 = short_1 * short_5;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		long_2 = long_2 + long_2;
	}
	unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
	int_1 = int_4;
	if(1)
	{
		double_5 = double_5 + double_2;
	}
	return short_1;
}
float v_SyMemBackendRelease()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
		int int_4 = 1;
		if(1)
		{
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_2;
		}
		int_3 = int_4;
	}
	if(1)
	{
		double double_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_3 = double_1 * double_2;
		double_4 = double_1 + double_4;
	}
	return float_1;
	short_3 = v_MemBackendRelease(double_2);

}
void v_MemHashRelease()
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short_1 = short_2;
	short_2 = short_1;
	float_1 = v_SyMemBackendRelease();

}
void v_MemHashFunc( int parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_2 = short_1 + short_1;
	double_2 = double_1 * double_1;
	int_2 = int_1 * int_1;
	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
			float_1 = float_1;
		}
		unsigned_int_1 = unsigned_int_1;
		short_3 = short_2 + short_2;
		if(1)
		{
			double double_5 = 1;
			double_5 = double_3 * double_4;
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		int_2 = int_4 * int_2;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1 + float_1;
		}
		unsigned_int_2 = unsigned_int_1;
		char_2 = char_1 * char_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		}
		double_4 = double_3 + double_1;
		long_1 = long_1 + long_2;
	}
}
long v_SyMemBackendInitFromParent( char parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short_2 = short_1 * short_2;
	if(1)
	{
		short short_3 = 1;
		if(1)
		{
		}
		short_3 = short_3;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	long_1 = long_1;
	short_1 = short_2 + short_2;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "P") == 0)
	{
		char char_1 = 1;
		double double_1 = 1;
		char_1 = char_1;
		double_1 = double_1 * double_1;
		if(1)
		{
		}
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	return long_1;
	v_SyZero(int_2);

}
double v_MemHashInit( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short_1 = v_vedisExportMemBackend();

	v_MemHashFunc(int_1,char_1);

	float_1 = float_1 * float_1;
	double_1 = double_2;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2 * float_2;
	}
	short_3 = short_2 + short_3;
	long_1 = v_SyMemBackendInitFromParent(char_2,short_3);

	double_3 = double_1 + double_2;
	short_3 = short_3 + short_4;
	if(1)
	{
		v_SyMemcmp(char_2,float_1,short_1);

		int_2 = v_SyMemBackendAlloc(int_3,int_4,-1 );

		int_2 = int_2 + int_4;
	}
	short_4 = short_4;
	char_2 = char_1 + char_2;
	int_5 = int_1 + int_1;
	return double_2;
	v_SyZero(int_6);

}
long v_vedisExportMemKvStorage()
{
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	char char_4 = 1;
	long long_4 = 1;
	int int_6 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	char_1 = v_MemHashReplace(long_1,double_1,int_1,long_2,char_2);

	double_1 = v_MemHashAppend(short_1,float_1,int_2,float_2,char_3);

	int_3 = v_MemHashCursorSeek(unsigned_int_1,unsigned_int_2,int_2,int_3);

	unsigned_int_2 = v_MemHashCursorLast(int_2);

	long_3 = v_MemHashCursorValid(double_2);

	short_1 = v_MemHashCursorPrev(char_3);

	unsigned_int_2 = v_MemHashCursorDelete(int_4);

	long_3 = v_MemHashCursorKeyLength(int_5,int_5);

	float_3 = v_MemHashCursorKey(unsigned_int_2,char_4,long_4);

	v_MemHashCursorData(int_4,long_4,long_3);

	int_6 = int_4;
	return long_2;
	double_1 = v_MemHashInit(unsigned_int_2,int_4);

	v_MemHashRelease();

	v_MemHashConfigure(double_1,int_3,short_2);

	short_1 = v_MemHashInitCursor(long_3);

	double_1 = v_MemHashCursorFirst(unsigned_int_3);

	float_1 = v_MemHashCursorNext(char_4);

	v_MemHashCursorDataLength(long_3,char_3);

	short_2 = v_MemHashCursorReset(short_3);

}
long v_SySetInit( int parameter_1,long parameter_2,short parameter_3)
{
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1 + long_1;
	float_1 = float_1 + float_1;
	short_2 = short_1 * short_1;
	int_1 = int_1;
	char_1 = char_1 * char_1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return long_1;
}
double v_UnixUnmap(long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_2;
	return double_1;
}
long v_UnixMmap( char parameter_1,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	char_1 = char_1 * char_1;
	char_2 = char_2 + char_1;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	double_1 = double_1 * double_1;
	unsigned_int_4 = unsigned_int_6 + unsigned_int_1;
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		char char_3 = 1;
		char_1 = char_1 + char_3;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	}
	unsigned_int_6 = unsigned_int_1 * unsigned_int_6;
	return long_2;
}
void v_unixCurrentTime( unsigned int parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float_1 = float_1 * float_2;
	int_1 = int_1 + int_1;
	float_2 = float_1 + float_2;
	short_1 = short_1;
	short_2 = short_1 + short_2;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2 + int_1;
	}
}
void v_unixSleep( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	float float_6 = 1;
	float float_7 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short_2 = short_1 * short_2;
	int_2 = int_1 + int_1;
	char_2 = char_1 * char_2;
	long_2 = long_1 * long_1;
	long_2 = long_1;
	double_1 = double_1 * double_1;
	double_2 = double_2 + double_1;
	short_2 = short_2 + short_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_4 = short_1 * short_4;
	float_1 = float_1 + float_2;
	long_3 = long_1 + long_3;
	long_3 = long_4 + long_5;
	double_4 = double_3 + double_2;
	char_2 = char_2;
	float_2 = float_2;
	char_1 = char_1 * char_2;
	long_2 = long_1 + long_6;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_4 = double_3 * double_4;
	int_1 = int_1;
	double_2 = double_3 * double_2;
	float_2 = float_3 * float_4;
	double_3 = double_1 + double_5;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	long_6 = long_3 + long_1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_1;
	float_2 = float_5 + float_2;
	double_2 = double_4 * double_2;
	int_2 = int_1;
	int_1 = int_3 + int_2;
	unsigned_int_6 = unsigned_int_5;
	double_1 = double_6 + double_2;
	short_1 = short_4 + short_2;
	float_7 = float_6 + float_4;
	long_6 = long_7 * long_5;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_7;
	int_1 = int_1 * int_3;
	char_4 = char_3 * char_2;
}
unsigned int v_SyMemBackendDup( unsigned int parameter_1,int parameter_2,short parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 * short_1;
	char controller4vul_1317[2];
	fgets(controller4vul_1317 ,2 ,stdin);
	if( strcmp( controller4vul_1317, "3") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		char controller4vul_1318[3];
		fgets(controller4vul_1318 ,3 ,stdin);
		if( strcmp( controller4vul_1318, "J6") < 0)
		{
			int_1 = v_SyMemBackendAlloc(int_2,int_2,uni_para);

		}
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	return unsigned_int_1;
}
void v_BlobPrepareGrow( float parameter_1,long parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_2 = 1;
	long long_6 = 1;
	float_3 = float_1 * float_2;
	char_2 = char_1 + char_1;
	short_2 = short_1 + short_2;
	char controller4vul_1314[3];
	fgets(controller4vul_1314 ,3 ,stdin);
	if( strcmp( controller4vul_1314, "!G") > 0)
	{
		char controller4vul_1315[2];
		fgets(controller4vul_1315 ,2 ,stdin);
		if( strcmp( controller4vul_1315, "1") < 0)
		{
			long long_1 = 1;
			long_2 = long_1 * long_2;
			char controller4vul_1316[2];
			fgets(controller4vul_1316 ,2 ,stdin);
			if( strcmp( controller4vul_1316, "t") > 0)
			{
				unsigned_int_1 = v_SyMemBackendDup(unsigned_int_1,int_1,short_1,uni_para);

			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			char char_3 = 1;
			double_1 = double_1 * double_1;
			char controller_3[3];
			fgets(controller_3 ,3 ,stdin);
			if( strcmp( controller_3, "OF") > 0)
			{
			}
			int_2 = int_3;
			char_1 = char_3 * char_1;
		}
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			long long_3 = 1;
			int_4 = int_4 * int_5;
			long_3 = long_3 + long_2;
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
	}
	if(1)
	{
		short_2 = short_1;
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_3 + float_3;
	}
	long_5 = long_2 + long_4;
	if(1)
	{
	}
	double_2 = double_1;
	long_2 = long_6 + long_5;
}
short v_SyBlobAppend( float parameter_1,double parameter_2,float parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_1313[3];
	fgets(controller4vul_1313 ,3 ,stdin);
	if( strcmp( controller4vul_1313, "3@") < 0)
	{
		v_BlobPrepareGrow(float_1,long_2,uni_para);

	}
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_2 = int_1 * int_1;
		float_2 = float_1 * float_1;
		double_2 = double_3;
		char_1 = char_1 * char_2;
	}
	return short_1;
}
unsigned int v_FormatConsumer( short parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	long_1 = long_1;
	char_1 = char_1 * char_1;
	char_1 = char_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	short_1 = v_SyBlobAppend(float_1,double_1,float_1,-1 );

	int_1 = int_1 + int_1;
	return unsigned_int_1;
}
void v_getdigit( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_2 = int_1 * int_1;
	short_1 = short_1 + short_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "h;") < 0)
	{
	}
	double_1 = double_1 + double_1;
	double_1 = double_2 * double_3;
	short_2 = short_2 + short_3;
}
double v_InternFormat( char parameter_1,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = double_1;
	v_getdigit(int_1,int_2);

	char_3 = char_1 + char_2;
	v_SyStrlen(unsigned_int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_2 * double_3;
	return double_1;
}
long v_FormatMount( int parameter_1,int parameter_3,unsigned int parameter_5,int parameter_6,char parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_1;
	long_2 = long_1 + long_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
		}
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	}
	char_1 = char_2;
	unsigned_int_3 = v_FormatConsumer(short_1,unsigned_int_4);

	short_1 = short_2;
	float_1 = float_1;
	float_2 = float_1 + float_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		double_2 = v_InternFormat(char_2,int_2,int_2);

		char_3 = char_4;
	}
	return long_2;
}
float v_SyBlobInitFromBuf( unsigned int parameter_1,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	if(1)
	{
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	long_1 = long_1 * long_2;
	return float_1;
}
double v_SyBufferFormat( char parameter_1,int parameter_2,float parameter_3,double parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	double_2 = double_1 + double_1;
	short_1 = v_SyBlobAppend(float_1,double_2,float_1,-1 );

	char_2 = char_1 + char_2;
	double_2 = double_1;
	if(1)
	{
		double double_3 = 1;
		if(1)
		{
		}
		if(1)
		{
		}
		double_4 = double_3 + double_4;
	}
	int_1 = int_2;
	double_4 = double_4 + double_1;
	char_3 = char_1 * char_3;
	float_2 = v_SyBlobInitFromBuf(unsigned_int_1,float_3);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = v_FormatMount(int_1,int_2,unsigned_int_3,int_1,char_3);

	int_2 = int_1 * int_2;
	return double_5;
}
double v_unixFullPathname( int parameter_1,double parameter_2,int parameter_3,char parameter_4)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	float float_1 = 1;
	if(1)
	{
		int_1 = int_1;
		v_Systrcpy(char_1,double_1,char_1,int_2);

		double_1 = double_1 + double_2;
	}
	if(1)
	{
		char char_2 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		v_SyStrlen(unsigned_int_1);

		char_2 = char_2 * char_2;
		int_2 = int_1;
		if(1)
		{
		}
		long_1 = long_1 * long_1;
		double_1 = v_SyBufferFormat(char_3,int_1,float_1,double_2);

		short_3 = short_1 + short_2;
	}
	return double_1;
}
long v_unixAccess( short parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	double_1 = double_1;
	double_1 = double_1 + double_1;
	short_3 = short_1 * short_2;
	float_2 = float_1 * float_1;
	char_1 = char_1 * char_1;
	char_2 = char_1 * char_2;
	int_2 = int_1 * int_1;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_3;
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			char_5 = char_3 + char_4;
		}
	}
	return long_1;
}
double v_unixDelete( char parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_1 = int_1;
		int_2 = int_2 * int_3;
		if(1)
		{
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_1 = char_1 * char_2;
			}
			if(1)
			{
				double_1 = v_openDirectory(short_1,int_4);

				unsigned_int_3 = unsigned_int_2;
			}
		}
	}
	return double_1;
}
long v_MemBackendFree( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_1;
	float_3 = float_1 + float_2;
	if(1)
	{
		if(1)
		{
		}
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "X") > 0)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			if(1)
			{
				double double_1 = 1;
				double_1 = double_1 * double_1;
			}
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			unsigned_int_2 = unsigned_int_1;
			short_3 = short_1 * short_2;
		}
	}
	return long_1;
}
void v_SyMemBackendFree( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short_1 = short_1 * short_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1;
		}
		long_1 = v_MemBackendFree(int_1);

		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_2;
	}
}
short v_vedis_free()
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_3 = 1;
	v_SyMemBackendFree(float_1);

	float_2 = float_1;
	short_1 = v_vedisExportMemBackend();

	int_1 = int_1 * int_1;
	float_1 = float_2 + float_3;
	return short_1;
}
float v_SyMemcpy( char parameter_1,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	return float_1;
}
void v_SyMemcmp( char parameter_1,float parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	double_2 = double_1 * double_2;
}
int v_findInodeInfo( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	return int_1;
	v_SyZero(int_2);

	v_SyMemcmp(char_1,float_1,short_1);

	v_vedis_malloc(int_3);

	float_1 = v_SyMemcpy(char_2,int_4);

}
unsigned int v_fillInUnixFile( int parameter_1,int parameter_2,int parameter_3,double parameter_4,double parameter_5,int parameter_6,int parameter_7)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	float float_1 = 1;
	int int_6 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_9 = 1;
	int_2 = int_1 + int_1;
	int_2 = int_3 * int_4;
	unsigned_int_1 = unsigned_int_2;
	int_5 = v_findInodeInfo(float_1,int_6);

	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
	v_unixLeaveMutex();

	int_5 = int_4 + int_1;
	long_1 = long_1 + long_2;
	float_2 = float_1 * float_2;
	unsigned_int_7 = unsigned_int_6 * unsigned_int_7;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int_2 = int_6 + int_4;
		short_2 = short_1 * short_1;
	}
	double_1 = double_2 * double_2;
	char_1 = char_3;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_8 = unsigned_int_8 * unsigned_int_6;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_3;
		}
	}
	if(1)
	{
		char char_4 = 1;
		unsigned_int_3 = v_unixEnterMutex();

		char_4 = char_1 * char_4;
	}
	return unsigned_int_9;
}
void v_SyStrlen( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_2;
	if(1)
	{
		if(1)
		{
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			if(1)
			{
				int int_1 = 1;
				int_1 = int_1 + int_1;
			}
			char_1 = char_2;
			if(1)
			{
				double_1 = double_1;
			}
			double_1 = double_2 * double_3;
			if(1)
			{
				short_2 = short_1 + short_1;
			}
			short_1 = short_2;
			if(1)
			{
				int int_2 = 1;
				int int_3 = 1;
				int_3 = int_2 + int_3;
			}
			short_3 = short_2 + short_1;
		}
	}
}
void v_Systrcpy( char parameter_1,double parameter_2,char parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	short_2 = short_1 + short_1;
	long_3 = long_1 + long_2;
	int_1 = int_1 * int_1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
		}
		short_4 = short_2 * short_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		long long_4 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		float_2 = float_1 * float_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		float_1 = float_2 + float_3;
		int_1 = int_2 * int_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		char_2 = char_3;
		long_1 = long_1 * long_2;
		short_1 = short_1;
		v_SyStrlen(unsigned_int_3);

		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
			int_2 = int_1;
		}
		short_1 = short_1;
		long_1 = long_3 + long_3;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		double_1 = double_1 + double_1;
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1 + double_1;
		}
		int_4 = int_1 * int_4;
		short_4 = short_1 * short_3;
		long_2 = long_1 * long_2;
		long_4 = long_2 * long_1;
	}
	int_1 = int_4 + int_1;
}
double v_openDirectory( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1 + char_1;
	float_2 = float_1 * float_1;
	double_2 = double_1 * double_1;
	int_1 = int_1 + int_1;
	v_Systrcpy(char_2,double_1,char_1,int_1);

	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		long_2 = long_1 * long_2;
		double_4 = double_3 + double_3;
		if(1)
		{
			short short_3 = 1;
			short_1 = short_3;
		}
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2;
	return double_3;
}
long v_findCreateFileMode( unsigned int parameter_1,int parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_1 = double_2 * double_2;
		double_4 = double_3 * double_4;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	return long_1;
}
int v_SyMemBackendAlloc( int parameter_1,int parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float_2 = float_1 * float_2;
	char controller4vul_1319[3];
	fgets(controller4vul_1319 ,3 ,stdin);
	if( strcmp( controller4vul_1319, "Qm") > 0)
	{
		short short_2 = 1;
		char controller4vul_1320[2];
		fgets(controller4vul_1320 ,2 ,stdin);
		if( strcmp( controller4vul_1320, "O") < 0)
		{
			unsigned_int_1 = v_MemBackendAlloc(short_1,char_1,uni_para);

		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	return int_1;
}
short v_vedisExportMemBackend()
{
	short short_1 = 1;
	return short_1;
}
void v_vedis_malloc( int parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	short_1 = v_vedisExportMemBackend();

	int_1 = v_SyMemBackendAlloc(int_1,int_1,-1 );

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 * float_2;
	int_1 = int_1 + int_2;
	int_2 = int_1;
}
void v_unixLeaveMutex()
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		short_1 = short_1 * short_2;
		char_1 = char_1 * char_1;
	}
}
unsigned int v_unixEnterMutex()
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "[H") < 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_2 = short_1 + short_2;
		short_1 = short_3 + short_3;
	}
	return unsigned_int_1;
}
double v_findReusableFd( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float_2 = float_1 * float_1;
	double_2 = double_1 * double_1;
	long_1 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
		float_2 = float_2 + float_1;
	}
	unsigned_int_1 = v_unixEnterMutex();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_1 = 1;
		int int_2 = 1;
		v_unixLeaveMutex();

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double double_3 = 1;
			double_2 = double_3 * double_2;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		}
		double_2 = double_4;
		int_2 = int_1 + int_1;
	}
	short_3 = short_1 * short_2;
	return double_4;
}
double v_unixOpen( float parameter_1,int parameter_2,short parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_7 = 1;
	int int_3 = 1;
	long long_3 = 1;
	short short_1 = 1;
	char char_3 = 1;
	short short_2 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_4 = 1;
	short short_3 = 1;
	char char_5 = 1;
	short short_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	float_3 = float_1 + float_2;
	double_2 = double_1 + double_2;
	double_3 = double_3 * double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_5;
	double_1 = double_4 * double_4;
	int_2 = int_1 * int_1;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
	char_2 = char_1 * char_1;
	double_6 = double_1 * double_5;
	unsigned_int_2 = unsigned_int_2;
	long_2 = long_1 + long_2;
	double_7 = v_findReusableFd(float_2,int_3);

	long_2 = long_3 * long_1;
	if(1)
	{
		char_1 = char_2;
	}
	if(1)
	{
		short_1 = short_1 + short_1;
		if(1)
		{
		}
	}
	char_3 = char_1 * char_2;
	if(1)
	{
		short_1 = short_2;
	}
	if(1)
	{
		long long_4 = 1;
		long_1 = v_findCreateFileMode(unsigned_int_2,int_2,float_1);

		unsigned_int_4 = v_fillInUnixFile(int_3,int_3,int_3,double_8,double_9,int_1,int_1);

		long_1 = long_4 * long_1;
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_6 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4;
	}
	float_2 = float_3 + float_2;
	if(1)
	{
		char_2 = char_4 + char_4;
		long_1 = long_2;
		if(1)
		{
		}
		short_3 = short_2 * short_1;
		if(1)
		{
			double_4 = double_7;
			unsigned_int_2 = unsigned_int_6;
		}
	}
	if(1)
	{
		short_3 = short_3 + short_3;
		short_2 = v_vedis_free();

		unsigned_int_6 = unsigned_int_1 * unsigned_int_4;
	}
	if(1)
	{
		char_4 = char_3 * char_5;
	}
	if(1)
	{
		float_1 = float_2 + float_2;
		if(1)
		{
			short_3 = short_2 + short_4;
			int_1 = int_4 + int_2;
		}
	}
	int_4 = int_4 + int_2;
	unsigned_int_4 = unsigned_int_8;
	if(1)
	{
		double_6 = double_8 + double_2;
	}
	if(1)
	{
		v_SyZero(int_4);

		char_4 = char_5 + char_6;
		if(1)
		{
			double_3 = v_openDirectory(short_4,int_5);

			unsigned_int_7 = unsigned_int_2 * unsigned_int_4;
		}
		int_2 = int_2 * int_6;
	}
	if(1)
	{
		char_3 = char_6 + char_4;
	}
	float_2 = float_1 + float_3;
	if(1)
	{
		int_5 = int_1 * int_6;
	}
	return double_4;
	v_vedis_malloc(int_1);

}
unsigned int v_vedisExportBuiltinVfs()
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_4 = 1;
	long long_4 = 1;
	v_unixSleep(double_1,int_1);

	v_unixCurrentTime(unsigned_int_1,char_1);

	long_1 = v_UnixMmap(char_1,float_1);

	double_1 = double_1 + double_1;
	return unsigned_int_2;
	double_1 = v_unixOpen(float_2,int_1,short_1,long_2);

	double_2 = v_unixDelete(char_2,char_3,int_2);

	long_3 = v_unixAccess(short_2,float_2,int_1,int_2);

	double_3 = v_unixFullPathname(int_2,double_3,int_1,char_4);

	double_3 = v_UnixUnmap(long_4);

}
char v_SyMemBackendInitFromOthers( float parameter_1,long parameter_2,unsigned int parameter_3)
{
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	if(1)
	{
		double double_1 = 1;
		if(1)
		{
		}
		if(1)
		{
		}
		double_1 = double_1 * double_2;
	}
	double_3 = double_3 + double_2;
	short_1 = short_2;
	short_2 = short_1 + short_2;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	return char_1;
	v_SyZero(int_1);

}
void v_SyZero(int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char_1 = char_1 + char_1;
	int_2 = int_1 + int_1;
	if(1)
	{
		if(1)
		{
		}
		double_1 = double_1 + double_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_2 + char_1;
		}
		int_3 = int_1 * int_1;
		short_2 = short_1 + short_2;
		if(1)
		{
			int_1 = int_2;
		}
		int_1 = int_4 + int_1;
		int_2 = int_5 + int_5;
		if(1)
		{
			char char_4 = 1;
			char_4 = char_4 * char_4;
		}
		float_2 = float_1 * float_2;
		double_1 = double_1 + double_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		int_5 = int_2 * int_1;
		int_2 = int_2;
	}
}
char v_SyMemBackendInit( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	if(1)
	{
		char char_2 = 1;
		if(1)
		{
		}
		v_SyZero(int_1);

		char_2 = char_1 + char_2;
	}
	char_3 = char_1;
	long_1 = long_1 + long_1;
	long_4 = long_2 * long_3;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		char_3 = char_1;
	}
	return char_3;
}
unsigned int v_MemBackendAlloc( short parameter_1,char parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char * vul_var;
	long_1 = long_1 * long_2;
	char_1 = char_1 * char_1;
	float_2 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		int_2 = int_1 + int_1;
		char controller4vul_1321[3];
		fgets(controller4vul_1321 ,3 ,stdin);
		if( strcmp( controller4vul_1321, "eD") > 0)
		{
			if(uni_para == 893)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			short_1 = short_2;
		}
		int_3 = int_1 + int_2;
	}
	if(1)
	{
	}
	int_2 = int_2 * int_1;
	short_2 = short_2 + short_1;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_3 = long_4;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
}
long v_MemBackendRealloc( float parameter_1,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	if(1)
	{
		int int_3 = 1;
		if(1)
		{
		}
		int_3 = int_1 * int_2;
	}
	long_2 = long_1 * long_1;
	int_2 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		short_1 = short_2;
		if(1)
		{
			short_2 = short_3;
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned_int_2 = v_MemBackendAlloc(short_1,char_1,-1 );

			double_1 = double_1 + double_2;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
		}
		if(1)
		{
			short_1 = short_3 * short_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		}
	}
	return long_1;
}
unsigned int v_SyMemBackendRealloc( char parameter_1,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_2 = float_1 + float_1;
	if(1)
	{
		double double_1 = 1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "v3") < 0)
		{
		}
		if(1)
		{
			double double_2 = 1;
			double_1 = double_2;
		}
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		int int_1 = 1;
		long_1 = v_MemBackendRealloc(float_1,float_2);

		int_1 = int_1;
	}
	return unsigned_int_1;
}
double v_SySetPut( double parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		float_2 = float_1 * float_1;
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = v_SyMemBackendRealloc(char_1,char_1);

			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		double_2 = double_2 * double_3;
		if(1)
		{
		}
		unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
		int_2 = int_1 + int_2;
	}
	int_3 = int_1 + int_3;
	short_1 = short_1 + short_2;
	float_1 = float_3;
	return double_3;
}
unsigned int v_vedisCoreConfigure( float parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	long long_1 = 1;
	char char_3 = 1;
	short short_4 = 1;
	char char_5 = 1;
	double double_6 = 1;
	char char_6 = 1;
	float float_5 = 1;
	long long_2 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_7 = 1;
	unsigned_int_1 = unsigned_int_1;
	float_3 = float_1 + float_2;
	if(1)
	{
		if(1)
		{
			int_1 = int_1 * int_2;
		}
		if(1)
		{
			char_2 = char_1 + char_1;
		}
	}
	if(1)
	{
		double_3 = double_1 + double_2;
	}
	int_3 = int_1 * int_1;
	short_1 = short_2;
	if(1)
	{
		float float_4 = 1;
		float_3 = float_2 * float_4;
		int_1 = int_2 + int_2;
	}
	int_1 = int_1;
	double_2 = double_1 * double_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		double_1 = double_2 * double_3;
	}
	short_3 = short_2 * short_3;
	int_2 = int_1 + int_3;
	double_4 = double_4;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		int_1 = int_4 + int_1;
	}
	if(1)
	{
		double_3 = double_4;
	}
	char_1 = char_1 * char_2;
	unsigned_int_5 = unsigned_int_2;
	double_4 = double_5 * double_3;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	int_1 = int_4 * int_3;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		if(1)
		{
			char char_4 = 1;
			char_4 = char_3 * char_2;
		}
		if(1)
		{
			int_3 = int_3;
			char_2 = char_1 + char_3;
		}
		if(1)
		{
			int int_5 = 1;
			int int_6 = 1;
			short_2 = short_2 * short_4;
			if(1)
			{
				int_4 = int_2 + int_2;
			}
			int_6 = int_5 + int_2;
		}
		if(1)
		{
			char_2 = char_2 * char_5;
			if(1)
			{
				short_4 = short_2 * short_4;
			}
		}
		char_5 = v_SyMemBackendInit(double_4,double_1);

		float_2 = float_2 + float_2;
	}
	if(1)
	{
		if(1)
		{
			double_6 = double_4;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		int_4 = int_2;
	}
	double_3 = v_SySetPut(double_5,long_1);

	char_3 = char_3 * char_2;
	if(1)
	{
		double double_7 = 1;
		double_6 = double_7;
	}
	char_6 = v_SyMemBackendInitFromOthers(float_5,long_2,unsigned_int_4);

	double_2 = double_3 + double_2;
	if(1)
	{
		char_3 = char_1 * char_3;
	}
	unsigned_int_3 = unsigned_int_5 + unsigned_int_4;
	if(1)
	{
		short_2 = short_4;
	}
	double_4 = double_8;
	unsigned_int_6 = unsigned_int_3;
	char_1 = char_7 * char_1;
	return unsigned_int_1;
}
int v_vedis_lib_config( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = v_vedisCoreConfigure(float_1,unsigned_int_1);

	long_1 = long_1 + long_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 + short_1;
	double_1 = double_1 * double_1;
	return int_2;
}
double v_vedisCoreInitialize()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_6 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		short_2 = short_1 + short_2;
	}
	float_1 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			float_3 = float_2 + float_3;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double_1 = double_1 + double_1;
				if(1)
				{
				}
				double_2 = double_2;
				if(1)
				{
				}
			}
			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
			if(1)
			{
			}
		}
		int_2 = int_1 + int_2;
	}
	char_1 = char_1 + char_2;
	if(1)
	{
		char char_3 = 1;
		short short_3 = 1;
		char char_5 = 1;
		int int_6 = 1;
		if(1)
		{
			long_1 = v_SySetInit(int_3,long_1,short_2);

			float_1 = float_2 + float_1;
			if(1)
			{
				long_1 = v_vedisExportDiskKvStorage();

				char_3 = char_1 + char_1;
			}
		}
		if(1)
		{
			if(1)
			{
				short short_4 = 1;
				short_3 = short_4;
				if(1)
				{
					char char_4 = 1;
					char_3 = char_4 * char_5;
				}
			}
			int_1 = int_1 * int_2;
		}
		if(1)
		{
			float float_4 = 1;
			float_4 = float_3 * float_3;
		}
		int_5 = int_3 + int_4;
		char_2 = char_5 + char_3;
		int_4 = int_1 + int_1;
		int_4 = v_vedis_lib_config(int_5,char_6);

		int_3 = int_6 + int_5;
		char_5 = char_1 * char_2;
		if(1)
		{
			float_2 = float_1 * float_2;
		}
		long_2 = v_vedisExportMemKvStorage();

		float_1 = float_2 + float_3;
		unsigned_int_2 = v_vedisExportBuiltinVfs();

		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
		if(1)
		{
			short_3 = short_1 + short_3;
		}
	}
	return double_3;
}
int v_vedis_open( unsigned int parameter_1,short parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
		}
		char_2 = char_1 * char_1;
	}
	int_4 = int_3 * int_2;
	if(1)
	{
	}
	short_1 = short_1;
	if(1)
	{
	}
	long_1 = long_1 * long_2;
	double_1 = double_1 * double_2;
	if(1)
	{
		int_1 = int_3 + int_1;
	}
	long_1 = long_1;
	int_2 = int_1 * int_2;
	short_2 = short_1 * short_2;
	char controller4vul_1284[2];
	fgets(controller4vul_1284 ,2 ,stdin);
	if( strcmp( controller4vul_1284, "s") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		char controller4vul_1285[3];
		fgets(controller4vul_1285 ,3 ,stdin);
		if( strcmp( controller4vul_1285, "TG") > 0)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			char controller4vul_1286[3];
			fgets(controller4vul_1286 ,3 ,stdin);
			if( strcmp( controller4vul_1286, "iJ") < 0)
			{
				unsigned int unsigned_int_4 = 1;
				float_1 = v_vedisInitDatabase(int_2,long_1,short_1,long_3,uni_para);

				unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
				unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
			}
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		}
	}
	double_1 = double_1 + double_3;
	int_2 = int_1 * int_1;
	if(1)
	{
		long long_4 = 1;
		long_4 = long_1 * long_1;
	}
	int_2 = int_1 * int_2;
	float_2 = float_2 * float_2;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
	return int_4;
}
int main()
{
	int uni_para =893;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_6 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_3 = char_1 * char_2;
	int_1 = int_1;
	char_4 = char_3;
	long_2 = long_1 * long_1;
	int_3 = int_2 * int_2;
	if(1)
	{
		int_4 = int_1 * int_4;
	}
	int_5 = int_2 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_3 = int_2 + int_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		if(1)
		{
			int_5 = int_2 * int_2;
		}
		if(1)
		{
			long_2 = long_1 + long_1;
		}
	}
	char controller4vul_1282[3];
	fgets(controller4vul_1282 ,3 ,stdin);
	if( strcmp( controller4vul_1282, "<#") > 0)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		char controller4vul_1283[2];
		fgets(controller4vul_1283 ,2 ,stdin);
		if( strcmp( controller4vul_1283, "m") > 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			int_2 = v_vedis_open(unsigned_int_3,short_1,uni_para);

			double_2 = double_1 * double_1;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	short_2 = short_2 * short_1;
	int_5 = int_3 * int_6;
	if(1)
	{
		int int_7 = 1;
		int_4 = int_1 + int_7;
	}
	long_2 = long_3;
	return int_2;
}

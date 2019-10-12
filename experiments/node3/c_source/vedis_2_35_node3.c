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

int v_vedisRemoveCommand( long parameter_1,long parameter_2);
int v_vedis_delete_command( short parameter_1,unsigned int parameter_2);
short v_vedisDeleteBuiltinCommands( int parameter_1);
int v_vedis_close( float parameter_1);
int v_vedisObjContainerDestroy( char parameter_1,double parameter_2);
long v_vedisReleaseContext( char parameter_1);
long v_vedisInitContext( int parameter_1,float parameter_2,long parameter_3);
unsigned int v_vedisExec( unsigned int parameter_1);
short v_SyLexRelease( unsigned int parameter_1);
long v_SyLexTokenizeInput( float parameter_1,unsigned int parameter_2,short parameter_3,float parameter_5,short parameter_6);
char v_vedisTokenizeInput( short parameter_1,long parameter_2);
long v_SyLexInit( unsigned int parameter_1,int parameter_2,float parameter_3);
int v_vedisTokenize( short parameter_1,double parameter_2,float parameter_3);
void v_vedisProcessInput( long parameter_1,unsigned int parameter_2,int parameter_3);
int v_vedis_exec( long parameter_1,float parameter_2,int parameter_3);
int v_isBlank( short parameter_1,double parameter_2);
void v_vedis_exit();
char v_VmJsonArrayEncode( int parameter_1);
int v_vedis_value_is_string( long parameter_1);
int v_SyStrIsNumeric( long parameter_1,float parameter_2,char parameter_3,float parameter_4);
char v_vedisMemObjIsNumeric( unsigned int parameter_1);
int v_vedis_value_is_numeric();
long v_MemObjBooleanValue( unsigned int parameter_1);
short v_vedisMemObjToBool( long parameter_1);
int v_vedis_value_to_bool( long parameter_1);
int v_vedis_value_is_bool( unsigned int parameter_1);
short v_VmJsonEncode( short parameter_1,char parameter_2);
unsigned int v_vedisJsonSerialize( short parameter_1,int parameter_2);
char v_MemObjStringValue( unsigned int parameter_1,double parameter_2);
void v_vedisMemObjToString( short parameter_1);
double v_vedis_value_to_string( short parameter_1,int parameter_2);
double v_array_render( int parameter_1);
char v_vedisHashmapWalk( unsigned int parameter_1,short parameter_2);
int v_vedis_array_walk( float parameter_1,float parameter_2);
int v_vedis_value_is_array( int parameter_1);
int v_vedis_value_is_null( unsigned int parameter_1);
long v_command_result_render( double parameter_1);
unsigned int v_vedisObjectValueDestroy( short parameter_1,float parameter_2);
float v_vedisHashmapRef( int parameter_1);
void v_vedisMemObjStore( long parameter_1,long parameter_2);
float v_SyStrToReal( char parameter_1,unsigned int parameter_2,int parameter_4);
float v_MemObjRealValue( int parameter_1);
unsigned int v_vedisMemObjToReal( long parameter_1);
int v_vedisMemObjRelease( long parameter_1);
void v_vedisHashmapRelease( int parameter_1);
unsigned int v_vedisHashmapUnref( double parameter_1);
double v_vedisHashmapCount( char parameter_1);
float v_SyStrToInt64( float parameter_1,char parameter_2,short parameter_4);
double v_SyOctalStrToInt64( double parameter_1,unsigned int parameter_2,double parameter_4);
long v_SyBinaryStrToInt64( char parameter_1,float parameter_2,short parameter_4);
double v_SyHexToint( double parameter_1);
char v_SyHexStrToInt64( float parameter_1,int parameter_2,float parameter_4);
short v_vedisTokenValueToInt64( float parameter_1);
char v_MemObjStringToInt( float parameter_1);
void v_MemObjRealToInt( int parameter_1);
void v_MemObjIntValue( double parameter_1);
long v_vedisMemObjToInteger( int parameter_1);
void v_vedisMemObjInitFromString( short parameter_1,unsigned int parameter_2,float parameter_3);
void v_vedisNewObjectValue( unsigned int parameter_1,char parameter_2);
unsigned int v_SyBlobNullAppend( short parameter_1);
long v_vedisPagerSetCachesize( int parameter_1,int parameter_2);
double v_vedisConfigure( unsigned int parameter_1,int parameter_2,int parameter_3);
int v_vedis_config( float parameter_1,int parameter_2,float parameter_3);
int v_SySetRelease( double parameter_1);
float v_vedisPagerClose( double parameter_1);
double v_pager_reset_state( long parameter_1,int parameter_2);
int v_vedisPagerRollback( float parameter_1,int parameter_2);
unsigned int v_vedisBitvecDestroy( float parameter_1);
unsigned int v_pager_commit_phase2( long parameter_1);
unsigned int v_pager_write_dirty_pages( int parameter_1,unsigned int parameter_2);
char v_page_merge_dirty( float parameter_1,float parameter_2);
int v_pager_get_dirty_pages( long parameter_1);
double v_pager_commit_phase1( double parameter_1);
unsigned int v_vedisPagerCommit( short parameter_1);
void v_vedisEngineRelease();
void v_vedisCoreShutdown();
int v_vedis_lib_shutdown();
unsigned int v_Fatal( double parameter_1);
long v_SyBlobAppendBig32( short parameter_1,char parameter_2);
unsigned int v_SyBlobAppendBig16( short parameter_1,float parameter_2);
float v_SyBlobFormat( unsigned int parameter_1,short parameter_2,float parameter_3);
float v_vedisPagerGetKvEngine( float parameter_1);
void v_vedisTableSerialize( unsigned int parameter_1);
char v_vedisPagerisMemStore( double parameter_1);
unsigned int v_vedisOnCommit();
unsigned int v_vedisPagerSetCommitCallback( long parameter_1,char parameter_2);
int v_SySetReset();
void v_SyBinHash( int parameter_1,int parameter_2);
double v_vedisFetchCommand( float parameter_1,float parameter_2);
char v_vedisInstallCommand( long parameter_1,int parameter_2,unsigned int parameter_3);
int v_vedis_register_command( float parameter_1,char parameter_2,short parameter_3,int parameter_4,long parameter_5);
void v_vedisRegisterBuiltinCommands( long parameter_1);
void v_vedisMemObjInit( float parameter_1,float parameter_2);
long v_vedisInitCursor( double parameter_1,double parameter_2);
long v_vedisKvIoErr( double parameter_1,long parameter_2);
char v_vedisKvIoPageReload( char parameter_1,char parameter_2);
void v_vedisKvIoPageUnpin( long parameter_1,int parameter_2);
float v_vedisKvIoTempPage( double parameter_1);
char v_vedisKvIoReadOnly( double parameter_1);
int v_vedisKvIoPageSize( double parameter_1);
long v_page_unref( long parameter_1);
double v_vedisKvIoPageUnRef( char parameter_1);
int v_vedisKvIopage_ref( char parameter_1);
void v_vedisKvIoPageDontMakeHot( double parameter_1);
char v_vedisKvIoPageDontJournal( char parameter_1);
float v_vedisPagerDontWrite( short parameter_1);
short v_vedisKvIoPageDontWrite( unsigned int parameter_1);
long v_vedisBitvecSet( int parameter_1,char parameter_2);
void v_WriteInt64( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3);
short v_vedisBitvecTest( float parameter_1,float parameter_2);
void v_page_write( long parameter_1,double parameter_2);
float v_pager_release_page( short parameter_1,char parameter_2);
char v_pager_unlink_page( double parameter_1,int parameter_2);
char v_pager_write_hot_dirty_pages( unsigned int parameter_1,int parameter_2);
int v_page_merge_hot( long parameter_1,int parameter_2);
unsigned int v_pager_get_hot_pages( char parameter_1);
unsigned int v_WriteInt32( int parameter_1,char parameter_2,unsigned int parameter_3);
double v_vedisFinalizeJournal( double parameter_1,int parameter_2,int parameter_3);
long v_pager_dirty_commit( char parameter_1);
short v_pager_write_journal_header( char parameter_1,char parameter_2);
double v_vedisOpenJournal( short parameter_1);
void v_SyTimeFormatToDos( short parameter_1,char parameter_2);
unsigned int v_pager_write_db_header( double parameter_1);
void v_pager_page_to_dirty_list( float parameter_1,float parameter_2);
int v_pager_create_header( short parameter_1);
unsigned int v_vedisBitvecCreate( double parameter_1,int parameter_2);
int v_vedisPagerBegin( float parameter_1);
long v_vedisPageWrite( short parameter_1);
float v_vedisKvIopageWrite( unsigned int parameter_1);
float v_vedisKvIoNewPage( char parameter_1,long parameter_2,int uni_para);
double v_vedisKvIoPageLookup( char parameter_1,short parameter_2,long parameter_3);
int v_page_ref( double parameter_1);
int v_pager_link_page( short parameter_1,char parameter_2);
short v_pager_get_page_contents( float parameter_1,unsigned int parameter_2,int parameter_3);
char v_pager_alloc_page( int parameter_1,int parameter_2);
char v_vedisGetPageSize();
short v_vedisOsSectorSize( short parameter_1);
float v_GetSectorSize( short parameter_1);
unsigned int v_SyDosTimeFormat( int parameter_1,int parameter_2);
char v_pager_extract_header( short parameter_1,char parameter_2,char parameter_3);
unsigned int v_pager_read_db_header( char parameter_1);
short v_vedisOsCloseFree( unsigned int parameter_1,double parameter_2);
int v_pager_fetch_page( unsigned int parameter_1,unsigned int parameter_2);
int v_pager_fill_page( int parameter_1,int parameter_2);
long v_vedisOsWrite( long parameter_1,short parameter_2,int parameter_3,float parameter_4);
float v_pager_cksum( char parameter_1,int parameter_2);
double v_pager_play_back_one_page( short parameter_1,int parameter_2,int parameter_3);
unsigned int v_vedisOsTruncate( unsigned int parameter_1,float parameter_2);
float v_ReadInt64( float parameter_1,double parameter_2,short parameter_3);
char v_ReadInt32( double parameter_1,int parameter_2,char parameter_3);
unsigned int v_vedisOsRead( short parameter_1,char parameter_3,char parameter_4);
double v_pager_read_journal_header( double parameter_1,float parameter_2,float parameter_3);
char v_pager_playback(int uni_para);
void v_vedisOsSync( float parameter_1,int parameter_2);
float v_vedisOsUnlock( char parameter_1,int parameter_2);
short v_pager_unlock_db( long parameter_1,int parameter_2);
float v_vedisOsDelete( long parameter_1,float parameter_2,int parameter_3);
short v_vedisOsFileSize( float parameter_1,char parameter_2);
unsigned int v_vedisOsCheckReservedLock( int parameter_1,int parameter_2);
void v_vedisOsAccess( long parameter_1,double parameter_2,int parameter_3,int parameter_4);
short v_pager_has_hot_journal( float parameter_1,int parameter_2);
double v_pager_journal_rollback( long parameter_1,int parameter_2,int uni_para);
float v_vedisOsLock( int parameter_1,int parameter_2);
void v_pager_lock_db( float parameter_1,int parameter_2);
int v_pager_wait_on_lock( int parameter_1,int parameter_2);
long v_SyBlobFormatAp( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,int uni_para);
short v_vedisGenErrorFormat( double parameter_1,short parameter_2,int parameter_3,int uni_para);
float v_vedisOsOpen( long parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4,double parameter_5);
unsigned int v_pager_shared_lock( char parameter_1,int uni_para);
int v_vedisPagerAcquire( int parameter_1,long parameter_2,double parameter_3,int parameter_4,int parameter_5,int uni_para);
double v_vedisKvIoPageGet( unsigned int parameter_1,long parameter_2,short parameter_3);
short v_pager_kv_io_init( double parameter_1,int parameter_2,unsigned int parameter_3,int uni_para);
int v_vedisGenOutofMem( short parameter_1);
char v_vedisReleaseCursor( float parameter_1,char parameter_2);
char v_pager_release_kv_engine( double parameter_1);
double v_vedisPagerRegisterKvEngine( double parameter_1,short parameter_2,int uni_para);
void v_randomByte( int parameter_1);
double v_SyRandomness( short parameter_1,int parameter_3);
float v_SyOSUtilRandomSeed(short parameter_2);
float v_SyRandomnessInit( char parameter_1,long parameter_2);
double v_vedisGenError( unsigned int parameter_1,unsigned int parameter_2);
char v_vedisFindKVStore( long parameter_1,long parameter_2);
void v_SyStrnicmp( int parameter_1,long parameter_2,long parameter_3);
unsigned int v_vedisInMemory( long parameter_1);
void v_vedisPagerOpen( char parameter_1,double parameter_2,long parameter_3,int parameter_4,int uni_para);
float v_vedisSanityzeFlag();
double v_vedisInitDatabase( unsigned int parameter_1,long parameter_2,char parameter_3,int parameter_4,int uni_para);
void v_lhCursorReset( short parameter_1);
char v_lhCursorData( double parameter_1,short parameter_2,int parameter_3);
void v_lhCursorDataLength( short parameter_1,char parameter_2);
unsigned int v_lhCursorKey( long parameter_1,float parameter_2,char parameter_3);
double v_lhCursorKeyLength( char parameter_1,int parameter_2);
void v_lhRecordRemove();
double v_lhCursorDelete( char parameter_1);
void v_lhCursorPrev();
double v_lhCursorNext( long parameter_1);
double v_lhCursorValid( long parameter_1);
void v_lhCursorPrevPage( long parameter_1);
char v_lhCursorLast( unsigned int parameter_1);
int v_lhCursorNextPage( unsigned int parameter_1);
char v_lhCursorFirst( short parameter_1);
float v_lhRecordLookup( float parameter_1,char parameter_2,char parameter_3,char parameter_4);
long v_lhCursorSeek( double parameter_1,float parameter_2,int parameter_3,int parameter_4);
short v_lhInitCursor( unsigned int parameter_1);
void v_lhash_kv_append( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,float parameter_5);
void v_lhRestorePage( short parameter_1,long parameter_2);
float v_lhRecordOverwrite( short parameter_1,char parameter_2,long parameter_3);
double v_lhMoveLocalCell( char parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4);
float v_lhRecordAppend( unsigned int parameter_1,char parameter_2,double parameter_3);
long v_lhFindSibeling( short parameter_1);
void v_lhUnlinkCell();
float v_lhConsumeCellData( double parameter_1,float parameter_2,char parameter_3);
int v_SyBlobReset( float parameter_1);
long v_SyBlobDup( int parameter_1,long parameter_2);
char v_lhTransferCell( float parameter_1,double parameter_2);
double v_lhPageSplit( float parameter_1,short parameter_2,char parameter_3,char parameter_4);
float v_lhSplit( long parameter_1,int parameter_2);
void v_lhRecordInstall( float parameter_1,short parameter_2,unsigned int parameter_3,unsigned int parameter_4,int parameter_5,short parameter_6);
short v_lhKeyCmp( short parameter_1,unsigned int parameter_2);
unsigned int v_lhFindCell( int parameter_1,char parameter_2,int parameter_3,int parameter_4);
double v_vedisDataConsumer( double parameter_1,float parameter_2);
char v_lhConsumeCellkey( double parameter_1,int parameter_2,short parameter_3,int parameter_6);
int v_lhParseOneCell( float parameter_1,short parameter_2,double parameter_3,double parameter_4);
void v_lhPageFreeSpace( double parameter_1);
double v_lhLoadCells( int parameter_1);
double v_lhParsePageHeader( char parameter_1);
double v_lhLoadPage( int parameter_1,short parameter_2,unsigned int parameter_3,char parameter_4,int parameter_5);
long v_lhMapWriteRecord( short parameter_1,long parameter_2,double parameter_3);
float v_lhCellWriteHeader( unsigned int parameter_1);
long v_lhCellWriteLocalPayload( long parameter_1,short parameter_2,long parameter_3,unsigned int parameter_4,double parameter_5);
void v_lhCellDiscard();
unsigned int v_lhCellWriteOvflPayload( unsigned int parameter_1,double parameter_2,long parameter_3,int parameter_4);
double v_lhInstallCell();
void v_SyBlobInit( long parameter_1,double parameter_2);
short v_lhNewCell( long parameter_1,double parameter_2);
void v_lhRestoreSpace( float parameter_1,float parameter_2,unsigned int parameter_3);
float v_lhFindSlavePage( float parameter_1,int parameter_2,float parameter_3,unsigned int parameter_4);
char v_lhSlaveStore( long parameter_1,short parameter_2,double parameter_3,int parameter_4,double parameter_5,float parameter_6);
void v_lhPageDefragment( unsigned int parameter_1);
double v_SyBigEndianUnpack16( char parameter_1,double parameter_2);
long v_lhAllocateSpace( char parameter_1,short parameter_2,unsigned int parameter_3);
unsigned int v_lhStoreCell( long parameter_1,long parameter_2,float parameter_3,short parameter_4,int parameter_5,float parameter_6,int parameter_7);
int v_SyBigEndianPack16( char parameter_1,long parameter_2);
float v_lhSetEmptyPage();
void v_lhNewPage( float parameter_1,char parameter_2,long parameter_3);
unsigned int v_lhAcquirePage( short parameter_1,long parameter_2);
char v_lhMapFindBucket( double parameter_1,short parameter_2);
float v_lh_record_insert( double parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6);
double v_lhash_kv_replace( unsigned int parameter_1,long parameter_2,int parameter_3,float parameter_4,char parameter_5);
long v_MemPoolBucketAlloc( unsigned int parameter_1,long parameter_2);
void v_MemBackendPoolAlloc( long parameter_1,double parameter_2);
double v_SyMemBackendPoolAlloc( short parameter_1,long parameter_2);
long v_lhMapInstallBucket( unsigned int parameter_1,int parameter_2,char parameter_3);
float v_lhMapLoadPage( float parameter_1,double parameter_2,char parameter_3);
double v_SyBigEndianUnpack64( char parameter_1,unsigned int parameter_2);
char v_SyBigEndianUnpack32( long parameter_1,double parameter_2);
long v_lhash_read_header( long parameter_1,char parameter_2);
short v_SyBigEndianPack64( unsigned int parameter_1,unsigned int parameter_2);
short v_SyBigEndianPack32( int parameter_1,char parameter_2);
void v_lhash_write_header( long parameter_1,char parameter_2);
void v_lhash_kv_open( short parameter_1,long parameter_2);
char v_lhash_kv_config( double parameter_1,int parameter_2,short parameter_3);
int v_lhash_kv_release( char parameter_1);
char v_MemBackendPoolFree( short parameter_1);
void v_SyMemBackendPoolFree( long parameter_1);
double v_SyBlobRelease( float parameter_1);
char v_lhash_page_release();
unsigned int v_lhash_bin_hash( double parameter_1,char parameter_2);
double v_lhash_kv_init( unsigned int parameter_1,int parameter_2);
void v_vedisExportDiskKvStorage();
void v_MemHashCursorReset( short parameter_1);
void v_MemHashCursorData( long parameter_1,long parameter_2,short parameter_3);
double v_MemHashCursorDataLength( char parameter_1,int parameter_2);
long v_MemHashCursorKey( float parameter_1,short parameter_2,long parameter_3);
int v_MemHashCursorKeyLength( short parameter_1,int parameter_2);
double v_MemHashUnlinkRecord( short parameter_1,long parameter_2);
void v_MemHashCursorDelete( long parameter_1);
long v_MemHashCursorPrev( char parameter_1);
short v_MemHashCursorNext( float parameter_1);
float v_MemHashCursorValid( float parameter_1);
short v_MemHashCursorLast( int parameter_1);
char v_MemHashCursorFirst( int parameter_1);
double v_MemHashCursorSeek( short parameter_1,int parameter_2,int parameter_3,int parameter_4);
char v_MemHashInitCursor();
void v_MemHashAppend( double parameter_1,unsigned int parameter_2,int parameter_3,long parameter_4,long parameter_5);
short v_MemHashGrowTable( int parameter_1);
double v_MemHashLinkRecord( float parameter_1,int parameter_2);
double v_MemHashNewRecord( char parameter_1,double parameter_2,int parameter_3,long parameter_4,unsigned int parameter_5,short parameter_6);
int v_MemHashGetEntry( float parameter_1,short parameter_2,int parameter_3);
char v_MemHashReplace( double parameter_1,int parameter_2,int parameter_3,double parameter_4,double parameter_5);
unsigned int v_MemHashConfigure( unsigned int parameter_1,int parameter_2,char parameter_3);
int v_MemBackendRelease( int parameter_1);
void v_SyMemBackendRelease( int parameter_1);
unsigned int v_MemHashRelease( unsigned int parameter_1);
long v_MemHashFunc( long parameter_1,short parameter_2);
short v_SyMemBackendInitFromParent( float parameter_1,double parameter_2);
long v_MemHashInit( int parameter_1,int parameter_2);
long v_vedisExportMemKvStorage();
long v_SySetInit( short parameter_1,int parameter_2,unsigned int parameter_3);
unsigned int v_UnixUnmap(float parameter_2);
short v_UnixMmap( char parameter_1,short parameter_3);
unsigned int v_unixCurrentTime( int parameter_1,int parameter_2);
int v_unixSleep( short parameter_1,int parameter_2);
double v_SyMemBackendDup( unsigned int parameter_1,unsigned int parameter_2,double parameter_3);
float v_BlobPrepareGrow( short parameter_1,unsigned int parameter_2,int uni_para);
double v_SyBlobAppend( double parameter_1,float parameter_2,unsigned int parameter_3,int uni_para);
void v_FormatConsumer( unsigned int parameter_1,unsigned int parameter_2,int uni_para);
char v_getdigit( short parameter_1,int parameter_2);
void v_InternFormat( double parameter_1,long parameter_3,unsigned int parameter_4);
double v_FormatMount( long parameter_1,float parameter_3,long parameter_5,float parameter_6,short parameter_7,int uni_para);
float v_SyBlobInitFromBuf( double parameter_1,int parameter_3);
void v_SyBufferFormat( char parameter_1,short parameter_2,char parameter_3,long parameter_4);
double v_unixFullPathname( long parameter_1,long parameter_2,int parameter_3,char parameter_4);
short v_unixAccess( float parameter_1,float parameter_2,int parameter_3,int parameter_4);
short v_unixDelete( double parameter_1,short parameter_2,int parameter_3);
double v_MemBackendFree( char parameter_1);
int v_SyMemBackendFree( long parameter_1);
long v_vedis_free();
int v_SyMemcpy( double parameter_1,char parameter_3);
void v_SyMemcmp( long parameter_1,long parameter_2,float parameter_3);
unsigned int v_findInodeInfo( long parameter_1,double parameter_2);
char v_fillInUnixFile( unsigned int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5,int parameter_6,int parameter_7);
unsigned int v_SyStrlen( char parameter_1);
double v_Systrcpy( char parameter_1,int parameter_2,double parameter_3,char parameter_4);
void v_openDirectory( unsigned int parameter_1,int parameter_2);
long v_findCreateFileMode( long parameter_1,int parameter_2,float parameter_3);
double v_SyMemBackendAlloc( char parameter_1,int parameter_2);
double v_vedisExportMemBackend();
float v_vedis_malloc( double parameter_1);
char v_unixLeaveMutex();
double v_unixEnterMutex();
double v_findReusableFd( char parameter_1,int parameter_2);
double v_unixOpen( char parameter_1,float parameter_2,double parameter_3,short parameter_4);
float v_vedisExportBuiltinVfs();
unsigned int v_SyMemBackendInitFromOthers( long parameter_1,float parameter_2,int parameter_3);
unsigned int v_SyZero(long parameter_2);
char v_SyMemBackendInit( char parameter_1,char parameter_2);
void v_MemBackendAlloc( unsigned int parameter_1,float parameter_2,int uni_para);
float v_MemBackendRealloc( long parameter_1,unsigned int parameter_3,int uni_para);
short v_SyMemBackendRealloc( short parameter_1,int parameter_3,int uni_para);
unsigned int v_SySetPut( unsigned int parameter_1,float parameter_2);
short v_vedisCoreConfigure( int parameter_1,int parameter_2);
int v_vedis_lib_config( int parameter_1,short parameter_2);
float v_vedisCoreInitialize();
int v_vedis_open( float parameter_1,float parameter_2,int uni_para);
int v_vedisRemoveCommand( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_1;
	char_3 = char_1 + char_2;
	unsigned_int_1 = v_SyStrlen(char_3);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
		char char_4 = 1;
		char_2 = char_1 + char_4;
	}
	if(1)
	{
		double_3 = v_vedisFetchCommand(float_1,float_1);

		int_2 = int_1 * int_2;
	}
	if(1)
	{
		int_1 = int_2 * int_2;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	}
	unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
	int_1 = v_SyMemBackendFree(long_1);

	float_3 = float_2 + float_3;
	unsigned_int_4 = unsigned_int_6 + unsigned_int_2;
	return int_3;
}
int v_vedis_delete_command( short parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	long long_4 = 1;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
	}
	long_1 = long_1 * long_2;
	if(1)
	{
		short short_1 = 1;
		int_1 = v_vedisRemoveCommand(long_3,long_4);

		short_1 = short_1 * short_1;
	}
	return int_1;
}
short v_vedisDeleteBuiltinCommands( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_3 = char_1 * char_2;
	int_2 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		int_2 = v_vedis_delete_command(short_1,unsigned_int_1);

		double_1 = double_1 * double_2;
	}
	return short_1;
}
int v_vedis_close( float parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_3 = 1;
	short_1 = v_vedisDeleteBuiltinCommands(int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	char_3 = char_1 * char_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	int_1 = int_2 + int_2;
	short_2 = short_1 * short_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_4;
	}
	v_SyMemBackendPoolFree(long_2);

	char_3 = char_4 + char_5;
	return int_3;
	v_vedisEngineRelease();

}
int v_vedisObjContainerDestroy( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	double_1 = double_1 + double_2;
	double_2 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int int_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_1 = v_SySetRelease(double_1);

		int_3 = int_1 * int_2;
	}
	unsigned_int_1 = v_vedisObjectValueDestroy(short_1,float_1);

	double_2 = double_2 + double_1;
	return int_4;
}
long v_vedisReleaseContext( char parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	double double_2 = 1;
	v_SyMemBackendPoolFree(long_1);

	double_1 = v_SyBlobRelease(float_1);

	float_3 = float_2 + float_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short_2 = short_1 * short_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			if(1)
			{
				int int_2 = 1;
				int int_3 = 1;
				int_1 = v_vedisMemObjRelease(long_1);

				int_3 = int_1 * int_2;
			}
			double_3 = double_2 + double_1;
			char_1 = char_1 + char_2;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	int_1 = v_SySetRelease(double_2);

	double_2 = double_1 + double_2;
	return long_1;
}
long v_vedisInitContext( int parameter_1,float parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double_2 = double_1 + double_2;
	long_1 = v_SySetInit(short_1,int_1,unsigned_int_1);

	long_3 = long_1 * long_2;
	short_2 = short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_6 = long_4 * long_5;
	v_SyBlobInit(long_6,double_1);

	int_1 = v_vedisMemObjRelease(long_3);

	double_1 = double_1 * double_2;
	return long_4;
}
unsigned int v_vedisExec( unsigned int parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	long long_5 = 1;
	int int_4 = 1;
	float float_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	short_1 = v_vedisGenErrorFormat(double_1,short_2,int_1,-1 );

	int_2 = int_1 * int_2;
	double_1 = double_1 * double_2;
	int_1 = v_vedisObjContainerDestroy(char_1,double_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = v_SySetInit(short_3,int_2,unsigned_int_2);

	short_1 = short_4;
	long_2 = v_vedisReleaseContext(char_1);

	int_3 = int_2 + int_2;
	float_1 = float_2;
	unsigned_int_3 = v_SySetPut(unsigned_int_1,float_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float float_3 = 1;
			long long_4 = 1;
			float_2 = float_3;
			long_4 = long_3 * long_2;
		}
	}
	if(1)
	{
		long_3 = long_3 + long_3;
	}
	short_1 = short_4 * short_1;
	double_3 = double_2;
	double_1 = double_2 + double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	double_5 = double_4 + double_4;
	if(1)
	{
		double_4 = v_vedisFetchCommand(float_4,float_4);

		char_1 = char_1 + char_1;
	}
	long_5 = v_vedisInitContext(int_4,float_5,long_3);

	double_1 = double_2 + double_5;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_2 * char_1;
	}
	int_4 = int_3 + int_4;
	if(1)
	{
		v_vedisNewObjectValue(unsigned_int_2,char_3);

		unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
		}
	}
	int_1 = int_3;
	return unsigned_int_4;
	double_6 = v_vedisGenError(unsigned_int_6,unsigned_int_2);

}
short v_SyLexRelease( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "16") < 0)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
	}
	return short_1;
}
long v_SyLexTokenizeInput( float parameter_1,unsigned int parameter_2,short parameter_3,float parameter_5,short parameter_6)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	float_1 = float_1 + float_1;
	int_1 = int_1 + int_1;
	int_2 = int_1;
	double_1 = double_1;
	if(1)
	{
		if(1)
		{
		}
		unsigned_int_1 = v_SySetPut(unsigned_int_1,float_1);

		double_2 = double_1;
	}
	char_2 = char_1 * char_2;
	long_1 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		long long_4 = 1;
		if(1)
		{
			double double_3 = 1;
			double_2 = double_3 + double_3;
		}
		int_2 = int_1 * int_2;
		short_2 = short_1 * short_1;
		if(1)
		{
			if(1)
			{
			}
			long_4 = long_3 * long_1;
		}
		if(1)
		{
			long_1 = long_4 + long_2;
		}
		if(1)
		{
			char_1 = char_1 + char_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			}
		}
		if(1)
		{
			char char_3 = 1;
			v_SyMemcmp(long_1,long_1,float_1);

			char_2 = char_3;
		}
	}
	if(1)
	{
		short short_3 = 1;
		double_2 = double_2 + double_2;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_3;
		}
		short_3 = short_1 + short_1;
	}
	return long_3;
}
char v_vedisTokenizeInput( short parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char_2 = char_1 + char_2;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 * int_2;
		if(1)
		{
			char char_4 = 1;
			double_1 = double_1 + double_1;
			char_4 = char_1 + char_3;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double_2 = double_1 + double_2;
			unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
		}
		long_1 = long_1 * long_1;
	}
	int_4 = int_1 * int_2;
	if(1)
	{
		double_2 = double_2 + double_1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	}
	short_1 = short_1 * short_2;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
		float_1 = float_1 * float_1;
	}
	double_3 = double_1 * double_1;
	if(1)
	{
		short short_3 = 1;
		long long_2 = 1;
		short_1 = short_3;
		long_2 = long_2 * long_1;
	}
	int_4 = int_1 + int_2;
	return char_3;
}
long v_SyLexInit( unsigned int parameter_1,int parameter_2,float parameter_3)
{
	float float_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
		}
		short_1 = short_2;
	}
	if(1)
	{
		char char_1 = 1;
		if(1)
		{
		}
		char_2 = char_1 + char_1;
	}
	float_2 = float_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_2 + char_2;
	int_3 = int_1 * int_2;
	double_1 = double_1 * double_2;
	int_3 = int_2 * int_1;
	int_5 = int_4 * int_4;
	return long_1;
}
int v_vedisTokenize( short parameter_1,double parameter_2,float parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	short short_2 = 1;
	long_1 = v_SyLexInit(unsigned_int_1,int_1,float_1);

	char_1 = v_vedisTokenizeInput(short_1,long_1);

	long_2 = v_SyLexTokenizeInput(float_1,unsigned_int_2,short_1,float_1,short_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	float_4 = float_2 + float_3;
	float_3 = float_4 + float_3;
	if(1)
	{
	}
	long_3 = long_4;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	return int_2;
	short_2 = v_SyLexRelease(unsigned_int_1);

}
void v_vedisProcessInput( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	int int_4 = 1;
	double double_6 = 1;
	double_1 = double_1 * double_2;
	double_2 = double_1 * double_2;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = v_SySetInit(short_1,int_2,unsigned_int_2);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	int_1 = v_vedisTokenize(short_2,double_2,float_1);

	unsigned_int_3 = unsigned_int_2;
	int_3 = int_2 + int_2;
	double_2 = double_1 * double_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2 * float_2;
	}
	short_1 = short_2;
	int_2 = int_2 * int_3;
	unsigned_int_2 = unsigned_int_4;
	char_1 = char_1 * char_1;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "_)") > 0)
	{
		float float_4 = 1;
		long_1 = long_1;
		float_4 = float_2 + float_2;
	}
	char_2 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double_3 = double_1;
		unsigned_int_3 = v_vedisExec(unsigned_int_1);

		double_1 = double_4 + double_5;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
	}
	double_5 = double_5 + double_1;
	int_4 = v_SySetRelease(double_6);

}
int v_vedis_exec( long parameter_1,float parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "m`") > 0)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	}
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	return int_1;
	v_vedisProcessInput(long_1,unsigned_int_1,int_1);

	unsigned_int_3 = v_SyStrlen(char_1);

}
int v_isBlank( short parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_3 = int_1 + int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		int int_4 = 1;
		int int_6 = 1;
		int_6 = int_4 * int_5;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return int_5;
}
void v_vedis_exit()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = v_vedis_lib_shutdown();

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
}
char v_VmJsonArrayEncode( int parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char char_2 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		short_1 = v_VmJsonEncode(short_2,char_1);

		int_2 = int_2 * int_1;
	}
	double_1 = v_SyBlobAppend(double_2,float_1,unsigned_int_1,-1 );

	double_1 = double_2 + double_1;
	double_3 = double_2 * double_3;
	double_2 = double_3 * double_3;
	float_2 = float_1 * float_2;
	return char_2;
}
int v_vedis_value_is_string( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
int v_SyStrIsNumeric( long parameter_1,float parameter_2,char parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_1;
	char_1 = char_1;
	float_2 = float_1 + float_2;
	if(1)
	{
		float float_3 = 1;
		float_2 = float_3 * float_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "|W") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_2;
		}
		char_2 = char_3;
		int_3 = int_1 + int_2;
	}
	return int_3;
}
char v_vedisMemObjIsNumeric( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		char_2 = char_1 + char_2;
		int_2 = int_1 * int_1;
		int_3 = v_SyStrIsNumeric(long_1,float_1,char_1,float_2);

		char_4 = char_1 * char_3;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_4 = int_5;
	}
	return char_2;
}
int v_vedis_value_is_numeric()
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1;
	return int_1;
	char_1 = v_vedisMemObjIsNumeric(unsigned_int_1);

}
long v_MemObjBooleanValue( unsigned int parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_6 = 1;
	if(1)
	{
	}
	char_1 = char_1;
	int_1 = int_2;
	double_2 = double_1 * double_2;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_3 = v_vedisHashmapCount(char_2);

		double_5 = double_4 + double_5;
	}
	return long_1;
	v_SyStrnicmp(int_3,long_2,long_1);

	unsigned_int_1 = v_vedisHashmapUnref(double_6);

}
short v_vedisMemObjToBool( long parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double_3 = double_1 * double_2;
		long_1 = v_MemObjBooleanValue(unsigned_int_1);

		int_1 = int_1;
		double_4 = v_SyBlobRelease(float_1);

		char_3 = char_1 + char_2;
	}
	return short_1;
}
int v_vedis_value_to_bool( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	return int_3;
	short_1 = v_vedisMemObjToBool(long_1);

}
int v_vedis_value_is_bool( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	return int_1;
}
short v_VmJsonEncode( short parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	int int_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_7 = 1;
	short short_4 = 1;
	short_2 = short_1 * short_2;
	double_1 = v_vedis_value_to_string(short_2,int_1);

	int_2 = v_vedis_value_is_array(int_2);

	double_1 = double_2 + double_3;
	if(1)
	{
		int_2 = v_vedis_value_is_bool(unsigned_int_1);

		float_1 = float_1 + float_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "C") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		int_3 = v_vedis_value_to_bool(long_1);

		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		float_3 = float_2 + float_2;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		short short_3 = 1;
		int_3 = int_1 + int_2;
		short_1 = short_2 * short_3;
		int_2 = v_vedis_array_walk(float_2,float_1);

		float_3 = float_4 * float_4;
	}
	if(1)
	{
		int int_6 = 1;
		char_2 = char_1 + char_2;
		int_2 = int_1 + int_1;
		int_4 = v_vedis_value_is_null(unsigned_int_3);

		double_3 = double_4 + double_3;
		char_1 = v_VmJsonArrayEncode(int_5);

		short_1 = short_1;
		double_1 = double_1 * double_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				char char_3 = 1;
				char_3 = char_2 * char_3;
			}
			unsigned_int_4 = unsigned_int_4;
			double_1 = double_3 * double_4;
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				int_3 = v_vedis_value_is_string(long_2);

				unsigned_int_4 = unsigned_int_5 + unsigned_int_6;
			}
			double_2 = v_SyBlobAppend(double_3,float_3,unsigned_int_3,-1 );

			float_1 = float_3 * float_1;
		}
		int_5 = int_1 + int_6;
	}
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		int_7 = v_vedis_value_is_numeric();

		double_4 = double_1 + double_5;
		unsigned_int_5 = unsigned_int_3;
		double_3 = double_6 + double_5;
		double_5 = double_5 + double_1;
	}
	if(1)
	{
		float float_5 = 1;
		float_2 = float_5 + float_4;
	}
	return short_4;
}
unsigned int v_vedisJsonSerialize( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_1;
	short_1 = short_1 + short_1;
	float_2 = float_1 + float_1;
	float_1 = float_3 + float_4;
	short_2 = v_VmJsonEncode(short_1,char_1);

	unsigned_int_1 = unsigned_int_2;
	int_3 = int_2 + int_1;
	return unsigned_int_1;
}
char v_MemObjStringValue( unsigned int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		if(1)
		{
			double double_3 = 1;
			unsigned_int_1 = v_vedisHashmapUnref(double_1);

			double_3 = double_2 + double_2;
		}
		if(1)
		{
			double double_4 = 1;
			float_1 = v_SyBlobFormat(unsigned_int_2,short_1,float_2);

			double_2 = double_2 + double_4;
		}
	}
	if(1)
	{
		int int_3 = 1;
		char char_1 = 1;
		int_3 = int_3 * int_1;
		double_2 = v_SyBlobAppend(double_2,float_2,unsigned_int_2,-1 );

		char_2 = char_1 + char_2;
	}
	return char_2;
	unsigned_int_3 = v_vedisJsonSerialize(short_2,int_2);

}
void v_vedisMemObjToString( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int_2 = int_1 + int_1;
		long_1 = long_1;
		int_3 = v_SyBlobReset(float_1);

		double_1 = double_3 + double_4;
	}
	char_1 = v_MemObjStringValue(unsigned_int_1,double_1);

}
double v_vedis_value_to_string( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	v_vedisMemObjToString(short_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
		if(1)
		{
			int int_1 = 1;
			unsigned_int_2 = v_SyBlobNullAppend(short_2);

			int_1 = int_1 * int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
	}
	return double_1;
}
double v_array_render( int parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	float_2 = float_1 * float_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double_1 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	int_1 = v_vedis_value_is_null(unsigned_int_1);

	int_1 = int_1 * int_1;
	return double_1;
	double_2 = v_vedis_value_to_string(short_1,int_1);

}
char v_vedisHashmapWalk( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	char char_1 = 1;
	double_3 = double_1 * double_2;
	short_3 = short_1 * short_2;
	float_1 = float_1 + float_2;
	float_3 = float_2 * float_1;
	long_1 = long_1 + long_2;
	short_2 = short_3 + short_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		long long_4 = 1;
		double double_4 = 1;
		if(1)
		{
			long_1 = long_2;
		}
		long_2 = long_3 * long_4;
		if(1)
		{
		}
		double_3 = double_4 * double_2;
		double_2 = double_2;
	}
	return char_1;
}
int v_vedis_array_walk( float parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = v_vedisHashmapWalk(unsigned_int_1,short_1);

	char_2 = char_1;
	return int_1;
}
int v_vedis_value_is_array( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	return int_1;
}
int v_vedis_value_is_null( unsigned int parameter_1)
{
	int int_1 = 1;
	int_1 = int_1 + int_1;
	return int_1;
}
long v_command_result_render( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		double double_2 = 1;
		int_1 = v_vedis_value_is_array(int_1);

		int_1 = v_vedis_array_walk(float_1,float_1);

		unsigned_int_4 = unsigned_int_3;
		double_1 = v_array_render(int_1);

		double_2 = double_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_4 = double_3 * double_1;
	}
	if(1)
	{
		short short_1 = 1;
		int_1 = v_vedis_value_is_null(unsigned_int_4);

		short_1 = short_1 + short_1;
	}
	return long_1;
	double_4 = v_vedis_value_to_string(short_2,int_1);

}
unsigned int v_vedisObjectValueDestroy( short parameter_1,float parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v_vedisMemObjRelease(long_1);

	v_SyMemBackendPoolFree(long_1);

	char_1 = char_2;
	short_2 = short_1 + short_2;
	return unsigned_int_1;
}
float v_vedisHashmapRef( int parameter_1)
{
	float float_1 = 1;
	float_1 = float_1;
	return float_1;
}
void v_vedisMemObjStore( long parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	long_1 = long_1 * long_2;
	int_1 = v_SyBlobReset(float_1);

	int_3 = int_1 * int_2;
	if(1)
	{
		float_1 = v_vedisHashmapRef(int_2);

		long_3 = long_2 + long_2;
	}
	if(1)
	{
		int_3 = int_1 * int_3;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = v_vedisHashmapUnref(double_1);

	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		if(1)
		{
			double_2 = v_SyBlobRelease(float_2);

			int_5 = int_3 * int_4;
		}
	}
	if(1)
	{
		float float_3 = 1;
		int_4 = v_SyMemcpy(double_1,char_1);

		float_2 = float_3;
	}
	long_2 = v_SyBlobDup(int_5,long_3);

}
float v_SyStrToReal( char parameter_1,unsigned int parameter_2,int parameter_4)
{
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
}
float v_MemObjRealValue( int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double_1 = v_vedisHashmapCount(char_1);

	unsigned_int_1 = v_vedisHashmapUnref(double_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	return float_1;
	char_1 = v_MemObjStringToInt(float_1);

	float_2 = v_SyStrToReal(char_2,unsigned_int_3,int_1);

}
unsigned int v_vedisMemObjToReal( long parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		double_1 = v_SyBlobRelease(float_1);

		short_1 = short_2;
		long_2 = long_1 * long_2;
		int_1 = int_1 + int_1;
	}
	return unsigned_int_1;
	float_2 = v_MemObjRealValue(int_2);

}
int v_vedisMemObjRelease( long parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "}") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		if(1)
		{
			double_1 = double_1 + double_1;
		}
		double_1 = v_SyBlobRelease(float_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_3 = v_vedisHashmapUnref(double_1);

		float_2 = float_1 + float_2;
	}
	return int_1;
}
void v_vedisHashmapRelease( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	float_2 = float_1 * float_1;
	double_1 = v_SyBlobRelease(float_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 * long_1;
	int_1 = v_SyMemBackendFree(long_1);

	short_2 = short_1 * short_1;
	v_SyMemBackendPoolFree(long_3);

	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		char char_1 = 1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		}
		double_2 = double_1 * double_1;
		int_1 = int_1 * int_2;
		if(1)
		{
			double double_3 = 1;
			double_1 = double_1 + double_3;
		}
		int_3 = v_vedisMemObjRelease(long_2);

		float_2 = float_1 * float_1;
		double_2 = double_1 + double_2;
		char_1 = char_1 * char_1;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "6") > 0)
	{
		double double_4 = 1;
		double_4 = double_2 + double_4;
	}
	double_1 = double_5 + double_5;
}
unsigned int v_vedisHashmapUnref( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		v_vedisHashmapRelease(int_1);

		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	}
	return unsigned_int_2;
}
double v_vedisHashmapCount( char parameter_1)
{
	double double_1 = 1;
	return double_1;
}
float v_SyStrToInt64( float parameter_1,char parameter_2,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	int_1 = int_2;
	int_2 = int_3 + int_4;
	long_1 = long_1;
	int_3 = int_1 * int_3;
	short_1 = short_1;
	return float_1;
	v_SyMemcmp(long_2,long_1,float_1);

}
double v_SyOctalStrToInt64( double parameter_1,unsigned int parameter_2,double parameter_4)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float_1 = float_1 * float_1;
	long_3 = long_1 + long_2;
	double_1 = double_1 * double_1;
	double_3 = double_1 * double_2;
	return double_2;
}
long v_SyBinaryStrToInt64( char parameter_1,float parameter_2,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	return long_1;
}
double v_SyHexToint( double parameter_1)
{
	double double_1 = 1;
	return double_1;
}
char v_SyHexStrToInt64( float parameter_1,int parameter_2,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	short_1 = short_1 + short_2;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_2 = 1;
			int_1 = int_2 + int_1;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			double_3 = double_1 * double_2;
		}
	}
	long_1 = long_1 + long_2;
	double_4 = double_1 * double_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
		double_2 = v_SyHexToint(double_3);

		double_4 = double_2 + double_4;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double_2 = double_1 + double_5;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	}
	double_1 = double_3 * double_5;
	return char_1;
}
short v_vedisTokenValueToInt64( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	float_1 = v_SyStrToInt64(float_2,char_1,short_1);

	short_2 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_2 = 1;
		char_2 = v_SyHexStrToInt64(float_1,int_1,float_3);

		long_3 = long_1 * long_2;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1 * double_2;
		}
		if(1)
		{
			int int_2 = 1;
			int_1 = int_1 * int_2;
		}
		if(1)
		{
			double_1 = v_SyOctalStrToInt64(double_1,unsigned_int_1,double_3);

			double_3 = double_1 * double_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		long_4 = v_SyBinaryStrToInt64(char_1,float_2,short_3);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	return short_3;
}
char v_MemObjStringToInt( float parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short_1 = v_vedisTokenValueToInt64(float_1);

	short_2 = short_2 * short_2;
	int_1 = int_1;
	return char_1;
}
void v_MemObjRealToInt( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	int_1 = int_2;
	char_1 = char_1 * char_1;
	int_1 = int_1 + int_3;
	long_1 = long_1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_1;
	char_3 = char_4;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	int_1 = int_3 * int_4;
	long_1 = long_2;
	double_1 = double_1 * double_1;
	float_2 = float_3 + float_2;
	char_4 = char_2 * char_1;
}
void v_MemObjIntValue( double parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	v_MemObjRealToInt(int_1);

	double_1 = v_vedisHashmapCount(char_1);

	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1;
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
		char char_2 = 1;
		char char_3 = 1;
		int int_2 = 1;
		short short_1 = 1;
		char_1 = v_MemObjStringToInt(float_1);

		char_3 = char_2 * char_2;
		int_2 = int_1 * int_1;
		unsigned_int_1 = v_vedisHashmapUnref(double_2);

		short_1 = short_1 + short_1;
	}
}
long v_vedisMemObjToInteger( int parameter_1)
{
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	if(1)
	{
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long_1 = long_2;
		v_MemObjIntValue(double_1);

		int_2 = int_1 * int_1;
		double_2 = v_SyBlobRelease(float_1);

		int_2 = int_1 + int_3;
	}
	return long_2;
}
void v_vedisMemObjInitFromString( short parameter_1,unsigned int parameter_2,float parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	v_SyBlobInit(long_1,double_1);

	long_2 = long_2 + long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double_2 = v_SyBlobAppend(double_2,float_1,unsigned_int_2,-1 );

		long_2 = long_3;
	}
	unsigned_int_2 = v_SyZero(long_3);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
}
void v_vedisNewObjectValue( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = v_vedisMemObjToInteger(int_1);

	int_1 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		v_vedisMemObjInitFromString(short_1,unsigned_int_2,float_1);

		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		unsigned_int_1 = v_vedisMemObjToReal(long_1);

		v_vedisMemObjInit(float_1,float_2);

		short_3 = short_2 * short_2;
		if(1)
		{
			float float_4 = 1;
			float_4 = float_3 * float_4;
		}
		if(1)
		{
			short short_4 = 1;
			short_1 = short_2 * short_4;
		}
	}
	if(1)
	{
		float float_5 = 1;
		float float_6 = 1;
		float_6 = float_3 + float_5;
	}
	double_1 = v_SyMemBackendPoolAlloc(short_1,long_2);

}
unsigned int v_SyBlobNullAppend( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	char_2 = char_1 + char_1;
	double_1 = v_SyBlobAppend(double_1,float_1,unsigned_int_3,-1 );

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	return unsigned_int_2;
}
long v_vedisPagerSetCachesize( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	short_1 = short_1 * short_1;
	return long_1;
}
double v_vedisConfigure( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_6 = 1;
	short short_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_7 = 1;
	short short_2 = 1;
	float_1 = float_1;
	int_2 = int_1 + int_1;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_3 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_4 = double_3 + double_4;
		double_5 = double_4 * double_1;
	}
	int_2 = int_3 + int_3;
	double_4 = double_3 + double_2;
	if(1)
	{
		if(1)
		{
			float_2 = v_vedisPagerGetKvEngine(float_1);

			unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
		}
		if(1)
		{
			int_3 = int_3 + int_1;
		}
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	char_1 = char_2;
	float_1 = float_1 + float_2;
	int_2 = int_2 + int_4;
	if(1)
	{
		double double_7 = 1;
		int_4 = int_2 * int_3;
		double_6 = double_7;
		unsigned_int_4 = v_vedisObjectValueDestroy(short_1,float_3);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
		char_5 = char_3 * char_4;
		if(1)
		{
			v_vedisMemObjStore(long_1,long_2);

			char_5 = char_3;
			v_vedisNewObjectValue(unsigned_int_2,char_5);

			long_3 = long_2 * long_3;
			float_1 = float_1 + float_2;
		}
		unsigned_int_1 = unsigned_int_5;
		long_1 = long_2 + long_3;
	}
	double_1 = double_3;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_6;
	}
	int_4 = int_4 + int_1;
	char_6 = char_3 * char_3;
	char_2 = char_4 * char_5;
	unsigned_int_5 = unsigned_int_7 + unsigned_int_2;
	double_4 = double_2 + double_5;
	long_3 = v_vedisPagerSetCachesize(int_2,int_3);

	char_7 = char_2 * char_5;
	unsigned_int_3 = v_SyBlobNullAppend(short_1);

	short_2 = short_2;
	double_5 = double_4;
	return double_6;
}
int v_vedis_config( float parameter_1,int parameter_2,float parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		double_1 = v_vedisConfigure(unsigned_int_2,int_1,int_2);

		int_2 = int_2 + int_1;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_1 = int_2;
	int_4 = int_1 + int_3;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	return int_5;
}
int v_SySetRelease( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_2;
	}
	short_1 = short_1 * short_1;
	short_1 = short_2 * short_3;
	double_1 = double_1 * double_1;
	return int_3;
	int_3 = v_SyMemBackendFree(long_2);

}
float v_vedisPagerClose( double parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_5 = 1;
	char_1 = v_pager_release_kv_engine(double_1);

	char_2 = char_1 + char_2;
	if(1)
	{
		short_1 = v_pager_unlock_db(long_1,int_1);

		double_1 = double_1 + double_2;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = v_vedisBitvecDestroy(float_1);

			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		}
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 * int_2;
		float_1 = float_2 * float_3;
	}
	if(1)
	{
		float float_4 = 1;
		float_2 = float_3 * float_1;
		short_1 = v_vedisOsCloseFree(unsigned_int_3,double_2);

		float_3 = float_3 * float_4;
	}
	return float_1;
	float_5 = v_vedisExportBuiltinVfs();

}
double v_pager_reset_state( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	float float_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int_3 = int_1 + int_2;
	float_1 = float_2;
	int_2 = int_1 + int_2;
	char_2 = char_1 + char_1;
	char_1 = char_3 * char_4;
	int_3 = int_1;
	double_1 = double_1 * double_2;
	unsigned_int_1 = v_SyZero(long_1);

	float_3 = float_3 * float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "(") > 0)
		{
			int_2 = int_2 * int_4;
		}
		int_4 = int_3 + int_1;
		char_4 = char_3 + char_1;
		unsigned_int_2 = v_vedisBitvecDestroy(float_3);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		double_2 = double_1 + double_1;
	}
	short_2 = short_1 + short_1;
	double_1 = double_1 * double_1;
	long_2 = long_1 + long_1;
	float_1 = float_4 * float_2;
	int_2 = int_1 * int_3;
	if(1)
	{
		char_3 = char_3 * char_1;
	}
	if(1)
	{
		int int_5 = 1;
		short_3 = v_pager_unlock_db(long_2,int_4);

		int_1 = int_5 * int_3;
		double_1 = double_1 * double_1;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	float_2 = v_pager_release_page(short_2,char_4);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		long long_3 = 1;
		long_1 = long_1 * long_3;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
		}
		double_1 = double_1 * double_2;
		short_2 = short_3 * short_2;
		if(1)
		{
			char char_5 = 1;
			char_3 = char_5 + char_3;
			if(1)
			{
			}
		}
		if(1)
		{
			float float_5 = 1;
			float_4 = float_5 + float_1;
			if(1)
			{
			}
		}
	}
	return double_3;
}
int v_vedisPagerRollback( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double_1 = v_pager_reset_state(long_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		int int_4 = 1;
		if(1)
		{
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_1 = char_2;
			}
			double_1 = v_vedisGenError(unsigned_int_1,unsigned_int_1);

			double_2 = double_1 * double_2;
			short_1 = v_vedisOsCloseFree(unsigned_int_1,double_3);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				v_vedisOsSync(float_1,int_1);

				int_3 = int_1 * int_2;
				if(1)
				{
					short_1 = v_pager_unlock_db(long_2,int_3);

					unsigned_int_1 = unsigned_int_3;
				}
			}
		}
		double_2 = v_pager_journal_rollback(long_3,int_2,-1 );

		long_2 = long_1;
		int_3 = int_4 + int_3;
		if(1)
		{
			double_1 = double_3 + double_1;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		}
	}
	if(1)
	{
		long long_4 = 1;
		double double_4 = 1;
		long_3 = long_4;
		float_2 = v_vedisOsDelete(long_3,float_2,int_5);

		double_1 = double_4;
	}
	return int_6;
}
unsigned int v_vedisBitvecDestroy( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_4 = 1;
	int_2 = int_1 * int_1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		int int_5 = 1;
		char char_3 = 1;
		int int_6 = 1;
		long long_2 = 1;
		int int_7 = 1;
		short short_4 = 1;
		float float_4 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		int_3 = int_1 + int_1;
		int_1 = v_SyMemBackendFree(long_1);

		int_3 = int_4;
		double_1 = double_1 + double_1;
		short_3 = short_1 + short_2;
		if(1)
		{
			int_2 = int_2 + int_1;
		}
		char_2 = char_1 * char_2;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		float_2 = float_1 + float_1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2;
		}
		float_1 = float_3 * float_1;
		int_5 = int_2 + int_5;
		float_3 = float_3;
		char_1 = char_1 * char_3;
		if(1)
		{
			int_4 = int_6 * int_3;
		}
		long_1 = long_2 * long_1;
		int_7 = int_6 + int_1;
		short_4 = short_3 * short_4;
		v_SyMemBackendPoolFree(long_3);

		float_4 = float_2 + float_2;
	}
	char_4 = char_4 + char_5;
	int_3 = int_8;
	return unsigned_int_4;
}
unsigned int v_pager_commit_phase2( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			if(1)
			{
				unsigned_int_1 = v_vedisBitvecDestroy(float_1);

				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			}
			long_1 = long_1 * long_1;
			float_2 = v_vedisOsDelete(long_1,float_3,int_1);

			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				double double_1 = 1;
				short_1 = v_pager_unlock_db(long_2,int_2);

				unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
				double_1 = double_1 * double_1;
			}
		}
	}
	return unsigned_int_1;
}
unsigned int v_pager_write_dirty_pages( int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_3 = 1;
	float float_2 = 1;
	short short_2 = 1;
	char char_4 = 1;
	double double_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_1;
	long_2 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		long long_4 = 1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "8") < 0)
		{
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
		long_1 = v_vedisOsWrite(long_2,short_1,int_1,float_1);

		char_1 = char_1 + char_3;
		if(1)
		{
			float_2 = v_pager_release_page(short_2,char_3);

			long_2 = long_2 * long_2;
			if(1)
			{
				float_1 = float_1 + float_1;
			}
		}
		long_4 = long_1 + long_3;
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_2 + int_1;
			float_1 = float_2 * float_2;
		}
		short_2 = short_1 + short_1;
	}
	char_4 = char_3 * char_1;
	char_3 = v_pager_unlink_page(double_1,int_4);

	double_1 = double_2;
	float_4 = float_1 + float_3;
	return unsigned_int_1;
}
char v_page_merge_dirty( float parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_1 = int_1 + int_1;
	short_1 = short_1 * short_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	int_3 = int_2 + int_3;
	return char_1;
}
int v_pager_get_dirty_pages( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned_int_1 = v_SyZero(long_1);

			char_1 = v_page_merge_dirty(float_1,float_2);

			double_2 = double_1 * double_2;
		}
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 + int_1;
		}
	}
	return int_2;
}
double v_pager_commit_phase1( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short_3 = short_1 + short_2;
	int_1 = int_1 * int_1;
	int_2 = v_pager_get_dirty_pages(long_1);

	double_2 = double_1 * double_2;
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
		double_2 = v_vedisGenError(unsigned_int_1,unsigned_int_2);

		int_5 = int_3 * int_4;
		if(1)
		{
			float float_2 = 1;
			v_vedisOsSync(float_1,int_4);

			float_1 = float_2;
		}
		int_5 = int_1;
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	int_3 = int_3 * int_4;
	if(1)
	{
		int int_6 = 1;
		int_5 = v_pager_wait_on_lock(int_3,int_4);

		int_6 = int_5 * int_1;
		if(1)
		{
			short_3 = short_2 + short_2;
		}
	}
	if(1)
	{
		unsigned_int_3 = v_pager_write_dirty_pages(int_1,unsigned_int_3);

		short_3 = short_4 + short_2;
	}
	unsigned_int_1 = v_vedisOsTruncate(unsigned_int_4,float_1);

	unsigned_int_1 = unsigned_int_4;
	if(1)
	{
		short short_5 = 1;
		double_2 = v_vedisFinalizeJournal(double_3,int_2,int_3);

		long_2 = long_1 * long_1;
		long_2 = long_2 + long_3;
		short_2 = short_5 + short_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	double_2 = double_2 * double_1;
	long_4 = long_2 + long_1;
	long_2 = long_3;
	return double_2;
}
unsigned int v_vedisPagerCommit( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double_1 = v_pager_commit_phase1(double_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 + int_2;
	if(1)
	{
		int_2 = int_2 + int_1;
	}
	char_2 = char_1 + char_1;
	if(1)
	{
		unsigned_int_1 = v_pager_commit_phase2(long_1);

		int_3 = int_1 * int_2;
	}
	short_1 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	return unsigned_int_3;
}
void v_vedisEngineRelease()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	float float_4 = 1;
	double double_3 = 1;
	float_3 = float_1 * float_2;
	if(1)
	{
		long long_1 = 1;
		v_SyMemBackendRelease(int_1);

		long_1 = long_1 + long_1;
		if(1)
		{
			double double_1 = 1;
			double_2 = double_1 * double_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = v_vedisPagerCommit(short_1);

		int_1 = v_vedisPagerRollback(float_3,int_1);

		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	int_2 = int_1 + int_2;
	float_4 = float_1 + float_3;
	double_2 = double_2 + double_3;
	float_2 = v_vedisPagerClose(double_2);

}
void v_vedisCoreShutdown()
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	float_1 = float_1 + float_2;
	double_1 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		char char_1 = 1;
		int int_3 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		short_1 = short_1 + short_2;
		int_1 = v_SySetRelease(double_3);

		char_1 = char_1 * char_1;
		int_3 = int_1 + int_2;
		v_vedisEngineRelease();

		long_2 = long_1 * long_1;
	}
	short_3 = short_1;
	if(1)
	{
		if(1)
		{
			long long_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			if(1)
			{
				long_2 = long_3 + long_3;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
			}
			if(1)
			{
				long long_4 = 1;
				long_3 = long_1 * long_4;
			}
			unsigned_int_4 = unsigned_int_5 + unsigned_int_3;
		}
		v_SyMemBackendRelease(int_2);

		int_2 = int_1;
	}
	if(1)
	{
		float_2 = float_1;
	}
	double_3 = double_4 + double_2;
}
int v_vedis_lib_shutdown()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	return int_3;
	v_vedisCoreShutdown();

}
unsigned int v_Fatal( double parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = v_vedis_lib_shutdown();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_2;
	return unsigned_int_2;
}
long v_SyBlobAppendBig32( short parameter_1,char parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = v_SyBigEndianPack32(int_1,char_1);

	short_3 = short_1 + short_2;
	int_1 = int_1 + int_1;
	short_4 = short_2;
	char_2 = char_2 * char_1;
	return long_1;
	double_1 = v_SyBlobAppend(double_2,float_1,unsigned_int_1,-1 );

}
unsigned int v_SyBlobAppendBig16( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double_1 = v_SyBlobAppend(double_1,float_1,unsigned_int_1,-1 );

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	double_1 = double_2 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = v_SyBigEndianPack16(char_1,long_1);

	char_1 = char_1 + char_1;
	return unsigned_int_1;
}
float v_SyBlobFormat( unsigned int parameter_1,short parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		if(1)
		{
		}
		double_3 = double_1 * double_2;
	}
	char_3 = char_1 + char_2;
	double_4 = v_FormatMount(long_1,float_1,long_1,float_1,short_1,-1 );

	char_3 = char_3;
	return float_1;
}
float v_vedisPagerGetKvEngine( float parameter_1)
{
	float float_1 = 1;
	return float_1;
}
void v_vedisTableSerialize( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	float float_4 = 1;
	long long_2 = 1;
	short short_5 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short_1 = short_2;
	float_3 = float_1 + float_2;
	v_SyBlobInit(long_1,double_1);

	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_2 = v_vedisPagerGetKvEngine(float_1);

	unsigned_int_2 = v_SyBlobAppendBig16(short_3,float_1);

	long_1 = v_SyBlobAppendBig32(short_4,char_1);

	double_1 = double_1;
	float_4 = v_SyBlobFormat(unsigned_int_2,short_4,float_2);

	long_1 = long_2 * long_1;
	short_5 = v_vedisGenErrorFormat(double_2,short_4,int_1,-1 );

	char_3 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int_1 = int_2 + int_1;
	}
	int_2 = int_1 + int_1;
	double_2 = double_1 * double_3;
	char_3 = char_3 * char_1;
	float_3 = float_4 * float_4;
	int_3 = int_2 + int_3;
	int_4 = int_1 * int_1;
	double_3 = v_SyBlobRelease(float_4);

	int_1 = int_5 * int_5;
	if(1)
	{
	}
	long_1 = long_2 + long_2;
}
char v_vedisPagerisMemStore( double parameter_1)
{
	char char_1 = 1;
	return char_1;
}
unsigned int v_vedisOnCommit()
{
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 * double_1;
	char_1 = v_vedisPagerisMemStore(double_2);

	double_2 = double_2 + double_2;
	float_1 = float_1 + float_2;
	short_1 = short_2;
	if(1)
	{
	}
	short_4 = short_3 + short_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		long_1 = long_1 * long_2;
		if(1)
		{
		}
		double_1 = double_3 * double_3;
	}
	return unsigned_int_1;
	v_vedisTableSerialize(unsigned_int_2);

}
unsigned int v_vedisPagerSetCommitCallback( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_2;
	return unsigned_int_1;
}
int v_SySetReset()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short_3 = short_1 * short_2;
	long_3 = long_1 * long_2;
	return int_1;
}
void v_SyBinHash( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short_2 = short_1 * short_1;
	float_2 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1 + double_2;
		}
		int_1 = int_1 + int_1;
		double_1 = double_3 * double_1;
		if(1)
		{
			int_4 = int_2 + int_3;
		}
		unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
		double_1 = double_3;
		if(1)
		{
			int_3 = int_2 + int_3;
		}
		int_1 = int_4 * int_4;
		long_1 = long_1 * long_1;
		if(1)
		{
			short short_3 = 1;
			short_2 = short_2 + short_3;
		}
		long_1 = long_1 * long_2;
		int_4 = int_2 * int_3;
	}
}
double v_vedisFetchCommand( float parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char_2 = char_1 * char_2;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	v_SyBinHash(int_1,int_1);

	float_2 = float_1 * float_2;
	float_1 = float_3 * float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "A`") < 0)
		{
			int int_2 = 1;
			int_2 = int_2;
		}
		if(1)
		{
		}
		v_SyMemcmp(long_1,long_2,float_1);

		long_2 = long_1 + long_3;
	}
	return double_1;
}
char v_vedisInstallCommand( long parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_9 = 1;
	double double_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_12 = 1;
	char char_2 = 1;
	double double_5 = 1;
	float float_3 = 1;
	double double_8 = 1;
	char char_3 = 1;
	double_2 = double_1 + double_1;
	int_3 = int_1 + int_2;
	float_1 = float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 + int_3;
	long_1 = long_2;
	int_3 = v_SyMemBackendFree(long_3);

	int_4 = int_1 * int_2;
	int_4 = int_2 + int_2;
	short_1 = short_2;
	if(1)
	{
		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
		float_2 = float_2 * float_1;
		unsigned_int_8 = unsigned_int_6 * unsigned_int_7;
	}
	unsigned_int_9 = v_SyZero(long_2);

	int_2 = int_5 * int_1;
	if(1)
	{
	}
	int_6 = v_SySetReset();

	double_3 = double_1 * double_1;
	unsigned_int_6 = v_SyStrlen(char_1);

	int_8 = int_7 * int_8;
	long_2 = v_SySetInit(short_1,int_7,unsigned_int_8);

	unsigned_int_5 = unsigned_int_3 * unsigned_int_10;
	float_2 = float_1;
	double_2 = double_3 + double_2;
	v_SyBinHash(int_8,int_8);

	int_6 = int_9 * int_2;
	unsigned_int_1 = unsigned_int_10 + unsigned_int_1;
	double_4 = double_2 + double_1;
	int_8 = int_1 * int_6;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_7;
	short_1 = short_2 + short_2;
	short_2 = short_3;
	if(1)
	{
		unsigned int unsigned_int_11 = 1;
		unsigned_int_11 = unsigned_int_12;
	}
	int_1 = int_8 + int_5;
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		long_3 = long_4 + long_5;
		double_2 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
		int_7 = int_1 * int_7;
		char_2 = char_2 + char_1;
		if(1)
		{
			double double_6 = 1;
			int int_10 = 1;
			double_6 = double_5 + double_2;
			float_3 = float_1 + float_1;
			short_3 = short_3;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				if(1)
				{
					double double_7 = 1;
					double_1 = double_3 * double_7;
				}
				int_9 = v_SyMemcpy(double_8,char_3);

				unsigned_int_9 = unsigned_int_8 * unsigned_int_12;
				int_10 = int_5;
				unsigned_int_3 = unsigned_int_2;
				if(1)
				{
					unsigned int unsigned_int_13 = 1;
					unsigned_int_4 = unsigned_int_6 + unsigned_int_13;
				}
				double_5 = v_SyMemBackendAlloc(char_3,int_1);

				char_1 = char_1;
				long_1 = long_5 * long_5;
				int_8 = int_7;
			}
			char_1 = char_2 + char_2;
			int_10 = int_10 + int_2;
			int_5 = int_4 * int_5;
		}
	}
	return char_2;
	double_3 = v_vedisFetchCommand(float_3,float_3);

}
int v_vedis_register_command( float parameter_1,char parameter_2,short parameter_3,int parameter_4,long parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_4 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		char_1 = v_vedisInstallCommand(long_1,int_3,unsigned_int_1);

		float_1 = float_1 + float_1;
	}
	if(1)
	{
	}
	short_1 = short_1;
	if(1)
	{
		int_2 = int_2 + int_3;
	}
	return int_4;
}
void v_vedisRegisterBuiltinCommands( long parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long_1 = long_1 * long_1;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = v_vedis_register_command(float_1,char_1,short_1,int_3,long_2);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
}
void v_vedisMemObjInit( float parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 + float_1;
	unsigned_int_3 = v_SyZero(long_1);

	v_SyBlobInit(long_1,double_1);

	double_1 = double_1 * double_1;
}
long v_vedisInitCursor( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_4 = 1;
	double double_3 = 1;
	int int_2 = 1;
	long long_5 = 1;
	short_1 = short_1 * short_1;
	double_1 = v_SyMemBackendPoolAlloc(short_1,long_1);

	int_1 = int_1 + int_1;
	double_1 = double_1 * double_1;
	short_2 = v_vedisGenErrorFormat(double_2,short_2,int_1,-1 );

	char_2 = char_1 + char_1;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	float_3 = float_1 * float_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_1 = long_2 * long_3;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	unsigned_int_1 = v_SyZero(long_4);

	double_2 = double_3;
	int_1 = int_2;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int_5 = int_3 * int_4;
	}
	float_3 = float_1 + float_1;
	return long_5;
	int_1 = v_vedisGenOutofMem(short_2);

}
long v_vedisKvIoErr( double parameter_1,long parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = v_vedisGenError(unsigned_int_1,unsigned_int_1);

	long_1 = long_1 * long_2;
	double_2 = double_2 + double_3;
	return long_2;
}
char v_vedisKvIoPageReload( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_1;
	return char_1;
}
void v_vedisKvIoPageUnpin( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_2 = long_1 * long_1;
	short_1 = short_2;
}
float v_vedisKvIoTempPage( double parameter_1)
{
	float float_1 = 1;
	return float_1;
}
char v_vedisKvIoReadOnly( double parameter_1)
{
	char char_1 = 1;
	return char_1;
}
int v_vedisKvIoPageSize( double parameter_1)
{
	int int_1 = 1;
	return int_1;
}
long v_page_unref( long parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	char char_3 = 1;
	long long_2 = 1;
	char_1 = v_pager_unlink_page(double_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		char char_2 = 1;
		short short_2 = 1;
		char_1 = char_1 * char_2;
		if(1)
		{
			short short_1 = 1;
			short_3 = short_1 + short_2;
			int_1 = int_1 + int_1;
		}
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				double double_2 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_3 = 1;
				float_1 = v_pager_release_page(short_3,char_3);

				double_3 = double_2 + double_1;
				if(1)
				{
					int int_2 = 1;
					int_2 = int_1 + int_1;
				}
				if(1)
				{
					int int_3 = 1;
					int int_4 = 1;
					short short_4 = 1;
					short short_5 = 1;
					int_4 = int_1 * int_3;
					if(1)
					{
						long long_1 = 1;
						long_2 = long_1 + long_1;
					}
					short_5 = short_4 * short_2;
				}
				unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
				unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			}
		}
	}
	return long_2;
}
double v_vedisKvIoPageUnRef( char parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		long_1 = v_page_unref(long_1);

		char_2 = char_1 + char_1;
	}
	return double_1;
}
int v_vedisKvIopage_ref( char parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = v_page_ref(double_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	return int_1;
}
void v_vedisKvIoPageDontMakeHot( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			float_1 = float_2 + float_3;
		}
		if(1)
		{
			int_1 = int_1 * int_1;
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_1 + int_2;
		}
		if(1)
		{
			int_2 = int_1;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	}
}
char v_vedisKvIoPageDontJournal( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	int_1 = int_2;
	int_4 = int_3 * int_1;
	if(1)
	{
	}
	short_1 = v_vedisBitvecTest(float_1,float_1);

	long_1 = v_vedisBitvecSet(int_3,char_1);

	short_2 = short_1 * short_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
	}
	return char_2;
}
float v_vedisPagerDontWrite( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	char_2 = char_1 * char_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	return float_1;
}
short v_vedisKvIoPageDontWrite( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	float_1 = v_vedisPagerDontWrite(short_1);

	float_1 = float_1 * float_1;
	return short_1;
}
long v_vedisBitvecSet( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int_1 = int_2;
	double_2 = double_1 * double_1;
	long_3 = long_1 + long_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_2;
	int_3 = int_4 * int_4;
	double_1 = v_SyMemBackendAlloc(char_1,int_1);

	int_2 = int_1 + int_3;
	short_2 = short_1 * short_1;
	unsigned_int_1 = v_SyZero(long_2);

	double_2 = double_2;
	double_3 = double_2 * double_2;
	char_2 = char_2 * char_3;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_2 = double_4 + double_2;
		double_5 = double_5 + double_4;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		float_1 = float_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			float float_3 = 1;
			short short_3 = 1;
			long long_6 = 1;
			int_5 = v_SyMemBackendFree(long_4);

			unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
			double_2 = v_SyMemBackendPoolAlloc(short_1,long_5);

			float_3 = float_1 + float_1;
			int_1 = int_1 * int_4;
			short_2 = short_1 * short_2;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double double_6 = 1;
				double double_7 = 1;
				char char_4 = 1;
				unsigned int unsigned_int_4 = 1;
				if(1)
				{
					short_1 = short_1 + short_2;
				}
				double_4 = double_5 * double_2;
				double_6 = double_5;
				double_7 = double_4 * double_6;
				double_5 = double_7 + double_7;
				char_4 = char_1 * char_1;
				unsigned_int_4 = unsigned_int_3;
			}
			long_5 = long_4;
			short_2 = short_3;
			long_1 = long_6 + long_4;
		}
	}
	return long_3;
}
void v_WriteInt64( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_2 = float_1 * float_1;
	double_2 = double_1 + double_1;
	short_1 = v_SyBigEndianPack64(unsigned_int_1,unsigned_int_2);

	short_2 = short_2 * short_2;
	long_1 = v_vedisOsWrite(long_2,short_3,int_1,float_1);

	int_1 = int_2;
}
short v_vedisBitvecTest( float parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int_3 = int_1 + int_2;
	double_3 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		double double_5 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			double_3 = double_3 * double_2;
		}
		if(1)
		{
		}
		double_5 = double_4 + double_4;
		if(1)
		{
			int int_4 = 1;
			int_4 = int_5;
		}
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			int_5 = int_5 * int_3;
		}
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_3;
		}
		if(1)
		{
		}
		short_1 = short_1 * short_1;
	}
	return short_1;
}
void v_page_write( long parameter_1,double parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	int int_5 = 1;
	short_1 = v_vedisBitvecTest(float_1,float_2);

	v_WriteInt64(unsigned_int_1,unsigned_int_1,unsigned_int_1);

	float_2 = float_2 + float_1;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			long_1 = long_1 * long_1;
			if(1)
			{
				float_2 = float_1 + float_2;
			}
			v_pager_page_to_dirty_list(float_1,float_2);

			double_1 = double_1 * double_1;
			if(1)
			{
			}
			double_2 = double_1 * double_2;
			if(1)
			{
			}
			unsigned_int_1 = v_WriteInt32(int_1,char_1,unsigned_int_1);

			long_1 = v_vedisBitvecSet(int_2,char_2);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
			if(1)
			{
			}
			int_3 = int_3 * int_3;
			double_1 = double_1;
			float_3 = v_pager_cksum(char_2,int_4);

			int_2 = int_3 * int_2;
		}
	}
	double_3 = v_vedisGenError(unsigned_int_4,unsigned_int_3);

	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
		long_2 = v_vedisOsWrite(long_3,short_2,int_5,float_2);

		int_4 = int_3;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
		}
	}
}
float v_pager_release_page( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			v_SyMemBackendPoolFree(long_1);

			long_3 = long_2 * long_1;
		}
		double_2 = double_1 * double_1;
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		double_2 = double_2 * double_1;
	}
	return float_1;
}
char v_pager_unlink_page( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = int_2;
		unsigned_int_1 = unsigned_int_2;
	}
	double_1 = double_2;
	double_1 = double_1 * double_1;
	return char_1;
}
char v_pager_write_hot_dirty_pages( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	int int_5 = 1;
	char char_3 = 1;
	float_1 = float_1 + float_2;
	int_2 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
			char_1 = v_pager_unlink_page(double_1,int_1);

			float_3 = float_3;
		}
		short_2 = short_1 + short_1;
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1;
			if(1)
			{
				long_1 = long_1 * long_2;
			}
		}
		int_3 = int_1 * int_2;
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "?6") == 0)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			int int_4 = 1;
			int_2 = int_4;
		}
		if(1)
		{
			double double_3 = 1;
			float_1 = v_pager_release_page(short_2,char_2);

			double_3 = double_3 * double_3;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			long_1 = v_vedisOsWrite(long_2,short_1,int_5,float_3);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		float_1 = float_1 * float_1;
		float_2 = float_1 * float_2;
		char_3 = char_1 * char_3;
	}
	return char_3;
}
int v_page_merge_hot( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_2;
	double_1 = double_2;
	double_3 = double_2 + double_2;
	double_4 = double_3 * double_3;
	return int_1;
}
unsigned int v_pager_get_hot_pages( char parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = v_page_merge_hot(long_1,int_2);

	long_2 = long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_2 * int_2;
	float_2 = float_1 * float_2;
	unsigned_int_3 = v_SyZero(long_2);

	int_1 = int_1 + int_1;
	return unsigned_int_3;
}
unsigned int v_WriteInt32( int parameter_1,char parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = v_vedisOsWrite(long_2,short_1,int_1,float_1);

	double_3 = double_1 + double_2;
	float_3 = float_2 * float_1;
	short_2 = v_SyBigEndianPack32(int_2,char_1);

	long_2 = long_3 + long_1;
	float_4 = float_3 * float_2;
	return unsigned_int_1;
}
double v_vedisFinalizeJournal( double parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_4 = 1;
	short_1 = v_vedisOsCloseFree(unsigned_int_1,double_1);

	double_2 = double_1;
	short_2 = short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long long_1 = 1;
		v_pager_lock_db(float_1,int_1);

		long_1 = long_1 * long_1;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
	}
	double_3 = double_1 + double_3;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
	}
	int_2 = int_1 + int_1;
	if(1)
	{
		float float_2 = 1;
		if(1)
		{
			if(1)
			{
			}
		}
		unsigned_int_1 = v_WriteInt32(int_2,char_1,unsigned_int_1);

		v_vedisOsSync(float_1,int_1);

		float_2 = float_2 * float_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_4;
		}
	}
	return double_4;
}
long v_pager_dirty_commit( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
		double_1 = v_vedisGenError(unsigned_int_5,unsigned_int_5);

		double_2 = double_2 * double_1;
		if(1)
		{
		}
	}
	unsigned_int_2 = v_pager_get_hot_pages(char_1);

	long_1 = long_1;
	double_2 = v_vedisFinalizeJournal(double_2,int_1,int_3);

	unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
		int_1 = v_pager_wait_on_lock(int_3,int_4);

		double_1 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	}
	char_1 = char_3 * char_4;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
	return long_1;
	char_3 = v_pager_write_hot_dirty_pages(unsigned_int_7,int_4);

}
short v_pager_write_journal_header( char parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_1 = short_1 * short_2;
	int_1 = int_2;
	short_3 = short_1 + short_2;
	int_3 = int_2 * int_1;
	double_2 = double_1 + double_1;
	short_1 = v_SyBigEndianPack32(int_2,char_1);

	int_4 = int_2 + int_3;
	float_1 = float_1 * float_1;
	char_2 = char_2;
	char_1 = char_2 * char_2;
	char_4 = char_3 * char_4;
	short_2 = short_3;
	short_2 = v_SyBigEndianPack64(unsigned_int_1,unsigned_int_2);

	long_2 = long_1 + long_1;
	return short_2;
	int_1 = v_SyMemcpy(double_1,char_2);

}
double v_vedisOpenJournal( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	short short_3 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	char_1 = char_2;
	int_1 = v_SyMemBackendFree(long_1);

	double_1 = double_2;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_2;
	}
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	int_2 = int_3 + int_3;
	if(1)
	{
		float_1 = v_vedisOsDelete(long_3,float_1,int_3);

		short_1 = short_1 + short_1;
	}
	long_3 = long_1 + long_1;
	if(1)
	{
		short_1 = v_vedisGenErrorFormat(double_2,short_2,int_4,-1 );

		short_3 = v_pager_write_journal_header(char_1,char_3);

		double_1 = double_2;
		double_1 = double_1 + double_1;
	}
	float_3 = float_1 * float_2;
	float_4 = v_vedisOsOpen(long_4,double_2,unsigned_int_1,int_4,double_1);

	short_1 = short_4 * short_1;
	long_4 = v_vedisOsWrite(long_5,short_1,int_1,float_2);

	unsigned_int_2 = unsigned_int_2;
	char_1 = char_3 + char_1;
	if(1)
	{
		double_2 = double_2 * double_1;
	}
	double_2 = v_SyMemBackendAlloc(char_4,int_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_5;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	return double_1;
	short_1 = v_vedisOsCloseFree(unsigned_int_4,double_3);

}
void v_SyTimeFormatToDos( short parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_1 + double_2;
	int_1 = int_1 + int_1;
	int_1 = int_2;
	char_2 = char_1 + char_1;
}
unsigned int v_pager_write_db_header( double parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_7 = 1;
	long long_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = v_SyMemcpy(double_1,char_1);

	char_1 = char_1 + char_2;
	float_2 = float_1 * float_2;
	float_4 = float_2 * float_3;
	short_1 = short_1 + short_2;
	int_2 = v_SyBigEndianPack16(char_3,long_1);

	int_3 = int_2 + int_1;
	short_1 = v_SyBigEndianPack32(int_1,char_4);

	float_4 = float_3 * float_1;
	int_4 = int_5;
	int_4 = int_4 + int_6;
	char_3 = char_5 * char_6;
	if(1)
	{
		double_2 = double_2 + double_3;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = v_SyStrlen(char_2);

	double_3 = double_3 * double_3;
	double_2 = double_3 * double_1;
	double_3 = double_1 * double_2;
	char_7 = char_2;
	float_1 = float_1 * float_4;
	double_1 = double_3;
	int_3 = int_5 * int_6;
	unsigned_int_1 = v_SyZero(long_2);

	v_SyTimeFormatToDos(short_2,char_4);

	int_1 = int_6 * int_6;
	int_5 = int_2 * int_4;
	double_4 = double_3 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_3;
}
void v_pager_page_to_dirty_list( float parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_2;
	long_2 = long_1 * long_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	double_2 = double_1 * double_2;
	if(1)
	{
		long_1 = long_1 + long_1;
	}
}
int v_pager_create_header( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 * int_2;
	int_3 = v_pager_link_page(short_1,char_1);

	v_pager_page_to_dirty_list(float_1,float_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	char_1 = v_pager_alloc_page(int_2,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_2 = v_pager_write_db_header(double_1);

	char_1 = char_1 + char_1;
	double_1 = double_2 * double_1;
	return int_4;
}
unsigned int v_vedisBitvecCreate( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	long long_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = v_SyZero(long_1);

	long_2 = long_2;
	long_2 = long_3 * long_3;
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = v_SyMemBackendAlloc(char_1,int_1);

	double_4 = double_4;
	double_1 = double_1 + double_2;
	if(1)
	{
		short_3 = short_2 * short_1;
	}
	int_2 = v_SyMemBackendFree(long_4);

	short_3 = short_1 * short_2;
	double_2 = double_2 * double_5;
	float_2 = float_1 + float_2;
	return unsigned_int_2;
}
int v_vedisPagerBegin( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double_3 = double_1 * double_2;
	unsigned_int_1 = v_vedisBitvecCreate(double_3,int_1);

	int_2 = v_vedisGenOutofMem(short_1);

	short_2 = v_pager_unlock_db(long_1,int_2);

	char_1 = char_1 * char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_2;
	}
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		char char_3 = 1;
		short short_3 = 1;
		long_1 = long_2 + long_2;
		if(1)
		{
			double double_4 = 1;
			int_2 = v_pager_wait_on_lock(int_1,int_2);

			double_4 = double_4 + double_3;
			unsigned_int_2 = unsigned_int_4;
			unsigned_int_5 = v_pager_shared_lock(char_2,-1 );

			unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
		}
		char_3 = char_2 + char_2;
		short_3 = short_1 + short_2;
		double_3 = double_3 * double_2;
		double_5 = double_1;
		if(1)
		{
			double double_6 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double_6 = double_6 + double_5;
			if(1)
			{
				int_2 = v_pager_create_header(short_1);

				char_1 = char_1 + char_2;
			}
			float_2 = float_1 * float_2;
		}
	}
	if(1)
	{
		long long_3 = 1;
		long_2 = long_1 + long_3;
	}
	double_1 = v_vedisGenError(unsigned_int_5,unsigned_int_4);

	double_8 = double_5 + double_7;
	return int_2;
}
long v_vedisPageWrite( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_1;
	short_1 = short_1 * short_1;
	double_1 = v_vedisGenError(unsigned_int_3,unsigned_int_3);

	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
	}
	if(1)
	{
		float_1 = float_1 * float_1;
		if(1)
		{
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long_1 = v_pager_dirty_commit(char_1);

		int_3 = int_1 * int_2;
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 + float_2;
		}
	}
	v_page_write(long_1,double_2);

	char_3 = char_1 * char_2;
	return long_2;
	int_4 = v_vedisPagerBegin(float_1);

	double_1 = v_vedisOpenJournal(short_2);

}
float v_vedisKvIopageWrite( unsigned int parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long_1 = v_vedisPageWrite(short_1);

	long_2 = long_2;
	if(1)
	{
	}
	short_1 = short_1 + short_2;
	return float_1;
}
float v_vedisKvIoNewPage( char parameter_1,long parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	int_1 = int_1 * int_1;
	char controller4vul_719[3];
	fgets(controller4vul_719 ,3 ,stdin);
	if( strcmp( controller4vul_719, "57") > 0)
	{
		int_2 = v_vedisPagerAcquire(int_2,long_1,double_1,int_3,int_1,uni_para);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	}
	return float_1;
}
double v_vedisKvIoPageLookup( char parameter_1,short parameter_2,long parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_1 = v_vedisPagerAcquire(int_1,long_1,double_1,int_1,int_2,-1 );

	double_2 = double_2 + double_1;
	double_3 = double_2;
	return double_3;
}
int v_page_ref( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short_2 = short_1 * short_2;
	return int_1;
}
int v_pager_link_page( short parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_6 = 1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = v_SyMemBackendAlloc(char_1,int_1);

	int_1 = int_1 + int_2;
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	unsigned_int_2 = v_SyZero(long_1);

	double_3 = double_2 * double_1;
	int_1 = int_1 + int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		long long_2 = 1;
		double double_4 = 1;
		long long_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long_2 = long_1;
		double_1 = double_3 * double_4;
		long_2 = long_3 + long_3;
		float_1 = float_2;
		if(1)
		{
			double double_5 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_4 = 1;
			int int_5 = 1;
			double double_8 = 1;
			int_3 = v_SyMemBackendFree(long_1);

			double_6 = double_2 + double_5;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
			double_1 = double_6 * double_3;
			unsigned_int_4 = unsigned_int_6 + unsigned_int_3;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned int unsigned_int_7 = 1;
				if(1)
				{
					double double_7 = 1;
					double_7 = double_1 * double_4;
				}
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
				int_5 = int_3 * int_4;
				short_2 = short_2 + short_1;
				char controller_5[3];
				fgets(controller_5 ,3 ,stdin);
				if( strcmp( controller_5, "17") < 0)
				{
					char char_2 = 1;
					char_2 = char_1 + char_1;
				}
				long_3 = long_3 + long_1;
				unsigned_int_7 = unsigned_int_5;
				long_2 = long_1;
			}
			int_5 = int_1 + int_4;
			int_2 = int_2 + int_3;
			double_8 = double_6;
		}
	}
	return int_6;
}
short v_pager_get_page_contents( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		unsigned_int_2 = v_SyZero(long_1);

		unsigned_int_1 = v_vedisOsRead(short_1,char_1,char_1);

		long_3 = long_2 * long_3;
		float_2 = float_3 + float_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	return short_1;
}
char v_pager_alloc_page( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_1 = v_SyZero(long_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	double_1 = v_SyMemBackendPoolAlloc(short_1,long_2);

	double_3 = double_2 + double_3;
	double_5 = double_2 + double_4;
	long_4 = long_3 + long_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	int_2 = int_1 + int_1;
	return char_1;
}
char v_vedisGetPageSize()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	return char_1;
}
short v_vedisOsSectorSize( short parameter_1)
{
	short short_1 = 1;
	if(1)
	{
	}
	return short_1;
}
float v_GetSectorSize( short parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short_1 = v_vedisOsSectorSize(short_1);

	int_1 = int_1 + int_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_2 = int_3;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_1 * double_2;
		}
	}
	return float_1;
}
unsigned int v_SyDosTimeFormat( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_2 = char_1 + char_1;
	int_3 = int_1 * int_2;
	short_2 = short_1 * short_1;
	short_2 = short_1 + short_1;
	short_2 = short_1 * short_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_2 * int_4;
	char_2 = char_3 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_2;
	long_1 = long_1 + long_2;
	return unsigned_int_3;
}
char v_pager_extract_header( short parameter_1,char parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short_1 = short_1 + short_2;
	char_1 = char_2;
	double_1 = double_1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	float_1 = float_1;
	v_SyMemcmp(long_1,long_2,float_2);

	char_2 = char_1 * char_2;
	int_3 = int_2 * int_1;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	double_1 = double_1 * double_1;
	double_2 = v_SyBigEndianUnpack16(char_3,double_3);

	char_2 = char_2;
	char_1 = v_SyBigEndianUnpack32(long_2,double_1);

	unsigned_int_1 = unsigned_int_1;
	double_1 = double_3 + double_2;
	double_4 = v_SyMemBackendDup(unsigned_int_1,unsigned_int_1,double_2);

	char_1 = char_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_2 = v_SyDosTimeFormat(int_3,int_2);

	int_1 = int_3 * int_1;
	float_3 = float_1 + float_1;
	if(1)
	{
		double_3 = double_4 * double_4;
	}
	int_3 = int_4 * int_1;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	return char_3;
}
unsigned int v_pager_read_db_header( char parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_6 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_7 = 1;
	long long_3 = 1;
	float float_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	double double_6 = 1;
	short short_8 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_6 = 1;
	double double_7 = 1;
	char_1 = v_pager_extract_header(short_1,char_2,char_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = v_SyZero(long_1);

	short_3 = short_2 + short_2;
	short_3 = short_4 + short_5;
	long_1 = long_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	if(1)
	{
		float float_3 = 1;
		short_6 = short_6 + short_4;
		float_1 = float_1 * float_1;
		int_1 = v_vedisGenOutofMem(short_7);

		double_2 = double_1 + double_1;
		if(1)
		{
			char_1 = v_vedisGetPageSize();

			long_3 = long_3;
		}
		short_7 = v_vedisOsFileSize(float_2,char_1);

		unsigned_int_3 = v_vedisOsRead(short_5,char_3,char_3);

		double_4 = double_3 + double_4;
		if(1)
		{
			double_5 = v_SyMemBackendAlloc(char_1,int_2);

			short_4 = short_7 + short_6;
		}
		float_3 = float_2 + float_2;
		if(1)
		{
			double_3 = double_5;
		}
		double_6 = double_3 + double_5;
		if(1)
		{
			double_2 = v_vedisGenError(unsigned_int_2,unsigned_int_1);

			double_6 = v_vedisPagerRegisterKvEngine(double_6,short_8,-1 );

			int_3 = int_2 + int_1;
		}
		int_4 = int_3 * int_1;
		short_2 = short_1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		if(1)
		{
			double_4 = double_6 * double_2;
		}
		unsigned_int_4 = unsigned_int_4;
		if(1)
		{
		}
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		unsigned_int_2 = v_SyStrlen(char_3);

		long_5 = long_4 * long_2;
		long_3 = long_2 * long_6;
		int_1 = int_3;
		char_2 = v_vedisFindKVStore(long_6,long_6);

		float_2 = float_1;
	}
	float_2 = v_GetSectorSize(short_5);

	double_7 = double_2 * double_4;
	if(1)
	{
		short_1 = short_7;
	}
	short_6 = v_vedisGenErrorFormat(double_3,short_8,int_2,-1 );

	int_4 = int_1 + int_1;
	return unsigned_int_4;
}
short v_vedisOsCloseFree( unsigned int parameter_1,double parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int_1 = v_SyMemBackendFree(long_1);

	double_1 = double_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int_3 = int_2 + int_3;
		char_3 = char_1 + char_2;
	}
	return short_1;
}
int v_pager_fetch_page( unsigned int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	short_1 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "Ym") == 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_1;
		}
		if(1)
		{
		}
		char_1 = char_2;
	}
	return int_1;
}
int v_pager_fill_page( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int_2 = int_1 * int_1;
	int_3 = v_pager_fetch_page(unsigned_int_1,unsigned_int_2);

	int_4 = int_3 + int_4;
	if(1)
	{
	}
	int_2 = v_SyMemcpy(double_1,char_1);

	double_1 = double_1 + double_2;
	return int_2;
}
long v_vedisOsWrite( long parameter_1,short parameter_2,int parameter_3,float parameter_4)
{
	long long_1 = 1;
	return long_1;
}
float v_pager_cksum( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_1;
	double_1 = double_2 * double_1;
	long_2 = long_1 + long_1;
	char_1 = char_1 + char_2;
	return float_1;
}
double v_pager_play_back_one_page( short parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	char char_2 = 1;
	short short_4 = 1;
	float float_2 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1;
	int_3 = int_1 + int_2;
	double_3 = double_1 + double_2;
	long_1 = long_1 + long_2;
	int_4 = v_pager_fill_page(int_4,int_3);

	double_2 = double_2;
	unsigned_int_1 = v_vedisOsRead(short_1,char_1,char_1);

	short_2 = short_2 + short_3;
	if(1)
	{
	}
	int_2 = int_3 + int_5;
	double_3 = double_4 + double_4;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2 + double_5;
	if(1)
	{
	}
	char_2 = v_ReadInt32(double_4,int_2,char_2);

	long_2 = v_vedisOsWrite(long_1,short_4,int_2,float_1);

	unsigned_int_2 = unsigned_int_2;
	float_2 = v_ReadInt64(float_1,double_4,short_2);

	char_1 = char_2 + char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	char_1 = char_3;
	if(1)
	{
		float_1 = v_pager_cksum(char_2,int_2);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	return double_2;
}
unsigned int v_vedisOsTruncate( unsigned int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
float v_ReadInt64( float parameter_1,double parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = v_vedisOsRead(short_1,char_1,char_2);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	return float_1;
	double_2 = v_SyBigEndianUnpack64(char_2,unsigned_int_1);

}
char v_ReadInt32( double parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double_2 = double_1 * double_2;
	char_1 = v_SyBigEndianUnpack32(long_1,double_1);

	int_1 = int_1 * int_2;
	unsigned_int_1 = v_vedisOsRead(short_1,char_2,char_2);

	double_2 = double_2 + double_3;
	if(1)
	{
	}
	char_2 = char_3;
	return char_2;
}
unsigned int v_vedisOsRead( short parameter_1,char parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double v_pager_read_journal_header( double parameter_1,float parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_4 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	short short_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	long long_4 = 1;
	int_3 = int_1 + int_2;
	short_1 = v_vedisOsFileSize(float_1,char_1);

	int_2 = int_4 * int_3;
	char_2 = v_ReadInt32(double_1,int_2,char_3);

	double_2 = double_1;
	unsigned_int_1 = v_vedisOsRead(short_1,char_2,char_2);

	double_1 = double_3;
	int_4 = int_1 * int_4;
	short_1 = short_2 + short_1;
	char_1 = char_4 * char_4;
	if(1)
	{
	}
	if(1)
	{
	}
	char_1 = char_4;
	if(1)
	{
	}
	if(1)
	{
	}
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_2 = double_2;
	v_SyMemcmp(long_1,long_1,float_1);

	float_1 = float_2 + float_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	char_1 = char_3 * char_1;
	if(1)
	{
	}
	int_3 = int_1 * int_5;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	short_2 = short_3 + short_2;
	double_3 = double_3 + double_4;
	if(1)
	{
	}
	if(1)
	{
	}
	long_3 = long_2 + long_1;
	float_3 = v_ReadInt64(float_1,double_2,short_1);

	long_2 = long_1 + long_4;
	long_1 = long_2 + long_3;
	return double_1;
}
char v_pager_playback(int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	char char_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long_1 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_2;
	double_1 = double_3;
	int_1 = int_1 * int_2;
	char controller4vul_729[3];
	fgets(controller4vul_729 ,3 ,stdin);
	if( strcmp( controller4vul_729, "=(") < 0)
	{
		short short_4 = 1;
		char controller4vul_730[3];
		fgets(controller4vul_730 ,3 ,stdin);
		if( strcmp( controller4vul_730, " *") < 0)
		{
			short_1 = v_vedisGenErrorFormat(double_3,short_2,int_1,uni_para);

			double_1 = double_3 + double_2;
		}
		short_4 = short_3 * short_2;
	}
	long_1 = long_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_3 = char_1 * char_2;
	}
	double_3 = double_3;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	double_4 = double_3 + double_2;
	short_2 = short_3 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_2 = float_1 + float_1;
		if(1)
		{
			if(1)
			{
				short short_5 = 1;
				unsigned_int_3 = unsigned_int_2;
				short_5 = short_5 * short_3;
			}
		}
	}
	float_4 = float_1 + float_3;
	if(1)
	{
		float_2 = float_4;
	}
	if(1)
	{
		float_2 = float_3 + float_4;
	}
	return char_3;
}
void v_vedisOsSync( float parameter_1,int parameter_2)
{
}
float v_vedisOsUnlock( char parameter_1,int parameter_2)
{
	float float_1 = 1;
	return float_1;
}
short v_pager_unlock_db( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
		float float_2 = 1;
		int int_2 = 1;
		float_1 = v_vedisOsUnlock(char_1,int_1);

		float_2 = float_1;
		int_1 = int_2 * int_1;
	}
	return short_1;
}
float v_vedisOsDelete( long parameter_1,float parameter_2,int parameter_3)
{
	float float_1 = 1;
	return float_1;
}
short v_vedisOsFileSize( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	return short_1;
}
unsigned int v_vedisOsCheckReservedLock( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void v_vedisOsAccess( long parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
}
short v_pager_has_hot_journal( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	long long_2 = 1;
	int int_5 = 1;
	short short_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float_1 = float_1 * float_1;
	short_1 = v_pager_unlock_db(long_1,int_1);

	char_1 = char_1 * char_1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = v_vedisOsCheckReservedLock(int_1,int_1);

	short_1 = v_vedisOsFileSize(float_1,char_2);

	char_2 = char_2 * char_1;
	int_3 = int_2 + int_1;
	if(1)
	{
		int_2 = int_4 * int_2;
		int_4 = int_3 + int_1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double_1 = double_1 + double_2;
			v_pager_lock_db(float_1,int_4);

			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			if(1)
			{
				if(1)
				{
					if(1)
					{
						double double_4 = 1;
						int int_6 = 1;
						double_2 = double_3 + double_4;
						v_vedisOsAccess(long_2,double_3,int_5,int_4);

						int_6 = int_3 + int_5;
					}
				}
				if(1)
				{
					unsigned int unsigned_int_4 = 1;
					unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
				}
			}
		}
	}
	return short_4;
	float_2 = v_vedisOsDelete(long_2,float_3,int_1);

}
double v_pager_journal_rollback( long parameter_1,int parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_3 = 1;
	char char_2 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	short_3 = short_1 * short_2;
	char controller4vul_727[3];
	fgets(controller4vul_727 ,3 ,stdin);
	if( strcmp( controller4vul_727, "SH") > 0)
	{
		double double_2 = 1;
		double_3 = double_1 + double_2;
		int_2 = int_1 * int_1;
		char controller4vul_728[2];
		fgets(controller4vul_728 ,2 ,stdin);
		if( strcmp( controller4vul_728, "9") < 0)
		{
			char_1 = v_pager_playback(uni_para);

		}
		if(1)
		{
		}
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "6R") < 0)
	{
		int_1 = int_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float float_2 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
		float_3 = float_1 * float_2;
	}
	char_2 = char_1 * char_1;
	if(1)
	{
		float float_4 = 1;
		float_3 = float_4;
		double_1 = double_3 + double_3;
	}
	int_2 = int_2;
	short_2 = short_4;
	long_2 = long_1 * long_2;
	float_1 = float_5 * float_6;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
	}
	return double_4;
}
float v_vedisOsLock( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	return float_1;
}
void v_pager_lock_db( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char_2 = char_1 + char_2;
	if(1)
	{
		int int_2 = 1;
		double_1 = v_vedisGenError(unsigned_int_1,unsigned_int_2);

		int_2 = int_1 * int_1;
		if(1)
		{
			int_3 = int_3 * int_1;
		}
		if(1)
		{
			float float_2 = 1;
			float_1 = v_vedisOsLock(int_3,int_1);

			float_1 = float_2;
		}
	}
}
int v_pager_wait_on_lock( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	char char_4 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_4 = 1;
	int int_7 = 1;
	double_3 = double_1 * double_2;
	short_2 = short_1 * short_2;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_1;
	char_3 = char_2 * char_2;
	int_1 = int_1 * int_2;
	long_1 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	double_3 = double_1;
	short_2 = short_3 + short_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	int_3 = int_3 + int_2;
	int_3 = int_4 * int_3;
	int_6 = int_5 + int_3;
	double_3 = double_4 * double_3;
	char_1 = char_3 + char_2;
	int_2 = int_3 * int_5;
	char_1 = char_3 * char_4;
	v_pager_lock_db(float_2,int_6);

	double_3 = double_5 + double_2;
	float_2 = float_2 * float_2;
	double_6 = double_1 * double_4;
	short_4 = short_3 * short_3;
	if(1)
	{
	}
	return int_7;
}
long v_SyBlobFormatAp( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	char controller4vul_731[3];
	fgets(controller4vul_731 ,3 ,stdin);
	if( strcmp( controller4vul_731, "#-") < 0)
	{
		float float_3 = 1;
		float float_4 = 1;
		char controller4vul_732[2];
		fgets(controller4vul_732 ,2 ,stdin);
		if( strcmp( controller4vul_732, "J") < 0)
		{
			double_1 = v_FormatMount(long_1,float_1,long_1,float_2,short_1,uni_para);

		}
		float_4 = float_3 + float_1;
	}
	return long_1;
}
short v_vedisGenErrorFormat( double parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long_1 = v_SyBlobFormatAp(unsigned_int_1,unsigned_int_2,double_1,uni_para);

	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	float_2 = float_1 + float_2;
	float_1 = float_2;
	unsigned_int_3 = unsigned_int_1;
	return short_1;
}
float v_vedisOsOpen( long parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4,double parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	long_1 = long_2;
	int_1 = int_1 + int_2;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_3 + long_2;
	double_1 = v_SyMemBackendAlloc(char_1,int_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double double_2 = 1;
		char char_2 = 1;
		unsigned_int_2 = v_SyZero(long_3);

		double_2 = double_1 + double_2;
		char_1 = char_1 + char_2;
	}
	short_1 = short_1 + short_1;
	return float_1;
	int_3 = v_SyMemBackendFree(long_1);

}
unsigned int v_pager_shared_lock( char parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	char controller4vul_722[3];
	fgets(controller4vul_722 ,3 ,stdin);
	if( strcmp( controller4vul_722, "^#") > 0)
	{
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double_3 = double_1 + double_3;
		float_1 = float_1 * float_1;
		if(1)
		{
			char_1 = char_1 * char_2;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		char controller4vul_723[2];
		fgets(controller4vul_723 ,2 ,stdin);
		if( strcmp( controller4vul_723, "N") < 0)
		{
			int int_1 = 1;
			int int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			if(1)
			{
				int_1 = int_1;
				if(1)
				{
				}
			}
			int_1 = int_2 + int_3;
			if(1)
			{
			}
			char controller4vul_724[2];
			fgets(controller4vul_724 ,2 ,stdin);
			if( strcmp( controller4vul_724, "j") > 0)
			{
				char controller4vul_725[2];
				fgets(controller4vul_725 ,2 ,stdin);
				if( strcmp( controller4vul_725, "c") > 0)
				{
					unsigned_int_1 = unsigned_int_3;
					char controller4vul_726[2];
					fgets(controller4vul_726 ,2 ,stdin);
					if( strcmp( controller4vul_726, "9") < 0)
					{
						int int_4 = 1;
						int int_5 = 1;
						double_3 = v_pager_journal_rollback(long_1,int_2,uni_para);

						double_3 = double_2;
						int_5 = int_2 + int_4;
						if(1)
						{
							int int_6 = 1;
							int int_7 = 1;
							long long_2 = 1;
							long long_3 = 1;
							int_7 = int_2 * int_6;
							long_3 = long_1 + long_2;
						}
					}
					if(1)
					{
						char char_3 = 1;
						double_2 = double_1 + double_1;
						char_1 = char_3 + char_2;
					}
				}
			}
			short_2 = short_1 + short_1;
			unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
				if(1)
				{
					float float_2 = 1;
					double double_4 = 1;
					float_1 = float_2;
					double_2 = double_4 * double_2;
					double_1 = double_1 + double_4;
				}
			}
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_4;
		}
	}
	return unsigned_int_3;
}
int v_vedisPagerAcquire( int parameter_1,long parameter_2,double parameter_3,int parameter_4,int parameter_5,int uni_para)
{
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 + double_1;
	short_1 = short_1 + short_1;
	char_2 = char_1 + char_2;
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	char controller4vul_720[2];
	fgets(controller4vul_720 ,2 ,stdin);
	if( strcmp( controller4vul_720, "d") < 0)
	{
		short short_2 = 1;
		char controller4vul_721[2];
		fgets(controller4vul_721 ,2 ,stdin);
		if( strcmp( controller4vul_721, "n") > 0)
		{
			char char_3 = 1;
			char char_4 = 1;
			unsigned_int_1 = v_pager_shared_lock(char_1,uni_para);

			char_3 = char_4;
		}
		short_2 = short_1;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_2;
		}
		double_1 = double_2 * double_3;
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 + long_1;
		}
		long_1 = long_3 * long_4;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_2;
		}
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_1 * int_4;
	}
	return int_3;
}
double v_vedisKvIoPageGet( unsigned int parameter_1,long parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	return double_1;
	int_1 = v_vedisPagerAcquire(int_1,long_1,double_2,int_1,int_2,-1 );

}
short v_pager_kv_io_init( double parameter_1,int parameter_2,unsigned int parameter_3,int uni_para)
{
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float_1 = v_vedisKvIoNewPage(char_1,long_1,uni_para);

	long_1 = long_2 * long_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_1;
	int_2 = int_1 * int_1;
	char_3 = char_2 + char_1;
	char_4 = char_4 * char_1;
	float_3 = float_2 + float_1;
	int_1 = int_3;
	double_2 = double_1 + double_1;
	char_1 = char_2;
	double_2 = double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1;
	long_4 = long_2 * long_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	return short_1;
}
int v_vedisGenOutofMem( short parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	double_1 = v_vedisGenError(unsigned_int_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	return int_1;
}
char v_vedisReleaseCursor( float parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int_1 = int_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 * int_2;
	}
	float_1 = float_1 * float_1;
	return char_1;
	v_SyMemBackendPoolFree(long_1);

}
char v_pager_release_kv_engine( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_SyMemBackendFree(long_1);

	double_2 = double_1 * double_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		short_1 = short_2;
		int_3 = int_2 * int_3;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "@V") > 0)
	{
		int int_4 = 1;
		int int_5 = 1;
		char_1 = v_vedisReleaseCursor(float_1,char_2);

		int_5 = int_4 * int_3;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_1 + int_3;
	long_3 = long_2 * long_2;
	return char_3;
}
double v_vedisPagerRegisterKvEngine( double parameter_1,short parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_5 = 1;
	double double_6 = 1;
	short_2 = short_1 * short_1;
	short_3 = short_2;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	double_1 = double_1 * double_2;
	char controller4vul_717[3];
	fgets(controller4vul_717 ,3 ,stdin);
	if( strcmp( controller4vul_717, "P2") < 0)
	{
		char controller4vul_718[2];
		fgets(controller4vul_718 ,2 ,stdin);
		if( strcmp( controller4vul_718, "i") < 0)
		{
			short_2 = v_pager_kv_io_init(double_3,int_2,unsigned_int_2,uni_para);

		}
		double_5 = double_1 + double_4;
	}
	float_2 = float_1 + float_1;
	float_3 = float_1 * float_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	}
	float_2 = float_4 * float_3;
	if(1)
	{
		short short_4 = 1;
		long_2 = long_1 * long_2;
		short_2 = short_4 + short_2;
	}
	long_2 = long_2 + long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2;
	int_3 = int_2 * int_2;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
		if(1)
		{
			long long_3 = 1;
			long_1 = long_3;
			float_3 = float_4 + float_1;
		}
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
	short_6 = short_5 * short_6;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		float_4 = float_4 + float_2;
	}
	float_5 = float_1;
	double_4 = double_3 + double_5;
	return double_6;
}
void v_randomByte( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	int_2 = int_1 * int_1;
	short_2 = short_1 * short_1;
	double_3 = double_1 * double_2;
	int_2 = int_3 + int_1;
	double_2 = double_3 * double_4;
	float_3 = float_1 * float_2;
	short_3 = short_3 + short_2;
}
double v_SyRandomness( short parameter_1,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1 * long_2;
	v_randomByte(int_1);

	double_1 = double_1 * double_2;
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
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			char char_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			if(1)
			{
				double double_3 = 1;
				double_2 = double_3 * double_1;
			}
			double_2 = double_1 * double_2;
			float_1 = float_1 * float_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2;
			}
			float_1 = float_2 + float_2;
			int_1 = int_1 + int_1;
			if(1)
			{
				char_2 = char_1 * char_2;
			}
			short_1 = short_1 * short_2;
			double_5 = double_4 * double_5;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			}
			char_3 = char_1 * char_2;
			int_1 = int_2 + int_3;
		}
	}
	return double_1;
}
float v_SyOSUtilRandomSeed(short parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	return float_1;
	int_1 = v_SyMemcpy(double_1,char_1);

}
float v_SyRandomnessInit( char parameter_1,long parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_1 = v_SyOSUtilRandomSeed(short_1);

	long_2 = long_1 + long_2;
	double_1 = double_1;
	char_1 = char_1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	if(1)
	{
		float_1 = float_2 * float_3;
	}
	short_1 = short_2;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_3 = 1;
		float float_4 = 1;
		double double_4 = 1;
		double_3 = double_2 * double_3;
		float_2 = float_2;
		float_2 = float_3 + float_4;
		double_4 = double_4 * double_2;
	}
	int_3 = int_1 * int_2;
	return float_2;
}
double v_vedisGenError( unsigned int parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long_2 = long_1 + long_1;
	double_1 = double_1;
	long_3 = long_1 * long_2;
	return double_2;
	double_2 = v_SyBlobAppend(double_3,float_1,unsigned_int_1,-1 );

	unsigned_int_1 = v_SyStrlen(char_1);

}
char v_vedisFindKVStore( long parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	char_3 = char_1 + char_2;
	int_2 = int_1 + int_2;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double_1 = double_1;
		if(1)
		{
		}
	}
	return char_2;
	unsigned_int_2 = v_SyStrlen(char_2);

	v_SyStrnicmp(int_2,long_1,long_2);

}
void v_SyStrnicmp( int parameter_1,long parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_1;
	int_1 = int_2;
	if(1)
	{
		int_3 = int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_6 = 1;
		if(1)
		{
		}
		if(1)
		{
			int_4 = int_5;
		}
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_2 = unsigned_int_3;
		short_1 = short_1;
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
		}
		char_3 = char_1 * char_2;
		int_3 = int_4;
		double_2 = double_3;
		if(1)
		{
		}
		if(1)
		{
			int_1 = int_5 * int_1;
		}
		int_1 = int_1;
		unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
		double_3 = double_3 + double_3;
		if(1)
		{
		}
		if(1)
		{
			int_1 = int_4 + int_6;
		}
		int_6 = int_6 + int_2;
		int_3 = int_5;
		unsigned_int_3 = unsigned_int_6 * unsigned_int_4;
	}
}
unsigned int v_vedisInMemory( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = float_1 + float_2;
	if(1)
	{
	}
	unsigned_int_1 = v_SyStrlen(char_1);

	v_SyStrnicmp(int_1,long_1,long_1);

	short_2 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_2;
}
void v_vedisPagerOpen( char parameter_1,double parameter_2,long parameter_3,int parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_4 = 1;
	char char_5 = 1;
	long long_5 = 1;
	short short_2 = 1;
	double double_3 = 1;
	long long_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 * int_1;
	double_1 = double_2;
	int_2 = int_1 * int_2;
	char_3 = char_1 + char_2;
	char_2 = char_4 + char_1;
	if(1)
	{
		int_3 = int_2 + int_3;
		int_2 = int_3 + int_2;
	}
	char controller4vul_715[2];
	fgets(controller4vul_715 ,2 ,stdin);
	if( strcmp( controller4vul_715, "-") < 0)
	{
		float_3 = float_1 + float_2;
		char controller4vul_716[2];
		fgets(controller4vul_716 ,2 ,stdin);
		if( strcmp( controller4vul_716, "G") < 0)
		{
			unsigned int unsigned_int_4 = 1;
			double_1 = v_vedisPagerRegisterKvEngine(double_2,short_1,uni_para);

			unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
		}
	}
	if(1)
	{
		char_4 = char_2 + char_4;
	}
	double_2 = double_2 * double_1;
	long_3 = long_1 * long_2;
	int_3 = int_3 + int_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		int_2 = int_1 * int_3;
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
	char_2 = char_2 + char_2;
	if(1)
	{
		unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
		unsigned_int_7 = unsigned_int_7 * unsigned_int_8;
	}
	long_4 = long_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_7 + unsigned_int_9;
	int_1 = int_4 * int_4;
	char_5 = char_2 * char_4;
	long_1 = long_2 * long_3;
	int_2 = int_3 + int_1;
	long_2 = long_1 + long_2;
	long_4 = long_5 * long_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_8 * unsigned_int_3;
		float_1 = float_2 + float_2;
	}
	short_2 = short_1 * short_2;
	double_3 = double_2;
	long_6 = long_5 * long_2;
	int_1 = int_1 + int_2;
	int_2 = int_1 + int_1;
	float_1 = float_3 + float_3;
	double_3 = double_2 + double_4;
	float_1 = float_1;
	double_5 = double_5 * double_3;
	if(1)
	{
		unsigned int unsigned_int_10 = 1;
		unsigned int unsigned_int_11 = 1;
		int int_5 = 1;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_9;
		unsigned_int_7 = unsigned_int_8 + unsigned_int_10;
		if(1)
		{
			unsigned_int_8 = unsigned_int_8 * unsigned_int_7;
		}
		if(1)
		{
			float_3 = float_1;
			unsigned_int_11 = unsigned_int_9 + unsigned_int_3;
			unsigned_int_7 = unsigned_int_6;
		}
		if(1)
		{
			unsigned_int_8 = unsigned_int_3 * unsigned_int_9;
		}
		float_1 = float_2 * float_3;
		if(1)
		{
			int_5 = int_4 * int_4;
			double_2 = double_5 + double_5;
		}
		char_1 = char_1;
		int_5 = int_1 + int_2;
		unsigned_int_11 = unsigned_int_3 + unsigned_int_11;
	}
	char_3 = char_1;
	if(1)
	{
		unsigned_int_6 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		short_1 = short_1 + short_1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		int_1 = int_4 * int_1;
		double_4 = double_5;
	}
	int_4 = int_2;
}
float v_vedisSanityzeFlag()
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char_1 = char_1 * char_2;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float_3 = float_1 + float_2;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 * double_2;
		}
		if(1)
		{
			short short_2 = 1;
			short_2 = short_2 + short_2;
		}
	}
	return float_1;
}
double v_vedisInitDatabase( unsigned int parameter_1,long parameter_2,char parameter_3,int parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	short_2 = short_1 + short_1;
	char controller4vul_714[3];
	fgets(controller4vul_714 ,3 ,stdin);
	if( strcmp( controller4vul_714, "n5") < 0)
	{
		double double_2 = 1;
		double double_3 = 1;
		v_vedisPagerOpen(char_1,double_1,long_1,int_1,uni_para);

		double_3 = double_2 * double_1;
	}
	unsigned_int_2 = unsigned_int_2;
	short_2 = short_3 * short_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
	}
	int_3 = int_2 + int_3;
	int_3 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_2;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	char_3 = char_2 * char_2;
	short_2 = short_4 + short_2;
	long_1 = long_2 + long_1;
	return double_1;
}
void v_lhCursorReset( short parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char_1 = v_lhCursorFirst(short_1);

	float_1 = float_1 * float_1;
}
char v_lhCursorData( double parameter_1,short parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_2 = long_1 * long_2;
	float_1 = float_1;
	float_1 = v_lhConsumeCellData(double_1,float_1,char_1);

	int_1 = int_2;
	if(1)
	{
	}
	double_1 = double_1;
	short_1 = short_1 * short_2;
	return char_1;
}
void v_lhCursorDataLength( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_3 = int_1 + int_2;
	int_4 = int_3 + int_1;
	if(1)
	{
	}
	int_5 = int_3 * int_1;
	double_2 = double_1 * double_1;
}
unsigned int v_lhCursorKey( long parameter_1,float parameter_2,char parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1;
	long_2 = long_1 * long_2;
	int_1 = int_1;
	if(1)
	{
	}
	int_2 = int_2 + int_2;
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3 + long_2;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		char_1 = v_lhConsumeCellkey(double_2,int_3,short_1,int_4);

		short_3 = short_2 * short_3;
	}
	return unsigned_int_1;
}
double v_lhCursorKeyLength( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_1;
	int_1 = int_1 + int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "Z") < 0)
	{
	}
	double_1 = double_1;
	short_1 = short_1 + short_1;
	return double_2;
}
void v_lhRecordRemove()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_lhRestorePage(short_1,long_1);

	int_2 = int_1 + int_1;
	if(1)
	{
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_1 = double_1 * double_2;
		v_lhUnlinkCell();

		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			int int_3 = 1;
			double_3 = double_1 * double_2;
			if(1)
			{
			}
			unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
			int_3 = int_1 + int_2;
			if(1)
			{
			}
			int_4 = int_2;
			if(1)
			{
				char char_2 = 1;
				char char_3 = 1;
				double_1 = v_SyBigEndianUnpack64(char_1,unsigned_int_2);

				char_2 = char_2 * char_3;
			}
		}
	}
	int_1 = int_4 + int_5;
}
double v_lhCursorDelete( char parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_1;
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	v_lhRecordRemove();

	float_4 = float_1 * float_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	double_2 = double_1 * double_1;
	return double_1;
}
void v_lhCursorPrev()
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double_1 = double_1;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	v_lhCursorPrevPage(long_1);

	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
}
double v_lhCursorNext( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_2;
	char_3 = char_2 + char_3;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	unsigned_int_3 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int_1 = v_lhCursorNextPage(unsigned_int_1);

		float_1 = float_2;
	}
	return double_1;
}
double v_lhCursorValid( long parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_1;
	return double_1;
}
void v_lhCursorPrevPage( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_1 * long_2;
	double_3 = double_2 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		long long_4 = 1;
		long long_5 = 1;
		int_2 = int_1 * int_1;
		if(1)
		{
			int_2 = int_1 * int_3;
		}
		if(1)
		{
			float float_1 = 1;
			float_2 = float_1 + float_2;
			int_1 = int_3 + int_4;
		}
		double_2 = double_2;
		double_2 = v_lhLoadPage(int_1,short_1,unsigned_int_1,char_1,int_2);

		int_2 = int_4 * int_3;
		if(1)
		{
		}
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			double double_4 = 1;
			double double_5 = 1;
			long_3 = long_3 + long_2;
			float_4 = float_2 + float_3;
			double_4 = double_3 * double_2;
			double_3 = double_5 * double_2;
		}
		long_4 = long_4 * long_5;
	}
}
char v_lhCursorLast( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long_2 = long_1 * long_1;
	char_1 = char_1;
	double_1 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
		}
		int_3 = int_1 * int_2;
	}
	char_1 = char_2 + char_3;
	char_1 = char_3 * char_2;
	return char_3;
	v_lhCursorPrevPage(long_3);

}
int v_lhCursorNextPage( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_4 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_1;
	int_1 = int_1 * int_1;
	short_3 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		char char_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long_2 = long_1 + long_1;
		if(1)
		{
			double_3 = v_lhLoadPage(int_2,short_4,unsigned_int_1,char_1,int_2);

			char_2 = char_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
			int_1 = int_1 * int_3;
		}
		double_4 = double_2 + double_1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		if(1)
		{
		}
		if(1)
		{
			char char_3 = 1;
			unsigned int unsigned_int_4 = 1;
			char char_4 = 1;
			char_3 = char_1 * char_3;
			unsigned_int_4 = unsigned_int_3;
			char_2 = char_3 + char_4;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
		}
		double_1 = double_1 * double_4;
	}
	return int_3;
}
char v_lhCursorFirst( short parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int_1 = v_lhCursorNextPage(unsigned_int_1);

	short_1 = short_1 * short_1;
	double_1 = double_1 * double_1;
	double_3 = double_2 * double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "w8") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
		if(1)
		{
		}
		double_2 = double_1 + double_2;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_3;
	return char_1;
}
float v_lhRecordLookup( float parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int int_6 = 1;
	float float_3 = 1;
	char_1 = v_lhMapFindBucket(double_1,short_1);

	double_2 = double_1;
	char_1 = char_1;
	float_2 = float_1 * float_1;
	double_1 = v_lhLoadPage(int_1,short_1,unsigned_int_1,char_1,int_2);

	int_4 = int_3 + int_2;
	int_5 = int_2 + int_5;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1;
	if(1)
	{
	}
	int_3 = int_1 + int_3;
	short_1 = short_3;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3 * double_1;
	}
	double_2 = double_4 + double_1;
	if(1)
	{
	}
	unsigned_int_2 = v_lhFindCell(int_4,char_2,int_1,int_5);

	int_6 = int_2 + int_5;
	if(1)
	{
	}
	short_1 = short_3 + short_2;
	if(1)
	{
	}
	if(1)
	{
		short short_4 = 1;
		short_4 = short_1 + short_2;
	}
	return float_3;
}
long v_lhCursorSeek( double parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_2;
	int_4 = int_3 + int_4;
	int_5 = int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int int_6 = 1;
		float_1 = v_lhRecordLookup(float_1,char_1,char_1,char_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_3 = int_4;
		int_5 = int_4 + int_6;
	}
	int_2 = int_4;
	return long_1;
}
short v_lhInitCursor( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	double_1 = double_1 + double_2;
	short_1 = short_1 * short_1;
	double_2 = double_3;
	char_1 = char_1 + char_2;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	return short_2;
}
void v_lhash_kv_append( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,float parameter_5)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = v_lh_record_insert(double_1,short_1,char_1,unsigned_int_3,int_1,int_2);

}
void v_lhRestorePage( short parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	short_1 = v_SyBigEndianPack64(unsigned_int_3,unsigned_int_4);

	long_1 = long_1 + long_2;
}
float v_lhRecordOverwrite( short parameter_1,char parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	char char_5 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	int int_6 = 1;
	short short_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_6 = 1;
	long long_4 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_10 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
	float_3 = float_1 + float_2;
	char_3 = char_1 * char_2;
	int_1 = int_1 * int_2;
	long_2 = long_1 * long_2;
	short_1 = v_SyBigEndianPack64(unsigned_int_1,unsigned_int_1);

	short_3 = short_1 * short_2;
	char_1 = char_4 * char_4;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
		}
		if(1)
		{
			double_3 = double_2 + double_2;
			char_5 = char_4;
			double_3 = double_2 + double_4;
			double_4 = double_3 + double_4;
		}
		if(1)
		{
			int_3 = int_2;
			double_1 = v_SyBigEndianUnpack64(char_2,unsigned_int_1);

			float_4 = float_5;
			if(1)
			{
				float_2 = float_6;
				if(1)
				{
				}
				int_3 = int_1 * int_4;
				int_3 = int_5 * int_4;
				double_2 = double_5;
			}
			if(1)
			{
				int_1 = int_6 + int_4;
				char_3 = char_3 + char_1;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
				unsigned_int_4 = unsigned_int_2;
			}
		}
	}
	float_2 = float_3 * float_1;
	if(1)
	{
	}
	char_3 = char_3 * char_5;
	short_4 = short_3 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long_3 = v_lhAllocateSpace(char_1,short_1,unsigned_int_2);

			float_5 = float_1 * float_2;
		}
		if(1)
		{
			unsigned_int_4 = v_lhCellWriteOvflPayload(unsigned_int_2,double_3,long_2,int_3);

			unsigned_int_2 = unsigned_int_2;
		}
		unsigned_int_3 = unsigned_int_5;
		if(1)
		{
			double_5 = v_lhMoveLocalCell(char_4,long_2,unsigned_int_6,int_2);

			unsigned_int_5 = unsigned_int_7;
			double_3 = double_2;
		}
	}
	double_4 = double_2 * double_6;
	int_3 = v_SyMemcpy(double_4,char_1);

	double_4 = double_1 + double_5;
	unsigned_int_7 = v_lhAcquirePage(short_2,long_3);

	long_4 = long_2 + long_1;
	int_1 = int_5 + int_1;
	int_5 = int_4 + int_3;
	if(1)
	{
	}
	double_7 = double_7;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_5 = 1;
		short short_6 = 1;
		double double_8 = 1;
		int int_7 = 1;
		float float_7 = 1;
		double double_9 = 1;
		int int_8 = 1;
		short_1 = short_5 + short_6;
		if(1)
		{
			long long_5 = 1;
			long_4 = long_5 * long_4;
		}
		if(1)
		{
			short short_7 = 1;
			double_1 = double_8;
			if(1)
			{
			}
			float_6 = float_4 + float_4;
			if(1)
			{
			}
			int_7 = int_7 * int_3;
			short_5 = short_6 + short_7;
			v_lhRestorePage(short_2,long_3);

			unsigned_int_9 = unsigned_int_5 + unsigned_int_8;
			float_2 = float_3 * float_6;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_6;
			unsigned_int_6 = unsigned_int_1 + unsigned_int_4;
		}
		double_8 = double_3 * double_4;
		char_5 = char_5 * char_2;
		if(1)
		{
			int_6 = int_4 * int_1;
		}
		float_3 = float_7 + float_2;
		double_7 = double_4 * double_9;
		int_8 = int_4 * int_7;
	}
	unsigned_int_9 = unsigned_int_2 * unsigned_int_5;
	v_lhRestoreSpace(float_1,float_6,unsigned_int_8);

	char_2 = char_5;
	double_3 = double_10 * double_10;
	return float_3;
}
double v_lhMoveLocalCell( char parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	long long_4 = 1;
	short_1 = short_1 * short_1;
	long_1 = v_lhCellWriteLocalPayload(long_2,short_2,long_3,unsigned_int_1,double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		char_1 = char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float_1 = v_lhCellWriteHeader(unsigned_int_2);

		short_1 = short_1 * short_3;
		int_2 = v_SyBigEndianPack16(char_2,long_1);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	double_1 = double_2 + double_1;
	double_2 = double_2 * double_2;
	int_1 = int_2 + int_1;
	short_2 = short_1 + short_3;
	return double_2;
	long_4 = v_lhFindSibeling(short_3);

}
float v_lhRecordAppend( unsigned int parameter_1,char parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_5 = 1;
	short short_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	float float_6 = 1;
	double double_4 = 1;
	long long_2 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	short short_5 = 1;
	long long_3 = 1;
	int int_8 = 1;
	float float_8 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_9 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_6 = 1;
	double double_8 = 1;
	char char_4 = 1;
	int int_10 = 1;
	float float_10 = 1;
	float_1 = float_2;
	float_3 = float_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_SyMemcpy(double_1,char_1);

	double_1 = double_1 * double_1;
	int_1 = int_1;
	int_3 = int_2 * int_3;
	unsigned_int_2 = v_lhAcquirePage(short_1,long_1);

	short_3 = short_2 + short_1;
	short_3 = short_1 + short_2;
	int_1 = int_2 + int_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		double_1 = v_SyBlobAppend(double_1,float_5,unsigned_int_1,-1 );

		short_4 = short_3 * short_3;
		int_5 = int_3 + int_4;
		if(1)
		{
			short_4 = v_SyBigEndianPack64(unsigned_int_3,unsigned_int_2);

			int_3 = int_5 * int_3;
			if(1)
			{
			}
			double_3 = double_2 + double_1;
			int_4 = int_5 + int_1;
			int_3 = int_6 + int_2;
		}
		if(1)
		{
			char char_2 = 1;
			unsigned int unsigned_int_6 = 1;
			int_6 = int_1 + int_4;
			int_3 = int_4 + int_5;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
			char_2 = char_2 * char_2;
			if(1)
			{
				unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
			}
			if(1)
			{
				v_SyBlobInit(long_1,double_3);

				char_3 = char_3 * char_2;
			}
			float_6 = float_5 * float_1;
			unsigned_int_5 = v_lhCellWriteOvflPayload(unsigned_int_3,double_4,long_2,int_5);

			float_7 = float_2 * float_2;
			unsigned_int_6 = unsigned_int_5 + unsigned_int_7;
		}
	}
	double_1 = double_5;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
	float_1 = float_3;
	short_2 = short_1 + short_2;
	short_2 = short_5 * short_1;
	float_4 = float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_4 = 1;
			int int_7 = 1;
			if(1)
			{
				unsigned_int_4 = unsigned_int_1;
			}
			double_3 = v_lhMoveLocalCell(char_1,long_3,unsigned_int_7,int_6);

			long_4 = long_4 * long_4;
			if(1)
			{
			}
			char_3 = char_1 * char_3;
			int_4 = int_7 + int_8;
			v_lhRestoreSpace(float_8,float_8,unsigned_int_7);

			unsigned_int_8 = unsigned_int_4 + unsigned_int_2;
			int_3 = int_9;
			unsigned_int_5 = unsigned_int_3;
			long_3 = long_2 + long_2;
		}
		if(1)
		{
			int_1 = int_6 + int_3;
			int_5 = int_8 + int_3;
		}
		if(1)
		{
			int_1 = int_9 + int_6;
		}
		unsigned_int_3 = unsigned_int_2;
	}
	double_1 = double_6;
	double_7 = double_6;
	short_6 = short_2 + short_6;
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_9 = 1;
		double double_10 = 1;
		short short_7 = 1;
		double_7 = double_7 * double_1;
		if(1)
		{
			float_6 = float_5 * float_8;
		}
		if(1)
		{
			unsigned int unsigned_int_9 = 1;
			float float_9 = 1;
			double_6 = double_2 + double_3;
			if(1)
			{
			}
			double_6 = double_2 * double_5;
			if(1)
			{
			}
			double_8 = v_SyBigEndianUnpack64(char_3,unsigned_int_1);

			unsigned_int_9 = unsigned_int_3 * unsigned_int_4;
			float_9 = float_1 + float_3;
			unsigned_int_1 = unsigned_int_8 * unsigned_int_7;
			int_8 = int_1;
			int_6 = int_1;
			int_8 = int_3 * int_8;
		}
		double_9 = double_5;
		double_8 = v_SyBlobRelease(float_6);

		double_8 = double_2 * double_10;
		if(1)
		{
			double_7 = double_9 * double_8;
		}
		int_6 = int_9 * int_6;
		long_3 = v_lhAllocateSpace(char_4,short_2,unsigned_int_4);

		short_3 = short_7;
		short_4 = short_4 + short_2;
	}
	int_4 = int_2 * int_2;
	int_5 = int_10;
	float_6 = float_10 + float_2;
	return float_7;
}
long v_lhFindSibeling( short parameter_1)
{
	long long_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
		if(1)
		{
		}
	}
	return long_1;
}
void v_lhUnlinkCell()
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	long_1 = long_1;
	short_2 = short_1 + short_2;
	double_1 = double_1;
	v_lhCellDiscard();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 * long_1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		double double_2 = 1;
		long_3 = v_lhFindSibeling(short_1);

		long_2 = long_1 + long_4;
		double_2 = double_2 * double_1;
	}
	if(1)
	{
		int_1 = v_SyBigEndianPack16(char_1,long_4);

		unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
		v_lhRestoreSpace(float_1,float_2,unsigned_int_5);

		unsigned_int_3 = unsigned_int_5 + unsigned_int_1;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	long_2 = long_2 + long_4;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_3;
}
float v_lhConsumeCellData( double parameter_1,float parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	long_1 = long_2;
	long_4 = long_1 * long_3;
	short_2 = short_1 + short_1;
	double_1 = v_SyBigEndianUnpack64(char_1,unsigned_int_1);

	double_2 = double_1 + double_1;
	char_2 = char_1 * char_2;
	if(1)
	{
		int_1 = int_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			double_2 = double_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int_2 = int_1;
		int_2 = int_3;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		int_1 = int_4 * int_5;
		double_2 = double_2 * double_1;
		double_2 = double_2 + double_1;
		int_5 = int_6;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			if(1)
			{
				double_1 = double_2 + double_1;
			}
			short_2 = short_2 * short_2;
			if(1)
			{
			}
			unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
			if(1)
			{
				char char_3 = 1;
				unsigned int unsigned_int_5 = 1;
				char char_4 = 1;
				char_3 = char_2 + char_3;
				unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
				char_2 = char_3 + char_4;
			}
			if(1)
			{
				float float_1 = 1;
				float_1 = float_1;
				long_2 = long_2 * long_3;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 * unsigned_int_6;
				if(1)
				{
					short_1 = short_1;
				}
				short_1 = short_2 * short_3;
			}
			if(1)
			{
				if(1)
				{
					short_1 = short_2 * short_4;
					if(1)
					{
						unsigned_int_4 = unsigned_int_3 * unsigned_int_6;
					}
					short_1 = short_1 + short_2;
				}
			}
			double_3 = double_3 * double_4;
			double_5 = double_1 * double_5;
		}
		short_3 = short_4 * short_2;
	}
	return float_2;
}
int v_SyBlobReset( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		double_1 = double_1;
		double_2 = double_2 + double_1;
	}
	return int_1;
}
long v_SyBlobDup( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	}
	return long_1;
	double_1 = v_SyBlobAppend(double_1,float_1,unsigned_int_3,-1 );

}
char v_lhTransferCell( float parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	float_1 = v_lhFindSlavePage(float_1,int_3,float_1,unsigned_int_1);

	float_2 = v_lhCellWriteHeader(unsigned_int_3);

	float_2 = float_2 * float_1;
	long_1 = long_1 + long_2;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 * short_2;
		if(1)
		{
		}
	}
	double_1 = double_1;
	if(1)
	{
	}
	int_2 = int_4 * int_1;
	int_2 = int_4;
	long_3 = v_lhAllocateSpace(char_1,short_2,unsigned_int_1);

	char_1 = char_2 * char_2;
	long_1 = v_SyBlobDup(int_3,long_4);

	int_2 = int_2 + int_5;
	double_2 = v_lhInstallCell();

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	char_1 = char_3 + char_1;
	char_4 = char_2;
	double_1 = double_3;
	int_2 = int_3 * int_4;
	if(1)
	{
	}
	short_1 = short_1 * short_1;
	return char_3;
	short_2 = v_lhNewCell(long_2,double_1);

}
double v_lhPageSplit( float parameter_1,short parameter_2,char parameter_3,char parameter_4)
{
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	float float_3 = 1;
	double double_6 = 1;
	float float_4 = 1;
	long long_2 = 1;
	int int_4 = 1;
	char_1 = v_lhTransferCell(float_1,double_1);

	int_1 = v_SyBlobReset(float_2);

	unsigned_int_1 = unsigned_int_1;
	v_SyBlobInit(long_1,double_1);

	float_1 = v_lhConsumeCellData(double_1,float_2,char_2);

	char_1 = char_1 + char_2;
	double_1 = double_1;
	double_2 = double_2 + double_1;
	double_1 = v_SyBlobRelease(float_2);

	char_2 = char_3;
	double_1 = double_2 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		if(1)
		{
			int_2 = int_2 * int_3;
		}
		short_2 = short_1 + short_1;
		double_2 = double_2 * double_3;
		if(1)
		{
			int_1 = int_1 * int_3;
			if(1)
			{
				double_4 = v_vedisDataConsumer(double_1,float_2);

				v_lhUnlinkCell();

				short_1 = short_1 * short_1;
			}
			if(1)
			{
				double double_5 = 1;
				short short_3 = 1;
				short_1 = short_2 + short_1;
				if(1)
				{
					char_3 = char_3 + char_3;
					if(1)
					{
						int_3 = int_3 * int_1;
					}
				}
				double_2 = double_5;
				if(1)
				{
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
				}
				short_3 = short_1 * short_1;
			}
			if(1)
			{
				float_3 = float_2 * float_3;
			}
			int_2 = int_3;
		}
		char_3 = v_lhConsumeCellkey(double_6,int_3,short_1,int_2);

		char_1 = char_1 * char_2;
	}
	float_4 = float_3 + float_1;
	unsigned_int_1 = v_lhStoreCell(long_1,long_2,float_4,short_2,int_3,float_4,int_2);

	int_4 = int_2 + int_1;
	return double_1;
}
float v_lhSplit( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_6 = 1;
	int int_7 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long_1 = v_lhMapWriteRecord(short_1,long_2,double_1);

	double_1 = double_1 + double_2;
	int_1 = int_1 * int_1;
	v_lhNewPage(float_1,char_1,long_2);

	double_3 = v_lhPageSplit(float_1,short_2,char_2,char_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = v_lhMapFindBucket(double_4,short_2);

	int_2 = int_2 * int_2;
	float_1 = float_2 * float_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	char_5 = char_3 * char_4;
	if(1)
	{
	}
	double_3 = double_2;
	if(1)
	{
	}
	double_2 = double_4;
	if(1)
	{
	}
	long_2 = long_2 * long_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	}
	double_4 = double_1 + double_1;
	if(1)
	{
		unsigned_int_3 = v_lhAcquirePage(short_3,long_1);

		short_2 = short_2;
	}
	if(1)
	{
		double_1 = double_1 * double_3;
	}
	int_3 = int_2 + int_1;
	if(1)
	{
		int_6 = int_4 + int_5;
	}
	double_4 = double_5 * double_4;
	int_1 = int_4 * int_4;
	if(1)
	{
	}
	if(1)
	{
		short short_4 = 1;
		short_1 = v_SyBigEndianPack64(unsigned_int_4,unsigned_int_5);

		char_6 = char_6 * char_3;
		int_7 = int_5 + int_5;
		float_1 = v_lhSetEmptyPage();

		unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
		if(1)
		{
			long long_6 = 1;
			long_6 = long_4 + long_5;
		}
		int_2 = int_6 + int_2;
		double_1 = v_lhLoadPage(int_4,short_2,unsigned_int_6,char_6,int_4);

		short_4 = short_2 + short_4;
	}
	if(1)
	{
		int_7 = int_4;
	}
	long_5 = long_4 + long_3;
	return float_2;
}
void v_lhRecordInstall( float parameter_1,short parameter_2,unsigned int parameter_3,unsigned int parameter_4,int parameter_5,short parameter_6)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		char char_1 = 1;
		float float_2 = 1;
		unsigned_int_1 = v_lhStoreCell(long_1,long_1,float_1,short_1,int_2,float_1,int_1);

		char_1 = char_1 * char_1;
		float_2 = float_1 + float_1;
		if(1)
		{
			int int_3 = 1;
			if(1)
			{
			}
			float_1 = v_lhSplit(long_1,int_2);

			int_3 = int_1 + int_1;
		}
	}
}
short v_lhKeyCmp( short parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long_2 = long_1 + long_1;
	char_2 = char_1 + char_2;
	if(1)
	{
		if(1)
		{
		}
	}
	long_3 = long_1 * long_1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	return short_1;
}
unsigned int v_lhFindCell( int parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char_1 = v_lhConsumeCellkey(double_1,int_1,short_1,int_1);

	long_1 = long_1 * long_2;
	if(1)
	{
	}
	short_2 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_2 = 1;
				short short_3 = 1;
				unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
				unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
				char_1 = char_2 * char_3;
				double_1 = double_2 * double_3;
				short_2 = short_3 + short_1;
				short_1 = short_1 * short_2;
				if(1)
				{
				}
			}
			if(1)
			{
			}
		}
		short_4 = v_lhKeyCmp(short_5,unsigned_int_1);

		double_3 = double_1;
	}
	return unsigned_int_1;
}
double v_vedisDataConsumer( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double_1 = v_SyBlobAppend(double_2,float_1,unsigned_int_1,-1 );

	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return double_2;
}
char v_lhConsumeCellkey( double parameter_1,int parameter_2,short parameter_3,int parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 + double_2;
	short_1 = short_1 + short_1;
	int_3 = int_1 + int_2;
	double_3 = double_4 + double_3;
	short_3 = short_1 * short_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		float_1 = float_1 * float_1;
		long_2 = long_1 + long_2;
		if(1)
		{
			char_2 = char_1 * char_1;
		}
	}
	if(1)
	{
		double double_6 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double_6 = double_5 + double_5;
		unsigned_int_1 = unsigned_int_1;
		float_1 = float_1 * float_1;
		float_2 = float_2 * float_3;
		int_2 = int_3 + int_3;
		unsigned_int_2 = unsigned_int_1;
		double_3 = double_6 * double_7;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_4 = 1;
			double double_8 = 1;
			if(1)
			{
				int_2 = int_3;
			}
			float_3 = float_1 * float_1;
			if(1)
			{
			}
			char_3 = char_1;
			if(1)
			{
				double_5 = double_7 + double_3;
				short_2 = short_2 + short_2;
				double_4 = double_4 * double_6;
				short_4 = short_2 + short_2;
				if(1)
				{
					short_1 = short_1 * short_3;
				}
				double_4 = double_5;
			}
			if(1)
			{
				short short_5 = 1;
				short short_6 = 1;
				unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
				if(1)
				{
					double_3 = double_5 * double_7;
				}
				double_2 = v_SyBigEndianUnpack16(char_1,double_5);

				short_6 = short_4 + short_5;
			}
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_2;
				if(1)
				{
					int_3 = int_2 * int_2;
				}
				double_1 = double_4 + double_1;
			}
			double_2 = double_8 + double_1;
			double_2 = v_SyBigEndianUnpack64(char_1,unsigned_int_1);

			double_5 = double_3 + double_7;
		}
		char_4 = char_3 * char_3;
	}
	return char_2;
}
int v_lhParseOneCell( float parameter_1,short parameter_2,double parameter_3,double parameter_4)
{
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double_1 = v_SyBigEndianUnpack16(char_1,double_1);

	double_1 = v_vedisDataConsumer(double_1,float_1);

	int_2 = int_1 + int_2;
	char_1 = v_lhConsumeCellkey(double_2,int_3,short_1,int_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	double_1 = v_lhInstallCell();

	int_5 = int_4 * int_2;
	int_2 = int_5 * int_4;
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	char_2 = char_2 + char_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	char_4 = char_3 + char_4;
	char_5 = char_2 + char_1;
	char_1 = char_4 * char_5;
	if(1)
	{
	}
	int_6 = int_2;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_5 + unsigned_int_3;
	short_1 = v_lhNewCell(long_1,double_3);

	float_3 = float_2 + float_1;
	char_3 = v_SyBigEndianUnpack32(long_2,double_3);

	unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_6 + unsigned_int_4;
	double_1 = v_SyBlobRelease(float_4);

	short_2 = short_2 + short_3;
	double_2 = v_SyBigEndianUnpack64(char_1,unsigned_int_4);

	short_2 = short_4;
	double_1 = double_1 + double_1;
	char_1 = char_4 + char_1;
	if(1)
	{
		double double_4 = 1;
		double_4 = double_2;
	}
	int_2 = int_7 + int_2;
	if(1)
	{
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "0N") < 0)
	{
		unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	}
	return int_8;
}
void v_lhPageFreeSpace( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_1;
	int_1 = int_1 + int_2;
	char_3 = char_1 + char_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	short_3 = short_2 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		short short_4 = 1;
		float float_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		double_1 = double_1;
		double_1 = v_SyBigEndianUnpack16(char_1,double_1);

		long_1 = long_1;
		short_4 = short_1 + short_1;
		float_2 = float_2 + float_3;
		if(1)
		{
			char_3 = char_1 * char_1;
		}
		char_5 = char_1 * char_4;
		if(1)
		{
		}
	}
	double_2 = double_2 + double_1;
}
double v_lhLoadCells( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char_3 = char_1 * char_2;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1;
	char_1 = char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_4 = double_3 * double_2;
	int_1 = v_lhParseOneCell(float_1,short_1,double_5,double_6);

	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long_1 = long_1 * long_2;
		if(1)
		{
		}
		if(1)
		{
			long_2 = long_2 * long_2;
		}
		float_3 = float_2 + float_1;
		if(1)
		{
		}
	}
	return double_5;
	v_lhPageFreeSpace(double_1);

}
double v_lhParsePageHeader( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int_2 = int_1 * int_1;
	long_1 = long_1 * long_2;
	double_1 = v_SyBigEndianUnpack64(char_1,unsigned_int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_2 = v_SyBigEndianUnpack16(char_2,double_1);

	float_2 = float_1 + float_2;
	double_1 = double_1 * double_2;
	return double_3;
}
double v_lhLoadPage( int parameter_1,short parameter_2,unsigned int parameter_3,char parameter_4,int parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float_2 = float_1 + float_2;
	int_2 = int_1 + int_1;
	short_2 = short_1 + short_1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
		short short_3 = 1;
		short_1 = short_3 * short_3;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_5 = 1;
		char_2 = char_1 * char_2;
		if(1)
		{
		}
		v_lhNewPage(float_3,char_3,long_1);

		char_3 = char_4 + char_5;
		if(1)
		{
			double_1 = v_lhParsePageHeader(char_4);

			double_3 = double_3 + double_1;
		}
		if(1)
		{
			double_3 = double_1;
		}
		if(1)
		{
			int int_3 = 1;
			if(1)
			{
				long long_2 = 1;
				long_1 = long_2;
			}
			int_1 = int_3;
		}
	}
	char controller_9[2];
	fgets(controller_9 ,2 ,stdin);
	if( strcmp( controller_9, ".") > 0)
	{
		short short_4 = 1;
		double_3 = v_lhLoadCells(int_2);

		short_4 = short_2 * short_2;
	}
	return double_4;
}
long v_lhMapWriteRecord( short parameter_1,long parameter_2,double parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	char char_3 = 1;
	short_3 = short_1 * short_2;
	int_1 = int_1;
	char_2 = char_1 + char_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short_3 = v_SyBigEndianPack64(unsigned_int_1,unsigned_int_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		long_1 = v_lhMapInstallBucket(unsigned_int_2,int_2,char_1);

		double_2 = double_1 * double_1;
		if(1)
		{
		}
		int_3 = int_1 * int_2;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_3;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
		short_2 = short_3 * short_2;
		int_3 = int_1 * int_3;
		double_2 = double_2 + double_3;
		if(1)
		{
		}
		if(1)
		{
			int_1 = int_3 + int_4;
		}
		if(1)
		{
			long_4 = long_2 * long_3;
			float_2 = float_1 + float_1;
		}
		float_2 = float_1 * float_1;
		if(1)
		{
		}
		int_5 = int_1 + int_4;
	}
	if(1)
	{
		int_1 = int_1 + int_1;
		if(1)
		{
		}
	}
	long_4 = long_5 * long_3;
	if(1)
	{
	}
	int_5 = int_3;
	int_2 = int_3 + int_2;
	long_2 = long_5;
	int_4 = int_5 * int_1;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_1;
	if(1)
	{
		int_4 = int_5 + int_3;
		if(1)
		{
			char_1 = char_1;
		}
		if(1)
		{
			unsigned_int_5 = v_lhAcquirePage(short_4,long_1);

			int_2 = int_1;
			if(1)
			{
			}
			char_3 = char_2 + char_3;
		}
	}
	return long_5;
	short_2 = v_SyBigEndianPack32(int_1,char_3);

}
float v_lhCellWriteHeader( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	char char_4 = 1;
	long long_1 = 1;
	double double_4 = 1;
	char char_5 = 1;
	float_3 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	double_1 = double_1 * double_2;
	short_1 = v_SyBigEndianPack64(unsigned_int_5,unsigned_int_3);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	char_3 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	int_1 = int_1 + int_1;
	short_1 = short_2 + short_1;
	double_3 = double_2 + double_3;
	short_1 = v_SyBigEndianPack32(int_2,char_3);

	int_2 = v_SyBigEndianPack16(char_4,long_1);

	char_1 = char_3;
	int_2 = int_1 * int_2;
	double_2 = double_4 + double_4;
	char_5 = char_4 + char_4;
	return float_1;
}
long v_lhCellWriteLocalPayload( long parameter_1,short parameter_2,long parameter_3,unsigned int parameter_4,double parameter_5)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	int_1 = v_SyMemcpy(double_1,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 * long_2;
	int_1 = int_2 + int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	char_2 = char_1 + char_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	return long_2;
}
void v_lhCellDiscard()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		v_SyMemBackendPoolFree(long_1);

		short_1 = short_1 * short_1;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_2;
	}
	double_2 = v_SyBlobRelease(float_1);

	short_2 = short_2;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	int_2 = int_2 * int_1;
	int_2 = int_1 + int_1;
	char_2 = char_1 + char_2;
}
unsigned int v_lhCellWriteOvflPayload( unsigned int parameter_1,double parameter_2,long parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	char char_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	unsigned int unsigned_int_13 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 + char_2;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	char_3 = char_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_3 + double_2;
	long_2 = long_1 * long_2;
	long_4 = long_1 * long_3;
	int_3 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_1 * double_2;
	short_1 = short_1 * short_2;
	short_2 = v_SyBigEndianPack64(unsigned_int_2,unsigned_int_4);

	double_2 = double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_2 = double_2 * double_4;
		}
		if(1)
		{
			int_5 = int_3 + int_3;
			if(1)
			{
			}
			unsigned_int_5 = unsigned_int_5;
			if(1)
			{
			}
			double_2 = double_3;
			unsigned_int_5 = unsigned_int_2 * unsigned_int_6;
			short_2 = short_2 + short_3;
			char_1 = char_4;
			long_3 = long_4 + long_4;
			int_4 = int_3 * int_5;
		}
		float_1 = float_3 * float_3;
		float_3 = float_4;
		if(1)
		{
			float_5 = float_4 * float_4;
		}
		int_5 = int_5 * int_1;
		int_4 = int_2;
		double_1 = double_1;
	}
	double_2 = double_2 + double_3;
	int_5 = v_SyMemcpy(double_3,char_1);

	int_6 = int_3;
	long_3 = long_1 * long_1;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
	int_1 = int_5 * int_6;
	int_7 = int_6 + int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_7 = 1;
		double double_5 = 1;
		float_3 = float_4 * float_5;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
		double_4 = double_2;
		unsigned_int_3 = unsigned_int_1;
		if(1)
		{
			int int_8 = 1;
			int_8 = int_7 * int_3;
		}
		unsigned_int_7 = unsigned_int_5 * unsigned_int_7;
		double_2 = double_5;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned int unsigned_int_9 = 1;
			unsigned int unsigned_int_12 = 1;
			if(1)
			{
				long_3 = long_1 + long_1;
			}
			if(1)
			{
				float float_6 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_8 = 1;
				float_6 = float_5 * float_2;
				if(1)
				{
					float float_7 = 1;
					int_1 = v_SyBigEndianPack16(char_3,long_4);

					float_3 = float_7;
				}
				double_4 = double_3 * double_6;
				if(1)
				{
					char char_5 = 1;
					char_5 = char_1 * char_4;
				}
				unsigned_int_7 = unsigned_int_1 * unsigned_int_8;
				unsigned_int_9 = unsigned_int_9 * unsigned_int_10;
				short_1 = short_1;
				char_3 = char_3;
				short_1 = short_1 + short_3;
				unsigned_int_1 = unsigned_int_7 + unsigned_int_11;
			}
			unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
			unsigned_int_1 = unsigned_int_12 * unsigned_int_5;
			if(1)
			{
				unsigned_int_13 = v_lhAcquirePage(short_2,long_3);

				char_3 = char_2 + char_1;
			}
			unsigned_int_9 = unsigned_int_1 + unsigned_int_4;
			char_4 = char_2 * char_1;
			unsigned_int_5 = unsigned_int_9;
		}
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_11;
	unsigned_int_10 = unsigned_int_2 + unsigned_int_3;
	return unsigned_int_13;
}
double v_lhInstallCell()
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	long long_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short_2 = short_1 * short_2;
	short_1 = short_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_2 = int_1 + int_1;
		int_1 = int_3 * int_2;
		if(1)
		{
		}
		char_1 = char_2;
		double_1 = double_1 + double_1;
		int_2 = int_2;
	}
	int_1 = v_SyMemBackendFree(long_1);

	short_3 = short_3;
	char_1 = char_1 + char_3;
	if(1)
	{
		int int_5 = 1;
		int_5 = int_3 * int_4;
	}
	short_2 = short_2 + short_4;
	if(1)
	{
		char_2 = char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short short_5 = 1;
		long long_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		short_2 = short_5 + short_5;
		int_4 = int_2 * int_3;
		int_3 = int_2 + int_4;
		long_3 = long_2 + long_1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			short short_6 = 1;
			short short_7 = 1;
			char_2 = char_1 + char_1;
			double_1 = double_2 * double_1;
			unsigned_int_2 = unsigned_int_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double double_3 = 1;
				long long_4 = 1;
				int int_6 = 1;
				double double_5 = 1;
				if(1)
				{
					int_2 = int_2 + int_1;
				}
				double_3 = double_2;
				long_2 = long_4 + long_4;
				int_6 = int_3 * int_3;
				if(1)
				{
					double double_4 = 1;
					double_2 = v_SyMemBackendAlloc(char_3,int_3);

					double_4 = double_5;
				}
				double_5 = double_1 + double_2;
				float_2 = float_1 + float_1;
				int_4 = int_6 + int_4;
			}
			unsigned_int_4 = v_SyZero(long_3);

			float_1 = float_2 + float_1;
			short_3 = short_6 + short_6;
			short_7 = short_7 + short_7;
		}
	}
	return double_1;
}
void v_SyBlobInit( long parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	if(1)
	{
		float float_1 = 1;
		if(1)
		{
		}
		float_1 = float_1 * float_1;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	short_3 = short_1 * short_2;
}
short v_lhNewCell( long parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_4 = 1;
	char_2 = char_1 + char_1;
	long_3 = long_1 * long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, " D") > 0)
	{
	}
	unsigned_int_1 = v_SyZero(long_3);

	int_3 = int_1 + int_2;
	v_SyBlobInit(long_2,double_1);

	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	return short_1;
	double_2 = v_SyMemBackendPoolAlloc(short_1,long_4);

}
void v_lhRestoreSpace( float parameter_1,float parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int_1 = v_SyBigEndianPack16(char_1,long_1);

	int_1 = int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2;
	char_1 = char_2 + char_2;
	int_1 = int_2 + int_1;
	char_1 = char_1 * char_1;
	double_4 = double_3 + double_2;
	int_3 = int_1 + int_2;
}
float v_lhFindSlavePage( float parameter_1,int parameter_2,float parameter_3,unsigned int parameter_4)
{
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_5 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_4 = 1;
	float float_5 = 1;
	double double_5 = 1;
	long long_3 = 1;
	float float_6 = 1;
	float float_7 = 1;
	int int_6 = 1;
	long long_4 = 1;
	double double_6 = 1;
	long long_6 = 1;
	long long_7 = 1;
	char char_4 = 1;
	long long_8 = 1;
	short_1 = short_1 * short_1;
	long_1 = v_lhAllocateSpace(char_1,short_2,unsigned_int_1);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	int_1 = int_2;
	float_2 = float_1 + float_2;
	long_2 = long_1 + long_2;
	unsigned_int_3 = v_lhAcquirePage(short_2,long_1);

	short_2 = v_SyBigEndianPack64(unsigned_int_5,unsigned_int_4);

	int_2 = int_3 * int_1;
	float_1 = float_2 * float_1;
	float_4 = float_3 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int_1 = int_4 * int_5;
		float_2 = float_2 * float_3;
		if(1)
		{
			int_3 = int_2;
			char_1 = char_2 + char_2;
		}
		if(1)
		{
			double double_2 = 1;
			if(1)
			{
				double_1 = double_2;
			}
			if(1)
			{
				double double_3 = 1;
				v_lhRestoreSpace(float_1,float_1,unsigned_int_4);

				double_2 = double_3;
			}
			float_1 = float_1;
		}
		double_4 = double_4;
	}
	float_5 = v_lhSetEmptyPage();

	double_5 = double_1 + double_4;
	if(1)
	{
	}
	long_3 = long_3 * long_1;
	if(1)
	{
		char char_3 = 1;
		char_3 = char_2 * char_1;
	}
	float_7 = float_6 * float_5;
	if(1)
	{
	}
	int_1 = int_5 * int_6;
	if(1)
	{
		long long_5 = 1;
		long_4 = long_4 + long_5;
	}
	if(1)
	{
		if(1)
		{
			short short_3 = 1;
			short_3 = short_3 + short_2;
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	double_4 = double_6 + double_1;
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	long_7 = long_1 + long_6;
	v_lhNewPage(float_7,char_2,long_3);

	long_4 = long_3;
	char_4 = char_2 + char_2;
	long_8 = long_6 + long_2;
	return float_3;
}
char v_lhSlaveStore( long parameter_1,short parameter_2,double parameter_3,int parameter_4,double parameter_5,float parameter_6)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	double_1 = double_1 + double_1;
	float_1 = v_lhFindSlavePage(float_1,int_1,float_2,unsigned_int_1);

	double_1 = double_2 + double_1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	int_3 = int_2 * int_1;
	return char_1;
	unsigned_int_1 = v_lhStoreCell(long_1,long_1,float_2,short_1,int_2,float_3,int_3);

}
void v_lhPageDefragment( unsigned int parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	float float_2 = 1;
	double double_6 = 1;
	int int_6 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_7 = 1;
	double_1 = double_1;
	long_2 = long_1 * long_1;
	short_1 = v_SyBigEndianPack32(int_1,char_1);

	float_1 = float_1;
	int_4 = int_2 * int_3;
	double_1 = double_1 * double_1;
	double_2 = double_2 + double_1;
	int_2 = v_SyMemcpy(double_3,char_1);

	double_2 = double_2 * double_2;
	char_2 = char_1;
	char_3 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		if(1)
		{
			double_4 = double_2 * double_3;
		}
		if(1)
		{
			short short_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_8 = 1;
			short short_4 = 1;
			int_2 = int_3 * int_2;
			if(1)
			{
				short_2 = v_SyBigEndianPack64(unsigned_int_1,unsigned_int_2);

				short_3 = short_1 * short_2;
			}
			double_4 = double_3 * double_2;
			int_5 = int_4 * int_1;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
			int_2 = v_SyBigEndianPack16(char_3,long_3);

			unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
			double_2 = double_3 * double_4;
			double_5 = double_1 + double_1;
			unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
			float_2 = float_1 * float_1;
			double_2 = double_5 + double_1;
			char_3 = char_4;
			unsigned_int_8 = unsigned_int_7 * unsigned_int_1;
			double_6 = double_2;
			short_3 = short_3 * short_4;
			if(1)
			{
				unsigned_int_4 = unsigned_int_8 * unsigned_int_6;
				unsigned_int_6 = unsigned_int_7 * unsigned_int_7;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
			}
		}
		float_3 = float_2 * float_1;
	}
	int_5 = int_6 + int_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_5;
		double_3 = double_5;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		double_6 = double_5 * double_4;
		char_1 = char_1 + char_1;
	}
	float_5 = float_4 * float_2;
	int_7 = int_4;
	double_4 = double_5 * double_6;
}
double v_SyBigEndianUnpack16( char parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return double_1;
}
long v_lhAllocateSpace( char parameter_1,short parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	char char_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	long long_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	int_2 = int_1 * int_2;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_3 = double_1 * double_1;
	char_1 = char_1 * char_1;
	short_2 = short_1 + short_1;
	double_2 = double_3 * double_3;
	double_3 = double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_4 = 1;
		int int_6 = 1;
		if(1)
		{
		}
		int_1 = int_2 + int_3;
		double_1 = v_SyBigEndianUnpack16(char_2,double_5);

		float_2 = float_1 * float_1;
		if(1)
		{
			int_4 = int_1;
		}
		char_1 = char_2 + char_1;
		if(1)
		{
			double_2 = double_5;
			if(1)
			{
				float_2 = float_1 + float_1;
				double_4 = double_5 * double_5;
				double_2 = double_5 + double_5;
				unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
				int_5 = v_SyBigEndianPack16(char_1,long_1);

				double_4 = double_1 * double_4;
			}
			if(1)
			{
			}
		}
		int_4 = int_6 + int_5;
	}
	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
	}
	float_3 = float_4;
	if(1)
	{
		double_4 = double_4;
		unsigned_int_3 = unsigned_int_4;
		v_lhPageDefragment(unsigned_int_5);

		double_4 = double_5 * double_5;
		long_1 = long_2;
		int_2 = int_3 * int_5;
		char_3 = char_3 * char_2;
	}
	if(1)
	{
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		short short_3 = 1;
		long_2 = long_1;
		short_2 = short_3;
	}
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	return long_3;
}
unsigned int v_lhStoreCell( long parameter_1,long parameter_2,float parameter_3,short parameter_4,int parameter_5,float parameter_6,int parameter_7)
{
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	double double_6 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double double_7 = 1;
	long long_3 = 1;
	short short_2 = 1;
	double double_8 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_4 = 1;
	long long_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long_1 = v_lhCellWriteLocalPayload(long_1,short_1,long_1,unsigned_int_1,double_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	float_1 = v_lhCellWriteHeader(unsigned_int_2);

	int_1 = int_1 + int_2;
	double_4 = double_2 * double_3;
	double_5 = v_lhInstallCell();

	float_1 = float_1 + float_2;
	double_6 = v_SyBlobAppend(double_5,float_2,unsigned_int_3,-1 );

	long_2 = long_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	if(1)
	{
	}
	unsigned_int_6 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
		char char_2 = 1;
		unsigned_int_1 = unsigned_int_7 + unsigned_int_5;
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
			}
		}
		unsigned_int_8 = v_lhCellWriteOvflPayload(unsigned_int_7,double_6,long_1,int_1);

		char_1 = char_1 * char_2;
	}
	int_2 = int_3 + int_1;
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		v_lhCellDiscard();

		unsigned_int_2 = unsigned_int_9 * unsigned_int_3;
	}
	long_1 = v_lhAllocateSpace(char_1,short_1,unsigned_int_8);

	double_7 = double_1 * double_4;
	char_1 = v_lhSlaveStore(long_3,short_2,double_2,int_3,double_8,float_2);

	int_3 = int_3 * int_1;
	short_1 = short_2 + short_3;
	unsigned_int_10 = unsigned_int_5;
	if(1)
	{
		int int_4 = 1;
		int_2 = int_2 * int_4;
	}
	unsigned_int_10 = unsigned_int_8 * unsigned_int_8;
	if(1)
	{
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_3 + char_1;
		if(1)
		{
			float_1 = float_2 + float_2;
		}
	}
	if(1)
	{
		double_2 = double_8 * double_3;
	}
	short_4 = v_lhNewCell(long_4,double_3);

	float_3 = float_3 + float_4;
	return unsigned_int_2;
}
int v_SyBigEndianPack16( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_2;
	int_1 = int_1 * int_1;
	return int_1;
}
float v_lhSetEmptyPage()
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	float_2 = float_1 * float_1;
	double_1 = double_2;
	double_4 = double_3 + double_4;
	char_1 = char_1 * char_1;
	int_1 = v_SyBigEndianPack16(char_1,long_1);

	double_4 = double_4 + double_4;
	if(1)
	{
	}
	double_2 = double_2 * double_5;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 * long_2;
	char_2 = char_2 + char_1;
	char_1 = char_1 + char_3;
	char_4 = char_2 + char_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	double_5 = double_6 + double_3;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_6;
	short_1 = v_SyBigEndianPack64(unsigned_int_7,unsigned_int_4);

	int_2 = int_2 * int_2;
	long_3 = long_1 + long_2;
	short_1 = short_2 * short_1;
	char_4 = char_1;
	return float_2;
}
void v_lhNewPage( float parameter_1,char parameter_2,long parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	short_2 = short_1 * short_1;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	unsigned_int_1 = v_SyZero(long_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_2;
	char_2 = char_1 * char_2;
	double_4 = v_SyMemBackendPoolAlloc(short_3,long_1);

	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short_3 = short_2;
		int_1 = int_1 + int_2;
		int_3 = int_1 * int_3;
	}
	double_1 = double_5 + double_4;
}
unsigned int v_lhAcquirePage( short parameter_1,long parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	long long_3 = 1;
	double_1 = v_SyBigEndianUnpack64(char_1,unsigned_int_1);

	long_2 = long_1 * long_1;
	int_2 = int_1 * int_1;
	if(1)
	{
		int_1 = int_1 + int_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			float_1 = float_2;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			char controller_3[3];
			fgets(controller_3 ,3 ,stdin);
			if( strcmp( controller_3, "jM") < 0)
			{
			}
			float_4 = float_1 + float_3;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		}
	}
	short_1 = v_SyBigEndianPack64(unsigned_int_1,unsigned_int_4);

	long_3 = long_2;
	if(1)
	{
	}
	short_1 = short_1 * short_1;
	return unsigned_int_1;
}
char v_lhMapFindBucket( double parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
		}
		short_2 = short_1 + short_1;
	}
	return char_1;
}
float v_lh_record_insert( double parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	short short_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	char char_5 = 1;
	char char_6 = 1;
	float float_2 = 1;
	long long_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int_2 = int_1 + int_2;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1;
	int_4 = int_2 * int_3;
	unsigned_int_1 = v_lhAcquirePage(short_1,long_2);

	double_2 = double_1 * double_2;
	double_2 = v_lhLoadPage(int_1,short_1,unsigned_int_3,char_1,int_3);

	int_5 = int_4 + int_3;
	char_3 = char_2 * char_3;
	long_1 = v_lhMapWriteRecord(short_3,long_2,double_3);

	float_1 = v_lhRecordAppend(unsigned_int_3,char_4,double_1);

	double_2 = double_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
	}
	char_3 = v_lhMapFindBucket(double_4,short_2);

	short_2 = short_4 + short_3;
	double_6 = double_5 + double_3;
	unsigned_int_5 = v_lhFindCell(int_5,char_2,int_1,int_1);

	long_3 = long_1 * long_2;
	if(1)
	{
		long_3 = long_2 * long_1;
	}
	char_6 = char_5 * char_2;
	if(1)
	{
		int int_6 = 1;
		int_2 = int_3 * int_6;
		if(1)
		{
		}
		double_1 = double_3 * double_6;
		if(1)
		{
		}
		char_2 = char_4 * char_2;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_2 = unsigned_int_6 + unsigned_int_5;
		}
		unsigned_int_2 = v_lhStoreCell(long_1,long_2,float_1,short_3,int_1,float_2,int_3);

		float_1 = float_2 + float_2;
		if(1)
		{
			float_2 = float_2 * float_1;
		}
		short_3 = short_1;
	}
	if(1)
	{
		long long_4 = 1;
		float_2 = float_1 * float_1;
		if(1)
		{
		}
		double_4 = double_5 * double_3;
		long_5 = long_1 + long_4;
		if(1)
		{
			float_3 = v_lhRecordOverwrite(short_1,char_5,long_5);

			int_1 = int_4 * int_4;
			if(1)
			{
				v_lhRecordInstall(float_4,short_3,unsigned_int_2,unsigned_int_4,int_3,short_1);

				float_4 = float_2 * float_4;
				float_2 = v_lhSetEmptyPage();

				unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
			}
		}
		if(1)
		{
			if(1)
			{
				double_4 = double_5;
			}
			if(1)
			{
				double_6 = double_2 + double_1;
			}
		}
		float_2 = float_2;
	}
	return float_2;
	v_lhNewPage(float_5,char_1,long_1);

}
double v_lhash_kv_replace( unsigned int parameter_1,long parameter_2,int parameter_3,float parameter_4,char parameter_5)
{
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	float_1 = v_lh_record_insert(double_1,short_1,char_1,unsigned_int_1,int_1,int_2);

	float_1 = float_1 * float_1;
	int_2 = int_3 * int_2;
	return double_2;
}
long v_MemPoolBucketAlloc( unsigned int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int_1 = int_2;
	short_3 = short_1 * short_2;
	v_MemBackendAlloc(unsigned_int_1,float_1,-1 );

	int_2 = int_2 * int_1;
	int_3 = int_2 * int_1;
	if(1)
	{
	}
	double_1 = double_1;
	int_4 = int_4 + int_4;
	char_2 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		short short_4 = 1;
		short short_5 = 1;
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			char_3 = char_4;
		}
		int_2 = int_3 * int_5;
		short_5 = short_4 * short_1;
		short_4 = short_2;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return long_1;
}
void v_MemBackendPoolAlloc( long parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	short_2 = short_1 * short_1;
	float_2 = float_1 * float_1;
	double_1 = double_2;
	v_MemBackendAlloc(unsigned_int_1,float_3,-1 );

	long_1 = long_1;
	long_2 = v_MemPoolBucketAlloc(unsigned_int_2,long_3);

	double_2 = double_1 * double_3;
}
double v_SyMemBackendPoolAlloc( short parameter_1,long parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	v_MemBackendPoolAlloc(long_1,double_1);

	short_1 = short_1 + short_1;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		if(1)
		{
		}
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1 + double_1;
		}
		short_4 = short_2 + short_3;
	}
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "M") > 0)
	{
		long long_2 = 1;
		long_1 = long_2;
	}
	return double_3;
}
long v_lhMapInstallBucket( unsigned int parameter_1,int parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	char_3 = char_1 + char_2;
	short_2 = short_1 + short_1;
	short_1 = short_2 * short_2;
	if(1)
	{
	}
	char_4 = char_1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = v_SyZero(long_1);

	long_1 = long_1 + long_1;
	double_2 = double_2 + double_2;
	double_2 = double_3;
	if(1)
	{
		double_3 = double_2;
	}
	double_2 = double_2;
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	int_3 = int_2;
	if(1)
	{
		double double_5 = 1;
		int int_4 = 1;
		double_2 = double_4 + double_5;
		char_3 = char_1 + char_1;
		double_4 = v_SyMemBackendAlloc(char_3,int_1);

		int_1 = int_1;
		int_4 = int_3;
		double_5 = double_1 * double_5;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			int int_6 = 1;
			int int_7 = 1;
			short short_4 = 1;
			float_2 = float_1 + float_2;
			double_1 = double_5 + double_3;
			int_3 = int_5 * int_4;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				if(1)
				{
					int_3 = int_2 * int_2;
				}
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
				int_7 = int_2 + int_6;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
				if(1)
				{
					int_7 = int_2 + int_7;
				}
				int_4 = int_1;
				double_2 = v_SyMemBackendPoolAlloc(short_3,long_1);

				double_1 = double_5 * double_2;
				int_3 = int_6 + int_6;
			}
			short_2 = short_4 * short_2;
			int_7 = int_6 + int_1;
			char_3 = char_3 + char_3;
		}
	}
	return long_1;
	int_5 = v_SyMemBackendFree(long_1);

}
float v_lhMapLoadPage( float parameter_1,double parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_3 = 1;
	short_2 = short_1 * short_1;
	float_3 = float_1 + float_2;
	double_3 = double_1 + double_2;
	long_2 = long_1 + long_2;
	double_4 = v_SyBigEndianUnpack64(char_1,unsigned_int_1);

	int_2 = int_1 * int_1;
	if(1)
	{
		double double_5 = 1;
		long_2 = v_lhMapInstallBucket(unsigned_int_2,int_1,char_2);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		char_3 = char_1 * char_1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		double_5 = double_2 * double_1;
	}
	if(1)
	{
		double double_6 = 1;
		double_6 = double_6;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		int_3 = int_2 + int_3;
		int_4 = int_4 * int_4;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		char_1 = char_4 * char_3;
		if(1)
		{
		}
	}
	char_5 = char_3 + char_1;
	return float_2;
	char_4 = v_SyBigEndianUnpack32(long_3,double_2);

}
double v_SyBigEndianUnpack64( char parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	short_3 = short_1 * short_2;
	return double_1;
}
char v_SyBigEndianUnpack32( long parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return char_1;
}
long v_lhash_read_header( long parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_4 = 1;
	short short_3 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	char char_2 = 1;
	double double_5 = 1;
	short_1 = short_1;
	short_2 = short_2 + short_1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_3 + int_1;
	double_2 = double_1 * double_1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	float_1 = v_lhMapLoadPage(float_2,double_3,char_1);

	int_1 = int_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "f") < 0)
	{
		double_1 = double_1;
	}
	double_3 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_3 + int_4;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	short_2 = short_1 * short_1;
	int_5 = int_2;
	long_4 = long_2 + long_2;
	short_3 = short_1 + short_1;
	long_1 = long_5 + long_1;
	int_5 = int_2 * int_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	int_3 = int_1 * int_3;
	int_4 = int_4;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_5 = 1;
		short short_4 = 1;
		double_4 = double_2 * double_3;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
		if(1)
		{
			char_1 = char_2;
		}
		short_1 = short_2 + short_4;
		if(1)
		{
		}
		unsigned_int_5 = unsigned_int_4;
		double_4 = v_SyBigEndianUnpack64(char_2,unsigned_int_4);

		double_3 = double_5 * double_5;
		char_2 = v_SyBigEndianUnpack32(long_4,double_5);

		unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
		if(1)
		{
		}
	}
	return long_5;
}
short v_SyBigEndianPack64( unsigned int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	double double_4 = 1;
	short_1 = short_1 * short_2;
	char_1 = char_1 * char_1;
	float_1 = float_1 * float_2;
	double_3 = double_1 * double_2;
	int_3 = int_1 * int_2;
	short_1 = short_3;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 * long_2;
	float_2 = float_2 * float_2;
	int_3 = int_2 * int_2;
	short_1 = short_1 + short_2;
	short_4 = short_2 + short_4;
	int_3 = int_2;
	double_2 = double_4;
	return short_2;
}
short v_SyBigEndianPack32( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1 + char_1;
	short_1 = short_1 + short_1;
	double_1 = double_1 + double_1;
	long_1 = long_1 + long_2;
	short_2 = short_2 * short_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return short_2;
}
void v_lhash_write_header( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_8 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	char char_1 = 1;
	int int_9 = 1;
	short short_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2;
	int_2 = int_1 + int_2;
	short_1 = v_SyBigEndianPack64(unsigned_int_2,unsigned_int_2);

	int_3 = int_3 + int_3;
	int_5 = int_3 + int_4;
	int_3 = int_4 + int_1;
	float_3 = float_1 * float_2;
	int_7 = int_6 * int_4;
	long_1 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
	float_5 = float_3 + float_4;
	int_3 = int_2 * int_8;
	short_3 = short_2 + short_3;
	unsigned_int_6 = unsigned_int_1;
	short_2 = short_4;
	short_1 = v_SyBigEndianPack32(int_5,char_1);

	float_3 = float_4 * float_1;
	short_3 = short_4 * short_4;
	int_8 = int_8 * int_9;
	short_5 = short_2 * short_1;
}
void v_lhash_kv_open( short parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long_1 = long_2;
	v_lhash_write_header(long_1,char_1);

	float_2 = float_1 + float_2;
	int_1 = int_1;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = double_1;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
		}
		long_3 = v_lhash_read_header(long_4,char_1);

		long_3 = long_2 * long_1;
		if(1)
		{
		}
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "]?") < 0)
	{
		float float_3 = 1;
		long_4 = long_3 * long_1;
		if(1)
		{
		}
		float_3 = float_3 * float_1;
		if(1)
		{
		}
	}
}
char v_lhash_kv_config( double parameter_1,int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double_2 = double_1 * double_1;
	double_2 = double_2 * double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		int_1 = int_1 + int_2;
		if(1)
		{
			int_1 = int_2 * int_3;
		}
	}
	unsigned_int_2 = unsigned_int_1;
	int_1 = int_2 + int_2;
	if(1)
	{
		int_2 = int_3 * int_2;
	}
	char_1 = char_1 + char_2;
	short_1 = short_1 * short_1;
	double_2 = double_3 * double_1;
	return char_1;
}
int v_lhash_kv_release( char parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	v_SyMemBackendRelease(int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_1 * char_2;
	return int_2;
}
char v_MemBackendPoolFree( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double_2 = double_1 + double_2;
	char_2 = char_1 + char_1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double_1 = v_MemBackendFree(char_3);

		short_1 = short_1 + short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		double_2 = double_2;
	}
	return char_4;
}
void v_SyMemBackendPoolFree( long parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char_1 = v_MemBackendPoolFree(short_1);

	int_1 = int_1 + int_1;
	if(1)
	{
		int int_2 = 1;
		if(1)
		{
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 * float_2;
		}
		int_2 = int_2;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
}
double v_SyBlobRelease( float parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	double_1 = double_1;
	int_1 = v_SyMemBackendFree(long_1);

	int_2 = int_1 * int_1;
	short_3 = short_1 * short_2;
	return double_2;
}
char v_lhash_page_release()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_SyMemBackendFree(long_1);

	int_2 = int_1 * int_2;
	double_3 = double_1 * double_2;
	float_3 = float_1 + float_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_4 = 1;
		short short_3 = 1;
		v_SyMemBackendPoolFree(long_2);

		short_1 = short_2;
		char_2 = char_1 * char_2;
		float_4 = float_1 + float_1;
		double_3 = v_SyBlobRelease(float_3);

		short_4 = short_3 * short_1;
	}
	if(1)
	{
		short short_5 = 1;
		short_5 = short_2 + short_4;
	}
	unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	return char_3;
}
unsigned int v_lhash_bin_hash( double parameter_1,char parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_1;
	long_1 = long_1 + long_2;
	short_1 = short_1 + short_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	float_3 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		int_1 = int_1 + int_2;
		int_2 = int_2 + int_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		int_1 = int_2 * int_2;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		}
		double_1 = double_1 + double_1;
		float_1 = float_1 + float_1;
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 + char_1;
		}
		int_2 = int_1 * int_1;
		float_1 = float_2 + float_1;
	}
	return unsigned_int_1;
}
double v_lhash_kv_init( unsigned int parameter_1,int parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	double double_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	int int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	v_SyMemcmp(long_1,long_1,float_1);

	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 * int_1;
	long_2 = long_1 + long_1;
	if(1)
	{
		int_3 = int_4;
	}
	double_2 = double_1 + double_1;
	long_3 = long_2 * long_2;
	int_5 = int_4 * int_3;
	double_3 = v_vedisExportMemBackend();

	long_1 = long_4 * long_2;
	double_2 = v_SyMemBackendAlloc(char_1,int_6);

	short_2 = short_1 + short_2;
	if(1)
	{
		int_6 = int_5 * int_6;
		unsigned_int_2 = v_lhash_bin_hash(double_1,char_1);

		unsigned_int_1 = unsigned_int_1;
	}
	v_SyMemBackendRelease(int_1);

	unsigned_int_1 = unsigned_int_1;
	short_1 = v_SyMemBackendInitFromParent(float_1,double_3);

	char_2 = v_lhash_page_release();

	double_1 = double_1 * double_2;
	unsigned_int_2 = v_SyZero(long_4);

	int_6 = int_4 * int_1;
	int_7 = int_2 * int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	double_3 = double_1 + double_1;
	short_2 = short_3;
	return double_2;
}
void v_vedisExportDiskKvStorage()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	double double_3 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	short short_3 = 1;
	double_1 = v_lhash_kv_init(unsigned_int_1,int_1);

	char_1 = v_lhash_kv_config(double_1,int_2,short_1);

	v_lhash_kv_open(short_1,long_1);

	v_lhash_kv_append(unsigned_int_1,unsigned_int_1,int_3,double_1,float_1);

	long_2 = v_lhCursorSeek(double_2,float_2,int_4,int_5);

	double_2 = v_lhCursorNext(long_3);

	v_lhCursorPrev();

	double_2 = v_lhCursorDelete(char_1);

	double_3 = v_lhCursorKeyLength(char_1,int_3);

	char_2 = v_lhCursorData(double_1,short_2,int_4);

	char_1 = char_2 + char_2;
	int_1 = v_lhash_kv_release(char_2);

	double_4 = v_lhash_kv_replace(unsigned_int_2,long_1,int_1,float_1,char_1);

	short_1 = v_lhInitCursor(unsigned_int_1);

	char_1 = v_lhCursorFirst(short_2);

	char_2 = v_lhCursorLast(unsigned_int_3);

	double_3 = v_lhCursorValid(long_1);

	unsigned_int_1 = v_lhCursorKey(long_2,float_2,char_3);

	v_lhCursorDataLength(short_1,char_1);

	v_lhCursorReset(short_3);

}
void v_MemHashCursorReset( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_1;
}
void v_MemHashCursorData( long parameter_1,long parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
	}
	long_2 = long_1 * long_2;
}
double v_MemHashCursorDataLength( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short_1 = short_2;
	if(1)
	{
	}
	int_1 = int_1;
	return double_1;
}
long v_MemHashCursorKey( float parameter_1,short parameter_2,long parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_1 = short_1 * short_2;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	return long_2;
}
int v_MemHashCursorKeyLength( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	int_1 = int_2;
	return int_2;
}
double v_MemHashUnlinkRecord( short parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = long_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	int_1 = v_SyMemBackendFree(long_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_3;
	}
	float_3 = float_1 * float_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	unsigned_int_1 = unsigned_int_5;
	return double_1;
}
void v_MemHashCursorDelete( long parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_1 = int_1 * int_1;
	char_1 = char_1 + char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "k") < 0)
	{
	}
	double_1 = double_1 + double_2;
	float_1 = float_1 * float_1;
	double_1 = v_MemHashUnlinkRecord(short_1,long_1);

	int_4 = int_2 * int_3;
}
long v_MemHashCursorPrev( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	return long_1;
}
short v_MemHashCursorNext( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return short_1;
}
float v_MemHashCursorValid( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	return float_1;
}
short v_MemHashCursorLast( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	int_2 = int_3;
	int_5 = int_2 + int_4;
	return short_1;
}
char v_MemHashCursorFirst( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_1;
	short_1 = short_1;
	int_1 = int_1 * int_2;
	return char_1;
}
double v_MemHashCursorSeek( short parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		if(1)
		{
		}
	}
	return double_1;
	int_1 = v_MemHashGetEntry(float_1,short_1,int_1);

}
char v_MemHashInitCursor()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_3 = int_1 * int_2;
	long_3 = long_1 + long_2;
	char_2 = char_1 + char_1;
	return char_3;
}
void v_MemHashAppend( double parameter_1,unsigned int parameter_2,int parameter_3,long parameter_4,long parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long long_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double_2 = double_1 * double_1;
	int_1 = int_1 * int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	int_1 = v_MemHashGetEntry(float_1,short_1,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "e!") < 0)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
		}
		float_1 = float_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		}
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_8 = 1;
		double double_5 = 1;
		double_1 = double_2 + double_1;
		short_1 = v_MemHashGrowTable(int_1);

		float_1 = float_2;
		float_3 = float_3 * float_3;
		double_1 = double_3 * double_1;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
		}
		double_1 = v_MemHashLinkRecord(float_4,int_2);

		unsigned_int_1 = unsigned_int_7 + unsigned_int_8;
		int_2 = v_SyMemcpy(double_4,char_1);

		unsigned_int_4 = unsigned_int_8 + unsigned_int_5;
		if(1)
		{
		}
		double_4 = v_MemHashNewRecord(char_1,double_4,int_3,long_3,unsigned_int_7,short_2);

		short_1 = v_SyMemBackendRealloc(short_1,int_4,-1 );

		double_2 = double_1 * double_2;
		int_2 = int_2 + int_1;
		double_1 = double_1 * double_5;
	}
}
short v_MemHashGrowTable( int parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	float float_4 = 1;
	short short_2 = 1;
	float float_5 = 1;
	long long_9 = 1;
	char_1 = char_1 * char_1;
	short_1 = short_1;
	long_1 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_3 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_6 = 1;
		long long_6 = 1;
		long long_7 = 1;
		int int_6 = 1;
		float float_6 = 1;
		float float_7 = 1;
		if(1)
		{
			double double_3 = 1;
			unsigned_int_2 = v_SyZero(long_2);

			double_3 = double_1 + double_2;
		}
		int_1 = int_1 + int_1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
		double_1 = double_1;
		if(1)
		{
			int_1 = v_SyMemBackendFree(long_3);

			float_1 = float_3;
		}
		double_2 = double_4 * double_5;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_2;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2;
		}
		double_1 = v_SyMemBackendAlloc(char_1,int_1);

		long_4 = long_1 * long_4;
		int_3 = int_2 * int_2;
		int_1 = int_4 + int_5;
		if(1)
		{
			double_4 = double_5 * double_2;
		}
		int_3 = int_3;
		unsigned_int_7 = unsigned_int_6 + unsigned_int_7;
		short_1 = short_1;
		if(1)
		{
			long long_5 = 1;
			long_3 = long_4 + long_5;
		}
		float_4 = float_2 + float_1;
		float_3 = float_4 + float_3;
		unsigned_int_4 = unsigned_int_6;
		if(1)
		{
			unsigned_int_6 = unsigned_int_3 * unsigned_int_6;
		}
		double_6 = double_4 + double_6;
		int_4 = int_1 * int_3;
		long_6 = long_7;
		if(1)
		{
			short_1 = short_2 * short_1;
		}
		int_6 = int_2 * int_4;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_5;
		float_7 = float_5 + float_6;
		if(1)
		{
			long long_8 = 1;
			long_8 = long_2 + long_6;
		}
		double_5 = double_4 * double_1;
		int_1 = int_4 + int_6;
		long_7 = long_6;
	}
	double_2 = double_4;
	float_2 = float_5 * float_4;
	long_4 = long_9 + long_4;
	return short_2;
}
double v_MemHashLinkRecord( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_2;
	int_2 = int_1 * int_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	int_1 = int_1 + int_1;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_3 + double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
	}
	int_3 = int_1 + int_1;
	return double_2;
}
double v_MemHashNewRecord( char parameter_1,double parameter_2,int parameter_3,long parameter_4,unsigned int parameter_5,short parameter_6)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_3 = 1;
	double double_1 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = char_1 + char_2;
	float_2 = float_1 + float_2;
	float_4 = float_2 * float_3;
	short_2 = short_1 * short_1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "#S") < 0)
	{
	}
	char_1 = char_1 + char_3;
	if(1)
	{
		int_1 = v_SyMemcpy(double_1,char_4);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	int_2 = v_SyMemBackendFree(long_1);

	double_1 = double_2 + double_1;
	long_4 = long_1 + long_3;
	short_3 = short_1 + short_1;
	unsigned_int_1 = v_SyZero(long_2);

	char_5 = char_5;
	double_2 = double_1 + double_2;
	double_1 = v_SyMemBackendAlloc(char_6,int_1);

	double_2 = double_3 + double_3;
	double_4 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	float_2 = float_3 + float_2;
	int_2 = int_2 * int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	return double_2;
}
int v_MemHashGetEntry( float parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2;
	double_3 = double_2 * double_1;
	short_3 = short_1 + short_2;
	double_4 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 * int_1;
		}
		if(1)
		{
		}
		long_2 = long_1 * long_1;
	}
	return int_2;
}
char v_MemHashReplace( double parameter_1,int parameter_2,int parameter_3,double parameter_4,double parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	short_1 = short_1 + short_2;
	if(1)
	{
		double_2 = v_MemHashNewRecord(char_1,double_1,int_1,long_1,unsigned_int_4,short_2);

		int_2 = v_SyMemBackendFree(long_2);

		long_2 = long_1 * long_3;
		if(1)
		{
		}
		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		if(1)
		{
			double_2 = v_SyMemBackendAlloc(char_1,int_2);

			char_1 = char_1 + char_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		float float_3 = 1;
		short short_4 = 1;
		float_1 = float_1;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
		if(1)
		{
			char_1 = char_1 + char_1;
		}
		if(1)
		{
			float_2 = float_1 * float_1;
			if(1)
			{
			}
			double_1 = v_MemHashLinkRecord(float_1,int_1);

			int_3 = v_SyMemcpy(double_1,char_2);

			long_1 = long_3 + long_3;
		}
		int_2 = v_MemHashGetEntry(float_2,short_3,int_3);

		unsigned_int_7 = unsigned_int_8;
		float_3 = float_1 + float_1;
		short_2 = v_MemHashGrowTable(int_4);

		short_2 = short_4 + short_3;
	}
	return char_1;
}
unsigned int v_MemHashConfigure( unsigned int parameter_1,int parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	float_2 = float_1 * float_1;
	char_2 = char_1 + char_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			long_1 = long_1 * long_1;
		}
	}
	long_2 = long_1 + long_2;
	long_2 = long_2 * long_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	double_1 = double_1 * double_1;
	return unsigned_int_1;
}
int v_MemBackendRelease( int parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	char_1 = char_1;
	short_2 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_6 = 1;
		if(1)
		{
			int_1 = int_1 + int_2;
		}
		double_2 = double_1 + double_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_1 * double_1;
		int_1 = int_2 * int_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		}
		double_4 = double_2 + double_3;
		double_5 = double_2;
		int_1 = int_2 * int_1;
		int_2 = int_2 * int_3;
		if(1)
		{
			double_5 = double_4 * double_3;
		}
		unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
		float_2 = float_1 + float_1;
		int_3 = int_2;
		long_2 = long_1 * long_1;
		if(1)
		{
			int_2 = int_1 * int_2;
		}
		double_5 = double_6 * double_6;
		float_2 = float_1 + float_1;
		double_3 = double_6;
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		short_3 = short_2 + short_1;
	}
	short_3 = short_3 + short_4;
	int_4 = int_2 + int_4;
	if(1)
	{
		double_1 = double_4 + double_2;
	}
	return int_4;
}
void v_SyMemBackendRelease( int parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
		double double_3 = 1;
		if(1)
		{
		}
		if(1)
		{
			double_1 = double_1 + double_1;
		}
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
		int_1 = v_MemBackendRelease(int_2);

		double_1 = double_2 * double_1;
	}
}
unsigned int v_MemHashRelease( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_2;
	return unsigned_int_2;
	v_SyMemBackendRelease(int_1);

}
long v_MemHashFunc( long parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_5 = 1;
	double_1 = double_2;
	double_1 = double_1 * double_2;
	long_2 = long_1 + long_2;
	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_4 = 1;
		if(1)
		{
			char_1 = char_2;
		}
		char_1 = char_3;
		double_1 = double_3 + double_3;
		if(1)
		{
			long long_4 = 1;
			long_4 = long_1 * long_3;
		}
		unsigned_int_1 = unsigned_int_1;
		long_1 = long_3 * long_2;
		if(1)
		{
			long_5 = long_5 + long_1;
		}
		double_4 = double_4 * double_5;
		int_2 = int_1 + int_1;
		if(1)
		{
			double_3 = double_4 * double_2;
		}
		int_1 = int_1 + int_1;
		char_3 = char_2 + char_4;
	}
	return long_5;
}
short v_SyMemBackendInitFromParent( float parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_2;
	}
	double_3 = double_1 + double_2;
	long_1 = long_1 + long_2;
	long_4 = long_2 + long_3;
	double_2 = double_2 * double_4;
	if(1)
	{
		int int_4 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_3 = v_SyZero(long_4);

		int_4 = int_1 * int_2;
		if(1)
		{
		}
	}
	if(1)
	{
		double double_5 = 1;
		double_5 = double_5 * double_1;
	}
	return short_1;
}
long v_MemHashInit( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_4 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	char char_5 = 1;
	long long_5 = 1;
	double_1 = v_vedisExportMemBackend();

	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		long_2 = v_MemHashFunc(long_3,short_1);

		v_SyMemcmp(long_3,long_1,float_1);

		int_1 = int_1 + int_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_3 = char_1 * char_2;
	short_4 = short_2 * short_3;
	if(1)
	{
		char_2 = char_2 * char_4;
	}
	short_3 = v_SyMemBackendInitFromParent(float_1,double_2);

	float_2 = float_1 * float_1;
	int_2 = int_2 * int_3;
	double_1 = v_SyMemBackendAlloc(char_2,int_1);

	unsigned_int_1 = v_SyZero(long_4);

	char_5 = char_4 + char_2;
	return long_5;
}
long v_vedisExportMemKvStorage()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	short short_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	short short_3 = 1;
	long long_5 = 1;
	unsigned_int_1 = v_MemHashRelease(unsigned_int_2);

	v_MemHashAppend(double_1,unsigned_int_2,int_1,long_1,long_1);

	float_1 = v_MemHashCursorValid(float_2);

	v_MemHashCursorReset(short_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	return long_2;
	long_2 = v_MemHashInit(int_1,int_2);

	unsigned_int_3 = v_MemHashConfigure(unsigned_int_3,int_3,char_1);

	char_2 = v_MemHashReplace(double_1,int_2,int_2,double_2,double_1);

	char_2 = v_MemHashInitCursor();

	double_1 = v_MemHashCursorSeek(short_1,int_1,int_1,int_2);

	char_2 = v_MemHashCursorFirst(int_2);

	short_1 = v_MemHashCursorLast(int_2);

	short_2 = v_MemHashCursorNext(float_3);

	long_3 = v_MemHashCursorPrev(char_1);

	v_MemHashCursorDelete(long_1);

	int_2 = v_MemHashCursorKeyLength(short_1,int_3);

	long_4 = v_MemHashCursorKey(float_4,short_3,long_2);

	double_2 = v_MemHashCursorDataLength(char_1,int_2);

	v_MemHashCursorData(long_5,long_3,short_3);

}
long v_SySetInit( short parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_2;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_1;
	float_1 = float_1 + float_1;
	int_2 = int_2 * int_4;
	int_3 = int_3 * int_3;
	return long_1;
}
unsigned int v_UnixUnmap(float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_2;
	return unsigned_int_1;
}
short v_UnixMmap( char parameter_1,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	double_3 = double_1 * double_2;
	double_4 = double_2 + double_3;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	double_4 = double_2 * double_4;
	double_3 = double_2 * double_4;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		char_2 = char_3;
		long_1 = long_1 + long_1;
	}
	short_1 = short_1 + short_1;
	return short_2;
}
unsigned int v_unixCurrentTime( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = float_1 * float_1;
	double_2 = double_1 + double_2;
	short_1 = short_1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
	return unsigned_int_1;
}
int v_unixSleep( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	short_2 = short_1 + short_1;
	short_1 = short_3 * short_1;
	long_2 = long_1 * long_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_3 * long_2;
	int_1 = int_1 + int_2;
	long_3 = long_1 + long_2;
	return int_1;
}
double v_SyMemBackendDup( unsigned int parameter_1,unsigned int parameter_2,double parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	double_1 = v_SyMemBackendAlloc(char_1,int_1);

	double_1 = double_2 + double_2;
	if(1)
	{
		if(1)
		{
		}
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 * double_1;
	}
	return double_4;
	int_2 = v_SyMemcpy(double_5,char_2);

}
float v_BlobPrepareGrow( short parameter_1,unsigned int parameter_2,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1;
	char controller4vul_736[2];
	fgets(controller4vul_736 ,2 ,stdin);
	if( strcmp( controller4vul_736, "3") < 0)
	{
		char controller4vul_737[2];
		fgets(controller4vul_737 ,2 ,stdin);
		if( strcmp( controller4vul_737, "/") > 0)
		{
			double_1 = double_1;
			char controller4vul_738[2];
			fgets(controller4vul_738 ,2 ,stdin);
			if( strcmp( controller4vul_738, "V") > 0)
			{
				short_1 = v_SyMemBackendRealloc(short_2,int_2,uni_para);

			}
		}
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char_3 = char_1 + char_2;
			if(1)
			{
			}
			long_2 = long_1 + long_2;
			double_3 = double_2 + double_2;
		}
		if(1)
		{
			double double_4 = 1;
			long_2 = long_3;
			double_4 = double_1 + double_1;
		}
		float_1 = float_1 + float_1;
	}
	if(1)
	{
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3;
	}
	if(1)
	{
		float_1 = float_1;
	}
	short_2 = short_2;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	long_2 = long_3 * long_3;
	return float_2;
}
double v_SyBlobAppend( double parameter_1,float parameter_2,unsigned int parameter_3,int uni_para)
{
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char_1 = char_1;
	int_1 = int_1;
	char controller4vul_735[3];
	fgets(controller4vul_735 ,3 ,stdin);
	if( strcmp( controller4vul_735, ")A") > 0)
	{
		float_1 = v_BlobPrepareGrow(short_1,unsigned_int_1,uni_para);

	}
	char_1 = char_1;
	if(1)
	{
	}
	if(1)
	{
		short short_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short_2 = short_1 + short_2;
		int_1 = int_2 + int_3;
		int_3 = int_4;
		double_3 = double_1 * double_2;
	}
	return double_1;
}
void v_FormatConsumer( unsigned int parameter_1,unsigned int parameter_2,int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = v_SyBlobAppend(double_1,float_1,unsigned_int_1,uni_para);

	int_1 = int_1 * int_2;
	long_1 = long_1 + long_1;
	double_2 = double_1 + double_1;
	float_3 = float_1 * float_2;
	int_2 = int_3 * int_2;
	short_1 = short_1 + short_1;
	double_2 = double_2;
	short_1 = short_2 * short_1;
	char_1 = char_2;
}
char v_getdigit( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_3;
	long_3 = long_1 + long_2;
	return char_1;
}
void v_InternFormat( double parameter_1,long parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	double_1 = double_1 * double_2;
	char_1 = v_getdigit(short_1,int_1);

	double_3 = double_2 * double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "!") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		char_1 = char_2 * char_3;
	}
	long_1 = long_1;
	double_4 = double_1;
	unsigned_int_1 = v_SyStrlen(char_1);

	short_1 = short_1 + short_2;
}
double v_FormatMount( long parameter_1,float parameter_3,long parameter_5,float parameter_6,short parameter_7,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	long long_3 = 1;
	double double_3 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	char controller4vul_733[3];
	fgets(controller4vul_733 ,3 ,stdin);
	if( strcmp( controller4vul_733, "`n") < 0)
	{
		char controller4vul_734[3];
		fgets(controller4vul_734 ,3 ,stdin);
		if( strcmp( controller4vul_734, "NP") > 0)
		{
			v_FormatConsumer(unsigned_int_3,unsigned_int_1,uni_para);

		}
		float_1 = float_1;
	}
	float_3 = float_1 + float_2;
	double_1 = double_1 * double_2;
	float_1 = float_1 + float_3;
	char_1 = char_1 * char_1;
	long_3 = long_2 + long_1;
	if(1)
	{
		float_2 = float_3 + float_3;
	}
	return double_3;
}
float v_SyBlobInitFromBuf( double parameter_1,int parameter_3)
{
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	if(1)
	{
		double double_1 = 1;
		if(1)
		{
		}
		double_1 = double_2;
	}
	double_4 = double_2 * double_3;
	int_1 = int_1 + int_2;
	int_4 = int_1 + int_3;
	char_3 = char_1 + char_2;
	return float_1;
}
void v_SyBufferFormat( char parameter_1,short parameter_2,char parameter_3,long parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_6 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	long long_2 = 1;
	short_1 = short_2;
	double_1 = v_FormatMount(long_1,float_1,long_1,float_2,short_1,-1 );

	short_2 = short_2;
	short_2 = short_3 * short_4;
	if(1)
	{
		short short_5 = 1;
		if(1)
		{
		}
		if(1)
		{
		}
		short_3 = short_1 + short_5;
	}
	char_2 = char_1 + char_2;
	short_4 = short_6;
	short_4 = short_1 + short_2;
	double_1 = v_SyBlobAppend(double_2,float_1,unsigned_int_1,-1 );

	double_3 = double_3 + double_3;
	float_1 = v_SyBlobInitFromBuf(double_4,int_1);

	long_1 = long_1 * long_2;
}
double v_unixFullPathname( long parameter_1,long parameter_2,int parameter_3,char parameter_4)
{
	short short_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short_3 = short_1 + short_2;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_1 = double_1 * double_1;
		unsigned_int_1 = v_SyStrlen(char_1);

		v_SyBufferFormat(char_2,short_3,char_1,long_1);

		char_2 = char_2 + char_1;
		if(1)
		{
		}
		double_2 = double_2 * double_1;
		double_1 = v_Systrcpy(char_3,int_1,double_3,char_3);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	return double_1;
}
short v_unixAccess( float parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	float_2 = float_1 * float_2;
	long_2 = long_1 * long_2;
	double_2 = double_1 + double_1;
	long_2 = long_2 * long_3;
	double_2 = double_3 * double_4;
	double_5 = double_3 * double_4;
	short_1 = short_1 + short_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		if(1)
		{
			long long_4 = 1;
			long_1 = long_4;
		}
	}
	return short_1;
}
short v_unixDelete( double parameter_1,short parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long_2 = long_1 * long_1;
	v_openDirectory(unsigned_int_1,int_1);

	int_2 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		float_1 = float_1 * float_2;
		double_1 = double_1 + double_1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			if(1)
			{
				unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
			}
		}
	}
	return short_1;
}
double v_MemBackendFree( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_3 = 1;
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long_2 = long_1 + long_2;
			}
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			char_2 = char_1 + char_2;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
	}
	return double_1;
}
int v_SyMemBackendFree( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
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
			double_1 = v_MemBackendFree(char_1);

			float_1 = float_1 + float_1;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	return int_1;
}
long v_vedis_free()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_2;
	double_1 = v_vedisExportMemBackend();

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 * char_1;
	return long_1;
	int_2 = v_SyMemBackendFree(long_1);

}
int v_SyMemcpy( double parameter_1,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	return int_1;
}
void v_SyMemcmp( long parameter_1,long parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
	short_2 = short_3;
}
unsigned int v_findInodeInfo( long parameter_1,double parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_4 = 1;
	long long_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	float_1 = float_1 * float_1;
	double_2 = double_1 * double_2;
	if(1)
	{
		int int_2 = 1;
		int_1 = v_SyMemcpy(double_1,char_1);

		int_3 = int_2 + int_2;
	}
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2 * float_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			float_1 = float_3 + float_4;
		}
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			v_SyMemcmp(long_1,long_1,float_3);

			float_4 = v_vedis_malloc(double_3);

			long_3 = long_2 + long_3;
		}
		int_3 = int_1 * int_1;
	}
	return unsigned_int_2;
	unsigned_int_1 = v_SyZero(long_4);

}
char v_fillInUnixFile( unsigned int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5,int parameter_6,int parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_4 = 1;
	long long_3 = 1;
	double double_5 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1;
	float_2 = float_1 * float_2;
	double_1 = double_1 + double_1;
	double_2 = double_2 * double_1;
	double_1 = double_3 * double_4;
	short_1 = short_1 + short_1;
	int_3 = int_1 * int_2;
	float_1 = float_1 + float_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	long_1 = long_2;
	if(1)
	{
		int_3 = int_3 + int_3;
		double_1 = v_unixEnterMutex();

		char_1 = v_unixLeaveMutex();

		float_2 = float_4 + float_3;
	}
	float_3 = float_4 + float_4;
	unsigned_int_1 = v_findInodeInfo(long_3,double_1);

	double_5 = double_1 + double_2;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			double double_6 = 1;
			double_1 = double_6 * double_1;
		}
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 * int_2;
	}
	return char_2;
}
unsigned int v_SyStrlen( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
		if(1)
		{
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_1 = 1;
			long long_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			long long_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			if(1)
			{
				char char_1 = 1;
				char_1 = char_1;
			}
			long_2 = long_1 * long_2;
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float_1 = float_1 * float_2;
			}
			float_3 = float_3 + float_4;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			}
			long_2 = long_3;
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short_1 = short_2;
			}
			double_1 = double_2;
		}
	}
	return unsigned_int_2;
}
double v_Systrcpy( char parameter_1,int parameter_2,double parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 * double_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		int int_2 = 1;
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_1 = v_SyStrlen(char_1);

			int_2 = int_1 * int_1;
		}
		int_1 = int_1 + int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		double double_3 = 1;
		char char_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		if(1)
		{
			int_3 = int_1 + int_1;
		}
		double_3 = double_2 + double_2;
		float_2 = float_1 * float_1;
		char_2 = char_2 + char_1;
		int_5 = int_4 * int_4;
		if(1)
		{
			float_2 = float_1;
		}
		float_2 = float_1 * float_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		int_4 = int_4;
		char_1 = char_1 * char_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		}
		char_3 = char_2;
		int_3 = int_3 + int_5;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
		double_2 = double_1 + double_1;
		if(1)
		{
			double_1 = double_1 + double_1;
		}
		double_5 = double_4 * double_4;
		char_3 = char_1 * char_3;
		double_5 = double_3 + double_5;
		short_1 = short_1;
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	return double_5;
}
void v_openDirectory( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double_1 = v_Systrcpy(char_1,int_1,double_1,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	double_2 = double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_2 + long_1;
		unsigned_int_2 = unsigned_int_2;
		if(1)
		{
			long long_3 = 1;
			long_2 = long_3 + long_1;
		}
	}
	unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
	double_2 = double_3 * double_2;
}
long v_findCreateFileMode( long parameter_1,int parameter_2,float parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_2 + char_1;
	}
	return long_1;
}
double v_SyMemBackendAlloc( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short_2 = short_1 + short_2;
	if(1)
	{
		long long_1 = 1;
		if(1)
		{
		}
		if(1)
		{
			short short_3 = 1;
			short_3 = short_1 * short_3;
		}
		v_MemBackendAlloc(unsigned_int_1,float_1,-1 );

		long_1 = long_1 * long_1;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_1 = float_2 * float_3;
	}
	return double_1;
}
double v_vedisExportMemBackend()
{
	double double_1 = 1;
	return double_1;
}
float v_vedis_malloc( double parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = v_SyMemBackendAlloc(char_1,int_1);

	double_1 = double_2;
	short_1 = short_2;
	double_2 = v_vedisExportMemBackend();

	double_2 = double_1 * double_3;
	float_2 = float_1 * float_1;
	return float_2;
}
char v_unixLeaveMutex()
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		double_1 = double_1;
		long_1 = long_1;
	}
	return char_1;
}
double v_unixEnterMutex()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_1 = int_2;
		short_2 = short_1 * short_1;
	}
	return double_1;
}
double v_findReusableFd( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_6 = 1;
	int int_6 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int_1 = int_1 + int_2;
	int_2 = int_3 + int_2;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char_1 = v_unixLeaveMutex();

		float_1 = float_1 + float_1;
	}
	if(1)
	{
		double_4 = double_3 * double_1;
	}
	if(1)
	{
		double_5 = double_1 + double_4;
	}
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		double_4 = double_1 + double_2;
	}
	if(1)
	{
		char_3 = char_2 + char_2;
	}
	if(1)
	{
		double_1 = double_2 * double_3;
	}
	double_5 = double_2;
	int_3 = int_2;
	long_3 = long_2 * long_3;
	short_3 = short_2 * short_3;
	int_1 = int_2 + int_3;
	if(1)
	{
		int_5 = int_1 + int_4;
	}
	short_2 = short_3 + short_2;
	double_1 = v_unixEnterMutex();

	float_2 = float_2 * float_3;
	double_2 = double_6 + double_2;
	int_3 = int_1 * int_6;
	short_1 = short_4 * short_1;
	long_2 = long_2 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_3;
	double_5 = double_7 * double_7;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	int_8 = int_6 + int_7;
	int_5 = int_6 * int_2;
	long_4 = long_3 + long_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		float_3 = float_2 * float_3;
	}
	float_1 = float_2;
	if(1)
	{
		int int_9 = 1;
		int_9 = int_8 + int_6;
	}
	long_5 = long_1;
	int_10 = int_10 * int_4;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	double_8 = double_3 + double_8;
	double_6 = double_2 + double_9;
	if(1)
	{
		double double_10 = 1;
		double_10 = double_6 * double_7;
	}
	if(1)
	{
		char_1 = char_2 * char_1;
	}
	float_1 = float_2 + float_1;
	long_5 = long_5 + long_5;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	}
	if(1)
	{
		char char_4 = 1;
		char_2 = char_2 * char_4;
	}
	unsigned_int_7 = unsigned_int_1 * unsigned_int_6;
	return double_5;
}
double v_unixOpen( char parameter_1,float parameter_2,double parameter_3,short parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	double double_5 = 1;
	double double_7 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_5 = 1;
	double double_8 = 1;
	int int_6 = 1;
	short short_3 = 1;
	char char_6 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_6 = 1;
	float_2 = float_1 + float_1;
	double_3 = double_1 + double_2;
	double_4 = double_1 * double_4;
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_4;
	v_openDirectory(unsigned_int_3,int_1);

	unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
	short_1 = short_1 * short_2;
	float_1 = float_1 + float_2;
	long_1 = v_vedis_free();

	int_1 = int_2 + int_1;
	int_1 = int_3 + int_2;
	long_1 = long_1 + long_1;
	double_2 = double_2 * double_4;
	float_4 = float_3 * float_3;
	int_1 = int_4 * int_1;
	unsigned_int_7 = unsigned_int_7 * unsigned_int_6;
	if(1)
	{
		char char_3 = 1;
		char_2 = char_1 * char_3;
	}
	if(1)
	{
		int_5 = int_3 * int_1;
		if(1)
		{
		}
	}
	unsigned_int_3 = unsigned_int_6 * unsigned_int_1;
	if(1)
	{
		short_2 = short_2;
	}
	if(1)
	{
		double double_6 = 1;
		double_7 = double_5 * double_6;
	}
	if(1)
	{
		double_5 = double_7 * double_1;
	}
	if(1)
	{
		double_7 = double_4;
	}
	char_4 = char_1 * char_4;
	if(1)
	{
		int_2 = int_5 + int_4;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
		}
		char_5 = char_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_6;
			float_5 = v_vedis_malloc(double_7);

			double_4 = double_2 + double_8;
		}
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_4 * unsigned_int_3;
		char_5 = char_1;
	}
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_7 + unsigned_int_2;
		if(1)
		{
			char_4 = v_fillInUnixFile(unsigned_int_6,int_5,int_4,unsigned_int_4,char_1,int_3,int_3);

			float_5 = float_1 + float_1;
			int_3 = int_6 + int_5;
		}
	}
	short_2 = short_2 + short_3;
	short_3 = short_2 + short_2;
	if(1)
	{
		double_3 = v_findReusableFd(char_6,int_6);

		float_5 = float_2 * float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		int int_7 = 1;
		unsigned_int_5 = unsigned_int_8 * unsigned_int_6;
		if(1)
		{
			double_8 = double_9 * double_4;
		}
		int_7 = int_4 + int_3;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
	}
	double_1 = double_9 + double_5;
	if(1)
	{
		unsigned_int_9 = v_SyZero(long_2);

		long_3 = v_findCreateFileMode(long_3,int_2,float_6);

		unsigned_int_5 = unsigned_int_4;
	}
	return double_9;
}
float v_vedisExportBuiltinVfs()
{
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double_1 = v_unixOpen(char_1,float_1,double_1,short_1);

	short_1 = v_unixAccess(float_2,float_1,int_1,int_1);

	short_1 = v_UnixMmap(char_1,short_2);

	unsigned_int_1 = v_UnixUnmap(float_3);

	char_2 = char_2 * char_3;
	return float_4;
	short_1 = v_unixDelete(double_2,short_1,int_1);

	double_1 = v_unixFullPathname(long_1,long_1,int_1,char_4);

	int_2 = v_unixSleep(short_1,int_1);

	unsigned_int_2 = v_unixCurrentTime(int_3,int_1);

}
unsigned int v_SyMemBackendInitFromOthers( long parameter_1,float parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	}
	return unsigned_int_1;
	unsigned_int_4 = v_SyZero(long_1);

}
unsigned int v_SyZero(long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 * long_1;
	if(1)
	{
		float float_1 = 1;
		if(1)
		{
		}
		float_1 = float_1 * float_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_1 * char_2;
		}
		long_1 = long_1;
		int_3 = int_1 + int_2;
		if(1)
		{
			double_1 = double_1 * double_2;
		}
		float_2 = float_2;
		double_3 = double_2 * double_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		}
		long_1 = long_1 + long_2;
		long_2 = long_1 * long_1;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1;
		}
		unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
		int_3 = int_3 + int_2;
	}
	return unsigned_int_1;
}
char v_SyMemBackendInit( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_1 = v_SyZero(long_1);

	int_1 = int_1 + int_2;
	char_2 = char_1 + char_2;
	int_4 = int_1 + int_3;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	return char_1;
}
void v_MemBackendAlloc( unsigned int parameter_1,float parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	char * vul_var;
	double_3 = double_1 * double_2;
	int_2 = int_1 * int_1;
	double_4 = double_3 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		long_2 = long_1 + long_1;
		char controller4vul_743[2];
		fgets(controller4vul_743 ,2 ,stdin);
		if( strcmp( controller4vul_743, "<") > 0)
		{
			if(uni_para == 387)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		int_2 = int_3 * int_2;
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "]") < 0)
	{
	}
	double_3 = double_5;
	unsigned_int_2 = unsigned_int_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if(remainder_check(controller_2,100,1))
	{
		int_1 = int_3 + int_3;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
}
float v_MemBackendRealloc( long parameter_1,unsigned int parameter_3,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_6 = 1;
	float_2 = float_1 + float_1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	char controller4vul_741[3];
	fgets(controller4vul_741 ,3 ,stdin);
	if( strcmp( controller4vul_741, "^m") < 0)
	{
		short short_1 = 1;
		char controller4vul_742[3];
		fgets(controller4vul_742 ,3 ,stdin);
		if( strcmp( controller4vul_742, "}#") < 0)
		{
			v_MemBackendAlloc(unsigned_int_1,float_3,uni_para);

		}
		short_1 = short_1 * short_1;
	}
	float_2 = float_1 + float_2;
	int_2 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int_3 = int_2 + int_3;
		if(1)
		{
			double double_4 = 1;
			double_3 = double_4;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
		}
		if(1)
		{
			float float_4 = 1;
			float float_5 = 1;
			float_5 = float_3 * float_4;
		}
	}
	return float_6;
}
short v_SyMemBackendRealloc( short parameter_1,int parameter_3,int uni_para)
{
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long_1 = long_1;
	char controller4vul_739[2];
	fgets(controller4vul_739 ,2 ,stdin);
	if( strcmp( controller4vul_739, "w") > 0)
	{
		double double_1 = 1;
		char controller4vul_740[2];
		fgets(controller4vul_740 ,2 ,stdin);
		if( strcmp( controller4vul_740, "+") > 0)
		{
			float_1 = v_MemBackendRealloc(long_1,unsigned_int_1,uni_para);

		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_2;
		}
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	return short_1;
}
unsigned int v_SySetPut( unsigned int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		short_2 = short_1 + short_1;
		if(1)
		{
		}
		if(1)
		{
			int_2 = int_1 + int_1;
		}
		int_3 = int_1 * int_1;
		if(1)
		{
		}
		unsigned_int_3 = unsigned_int_3;
		short_1 = v_SyMemBackendRealloc(short_2,int_2,-1 );

		short_2 = short_2 * short_2;
	}
	unsigned_int_2 = unsigned_int_4;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	return unsigned_int_5;
}
short v_vedisCoreConfigure( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_5 = 1;
	long long_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_6 = 1;
	int int_7 = 1;
	int_1 = int_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		if(1)
		{
			double_2 = double_1 + double_1;
		}
		if(1)
		{
			int_2 = int_3 * int_4;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	float_1 = float_1 + float_1;
	float_1 = float_2 + float_1;
	if(1)
	{
		long_1 = long_1 * long_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	char_2 = char_1 + char_1;
	long_1 = long_2 * long_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		int_2 = int_5 * int_6;
	}
	long_4 = long_3 + long_1;
	long_2 = long_2 + long_4;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	short_1 = short_1 + short_1;
	if(1)
	{
		int_3 = int_1 + int_1;
	}
	if(1)
	{
		double_1 = double_2 + double_1;
	}
	unsigned_int_5 = unsigned_int_3;
	double_2 = double_3 + double_4;
	unsigned_int_4 = unsigned_int_4;
	short_3 = short_2 + short_3;
	char_3 = char_4;
	int_6 = int_4 * int_3;
	if(1)
	{
		short_3 = short_2 * short_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_6;
		}
		if(1)
		{
			double double_5 = 1;
			double_2 = double_3 + double_5;
			unsigned_int_6 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			if(1)
			{
				float float_3 = 1;
				float_3 = float_1 * float_1;
			}
			unsigned_int_1 = v_SySetPut(unsigned_int_2,float_1);

			short_1 = short_3;
		}
		if(1)
		{
			double_3 = double_1 * double_4;
			if(1)
			{
				long_1 = long_3 + long_4;
			}
		}
		char_5 = v_SyMemBackendInit(char_4,char_1);

		long_5 = long_5 * long_5;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
		}
		long_2 = long_5 * long_4;
		int_1 = int_1;
	}
	unsigned_int_6 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	double_3 = double_3 * double_6;
	if(1)
	{
		double_3 = double_7 * double_2;
	}
	char_2 = char_1 * char_4;
	if(1)
	{
		int_5 = int_3 * int_5;
	}
	unsigned_int_6 = v_SyMemBackendInitFromOthers(long_6,float_2,int_7);

	long_3 = long_5;
	double_4 = double_7;
	int_1 = int_5 * int_2;
	return short_3;
}
int v_vedis_lib_config( int parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	float_2 = float_1 * float_2;
	double_1 = double_2;
	if(1)
	{
	}
	char_1 = char_2;
	double_2 = double_1 + double_1;
	short_1 = v_vedisCoreConfigure(int_1,int_1);

	short_2 = short_2 + short_1;
	return int_1;
}
float v_vedisCoreInitialize()
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int int_5 = 1;
	short short_4 = 1;
	int_1 = int_1 * int_1;
	float_1 = float_2;
	if(1)
	{
		int_2 = int_2 * int_2;
	}
	v_vedisExportDiskKvStorage();

	float_4 = float_3 * float_1;
	char_1 = char_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
				if(1)
				{
				}
				int_1 = int_1 * int_1;
				if(1)
				{
				}
			}
			int_2 = int_3 + int_1;
			if(1)
			{
			}
		}
		long_3 = long_1 * long_2;
	}
	float_5 = float_2 + float_2;
	if(1)
	{
		double double_2 = 1;
		int int_4 = 1;
		double double_3 = 1;
		float float_6 = 1;
		char char_2 = 1;
		char char_3 = 1;
		if(1)
		{
			double double_1 = 1;
			double_2 = double_1 + double_2;
			if(1)
			{
				float_4 = float_5 * float_3;
			}
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
				if(1)
				{
					long_3 = long_3 * long_1;
				}
			}
			long_1 = v_vedisExportMemKvStorage();

			short_3 = short_1 * short_2;
		}
		if(1)
		{
			int_3 = int_4 + int_3;
		}
		double_2 = double_3 * double_2;
		int_2 = int_2 + int_2;
		float_6 = float_3 + float_3;
		long_2 = v_SySetInit(short_3,int_2,unsigned_int_3);

		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		int_3 = int_1 * int_3;
		if(1)
		{
			int_3 = int_5 * int_5;
		}
		char_3 = char_2 + char_1;
		int_2 = int_4 * int_1;
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			int_5 = v_vedis_lib_config(int_2,short_4);

			unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
		}
	}
	return float_3;
	float_2 = v_vedisExportBuiltinVfs();

}
int v_vedis_open( float parameter_1,float parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double double_7 = 1;
	float float_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_2;
	}
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	double_4 = double_2 * double_3;
	int_1 = int_1 + int_1;
	if(1)
	{
		char_2 = char_1 * char_2;
	}
	long_2 = long_1 * long_2;
	double_2 = double_4 + double_3;
	int_1 = int_2 * int_3;
	char controller4vul_711[2];
	fgets(controller4vul_711 ,2 ,stdin);
	if( strcmp( controller4vul_711, "`") < 0)
	{
		char controller4vul_712[3];
		fgets(controller4vul_712 ,3 ,stdin);
		if( strcmp( controller4vul_712, "11") < 0)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_3;
			char controller4vul_713[2];
			fgets(controller4vul_713 ,2 ,stdin);
			if( strcmp( controller4vul_713, "/") > 0)
			{
				double double_6 = 1;
				float float_2 = 1;
				double_5 = v_vedisInitDatabase(unsigned_int_4,long_3,char_1,int_4,uni_para);

				double_7 = double_1 * double_6;
				float_1 = float_2;
			}
		}
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			char_4 = char_3 + char_2;
		}
	}
	unsigned_int_4 = unsigned_int_1;
	double_1 = double_7;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	long_3 = long_1 + long_1;
	float_3 = float_1 + float_1;
	short_1 = short_1 * short_2;
	return int_5;
}
int main()
{
	int uni_para =387;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 * long_1;
	int_2 = int_1 + int_2;
	int_1 = int_3;
	if(1)
	{
		int_2 = int_4 + int_3;
	}
	int_3 = int_1 * int_2;
	double_3 = double_1 * double_2;
	float_1 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int_2 = int_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			float float_4 = 1;
			float_1 = float_3 + float_4;
			double_2 = double_2 + double_1;
		}
		double_5 = double_1 * double_4;
		char controller4vul_709[3];
		fgets(controller4vul_709 ,3 ,stdin);
		if( strcmp( controller4vul_709, "I/") > 0)
		{
			double double_6 = 1;
			double_2 = double_6;
			float_3 = float_1 + float_1;
			int_4 = int_3;
			char controller4vul_710[3];
			fgets(controller4vul_710 ,3 ,stdin);
			if( strcmp( controller4vul_710, "{$") > 0)
			{
				long long_3 = 1;
				int_1 = v_vedis_open(float_5,float_2,uni_para);

				long_2 = long_3 + long_3;
			}
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_1 = char_1 * char_2;
			}
		}
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	return int_2;
}

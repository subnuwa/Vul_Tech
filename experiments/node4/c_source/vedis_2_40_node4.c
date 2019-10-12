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

double v_vedisRemoveCommand( unsigned int parameter_1,unsigned int parameter_2);
int v_vedis_delete_command( float parameter_1,long parameter_2);
void v_vedisDeleteBuiltinCommands( int parameter_1);
int v_vedis_close( long parameter_1);
char v_vedisObjContainerDestroy( unsigned int parameter_1,char parameter_2);
void v_vedisReleaseContext();
long v_vedisInitContext( unsigned int parameter_1,int parameter_2,double parameter_3);
double v_vedisExec( unsigned int parameter_1);
short v_SyLexRelease( int parameter_1);
unsigned int v_SyLexTokenizeInput( char parameter_1,int parameter_2,char parameter_3,char parameter_5,short parameter_6);
short v_vedisTokenizeInput( long parameter_1,short parameter_2);
unsigned int v_SyLexInit( short parameter_1,int parameter_2,short parameter_3);
char v_vedisTokenize( unsigned int parameter_1,int parameter_2,unsigned int parameter_3);
char v_vedisProcessInput( double parameter_1,unsigned int parameter_2,char parameter_3);
int v_vedis_exec( int parameter_1,unsigned int parameter_2,int parameter_3);
int v_isBlank( unsigned int parameter_1,char parameter_2);
void v_vedis_exit();
char v_VmJsonArrayEncode( char parameter_1);
int v_vedis_value_is_string();
double v_SyStrIsNumeric( float parameter_1,unsigned int parameter_2,unsigned int parameter_3,long parameter_4);
short v_vedisMemObjIsNumeric( short parameter_1);
int v_vedis_value_is_numeric( double parameter_1);
float v_MemObjBooleanValue( float parameter_1);
float v_vedisMemObjToBool();
int v_vedis_value_to_bool( int parameter_1);
int v_vedis_value_is_bool( double parameter_1);
void v_VmJsonEncode( unsigned int parameter_1,short parameter_2);
double v_vedisJsonSerialize( double parameter_1,float parameter_2);
short v_MemObjStringValue( char parameter_1,short parameter_2);
float v_vedisMemObjToString();
float v_vedis_value_to_string( short parameter_1,int parameter_2);
short v_array_render( char parameter_1);
char v_vedisHashmapWalk( float parameter_1,short parameter_2);
int v_vedis_array_walk( int parameter_1,short parameter_2);
int v_vedis_value_is_array( int parameter_1);
int v_vedis_value_is_null( float parameter_1);
long v_command_result_render( double parameter_1);
char v_vedisObjectValueDestroy( char parameter_1,int parameter_2);
unsigned int v_vedisHashmapRef( unsigned int parameter_1);
float v_vedisMemObjStore( char parameter_1,char parameter_2);
char v_SyStrToReal( char parameter_1,int parameter_2,float parameter_4);
short v_MemObjRealValue( double parameter_1);
int v_vedisMemObjToReal( unsigned int parameter_1);
int v_vedisMemObjRelease( long parameter_1);
short v_vedisHashmapRelease( char parameter_1);
unsigned int v_vedisHashmapUnref( int parameter_1);
float v_vedisHashmapCount( short parameter_1);
unsigned int v_SyStrToInt64( double parameter_1,float parameter_2,unsigned int parameter_4);
void v_SyOctalStrToInt64( double parameter_1,long parameter_2,int parameter_4);
double v_SyBinaryStrToInt64( int parameter_1,double parameter_2,short parameter_4);
char v_SyHexToint();
short v_SyHexStrToInt64( short parameter_1,unsigned int parameter_2,char parameter_4);
float v_vedisTokenValueToInt64( int parameter_1);
float v_MemObjStringToInt( unsigned int parameter_1);
int v_MemObjRealToInt( float parameter_1);
char v_MemObjIntValue( unsigned int parameter_1);
double v_vedisMemObjToInteger( int parameter_1);
int v_vedisMemObjInitFromString( char parameter_1,short parameter_2,int parameter_3);
void v_vedisNewObjectValue( int parameter_1,float parameter_2);
float v_SyBlobNullAppend( char parameter_1);
unsigned int v_vedisPagerSetCachesize( double parameter_1,int parameter_2);
double v_vedisConfigure( long parameter_1,int parameter_2,long parameter_3);
int v_vedis_config( float parameter_1,int parameter_2,char parameter_3);
void v_SySetRelease();
char v_vedisPagerClose( char parameter_1);
long v_pager_reset_state( float parameter_1,int parameter_2);
short v_vedisPagerRollback( double parameter_1,int parameter_2);
char v_vedisBitvecDestroy( int parameter_1);
double v_pager_commit_phase2( double parameter_1);
char v_pager_write_dirty_pages( short parameter_1,char parameter_2);
long v_page_merge_dirty( float parameter_1,long parameter_2);
void v_pager_get_dirty_pages();
unsigned int v_pager_commit_phase1( short parameter_1);
char v_vedisPagerCommit( long parameter_1);
long v_vedisEngineRelease( char parameter_1);
long v_vedisCoreShutdown();
int v_vedis_lib_shutdown();
unsigned int v_Fatal();
char v_SyBlobAppendBig32( double parameter_1,long parameter_2);
short v_SyBlobAppendBig16( int parameter_1,long parameter_2);
void v_SyBlobFormat( float parameter_1,long parameter_2,unsigned int parameter_3);
char v_vedisPagerGetKvEngine( long parameter_1);
int v_vedisTableSerialize( int parameter_1);
double v_vedisPagerisMemStore( long parameter_1);
double v_vedisOnCommit();
unsigned int v_vedisPagerSetCommitCallback( short parameter_1,long parameter_2);
short v_SySetReset( char parameter_1);
unsigned int v_SyBinHash( float parameter_1,unsigned int parameter_2);
char v_vedisFetchCommand( double parameter_1,long parameter_2);
int v_vedisInstallCommand( short parameter_1,int parameter_2,float parameter_3);
int v_vedis_register_command( float parameter_1,short parameter_2,double parameter_3,int parameter_4,long parameter_5);
void v_vedisRegisterBuiltinCommands( int parameter_1);
int v_vedisMemObjInit( short parameter_1,unsigned int parameter_2);
float v_vedisInitCursor( short parameter_1,int parameter_2);
unsigned int v_vedisKvIoErr( double parameter_1,float parameter_2);
short v_vedisKvIoPageReload( long parameter_1,float parameter_2);
char v_vedisKvIoPageUnpin( float parameter_1,short parameter_2);
double v_vedisKvIoTempPage( char parameter_1);
char v_vedisKvIoReadOnly( char parameter_1);
float v_vedisKvIoPageSize( unsigned int parameter_1);
void v_page_unref( double parameter_1);
char v_vedisKvIoPageUnRef( char parameter_1);
double v_vedisKvIopage_ref( double parameter_1);
double v_vedisKvIoPageDontMakeHot( int parameter_1);
double v_vedisKvIoPageDontJournal( double parameter_1);
void v_vedisPagerDontWrite( char parameter_1);
float v_vedisKvIoPageDontWrite( double parameter_1);
int v_vedisBitvecSet( short parameter_1,unsigned int parameter_2);
void v_WriteInt64( long parameter_1,double parameter_2,char parameter_3);
short v_vedisBitvecTest( int parameter_1,unsigned int parameter_2);
void v_page_write( unsigned int parameter_1,double parameter_2);
long v_pager_release_page( char parameter_1,char parameter_2);
short v_pager_unlink_page( int parameter_1,char parameter_2);
unsigned int v_pager_write_hot_dirty_pages( short parameter_1,int parameter_2);
short v_page_merge_hot( int parameter_1,long parameter_2);
float v_pager_get_hot_pages();
double v_WriteInt32( double parameter_1,float parameter_2,short parameter_3);
void v_vedisFinalizeJournal( unsigned int parameter_1,int parameter_2,int parameter_3);
unsigned int v_pager_dirty_commit( long parameter_1);
long v_pager_write_journal_header( unsigned int parameter_1,int parameter_2);
void v_vedisOpenJournal( unsigned int parameter_1);
void v_SyTimeFormatToDos( short parameter_1,double parameter_2);
float v_pager_write_db_header( long parameter_1);
float v_pager_page_to_dirty_list( double parameter_1,short parameter_2);
double v_pager_create_header( int parameter_1);
short v_vedisBitvecCreate( unsigned int parameter_1,short parameter_2);
char v_vedisPagerBegin( long parameter_1,int uni_para);
long v_vedisPageWrite( char parameter_1,int uni_para);
float v_vedisKvIopageWrite( float parameter_1,int uni_para);
long v_vedisKvIoNewPage( long parameter_1,long parameter_2);
char v_vedisKvIoPageLookup( long parameter_1,long parameter_2,double parameter_3);
double v_page_ref( unsigned int parameter_1);
void v_pager_link_page( double parameter_1,int parameter_2);
int v_pager_get_page_contents( int parameter_1,int parameter_2,int parameter_3);
float v_pager_alloc_page( double parameter_1,double parameter_2);
int v_vedisGetPageSize();
int v_vedisOsSectorSize( unsigned int parameter_1);
char v_GetSectorSize();
float v_SyDosTimeFormat( unsigned int parameter_1,unsigned int parameter_2);
float v_pager_extract_header( double parameter_1,float parameter_2,short parameter_3);
short v_pager_read_db_header( float parameter_1);
short v_vedisOsCloseFree( char parameter_1,float parameter_2);
unsigned int v_pager_fetch_page( unsigned int parameter_1,long parameter_2);
double v_pager_fill_page( int parameter_1,char parameter_2);
char v_vedisOsWrite( double parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4);
unsigned int v_pager_cksum( int parameter_1,unsigned int parameter_2);
long v_pager_play_back_one_page( float parameter_1,char parameter_2,short parameter_3);
long v_vedisOsTruncate( unsigned int parameter_1,long parameter_2);
float v_ReadInt64( unsigned int parameter_1,int parameter_2,int parameter_3);
short v_ReadInt32( char parameter_1,short parameter_2,double parameter_3);
double v_vedisOsRead( int parameter_1,unsigned int parameter_3,long parameter_4);
unsigned int v_pager_read_journal_header( long parameter_1,unsigned int parameter_2,float parameter_3);
char v_pager_playback( long parameter_1);
short v_vedisOsSync( double parameter_1,int parameter_2);
long v_vedisOsUnlock( char parameter_1,int parameter_2);
short v_pager_unlock_db( long parameter_1,int parameter_2);
int v_vedisOsDelete( float parameter_1,float parameter_2,int parameter_3);
short v_vedisOsFileSize( double parameter_1,unsigned int parameter_2);
short v_vedisOsCheckReservedLock( long parameter_1,int parameter_2);
double v_vedisOsAccess( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4);
float v_pager_has_hot_journal( int parameter_1,int parameter_2,int uni_para);
int v_pager_journal_rollback( int parameter_1,int parameter_2,int uni_para);
long v_vedisOsLock( double parameter_1,int parameter_2);
int v_pager_lock_db( unsigned int parameter_1,int parameter_2,int uni_para);
double v_pager_wait_on_lock( short parameter_1,int parameter_2);
double v_SyBlobFormatAp( char parameter_1,long parameter_2,int parameter_3);
short v_vedisGenErrorFormat( unsigned int parameter_1,float parameter_2,float parameter_3);
void v_vedisOsOpen( int parameter_1,float parameter_2,char parameter_3,char parameter_4,short parameter_5);
unsigned int v_pager_shared_lock( int parameter_1,int uni_para);
char v_vedisPagerAcquire( float parameter_1,int parameter_2,char parameter_3,int parameter_4,int parameter_5);
int v_vedisKvIoPageGet( float parameter_1,long parameter_2,short parameter_3);
unsigned int v_pager_kv_io_init( short parameter_1,short parameter_2,char parameter_3,int uni_para);
double v_vedisGenOutofMem( double parameter_1);
char v_vedisReleaseCursor( short parameter_1,long parameter_2);
float v_pager_release_kv_engine( float parameter_1);
unsigned int v_vedisPagerRegisterKvEngine( short parameter_1,unsigned int parameter_2,int uni_para);
int v_randomByte( float parameter_1);
unsigned int v_SyRandomness( int parameter_1,long parameter_3);
char v_SyOSUtilRandomSeed(short parameter_2);
double v_SyRandomnessInit( long parameter_1,short parameter_2);
unsigned int v_vedisGenError( int parameter_1,short parameter_2,int uni_para);
short v_vedisFindKVStore( char parameter_1,char parameter_2);
int v_SyStrnicmp( double parameter_1,double parameter_2,float parameter_3);
int v_vedisInMemory();
long v_vedisPagerOpen( int parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,int uni_para);
short v_vedisSanityzeFlag( long parameter_1);
short v_vedisInitDatabase( char parameter_1,short parameter_2,double parameter_3,float parameter_4,int uni_para);
char v_lhCursorReset( unsigned int parameter_1);
int v_lhCursorData( unsigned int parameter_1,unsigned int parameter_2,float parameter_3);
char v_lhCursorDataLength( char parameter_1,short parameter_2);
unsigned int v_lhCursorKey( char parameter_1,char parameter_2,int parameter_3);
char v_lhCursorKeyLength( int parameter_1,int parameter_2);
float v_lhRecordRemove( short parameter_1);
long v_lhCursorDelete( short parameter_1);
void v_lhCursorPrev( unsigned int parameter_1);
char v_lhCursorNext( unsigned int parameter_1);
void v_lhCursorValid( int parameter_1);
unsigned int v_lhCursorPrevPage();
double v_lhCursorLast( int parameter_1);
char v_lhCursorNextPage( short parameter_1);
float v_lhCursorFirst( unsigned int parameter_1);
short v_lhRecordLookup( unsigned int parameter_1,short parameter_2,long parameter_3,float parameter_4);
double v_lhCursorSeek( long parameter_1,float parameter_2,int parameter_3,int parameter_4);
double v_lhInitCursor( double parameter_1);
unsigned int v_lhash_kv_append( long parameter_1,double parameter_2,int parameter_3,char parameter_4,short parameter_5);
short v_lhRestorePage( int parameter_1,long parameter_2);
double v_lhRecordOverwrite( short parameter_1,int parameter_2,unsigned int parameter_3);
double v_lhMoveLocalCell( double parameter_1,long parameter_2,long parameter_3,double parameter_4);
double v_lhRecordAppend( double parameter_1,int parameter_2,float parameter_3);
float v_lhFindSibeling( char parameter_1);
long v_lhUnlinkCell( float parameter_1);
long v_lhConsumeCellData( int parameter_1,unsigned int parameter_2,int parameter_3);
char v_SyBlobReset( int parameter_1);
unsigned int v_SyBlobDup( int parameter_1,char parameter_2);
unsigned int v_lhTransferCell( char parameter_1,double parameter_2);
int v_lhPageSplit( long parameter_1,double parameter_2,char parameter_3,short parameter_4);
long v_lhSplit( char parameter_1,int parameter_2);
long v_lhRecordInstall( short parameter_1,long parameter_2,int parameter_3,char parameter_4,float parameter_5,char parameter_6);
char v_lhKeyCmp( int parameter_1,int parameter_2);
unsigned int v_lhFindCell( unsigned int parameter_1,char parameter_2,char parameter_3,int parameter_4);
short v_vedisDataConsumer( int parameter_1,long parameter_2);
void v_lhConsumeCellkey( long parameter_1,short parameter_2,char parameter_3,int parameter_6);
long v_lhParseOneCell( unsigned int parameter_1,float parameter_2,int parameter_3,int parameter_4);
void v_lhPageFreeSpace( char parameter_1);
int v_lhLoadCells( float parameter_1);
char v_lhParsePageHeader();
int v_lhLoadPage( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,long parameter_4,int parameter_5);
float v_lhMapWriteRecord( unsigned int parameter_1,unsigned int parameter_2,long parameter_3);
short v_lhCellWriteHeader( float parameter_1);
char v_lhCellWriteLocalPayload( long parameter_1,float parameter_2,unsigned int parameter_3,unsigned int parameter_4,char parameter_5);
long v_lhCellDiscard( char parameter_1);
float v_lhCellWriteOvflPayload( short parameter_1,int parameter_2,int parameter_3,double parameter_4);
float v_lhInstallCell( float parameter_1);
long v_SyBlobInit( unsigned int parameter_1,short parameter_2);
int v_lhNewCell( double parameter_1,long parameter_2);
unsigned int v_lhRestoreSpace( long parameter_1,char parameter_2,int parameter_3);
float v_lhFindSlavePage( int parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4);
double v_lhSlaveStore( double parameter_1,int parameter_2,double parameter_3,int parameter_4,long parameter_5,unsigned int parameter_6);
void v_lhPageDefragment( float parameter_1);
long v_SyBigEndianUnpack16( short parameter_1,unsigned int parameter_2);
double v_lhAllocateSpace( float parameter_1,int parameter_2,unsigned int parameter_3);
double v_lhStoreCell( float parameter_1,double parameter_2,short parameter_3,long parameter_4,float parameter_5,double parameter_6,int parameter_7);
double v_SyBigEndianPack16( long parameter_1,char parameter_2);
long v_lhSetEmptyPage( long parameter_1);
float v_lhNewPage( float parameter_1,long parameter_2,short parameter_3);
short v_lhAcquirePage( double parameter_1,unsigned int parameter_2);
double v_lhMapFindBucket( int parameter_1,float parameter_2);
double v_lh_record_insert( unsigned int parameter_1,float parameter_2,char parameter_3,char parameter_4,short parameter_5,int parameter_6);
char v_lhash_kv_replace( int parameter_1,float parameter_2,int parameter_3,int parameter_4,double parameter_5);
unsigned int v_MemPoolBucketAlloc( unsigned int parameter_1,short parameter_2);
double v_MemBackendPoolAlloc( double parameter_1,char parameter_2);
float v_SyMemBackendPoolAlloc( char parameter_1,char parameter_2);
void v_lhMapInstallBucket( short parameter_1,unsigned int parameter_2,unsigned int parameter_3);
char v_lhMapLoadPage( int parameter_1,unsigned int parameter_2,unsigned int parameter_3);
unsigned int v_SyBigEndianUnpack64( int parameter_1,long parameter_2);
float v_SyBigEndianUnpack32( double parameter_1,int parameter_2);
long v_lhash_read_header( short parameter_1,unsigned int parameter_2);
double v_SyBigEndianPack64( long parameter_1,long parameter_2);
void v_SyBigEndianPack32( long parameter_1,unsigned int parameter_2);
short v_lhash_write_header( int parameter_1,char parameter_2);
void v_lhash_kv_open( float parameter_1,double parameter_2);
long v_lhash_kv_config( unsigned int parameter_1,int parameter_2,int parameter_3);
void v_lhash_kv_release( float parameter_1);
long v_MemBackendPoolFree( char parameter_1);
short v_SyMemBackendPoolFree( double parameter_1);
long v_SyBlobRelease( long parameter_1);
char v_lhash_page_release();
int v_lhash_bin_hash( long parameter_1,char parameter_2);
char v_lhash_kv_init( short parameter_1,int parameter_2);
char v_vedisExportDiskKvStorage();
void v_MemHashCursorReset( unsigned int parameter_1);
char v_MemHashCursorData( int parameter_1,unsigned int parameter_2,short parameter_3);
double v_MemHashCursorDataLength( float parameter_1,float parameter_2);
int v_MemHashCursorKey( int parameter_1,int parameter_2,unsigned int parameter_3);
int v_MemHashCursorKeyLength( unsigned int parameter_1,int parameter_2);
short v_MemHashUnlinkRecord( long parameter_1,unsigned int parameter_2);
double v_MemHashCursorDelete();
unsigned int v_MemHashCursorPrev( int parameter_1);
long v_MemHashCursorNext( char parameter_1);
double v_MemHashCursorValid( unsigned int parameter_1);
float v_MemHashCursorLast( char parameter_1);
long v_MemHashCursorFirst( unsigned int parameter_1);
int v_MemHashCursorSeek( char parameter_1,char parameter_2,int parameter_3,int parameter_4);
int v_MemHashInitCursor( char parameter_1);
short v_MemHashAppend( int parameter_1,float parameter_2,int parameter_3,int parameter_4,unsigned int parameter_5);
long v_MemHashGrowTable( double parameter_1);
char v_MemHashLinkRecord( int parameter_1,char parameter_2);
unsigned int v_MemHashNewRecord( unsigned int parameter_1,float parameter_2,int parameter_3,int parameter_4,unsigned int parameter_5,short parameter_6);
short v_MemHashGetEntry( double parameter_1,unsigned int parameter_2,int parameter_3);
long v_MemHashReplace( long parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,char parameter_5);
void v_MemHashConfigure( float parameter_1,int parameter_2,short parameter_3);
unsigned int v_MemBackendRelease( short parameter_1);
short v_SyMemBackendRelease();
short v_MemHashRelease( short parameter_1);
void v_MemHashFunc( float parameter_1,char parameter_2);
void v_SyMemBackendInitFromParent( char parameter_1,int parameter_2);
void v_MemHashInit( short parameter_1,int parameter_2);
long v_vedisExportMemKvStorage();
short v_SySetInit( long parameter_1,float parameter_2,char parameter_3);
int v_UnixUnmap(int parameter_2);
float v_UnixMmap( short parameter_1,unsigned int parameter_3);
char v_unixCurrentTime( long parameter_1,int parameter_2);
float v_unixSleep( short parameter_1,int parameter_2);
float v_SyMemBackendDup( double parameter_1,double parameter_2,float parameter_3,int uni_para);
unsigned int v_BlobPrepareGrow( unsigned int parameter_1,float parameter_2,int uni_para);
unsigned int v_SyBlobAppend( int parameter_1,float parameter_2,char parameter_3,int uni_para);
int v_FormatConsumer( unsigned int parameter_1,float parameter_2);
double v_getdigit( int parameter_1,int parameter_2);
float v_InternFormat( int parameter_1,double parameter_3,double parameter_4);
double v_FormatMount( unsigned int parameter_1,char parameter_3,float parameter_5,int parameter_6,unsigned int parameter_7);
char v_SyBlobInitFromBuf( unsigned int parameter_1,int parameter_3);
void v_SyBufferFormat( char parameter_1,char parameter_2,unsigned int parameter_3,double parameter_4);
unsigned int v_unixFullPathname( float parameter_1,unsigned int parameter_2,int parameter_3,char parameter_4);
unsigned int v_unixAccess( double parameter_1,int parameter_2,int parameter_3,int parameter_4);
int v_unixDelete( float parameter_1,double parameter_2,int parameter_3);
char v_MemBackendFree( unsigned int parameter_1);
float v_SyMemBackendFree( double parameter_1);
unsigned int v_vedis_free();
double v_SyMemcpy( unsigned int parameter_1,int parameter_3);
int v_SyMemcmp( long parameter_1,char parameter_2,char parameter_3);
double v_findInodeInfo( double parameter_1,unsigned int parameter_2);
int v_fillInUnixFile( int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,long parameter_5,int parameter_6,int parameter_7);
double v_SyStrlen( float parameter_1);
void v_Systrcpy( char parameter_1,double parameter_2,long parameter_3,unsigned int parameter_4);
float v_openDirectory( long parameter_1,int parameter_2);
long v_findCreateFileMode( double parameter_1,int parameter_2,float parameter_3);
void v_SyMemBackendAlloc( long parameter_1,float parameter_2,int uni_para);
unsigned int v_vedisExportMemBackend();
unsigned int v_vedis_malloc( int parameter_1);
short v_unixLeaveMutex();
void v_unixEnterMutex();
float v_findReusableFd( double parameter_1,int parameter_2);
short v_unixOpen( short parameter_1,double parameter_2,short parameter_3,float parameter_4);
char v_vedisExportBuiltinVfs();
unsigned int v_SyMemBackendInitFromOthers( char parameter_1,unsigned int parameter_2,int parameter_3);
short v_SyZero(short parameter_2);
long v_SyMemBackendInit( short parameter_1,float parameter_2);
long v_MemBackendAlloc( short parameter_1,int parameter_2,int uni_para);
long v_MemBackendRealloc( float parameter_1,long parameter_3);
double v_SyMemBackendRealloc( long parameter_1,unsigned int parameter_3);
short v_SySetPut( short parameter_1,int parameter_2);
double v_vedisCoreConfigure( float parameter_1,long parameter_2);
int v_vedis_lib_config( int parameter_1,char parameter_2);
unsigned int v_vedisCoreInitialize();
int v_vedis_open( long parameter_1,double parameter_2,int uni_para);
double v_vedisRemoveCommand( unsigned int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	long long_4 = 1;
	double double_2 = 1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1;
	char_1 = v_vedisFetchCommand(double_1,long_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_2 = long_2 * long_3;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_1 = char_1 + char_1;
		double_1 = v_SyStrlen(float_1);

		int_2 = int_1 * int_1;
		char_3 = char_2 * char_2;
	}
	float_2 = float_1 * float_1;
	long_4 = long_1 + long_4;
	int_1 = int_2;
	return double_2;
	float_2 = v_SyMemBackendFree(double_2);

}
int v_vedis_delete_command( float parameter_1,long parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	return int_1;
	double_1 = v_vedisRemoveCommand(unsigned_int_2,unsigned_int_3);

}
void v_vedisDeleteBuiltinCommands( int parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short_1 = short_1;
	float_2 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	int_1 = v_vedis_delete_command(float_1,long_1);

}
int v_vedis_close( long parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long_1 = v_vedisEngineRelease(char_1);

	int_1 = int_1;
	if(1)
	{
	}
	if(1)
	{
		v_vedisDeleteBuiltinCommands(int_1);

		int_1 = int_1 + int_2;
	}
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	double_4 = double_3 * double_1;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_2 * long_1;
	}
	if(1)
	{
		float float_1 = 1;
		short_1 = v_SyMemBackendPoolFree(double_1);

		float_1 = float_1 * float_1;
	}
	int_3 = int_1;
	short_1 = short_2 + short_1;
	if(1)
	{
		int_2 = int_2 + int_2;
	}
	char_3 = char_2 * char_1;
	return int_2;
}
char v_vedisObjContainerDestroy( unsigned int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_1;
	char_2 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_2 = long_1 + long_2;
		long_2 = long_3;
	}
	v_SySetRelease();

	float_1 = float_1;
	return char_2;
	char_1 = v_vedisObjectValueDestroy(char_1,int_1);

}
void v_vedisReleaseContext()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	long long_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short_1 = v_SyMemBackendPoolFree(double_1);

		long_1 = long_1 * long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_2 = 1;
			int int_3 = 1;
			char char_1 = 1;
			if(1)
			{
				int int_1 = 1;
				long_2 = v_SyBlobRelease(long_3);

				int_1 = int_2;
			}
			int_2 = int_3 + int_2;
			char_1 = char_1 * char_1;
		}
		double_1 = double_2 + double_3;
	}
	double_1 = double_4 * double_4;
	int_4 = v_vedisMemObjRelease(long_4);

	v_SySetRelease();

}
long v_vedisInitContext( unsigned int parameter_1,int parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	int_2 = int_1 + int_1;
	short_1 = v_SySetInit(long_1,float_1,char_1);

	float_4 = float_2 * float_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = v_vedisMemObjRelease(long_1);

	double_3 = double_1 * double_2;
	long_2 = v_SyBlobInit(unsigned_int_3,short_1);

	int_3 = int_4;
	char_2 = char_1 + char_1;
	return long_2;
}
double v_vedisExec( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	float float_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	short short_3 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	float_2 = float_1 + float_2;
	int_2 = int_1 + int_2;
	unsigned_int_1 = v_vedisGenError(int_1,short_1,-1 );

	float_3 = float_2 * float_3;
	char_1 = v_vedisFetchCommand(double_1,long_1);

	v_vedisNewObjectValue(int_1,float_1);

	long_1 = v_vedisInitContext(unsigned_int_1,int_3,double_2);

	int_3 = int_1 + int_2;
	double_2 = double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float float_4 = 1;
			char_2 = v_vedisObjContainerDestroy(unsigned_int_1,char_2);

			float_2 = float_2 + float_3;
			float_5 = float_4 * float_1;
		}
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "P") == 0)
	{
		long_1 = long_1;
	}
	long_1 = long_2 * long_3;
	double_2 = double_4;
	int_1 = int_4 + int_4;
	if(1)
	{
		float_3 = float_1 * float_2;
	}
	char_1 = char_2 + char_2;
	if(1)
	{
		short_2 = v_SySetPut(short_1,int_3);

		int_3 = int_3 + int_3;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		char_2 = char_3;
	}
	short_3 = v_vedisGenErrorFormat(unsigned_int_2,float_3,float_6);

	unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
	if(1)
	{
		double_4 = double_4 * double_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			int_4 = int_1 + int_3;
		}
	}
	short_4 = v_SySetInit(long_2,float_5,char_3);

	v_vedisReleaseContext();

	unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	return double_4;
}
short v_SyLexRelease( int parameter_1)
{
	int int_1 = 1;
	short short_3 = 1;
	int_1 = int_1 + int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "w") > 0)
	{
		if(1)
		{
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_2;
		}
	}
	return short_3;
}
unsigned int v_SyLexTokenizeInput( char parameter_1,int parameter_2,char parameter_3,char parameter_5,short parameter_6)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int int_2 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		if(1)
		{
		}
		int_1 = v_SyMemcmp(long_1,char_1,char_1);

		short_1 = short_1 * short_2;
	}
	double_3 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			short_2 = short_3 + short_3;
		}
		short_3 = v_SySetPut(short_3,int_2);

		double_1 = double_2 * double_3;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
		if(1)
		{
			if(1)
			{
			}
			int_2 = int_2 * int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			long_1 = long_1 * long_1;
			if(1)
			{
				double_1 = double_3 * double_3;
			}
		}
		if(1)
		{
			long long_2 = 1;
			long_1 = long_1 + long_2;
		}
	}
	if(1)
	{
		double double_4 = 1;
		double_2 = double_3 + double_3;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned_int_6 = unsigned_int_7;
		}
		double_4 = double_3 * double_4;
	}
	return unsigned_int_1;
}
short v_vedisTokenizeInput( long parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		float_1 = float_1 * float_1;
		if(1)
		{
			long long_2 = 1;
			unsigned int unsigned_int_4 = 1;
			long_2 = long_1 + long_2;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			double_1 = double_1 + double_2;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_5;
		}
		short_3 = short_1 * short_2;
	}
	unsigned_int_6 = unsigned_int_5;
	if(1)
	{
		float float_2 = 1;
		unsigned_int_5 = unsigned_int_6;
		float_1 = float_2 * float_3;
	}
	float_3 = float_3 * float_4;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
		short_1 = short_4 + short_3;
	}
	long_4 = long_3 * long_1;
	if(1)
	{
		double double_3 = 1;
		short_1 = short_3;
		double_1 = double_2 * double_3;
	}
	long_1 = long_1 + long_5;
	return short_4;
}
unsigned int v_SyLexInit( short parameter_1,int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
		short short_1 = 1;
		if(1)
		{
		}
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		if(1)
		{
		}
		long_2 = long_1 + long_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_2 * long_3;
	short_3 = short_2;
	double_2 = double_2;
	double_3 = double_1 + double_2;
	short_3 = short_3 * short_2;
	double_1 = double_1 * double_3;
	return unsigned_int_1;
}
char v_vedisTokenize( unsigned int parameter_1,int parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = v_vedisTokenizeInput(long_1,short_1);

	short_2 = v_SyLexRelease(int_1);

	float_2 = float_1 * float_2;
	int_2 = int_1 * int_2;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	unsigned_int_1 = v_SyLexTokenizeInput(char_2,int_3,char_4,char_1,short_3);

	int_2 = int_4;
	unsigned_int_1 = v_SyLexInit(short_1,int_3,short_4);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	return char_1;
}
char v_vedisProcessInput( double parameter_1,unsigned int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	double_2 = double_1 * double_1;
	short_1 = short_1 * short_1;
	int_1 = int_1;
	double_2 = v_vedisExec(unsigned_int_1);

	long_2 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = v_SySetInit(long_2,float_1,char_1);

	double_3 = double_1 * double_1;
	long_2 = long_3 * long_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		double double_4 = 1;
		double_3 = double_4 * double_3;
	}
	float_2 = float_1 * float_2;
	int_1 = int_1 * int_2;
	v_SySetRelease();

	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4;
		char_2 = v_vedisTokenize(unsigned_int_4,int_2,unsigned_int_1);

		char_2 = char_3;
	}
	long_2 = long_1;
	float_3 = float_2 * float_2;
	if(1)
	{
		long long_4 = 1;
		double double_5 = 1;
		long_4 = long_2 + long_2;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		double_5 = double_1 + double_3;
	}
	float_1 = float_3 + float_3;
	return char_3;
}
int v_vedis_exec( int parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double_1 = v_SyStrlen(float_1);

	long_1 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	if(1)
	{
	}
	double_1 = double_2 * double_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_1 = v_vedisProcessInput(double_1,unsigned_int_1,char_2);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	return int_3;
}
int v_isBlank( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		int_2 = int_2 + int_1;
	}
	float_2 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return int_2;
}
void v_vedis_exit()
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int_1 = v_vedis_lib_shutdown();

	float_3 = float_1 * float_2;
}
char v_VmJsonArrayEncode( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_2 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
		short_3 = short_1 + short_2;
	}
	short_3 = short_2;
	unsigned_int_1 = v_SyBlobAppend(int_1,float_1,char_1,-1 );

	int_3 = int_1 + int_2;
	char_2 = char_3 * char_1;
	v_VmJsonEncode(unsigned_int_1,short_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	return char_2;
}
int v_vedis_value_is_string()
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_2;
	return int_1;
}
double v_SyStrIsNumeric( float parameter_1,unsigned int parameter_2,unsigned int parameter_3,long parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short_3 = short_1 * short_2;
	float_1 = float_1 * float_1;
	char_1 = char_1 * char_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int_2 = int_1 * int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		}
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_6;
	}
	return double_1;
}
short v_vedisMemObjIsNumeric( short parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_5 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long_1 = long_2;
		long_4 = long_2 * long_3;
		int_1 = int_1 * int_1;
		if(1)
		{
		}
		double_3 = double_1 + double_2;
		float_1 = float_2;
	}
	return short_1;
	double_1 = v_SyStrIsNumeric(float_3,unsigned_int_1,unsigned_int_2,long_5);

}
int v_vedis_value_is_numeric( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_1;
	short_1 = v_vedisMemObjIsNumeric(short_1);

	unsigned_int_1 = unsigned_int_2;
	return int_3;
}
float v_MemObjBooleanValue( float parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_4 = 1;
	if(1)
	{
	}
	int_1 = v_SyStrnicmp(double_1,double_1,float_1);

	short_1 = short_1 * short_2;
	float_2 = float_3;
	float_1 = v_vedisHashmapCount(short_3);

	unsigned_int_1 = v_vedisHashmapUnref(int_1);

	double_1 = double_1 + double_1;
	int_2 = int_2 * int_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	return float_4;
}
float v_vedisMemObjToBool()
{
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		int_1 = int_2;
		float_1 = v_MemObjBooleanValue(float_1);

		long_1 = v_SyBlobRelease(long_1);

		int_2 = int_1;
	}
	return float_2;
}
int v_vedis_value_to_bool( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	float float_1 = 1;
	int_3 = int_1 + int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	return int_4;
	float_1 = v_vedisMemObjToBool();

}
int v_vedis_value_is_bool( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_2;
	return int_1;
}
void v_VmJsonEncode( unsigned int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_1 = 1;
	double double_4 = 1;
	int int_8 = 1;
	float float_2 = 1;
	int int_9 = 1;
	long long_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	int int_10 = 1;
	char char_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = v_vedis_array_walk(int_2,short_1);

	double_1 = double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		int_1 = v_vedis_value_is_bool(double_1);

		double_1 = double_2 + double_1;
		double_3 = double_1 * double_1;
		int_2 = v_vedis_value_is_numeric(double_3);

		double_2 = double_1 + double_2;
	}
	if(1)
	{
		short short_2 = 1;
		int_1 = int_2 * int_1;
		short_2 = short_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		int int_7 = 1;
		unsigned int unsigned_int_3 = 1;
		short_1 = short_1;
		int_3 = int_3;
		int_6 = int_4 + int_5;
		int_6 = int_5 * int_7;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_5 = 1;
			long long_1 = 1;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				float_1 = v_vedis_value_to_string(short_1,int_1);

				unsigned_int_2 = unsigned_int_4;
			}
			int_1 = v_vedis_value_to_bool(int_3);

			double_5 = double_4 + double_3;
			int_8 = v_vedis_value_is_null(float_2);

			int_9 = v_vedis_value_is_string();

			long_1 = long_1 * long_2;
			if(1)
			{
				float_2 = float_1 * float_1;
			}
			float_3 = float_1 + float_3;
		}
		float_2 = float_3 * float_1;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long_4 = long_2 * long_3;
		char_2 = char_1 * char_2;
		int_3 = v_vedis_value_is_array(int_4);

		char_3 = v_VmJsonArrayEncode(char_3);

		int_5 = int_6 * int_10;
		char_1 = char_3 * char_3;
	}
	if(1)
	{
		unsigned_int_1 = v_SyBlobAppend(int_10,float_3,char_4,-1 );

		double_4 = double_2 * double_4;
	}
}
double v_vedisJsonSerialize( double parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long_1 = long_1 + long_2;
	char_1 = char_1 * char_1;
	v_VmJsonEncode(unsigned_int_1,short_1);

	char_2 = char_3;
	short_1 = short_2 * short_2;
	float_1 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	return double_1;
}
short v_MemObjStringValue( char parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		v_SyBlobFormat(float_1,long_1,unsigned_int_1);

		unsigned_int_2 = v_vedisHashmapUnref(int_1);

		double_4 = double_1 + double_3;
	}
	if(1)
	{
		if(1)
		{
			float float_3 = 1;
			float_2 = float_2 + float_3;
		}
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_1 * long_2;
		}
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		double_2 = double_1 * double_5;
		unsigned_int_3 = v_SyBlobAppend(int_1,float_2,char_1,-1 );

		double_5 = v_vedisJsonSerialize(double_2,float_2);

		int_3 = int_1 + int_2;
	}
	return short_1;
}
float v_vedisMemObjToString()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	int int_1 = 1;
	float_3 = float_1 * float_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_2 = double_1 * double_1;
		double_2 = double_1 + double_3;
		short_1 = v_MemObjStringValue(char_1,short_2);

		double_4 = double_4 + double_2;
	}
	return float_4;
	char_1 = v_SyBlobReset(int_1);

}
float v_vedis_value_to_string( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float_1 = v_SyBlobNullAppend(char_1);

		short_1 = short_1 * short_2;
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
	}
	return float_2;
	float_3 = v_vedisMemObjToString();

}
short v_array_render( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_4 = 1;
	float_2 = float_1 * float_1;
	int_1 = v_vedis_value_is_null(float_3);

	char_1 = char_1 + char_1;
	double_1 = double_1 + double_1;
	if(1)
	{
		short short_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		float_3 = v_vedis_value_to_string(short_1,int_1);

		short_1 = short_1 + short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	float_4 = float_2 + float_3;
	return short_1;
}
char v_vedisHashmapWalk( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	int_2 = int_1 * int_2;
	float_1 = float_1 * float_2;
	float_1 = float_2 + float_1;
	float_3 = float_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_2;
		}
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		if(1)
		{
		}
		int_1 = int_2 * int_3;
		unsigned_int_3 = unsigned_int_2;
	}
	return char_1;
}
int v_vedis_array_walk( int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	short_3 = short_1 * short_2;
	return int_1;
	char_1 = v_vedisHashmapWalk(float_1,short_1);

}
int v_vedis_value_is_array( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 + int_1;
	return int_2;
}
int v_vedis_value_is_null( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return int_1;
}
long v_command_result_render( double parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_3 = 1;
	short short_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int_1 = v_vedis_value_is_null(float_1);

	int_2 = int_1 + int_2;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_2;
	}
	if(1)
	{
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float_3 = v_vedis_value_to_string(short_1,int_1);

		short_2 = short_2 + short_1;
		int_1 = v_vedis_value_is_array(int_1);

		int_3 = v_vedis_array_walk(int_2,short_3);

		char_2 = char_1 * char_1;
	}
	if(1)
	{
		int_2 = int_3 * int_1;
	}
	if(1)
	{
		short short_4 = 1;
		short_3 = v_array_render(char_3);

		short_1 = short_3 * short_4;
	}
	return long_1;
}
char v_vedisObjectValueDestroy( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double_1 = double_2;
	int_1 = v_vedisMemObjRelease(long_1);

	short_1 = v_SyMemBackendPoolFree(double_3);

	float_2 = float_1 + float_2;
	return char_1;
}
unsigned int v_vedisHashmapRef( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 * char_2;
	return unsigned_int_1;
}
float v_vedisMemObjStore( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	long long_2 = 1;
	double_1 = double_1 * double_1;
	char_1 = v_SyBlobReset(int_1);

	int_2 = int_1;
	if(1)
	{
		int int_3 = 1;
		int_1 = int_2 * int_3;
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2 + double_2;
	}
	unsigned_int_1 = v_vedisHashmapRef(unsigned_int_2);

	float_1 = float_1 * float_1;
	double_1 = double_3;
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		unsigned_int_2 = v_SyBlobDup(int_4,char_2);

		unsigned_int_2 = v_vedisHashmapUnref(int_2);

		int_5 = int_1 + int_5;
		int_1 = int_6;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		long long_1 = 1;
		double_3 = v_SyMemcpy(unsigned_int_3,int_4);

		long_1 = long_1 * long_1;
	}
	return float_2;
	long_2 = v_SyBlobRelease(long_2);

}
char v_SyStrToReal( char parameter_1,int parameter_2,float parameter_4)
{
	char char_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return char_1;
}
short v_MemObjRealValue( double parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	float_1 = v_MemObjStringToInt(unsigned_int_1);

	char_1 = v_SyStrToReal(char_2,int_1,float_1);

	float_2 = float_2 + float_3;
	return short_1;
	float_3 = v_vedisHashmapCount(short_2);

	unsigned_int_1 = v_vedisHashmapUnref(int_2);

}
int v_vedisMemObjToReal( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_4 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "nc") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_2 = 1;
		long_1 = v_SyBlobRelease(long_2);

		int_3 = int_1 * int_2;
		short_1 = v_MemObjRealValue(double_1);

		double_2 = double_3;
		short_2 = short_1 * short_1;
	}
	return int_4;
}
int v_vedisMemObjRelease( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		if(1)
		{
			double_1 = double_1;
		}
		unsigned_int_1 = v_vedisHashmapUnref(int_1);

		char_2 = char_1 + char_1;
		double_3 = double_1 * double_2;
	}
	return int_2;
	long_1 = v_SyBlobRelease(long_1);

}
short v_vedisHashmapRelease( char parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double_1 = double_1 * double_1;
	short_1 = short_2;
	short_1 = short_2 + short_1;
	int_2 = int_1 + int_1;
	double_2 = double_2 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		float float_2 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		int_3 = int_1;
		short_3 = v_SyMemBackendPoolFree(double_2);

		double_3 = double_3 + double_3;
		if(1)
		{
			short short_4 = 1;
			short_3 = short_3 + short_4;
		}
		int_1 = v_vedisMemObjRelease(long_1);

		int_2 = int_4;
		long_2 = v_SyBlobRelease(long_2);

		int_2 = int_3 + int_5;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		float_1 = v_SyMemBackendFree(double_4);

		long_1 = long_2 + long_1;
	}
	double_3 = double_4 + double_3;
	return short_2;
}
unsigned int v_vedisHashmapUnref( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		short_1 = v_vedisHashmapRelease(char_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	return unsigned_int_2;
}
float v_vedisHashmapCount( short parameter_1)
{
	float float_1 = 1;
	return float_1;
}
unsigned int v_SyStrToInt64( double parameter_1,float parameter_2,unsigned int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_1;
	int_3 = v_SyMemcmp(long_1,char_1,char_2);

	float_3 = float_1 + float_2;
	char_3 = char_2 * char_2;
	int_4 = int_4 + int_2;
	double_2 = double_1 * double_2;
	return unsigned_int_1;
}
void v_SyOctalStrToInt64( double parameter_1,long parameter_2,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 + int_2;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2;
}
double v_SyBinaryStrToInt64( int parameter_1,double parameter_2,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 * double_2;
	}
	return double_2;
}
char v_SyHexToint()
{
	char char_1 = 1;
	return char_1;
}
short v_SyHexStrToInt64( short parameter_1,unsigned int parameter_2,char parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	float_2 = float_1 * float_1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	if(1)
	{
	}
	double_3 = double_1 + double_2;
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
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			int int_2 = 1;
			int_1 = int_2 * int_2;
		}
	}
	unsigned_int_2 = unsigned_int_1;
	int_4 = int_3 + int_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_3;
		double_2 = double_4 + double_3;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double double_5 = 1;
		double_3 = double_3 + double_5;
		double_5 = double_2 * double_1;
	}
	char_1 = v_SyHexToint();

	long_3 = long_1 * long_2;
	return short_1;
}
float v_vedisTokenValueToInt64( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	long_3 = long_1 + long_2;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 * int_1;
		if(1)
		{
		}
		float_1 = float_1 * float_1;
		if(1)
		{
			long long_4 = 1;
			short_1 = v_SyHexStrToInt64(short_2,unsigned_int_1,char_1);

			long_4 = long_1 * long_4;
		}
		if(1)
		{
			double_1 = double_1 * double_2;
		}
		if(1)
		{
			double_1 = double_2 * double_2;
		}
	}
	if(1)
	{
		unsigned_int_2 = v_SyStrToInt64(double_1,float_1,unsigned_int_2);

		float_1 = float_1;
	}
	return float_2;
	double_3 = v_SyBinaryStrToInt64(int_2,double_4,short_2);

	v_SyOctalStrToInt64(double_2,long_1,int_3);

}
float v_MemObjStringToInt( unsigned int parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	long_1 = long_1;
	float_1 = v_vedisTokenValueToInt64(int_1);

	short_1 = short_1;
	return float_2;
}
int v_MemObjRealToInt( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short_1 = short_1 * short_2;
	int_1 = int_1;
	double_1 = double_1 * double_1;
	double_2 = double_3;
	double_1 = double_4;
	double_1 = double_4 * double_3;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_3 + double_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	int_2 = int_2 * int_1;
	char_3 = char_1 + char_2;
	float_2 = float_1 * float_1;
	char_3 = char_1 * char_1;
	return int_3;
}
char v_MemObjIntValue( unsigned int parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	float_1 = v_MemObjStringToInt(unsigned_int_1);

	int_1 = int_2;
	short_1 = short_1 * short_1;
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
		long long_1 = 1;
		long long_2 = 1;
		float float_3 = 1;
		long_2 = long_1 + long_1;
		float_2 = v_vedisHashmapCount(short_1);

		unsigned_int_2 = v_vedisHashmapUnref(int_3);

		float_3 = float_3 * float_3;
		int_4 = v_MemObjRealToInt(float_2);

		int_3 = int_3;
	}
	return char_1;
}
double v_vedisMemObjToInteger( int parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		char_1 = v_MemObjIntValue(unsigned_int_1);

		double_1 = double_1 * double_1;
		long_1 = v_SyBlobRelease(long_1);

		double_1 = double_2 * double_1;
		int_1 = int_1;
	}
	return double_2;
}
int v_vedisMemObjInitFromString( char parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = v_SyBlobAppend(int_1,float_1,char_1,-1 );

	int_1 = int_2 * int_1;
	int_1 = int_1 * int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		short_1 = v_SyZero(short_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	long_1 = v_SyBlobInit(unsigned_int_3,short_2);

	int_3 = int_1 + int_2;
	return int_1;
}
void v_vedisNewObjectValue( int parameter_1,float parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	double_1 = v_vedisMemObjToInteger(int_1);

	int_1 = v_vedisMemObjInit(short_1,unsigned_int_1);

	float_1 = float_2;
	double_4 = double_2 * double_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "QW") > 0)
	{
	}
	if(1)
	{
		char char_2 = 1;
		double double_5 = 1;
		int_2 = v_vedisMemObjInitFromString(char_1,short_2,int_1);

		int_1 = int_1;
		int_1 = v_vedisMemObjToReal(unsigned_int_1);

		char_1 = char_2 + char_1;
		if(1)
		{
			float_1 = v_SyMemBackendPoolAlloc(char_1,char_3);

			double_1 = double_2 * double_5;
		}
		if(1)
		{
			double_3 = double_5 + double_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
}
float v_SyBlobNullAppend( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_2;
	long_4 = long_2 * long_3;
	double_2 = double_1 * double_1;
	if(1)
	{
		char char_2 = 1;
		unsigned_int_1 = v_SyBlobAppend(int_1,float_1,char_1,-1 );

		char_1 = char_1 + char_2;
	}
	return float_2;
}
unsigned int v_vedisPagerSetCachesize( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return unsigned_int_1;
}
double v_vedisConfigure( long parameter_1,int parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	char char_5 = 1;
	double double_9 = 1;
	short short_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_6 = 1;
	int int_4 = 1;
	long long_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	char_1 = char_2;
	char_3 = char_1;
	double_1 = double_1;
	double_2 = double_1 * double_2;
	short_1 = short_1 + short_2;
	char_2 = v_vedisPagerGetKvEngine(long_1);

	char_2 = v_vedisObjectValueDestroy(char_3,int_1);

	float_2 = float_1 * float_1;
	if(1)
	{
		char_1 = char_3 + char_4;
		double_2 = double_2 + double_3;
	}
	int_3 = int_2 + int_2;
	double_1 = double_4 * double_5;
	if(1)
	{
		if(1)
		{
			int_3 = int_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
	}
	double_6 = double_4;
	double_8 = double_1 * double_7;
	char_2 = char_1 * char_4;
	char_1 = char_3 * char_5;
	if(1)
	{
		double_2 = double_9;
		short_1 = short_3 + short_1;
		short_1 = short_3 + short_1;
	}
	v_vedisNewObjectValue(int_1,float_3);

	float_4 = float_3 + float_4;
	int_3 = int_3 * int_2;
	if(1)
	{
		float_1 = float_3 + float_3;
		if(1)
		{
			float float_6 = 1;
			float_5 = v_SyBlobNullAppend(char_1);

			float_4 = float_6 + float_3;
			float_4 = float_6 * float_6;
			unsigned_int_2 = unsigned_int_1;
		}
		int_1 = int_2 * int_2;
		int_1 = int_2 + int_1;
	}
	float_5 = v_vedisMemObjStore(char_6,char_6);

	int_3 = int_4 + int_4;
	long_2 = long_2 * long_1;
	if(1)
	{
		int_4 = int_3;
	}
	int_5 = int_2 + int_1;
	unsigned_int_3 = v_vedisPagerSetCachesize(double_3,int_6);

	short_4 = short_3;
	double_9 = double_5 * double_1;
	short_6 = short_2 * short_5;
	short_3 = short_1 + short_6;
	int_3 = int_4 + int_2;
	double_8 = double_2 + double_7;
	short_2 = short_3 + short_7;
	return double_1;
}
int v_vedis_config( float parameter_1,int parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_1;
	short_3 = short_2 + short_1;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
	}
	short_6 = short_4 + short_5;
	double_1 = v_vedisConfigure(long_2,int_1,long_2);

	float_2 = float_1 + float_2;
	double_1 = double_2 + double_1;
	if(1)
	{
		short short_7 = 1;
		short_7 = short_3 * short_4;
	}
	return int_2;
}
void v_SySetRelease()
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_2 = double_1 + double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ":") > 0)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	float_1 = v_SyMemBackendFree(double_3);

	float_1 = float_2 * float_1;
	short_1 = short_2;
	long_1 = long_2;
}
char v_vedisPagerClose( char parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char_1 = v_vedisBitvecDestroy(int_1);

	int_1 = int_2;
	if(1)
	{
		float_1 = v_pager_release_kv_engine(float_2);

		char_1 = v_vedisExportBuiltinVfs();

		short_1 = v_pager_unlock_db(long_1,int_3);

		short_2 = v_vedisOsCloseFree(char_1,float_3);

		int_1 = int_1 * int_1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 + double_1;
		}
	}
	if(1)
	{
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long_2 = long_1 + long_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int_2 = int_2 * int_2;
		unsigned_int_2 = unsigned_int_3;
	}
	return char_2;
}
long v_pager_reset_state( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short short_3 = 1;
	long_1 = v_pager_release_page(char_1,char_1);

	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_2 * double_3;
	char_3 = char_2 * char_3;
	int_1 = int_1;
	float_1 = float_1 + float_1;
	int_1 = int_1 + int_1;
	float_2 = float_2 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		if(1)
		{
			float float_3 = 1;
			char_4 = v_vedisBitvecDestroy(int_2);

			float_3 = float_2 + float_2;
		}
		short_1 = short_1;
		long_1 = long_1 * long_1;
		int_3 = int_2 * int_1;
		short_2 = short_1 * short_2;
	}
	double_4 = double_2 * double_2;
	short_1 = v_pager_unlock_db(long_1,int_1);

	short_2 = short_2 + short_1;
	double_5 = double_2 + double_4;
	long_2 = long_1 + long_1;
	double_2 = double_3 + double_1;
	if(1)
	{
		double_3 = double_4 * double_5;
	}
	if(1)
	{
		char_1 = char_4 * char_3;
		int_2 = int_4;
	}
	double_3 = double_5 * double_4;
	short_2 = short_2 * short_1;
	if(1)
	{
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_5 = 1;
		double_2 = double_2 + double_6;
		if(1)
		{
			short_2 = short_2 * short_3;
		}
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		short_2 = v_SyZero(short_3);

		int_5 = int_4 * int_5;
		if(1)
		{
			float_1 = float_1 * float_2;
			if(1)
			{
			}
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
			}
		}
	}
	return long_2;
}
short v_vedisPagerRollback( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	char char_2 = 1;
	short short_4 = 1;
	float float_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_5 = 1;
	int int_4 = 1;
	short_1 = v_pager_unlock_db(long_1,int_1);

	short_3 = short_1 * short_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int_3 = int_2 * int_3;
	}
	if(1)
	{
		double double_1 = 1;
		double double_3 = 1;
		float float_4 = 1;
		if(1)
		{
			char char_3 = 1;
			if(1)
			{
				char char_1 = 1;
				char_1 = char_1 + char_1;
			}
			double_1 = double_1 * double_2;
			char_2 = char_3;
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				short_4 = v_vedisOsSync(double_2,int_1);

				float_1 = float_1 + float_2;
				if(1)
				{
					short_1 = short_2 * short_3;
				}
			}
		}
		int_2 = v_vedisOsDelete(float_3,float_3,int_3);

		double_4 = double_1 * double_3;
		unsigned_int_1 = v_vedisGenError(int_1,short_2,-1 );

		float_3 = float_3 + float_4;
		if(1)
		{
			short_2 = v_vedisOsCloseFree(char_2,float_3);

			double_4 = double_4 * double_2;
			int_3 = int_3 * int_2;
		}
	}
	if(1)
	{
		double double_5 = 1;
		long_1 = v_pager_reset_state(float_5,int_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_4 + double_5;
	}
	return short_3;
	int_4 = v_pager_journal_rollback(int_1,int_1,-1 );

}
char v_vedisBitvecDestroy( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	long long_5 = 1;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long long_4 = 1;
		float float_3 = 1;
		double double_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		float float_4 = 1;
		int int_6 = 1;
		float float_5 = 1;
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 + char_2;
		}
		float_1 = v_SyMemBackendFree(double_1);

		long_2 = long_3 * long_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		int_1 = int_1 + int_2;
		if(1)
		{
			int_3 = int_1 + int_1;
		}
		int_2 = int_2 + int_3;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
		short_2 = short_1 * short_2;
		short_4 = short_1 + short_3;
		if(1)
		{
			float float_2 = 1;
			float_1 = float_2 * float_2;
		}
		long_1 = long_2 + long_4;
		float_1 = float_1 * float_3;
		double_2 = double_1 + double_1;
		int_5 = int_3 * int_4;
		if(1)
		{
			int_2 = int_2 + int_3;
		}
		float_4 = float_4;
		unsigned_int_2 = unsigned_int_5;
		int_6 = int_2 * int_4;
		float_4 = float_5;
	}
	short_2 = v_SyMemBackendPoolFree(double_3);

	unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
	long_5 = long_2 + long_1;
	return char_2;
}
double v_pager_commit_phase2( double parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			if(1)
			{
				char char_1 = 1;
				int_1 = v_vedisOsDelete(float_1,float_2,int_1);

				short_1 = v_pager_unlock_db(long_1,int_1);

				char_1 = char_2;
			}
			char_2 = v_vedisBitvecDestroy(int_2);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			double_1 = double_2;
			if(1)
			{
				unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
				double_2 = double_1;
			}
		}
	}
	return double_2;
}
char v_pager_write_dirty_pages( short parameter_1,char parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	double double_4 = 1;
	short short_2 = 1;
	char char_5 = 1;
	char_1 = char_1;
	int_2 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			double_1 = double_1 * double_2;
		}
		short_1 = short_1;
		if(1)
		{
			char_1 = char_1 * char_2;
			if(1)
			{
				double_1 = double_1 * double_2;
			}
		}
		int_1 = int_2 * int_3;
		if(1)
		{
			float float_1 = 1;
			double_3 = double_3 + double_1;
			float_1 = float_1;
		}
		long_1 = v_pager_release_page(char_3,char_2);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	long_2 = long_1 + long_1;
	char_4 = v_vedisOsWrite(double_3,unsigned_int_1,unsigned_int_1,int_3);

	double_4 = double_3 + double_1;
	short_2 = v_pager_unlink_page(int_2,char_5);

	int_1 = int_1;
	return char_1;
}
long v_page_merge_dirty( float parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short_2 = short_1 * short_1;
	double_2 = double_1 + double_2;
	int_2 = int_1 + int_2;
	int_1 = int_1 + int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 + char_1;
	short_2 = short_2;
	return long_1;
}
void v_pager_get_dirty_pages()
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		if(1)
		{
			short_1 = v_SyZero(short_2);

			long_1 = v_page_merge_dirty(float_1,long_1);

			double_2 = double_1 + double_1;
		}
		if(1)
		{
			double double_3 = 1;
			double_2 = double_1 * double_3;
		}
	}
}
unsigned int v_pager_commit_phase1( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	if(1)
	{
		long_1 = v_vedisOsTruncate(unsigned_int_2,long_2);

		int_1 = int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
		}
		long_3 = long_1 + long_3;
	}
	if(1)
	{
	}
	double_1 = v_pager_wait_on_lock(short_1,int_2);

	int_1 = int_1 + int_1;
	if(1)
	{
	}
	v_pager_get_dirty_pages();

	long_3 = long_1 + long_3;
	if(1)
	{
		int_2 = int_2 + int_1;
		if(1)
		{
			double double_3 = 1;
			short_1 = v_vedisOsSync(double_2,int_2);

			double_3 = double_1 * double_1;
		}
	}
	if(1)
	{
		long_3 = long_2 + long_2;
	}
	v_vedisFinalizeJournal(unsigned_int_3,int_2,int_2);

	double_1 = double_2;
	if(1)
	{
		int int_3 = 1;
		unsigned_int_4 = v_vedisGenError(int_2,short_2,-1 );

		long_3 = long_1;
		int_3 = int_3 * int_3;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_5;
	}
	char_1 = v_pager_write_dirty_pages(short_1,char_1);

	short_3 = short_2 + short_1;
	unsigned_int_3 = unsigned_int_6 + unsigned_int_5;
	double_5 = double_4 + double_2;
	return unsigned_int_4;
}
char v_vedisPagerCommit( long parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_1;
	double_1 = v_pager_commit_phase2(double_2);

	short_1 = short_1 * short_1;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
	int_1 = int_1 + int_1;
	if(1)
	{
		int_1 = int_1;
	}
	unsigned_int_1 = v_pager_commit_phase1(short_2);

	int_2 = int_1 * int_1;
	int_2 = int_2 * int_2;
	return char_1;
}
long v_vedisEngineRelease( char parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	short_1 = v_SyMemBackendRelease();

	double_1 = double_1 + double_1;
	if(1)
	{
		int int_2 = 1;
		short_1 = v_vedisPagerRollback(double_1,int_1);

		int_1 = int_2 + int_2;
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			char_1 = v_vedisPagerCommit(long_1);

			char_2 = v_vedisPagerClose(char_2);

			int_5 = int_3 * int_4;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
	}
	short_2 = short_1;
	double_2 = double_1 * double_1;
	char_3 = char_3 * char_2;
	return long_1;
}
long v_vedisCoreShutdown()
{
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	long long_2 = 1;
	short short_3 = 1;
	long_1 = v_vedisEngineRelease(char_1);

	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		if(1)
		{
			char_2 = char_2 + char_1;
		}
		int_1 = int_1 * int_1;
		int_2 = int_1;
		double_1 = double_1 * double_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	char_2 = char_2 * char_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		if(1)
		{
			if(1)
			{
				double double_3 = 1;
				char_1 = char_1 * char_1;
				double_3 = double_2 + double_1;
			}
			if(1)
			{
				char_2 = char_2;
			}
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		}
		unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		v_SySetRelease();

		short_2 = short_1 + short_1;
	}
	double_2 = double_1 + double_2;
	return long_2;
	short_3 = v_SyMemBackendRelease();

}
int v_vedis_lib_shutdown()
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	long_1 = v_vedisCoreShutdown();

	float_2 = float_1 + float_2;
	return int_1;
}
unsigned int v_Fatal()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = v_vedis_lib_shutdown();

	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_1 * long_2;
	return unsigned_int_2;
}
char v_SyBlobAppendBig32( double parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	unsigned_int_1 = v_SyBlobAppend(int_1,float_1,char_1,-1 );

	int_2 = int_2 * int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	v_SyBigEndianPack32(long_1,unsigned_int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1;
	return char_1;
}
short v_SyBlobAppendBig16( int parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	char char_2 = 1;
	short_1 = short_1 * short_2;
	double_1 = double_1 + double_1;
	unsigned_int_1 = v_SyBlobAppend(int_1,float_1,char_1,-1 );

	int_4 = int_2 * int_3;
	double_3 = double_1 * double_2;
	return short_2;
	double_4 = v_SyBigEndianPack16(long_1,char_2);

}
void v_SyBlobFormat( float parameter_1,long parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "q") < 0)
	{
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if(remainder_check(controller_2,100,1))
		{
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	double_1 = v_FormatMount(unsigned_int_4,char_1,float_1,int_3,unsigned_int_3);

}
char v_vedisPagerGetKvEngine( long parameter_1)
{
	char char_1 = 1;
	return char_1;
}
int v_vedisTableSerialize( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	long long_3 = 1;
	char char_4 = 1;
	long long_4 = 1;
	float float_4 = 1;
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_3 = short_1 + short_2;
	float_2 = float_1 * float_1;
	short_3 = v_SyBlobAppendBig16(int_1,long_2);

	char_2 = char_1 + char_2;
	v_SyBlobFormat(float_1,long_1,unsigned_int_3);

	double_3 = double_1 * double_2;
	float_3 = float_2 * float_3;
	double_5 = double_4 * double_3;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	short_1 = short_3;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	long_1 = v_SyBlobInit(unsigned_int_2,short_1);

	double_6 = double_3 * double_5;
	int_3 = int_2 + int_3;
	float_1 = float_3 * float_3;
	long_2 = v_SyBlobRelease(long_2);

	unsigned_int_4 = unsigned_int_3;
	char_3 = v_vedisPagerGetKvEngine(long_3);

	char_4 = v_SyBlobAppendBig32(double_1,long_4);

	short_3 = short_2 * short_3;
	if(1)
	{
	}
	short_2 = v_vedisGenErrorFormat(unsigned_int_5,float_2,float_1);

	float_4 = float_4 * float_2;
	return int_3;
}
double v_vedisPagerisMemStore( long parameter_1)
{
	double double_1 = 1;
	return double_1;
}
double v_vedisOnCommit()
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_2;
	double_2 = v_vedisPagerisMemStore(long_1);

	int_1 = int_1 * int_1;
	double_2 = double_2 + double_1;
	int_2 = v_vedisTableSerialize(int_3);

	double_3 = double_2 + double_2;
	if(1)
	{
	}
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		int int_4 = 1;
		float_1 = float_3 + float_1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "^") < 0)
		{
		}
		int_1 = int_4;
	}
	return double_1;
}
unsigned int v_vedisPagerSetCommitCallback( short parameter_1,long parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_1;
	int_2 = int_1 * int_1;
	return unsigned_int_1;
}
short v_SySetReset( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_2;
	return short_1;
}
unsigned int v_SyBinHash( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_3 = double_1 * double_2;
	long_1 = long_1;
	short_1 = short_1 + short_1;
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
			double_3 = double_3;
		}
		double_2 = double_4 + double_1;
		long_3 = long_1 * long_2;
		if(1)
		{
			short_1 = short_1;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1 * int_1;
		if(1)
		{
			short short_2 = 1;
			short_1 = short_2;
		}
		double_6 = double_5 * double_2;
		char_2 = char_1 * char_2;
		if(1)
		{
			double_4 = double_2 * double_1;
		}
		char_1 = char_2 * char_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return unsigned_int_2;
}
char v_vedisFetchCommand( double parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	char_1 = char_1;
	if(1)
	{
	}
	int_3 = v_SyMemcmp(long_1,char_2,char_3);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_3 = long_2 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		if(1)
		{
			long_2 = long_2 + long_3;
		}
		if(1)
		{
		}
		short_1 = short_1 * short_1;
	}
	return char_4;
	unsigned_int_4 = v_SyBinHash(float_1,unsigned_int_3);

}
int v_vedisInstallCommand( short parameter_1,int parameter_2,float parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	double_1 = double_1 * double_1;
	float_1 = float_2;
	int_2 = int_1 * int_2;
	float_4 = float_3 * float_3;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_2 * double_1;
	double_3 = v_SyStrlen(float_1);

	float_4 = float_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		long_2 = long_1 * long_1;
		int_2 = int_1 + int_3;
		short_2 = short_1 + short_1;
	}
	float_4 = float_5 * float_6;
	if(1)
	{
	}
	float_5 = float_1;
	double_4 = double_1 + double_1;
	int_2 = int_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	long_3 = long_2 * long_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	float_5 = float_6 * float_3;
	int_3 = int_2 + int_1;
	double_4 = double_5 + double_2;
	float_3 = v_SyMemBackendFree(double_2);

	char_1 = char_3 * char_2;
	int_3 = int_2 + int_1;
	long_2 = long_1 + long_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	}
	int_2 = int_4;
	if(1)
	{
		char char_4 = 1;
		unsigned int unsigned_int_6 = 1;
		char_2 = char_3 + char_2;
		double_2 = double_4 * double_1;
		char_3 = char_2 * char_4;
		int_1 = int_1 + int_1;
		unsigned_int_2 = v_SyBinHash(float_5,unsigned_int_4);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_6;
		if(1)
		{
			int int_7 = 1;
			unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
			unsigned_int_6 = unsigned_int_4 * unsigned_int_4;
			char_2 = v_vedisFetchCommand(double_3,long_1);

			int_4 = int_5 + int_2;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double double_6 = 1;
				unsigned int unsigned_int_7 = 1;
				if(1)
				{
					unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
				}
				double_5 = double_6 * double_2;
				unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
				double_2 = v_SyMemcpy(unsigned_int_5,int_5);

				unsigned_int_4 = unsigned_int_7 + unsigned_int_5;
				if(1)
				{
					int int_6 = 1;
					int_7 = int_2 * int_6;
				}
				short_2 = v_SyZero(short_1);

				unsigned_int_7 = unsigned_int_2 * unsigned_int_2;
				int_7 = int_4 * int_5;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_7;
			}
			unsigned_int_4 = unsigned_int_6 * unsigned_int_6;
			short_3 = v_SySetReset(char_2);

			double_4 = double_1 + double_1;
			v_SyMemBackendAlloc(long_3,float_4,-1 );

			short_2 = v_SySetInit(long_1,float_2,char_3);

			int_7 = int_3 + int_7;
		}
	}
	return int_4;
}
int v_vedis_register_command( float parameter_1,short parameter_2,double parameter_3,int parameter_4,long parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
		char char_3 = 1;
		int_1 = v_vedisInstallCommand(short_1,int_2,float_1);

		char_1 = char_3 * char_3;
	}
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	return int_3;
}
void v_vedisRegisterBuiltinCommands( int parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v_vedis_register_command(float_1,short_1,double_1,int_2,long_1);

	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
}
int v_vedisMemObjInit( short parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char_1 = char_1 * char_2;
	int_1 = int_1;
	short_1 = v_SyZero(short_1);

	long_1 = v_SyBlobInit(unsigned_int_1,short_2);

	double_1 = double_1;
	return int_2;
}
float v_vedisInitCursor( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short_1 = v_vedisGenErrorFormat(unsigned_int_1,float_1,float_1);

	float_2 = v_SyMemBackendPoolAlloc(char_1,char_2);

	double_1 = v_vedisGenOutofMem(double_1);

	int_3 = int_1 * int_2;
	int_1 = int_3 + int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	short_1 = v_SyZero(short_2);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		int_1 = int_4 * int_2;
	}
	short_2 = short_1 * short_1;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_3 + short_2;
	}
	double_1 = double_1 + double_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_2 * double_3;
	}
	int_1 = int_4 + int_3;
	long_1 = long_1 + long_1;
	if(1)
	{
		double_2 = double_2;
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	return float_2;
}
unsigned int v_vedisKvIoErr( double parameter_1,float parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short_1 = short_1;
	char_1 = char_2;
	return unsigned_int_1;
	unsigned_int_1 = v_vedisGenError(int_1,short_2,-1 );

}
short v_vedisKvIoPageReload( long parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_2 = char_1 * char_1;
	short_1 = short_2;
	return short_1;
}
char v_vedisKvIoPageUnpin( float parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1;
	return char_1;
}
double v_vedisKvIoTempPage( char parameter_1)
{
	double double_1 = 1;
	return double_1;
}
char v_vedisKvIoReadOnly( char parameter_1)
{
	char char_1 = 1;
	return char_1;
}
float v_vedisKvIoPageSize( unsigned int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
void v_page_unref( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_4 = 1;
	float_2 = float_1 + float_1;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_1;
		if(1)
		{
			long_1 = v_pager_release_page(char_1,char_1);

			double_2 = double_1 + double_1;
			int_1 = int_2;
		}
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				char char_2 = 1;
				char char_3 = 1;
				short short_2 = 1;
				double double_3 = 1;
				char_2 = char_3;
				if(1)
				{
					int_1 = int_3;
				}
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
					if(1)
					{
						int int_4 = 1;
						int int_5 = 1;
						int_5 = int_4 * int_4;
					}
					short_1 = v_pager_unlink_page(int_3,char_4);

					int_2 = int_1 + int_2;
				}
				short_2 = short_1 + short_2;
				double_3 = double_1 * double_2;
			}
		}
	}
}
char v_vedisKvIoPageUnRef( char parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	if(1)
	{
		short short_1 = 1;
		v_page_unref(double_1);

		short_1 = short_1 + short_1;
	}
	return char_1;
}
double v_vedisKvIopage_ref( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return double_1;
	double_2 = v_page_ref(unsigned_int_1);

}
double v_vedisKvIoPageDontMakeHot( int parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	if(1)
	{
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short_2 = short_2 + short_2;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			double_3 = double_2;
		}
		if(1)
		{
			short_2 = short_1 + short_2;
		}
		double_3 = double_1 * double_4;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	return double_2;
}
double v_vedisKvIoPageDontJournal( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float_1 = float_1 + float_2;
	short_1 = v_vedisBitvecTest(int_1,unsigned_int_1);

	double_2 = double_1 * double_1;
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	if(1)
	{
		if(1)
		{
			int int_3 = 1;
			int_2 = v_vedisBitvecSet(short_2,unsigned_int_2);

			int_1 = int_3 * int_1;
		}
	}
	return double_3;
}
void v_vedisPagerDontWrite( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_2;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
}
float v_vedisKvIoPageDontWrite( double parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	v_vedisPagerDontWrite(char_1);

	int_2 = int_1 + int_2;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	return float_1;
}
int v_vedisBitvecSet( short parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1;
	float_1 = float_2;
	if(1)
	{
	}
	int_1 = int_2;
	double_1 = double_1 * double_1;
	int_2 = int_3 * int_3;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	int_1 = int_2 * int_1;
	int_3 = int_1 + int_3;
	int_3 = int_3 + int_2;
	double_2 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		long long_2 = 1;
		unsigned_int_2 = unsigned_int_3;
		int_2 = int_1 * int_1;
		v_SyMemBackendAlloc(long_1,float_3,-1 );

		unsigned_int_1 = unsigned_int_4 * unsigned_int_6;
		long_1 = long_2;
		if(1)
		{
			double double_3 = 1;
			char char_1 = 1;
			int_2 = int_4 + int_2;
			double_3 = double_3 + double_2;
			char_2 = char_1 * char_2;
			int_1 = int_2 * int_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int int_5 = 1;
				unsigned int unsigned_int_7 = 1;
				unsigned int unsigned_int_8 = 1;
				int int_6 = 1;
				if(1)
				{
					short_1 = short_1 + short_1;
				}
				short_1 = v_SyZero(short_1);

				int_4 = int_1 * int_2;
				int_5 = int_4 * int_2;
				unsigned_int_4 = unsigned_int_4 + unsigned_int_7;
				unsigned_int_8 = unsigned_int_4 + unsigned_int_2;
				float_1 = v_SyMemBackendFree(double_4);

				int_2 = int_4;
				int_6 = int_3 + int_1;
			}
			unsigned_int_3 = unsigned_int_2 + unsigned_int_6;
			unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
			float_2 = v_SyMemBackendPoolAlloc(char_2,char_2);

			int_2 = int_2 * int_1;
		}
	}
	return int_4;
}
void v_WriteInt64( long parameter_1,double parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = v_SyBigEndianPack64(long_1,long_2);

	char_1 = v_vedisOsWrite(double_2,unsigned_int_2,unsigned_int_1,int_1);

	float_2 = float_2 + float_2;
	short_3 = short_1 * short_2;
}
short v_vedisBitvecTest( int parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float_3 = float_1 + float_2;
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		if(1)
		{
			long_1 = long_1 * long_2;
		}
		if(1)
		{
		}
		char_1 = char_2;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 * int_1;
		}
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
		}
		char_1 = char_3 + char_3;
		if(1)
		{
			float float_4 = 1;
			float_1 = float_1 * float_4;
		}
		if(1)
		{
		}
		long_2 = long_1 + long_2;
	}
	return short_1;
}
void v_page_write( unsigned int parameter_1,double parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	short_1 = v_vedisBitvecTest(int_1,unsigned_int_1);

	v_WriteInt64(long_1,double_1,char_1);

	double_1 = double_2 + double_3;
	if(1)
	{
		if(1)
		{
			int int_4 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_2 = 1;
			float float_2 = 1;
			float float_3 = 1;
			char_1 = v_vedisOsWrite(double_4,unsigned_int_1,unsigned_int_2,int_2);

			double_3 = v_WriteInt32(double_3,float_1,short_2);

			int_4 = int_2 + int_3;
			if(1)
			{
				double double_5 = 1;
				int_2 = v_vedisBitvecSet(short_3,unsigned_int_2);

				double_5 = double_6;
			}
			unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
			if(1)
			{
			}
			unsigned_int_4 = v_pager_cksum(int_1,unsigned_int_2);

			int_3 = int_4;
			if(1)
			{
			}
			long_2 = long_2 * long_2;
			float_2 = float_2 * float_3;
			if(1)
			{
			}
			double_6 = double_4;
			int_1 = int_1;
			int_4 = int_4;
		}
	}
	float_1 = v_pager_page_to_dirty_list(double_2,short_3);

	int_1 = int_1 + int_5;
	if(1)
	{
		int int_6 = 1;
		unsigned_int_5 = v_vedisGenError(int_3,short_4,-1 );

		int_6 = int_6 + int_1;
		if(1)
		{
			int_5 = int_1 + int_6;
		}
	}
}
long v_pager_release_page( char parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	long_1 = long_1 * long_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			double double_1 = 1;
			double_2 = double_1 + double_2;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		short_1 = v_SyMemBackendPoolFree(double_3);

		double_3 = double_4;
	}
	if(1)
	{
		double_2 = double_4;
	}
	return long_3;
}
short v_pager_unlink_page( int parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_2 = int_1 + int_2;
		int_3 = int_1 * int_2;
	}
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return short_3;
}
unsigned int v_pager_write_hot_dirty_pages( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_4 = 1;
	long long_3 = 1;
	char_1 = v_vedisOsWrite(double_1,unsigned_int_1,unsigned_int_2,int_1);

	int_1 = int_1 + int_2;
	float_2 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		long long_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		if(1)
		{
			short_1 = v_pager_unlink_page(int_2,char_2);

			char_1 = char_2 * char_1;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "d") < 0)
		{
			float float_3 = 1;
			float_3 = float_3 * float_1;
			if(1)
			{
				double double_2 = 1;
				double double_3 = 1;
				double_3 = double_1 * double_2;
			}
		}
		double_4 = double_4 + double_1;
		if(1)
		{
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			char char_3 = 1;
			char_4 = char_2 + char_3;
		}
		char controller_6[2];
		fgets(controller_6 ,2 ,stdin);
		if( strcmp( controller_6, "M") < 0)
		{
			short_1 = short_2;
		}
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 * long_2;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		long_3 = v_pager_release_page(char_1,char_4);

		short_2 = short_3 + short_3;
	}
	return unsigned_int_1;
}
short v_page_merge_hot( int parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	return short_1;
}
float v_pager_get_hot_pages()
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1;
	short_1 = v_SyZero(short_2);

	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_3 = v_page_merge_hot(int_3,long_1);

	float_1 = float_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	return float_1;
}
double v_WriteInt32( double parameter_1,float parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 * double_2;
	double_1 = double_3;
	return double_2;
	v_SyBigEndianPack32(long_1,unsigned_int_1);

	char_1 = v_vedisOsWrite(double_4,unsigned_int_2,unsigned_int_2,int_1);

}
void v_vedisFinalizeJournal( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_5 = 1;
	double double_2 = 1;
	short short_3 = 1;
	char_1 = char_1 + char_2;
	short_1 = v_vedisOsCloseFree(char_2,float_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		int_3 = int_2;
	}
	if(1)
	{
	}
	int_4 = v_pager_lock_db(unsigned_int_1,int_1,-1 );

	float_1 = float_2 * float_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			short_2 = v_vedisOsSync(double_1,int_2);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
		}
	}
	int_4 = int_3 * int_5;
	if(1)
	{
		if(1)
		{
			if(1)
			{
			}
		}
		int_4 = int_3;
	}
	if(1)
	{
		if(1)
		{
			int int_6 = 1;
			int_1 = int_6;
		}
	}
	double_1 = v_WriteInt32(double_2,float_2,short_3);

}
unsigned int v_pager_dirty_commit( long parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short_1 = short_1;
	double_1 = double_2;
	int_2 = int_1 + int_1;
	int_2 = int_2 + int_2;
	if(1)
	{
	}
	unsigned_int_1 = v_vedisGenError(int_3,short_2,-1 );

	int_4 = int_2 * int_1;
	if(1)
	{
	}
	if(1)
	{
		char_1 = char_1 + char_1;
		if(1)
		{
		}
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	v_vedisFinalizeJournal(unsigned_int_3,int_1,int_1);

	float_1 = float_1 + float_1;
	if(1)
	{
		char char_2 = 1;
		float_2 = v_pager_get_hot_pages();

		char_2 = char_2 + char_1;
		double_2 = double_2 + double_2;
	}
	short_2 = short_1 + short_2;
	double_3 = double_2 + double_3;
	return unsigned_int_3;
	double_2 = v_pager_wait_on_lock(short_2,int_1);

	unsigned_int_2 = v_pager_write_hot_dirty_pages(short_3,int_1);

}
long v_pager_write_journal_header( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_5 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1 * float_1;
	double_1 = double_1 + double_2;
	int_2 = int_1 * int_3;
	double_3 = v_SyBigEndianPack64(long_1,long_2);

	double_4 = double_1;
	v_SyBigEndianPack32(long_3,unsigned_int_2);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	double_4 = v_SyMemcpy(unsigned_int_3,int_1);

	short_1 = short_2;
	int_2 = int_4 + int_3;
	int_3 = int_4 + int_1;
	double_3 = double_3 + double_5;
	short_2 = short_2 + short_1;
	return long_1;
}
void v_vedisOpenJournal( unsigned int parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	float float_3 = 1;
	long long_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	short short_4 = 1;
	double double_3 = 1;
	int int_5 = 1;
	short_1 = v_vedisOsCloseFree(char_1,float_1);

	short_2 = short_2 + short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
	}
	short_1 = v_vedisGenErrorFormat(unsigned_int_4,float_2,float_1);

	long_1 = v_pager_write_journal_header(unsigned_int_5,int_1);

	float_2 = float_3 + float_1;
	long_1 = long_1 * long_2;
	if(1)
	{
		short_2 = short_3 * short_1;
	}
	int_1 = int_2 * int_1;
	if(1)
	{
		float_1 = v_SyMemBackendFree(double_1);

		float_1 = float_1 * float_3;
		char_1 = char_1;
	}
	double_2 = double_1;
	char_1 = v_vedisOsWrite(double_1,unsigned_int_2,unsigned_int_4,int_2);

	short_1 = short_2 * short_3;
	long_3 = long_2;
	int_3 = v_vedisOsDelete(float_1,float_2,int_3);

	int_4 = int_3;
	if(1)
	{
		v_vedisOsOpen(int_4,float_2,char_2,char_1,short_4);

		double_2 = double_2 + double_1;
	}
	int_4 = int_4 + int_1;
	v_SyMemBackendAlloc(long_3,float_1,-1 );

	double_1 = double_1 * double_3;
	int_4 = int_1 + int_5;
}
void v_SyTimeFormatToDos( short parameter_1,double parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long_1 = long_1;
	short_1 = short_1 * short_2;
	long_2 = long_2;
	char_1 = char_1 * char_1;
}
float v_pager_write_db_header( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	long long_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char char_5 = 1;
	float float_3 = 1;
	long long_3 = 1;
	int_1 = int_1 * int_2;
	char_1 = char_1 + char_1;
	v_SyBigEndianPack32(long_1,unsigned_int_1);

	char_2 = char_2 * char_2;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1;
	char_4 = char_2 + char_3;
	v_SyTimeFormatToDos(short_2,double_1);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	float_1 = float_1 * float_1;
	int_1 = int_3 + int_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	}
	double_1 = double_1 + double_1;
	double_2 = v_SyBigEndianPack16(long_2,char_1);

	int_3 = int_2 + int_2;
	double_2 = v_SyMemcpy(unsigned_int_3,int_3);

	short_2 = short_1 + short_3;
	int_2 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	double_3 = v_SyStrlen(float_2);

	char_2 = char_1 * char_5;
	char_5 = char_1;
	double_2 = double_1;
	float_2 = float_3 + float_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	double_1 = double_2;
	long_3 = long_1 + long_1;
	return float_2;
	short_2 = v_SyZero(short_1);

}
float v_pager_page_to_dirty_list( double parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	int_1 = int_1 + int_2;
	double_2 = double_1 * double_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	char_1 = char_1;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_2 * char_1;
	}
	return float_1;
}
double v_pager_create_header( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_1 + short_2;
	float_1 = float_1;
	float_1 = v_pager_alloc_page(double_1,double_2);

	float_2 = v_pager_write_db_header(long_1);

	double_3 = double_1;
	if(1)
	{
	}
	float_2 = v_pager_page_to_dirty_list(double_3,short_3);

	int_2 = int_1 + int_1;
	v_pager_link_page(double_2,int_3);

	int_6 = int_4 * int_5;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_1;
	return double_3;
}
short v_vedisBitvecCreate( unsigned int parameter_1,short parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_4 = 1;
	short short_3 = 1;
	float_1 = v_SyMemBackendFree(double_1);

	short_1 = short_1 * short_1;
	float_3 = float_2 + float_1;
	char_2 = char_1 + char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "/4") < 0)
	{
		double_2 = double_2 + double_3;
	}
	char_2 = char_1 * char_1;
	short_2 = v_SyZero(short_1);

	char_2 = char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double_2 = double_2 * double_3;
	}
	double_3 = double_3 * double_1;
	short_1 = short_1;
	v_SyMemBackendAlloc(long_1,float_4,-1 );

	double_2 = double_2;
	return short_3;
}
char v_vedisPagerBegin( long parameter_1,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_2 = long_1 + long_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	double_1 = double_1 * double_1;
	char controller4vul_1025[2];
	fgets(controller4vul_1025 ,2 ,stdin);
	if( strcmp( controller4vul_1025, "k") > 0)
	{
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double_1 = double_1;
		if(1)
		{
			char char_1 = 1;
			char char_3 = 1;
			char char_4 = 1;
			char_1 = char_1 * char_1;
			char_4 = char_2 * char_3;
			double_1 = double_2 * double_2;
		}
		double_3 = double_1 * double_2;
		float_2 = float_1 + float_2;
		double_4 = double_3 * double_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		char controller4vul_1026[2];
		fgets(controller4vul_1026 ,2 ,stdin);
		if( strcmp( controller4vul_1026, "K") < 0)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double_2 = double_5 + double_2;
			char controller4vul_1027[3];
			fgets(controller4vul_1027 ,3 ,stdin);
			if( strcmp( controller4vul_1027, "}z") > 0)
			{
				long long_3 = 1;
				unsigned_int_2 = v_pager_shared_lock(int_2,uni_para);

				long_3 = long_2 + long_2;
			}
			unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
		}
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "8#") == 0)
	{
		double_3 = double_5 + double_4;
	}
	int_3 = int_1;
	return char_2;
}
long v_vedisPageWrite( char parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_3 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	char controller4vul_1023[3];
	fgets(controller4vul_1023 ,3 ,stdin);
	if( strcmp( controller4vul_1023, ".:") > 0)
	{
		short short_2 = 1;
		short_2 = short_1 + short_2;
		char controller4vul_1024[3];
		fgets(controller4vul_1024 ,3 ,stdin);
		if( strcmp( controller4vul_1024, "J!") < 0)
		{
			char_1 = v_vedisPagerBegin(long_1,uni_para);

		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
		if(1)
		{
			short short_3 = 1;
			short_3 = short_1 + short_1;
		}
	}
	int_2 = int_1 + int_1;
	return long_1;
}
float v_vedisKvIopageWrite( float parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_2;
	char controller4vul_1022[3];
	fgets(controller4vul_1022 ,3 ,stdin);
	if( strcmp( controller4vul_1022, "-m") > 0)
	{
		long_1 = v_vedisPageWrite(char_1,uni_para);

	}
	long_2 = long_2 * long_3;
	return float_1;
}
long v_vedisKvIoNewPage( long parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	unsigned_int_1 = v_pager_shared_lock(int_1,-1 );

	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 * long_2;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	return long_1;
	char_1 = v_vedisPagerAcquire(float_1,int_1,char_3,int_2,int_2);

}
char v_vedisKvIoPageLookup( long parameter_1,long parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = v_vedisPagerAcquire(float_1,int_1,char_2,int_1,int_2);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	return char_1;
}
double v_page_ref( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_2;
	return double_1;
}
void v_pager_link_page( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	float float_2 = 1;
	short_1 = v_SyZero(short_2);

	long_1 = long_1 + long_1;
	short_3 = short_3 * short_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		short short_4 = 1;
		short_2 = short_4;
	}
	float_1 = v_SyMemBackendFree(double_1);

	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	double_4 = double_2 * double_3;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2 * long_2;
		float_1 = float_2 + float_1;
		short_2 = short_2 * short_2;
		float_2 = float_1 * float_1;
		if(1)
		{
			short short_5 = 1;
			double double_5 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_4 = 1;
			int int_5 = 1;
			short_5 = short_3;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
			v_SyMemBackendAlloc(long_2,float_2,-1 );

			double_3 = double_5 * double_4;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char char_1 = 1;
				short short_6 = 1;
				short short_7 = 1;
				if(1)
				{
					float float_3 = 1;
					float_3 = float_3 + float_3;
				}
				short_3 = short_3;
				double_5 = double_4 + double_3;
				int_1 = int_3 * int_1;
				if(1)
				{
					int_2 = int_2 + int_1;
				}
				char_1 = char_1 + char_1;
				short_6 = short_1 * short_3;
				short_5 = short_7;
			}
			double_5 = double_4 + double_3;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
			int_5 = int_3 + int_4;
		}
	}
}
int v_pager_get_page_contents( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_1 = int_1;
		int_3 = int_2 * int_3;
	}
	if(1)
	{
		short_1 = v_SyZero(short_1);

		short_1 = short_1;
	}
	return int_1;
	double_3 = v_vedisOsRead(int_4,unsigned_int_1,long_1);

}
float v_pager_alloc_page( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_2;
	double_3 = double_1 + double_3;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_2;
	short_1 = v_SyZero(short_1);

	float_1 = float_1 * float_1;
	float_2 = float_1 * float_1;
	float_1 = v_SyMemBackendPoolAlloc(char_3,char_4);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	return float_2;
}
int v_vedisGetPageSize()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	return int_1;
}
int v_vedisOsSectorSize( unsigned int parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	return int_1;
}
char v_GetSectorSize()
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	float_1 = float_1 * float_2;
	if(1)
	{
		char char_1 = 1;
		int_1 = v_vedisOsSectorSize(unsigned_int_1);

		char_2 = char_1 * char_1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
		}
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_2 + int_3;
		}
	}
	return char_2;
}
float v_SyDosTimeFormat( unsigned int parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float_2 = float_1 + float_2;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_3 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1;
	float_4 = float_3 * float_4;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_4;
	return float_1;
}
float v_pager_extract_header( double parameter_1,float parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_4 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	int int_6 = 1;
	int_3 = int_1 * int_2;
	double_2 = double_1 * double_1;
	float_1 = v_SyBigEndianUnpack32(double_2,int_3);

	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	float_1 = float_2;
	float_2 = v_SyMemBackendDup(double_2,double_2,float_1,-1 );

	int_1 = int_3 * int_1;
	float_3 = v_SyDosTimeFormat(unsigned_int_1,unsigned_int_1);

	short_2 = short_1 * short_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	short_2 = short_2 + short_3;
	float_3 = float_3;
	long_2 = v_SyBigEndianUnpack16(short_3,unsigned_int_4);

	int_5 = int_3 + int_4;
	float_4 = float_2 + float_4;
	short_1 = short_1 + short_2;
	double_3 = double_1 * double_3;
	if(1)
	{
	}
	char_1 = char_2;
	double_2 = double_4 * double_5;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "cs") < 0)
	{
		double_3 = double_1;
	}
	int_5 = v_SyMemcmp(long_2,char_3,char_2);

	double_3 = double_5 + double_1;
	if(1)
	{
	}
	int_4 = int_6 * int_1;
	return float_2;
}
short v_pager_read_db_header( float parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	short short_4 = 1;
	char char_4 = 1;
	long long_4 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_8 = 1;
	float_1 = v_pager_extract_header(double_1,float_1,short_1);

	int_1 = int_1 + int_1;
	double_1 = double_2 * double_1;
	char_1 = char_1 + char_1;
	double_4 = double_2 + double_3;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	if(1)
	{
		int int_2 = 1;
		double double_5 = 1;
		char char_5 = 1;
		v_SyMemBackendAlloc(long_1,float_2,-1 );

		int_2 = int_1;
		int_1 = v_vedisGetPageSize();

		long_3 = long_2 * long_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			double_3 = v_vedisOsRead(int_3,unsigned_int_2,long_1);

			float_3 = float_2 + float_1;
		}
		int_2 = int_2 * int_2;
		if(1)
		{
			short_2 = v_SyZero(short_3);

			int_3 = int_3 + int_1;
		}
		char_1 = char_2 + char_3;
		if(1)
		{
			short_1 = short_1 * short_1;
		}
		double_4 = v_SyStrlen(float_4);

		double_2 = double_5 * double_4;
		if(1)
		{
			unsigned_int_2 = v_vedisGenError(int_3,short_3,-1 );

			double_2 = v_vedisGenOutofMem(double_3);

			char_1 = char_3 + char_2;
		}
		short_2 = v_vedisOsFileSize(double_4,unsigned_int_2);

		short_1 = short_1 + short_2;
		short_4 = v_vedisFindKVStore(char_2,char_3);

		short_1 = v_vedisGenErrorFormat(unsigned_int_1,float_3,float_3);

		char_3 = char_3;
		char_5 = char_2 + char_4;
		if(1)
		{
			int int_4 = 1;
			int_4 = int_3 * int_3;
		}
		long_4 = long_2 + long_2;
		if(1)
		{
		}
	}
	if(1)
	{
		short short_5 = 1;
		short short_7 = 1;
		long_4 = long_2 * long_2;
		long_3 = long_2 * long_3;
		char_4 = v_GetSectorSize();

		short_2 = short_5 + short_5;
		short_7 = short_2 + short_6;
	}
	unsigned_int_3 = v_vedisPagerRegisterKvEngine(short_6,unsigned_int_3,-1 );

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char char_6 = 1;
		char_6 = char_6 + char_4;
	}
	float_2 = float_3 + float_2;
	return short_8;
}
short v_vedisOsCloseFree( char parameter_1,float parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
		long long_1 = 1;
		float float_2 = 1;
		float_1 = v_SyMemBackendFree(double_1);

		long_1 = long_1 + long_1;
		float_1 = float_2;
	}
	return short_1;
}
unsigned int v_pager_fetch_page( unsigned int parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 + short_1;
		}
		if(1)
		{
		}
		double_1 = double_1 + double_1;
	}
	return unsigned_int_1;
}
double v_pager_fill_page( int parameter_1,char parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = v_pager_fetch_page(unsigned_int_2,long_1);

	double_1 = v_SyMemcpy(unsigned_int_2,int_1);

	double_1 = double_2 * double_3;
	if(1)
	{
	}
	float_2 = float_2;
	return double_1;
}
char v_vedisOsWrite( double parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4)
{
	char char_1 = 1;
	return char_1;
}
unsigned int v_pager_cksum( int parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float_1 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	return unsigned_int_4;
}
long v_pager_play_back_one_page( float parameter_1,char parameter_2,short parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	float float_4 = 1;
	long long_6 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = v_vedisOsRead(int_1,unsigned_int_1,long_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_3 = float_1 * float_2;
	int_2 = int_1 + int_1;
	long_5 = long_3 + long_4;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	unsigned_int_1 = v_pager_cksum(int_1,unsigned_int_3);

	unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	int_3 = int_3;
	if(1)
	{
	}
	unsigned_int_7 = unsigned_int_3 + unsigned_int_3;
	short_1 = v_ReadInt32(char_1,short_1,double_1);

	long_2 = long_2 + long_2;
	if(1)
	{
	}
	char_1 = v_vedisOsWrite(double_1,unsigned_int_5,unsigned_int_1,int_1);

	double_2 = v_pager_fill_page(int_3,char_2);

	double_3 = double_2 + double_3;
	float_4 = v_ReadInt64(unsigned_int_7,int_2,int_3);

	char_2 = char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_2 = double_1;
	if(1)
	{
		int_1 = int_3;
	}
	return long_6;
}
long v_vedisOsTruncate( unsigned int parameter_1,long parameter_2)
{
	long long_1 = 1;
	return long_1;
}
float v_ReadInt64( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	long long_2 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = v_SyBigEndianUnpack64(int_1,long_1);

	int_1 = int_1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	char_3 = char_2;
	return float_1;
	double_1 = v_vedisOsRead(int_1,unsigned_int_1,long_2);

}
short v_ReadInt32( char parameter_1,short parameter_2,double parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float_1 = v_SyBigEndianUnpack32(double_1,int_1);

	double_2 = double_1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	double_1 = v_vedisOsRead(int_1,unsigned_int_1,long_1);

	unsigned_int_1 = unsigned_int_1;
	return short_1;
}
double v_vedisOsRead( int parameter_1,unsigned int parameter_3,long parameter_4)
{
	double double_1 = 1;
	return double_1;
}
unsigned int v_pager_read_journal_header( long parameter_1,unsigned int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	char char_2 = 1;
	short short_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	double double_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = v_ReadInt64(unsigned_int_2,int_1,int_2);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	int_2 = int_2 + int_1;
	double_2 = double_1 * double_1;
	short_1 = v_vedisOsFileSize(double_2,unsigned_int_1);

	short_2 = short_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	short_1 = v_ReadInt32(char_1,short_3,double_3);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_4 = int_3 * int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	long_2 = long_1 * long_2;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	double_3 = v_vedisOsRead(int_2,unsigned_int_1,long_2);

	int_1 = int_3 + int_1;
	int_4 = v_SyMemcmp(long_2,char_1,char_2);

	short_4 = short_3 + short_1;
	if(1)
	{
	}
	int_1 = int_5 * int_5;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	double_4 = double_4;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_5;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_5 + unsigned_int_2;
	long_2 = long_1 * long_3;
	if(1)
	{
	}
	if(1)
	{
	}
	double_3 = double_1 * double_5;
	float_3 = float_3 * float_3;
	unsigned_int_2 = unsigned_int_2;
	return unsigned_int_6;
}
char v_pager_playback( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	float float_4 = 1;
	short short_4 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_5 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float_1 = float_1 * float_2;
	float_1 = v_SyMemBackendFree(double_1);

	float_3 = float_2 * float_1;
	unsigned_int_1 = v_vedisGenError(int_1,short_1,-1 );

	short_1 = v_SyZero(short_1);

	short_3 = short_2 + short_2;
	v_SyMemBackendAlloc(long_1,float_4,-1 );

	short_4 = short_3 + short_3;
	double_2 = double_1 + double_2;
	if(1)
	{
		if(1)
		{
			char_1 = char_1 + char_1;
		}
		double_2 = v_vedisGenOutofMem(double_2);

		double_3 = double_2 * double_2;
	}
	short_3 = v_vedisOsSync(double_3,int_2);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_3;
	}
	short_5 = v_vedisGenErrorFormat(unsigned_int_2,float_5,float_2);

	double_2 = double_1 + double_2;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_4 = v_pager_read_journal_header(long_2,unsigned_int_3,float_3);

	unsigned_int_2 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		if(1)
		{
			if(1)
			{
				long_3 = long_3;
				long_1 = v_pager_play_back_one_page(float_2,char_1,short_5);

				double_1 = double_3 * double_1;
			}
		}
	}
	long_3 = long_3 + long_1;
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_4 = int_5;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		long_2 = v_vedisOsTruncate(unsigned_int_3,long_4);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
	}
	return char_1;
}
short v_vedisOsSync( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	return short_1;
}
long v_vedisOsUnlock( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
short v_pager_unlock_db( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_2 = int_1 * int_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	return short_1;
	long_1 = v_vedisOsUnlock(char_1,int_1);

}
int v_vedisOsDelete( float parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	return int_1;
}
short v_vedisOsFileSize( double parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	return short_1;
}
short v_vedisOsCheckReservedLock( long parameter_1,int parameter_2)
{
	short short_1 = 1;
	return short_1;
}
double v_vedisOsAccess( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	return double_1;
}
float v_pager_has_hot_journal( int parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_1036[2];
	fgets(controller4vul_1036 ,2 ,stdin);
	if( strcmp( controller4vul_1036, "6") < 0)
	{
		int int_1 = 1;
		int_1 = int_1 * int_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		char controller4vul_1037[3];
		fgets(controller4vul_1037 ,3 ,stdin);
		if( strcmp( controller4vul_1037, "mn") < 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			float_2 = float_1 + float_1;
			long_1 = long_1 * long_2;
			char controller4vul_1038[3];
			fgets(controller4vul_1038 ,3 ,stdin);
			if( strcmp( controller4vul_1038, "2{") > 0)
			{
				unsigned int unsigned_int_4 = 1;
				char controller4vul_1039[2];
				fgets(controller4vul_1039 ,2 ,stdin);
				if( strcmp( controller4vul_1039, "D") > 0)
				{
					char controller4vul_1040[2];
					fgets(controller4vul_1040 ,2 ,stdin);
					if( strcmp( controller4vul_1040, "e") < 0)
					{
						int int_3 = 1;
						int int_4 = 1;
						int_2 = v_pager_lock_db(unsigned_int_3,int_2,uni_para);

						int_4 = int_2 * int_3;
						unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
					}
				}
				if(1)
				{
					unsigned int unsigned_int_5 = 1;
					unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
				}
			}
		}
	}
	return float_2;
}
int v_pager_journal_rollback( int parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_1034[3];
	fgets(controller4vul_1034 ,3 ,stdin);
	if( strcmp( controller4vul_1034, ":|") < 0)
	{
		double_1 = double_1 * double_2;
		float_1 = float_1 + float_1;
		char controller4vul_1035[3];
		fgets(controller4vul_1035 ,3 ,stdin);
		if( strcmp( controller4vul_1035, "Z{") < 0)
		{
			float_2 = v_pager_has_hot_journal(int_1,int_1,uni_para);

		}
		if(1)
		{
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	float_4 = float_3 * float_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		char_1 = char_2;
		long_1 = long_1 + long_1;
	}
	double_2 = double_1;
	if(1)
	{
		float float_5 = 1;
		float float_6 = 1;
		int_1 = int_1;
		float_6 = float_5 * float_2;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_3 + double_2;
	double_1 = double_1 * double_3;
	unsigned_int_4 = unsigned_int_4;
	unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	return int_1;
}
long v_vedisOsLock( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
int v_pager_lock_db( unsigned int parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_1041[3];
	fgets(controller4vul_1041 ,3 ,stdin);
	if( strcmp( controller4vul_1041, "ck") < 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		char controller4vul_1042[3];
		fgets(controller4vul_1042 ,3 ,stdin);
		if( strcmp( controller4vul_1042, "#O") > 0)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = v_vedisGenError(int_1,short_1,uni_para);

			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
			int int_2 = 1;
			int_1 = int_1 * int_2;
		}
	}
	return int_1;
}
double v_pager_wait_on_lock( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_1;
	short_1 = short_2;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	short_2 = short_1 * short_2;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_3;
	float_3 = float_1 + float_2;
	double_2 = double_1 + double_1;
	int_2 = int_1 * int_1;
	float_1 = float_3 * float_4;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	double_2 = double_3 * double_2;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
	float_4 = float_4 + float_3;
	int_3 = int_2 + int_3;
	double_3 = double_3;
	double_2 = double_1 * double_1;
	int_1 = v_pager_lock_db(unsigned_int_6,int_1,-1 );

	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	float_5 = float_3 + float_1;
	int_2 = int_1 + int_1;
	long_1 = long_2;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	return double_4;
}
double v_SyBlobFormatAp( char parameter_1,long parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1 * long_2;
	if(1)
	{
		long long_3 = 1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "B") < 0)
		{
		}
		double_1 = v_FormatMount(unsigned_int_1,char_1,float_1,int_1,unsigned_int_2);

		long_3 = long_3 + long_3;
	}
	return double_1;
}
short v_vedisGenErrorFormat( unsigned int parameter_1,float parameter_2,float parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double_1 = v_SyBlobFormatAp(char_1,long_1,int_1);

	unsigned_int_1 = unsigned_int_2;
	long_2 = long_1 * long_1;
	unsigned_int_1 = v_SyBlobAppend(int_2,float_1,char_1,-1 );

	float_2 = float_2 * float_1;
	int_2 = int_2;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	return short_1;
}
void v_vedisOsOpen( int parameter_1,float parameter_2,char parameter_3,char parameter_4,short parameter_5)
{
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	v_SyMemBackendAlloc(long_1,float_1,-1 );

	short_2 = short_1 * short_2;
	int_3 = int_1 + int_2;
	short_2 = v_SyZero(short_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	int_4 = int_4 + int_1;
	float_1 = v_SyMemBackendFree(double_2);

	int_4 = int_5 * int_4;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		long_1 = long_1 * long_1;
		unsigned_int_4 = unsigned_int_2;
	}
	float_3 = float_2 + float_3;
}
unsigned int v_pager_shared_lock( int parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	char_1 = char_1 * char_2;
	char controller4vul_1028[3];
	fgets(controller4vul_1028 ,3 ,stdin);
	if( strcmp( controller4vul_1028, "S5") < 0)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_5 = 1;
		int int_7 = 1;
		int_1 = int_1 * int_1;
		double_2 = double_1 * double_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		long_2 = long_1 * long_2;
		char controller4vul_1029[2];
		fgets(controller4vul_1029 ,2 ,stdin);
		if( strcmp( controller4vul_1029, "n") < 0)
		{
			double double_3 = 1;
			if(1)
			{
				double_3 = double_3;
				if(1)
				{
				}
			}
			double_2 = double_2 + double_3;
			if(1)
			{
			}
			char controller4vul_1030[2];
			fgets(controller4vul_1030 ,2 ,stdin);
			if( strcmp( controller4vul_1030, "g") < 0)
			{
				char controller4vul_1031[3];
				fgets(controller4vul_1031 ,3 ,stdin);
				if( strcmp( controller4vul_1031, "$|") > 0)
				{
					unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
					char controller4vul_1032[3];
					fgets(controller4vul_1032 ,3 ,stdin);
					if( strcmp( controller4vul_1032, "-s") < 0)
					{
						int_3 = int_1 * int_2;
						unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
						char controller4vul_1033[2];
						fgets(controller4vul_1033 ,2 ,stdin);
						if( strcmp( controller4vul_1033, "F") > 0)
						{
							unsigned int unsigned_int_4 = 1;
							int_3 = v_pager_journal_rollback(int_2,int_4,uni_para);

							unsigned_int_2 = unsigned_int_4;
							double_3 = double_3 + double_2;
						}
					}
					if(1)
					{
						long long_3 = 1;
						double_1 = double_3;
						long_3 = long_3 + long_1;
					}
				}
			}
			int_5 = int_2 + int_4;
			int_3 = int_2 * int_4;
			if(1)
			{
				unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
				if(1)
				{
					int int_6 = 1;
					int_4 = int_1;
					int_6 = int_7;
					int_5 = int_7;
				}
			}
		}
		if(1)
		{
			int_7 = int_2 * int_5;
		}
	}
	return unsigned_int_3;
}
char v_vedisPagerAcquire( float parameter_1,int parameter_2,char parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int_2 = int_1 * int_1;
	char_2 = char_1 + char_1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	double_2 = v_vedisGenOutofMem(double_3);

	short_1 = short_2;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = v_pager_fetch_page(unsigned_int_1,long_1);

			int_1 = int_3 * int_2;
		}
		unsigned_int_2 = v_pager_shared_lock(int_2,-1 );

		short_2 = v_SyMemBackendPoolFree(double_2);

		char_3 = char_3 + char_3;
	}
	if(1)
	{
		int int_5 = 1;
		double_2 = v_page_ref(unsigned_int_1);

		short_2 = short_2 * short_2;
		if(1)
		{
			char_2 = char_3 * char_2;
		}
		float_1 = v_pager_alloc_page(double_3,double_4);

		int_1 = v_pager_get_page_contents(int_1,int_3,int_3);

		char_1 = char_1 * char_2;
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_2 = float_2 * float_3;
		}
		int_1 = int_4 + int_5;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		}
	}
	if(1)
	{
		v_pager_link_page(double_3,int_3);

		int_4 = int_1;
	}
	return char_2;
}
int v_vedisKvIoPageGet( float parameter_1,long parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = v_vedisPagerAcquire(float_1,int_1,char_2,int_2,int_3);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
unsigned int v_pager_kv_io_init( short parameter_1,short parameter_2,char parameter_3,int uni_para)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float_1 = v_vedisKvIopageWrite(float_1,uni_para);

	double_2 = double_1 * double_1;
	char_2 = char_1 * char_1;
	float_2 = float_3;
	int_1 = int_1 * int_2;
	double_3 = double_1 + double_1;
	double_3 = double_1 + double_3;
	double_5 = double_1 + double_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	char_1 = char_2 * char_3;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_4;
	int_1 = int_2 + int_3;
	int_5 = int_2 * int_4;
	double_5 = double_2 + double_4;
	double_5 = double_1;
	return unsigned_int_1;
}
double v_vedisGenOutofMem( double parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = v_vedisGenError(int_1,short_1,-1 );

	int_2 = int_1 * int_2;
	return double_1;
}
char v_vedisReleaseCursor( short parameter_1,long parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short_1 = short_1 * short_1;
	double_1 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	short_2 = v_SyMemBackendPoolFree(double_2);

	int_1 = int_1 + int_1;
	return char_1;
}
float v_pager_release_kv_engine( float parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_4 = 1;
	float_1 = v_SyMemBackendFree(double_1);

	char_2 = char_1 * char_2;
	char_1 = v_vedisReleaseCursor(short_1,long_1);

	double_1 = double_1 + double_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_3 = double_1 + double_2;
		int_1 = int_2;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_1 = float_2 + float_3;
	}
	short_1 = short_2;
	long_1 = long_1 + long_1;
	short_3 = short_2 * short_1;
	return float_4;
}
unsigned int v_vedisPagerRegisterKvEngine( short parameter_1,unsigned int parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_3 = int_1 * int_2;
	long_1 = long_1 + long_1;
	int_3 = int_1 + int_4;
	float_1 = float_1 * float_1;
	short_1 = short_1 + short_2;
	char_2 = char_1 + char_2;
	char controller4vul_1020[3];
	fgets(controller4vul_1020 ,3 ,stdin);
	if( strcmp( controller4vul_1020, "U2") > 0)
	{
		char controller4vul_1021[3];
		fgets(controller4vul_1021 ,3 ,stdin);
		if( strcmp( controller4vul_1021, "UC") > 0)
		{
			unsigned_int_1 = v_pager_kv_io_init(short_3,short_4,char_1,uni_para);

		}
		double_1 = double_1 + double_1;
	}
	int_1 = int_3 * int_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	int_2 = int_1 + int_2;
	if(1)
	{
		int_3 = int_4 * int_5;
		int_5 = int_4 * int_4;
	}
	double_1 = double_2 + double_1;
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	float_2 = float_2 * float_2;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		double double_3 = 1;
		unsigned_int_6 = unsigned_int_6 * unsigned_int_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_6;
			int_4 = int_2 + int_3;
		}
		double_4 = double_3 + double_3;
	}
	double_4 = double_1 + double_2;
	double_2 = double_5 + double_2;
	if(1)
	{
		unsigned_int_5 = unsigned_int_5 * unsigned_int_1;
	}
	int_3 = int_4 * int_5;
	float_1 = float_2 + float_2;
	return unsigned_int_1;
}
int v_randomByte( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_1;
	long_3 = long_2 * long_2;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	double_2 = double_1 * double_2;
	return int_1;
}
unsigned int v_SyRandomness( int parameter_1,long parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 + short_2;
	char_1 = char_1 + char_1;
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
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			char char_3 = 1;
			long long_4 = 1;
			if(1)
			{
				int_1 = v_randomByte(float_1);

				int_1 = int_1 + int_1;
			}
			long_3 = long_1 * long_2;
			int_3 = int_2 * int_1;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			}
			unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
			char_3 = char_1 + char_2;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double_2 = double_1 + double_1;
			}
			long_1 = long_4 + long_3;
			short_1 = short_1 * short_1;
			if(1)
			{
				int_2 = int_1;
			}
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		}
	}
	return unsigned_int_2;
}
char v_SyOSUtilRandomSeed(short parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	return char_1;
	double_1 = v_SyMemcpy(unsigned_int_1,int_1);

}
double v_SyRandomnessInit( long parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = v_SyOSUtilRandomSeed(short_1);

	float_3 = float_1 + float_2;
	short_2 = short_2 * short_3;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_2;
	}
	int_2 = int_2 + int_3;
	if(1)
	{
	}
	double_1 = double_2 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		double_2 = double_3 * double_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
		double_2 = double_1;
		int_4 = int_1;
	}
	double_1 = double_1 * double_2;
	return double_3;
}
unsigned int v_vedisGenError( int parameter_1,short parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	unsigned_int_1 = v_SyBlobAppend(int_1,float_1,char_1,uni_para);

	double_1 = double_2;
	float_3 = float_2 + float_2;
	short_1 = short_1 + short_1;
	return unsigned_int_1;
}
short v_vedisFindKVStore( char parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int_1 = v_SyStrnicmp(double_1,double_1,float_1);

	char_1 = char_1 + char_1;
	double_2 = v_SyStrlen(float_2);

	int_1 = int_1 * int_1;
	char_2 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "a]") > 0)
		{
		}
	}
	return short_1;
}
int v_SyStrnicmp( double parameter_1,double parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_2 = int_1 * int_1;
	short_3 = short_1 + short_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
		}
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "{") > 0)
		{
			short_4 = short_2 + short_2;
		}
		int_2 = int_2;
		float_1 = float_1 * float_1;
		float_2 = float_1;
		if(1)
		{
		}
		if(1)
		{
			short_4 = short_1 * short_1;
		}
		short_4 = short_1;
		int_2 = int_1 + int_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
		}
		if(1)
		{
			short short_5 = 1;
			short_5 = short_3 * short_3;
		}
		float_1 = float_2 * float_1;
		double_2 = double_3;
		float_4 = float_1 + float_3;
		if(1)
		{
		}
		if(1)
		{
			double double_4 = 1;
			double_2 = double_2 + double_4;
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		float_2 = float_2;
		char_2 = char_1 + char_2;
	}
	return int_1;
}
int v_vedisInMemory()
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_1 = v_SyStrlen(float_1);

	int_1 = v_SyStrnicmp(double_1,double_1,float_2);

	float_2 = float_2 + float_3;
	if(1)
	{
	}
	short_3 = short_1 * short_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
long v_vedisPagerOpen( int parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	int int_7 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_8 = 1;
	int int_9 = 1;
	long long_4 = 1;
	int int_10 = 1;
	float float_3 = 1;
	char char_1 = 1;
	short short_5 = 1;
	double double_6 = 1;
	float float_4 = 1;
	char char_3 = 1;
	float float_5 = 1;
	int int_12 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	short_1 = short_1;
	float_1 = float_1 * float_2;
	short_2 = short_1 * short_1;
	if(1)
	{
		int_1 = int_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	char controller4vul_1018[2];
	fgets(controller4vul_1018 ,2 ,stdin);
	if( strcmp( controller4vul_1018, "|") < 0)
	{
		int_2 = int_2;
		char controller4vul_1019[3];
		fgets(controller4vul_1019 ,3 ,stdin);
		if( strcmp( controller4vul_1019, "q[") < 0)
		{
			unsigned_int_1 = v_vedisPagerRegisterKvEngine(short_1,unsigned_int_2,uni_para);

			long_2 = long_1 + long_2;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	}
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	int_3 = int_3 + int_2;
	float_1 = float_1 * float_2;
	int_2 = int_3 + int_2;
	if(1)
	{
		int_5 = int_3 * int_4;
	}
	unsigned_int_6 = unsigned_int_4 + unsigned_int_3;
	int_4 = int_2 * int_2;
	if(1)
	{
		int_6 = int_4 * int_5;
		int_2 = int_6;
	}
	double_1 = double_2;
	if(1)
	{
	}
	int_1 = int_5 * int_2;
	double_1 = double_3 * double_3;
	float_1 = float_2 * float_2;
	long_3 = long_1;
	int_7 = int_3 * int_6;
	double_1 = double_2 + double_4;
	double_1 = double_2 * double_5;
	if(1)
	{
		int_8 = int_1 + int_6;
		double_3 = double_1 + double_4;
	}
	double_5 = double_1 + double_5;
	double_5 = double_1;
	int_9 = int_4 * int_1;
	long_4 = long_2 * long_2;
	unsigned_int_1 = unsigned_int_6;
	int_10 = int_10 + int_4;
	unsigned_int_3 = unsigned_int_6 + unsigned_int_2;
	double_2 = double_2 * double_1;
	short_2 = short_2 + short_2;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short short_6 = 1;
		short short_7 = 1;
		short_4 = short_3 * short_4;
		float_3 = float_2 + float_2;
		if(1)
		{
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
		if(1)
		{
			short_1 = short_2 * short_5;
			short_4 = short_1 * short_1;
			double_1 = double_5 * double_1;
		}
		if(1)
		{
			int int_11 = 1;
			int_4 = int_11;
		}
		unsigned_int_6 = unsigned_int_4 * unsigned_int_1;
		if(1)
		{
			long long_5 = 1;
			double_6 = double_6 + double_6;
			long_5 = long_2 * long_4;
		}
		float_4 = float_1 * float_4;
		char_3 = char_1 * char_3;
		short_7 = short_1 + short_6;
	}
	float_5 = float_4 * float_3;
	if(1)
	{
		int_12 = int_8;
	}
	if(1)
	{
		int_2 = int_12 * int_10;
		double_4 = double_1 * double_6;
	}
	if(1)
	{
		short short_8 = 1;
		char_1 = char_3 * char_3;
		short_5 = short_2 + short_8;
	}
	float_5 = float_2 * float_2;
	return long_4;
}
short v_vedisSanityzeFlag( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	short short_2 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
		int int_2 = 1;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		int_3 = int_1 * int_1;
	}
	if(1)
	{
		int_3 = int_1 + int_3;
	}
	if(1)
	{
		double double_3 = 1;
		double_1 = double_2 + double_2;
		double_3 = double_3;
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "tH") > 0)
	{
		if(1)
		{
			double_2 = double_2 * double_1;
		}
		if(1)
		{
			short short_1 = 1;
			short_2 = short_1 * short_1;
		}
	}
	return short_2;
}
short v_vedisInitDatabase( char parameter_1,short parameter_2,double parameter_3,float parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_8 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_9 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_2;
	int_4 = int_3 + int_3;
	int_7 = int_5 * int_6;
	char controller4vul_1017[3];
	fgets(controller4vul_1017 ,3 ,stdin);
	if( strcmp( controller4vul_1017, "qD") < 0)
	{
		long_1 = v_vedisPagerOpen(int_5,unsigned_int_1,int_8,double_1,uni_para);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	float_1 = float_1 + float_2;
	double_1 = double_1 + double_2;
	double_1 = double_3 * double_3;
	if(1)
	{
	}
	double_4 = double_4 + double_3;
	if(1)
	{
	}
	int_3 = int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	double_1 = double_3 * double_5;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_3 * double_5;
	int_8 = int_9 + int_9;
	return short_1;
}
char v_lhCursorReset( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 + double_2;
	return char_1;
	float_1 = v_lhCursorFirst(unsigned_int_1);

}
int v_lhCursorData( unsigned int parameter_1,unsigned int parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_2 = float_1 * float_2;
	short_2 = short_1 * short_2;
	long_1 = v_lhConsumeCellData(int_1,unsigned_int_1,int_1);

	char_2 = char_1 * char_2;
	if(1)
	{
	}
	short_3 = short_1 * short_1;
	double_2 = double_1 * double_2;
	return int_1;
}
char v_lhCursorDataLength( char parameter_1,short parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double_1 = double_1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	long_2 = long_1 + long_2;
	return char_1;
}
unsigned int v_lhCursorKey( char parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_3 * double_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		char char_2 = 1;
		v_lhConsumeCellkey(long_1,short_1,char_1,int_1);

		char_1 = char_1 * char_2;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_2 = short_3;
	}
	return unsigned_int_1;
}
char v_lhCursorKeyLength( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	char char_4 = 1;
	double_1 = double_1 + double_2;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	char_3 = char_1 * char_2;
	double_1 = double_1 + double_3;
	return char_4;
}
float v_lhRecordRemove( short parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_5 = 1;
	char_1 = char_1;
	double_2 = double_1 * double_2;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float_3 = float_1 + float_2;
		int_1 = int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_4 = 1;
			long_1 = v_lhUnlinkCell(float_1);

			double_3 = double_3 * double_3;
			if(1)
			{
			}
			int_1 = int_2 + int_1;
			unsigned_int_1 = v_SyBigEndianUnpack64(int_3,long_1);

			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
			}
			float_4 = float_1 + float_1;
			if(1)
			{
				int_2 = int_1;
			}
		}
	}
	short_1 = v_lhRestorePage(int_4,long_2);

	long_3 = long_1 * long_1;
	return float_5;
}
long v_lhCursorDelete( short parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_2 + float_1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	int_1 = int_1 * int_2;
	float_1 = v_lhRecordRemove(short_1);

	short_1 = short_1;
	return long_1;
}
void v_lhCursorPrev( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_2;
	long_3 = long_2 + long_3;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
	short_2 = short_1;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	unsigned_int_2 = v_lhCursorPrevPage();

}
char v_lhCursorNext( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_2;
	char_1 = char_1 + char_2;
	if(1)
	{
		char_3 = v_lhCursorNextPage(short_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_1;
	int_4 = int_3 + int_3;
	if(1)
	{
		int_4 = int_2 + int_3;
	}
	return char_1;
}
void v_lhCursorValid( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_2;
}
unsigned int v_lhCursorPrevPage()
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	char_1 = char_1 + char_2;
	int_2 = int_1 + int_1;
	char_4 = char_2 * char_3;
	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long_2 = long_1 * long_1;
		if(1)
		{
			long long_3 = 1;
			long_3 = long_1 + long_2;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			int_3 = v_lhLoadPage(short_2,unsigned_int_1,unsigned_int_2,long_1,int_4);

			float_2 = float_1 * float_1;
			int_4 = int_4;
		}
		double_1 = double_1 + double_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
		}
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			char_1 = char_1 + char_1;
			int_4 = int_2;
			double_3 = double_2 + double_2;
			short_1 = short_2 + short_2;
		}
		double_4 = double_5;
	}
	return unsigned_int_1;
}
double v_lhCursorLast( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char_2 = char_1 + char_1;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "}") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_3 = v_lhCursorPrevPage();

	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	return double_1;
}
char v_lhCursorNextPage( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	char char_1 = 1;
	double_3 = double_1 * double_2;
	int_1 = int_1 * int_2;
	int_2 = int_3 + int_2;
	float_3 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		int int_5 = 1;
		float float_5 = 1;
		float float_6 = 1;
		int_3 = int_4;
		if(1)
		{
			double_1 = double_2 * double_3;
		}
		if(1)
		{
			long long_2 = 1;
			long_1 = long_1 + long_2;
			double_3 = double_2 + double_1;
		}
		int_1 = int_5 + int_4;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
		if(1)
		{
			long long_3 = 1;
			float float_4 = 1;
			int_2 = int_4;
			long_1 = long_3 + long_1;
			int_2 = v_lhLoadPage(short_1,unsigned_int_2,unsigned_int_1,long_4,int_4);

			char_1 = char_1;
			float_4 = float_2;
		}
		float_5 = float_6;
	}
	return char_1;
}
float v_lhCursorFirst( unsigned int parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long_1 = long_1;
	float_1 = float_1 + float_2;
	float_1 = float_3 * float_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		int_2 = int_1 + int_1;
		if(1)
		{
		}
		double_1 = double_1 * double_1;
	}
	float_1 = float_1;
	char_1 = v_lhCursorNextPage(short_1);

	short_3 = short_2 * short_1;
	return float_1;
}
short v_lhRecordLookup( unsigned int parameter_1,short parameter_2,long parameter_3,float parameter_4)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	float float_4 = 1;
	double double_2 = 1;
	float float_6 = 1;
	short short_2 = 1;
	float_1 = float_1 + float_1;
	char_1 = char_2;
	unsigned_int_1 = v_lhFindCell(unsigned_int_1,char_2,char_2,int_1);

	float_1 = float_2 + float_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_1 + double_1;
	int_1 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
	}
	int_2 = int_3 + int_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		float float_5 = 1;
		int_2 = v_lhLoadPage(short_1,unsigned_int_4,unsigned_int_3,long_1,int_3);

		float_5 = float_1 * float_4;
	}
	float_4 = float_4 * float_2;
	if(1)
	{
	}
	int_3 = int_2 + int_1;
	if(1)
	{
	}
	double_2 = v_lhMapFindBucket(int_1,float_6);

	double_2 = double_2 + double_1;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_2 + int_1;
	}
	return short_2;
}
double v_lhCursorSeek( long parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 + int_2;
	int_4 = int_4 * int_3;
	if(1)
	{
		float float_1 = 1;
		int int_5 = 1;
		int int_6 = 1;
		float_1 = float_1 * float_1;
		int_3 = int_5 * int_2;
		int_3 = int_6 * int_1;
	}
	long_1 = long_1 * long_1;
	return double_1;
	short_1 = v_lhRecordLookup(unsigned_int_2,short_1,long_2,float_2);

}
double v_lhInitCursor( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 + double_2;
	char_2 = char_1 * char_2;
	int_1 = int_1 * int_2;
	int_3 = int_3 * int_4;
	float_2 = float_1 + float_1;
	double_2 = double_1 * double_2;
	int_2 = int_2 + int_1;
	return double_2;
}
unsigned int v_lhash_kv_append( long parameter_1,double parameter_2,int parameter_3,char parameter_4,short parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double_1 = v_lh_record_insert(unsigned_int_1,float_1,char_1,char_1,short_1,int_1);

	long_1 = long_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	return unsigned_int_5;
}
short v_lhRestorePage( int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	double_1 = v_SyBigEndianPack64(long_1,long_1);

	float_2 = float_1 + float_1;
	float_2 = float_1;
	int_2 = int_2;
	return short_1;
}
double v_lhRecordOverwrite( short parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	char char_3 = 1;
	int int_2 = 1;
	double double_5 = 1;
	long long_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	double double_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_9 = 1;
	double double_10 = 1;
	int int_7 = 1;
	float float_6 = 1;
	double double_14 = 1;
	double double_15 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = v_lhRestoreSpace(long_1,char_1,int_1);

	short_2 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_3;
	float_2 = float_1 + float_2;
	short_1 = short_1 * short_2;
	char_1 = char_1 * char_2;
	short_2 = v_lhAcquirePage(double_1,unsigned_int_4);

	double_2 = double_4 + double_1;
	char_1 = char_1 + char_3;
	if(1)
	{
	}
	if(1)
	{
		float_1 = v_lhCellWriteOvflPayload(short_1,int_2,int_1,double_5);

		unsigned_int_2 = v_SyBigEndianUnpack64(int_2,long_2);

		int_2 = int_3;
		if(1)
		{
			long_3 = long_2 * long_3;
		}
		if(1)
		{
			double_5 = v_lhAllocateSpace(float_2,int_2,unsigned_int_3);

			double_4 = double_2 + double_1;
			double_6 = double_4 * double_5;
			double_4 = double_3 + double_5;
			double_6 = v_lhMoveLocalCell(double_4,long_3,long_4,double_4);

			short_2 = short_2 * short_2;
		}
		if(1)
		{
			long long_6 = 1;
			long_5 = long_5 + long_6;
			short_4 = short_3 + short_3;
			if(1)
			{
				double_2 = v_SyMemcpy(unsigned_int_5,int_3);

				int_3 = int_2 + int_4;
				if(1)
				{
				}
				short_4 = short_2 + short_3;
				short_3 = v_lhRestorePage(int_5,long_1);

				float_3 = float_2 * float_2;
				double_3 = double_7 + double_7;
			}
			if(1)
			{
				long_2 = long_5;
				char_3 = char_1;
				unsigned_int_3 = unsigned_int_2;
				char_1 = char_2 * char_3;
			}
		}
	}
	double_2 = double_8 + double_3;
	if(1)
	{
	}
	double_4 = double_5 * double_5;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_7 = 1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3;
		}
		if(1)
		{
			double_7 = v_SyBigEndianPack64(long_5,long_4);

			short_4 = short_1;
		}
		long_2 = long_7 * long_4;
		if(1)
		{
			int_6 = int_4 + int_5;
			float_3 = float_4 * float_5;
		}
	}
	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	unsigned_int_3 = unsigned_int_7 * unsigned_int_2;
	float_1 = float_1 * float_4;
	double_9 = double_9 * double_7;
	double_10 = double_10 + double_6;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_6;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_8 = 1;
		int_7 = int_1 + int_2;
		if(1)
		{
			int_8 = int_6 * int_7;
		}
		if(1)
		{
			double double_11 = 1;
			float_3 = float_5 + float_4;
			if(1)
			{
			}
			double_6 = double_4 + double_11;
			if(1)
			{
			}
			double_6 = double_5 + double_3;
			int_8 = int_4 * int_2;
			double_8 = double_3 + double_6;
			double_4 = double_3 * double_2;
			int_8 = int_4;
			float_3 = float_1 + float_3;
		}
		float_4 = float_2 + float_6;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
		if(1)
		{
			double double_12 = 1;
			double double_13 = 1;
			double_12 = double_12 + double_13;
		}
		short_3 = short_1 + short_1;
		int_3 = int_6 + int_4;
		unsigned_int_7 = unsigned_int_2;
	}
	double_15 = double_14 + double_8;
	int_7 = int_2 * int_5;
	float_1 = float_6 * float_2;
	return double_15;
}
double v_lhMoveLocalCell( double parameter_1,long parameter_2,long parameter_3,double parameter_4)
{
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	char char_2 = 1;
	long long_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	long_1 = long_1 + long_1;
	double_1 = v_SyBigEndianPack16(long_1,char_1);

	float_2 = float_1 + float_1;
	double_1 = double_2 * double_3;
	float_1 = v_lhFindSibeling(char_1);

	long_2 = long_2 * long_2;
	if(1)
	{
		double_4 = double_2;
		int_1 = int_1;
	}
	if(1)
	{
		short_1 = v_lhCellWriteHeader(float_3);

		double_3 = double_4 + double_1;
		int_1 = int_1 * int_1;
	}
	char_2 = v_lhCellWriteLocalPayload(long_3,float_4,unsigned_int_1,unsigned_int_2,char_2);

	double_3 = double_2 + double_2;
	int_2 = int_2 * int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	long_1 = long_3 + long_2;
	return double_5;
}
double v_lhRecordAppend( double parameter_1,int parameter_2,float parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_5 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_4 = 1;
	int int_6 = 1;
	double double_5 = 1;
	int int_7 = 1;
	short short_5 = 1;
	char char_7 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_7 = 1;
	short short_8 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double_1 = double_1;
	int_1 = int_2;
	char_1 = char_1;
	int_2 = int_2;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	char_4 = char_2 * char_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		double_1 = double_1;
	}
	short_1 = v_lhAcquirePage(double_3,unsigned_int_2);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1;
		unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
		if(1)
		{
			double_3 = double_3 + double_2;
			if(1)
			{
			}
			unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
			char_5 = char_1 + char_5;
			unsigned_int_1 = v_lhRestoreSpace(long_1,char_1,int_2);

			int_2 = int_2;
		}
		if(1)
		{
			int_3 = int_1 + int_2;
			short_1 = short_1;
			unsigned_int_2 = v_SyBlobAppend(int_2,float_1,char_5,-1 );

			unsigned_int_2 = unsigned_int_5;
			unsigned_int_4 = unsigned_int_6 * unsigned_int_3;
			double_1 = v_lhMoveLocalCell(double_4,long_1,long_1,double_1);

			long_1 = long_2;
			if(1)
			{
				int_2 = int_3;
			}
			if(1)
			{
				char char_6 = 1;
				char_1 = char_2 + char_6;
			}
			long_2 = long_1 + long_1;
			unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
			unsigned_int_3 = unsigned_int_6 * unsigned_int_3;
		}
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_6;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	double_2 = v_SyBigEndianPack64(long_1,long_3);

	int_3 = int_3 + int_3;
	double_4 = double_2 * double_3;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_3;
	long_3 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_4 = 1;
			if(1)
			{
				unsigned_int_6 = unsigned_int_7 + unsigned_int_7;
			}
			int_1 = int_4 + int_5;
			if(1)
			{
			}
			long_2 = v_SyBlobInit(unsigned_int_1,short_2);

			int_5 = int_1 * int_2;
			int_2 = int_5 * int_1;
			short_4 = short_3 + short_3;
			double_4 = v_SyMemcpy(unsigned_int_6,int_2);

			unsigned_int_4 = unsigned_int_7 + unsigned_int_4;
			unsigned_int_7 = v_SyBigEndianUnpack64(int_1,long_4);

			int_1 = int_5 + int_4;
			int_3 = int_3 * int_6;
		}
		if(1)
		{
			double_3 = double_4 * double_3;
			double_5 = double_2 + double_1;
		}
		if(1)
		{
			long_2 = v_SyBlobRelease(long_3);

			int_1 = int_7 * int_6;
		}
		unsigned_int_6 = unsigned_int_1;
	}
	short_1 = short_2 + short_3;
	short_5 = short_4 * short_3;
	char_7 = char_4 * char_7;
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_6 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned_int_7 = unsigned_int_2 + unsigned_int_6;
		if(1)
		{
			short short_6 = 1;
			float_1 = v_lhCellWriteOvflPayload(short_3,int_5,int_2,double_1);

			short_6 = short_4 + short_4;
		}
		if(1)
		{
			float float_2 = 1;
			float_2 = float_2;
			if(1)
			{
			}
			char_2 = char_4 + char_5;
			if(1)
			{
			}
			float_2 = float_1 + float_3;
			float_1 = float_4 * float_4;
			double_2 = v_lhAllocateSpace(float_3,int_3,unsigned_int_1);

			double_4 = double_6 + double_3;
			float_2 = float_4 * float_3;
			double_6 = double_3 * double_5;
			unsigned_int_8 = unsigned_int_4 + unsigned_int_8;
		}
		double_6 = double_4 * double_3;
		int_6 = int_1 * int_2;
		if(1)
		{
			unsigned_int_6 = unsigned_int_7 + unsigned_int_8;
		}
		int_7 = int_1;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
		float_4 = float_4 * float_1;
	}
	int_5 = int_2 + int_2;
	short_8 = short_7 * short_5;
	float_6 = float_4 * float_5;
	return double_5;
}
float v_lhFindSibeling( char parameter_1)
{
	float float_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
		}
	}
	return float_1;
}
long v_lhUnlinkCell( float parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	char char_4 = 1;
	int int_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	float_1 = v_lhFindSibeling(char_1);

	short_1 = short_1;
	short_2 = short_2 + short_2;
	long_1 = v_lhCellDiscard(char_2);

	char_1 = char_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_2 + char_3;
	unsigned_int_1 = v_lhRestoreSpace(long_2,char_4,int_1);

	short_3 = short_1 * short_3;
	if(1)
	{
	}
	double_1 = v_SyBigEndianPack16(long_3,char_1);

	long_4 = long_1 * long_2;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_2 + double_2;
		short_2 = short_3 + short_1;
	}
	if(1)
	{
		double double_4 = 1;
		short_3 = short_3 + short_1;
		double_4 = double_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_3 + int_1;
	return long_1;
}
long v_lhConsumeCellData( int parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	int int_4 = 1;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	int_3 = int_1;
	if(1)
	{
		char_2 = char_1 + char_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			long long_1 = 1;
			long_2 = long_1 + long_1;
		}
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_7 = 1;
		double_1 = double_3 + double_2;
		int_4 = int_4 * int_2;
		double_2 = double_3 + double_4;
		short_3 = short_1 + short_2;
		unsigned_int_1 = v_SyBigEndianUnpack64(int_4,long_2);

		double_3 = double_1 + double_5;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_6 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_6 = 1;
			if(1)
			{
				int int_5 = 1;
				int_1 = int_2 * int_5;
			}
			unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
			if(1)
			{
			}
			float_1 = float_1 * float_2;
			if(1)
			{
				long long_3 = 1;
				float float_3 = 1;
				long_3 = long_2 + long_2;
				double_1 = double_3 * double_4;
				float_3 = float_3 + float_1;
			}
			if(1)
			{
				char char_4 = 1;
				double_5 = double_5 * double_6;
				char_4 = char_3 + char_1;
			}
			if(1)
			{
				double_6 = double_2 + double_5;
				if(1)
				{
					int_2 = int_2 * int_1;
				}
				unsigned_int_5 = unsigned_int_6 + unsigned_int_6;
			}
			if(1)
			{
				if(1)
				{
					short_1 = short_2 * short_1;
					if(1)
					{
						char char_5 = 1;
						char_2 = char_5 * char_3;
					}
					char_1 = char_3;
				}
			}
			unsigned_int_6 = unsigned_int_3 + unsigned_int_6;
			int_7 = int_2 * int_6;
		}
		int_7 = int_7 + int_1;
	}
	return long_2;
}
char v_SyBlobReset( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char_2 = char_1 + char_1;
		int_1 = int_3;
		short_1 = short_1 * short_2;
	}
	return char_3;
}
unsigned int v_SyBlobDup( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = v_SyBlobAppend(int_1,float_1,char_1,-1 );

	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2;
	}
	return unsigned_int_3;
}
unsigned int v_lhTransferCell( char parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_1 = 1;
	float float_3 = 1;
	int int_3 = 1;
	double double_5 = 1;
	long long_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char_3 = char_1 + char_2;
	int_1 = int_1 * int_2;
	float_1 = v_lhFindSlavePage(int_2,long_1,unsigned_int_1,char_3);

	float_1 = v_lhInstallCell(float_2);

	double_3 = double_1 * double_2;
	double_1 = double_4 * double_2;
	if(1)
	{
		double_2 = double_1 * double_4;
		if(1)
		{
		}
	}
	char_2 = char_2 + char_4;
	if(1)
	{
	}
	char_5 = char_1 * char_4;
	short_1 = v_lhCellWriteHeader(float_3);

	int_3 = int_1;
	unsigned_int_1 = unsigned_int_1;
	int_3 = v_lhNewCell(double_5,long_2);

	unsigned_int_1 = v_SyBlobDup(int_1,char_4);

	int_1 = int_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_2 + short_1;
	short_4 = short_2 + short_3;
	double_4 = double_1 * double_4;
	double_1 = v_lhAllocateSpace(float_3,int_2,unsigned_int_1);

	long_2 = long_1 + long_2;
	if(1)
	{
	}
	double_4 = double_2 + double_5;
	return unsigned_int_2;
}
int v_lhPageSplit( long parameter_1,double parameter_2,char parameter_3,short parameter_4)
{
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	long long_2 = 1;
	int int_6 = 1;
	short_1 = short_1 + short_1;
	double_1 = double_1;
	long_1 = v_lhUnlinkCell(float_1);

	short_2 = short_1 * short_1;
	double_2 = double_3;
	char_2 = char_1 + char_1;
	char_1 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_5 = 1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		short_2 = short_3 * short_4;
		short_3 = v_vedisDataConsumer(int_1,long_1);

		short_4 = short_5 + short_1;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			double_2 = v_lhStoreCell(float_2,double_1,short_1,long_1,float_1,double_3,int_2);

			long_1 = v_SyBlobRelease(long_1);

			int_3 = int_1;
			if(1)
			{
				unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
			}
			if(1)
			{
				char char_4 = 1;
				char_3 = v_SyBlobReset(int_3);

				int_3 = int_1 * int_3;
				if(1)
				{
					unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
					if(1)
					{
						char_4 = char_3 + char_3;
					}
				}
				double_1 = double_3 + double_3;
				if(1)
				{
					long_1 = v_lhConsumeCellData(int_4,unsigned_int_5,int_2);

					char_3 = char_4 * char_2;
				}
				double_2 = double_2 + double_3;
			}
			if(1)
			{
				unsigned_int_4 = v_lhTransferCell(char_1,double_3);

				int_3 = int_4 * int_4;
			}
			unsigned_int_6 = unsigned_int_3 + unsigned_int_2;
		}
		char_1 = char_2 + char_3;
	}
	int_3 = int_4 * int_5;
	long_2 = v_SyBlobInit(unsigned_int_3,short_4);

	float_1 = float_1;
	return int_6;
	v_lhConsumeCellkey(long_2,short_3,char_1,int_4);

}
long v_lhSplit( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	int int_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	short short_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	long long_7 = 1;
	long_1 = v_lhSetEmptyPage(long_1);

	short_2 = short_1 * short_2;
	char_3 = char_1 * char_2;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	int_1 = v_lhPageSplit(long_1,double_1,char_1,short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_2 + double_2;
	if(1)
	{
	}
	short_2 = v_lhAcquirePage(double_2,unsigned_int_2);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
	}
	float_1 = v_lhMapWriteRecord(unsigned_int_2,unsigned_int_1,long_1);

	double_1 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
	}
	long_2 = long_1;
	if(1)
	{
		short_1 = short_2;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	double_1 = v_lhMapFindBucket(int_2,float_2);

	long_2 = long_1 * long_1;
	char controller_8[3];
	fgets(controller_8 ,3 ,stdin);
	if( strcmp( controller_8, "4e") > 0)
	{
		double_3 = double_1 + double_2;
	}
	double_4 = double_2 + double_1;
	double_1 = v_SyBigEndianPack64(long_1,long_2);

	int_4 = int_2 + int_3;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		long long_4 = 1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_6;
		float_1 = float_2 + float_1;
		int_4 = int_4 + int_1;
		if(1)
		{
			float_1 = v_lhNewPage(float_2,long_3,short_3);

			unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
		}
		unsigned_int_1 = unsigned_int_6;
		long_4 = long_2 + long_1;
	}
	if(1)
	{
		double_4 = double_3 + double_2;
	}
	long_6 = long_3 + long_5;
	return long_7;
	int_3 = v_lhLoadPage(short_3,unsigned_int_3,unsigned_int_3,long_3,int_2);

}
long v_lhRecordInstall( short parameter_1,long parameter_2,int parameter_3,char parameter_4,float parameter_5,char parameter_6)
{
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	double_1 = v_lhStoreCell(float_1,double_1,short_1,long_1,float_2,double_2,int_1);

	short_3 = short_1 * short_2;
	float_1 = float_2 + float_1;
	if(1)
	{
		double double_3 = 1;
		float float_3 = 1;
		long_2 = v_lhSplit(char_1,int_1);

		double_3 = double_1;
		float_3 = float_3;
		if(1)
		{
			if(1)
			{
			}
			int_1 = int_1 * int_1;
		}
	}
	return long_3;
}
char v_lhKeyCmp( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 * long_2;
	if(1)
	{
		if(1)
		{
		}
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	return char_1;
}
unsigned int v_lhFindCell( unsigned int parameter_1,char parameter_2,char parameter_3,int parameter_4)
{
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	v_lhConsumeCellkey(long_1,short_1,char_1,int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		if(1)
		{
			short short_3 = 1;
			short_3 = short_1 + short_2;
		}
		if(1)
		{
			if(1)
			{
				float float_3 = 1;
				float float_4 = 1;
				short short_4 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				float_2 = float_3 + float_3;
				float_1 = float_1 * float_4;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
				short_2 = short_4 + short_2;
				double_3 = double_1 * double_2;
				char_1 = char_1 + char_1;
				if(1)
				{
				}
			}
			if(1)
			{
			}
		}
		char_1 = v_lhKeyCmp(int_1,int_1);

		int_1 = int_1 * int_1;
	}
	return unsigned_int_3;
}
short v_vedisDataConsumer( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	unsigned_int_1 = v_SyBlobAppend(int_1,float_1,char_1,-1 );

	int_2 = int_1 * int_1;
	int_4 = int_2 * int_3;
	return short_1;
}
void v_lhConsumeCellkey( long parameter_1,short parameter_2,char parameter_3,int parameter_6)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short_2 = short_1 * short_2;
	double_1 = double_1 * double_1;
	int_2 = int_1 + int_2;
	double_2 = double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_1 = double_1;
		short_5 = short_3 * short_4;
		if(1)
		{
			int_4 = int_3 * int_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_5 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		short_1 = short_5 * short_2;
		double_2 = double_2;
		long_2 = long_1 * long_1;
		float_1 = float_1;
		int_3 = int_2 + int_2;
		double_4 = double_3 * double_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_6 = 1;
			float float_2 = 1;
			char char_1 = 1;
			short short_7 = 1;
			if(1)
			{
				unsigned_int_4 = v_SyBigEndianUnpack64(int_3,long_3);

				short_6 = short_3 * short_3;
			}
			float_2 = float_1 + float_1;
			if(1)
			{
			}
			float_2 = float_2 + float_2;
			if(1)
			{
				float float_3 = 1;
				unsigned int unsigned_int_5 = 1;
				float_1 = float_1 + float_3;
				char_1 = char_1 + char_1;
				long_4 = v_SyBigEndianUnpack16(short_4,unsigned_int_2);

				unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
				int_5 = int_5 + int_5;
				if(1)
				{
					int_4 = int_5;
				}
				unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
			}
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				double double_5 = 1;
				unsigned_int_7 = unsigned_int_6 * unsigned_int_6;
				if(1)
				{
					int_5 = int_1 * int_5;
				}
				double_5 = double_1 * double_5;
			}
			if(1)
			{
				char char_2 = 1;
				char_2 = char_1 * char_2;
				if(1)
				{
					int int_6 = 1;
					int_1 = int_6 + int_5;
				}
				double_2 = double_1 + double_3;
			}
			short_7 = short_3 * short_6;
			int_2 = int_1 + int_2;
		}
		int_1 = int_4 + int_5;
	}
}
long v_lhParseOneCell( unsigned int parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_2 = 1;
	float float_3 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_5 = 1;
	short short_5 = 1;
	float float_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	float_2 = float_1 * float_1;
	long_1 = v_SyBlobRelease(long_1);

	unsigned_int_1 = unsigned_int_1;
	int_1 = v_lhNewCell(double_1,long_2);

	short_2 = short_1 + short_1;
	long_4 = long_1 * long_3;
	double_2 = double_1 + double_2;
	float_1 = float_3 * float_1;
	long_5 = long_3 + long_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	double_3 = double_2;
	unsigned_int_2 = v_SyBigEndianUnpack64(int_1,long_2);

	double_2 = double_2;
	short_1 = short_1 + short_1;
	int_2 = int_3;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	double_5 = double_2 + double_4;
	if(1)
	{
	}
	float_3 = float_2 + float_4;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_5;
	int_4 = int_2 * int_2;
	short_3 = short_2 * short_2;
	short_4 = v_vedisDataConsumer(int_3,long_5);

	double_7 = double_6 * double_6;
	int_1 = int_5 + int_3;
	float_2 = float_1 + float_4;
	int_1 = int_2;
	if(1)
	{
		float_3 = v_SyBigEndianUnpack32(double_4,int_4);

		long_4 = long_4 + long_3;
	}
	v_lhConsumeCellkey(long_1,short_5,char_1,int_3);

	float_5 = v_lhInstallCell(float_3);

	int_6 = int_1 + int_3;
	if(1)
	{
	}
	if(1)
	{
		long_4 = v_SyBigEndianUnpack16(short_2,unsigned_int_6);

		int_1 = int_5 * int_5;
	}
	return long_5;
}
void v_lhPageFreeSpace( char parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short_1 = short_1 + short_1;
	float_3 = float_1 + float_2;
	long_2 = long_1 + long_2;
	short_3 = short_2 + short_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	double_1 = double_4 * double_4;
	char_2 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long_2 = long_3 * long_2;
		int_2 = int_1 + int_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		long_1 = long_4 + long_5;
		if(1)
		{
			int int_3 = 1;
			int_2 = int_3 + int_1;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
		}
	}
	long_3 = v_SyBigEndianUnpack16(short_4,unsigned_int_2);

	double_6 = double_5 + double_6;
}
int v_lhLoadCells( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	short_2 = short_1 + short_2;
	v_lhPageFreeSpace(char_1);

	double_1 = double_1;
	float_1 = float_1 + float_1;
	long_1 = v_lhParseOneCell(unsigned_int_1,float_2,int_1,int_2);

	int_3 = int_2 * int_2;
	double_2 = double_3;
	if(1)
	{
	}
	if(1)
	{
	}
	int_3 = int_3 + int_4;
	double_3 = double_4 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long long_3 = 1;
		short_1 = short_1 * short_1;
		if(1)
		{
		}
		if(1)
		{
			float_2 = float_2 + float_1;
		}
		long_3 = long_2 * long_3;
		if(1)
		{
		}
	}
	return int_1;
}
char v_lhParsePageHeader()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long_3 = long_1 + long_2;
	short_1 = short_1;
	int_1 = int_2;
	long_2 = v_SyBigEndianUnpack16(short_1,unsigned_int_1);

	float_1 = float_1 + float_2;
	unsigned_int_1 = v_SyBigEndianUnpack64(int_1,long_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1;
	double_2 = double_1 * double_2;
	return char_1;
}
int v_lhLoadPage( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,long parameter_4,int parameter_5)
{
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	char_1 = v_lhParsePageHeader();

	int_1 = v_lhLoadCells(float_1);

	int_1 = int_2 * int_1;
	int_3 = int_4;
	float_2 = v_lhNewPage(float_2,long_1,short_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_4 = float_3 * float_3;
	if(1)
	{
	}
	if(1)
	{
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_2;
		if(1)
		{
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
		}
		if(1)
		{
			long_1 = long_3 + long_3;
		}
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			if(1)
			{
				float_1 = float_3 * float_4;
			}
			char_3 = char_2 * char_2;
		}
	}
	if(1)
	{
		long_3 = long_2 + long_3;
	}
	return int_5;
}
float v_lhMapWriteRecord( unsigned int parameter_1,unsigned int parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	char char_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_5 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	double double_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		float_1 = float_2 + float_1;
		double_3 = double_1 * double_2;
		if(1)
		{
		}
		char_1 = char_1 + char_1;
		if(1)
		{
		}
		float_3 = float_1 * float_3;
		char_3 = char_2 * char_3;
		float_1 = float_3 + float_4;
		int_3 = int_1 + int_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		}
		if(1)
		{
			float_4 = float_5 * float_3;
			int_4 = int_3 + int_2;
		}
		long_2 = long_1 * long_1;
		if(1)
		{
		}
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
		if(1)
		{
		}
	}
	double_3 = v_SyBigEndianPack64(long_3,long_3);

	int_3 = int_4 * int_5;
	if(1)
	{
	}
	double_4 = double_3 + double_4;
	short_4 = short_2 + short_3;
	float_4 = float_3 * float_5;
	long_2 = long_1 + long_2;
	v_SyBigEndianPack32(long_1,unsigned_int_3);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
		int int_6 = 1;
		v_lhMapInstallBucket(short_5,unsigned_int_3,unsigned_int_4);

		int_6 = int_6;
		if(1)
		{
			int_2 = int_2 + int_1;
		}
		if(1)
		{
			short_4 = v_lhAcquirePage(double_3,unsigned_int_1);

			char_1 = char_1 + char_3;
			if(1)
			{
			}
			int_5 = int_2 * int_4;
		}
	}
	return float_3;
}
short v_lhCellWriteHeader( float parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = long_1 * long_1;
	char_2 = char_1 + char_1;
	double_1 = double_1 * double_2;
	double_3 = v_SyBigEndianPack64(long_2,long_3);

	int_1 = int_1;
	short_1 = short_1 * short_1;
	int_1 = int_1 * int_2;
	double_1 = double_2 + double_3;
	double_1 = v_SyBigEndianPack16(long_2,char_2);

	double_1 = double_3 + double_3;
	short_2 = short_2 * short_2;
	int_1 = int_2 * int_2;
	long_3 = long_3 * long_3;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1;
	char_1 = char_2;
	double_2 = double_3 + double_4;
	return short_1;
	v_SyBigEndianPack32(long_2,unsigned_int_3);

}
char v_lhCellWriteLocalPayload( long parameter_1,float parameter_2,unsigned int parameter_3,unsigned int parameter_4,char parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_1 = v_SyMemcpy(unsigned_int_1,int_1);

	short_1 = short_1 * short_1;
	long_3 = long_1 * long_2;
	long_2 = long_1 * long_3;
	char_3 = char_1 + char_2;
	short_2 = short_3;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	return char_1;
}
long v_lhCellDiscard( char parameter_1)
{
	double double_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	long_1 = v_SyBlobRelease(long_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	char_3 = char_1 + char_2;
	short_2 = v_SyMemBackendPoolFree(double_2);

	long_2 = long_1 * long_2;
	int_1 = int_2;
	return long_2;
}
float v_lhCellWriteOvflPayload( short parameter_1,int parameter_2,int parameter_3,double parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_3 = 1;
	short short_4 = 1;
	double double_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	float float_5 = 1;
	long long_5 = 1;
	float_1 = float_1 + float_2;
	int_1 = int_1 * int_2;
	short_1 = v_lhAcquirePage(double_1,unsigned_int_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	int_4 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	double_1 = double_2 + double_3;
	long_2 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_5;
	double_2 = double_3 * double_2;
	if(1)
	{
	}
	int_4 = int_2 + int_1;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	int_3 = int_3 + int_2;
	long_1 = long_1 * long_1;
	int_1 = int_3;
	double_3 = v_SyMemcpy(unsigned_int_3,int_3);

	short_2 = short_1 * short_1;
	int_4 = int_3 + int_4;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
		}
		if(1)
		{
			char char_3 = 1;
			char_1 = char_1 + char_1;
			if(1)
			{
			}
			double_3 = double_1;
			if(1)
			{
			}
			double_4 = double_3 + double_2;
			int_4 = int_2 * int_4;
			long_1 = long_1;
			unsigned_int_2 = unsigned_int_6;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
			char_3 = char_2 + char_2;
		}
		int_5 = int_4 * int_3;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
		if(1)
		{
			unsigned_int_6 = unsigned_int_4 + unsigned_int_1;
		}
		unsigned_int_4 = unsigned_int_5;
		int_2 = int_2 * int_4;
		unsigned_int_7 = unsigned_int_2 * unsigned_int_7;
	}
	short_3 = short_2 + short_1;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_1;
	float_1 = float_3 * float_4;
	double_4 = double_4 + double_2;
	double_1 = v_SyBigEndianPack64(long_3,long_1);

	short_2 = short_4 + short_4;
	double_5 = double_1 + double_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_6 = 1;
		double double_6 = 1;
		long long_4 = 1;
		int int_7 = 1;
		unsigned_int_1 = unsigned_int_7;
		double_3 = double_2;
		int_6 = int_3;
		double_2 = double_6 + double_7;
		long_4 = long_3 + long_4;
		if(1)
		{
			short_2 = short_1 + short_4;
		}
		long_3 = long_2 * long_1;
		int_7 = int_3 + int_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned int unsigned_int_8 = 1;
			short short_5 = 1;
			short short_6 = 1;
			char char_6 = 1;
			char char_7 = 1;
			int int_8 = 1;
			if(1)
			{
				unsigned_int_8 = unsigned_int_6;
			}
			if(1)
			{
				double double_8 = 1;
				char char_4 = 1;
				char char_5 = 1;
				float_1 = float_1 + float_4;
				if(1)
				{
					double_7 = double_8 + double_1;
				}
				short_3 = short_3 + short_3;
				if(1)
				{
					double_4 = double_4 + double_8;
				}
				int_3 = int_7 + int_4;
				unsigned_int_7 = unsigned_int_1;
				unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
				unsigned_int_10 = unsigned_int_8 * unsigned_int_9;
				char_5 = char_1 + char_4;
				int_3 = int_4 * int_6;
			}
			short_6 = short_5 + short_5;
			int_2 = int_1 * int_6;
			if(1)
			{
				char_1 = char_6 + char_2;
			}
			float_4 = float_4 * float_5;
			char_6 = char_7;
			double_1 = v_SyBigEndianPack16(long_5,char_2);

			int_8 = int_7;
		}
	}
	unsigned_int_7 = unsigned_int_9 * unsigned_int_10;
	double_7 = double_5 * double_5;
	return float_5;
}
float v_lhInstallCell( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_5 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double_2 = double_1 * double_2;
	short_2 = short_1 + short_2;
	if(1)
	{
		int_1 = int_2;
		char_1 = char_1;
		v_SyMemBackendAlloc(long_1,float_1,-1 );

		short_3 = short_2;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		short_4 = short_2 + short_1;
		short_2 = v_SyZero(short_1);

		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	}
	unsigned_int_5 = unsigned_int_4;
	double_3 = double_1 + double_2;
	if(1)
	{
		int_3 = int_1;
	}
	short_3 = short_1 * short_5;
	if(1)
	{
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		double_1 = double_4 + double_2;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		char char_2 = 1;
		short_2 = short_3 + short_4;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
		long_3 = long_1 * long_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		char_2 = char_1 + char_2;
		if(1)
		{
			char char_3 = 1;
			double double_6 = 1;
			char char_4 = 1;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
			double_4 = double_1 + double_3;
			float_2 = v_SyMemBackendFree(double_3);

			char_2 = char_2 + char_3;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				double double_5 = 1;
				float float_3 = 1;
				if(1)
				{
					unsigned_int_3 = unsigned_int_1 + unsigned_int_6;
				}
				unsigned_int_7 = unsigned_int_2 + unsigned_int_6;
				double_2 = double_5 + double_1;
				float_3 = float_1 * float_2;
				if(1)
				{
					double_1 = double_2 * double_5;
				}
				int_3 = int_3 + int_2;
				double_6 = double_4;
				float_2 = float_3 + float_2;
			}
			double_2 = double_6 + double_2;
			char_3 = char_3 * char_3;
			char_1 = char_2 * char_4;
		}
	}
	return float_1;
}
long v_SyBlobInit( unsigned int parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	if(1)
	{
		if(1)
		{
		}
		long_1 = long_1 + long_2;
	}
	double_2 = double_1 + double_2;
	long_3 = long_2 + long_1;
	long_4 = long_1 * long_1;
	return long_4;
}
int v_lhNewCell( double parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	short_1 = v_SyZero(short_2);

	char_2 = char_1 * char_2;
	double_1 = double_1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = v_SyMemBackendPoolAlloc(char_2,char_2);

	long_1 = v_SyBlobInit(unsigned_int_1,short_3);

	char_1 = char_2;
	return int_1;
}
unsigned int v_lhRestoreSpace( long parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_3 = double_1 * double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "cB") < 0)
	{
	}
	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_2;
	double_2 = double_1 * double_1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_4 = v_SyBigEndianPack16(long_3,char_1);

	short_3 = short_1 + short_2;
	return unsigned_int_2;
}
float v_lhFindSlavePage( int parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_4 = 1;
	double double_6 = 1;
	char char_7 = 1;
	float float_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned_int_1 = v_lhRestoreSpace(long_1,char_1,int_1);

	short_1 = v_lhAcquirePage(double_1,unsigned_int_1);

	double_1 = double_2 + double_3;
	double_3 = v_lhAllocateSpace(float_1,int_1,unsigned_int_2);

	double_2 = double_2;
	char_2 = char_3;
	float_2 = float_1 + float_1;
	double_2 = double_4 * double_5;
	float_2 = v_lhNewPage(float_3,long_1,short_2);

	int_4 = int_2 + int_3;
	int_5 = int_2 * int_4;
	char_5 = char_1 + char_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		char char_6 = 1;
		short_2 = short_2 + short_3;
		double_4 = double_3;
		if(1)
		{
			long long_2 = 1;
			long_1 = long_2;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			if(1)
			{
				int_7 = int_6 * int_5;
			}
			if(1)
			{
				short_4 = short_2 + short_1;
			}
			double_6 = double_2;
		}
		char_3 = char_6 + char_7;
	}
	float_1 = float_1;
	if(1)
	{
	}
	float_2 = float_2 * float_1;
	if(1)
	{
		float_3 = float_3 * float_3;
	}
	float_1 = float_1 * float_4;
	if(1)
	{
	}
	char_5 = char_7;
	if(1)
	{
		double_3 = v_SyBigEndianPack64(long_1,long_3);

		double_5 = double_6;
	}
	if(1)
	{
		if(1)
		{
			long_1 = v_lhSetEmptyPage(long_4);

			int_2 = int_1;
		}
		int_3 = int_6 + int_6;
	}
	int_7 = int_7;
	if(1)
	{
		int_7 = int_2;
	}
	float_2 = float_5 + float_2;
	long_4 = long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 * short_4;
	return float_6;
}
double v_lhSlaveStore( double parameter_1,int parameter_2,double parameter_3,int parameter_4,long parameter_5,unsigned int parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float_2 = float_1 * float_2;
	double_1 = v_lhStoreCell(float_3,double_1,short_1,long_1,float_3,double_2,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_2;
	if(1)
	{
	}
	float_1 = v_lhFindSlavePage(int_1,long_1,unsigned_int_3,char_1);

	double_4 = double_3 + double_2;
	return double_4;
}
void v_lhPageDefragment( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	float float_1 = 1;
	int int_5 = 1;
	float float_2 = 1;
	int int_8 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_1 * char_1;
	short_1 = short_1 * short_1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	int_1 = int_1 * int_1;
	char_3 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			v_SyBigEndianPack32(long_1,unsigned_int_4);

			unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
		}
		if(1)
		{
			double double_1 = 1;
			double double_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_6 = 1;
			char char_5 = 1;
			char char_6 = 1;
			double_1 = double_1;
			if(1)
			{
				double_2 = v_SyBigEndianPack16(long_2,char_1);

				double_3 = v_SyMemcpy(unsigned_int_5,int_1);

				char_1 = char_3 + char_4;
			}
			double_1 = double_4 + double_1;
			int_1 = int_2 + int_3;
			double_2 = v_SyBigEndianPack64(long_1,long_1);

			int_2 = int_4 * int_3;
			unsigned_int_6 = unsigned_int_1 * unsigned_int_1;
			unsigned_int_2 = unsigned_int_6 * unsigned_int_2;
			char_5 = char_2 * char_5;
			float_1 = float_1 * float_1;
			int_5 = int_1 * int_1;
			char_2 = char_4 * char_6;
			int_2 = int_2 + int_4;
			double_3 = double_4 + double_4;
			double_2 = double_4 * double_1;
			short_1 = short_1 * short_1;
			if(1)
			{
				int int_6 = 1;
				int_5 = int_1 * int_6;
				double_4 = double_3 * double_1;
			}
			if(1)
			{
				short short_2 = 1;
				short_2 = short_1;
			}
		}
		unsigned_int_1 = unsigned_int_3;
	}
	float_1 = float_2;
	if(1)
	{
		int int_7 = 1;
		int_7 = int_1 + int_4;
		float_1 = float_1;
		int_1 = int_1 * int_4;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		long_4 = long_2 + long_3;
		float_4 = float_3 + float_2;
	}
	char_3 = char_4 + char_3;
	int_8 = int_8 * int_5;
	char_4 = char_4 + char_3;
}
long v_SyBigEndianUnpack16( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_1;
	return long_1;
}
double v_lhAllocateSpace( float parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = double_1;
	int_2 = int_1 * int_1;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = float_1;
	int_4 = int_2 + int_3;
	double_1 = double_1 + double_1;
	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "u") > 0)
		{
		}
		unsigned_int_2 = unsigned_int_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
		if(1)
		{
			char_2 = char_1 * char_2;
		}
		float_2 = float_2;
		if(1)
		{
			float_2 = float_2 + float_1;
			if(1)
			{
				char char_3 = 1;
				int int_5 = 1;
				char_3 = char_2 + char_3;
				unsigned_int_2 = unsigned_int_3;
				long_1 = long_1;
				char_3 = char_3;
				int_5 = int_5 * int_3;
			}
			if(1)
			{
			}
		}
		unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	}
	double_1 = v_SyBigEndianPack16(long_2,char_4);

	char_5 = char_1;
	if(1)
	{
	}
	unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	if(1)
	{
		double double_3 = 1;
		long long_4 = 1;
		double_3 = double_1 + double_2;
		double_1 = double_1;
		long_3 = v_SyBigEndianUnpack16(short_3,unsigned_int_5);

		long_2 = long_1 * long_4;
		float_2 = float_2 + float_2;
		long_1 = long_4 * long_1;
		double_4 = double_4 + double_3;
	}
	if(1)
	{
		v_lhPageDefragment(float_1);

		int_2 = int_2 * int_3;
	}
	if(1)
	{
		long long_5 = 1;
		long long_6 = 1;
		double_4 = double_4 * double_4;
		long_6 = long_5 + long_5;
	}
	double_4 = double_2 * double_5;
	return double_2;
}
double v_lhStoreCell( float parameter_1,double parameter_2,short parameter_3,long parameter_4,float parameter_5,double parameter_6,int parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_6 = 1;
	double double_4 = 1;
	short short_7 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_3 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	short_1 = short_1 + short_2;
	short_4 = short_3 + short_1;
	short_1 = short_3 * short_5;
	if(1)
	{
	}
	int_1 = v_lhNewCell(double_1,long_1);

	double_2 = double_2 * double_3;
	if(1)
	{
		int_1 = int_2 + int_1;
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				unsigned_int_1 = v_SyBlobAppend(int_3,float_2,char_1,-1 );

				unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
			}
		}
		short_6 = short_3 + short_6;
	}
	float_5 = float_3 + float_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	}
	long_1 = long_2 + long_1;
	long_1 = v_lhCellDiscard(char_1);

	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	int_2 = int_2 + int_2;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
	if(1)
	{
		float_3 = v_lhInstallCell(float_6);

		double_4 = double_3 * double_1;
	}
	short_7 = v_lhCellWriteHeader(float_6);

	float_6 = float_2;
	if(1)
	{
	}
	if(1)
	{
		double_4 = v_lhAllocateSpace(float_6,int_1,unsigned_int_2);

		int_2 = int_3 * int_3;
		if(1)
		{
			char_2 = char_1;
		}
	}
	if(1)
	{
		char_2 = v_lhCellWriteLocalPayload(long_1,float_5,unsigned_int_6,unsigned_int_7,char_1);

		long_2 = long_2 + long_2;
	}
	double_3 = v_lhSlaveStore(double_3,int_3,double_2,int_3,long_3,unsigned_int_5);

	float_4 = v_lhCellWriteOvflPayload(short_6,int_1,int_2,double_4);

	char_2 = char_3 * char_1;
	return double_1;
}
double v_SyBigEndianPack16( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	char_3 = char_1 + char_2;
	return double_1;
}
long v_lhSetEmptyPage( long parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double_1 = double_1 + double_1;
	char_1 = char_2;
	long_1 = long_1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_2;
	double_1 = v_SyBigEndianPack16(long_2,char_1);

	int_2 = int_2 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = v_SyBigEndianPack64(long_2,long_2);

	long_1 = long_2 + long_2;
	float_1 = float_1 * float_2;
	double_2 = double_3 * double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1 + short_2;
	double_1 = double_2 * double_1;
	int_3 = int_3 + int_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	int_1 = int_4 * int_1;
	return long_1;
}
float v_lhNewPage( float parameter_1,long parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	char char_4 = 1;
	int_2 = int_1 * int_1;
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	char_2 = char_3;
	short_1 = v_SyZero(short_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_1;
	if(1)
	{
		double double_3 = 1;
		int int_3 = 1;
		short_2 = short_1 * short_3;
		double_2 = double_3;
		float_1 = v_SyMemBackendPoolAlloc(char_2,char_4);

		int_3 = int_3 * int_1;
	}
	short_3 = short_1 * short_2;
	return float_1;
}
short v_lhAcquirePage( double parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_1;
	long_1 = long_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_3;
		if(1)
		{
			double double_4 = 1;
			double_3 = v_SyBigEndianPack64(long_2,long_1);

			long_2 = long_3 * long_1;
			short_1 = short_1 + short_1;
			if(1)
			{
			}
			double_3 = double_1;
			double_4 = double_1 * double_3;
			int_1 = int_1 * int_1;
		}
	}
	unsigned_int_1 = v_SyBigEndianUnpack64(int_1,long_3);

	int_2 = int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return short_1;
}
double v_lhMapFindBucket( int parameter_1,float parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
		}
		long_1 = long_1 + long_1;
	}
	return double_2;
}
double v_lh_record_insert( unsigned int parameter_1,float parameter_2,char parameter_3,char parameter_4,short parameter_5,int parameter_6)
{
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	char char_5 = 1;
	float float_4 = 1;
	long long_4 = 1;
	float float_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_6 = 1;
	double_1 = v_lhStoreCell(float_1,double_1,short_1,long_1,float_1,double_2,int_1);

	int_1 = int_2 * int_2;
	float_2 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 + float_1;
	double_3 = v_lhRecordOverwrite(short_1,int_3,unsigned_int_3);

	short_4 = short_2 + short_3;
	double_3 = double_3 * double_1;
	unsigned_int_3 = v_lhFindCell(unsigned_int_1,char_1,char_2,int_2);

	short_2 = short_2;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_4 * double_1;
	long_2 = v_lhRecordInstall(short_4,long_2,int_3,char_3,float_2,char_4);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	long_2 = long_2 * long_2;
	double_2 = v_lhMapFindBucket(int_1,float_2);

	int_3 = int_1 + int_2;
	int_1 = v_lhLoadPage(short_3,unsigned_int_3,unsigned_int_4,long_3,int_2);

	double_1 = v_lhRecordAppend(double_1,int_1,float_1);

	char_5 = char_2 + char_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	long_1 = long_3 + long_1;
	if(1)
	{
		int int_4 = 1;
		char char_6 = 1;
		float float_3 = 1;
		int_3 = int_1 * int_4;
		if(1)
		{
		}
		char_1 = char_6 + char_3;
		if(1)
		{
		}
		float_4 = float_3 * float_3;
		if(1)
		{
			short short_5 = 1;
			short_5 = short_2 * short_5;
		}
		short_1 = short_4 + short_2;
		if(1)
		{
			long_4 = long_2;
		}
		short_3 = short_1 + short_1;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		float_1 = float_4 + float_1;
		if(1)
		{
		}
		float_2 = v_lhNewPage(float_5,long_5,short_2);

		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
		if(1)
		{
			double double_5 = 1;
			double_5 = double_2 * double_4;
			if(1)
			{
				short_3 = v_lhAcquirePage(double_3,unsigned_int_3);

				long_6 = long_3 * long_2;
				unsigned_int_7 = unsigned_int_6 + unsigned_int_2;
			}
		}
		if(1)
		{
			if(1)
			{
				long_3 = v_lhSetEmptyPage(long_6);

				unsigned_int_7 = unsigned_int_7 + unsigned_int_7;
			}
			if(1)
			{
				long long_7 = 1;
				float_1 = v_lhMapWriteRecord(unsigned_int_5,unsigned_int_1,long_6);

				long_4 = long_5 * long_7;
			}
		}
		unsigned_int_6 = unsigned_int_6;
	}
	return double_2;
}
char v_lhash_kv_replace( int parameter_1,float parameter_2,int parameter_3,int parameter_4,double parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	char char_4 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_2;
	return char_3;
	double_1 = v_lh_record_insert(unsigned_int_3,float_1,char_3,char_4,short_1,int_1);

}
unsigned int v_MemPoolBucketAlloc( unsigned int parameter_1,short parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = v_MemBackendAlloc(short_1,int_1,-1 );

	unsigned_int_1 = unsigned_int_2;
	long_2 = long_3;
	short_2 = short_2 * short_3;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	int_3 = int_1 + int_2;
	int_5 = int_4 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_4 = 1;
		char char_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_2 + char_3;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char_5 = char_4 * char_2;
		float_2 = float_1 + float_1;
	}
	double_3 = double_1 * double_2;
	return unsigned_int_1;
}
double v_MemBackendPoolAlloc( double parameter_1,char parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	long_1 = v_MemBackendAlloc(short_1,int_1,-1 );

	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_4 = v_MemPoolBucketAlloc(unsigned_int_3,short_1);

	float_1 = float_1 + float_2;
	double_1 = double_2;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
	return double_3;
}
float v_SyMemBackendPoolAlloc( char parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_2 * int_3;
		}
		double_1 = v_MemBackendPoolAlloc(double_1,char_1);

		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1;
	}
	return float_1;
}
void v_lhMapInstallBucket( short parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_6 = 1;
	char char_3 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_2 + int_3;
	if(1)
	{
	}
	int_2 = int_2 + int_4;
	float_3 = float_1 * float_2;
	long_1 = long_1 * long_2;
	int_2 = int_3 * int_5;
	short_1 = v_SyZero(short_2);

	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
		v_SyMemBackendAlloc(long_1,float_1,-1 );

		short_1 = short_1;
	}
	float_3 = float_3 * float_2;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	char_1 = char_1 + char_2;
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		long long_3 = 1;
		long long_4 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long_1 = long_1 + long_1;
		float_4 = float_1 * float_2;
		float_2 = v_SyMemBackendFree(double_1);

		float_4 = float_5 * float_2;
		long_2 = long_3 * long_4;
		short_3 = short_4;
		if(1)
		{
			int int_6 = 1;
			double double_2 = 1;
			double double_3 = 1;
			float float_7 = 1;
			int_2 = int_5 * int_6;
			double_1 = double_1;
			double_1 = double_2 * double_3;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned int unsigned_int_5 = 1;
				int int_7 = 1;
				if(1)
				{
					short short_5 = 1;
					short_5 = short_4 * short_3;
				}
				unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
				double_2 = double_3 * double_3;
				unsigned_int_5 = unsigned_int_3;
				if(1)
				{
					unsigned_int_5 = unsigned_int_3;
				}
				float_6 = v_SyMemBackendPoolAlloc(char_3,char_2);

				int_4 = int_1;
				unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
				int_2 = int_7 + int_1;
			}
			float_1 = float_7 * float_1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			float_4 = float_1 + float_7;
		}
	}
}
char v_lhMapLoadPage( int parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	float_3 = float_1 * float_2;
	int_1 = int_1;
	double_1 = double_1;
	short_1 = short_1;
	int_2 = int_2 * int_3;
	if(1)
	{
		float float_4 = 1;
		double double_2 = 1;
		float_4 = float_1 + float_4;
		int_2 = int_2 + int_3;
		int_1 = int_1 + int_2;
		double_2 = double_2 + double_1;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		float float_5 = 1;
		int int_4 = 1;
		int int_5 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		unsigned_int_2 = unsigned_int_3;
		long_1 = long_1 * long_2;
		short_3 = short_1 + short_3;
		v_lhMapInstallBucket(short_1,unsigned_int_2,unsigned_int_2);

		float_5 = float_1 + float_1;
		float_3 = v_SyBigEndianUnpack32(double_1,int_1);

		int_5 = int_4 + int_2;
		if(1)
		{
		}
	}
	unsigned_int_4 = unsigned_int_3;
	return char_1;
	unsigned_int_5 = v_SyBigEndianUnpack64(int_6,long_1);

}
unsigned int v_SyBigEndianUnpack64( int parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 + double_2;
	double_4 = double_1 * double_4;
	int_3 = int_1 * int_2;
	long_1 = long_2;
	return unsigned_int_1;
}
float v_SyBigEndianUnpack32( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	return float_1;
}
long v_lhash_read_header( short parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	long long_5 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_1 + int_2;
	char_1 = v_lhMapLoadPage(int_3,unsigned_int_1,unsigned_int_2);

	double_3 = double_1 * double_2;
	double_1 = double_1 + double_2;
	long_3 = long_2 + long_2;
	long_3 = long_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = v_SyBigEndianUnpack64(int_3,long_4);

	double_1 = double_4;
	if(1)
	{
		long_3 = long_1 + long_2;
	}
	float_1 = v_SyBigEndianUnpack32(double_3,int_3);

	double_2 = double_2 * double_4;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int_2 = int_3 + int_4;
	long_3 = long_1 + long_1;
	unsigned_int_5 = unsigned_int_1;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_5;
	float_2 = float_1;
	unsigned_int_1 = unsigned_int_7 + unsigned_int_8;
	short_3 = short_1 + short_2;
	double_4 = double_3 + double_5;
	float_2 = float_1;
	float_2 = float_1;
	double_4 = double_2 * double_1;
	long_4 = long_3 + long_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_6 = 1;
		double_6 = double_6 * double_2;
		double_4 = double_6 * double_1;
		if(1)
		{
			double_1 = double_2 + double_3;
		}
		int_4 = int_3 + int_4;
		if(1)
		{
		}
		long_5 = long_1 + long_3;
		int_3 = int_4;
		short_2 = short_2 + short_2;
		if(1)
		{
		}
	}
	return long_5;
}
double v_SyBigEndianPack64( long parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	long long_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float_1 = float_1 + float_1;
	float_2 = float_2;
	long_3 = long_1 * long_2;
	int_3 = int_1 + int_2;
	double_2 = double_1 + double_2;
	int_1 = int_3 * int_2;
	double_2 = double_3;
	double_2 = double_4 + double_3;
	char_1 = char_1 * char_1;
	long_4 = long_1 * long_4;
	short_1 = short_1 + short_1;
	double_3 = double_4 + double_2;
	long_2 = long_4 * long_4;
	double_4 = double_5 + double_1;
	double_6 = double_6 * double_5;
	return double_5;
}
void v_SyBigEndianPack32( long parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_1;
	int_1 = int_1 * int_1;
	int_4 = int_2 + int_3;
	double_2 = double_1 * double_1;
	double_2 = double_2;
}
short v_lhash_write_header( int parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_3 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int int_8 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_9 = 1;
	short_1 = short_1 * short_2;
	long_1 = long_1 + long_1;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 * long_2;
	int_1 = int_2;
	int_3 = int_2 + int_2;
	unsigned_int_3 = unsigned_int_3;
	int_3 = int_2 * int_4;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	int_5 = int_5 * int_6;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_6 = int_6 * int_7;
	v_SyBigEndianPack32(long_3,unsigned_int_3);

	short_3 = short_1 + short_2;
	long_3 = long_2 + long_1;
	short_2 = short_1 * short_2;
	double_1 = v_SyBigEndianPack64(long_1,long_1);

	int_6 = int_1 * int_8;
	float_1 = float_1 + float_2;
	int_7 = int_4 + int_1;
	int_7 = int_9 * int_2;
	return short_3;
}
void v_lhash_kv_open( float parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_3 = 1;
	int int_5 = 1;
	char char_1 = 1;
	short short_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 * int_2;
	int_3 = int_4 * int_1;
	if(1)
	{
		short short_2 = 1;
		long_1 = v_lhash_read_header(short_1,unsigned_int_2);

		short_1 = short_2 * short_2;
		if(1)
		{
		}
		short_3 = v_lhash_write_header(int_5,char_1);

		short_1 = short_2 * short_4;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		if(1)
		{
		}
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "}h") > 0)
	{
		long long_2 = 1;
		short_1 = short_4 * short_4;
		if(1)
		{
		}
		long_1 = long_2 + long_2;
		if(1)
		{
		}
	}
}
long v_lhash_kv_config( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	long long_4 = 1;
	int_1 = int_1 * int_1;
	int_1 = int_2 + int_2;
	if(1)
	{
		long_1 = long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			int_1 = int_1;
		}
	}
	long_2 = long_1 + long_3;
	double_2 = double_1 + double_2;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 + double_3;
	}
	char_2 = char_1 + char_2;
	double_1 = double_4 + double_4;
	long_4 = long_2 * long_4;
	return long_4;
}
void v_lhash_kv_release( float parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = v_SyMemBackendRelease();

	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 + double_1;
}
long v_MemBackendPoolFree( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_2;
	short_1 = short_1 * short_2;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	float_1 = float_2;
	if(1)
	{
		short_2 = short_2 + short_1;
	}
	if(1)
	{
		char_1 = v_MemBackendFree(unsigned_int_1);

		int_2 = int_1;
		long_1 = long_1;
	}
	return long_1;
}
short v_SyMemBackendPoolFree( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		if(1)
		{
		}
		if(1)
		{
			float float_1 = 1;
			float_3 = float_1 * float_2;
		}
		float_3 = float_2 * float_4;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long_1 = v_MemBackendPoolFree(char_1);

		int_1 = int_2;
	}
	return short_1;
}
long v_SyBlobRelease( long parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float_1 = v_SyMemBackendFree(double_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	short_2 = short_1 + short_2;
	double_1 = double_1 + double_2;
	char_3 = char_1 * char_2;
	return long_1;
}
char v_lhash_page_release()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
	int_2 = int_1 + int_1;
	double_1 = double_3;
	int_2 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int_3 = int_2;
		int_3 = int_2 + int_1;
		int_2 = int_4 * int_2;
		short_1 = short_1 + short_1;
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "21") < 0)
	{
		float float_2 = 1;
		long_1 = v_SyBlobRelease(long_1);

		float_2 = float_1 * float_2;
	}
	int_4 = int_5 + int_4;
	short_1 = v_SyMemBackendPoolFree(double_2);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	return char_1;
	float_1 = v_SyMemBackendFree(double_4);

}
int v_lhash_bin_hash( long parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_2 * double_1;
	int_2 = int_1 * int_1;
	if(1)
	{
		short_1 = short_1;
	}
	long_1 = long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float float_4 = 1;
		long long_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_7 = 1;
		if(1)
		{
			float float_1 = 1;
			float float_3 = 1;
			float_3 = float_1 * float_2;
		}
		float_2 = float_4 + float_4;
		long_3 = long_1 * long_1;
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "p") < 0)
		{
			double double_3 = 1;
			double_1 = double_3 * double_4;
		}
		double_6 = double_5 + double_5;
		long_1 = long_1 * long_4;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1;
		}
		char_2 = char_1 * char_2;
		double_4 = double_7;
		if(1)
		{
			int int_3 = 1;
			int_3 = int_1 * int_3;
		}
		short_1 = short_1 + short_1;
		double_4 = double_2;
	}
	return int_2;
}
char v_lhash_kv_init( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	int int_5 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	double double_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_5 = 1;
	short_2 = short_1 + short_1;
	unsigned_int_1 = v_vedisExportMemBackend();

	v_SyMemBackendAlloc(long_1,float_1,-1 );

	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	float_2 = float_2;
	if(1)
	{
		int_1 = v_lhash_bin_hash(long_2,char_1);

		char_2 = v_lhash_page_release();

		long_1 = long_2 * long_2;
	}
	float_1 = float_2 * float_1;
	float_4 = float_1 * float_3;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
	short_1 = short_1 * short_1;
	int_1 = int_1;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_2 = int_3;
		int_5 = int_4 + int_5;
	}
	long_1 = long_2 * long_3;
	short_1 = short_2 + short_2;
	double_2 = double_1 * double_1;
	double_1 = double_1 * double_2;
	double_1 = double_2;
	int_5 = v_SyMemcmp(long_2,char_1,char_3);

	short_2 = v_SyZero(short_3);

	double_1 = double_1 * double_3;
	v_SyMemBackendInitFromParent(char_4,int_2);

	double_4 = double_5;
	short_3 = v_SyMemBackendRelease();

	double_6 = double_4 * double_5;
	return char_5;
}
char v_vedisExportDiskKvStorage()
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	char_1 = v_lhash_kv_init(short_1,int_1);

	long_1 = v_lhash_kv_config(unsigned_int_1,int_1,int_1);

	v_lhash_kv_open(float_1,double_1);

	char_1 = v_lhash_kv_replace(int_1,float_1,int_1,int_2,double_1);

	unsigned_int_2 = v_lhash_kv_append(long_1,double_1,int_1,char_2,short_2);

	double_1 = v_lhInitCursor(double_1);

	double_2 = v_lhCursorSeek(long_1,float_1,int_1,int_2);

	v_lhCursorValid(int_1);

	long_1 = v_lhCursorDelete(short_3);

	unsigned_int_3 = v_lhCursorKey(char_1,char_1,int_1);

	long_1 = long_1;
	return char_1;
	v_lhash_kv_release(float_2);

	float_3 = v_lhCursorFirst(unsigned_int_4);

	double_3 = v_lhCursorLast(int_3);

	char_2 = v_lhCursorNext(unsigned_int_4);

	v_lhCursorPrev(unsigned_int_4);

	char_2 = v_lhCursorKeyLength(int_2,int_2);

	char_1 = v_lhCursorDataLength(char_2,short_1);

	int_4 = v_lhCursorData(unsigned_int_3,unsigned_int_2,float_4);

	char_1 = v_lhCursorReset(unsigned_int_1);

}
void v_MemHashCursorReset( unsigned int parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = float_1 * float_1;
	int_1 = int_1 * int_2;
}
char v_MemHashCursorData( int parameter_1,unsigned int parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	return char_1;
}
double v_MemHashCursorDataLength( float parameter_1,float parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return double_2;
}
int v_MemHashCursorKey( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_2;
	long_1 = long_2;
	if(1)
	{
	}
	short_1 = short_1;
	return int_2;
}
int v_MemHashCursorKeyLength( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	char_2 = char_1 + char_2;
	return int_1;
}
short v_MemHashUnlinkRecord( long parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float_1 = v_SyMemBackendFree(double_1);

	int_2 = int_1 + int_1;
	long_1 = long_2;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_3 = int_4;
	}
	if(1)
	{
		int_5 = int_5;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		int int_6 = 1;
		int int_7 = 1;
		int_7 = int_5 * int_6;
	}
	char_3 = char_1 * char_2;
	char_3 = char_2 + char_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return short_1;
}
double v_MemHashCursorDelete()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	float_3 = float_1 + float_2;
	float_1 = float_1 + float_4;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = v_MemHashUnlinkRecord(long_1,unsigned_int_2);

	int_1 = int_2;
	long_4 = long_2 * long_3;
	return double_1;
}
unsigned int v_MemHashCursorPrev( int parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	return unsigned_int_1;
}
long v_MemHashCursorNext( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	float_1 = float_2;
	return long_1;
}
double v_MemHashCursorValid( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int_3 = int_1 * int_2;
	float_1 = float_1 * float_2;
	return double_1;
}
float v_MemHashCursorLast( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long_1 = long_1 * long_2;
	double_3 = double_1 + double_2;
	int_1 = int_1;
	return float_1;
}
long v_MemHashCursorFirst( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char_1 = char_2;
	int_1 = int_2;
	int_3 = int_3 + int_3;
	return long_1;
}
int v_MemHashCursorSeek( char parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1;
	short_1 = short_2;
	short_1 = v_MemHashGetEntry(double_2,unsigned_int_1,int_1);

	int_1 = int_2 + int_1;
	if(1)
	{
		if(1)
		{
		}
	}
	return int_3;
}
int v_MemHashInitCursor( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	long_1 = long_1 * long_2;
	short_2 = short_1 * short_1;
	short_3 = short_1 * short_2;
	return int_1;
}
short v_MemHashAppend( int parameter_1,float parameter_2,int parameter_3,int parameter_4,unsigned int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_3 = 1;
	double double_3 = 1;
	long_1 = long_2;
	short_2 = short_1 + short_1;
	if(1)
	{
		double_1 = v_SyMemBackendRealloc(long_3,unsigned_int_1);

		int_1 = int_2;
	}
	double_2 = double_1 * double_1;
	if(1)
	{
		char char_2 = 1;
		long_3 = long_1;
		if(1)
		{
		}
		double_2 = v_SyMemcpy(unsigned_int_1,int_3);

		char_1 = char_1 + char_2;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_2 = v_MemHashNewRecord(unsigned_int_3,float_1,int_3,int_2,unsigned_int_2,short_3);

			char_1 = v_MemHashLinkRecord(int_3,char_1);

			unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
		}
	}
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		int int_4 = 1;
		short short_6 = 1;
		double_3 = double_1 + double_1;
		short_4 = short_4 + short_5;
		long_2 = v_MemHashGrowTable(double_3);

		double_3 = double_3 * double_2;
		int_4 = int_4 * int_3;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1;
		}
		double_2 = double_2 * double_2;
		short_3 = v_MemHashGetEntry(double_2,unsigned_int_3,int_2);

		double_2 = double_3;
		if(1)
		{
		}
		int_1 = int_2 * int_4;
		short_6 = short_2;
		int_1 = int_3 * int_2;
	}
	return short_2;
}
long v_MemHashGrowTable( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	float float_5 = 1;
	double double_6 = 1;
	short short_5 = 1;
	int_2 = int_1 + int_1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1;
	int_1 = int_2 + int_1;
	if(1)
	{
	}
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		short short_1 = 1;
		long long_7 = 1;
		float float_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_6 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		if(1)
		{
			int_1 = int_2 + int_2;
		}
		long_4 = long_2 * long_3;
		long_6 = long_5 + long_3;
		unsigned_int_2 = unsigned_int_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3;
		}
		char_1 = char_2 * char_1;
		short_1 = short_1 * short_1;
		double_3 = double_1 * double_3;
		if(1)
		{
			long_3 = long_7 + long_3;
		}
		float_2 = float_1 + float_2;
		long_7 = long_1 * long_6;
		float_3 = v_SyMemBackendFree(double_3);

		long_2 = long_1 + long_7;
		if(1)
		{
			float float_4 = 1;
			float_4 = float_1 + float_2;
		}
		int_2 = int_2 + int_3;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
		short_1 = short_2 + short_2;
		if(1)
		{
			short_3 = short_4;
		}
		char_4 = char_2 * char_3;
		short_4 = short_2 * short_1;
		long_2 = long_3 + long_1;
		if(1)
		{
			long_2 = long_1;
		}
		short_2 = short_2 * short_2;
		double_5 = double_4 + double_3;
		unsigned_int_6 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			short_2 = v_SyZero(short_2);

			long_7 = long_6 + long_7;
		}
		double_4 = double_4 * double_2;
		char_5 = char_4 * char_2;
		long_6 = long_4 * long_7;
		if(1)
		{
			long_3 = long_5;
		}
		v_SyMemBackendAlloc(long_3,float_5,-1 );

		unsigned_int_3 = unsigned_int_6 * unsigned_int_7;
		unsigned_int_8 = unsigned_int_8 * unsigned_int_8;
		unsigned_int_4 = unsigned_int_1;
	}
	double_4 = double_1 * double_6;
	short_5 = short_2 + short_3;
	double_4 = double_6;
	return long_1;
}
char v_MemHashLinkRecord( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_1 = double_2;
	}
	char_1 = char_1 + char_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_4;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 * double_1;
	}
	double_2 = double_1 * double_4;
	return char_3;
}
unsigned int v_MemHashNewRecord( unsigned int parameter_1,float parameter_2,int parameter_3,int parameter_4,unsigned int parameter_5,short parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	long long_3 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 * char_1;
	short_1 = v_SyZero(short_2);

	int_2 = int_3 * int_3;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		float_2 = float_1 * float_1;
	}
	double_2 = double_3;
	long_2 = long_1 + long_2;
	double_2 = double_2 + double_2;
	short_4 = short_3 + short_3;
	short_1 = short_4;
	double_1 = v_SyMemcpy(unsigned_int_4,int_4);

	long_3 = long_3;
	float_2 = v_SyMemBackendFree(double_2);

	short_4 = short_3 + short_3;
	v_SyMemBackendAlloc(long_3,float_1,-1 );

	char_1 = char_2 + char_2;
	double_2 = double_1 + double_4;
	double_2 = double_1 + double_5;
	char_1 = char_2 * char_2;
	return unsigned_int_2;
}
short v_MemHashGetEntry( double parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double_1 = double_1;
	long_1 = long_1 * long_1;
	long_3 = long_2 * long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
		}
		if(1)
		{
		}
		double_1 = double_1 * double_2;
	}
	return short_1;
}
long v_MemHashReplace( long parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,char parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double_1 = v_SyMemcpy(unsigned_int_1,int_1);

	double_2 = double_1 * double_2;
	short_2 = short_1 + short_1;
	if(1)
	{
		double_1 = double_2 * double_1;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		short short_3 = 1;
		long long_1 = 1;
		short_2 = short_3 * short_2;
		if(1)
		{
		}
		char_1 = v_MemHashLinkRecord(int_1,char_1);

		long_3 = long_1 * long_2;
		if(1)
		{
			long_3 = v_MemHashGrowTable(double_1);

			char_2 = char_1 * char_1;
		}
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float_1 = v_SyMemBackendFree(double_2);

		char_1 = char_2 * char_1;
		short_1 = v_MemHashGetEntry(double_3,unsigned_int_5,int_1);

		char_5 = char_3 * char_4;
		if(1)
		{
			double_3 = double_2 * double_3;
		}
		if(1)
		{
			double_4 = double_3;
			if(1)
			{
			}
			unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
		}
		double_1 = double_5 * double_4;
		v_SyMemBackendAlloc(long_4,float_1,-1 );

		unsigned_int_5 = unsigned_int_2;
		unsigned_int_1 = unsigned_int_6 * unsigned_int_3;
	}
	return long_2;
	unsigned_int_2 = v_MemHashNewRecord(unsigned_int_7,float_2,int_1,int_2,unsigned_int_6,short_2);

}
void v_MemHashConfigure( float parameter_1,int parameter_2,short parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long long_2 = 1;
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1 + double_1;
		}
	}
	char_1 = char_2;
	float_1 = float_1;
	if(1)
	{
		long long_4 = 1;
		long_4 = long_1 * long_3;
	}
	double_3 = double_3 * double_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
}
unsigned int v_MemBackendRelease( short parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = double_1 + double_1;
	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float float_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_5 = 1;
		float float_4 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			float float_1 = 1;
			float_2 = float_1 + float_1;
		}
		float_3 = float_2 + float_3;
		char_2 = char_1 * char_1;
		char_4 = char_2 * char_3;
		long_2 = long_1 * long_2;
		if(1)
		{
			int int_2 = 1;
			int_2 = int_1 * int_1;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_1 = double_1 * double_1;
		double_1 = double_1 + double_1;
		char_3 = char_1;
		if(1)
		{
			char_5 = char_3 + char_2;
		}
		float_3 = float_4;
		long_1 = long_3 + long_2;
		char_5 = char_1 * char_1;
		char_3 = char_4 * char_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		long_3 = long_3 * long_3;
		long_4 = long_2 + long_1;
		char_4 = char_5 + char_1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	}
	double_3 = double_1 + double_2;
	unsigned_int_5 = unsigned_int_4;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3 * int_1;
	}
	return unsigned_int_5;
}
short v_SyMemBackendRelease()
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	unsigned_int_1 = v_MemBackendRelease(short_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
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
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1;
		int_2 = int_1 * int_1;
	}
	return short_2;
}
short v_MemHashRelease( short parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_1;
	short_1 = v_SyMemBackendRelease();

	int_1 = int_2;
	return short_1;
}
void v_MemHashFunc( float parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_2 = long_1 + long_2;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		long long_4 = 1;
		if(1)
		{
			char char_2 = 1;
			char_1 = char_2 * char_1;
		}
		short_2 = short_1 + short_2;
		int_2 = int_1 + int_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		int_1 = int_3 * int_1;
		int_4 = int_2 * int_4;
		if(1)
		{
			int_3 = int_4 + int_3;
		}
		double_1 = double_1 * double_2;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			short short_3 = 1;
			short_1 = short_2 * short_3;
		}
		long_4 = long_1 * long_3;
		int_4 = int_2 * int_2;
	}
}
void v_SyMemBackendInitFromParent( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long_2 = long_1 + long_2;
	if(1)
	{
		if(1)
		{
		}
		char_2 = char_1 * char_1;
	}
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		short_1 = v_SyZero(short_1);

		int_2 = int_1 + int_1;
		float_1 = float_1;
		if(1)
		{
		}
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2 * long_1;
	}
}
void v_MemHashInit( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = v_vedisExportMemBackend();

	short_1 = v_SyZero(short_1);

	double_2 = double_1 * double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "7d") < 0)
	{
		float float_2 = 1;
		v_SyMemBackendInitFromParent(char_1,int_1);

		v_SyMemBackendAlloc(long_1,float_1,-1 );

		float_2 = float_1 * float_2;
	}
	float_4 = float_3 + float_4;
	int_1 = v_SyMemcmp(long_1,char_2,char_2);

	char_4 = char_3 * char_4;
	short_1 = short_2 * short_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	}
	v_MemHashFunc(float_3,char_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	char_4 = char_5 * char_4;
	long_1 = long_2;
}
long v_vedisExportMemKvStorage()
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	short short_5 = 1;
	char char_4 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long_1 = v_MemHashReplace(long_2,unsigned_int_1,int_1,int_2,char_1);

	short_1 = v_MemHashAppend(int_2,float_1,int_1,int_2,unsigned_int_1);

	long_2 = v_MemHashCursorFirst(unsigned_int_1);

	double_1 = v_MemHashCursorDelete();

	int_3 = v_MemHashCursorKeyLength(unsigned_int_1,int_2);

	int_1 = v_MemHashCursorKey(int_1,int_3,unsigned_int_2);

	char_2 = v_MemHashCursorData(int_2,unsigned_int_3,short_2);

	v_MemHashCursorReset(unsigned_int_1);

	char_3 = char_1 * char_1;
	return long_1;
	v_MemHashInit(short_3,int_2);

	short_4 = v_MemHashRelease(short_4);

	v_MemHashConfigure(float_2,int_3,short_5);

	int_3 = v_MemHashInitCursor(char_3);

	int_3 = v_MemHashCursorSeek(char_2,char_4,int_1,int_4);

	float_1 = v_MemHashCursorLast(char_2);

	double_2 = v_MemHashCursorValid(unsigned_int_3);

	long_2 = v_MemHashCursorNext(char_3);

	unsigned_int_2 = v_MemHashCursorPrev(int_2);

	double_3 = v_MemHashCursorDataLength(float_3,float_4);

}
short v_SySetInit( long parameter_1,float parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 * double_1;
	short_2 = short_1 + short_1;
	float_1 = float_1 * float_2;
	short_4 = short_2 + short_3;
	double_2 = double_1 * double_3;
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return short_3;
}
int v_UnixUnmap(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return int_1;
}
float v_UnixMmap( short parameter_1,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_2;
	double_1 = double_1 * double_1;
	int_1 = int_3 * int_1;
	int_1 = int_4 * int_1;
	if(1)
	{
	}
	int_2 = int_1 * int_4;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int_1 = int_5 + int_6;
	}
	if(1)
	{
		float float_2 = 1;
		int int_7 = 1;
		float_2 = float_1 * float_1;
		int_4 = int_7 + int_7;
	}
	int_5 = int_3 + int_6;
	return float_1;
}
char v_unixCurrentTime( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_3 = float_1 * float_2;
	int_2 = int_1 + int_1;
	float_2 = float_1 + float_2;
	double_1 = double_1;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	return char_1;
}
float v_unixSleep( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long_1 = long_2;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1;
	float_3 = float_3 + float_2;
	float_2 = float_4;
	float_3 = float_5 + float_3;
	return float_4;
}
float v_SyMemBackendDup( double parameter_1,double parameter_2,float parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_1047[3];
	fgets(controller4vul_1047 ,3 ,stdin);
	if( strcmp( controller4vul_1047, "](") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		char controller4vul_1048[3];
		fgets(controller4vul_1048 ,3 ,stdin);
		if( strcmp( controller4vul_1048, "on") < 0)
		{
			v_SyMemBackendAlloc(long_1,float_1,uni_para);

		}
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	return float_1;
}
unsigned int v_BlobPrepareGrow( unsigned int parameter_1,float parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	long_1 = long_2;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_1044[2];
	fgets(controller4vul_1044 ,2 ,stdin);
	if( strcmp( controller4vul_1044, "r") < 0)
	{
		char controller4vul_1045[3];
		fgets(controller4vul_1045 ,3 ,stdin);
		if( strcmp( controller4vul_1045, "X`") < 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_1 + char_2;
			char controller4vul_1046[2];
			fgets(controller4vul_1046 ,2 ,stdin);
			if( strcmp( controller4vul_1046, "V") > 0)
			{
				float_1 = v_SyMemBackendDup(double_1,double_1,float_2,uni_para);

			}
		}
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_1;
			if(1)
			{
			}
			int_2 = int_2 * int_2;
			int_1 = int_2;
		}
		if(1)
		{
			long_2 = long_2 * long_1;
			float_2 = float_2 + float_1;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	int_3 = int_4 + int_5;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	double_2 = double_1;
	return unsigned_int_4;
}
unsigned int v_SyBlobAppend( int parameter_1,float parameter_2,char parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_2 = long_1 + long_2;
	int_2 = int_1 + int_1;
	char controller4vul_1043[3];
	fgets(controller4vul_1043 ,3 ,stdin);
	if( strcmp( controller4vul_1043, "I ") > 0)
	{
		unsigned_int_1 = v_BlobPrepareGrow(unsigned_int_1,float_1,uni_para);

	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		long long_3 = 1;
		unsigned_int_3 = unsigned_int_3;
		double_2 = double_1 * double_2;
		float_2 = float_1 + float_2;
		long_1 = long_3 * long_1;
	}
	return unsigned_int_1;
}
int v_FormatConsumer( unsigned int parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long_2 = long_1 + long_1;
	double_1 = double_1;
	short_2 = short_1 + short_1;
	int_2 = int_1 * int_1;
	double_1 = double_1 + double_2;
	double_1 = double_2;
	unsigned_int_1 = v_SyBlobAppend(int_2,float_1,char_1,-1 );

	long_4 = long_1 + long_3;
	int_3 = int_2 + int_1;
	double_1 = double_1 + double_1;
	return int_4;
}
double v_getdigit( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	double_1 = double_1;
	short_2 = short_1 * short_1;
	int_1 = int_1;
	return double_2;
}
float v_InternFormat( int parameter_1,double parameter_3,double parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	double_1 = v_getdigit(int_1,int_2);

	long_1 = long_2;
	long_1 = long_2 * long_1;
	if(1)
	{
		int int_3 = 1;
		double double_2 = 1;
		int_1 = int_3 * int_3;
		double_1 = double_1 + double_2;
	}
	long_1 = long_1;
	short_3 = short_1 * short_2;
	char_1 = char_1 + char_1;
	return float_1;
	double_3 = v_SyStrlen(float_2);

}
double v_FormatMount( unsigned int parameter_1,char parameter_3,float parameter_5,int parameter_6,unsigned int parameter_7)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 * float_1;
	double_1 = double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		if(1)
		{
		}
		float_3 = v_InternFormat(int_2,double_3,double_3);

		char_1 = char_1;
	}
	int_2 = v_FormatConsumer(unsigned_int_3,float_2);

	char_1 = char_2 * char_1;
	double_1 = double_4 * double_3;
	float_1 = float_1 + float_3;
	char_3 = char_2 * char_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		char_2 = char_1 * char_2;
	}
	return double_1;
}
char v_SyBlobInitFromBuf( unsigned int parameter_1,int parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	if(1)
	{
		long long_1 = 1;
		if(1)
		{
		}
		long_1 = long_1;
	}
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	int_2 = int_1 + int_2;
	return char_1;
}
void v_SyBufferFormat( char parameter_1,char parameter_2,unsigned int parameter_3,double parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	short_1 = short_1 * short_2;
	unsigned_int_1 = v_SyBlobAppend(int_1,float_1,char_1,-1 );

	char_2 = char_1 + char_1;
	char_2 = v_SyBlobInitFromBuf(unsigned_int_2,int_2);

	double_1 = v_FormatMount(unsigned_int_3,char_2,float_2,int_3,unsigned_int_4);

	short_2 = short_2 * short_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
		}
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_5 + unsigned_int_4;
	}
	short_2 = short_3 * short_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	float_1 = float_1 * float_2;
	double_1 = double_1 * double_2;
	int_1 = int_4 * int_4;
}
unsigned int v_unixFullPathname( float parameter_1,unsigned int parameter_2,int parameter_3,char parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_4 = 1;
	double double_3 = 1;
	if(1)
	{
		v_Systrcpy(char_1,double_1,long_1,unsigned_int_1);

		short_2 = short_1 + short_2;
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		double double_2 = 1;
		long long_2 = 1;
		double_1 = v_SyStrlen(float_1);

		short_2 = short_1 + short_1;
		char_4 = char_2 + char_3;
		if(1)
		{
		}
		double_1 = double_2;
		v_SyBufferFormat(char_1,char_4,unsigned_int_1,double_3);

		long_1 = long_1 + long_2;
	}
	return unsigned_int_1;
}
unsigned int v_unixAccess( double parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_1 + long_2;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_2;
	short_3 = short_1 * short_2;
	float_1 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_3;
	int_2 = int_1 + int_2;
	short_2 = short_4 * short_3;
	double_2 = double_1 + double_1;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_1 * double_3;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_1 * char_2;
		}
	}
	return unsigned_int_3;
}
int v_unixDelete( float parameter_1,double parameter_2,int parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long_1 = long_1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_2 + double_1;
		long_1 = long_2 * long_1;
		if(1)
		{
			if(1)
			{
				int_2 = int_1 + int_2;
			}
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			}
		}
	}
	return int_2;
	float_1 = v_openDirectory(long_2,int_1);

}
char v_MemBackendFree( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			if(1)
			{
				char_1 = char_1 + char_1;
			}
			double_2 = double_1 + double_1;
			int_2 = int_1 * int_2;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		}
	}
	return char_1;
}
float v_SyMemBackendFree( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1;
		}
		char_1 = v_MemBackendFree(unsigned_int_1);

		char_3 = char_2 * char_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	return float_1;
}
unsigned int v_vedis_free()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	float_1 = v_SyMemBackendFree(double_1);

	short_1 = short_1 * short_1;
	return unsigned_int_2;
	unsigned_int_1 = v_vedisExportMemBackend();

}
double v_SyMemcpy( unsigned int parameter_1,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return double_1;
}
int v_SyMemcmp( long parameter_1,char parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ";") < 0)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	int_3 = int_2 + int_2;
	return int_3;
}
double v_findInodeInfo( double parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float_3 = float_1 + float_2;
	short_1 = v_SyZero(short_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		int_1 = v_SyMemcmp(long_1,char_1,char_2);

		char_1 = char_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_1 = char_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			unsigned_int_2 = v_vedis_malloc(int_2);

			double_1 = double_1 + double_1;
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_1 * int_2;
		}
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	}
	return double_1;
	double_1 = v_SyMemcpy(unsigned_int_1,int_1);

}
int v_fillInUnixFile( int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,long parameter_5,int parameter_6,int parameter_7)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	float_1 = float_1 * float_1;
	long_1 = long_2;
	double_1 = double_1;
	int_3 = int_1 + int_2;
	v_unixEnterMutex();

	double_2 = double_1 + double_2;
	char_2 = char_1 + char_2;
	double_3 = double_1 + double_2;
	short_2 = short_1 + short_1;
	double_2 = v_findInodeInfo(double_2,unsigned_int_1);

	double_1 = double_3 + double_3;
	int_2 = int_4;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 + long_1;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_6 = double_4 + double_5;
		char_1 = char_2;
	}
	char_3 = char_2 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
			double double_7 = 1;
			double_3 = double_2 * double_7;
		}
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			short_1 = v_unixLeaveMutex();

			float_1 = float_2 + float_3;
		}
	}
	if(1)
	{
		int int_5 = 1;
		int_3 = int_5 * int_1;
	}
	return int_2;
}
double v_SyStrlen( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
		if(1)
		{
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			long long_1 = 1;
			if(1)
			{
				int int_1 = 1;
				int_2 = int_1 + int_1;
			}
			double_1 = double_1 * double_1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned_int_1 = unsigned_int_2;
			}
			double_1 = double_2;
			if(1)
			{
				double_2 = double_1 * double_3;
			}
			float_1 = float_1 + float_1;
			if(1)
			{
				int int_3 = 1;
				int_2 = int_2 + int_3;
			}
			long_1 = long_1 + long_1;
		}
	}
	return double_3;
}
void v_Systrcpy( char parameter_1,double parameter_2,long parameter_3,unsigned int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	float float_1 = 1;
	int int_6 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			int_2 = int_1 + int_1;
		}
		double_5 = double_1 * double_4;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char char_2 = 1;
		double double_7 = 1;
		if(1)
		{
			double double_6 = 1;
			double_6 = double_4 * double_2;
		}
		int_2 = int_2 * int_1;
		char_1 = char_1 + char_1;
		int_4 = int_1 * int_3;
		short_1 = short_2;
		if(1)
		{
			long_2 = long_1 + long_1;
		}
		int_2 = int_5 * int_4;
		int_5 = int_2 * int_3;
		short_2 = short_1 * short_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			int_5 = int_1 * int_4;
		}
		double_3 = double_2;
		double_5 = v_SyStrlen(float_1);

		short_4 = short_1 * short_3;
		double_3 = double_5 + double_2;
		int_5 = int_3 * int_2;
		if(1)
		{
			float_1 = float_1 + float_1;
		}
		char_2 = char_1 + char_2;
		char_1 = char_2 + char_2;
		double_5 = double_5 * double_5;
		double_5 = double_5 * double_7;
	}
	int_6 = int_1 + int_4;
}
float v_openDirectory( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_6 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_1;
	double_1 = double_3 + double_2;
	double_3 = double_2 + double_2;
	v_Systrcpy(char_1,double_2,long_1,unsigned_int_3);

	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
		float_2 = float_1 + float_1;
		if(1)
		{
			float float_4 = 1;
			float_4 = float_1 * float_3;
		}
	}
	float_5 = float_3 * float_1;
	short_3 = short_4;
	return float_6;
}
long v_findCreateFileMode( double parameter_1,int parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
		char char_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char_1 = char_1;
		short_3 = short_1 + short_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "}") < 0)
	{
		long_1 = long_1 * long_1;
	}
	return long_1;
}
void v_SyMemBackendAlloc( long parameter_1,float parameter_2,int uni_para)
{
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int_1 = int_1 * int_1;
	char controller4vul_1049[3];
	fgets(controller4vul_1049 ,3 ,stdin);
	if( strcmp( controller4vul_1049, "8G") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		char controller4vul_1050[3];
		fgets(controller4vul_1050 ,3 ,stdin);
		if( strcmp( controller4vul_1050, " 9") > 0)
		{
			long_1 = v_MemBackendAlloc(short_1,int_2,uni_para);

		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 + double_2;
		}
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
}
unsigned int v_vedisExportMemBackend()
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
unsigned int v_vedis_malloc( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_2;
	v_SyMemBackendAlloc(long_1,float_1,-1 );

	double_2 = double_1 * double_1;
	char_3 = char_2 + char_3;
	float_1 = float_2 * float_2;
	return unsigned_int_1;
	unsigned_int_2 = v_vedisExportMemBackend();

}
short v_unixLeaveMutex()
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long_1 = long_1;
		char_1 = char_1 + char_2;
	}
	return short_1;
}
void v_unixEnterMutex()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double_1 = double_2;
		long_3 = long_1 * long_2;
	}
}
float v_findReusableFd( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	char char_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_2 = double_1 + double_1;
	long_2 = long_1 + long_2;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	long_2 = long_3 + long_3;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		double_3 = double_3;
	}
	if(1)
	{
		float_2 = float_3;
	}
	if(1)
	{
		double_3 = double_2 + double_3;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		int_2 = int_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	}
	short_1 = short_1;
	double_3 = double_4 + double_5;
	int_2 = int_3 + int_4;
	unsigned_int_3 = unsigned_int_1;
	double_1 = double_2 + double_2;
	if(1)
	{
		double_4 = double_5;
	}
	int_5 = int_5 + int_4;
	char_2 = char_1;
	int_5 = int_6 + int_2;
	float_1 = float_3;
	char_4 = char_2 + char_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
	float_4 = float_3 + float_4;
	float_2 = float_1 + float_2;
	char_3 = char_5;
	int_2 = int_3 * int_3;
	float_3 = float_3 * float_2;
	if(1)
	{
		float float_5 = 1;
		float float_6 = 1;
		float_6 = float_5 + float_4;
	}
	if(1)
	{
		float_4 = float_2;
	}
	double_7 = double_5 * double_6;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	}
	double_2 = double_6 + double_8;
	double_7 = double_7 * double_5;
	char_2 = char_5;
	char_2 = char_4 + char_3;
	int_4 = int_2 * int_5;
	if(1)
	{
		double_4 = double_3 * double_6;
	}
	if(1)
	{
		int_5 = int_3;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_6 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_5;
	}
	if(1)
	{
		int_5 = int_2 + int_3;
	}
	short_2 = v_unixLeaveMutex();

	short_3 = short_3 + short_3;
	return float_3;
	v_unixEnterMutex();

}
short v_unixOpen( short parameter_1,double parameter_2,short parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	double double_7 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_6 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	long_1 = v_findCreateFileMode(double_1,int_1,float_1);

	unsigned_int_3 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	int_1 = int_2 * int_2;
	char_2 = char_1 + char_1;
	int_4 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	long_1 = long_1;
	double_4 = double_2 * double_3;
	double_5 = double_3;
	float_1 = v_openDirectory(long_1,int_5);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_6;
	float_2 = float_1 * float_1;
	long_3 = long_2 * long_2;
	float_2 = float_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		char_2 = char_2 + char_2;
		if(1)
		{
		}
	}
	long_5 = long_3 + long_4;
	if(1)
	{
		double_1 = double_4 * double_3;
	}
	if(1)
	{
		double_5 = double_6 * double_6;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_1;
	}
	if(1)
	{
		short_1 = short_1 * short_2;
	}
	double_2 = double_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 + unsigned_int_7;
		float_2 = float_2 + float_2;
		if(1)
		{
		}
		float_2 = v_findReusableFd(double_3,int_6);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_7 * unsigned_int_6;
			double_5 = double_7 + double_2;
		}
	}
	if(1)
	{
		int_5 = int_1 * int_1;
		int_7 = int_5 * int_1;
	}
	if(1)
	{
		int_4 = int_6;
	}
	if(1)
	{
		double_7 = double_6;
		if(1)
		{
			unsigned_int_1 = v_vedis_free();

			int_6 = int_5 + int_6;
			double_7 = double_5 + double_2;
		}
	}
	unsigned_int_8 = unsigned_int_1;
	unsigned_int_7 = unsigned_int_6 * unsigned_int_8;
	if(1)
	{
		int_7 = v_fillInUnixFile(int_6,int_1,int_6,unsigned_int_2,long_5,int_2,int_5);

		unsigned_int_2 = unsigned_int_8 * unsigned_int_6;
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		double double_8 = 1;
		unsigned_int_7 = unsigned_int_9 * unsigned_int_5;
		if(1)
		{
			long_4 = long_5 * long_2;
		}
		unsigned_int_2 = v_vedis_malloc(int_6);

		double_8 = double_5 * double_2;
	}
	if(1)
	{
		short_2 = short_1;
	}
	short_1 = v_SyZero(short_1);

	long_6 = long_6 * long_1;
	if(1)
	{
		int_3 = int_2;
	}
	return short_1;
}
char v_vedisExportBuiltinVfs()
{
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	short_1 = v_unixOpen(short_1,double_1,short_1,float_1);

	int_1 = v_unixDelete(float_1,double_1,int_1);

	unsigned_int_1 = v_unixAccess(double_1,int_2,int_1,int_3);

	unsigned_int_2 = v_unixFullPathname(float_1,unsigned_int_2,int_4,char_1);

	float_2 = v_UnixMmap(short_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_3;
	return char_2;
	float_3 = v_unixSleep(short_1,int_1);

	char_3 = v_unixCurrentTime(long_1,int_1);

	int_1 = v_UnixUnmap(int_1);

}
unsigned int v_SyMemBackendInitFromOthers( char parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
		}
		double_2 = double_1 * double_1;
	}
	double_2 = double_1 + double_1;
	int_2 = int_1 + int_1;
	short_1 = v_SyZero(short_2);

	char_3 = char_1 + char_2;
	if(1)
	{
		if(1)
		{
		}
	}
	char controller_6[3];
	fgets(controller_6 ,3 ,stdin);
	if( strcmp( controller_6, "]C") < 0)
	{
		double_1 = double_1 + double_2;
	}
	return unsigned_int_1;
}
short v_SyZero(short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_1;
	int_2 = int_3 + int_4;
	if(1)
	{
		if(1)
		{
		}
		double_3 = double_1 * double_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_5 = 1;
		float float_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1 * float_2;
		}
		char_1 = char_1 + char_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		}
		int_2 = int_4;
		int_3 = int_3 * int_5;
		if(1)
		{
			double double_4 = 1;
			double_3 = double_4 * double_1;
		}
		float_3 = float_1 * float_1;
		long_1 = long_1 * long_2;
		if(1)
		{
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
		short_1 = short_1 * short_1;
		double_3 = double_2;
	}
	return short_2;
}
long v_SyMemBackendInit( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	if(1)
	{
		if(1)
		{
		}
		double_1 = double_2;
	}
	short_1 = v_SyZero(short_1);

	double_2 = double_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_2 + double_1;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_2;
	}
	return long_1;
}
long v_MemBackendAlloc( short parameter_1,int parameter_2,int uni_para)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	short_1 = short_1 * short_1;
	double_1 = double_1 * double_1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		int_2 = int_1 + int_2;
		char controller4vul_1051[2];
		fgets(controller4vul_1051 ,2 ,stdin);
		if( strcmp( controller4vul_1051, "k") > 0)
		{
			float float_2 = 1;
			if(uni_para == 495)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			float_1 = float_1 * float_2;
		}
		short_2 = short_2 + short_1;
	}
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	double_2 = double_1 + double_2;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	int_1 = int_1 + int_2;
	int_3 = int_1 + int_1;
}
long v_MemBackendRealloc( float parameter_1,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double_2 = double_1 + double_1;
	char_2 = char_1 + char_2;
	if(1)
	{
	}
	long_1 = long_2;
	if(1)
	{
		double double_3 = 1;
		if(1)
		{
		}
		double_3 = double_2 * double_2;
	}
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		short short_1 = 1;
		long_3 = long_1 + long_3;
		if(1)
		{
			int_3 = int_2 * int_2;
		}
		short_2 = short_1 * short_2;
	}
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_1 + int_1;
		}
		if(1)
		{
			int_1 = int_3;
		}
		if(1)
		{
			int_2 = int_2 * int_2;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			long_2 = v_MemBackendAlloc(short_2,int_3,-1 );

			float_2 = float_1 * float_1;
		}
	}
	return long_2;
}
double v_SyMemBackendRealloc( long parameter_1,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		int_2 = int_1;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "9l") < 0)
	{
		long_1 = v_MemBackendRealloc(float_1,long_1);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	return double_1;
}
short v_SySetPut( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double_1 = v_SyMemBackendRealloc(long_1,unsigned_int_1);

	int_3 = int_1 + int_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
		}
		if(1)
		{
			long_2 = long_2;
		}
		long_2 = long_2 * long_3;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_4 = unsigned_int_4;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_3;
	double_2 = double_1 * double_1;
	return short_1;
}
double v_vedisCoreConfigure( float parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_3 = 1;
	short short_5 = 1;
	short short_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_7 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_2 = 1;
	short short_8 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_8 = 1;
	char char_6 = 1;
	long long_4 = 1;
	float float_5 = 1;
	char_3 = char_1 + char_2;
	int_1 = int_1 + int_2;
	if(1)
	{
		if(1)
		{
			int_3 = int_1 * int_3;
		}
		if(1)
		{
			long_1 = long_2;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	short_1 = short_1 + short_2;
	char_3 = char_3 * char_1;
	if(1)
	{
		unsigned_int_1 = v_SyMemBackendInitFromOthers(char_4,unsigned_int_2,int_1);

		int_4 = int_2 + int_4;
		short_2 = short_1 + short_1;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	short_1 = short_3 * short_4;
	if(1)
	{
		long_1 = long_1 + long_2;
	}
	int_2 = int_3 + int_1;
	long_1 = long_3;
	short_6 = short_5 * short_1;
	float_2 = float_1 + float_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	}
	if(1)
	{
		int_6 = int_4 + int_5;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	int_2 = int_3 + int_2;
	short_6 = short_3 * short_7;
	float_4 = float_3 + float_4;
	double_2 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_2;
		}
		if(1)
		{
			short_8 = short_8 + short_1;
			int_1 = int_2 + int_5;
		}
		char controller_13[3];
		fgets(controller_13 ,3 ,stdin);
		if( strcmp( controller_13, "VD") > 0)
		{
			int int_7 = 1;
			int_4 = int_6;
			if(1)
			{
				double_4 = double_2 * double_3;
			}
			int_4 = int_6 * int_7;
		}
		if(1)
		{
			int_8 = int_8 + int_8;
			if(1)
			{
				int_6 = int_3 + int_5;
			}
		}
		short_8 = v_SySetPut(short_4,int_3);

		short_3 = short_4 * short_2;
	}
	if(1)
	{
		char char_5 = 1;
		if(1)
		{
			short_1 = short_8 * short_1;
		}
		char_2 = char_1 * char_5;
		double_4 = double_2 + double_1;
	}
	long_1 = v_SyMemBackendInit(short_4,float_4);

	int_5 = int_8;
	if(1)
	{
		double_1 = double_2 * double_4;
	}
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	}
	char_1 = char_3 * char_6;
	if(1)
	{
		short short_9 = 1;
		short short_10 = 1;
		short_6 = short_9 + short_10;
	}
	double_3 = double_3 * double_3;
	long_1 = long_4;
	float_2 = float_5;
	return double_1;
}
int v_vedis_lib_config( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_2;
	double_2 = double_1;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1;
	return int_1;
	double_1 = v_vedisCoreConfigure(float_1,long_1);

}
unsigned int v_vedisCoreInitialize()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double_2 = double_1 + double_2;
	double_1 = double_1 + double_3;
	if(1)
	{
		long_1 = v_vedisExportMemKvStorage();

		double_5 = double_1 + double_4;
	}
	int_2 = int_1 + int_1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				char_1 = v_vedisExportDiskKvStorage();

				long_1 = long_1 + long_2;
				if(1)
				{
				}
				int_2 = int_3 + int_1;
				if(1)
				{
				}
			}
			int_2 = int_3 * int_3;
			if(1)
			{
			}
		}
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	long_4 = long_2 * long_3;
	if(1)
	{
		long long_5 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		long long_7 = 1;
		int int_7 = 1;
		int int_8 = 1;
		if(1)
		{
			double double_6 = 1;
			double_3 = double_6 * double_3;
			if(1)
			{
				long long_6 = 1;
				long_6 = long_2 * long_5;
			}
		}
		if(1)
		{
			short short_3 = 1;
			if(1)
			{
				double_5 = double_4;
				if(1)
				{
					double_3 = double_4 * double_1;
				}
			}
			short_3 = short_3 + short_2;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
		}
		int_1 = v_vedis_lib_config(int_1,char_1);

		float_1 = float_1;
		int_4 = int_5;
		int_5 = int_5 + int_6;
		long_2 = long_7 * long_3;
		int_6 = int_7 + int_3;
		if(1)
		{
			short short_4 = 1;
			short_1 = short_1 + short_4;
		}
		char_2 = v_vedisExportBuiltinVfs();

		short_1 = v_SySetInit(long_1,float_1,char_2);

		int_7 = int_4 + int_8;
		long_5 = long_2 + long_1;
		if(1)
		{
		}
		if(1)
		{
			char char_3 = 1;
			char_3 = char_2 + char_3;
		}
	}
	return unsigned_int_2;
}
int v_vedis_open( long parameter_1,double parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long_2 = long_1 + long_1;
	long_3 = long_1 * long_3;
	if(1)
	{
		if(1)
		{
		}
		int_2 = int_1 * int_1;
	}
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	short_3 = short_1 * short_2;
	short_3 = short_3 * short_3;
	if(1)
	{
		long long_4 = 1;
		long_2 = long_2 + long_4;
	}
	short_5 = short_2 * short_4;
	float_4 = float_4 * float_3;
	long_3 = long_5 * long_1;
	char controller4vul_1014[2];
	fgets(controller4vul_1014 ,2 ,stdin);
	if( strcmp( controller4vul_1014, "j") > 0)
	{
		char controller4vul_1015[3];
		fgets(controller4vul_1015 ,3 ,stdin);
		if( strcmp( controller4vul_1015, "3]") < 0)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			char controller4vul_1016[3];
			fgets(controller4vul_1016 ,3 ,stdin);
			if( strcmp( controller4vul_1016, "a)") < 0)
			{
				short_5 = v_vedisInitDatabase(char_1,short_4,double_3,float_1,uni_para);

				float_1 = float_3 * float_1;
				int_3 = int_2 + int_3;
			}
		}
		if(1)
		{
			long long_6 = 1;
			long long_7 = 1;
			long_7 = long_6 + long_2;
		}
	}
	int_2 = int_2 * int_1;
	int_3 = int_3 + int_1;
	if(1)
	{
		int int_4 = 1;
		int_3 = int_4 * int_2;
	}
	double_2 = double_1 * double_2;
	int_5 = int_3 + int_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	return int_2;
}
int main()
{
	int uni_para =495;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int_2 = int_1 + int_1;
	double_3 = double_1 + double_2;
	short_2 = short_1 + short_2;
	int_2 = int_1 + int_2;
	if(1)
	{
		short_2 = short_1 * short_3;
	}
	short_3 = short_1 * short_3;
	double_3 = double_2 + double_1;
	double_2 = double_3 * double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char_2 = char_1 * char_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			short_3 = short_2 * short_1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		}
		int_2 = int_1 + int_1;
		char controller4vul_1012[3];
		fgets(controller4vul_1012 ,3 ,stdin);
		if( strcmp( controller4vul_1012, "u.") < 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			double_4 = double_3 + double_4;
			long_2 = long_1 * long_1;
			long_2 = long_1 + long_1;
			char controller4vul_1013[2];
			fgets(controller4vul_1013 ,2 ,stdin);
			if( strcmp( controller4vul_1013, "`") < 0)
			{
				double double_5 = 1;
				int_3 = v_vedis_open(long_3,double_2,uni_para);

				double_2 = double_5 + double_5;
			}
			if(1)
			{
				long_2 = long_3;
			}
		}
	}
	int_1 = int_2 * int_2;
	return int_4;
}

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

long v_vedisRemoveCommand( double parameter_1,long parameter_2);
int v_vedis_delete_command( char parameter_1,double parameter_2);
void v_vedisDeleteBuiltinCommands( char parameter_1);
int v_vedis_close( char parameter_1);
float v_vedisObjContainerDestroy( short parameter_1,char parameter_2);
short v_vedisReleaseContext( short parameter_1);
int v_vedisInitContext( long parameter_1,double parameter_2,int parameter_3);
unsigned int v_vedisExec( long parameter_1);
short v_SyLexRelease( long parameter_1);
int v_SyLexTokenizeInput( float parameter_1,float parameter_2,double parameter_3,long parameter_5,double parameter_6);
long v_vedisTokenizeInput( short parameter_1,char parameter_2);
short v_SyLexInit( short parameter_1,double parameter_2,float parameter_3);
double v_vedisTokenize( double parameter_1,char parameter_2,short parameter_3);
long v_vedisProcessInput( long parameter_1,short parameter_2,char parameter_3);
int v_vedis_exec( char parameter_1,float parameter_2,int parameter_3);
int v_isBlank( int parameter_1,double parameter_2);
void v_vedis_exit();
float v_VmJsonArrayEncode( double parameter_1);
int v_vedis_value_is_string( int parameter_1);
int v_SyStrIsNumeric( double parameter_1,unsigned int parameter_2,short parameter_3,double parameter_4);
double v_vedisMemObjIsNumeric( float parameter_1);
int v_vedis_value_is_numeric( int parameter_1);
void v_MemObjBooleanValue( unsigned int parameter_1);
double v_vedisMemObjToBool( int parameter_1);
int v_vedis_value_to_bool( float parameter_1);
int v_vedis_value_is_bool( long parameter_1);
int v_VmJsonEncode( int parameter_1,char parameter_2);
int v_vedisJsonSerialize( unsigned int parameter_1,int parameter_2);
short v_MemObjStringValue( long parameter_1,int parameter_2);
void v_vedisMemObjToString( int parameter_1);
double v_vedis_value_to_string( short parameter_1,int parameter_2);
unsigned int v_array_render( char parameter_1);
short v_vedisHashmapWalk( int parameter_1,char parameter_2);
int v_vedis_array_walk( short parameter_1,double parameter_2);
int v_vedis_value_is_array( short parameter_1);
int v_vedis_value_is_null( char parameter_1);
short v_command_result_render( float parameter_1);
long v_vedisObjectValueDestroy( int parameter_1,int parameter_2);
int v_vedisHashmapRef( char parameter_1);
char v_vedisMemObjStore( double parameter_1,int parameter_2);
void v_SyStrToReal( int parameter_1,unsigned int parameter_2,unsigned int parameter_4);
float v_MemObjRealValue( double parameter_1);
unsigned int v_vedisMemObjToReal( int parameter_1);
int v_vedisMemObjRelease( unsigned int parameter_1);
unsigned int v_vedisHashmapRelease( int parameter_1);
short v_vedisHashmapUnref( unsigned int parameter_1);
float v_vedisHashmapCount();
unsigned int v_SyStrToInt64( short parameter_1,double parameter_2,long parameter_4);
short v_SyOctalStrToInt64( char parameter_1,unsigned int parameter_2,float parameter_4);
char v_SyBinaryStrToInt64( unsigned int parameter_1,char parameter_2,char parameter_4);
long v_SyHexToint( double parameter_1);
void v_SyHexStrToInt64( short parameter_1,short parameter_2,long parameter_4);
short v_vedisTokenValueToInt64( long parameter_1);
void v_MemObjStringToInt( short parameter_1);
long v_MemObjRealToInt( double parameter_1);
void v_MemObjIntValue( double parameter_1);
int v_vedisMemObjToInteger( float parameter_1);
int v_vedisMemObjInitFromString( unsigned int parameter_1,double parameter_2,unsigned int parameter_3);
float v_vedisNewObjectValue( double parameter_1,double parameter_2);
long v_SyBlobNullAppend( short parameter_1);
void v_vedisPagerSetCachesize( char parameter_1,int parameter_2);
float v_vedisConfigure( float parameter_1,int parameter_2,double parameter_3);
int v_vedis_config( char parameter_1,int parameter_2,int parameter_3);
double v_SySetRelease( unsigned int parameter_1);
short v_vedisPagerClose( char parameter_1);
long v_pager_reset_state( float parameter_1,int parameter_2);
char v_vedisPagerRollback( short parameter_1,int parameter_2);
double v_vedisBitvecDestroy();
double v_pager_commit_phase2( double parameter_1);
long v_pager_write_dirty_pages( short parameter_1,unsigned int parameter_2);
double v_page_merge_dirty( double parameter_1,long parameter_2);
float v_pager_get_dirty_pages( int parameter_1);
void v_pager_commit_phase1();
double v_vedisPagerCommit( double parameter_1);
short v_vedisEngineRelease( int parameter_1);
double v_vedisCoreShutdown();
int v_vedis_lib_shutdown();
short v_Fatal();
int v_SyBlobAppendBig32( float parameter_1,float parameter_2);
short v_SyBlobAppendBig16( int parameter_1,unsigned int parameter_2);
unsigned int v_SyBlobFormat( int parameter_1,double parameter_2,int parameter_3);
unsigned int v_vedisPagerGetKvEngine( float parameter_1);
long v_vedisTableSerialize( short parameter_1);
char v_vedisPagerisMemStore( int parameter_1);
double v_vedisOnCommit();
void v_vedisPagerSetCommitCallback( int parameter_1,double parameter_2);
double v_SySetReset( double parameter_1);
void v_SyBinHash( short parameter_1,short parameter_2);
void v_vedisFetchCommand( short parameter_1,int parameter_2);
short v_vedisInstallCommand( float parameter_1,unsigned int parameter_2,int parameter_3);
int v_vedis_register_command( double parameter_1,short parameter_2,float parameter_3,int parameter_4,int parameter_5);
char v_vedisRegisterBuiltinCommands( unsigned int parameter_1);
void v_vedisMemObjInit( short parameter_1,unsigned int parameter_2);
char v_vedisInitCursor( int parameter_1,float parameter_2);
unsigned int v_vedisKvIoErr( short parameter_1,float parameter_2);
double v_vedisKvIoPageReload( unsigned int parameter_1,double parameter_2);
char v_vedisKvIoPageUnpin( float parameter_1,int parameter_2);
char v_vedisKvIoTempPage( float parameter_1);
double v_vedisKvIoReadOnly( double parameter_1);
double v_vedisKvIoPageSize( unsigned int parameter_1);
short v_page_unref( unsigned int parameter_1);
long v_vedisKvIoPageUnRef( unsigned int parameter_1);
char v_vedisKvIopage_ref( unsigned int parameter_1);
unsigned int v_vedisKvIoPageDontMakeHot( unsigned int parameter_1);
short v_vedisKvIoPageDontJournal();
int v_vedisPagerDontWrite( long parameter_1);
void v_vedisKvIoPageDontWrite( float parameter_1);
void v_vedisBitvecSet( long parameter_1,double parameter_2);
float v_WriteInt64( float parameter_1,unsigned int parameter_2,unsigned int parameter_3);
char v_vedisBitvecTest( long parameter_1,float parameter_2);
char v_page_write( int parameter_1,short parameter_2);
int v_pager_release_page( short parameter_1,short parameter_2);
long v_pager_unlink_page( char parameter_1,float parameter_2);
float v_pager_write_hot_dirty_pages( unsigned int parameter_1,char parameter_2);
void v_page_merge_hot( int parameter_1,short parameter_2);
void v_pager_get_hot_pages( float parameter_1);
int v_WriteInt32( double parameter_1,short parameter_2,double parameter_3);
int v_vedisFinalizeJournal( unsigned int parameter_1,int parameter_2,int parameter_3);
int v_pager_dirty_commit( long parameter_1);
double v_pager_write_journal_header( char parameter_1,float parameter_2);
int v_vedisOpenJournal( char parameter_1);
long v_SyTimeFormatToDos( short parameter_1,unsigned int parameter_2);
char v_pager_write_db_header( int parameter_1);
long v_pager_page_to_dirty_list( float parameter_1,float parameter_2);
short v_pager_create_header( long parameter_1);
void v_vedisBitvecCreate( float parameter_1,double parameter_2);
double v_vedisPagerBegin( double parameter_1,int uni_para);
void v_vedisPageWrite( char parameter_1,int uni_para);
short v_vedisKvIopageWrite( char parameter_1,int uni_para);
float v_vedisKvIoNewPage( double parameter_1,double parameter_2);
char v_vedisKvIoPageLookup( float parameter_1,float parameter_2,int parameter_3);
float v_page_ref( int parameter_1);
unsigned int v_pager_link_page( short parameter_1,float parameter_2);
double v_pager_get_page_contents( unsigned int parameter_1,double parameter_2,int parameter_3);
float v_pager_alloc_page( char parameter_1,float parameter_2);
int v_vedisGetPageSize();
float v_vedisOsSectorSize( int parameter_1);
float v_GetSectorSize( int parameter_1);
double v_SyDosTimeFormat( char parameter_1,float parameter_2);
int v_pager_extract_header( double parameter_1,short parameter_2,short parameter_3);
int v_pager_read_db_header();
double v_vedisOsCloseFree( float parameter_1,short parameter_2);
float v_pager_fetch_page( long parameter_1,long parameter_2);
int v_pager_fill_page( long parameter_1,unsigned int parameter_2);
short v_vedisOsWrite( long parameter_1,short parameter_2,char parameter_3,char parameter_4);
void v_pager_cksum( long parameter_1,char parameter_2);
float v_pager_play_back_one_page( unsigned int parameter_1,float parameter_2,float parameter_3);
int v_vedisOsTruncate( short parameter_1,int parameter_2);
char v_ReadInt64( float parameter_1,unsigned int parameter_2,short parameter_3);
unsigned int v_ReadInt32( long parameter_1,unsigned int parameter_2,char parameter_3);
float v_vedisOsRead( float parameter_1,short parameter_3,short parameter_4);
void v_pager_read_journal_header( long parameter_1,long parameter_2,long parameter_3);
long v_pager_playback( float parameter_1);
short v_vedisOsSync( float parameter_1,int parameter_2);
void v_vedisOsUnlock( double parameter_1,int parameter_2);
float v_pager_unlock_db( double parameter_1,int parameter_2);
int v_vedisOsDelete( long parameter_1,double parameter_2,int parameter_3);
double v_vedisOsFileSize( double parameter_1,unsigned int parameter_2);
double v_vedisOsCheckReservedLock( unsigned int parameter_1,int parameter_2);
long v_vedisOsAccess( float parameter_1,int parameter_2,int parameter_3,int parameter_4);
unsigned int v_pager_has_hot_journal( float parameter_1,int parameter_2,int uni_para);
long v_pager_journal_rollback( char parameter_1,int parameter_2,int uni_para);
float v_vedisOsLock( long parameter_1,int parameter_2);
void v_pager_lock_db( int parameter_1,int parameter_2,int uni_para);
float v_pager_wait_on_lock( float parameter_1,int parameter_2);
void v_SyBlobFormatAp( unsigned int parameter_1,float parameter_2,short parameter_3);
long v_vedisGenErrorFormat( float parameter_1,int parameter_2,short parameter_3);
double v_vedisOsOpen( double parameter_1,double parameter_2,double parameter_3,long parameter_4,unsigned int parameter_5);
float v_pager_shared_lock(int uni_para);
int v_vedisPagerAcquire( short parameter_1,float parameter_2,int parameter_3,int parameter_4,int parameter_5);
char v_vedisKvIoPageGet( short parameter_1,double parameter_2,int parameter_3);
char v_pager_kv_io_init( double parameter_1,char parameter_2,int parameter_3,int uni_para);
long v_vedisGenOutofMem( long parameter_1);
int v_vedisReleaseCursor( char parameter_1,long parameter_2);
char v_pager_release_kv_engine( int parameter_1);
long v_vedisPagerRegisterKvEngine( int parameter_1,char parameter_2,int uni_para);
unsigned int v_randomByte( unsigned int parameter_1);
long v_SyRandomness( char parameter_1,long parameter_3);
double v_SyOSUtilRandomSeed(short parameter_2);
double v_SyRandomnessInit( int parameter_1,long parameter_2);
float v_vedisGenError( int parameter_1,long parameter_2,int uni_para);
int v_vedisFindKVStore( char parameter_1,double parameter_2);
double v_SyStrnicmp( short parameter_1,double parameter_2,int parameter_3);
double v_vedisInMemory( int parameter_1);
long v_vedisPagerOpen( double parameter_1,float parameter_2,unsigned int parameter_3,unsigned int parameter_4,int uni_para);
int v_vedisSanityzeFlag( int parameter_1);
float v_vedisInitDatabase( int parameter_1,double parameter_2,long parameter_3,unsigned int parameter_4,int uni_para);
float v_lhCursorReset( int parameter_1);
short v_lhCursorData( long parameter_1,long parameter_2,char parameter_3);
char v_lhCursorDataLength( short parameter_1,double parameter_2);
void v_lhCursorKey( unsigned int parameter_1,float parameter_2,unsigned int parameter_3);
long v_lhCursorKeyLength( char parameter_1,int parameter_2);
double v_lhRecordRemove( int parameter_1);
void v_lhCursorDelete( long parameter_1);
unsigned int v_lhCursorPrev( float parameter_1);
char v_lhCursorNext( short parameter_1);
char v_lhCursorValid( short parameter_1);
long v_lhCursorPrevPage( unsigned int parameter_1);
long v_lhCursorLast( char parameter_1);
short v_lhCursorNextPage( int parameter_1);
float v_lhCursorFirst( int parameter_1);
long v_lhRecordLookup( int parameter_1,short parameter_2,int parameter_3,float parameter_4);
float v_lhCursorSeek( unsigned int parameter_1,char parameter_2,int parameter_3,int parameter_4);
short v_lhInitCursor( long parameter_1);
short v_lhash_kv_append( long parameter_1,char parameter_2,int parameter_3,short parameter_4,char parameter_5);
long v_lhRestorePage( unsigned int parameter_1,char parameter_2);
int v_lhRecordOverwrite( unsigned int parameter_1,unsigned int parameter_2,float parameter_3);
float v_lhMoveLocalCell( long parameter_1,unsigned int parameter_2,int parameter_3,char parameter_4);
unsigned int v_lhRecordAppend( float parameter_1,short parameter_2,float parameter_3);
unsigned int v_lhFindSibeling( double parameter_1);
double v_lhUnlinkCell( char parameter_1);
short v_lhConsumeCellData( double parameter_1,char parameter_2,short parameter_3);
float v_SyBlobReset();
double v_SyBlobDup( long parameter_1,float parameter_2);
int v_lhTransferCell( double parameter_1,char parameter_2);
unsigned int v_lhPageSplit( int parameter_1,double parameter_2,char parameter_3,double parameter_4);
void v_lhSplit( float parameter_1,int parameter_2);
double v_lhRecordInstall( double parameter_1,unsigned int parameter_2,char parameter_3,char parameter_4,unsigned int parameter_5,unsigned int parameter_6);
long v_lhKeyCmp( short parameter_1,int parameter_2);
double v_lhFindCell( float parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4);
char v_vedisDataConsumer( double parameter_1,unsigned int parameter_2);
long v_lhConsumeCellkey( double parameter_1,unsigned int parameter_2,long parameter_3,int parameter_6);
long v_lhParseOneCell( int parameter_1,double parameter_2,unsigned int parameter_3,long parameter_4);
double v_lhPageFreeSpace( int parameter_1);
unsigned int v_lhLoadCells( int parameter_1);
void v_lhParsePageHeader( double parameter_1);
short v_lhLoadPage( int parameter_1,int parameter_2,char parameter_3,char parameter_4,int parameter_5);
double v_lhMapWriteRecord( char parameter_1,float parameter_2,double parameter_3);
void v_lhCellWriteHeader( long parameter_1);
unsigned int v_lhCellWriteLocalPayload( char parameter_1,float parameter_2,char parameter_3,long parameter_4,double parameter_5);
short v_lhCellDiscard( long parameter_1);
int v_lhCellWriteOvflPayload( char parameter_1,char parameter_2,int parameter_3,float parameter_4);
unsigned int v_lhInstallCell( long parameter_1);
void v_SyBlobInit( long parameter_1,unsigned int parameter_2);
unsigned int v_lhNewCell( int parameter_1,long parameter_2);
short v_lhRestoreSpace( unsigned int parameter_1,double parameter_2,long parameter_3);
int v_lhFindSlavePage( unsigned int parameter_1,int parameter_2,unsigned int parameter_3,float parameter_4);
double v_lhSlaveStore( short parameter_1,long parameter_2,double parameter_3,long parameter_4,double parameter_5,double parameter_6);
int v_lhPageDefragment( double parameter_1);
void v_SyBigEndianUnpack16( double parameter_1,float parameter_2);
double v_lhAllocateSpace( int parameter_1,unsigned int parameter_2,unsigned int parameter_3);
float v_lhStoreCell( int parameter_1,char parameter_2,unsigned int parameter_3,short parameter_4,unsigned int parameter_5,int parameter_6,int parameter_7);
int v_SyBigEndianPack16( unsigned int parameter_1,unsigned int parameter_2);
long v_lhSetEmptyPage( long parameter_1);
unsigned int v_lhNewPage( unsigned int parameter_1,short parameter_2,long parameter_3);
short v_lhAcquirePage( short parameter_1,double parameter_2);
char v_lhMapFindBucket( long parameter_1,int parameter_2);
double v_lh_record_insert( double parameter_1,long parameter_2,short parameter_3,long parameter_4,float parameter_5,int parameter_6);
double v_lhash_kv_replace( double parameter_1,char parameter_2,int parameter_3,short parameter_4,char parameter_5);
unsigned int v_MemPoolBucketAlloc( long parameter_1,double parameter_2);
long v_MemBackendPoolAlloc( float parameter_1,int parameter_2);
short v_SyMemBackendPoolAlloc( int parameter_1,int parameter_2);
int v_lhMapInstallBucket( double parameter_1,short parameter_2,float parameter_3);
int v_lhMapLoadPage( char parameter_1,long parameter_2,double parameter_3);
void v_SyBigEndianUnpack64( char parameter_1,double parameter_2);
long v_SyBigEndianUnpack32( long parameter_1,double parameter_2);
char v_lhash_read_header( short parameter_1,unsigned int parameter_2);
short v_SyBigEndianPack64( char parameter_1,char parameter_2);
char v_SyBigEndianPack32( short parameter_1,long parameter_2);
short v_lhash_write_header( float parameter_1,short parameter_2);
float v_lhash_kv_open( char parameter_1,unsigned int parameter_2);
double v_lhash_kv_config( short parameter_1,int parameter_2,char parameter_3);
int v_lhash_kv_release( double parameter_1);
double v_MemBackendPoolFree( unsigned int parameter_1);
unsigned int v_SyMemBackendPoolFree( long parameter_1);
int v_SyBlobRelease();
short v_lhash_page_release();
void v_lhash_bin_hash( double parameter_1,char parameter_2);
void v_lhash_kv_init( char parameter_1,int parameter_2);
long v_vedisExportDiskKvStorage();
short v_MemHashCursorReset( char parameter_1);
int v_MemHashCursorData( float parameter_1,unsigned int parameter_2,char parameter_3);
int v_MemHashCursorDataLength( short parameter_1,float parameter_2);
long v_MemHashCursorKey( double parameter_1,char parameter_2,char parameter_3);
long v_MemHashCursorKeyLength( short parameter_1,int parameter_2);
char v_MemHashUnlinkRecord( short parameter_1,double parameter_2);
double v_MemHashCursorDelete( long parameter_1);
short v_MemHashCursorPrev( unsigned int parameter_1);
double v_MemHashCursorNext( long parameter_1);
long v_MemHashCursorValid( long parameter_1);
short v_MemHashCursorLast( unsigned int parameter_1);
unsigned int v_MemHashCursorFirst( char parameter_1);
unsigned int v_MemHashCursorSeek( double parameter_1,double parameter_2,int parameter_3,int parameter_4);
char v_MemHashInitCursor( double parameter_1);
char v_MemHashAppend( char parameter_1,char parameter_2,int parameter_3,int parameter_4,long parameter_5);
void v_MemHashGrowTable( double parameter_1);
char v_MemHashLinkRecord( double parameter_1,unsigned int parameter_2);
void v_MemHashNewRecord( int parameter_1,float parameter_2,int parameter_3,double parameter_4,unsigned int parameter_5,long parameter_6);
char v_MemHashGetEntry( char parameter_1,double parameter_2,int parameter_3);
char v_MemHashReplace( int parameter_1,short parameter_2,int parameter_3,double parameter_4,int parameter_5);
unsigned int v_MemHashConfigure( char parameter_1,int parameter_2,int parameter_3);
double v_MemBackendRelease( unsigned int parameter_1);
short v_SyMemBackendRelease( float parameter_1);
void v_MemHashRelease( float parameter_1);
long v_MemHashFunc( double parameter_1,unsigned int parameter_2);
int v_SyMemBackendInitFromParent( unsigned int parameter_1,char parameter_2);
unsigned int v_MemHashInit( float parameter_1,int parameter_2);
char v_vedisExportMemKvStorage();
int v_SySetInit( double parameter_1,double parameter_2,long parameter_3);
int v_UnixUnmap(double parameter_2);
void v_UnixMmap( long parameter_1,double parameter_3);
char v_unixCurrentTime( unsigned int parameter_1,long parameter_2);
unsigned int v_unixSleep( int parameter_1,int parameter_2);
char v_SyMemBackendDup( float parameter_1,unsigned int parameter_2,float parameter_3);
double v_BlobPrepareGrow( char parameter_1,short parameter_2,int uni_para);
long v_SyBlobAppend( int parameter_1,long parameter_2,short parameter_3,int uni_para);
short v_FormatConsumer( int parameter_1,unsigned int parameter_2);
void v_getdigit( double parameter_1,int parameter_2);
void v_InternFormat( short parameter_1,double parameter_3,char parameter_4);
short v_FormatMount( long parameter_1,float parameter_3,int parameter_5,unsigned int parameter_6,char parameter_7);
void v_SyBlobInitFromBuf( short parameter_1,unsigned int parameter_3);
void v_SyBufferFormat( char parameter_1,short parameter_2,float parameter_3,double parameter_4);
short v_unixFullPathname( short parameter_1,long parameter_2,int parameter_3,char parameter_4);
double v_unixAccess( long parameter_1,long parameter_2,int parameter_3,int parameter_4);
long v_unixDelete( int parameter_1,short parameter_2,int parameter_3);
float v_MemBackendFree( short parameter_1);
double v_SyMemBackendFree( char parameter_1);
double v_vedis_free();
unsigned int v_SyMemcpy( long parameter_1,unsigned int parameter_3);
short v_SyMemcmp( char parameter_1,long parameter_2,float parameter_3);
short v_findInodeInfo( char parameter_1,unsigned int parameter_2);
unsigned int v_fillInUnixFile( int parameter_1,int parameter_2,int parameter_3,float parameter_4,char parameter_5,int parameter_6,int parameter_7);
unsigned int v_SyStrlen( float parameter_1);
unsigned int v_Systrcpy( char parameter_1,long parameter_2,char parameter_3,unsigned int parameter_4);
short v_openDirectory( int parameter_1,int parameter_2);
char v_findCreateFileMode( short parameter_1,int parameter_2,float parameter_3);
int v_SyMemBackendAlloc( unsigned int parameter_1,short parameter_2);
unsigned int v_vedisExportMemBackend();
unsigned int v_vedis_malloc( short parameter_1);
void v_unixLeaveMutex();
long v_unixEnterMutex();
double v_findReusableFd( char parameter_1,int parameter_2);
long v_unixOpen( char parameter_1,int parameter_2,double parameter_3,char parameter_4);
void v_vedisExportBuiltinVfs();
int v_SyMemBackendInitFromOthers( char parameter_1,int parameter_2,float parameter_3);
unsigned int v_SyZero(double parameter_2);
short v_SyMemBackendInit( float parameter_1,short parameter_2);
void v_MemBackendAlloc( float parameter_1,unsigned int parameter_2,int uni_para);
short v_MemBackendRealloc( double parameter_1,long parameter_3,int uni_para);
int v_SyMemBackendRealloc( double parameter_1,unsigned int parameter_3,int uni_para);
unsigned int v_SySetPut( double parameter_1,short parameter_2);
char v_vedisCoreConfigure( int parameter_1,double parameter_2);
int v_vedis_lib_config( int parameter_1,int parameter_2);
double v_vedisCoreInitialize();
int v_vedis_open( short parameter_1,char parameter_2,int uni_para);
long v_vedisRemoveCommand( double parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short_1 = short_1 * short_2;
	double_1 = v_SyMemBackendFree(char_1);

	unsigned_int_1 = unsigned_int_1;
	float_2 = float_1 + float_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 + long_1;
		int_2 = int_1 + int_2;
		double_3 = double_2 + double_2;
	}
	char_3 = char_2 + char_2;
	double_3 = double_2 + double_2;
	unsigned_int_2 = v_SyStrlen(float_3);

	int_2 = int_1 + int_1;
	return long_2;
	v_vedisFetchCommand(short_3,int_1);

}
int v_vedis_delete_command( char parameter_1,double parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	long_1 = long_1 * long_1;
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
	char_2 = char_1 + char_1;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	return int_1;
	long_2 = v_vedisRemoveCommand(double_4,long_1);

}
void v_vedisDeleteBuiltinCommands( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_3 = int_1 + int_2;
	int_2 = v_vedis_delete_command(char_1,double_1);

	short_1 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
}
int v_vedis_close( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned_int_1 = v_SyMemBackendPoolFree(long_1);

	float_1 = float_1 + float_1;
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
	double_3 = double_1 + double_2;
	int_2 = int_2 * int_1;
	if(1)
	{
		char_1 = char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	short_1 = v_vedisEngineRelease(int_1);

	int_4 = int_1 * int_3;
	double_4 = double_4;
	if(1)
	{
		int_3 = int_2 * int_2;
	}
	v_vedisDeleteBuiltinCommands(char_2);

	char_2 = char_1 + char_2;
	return int_1;
}
float v_vedisObjContainerDestroy( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int_1 = int_1;
	long_1 = v_vedisObjectValueDestroy(int_1,int_1);

	long_3 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = int_2 + int_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	short_3 = short_1 * short_2;
	return float_1;
	double_1 = v_SySetRelease(unsigned_int_1);

}
short v_vedisReleaseContext( short parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = v_SyBlobRelease();

	long_2 = long_1 + long_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			if(1)
			{
				double_1 = double_1 + double_2;
			}
			int_1 = int_1 * int_1;
			unsigned_int_1 = v_SyMemBackendPoolFree(long_3);

			double_2 = double_3 + double_3;
		}
		double_1 = double_2;
	}
	int_1 = v_vedisMemObjRelease(unsigned_int_1);

	int_2 = int_2;
	return short_1;
	double_2 = v_SySetRelease(unsigned_int_2);

}
int v_vedisInitContext( long parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_SySetInit(double_1,double_1,long_1);

	char_1 = char_1 + char_1;
	v_SyBlobInit(long_2,unsigned_int_3);

	int_1 = int_2 * int_1;
	double_1 = double_1 * double_1;
	double_1 = double_2 + double_2;
	return int_2;
	int_3 = v_vedisMemObjRelease(unsigned_int_1);

}
unsigned int v_vedisExec( long parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_4 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	short short_5 = 1;
	char char_3 = 1;
	short short_6 = 1;
	float float_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long_1 = v_vedisGenErrorFormat(float_1,int_1,short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	short_1 = short_1 * short_1;
	short_3 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1;
	int_1 = int_2 + int_1;
	unsigned_int_1 = v_SySetPut(double_1,short_4);

	int_2 = int_2 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_1 = double_1 + double_1;
			short_2 = short_1 * short_2;
		}
	}
	if(1)
	{
		float_2 = v_vedisNewObjectValue(double_2,double_3);

		char_2 = char_1 * char_1;
	}
	int_3 = v_SySetInit(double_1,double_4,long_2);

	short_5 = v_vedisReleaseContext(short_5);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 + double_4;
	char_3 = char_1 + char_2;
	if(1)
	{
		v_vedisFetchCommand(short_2,int_1);

		short_1 = short_3;
	}
	int_2 = v_vedisInitContext(long_1,double_1,int_3);

	float_2 = v_vedisObjContainerDestroy(short_6,char_3);

	double_1 = double_2 + double_3;
	if(1)
	{
		int int_5 = 1;
		float_3 = v_vedisGenError(int_4,long_3,-1 );

		int_4 = int_5 * int_3;
	}
	float_2 = float_1 + float_2;
	if(1)
	{
		float float_4 = 1;
		float_3 = float_4 + float_1;
	}
	int_1 = int_1;
	if(1)
	{
		double_2 = double_4 + double_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			float float_5 = 1;
			float_5 = float_2 + float_2;
		}
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	return unsigned_int_2;
}
short v_SyLexRelease( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1;
		}
	}
	return short_3;
}
int v_SyLexTokenizeInput( float parameter_1,float parameter_2,double parameter_3,long parameter_5,double parameter_6)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		int int_1 = 1;
		if(1)
		{
		}
		int_3 = int_1 * int_2;
	}
	double_4 = double_2 * double_3;
	long_1 = long_2 * long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_4 = 1;
			int_2 = int_4;
		}
		long_2 = long_1 * long_3;
		long_3 = long_2 * long_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			if(1)
			{
			}
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		}
		if(1)
		{
			double_3 = double_3 + double_1;
		}
		if(1)
		{
			char_1 = char_1;
			if(1)
			{
				double double_5 = 1;
				double_5 = double_3 + double_2;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
		}
	}
	if(1)
	{
		long_3 = long_1;
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			short_1 = v_SyMemcmp(char_1,long_3,float_1);

			float_3 = float_1 + float_2;
		}
		unsigned_int_2 = v_SySetPut(double_2,short_2);

		int_3 = int_3 + int_2;
	}
	return int_2;
}
long v_vedisTokenizeInput( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_6 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
		int int_3 = 1;
		short short_1 = 1;
		char char_3 = 1;
		short short_3 = 1;
		int_3 = int_3 * int_1;
		if(1)
		{
			short short_2 = 1;
			short_2 = short_1 + short_1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		char_3 = char_1 + char_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_4 = 1;
			float_1 = float_1 + float_2;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
		}
		short_1 = short_3;
	}
	short_4 = short_5;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_3 = long_1 + long_2;
		double_1 = double_1 + double_2;
	}
	int_2 = int_4 * int_4;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_2;
		double_1 = double_1 * double_2;
	}
	char_1 = char_2;
	if(1)
	{
		int int_5 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		int_2 = int_5 + int_5;
	}
	int_6 = int_1 * int_1;
	return long_3;
}
short v_SyLexInit( short parameter_1,double parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		long long_2 = 1;
		if(1)
		{
		}
		long_2 = long_1 + long_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		if(1)
		{
		}
		int_3 = int_1 + int_2;
	}
	unsigned_int_2 = unsigned_int_2;
	short_2 = short_1 * short_1;
	long_1 = long_1;
	double_2 = double_1 * double_1;
	short_2 = short_3;
	short_2 = short_1 + short_2;
	long_1 = long_1 + long_1;
	return short_4;
}
double v_vedisTokenize( double parameter_1,char parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	double double_2 = 1;
	char char_4 = 1;
	long long_2 = 1;
	short_3 = short_1 * short_2;
	short_1 = v_SyLexInit(short_1,double_1,float_1);

	long_1 = v_vedisTokenizeInput(short_1,char_1);

	double_1 = double_1;
	char_2 = char_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "|b") > 0)
	{
	}
	int_3 = int_1 * int_2;
	int_4 = v_SyLexTokenizeInput(float_1,float_2,double_2,long_1,double_1);

	char_3 = char_4 + char_3;
	return double_1;
	short_1 = v_SyLexRelease(long_2);

}
long v_vedisProcessInput( long parameter_1,short parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_4 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_7 = 1;
	char_3 = char_1 + char_2;
	long_2 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 + double_2;
	char_5 = char_2 * char_4;
	float_2 = float_1 + float_2;
	int_1 = int_1 + int_1;
	long_5 = long_3 * long_4;
	if(1)
	{
		long long_6 = 1;
		long_2 = long_5 * long_6;
	}
	if(1)
	{
		double_1 = double_4;
	}
	int_1 = int_2;
	short_3 = short_1 + short_2;
	int_2 = v_SySetInit(double_3,double_1,long_5);

	short_3 = short_3 * short_1;
	double_1 = double_3 + double_4;
	if(1)
	{
		double double_5 = 1;
		int_2 = int_2 + int_2;
		double_5 = double_5 + double_4;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	double_3 = v_SySetRelease(unsigned_int_2);

	short_2 = short_3 * short_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		short short_4 = 1;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_5;
		short_4 = short_2 * short_1;
		unsigned_int_1 = unsigned_int_1;
	}
	unsigned_int_3 = v_vedisExec(long_1);

	double_3 = double_1 * double_4;
	return long_7;
	double_1 = v_vedisTokenize(double_3,char_1,short_3);

}
int v_vedis_exec( char parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = v_SyStrlen(float_1);

		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	}
	return int_1;
	long_1 = v_vedisProcessInput(long_2,short_1,char_1);

}
int v_isBlank( int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	int_1 = int_1;
	long_1 = long_1;
	int_3 = int_1 + int_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "o0") > 0)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
void v_vedis_exit()
{
	int int_1 = 1;
	short short_1 = 1;
	int_1 = v_vedis_lib_shutdown();

	short_1 = short_1 * short_1;
}
float v_VmJsonArrayEncode( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	long long_3 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	float_2 = float_1 + float_2;
	char_1 = char_1 * char_3;
	long_1 = v_SyBlobAppend(int_1,long_2,short_3,-1 );

	double_1 = double_1 + double_1;
	long_2 = long_3;
	return float_2;
	int_1 = v_VmJsonEncode(int_1,char_1);

}
int v_vedis_value_is_string( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_2;
	return int_1;
}
int v_SyStrIsNumeric( double parameter_1,unsigned int parameter_2,short parameter_3,double parameter_4)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	char_1 = char_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double_1 = double_2 + double_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_1;
		}
		char_1 = char_1 + char_1;
		char_3 = char_2 + char_2;
	}
	return int_1;
}
double v_vedisMemObjIsNumeric( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_1 * double_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
		}
		int_1 = v_SyStrIsNumeric(double_2,unsigned_int_1,short_1,double_1);

		char_1 = char_2;
		char_1 = char_3 * char_3;
	}
	return double_3;
}
int v_vedis_value_is_numeric( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	char_2 = char_1 * char_1;
	float_1 = float_1 * float_1;
	return int_1;
	double_1 = v_vedisMemObjIsNumeric(float_2);

}
void v_MemObjBooleanValue( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = v_vedisHashmapUnref(unsigned_int_3);

	double_2 = double_1 + double_1;
	short_1 = short_2 + short_3;
	if(1)
	{
	}
	if(1)
	{
		char char_3 = 1;
		double_3 = v_SyStrnicmp(short_1,double_2,int_1);

		float_1 = v_vedisHashmapCount();

		char_3 = char_2 * char_1;
	}
}
double v_vedisMemObjToBool( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		char_1 = char_1 + char_2;
		v_MemObjBooleanValue(unsigned_int_1);

		int_1 = v_SyBlobRelease();

		float_2 = float_1 * float_2;
		double_2 = double_1 * double_1;
	}
	return double_1;
}
int v_vedis_value_to_bool( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_1;
	double_1 = v_vedisMemObjToBool(int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	return int_3;
}
int v_vedis_value_is_bool( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	return int_1;
}
int v_VmJsonEncode( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	double double_5 = 1;
	int int_6 = 1;
	double double_6 = 1;
	double_1 = double_1 + double_1;
	short_3 = short_1 + short_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		int_1 = v_vedis_value_is_null(char_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double_1 = double_1 + double_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		int_1 = v_vedis_value_is_bool(long_1);

		short_1 = short_1 + short_3;
		int_1 = v_vedis_value_to_bool(float_1);

		short_1 = short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		short_1 = short_2 + short_4;
		double_4 = double_3 * double_2;
		long_2 = v_SyBlobAppend(int_2,long_1,short_4,-1 );

		unsigned_int_1 = unsigned_int_5 * unsigned_int_6;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		float float_3 = 1;
		long_1 = long_3 * long_3;
		int_1 = int_1 * int_1;
		long_2 = long_3 + long_4;
		int_1 = int_2 * int_2;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_5 = 1;
			if(1)
			{
				int_2 = v_vedis_value_is_string(int_3);

				int_4 = int_2 + int_2;
			}
			unsigned_int_6 = unsigned_int_1 * unsigned_int_6;
			float_2 = v_VmJsonArrayEncode(double_5);

			int_2 = int_1 * int_5;
			if(1)
			{
				int_4 = v_vedis_value_is_array(short_3);

				char_1 = char_1 * char_1;
			}
			int_6 = int_4 * int_2;
		}
		float_2 = float_1 * float_3;
	}
	if(1)
	{
		char char_2 = 1;
		int_2 = v_vedis_array_walk(short_1,double_1);

		unsigned_int_6 = unsigned_int_6 * unsigned_int_3;
		char_1 = char_1 * char_2;
		char_2 = char_2 + char_1;
		double_2 = double_6 + double_1;
	}
	if(1)
	{
		int_6 = v_vedis_value_is_numeric(int_1);

		double_3 = double_1 * double_6;
	}
	return int_1;
	double_4 = v_vedis_value_to_string(short_3,int_6);

}
int v_vedisJsonSerialize( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short_2 = short_1 * short_2;
	int_1 = v_VmJsonEncode(int_2,char_1);

	int_1 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_1;
	double_5 = double_3 + double_4;
	int_3 = int_1;
	return int_4;
}
short v_MemObjStringValue( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	int int_5 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		if(1)
		{
			short_1 = v_vedisHashmapUnref(unsigned_int_2);

			int_2 = int_1 + int_1;
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_1;
		}
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned_int_2 = v_SyBlobFormat(int_4,double_1,int_2);

		long_1 = v_SyBlobAppend(int_4,long_2,short_2,-1 );

		int_1 = v_vedisJsonSerialize(unsigned_int_2,int_5);

		char_2 = char_1 + char_1;
		char_3 = char_1;
	}
	return short_2;
}
void v_vedisMemObjToString( int parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float_1 = v_SyBlobReset();

	double_2 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		short_1 = v_MemObjStringValue(long_1,int_1);

		double_1 = double_1 + double_2;
		unsigned_int_1 = unsigned_int_2;
		long_1 = long_2;
	}
}
double v_vedis_value_to_string( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long_1 = v_SyBlobNullAppend(short_1);

	int_2 = int_1 * int_1;
	if(1)
	{
		short_1 = short_2 + short_2;
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 + long_1;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_3 = 1;
			v_vedisMemObjToString(int_3);

			short_2 = short_3;
		}
	}
	return double_1;
}
unsigned int v_array_render( char parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1;
	int_2 = int_1 + int_1;
	double_1 = v_vedis_value_to_string(short_1,int_3);

	int_4 = int_3 + int_4;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_5 = 1;
		long_2 = long_1 + long_1;
		int_3 = int_5;
	}
	if(1)
	{
		char char_1 = 1;
		char_2 = char_1 + char_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_1;
	int_4 = v_vedis_value_is_null(char_2);

}
short v_vedisHashmapWalk( int parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_2 = long_1 + long_1;
	int_1 = int_1;
	double_1 = double_1 * double_1;
	long_1 = long_3 * long_1;
	char_3 = char_1 + char_2;
	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		if(1)
		{
			int int_2 = 1;
			int_2 = int_2 * int_2;
		}
		int_1 = int_3 + int_1;
		if(1)
		{
		}
		float_2 = float_1 * float_1;
		double_3 = double_2 + double_3;
	}
	return short_2;
}
int v_vedis_array_walk( short parameter_1,double parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	long_2 = long_1 * long_2;
	short_2 = short_1 + short_1;
	return int_1;
	short_3 = v_vedisHashmapWalk(int_2,char_1);

}
int v_vedis_value_is_array( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	return int_1;
}
int v_vedis_value_is_null( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
short v_command_result_render( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned_int_1 = v_array_render(char_1);

	long_1 = long_1 * long_1;
	if(1)
	{
		int_1 = v_vedis_value_is_array(short_1);

		char_1 = char_1;
	}
	if(1)
	{
		double double_3 = 1;
		int_3 = int_1 + int_2;
		double_1 = v_vedis_value_to_string(short_2,int_3);

		double_2 = double_2 + double_3;
	}
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		double double_4 = 1;
		int_4 = v_vedis_value_is_null(char_2);

		int_2 = v_vedis_array_walk(short_2,double_1);

		double_1 = double_4 + double_2;
	}
	return short_1;
}
long v_vedisObjectValueDestroy( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = v_SyMemBackendPoolFree(long_1);

	double_1 = double_1 + double_2;
	int_1 = v_vedisMemObjRelease(unsigned_int_1);

	int_1 = int_2 * int_1;
	return long_1;
}
int v_vedisHashmapRef( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
char v_vedisMemObjStore( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	double_1 = v_SyBlobDup(long_1,float_1);

	char_2 = char_1 * char_1;
	int_1 = v_vedisHashmapRef(char_3);

	float_1 = float_1;
	if(1)
	{
		short_1 = v_vedisHashmapUnref(unsigned_int_1);

		float_2 = float_1 + float_1;
	}
	if(1)
	{
		char char_4 = 1;
		char_2 = char_4 + char_4;
	}
	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2 + int_2;
		float_2 = v_SyBlobReset();

		int_3 = v_SyBlobRelease();

		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_2 * double_2;
		}
	}
	if(1)
	{
		long long_3 = 1;
		long_2 = long_2 * long_3;
	}
	return char_1;
	unsigned_int_2 = v_SyMemcpy(long_4,unsigned_int_3);

}
void v_SyStrToReal( int parameter_1,unsigned int parameter_2,unsigned int parameter_4)
{
	if(1)
	{
	}
	if(1)
	{
	}
}
float v_MemObjRealValue( double parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	v_MemObjStringToInt(short_1);

	v_SyStrToReal(int_1,unsigned_int_1,unsigned_int_2);

	float_1 = v_vedisHashmapCount();

	short_1 = v_vedisHashmapUnref(unsigned_int_2);

	float_2 = float_2 + float_2;
	return float_1;
}
unsigned int v_vedisMemObjToReal( int parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "v") < 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short_3 = short_1 * short_2;
		int_1 = v_SyBlobRelease();

		long_1 = long_1 + long_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return unsigned_int_1;
	float_1 = v_MemObjRealValue(double_1);

}
int v_vedisMemObjRelease( unsigned int parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		if(1)
		{
			short_1 = v_vedisHashmapUnref(unsigned_int_1);

			double_1 = double_1 * double_1;
		}
		double_1 = double_1;
		int_1 = v_SyBlobRelease();

		long_3 = long_1 * long_2;
	}
	return int_1;
}
unsigned int v_vedisHashmapRelease( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	short_2 = short_1 * short_1;
	int_1 = v_vedisMemObjRelease(unsigned_int_1);

	unsigned_int_2 = v_SyMemBackendPoolFree(long_1);

	short_4 = short_3 + short_3;
	long_2 = long_2 * long_1;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_5 = 1;
		if(1)
		{
			float float_1 = 1;
			float float_3 = 1;
			float_3 = float_1 + float_2;
		}
		int_2 = v_SyBlobRelease();

		int_1 = int_1;
		unsigned_int_1 = unsigned_int_3;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_4;
		}
		double_1 = double_1 + double_1;
		double_1 = v_SyMemBackendFree(char_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		short_5 = short_3 * short_3;
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_2 * float_2;
	}
	long_2 = long_3 * long_3;
	return unsigned_int_2;
}
short v_vedisHashmapUnref( unsigned int parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long_1 = long_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = v_vedisHashmapRelease(int_1);

		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	return short_1;
}
float v_vedisHashmapCount()
{
	float float_1 = 1;
	return float_1;
}
unsigned int v_SyStrToInt64( short parameter_1,double parameter_2,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1;
	float_1 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	double_2 = double_1 + double_2;
	return unsigned_int_1;
	short_1 = v_SyMemcmp(char_2,long_1,float_3);

}
short v_SyOctalStrToInt64( char parameter_1,unsigned int parameter_2,float parameter_4)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float_1 = float_1 * float_1;
	double_1 = double_1;
	int_3 = int_1 * int_2;
	float_2 = float_2;
	return short_1;
}
char v_SyBinaryStrToInt64( unsigned int parameter_1,char parameter_2,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_1 = int_3 * int_4;
	}
	return char_1;
}
long v_SyHexToint( double parameter_1)
{
	long long_1 = 1;
	return long_1;
}
void v_SyHexStrToInt64( short parameter_1,short parameter_2,long parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	long_1 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	short_1 = short_1 * short_1;
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
			short short_2 = 1;
			short_1 = short_1 * short_2;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
		}
	}
	double_2 = double_1;
	char_2 = char_1 + char_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		char_2 = char_2 + char_1;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int_3 = int_1 + int_2;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_4;
	}
	long_1 = long_1 + long_3;
	long_2 = v_SyHexToint(double_2);

}
short v_vedisTokenValueToInt64( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int_2 = int_1 + int_2;
		if(1)
		{
		}
		char_2 = v_SyBinaryStrToInt64(unsigned_int_1,char_2,char_2);

		short_1 = v_SyOctalStrToInt64(char_4,unsigned_int_2,float_1);

		float_2 = float_2 + float_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			v_SyHexStrToInt64(short_2,short_1,long_1);

			int_2 = int_1;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	return short_1;
	unsigned_int_2 = v_SyStrToInt64(short_1,double_4,long_1);

}
void v_MemObjStringToInt( short parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float_1 = float_1 + float_1;
	short_1 = v_vedisTokenValueToInt64(long_1);

	float_2 = float_2 + float_2;
}
long v_MemObjRealToInt( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_2;
	int_1 = int_1 + int_3;
	double_2 = double_1 * double_2;
	double_2 = double_2 + double_1;
	int_3 = int_2 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_3 + int_3;
	float_1 = float_1 + float_1;
	double_2 = double_1 * double_2;
	int_2 = int_4 * int_5;
	short_3 = short_1 * short_2;
	int_3 = int_2 + int_4;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	return long_1;
}
void v_MemObjIntValue( double parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char_1 = char_1 * char_1;
	double_2 = double_1 + double_2;
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
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char_2 = char_1 * char_1;
		short_1 = v_vedisHashmapUnref(unsigned_int_1);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		v_MemObjStringToInt(short_1);

		float_1 = v_vedisHashmapCount();

		int_2 = int_1 * int_2;
	}
	long_1 = v_MemObjRealToInt(double_2);

}
int v_vedisMemObjToInteger( float parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		long_1 = long_1 + long_2;
		float_3 = float_1 * float_2;
		v_MemObjIntValue(double_1);

		float_4 = float_2;
	}
	return int_1;
	int_1 = v_SyBlobRelease();

}
int v_vedisMemObjInitFromString( unsigned int parameter_1,double parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_4 = 1;
	double_1 = double_1;
	long_3 = long_1 * long_2;
	if(1)
	{
		unsigned_int_1 = v_SyZero(double_1);

		long_2 = v_SyBlobAppend(int_1,long_2,short_1,-1 );

		unsigned_int_2 = unsigned_int_1;
	}
	double_2 = double_1 + double_1;
	return int_2;
	v_SyBlobInit(long_4,unsigned_int_2);

}
float v_vedisNewObjectValue( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int_1 = v_vedisMemObjInitFromString(unsigned_int_1,double_1,unsigned_int_2);

	unsigned_int_3 = v_vedisMemObjToReal(int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	int_3 = int_2 + int_3;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_2 = 1;
		long_3 = long_1 + long_2;
		char_2 = char_1 * char_1;
		if(1)
		{
			double double_2 = 1;
			v_vedisMemObjInit(short_1,unsigned_int_2);

			double_1 = double_1 + double_2;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_3 + char_1;
	}
	return float_1;
	short_1 = v_SyMemBackendPoolAlloc(int_4,int_3);

	int_4 = v_vedisMemObjToInteger(float_1);

}
long v_SyBlobNullAppend( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int_3 = int_1 * int_2;
	int_4 = int_2 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
	if(1)
	{
		long long_2 = 1;
		long_1 = v_SyBlobAppend(int_2,long_1,short_1,-1 );

		long_2 = long_2 * long_2;
	}
	return long_1;
}
void v_vedisPagerSetCachesize( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
}
float v_vedisConfigure( float parameter_1,int parameter_2,double parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_6 = 1;
	short short_7 = 1;
	float float_5 = 1;
	char char_4 = 1;
	double double_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_1 + double_1;
	long_1 = v_SyBlobNullAppend(short_1);

	long_2 = v_vedisObjectValueDestroy(int_1,int_1);

	int_2 = int_1 * int_1;
	double_1 = double_2 * double_2;
	float_2 = float_1 * float_1;
	short_3 = short_2 + short_2;
	if(1)
	{
		float_4 = float_3 * float_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	long_1 = long_3 * long_2;
	char_1 = char_2;
	if(1)
	{
		if(1)
		{
			int_2 = int_2;
		}
		if(1)
		{
			char_2 = v_vedisMemObjStore(double_2,int_1);

			int_1 = int_2 + int_3;
		}
	}
	short_4 = short_5;
	int_5 = int_4 * int_2;
	char_2 = char_3 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		float_1 = v_vedisNewObjectValue(double_3,double_3);

		float_3 = float_3 + float_4;
		char_1 = char_3 + char_3;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	int_3 = int_5;
	short_7 = short_6 * short_5;
	if(1)
	{
		float_5 = float_4 * float_1;
		if(1)
		{
			short_2 = short_3 + short_6;
			float_4 = float_1 * float_1;
			int_4 = int_3;
		}
		int_4 = int_2 + int_4;
		short_2 = short_5 * short_2;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	v_vedisPagerSetCachesize(char_4,int_3);

	double_4 = double_3 + double_1;
	if(1)
	{
		char_1 = char_4 + char_2;
	}
	int_3 = int_6;
	char_2 = char_4 + char_4;
	short_4 = short_2 * short_6;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
	double_1 = double_2 + double_1;
	unsigned_int_4 = v_vedisPagerGetKvEngine(float_1);

	unsigned_int_1 = unsigned_int_6;
	long_2 = long_1;
	float_4 = float_1 + float_5;
	return float_4;
}
int v_vedis_config( char parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	long_3 = long_1 * long_2;
	int_1 = int_2;
	if(1)
	{
	}
	if(1)
	{
		int_3 = int_2 + int_2;
	}
	if(1)
	{
	}
	float_1 = v_vedisConfigure(float_1,int_2,double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	long_2 = long_1 + long_4;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	return int_3;
}
double v_SySetRelease( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int_3 = int_1 * int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_3 = v_SyMemBackendFree(char_1);

	int_1 = int_2 * int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	return double_4;
}
short v_vedisPagerClose( char parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	v_vedisExportBuiltinVfs();

	double_1 = double_1 * double_1;
	if(1)
	{
		char_1 = v_pager_release_kv_engine(int_1);

		int_1 = int_1 * int_2;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int_3 = int_2 * int_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_1 = double_1 * double_1;
		double_1 = v_vedisOsCloseFree(float_1,short_2);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	return short_2;
	float_2 = v_pager_unlock_db(double_1,int_1);

	double_1 = v_vedisBitvecDestroy();

}
long v_pager_reset_state( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_5 = 1;
	double_3 = double_1 * double_2;
	int_1 = v_pager_release_page(short_1,short_1);

	long_3 = long_1 + long_2;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_5 = double_4 * double_2;
	int_3 = int_2 * int_2;
	char_3 = char_2 + char_3;
	double_4 = v_vedisBitvecDestroy();

	float_1 = v_pager_unlock_db(double_1,int_3);

	long_2 = long_1 * long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		long long_4 = 1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
		double_4 = double_4 * double_2;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
		unsigned_int_4 = v_SyZero(double_2);

		long_3 = long_1 + long_4;
		char_1 = char_4 + char_4;
	}
	long_1 = long_3 * long_3;
	double_5 = double_1;
	float_3 = float_2 * float_1;
	int_2 = int_1 + int_2;
	char_2 = char_4 * char_2;
	if(1)
	{
		char_4 = char_2 + char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
		unsigned_int_5 = unsigned_int_6;
	}
	short_2 = short_3;
	float_2 = float_1;
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		int int_4 = 1;
		short_5 = short_4 * short_5;
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_7;
		}
		int_4 = int_1 * int_2;
		double_4 = double_4 + double_2;
		if(1)
		{
			double double_6 = 1;
			double_2 = double_6 * double_1;
			if(1)
			{
			}
		}
		if(1)
		{
			int_4 = int_4 * int_2;
			if(1)
			{
			}
		}
	}
	return long_5;
}
char v_vedisPagerRollback( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	float float_4 = 1;
	short short_1 = 1;
	long long_4 = 1;
	char char_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_5 = 1;
	char char_2 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		long_1 = v_pager_reset_state(float_1,int_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		short short_3 = 1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			if(1)
			{
				long long_2 = 1;
				long long_3 = 1;
				long_3 = long_1 * long_2;
			}
			float_2 = v_pager_unlock_db(double_1,int_2);

			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
			float_3 = float_1 * float_2;
			if(1)
			{
				double double_3 = 1;
				double_2 = v_vedisOsCloseFree(float_4,short_1);

				long_4 = v_pager_journal_rollback(char_1,int_2,-1 );

				double_1 = double_3 * double_1;
				if(1)
				{
					unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
				}
			}
		}
		short_2 = short_1 * short_2;
		short_3 = short_1 + short_2;
		if(1)
		{
			float_1 = v_vedisGenError(int_3,long_1,-1 );

			int_4 = v_vedisOsDelete(long_5,double_2,int_4);

			short_2 = short_2 + short_1;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
		}
	}
	if(1)
	{
		float float_5 = 1;
		float float_6 = 1;
		double_2 = double_1 * double_2;
		short_2 = v_vedisOsSync(float_2,int_2);

		float_3 = float_5 + float_6;
	}
	return char_2;
}
double v_vedisBitvecDestroy()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = double_2;
	int_2 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_2 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		double double_7 = 1;
		long long_3 = 1;
		float float_3 = 1;
		if(1)
		{
			double_2 = double_2 * double_3;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_1 = v_SyMemBackendFree(char_1);

		char_3 = char_1 * char_2;
		int_2 = int_2 * int_1;
		unsigned_int_1 = v_SyMemBackendPoolFree(long_1);

		long_1 = long_1 * long_1;
		if(1)
		{
			long_1 = long_2;
		}
		double_3 = double_1 * double_2;
		double_1 = double_3 + double_4;
		double_5 = double_6;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			double_5 = double_5;
		}
		float_1 = float_1 + float_2;
		short_1 = short_1 * short_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		if(1)
		{
			char char_4 = 1;
			char_3 = char_1 + char_4;
		}
		int_3 = int_2 * int_1;
		double_4 = double_3 + double_7;
		long_2 = long_3;
		float_3 = float_2 * float_2;
	}
	double_2 = double_1 + double_4;
	long_1 = long_1 * long_1;
	return double_5;
}
double v_pager_commit_phase2( double parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			short short_1 = 1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				int_1 = v_vedisOsDelete(long_1,double_1,int_2);

				unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			}
			float_1 = v_pager_unlock_db(double_2,int_2);

			char_1 = char_1 + char_2;
			short_1 = short_1 * short_1;
			if(1)
			{
				char char_3 = 1;
				unsigned int unsigned_int_4 = 1;
				double_1 = v_vedisBitvecDestroy();

				char_2 = char_3 + char_3;
				unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
			}
		}
	}
	return double_1;
}
long v_pager_write_dirty_pages( short parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	long long_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int_1 = int_2;
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		int int_4 = 1;
		double double_4 = 1;
		if(1)
		{
			double double_1 = 1;
			double_2 = double_1 + double_1;
		}
		long_1 = v_pager_unlink_page(char_2,float_1);

		int_3 = v_pager_release_page(short_1,short_2);

		int_3 = int_4;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				double double_3 = 1;
				double_3 = double_2;
			}
		}
		short_3 = v_vedisOsWrite(long_2,short_2,char_3,char_1);

		int_4 = int_4 * int_3;
		if(1)
		{
			char char_4 = 1;
			char_3 = char_4 * char_2;
			long_1 = long_2 + long_1;
		}
		double_4 = double_2 * double_4;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_3 * short_3;
	long_4 = long_1 * long_3;
	return long_2;
}
double v_page_merge_dirty( double parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	float_2 = float_1 + float_2;
	short_2 = short_1 + short_2;
	float_3 = float_2 * float_1;
	long_2 = long_1 * long_1;
	float_4 = float_3 * float_2;
	long_4 = long_2 + long_3;
	double_1 = double_1;
	return double_1;
}
float v_pager_get_dirty_pages( int parameter_1)
{
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 + double_1;
		}
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1;
		}
	}
	return float_2;
	unsigned_int_1 = v_SyZero(double_2);

	double_3 = v_page_merge_dirty(double_3,long_1);

}
void v_pager_commit_phase1()
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	int_1 = v_vedisOsTruncate(short_1,int_1);

	char_1 = char_1 * char_1;
	double_1 = double_1;
	short_2 = v_vedisOsSync(float_1,int_2);

	double_1 = double_2 + double_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			float_2 = v_vedisGenError(int_2,long_1,-1 );

			double_2 = double_3 + double_4;
		}
		short_2 = short_2 * short_1;
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_2 = int_3 + int_4;
	if(1)
	{
		float_1 = float_1;
		if(1)
		{
			float float_3 = 1;
			float_1 = float_3 + float_2;
		}
	}
	if(1)
	{
		float_4 = float_2 * float_1;
	}
	char_1 = char_1;
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int_5 = v_vedisFinalizeJournal(unsigned_int_1,int_6,int_6);

		float_5 = v_pager_wait_on_lock(float_4,int_6);

		double_2 = double_5 + double_6;
		float_6 = v_pager_get_dirty_pages(int_4);

		double_7 = double_5;
		double_8 = double_7 * double_5;
	}
	if(1)
	{
		int int_7 = 1;
		int_2 = int_7 + int_5;
	}
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	long_2 = v_pager_write_dirty_pages(short_2,unsigned_int_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
double v_vedisPagerCommit( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	long_1 = long_1 + long_2;
	if(1)
	{
		double_1 = v_pager_commit_phase2(double_1);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	v_pager_commit_phase1();

	short_1 = short_1 * short_1;
	float_2 = float_1 + float_2;
	return double_1;
}
short v_vedisEngineRelease( int parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	double double_3 = 1;
	float_1 = float_1;
	if(1)
	{
		char char_2 = 1;
		char_1 = v_vedisPagerRollback(short_1,int_1);

		char_1 = char_2;
		if(1)
		{
			int_2 = int_1 + int_1;
		}
	}
	if(1)
	{
		short_2 = short_1 * short_2;
	}
	double_1 = double_2;
	short_2 = v_vedisPagerClose(char_1);

	int_2 = int_3 * int_3;
	short_2 = v_SyMemBackendRelease(float_1);

	int_3 = int_3 * int_1;
	return short_3;
	double_3 = v_vedisPagerCommit(double_3);

}
double v_vedisCoreShutdown()
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		}
		char_3 = char_1 + char_2;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
		double_1 = v_SySetRelease(unsigned_int_2);

		double_1 = double_2 + double_2;
		double_3 = double_1 * double_1;
	}
	unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	if(1)
	{
		float float_3 = 1;
		if(1)
		{
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
				int_3 = int_1 + int_2;
			}
			if(1)
			{
				char_1 = char_1 + char_1;
			}
			char_3 = char_2 * char_1;
		}
		float_2 = float_3 + float_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		short_1 = v_vedisEngineRelease(int_3);

		short_2 = v_SyMemBackendRelease(float_1);

		long_1 = long_1 + long_2;
	}
	double_1 = double_1 + double_3;
	return double_4;
}
int v_vedis_lib_shutdown()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	return int_1;
	double_3 = v_vedisCoreShutdown();

}
short v_Fatal()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_1;
	int_1 = int_1 + int_1;
	float_3 = float_1 * float_2;
	return short_1;
	int_2 = v_vedis_lib_shutdown();

}
int v_SyBlobAppendBig32( float parameter_1,float parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	int int_2 = 1;
	long_1 = v_SyBlobAppend(int_1,long_1,short_1,-1 );

	long_1 = long_1 + long_1;
	double_2 = double_1 * double_1;
	char_1 = v_SyBigEndianPack32(short_1,long_1);

	double_1 = double_3 * double_2;
	long_2 = long_1 * long_2;
	return int_2;
}
short v_SyBlobAppendBig16( int parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_3 = long_1 * long_2;
	long_2 = v_SyBlobAppend(int_1,long_1,short_1,-1 );

	double_1 = double_2;
	int_1 = v_SyBigEndianPack16(unsigned_int_1,unsigned_int_1);

	long_1 = long_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	return short_1;
}
unsigned int v_SyBlobFormat( int parameter_1,double parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short_3 = short_1 * short_2;
	double_1 = double_1;
	if(1)
	{
		if(1)
		{
		}
		short_3 = short_3 + short_2;
	}
	short_1 = v_FormatMount(long_1,float_1,int_1,unsigned_int_1,char_1);

	char_1 = char_2 * char_2;
	int_2 = int_1 + int_2;
	return unsigned_int_2;
}
unsigned int v_vedisPagerGetKvEngine( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
long v_vedisTableSerialize( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char_2 = char_1 * char_2;
	double_1 = double_1;
	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_2 + double_1;
	int_1 = v_SyBlobAppendBig32(float_1,float_1);

	double_2 = double_3 + double_1;
	float_3 = float_2 + float_1;
	int_1 = v_SyBlobRelease();

	int_3 = int_2 + int_2;
	if(1)
	{
		v_SyBlobInit(long_1,unsigned_int_4);

		unsigned_int_2 = v_SyBlobFormat(int_3,double_4,int_3);

		short_1 = v_SyBlobAppendBig16(int_3,unsigned_int_5);

		char_3 = char_3 * char_1;
	}
	long_2 = long_2 * long_3;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
	double_4 = double_2 * double_2;
	char_1 = char_3;
	double_4 = double_1;
	int_2 = int_4;
	unsigned_int_5 = v_vedisPagerGetKvEngine(float_2);

	double_1 = double_3 * double_4;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "8F") > 0)
	{
	}
	int_3 = int_4 + int_5;
	return long_2;
	long_1 = v_vedisGenErrorFormat(float_3,int_5,short_1);

}
char v_vedisPagerisMemStore( int parameter_1)
{
	char char_1 = 1;
	return char_1;
}
double v_vedisOnCommit()
{
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long_1 = v_vedisTableSerialize(short_1);

	int_1 = int_1;
	int_2 = int_1;
	short_2 = short_2;
	char_1 = v_vedisPagerisMemStore(int_2);

	double_1 = double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Wx") == 0)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		int_1 = int_1 * int_1;
		if(1)
		{
		}
		float_2 = float_1 + float_2;
	}
	return double_2;
}
void v_vedisPagerSetCommitCallback( int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_1 + float_2;
}
double v_SySetReset( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long_2 = long_1 + long_2;
	int_1 = int_1 + int_1;
	return double_1;
}
void v_SyBinHash( short parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_5 = double_4 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
		double_3 = double_1 + double_5;
		char_2 = char_1 + char_2;
		if(1)
		{
			int_1 = int_1;
		}
		long_1 = long_1 + long_2;
		double_2 = double_2 * double_3;
		if(1)
		{
			long long_3 = 1;
			long_1 = long_3 * long_3;
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		int_1 = int_1 + int_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
		}
		char_1 = char_1;
		long_2 = long_2;
	}
}
void v_vedisFetchCommand( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	short_1 = short_1;
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		if(1)
		{
			v_SyBinHash(short_1,short_1);

			float_1 = float_1;
		}
		if(1)
		{
		}
		short_1 = v_SyMemcmp(char_1,long_1,float_2);

		int_2 = int_3 + int_1;
	}
}
short v_vedisInstallCommand( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_5 = 1;
	long long_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	double_1 = double_1 + double_2;
	char_1 = char_1 * char_1;
	long_1 = long_1 * long_1;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = v_SySetReset(double_3);

	int_3 = int_1 + int_2;
	int_2 = int_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char_2 = char_1 * char_1;
		v_SyBinHash(short_1,short_3);

		char_4 = char_1 * char_3;
		long_1 = long_2 * long_1;
	}
	unsigned_int_2 = v_SyMemcpy(long_1,unsigned_int_1);

	double_1 = double_2;
	if(1)
	{
	}
	v_vedisFetchCommand(short_4,int_1);

	double_1 = double_1 * double_2;
	long_2 = long_1 * long_1;
	char_4 = char_2 * char_1;
	int_4 = int_3;
	int_2 = int_3 * int_4;
	double_3 = v_SyMemBackendFree(char_3);

	char_1 = char_2 + char_2;
	long_2 = long_2 + long_2;
	int_1 = v_SyMemBackendAlloc(unsigned_int_3,short_4);

	float_2 = float_1 * float_1;
	short_5 = short_2 + short_4;
	int_3 = int_1;
	char_3 = char_1;
	long_2 = long_3;
	if(1)
	{
		int_5 = int_3 * int_3;
	}
	short_4 = short_4 + short_5;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
		int_1 = int_5 * int_1;
		double_3 = double_1 * double_3;
		char_2 = char_3 + char_3;
		int_3 = int_3 * int_1;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			double double_6 = 1;
			long_1 = long_1 * long_2;
			int_1 = v_SySetInit(double_1,double_2,long_1);

			unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
			double_4 = double_1 + double_4;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				short short_6 = 1;
				if(1)
				{
					double_1 = double_1 * double_5;
				}
				double_5 = double_3 + double_5;
				unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
				unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
				if(1)
				{
					unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
				}
				short_6 = short_3 + short_3;
				unsigned_int_2 = v_SyZero(double_2);

				float_2 = float_2 * float_2;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
			}
			long_3 = long_2 + long_2;
			unsigned_int_4 = v_SyStrlen(float_3);

			unsigned_int_6 = unsigned_int_7;
			double_6 = double_1 + double_5;
		}
	}
	return short_2;
}
int v_vedis_register_command( double parameter_1,short parameter_2,float parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
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
	int_3 = int_2 + int_1;
	if(1)
	{
		int int_4 = 1;
		short_1 = v_vedisInstallCommand(float_1,unsigned_int_4,int_3);

		int_1 = int_4 * int_3;
	}
	return int_5;
}
char v_vedisRegisterBuiltinCommands( unsigned int parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char_1 = char_1 + char_1;
	int_1 = v_vedis_register_command(double_1,short_1,float_1,int_1,int_2);

	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_2 = char_2 + char_3;
	}
	return char_1;
}
void v_vedisMemObjInit( short parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	int_1 = int_1 + int_2;
	int_4 = int_3 + int_1;
	unsigned_int_1 = v_SyZero(double_1);

	v_SyBlobInit(long_1,unsigned_int_2);

	int_5 = int_2 + int_3;
}
char v_vedisInitCursor( int parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_2 = int_1 + int_2;
	long_1 = v_vedisGenErrorFormat(float_1,int_2,short_1);

	long_3 = long_2 + long_3;
	char_2 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "z") < 0)
	{
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float_4 = float_2 + float_3;
	}
	unsigned_int_5 = v_SyZero(double_1);

	char_2 = char_2 + char_2;
	if(1)
	{
		long_2 = v_vedisGenOutofMem(long_1);

		char_1 = char_1 * char_3;
	}
	short_2 = v_SyMemBackendPoolAlloc(int_2,int_1);

	int_2 = int_2;
	short_4 = short_2 + short_3;
	if(1)
	{
		int_1 = int_2 + int_2;
	}
	int_2 = int_3 * int_4;
	return char_3;
}
unsigned int v_vedisKvIoErr( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_2;
	float_1 = v_vedisGenError(int_1,long_1,-1 );

}
double v_vedisKvIoPageReload( unsigned int parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short_1 = short_1;
	short_2 = short_1 * short_1;
	return double_1;
}
char v_vedisKvIoPageUnpin( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_1;
	short_1 = short_1;
	return char_1;
}
char v_vedisKvIoTempPage( float parameter_1)
{
	char char_1 = 1;
	return char_1;
}
double v_vedisKvIoReadOnly( double parameter_1)
{
	double double_1 = 1;
	return double_1;
}
double v_vedisKvIoPageSize( unsigned int parameter_1)
{
	double double_1 = 1;
	return double_1;
}
short v_page_unref( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
		long long_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		long_1 = long_1;
		if(1)
		{
			double_4 = double_1 + double_3;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				double double_6 = 1;
				double_2 = double_4 + double_3;
				if(1)
				{
					double_1 = double_3 * double_4;
				}
				if(1)
				{
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_5 = 1;
					unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
					if(1)
					{
						unsigned int unsigned_int_4 = 1;
						unsigned int unsigned_int_5 = 1;
						unsigned_int_4 = unsigned_int_5;
					}
					int_1 = v_pager_release_page(short_1,short_2);

					double_2 = double_5;
				}
				double_6 = double_4;
				long_2 = v_pager_unlink_page(char_1,float_1);

				short_1 = short_2 + short_2;
			}
		}
	}
	return short_1;
}
long v_vedisKvIoPageUnRef( unsigned int parameter_1)
{
	short short_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_3 = short_1 + short_2;
	}
	return long_1;
	short_3 = v_page_unref(unsigned_int_1);

}
char v_vedisKvIopage_ref( unsigned int parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	return char_1;
	float_1 = v_page_ref(int_1);

}
unsigned int v_vedisKvIoPageDontMakeHot( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_1 = double_1 * double_2;
		if(1)
		{
			int_4 = int_2;
		}
		if(1)
		{
			double_2 = double_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		if(1)
		{
			int_2 = int_4;
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		int_2 = int_2;
	}
	return unsigned_int_4;
}
short v_vedisKvIoPageDontJournal()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double_3 = double_1 + double_2;
	double_4 = double_2 + double_4;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "h{") < 0)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 + int_2;
		}
	}
	return short_1;
	char_1 = v_vedisBitvecTest(long_1,float_1);

	v_vedisBitvecSet(long_2,double_4);

}
int v_vedisPagerDontWrite( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	return int_1;
}
void v_vedisKvIoPageDontWrite( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	int_3 = v_vedisPagerDontWrite(long_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void v_vedisBitvecSet( long parameter_1,double parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int_1 = v_SyMemBackendAlloc(unsigned_int_1,short_1);

	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	long_1 = long_1;
	if(1)
	{
	}
	int_1 = int_2 + int_2;
	double_3 = v_SyMemBackendFree(char_1);

	double_2 = double_3 + double_3;
	float_2 = float_1 * float_2;
	int_1 = int_1 * int_3;
	float_3 = float_1 * float_1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	short_2 = short_2 + short_3;
	if(1)
	{
		double_1 = double_4;
		int_2 = int_1 * int_2;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		int_3 = int_2 + int_1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			float float_4 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned_int_3 = unsigned_int_4;
			float_2 = float_1 * float_1;
			double_3 = double_2 * double_3;
			unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int int_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				if(1)
				{
					float_2 = float_1 + float_3;
				}
				float_3 = float_3 + float_3;
				short_4 = v_SyMemBackendPoolAlloc(int_2,int_3);

				int_2 = int_2;
				int_4 = int_4 + int_2;
				double_5 = double_5 * double_6;
				float_1 = float_3 + float_2;
				int_3 = int_2 + int_2;
			}
			float_4 = float_4 + float_3;
			char_1 = char_2 + char_1;
			unsigned_int_6 = v_SyZero(double_4);

			char_3 = char_1 * char_3;
		}
	}
}
float v_WriteInt64( float parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	char char_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	short_1 = v_SyBigEndianPack64(char_1,char_2);

	short_2 = v_vedisOsWrite(long_1,short_3,char_3,char_3);

	short_1 = short_3 * short_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_1;
	int_2 = int_1 * int_1;
	return float_2;
}
char v_vedisBitvecTest( long parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 + int_2;
		}
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1 + float_2;
		}
		if(1)
		{
		}
		short_1 = short_1 * short_1;
		if(1)
		{
			double_1 = double_1 + double_2;
		}
		if(1)
		{
		}
		double_3 = double_2 + double_2;
		if(1)
		{
			float float_3 = 1;
			float_3 = float_1 + float_3;
		}
		if(1)
		{
		}
		double_4 = double_1 + double_3;
	}
	return char_1;
}
char v_page_write( int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_4 = 1;
	double double_4 = 1;
	long long_3 = 1;
	double double_5 = 1;
	double double_7 = 1;
	short short_2 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_6 = 1;
			float_1 = v_vedisGenError(int_1,long_1,-1 );

			float_2 = v_WriteInt64(float_3,unsigned_int_2,unsigned_int_2);

			double_2 = double_1 + double_2;
			if(1)
			{
				short_1 = v_vedisOsWrite(long_2,short_1,char_1,char_1);

				float_4 = float_2 * float_1;
			}
			long_2 = v_pager_page_to_dirty_list(float_4,float_3);

			unsigned_int_1 = unsigned_int_2;
			if(1)
			{
			}
			double_4 = double_3 * double_4;
			if(1)
			{
			}
			v_vedisBitvecSet(long_3,double_5);

			double_4 = double_5 * double_4;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			if(1)
			{
			}
			v_pager_cksum(long_3,char_1);

			long_3 = long_1 * long_1;
			double_7 = double_4 + double_6;
			int_1 = int_1 * int_1;
		}
	}
	char_1 = v_vedisBitvecTest(long_3,float_3);

	double_1 = double_7 + double_4;
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		int_1 = v_WriteInt32(double_7,short_2,double_4);

		long_5 = long_2 + long_4;
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_1 + int_2;
		}
	}
	return char_2;
}
int v_pager_release_page( short parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_2;
		}
		int_1 = int_2;
		unsigned_int_3 = v_SyMemBackendPoolFree(long_1);

		int_3 = int_1 * int_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	return int_2;
}
long v_pager_unlink_page( char parameter_1,float parameter_2)
{
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_2;
		double_1 = double_2 + double_2;
	}
	double_3 = double_2;
	char_2 = char_1 * char_2;
	return long_1;
}
float v_pager_write_hot_dirty_pages( unsigned int parameter_1,char parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	float float_4 = 1;
	int_1 = int_1 * int_1;
	char_1 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		int int_2 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			short_1 = v_vedisOsWrite(long_1,short_2,char_2,char_1);

			float_2 = float_1 + float_2;
		}
		char_1 = char_1 * char_3;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
			if(1)
			{
				int int_3 = 1;
				int_3 = int_2 * int_3;
			}
		}
		int_1 = v_pager_release_page(short_1,short_2);

		char_4 = char_3 * char_4;
		if(1)
		{
			int int_4 = 1;
			int_2 = int_4 * int_1;
		}
		if(1)
		{
			int_2 = int_1 * int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
		if(1)
		{
			short_2 = short_3;
		}
		short_1 = short_1 + short_3;
		float_2 = float_1 * float_3;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
	return float_4;
	long_1 = v_pager_unlink_page(char_3,float_1);

}
void v_page_merge_hot( int parameter_1,short parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_1 = int_1 + int_1;
	float_3 = float_1 * float_2;
	double_3 = double_1 * double_2;
	double_5 = double_3 * double_4;
}
void v_pager_get_hot_pages( float parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_1 = double_1 * double_1;
	short_1 = short_1;
	float_2 = float_1 * float_1;
	unsigned_int_1 = v_SyZero(double_2);

	double_3 = double_1;
	v_page_merge_hot(int_1,short_1);

	long_3 = long_1 + long_2;
}
int v_WriteInt32( double parameter_1,short parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double_1 = double_1 * double_2;
	char_1 = v_SyBigEndianPack32(short_1,long_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	return int_1;
	short_1 = v_vedisOsWrite(long_1,short_1,char_1,char_2);

}
int v_vedisFinalizeJournal( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_2;
	float_1 = float_2;
	v_pager_lock_db(int_1,int_1,-1 );

	double_2 = double_1 + double_1;
	if(1)
	{
		float_2 = float_2 * float_1;
		double_3 = double_1 + double_1;
	}
	if(1)
	{
	}
	short_3 = short_1 * short_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			short_4 = v_vedisOsSync(float_2,int_1);

			double_2 = double_3 * double_3;
		}
	}
	char_2 = char_1 + char_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
			if(1)
			{
			}
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			int int_2 = 1;
			int_2 = int_1;
		}
	}
	return int_3;
	int_1 = v_WriteInt32(double_1,short_3,double_2);

	double_1 = v_vedisOsCloseFree(float_2,short_2);

}
int v_pager_dirty_commit( long parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	float float_4 = 1;
	char char_1 = 1;
	int int_4 = 1;
	float_1 = v_vedisGenError(int_1,long_1,-1 );

	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = v_pager_wait_on_lock(float_2,int_1);

	double_3 = double_1 * double_3;
	short_1 = short_1 * short_2;
	if(1)
	{
	}
	v_pager_get_hot_pages(float_3);

	double_3 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_1 + int_1;
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "3N") == 0)
		{
		}
	}
	float_4 = v_pager_write_hot_dirty_pages(unsigned_int_1,char_1);

	double_1 = double_3 + double_1;
	short_1 = short_2 * short_2;
	if(1)
	{
		int int_3 = 1;
		float float_5 = 1;
		int_3 = int_2;
		float_2 = float_1 + float_5;
	}
	int_2 = v_vedisFinalizeJournal(unsigned_int_2,int_2,int_4);

	double_3 = double_3 + double_3;
	int_4 = int_1;
	return int_4;
}
double v_pager_write_journal_header( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = v_SyMemcpy(long_1,unsigned_int_1);

	long_3 = long_2 + long_3;
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_3 = double_1 + double_2;
	double_4 = double_3 + double_2;
	char_2 = char_1 * char_1;
	char_2 = v_SyBigEndianPack32(short_1,long_1);

	short_1 = v_SyBigEndianPack64(char_3,char_4);

	long_1 = long_3 * long_4;
	char_4 = char_3 * char_2;
	double_1 = double_3 * double_3;
	double_4 = double_5 + double_6;
	long_2 = long_4;
	int_1 = int_2;
	return double_3;
}
int v_vedisOpenJournal( char parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	int int_2 = 1;
	double double_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double_1 = v_SyMemBackendFree(char_1);

	short_2 = short_1 * short_2;
	float_2 = float_1 + float_1;
	if(1)
	{
		long_3 = long_1 + long_2;
	}
	if(1)
	{
	}
	double_3 = double_1 + double_2;
	int_1 = v_SyMemBackendAlloc(unsigned_int_1,short_3);

	double_2 = v_pager_write_journal_header(char_1,float_1);

	char_1 = char_2 + char_3;
	if(1)
	{
		int_1 = v_vedisOsDelete(long_3,double_3,int_1);

		long_4 = v_vedisGenErrorFormat(float_1,int_1,short_4);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	char_2 = char_3 + char_2;
	if(1)
	{
		double double_4 = 1;
		double_5 = double_2 + double_4;
		char_2 = char_4 + char_1;
	}
	double_2 = v_vedisOsCloseFree(float_1,short_3);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	short_4 = v_vedisOsWrite(long_2,short_4,char_5,char_4);

	long_3 = long_2 * long_3;
	double_2 = double_3;
	int_1 = int_2 * int_1;
	if(1)
	{
		double_2 = double_5 * double_6;
	}
	int_4 = int_2 + int_3;
	double_1 = double_5 * double_6;
	double_5 = v_vedisOsOpen(double_1,double_7,double_2,long_1,unsigned_int_3);

	double_5 = double_8 + double_9;
	return int_4;
}
long v_SyTimeFormatToDos( short parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	short_2 = short_1 * short_2;
	float_3 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_3;
	return long_1;
}
char v_pager_write_db_header( int parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	float float_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	char_1 = v_SyBigEndianPack32(short_1,long_1);

	short_2 = short_1 + short_2;
	double_1 = double_1 * double_2;
	unsigned_int_1 = v_SyStrlen(float_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_1;
	int_1 = int_1 * int_1;
	long_2 = long_3;
	unsigned_int_2 = v_SyZero(double_3);

	int_3 = int_2 + int_1;
	long_1 = long_2 + long_2;
	long_3 = long_1 * long_2;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	double_5 = double_4 + double_5;
	int_4 = int_4;
	short_2 = short_1 + short_1;
	float_2 = float_1 + float_1;
	double_2 = double_2 + double_1;
	long_2 = v_SyTimeFormatToDos(short_1,unsigned_int_3);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	double_4 = double_3;
	int_3 = int_1 * int_4;
	int_1 = v_SyBigEndianPack16(unsigned_int_3,unsigned_int_2);

	char_2 = char_2 + char_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_5 = v_SyMemcpy(long_1,unsigned_int_6);

	double_4 = double_2 * double_1;
	float_1 = float_1 * float_3;
	return char_2;
}
long v_pager_page_to_dirty_list( float parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1;
	short_1 = short_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	float_2 = float_1 + float_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	return long_2;
}
short v_pager_create_header( long parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	long_1 = v_pager_page_to_dirty_list(float_1,float_1);

	double_1 = double_1;
	unsigned_int_1 = v_pager_link_page(short_1,float_1);

	int_2 = int_1 + int_1;
	char_1 = v_pager_write_db_header(int_2);

	char_2 = char_2 * char_3;
	if(1)
	{
	}
	float_2 = v_pager_alloc_page(char_2,float_3);

	double_1 = double_1 + double_2;
	double_3 = double_1 + double_3;
	double_1 = double_4 * double_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	return short_2;
}
void v_vedisBitvecCreate( float parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	short_2 = short_1 * short_2;
	long_1 = long_2;
	int_1 = int_1 * int_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	double_1 = double_1 + double_1;
	int_1 = v_SyMemBackendAlloc(unsigned_int_1,short_1);

	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
		double_1 = v_SyMemBackendFree(char_3);

		long_1 = long_1 + long_3;
	}
	float_2 = float_1 + float_1;
	unsigned_int_2 = v_SyZero(double_3);

	float_2 = float_1 + float_3;
	long_3 = long_3 + long_2;
}
double v_vedisPagerBegin( double parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_5 = 1;
	int_1 = int_2;
	int_1 = int_2 * int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	char_2 = char_1 * char_1;
	char controller4vul_2403[2];
	fgets(controller4vul_2403 ,2 ,stdin);
	if( strcmp( controller4vul_2403, "i") > 0)
	{
		int int_4 = 1;
		short short_1 = 1;
		float float_2 = 1;
		short short_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_2 = int_2 + int_4;
		if(1)
		{
			double double_3 = 1;
			int_3 = int_1 + int_1;
			short_1 = short_1 * short_1;
			double_3 = double_2 + double_1;
		}
		float_2 = float_1 + float_2;
		short_1 = short_2 + short_2;
		float_3 = float_1 * float_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		char controller4vul_2404[2];
		fgets(controller4vul_2404 ,2 ,stdin);
		if( strcmp( controller4vul_2404, "*") < 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_1;
			char controller4vul_2405[2];
			fgets(controller4vul_2405 ,2 ,stdin);
			if( strcmp( controller4vul_2405, "Q") > 0)
			{
				unsigned int unsigned_int_4 = 1;
				float_1 = v_pager_shared_lock(uni_para);

				unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
			}
			double_2 = double_2;
		}
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	int_1 = int_5;
	return double_2;
}
void v_vedisPageWrite( char parameter_1,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1;
	float_3 = float_1 + float_2;
	char_2 = char_1 * char_1;
	double_1 = double_2;
	if(1)
	{
	}
	char controller4vul_2401[2];
	fgets(controller4vul_2401 ,2 ,stdin);
	if( strcmp( controller4vul_2401, "(") > 0)
	{
		float float_4 = 1;
		float_4 = float_1 * float_3;
		char controller4vul_2402[2];
		fgets(controller4vul_2402 ,2 ,stdin);
		if( strcmp( controller4vul_2402, "R") < 0)
		{
			double_1 = v_vedisPagerBegin(double_3,uni_para);

		}
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
		if(1)
		{
			int int_2 = 1;
			int_2 = int_2 + int_2;
		}
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
}
short v_vedisKvIopageWrite( char parameter_1,int uni_para)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long_1 = long_1;
	char controller4vul_2400[3];
	fgets(controller4vul_2400 ,3 ,stdin);
	if( strcmp( controller4vul_2400, "kE") < 0)
	{
		v_vedisPageWrite(char_1,uni_para);

	}
	int_2 = int_1 * int_1;
	return short_1;
}
float v_vedisKvIoNewPage( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = v_vedisPagerAcquire(short_1,float_1,int_2,int_3,int_4);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	return float_2;
	float_3 = v_pager_shared_lock(-1 );

}
char v_vedisKvIoPageLookup( float parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int_1 = v_vedisPagerAcquire(short_1,float_1,int_1,int_1,int_1);

	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return char_2;
}
float v_page_ref( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double_2 = double_1 * double_2;
	return float_1;
}
unsigned int v_pager_link_page( short parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int_2 = int_1 * int_2;
	int_2 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_1 = v_SyMemBackendFree(char_1);

		double_2 = double_2;
	}
	short_1 = short_1 * short_1;
	int_3 = int_3 * int_3;
	long_3 = long_1 * long_2;
	if(1)
	{
		double double_4 = 1;
		short short_2 = 1;
		long long_4 = 1;
		double double_5 = 1;
		double_4 = double_3 + double_3;
		short_3 = short_2 * short_2;
		long_1 = long_4;
		double_4 = double_5 + double_5;
		if(1)
		{
			long long_5 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_7 = 1;
			double double_8 = 1;
			long_5 = long_5;
			short_1 = short_3 + short_3;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
			double_1 = double_2 * double_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double double_6 = 1;
				short short_4 = 1;
				if(1)
				{
					long_1 = long_4 * long_2;
				}
				int_3 = v_SyMemBackendAlloc(unsigned_int_4,short_3);

				int_3 = int_3 * int_2;
				double_6 = double_3 * double_6;
				long_4 = long_1 + long_2;
				if(1)
				{
					float float_1 = 1;
					float float_2 = 1;
					float_2 = float_1 + float_1;
				}
				short_1 = short_2 + short_4;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
				double_3 = double_2 + double_6;
			}
			unsigned_int_3 = unsigned_int_5 + unsigned_int_5;
			unsigned_int_5 = v_SyZero(double_3);

			char_1 = char_1;
			double_8 = double_7 + double_2;
		}
	}
	return unsigned_int_5;
}
double v_pager_get_page_contents( unsigned int parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double_1 = double_1;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		float_1 = float_1;
		float_1 = v_vedisOsRead(float_1,short_1,short_1);

		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_3 = v_SyZero(double_1);

		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	}
	return double_2;
}
float v_pager_alloc_page( char parameter_1,float parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = v_SyMemBackendPoolAlloc(int_1,int_1);

	double_2 = double_1 + double_2;
	double_4 = double_1 + double_3;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	short_1 = short_2 + short_1;
	int_3 = int_2 + int_3;
	float_3 = float_2 * float_3;
	unsigned_int_1 = v_SyZero(double_3);

	double_2 = double_1;
	return float_3;
}
int v_vedisGetPageSize()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	long_3 = long_1 + long_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	return int_1;
}
float v_vedisOsSectorSize( int parameter_1)
{
	float float_1 = 1;
	if(1)
	{
	}
	return float_1;
}
float v_GetSectorSize( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	char_2 = char_1 * char_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float_1 = v_vedisOsSectorSize(int_1);

		double_3 = double_1 * double_2;
		if(1)
		{
			int int_2 = 1;
			int_1 = int_1 * int_2;
		}
		if(1)
		{
			char_2 = char_1;
		}
	}
	return float_2;
}
double v_SyDosTimeFormat( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1;
	int_1 = int_1;
	char_2 = char_1 + char_1;
	char_1 = char_1;
	char_2 = char_2 * char_3;
	double_1 = double_1 + double_1;
	int_1 = int_1 * int_2;
	short_1 = short_1 + short_2;
	char_3 = char_3 + char_1;
	int_1 = int_3 + int_4;
	return double_2;
}
int v_pager_extract_header( double parameter_1,short parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	long_3 = long_1 * long_2;
	char_1 = v_SyMemBackendDup(float_1,unsigned_int_1,float_1);

	char_2 = char_1 + char_2;
	char_1 = char_1 + char_2;
	float_1 = float_2;
	if(1)
	{
	}
	int_1 = int_2;
	int_1 = int_2 + int_2;
	float_3 = float_3;
	if(1)
	{
	}
	long_4 = v_SyBigEndianUnpack32(long_3,double_1);

	int_1 = int_3 + int_1;
	double_2 = double_1;
	int_1 = int_4 * int_3;
	int_5 = int_5 + int_2;
	short_1 = v_SyMemcmp(char_2,long_1,float_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_3;
	double_3 = v_SyDosTimeFormat(char_1,float_3);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	float_2 = float_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_1 * double_4;
	}
	unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	if(1)
	{
	}
	char_2 = char_2 * char_3;
	return int_1;
	v_SyBigEndianUnpack16(double_3,float_1);

}
int v_pager_read_db_header()
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	int int_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_4 = 1;
	float_1 = float_1 + float_1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = v_pager_extract_header(double_1,short_1,short_1);

	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
	}
	short_1 = short_1 * short_2;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		float_2 = float_1 + float_2;
		long_2 = long_1 + long_1;
		int_2 = int_1;
		if(1)
		{
			int_1 = v_SyMemBackendAlloc(unsigned_int_2,short_3);

			int_3 = int_3;
		}
		short_1 = short_2 * short_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
		float_1 = v_vedisOsRead(float_2,short_1,short_1);

		long_2 = long_2 * long_3;
		if(1)
		{
			double_1 = double_2 + double_2;
		}
		int_2 = v_vedisGetPageSize();

		unsigned_int_1 = v_SyZero(double_3);

		float_3 = float_2 + float_1;
		if(1)
		{
			double_5 = double_2 + double_4;
		}
		int_3 = v_vedisFindKVStore(char_1,double_3);

		int_1 = int_2;
		float_2 = v_vedisGenError(int_4,long_3,-1 );

		char_3 = char_2 + char_2;
		long_4 = v_vedisGenOutofMem(long_5);

		double_4 = double_5 * double_5;
		if(1)
		{
			short_2 = short_4;
		}
		long_2 = v_vedisPagerRegisterKvEngine(int_3,char_1,-1 );

		float_3 = v_GetSectorSize(int_3);

		short_2 = short_4 * short_5;
		if(1)
		{
		}
	}
	if(1)
	{
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_5 = 1;
		int int_6 = 1;
		long_2 = v_vedisGenErrorFormat(float_3,int_1,short_3);

		double_4 = double_6 * double_1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_3 = v_SyStrlen(float_2);

		double_5 = double_7 + double_8;
		double_9 = v_vedisOsFileSize(double_2,unsigned_int_4);

		int_4 = int_5 * int_6;
	}
	long_3 = long_3 * long_1;
	if(1)
	{
		float float_4 = 1;
		float_4 = float_2;
	}
	int_1 = int_2;
	return int_1;
}
double v_vedisOsCloseFree( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double_1 = v_SyMemBackendFree(char_1);

	int_1 = int_1 + int_2;
	if(1)
	{
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_2 = double_2 * double_1;
		float_3 = float_1 * float_2;
	}
	return double_3;
}
float v_pager_fetch_page( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 + short_1;
		}
		if(1)
		{
		}
		char_2 = char_1 * char_2;
	}
	return float_1;
}
int v_pager_fill_page( long parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float_1 = v_pager_fetch_page(long_1,long_1);

	double_1 = double_1 + double_1;
	unsigned_int_1 = v_SyMemcpy(long_2,unsigned_int_1);

	double_2 = double_1 * double_2;
	if(1)
	{
	}
	double_3 = double_2 * double_1;
	return int_1;
}
short v_vedisOsWrite( long parameter_1,short parameter_2,char parameter_3,char parameter_4)
{
	short short_1 = 1;
	return short_1;
}
void v_pager_cksum( long parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 * char_1;
	double_1 = double_1 * double_1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
float v_pager_play_back_one_page( unsigned int parameter_1,float parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	float_1 = float_2;
	float_1 = v_vedisOsRead(float_1,short_1,short_1);

	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2;
	v_pager_cksum(long_1,char_1);

	char_4 = char_2 * char_3;
	int_3 = int_1 + int_2;
	double_2 = double_1 + double_2;
	short_2 = v_vedisOsWrite(long_1,short_2,char_3,char_1);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
	}
	int_4 = int_3;
	char_4 = v_ReadInt64(float_1,unsigned_int_3,short_1);

	unsigned_int_4 = unsigned_int_3;
	if(1)
	{
	}
	short_4 = short_2 * short_3;
	double_4 = double_3 + double_2;
	if(1)
	{
	}
	double_2 = double_1;
	int_3 = v_pager_fill_page(long_1,unsigned_int_1);

	int_3 = int_5;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_4 = v_ReadInt32(long_1,unsigned_int_1,char_1);

	char_3 = char_3 + char_4;
	if(1)
	{
		short short_5 = 1;
		short_5 = short_1 * short_4;
	}
	return float_1;
}
int v_vedisOsTruncate( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	return int_1;
}
char v_ReadInt64( float parameter_1,unsigned int parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	long_3 = long_1 * long_2;
	v_SyBigEndianUnpack64(char_1,double_1);

	double_2 = double_1 + double_1;
	int_1 = int_2;
	if(1)
	{
	}
	float_1 = v_vedisOsRead(float_1,short_1,short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return char_2;
}
unsigned int v_ReadInt32( long parameter_1,unsigned int parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_1;
	int_1 = int_3 * int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3;
	return unsigned_int_3;
	float_1 = v_vedisOsRead(float_2,short_1,short_1);

	long_1 = v_SyBigEndianUnpack32(long_2,double_1);

}
float v_vedisOsRead( float parameter_1,short parameter_3,short parameter_4)
{
	float float_1 = 1;
	return float_1;
}
void v_pager_read_journal_header( long parameter_1,long parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	int int_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	unsigned_int_1 = v_ReadInt32(long_1,unsigned_int_1,char_1);

	long_1 = long_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	long_2 = long_1 * long_2;
	int_2 = int_1 * int_2;
	double_1 = v_vedisOsFileSize(double_1,unsigned_int_1);

	short_1 = short_1 * short_1;
	char_1 = char_2;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = v_SyMemcmp(char_1,long_2,float_1);

	int_3 = int_4;
	if(1)
	{
	}
	float_1 = v_vedisOsRead(float_2,short_2,short_1);

	int_4 = int_5 + int_3;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	int_4 = int_4;
	char_2 = v_ReadInt64(float_1,unsigned_int_1,short_3);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	int_6 = int_6 * int_1;
	char_1 = char_2 + char_2;
	if(1)
	{
	}
	int_7 = int_5 + int_2;
	long_2 = long_2 * long_1;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_3 + int_4;
	int_1 = int_8 * int_3;
}
long v_pager_playback( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	long long_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	double_2 = double_1 * double_2;
	float_1 = v_pager_play_back_one_page(unsigned_int_1,float_1,float_2);

	int_1 = int_1 * int_1;
	int_2 = int_2 + int_1;
	float_1 = float_1;
	v_pager_read_journal_header(long_1,long_1,long_2);

	short_1 = v_vedisOsSync(float_1,int_3);

	float_3 = float_3 + float_2;
	if(1)
	{
		if(1)
		{
			int_2 = int_3;
		}
		long_3 = long_1 + long_2;
	}
	long_3 = v_vedisGenOutofMem(long_2);

	double_2 = v_SyMemBackendFree(char_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		int_1 = v_vedisOsTruncate(short_1,int_3);

		long_3 = long_1 * long_3;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
		long long_4 = 1;
		long_3 = v_vedisGenErrorFormat(float_1,int_2,short_1);

		float_1 = v_vedisGenError(int_4,long_3,-1 );

		long_4 = long_3 + long_4;
	}
	float_5 = float_2 * float_4;
	float_1 = float_6 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		unsigned_int_5 = v_SyZero(double_1);

		int_5 = int_2 * int_2;
		if(1)
		{
			if(1)
			{
				double double_3 = 1;
				float float_7 = 1;
				int_4 = v_SyMemBackendAlloc(unsigned_int_5,short_1);

				double_1 = double_1 + double_3;
				float_3 = float_4 + float_7;
			}
		}
	}
	unsigned_int_3 = unsigned_int_1;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_1 = short_3 * short_1;
	}
	return long_5;
}
short v_vedisOsSync( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	return short_1;
}
void v_vedisOsUnlock( double parameter_1,int parameter_2)
{
}
float v_pager_unlock_db( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	v_vedisOsUnlock(double_1,int_1);

	long_1 = long_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
		double_1 = double_1 * double_1;
	}
	return float_1;
}
int v_vedisOsDelete( long parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	return int_1;
}
double v_vedisOsFileSize( double parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	return double_1;
}
double v_vedisOsCheckReservedLock( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	return double_1;
}
long v_vedisOsAccess( float parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	long long_1 = 1;
	return long_1;
}
unsigned int v_pager_has_hot_journal( float parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_2;
	long_1 = long_1 * long_2;
	double_2 = double_3 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	char controller4vul_2414[2];
	fgets(controller4vul_2414 ,2 ,stdin);
	if( strcmp( controller4vul_2414, "P") < 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3;
		long_2 = long_2;
		char controller4vul_2415[2];
		fgets(controller4vul_2415 ,2 ,stdin);
		if( strcmp( controller4vul_2415, "B") > 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			long long_3 = 1;
			long long_4 = 1;
			long long_5 = 1;
			char_1 = char_2;
			long_5 = long_3 * long_4;
			char controller4vul_2416[2];
			fgets(controller4vul_2416 ,2 ,stdin);
			if( strcmp( controller4vul_2416, "F") > 0)
			{
				char controller4vul_2417[2];
				fgets(controller4vul_2417 ,2 ,stdin);
				if( strcmp( controller4vul_2417, "Y") > 0)
				{
					char controller4vul_2418[3];
					fgets(controller4vul_2418 ,3 ,stdin);
					if( strcmp( controller4vul_2418, "Wi") > 0)
					{
						int int_2 = 1;
						v_pager_lock_db(int_1,int_1,uni_para);

						int_2 = int_1 * int_1;
						long_4 = long_2 * long_2;
					}
				}
				if(1)
				{
					short short_1 = 1;
					short short_2 = 1;
					short short_3 = 1;
					short_3 = short_1 + short_2;
				}
			}
		}
	}
	return unsigned_int_2;
}
long v_pager_journal_rollback( char parameter_1,int parameter_2,int uni_para)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	long_1 = long_1 + long_1;
	char controller4vul_2412[3];
	fgets(controller4vul_2412 ,3 ,stdin);
	if( strcmp( controller4vul_2412, "e[") < 0)
	{
		int_1 = int_1 + int_2;
		float_1 = float_1 * float_1;
		char controller4vul_2413[3];
		fgets(controller4vul_2413 ,3 ,stdin);
		if( strcmp( controller4vul_2413, "qe") > 0)
		{
			unsigned_int_1 = v_pager_has_hot_journal(float_1,int_1,uni_para);

		}
		if(1)
		{
		}
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	int_3 = int_2 + int_1;
	if(1)
	{
		double_1 = double_1 + double_1;
		char_4 = char_3 * char_3;
	}
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_2;
		long_2 = long_1 * long_1;
	}
	long_3 = long_2 + long_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_1;
	char_4 = char_3 * char_1;
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 * int_2;
	}
	return long_2;
}
float v_vedisOsLock( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	return float_1;
}
void v_pager_lock_db( int parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	char controller4vul_2419[2];
	fgets(controller4vul_2419 ,2 ,stdin);
	if( strcmp( controller4vul_2419, "x") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		int_1 = int_2;
		char controller4vul_2420[3];
		fgets(controller4vul_2420 ,3 ,stdin);
		if( strcmp( controller4vul_2420, ";B") < 0)
		{
			double double_2 = 1;
			float_1 = v_vedisGenError(int_3,long_1,uni_para);

			double_2 = double_1 + double_1;
		}
		if(1)
		{
			double double_3 = 1;
			double_1 = double_1 * double_3;
		}
	}
}
float v_pager_wait_on_lock( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	double double_6 = 1;
	int int_7 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	double_1 = double_1 * double_2;
	double_2 = double_2 + double_2;
	char_1 = char_1 * char_2;
	double_4 = double_3 * double_4;
	double_3 = double_3 * double_1;
	int_4 = int_3 + int_2;
	int_3 = int_5 + int_6;
	v_pager_lock_db(int_3,int_6,-1 );

	int_6 = int_5 + int_1;
	double_2 = double_5 * double_5;
	unsigned_int_3 = unsigned_int_1;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	double_2 = double_1 + double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	short_3 = short_1 * short_4;
	double_6 = double_1 + double_4;
	int_1 = int_7 + int_6;
	long_1 = long_1 + long_2;
	unsigned_int_5 = unsigned_int_1;
	if(1)
	{
	}
	return float_2;
}
void v_SyBlobFormatAp( unsigned int parameter_1,float parameter_2,short parameter_3)
{
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short_1 = v_FormatMount(long_1,float_1,int_1,unsigned_int_1,char_1);

	char_2 = char_1 * char_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
}
long v_vedisGenErrorFormat( float parameter_1,int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 * float_1;
	double_3 = double_1 * double_2;
	v_SyBlobFormatAp(unsigned_int_2,float_1,short_1);

	long_1 = v_SyBlobAppend(int_1,long_1,short_2,-1 );

	double_3 = double_3 + double_3;
	int_1 = int_2 * int_3;
	short_2 = short_2;
	return long_1;
}
double v_vedisOsOpen( double parameter_1,double parameter_2,double parameter_3,long parameter_4,unsigned int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short_1 = short_2;
	long_2 = long_1 + long_2;
	long_2 = long_3;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	short_1 = short_3 + short_3;
	int_1 = v_SyMemBackendAlloc(unsigned_int_1,short_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_4 = 1;
		long_4 = long_1 + long_3;
		unsigned_int_2 = v_SyZero(double_1);

		double_1 = v_SyMemBackendFree(char_1);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	return double_1;
}
float v_pager_shared_lock(int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_4 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_2406[2];
	fgets(controller4vul_2406 ,2 ,stdin);
	if( strcmp( controller4vul_2406, "/") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		}
		long_1 = long_1;
		char controller4vul_2407[2];
		fgets(controller4vul_2407 ,2 ,stdin);
		if( strcmp( controller4vul_2407, "+") < 0)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			if(1)
			{
				short short_1 = 1;
				short_1 = short_1;
				if(1)
				{
				}
			}
			int_3 = int_1 + int_2;
			if(1)
			{
			}
			char controller4vul_2408[3];
			fgets(controller4vul_2408 ,3 ,stdin);
			if( strcmp( controller4vul_2408, "JB") < 0)
			{
				char controller4vul_2409[2];
				fgets(controller4vul_2409 ,2 ,stdin);
				if( strcmp( controller4vul_2409, "G") < 0)
				{
					int_3 = int_1;
					char controller4vul_2410[2];
					fgets(controller4vul_2410 ,2 ,stdin);
					if( strcmp( controller4vul_2410, "*") < 0)
					{
						double_2 = double_1 + double_2;
						double_1 = double_1 * double_1;
						char controller4vul_2411[2];
						fgets(controller4vul_2411 ,2 ,stdin);
						if( strcmp( controller4vul_2411, "-") < 0)
						{
							long_1 = v_pager_journal_rollback(char_1,int_4,uni_para);

							unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
							int_2 = int_2;
						}
					}
					if(1)
					{
						long long_2 = 1;
						long long_3 = 1;
						char char_2 = 1;
						long_3 = long_1 * long_2;
						char_1 = char_1 + char_2;
					}
				}
			}
			double_1 = double_2 * double_2;
			long_1 = long_1 * long_1;
			if(1)
			{
				double_3 = double_2 * double_2;
				if(1)
				{
					unsigned int unsigned_int_4 = 1;
					unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
					float_1 = float_1;
					double_1 = double_1 + double_3;
				}
			}
		}
		if(1)
		{
			double_2 = double_3 * double_2;
		}
	}
	return float_1;
}
int v_vedisPagerAcquire( short parameter_1,float parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	long long_3 = 1;
	char char_6 = 1;
	float float_3 = 1;
	double_1 = v_pager_get_page_contents(unsigned_int_1,double_1,int_1);

	unsigned_int_2 = v_SyMemBackendPoolFree(long_1);

	float_1 = v_page_ref(int_1);

	double_1 = double_2;
	float_1 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
	}
	short_2 = short_1 + short_2;
	if(1)
	{
		char char_1 = 1;
		if(1)
		{
			char_1 = char_1;
		}
		long_2 = v_vedisGenOutofMem(long_1);

		char_3 = char_1 * char_2;
	}
	if(1)
	{
		short short_3 = 1;
		double double_3 = 1;
		int_1 = int_1 * int_1;
		if(1)
		{
			short_2 = short_2;
		}
		short_1 = short_3;
		if(1)
		{
			int_2 = int_1 * int_1;
		}
		float_1 = v_pager_fetch_page(long_3,long_3);

		unsigned_int_1 = v_pager_link_page(short_1,float_1);

		double_3 = double_3 + double_3;
	}
	if(1)
	{
		if(1)
		{
			char char_4 = 1;
			char_2 = char_4 + char_2;
		}
	}
	if(1)
	{
		char char_5 = 1;
		char_6 = char_5 + char_3;
	}
	return int_2;
	float_2 = v_pager_shared_lock(-1 );

	float_2 = v_pager_alloc_page(char_6,float_3);

}
char v_vedisKvIoPageGet( short parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double_1 = double_1 * double_2;
	int_1 = v_vedisPagerAcquire(short_1,float_1,int_1,int_2,int_2);

	double_1 = double_1 + double_2;
	return char_1;
}
char v_pager_kv_io_init( double parameter_1,char parameter_2,int parameter_3,int uni_para)
{
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short_1 = v_vedisKvIopageWrite(char_1,uni_para);

	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	float_1 = float_2 + float_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	char_2 = char_2 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
	int_1 = int_1;
	int_1 = int_2 + int_1;
	char_1 = char_1 + char_3;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_1;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
	int_2 = int_1;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_5;
	return char_3;
}
long v_vedisGenOutofMem( long parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float_1 = v_vedisGenError(int_1,long_1,-1 );

	double_1 = double_1 * double_1;
	short_2 = short_1 * short_1;
	return long_1;
}
int v_vedisReleaseCursor( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = v_SyMemBackendPoolFree(long_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	char_1 = char_1 + char_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3;
	}
	float_1 = float_1 * float_2;
	return int_1;
}
char v_pager_release_kv_engine( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short_2 = short_1 * short_2;
	double_1 = double_1 + double_1;
	if(1)
	{
		long_1 = long_1 + long_1;
		unsigned_int_1 = unsigned_int_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "H8") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		double_1 = v_SyMemBackendFree(char_1);

		unsigned_int_1 = unsigned_int_2;
	}
	double_1 = double_2 * double_2;
	int_1 = v_vedisReleaseCursor(char_1,long_1);

	long_1 = long_1 * long_1;
	int_1 = int_1;
	return char_2;
}
long v_vedisPagerRegisterKvEngine( int parameter_1,char parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_7 = 1;
	float_1 = float_1 * float_2;
	short_2 = short_1 * short_2;
	float_2 = float_1 * float_2;
	short_5 = short_3 + short_4;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_2398[3];
	fgets(controller4vul_2398 ,3 ,stdin);
	if( strcmp( controller4vul_2398, ">C") > 0)
	{
		char controller4vul_2399[3];
		fgets(controller4vul_2399 ,3 ,stdin);
		if( strcmp( controller4vul_2399, "9p") < 0)
		{
			char_1 = v_pager_kv_io_init(double_1,char_1,int_2,uni_para);

		}
		long_1 = long_1 + long_2;
	}
	double_1 = double_1;
	int_3 = int_2 * int_2;
	if(1)
	{
		char_1 = char_1;
	}
	int_1 = int_2 * int_4;
	if(1)
	{
		long_3 = long_3 + long_1;
		int_5 = int_5 * int_4;
	}
	int_3 = int_2 + int_6;
	long_2 = long_2 + long_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_2 = double_2;
		if(1)
		{
			float float_3 = 1;
			short short_6 = 1;
			float_3 = float_1 + float_2;
			short_5 = short_3 * short_6;
		}
		double_4 = double_1 * double_3;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3;
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "z") > 0)
	{
		char_1 = char_1 + char_1;
	}
	int_5 = int_3 * int_5;
	int_1 = int_7 + int_4;
	return long_3;
}
unsigned int v_randomByte( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 + long_2;
	long_3 = long_2 + long_3;
	double_1 = double_1 + double_1;
	char_1 = char_1 * char_2;
	double_2 = double_3;
	char_2 = char_2 + char_1;
	return unsigned_int_3;
}
long v_SyRandomness( char parameter_1,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
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
			char char_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			long long_2 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_2 = 1;
			if(1)
			{
				float_1 = float_1 + float_1;
			}
			char_2 = char_1 * char_1;
			int_2 = int_3;
			if(1)
			{
				char char_3 = 1;
				char_1 = char_3 + char_1;
			}
			float_1 = float_2 * float_1;
			float_1 = float_2 * float_3;
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned_int_1 = v_randomByte(unsigned_int_1);

				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
			long_2 = long_1 * long_1;
			double_1 = double_1 * double_1;
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short_2 = short_1 + short_1;
			}
			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
			double_1 = double_2 + double_2;
		}
	}
	return long_1;
}
double v_SyOSUtilRandomSeed(short parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	return double_1;
	unsigned_int_1 = v_SyMemcpy(long_1,unsigned_int_1);

}
double v_SyRandomnessInit( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = v_SyOSUtilRandomSeed(short_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if(remainder_check(controller_2,100,1))
	{
		int_2 = int_1 + int_1;
	}
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_2 = double_2 + double_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_1 = int_2;
		int_3 = int_1 + int_3;
		float_2 = float_1 + float_2;
		int_2 = int_1 * int_3;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	return double_4;
}
float v_vedisGenError( int parameter_1,long parameter_2,int uni_para)
{
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long_1 = v_SyBlobAppend(int_1,long_1,short_1,uni_para);

	short_1 = short_2;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return float_1;
}
int v_vedisFindKVStore( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int_1 = int_2;
	char_1 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = v_SyStrlen(float_1);

	short_3 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
		if(1)
		{
		}
	}
	return int_3;
	double_2 = v_SyStrnicmp(short_3,double_2,int_1);

}
double v_SyStrnicmp( short parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_2 = double_1 + double_2;
	double_3 = double_3 + double_3;
	if(1)
	{
		double_3 = double_4 * double_4;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_6 = 1;
		char char_4 = 1;
		if(1)
		{
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_1 + int_2;
		}
		float_3 = float_1 + float_2;
		float_2 = float_2 * float_1;
		float_3 = float_4 * float_2;
		if(1)
		{
		}
		if(1)
		{
			double_3 = double_2 + double_3;
		}
		unsigned_int_1 = unsigned_int_2;
		char_2 = char_1 + char_1;
		double_5 = double_4 + double_5;
		if(1)
		{
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
		double_2 = double_2;
		char_2 = char_3 * char_2;
		double_1 = double_3 * double_6;
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		}
		float_1 = float_3 + float_1;
		char_1 = char_3 * char_3;
		char_4 = char_3 + char_3;
	}
	return double_5;
}
double v_vedisInMemory( int parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = v_SyStrnicmp(short_1,double_2,int_1);

	double_3 = double_2 * double_3;
	if(1)
	{
	}
	unsigned_int_1 = v_SyStrlen(float_1);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
}
long v_vedisPagerOpen( double parameter_1,float parameter_2,unsigned int parameter_3,unsigned int parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_7 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	double double_8 = 1;
	long long_4 = 1;
	double double_9 = 1;
	double double_10 = 1;
	float float_3 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long long_5 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_7 = 1;
	double double_13 = 1;
	int_3 = int_1 + int_2;
	double_1 = double_2;
	double_1 = double_3 * double_4;
	long_2 = long_1 + long_1;
	double_5 = double_5;
	double_2 = double_4 + double_6;
	if(1)
	{
		double_5 = double_2 + double_5;
		int_5 = int_3 * int_4;
	}
	char controller4vul_2396[3];
	fgets(controller4vul_2396 ,3 ,stdin);
	if( strcmp( controller4vul_2396, "X]") > 0)
	{
		float float_1 = 1;
		float_2 = float_1 + float_2;
		char controller4vul_2397[2];
		fgets(controller4vul_2397 ,2 ,stdin);
		if( strcmp( controller4vul_2397, "H") < 0)
		{
			long_1 = v_vedisPagerRegisterKvEngine(int_3,char_1,uni_para);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	double_2 = double_7;
	char_3 = char_1 + char_2;
	int_1 = int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	int_3 = int_4 + int_5;
	long_3 = long_2 * long_2;
	if(1)
	{
		int int_6 = 1;
		int_2 = int_1 * int_6;
		unsigned_int_1 = unsigned_int_3;
	}
	short_3 = short_3 + short_3;
	if(1)
	{
	}
	short_3 = short_2 + short_3;
	double_8 = double_5 + double_8;
	int_5 = int_1;
	long_4 = long_2 + long_3;
	double_8 = double_5 * double_3;
	double_4 = double_9 * double_10;
	float_2 = float_3 + float_2;
	if(1)
	{
		char char_4 = 1;
		char_4 = char_3;
		int_8 = int_7 + int_5;
	}
	long_1 = long_1 * long_5;
	double_7 = double_8 + double_9;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	double_7 = double_11 * double_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
	int_7 = int_1;
	short_1 = short_1 + short_3;
	if(1)
	{
		double double_12 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		double_2 = double_9 * double_2;
		if(1)
		{
			double_7 = double_7 + double_12;
		}
		if(1)
		{
			int int_9 = 1;
			double_4 = double_7;
			int_9 = int_5;
			double_6 = double_5 * double_7;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_2 + unsigned_int_4;
		}
		long_1 = long_2 + long_6;
		if(1)
		{
			int_8 = int_2 * int_2;
			unsigned_int_1 = unsigned_int_5 + unsigned_int_4;
		}
		long_1 = long_3 * long_5;
		double_12 = double_9 + double_10;
		short_1 = short_3;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_7;
	if(1)
	{
		long_6 = long_3 + long_7;
	}
	if(1)
	{
		long_3 = long_1;
		unsigned_int_3 = unsigned_int_5 * unsigned_int_4;
	}
	if(1)
	{
		double_11 = double_5;
		double_10 = double_7 * double_9;
	}
	double_13 = double_5 + double_13;
	return long_7;
}
int v_vedisSanityzeFlag( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		char_1 = char_1;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double_1 = double_2 + double_1;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 + long_2;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
	}
	return int_3;
}
float v_vedisInitDatabase( int parameter_1,double parameter_2,long parameter_3,unsigned int parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = double_1 * double_1;
	double_3 = double_2 + double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_2395[2];
	fgets(controller4vul_2395 ,2 ,stdin);
	if( strcmp( controller4vul_2395, "Z") < 0)
	{
		unsigned int unsigned_int_6 = 1;
		long_1 = v_vedisPagerOpen(double_1,float_1,unsigned_int_3,unsigned_int_4,uni_para);

		unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
	}
	unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
	double_2 = double_4 * double_4;
	long_3 = long_2 * long_3;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_2;
	int_1 = int_2 * int_2;
	int_2 = int_2 + int_3;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	int_2 = int_4 * int_1;
	char_2 = char_1 * char_1;
	short_1 = short_1 * short_2;
	return float_1;
}
float v_lhCursorReset( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_1;
	return float_1;
	float_1 = v_lhCursorFirst(int_1);

}
short v_lhCursorData( long parameter_1,long parameter_2,char parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	float float_3 = 1;
	int_1 = int_1 * int_1;
	float_1 = float_1 + float_2;
	char_1 = char_1 + char_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "cZ") < 0)
	{
	}
	short_1 = v_lhConsumeCellData(double_1,char_2,short_2);

	float_1 = float_1;
	float_3 = float_2 * float_1;
	return short_2;
}
char v_lhCursorDataLength( short parameter_1,double parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long_1 = long_1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	int_2 = int_1 * int_2;
	return char_1;
}
void v_lhCursorKey( unsigned int parameter_1,float parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = v_lhConsumeCellkey(double_1,unsigned_int_1,long_1,int_4);

	char_1 = char_1 + char_1;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
}
long v_lhCursorKeyLength( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_2;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	char_1 = char_2;
	return long_1;
}
double v_lhRecordRemove( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	int int_7 = 1;
	int_1 = int_1 * int_2;
	short_1 = short_1 + short_1;
	if(1)
	{
		int int_3 = 1;
		int_4 = int_2 + int_3;
		v_SyBigEndianUnpack64(char_1,double_1);

		int_3 = int_3 * int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double_1 = v_lhUnlinkCell(char_1);

			double_3 = double_2 + double_1;
			if(1)
			{
			}
			long_1 = v_lhRestorePage(unsigned_int_1,char_2);

			int_2 = int_3 + int_5;
			double_3 = double_2 * double_3;
			if(1)
			{
			}
			double_4 = double_1 + double_3;
			if(1)
			{
				int int_6 = 1;
				int_6 = int_1;
			}
		}
	}
	int_5 = int_7 * int_4;
	return double_1;
}
void v_lhCursorDelete( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = v_lhRecordRemove(int_1);

	int_2 = int_2 * int_2;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "{T") > 0)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
}
unsigned int v_lhCursorPrev( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1 + short_2;
	short_4 = short_1 + short_3;
	long_1 = v_lhCursorPrevPage(unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "]") < 0)
	{
		short short_5 = 1;
		short_5 = short_2 + short_2;
	}
	long_1 = long_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3 * double_3;
	}
	return unsigned_int_3;
}
char v_lhCursorNext( short parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char_1 = char_1 * char_1;
	short_1 = v_lhCursorNextPage(int_1);

	int_2 = int_1 * int_2;
	long_3 = long_1 * long_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	int_2 = int_2 * int_3;
	char_4 = char_2 + char_3;
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int_6 = int_4 * int_5;
	}
	return char_2;
}
char v_lhCursorValid( short parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_1;
	return char_1;
}
long v_lhCursorPrevPage( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	long_1 = long_1 + long_2;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_4 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		short_2 = short_2 * short_2;
		if(1)
		{
			int_2 = int_1 + int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
			unsigned_int_4 = unsigned_int_5 * unsigned_int_2;
		}
		unsigned_int_5 = unsigned_int_5 * unsigned_int_1;
		short_3 = v_lhLoadPage(int_1,int_3,char_1,char_1,int_4);

		long_2 = long_2 + long_1;
		if(1)
		{
		}
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "LR") > 0)
		{
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_6 = 1;
			float_1 = float_1 * float_2;
			long_2 = long_2;
			int_1 = int_2 * int_4;
			unsigned_int_6 = unsigned_int_3 + unsigned_int_3;
		}
		int_1 = int_3 * int_2;
	}
	return long_2;
}
long v_lhCursorLast( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = v_lhCursorPrevPage(unsigned_int_3);

	char_1 = char_1 * char_2;
	double_3 = double_1 * double_2;
	if(1)
	{
		short_2 = short_1 * short_2;
		if(1)
		{
		}
		unsigned_int_3 = unsigned_int_3;
	}
	short_3 = short_2 + short_1;
	char_3 = char_2;
	return long_2;
}
short v_lhCursorNextPage( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 + double_2;
	short_3 = short_1 * short_2;
	short_3 = v_lhLoadPage(int_1,int_1,char_1,char_1,int_2);

	char_2 = char_2;
	float_2 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long_1 = long_1 * long_2;
		if(1)
		{
			short short_4 = 1;
			short_4 = short_2 + short_2;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		}
		double_1 = double_1 * double_3;
		char_2 = char_2 + char_1;
		if(1)
		{
		}
		if(1)
		{
			long long_3 = 1;
			unsigned int unsigned_int_5 = 1;
			long_3 = long_1;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
		}
		double_1 = double_4 + double_3;
	}
	return short_2;
}
float v_lhCursorFirst( int parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short_1 = v_lhCursorNextPage(int_1);

	float_1 = float_1 + float_2;
	double_2 = double_1 * double_1;
	double_3 = double_2 * double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	}
	int_2 = int_1;
	double_2 = double_1;
	return float_2;
}
long v_lhRecordLookup( int parameter_1,short parameter_2,int parameter_3,float parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short short_3 = 1;
	long long_4 = 1;
	char char_3 = 1;
	short_1 = short_1 + short_1;
	short_1 = short_2;
	int_2 = int_1 * int_1;
	char_1 = char_1 * char_2;
	float_1 = float_1 + float_1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	long_1 = long_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	long_3 = long_2 + long_2;
	if(1)
	{
	}
	int_3 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		double_1 = v_lhFindCell(float_1,unsigned_int_1,float_2,char_1);

		short_3 = short_1 * short_3;
	}
	return long_4;
	char_1 = v_lhMapFindBucket(long_1,int_2);

	short_3 = v_lhLoadPage(int_2,int_2,char_3,char_1,int_3);

}
float v_lhCursorSeek( unsigned int parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_5 = 1;
	float float_6 = 1;
	long_1 = long_1 * long_2;
	long_1 = long_1;
	float_1 = float_1 * float_2;
	if(1)
	{
		long long_3 = 1;
		int int_3 = 1;
		float float_4 = 1;
		long_3 = long_2 + long_1;
		long_1 = v_lhRecordLookup(int_1,short_1,int_2,float_3);

		int_3 = int_2 + int_2;
		float_4 = float_1 * float_3;
	}
	float_3 = float_5 * float_6;
	return float_3;
}
short v_lhInitCursor( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_3 = double_1 + double_2;
	double_5 = double_4 + double_1;
	float_2 = float_1 * float_1;
	float_2 = float_1;
	short_2 = short_1 * short_1;
	float_1 = float_1;
	double_1 = double_3 * double_5;
	return short_2;
}
short v_lhash_kv_append( long parameter_1,char parameter_2,int parameter_3,short parameter_4,char parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	int_2 = int_1 + int_2;
	float_1 = float_2;
	return short_1;
	double_1 = v_lh_record_insert(double_2,long_1,short_1,long_2,float_3,int_1);

}
long v_lhRestorePage( unsigned int parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long_2 = long_1 + long_2;
	short_1 = v_SyBigEndianPack64(char_1,char_1);

	long_3 = long_1 + long_2;
	if(1)
	{
	}
	long_3 = long_3 * long_1;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	char_4 = char_2 + char_3;
	char_3 = char_2 * char_3;
	return long_1;
}
int v_lhRecordOverwrite( unsigned int parameter_1,unsigned int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_2 = 1;
	long long_5 = 1;
	char char_3 = 1;
	long long_7 = 1;
	int int_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_5 = 1;
	long long_8 = 1;
	long long_9 = 1;
	char char_4 = 1;
	long long_10 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_4 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 + float_1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = v_SyMemcpy(long_1,unsigned_int_3);

	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	double_2 = double_1 * double_1;
	char_2 = char_1 * char_1;
	int_1 = int_1 * int_1;
	long_4 = long_2 * long_3;
	float_1 = v_lhMoveLocalCell(long_3,unsigned_int_4,int_2,char_2);

	v_SyBigEndianUnpack64(char_2,double_2);

	long_1 = long_5;
	if(1)
	{
	}
	if(1)
	{
		float float_3 = 1;
		long_2 = long_4 * long_4;
		if(1)
		{
			char_3 = char_1 * char_3;
		}
		if(1)
		{
			long long_6 = 1;
			long_7 = long_2 + long_6;
			int_3 = int_1 + int_2;
			float_3 = float_2 + float_3;
			float_2 = float_4;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
			char_2 = char_1 * char_1;
			if(1)
			{
				int_2 = int_1 + int_2;
				if(1)
				{
				}
				float_5 = float_3 + float_3;
				long_9 = long_4 * long_8;
				char_1 = char_4;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
				long_5 = long_10;
				int_1 = v_lhCellWriteOvflPayload(char_3,char_2,int_3,float_5);

				int_4 = int_3 * int_2;
				unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
			}
		}
	}
	float_4 = float_2 * float_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
	double_2 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
		}
		if(1)
		{
			short_1 = short_1 * short_2;
		}
		short_2 = v_SyBigEndianPack64(char_1,char_4);

		long_10 = long_2 * long_1;
		if(1)
		{
			short_1 = short_2 * short_2;
			char_3 = char_3 + char_4;
		}
	}
	double_3 = double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_7;
	unsigned_int_6 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_8 = unsigned_int_4 + unsigned_int_1;
	long_2 = v_lhRestorePage(unsigned_int_9,char_1);

	unsigned_int_1 = unsigned_int_6;
	if(1)
	{
	}
	long_3 = long_9 + long_9;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_2 = short_1 * short_3;
		if(1)
		{
			unsigned_int_6 = unsigned_int_10;
		}
		if(1)
		{
			short short_5 = 1;
			double double_4 = 1;
			short_2 = v_lhAcquirePage(short_1,double_2);

			long_2 = long_8 + long_8;
			if(1)
			{
			}
			unsigned_int_1 = unsigned_int_3 + unsigned_int_10;
			if(1)
			{
			}
			short_4 = v_lhRestoreSpace(unsigned_int_1,double_2,long_1);

			char_4 = char_2 + char_2;
			double_3 = double_2 + double_2;
			float_1 = float_5 * float_4;
			short_5 = short_4 + short_5;
			double_3 = double_4 * double_3;
			double_1 = double_5 * double_1;
		}
		double_3 = double_2 * double_3;
		double_5 = v_lhAllocateSpace(int_4,unsigned_int_7,unsigned_int_4);

		long_9 = long_7 * long_9;
		if(1)
		{
			unsigned int unsigned_int_11 = 1;
			unsigned_int_11 = unsigned_int_2 + unsigned_int_9;
		}
		int_2 = int_4 + int_3;
		double_2 = double_2 * double_2;
		char_4 = char_3;
	}
	float_5 = float_2 + float_2;
	short_3 = short_4 * short_2;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_10;
	return int_1;
}
float v_lhMoveLocalCell( long parameter_1,unsigned int parameter_2,int parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = v_lhCellWriteLocalPayload(char_1,float_1,char_1,long_1,double_1);

	v_lhCellWriteHeader(long_2);

	long_2 = long_3;
	char_2 = char_1 * char_1;
	double_4 = double_2 + double_3;
	char_2 = char_2 + char_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "[X") < 0)
	{
		short short_1 = 1;
		short_2 = short_1 + short_2;
		long_2 = long_2;
	}
	if(1)
	{
		short_2 = short_2 * short_2;
		double_3 = double_1 * double_2;
	}
	double_2 = double_2 + double_2;
	int_2 = int_1 + int_1;
	unsigned_int_2 = v_lhFindSibeling(double_2);

	int_3 = v_SyBigEndianPack16(unsigned_int_3,unsigned_int_2);

	double_1 = double_4 + double_3;
	float_2 = float_2 * float_2;
	return float_3;
}
unsigned int v_lhRecordAppend( float parameter_1,short parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_6 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_8 = 1;
	double double_7 = 1;
	char char_6 = 1;
	float float_7 = 1;
	char char_7 = 1;
	char char_8 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_9 = 1;
	short_2 = short_1 + short_1;
	float_1 = float_2;
	int_1 = int_1 + int_1;
	double_2 = double_1 * double_2;
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 * int_1;
	double_3 = double_1 + double_1;
	int_2 = int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		int_1 = int_3 * int_3;
		if(1)
		{
			short_2 = short_3 + short_3;
			if(1)
			{
			}
			long_1 = long_1 * long_2;
			long_2 = long_3 * long_2;
			double_4 = double_3 * double_4;
		}
		if(1)
		{
			short short_4 = 1;
			short_2 = v_SyBigEndianPack64(char_1,char_2);

			char_3 = char_2 + char_4;
			int_5 = int_1 * int_4;
			int_3 = int_2 + int_3;
			unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
			double_6 = double_4 * double_5;
			if(1)
			{
				int_6 = int_6 + int_3;
			}
			if(1)
			{
				float_3 = v_lhMoveLocalCell(long_3,unsigned_int_6,int_5,char_1);

				double_1 = double_1;
			}
			int_5 = int_2 + int_5;
			short_5 = short_4 * short_5;
			long_5 = long_4 + long_4;
		}
	}
	char_2 = char_5 + char_3;
	if(1)
	{
	}
	double_4 = double_5 + double_1;
	short_7 = short_6 * short_1;
	long_5 = long_2;
	unsigned_int_5 = unsigned_int_2;
	float_5 = float_4 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_6 = 1;
		if(1)
		{
			int int_7 = 1;
			if(1)
			{
				unsigned_int_4 = unsigned_int_7;
			}
			int_8 = int_5 * int_7;
			if(1)
			{
			}
			long_5 = long_2 + long_4;
			char_3 = char_2 * char_1;
			double_7 = double_6 * double_3;
			char_4 = char_2 + char_6;
			float_1 = float_2 + float_6;
			unsigned_int_1 = unsigned_int_6 * unsigned_int_5;
		}
		if(1)
		{
			float_1 = float_7;
			int_3 = int_1 + int_2;
		}
		if(1)
		{
			int_5 = v_SyBlobRelease();

			float_2 = float_6 * float_3;
		}
		int_2 = int_3 * int_3;
	}
	short_3 = v_lhAcquirePage(short_6,double_7);

	char_7 = char_8;
	double_5 = v_lhAllocateSpace(int_9,unsigned_int_4,unsigned_int_5);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	double_2 = double_2;
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_8 = 1;
		unsigned int unsigned_int_8 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_10 = 1;
		double_8 = double_1 * double_2;
		if(1)
		{
			short_2 = short_6 + short_6;
		}
		if(1)
		{
			int int_10 = 1;
			float float_8 = 1;
			float float_9 = 1;
			short_6 = v_lhRestoreSpace(unsigned_int_5,double_6,long_4);

			unsigned_int_5 = unsigned_int_8 + unsigned_int_9;
			if(1)
			{
			}
			int_6 = v_lhCellWriteOvflPayload(char_5,char_1,int_4,float_4);

			unsigned_int_4 = v_SyMemcpy(long_1,unsigned_int_9);

			int_10 = int_8 + int_3;
			if(1)
			{
			}
			float_9 = float_2 + float_8;
			char_8 = char_1 + char_6;
			v_SyBigEndianUnpack64(char_1,double_6);

			unsigned_int_6 = unsigned_int_8 * unsigned_int_8;
			long_1 = v_SyBlobAppend(int_3,long_2,short_5,-1 );

			unsigned_int_7 = unsigned_int_1 * unsigned_int_5;
			double_9 = double_6 + double_1;
			v_SyBlobInit(long_4,unsigned_int_5);

			unsigned_int_5 = unsigned_int_2 * unsigned_int_6;
		}
		double_2 = double_10 + double_5;
		unsigned_int_10 = unsigned_int_7;
		if(1)
		{
			char_7 = char_5 * char_3;
		}
		unsigned_int_1 = unsigned_int_10 + unsigned_int_8;
		double_2 = double_4 * double_8;
		char_7 = char_3 + char_2;
	}
	double_2 = double_9;
	long_3 = long_4 + long_4;
	float_7 = float_2 + float_3;
	return unsigned_int_6;
}
unsigned int v_lhFindSibeling( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
double v_lhUnlinkCell( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_3 = 1;
	double double_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_7 = 1;
	int_3 = int_1 + int_2;
	char_2 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = v_lhRestoreSpace(unsigned_int_2,double_1,long_1);

	int_4 = int_2 * int_1;
	short_4 = short_2 + short_3;
	char_2 = char_3 + char_3;
	if(1)
	{
	}
	double_1 = double_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_4;
		int_3 = int_5 * int_3;
	}
	if(1)
	{
		unsigned_int_1 = v_lhFindSibeling(double_1);

		int_4 = int_5;
		int_6 = v_SyBigEndianPack16(unsigned_int_5,unsigned_int_1);

		short_1 = v_lhCellDiscard(long_1);

		unsigned_int_2 = unsigned_int_3 * unsigned_int_5;
	}
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	int_7 = int_6 + int_4;
	int_6 = int_3;
	return double_2;
}
short v_lhConsumeCellData( double parameter_1,char parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 + double_2;
	double_2 = double_1;
	char_1 = char_1 + char_1;
	short_2 = short_1 + short_2;
	short_1 = short_1 + short_2;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_2;
		double_4 = double_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float_3 = float_3 + float_4;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		long_1 = long_2;
		int_2 = int_1 * int_1;
		double_1 = double_2;
		v_SyBigEndianUnpack64(char_1,double_2);

		int_3 = int_2 + int_2;
		char_1 = char_2 * char_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_4 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_7 = 1;
			if(1)
			{
				short short_3 = 1;
				short_4 = short_3 + short_1;
			}
			int_3 = int_3;
			if(1)
			{
			}
			short_4 = short_2 * short_2;
			if(1)
			{
				char_1 = char_2;
				double_1 = double_3;
				unsigned_int_2 = unsigned_int_4;
			}
			if(1)
			{
				int_1 = int_2;
				double_2 = double_2 + double_1;
			}
			if(1)
			{
				short short_5 = 1;
				float_2 = float_4 * float_4;
				if(1)
				{
					unsigned_int_3 = unsigned_int_1;
				}
				short_4 = short_5;
			}
			if(1)
			{
				if(1)
				{
					int int_5 = 1;
					int int_6 = 1;
					int_5 = int_2 * int_4;
					if(1)
					{
						unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
					}
					int_1 = int_6;
				}
			}
			unsigned_int_1 = unsigned_int_5;
			int_4 = int_7;
		}
		double_4 = double_4 * double_1;
	}
	return short_1;
}
float v_SyBlobReset()
{
	double double_1 = 1;
	float float_1 = 1;
	double_1 = double_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char_2 = char_1 + char_1;
		long_1 = long_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return float_1;
}
double v_SyBlobDup( long parameter_1,float parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = v_SyBlobAppend(int_1,long_2,short_1,-1 );

	double_3 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	return double_1;
}
int v_lhTransferCell( double parameter_1,char parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	double double_3 = 1;
	short short_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	double_1 = v_lhAllocateSpace(int_1,unsigned_int_1,unsigned_int_2);

	double_1 = double_2 * double_2;
	double_2 = v_SyBlobDup(long_1,float_1);

	short_1 = short_1;
	short_1 = short_1;
	char_2 = char_1 + char_1;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2 + float_1;
		if(1)
		{
		}
	}
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	int_1 = int_1;
	unsigned_int_3 = v_lhNewCell(int_1,long_2);

	long_3 = long_1 * long_2;
	double_3 = double_2 * double_2;
	short_2 = short_1;
	char_1 = char_3 + char_1;
	int_3 = int_2 + int_1;
	int_1 = v_lhFindSlavePage(unsigned_int_3,int_4,unsigned_int_3,float_3);

	double_2 = double_3 * double_2;
	short_3 = short_3 * short_3;
	unsigned_int_4 = v_lhInstallCell(long_4);

	v_lhCellWriteHeader(long_3);

	int_2 = int_5 + int_6;
	if(1)
	{
	}
	double_2 = double_4 * double_2;
	return int_4;
}
unsigned int v_lhPageSplit( int parameter_1,double parameter_2,char parameter_3,double parameter_4)
{
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = double_1 * double_1;
	short_1 = v_lhConsumeCellData(double_1,char_1,short_1);

	short_1 = short_2;
	double_3 = double_2 * double_3;
	float_1 = v_SyBlobReset();

	double_1 = double_2 * double_3;
	float_2 = float_3;
	char_1 = v_vedisDataConsumer(double_2,unsigned_int_1);

	float_4 = float_3 + float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long long_3 = 1;
		float float_5 = 1;
		if(1)
		{
			short short_3 = 1;
			int_1 = v_SyBlobRelease();

			short_1 = short_3 * short_2;
		}
		long_1 = v_lhConsumeCellkey(double_4,unsigned_int_1,long_1,int_2);

		long_3 = long_1 * long_2;
		float_3 = float_5 * float_3;
		if(1)
		{
			int int_3 = 1;
			int_1 = int_2 * int_2;
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			}
			if(1)
			{
				int_1 = int_3;
				if(1)
				{
					float float_6 = 1;
					float float_7 = 1;
					float_4 = float_6 + float_7;
					if(1)
					{
						unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
					}
				}
				long_4 = long_2 * long_4;
				if(1)
				{
					double_3 = double_1;
				}
				int_4 = v_lhTransferCell(double_1,char_2);

				unsigned_int_1 = unsigned_int_1;
			}
			if(1)
			{
				float_4 = v_lhStoreCell(int_1,char_1,unsigned_int_1,short_1,unsigned_int_3,int_1,int_4);

				int_1 = int_3 * int_1;
			}
			v_SyBlobInit(long_4,unsigned_int_1);

			int_4 = int_2 * int_3;
		}
		int_4 = int_2;
	}
	unsigned_int_2 = unsigned_int_2;
	double_3 = v_lhUnlinkCell(char_3);

	double_1 = double_4 + double_4;
	return unsigned_int_1;
}
void v_lhSplit( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	char char_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_5 = 1;
	int int_2 = 1;
	float float_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_4 = 1;
	char char_6 = 1;
	short short_3 = 1;
	double_2 = double_1 * double_2;
	double_3 = double_1 + double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 * long_2;
	short_2 = short_1 + short_2;
	unsigned_int_2 = v_lhNewPage(unsigned_int_2,short_1,long_2);

	char_1 = char_1 + char_2;
	if(1)
	{
	}
	long_2 = v_lhSetEmptyPage(long_3);

	unsigned_int_1 = v_lhPageSplit(int_1,double_4,char_3,double_5);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	short_1 = v_SyBigEndianPack64(char_4,char_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_4 * long_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	if(1)
	{
		int_1 = int_1;
	}
	float_2 = float_1 * float_1;
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	char_5 = v_lhMapFindBucket(long_2,int_1);

	short_1 = v_lhLoadPage(int_1,int_1,char_2,char_5,int_2);

	float_1 = float_3 + float_3;
	if(1)
	{
		double_7 = double_6 * double_2;
	}
	float_2 = float_4 + float_2;
	int_1 = int_2;
	if(1)
	{
	}
	if(1)
	{
		int int_3 = 1;
		char char_7 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_5 = 1;
		double_1 = v_lhMapWriteRecord(char_6,float_4,double_5);

		int_2 = int_3 * int_2;
		char_7 = char_7 * char_7;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
		if(1)
		{
			float float_6 = 1;
			float_6 = float_5 + float_5;
		}
		short_3 = v_lhAcquirePage(short_1,double_6);

		float_5 = float_2;
		double_5 = double_2 * double_7;
	}
	if(1)
	{
		double_4 = double_6 + double_5;
	}
	double_7 = double_6;
}
double v_lhRecordInstall( double parameter_1,unsigned int parameter_2,char parameter_3,char parameter_4,unsigned int parameter_5,unsigned int parameter_6)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	v_lhSplit(float_1,int_1);

	int_2 = int_2;
	double_3 = double_1 + double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_3 = double_3;
		if(1)
		{
			double double_4 = 1;
			if(1)
			{
			}
			double_4 = double_1 + double_4;
		}
	}
	return double_5;
	float_1 = v_lhStoreCell(int_1,char_1,unsigned_int_3,short_1,unsigned_int_4,int_3,int_1);

}
long v_lhKeyCmp( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_2;
	float_2 = float_1 * float_2;
	if(1)
	{
		if(1)
		{
		}
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_4 = double_1 + double_3;
	return long_1;
}
double v_lhFindCell( float parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_4 = 1;
			int_4 = int_3 + int_1;
		}
		if(1)
		{
			if(1)
			{
				long long_2 = 1;
				long long_3 = 1;
				short short_2 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_2 = 1;
				long_1 = v_lhConsumeCellkey(double_1,unsigned_int_1,long_1,int_2);

				long_3 = long_2 + long_3;
				long_1 = v_lhKeyCmp(short_1,int_3);

				short_1 = short_1 + short_2;
				double_1 = double_2;
				unsigned_int_2 = unsigned_int_2;
				long_2 = long_1 * long_1;
				int_2 = int_3 + int_1;
				if(1)
				{
				}
			}
			if(1)
			{
			}
		}
		double_3 = double_1;
	}
	return double_3;
}
char v_vedisDataConsumer( double parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long_1 = v_SyBlobAppend(int_1,long_2,short_1,-1 );

	float_1 = float_2;
	double_3 = double_1 * double_2;
	return char_1;
}
long v_lhConsumeCellkey( double parameter_1,unsigned int parameter_2,long parameter_3,int parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	long long_5 = 1;
	double_2 = double_1 + double_1;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	float_3 = float_1 + float_2;
	char_2 = char_1 * char_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_2 = double_1 * double_2;
		if(1)
		{
			int_1 = int_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		short_1 = short_1 * short_2;
		char_2 = char_1 * char_1;
		v_SyBigEndianUnpack16(double_3,float_4);

		long_1 = long_1;
		int_2 = int_2;
		double_2 = double_1 * double_4;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_2 = 1;
			long long_3 = 1;
			long long_4 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			if(1)
			{
				double_1 = double_1;
			}
			long_4 = long_2 * long_3;
			if(1)
			{
			}
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
			if(1)
			{
				short short_3 = 1;
				char_2 = char_1;
				short_1 = short_2 * short_2;
				short_3 = short_2 * short_1;
				double_5 = double_1 + double_1;
				if(1)
				{
					int_2 = int_2;
				}
				int_3 = int_1;
			}
			if(1)
			{
				int int_4 = 1;
				int int_5 = 1;
				int_2 = int_3 + int_4;
				if(1)
				{
					double double_7 = 1;
					double_4 = double_6 + double_7;
				}
				int_1 = int_4 + int_5;
			}
			if(1)
			{
				short_1 = short_1 * short_2;
				if(1)
				{
					v_SyBigEndianUnpack64(char_2,double_4);

					unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
				}
				double_1 = double_5 + double_5;
			}
			unsigned_int_2 = unsigned_int_4;
			long_4 = long_1 + long_4;
		}
		double_6 = double_5 * double_2;
	}
	return long_5;
}
long v_lhParseOneCell( int parameter_1,double parameter_2,unsigned int parameter_3,long parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	long long_5 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	double double_7 = 1;
	int int_7 = 1;
	int_1 = int_2;
	long_2 = long_1 + long_1;
	float_1 = float_1;
	int_3 = v_SyBlobRelease();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_4 = int_4;
	double_2 = double_1 + double_2;
	double_1 = double_1 * double_1;
	int_4 = int_1 + int_3;
	long_3 = v_lhConsumeCellkey(double_2,unsigned_int_1,long_4,int_1);

	double_1 = double_1;
	float_1 = float_1 * float_1;
	double_3 = double_1 + double_3;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	int_2 = int_5 * int_4;
	long_5 = v_SyBigEndianUnpack32(long_1,double_3);

	float_1 = float_1 * float_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "1/") < 0)
	{
	}
	unsigned_int_2 = v_lhNewCell(int_3,long_5);

	long_4 = long_1 * long_5;
	double_3 = double_2 + double_4;
	double_6 = double_4 * double_5;
	long_1 = long_3 * long_5;
	int_6 = int_3 + int_5;
	unsigned_int_3 = v_lhInstallCell(long_1);

	unsigned_int_4 = unsigned_int_1;
	int_2 = int_2 * int_5;
	short_2 = short_1 + short_2;
	if(1)
	{
		char_1 = v_vedisDataConsumer(double_2,unsigned_int_5);

		short_3 = short_3 + short_3;
	}
	v_SyBigEndianUnpack16(double_7,float_1);

	int_7 = int_7 * int_5;
	if(1)
	{
	}
	if(1)
	{
		short_3 = short_3 + short_2;
	}
	return long_5;
	v_SyBigEndianUnpack64(char_1,double_1);

}
double v_lhPageFreeSpace( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_2 = double_1 + double_1;
	int_2 = int_1 * int_1;
	v_SyBigEndianUnpack16(double_3,float_1);

	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double_2 = double_4 * double_5;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_3 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		double_6 = double_2 * double_5;
		double_4 = double_5;
		double_7 = double_2 + double_5;
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_2 * float_1;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
		}
	}
	int_2 = int_2 + int_2;
	return double_6;
}
unsigned int v_lhLoadCells( int parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	long_1 = v_lhParseOneCell(int_1,double_1,unsigned_int_1,long_2);

	double_1 = double_1;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_2;
	double_1 = v_lhPageFreeSpace(int_1);

	int_4 = int_2 + int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		if(1)
		{
		}
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 + short_1;
		}
		int_5 = int_1 + int_2;
		if(1)
		{
		}
	}
	return unsigned_int_2;
}
void v_lhParsePageHeader( double parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_2 = 1;
	short_1 = short_1 + short_1;
	long_1 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_4;
	float_1 = float_1 * float_1;
	v_SyBigEndianUnpack64(char_1,double_1);

	int_2 = int_1 + int_1;
	v_SyBigEndianUnpack16(double_2,float_2);

	double_2 = double_2;
}
short v_lhLoadPage( int parameter_1,int parameter_2,char parameter_3,char parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_4 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_2 = v_lhLoadCells(int_1);

	unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned_int_6 = unsigned_int_1 * unsigned_int_3;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_2 + unsigned_int_7;
		if(1)
		{
			double double_3 = 1;
			double_2 = double_2 * double_3;
		}
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_8 = unsigned_int_2 + unsigned_int_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				v_lhParsePageHeader(double_1);

				long_1 = long_1 + long_2;
			}
			short_2 = short_1 + short_1;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	return short_3;
	unsigned_int_5 = v_lhNewPage(unsigned_int_9,short_4,long_3);

}
double v_lhMapWriteRecord( char parameter_1,float parameter_2,double parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	char char_1 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_5 = 1;
	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = v_lhAcquirePage(short_3,double_1);

	int_3 = int_1 + int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
		}
		float_3 = float_1 + float_2;
		int_4 = int_1 * int_2;
		unsigned_int_1 = unsigned_int_2;
		double_3 = double_2 * double_2;
		long_3 = long_1 + long_2;
		if(1)
		{
		}
		if(1)
		{
			int int_5 = 1;
			int_5 = int_3 + int_4;
		}
		if(1)
		{
			double_2 = double_4 * double_4;
			float_2 = float_3 + float_3;
		}
		short_4 = v_SyBigEndianPack64(char_1,char_1);

		unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
		if(1)
		{
		}
		double_3 = double_4 * double_4;
	}
	if(1)
	{
		int_6 = int_3;
		if(1)
		{
		}
	}
	char_1 = v_SyBigEndianPack32(short_1,long_1);

	int_7 = int_6;
	if(1)
	{
	}
	long_1 = long_1 * long_3;
	short_3 = short_2 * short_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	int_7 = v_lhMapInstallBucket(double_1,short_5,float_3);

	int_1 = int_4;
	long_2 = long_2 + long_3;
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		float_5 = float_4 + float_5;
		if(1)
		{
			short short_6 = 1;
			short_5 = short_6 + short_6;
		}
		if(1)
		{
			short short_7 = 1;
			short_4 = short_7 + short_4;
			if(1)
			{
			}
			short_2 = short_7 + short_5;
		}
	}
	return double_4;
}
void v_lhCellWriteHeader( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_6 = 1;
	char char_7 = 1;
	char char_8 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_2;
	char_3 = char_1 + char_2;
	char_2 = char_4 * char_4;
	double_3 = double_1 + double_2;
	int_1 = int_1;
	int_2 = v_SyBigEndianPack16(unsigned_int_4,unsigned_int_5);

	int_1 = int_1 + int_2;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_6;
	char_1 = v_SyBigEndianPack32(short_1,long_2);

	unsigned_int_2 = unsigned_int_6 + unsigned_int_5;
	double_2 = double_3 * double_1;
	short_2 = v_SyBigEndianPack64(char_2,char_5);

	char_3 = char_1 + char_1;
	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_7 + unsigned_int_3;
	double_2 = double_1 * double_1;
	char_8 = char_6 + char_7;
}
unsigned int v_lhCellWriteLocalPayload( char parameter_1,float parameter_2,char parameter_3,long parameter_4,double parameter_5)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	char_1 = char_1 + char_1;
	short_1 = short_2;
	long_1 = long_1 + long_1;
	unsigned_int_1 = v_SyMemcpy(long_1,unsigned_int_2);

	double_3 = double_1 + double_2;
	long_1 = long_1 + long_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 * int_2;
	}
	return unsigned_int_1;
}
short v_lhCellDiscard( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	int_1 = v_SyBlobRelease();

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	short_3 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_5 = short_1 + short_4;
	return short_2;
	unsigned_int_2 = v_SyMemBackendPoolFree(long_1);

}
int v_lhCellWriteOvflPayload( char parameter_1,char parameter_2,int parameter_3,float parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_6 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_11 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_5 = 1;
	int_1 = int_1 + int_2;
	int_3 = int_3 + int_4;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_4 = double_3 + double_1;
	double_5 = double_1 * double_2;
	double_1 = double_5 + double_4;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	int_5 = int_4 * int_2;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1;
	double_1 = double_2 + double_3;
	double_5 = double_3 * double_4;
	int_1 = int_6 + int_3;
	short_3 = short_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	double_5 = double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_6 = 1;
		if(1)
		{
			int_6 = int_4;
		}
		if(1)
		{
			double_2 = double_2 * double_1;
			if(1)
			{
			}
			short_3 = v_lhAcquirePage(short_3,double_3);

			int_5 = int_3 * int_6;
			if(1)
			{
			}
			double_2 = double_4 + double_3;
			char_2 = char_1 + char_2;
			double_1 = double_5 * double_1;
			double_3 = double_6 + double_5;
			unsigned_int_2 = unsigned_int_2;
			int_2 = int_1 * int_4;
		}
		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
		double_6 = double_7;
		if(1)
		{
			int_4 = int_1 + int_1;
		}
		char_1 = char_2 + char_1;
		int_7 = int_3 * int_6;
		long_1 = long_2 * long_1;
	}
	unsigned_int_5 = v_SyMemcpy(long_1,unsigned_int_1);

	double_7 = double_4;
	long_1 = long_2 * long_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
	short_2 = v_SyBigEndianPack64(char_1,char_1);

	long_1 = long_2 + long_1;
	int_7 = int_8 + int_4;
	double_7 = double_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_9 = 1;
		int int_10 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_6;
		short_2 = short_3 + short_3;
		int_2 = int_9;
		int_5 = int_7 + int_10;
		float_2 = float_1 * float_1;
		if(1)
		{
			int int_12 = 1;
			int_7 = int_11 + int_12;
		}
		short_1 = short_1 * short_3;
		double_9 = double_3 + double_8;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long long_3 = 1;
			float float_3 = 1;
			long long_4 = 1;
			short short_4 = 1;
			if(1)
			{
				long_1 = long_3 * long_3;
			}
			if(1)
			{
				char char_3 = 1;
				int int_13 = 1;
				char_4 = char_3 + char_2;
				if(1)
				{
					unsigned_int_5 = unsigned_int_5;
				}
				int_5 = int_8 + int_6;
				if(1)
				{
					long_3 = long_1 + long_3;
				}
				int_13 = int_8;
				double_8 = double_4 + double_3;
				unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
				char_4 = char_1;
				double_7 = double_1;
				long_2 = long_1 * long_3;
			}
			long_3 = long_2 + long_2;
			float_2 = float_3 + float_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_6;
			}
			long_3 = long_4 * long_1;
			short_4 = short_4;
			short_2 = short_4 * short_1;
		}
	}
	unsigned_int_3 = unsigned_int_7 * unsigned_int_6;
	char_2 = char_5 + char_4;
	return int_1;
	int_11 = v_SyBigEndianPack16(unsigned_int_2,unsigned_int_5);

}
unsigned int v_lhInstallCell( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long_3 = long_1 * long_2;
	unsigned_int_1 = v_SyZero(double_1);

	float_2 = float_1 * float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "iT") < 0)
	{
		float_1 = float_3 + float_1;
		unsigned_int_2 = unsigned_int_2;
		char_1 = char_2;
		if(1)
		{
		}
		int_1 = int_1;
		double_1 = double_1;
		short_2 = short_1 * short_1;
	}
	short_3 = short_2 + short_1;
	short_5 = short_1 + short_4;
	if(1)
	{
		int_1 = v_SyMemBackendAlloc(unsigned_int_1,short_3);

		double_3 = double_2 + double_1;
	}
	double_2 = v_SyMemBackendFree(char_2);

	double_3 = double_3;
	if(1)
	{
		char_5 = char_3 * char_4;
	}
	if(1)
	{
		double_3 = double_3;
	}
	double_5 = double_4 * double_3;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		short short_6 = 1;
		float float_4 = 1;
		int_3 = int_2 * int_2;
		short_3 = short_4 + short_6;
		unsigned_int_2 = unsigned_int_2;
		float_3 = float_4;
		char_4 = char_5 * char_3;
		if(1)
		{
			int int_4 = 1;
			short short_7 = 1;
			double_2 = double_2 * double_1;
			int_1 = int_2 * int_4;
			short_6 = short_7 + short_3;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				long long_5 = 1;
				unsigned int unsigned_int_3 = 1;
				if(1)
				{
					int_1 = int_3 + int_4;
				}
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
				double_3 = double_5 + double_1;
				short_3 = short_3 * short_2;
				if(1)
				{
					long long_4 = 1;
					long_4 = long_1;
				}
				char_3 = char_3 * char_1;
				long_5 = long_5 * long_2;
				unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
			}
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			char_2 = char_4 + char_2;
		}
	}
	return unsigned_int_1;
}
void v_SyBlobInit( long parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
		}
		long_2 = long_1 + long_2;
	}
	int_1 = int_1;
	double_2 = double_1 * double_1;
	short_1 = short_1 + short_1;
}
unsigned int v_lhNewCell( int parameter_1,long parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short_1 = v_SyMemBackendPoolAlloc(int_1,int_2);

	unsigned_int_1 = unsigned_int_1;
	int_4 = int_3 + int_2;
	if(1)
	{
	}
	long_1 = long_1 * long_2;
	float_1 = float_1;
	v_SyBlobInit(long_3,unsigned_int_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	return unsigned_int_1;
	unsigned_int_2 = v_SyZero(double_1);

}
short v_lhRestoreSpace( unsigned int parameter_1,double parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float_1 = float_1 + float_2;
	if(1)
	{
	}
	short_1 = short_1 * short_2;
	float_3 = float_2;
	int_1 = v_SyBigEndianPack16(unsigned_int_1,unsigned_int_1);

	int_2 = int_1 * int_2;
	int_2 = int_2 * int_2;
	double_2 = double_1 * double_1;
	double_1 = double_3 + double_3;
	long_1 = long_1 + long_1;
	return short_1;
}
int v_lhFindSlavePage( unsigned int parameter_1,int parameter_2,unsigned int parameter_3,float parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	long long_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	char char_3 = 1;
	double double_7 = 1;
	int_2 = int_1 + int_1;
	char_2 = char_1 * char_2;
	float_2 = float_1 + float_1;
	int_3 = int_4;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_5 + int_5;
	long_3 = long_1 * long_2;
	short_1 = v_lhRestoreSpace(unsigned_int_2,double_1,long_3);

	short_1 = v_lhAcquirePage(short_2,double_1);

	unsigned_int_3 = v_lhNewPage(unsigned_int_1,short_3,long_4);

	double_4 = double_2 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_1 + int_3;
		short_1 = short_1 + short_1;
		if(1)
		{
			char_2 = char_1 * char_2;
			double_5 = double_5;
		}
		if(1)
		{
			if(1)
			{
				int_3 = int_5;
			}
			if(1)
			{
				double_6 = double_1;
			}
			float_2 = float_2 + float_2;
		}
		unsigned_int_2 = unsigned_int_4;
	}
	float_2 = float_3 + float_1;
	if(1)
	{
	}
	int_1 = int_2 * int_5;
	if(1)
	{
		double_5 = double_1;
	}
	double_4 = double_3 * double_6;
	if(1)
	{
	}
	double_6 = v_lhAllocateSpace(int_5,unsigned_int_5,unsigned_int_3);

	unsigned_int_5 = unsigned_int_1;
	if(1)
	{
		int_5 = int_4 + int_3;
	}
	if(1)
	{
		if(1)
		{
			long long_5 = 1;
			long_5 = long_5 + long_4;
		}
		unsigned_int_4 = unsigned_int_1;
	}
	int_3 = int_5 + int_6;
	if(1)
	{
		short_1 = v_SyBigEndianPack64(char_1,char_3);

		double_1 = double_7 + double_3;
	}
	double_2 = double_4;
	double_7 = double_2;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
	long_2 = v_lhSetEmptyPage(long_2);

	long_2 = long_4 * long_1;
	return int_3;
}
double v_lhSlaveStore( short parameter_1,long parameter_2,double parameter_3,long parameter_4,double parameter_5,double parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_1 = double_1 + double_2;
	int_1 = v_lhFindSlavePage(unsigned_int_1,int_1,unsigned_int_2,float_1);

	double_4 = double_1 * double_3;
	float_1 = v_lhStoreCell(int_1,char_1,unsigned_int_3,short_1,unsigned_int_1,int_2,int_3);

	long_2 = long_1 * long_1;
	if(1)
	{
	}
	long_1 = long_3 + long_2;
	return double_1;
}
int v_lhPageDefragment( double parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	long long_4 = 1;
	int int_6 = 1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_SyBigEndianPack16(unsigned_int_1,unsigned_int_3);

	float_1 = float_1 + float_2;
	long_2 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_1;
	double_1 = double_2 + double_1;
	double_5 = double_3 + double_4;
	double_7 = double_5 * double_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
		}
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "8 ") > 0)
		{
			char char_1 = 1;
			int int_3 = 1;
			int int_4 = 1;
			char char_4 = 1;
			short short_2 = 1;
			int_2 = int_1 * int_1;
			if(1)
			{
				float_3 = float_1 * float_1;
			}
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
			char_2 = char_1 * char_1;
			int_1 = int_1 + int_2;
			short_1 = v_SyBigEndianPack64(char_2,char_3);

			long_3 = long_2 * long_1;
			int_3 = int_1 * int_1;
			int_3 = int_2 + int_4;
			char_1 = char_1 + char_4;
			unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
			short_2 = short_1;
			float_2 = float_2 * float_1;
			unsigned_int_4 = v_SyMemcpy(long_3,unsigned_int_1);

			float_4 = float_2;
			char_3 = char_1;
			char_2 = v_SyBigEndianPack32(short_3,long_4);

			double_3 = double_7 + double_5;
			if(1)
			{
				long_2 = long_3 + long_3;
				int_4 = int_3;
			}
			if(1)
			{
				int int_5 = 1;
				int_3 = int_5;
			}
		}
		unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	}
	float_2 = float_2 + float_4;
	if(1)
	{
		double double_8 = 1;
		double double_9 = 1;
		double_6 = double_8;
		double_2 = double_9;
		float_3 = float_1;
	}
	if(1)
	{
		double double_10 = 1;
		double_6 = double_10;
		long_1 = long_2;
	}
	double_6 = double_3;
	unsigned_int_4 = unsigned_int_3;
	int_1 = int_2 + int_6;
	return int_1;
}
void v_SyBigEndianUnpack16( double parameter_1,float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_1 * float_2;
}
double v_lhAllocateSpace( int parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_1 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_9 = 1;
	int int_6 = 1;
	double_3 = double_1 * double_2;
	double_4 = double_1 + double_1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	double_3 = double_3 * double_3;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	char_1 = char_1 + char_2;
	double_4 = double_4 + double_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_8 = 1;
		float float_4 = 1;
		if(1)
		{
		}
		double_4 = double_1 + double_6;
		v_SyBigEndianUnpack16(double_3,float_1);

		char_2 = char_1 * char_1;
		if(1)
		{
			double_8 = double_7 + double_3;
		}
		unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
		if(1)
		{
			float float_3 = 1;
			float_4 = float_2 * float_3;
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				double_2 = double_8;
				int_2 = v_SyBigEndianPack16(unsigned_int_1,unsigned_int_5);

				int_2 = int_1;
				int_4 = int_3 * int_1;
				unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
				int_2 = int_2 * int_4;
			}
			if(1)
			{
			}
		}
		float_2 = float_4 * float_2;
	}
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	float_2 = float_2 + float_2;
	if(1)
	{
		int int_5 = 1;
		double_1 = double_1;
		int_3 = int_3 + int_4;
		int_4 = int_5 + int_4;
		unsigned_int_4 = unsigned_int_1;
		double_3 = double_6;
		double_5 = double_9;
	}
	if(1)
	{
		int_2 = int_2 * int_2;
	}
	if(1)
	{
		double double_10 = 1;
		int_6 = v_lhPageDefragment(double_7);

		int_3 = int_3;
		double_2 = double_10 * double_1;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	return double_9;
}
float v_lhStoreCell( int parameter_1,char parameter_2,unsigned int parameter_3,short parameter_4,unsigned int parameter_5,int parameter_6,int parameter_7)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_5 = 1;
	short_2 = short_1 + short_1;
	float_1 = float_1 * float_2;
	unsigned_int_1 = v_lhNewCell(int_1,long_1);

	int_2 = int_2 + int_2;
	double_1 = double_1 + double_2;
	int_3 = v_lhCellWriteOvflPayload(char_1,char_1,int_1,float_2);

	int_3 = int_1 * int_4;
	double_2 = double_1 * double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Yk") > 0)
	{
	}
	double_2 = v_lhSlaveStore(short_3,long_2,double_2,long_3,double_1,double_2);

	long_3 = long_4 + long_5;
	if(1)
	{
		long_2 = long_4 + long_2;
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				double_3 = double_2 + double_1;
			}
		}
		unsigned_int_2 = v_lhCellWriteLocalPayload(char_1,float_1,char_2,long_3,double_3);

		char_3 = char_3;
	}
	char_4 = char_3 * char_1;
	if(1)
	{
		short_4 = short_2 + short_1;
	}
	float_3 = float_1 + float_1;
	short_2 = short_4 * short_2;
	float_4 = float_1 * float_4;
	short_4 = short_5;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		double_3 = v_lhAllocateSpace(int_3,unsigned_int_3,unsigned_int_3);

		unsigned_int_4 = unsigned_int_2;
	}
	short_3 = v_lhCellDiscard(long_1);

	int_2 = int_5 * int_6;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_3 * int_6;
		if(1)
		{
			long_6 = long_3 * long_5;
		}
	}
	if(1)
	{
		char char_5 = 1;
		char char_6 = 1;
		unsigned_int_5 = v_lhInstallCell(long_3);

		char_6 = char_2 + char_5;
	}
	v_lhCellWriteHeader(long_4);

	short_5 = short_4 * short_2;
	return float_4;
	long_5 = v_SyBlobAppend(int_2,long_6,short_2,-1 );

}
int v_SyBigEndianPack16( unsigned int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_1 * char_2;
	return int_4;
}
long v_lhSetEmptyPage( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long_1 = long_2;
	short_1 = v_SyBigEndianPack64(char_1,char_1);

	int_2 = int_1 + int_1;
	int_2 = int_2 + int_2;
	int_1 = v_SyBigEndianPack16(unsigned_int_1,unsigned_int_1);

	int_3 = int_1 * int_3;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	int_4 = int_4 * int_3;
	double_3 = double_1;
	double_1 = double_1;
	char_1 = char_2 * char_1;
	short_1 = short_1;
	int_5 = int_3 + int_3;
	double_3 = double_3 + double_2;
	int_3 = int_5 + int_6;
	long_1 = long_3;
	double_1 = double_1 * double_3;
	double_1 = double_1;
	char_4 = char_3 + char_2;
	char_1 = char_1;
	return long_1;
}
unsigned int v_lhNewPage( unsigned int parameter_1,short parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	float_3 = float_1 + float_2;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	float_4 = float_3 * float_1;
	int_1 = int_3 * int_4;
	int_3 = int_5 * int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_2 = v_SyZero(double_1);

		short_3 = short_2 + short_1;
	}
	short_2 = v_SyMemBackendPoolAlloc(int_1,int_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_2;
}
short v_lhAcquirePage( short parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_2 = 1;
			char_2 = char_1 + char_1;
			v_SyBigEndianUnpack64(char_2,double_1);

			int_2 = int_1 + int_1;
			if(1)
			{
			}
			short_1 = v_SyBigEndianPack64(char_1,char_2);

			int_3 = int_2 + int_1;
			long_1 = long_1 + long_1;
			double_1 = double_2;
		}
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
	}
	long_1 = long_1;
	return short_1;
}
char v_lhMapFindBucket( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
		}
		double_1 = double_1 + double_1;
	}
	return char_1;
}
double v_lh_record_insert( double parameter_1,long parameter_2,short parameter_3,long parameter_4,float parameter_5,int parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	long long_2 = 1;
	short short_2 = 1;
	char char_5 = 1;
	char char_6 = 1;
	long long_3 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	double_1 = double_2;
	int_1 = int_1;
	int_2 = v_lhRecordOverwrite(unsigned_int_1,unsigned_int_2,float_1);

	char_1 = char_1 + char_1;
	double_3 = v_lhFindCell(float_2,unsigned_int_1,float_2,char_1);

	char_1 = char_2;
	int_3 = int_1 * int_2;
	int_1 = int_3 * int_3;
	double_2 = double_3 * double_2;
	float_2 = float_2;
	double_3 = v_lhMapWriteRecord(char_1,float_1,double_3);

	double_4 = double_3 * double_4;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	double_3 = double_2 + double_2;
	int_2 = int_2 * int_4;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	}
	char_4 = char_3 * char_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		char char_7 = 1;
		unsigned_int_4 = unsigned_int_5;
		if(1)
		{
		}
		double_4 = double_2 + double_2;
		if(1)
		{
		}
		short_1 = v_lhAcquirePage(short_1,double_5);

		unsigned_int_4 = v_lhNewPage(unsigned_int_1,short_1,long_2);

		long_1 = v_lhSetEmptyPage(long_2);

		short_2 = v_lhLoadPage(int_3,int_1,char_1,char_5,int_2);

		long_2 = long_1 + long_2;
		if(1)
		{
			char_6 = v_lhMapFindBucket(long_3,int_2);

			double_5 = double_2 * double_3;
		}
		char_2 = char_7;
		if(1)
		{
			int_2 = int_3;
		}
		char_8 = char_5 + char_4;
	}
	if(1)
	{
		float float_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		float_2 = float_3 * float_2;
		if(1)
		{
		}
		short_2 = short_1 * short_2;
		double_4 = v_lhRecordInstall(double_4,unsigned_int_6,char_4,char_6,unsigned_int_3,unsigned_int_1);

		int_2 = int_5 * int_4;
		if(1)
		{
			short_1 = short_1;
			if(1)
			{
				int int_6 = 1;
				int int_7 = 1;
				int int_8 = 1;
				unsigned_int_2 = v_lhRecordAppend(float_1,short_2,float_1);

				int_8 = int_6 + int_7;
				short_2 = short_2;
			}
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_2;
			}
			if(1)
			{
				float_2 = v_lhStoreCell(int_1,char_1,unsigned_int_4,short_2,unsigned_int_6,int_4,int_5);

				char_8 = char_5 + char_2;
			}
		}
		long_4 = long_5;
	}
	return double_3;
}
double v_lhash_kv_replace( double parameter_1,char parameter_2,int parameter_3,short parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double_1 = v_lh_record_insert(double_2,long_1,short_1,long_1,float_1,int_1);

	double_2 = double_2 * double_2;
	double_1 = double_3 + double_2;
	return double_3;
}
unsigned int v_MemPoolBucketAlloc( long parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	v_MemBackendAlloc(float_1,unsigned_int_2,-1 );

	int_2 = int_1 + int_1;
	double_1 = double_1 + double_2;
	int_3 = int_3 + int_1;
	if(1)
	{
	}
	int_1 = int_3 + int_1;
	float_2 = float_2;
	float_3 = float_2 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		float float_4 = 1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "m2") > 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_2;
		}
		int_4 = int_1 + int_3;
		int_3 = int_4 * int_3;
		float_2 = float_4;
	}
	double_3 = double_1 * double_2;
	return unsigned_int_1;
}
long v_MemBackendPoolAlloc( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_1;
	short_2 = short_1 + short_2;
	unsigned_int_2 = v_MemPoolBucketAlloc(long_1,double_1);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	v_MemBackendAlloc(float_1,unsigned_int_5,-1 );

	float_2 = float_1 * float_2;
	return long_1;
}
short v_SyMemBackendPoolAlloc( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short_1 = short_1 * short_2;
	if(1)
	{
		double double_1 = 1;
		if(1)
		{
		}
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 + long_1;
		}
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		float float_1 = 1;
		float_2 = float_1 * float_2;
	}
	return short_2;
	long_2 = v_MemBackendPoolAlloc(float_2,int_1);

}
int v_lhMapInstallBucket( double parameter_1,short parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_8 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_1 + double_2;
	long_1 = long_1;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	int_2 = int_1 * int_1;
	short_1 = v_SyMemBackendPoolAlloc(int_2,int_2);

	int_1 = v_SyMemBackendAlloc(unsigned_int_2,short_1);

	char_2 = char_1 + char_1;
	int_3 = int_3;
	double_4 = double_5;
	if(1)
	{
		int int_4 = 1;
		int_6 = int_4 + int_5;
	}
	double_5 = double_5 * double_2;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		int_7 = int_3 * int_3;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		short_1 = short_1 + short_1;
		char_1 = char_3 * char_2;
		short_1 = short_1 * short_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			long long_4 = 1;
			long long_5 = 1;
			int int_9 = 1;
			double double_6 = 1;
			double double_7 = 1;
			int_3 = int_7 + int_6;
			long_5 = long_4 + long_1;
			unsigned_int_3 = v_SyZero(double_5);

			int_2 = int_2 + int_6;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char char_4 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_10 = 1;
				if(1)
				{
					int_9 = int_8 + int_1;
				}
				char_1 = char_4 * char_2;
				double_3 = v_SyMemBackendFree(char_3);

				unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
				double_6 = double_2 + double_2;
				if(1)
				{
					double_4 = double_5 + double_2;
				}
				double_1 = double_5;
				int_10 = int_7 * int_9;
				char_4 = char_4 * char_3;
			}
			int_9 = int_5 + int_9;
			double_7 = double_2 + double_3;
			double_6 = double_7 + double_3;
		}
	}
	return int_8;
}
int v_lhMapLoadPage( char parameter_1,long parameter_2,double parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_4 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	long_1 = v_SyBigEndianUnpack32(long_1,double_1);

	double_3 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1;
	double_3 = double_1;
	float_2 = float_1 * float_2;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_1 + int_2;
		v_SyBigEndianUnpack64(char_1,double_4);

		short_1 = short_1 + short_1;
		int_2 = int_1 + int_3;
		int_4 = int_2 * int_4;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		long long_4 = 1;
		if(1)
		{
			long long_2 = 1;
			long_2 = long_2;
		}
		char_1 = char_2 + char_2;
		double_4 = double_4 + double_4;
		int_1 = int_4 * int_2;
		unsigned_int_1 = unsigned_int_1;
		long_4 = long_3 * long_4;
		if(1)
		{
		}
	}
	short_2 = short_3;
	return int_1;
	int_5 = v_lhMapInstallBucket(double_2,short_1,float_2);

}
void v_SyBigEndianUnpack64( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = double_1;
	float_2 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_1 + char_2;
}
long v_SyBigEndianUnpack32( long parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_1 = int_2;
	return long_1;
}
char v_lhash_read_header( short parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	short short_3 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	int int_4 = 1;
	long long_4 = 1;
	double double_3 = 1;
	int int_5 = 1;
	char char_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_1;
	char_3 = char_1 + char_2;
	long_2 = long_1 + long_1;
	short_2 = short_1 + short_2;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	int_2 = v_lhMapLoadPage(char_1,long_1,double_1);

	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	}
	float_3 = float_2 * float_3;
	short_3 = short_1 * short_1;
	double_2 = double_2 * double_1;
	int_2 = int_3;
	unsigned_int_2 = unsigned_int_5;
	float_3 = float_3 * float_3;
	long_3 = v_SyBigEndianUnpack32(long_2,double_2);

	v_SyBigEndianUnpack64(char_4,double_1);

	short_2 = short_4 * short_3;
	int_3 = int_4 + int_2;
	unsigned_int_3 = unsigned_int_1;
	long_4 = long_3 + long_1;
	double_2 = double_2 * double_3;
	short_4 = short_2 * short_1;
	int_5 = int_4 + int_5;
	int_4 = int_4 * int_1;
	char_1 = char_2 + char_3;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_6 = 1;
		long long_5 = 1;
		int int_7 = 1;
		int int_8 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double_3 = double_3 * double_1;
		long_1 = long_2;
		if(1)
		{
			int_5 = int_6;
		}
		long_1 = long_4 + long_5;
		if(1)
		{
		}
		int_6 = int_7 + int_8;
		double_3 = double_1 + double_3;
		float_5 = float_4 + float_1;
		if(1)
		{
		}
	}
	return char_5;
}
short v_SyBigEndianPack64( char parameter_1,char parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	long_1 = long_1;
	int_1 = int_1 * int_2;
	int_1 = int_1 * int_2;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_3 * double_4;
	long_3 = long_2 * long_3;
	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_4;
	short_2 = short_2 + short_2;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_1;
	return short_3;
}
char v_SyBigEndianPack32( short parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long_2 = long_1 + long_2;
	int_1 = int_1 * int_2;
	int_2 = int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_2;
	short_1 = short_2;
	long_3 = long_1 * long_1;
	return char_2;
}
short v_lhash_write_header( float parameter_1,short parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long_1 = long_1;
	char_1 = char_1 + char_2;
	char_3 = char_1 * char_3;
	int_1 = int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_4;
	char_4 = v_SyBigEndianPack32(short_1,long_1);

	unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
	char_3 = char_3 + char_3;
	long_2 = long_1 + long_2;
	short_1 = short_2 * short_2;
	unsigned_int_5 = unsigned_int_5;
	short_1 = v_SyBigEndianPack64(char_2,char_2);

	double_2 = double_1 + double_1;
	long_2 = long_2 + long_2;
	double_2 = double_3 + double_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	int_3 = int_2 + int_2;
	int_1 = int_2 + int_4;
	double_3 = double_2 * double_3;
	return short_2;
}
float v_lhash_kv_open( char parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 + int_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int_2 = int_1 * int_2;
		if(1)
		{
		}
		char_1 = char_1 * char_1;
		if(1)
		{
		}
		short_1 = v_lhash_write_header(float_1,short_2);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
		}
	}
	if(1)
	{
		char char_2 = 1;
		unsigned int unsigned_int_6 = 1;
		char_1 = v_lhash_read_header(short_3,unsigned_int_5);

		char_2 = char_2 * char_2;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_6 + unsigned_int_1;
		if(1)
		{
		}
	}
	return float_1;
}
double v_lhash_kv_config( short parameter_1,int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_1;
		}
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_3 = short_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
	}
	int_3 = int_1 * int_2;
	int_2 = int_1 + int_4;
	float_1 = float_1 + float_2;
	return double_1;
}
int v_lhash_kv_release( double parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	short_1 = v_SyMemBackendRelease(float_1);

	short_3 = short_2 * short_2;
	short_2 = short_3 + short_2;
	return int_1;
}
double v_MemBackendPoolFree( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char_1 = char_2;
	char_1 = char_2 * char_1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		float float_3 = 1;
		float_2 = v_MemBackendFree(short_1);

		float_2 = float_3 + float_1;
	}
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float_5 = float_2 * float_4;
		double_2 = double_1 + double_1;
	}
	return double_3;
}
unsigned int v_SyMemBackendPoolFree( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
		int int_3 = 1;
		if(1)
		{
		}
		if(1)
		{
			long long_1 = 1;
			double_1 = v_MemBackendPoolFree(unsigned_int_1);

			long_1 = long_1 + long_1;
		}
		int_3 = int_2 * int_2;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1;
	}
	return unsigned_int_1;
}
int v_SyBlobRelease()
{
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "X") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_3 = char_1 * char_2;
	}
	double_1 = v_SyMemBackendFree(char_3);

	double_2 = double_2;
	double_4 = double_3 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
short v_lhash_page_release()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	double_2 = double_1 + double_2;
	double_1 = double_3 * double_1;
	float_2 = float_1 + float_1;
	char_1 = char_1;
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		double double_4 = 1;
		float float_3 = 1;
		int_1 = v_SyBlobRelease();

		int_3 = int_1 * int_2;
		unsigned_int_1 = v_SyMemBackendPoolFree(long_1);

		double_1 = double_4 + double_3;
		float_3 = float_1 + float_2;
		double_3 = v_SyMemBackendFree(char_1);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "GC") > 0)
	{
		int_1 = int_2 + int_1;
	}
	long_3 = long_2 * long_3;
	unsigned_int_3 = unsigned_int_2;
	return short_2;
}
void v_lhash_bin_hash( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1 * double_1;
	int_3 = int_2 * int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	int_4 = int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_6 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "=A") < 0)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		int_1 = int_3;
		int_3 = int_2 * int_5;
		if(1)
		{
			int_2 = int_2 * int_4;
		}
		int_6 = int_4 + int_2;
		double_3 = double_2 + double_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
		}
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		float_3 = float_1 + float_2;
	}
}
void v_lhash_kv_init( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_4 = 1;
	double_2 = double_1 * double_1;
	short_1 = v_lhash_page_release();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_2;
	if(1)
	{
		v_lhash_bin_hash(double_2,char_1);

		short_2 = short_1 + short_1;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	int_1 = v_SyMemBackendInitFromParent(unsigned_int_5,char_1);

	int_2 = int_1 * int_1;
	double_3 = double_3 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_6;
	short_2 = short_3 + short_2;
	if(1)
	{
		int_1 = int_2;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_6;
	}
	char_2 = char_2;
	int_1 = int_1 + int_2;
	short_1 = v_SyMemcmp(char_3,long_1,float_1);

	float_2 = float_2 * float_3;
	double_3 = double_2 * double_2;
	unsigned_int_6 = v_vedisExportMemBackend();

	short_1 = v_SyMemBackendRelease(float_3);

	short_1 = short_2 + short_3;
	int_2 = int_2;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_4;
	int_1 = v_SyMemBackendAlloc(unsigned_int_6,short_4);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_2 = v_SyZero(double_3);

}
long v_vedisExportDiskKvStorage()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	long long_4 = 1;
	short short_4 = 1;
	char char_5 = 1;
	float float_4 = 1;
	int_1 = v_lhash_kv_release(double_1);

	double_2 = v_lhash_kv_config(short_1,int_2,char_1);

	float_1 = v_lhash_kv_open(char_2,unsigned_int_1);

	short_2 = v_lhInitCursor(long_1);

	float_2 = v_lhCursorSeek(unsigned_int_1,char_3,int_1,int_2);

	float_3 = v_lhCursorFirst(int_1);

	char_4 = v_lhCursorNext(short_3);

	unsigned_int_2 = v_lhCursorPrev(float_3);

	v_lhCursorDelete(long_2);

	long_3 = v_lhCursorKeyLength(char_2,int_3);

	float_1 = v_lhCursorReset(int_4);

	int_2 = int_2 + int_1;
	return long_1;
	v_lhash_kv_init(char_3,int_2);

	double_1 = v_lhash_kv_replace(double_3,char_4,int_2,short_2,char_1);

	short_3 = v_lhash_kv_append(long_4,char_1,int_4,short_4,char_5);

	long_3 = v_lhCursorLast(char_3);

	char_3 = v_lhCursorValid(short_2);

	v_lhCursorKey(unsigned_int_2,float_4,unsigned_int_1);

	char_2 = v_lhCursorDataLength(short_2,double_2);

	short_1 = v_lhCursorData(long_2,long_4,char_3);

}
short v_MemHashCursorReset( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	return short_1;
}
int v_MemHashCursorData( float parameter_1,unsigned int parameter_2,char parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short_1 = short_1 + short_1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	return int_1;
}
int v_MemHashCursorDataLength( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	int_1 = int_2;
	return int_3;
}
long v_MemHashCursorKey( double parameter_1,char parameter_2,char parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ">") > 0)
	{
	}
	double_3 = double_1 + double_2;
	return long_1;
}
long v_MemHashCursorKeyLength( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	return long_2;
}
char v_MemHashUnlinkRecord( short parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_2 = char_1 * char_1;
	char_3 = char_1 * char_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		double_1 = v_SyMemBackendFree(char_3);

		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	}
	double_2 = double_3;
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "9") < 0)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	}
	float_4 = float_3 * float_4;
	int_1 = int_1 + int_1;
	long_2 = long_1 + long_2;
	return char_3;
}
double v_MemHashCursorDelete( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double_3 = double_1 * double_2;
	int_1 = int_1;
	if(1)
	{
	}
	char_1 = v_MemHashUnlinkRecord(short_1,double_4);

	short_2 = short_2;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return double_5;
}
short v_MemHashCursorPrev( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	int_2 = int_1;
	return short_1;
}
double v_MemHashCursorNext( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	int_1 = int_3 + int_2;
	return double_1;
}
long v_MemHashCursorValid( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	return long_1;
}
short v_MemHashCursorLast( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = char_1 * char_2;
	short_2 = short_1 + short_2;
	int_2 = int_1 * int_1;
	return short_1;
}
unsigned int v_MemHashCursorFirst( char parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1 * char_1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return unsigned_int_2;
}
unsigned int v_MemHashCursorSeek( double parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_1 = v_MemHashGetEntry(char_1,double_3,int_1);

	short_3 = short_1 + short_2;
	if(1)
	{
		if(1)
		{
		}
	}
	return unsigned_int_2;
}
char v_MemHashInitCursor( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	float_2 = float_1 * float_2;
	char_1 = char_1 * char_1;
	double_2 = double_1 + double_1;
	return char_2;
}
char v_MemHashAppend( char parameter_1,char parameter_2,int parameter_3,int parameter_4,long parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	char_1 = char_2;
	int_2 = int_1 * int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	float_1 = float_1 + float_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		if(1)
		{
		}
		long_1 = long_1 * long_1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		}
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		v_MemHashGrowTable(double_1);

		short_2 = short_1 + short_1;
		unsigned_int_3 = v_SyMemcpy(long_1,unsigned_int_2);

		double_2 = double_2 * double_2;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
		long_2 = long_2 * long_2;
		if(1)
		{
			short short_3 = 1;
			char_1 = v_MemHashLinkRecord(double_3,unsigned_int_2);

			short_3 = short_2 + short_3;
		}
		unsigned_int_5 = unsigned_int_5;
		int_2 = v_SyMemBackendRealloc(double_3,unsigned_int_4,-1 );

		float_2 = float_1 * float_1;
		if(1)
		{
		}
		short_1 = short_2 + short_1;
		v_MemHashNewRecord(int_3,float_1,int_1,double_3,unsigned_int_6,long_3);

		float_4 = float_1 + float_3;
		char_1 = v_MemHashGetEntry(char_1,double_2,int_3);

		float_3 = float_1 + float_2;
	}
	return char_1;
}
void v_MemHashGrowTable( double parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	long long_2 = 1;
	int int_8 = 1;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_2;
	char_3 = char_2 * char_3;
	double_2 = double_1 + double_1;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	float_4 = float_3 + float_3;
	double_4 = double_3 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		long long_1 = 1;
		int int_3 = 1;
		char char_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_7 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_6 = 1;
		double double_6 = 1;
		if(1)
		{
			double_2 = double_2 + double_1;
		}
		float_3 = float_2;
		double_5 = double_1 * double_5;
		char_2 = char_2 * char_3;
		if(1)
		{
			char_3 = char_2 * char_2;
		}
		long_1 = long_1 + long_1;
		char_3 = char_2 * char_1;
		int_5 = int_3 + int_4;
		if(1)
		{
			double_4 = v_SyMemBackendFree(char_4);

			int_5 = int_5 + int_5;
		}
		float_1 = float_1;
		char_2 = char_5 * char_4;
		short_3 = short_1 + short_2;
		if(1)
		{
			float float_5 = 1;
			float_5 = float_2 + float_5;
		}
		int_4 = int_2 + int_3;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		unsigned_int_2 = unsigned_int_1;
		if(1)
		{
			char_6 = char_6 + char_7;
		}
		char_7 = char_4;
		char_2 = char_1 + char_5;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
		if(1)
		{
			short_2 = short_2;
		}
		int_5 = int_6 * int_1;
		double_6 = double_3;
		int_6 = int_3 * int_4;
		if(1)
		{
			int_2 = int_6 * int_4;
		}
		int_4 = int_6 + int_2;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
		int_4 = v_SyMemBackendAlloc(unsigned_int_1,short_4);

		char_1 = char_2 * char_4;
		if(1)
		{
			int int_7 = 1;
			int_7 = int_3;
		}
		long_2 = long_2 * long_1;
		double_5 = double_5 * double_6;
		int_5 = int_1;
	}
	long_2 = long_2 * long_2;
	char_3 = char_6 * char_3;
	int_5 = int_8 * int_8;
	unsigned_int_5 = v_SyZero(double_4);

}
char v_MemHashLinkRecord( double parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	short_3 = short_3 * short_1;
	if(1)
	{
		short_2 = short_3;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	int_2 = int_1 + int_1;
	return char_1;
}
void v_MemHashNewRecord( int parameter_1,float parameter_2,int parameter_3,double parameter_4,unsigned int parameter_5,long parameter_6)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	long long_3 = 1;
	float float_5 = 1;
	char char_3 = 1;
	int int_1 = 1;
	short_2 = short_1 + short_2;
	short_2 = short_2 + short_2;
	unsigned_int_1 = v_SyMemcpy(long_1,unsigned_int_1);

	double_1 = double_1 + double_1;
	long_1 = long_1;
	char_1 = char_2;
	double_1 = double_2 + double_3;
	short_1 = short_2;
	if(1)
	{
	}
	long_2 = long_2 + long_2;
	if(1)
	{
		short_3 = short_1;
	}
	float_1 = float_1 + float_2;
	char_1 = char_1 + char_1;
	float_3 = float_3 * float_2;
	float_2 = float_4 * float_1;
	double_3 = double_2 + double_4;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	short_3 = short_3 + short_3;
	short_3 = short_4 * short_3;
	long_3 = long_2;
	float_5 = float_4 + float_2;
	double_1 = v_SyMemBackendFree(char_3);

	unsigned_int_3 = v_SyZero(double_4);

	double_2 = double_2;
	int_1 = v_SyMemBackendAlloc(unsigned_int_1,short_1);

}
char v_MemHashGetEntry( char parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_3 = int_1 + int_2;
	int_3 = int_3 * int_1;
	char_1 = char_1 + char_1;
	double_1 = double_2;
	int_3 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	}
	return char_1;
}
char v_MemHashReplace( int parameter_1,short parameter_2,int parameter_3,double parameter_4,int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_6 = 1;
	char_1 = v_MemHashGetEntry(char_2,double_1,int_1);

	double_4 = double_2 * double_3;
	int_2 = v_SyMemBackendAlloc(unsigned_int_1,short_1);

	char_1 = char_3 * char_4;
	if(1)
	{
		char_5 = v_MemHashLinkRecord(double_3,unsigned_int_2);

		unsigned_int_2 = v_SyMemcpy(long_1,unsigned_int_3);

		int_1 = int_1 + int_2;
	}
	double_5 = double_6;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		char_3 = char_5 + char_1;
		if(1)
		{
		}
		short_3 = short_1 + short_2;
		if(1)
		{
			float float_2 = 1;
			v_MemHashNewRecord(int_3,float_1,int_2,double_1,unsigned_int_1,long_1);

			v_MemHashGrowTable(double_1);

			double_2 = v_SyMemBackendFree(char_6);

			float_1 = float_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int_3 = int_2 + int_3;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		}
		if(1)
		{
			int_1 = int_2 * int_4;
			if(1)
			{
			}
			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		}
		int_3 = int_4 * int_5;
		int_5 = int_1 + int_3;
		int_6 = int_4 + int_3;
	}
	return char_6;
}
unsigned int v_MemHashConfigure( char parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_1;
		if(1)
		{
			int_2 = int_1 * int_1;
		}
	}
	long_2 = long_1 * long_1;
	int_2 = int_2 * int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	long_2 = long_3;
	long_1 = long_1 * long_4;
	return unsigned_int_1;
}
double v_MemBackendRelease( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_2 = long_1 * long_2;
	char_2 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_3 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		double_2 = double_1 + double_1;
		double_4 = double_1 * double_3;
		long_2 = long_2 * long_2;
		double_2 = double_4 + double_3;
		if(1)
		{
			long_3 = long_1 + long_3;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		double_4 = double_5 * double_5;
		int_1 = int_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			int_1 = int_2 * int_2;
		}
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		double_7 = double_6 * double_4;
		long_3 = long_1 + long_4;
		char_2 = char_1 + char_2;
		if(1)
		{
			double double_8 = 1;
			double_1 = double_3 * double_8;
		}
		int_2 = int_1 * int_1;
		long_3 = long_4;
		int_4 = int_1 + int_3;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		long_4 = long_1 + long_3;
	}
	int_4 = int_5 + int_6;
	short_2 = short_1 * short_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	return double_1;
}
short v_SyMemBackendRelease( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		if(1)
		{
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 * int_2;
		}
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		char_2 = char_1 + char_1;
		double_2 = v_MemBackendRelease(unsigned_int_2);

		short_1 = short_2;
	}
	return short_2;
}
void v_MemHashRelease( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_2;
	short_1 = v_SyMemBackendRelease(float_1);

	unsigned_int_1 = unsigned_int_1;
}
long v_MemHashFunc( double parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	double_1 = double_1;
	long_3 = long_1 + long_2;
	float_1 = float_1 + float_1;
	double_2 = double_2 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_5 = 1;
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 * int_2;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
		}
		unsigned_int_5 = unsigned_int_6 + unsigned_int_3;
		unsigned_int_1 = unsigned_int_4;
		if(1)
		{
			long_3 = long_2 * long_1;
		}
		char_2 = char_1 * char_2;
		int_2 = int_3 + int_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		float_3 = float_1 * float_2;
		int_4 = int_5;
	}
	return long_4;
}
int v_SyMemBackendInitFromParent( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		if(1)
		{
		}
		float_1 = float_1 * float_1;
	}
	short_1 = short_1 + short_2;
	short_1 = short_2 * short_2;
	short_2 = short_1 * short_1;
	unsigned_int_1 = v_SyZero(double_1);

	short_2 = short_1 + short_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int_1 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_3;
		if(1)
		{
		}
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 + long_2;
	}
	return int_1;
}
unsigned int v_MemHashInit( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	int_1 = v_SyMemBackendInitFromParent(unsigned_int_1,char_1);

	double_1 = double_1 + double_1;
	unsigned_int_2 = v_vedisExportMemBackend();

	short_1 = v_SyMemcmp(char_2,long_1,float_1);

	int_2 = int_2;
	if(1)
	{
		double_3 = double_2 + double_3;
	}
	char_1 = char_1;
	int_1 = int_2 * int_1;
	char_3 = char_2 + char_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		int_1 = v_SyMemBackendAlloc(unsigned_int_3,short_2);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_5;
	double_1 = double_2;
	return unsigned_int_3;
	long_2 = v_MemHashFunc(double_3,unsigned_int_3);

	unsigned_int_3 = v_SyZero(double_1);

}
char v_vedisExportMemKvStorage()
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_4 = 1;
	char char_3 = 1;
	float float_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	float float_3 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	double double_4 = 1;
	char char_7 = 1;
	float float_4 = 1;
	v_MemHashRelease(float_1);

	unsigned_int_1 = v_MemHashConfigure(char_1,int_1,int_1);

	char_1 = v_MemHashReplace(int_2,short_1,int_2,double_1,int_3);

	char_2 = v_MemHashInitCursor(double_2);

	unsigned_int_1 = v_MemHashCursorSeek(double_2,double_2,int_4,int_1);

	unsigned_int_1 = v_MemHashCursorFirst(char_3);

	int_4 = v_MemHashCursorDataLength(short_1,float_2);

	short_2 = v_MemHashCursorReset(char_3);

	long_2 = long_1 + long_1;
	return char_4;
	unsigned_int_1 = v_MemHashInit(float_3,int_1);

	char_5 = v_MemHashAppend(char_1,char_6,int_4,int_3,long_1);

	short_1 = v_MemHashCursorLast(unsigned_int_2);

	long_2 = v_MemHashCursorValid(long_1);

	double_3 = v_MemHashCursorNext(long_3);

	short_1 = v_MemHashCursorPrev(unsigned_int_3);

	double_3 = v_MemHashCursorDelete(long_2);

	long_3 = v_MemHashCursorKeyLength(short_1,int_5);

	long_3 = v_MemHashCursorKey(double_4,char_7,char_3);

	int_5 = v_MemHashCursorData(float_4,unsigned_int_3,char_6);

}
int v_SySetInit( double parameter_1,double parameter_2,long parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	double_1 = double_1 + double_1;
	long_2 = long_1 * long_1;
	int_1 = int_2;
	long_2 = long_2 + long_1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_3;
	return int_2;
}
int v_UnixUnmap(double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	long_3 = long_1 * long_2;
	return int_1;
}
void v_UnixMmap( long parameter_1,double parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long_2 = long_1 + long_2;
	float_1 = float_1;
	double_2 = double_1 + double_1;
	short_2 = short_1 + short_1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_2 * float_3;
	if(1)
	{
		float_2 = float_2;
	}
	if(1)
	{
		int int_3 = 1;
		double_4 = double_1 * double_3;
		int_3 = int_1 * int_2;
	}
	double_4 = double_3 + double_4;
}
char v_unixCurrentTime( unsigned int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_2;
	short_1 = short_1 + short_1;
	int_1 = int_3;
	double_3 = double_1 * double_2;
	float_1 = float_1;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_3 * double_4;
	}
	return char_1;
}
unsigned int v_unixSleep( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_2;
	double_3 = double_1 + double_2;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 + long_2;
	int_1 = int_1 + int_1;
	double_3 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	return unsigned_int_1;
}
char v_SyMemBackendDup( float parameter_1,unsigned int parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		if(1)
		{
		}
		double_4 = double_3 * double_4;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int_1 = v_SyMemBackendAlloc(unsigned_int_1,short_1);

		unsigned_int_1 = v_SyMemcpy(long_1,unsigned_int_2);

		float_3 = float_1 + float_2;
	}
	return char_1;
}
double v_BlobPrepareGrow( char parameter_1,short parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long_2 = long_1 * long_1;
	double_3 = double_1 * double_2;
	double_4 = double_1 + double_4;
	char controller4vul_2422[2];
	fgets(controller4vul_2422 ,2 ,stdin);
	if( strcmp( controller4vul_2422, "/") > 0)
	{
		char controller4vul_2423[3];
		fgets(controller4vul_2423 ,3 ,stdin);
		if( strcmp( controller4vul_2423, "}/") > 0)
		{
			long long_3 = 1;
			long_3 = long_1 + long_2;
			char controller4vul_2424[2];
			fgets(controller4vul_2424 ,2 ,stdin);
			if( strcmp( controller4vul_2424, "p") < 0)
			{
				int_1 = v_SyMemBackendRealloc(double_3,unsigned_int_1,uni_para);

			}
		}
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			int int_3 = 1;
			short short_1 = 1;
			float_2 = float_1 * float_1;
			if(1)
			{
			}
			int_3 = int_1 * int_2;
			short_1 = short_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			double_2 = double_1 * double_3;
		}
		double_1 = double_1;
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 + int_1;
	}
	long_2 = long_4;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_5 + long_1;
	return double_2;
}
long v_SyBlobAppend( int parameter_1,long parameter_2,short parameter_3,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double_1 = double_1;
	int_1 = int_1 + int_2;
	char controller4vul_2421[3];
	fgets(controller4vul_2421 ,3 ,stdin);
	if( strcmp( controller4vul_2421, ";[") < 0)
	{
		double_2 = v_BlobPrepareGrow(char_1,short_1,uni_para);

	}
	int_2 = int_2 + int_2;
	if(1)
	{
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_6 = 1;
		short_3 = short_2 * short_3;
		int_5 = int_3 * int_4;
		unsigned_int_1 = unsigned_int_2;
		int_3 = int_5 + int_6;
	}
	return long_1;
}
short v_FormatConsumer( int parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	long_2 = long_1 * long_2;
	long_1 = v_SyBlobAppend(int_1,long_3,short_1,-1 );

	char_1 = char_1 + char_1;
	char_2 = char_2 + char_1;
	int_1 = int_1 + int_1;
	char_1 = char_2;
	float_1 = float_1 + float_1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2;
	long_2 = long_3 * long_4;
	return short_1;
}
void v_getdigit( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long_2 = long_1 * long_1;
	double_1 = double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_2;
}
void v_InternFormat( short parameter_1,double parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int int_5 = 1;
	unsigned_int_1 = v_SyStrlen(float_1);

	short_1 = short_1 + short_2;
	v_getdigit(double_1,int_1);

	int_3 = int_2 * int_2;
	if(1)
	{
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int_3 = int_4 + int_4;
		long_2 = long_1 * long_1;
	}
	double_1 = double_2 + double_2;
	int_5 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
short v_FormatMount( long parameter_1,float parameter_3,int parameter_5,unsigned int parameter_6,char parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 + long_2;
	double_2 = double_1 * double_1;
	v_InternFormat(short_1,double_3,char_1);

	short_1 = v_FormatConsumer(int_1,unsigned_int_2);

	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_2 + short_2;
	}
	if(1)
	{
		if(1)
		{
		}
		int_2 = int_1;
	}
	unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_5;
	int_3 = int_2 * int_3;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_4 = int_4 + int_5;
	}
	return short_3;
}
void v_SyBlobInitFromBuf( short parameter_1,unsigned int parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
		if(1)
		{
		}
		int_1 = int_1 + int_1;
	}
	long_1 = long_1 * long_1;
	int_1 = int_1 + int_2;
	float_2 = float_1 * float_1;
	char_2 = char_1 * char_1;
}
void v_SyBufferFormat( char parameter_1,short parameter_2,float parameter_3,double parameter_4)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double_1 = double_1 + double_1;
	short_2 = short_1 + short_1;
	v_SyBlobInitFromBuf(short_3,unsigned_int_1);

	double_3 = double_2 * double_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
		}
		short_3 = short_4 * short_3;
	}
	long_1 = long_2;
	long_1 = v_SyBlobAppend(int_1,long_2,short_3,-1 );

	long_3 = long_1 + long_2;
	double_3 = double_2 * double_4;
	short_4 = v_FormatMount(long_2,float_1,int_2,unsigned_int_1,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_5 = double_3 + double_1;
}
short v_unixFullPathname( short parameter_1,long parameter_2,int parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_4 = 1;
	if(1)
	{
		int int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
		v_SyBufferFormat(char_1,short_1,float_1,double_1);

		int_1 = int_1 * int_1;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned_int_2 = v_SyStrlen(float_1);

		char_3 = char_2 * char_2;
		short_1 = short_2 * short_1;
		if(1)
		{
		}
		double_2 = double_2 + double_3;
		unsigned_int_2 = v_Systrcpy(char_1,long_1,char_4,unsigned_int_2);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	return short_2;
}
double v_unixAccess( long parameter_1,long parameter_2,int parameter_3,int parameter_4)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	short_1 = short_1 + short_1;
	int_1 = int_1;
	double_2 = double_1 * double_1;
	float_2 = float_1 * float_1;
	int_1 = int_2 * int_2;
	double_2 = double_3 + double_1;
	long_1 = long_1 + long_1;
	int_3 = int_2 + int_2;
	int_1 = int_3;
	unsigned_int_1 = unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "[") < 0)
	{
		int_2 = int_3;
		if(1)
		{
			float_1 = float_1;
		}
	}
	return double_4;
}
long v_unixDelete( int parameter_1,short parameter_2,int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2;
		short_1 = v_openDirectory(int_2,int_1);

		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_1 = char_2;
			}
			if(1)
			{
				short short_2 = 1;
				short_2 = short_1 + short_1;
			}
		}
	}
	return long_1;
}
float v_MemBackendFree( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			}
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			double_2 = double_1 + double_1;
			int_2 = int_1 * int_1;
		}
	}
	return float_1;
}
double v_SyMemBackendFree( char parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float_1 = v_MemBackendFree(short_1);

	long_2 = long_1 * long_1;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_2;
		}
		float_2 = float_2 * float_3;
	}
	if(1)
	{
		long long_3 = 1;
		long_2 = long_3 + long_1;
	}
	return double_1;
}
double v_vedis_free()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned_int_1 = v_vedisExportMemBackend();

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	double_1 = v_SyMemBackendFree(char_1);

	int_2 = int_1 + int_2;
	return double_2;
}
unsigned int v_SyMemcpy( long parameter_1,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return unsigned_int_1;
}
short v_SyMemcmp( char parameter_1,long parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	float_1 = float_2 + float_3;
	return short_1;
}
short v_findInodeInfo( char parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = v_SyMemcmp(char_1,long_1,float_1);

	char_2 = char_1 + char_2;
	char_4 = char_3 + char_3;
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		char_4 = char_2 * char_1;
	}
	if(1)
	{
		int int_2 = 1;
		unsigned_int_1 = v_vedis_malloc(short_1);

		int_2 = int_1 + int_2;
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_3 = double_1 + double_2;
		}
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 * long_1;
		}
		unsigned_int_1 = v_SyMemcpy(long_1,unsigned_int_2);

		int_1 = int_1;
	}
	return short_2;
	unsigned_int_1 = v_SyZero(double_3);

}
unsigned int v_fillInUnixFile( int parameter_1,int parameter_2,int parameter_3,float parameter_4,char parameter_5,int parameter_6,int parameter_7)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_1 * int_1;
	long_2 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3;
	long_3 = long_2 * long_3;
	long_5 = long_2 * long_4;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_3 = double_2 + double_1;
	short_1 = v_findInodeInfo(char_1,unsigned_int_5);

	short_1 = short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_6;
	double_1 = double_1;
	if(1)
	{
		unsigned_int_6 = unsigned_int_6 * unsigned_int_3;
		long_1 = v_unixEnterMutex();

		double_3 = double_2;
	}
	char_3 = char_2 * char_1;
	long_1 = long_4 * long_2;
	if(1)
	{
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			v_unixLeaveMutex();

			short_2 = short_2 + short_3;
		}
		if(1)
		{
			char char_4 = 1;
			char_3 = char_1 * char_4;
		}
	}
	if(1)
	{
		long long_6 = 1;
		long long_7 = 1;
		long_7 = long_6 + long_6;
	}
	return unsigned_int_5;
}
unsigned int v_SyStrlen( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_2 = char_1 + char_2;
	if(1)
	{
		if(1)
		{
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			double double_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			if(1)
			{
				double_1 = double_2;
			}
			char_3 = char_1 + char_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
			unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
			if(1)
			{
				double_2 = double_2 * double_2;
			}
			unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
			}
			double_1 = double_3 * double_4;
		}
	}
	return unsigned_int_3;
}
unsigned int v_Systrcpy( char parameter_1,long parameter_2,char parameter_3,unsigned int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			long long_1 = 1;
			long_2 = long_1 * long_2;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_4 = 1;
		long long_4 = 1;
		if(1)
		{
			char_2 = char_1 * char_1;
		}
		long_2 = long_3 * long_2;
		float_2 = float_1 * float_2;
		float_1 = float_3 * float_3;
		short_2 = short_1 * short_1;
		if(1)
		{
			double double_1 = 1;
			double_2 = double_1 * double_1;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_3 = int_1 + int_2;
		unsigned_int_3 = unsigned_int_2;
		short_1 = short_2 * short_1;
		if(1)
		{
			double double_3 = 1;
			double_4 = double_2 + double_3;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
		unsigned_int_2 = v_SyStrlen(float_4);

		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2;
		}
		double_4 = double_4 + double_2;
		unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
		int_4 = int_3 * int_4;
		long_4 = long_3 + long_2;
	}
	unsigned_int_7 = unsigned_int_1 * unsigned_int_7;
	return unsigned_int_3;
}
short v_openDirectory( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	short short_3 = 1;
	double_1 = double_1 * double_2;
	char_2 = char_1 + char_1;
	double_2 = double_3 * double_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		double double_4 = 1;
		short short_1 = 1;
		double_3 = double_4 * double_2;
		short_1 = short_1 * short_1;
		if(1)
		{
			short short_2 = 1;
			unsigned_int_2 = v_Systrcpy(char_3,long_1,char_1,unsigned_int_3);

			short_1 = short_1 * short_2;
		}
	}
	double_1 = double_1;
	double_2 = double_2 * double_2;
	return short_3;
}
char v_findCreateFileMode( short parameter_1,int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_3 = int_1 * int_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "6@") < 0)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	return char_1;
}
int v_SyMemBackendAlloc( unsigned int parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char_1 = char_1 * char_2;
	if(1)
	{
		long long_1 = 1;
		long long_3 = 1;
		if(1)
		{
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			v_MemBackendAlloc(float_1,unsigned_int_1,-1 );

			double_2 = double_1 + double_1;
		}
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		long_2 = long_2 + long_2;
	}
	return int_1;
}
unsigned int v_vedisExportMemBackend()
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
unsigned int v_vedis_malloc( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = v_vedisExportMemBackend();

	int_1 = v_SyMemBackendAlloc(unsigned_int_2,short_1);

	double_2 = double_1 * double_1;
	int_3 = int_1 + int_2;
	long_3 = long_1 + long_2;
	short_1 = short_1;
	return unsigned_int_2;
}
void v_unixLeaveMutex()
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		int_1 = int_1;
	}
}
long v_unixEnterMutex()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float_3 = float_1 * float_2;
		short_3 = short_1 + short_2;
	}
	return long_1;
}
double v_findReusableFd( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int_1 = int_1;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	if(1)
	{
		double_2 = double_3 + double_2;
	}
	if(1)
	{
		double_4 = double_4 + double_4;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int_1 = int_2 * int_3;
	}
	if(1)
	{
		float float_1 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		int_3 = int_3 + int_2;
	}
	if(1)
	{
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		short_2 = short_2;
	}
	long_2 = long_1 + long_1;
	long_3 = v_unixEnterMutex();

	char_2 = char_2 + char_1;
	unsigned_int_4 = unsigned_int_3;
	double_5 = double_5 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_1 = int_2 * int_2;
	}
	int_3 = int_4 + int_3;
	short_1 = short_1 * short_2;
	double_3 = double_2;
	double_2 = double_5 * double_2;
	v_unixLeaveMutex();

	short_4 = short_3 + short_3;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_7;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	int_5 = int_3 * int_3;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_6 = unsigned_int_7 + unsigned_int_2;
	int_1 = int_5 + int_3;
	if(1)
	{
		short short_5 = 1;
		short_1 = short_4 + short_5;
	}
	if(1)
	{
		short short_6 = 1;
		short_4 = short_6 + short_3;
	}
	char_3 = char_2 + char_2;
	if(1)
	{
		long long_4 = 1;
		long_3 = long_4 + long_2;
	}
	double_3 = double_1;
	short_3 = short_4;
	unsigned_int_3 = unsigned_int_8 + unsigned_int_7;
	double_4 = double_5;
	float_3 = float_4 * float_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_7;
	}
	if(1)
	{
		double double_6 = 1;
		double_6 = double_1 + double_4;
	}
	int_4 = int_4 * int_4;
	float_5 = float_5 * float_2;
	if(1)
	{
		int int_6 = 1;
		int_4 = int_6;
	}
	if(1)
	{
		int_1 = int_1;
	}
	float_6 = float_6 + float_4;
	return double_3;
}
long v_unixOpen( char parameter_1,int parameter_2,double parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	int int_1 = 1;
	long long_4 = 1;
	char char_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_6 = 1;
	int int_5 = 1;
	double_2 = double_1 * double_1;
	float_1 = float_1;
	double_1 = double_1 + double_3;
	float_3 = float_2 * float_3;
	short_1 = short_1 * short_1;
	float_4 = float_3 * float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1 * short_1;
	char_2 = char_1 * char_2;
	short_3 = short_1 + short_2;
	float_6 = float_2 * float_5;
	double_3 = double_4 * double_4;
	long_2 = long_1 * long_2;
	if(1)
	{
		double_3 = double_4 + double_4;
	}
	if(1)
	{
		double_1 = double_3 * double_2;
		if(1)
		{
		}
	}
	double_1 = v_vedis_free();

	long_2 = long_3;
	if(1)
	{
		double_3 = v_findReusableFd(char_3,int_1);

		float_2 = float_2;
	}
	if(1)
	{
		long_4 = long_1 + long_3;
	}
	if(1)
	{
		char_4 = char_3 * char_1;
	}
	if(1)
	{
		short_3 = short_4 + short_5;
	}
	double_3 = double_4 * double_4;
	if(1)
	{
		unsigned_int_1 = v_SyZero(double_2);

		long_5 = long_1;
		short_4 = short_5 + short_3;
		if(1)
		{
		}
		char_3 = char_1 * char_3;
		if(1)
		{
			unsigned_int_3 = v_vedis_malloc(short_5);

			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
			unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
		}
	}
	if(1)
	{
		short_5 = short_5 + short_1;
		long_3 = long_2 * long_6;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	}
	if(1)
	{
		long long_7 = 1;
		unsigned_int_3 = v_fillInUnixFile(int_2,int_3,int_4,float_4,char_3,int_3,int_3);

		long_4 = long_7 * long_5;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		}
	}
	char_4 = v_findCreateFileMode(short_6,int_2,float_1);

	float_2 = float_4 * float_4;
	int_5 = int_1 * int_3;
	if(1)
	{
		double double_5 = 1;
		double_5 = double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		int_1 = int_5 * int_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
		}
		short_3 = v_openDirectory(int_5,int_3);

		unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
	}
	if(1)
	{
		float float_7 = 1;
		float_5 = float_7;
	}
	long_6 = long_3;
	if(1)
	{
		short short_7 = 1;
		short_7 = short_3;
	}
	return long_2;
}
void v_vedisExportBuiltinVfs()
{
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_2 = 1;
	int int_6 = 1;
	long_1 = v_unixDelete(int_1,short_1,int_2);

	double_1 = v_unixAccess(long_2,long_1,int_3,int_2);

	unsigned_int_1 = v_unixSleep(int_2,int_1);

	char_1 = v_unixCurrentTime(unsigned_int_1,long_1);

	v_UnixMmap(long_3,double_1);

	int_4 = v_UnixUnmap(double_1);

	int_5 = int_3 * int_3;
	long_1 = v_unixOpen(char_2,int_3,double_1,char_1);

	short_1 = v_unixFullPathname(short_1,long_1,int_6,char_2);

}
int v_SyMemBackendInitFromOthers( char parameter_1,int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
		}
		if(1)
		{
		}
		short_1 = short_1 + short_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		char char_1 = 1;
		unsigned_int_3 = v_SyZero(double_1);

		char_1 = char_1;
	}
	return int_1;
}
unsigned int v_SyZero(double parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		double double_4 = 1;
		int int_5 = 1;
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		if(1)
		{
			int int_2 = 1;
			int_2 = int_1;
		}
		double_1 = double_1 + double_2;
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			int int_3 = 1;
			int_3 = int_4;
		}
		int_1 = int_1;
		double_2 = double_1 * double_2;
		if(1)
		{
			double double_3 = 1;
			double_2 = double_3 * double_4;
		}
		int_5 = int_4 + int_1;
		float_1 = float_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		}
		double_4 = double_2 * double_2;
		short_3 = short_1 * short_2;
	}
	return unsigned_int_3;
}
short v_SyMemBackendInit( float parameter_1,short parameter_2)
{
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	short short_1 = 1;
	if(1)
	{
		double double_1 = 1;
		if(1)
		{
		}
		double_2 = double_1 + double_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = v_SyZero(double_2);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	double_3 = double_2 * double_2;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	}
	return short_1;
}
void v_MemBackendAlloc( float parameter_1,unsigned int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_4 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_1 + char_2;
	int_1 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_3 * char_2;
		char controller4vul_2429[2];
		fgets(controller4vul_2429 ,2 ,stdin);
		if( strcmp( controller4vul_2429, "_") > 0)
		{
			float float_1 = 1;
			float float_2 = 1;
			if(uni_para == 149)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			float_1 = float_1 + float_2;
		}
		int_2 = int_1 + int_2;
	}
	if(1)
	{
	}
	int_2 = int_2 * int_2;
	double_3 = double_1 * double_2;
	if(1)
	{
		int_2 = int_1;
	}
	char_4 = char_3 * char_3;
}
short v_MemBackendRealloc( double parameter_1,long parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 + short_1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	char controller4vul_2427[2];
	fgets(controller4vul_2427 ,2 ,stdin);
	if( strcmp( controller4vul_2427, "]") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		char controller4vul_2428[3];
		fgets(controller4vul_2428 ,3 ,stdin);
		if( strcmp( controller4vul_2428, "2k") < 0)
		{
			v_MemBackendAlloc(float_1,unsigned_int_1,uni_para);

		}
		long_1 = long_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_2 = int_1 * int_2;
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_2 * float_3;
		}
		double_1 = double_1 + double_2;
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_3;
		}
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_3 = int_4;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_3;
		}
	}
	return short_1;
}
int v_SyMemBackendRealloc( double parameter_1,unsigned int parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long_2 = long_1 + long_1;
	char controller4vul_2425[3];
	fgets(controller4vul_2425 ,3 ,stdin);
	if( strcmp( controller4vul_2425, ";K") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		char controller4vul_2426[3];
		fgets(controller4vul_2426 ,3 ,stdin);
		if( strcmp( controller4vul_2426, "9@") > 0)
		{
			short_1 = v_MemBackendRealloc(double_1,long_1,uni_para);

		}
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "n]") > 0)
		{
			double double_2 = 1;
			double_2 = double_1 + double_1;
		}
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 + double_3;
	}
	return int_1;
}
unsigned int v_SySetPut( double parameter_1,short parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	int_1 = v_SyMemBackendRealloc(double_1,unsigned_int_1,-1 );

	char_1 = char_1 + char_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
		}
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_2 + int_1;
		}
		int_4 = int_4 + int_1;
		if(1)
		{
		}
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
	}
	char_1 = char_2 + char_1;
	double_2 = double_1 + double_2;
	char_1 = char_1 + char_1;
	return unsigned_int_5;
}
char v_vedisCoreConfigure( int parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	int int_3 = 1;
	char char_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_6 = 1;
	short short_2 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	short short_3 = 1;
	int int_7 = 1;
	float float_3 = 1;
	int_1 = int_1 + int_2;
	char_1 = char_1 * char_2;
	if(1)
	{
		if(1)
		{
			int_1 = int_1 + int_1;
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
	float_1 = float_1 + float_2;
	char_4 = char_3 + char_3;
	if(1)
	{
		double_1 = double_4 + double_2;
		float_1 = float_1 * float_2;
	}
	double_2 = double_4 + double_2;
	char_1 = char_3 * char_3;
	double_1 = double_4;
	if(1)
	{
		int_3 = int_1 * int_2;
	}
	char_1 = char_2 + char_5;
	int_2 = int_1 + int_4;
	unsigned_int_1 = unsigned_int_1;
	double_4 = double_5 * double_2;
	if(1)
	{
		unsigned_int_2 = v_SySetPut(double_3,short_1);

		double_5 = double_5 + double_6;
	}
	if(1)
	{
		short_1 = short_2;
	}
	int_4 = v_SyMemBackendInitFromOthers(char_2,int_4,float_1);

	char_3 = char_2 + char_3;
	char_3 = char_4 * char_6;
	double_2 = double_3 * double_6;
	float_1 = float_2 * float_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	double_5 = double_1 + double_6;
	if(1)
	{
		short_1 = short_2 + short_2;
	}
	if(1)
	{
		double double_7 = 1;
		if(1)
		{
			double_4 = double_4;
		}
		if(1)
		{
			double double_8 = 1;
			double_8 = double_7 + double_2;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			short_1 = short_1;
			if(1)
			{
				int_1 = int_1 * int_5;
			}
			unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 + long_2;
			if(1)
			{
				char char_7 = 1;
				char_4 = char_7 + char_6;
			}
		}
		double_7 = double_4 + double_6;
	}
	if(1)
	{
		int int_6 = 1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_5;
		}
		float_1 = float_2 + float_1;
		int_5 = int_6 * int_2;
	}
	unsigned_int_5 = unsigned_int_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_6 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		short_2 = short_1;
	}
	long_2 = long_3 + long_3;
	if(1)
	{
		int_3 = int_1 * int_1;
	}
	short_3 = v_SyMemBackendInit(float_2,short_1);

	int_3 = int_7 * int_2;
	float_1 = float_3 + float_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	return char_3;
}
int v_vedis_lib_config( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	float_1 = float_2;
	char_1 = v_vedisCoreConfigure(int_1,double_1);

	long_1 = long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "7+") > 0)
	{
	}
	int_1 = int_2 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_3;
	return int_1;
}
double v_vedisCoreInitialize()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	int_1 = int_1 * int_1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			short short_2 = 1;
			short_2 = short_1 * short_2;
			if(1)
			{
				long_1 = v_vedisExportDiskKvStorage();

				int_3 = int_1 * int_2;
				if(1)
				{
				}
				unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
				if(1)
				{
				}
			}
			int_2 = int_3;
			if(1)
			{
			}
		}
		char_1 = char_1;
	}
	short_1 = short_1 + short_1;
	if(1)
	{
		float float_1 = 1;
		double double_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		char char_6 = 1;
		char char_7 = 1;
		double double_4 = 1;
		int int_6 = 1;
		float float_2 = 1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
			if(1)
			{
				char char_2 = 1;
				char_2 = char_1 + char_2;
			}
		}
		if(1)
		{
			if(1)
			{
				char_3 = v_vedisExportMemKvStorage();

				int_3 = int_1 + int_4;
				if(1)
				{
					float_1 = float_1 * float_1;
				}
			}
			char_1 = char_3 + char_1;
		}
		if(1)
		{
			double_3 = double_1 + double_2;
		}
		int_4 = v_vedis_lib_config(int_1,int_5);

		int_2 = v_SySetInit(double_2,double_2,long_2);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		char_1 = char_4 + char_5;
		char_7 = char_6 + char_4;
		double_3 = double_4;
		float_1 = float_1 * float_1;
		if(1)
		{
			short short_3 = 1;
			v_vedisExportBuiltinVfs();

			short_3 = short_1 * short_1;
		}
		int_3 = int_6;
		float_2 = float_1 * float_1;
		if(1)
		{
		}
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			float_4 = float_3 * float_1;
		}
	}
	return double_2;
}
int v_vedis_open( short parameter_1,char parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	int int_5 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_6 = 1;
	long_1 = long_1 + long_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		if(1)
		{
		}
		char_1 = char_1 + char_1;
	}
	int_2 = int_1 * int_4;
	if(1)
	{
	}
	long_1 = long_2 + long_1;
	if(1)
	{
	}
	int_2 = int_4 * int_1;
	char_2 = char_1 * char_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	int_2 = int_3 * int_3;
	char_3 = char_3 * char_2;
	int_3 = int_5 + int_2;
	char controller4vul_2392[3];
	fgets(controller4vul_2392 ,3 ,stdin);
	if( strcmp( controller4vul_2392, "l.") < 0)
	{
		char controller4vul_2393[2];
		fgets(controller4vul_2393 ,2 ,stdin);
		if( strcmp( controller4vul_2393, "Y") > 0)
		{
			long_1 = long_2 + long_2;
			char controller4vul_2394[3];
			fgets(controller4vul_2394 ,3 ,stdin);
			if( strcmp( controller4vul_2394, "nT") > 0)
			{
				double double_2 = 1;
				float_1 = v_vedisInitDatabase(int_3,double_1,long_3,unsigned_int_3,uni_para);

				double_2 = double_2;
				long_2 = long_1 * long_3;
			}
		}
		if(1)
		{
			char_2 = char_3 + char_3;
		}
	}
	char_3 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_1;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	float_2 = float_1 + float_1;
	short_1 = short_1;
	double_1 = double_3 + double_4;
	return int_6;
}
int main()
{
	int uni_para =149;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_2;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	double_3 = double_2 + double_1;
	char_1 = char_1 * char_1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		long_1 = long_1;
		char_1 = char_1 * char_1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 * float_2;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		}
		char_3 = char_2 * char_3;
		char controller4vul_2390[3];
		fgets(controller4vul_2390 ,3 ,stdin);
		if( strcmp( controller4vul_2390, "8r") < 0)
		{
			unsigned int unsigned_int_4 = 1;
			double double_4 = 1;
			int_2 = int_2 + int_2;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
			double_1 = double_4 * double_1;
			char controller4vul_2391[3];
			fgets(controller4vul_2391 ,3 ,stdin);
			if( strcmp( controller4vul_2391, "6I") > 0)
			{
				long long_2 = 1;
				int_2 = v_vedis_open(short_1,char_2,uni_para);

				long_1 = long_2 + long_2;
			}
			if(1)
			{
				int_1 = int_1;
			}
		}
	}
	double_3 = double_1;
	return int_1;
}

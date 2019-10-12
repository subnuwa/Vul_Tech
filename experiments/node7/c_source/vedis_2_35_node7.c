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

double v_vedisRemoveCommand( char parameter_1,long parameter_2);
int v_vedis_delete_command( int parameter_1,long parameter_2);
double v_vedisDeleteBuiltinCommands( float parameter_1);
int v_vedis_close( short parameter_1);
double v_vedisObjContainerDestroy( short parameter_1,int parameter_2);
void v_vedisReleaseContext( unsigned int parameter_1);
double v_vedisInitContext( short parameter_1,char parameter_2,char parameter_3);
char v_vedisExec( unsigned int parameter_1);
unsigned int v_SyLexRelease( long parameter_1);
void v_SyLexTokenizeInput( char parameter_1,double parameter_2,long parameter_3,double parameter_5,unsigned int parameter_6);
int v_vedisTokenizeInput( unsigned int parameter_1,short parameter_2);
void v_SyLexInit( short parameter_1,unsigned int parameter_2,short parameter_3);
short v_vedisTokenize( short parameter_1,double parameter_2,unsigned int parameter_3);
short v_vedisProcessInput( int parameter_1,char parameter_2,double parameter_3);
int v_vedis_exec( short parameter_1,unsigned int parameter_2,int parameter_3);
int v_isBlank( float parameter_1,unsigned int parameter_2);
void v_vedis_exit();
float v_VmJsonArrayEncode( double parameter_1);
int v_vedis_value_is_string( double parameter_1);
double v_SyStrIsNumeric( float parameter_1,long parameter_2,long parameter_3,long parameter_4);
void v_vedisMemObjIsNumeric();
int v_vedis_value_is_numeric( short parameter_1);
float v_MemObjBooleanValue( unsigned int parameter_1);
long v_vedisMemObjToBool( float parameter_1);
int v_vedis_value_to_bool( int parameter_1);
int v_vedis_value_is_bool( float parameter_1);
double v_VmJsonEncode( unsigned int parameter_1,char parameter_2);
float v_vedisJsonSerialize( double parameter_1,long parameter_2);
double v_MemObjStringValue( short parameter_1,int parameter_2);
long v_vedisMemObjToString( long parameter_1);
unsigned int v_vedis_value_to_string( int parameter_1,int parameter_2);
short v_array_render( long parameter_1);
void v_vedisHashmapWalk( short parameter_1,double parameter_2);
int v_vedis_array_walk( long parameter_1,int parameter_2);
int v_vedis_value_is_array( int parameter_1);
int v_vedis_value_is_null( unsigned int parameter_1);
long v_command_result_render( double parameter_1);
int v_vedisObjectValueDestroy( double parameter_1,char parameter_2);
short v_vedisHashmapRef( unsigned int parameter_1);
void v_vedisMemObjStore( long parameter_1,unsigned int parameter_2);
long v_SyStrToReal( short parameter_1,char parameter_2,long parameter_4);
double v_MemObjRealValue( float parameter_1);
float v_vedisMemObjToReal( double parameter_1);
double v_vedisMemObjRelease( char parameter_1);
unsigned int v_vedisHashmapRelease( float parameter_1);
short v_vedisHashmapUnref( char parameter_1);
float v_vedisHashmapCount( long parameter_1);
unsigned int v_SyStrToInt64( short parameter_1,char parameter_2,long parameter_4);
void v_SyOctalStrToInt64( int parameter_1,unsigned int parameter_2,short parameter_4);
int v_SyBinaryStrToInt64( unsigned int parameter_1,long parameter_2,int parameter_4);
int v_SyHexToint( short parameter_1);
unsigned int v_SyHexStrToInt64( unsigned int parameter_1,char parameter_2,float parameter_4);
long v_vedisTokenValueToInt64( long parameter_1);
double v_MemObjStringToInt();
int v_MemObjRealToInt();
char v_MemObjIntValue();
void v_vedisMemObjToInteger( double parameter_1);
int v_vedisMemObjInitFromString( int parameter_1,char parameter_2,short parameter_3);
short v_vedisNewObjectValue( int parameter_1,short parameter_2);
void v_SyBlobNullAppend( double parameter_1);
unsigned int v_vedisPagerSetCachesize( unsigned int parameter_1,int parameter_2);
short v_vedisConfigure( unsigned int parameter_1,int parameter_2,float parameter_3);
int v_vedis_config( char parameter_1,int parameter_2,int parameter_3);
long v_SySetRelease();
short v_vedisPagerClose( int parameter_1);
unsigned int v_pager_reset_state( char parameter_1,int parameter_2);
int v_vedisPagerRollback( double parameter_1,int parameter_2);
float v_vedisBitvecDestroy( float parameter_1);
long v_pager_commit_phase2( short parameter_1);
short v_pager_write_dirty_pages( char parameter_1,float parameter_2);
float v_page_merge_dirty( float parameter_1,long parameter_2);
unsigned int v_pager_get_dirty_pages( long parameter_1);
int v_pager_commit_phase1( float parameter_1);
double v_vedisPagerCommit( long parameter_1);
char v_vedisEngineRelease( unsigned int parameter_1);
unsigned int v_vedisCoreShutdown();
int v_vedis_lib_shutdown();
short v_Fatal( short parameter_1);
unsigned int v_SyBlobAppendBig32( short parameter_1,int parameter_2);
short v_SyBlobAppendBig16( double parameter_1,int parameter_2);
double v_SyBlobFormat( short parameter_1,unsigned int parameter_2,int parameter_3);
void v_vedisPagerGetKvEngine( long parameter_1);
unsigned int v_vedisTableSerialize( float parameter_1);
double v_vedisPagerisMemStore();
void v_vedisOnCommit();
int v_vedisPagerSetCommitCallback( float parameter_1,char parameter_2);
char v_SySetReset( short parameter_1);
double v_SyBinHash( int parameter_1,double parameter_2);
short v_vedisFetchCommand( unsigned int parameter_1,int parameter_2);
char v_vedisInstallCommand( unsigned int parameter_1,char parameter_2,double parameter_3);
int v_vedis_register_command( int parameter_1,char parameter_2,double parameter_3,int parameter_4,unsigned int parameter_5);
char v_vedisRegisterBuiltinCommands( char parameter_1);
char v_vedisMemObjInit( int parameter_1,unsigned int parameter_2);
double v_vedisInitCursor( double parameter_1,char parameter_2);
short v_vedisKvIoErr( short parameter_1,char parameter_2);
float v_vedisKvIoPageReload( long parameter_1,double parameter_2);
float v_vedisKvIoPageUnpin( short parameter_1,unsigned int parameter_2);
long v_vedisKvIoTempPage( long parameter_1);
unsigned int v_vedisKvIoReadOnly( float parameter_1);
float v_vedisKvIoPageSize( unsigned int parameter_1);
unsigned int v_page_unref( long parameter_1);
double v_vedisKvIoPageUnRef( float parameter_1);
unsigned int v_vedisKvIopage_ref( float parameter_1);
short v_vedisKvIoPageDontMakeHot( float parameter_1);
void v_vedisKvIoPageDontJournal( float parameter_1);
long v_vedisPagerDontWrite( float parameter_1);
void v_vedisKvIoPageDontWrite( int parameter_1);
short v_vedisBitvecSet( long parameter_1,long parameter_2);
float v_WriteInt64( double parameter_1,double parameter_2,int parameter_3);
void v_vedisBitvecTest( short parameter_1,char parameter_2);
int v_page_write( double parameter_1,char parameter_2);
float v_pager_release_page( long parameter_1,long parameter_2);
int v_pager_unlink_page( char parameter_1,float parameter_2);
int v_pager_write_hot_dirty_pages( long parameter_1,double parameter_2);
double v_page_merge_hot( short parameter_1,unsigned int parameter_2);
float v_pager_get_hot_pages( double parameter_1);
short v_WriteInt32( long parameter_1,char parameter_2,char parameter_3);
short v_vedisFinalizeJournal( double parameter_1,int parameter_2,int parameter_3);
long v_pager_dirty_commit();
int v_pager_write_journal_header( long parameter_1,short parameter_2);
unsigned int v_vedisOpenJournal( long parameter_1);
float v_SyTimeFormatToDos( float parameter_1,unsigned int parameter_2);
double v_pager_write_db_header( long parameter_1);
long v_pager_page_to_dirty_list( int parameter_1,long parameter_2);
double v_pager_create_header();
unsigned int v_vedisBitvecCreate( int parameter_1,float parameter_2);
long v_vedisPagerBegin( int parameter_1,int uni_para);
long v_vedisPageWrite( short parameter_1,int uni_para);
short v_vedisKvIopageWrite( long parameter_1,int uni_para);
unsigned int v_vedisKvIoNewPage( unsigned int parameter_1,char parameter_2);
int v_vedisKvIoPageLookup( int parameter_1,double parameter_2,int parameter_3);
float v_page_ref( float parameter_1);
char v_pager_link_page( unsigned int parameter_1,int parameter_2);
double v_pager_get_page_contents( long parameter_1,unsigned int parameter_2,int parameter_3);
unsigned int v_pager_alloc_page( int parameter_1,short parameter_2);
long v_vedisGetPageSize();
int v_vedisOsSectorSize( float parameter_1);
float v_GetSectorSize( short parameter_1);
void v_SyDosTimeFormat( char parameter_1,short parameter_2);
double v_pager_extract_header( unsigned int parameter_1,unsigned int parameter_2,char parameter_3);
long v_pager_read_db_header( int parameter_1);
short v_vedisOsCloseFree( double parameter_1,short parameter_2);
char v_pager_fetch_page( unsigned int parameter_1,long parameter_2);
int v_pager_fill_page( short parameter_1,short parameter_2);
int v_vedisOsWrite( long parameter_1,unsigned int parameter_2,char parameter_3,char parameter_4);
float v_pager_cksum( long parameter_1,long parameter_2);
unsigned int v_pager_play_back_one_page( float parameter_1,int parameter_2,char parameter_3);
double v_vedisOsTruncate( long parameter_1,long parameter_2);
void v_ReadInt64( float parameter_1,short parameter_2,unsigned int parameter_3);
short v_ReadInt32( int parameter_1,double parameter_2,double parameter_3);
float v_vedisOsRead( short parameter_1,short parameter_3,short parameter_4);
unsigned int v_pager_read_journal_header( unsigned int parameter_1,short parameter_2,long parameter_3);
int v_pager_playback( long parameter_1);
float v_vedisOsSync( int parameter_1,int parameter_2);
char v_vedisOsUnlock( long parameter_1,int parameter_2);
long v_pager_unlock_db( int parameter_1,int parameter_2);
void v_vedisOsDelete( short parameter_1,char parameter_2,int parameter_3);
double v_vedisOsFileSize( int parameter_1,short parameter_2);
long v_vedisOsCheckReservedLock( float parameter_1,int parameter_2);
char v_vedisOsAccess( char parameter_1,int parameter_2,int parameter_3,int parameter_4);
float v_pager_has_hot_journal( double parameter_1,int parameter_2);
void v_pager_journal_rollback( int parameter_1,int parameter_2);
int v_vedisOsLock( unsigned int parameter_1,int parameter_2);
char v_pager_lock_db( float parameter_1,int parameter_2);
double v_pager_wait_on_lock( int parameter_1,int parameter_2);
short v_SyBlobFormatAp( long parameter_1,int parameter_2,float parameter_3);
unsigned int v_vedisGenErrorFormat( double parameter_1,unsigned int parameter_2,short parameter_3);
float v_vedisOsOpen( double parameter_1,short parameter_2,long parameter_3,unsigned int parameter_4,double parameter_5);
unsigned int v_pager_shared_lock( unsigned int parameter_1,int uni_para);
void v_vedisPagerAcquire( long parameter_1,char parameter_2,float parameter_3,int parameter_4,int parameter_5);
double v_vedisKvIoPageGet( unsigned int parameter_1,char parameter_2,long parameter_3);
float v_pager_kv_io_init( unsigned int parameter_1,unsigned int parameter_2,long parameter_3,int uni_para);
short v_vedisGenOutofMem( char parameter_1);
unsigned int v_vedisReleaseCursor( unsigned int parameter_1,int parameter_2);
long v_pager_release_kv_engine();
unsigned int v_vedisPagerRegisterKvEngine( char parameter_1,short parameter_2,int uni_para);
void v_randomByte( long parameter_1);
double v_SyRandomness( unsigned int parameter_1,int parameter_3);
double v_SyOSUtilRandomSeed(float parameter_2);
long v_SyRandomnessInit( float parameter_1,float parameter_2);
short v_vedisGenError( int parameter_1,long parameter_2);
void v_vedisFindKVStore( double parameter_1,unsigned int parameter_2);
long v_SyStrnicmp( float parameter_1,double parameter_2,char parameter_3);
long v_vedisInMemory( double parameter_1);
char v_vedisPagerOpen( unsigned int parameter_1,char parameter_2,long parameter_3,int parameter_4,int uni_para);
long v_vedisSanityzeFlag( double parameter_1);
short v_vedisInitDatabase( unsigned int parameter_1,short parameter_2,int parameter_3,float parameter_4,int uni_para);
short v_lhCursorReset();
double v_lhCursorData( short parameter_1,int parameter_2,char parameter_3);
double v_lhCursorDataLength( int parameter_1,int parameter_2);
double v_lhCursorKey( double parameter_1,char parameter_2,long parameter_3);
long v_lhCursorKeyLength( short parameter_1,int parameter_2);
float v_lhRecordRemove( unsigned int parameter_1);
long v_lhCursorDelete( double parameter_1);
char v_lhCursorPrev( float parameter_1);
short v_lhCursorNext( unsigned int parameter_1);
long v_lhCursorValid( short parameter_1);
long v_lhCursorPrevPage();
char v_lhCursorLast();
int v_lhCursorNextPage( double parameter_1);
float v_lhCursorFirst( float parameter_1);
char v_lhRecordLookup( unsigned int parameter_1,int parameter_2,double parameter_3,float parameter_4);
double v_lhCursorSeek( float parameter_1,float parameter_2,int parameter_3,int parameter_4);
int v_lhInitCursor();
short v_lhash_kv_append( int parameter_1,int parameter_2,int parameter_3,int parameter_4,long parameter_5);
long v_lhRestorePage( int parameter_1,char parameter_2);
unsigned int v_lhRecordOverwrite( double parameter_1,double parameter_2,short parameter_3);
unsigned int v_lhMoveLocalCell( int parameter_1,char parameter_2,int parameter_3,float parameter_4);
double v_lhRecordAppend( short parameter_1,long parameter_2,double parameter_3);
char v_lhFindSibeling( float parameter_1);
void v_lhUnlinkCell( int parameter_1);
int v_lhConsumeCellData( int parameter_1,double parameter_2,unsigned int parameter_3);
void v_SyBlobReset( unsigned int parameter_1);
short v_SyBlobDup( int parameter_1,int parameter_2);
void v_lhTransferCell( long parameter_1,long parameter_2);
void v_lhPageSplit( short parameter_1,short parameter_2,short parameter_3,int parameter_4);
long v_lhSplit( float parameter_1,int parameter_2);
char v_lhRecordInstall( char parameter_1,short parameter_2,unsigned int parameter_3,short parameter_4,int parameter_5,long parameter_6);
long v_lhKeyCmp( char parameter_1,char parameter_2);
int v_lhFindCell( char parameter_1,short parameter_2,long parameter_3,unsigned int parameter_4);
double v_vedisDataConsumer( long parameter_1,char parameter_2);
unsigned int v_lhConsumeCellkey( double parameter_1,unsigned int parameter_2,double parameter_3,int parameter_6);
char v_lhParseOneCell( char parameter_1,unsigned int parameter_2,long parameter_3,long parameter_4);
char v_lhPageFreeSpace();
char v_lhLoadCells( short parameter_1);
double v_lhParsePageHeader( float parameter_1);
float v_lhLoadPage( unsigned int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5);
long v_lhMapWriteRecord( short parameter_1,double parameter_2,long parameter_3);
float v_lhCellWriteHeader( unsigned int parameter_1);
char v_lhCellWriteLocalPayload( short parameter_1,unsigned int parameter_2,short parameter_3,long parameter_4,long parameter_5);
short v_lhCellDiscard( char parameter_1);
unsigned int v_lhCellWriteOvflPayload( int parameter_1,float parameter_2,char parameter_3,float parameter_4);
char v_lhInstallCell();
unsigned int v_SyBlobInit( char parameter_1,long parameter_2);
double v_lhNewCell( short parameter_1,short parameter_2);
short v_lhRestoreSpace( long parameter_1,short parameter_2,int parameter_3);
unsigned int v_lhFindSlavePage( double parameter_1,unsigned int parameter_2,float parameter_3,long parameter_4);
unsigned int v_lhSlaveStore( char parameter_1,float parameter_2,double parameter_3,float parameter_4,unsigned int parameter_5,char parameter_6);
unsigned int v_lhPageDefragment( int parameter_1);
double v_SyBigEndianUnpack16( float parameter_1,double parameter_2);
long v_lhAllocateSpace( short parameter_1,char parameter_2,long parameter_3);
char v_lhStoreCell( long parameter_1,short parameter_2,char parameter_3,double parameter_4,char parameter_5,double parameter_6,int parameter_7);
void v_SyBigEndianPack16( long parameter_1,float parameter_2);
char v_lhSetEmptyPage( int parameter_1);
void v_lhNewPage( int parameter_1,short parameter_2,char parameter_3);
int v_lhAcquirePage( float parameter_1,float parameter_2);
void v_lhMapFindBucket( unsigned int parameter_1,short parameter_2);
char v_lh_record_insert( double parameter_1,float parameter_2,short parameter_3,char parameter_4,unsigned int parameter_5,int parameter_6);
unsigned int v_lhash_kv_replace( unsigned int parameter_1,long parameter_2,int parameter_3,short parameter_4,double parameter_5);
unsigned int v_MemPoolBucketAlloc( int parameter_1,unsigned int parameter_2);
unsigned int v_MemBackendPoolAlloc( short parameter_1,float parameter_2);
void v_SyMemBackendPoolAlloc( double parameter_1,float parameter_2);
int v_lhMapInstallBucket( float parameter_1,short parameter_2,double parameter_3);
int v_lhMapLoadPage( int parameter_1,short parameter_2,char parameter_3);
void v_SyBigEndianUnpack64( float parameter_1,char parameter_2);
long v_SyBigEndianUnpack32( short parameter_1,unsigned int parameter_2);
unsigned int v_lhash_read_header( char parameter_1,char parameter_2);
double v_SyBigEndianPack64( char parameter_1,double parameter_2);
unsigned int v_SyBigEndianPack32( float parameter_1,unsigned int parameter_2);
short v_lhash_write_header( short parameter_1,int parameter_2);
short v_lhash_kv_open( int parameter_1,char parameter_2);
long v_lhash_kv_config( float parameter_1,int parameter_2,short parameter_3);
long v_lhash_kv_release( int parameter_1);
short v_MemBackendPoolFree( long parameter_1);
long v_SyMemBackendPoolFree( short parameter_1);
short v_SyBlobRelease( long parameter_1);
int v_lhash_page_release();
unsigned int v_lhash_bin_hash( int parameter_1,double parameter_2);
char v_lhash_kv_init( double parameter_1,int parameter_2);
short v_vedisExportDiskKvStorage();
float v_MemHashCursorReset( float parameter_1);
unsigned int v_MemHashCursorData( int parameter_1,int parameter_2,int parameter_3);
short v_MemHashCursorDataLength( double parameter_1,short parameter_2);
char v_MemHashCursorKey( double parameter_1,long parameter_2,double parameter_3);
unsigned int v_MemHashCursorKeyLength( int parameter_1,int parameter_2);
double v_MemHashUnlinkRecord( unsigned int parameter_1,unsigned int parameter_2);
long v_MemHashCursorDelete( float parameter_1);
unsigned int v_MemHashCursorPrev( short parameter_1);
float v_MemHashCursorNext();
int v_MemHashCursorValid( double parameter_1);
float v_MemHashCursorLast( int parameter_1);
double v_MemHashCursorFirst( int parameter_1);
void v_MemHashCursorSeek( char parameter_1,short parameter_2,int parameter_3,int parameter_4);
short v_MemHashInitCursor( int parameter_1);
unsigned int v_MemHashAppend( float parameter_1,float parameter_2,int parameter_3,float parameter_4,int parameter_5);
char v_MemHashGrowTable( int parameter_1);
char v_MemHashLinkRecord( char parameter_1,short parameter_2);
void v_MemHashNewRecord( short parameter_1,int parameter_2,int parameter_3,double parameter_4,float parameter_5,char parameter_6);
double v_MemHashGetEntry( double parameter_1,unsigned int parameter_2,int parameter_3);
unsigned int v_MemHashReplace( char parameter_1,char parameter_2,int parameter_3,short parameter_4,long parameter_5);
float v_MemHashConfigure( long parameter_1,int parameter_2,int parameter_3);
long v_MemBackendRelease();
short v_SyMemBackendRelease( int parameter_1);
long v_MemHashRelease( int parameter_1);
double v_MemHashFunc( float parameter_1,unsigned int parameter_2);
float v_SyMemBackendInitFromParent( char parameter_1,char parameter_2);
int v_MemHashInit( unsigned int parameter_1,int parameter_2);
char v_vedisExportMemKvStorage();
unsigned int v_SySetInit( double parameter_1,int parameter_2,long parameter_3);
int v_UnixUnmap(unsigned int parameter_2);
long v_UnixMmap( double parameter_1,float parameter_3);
long v_unixCurrentTime( long parameter_1,int parameter_2);
short v_unixSleep( char parameter_1,int parameter_2);
float v_SyMemBackendDup( short parameter_1,int parameter_2,char parameter_3,int uni_para);
float v_BlobPrepareGrow( char parameter_1,long parameter_2,int uni_para);
int v_SyBlobAppend( char parameter_1,int parameter_2,float parameter_3,int uni_para);
short v_FormatConsumer( short parameter_1,int parameter_2,int uni_para);
void v_getdigit( long parameter_1,int parameter_2);
void v_InternFormat( float parameter_1,short parameter_3,float parameter_4);
void v_FormatMount( float parameter_1,float parameter_3,long parameter_5,unsigned int parameter_6,float parameter_7,int uni_para);
short v_SyBlobInitFromBuf( int parameter_1,int parameter_3);
float v_SyBufferFormat( char parameter_1,long parameter_2,char parameter_3,float parameter_4,int uni_para);
char v_unixFullPathname( unsigned int parameter_1,float parameter_2,int parameter_3,char parameter_4,int uni_para);
int v_unixAccess( long parameter_1,short parameter_2,int parameter_3,int parameter_4);
long v_unixDelete( unsigned int parameter_1,unsigned int parameter_2,int parameter_3);
int v_MemBackendFree( char parameter_1);
unsigned int v_SyMemBackendFree( short parameter_1);
long v_vedis_free();
short v_SyMemcpy( float parameter_1,short parameter_3);
long v_SyMemcmp( int parameter_1,double parameter_2,int parameter_3);
unsigned int v_findInodeInfo( double parameter_1,unsigned int parameter_2);
int v_fillInUnixFile( float parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,double parameter_5,int parameter_6,int parameter_7);
void v_SyStrlen( unsigned int parameter_1);
double v_Systrcpy( char parameter_1,unsigned int parameter_2,char parameter_3,short parameter_4);
int v_openDirectory( int parameter_1,int parameter_2);
float v_findCreateFileMode( int parameter_1,int parameter_2,double parameter_3);
unsigned int v_SyMemBackendAlloc( int parameter_1,unsigned int parameter_2,int uni_para);
int v_vedisExportMemBackend();
short v_vedis_malloc( float parameter_1);
float v_unixLeaveMutex();
double v_unixEnterMutex();
short v_findReusableFd( short parameter_1,int parameter_2);
long v_unixOpen( int parameter_1,char parameter_2,long parameter_3,double parameter_4);
float v_vedisExportBuiltinVfs(int uni_para);
long v_SyMemBackendInitFromOthers( double parameter_1,int parameter_2,long parameter_3);
double v_SyZero(long parameter_2);
int v_SyMemBackendInit( int parameter_1,double parameter_2);
unsigned int v_MemBackendAlloc( double parameter_1,unsigned int parameter_2,int uni_para);
void v_MemBackendRealloc( float parameter_1,int parameter_3);
short v_SyMemBackendRealloc( double parameter_1,double parameter_3);
int v_SySetPut( short parameter_1,unsigned int parameter_2);
long v_vedisCoreConfigure( short parameter_1,char parameter_2);
int v_vedis_lib_config( int parameter_1,float parameter_2);
char v_vedisCoreInitialize();
int v_vedis_open( char parameter_1,double parameter_2,int uni_para);
double v_vedisRemoveCommand( char parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	int int_5 = 1;
	long_2 = long_1 * long_1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_2;
	}
	if(1)
	{
		int_3 = int_3 * int_1;
	}
	if(1)
	{
		char char_1 = 1;
		long long_3 = 1;
		long long_4 = 1;
		char_1 = char_1;
		short_3 = v_vedisFetchCommand(unsigned_int_3,int_4);

		long_4 = long_3 + long_3;
		short_3 = short_2 * short_3;
	}
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	float_1 = float_2;
	unsigned_int_4 = v_SyMemBackendFree(short_4);

	int_5 = int_3 * int_2;
	return double_1;
	v_SyStrlen(unsigned_int_2);

}
int v_vedis_delete_command( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = v_vedisRemoveCommand(char_1,long_1);

		double_2 = double_2 + double_2;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	return int_1;
}
double v_vedisDeleteBuiltinCommands( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short_2 = short_1 + short_1;
	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_1;
	}
	return double_1;
	int_1 = v_vedis_delete_command(int_2,long_1);

}
int v_vedis_close( short parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = v_SyMemBackendPoolFree(short_1);

	short_1 = short_2 + short_1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double_2 = double_4 + double_5;
	}
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	double_4 = double_5;
	char_1 = v_vedisEngineRelease(unsigned_int_1);

	int_1 = int_2 * int_1;
	if(1)
	{
		int int_3 = 1;
		int_4 = int_3 + int_3;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return int_4;
	double_3 = v_vedisDeleteBuiltinCommands(float_1);

}
double v_vedisObjContainerDestroy( short parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_3 = 1;
	float_2 = float_1 + float_1;
	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		long_1 = v_SySetRelease();

		char_2 = char_1 + char_2;
		int_3 = int_1 * int_2;
	}
	int_3 = v_vedisObjectValueDestroy(double_1,char_2);

	char_3 = char_1 * char_1;
	return double_1;
}
void v_vedisReleaseContext( unsigned int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = v_vedisMemObjRelease(char_1);

	short_1 = v_SyBlobRelease(long_1);

	double_1 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long_1 = v_SySetRelease();

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			}
			int_1 = int_1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		}
		long_2 = long_1 + long_2;
	}
	char_3 = char_2 * char_3;
	long_2 = v_SyMemBackendPoolFree(short_1);

}
double v_vedisInitContext( short parameter_1,char parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_1 = v_SyBlobInit(char_1,long_1);

	unsigned_int_2 = v_SySetInit(double_1,int_1,long_2);

	int_2 = int_1 * int_1;
	int_3 = int_3 * int_1;
	double_1 = v_vedisMemObjRelease(char_1);

	int_4 = int_2 + int_4;
	int_2 = int_3 * int_1;
	short_1 = short_1 + short_2;
	double_3 = double_1 * double_2;
	return double_1;
}
char v_vedisExec( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	int int_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_5 = 1;
	short short_7 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_5 = 1;
	int_1 = int_1 + int_1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	v_vedisReleaseContext(unsigned_int_1);

	double_1 = double_1 * double_1;
	short_1 = v_vedisFetchCommand(unsigned_int_2,int_2);

	short_1 = v_vedisNewObjectValue(int_3,short_1);

	unsigned_int_3 = unsigned_int_2;
	char_1 = char_1;
	char_3 = char_2 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_2 = double_1 * double_2;
			short_2 = v_vedisGenError(int_1,long_1);

			double_3 = v_vedisInitContext(short_1,char_2,char_1);

			int_3 = int_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_4 = v_SySetInit(double_2,int_2,long_2);

		unsigned_int_5 = unsigned_int_3;
	}
	int_2 = int_1;
	short_1 = short_3 * short_4;
	char_2 = char_1;
	if(1)
	{
		short_3 = short_1 * short_2;
	}
	double_4 = v_vedisObjContainerDestroy(short_2,int_4);

	short_2 = short_5 + short_6;
	if(1)
	{
		char_1 = char_2 + char_3;
	}
	int_3 = int_5 + int_2;
	if(1)
	{
		unsigned_int_1 = v_vedisGenErrorFormat(double_1,unsigned_int_2,short_7);

		float_1 = float_1;
	}
	double_4 = double_2;
	if(1)
	{
		int int_6 = 1;
		int_5 = int_6;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			char char_4 = 1;
			char_4 = char_1 + char_2;
		}
	}
	float_2 = float_1 * float_1;
	return char_5;
	int_5 = v_SySetPut(short_6,unsigned_int_3);

}
unsigned int v_SyLexRelease( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "Je") < 0)
		{
		}
		if(1)
		{
			long long_3 = 1;
			long_3 = long_1 * long_1;
		}
	}
	return unsigned_int_1;
}
void v_SyLexTokenizeInput( char parameter_1,double parameter_2,long parameter_3,double parameter_5,unsigned int parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_6 = 1;
	float_2 = float_1 * float_1;
	long_2 = long_1 * long_1;
	char_2 = char_1 * char_1;
	int_3 = int_1 + int_2;
	if(1)
	{
		float float_3 = 1;
		if(1)
		{
		}
		float_2 = float_2 + float_3;
	}
	int_3 = int_3 * int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_5 = 1;
		char char_3 = 1;
		short short_2 = 1;
		if(1)
		{
			int_3 = v_SySetPut(short_1,unsigned_int_4);

			double_3 = double_1 * double_2;
		}
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
		char_3 = char_1 * char_2;
		if(1)
		{
			if(1)
			{
			}
			short_2 = short_2;
		}
		if(1)
		{
			long_1 = long_2 + long_1;
		}
		if(1)
		{
			double double_4 = 1;
			double_4 = double_1;
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				unsigned_int_6 = unsigned_int_1 * unsigned_int_6;
			}
		}
		if(1)
		{
			short_2 = short_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		double double_5 = 1;
		unsigned_int_7 = unsigned_int_7 * unsigned_int_1;
		if(1)
		{
			double_3 = double_1 + double_1;
		}
		double_5 = double_2 * double_5;
	}
	long_2 = v_SyMemcmp(int_2,double_6,int_1);

}
int v_vedisTokenizeInput( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		int_1 = int_1;
		if(1)
		{
			long_2 = long_1 * long_2;
			double_3 = double_2 + double_3;
		}
		long_1 = long_2 * long_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			float_2 = float_1 * float_2;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		long_3 = long_1 * long_1;
	}
	int_1 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		double_2 = double_2 + double_3;
		unsigned_int_3 = unsigned_int_4;
	}
	short_1 = short_2;
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "uY") < 0)
	{
		int int_2 = 1;
		float_2 = float_2 * float_1;
		int_1 = int_1 * int_2;
	}
	double_3 = double_4 * double_3;
	if(1)
	{
		long long_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long_4 = long_1 * long_4;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
	}
	int_1 = int_1 * int_3;
	return int_1;
}
void v_SyLexInit( short parameter_1,unsigned int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		if(1)
		{
		}
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		if(1)
		{
		}
		double_2 = double_1 + double_2;
	}
	short_1 = short_1 + short_2;
	double_3 = double_1 * double_1;
	double_1 = double_2 + double_1;
	int_2 = int_1 * int_1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
}
short v_vedisTokenize( short parameter_1,double parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int_1 = int_1 + int_1;
	v_SyLexTokenizeInput(char_1,double_1,long_1,double_1,unsigned_int_1);

	double_2 = double_1 + double_1;
	int_1 = v_vedisTokenizeInput(unsigned_int_1,short_1);

	int_3 = int_2 * int_3;
	if(1)
	{
	}
	v_SyLexInit(short_1,unsigned_int_2,short_1);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_1 = v_SyLexRelease(long_1);

	unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
	return short_1;
}
short v_vedisProcessInput( int parameter_1,char parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned_int_1 = v_SySetInit(double_1,int_1,long_1);

	float_3 = float_1 + float_2;
	short_1 = short_1;
	int_1 = int_1 + int_1;
	short_1 = v_vedisTokenize(short_1,double_1,unsigned_int_1);

	long_2 = long_1 + long_1;
	double_3 = double_1 + double_2;
	long_3 = long_1;
	long_2 = long_3;
	char_1 = v_vedisExec(unsigned_int_1);

	int_3 = int_1 + int_2;
	if(1)
	{
		int_3 = int_2 + int_3;
	}
	if(1)
	{
		short short_3 = 1;
		short_1 = short_2 * short_3;
	}
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	long_4 = long_2 * long_4;
	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
		int_2 = int_3 * int_3;
		unsigned_int_2 = unsigned_int_2;
	}
	float_2 = float_1 * float_2;
	long_4 = long_4 + long_3;
	if(1)
	{
		char char_2 = 1;
		long_5 = v_SySetRelease();

		unsigned_int_1 = unsigned_int_2;
		int_1 = int_1 * int_2;
		char_1 = char_2;
	}
	double_3 = double_2;
	return short_2;
}
int v_vedis_exec( short parameter_1,unsigned int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	v_SyStrlen(unsigned_int_1);

	int_2 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
	}
	short_1 = v_vedisProcessInput(int_2,char_1,double_1);

	short_3 = short_2 + short_3;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	return int_2;
}
int v_isBlank( float parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	float_3 = float_1 + float_2;
	char_1 = char_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	short_2 = short_1 * short_2;
	short_3 = short_3 * short_2;
	short_1 = short_2 * short_2;
	if(1)
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
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_1;
	int_1 = v_vedis_lib_shutdown();

}
float v_VmJsonArrayEncode( double parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
		int_1 = v_SyBlobAppend(char_1,int_1,float_1,-1 );

		float_1 = float_1 + float_1;
	}
	long_2 = long_1 + long_2;
	long_2 = long_2 + long_3;
	double_2 = v_VmJsonEncode(unsigned_int_1,char_2);

	float_1 = float_1;
	short_1 = short_1;
	return float_2;
}
int v_vedis_value_is_string( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_1;
	return int_2;
}
double v_SyStrIsNumeric( float parameter_1,long parameter_2,long parameter_3,long parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char_1 = char_2;
	short_3 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		char char_3 = 1;
		char_2 = char_2 + char_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long_2 = long_1 * long_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_2 = double_1 + double_2;
		}
		double_3 = double_2 * double_3;
		float_3 = float_1 + float_2;
	}
	return double_1;
}
void v_vedisMemObjIsNumeric()
{
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		double_1 = v_SyStrIsNumeric(float_1,long_1,long_2,long_1);

		unsigned_int_1 = unsigned_int_1;
		float_1 = float_1 * float_1;
		short_1 = short_1;
		if(1)
		{
		}
		int_1 = int_1 * int_1;
		int_1 = int_1 * int_1;
	}
}
int v_vedis_value_is_numeric( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short_1 = short_2;
	v_vedisMemObjIsNumeric();

	double_3 = double_1 + double_2;
	return int_1;
}
float v_MemObjBooleanValue( unsigned int parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	long_1 = v_SyStrnicmp(float_1,double_1,char_1);

	int_1 = int_1 * int_2;
	char_2 = char_3;
	short_1 = v_vedisHashmapUnref(char_3);

	short_2 = short_1 * short_2;
	int_4 = int_3 + int_1;
	if(1)
	{
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		float_2 = v_vedisHashmapCount(long_1);

		long_1 = long_2 + long_3;
	}
	return float_1;
}
long v_vedisMemObjToBool( float parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long_1 = long_1;
		char_1 = char_1 * char_2;
		short_1 = v_SyBlobRelease(long_1);

		short_3 = short_1 * short_2;
	}
	return long_1;
	float_1 = v_MemObjBooleanValue(unsigned_int_1);

}
int v_vedis_value_to_bool( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	return int_1;
	long_1 = v_vedisMemObjToBool(float_1);

}
int v_vedis_value_is_bool( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_1;
	return int_1;
}
double v_VmJsonEncode( unsigned int parameter_1,char parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	int int_6 = 1;
	double_1 = double_1;
	int_1 = v_vedis_value_is_bool(float_1);

	unsigned_int_1 = v_vedis_value_to_string(int_2,int_3);

	int_3 = v_vedis_array_walk(long_1,int_2);

	float_2 = v_VmJsonArrayEncode(double_2);

	double_2 = double_3 + double_4;
	if(1)
	{
		long_2 = long_2 + long_1;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		double_1 = double_3;
		double_2 = double_4 + double_1;
		int_2 = v_vedis_value_is_string(double_3);

		long_2 = long_3 * long_4;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		float_2 = float_2;
		int_3 = int_3;
		float_3 = float_2 + float_3;
	}
	if(1)
	{
		long long_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_6 = 1;
		int_3 = v_SyBlobAppend(char_1,int_4,float_3,-1 );

		double_3 = double_4 * double_3;
		long_1 = long_5;
		int_3 = int_4 + int_2;
		int_2 = int_3;
		int_1 = v_vedis_value_is_null(unsigned_int_2);

		short_3 = short_1 + short_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				double_2 = double_1 * double_3;
			}
			double_2 = double_5 * double_2;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
			if(1)
			{
				int int_5 = 1;
				int_5 = int_3 + int_4;
			}
			short_1 = short_4;
		}
		int_6 = v_vedis_value_is_numeric(short_4);

		double_4 = double_6 * double_3;
	}
	if(1)
	{
		double double_7 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_4 = 1;
		double_7 = double_5;
		short_4 = short_5;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		int_6 = v_vedis_value_is_array(int_2);

		unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	}
	if(1)
	{
		float_3 = float_1 * float_2;
	}
	return double_1;
	int_1 = v_vedis_value_to_bool(int_4);

}
float v_vedisJsonSerialize( double parameter_1,long parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int_1 = int_1;
	double_3 = double_1 + double_2;
	short_1 = short_1;
	double_5 = double_1 + double_4;
	unsigned_int_1 = unsigned_int_1;
	double_1 = v_VmJsonEncode(unsigned_int_2,char_1);

	long_1 = long_1;
	return float_1;
}
double v_MemObjStringValue( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 + float_1;
		}
		if(1)
		{
			double_3 = v_SyBlobFormat(short_1,unsigned_int_1,int_1);

			short_1 = v_vedisHashmapUnref(char_1);

			double_2 = double_4 * double_4;
		}
	}
	if(1)
	{
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_4 = double_5;
		int_1 = v_SyBlobAppend(char_1,int_2,float_2,-1 );

		float_2 = v_vedisJsonSerialize(double_3,long_1);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	return double_2;
}
long v_vedisMemObjToString( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double_1 = v_MemObjStringValue(short_1,int_1);

		float_1 = float_2;
		int_3 = int_1 + int_2;
		v_SyBlobReset(unsigned_int_1);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	}
	return long_1;
}
unsigned int v_vedis_value_to_string( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long_1 = v_vedisMemObjToString(long_2);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			double double_4 = 1;
			double_3 = double_3 * double_4;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			v_SyBlobNullAppend(double_3);

			short_1 = short_1;
		}
	}
	return unsigned_int_2;
}
short v_array_render( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_2;
	short_1 = short_1;
	int_2 = int_1 * int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = v_vedis_value_to_string(int_1,int_2);

		unsigned_int_1 = unsigned_int_2;
		short_1 = short_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	int_1 = v_vedis_value_is_null(unsigned_int_3);

	float_2 = float_1 * float_2;
	return short_1;
}
void v_vedisHashmapWalk( short parameter_1,double parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short_1 = short_1 + short_1;
	double_1 = double_1 * double_1;
	short_2 = short_1 + short_1;
	long_1 = long_2;
	short_1 = short_1 + short_2;
	long_3 = long_1 + long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "!}") > 0)
		{
			double_1 = double_1 + double_1;
		}
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
		}
		double_3 = double_2 + double_3;
		long_2 = long_3 + long_3;
	}
}
int v_vedis_array_walk( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int_1 = int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	v_vedisHashmapWalk(short_1,double_1);

	double_3 = double_2 * double_1;
	double_3 = double_2;
	return int_3;
}
int v_vedis_value_is_array( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_1 * int_2;
	return int_1;
}
int v_vedis_value_is_null( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_2 = float_1 * float_2;
	return int_1;
}
long v_command_result_render( double parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
		unsigned_int_1 = v_vedis_value_to_string(int_2,int_2);

		int_2 = int_1 + int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		long long_2 = 1;
		int_3 = v_vedis_value_is_null(unsigned_int_2);

		int_2 = v_vedis_array_walk(long_1,int_4);

		float_2 = float_1 * float_1;
		long_1 = long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int_2 = v_vedis_value_is_array(int_3);

		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		short_1 = v_array_render(long_3);

		char_1 = char_1 * char_2;
	}
	return long_4;
}
int v_vedisObjectValueDestroy( double parameter_1,char parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double_1 = v_vedisMemObjRelease(char_1);

	long_1 = v_SyMemBackendPoolFree(short_1);

	double_2 = double_2 + double_1;
	long_2 = long_1 + long_1;
	return int_1;
}
short v_vedisHashmapRef( unsigned int parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	char_1 = char_1;
	return short_1;
}
void v_vedisMemObjStore( long parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	long long_2 = 1;
	short_1 = v_vedisHashmapRef(unsigned_int_1);

	v_SyBlobReset(unsigned_int_1);

	double_2 = double_1 * double_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		char_1 = char_1;
	}
	if(1)
	{
		double double_3 = 1;
		short_2 = v_SyMemcpy(float_2,short_1);

		double_3 = double_1 + double_3;
	}
	short_3 = v_vedisHashmapUnref(char_1);

	int_1 = int_1 * int_2;
	short_4 = v_SyBlobDup(int_2,int_2);

	double_4 = double_5;
	if(1)
	{
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_3 = char_2 * char_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		char controller_5[2];
		fgets(controller_5 ,2 ,stdin);
		if( strcmp( controller_5, " ") > 0)
		{
			long long_1 = 1;
			long_1 = long_1 * long_1;
		}
	}
	if(1)
	{
		char char_4 = 1;
		short_4 = v_SyBlobRelease(long_2);

		char_2 = char_4 * char_4;
	}
}
long v_SyStrToReal( short parameter_1,char parameter_2,long parameter_4)
{
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return long_1;
}
double v_MemObjRealValue( float parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	float_1 = v_vedisHashmapCount(long_1);

	short_1 = v_vedisHashmapUnref(char_1);

	short_4 = short_2 * short_3;
	return double_1;
	double_1 = v_MemObjStringToInt();

	long_2 = v_SyStrToReal(short_4,char_2,long_1);

}
float v_vedisMemObjToReal( double parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		long long_1 = 1;
		double_1 = v_MemObjRealValue(float_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_1;
		long_1 = long_1 * long_1;
	}
	return float_2;
	short_1 = v_SyBlobRelease(long_2);

}
double v_vedisMemObjRelease( char parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	if(1)
	{
		double double_1 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short_1 = v_vedisHashmapUnref(char_1);

			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		double_1 = double_1 * double_2;
		short_1 = v_SyBlobRelease(long_1);

		double_1 = double_2;
	}
	return double_2;
}
unsigned int v_vedisHashmapRelease( float parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short_1 = v_SyBlobRelease(long_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = v_SyMemBackendFree(short_2);

	double_1 = double_1 + double_2;
	float_2 = float_1 * float_2;
	short_3 = short_1;
	int_2 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_3 = 1;
		if(1)
		{
			long_1 = v_SyMemBackendPoolFree(short_2);

			double_4 = double_3 + double_3;
		}
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
		unsigned_int_5 = unsigned_int_3;
		if(1)
		{
			double_3 = double_4 * double_3;
		}
		float_1 = float_2 * float_3;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		double_1 = double_3 * double_2;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_2 = long_3;
	}
	int_1 = int_1 + int_3;
	return unsigned_int_5;
	double_3 = v_vedisMemObjRelease(char_1);

}
short v_vedisHashmapUnref( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_3 = short_1 + short_2;
	}
	return short_3;
	unsigned_int_1 = v_vedisHashmapRelease(float_1);

}
float v_vedisHashmapCount( long parameter_1)
{
	float float_1 = 1;
	return float_1;
}
unsigned int v_SyStrToInt64( short parameter_1,char parameter_2,long parameter_4)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_1;
	long_1 = long_1 * long_1;
	int_1 = int_1 * int_1;
	int_1 = int_1 * int_2;
	double_2 = double_1 * double_1;
	return unsigned_int_1;
	long_2 = v_SyMemcmp(int_3,double_1,int_2);

}
void v_SyOctalStrToInt64( int parameter_1,unsigned int parameter_2,short parameter_4)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short_1 = short_1;
	char_3 = char_1 * char_2;
	int_3 = int_1 * int_2;
	double_1 = double_1;
}
int v_SyBinaryStrToInt64( unsigned int parameter_1,long parameter_2,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	return int_3;
}
int v_SyHexToint( short parameter_1)
{
	int int_1 = 1;
	return int_1;
}
unsigned int v_SyHexStrToInt64( unsigned int parameter_1,char parameter_2,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1;
	double_3 = double_2 + double_3;
	double_1 = double_2 * double_4;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	long_1 = long_2;
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
			int_2 = int_1 + int_2;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_2;
		}
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int_1 = int_3 + int_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int int_4 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		int_3 = v_SyHexToint(short_2);

		int_2 = int_1 * int_4;
	}
	double_1 = double_5 + double_5;
	return unsigned_int_1;
}
long v_vedisTokenValueToInt64( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned_int_1 = v_SyHexStrToInt64(unsigned_int_2,char_1,float_1);

	int_1 = v_SyBinaryStrToInt64(unsigned_int_3,long_1,int_2);

	short_1 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
		if(1)
		{
		}
		v_SyOctalStrToInt64(int_2,unsigned_int_1,short_1);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			int int_3 = 1;
			int_1 = int_3;
		}
		if(1)
		{
			int_1 = int_2 * int_2;
		}
		if(1)
		{
			double double_2 = 1;
			double_2 = double_2 * double_2;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	}
	return long_1;
	unsigned_int_1 = v_SyStrToInt64(short_1,char_2,long_2);

}
double v_MemObjStringToInt()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	float_1 = float_2;
	return double_1;
	long_1 = v_vedisTokenValueToInt64(long_1);

}
int v_MemObjRealToInt()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_1 * char_2;
	int_1 = int_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	int_3 = int_1 + int_2;
	char_1 = char_3 + char_3;
	unsigned_int_4 = unsigned_int_2;
	int_1 = int_1 * int_1;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_4;
	int_1 = int_3 * int_1;
	double_1 = double_1 * double_2;
	char_3 = char_4 + char_3;
	unsigned_int_4 = unsigned_int_5;
	return int_3;
}
char v_MemObjIntValue()
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double_1 = v_MemObjStringToInt();

	float_2 = float_1 * float_2;
	float_3 = v_vedisHashmapCount(long_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
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
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		int_1 = v_MemObjRealToInt();

		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		double_2 = double_2 + double_3;
		int_2 = int_2 * int_1;
	}
	return char_1;
	short_1 = v_vedisHashmapUnref(char_2);

}
void v_vedisMemObjToInteger( double parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char_1 = v_MemObjIntValue();

		short_1 = v_SyBlobRelease(long_1);

		short_3 = short_2 + short_1;
		double_2 = double_1 * double_2;
		double_1 = double_1;
	}
}
int v_vedisMemObjInitFromString( int parameter_1,char parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_2;
	int_1 = v_SyBlobAppend(char_1,int_3,float_1,-1 );

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char char_2 = 1;
		char_3 = char_2 * char_3;
	}
	unsigned_int_2 = v_SyBlobInit(char_3,long_1);

	short_1 = short_1 + short_2;
	return int_1;
	double_1 = v_SyZero(long_1);

}
short v_vedisNewObjectValue( int parameter_1,short parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char char_2 = 1;
	v_vedisMemObjToInteger(double_1);

	float_1 = v_vedisMemObjToReal(double_2);

	int_2 = int_1 * int_2;
	int_1 = int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		v_SyMemBackendPoolAlloc(double_3,float_2);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		char_1 = v_vedisMemObjInit(int_3,unsigned_int_3);

		short_1 = short_1 + short_2;
		if(1)
		{
			double_1 = double_1 + double_1;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 + long_2;
		}
	}
	if(1)
	{
		double double_4 = 1;
		int_2 = v_vedisMemObjInitFromString(int_1,char_2,short_1);

		double_4 = double_2 + double_4;
	}
	return short_1;
}
void v_SyBlobNullAppend( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_4 = 1;
	int int_3 = 1;
	double_3 = double_1 + double_2;
	int_1 = int_2;
	int_2 = v_SyBlobAppend(char_1,int_1,float_1,-1 );

	double_2 = double_4 * double_3;
	int_3 = int_2 + int_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
}
unsigned int v_vedisPagerSetCachesize( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	return unsigned_int_1;
}
short v_vedisConfigure( unsigned int parameter_1,int parameter_2,float parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_5 = 1;
	char char_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_9 = 1;
	char_2 = char_1 * char_2;
	v_vedisPagerGetKvEngine(long_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	v_vedisMemObjStore(long_1,unsigned_int_4);

	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		int_1 = int_2;
		float_2 = float_1 + float_1;
	}
	int_2 = int_3 + int_1;
	int_3 = int_1 + int_3;
	if(1)
	{
		if(1)
		{
			int_1 = v_vedisObjectValueDestroy(double_1,char_2);

			unsigned_int_4 = unsigned_int_5;
		}
		if(1)
		{
			double_2 = double_2 + double_2;
		}
	}
	float_1 = float_2 * float_3;
	char_2 = char_3 + char_3;
	int_4 = int_1 + int_2;
	char_2 = char_3 * char_1;
	if(1)
	{
		float_4 = float_2 * float_3;
		long_1 = long_1 * long_1;
		short_3 = v_vedisNewObjectValue(int_1,short_2);

		unsigned_int_8 = unsigned_int_6 * unsigned_int_7;
	}
	double_2 = double_1 + double_1;
	float_1 = float_3 + float_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			unsigned_int_8 = unsigned_int_3;
			long_2 = long_3;
			int_2 = int_4 + int_2;
		}
		int_1 = int_3;
		unsigned_int_8 = v_vedisPagerSetCachesize(unsigned_int_6,int_5);

		char_3 = char_2 + char_3;
	}
	double_1 = double_1 + double_2;
	char_3 = char_4 + char_4;
	if(1)
	{
		unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
	}
	double_1 = double_1;
	v_SyBlobNullAppend(double_1);

	double_1 = double_1 + double_3;
	unsigned_int_6 = unsigned_int_8;
	int_1 = int_4 * int_3;
	unsigned_int_9 = unsigned_int_8 + unsigned_int_7;
	unsigned_int_7 = unsigned_int_7 + unsigned_int_6;
	float_4 = float_3 * float_4;
	int_4 = int_5 * int_3;
	return short_3;
}
int v_vedis_config( char parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	double_2 = double_1 * double_1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		double double_4 = 1;
		double_1 = double_3 * double_4;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 * long_1;
	int_3 = int_1;
	if(1)
	{
		short_1 = v_vedisConfigure(unsigned_int_1,int_3,float_1);

		double_2 = double_2 * double_3;
	}
	return int_4;
}
long v_SySetRelease()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		unsigned_int_1 = v_SyMemBackendFree(short_1);

		float_1 = float_1 + float_1;
	}
	double_1 = double_1 * double_1;
	double_2 = double_2 + double_1;
	int_1 = int_1 + int_1;
	return long_1;
}
short v_vedisPagerClose( int parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	long_1 = v_pager_release_kv_engine();

	float_1 = v_vedisExportBuiltinVfs(-1 );

	long_1 = v_pager_unlock_db(int_1,int_1);

	char_1 = char_1 + char_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			short_1 = v_vedisOsCloseFree(double_1,short_2);

			float_2 = v_vedisBitvecDestroy(float_2);

			float_1 = float_2 * float_1;
		}
	}
	if(1)
	{
		int int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_2 = int_2 * int_1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1;
		unsigned_int_1 = unsigned_int_1;
	}
	return short_2;
}
unsigned int v_pager_reset_state( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	long long_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int_2 = int_1 * int_2;
	long_1 = long_1;
	int_4 = int_3 * int_4;
	char_2 = char_1 + char_2;
	float_2 = float_1 * float_2;
	int_3 = int_2;
	double_1 = double_1;
	double_1 = double_2 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_4 = 1;
		if(1)
		{
			double_3 = double_1;
		}
		long_4 = long_2 + long_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_2 = v_vedisBitvecDestroy(float_3);

		long_1 = long_3 * long_5;
		char_2 = char_2 + char_2;
	}
	float_2 = v_pager_release_page(long_5,long_2);

	int_3 = int_4 + int_2;
	int_5 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	long_6 = long_3 * long_6;
	float_2 = float_3 * float_1;
	if(1)
	{
		int_3 = int_4 * int_5;
	}
	if(1)
	{
		int int_6 = 1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
		long_1 = v_pager_unlock_db(int_2,int_5);

		int_5 = int_1 * int_6;
	}
	float_2 = float_1 * float_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_5;
	if(1)
	{
		double double_5 = 1;
		char char_3 = 1;
		float float_4 = 1;
		double_2 = double_4 + double_5;
		if(1)
		{
			double double_6 = 1;
			double_6 = double_3 * double_5;
		}
		double_4 = v_SyZero(long_5);

		char_2 = char_3 * char_3;
		float_2 = float_4 * float_1;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 * short_1;
			if(1)
			{
			}
		}
		if(1)
		{
			short short_2 = 1;
			short_2 = short_2 * short_2;
			if(1)
			{
			}
		}
	}
	return unsigned_int_6;
}
int v_vedisPagerRollback( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int int_5 = 1;
	double double_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	long long_2 = 1;
	int int_6 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		short_3 = short_1 * short_2;
	}
	if(1)
	{
		double double_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			double double_1 = 1;
			float float_2 = 1;
			if(1)
			{
				double_2 = double_1 * double_1;
			}
			float_1 = v_vedisOsSync(int_4,int_1);

			int_3 = int_4 + int_4;
			v_vedisOsDelete(short_1,char_1,int_5);

			float_2 = float_2;
			if(1)
			{
				double_2 = double_1 + double_2;
				if(1)
				{
					double double_3 = 1;
					double_3 = double_1 * double_2;
				}
			}
		}
		double_5 = double_4 * double_2;
		short_3 = v_vedisGenError(int_5,long_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			int_2 = int_5 * int_5;
			short_1 = v_vedisOsCloseFree(double_4,short_2);

			unsigned_int_3 = v_pager_reset_state(char_2,int_2);

			int_2 = int_1 * int_4;
		}
	}
	if(1)
	{
		char char_3 = 1;
		int_5 = int_3 + int_5;
		char_3 = char_2 + char_3;
	}
	return int_1;
	v_pager_journal_rollback(int_2,int_2);

	long_2 = v_pager_unlock_db(int_3,int_6);

}
float v_vedisBitvecDestroy( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double_1 = double_2;
	int_3 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		float float_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		double double_3 = 1;
		int int_7 = 1;
		if(1)
		{
			float_1 = float_1 * float_1;
		}
		int_2 = int_2;
		double_1 = double_1 + double_2;
		short_1 = short_2;
		float_3 = float_2 + float_2;
		if(1)
		{
			short_2 = short_2 * short_2;
		}
		int_4 = int_2;
		float_3 = float_1;
		long_1 = v_SyMemBackendPoolFree(short_2);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		short_3 = short_2 + short_1;
		if(1)
		{
			double_2 = double_1;
		}
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		float_1 = float_2 * float_4;
		float_4 = float_5;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
		if(1)
		{
			unsigned_int_5 = unsigned_int_1;
		}
		unsigned_int_5 = v_SyMemBackendFree(short_1);

		int_6 = int_5 + int_5;
		double_2 = double_3;
		int_2 = int_4;
		int_7 = int_5 + int_1;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_6;
	return float_5;
}
long v_pager_commit_phase2( short parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			float float_2 = 1;
			if(1)
			{
				v_vedisOsDelete(short_1,char_1,int_1);

				long_1 = v_pager_unlock_db(int_1,int_1);

				int_1 = int_1 * int_1;
			}
			char_1 = char_1 * char_1;
			float_2 = float_1 + float_1;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double_2 = double_1 * double_1;
				float_1 = v_vedisBitvecDestroy(float_1);

				double_1 = double_1;
			}
		}
	}
	return long_2;
}
short v_pager_write_dirty_pages( char parameter_1,float parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_4 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	float_1 = v_pager_release_page(long_1,long_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_vedisOsWrite(long_2,unsigned_int_2,char_1,char_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		char char_4 = 1;
		double double_2 = 1;
		long long_3 = 1;
		int int_5 = 1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, ":") > 0)
		{
			int int_3 = 1;
			int_3 = int_2 + int_3;
		}
		int_4 = v_pager_unlink_page(char_2,float_1);

		char_4 = char_3 + char_2;
		if(1)
		{
			double_1 = double_2;
			if(1)
			{
				double_1 = double_2;
			}
		}
		long_3 = long_2 * long_2;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_1 + short_2;
			double_2 = double_2;
		}
		int_1 = int_5 + int_5;
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	int_2 = int_2;
	double_1 = double_3 * double_4;
	return short_3;
}
float v_page_merge_dirty( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	double_1 = double_2;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_2;
	long_2 = long_1 + long_1;
	int_1 = int_1 + int_2;
	float_1 = float_1 * float_1;
	short_3 = short_2 * short_3;
	return float_1;
}
unsigned int v_pager_get_dirty_pages( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "q3") > 0)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			float_1 = v_page_merge_dirty(float_2,long_1);

			char_3 = char_1 * char_2;
		}
		if(1)
		{
			double double_2 = 1;
			double_1 = v_SyZero(long_2);

			double_2 = double_2 * double_1;
		}
	}
	return unsigned_int_1;
}
int v_pager_commit_phase1( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_6 = 1;
	int int_8 = 1;
	char char_5 = 1;
	char char_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = double_2;
	char_1 = char_1 + char_2;
	short_1 = v_pager_write_dirty_pages(char_1,float_1);

	long_2 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		long_1 = long_1 + long_3;
		if(1)
		{
			double_4 = double_3 + double_4;
		}
		char_4 = char_1 + char_3;
	}
	if(1)
	{
	}
	float_1 = v_vedisOsSync(int_3,int_2);

	int_3 = int_4 * int_5;
	if(1)
	{
	}
	short_1 = short_2 * short_2;
	if(1)
	{
		int int_7 = 1;
		unsigned_int_1 = v_pager_get_dirty_pages(long_3);

		int_7 = int_5 + int_6;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			short_1 = v_vedisGenError(int_1,long_2);

			double_4 = v_pager_wait_on_lock(int_8,int_3);

			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
	}
	if(1)
	{
		short_2 = v_vedisFinalizeJournal(double_1,int_8,int_4);

		double_4 = v_vedisOsTruncate(long_2,long_2);

		double_1 = double_1;
	}
	double_1 = double_2;
	if(1)
	{
		char_6 = char_5 + char_2;
		double_4 = double_2 + double_4;
		double_1 = double_3 * double_3;
	}
	if(1)
	{
		char_5 = char_6 * char_1;
	}
	int_5 = int_2 + int_6;
	double_3 = double_2 * double_2;
	float_3 = float_2 * float_3;
	return int_6;
}
double v_vedisPagerCommit( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 + long_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	int_1 = int_1 + int_2;
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_5 = int_3 * int_4;
	}
	int_3 = v_pager_commit_phase1(float_1);

	float_1 = float_2 * float_1;
	long_1 = v_pager_commit_phase2(short_1);

	char_1 = char_1 + char_1;
	return double_1;
}
char v_vedisEngineRelease( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		char char_1 = 1;
		short_1 = v_vedisPagerClose(int_1);

		char_2 = char_1 * char_1;
		if(1)
		{
			int_2 = v_vedisPagerRollback(double_2,int_3);

			int_1 = int_2 * int_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_2 = v_SyMemBackendRelease(int_4);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	double_2 = v_vedisPagerCommit(long_1);

	char_3 = char_4;
	double_2 = double_3;
	unsigned_int_3 = unsigned_int_3;
	return char_2;
}
unsigned int v_vedisCoreShutdown()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_1 = 1;
	double_3 = double_1 + double_2;
	char_1 = v_vedisEngineRelease(unsigned_int_1);

	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float float_3 = 1;
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		int_3 = int_3 * int_1;
		short_1 = v_SyMemBackendRelease(int_1);

		int_1 = int_2 * int_2;
		float_2 = float_1 + float_1;
		float_3 = float_1 + float_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		char char_2 = 1;
		if(1)
		{
			int int_4 = 1;
			if(1)
			{
				short short_3 = 1;
				short short_4 = 1;
				int_2 = int_3 + int_3;
				short_4 = short_2 + short_3;
			}
			if(1)
			{
				short_1 = short_1 * short_1;
			}
			int_4 = int_2 * int_4;
		}
		char_2 = char_2;
	}
	if(1)
	{
		short short_5 = 1;
		short short_6 = 1;
		short_6 = short_2 * short_5;
	}
	float_1 = float_4 * float_5;
	return unsigned_int_2;
	long_1 = v_SySetRelease();

}
int v_vedis_lib_shutdown()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	return int_2;
	unsigned_int_1 = v_vedisCoreShutdown();

}
short v_Fatal( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = v_vedis_lib_shutdown();

	int_1 = int_1 * int_1;
	return short_2;
}
unsigned int v_SyBlobAppendBig32( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	int_1 = v_SyBlobAppend(char_1,int_1,float_1,-1 );

	long_3 = long_1 * long_2;
	int_3 = int_1 * int_2;
	double_2 = double_1 + double_1;
	unsigned_int_1 = v_SyBigEndianPack32(float_2,unsigned_int_2);

	float_1 = float_3 * float_2;
	return unsigned_int_1;
}
short v_SyBlobAppendBig16( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int_3 = int_1 + int_2;
	double_1 = double_1 * double_1;
	v_SyBigEndianPack16(long_1,float_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_4 = double_2 + double_3;
	return short_1;
	int_3 = v_SyBlobAppend(char_1,int_2,float_2,-1 );

}
double v_SyBlobFormat( short parameter_1,unsigned int parameter_2,int parameter_3)
{
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	v_FormatMount(float_1,float_1,long_1,unsigned_int_1,float_1,-1 );

	char_1 = char_1 * char_1;
	float_2 = float_2 + float_1;
	if(1)
	{
		if(1)
		{
		}
		int_1 = int_1 * int_1;
	}
	int_2 = int_1 + int_1;
	int_2 = int_2 * int_1;
	return double_1;
}
void v_vedisPagerGetKvEngine( long parameter_1)
{
}
unsigned int v_vedisTableSerialize( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	int int_6 = 1;
	short short_5 = 1;
	int int_7 = 1;
	double double_4 = 1;
	int int_8 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int_2 = int_1 + int_1;
	int_3 = int_1 + int_2;
	double_1 = double_1 * double_2;
	unsigned_int_1 = v_SyBlobInit(char_1,long_1);

	float_1 = float_1 + float_2;
	short_1 = v_SyBlobRelease(long_2);

	int_4 = int_1 + int_2;
	long_2 = long_2 + long_2;
	int_2 = int_4 + int_5;
	short_3 = short_2 * short_1;
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	unsigned_int_1 = v_vedisGenErrorFormat(double_3,unsigned_int_2,short_2);

	char_3 = char_2 + char_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	short_4 = v_SyBlobAppendBig16(double_2,int_1);

	int_2 = int_6;
	short_2 = short_2 + short_5;
	int_2 = int_7 * int_6;
	v_vedisPagerGetKvEngine(long_1);

	double_4 = v_SyBlobFormat(short_5,unsigned_int_3,int_8);

	short_1 = short_4;
	unsigned_int_1 = v_SyBlobAppendBig32(short_2,int_8);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_5 + double_1;
	return unsigned_int_4;
}
double v_vedisPagerisMemStore()
{
	double double_1 = 1;
	return double_1;
}
void v_vedisOnCommit()
{
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long_1 = long_1 * long_1;
	double_1 = v_vedisPagerisMemStore();

	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_1 = v_vedisTableSerialize(float_1);

		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		if(1)
		{
		}
		short_1 = short_1 + short_2;
	}
}
int v_vedisPagerSetCommitCallback( float parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = int_1 + int_2;
	short_3 = short_1 * short_2;
	return int_2;
}
char v_SySetReset( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_2;
	double_2 = double_1 * double_1;
	return char_1;
}
double v_SyBinHash( int parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long_2 = long_1 * long_1;
	char_1 = char_1 * char_1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		if(1)
		{
			int int_3 = 1;
			int_3 = int_2 * int_3;
		}
		long_1 = long_2 + long_2;
		long_2 = long_3 + long_4;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		}
		unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		if(1)
		{
			long_4 = long_4 + long_1;
		}
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		float_2 = float_1 + float_2;
		if(1)
		{
			int int_4 = 1;
			int_2 = int_4;
		}
		char_3 = char_2 * char_2;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	}
	return double_1;
}
short v_vedisFetchCommand( unsigned int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	long_1 = long_2;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	double_1 = v_SyBinHash(int_2,double_1);

	double_2 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long_1 = long_1;
		}
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, ";G") > 0)
		{
		}
		int_1 = int_2 * int_2;
	}
	return short_1;
	long_3 = v_SyMemcmp(int_1,double_2,int_1);

}
char v_vedisInstallCommand( unsigned int parameter_1,char parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	short short_5 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	int int_6 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	short short_6 = 1;
	int int_9 = 1;
	long long_3 = 1;
	double double_6 = 1;
	double_2 = double_1 * double_2;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_2;
	short_1 = v_vedisFetchCommand(unsigned_int_3,int_1);

	short_1 = short_1;
	int_1 = int_2 * int_2;
	short_3 = short_2 + short_2;
	char_3 = char_1 * char_2;
	char_2 = char_2 + char_1;
	if(1)
	{
		short short_4 = 1;
		double_2 = double_2 * double_3;
		short_2 = short_4 + short_5;
		double_2 = double_2 * double_2;
	}
	unsigned_int_1 = v_SyMemBackendFree(short_5);

	float_1 = float_1;
	if(1)
	{
	}
	char_1 = v_SySetReset(short_5);

	int_2 = int_3;
	char_1 = char_2 + char_1;
	int_5 = int_4 * int_4;
	int_2 = int_5;
	unsigned_int_2 = v_SyMemBackendAlloc(int_5,unsigned_int_2,-1 );

	char_1 = char_2;
	double_4 = double_4 + double_3;
	int_6 = int_6;
	char_4 = char_2 * char_1;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	double_3 = double_2 + double_3;
	double_4 = double_3 * double_3;
	if(1)
	{
		double_2 = v_SyZero(long_2);

		char_1 = char_1 + char_5;
	}
	unsigned_int_6 = unsigned_int_4 * unsigned_int_1;
	if(1)
	{
		int int_7 = 1;
		int int_8 = 1;
		double double_5 = 1;
		int_1 = int_7 * int_8;
		int_6 = int_6;
		double_1 = double_1 + double_5;
		short_5 = v_SyMemcpy(float_2,short_6);

		double_4 = double_3 + double_3;
		long_1 = long_1;
		if(1)
		{
			int_6 = int_9;
			double_3 = double_5;
			char_5 = char_3 + char_3;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				long long_4 = 1;
				long long_5 = 1;
				float float_3 = 1;
				if(1)
				{
					short_2 = short_2 + short_2;
				}
				unsigned_int_2 = v_SySetInit(double_2,int_9,long_3);

				long_4 = long_1;
				unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
				unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
				if(1)
				{
					unsigned_int_6 = unsigned_int_5 + unsigned_int_6;
				}
				long_5 = long_2 * long_1;
				int_8 = int_9 + int_8;
				v_SyStrlen(unsigned_int_2);

				float_2 = float_2 * float_3;
			}
			unsigned_int_3 = unsigned_int_6 + unsigned_int_3;
			int_7 = int_4 + int_1;
			double_4 = double_3 + double_6;
		}
	}
	return char_1;
	double_6 = v_SyBinHash(int_3,double_4);

}
int v_vedis_register_command( int parameter_1,char parameter_2,double parameter_3,int parameter_4,unsigned int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	if(1)
	{
		char_2 = char_2 + char_2;
	}
	if(1)
	{
	}
	char_2 = v_vedisInstallCommand(unsigned_int_1,char_1,double_1);

	char_4 = char_1 * char_3;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "9x") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3;
	}
	return int_1;
}
char v_vedisRegisterBuiltinCommands( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	return char_1;
	int_1 = v_vedis_register_command(int_2,char_2,double_1,int_2,unsigned_int_3);

}
char v_vedisMemObjInit( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1;
	double_2 = v_SyZero(long_1);

	unsigned_int_1 = v_SyBlobInit(char_1,long_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return char_1;
}
double v_vedisInitCursor( double parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_6 = 1;
	char_3 = char_1 * char_2;
	short_2 = short_1 * short_1;
	char_2 = char_3;
	short_2 = short_1 + short_2;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_2;
	}
	double_3 = double_3 + double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		short_2 = v_vedisGenOutofMem(char_4);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_3 = v_vedisGenErrorFormat(double_4,unsigned_int_2,short_3);

	long_1 = long_1 + long_2;
	if(1)
	{
		int int_2 = 1;
		v_SyMemBackendPoolAlloc(double_5,float_1);

		int_1 = int_2;
	}
	int_1 = int_1 * int_3;
	long_3 = long_3 * long_4;
	if(1)
	{
		long_3 = long_5 * long_4;
	}
	double_6 = v_SyZero(long_5);

	double_4 = double_5 * double_6;
	return double_5;
}
short v_vedisKvIoErr( short parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_3 = 1;
	short_2 = short_1 * short_2;
	short_2 = v_vedisGenError(int_1,long_1);

	double_1 = double_1 + double_1;
	return short_3;
}
float v_vedisKvIoPageReload( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double_3 = double_1 * double_2;
	long_1 = long_1 * long_1;
	return float_1;
}
float v_vedisKvIoPageUnpin( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1 + int_1;
	return float_1;
}
long v_vedisKvIoTempPage( long parameter_1)
{
	long long_1 = 1;
	return long_1;
}
unsigned int v_vedisKvIoReadOnly( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
float v_vedisKvIoPageSize( unsigned int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
unsigned int v_page_unref( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_2;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
		if(1)
		{
			long_2 = long_1 + long_1;
			long_2 = long_1 * long_1;
		}
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				int int_4 = 1;
				int int_5 = 1;
				float float_3 = 1;
				int_3 = v_pager_unlink_page(char_1,float_2);

				double_1 = double_2;
				if(1)
				{
					int_4 = int_1 * int_2;
				}
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					float_2 = v_pager_release_page(long_1,long_2);

					unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
					if(1)
					{
						char char_2 = 1;
						char_2 = char_1 * char_1;
					}
					int_2 = int_4 + int_3;
				}
				int_1 = int_4 * int_5;
				float_3 = float_3 * float_2;
			}
		}
	}
	return unsigned_int_2;
}
double v_vedisKvIoPageUnRef( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = v_page_unref(long_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	return double_1;
}
unsigned int v_vedisKvIopage_ref( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	return unsigned_int_1;
	float_1 = v_page_ref(float_1);

}
short v_vedisKvIoPageDontMakeHot( float parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "zH") > 0)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			short short_2 = 1;
			short_1 = short_2;
		}
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_2 * double_2;
		}
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		int_2 = int_1 + int_1;
	}
	return short_1;
}
void v_vedisKvIoPageDontJournal( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	char_3 = char_1 + char_2;
	v_vedisBitvecTest(short_1,char_1);

	float_3 = float_1 + float_2;
	if(1)
	{
	}
	char_4 = char_2;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1;
		}
	}
	short_1 = v_vedisBitvecSet(long_1,long_1);

}
long v_vedisPagerDontWrite( float parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return long_1;
}
void v_vedisKvIoPageDontWrite( int parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = v_vedisPagerDontWrite(float_1);

	double_1 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
}
short v_vedisBitvecSet( long parameter_1,long parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_1 = char_1;
	double_2 = double_1 * double_1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	char_2 = char_1 + char_1;
	double_2 = v_SyZero(long_1);

	int_1 = int_2 * int_2;
	double_4 = double_3 * double_3;
	float_2 = float_1 * float_1;
	double_3 = double_3 + double_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_5 * double_6;
	float_1 = float_3;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_3 = int_4;
		double_6 = double_7 + double_6;
		int_4 = int_3 + int_3;
		float_2 = float_2 * float_2;
		if(1)
		{
			double double_8 = 1;
			double double_9 = 1;
			double double_10 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_8 = 1;
			int int_6 = 1;
			double_2 = double_8 * double_9;
			double_9 = double_10 + double_2;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
			unsigned_int_1 = v_SyMemBackendAlloc(int_1,unsigned_int_4,-1 );

			double_6 = double_8 * double_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				double double_12 = 1;
				short short_3 = 1;
				unsigned int unsigned_int_7 = 1;
				if(1)
				{
					double double_11 = 1;
					double_6 = double_11 + double_1;
				}
				v_SyMemBackendPoolAlloc(double_7,float_2);

				int_2 = int_5 + int_5;
				unsigned_int_6 = unsigned_int_5 * unsigned_int_6;
				double_1 = double_10 + double_12;
				unsigned_int_1 = v_SyMemBackendFree(short_1);

				short_3 = short_2 * short_3;
				double_4 = double_7 + double_2;
				unsigned_int_7 = unsigned_int_4 * unsigned_int_1;
			}
			int_3 = int_5 * int_2;
			unsigned_int_8 = unsigned_int_2;
			int_1 = int_1 + int_6;
		}
	}
	return short_2;
}
float v_WriteInt64( double parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int_1 = v_vedisOsWrite(long_1,unsigned_int_1,char_1,char_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_2 + int_1;
	double_1 = double_2;
	int_1 = int_2 + int_3;
	return float_1;
	double_1 = v_SyBigEndianPack64(char_2,double_1);

}
void v_vedisBitvecTest( short parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_3 = double_1 * double_2;
	char_1 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		char char_4 = 1;
		float float_3 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
		}
		int_1 = int_1 + int_2;
		if(1)
		{
			char_3 = char_2 + char_3;
		}
		if(1)
		{
		}
		float_1 = float_1 * float_1;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 * short_1;
		}
		if(1)
		{
		}
		char_3 = char_3 + char_4;
		if(1)
		{
			float float_2 = 1;
			float_1 = float_2 + float_1;
		}
		if(1)
		{
		}
		float_1 = float_3 * float_3;
	}
}
int v_page_write( double parameter_1,char parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_4 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	long long_3 = 1;
	char char_6 = 1;
	long long_4 = 1;
	char char_7 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_5 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			float_1 = v_WriteInt64(double_1,double_2,int_1);

			char_3 = char_1 * char_2;
			if(1)
			{
				int_2 = int_1 * int_2;
			}
			short_1 = v_vedisGenError(int_2,long_1);

			int_3 = v_vedisOsWrite(long_1,unsigned_int_1,char_3,char_4);

			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
			if(1)
			{
			}
			char_5 = char_4 * char_2;
			if(1)
			{
			}
			float_1 = v_pager_cksum(long_1,long_1);

			long_2 = v_pager_page_to_dirty_list(int_2,long_2);

			int_3 = int_4;
			double_4 = double_3 * double_2;
			if(1)
			{
			}
			short_1 = v_vedisBitvecSet(long_1,long_1);

			double_3 = double_3;
			short_2 = v_WriteInt32(long_3,char_3,char_6);

			int_4 = int_4 * int_1;
			double_4 = double_5 + double_1;
		}
	}
	long_1 = long_1 * long_4;
	if(1)
	{
		int int_5 = 1;
		int_5 = int_4 + int_2;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1;
		}
	}
	return int_3;
	v_vedisBitvecTest(short_1,char_7);

}
float v_pager_release_page( long parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "m#") > 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	return float_1;
	long_3 = v_SyMemBackendPoolFree(short_1);

}
int v_pager_unlink_page( char parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_1 = short_2;
		short_3 = short_1;
	}
	double_2 = double_1 * double_2;
	float_1 = float_1 + float_1;
	return int_1;
}
int v_pager_write_hot_dirty_pages( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_4 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1;
		}
		int_3 = int_1 + int_2;
		if(1)
		{
			short_2 = short_1 * short_2;
			if(1)
			{
				long long_3 = 1;
				long long_4 = 1;
				float_2 = v_pager_release_page(long_1,long_2);

				long_4 = long_1 * long_3;
			}
		}
		double_2 = double_2 + double_4;
		if(1)
		{
			double_5 = double_4 * double_4;
		}
		if(1)
		{
			short_1 = short_1 * short_2;
		}
		if(1)
		{
			float float_3 = 1;
			float_3 = float_3;
		}
		if(1)
		{
			long long_5 = 1;
			long long_6 = 1;
			long_6 = long_2 * long_5;
		}
		char_3 = char_1 * char_2;
		int_4 = v_vedisOsWrite(long_2,unsigned_int_1,char_2,char_1);

		short_4 = short_2 * short_3;
		double_4 = double_3 + double_5;
	}
	return int_5;
	int_5 = v_pager_unlink_page(char_2,float_4);

}
double v_page_merge_hot( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double_1 = double_1;
	float_1 = float_1;
	int_2 = int_1 + int_2;
	long_1 = long_1 * long_1;
	return double_1;
}
float v_pager_get_hot_pages( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_2;
	double_1 = v_page_merge_hot(short_1,unsigned_int_3);

	int_3 = int_2 + int_1;
	float_4 = float_3 + float_4;
	return float_3;
	double_1 = v_SyZero(long_1);

}
short v_WriteInt32( long parameter_1,char parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = v_SyBigEndianPack32(float_1,unsigned_int_1);

	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2;
	int_1 = v_vedisOsWrite(long_1,unsigned_int_2,char_1,char_2);

	float_1 = float_1 * float_1;
	return short_2;
}
short v_vedisFinalizeJournal( double parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short_1 = v_WriteInt32(long_1,char_1,char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_2;
	char_1 = v_pager_lock_db(float_1,int_1);

	double_2 = double_2 + double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3;
		char_1 = char_1;
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			float_2 = v_vedisOsSync(int_1,int_1);

			char_3 = char_1 * char_2;
		}
	}
	float_2 = float_1 * float_2;
	if(1)
	{
		long long_2 = 1;
		if(1)
		{
			if(1)
			{
			}
		}
		short_1 = v_vedisOsCloseFree(double_3,short_1);

		long_1 = long_2 * long_1;
	}
	if(1)
	{
		char controller_10[3];
		fgets(controller_10 ,3 ,stdin);
		if( strcmp( controller_10, "&1") == 0)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		}
	}
	return short_2;
}
long v_pager_dirty_commit()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_4 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long_1 = long_1 * long_2;
	int_2 = int_1 * int_2;
	int_3 = v_pager_write_hot_dirty_pages(long_1,double_1);

	short_1 = v_vedisGenError(int_1,long_2);

	long_2 = long_3 * long_1;
	float_1 = v_pager_get_hot_pages(double_2);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	if(1)
	{
		int_4 = int_2;
		if(1)
		{
		}
	}
	double_1 = double_2 * double_2;
	long_1 = long_2 * long_1;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		double_3 = double_2 + double_2;
		float_2 = float_2 + float_3;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	double_3 = v_pager_wait_on_lock(int_4,int_4);

	short_2 = short_1 + short_1;
	return long_3;
	short_3 = v_vedisFinalizeJournal(double_1,int_1,int_4);

}
int v_pager_write_journal_header( long parameter_1,short parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char_1 = char_1;
	double_2 = double_1 + double_2;
	short_1 = v_SyMemcpy(float_1,short_1);

	int_1 = int_1;
	double_2 = v_SyBigEndianPack64(char_2,double_2);

	short_3 = short_1 * short_2;
	unsigned_int_1 = v_SyBigEndianPack32(float_2,unsigned_int_1);

	int_3 = int_2 + int_2;
	short_1 = short_2 * short_1;
	int_3 = int_4 + int_5;
	short_3 = short_3 + short_2;
	short_2 = short_3 * short_2;
	unsigned_int_1 = unsigned_int_1;
	float_4 = float_1 * float_3;
	double_2 = double_3 + double_4;
	return int_4;
}
unsigned int v_vedisOpenJournal( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	double_2 = double_1 * double_1;
	int_1 = int_1 * int_2;
	if(1)
	{
		int_2 = int_3 * int_4;
	}
	if(1)
	{
	}
	unsigned_int_1 = v_SyMemBackendFree(short_1);

	char_2 = char_1 * char_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		unsigned_int_2 = v_SyMemBackendAlloc(int_5,unsigned_int_3,-1 );

		double_4 = double_1 + double_3;
	}
	v_vedisOsDelete(short_1,char_2,int_2);

	int_3 = v_vedisOsWrite(long_2,unsigned_int_2,char_1,char_3);

	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		unsigned_int_5 = unsigned_int_2;
		unsigned_int_2 = v_vedisGenErrorFormat(double_2,unsigned_int_5,short_1);

		double_2 = double_2 + double_2;
	}
	unsigned_int_5 = unsigned_int_4;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
	float_1 = v_vedisOsOpen(double_2,short_2,long_3,unsigned_int_3,double_1);

	unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
	short_1 = v_vedisOsCloseFree(double_3,short_1);

	int_5 = int_5 * int_3;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_1;
	}
	double_3 = double_3;
	double_3 = double_3 * double_4;
	double_1 = double_1 * double_3;
	return unsigned_int_7;
	int_4 = v_pager_write_journal_header(long_4,short_2);

}
float v_SyTimeFormatToDos( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	double_1 = double_2;
	char_3 = char_1 + char_2;
	double_2 = double_2 * double_1;
	char_4 = char_2 + char_3;
	return float_1;
}
double v_pager_write_db_header( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_4 = 1;
	float float_4 = 1;
	double double_6 = 1;
	long long_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_2;
	short_1 = v_SyMemcpy(float_1,short_2);

	char_3 = char_1 * char_2;
	short_1 = short_2 + short_3;
	char_2 = char_2;
	float_1 = float_2 + float_2;
	double_3 = double_1 + double_2;
	float_3 = float_3 * float_2;
	double_4 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "IH") < 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = v_SyBigEndianPack32(float_2,unsigned_int_2);

		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	}
	double_5 = v_SyZero(long_1);

	double_5 = double_3 * double_2;
	v_SyStrlen(unsigned_int_4);

	short_3 = short_3 * short_1;
	int_1 = int_3 * int_2;
	int_3 = int_4 + int_3;
	char_4 = char_1 * char_3;
	double_5 = double_3 * double_2;
	float_4 = v_SyTimeFormatToDos(float_4,unsigned_int_4);

	char_4 = char_4;
	double_3 = double_6;
	v_SyBigEndianPack16(long_1,float_1);

	long_2 = long_1 + long_2;
	double_1 = double_4;
	int_3 = int_1 + int_1;
	short_2 = short_4 * short_5;
	return double_4;
}
long v_pager_page_to_dirty_list( int parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	short_3 = short_1 * short_2;
	int_1 = int_1 + int_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_2 = int_1 * int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	return long_1;
}
double v_pager_create_header()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	double_3 = v_pager_write_db_header(long_1);

	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
	}
	double_2 = double_3;
	double_3 = double_3 + double_4;
	unsigned_int_1 = v_pager_alloc_page(int_1,short_1);

	long_1 = v_pager_page_to_dirty_list(int_1,long_2);

	long_2 = long_2 + long_1;
	int_2 = int_1 + int_1;
	return double_2;
	char_1 = v_pager_link_page(unsigned_int_1,int_2);

}
unsigned int v_vedisBitvecCreate( int parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	int_2 = int_1 * int_2;
	long_3 = long_1 + long_2;
	int_1 = int_3;
	if(1)
	{
		int int_4 = 1;
		int_3 = int_3 + int_4;
	}
	double_1 = double_1 * double_1;
	short_1 = short_1 + short_1;
	double_1 = double_1 + double_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned_int_1 = v_SyMemBackendAlloc(int_5,unsigned_int_2,-1 );

		unsigned_int_2 = v_SyMemBackendFree(short_2);

		char_3 = char_1 * char_2;
	}
	int_6 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	float_3 = float_1 * float_2;
	return unsigned_int_3;
	double_2 = v_SyZero(long_3);

}
long v_vedisPagerBegin( int parameter_1,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	double_1 = double_1 * double_1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_1 + int_3;
	}
	short_3 = short_1 * short_2;
	char controller4vul_1788[2];
	fgets(controller4vul_1788 ,2 ,stdin);
	if( strcmp( controller4vul_1788, "J") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			int int_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int_4 = int_2 + int_2;
			int_3 = int_5 + int_4;
			float_2 = float_1 * float_1;
		}
		long_1 = long_1 * long_1;
		double_2 = double_1 * double_1;
		double_1 = double_3 + double_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		char controller4vul_1789[2];
		fgets(controller4vul_1789 ,2 ,stdin);
		if( strcmp( controller4vul_1789, "[") < 0)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
			char controller4vul_1790[2];
			fgets(controller4vul_1790 ,2 ,stdin);
			if( strcmp( controller4vul_1790, "Y") > 0)
			{
				char char_1 = 1;
				char char_2 = 1;
				unsigned_int_6 = v_pager_shared_lock(unsigned_int_4,uni_para);

				char_2 = char_1 + char_1;
			}
			unsigned_int_3 = unsigned_int_6 + unsigned_int_1;
		}
	}
	if(1)
	{
		int_3 = int_3 + int_5;
	}
	long_2 = long_2 * long_2;
	return long_2;
}
long v_vedisPageWrite( short parameter_1,int uni_para)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	char controller4vul_1786[2];
	fgets(controller4vul_1786 ,2 ,stdin);
	if( strcmp( controller4vul_1786, "q") > 0)
	{
		long long_2 = 1;
		long_1 = long_1 + long_2;
		char controller4vul_1787[2];
		fgets(controller4vul_1787 ,2 ,stdin);
		if( strcmp( controller4vul_1787, "Y") > 0)
		{
			long_1 = v_vedisPagerBegin(int_2,uni_para);

		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 + float_2;
		}
	}
	int_2 = int_2;
	return long_3;
}
short v_vedisKvIopageWrite( long parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_1;
	char controller4vul_1785[2];
	fgets(controller4vul_1785 ,2 ,stdin);
	if( strcmp( controller4vul_1785, "Y") < 0)
	{
		long_1 = v_vedisPageWrite(short_1,uni_para);

	}
	int_1 = int_1 + int_2;
	return short_2;
}
unsigned int v_vedisKvIoNewPage( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = v_pager_shared_lock(unsigned_int_2,-1 );

	short_1 = short_1 * short_1;
	long_3 = long_1 * long_2;
	v_vedisPagerAcquire(long_2,char_1,float_1,int_1,int_1);

	double_3 = double_1 * double_2;
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	return unsigned_int_3;
}
int v_vedisKvIoPageLookup( int parameter_1,double parameter_2,int parameter_3)
{
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = short_1 + short_1;
	v_vedisPagerAcquire(long_1,char_1,float_1,int_1,int_2);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return int_1;
}
float v_page_ref( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double_1 = double_2;
	return float_1;
}
char v_pager_link_page( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	short_1 = short_1 + short_1;
	double_1 = double_1;
	float_1 = float_1 * float_2;
	if(1)
	{
		double_2 = double_3;
	}
	long_3 = long_1 + long_2;
	int_1 = int_2;
	unsigned_int_1 = v_SyMemBackendAlloc(int_1,unsigned_int_1,-1 );

	double_2 = double_2 * double_2;
	if(1)
	{
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double_4 = double_2 + double_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_1 = float_3 * float_1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		if(1)
		{
			int int_3 = 1;
			double double_6 = 1;
			long long_4 = 1;
			long long_5 = 1;
			double_2 = double_3 + double_4;
			int_2 = int_1;
			int_2 = int_3 * int_2;
			double_4 = double_4 + double_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double double_5 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				if(1)
				{
					char char_1 = 1;
					char_1 = char_1 * char_2;
				}
				double_3 = v_SyZero(long_2);

				double_1 = double_2;
				double_5 = double_4 + double_4;
				unsigned_int_1 = v_SyMemBackendFree(short_1);

				long_3 = long_1 * long_1;
				if(1)
				{
					unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
				}
				float_1 = float_3 + float_2;
				unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
				double_2 = double_6 + double_3;
			}
			long_1 = long_4;
			double_6 = double_4;
			long_3 = long_5 * long_1;
		}
	}
	return char_2;
}
double v_pager_get_page_contents( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_5 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
		float_1 = v_vedisOsRead(short_1,short_2,short_3);

		double_2 = double_1 + double_1;
	}
	if(1)
	{
		double double_3 = 1;
		short short_4 = 1;
		double_3 = double_3 + double_2;
		short_3 = short_4 + short_5;
	}
	if(1)
	{
		short short_6 = 1;
		short_6 = short_3 + short_5;
	}
	return double_4;
	double_1 = v_SyZero(long_2);

}
unsigned int v_pager_alloc_page( int parameter_1,short parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char_1 = char_1;
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	v_SyMemBackendPoolAlloc(double_1,float_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = v_SyZero(long_1);

	int_4 = int_1 * int_3;
	double_1 = double_1 * double_3;
	char_2 = char_2 + char_1;
	return unsigned_int_1;
}
long v_vedisGetPageSize()
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	return long_1;
}
int v_vedisOsSectorSize( float parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	return int_1;
}
float v_GetSectorSize( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 + double_1;
		}
		if(1)
		{
			long long_3 = 1;
			long_3 = long_2 + long_3;
		}
	}
	return float_1;
	int_1 = v_vedisOsSectorSize(float_2);

}
void v_SyDosTimeFormat( char parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	char_2 = char_1 + char_1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	short_1 = short_2 + short_2;
	float_1 = float_2;
	int_1 = int_1 + int_2;
	short_2 = short_3 + short_2;
	int_1 = int_2 + int_3;
}
double v_pager_extract_header( unsigned int parameter_1,unsigned int parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	char char_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short short_6 = 1;
	char char_6 = 1;
	float float_2 = 1;
	long long_3 = 1;
	int_1 = int_1 * int_2;
	int_2 = int_1 * int_3;
	long_1 = v_SyBigEndianUnpack32(short_1,unsigned_int_1);

	short_2 = short_2;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	float_1 = v_SyMemBackendDup(short_2,int_3,char_4,-1 );

	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	long_2 = long_1 * long_2;
	char_5 = char_2 + char_5;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	short_3 = short_3 + short_3;
	short_4 = short_4 + short_3;
	int_3 = int_2 * int_2;
	v_SyDosTimeFormat(char_5,short_5);

	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	double_3 = double_3;
	long_2 = v_SyMemcmp(int_1,double_3,int_4);

	short_2 = short_6;
	if(1)
	{
	}
	char_6 = char_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		double_3 = v_SyBigEndianUnpack16(float_2,double_1);

		float_4 = float_3 + float_1;
	}
	long_3 = long_3 + long_1;
	if(1)
	{
	}
	double_2 = double_2 + double_3;
	return double_2;
}
long v_pager_read_db_header( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	float float_5 = 1;
	double double_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	double double_5 = 1;
	long long_4 = 1;
	double_3 = double_1 + double_2;
	v_vedisFindKVStore(double_2,unsigned_int_1);

	short_1 = v_vedisGenOutofMem(char_1);

	double_3 = v_SyZero(long_1);

	short_1 = short_1;
	short_2 = v_vedisGenError(int_1,long_1);

	int_1 = int_2 * int_3;
	double_3 = double_1 * double_3;
	if(1)
	{
	}
	char_3 = char_1 * char_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_4 = 1;
		char char_5 = 1;
		double_2 = double_2 * double_2;
		char_2 = char_1 * char_2;
		float_1 = float_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		}
		float_3 = float_2 * float_1;
		if(1)
		{
			float float_4 = 1;
			unsigned_int_1 = v_vedisPagerRegisterKvEngine(char_1,short_2,-1 );

			long_1 = v_vedisGetPageSize();

			float_5 = float_4 + float_5;
		}
		int_2 = int_2 * int_2;
		if(1)
		{
			double_4 = v_vedisOsFileSize(int_1,short_3);

			float_5 = v_vedisOsRead(short_1,short_1,short_4);

			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		}
		float_5 = float_1 + float_3;
		if(1)
		{
			double_1 = double_1 + double_4;
		}
		char_3 = char_4 + char_1;
		v_SyStrlen(unsigned_int_2);

		char_3 = char_1 + char_5;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		if(1)
		{
			int_1 = int_2 * int_1;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
		if(1)
		{
		}
	}
	char controller_9[3];
	fgets(controller_9 ,3 ,stdin);
	if( strcmp( controller_9, ";<") < 0)
	{
		unsigned int unsigned_int_5 = 1;
		int int_4 = 1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
		float_3 = v_GetSectorSize(short_4);

		long_2 = long_1 + long_1;
		int_2 = int_2 * int_4;
	}
	long_2 = long_1 + long_3;
	if(1)
	{
		unsigned_int_1 = v_vedisGenErrorFormat(double_4,unsigned_int_4,short_4);

		double_1 = double_2 * double_3;
	}
	unsigned_int_6 = v_SyMemBackendAlloc(int_5,unsigned_int_2,-1 );

	double_1 = double_3 + double_5;
	return long_4;
	double_4 = v_pager_extract_header(unsigned_int_2,unsigned_int_4,char_3);

}
short v_vedisOsCloseFree( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char_3 = char_1 * char_2;
		long_2 = long_1 + long_1;
	}
	return short_1;
	unsigned_int_1 = v_SyMemBackendFree(short_2);

}
char v_pager_fetch_page( unsigned int parameter_1,long parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_1 * long_2;
		}
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	return char_1;
}
int v_pager_fill_page( short parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	char_2 = v_pager_fetch_page(unsigned_int_3,long_1);

	short_1 = v_SyMemcpy(float_1,short_2);

	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	return int_1;
}
int v_vedisOsWrite( long parameter_1,unsigned int parameter_2,char parameter_3,char parameter_4)
{
	int int_1 = 1;
	return int_1;
}
float v_pager_cksum( long parameter_1,long parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float_1 = float_1 * float_1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	return float_2;
}
unsigned int v_pager_play_back_one_page( float parameter_1,int parameter_2,char parameter_3)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	float_1 = v_pager_cksum(long_1,long_2);

	char_1 = char_1 * char_1;
	long_2 = long_1 + long_1;
	v_ReadInt64(float_1,short_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_1;
	long_3 = long_2 * long_3;
	int_1 = int_2;
	if(1)
	{
	}
	int_2 = int_2;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	float_1 = v_vedisOsRead(short_1,short_1,short_1);

	double_3 = double_1 + double_2;
	double_2 = double_2 * double_1;
	if(1)
	{
	}
	float_1 = float_2;
	int_1 = v_vedisOsWrite(long_1,unsigned_int_3,char_3,char_2);

	int_1 = v_pager_fill_page(short_1,short_1);

	int_3 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_4 = int_4 * int_5;
	if(1)
	{
		short short_3 = 1;
		short_2 = v_ReadInt32(int_5,double_3,double_2);

		short_3 = short_1 * short_1;
	}
	return unsigned_int_2;
}
double v_vedisOsTruncate( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	return double_1;
}
void v_ReadInt64( float parameter_1,short parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	short_2 = short_1 + short_2;
	float_1 = v_vedisOsRead(short_3,short_2,short_1);

	long_1 = long_1;
	char_3 = char_1 + char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "r") < 0)
	{
	}
	v_SyBigEndianUnpack64(float_2,char_1);

	char_3 = char_2 * char_1;
}
short v_ReadInt32( int parameter_1,double parameter_2,double parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long_1 = v_SyBigEndianUnpack32(short_1,unsigned_int_1);

	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	float_1 = v_vedisOsRead(short_1,short_1,short_2);

	short_1 = short_1 * short_3;
	return short_4;
}
float v_vedisOsRead( short parameter_1,short parameter_3,short parameter_4)
{
	float float_1 = 1;
	return float_1;
}
unsigned int v_pager_read_journal_header( unsigned int parameter_1,short parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_5 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 * short_1;
	int_2 = int_1 + int_1;
	short_4 = short_1 * short_3;
	float_2 = float_1 + float_2;
	v_ReadInt64(float_3,short_2,unsigned_int_1);

	unsigned_int_3 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	if(1)
	{
	}
	short_1 = short_4 + short_4;
	double_1 = v_vedisOsFileSize(int_1,short_5);

	short_2 = v_ReadInt32(int_2,double_1,double_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1;
	int_2 = int_2 + int_1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	short_2 = short_2 + short_4;
	if(1)
	{
	}
	long_1 = v_SyMemcmp(int_3,double_2,int_1);

	double_3 = double_3;
	long_4 = long_2 + long_3;
	if(1)
	{
	}
	double_3 = double_2 * double_1;
	short_5 = short_5 + short_5;
	if(1)
	{
	}
	if(1)
	{
	}
	double_4 = double_2 * double_4;
	long_4 = long_2 + long_3;
	long_2 = long_1;
	return unsigned_int_1;
	float_3 = v_vedisOsRead(short_1,short_3,short_3);

}
int v_pager_playback( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1;
	char_1 = char_1 * char_2;
	unsigned_int_2 = v_SyMemBackendAlloc(int_1,unsigned_int_3,-1 );

	double_2 = double_1 + double_1;
	double_3 = v_vedisOsTruncate(long_2,long_3);

	short_1 = short_2;
	if(1)
	{
		if(1)
		{
			int_2 = int_1 + int_1;
		}
		int_3 = int_2;
	}
	double_3 = v_SyZero(long_1);

	float_1 = v_vedisOsSync(int_2,int_4);

	double_1 = double_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
	if(1)
	{
		int_3 = int_3 * int_3;
	}
	unsigned_int_6 = v_vedisGenErrorFormat(double_3,unsigned_int_7,short_3);

	short_4 = v_vedisGenOutofMem(char_2);

	double_3 = double_2 + double_1;
	short_4 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		double_4 = double_1 * double_3;
		if(1)
		{
			if(1)
			{
				short short_5 = 1;
				unsigned_int_3 = v_pager_read_journal_header(unsigned_int_3,short_3,long_2);

				float_1 = float_2 + float_1;
				short_2 = v_vedisGenError(int_4,long_1);

				unsigned_int_5 = v_pager_play_back_one_page(float_2,int_3,char_1);

				unsigned_int_5 = v_SyMemBackendFree(short_3);

				short_5 = short_1 + short_1;
			}
		}
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_6 + unsigned_int_1;
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		long_5 = long_2 * long_4;
	}
	return int_1;
}
float v_vedisOsSync( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	return float_1;
}
char v_vedisOsUnlock( long parameter_1,int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
long v_pager_unlock_db( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		char_1 = v_vedisOsUnlock(long_1,int_1);

		char_3 = char_1 + char_2;
	}
	return long_2;
}
void v_vedisOsDelete( short parameter_1,char parameter_2,int parameter_3)
{
}
double v_vedisOsFileSize( int parameter_1,short parameter_2)
{
	double double_1 = 1;
	return double_1;
}
long v_vedisOsCheckReservedLock( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
char v_vedisOsAccess( char parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	return char_1;
}
float v_pager_has_hot_journal( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	long_1 = v_vedisOsCheckReservedLock(float_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	char_1 = v_pager_lock_db(float_2,int_2);

	long_1 = long_2 * long_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
		char_2 = v_vedisOsAccess(char_1,int_2,int_3,int_3);

		v_vedisOsDelete(short_1,char_3,int_4);

		short_2 = short_1 * short_2;
		if(1)
		{
			short short_3 = 1;
			long_4 = v_pager_unlock_db(int_4,int_3);

			char_1 = char_3 + char_3;
			short_2 = short_1 * short_3;
			if(1)
			{
				if(1)
				{
					if(1)
					{
						double double_3 = 1;
						double double_4 = 1;
						unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
						double_4 = double_2 + double_3;
					}
				}
				if(1)
				{
					short short_4 = 1;
					short short_5 = 1;
					double_5 = v_vedisOsFileSize(int_4,short_1);

					short_5 = short_2 * short_4;
				}
			}
		}
	}
	return float_3;
}
void v_pager_journal_rollback( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_5 = 1;
	double double_4 = 1;
	short short_4 = 1;
	float float_4 = 1;
	char char_4 = 1;
	float_1 = v_pager_has_hot_journal(double_1,int_1);

	char_1 = char_1 * char_2;
	if(1)
	{
		float float_3 = 1;
		float_2 = float_3;
		float_2 = v_vedisOsOpen(double_1,short_1,long_1,unsigned_int_1,double_2);

		double_1 = double_1 + double_2;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	if(1)
	{
		double_2 = double_2 * double_3;
	}
	int_1 = int_2 + int_2;
	if(1)
	{
		double_3 = double_3 * double_2;
		int_4 = int_3 + int_3;
	}
	long_2 = long_2 + long_1;
	if(1)
	{
		int_3 = v_pager_playback(long_3);

		double_2 = double_3 * double_1;
		short_2 = v_vedisOsCloseFree(double_1,short_3);

		short_1 = short_2;
	}
	char_3 = char_1 * char_1;
	v_vedisOsDelete(short_2,char_2,int_1);

	long_5 = long_1 * long_4;
	short_1 = v_vedisGenError(int_5,long_3);

	short_3 = short_2;
	unsigned_int_1 = v_vedisGenErrorFormat(double_4,unsigned_int_1,short_4);

	double_3 = double_4 + double_2;
	char_2 = v_pager_lock_db(float_4,int_5);

	float_1 = v_vedisOsSync(int_5,int_5);

	long_5 = v_pager_unlock_db(int_2,int_4);

	char_4 = char_2 * char_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
}
int v_vedisOsLock( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	return int_1;
}
char v_pager_lock_db( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short_1 = v_vedisGenError(int_1,long_1);

	int_1 = int_1 + int_2;
	if(1)
	{
		int_3 = v_vedisOsLock(unsigned_int_1,int_2);

		int_2 = int_3 * int_2;
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 * long_2;
		}
		if(1)
		{
			int int_4 = 1;
			int_1 = int_4;
		}
	}
	return char_1;
}
double v_pager_wait_on_lock( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	char char_4 = 1;
	long long_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	char_1 = v_pager_lock_db(float_1,int_1);

	int_1 = int_1;
	float_2 = float_2 + float_1;
	long_2 = long_1 * long_1;
	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
	long_2 = long_3 * long_3;
	int_2 = int_1 * int_1;
	unsigned_int_5 = unsigned_int_3;
	double_2 = double_1;
	long_3 = long_3 * long_2;
	int_1 = int_2 + int_1;
	char_3 = char_2 * char_3;
	float_4 = float_3 * float_4;
	short_1 = short_1 * short_1;
	char_2 = char_4 * char_4;
	char_3 = char_4 + char_1;
	long_4 = long_2 * long_2;
	double_2 = double_2;
	if(1)
	{
	}
	return double_2;
}
short v_SyBlobFormatAp( long parameter_1,int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		if(1)
		{
		}
		int_2 = int_1 + int_1;
	}
	return short_1;
	v_FormatMount(float_1,float_2,long_1,unsigned_int_3,float_3,-1 );

}
unsigned int v_vedisGenErrorFormat( double parameter_1,unsigned int parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = short_1 * short_1;
	short_2 = v_SyBlobFormatAp(long_1,int_1,float_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_1 + int_1;
	int_1 = v_SyBlobAppend(char_1,int_1,float_2,-1 );

	unsigned_int_1 = unsigned_int_3;
	return unsigned_int_2;
}
float v_vedisOsOpen( double parameter_1,short parameter_2,long parameter_3,unsigned int parameter_4,double parameter_5)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_1;
	float_1 = float_2;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	double_1 = v_SyZero(long_1);

	long_4 = long_2 * long_3;
	if(1)
	{
	}
	unsigned_int_1 = v_SyMemBackendFree(short_1);

	float_2 = float_2 * float_3;
	int_1 = int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_3;
	}
	unsigned_int_2 = v_SyMemBackendAlloc(int_1,unsigned_int_2,-1 );

	char_1 = char_1 + char_1;
	return float_2;
}
unsigned int v_pager_shared_lock( unsigned int parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 + double_1;
	char controller4vul_1791[3];
	fgets(controller4vul_1791 ,3 ,stdin);
	if( strcmp( controller4vul_1791, "]`") > 0)
	{
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = double_1 + double_2;
		long_1 = long_1 + long_1;
		if(1)
		{
			double_1 = double_2 + double_1;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		char controller4vul_1792[2];
		fgets(controller4vul_1792 ,2 ,stdin);
		if( strcmp( controller4vul_1792, "R") < 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long long_2 = 1;
			float float_2 = 1;
			if(1)
			{
				int int_1 = 1;
				int_1 = int_1;
				if(1)
				{
				}
			}
			char_3 = char_1 * char_2;
			if(1)
			{
			}
			char controller4vul_1793[3];
			fgets(controller4vul_1793 ,3 ,stdin);
			if( strcmp( controller4vul_1793, "lA") > 0)
			{
				char controller4vul_1794[2];
				fgets(controller4vul_1794 ,2 ,stdin);
				if( strcmp( controller4vul_1794, "@") > 0)
				{
					int int_2 = 1;
					int int_3 = 1;
					int int_4 = 1;
					int_4 = int_2 * int_3;
					char controller4vul_1795[2];
					fgets(controller4vul_1795 ,2 ,stdin);
					if( strcmp( controller4vul_1795, "o") > 0)
					{
						short_1 = short_2;
						unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
						char controller4vul_1796[2];
						fgets(controller4vul_1796 ,2 ,stdin);
						if( strcmp( controller4vul_1796, "a") < 0)
						{
							short short_3 = 1;
							float_1 = v_vedisExportBuiltinVfs(uni_para);

							short_3 = short_3;
							char_3 = char_2 + char_2;
						}
					}
					if(1)
					{
						char_2 = char_1 * char_3;
						long_2 = long_2 + long_2;
					}
				}
			}
			char_1 = char_2;
			float_1 = float_2 + float_1;
			if(1)
			{
				unsigned_int_3 = unsigned_int_2;
				if(1)
				{
					short short_4 = 1;
					double double_3 = 1;
					long long_3 = 1;
					short_2 = short_1 * short_4;
					double_3 = double_3 * double_1;
					long_2 = long_2 + long_3;
				}
			}
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		}
	}
	return unsigned_int_3;
}
void v_vedisPagerAcquire( long parameter_1,char parameter_2,float parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	double_2 = double_1 * double_2;
	float_1 = v_page_ref(float_2);

	long_2 = long_1 + long_1;
	char_1 = v_pager_link_page(unsigned_int_1,int_1);

	int_1 = int_1 * int_1;
	if(1)
	{
	}
	unsigned_int_1 = v_pager_alloc_page(int_1,short_1);

	float_4 = float_3 * float_3;
	if(1)
	{
		int int_3 = 1;
		if(1)
		{
			float float_5 = 1;
			float_5 = float_2;
		}
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int_2 = int_2 + int_2;
		if(1)
		{
			long_2 = v_SyMemBackendPoolFree(short_2);

			double_3 = double_3;
		}
		char_2 = v_pager_fetch_page(unsigned_int_2,long_2);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		if(1)
		{
			char char_3 = 1;
			unsigned_int_4 = v_pager_shared_lock(unsigned_int_5,-1 );

			char_3 = char_1 + char_2;
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		if(1)
		{
			short_2 = v_vedisGenOutofMem(char_1);

			double_1 = double_3 * double_1;
		}
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2;
	}
	double_3 = v_pager_get_page_contents(long_3,unsigned_int_6,int_5);

}
double v_vedisKvIoPageGet( unsigned int parameter_1,char parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float_2 = float_1 * float_1;
	v_vedisPagerAcquire(long_1,char_1,float_3,int_1,int_1);

	int_3 = int_1 + int_2;
	return double_1;
}
float v_pager_kv_io_init( unsigned int parameter_1,unsigned int parameter_2,long parameter_3,int uni_para)
{
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short_1 = v_vedisKvIopageWrite(long_1,uni_para);

	short_2 = short_2;
	int_1 = int_1;
	int_4 = int_2 + int_3;
	short_4 = short_3 * short_3;
	double_1 = double_1;
	long_2 = long_2 + long_1;
	double_1 = double_1;
	int_4 = int_4 * int_5;
	short_5 = short_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	double_3 = double_2 + double_3;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
	int_5 = int_1 * int_4;
	int_4 = int_2 + int_2;
	return float_2;
}
short v_vedisGenOutofMem( char parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short_1 = v_vedisGenError(int_1,long_1);

	int_1 = int_2 * int_2;
	int_3 = int_1;
	return short_2;
}
unsigned int v_vedisReleaseCursor( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_1;
	long_1 = long_1;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2 * long_1;
	}
	long_2 = v_SyMemBackendPoolFree(short_1);

	double_3 = double_2 + double_3;
	return unsigned_int_1;
}
long v_pager_release_kv_engine()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		float float_3 = 1;
		unsigned_int_3 = v_SyMemBackendFree(short_1);

		float_3 = float_3 * float_3;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	unsigned_int_1 = v_vedisReleaseCursor(unsigned_int_1,int_1);

	int_2 = int_1 + int_2;
	int_3 = int_1 + int_2;
	int_4 = int_2 * int_4;
	return long_1;
}
unsigned int v_vedisPagerRegisterKvEngine( char parameter_1,short parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 * short_1;
	long_2 = long_1 * long_1;
	short_1 = short_3 + short_1;
	float_1 = float_2;
	float_1 = float_1;
	double_2 = double_1 + double_1;
	char controller4vul_1783[3];
	fgets(controller4vul_1783 ,3 ,stdin);
	if( strcmp( controller4vul_1783, "8m") > 0)
	{
		char controller4vul_1784[2];
		fgets(controller4vul_1784 ,2 ,stdin);
		if( strcmp( controller4vul_1784, "-") < 0)
		{
			float_2 = v_pager_kv_io_init(unsigned_int_1,unsigned_int_1,long_3,uni_para);

		}
		int_1 = int_2;
	}
	short_2 = short_1 * short_4;
	short_2 = short_1 * short_3;
	if(1)
	{
		int_2 = int_2 + int_3;
	}
	int_3 = int_1 * int_3;
	if(1)
	{
		short_3 = short_3;
		double_3 = double_2 * double_1;
	}
	char_1 = char_1 + char_1;
	double_4 = double_4 + double_1;
	double_3 = double_2 + double_3;
	double_4 = double_2;
	if(1)
	{
		int_1 = int_3;
		if(1)
		{
			short_1 = short_3 + short_4;
			float_2 = float_1 + float_2;
		}
		long_4 = long_2 * long_2;
	}
	int_1 = int_2;
	long_4 = long_1;
	if(1)
	{
		double double_5 = 1;
		double_1 = double_5;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	long_3 = long_3 + long_3;
	return unsigned_int_2;
}
void v_randomByte( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_1;
	double_1 = double_1 + double_2;
	long_1 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	int_3 = int_1 + int_2;
}
double v_SyRandomness( unsigned int parameter_1,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int_1 = int_1;
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
			float float_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_1 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_5 = 1;
			if(1)
			{
				double double_1 = 1;
				double_1 = double_1 + double_2;
			}
			float_3 = float_1 + float_2;
			int_2 = int_1 + int_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			}
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
			v_randomByte(long_1);

			short_1 = short_1;
			if(1)
			{
				short short_2 = 1;
				short_2 = short_1 + short_1;
			}
			unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
			double_3 = double_2 + double_2;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_2 = char_1 * char_1;
			}
			unsigned_int_5 = unsigned_int_2 * unsigned_int_2;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
		}
	}
	return double_2;
}
double v_SyOSUtilRandomSeed(float parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	return double_1;
	short_1 = v_SyMemcpy(float_1,short_2);

}
long v_SyRandomnessInit( float parameter_1,float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	float_1 = float_2;
	char_2 = char_1 * char_1;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	double_2 = double_2 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_2 * double_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 * long_2;
		double_3 = double_3 + double_2;
		double_3 = v_SyOSUtilRandomSeed(float_1);

		int_2 = int_1 * int_2;
		int_1 = int_2 * int_2;
	}
	int_2 = int_2 + int_3;
	return long_3;
}
short v_vedisGenError( int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int_2 = int_1 * int_2;
	v_SyStrlen(unsigned_int_1);

	float_1 = float_1 + float_1;
	int_2 = int_2;
	return short_1;
	int_1 = v_SyBlobAppend(char_1,int_2,float_2,-1 );

}
void v_vedisFindKVStore( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int_1 = int_1;
	short_2 = short_1 + short_1;
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1 + double_1;
		if(1)
		{
		}
	}
	v_SyStrlen(unsigned_int_1);

	long_1 = v_SyStrnicmp(float_1,double_1,char_2);

}
long v_SyStrnicmp( float parameter_1,double parameter_2,char parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long_1 = long_1;
	int_1 = int_2;
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
		}
		if(1)
		{
			long_2 = long_1 + long_1;
		}
		double_1 = double_2 + double_3;
		short_1 = short_2;
		int_2 = int_1 * int_3;
		if(1)
		{
		}
		if(1)
		{
			float_1 = float_1 + float_1;
		}
		float_2 = float_1 + float_2;
		long_3 = long_2 * long_2;
		double_4 = double_1 + double_1;
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		int_4 = int_3 * int_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_3;
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
		}
		double_4 = double_5 * double_6;
		float_1 = float_2 * float_2;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	}
	return long_2;
}
long v_vedisInMemory( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	v_SyStrlen(unsigned_int_1);

	double_1 = double_1 + double_1;
	if(1)
	{
	}
	long_1 = v_SyStrnicmp(float_1,double_1,char_1);

	double_3 = double_2 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return long_2;
}
char v_vedisPagerOpen( unsigned int parameter_1,char parameter_2,long parameter_3,int parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_4 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_3 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_7 = 1;
	long long_8 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_1;
	float_3 = float_3 + float_1;
	float_3 = float_2 + float_3;
	int_2 = int_1 * int_1;
	char_1 = char_2;
	if(1)
	{
		double_2 = double_1 + double_1;
		int_2 = int_2 * int_2;
	}
	char controller4vul_1781[3];
	fgets(controller4vul_1781 ,3 ,stdin);
	if( strcmp( controller4vul_1781, "3>") > 0)
	{
		float_2 = float_1;
		char controller4vul_1782[2];
		fgets(controller4vul_1782 ,2 ,stdin);
		if( strcmp( controller4vul_1782, "@") < 0)
		{
			unsigned_int_1 = v_vedisPagerRegisterKvEngine(char_2,short_1,uni_para);

			long_2 = long_1 + long_2;
		}
	}
	if(1)
	{
		float_4 = float_1 * float_1;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	double_5 = double_3 * double_4;
	int_1 = int_1 + int_1;
	if(1)
	{
		char char_3 = 1;
		char_1 = char_3;
	}
	unsigned_int_3 = unsigned_int_4;
	short_1 = short_1 * short_1;
	if(1)
	{
		double_5 = double_6 * double_5;
		float_5 = float_4 * float_5;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
	}
	long_2 = long_3 * long_4;
	double_2 = double_4 + double_6;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	char_4 = char_4 * char_1;
	float_2 = float_5 + float_3;
	float_3 = float_6 + float_3;
	unsigned_int_1 = unsigned_int_5;
	if(1)
	{
		char char_7 = 1;
		int_2 = int_2 + int_1;
		char_7 = char_5 + char_6;
	}
	double_1 = double_1 * double_3;
	float_5 = float_1 + float_4;
	long_3 = long_3 * long_3;
	double_2 = double_5 * double_2;
	int_2 = int_1 * int_3;
	float_6 = float_7 * float_5;
	unsigned_int_2 = unsigned_int_6;
	double_2 = double_1 + double_2;
	long_5 = long_3;
	if(1)
	{
		long long_6 = 1;
		int int_4 = 1;
		short short_4 = 1;
		int_3 = int_2;
		int_1 = int_3 + int_3;
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		if(1)
		{
			short_3 = short_2 * short_2;
			char_6 = char_5 + char_6;
			long_4 = long_6 + long_3;
		}
		if(1)
		{
			double_2 = double_1 + double_5;
		}
		long_1 = long_5;
		if(1)
		{
			double double_7 = 1;
			double_2 = double_7 + double_7;
			int_1 = int_4;
		}
		long_6 = long_5 * long_4;
		short_2 = short_4;
		int_1 = int_4 + int_4;
	}
	char_4 = char_5;
	if(1)
	{
		char_4 = char_5 * char_1;
	}
	if(1)
	{
		long long_9 = 1;
		short short_5 = 1;
		long_9 = long_7 + long_8;
		short_2 = short_2 * short_5;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_5 = unsigned_int_7 + unsigned_int_1;
		short_1 = short_1 * short_3;
	}
	long_8 = long_7;
	return char_6;
}
long v_vedisSanityzeFlag( double parameter_1)
{
	short short_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short_1 = short_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		double double_1 = 1;
		int int_3 = 1;
		double_1 = double_1 * double_1;
		int_2 = int_3 * int_2;
	}
	if(1)
	{
		char char_1 = 1;
		if(1)
		{
			char char_2 = 1;
			char_1 = char_1 * char_2;
		}
		if(1)
		{
			char char_3 = 1;
			char_3 = char_1 * char_1;
		}
	}
	return long_1;
}
short v_vedisInitDatabase( unsigned int parameter_1,short parameter_2,int parameter_3,float parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int_3 = int_1 * int_2;
	float_1 = float_2;
	double_1 = double_2;
	char controller4vul_1780[2];
	fgets(controller4vul_1780 ,2 ,stdin);
	if( strcmp( controller4vul_1780, "#") > 0)
	{
		double double_3 = 1;
		char_1 = v_vedisPagerOpen(unsigned_int_1,char_2,long_1,int_3,uni_para);

		double_2 = double_3 * double_3;
	}
	char_4 = char_2 + char_3;
	int_3 = int_4;
	int_2 = int_3 * int_4;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	float_4 = float_3 * float_3;
	int_5 = int_5 * int_1;
	char_3 = char_1;
	int_6 = int_4 * int_5;
	if(1)
	{
	}
	int_7 = int_6 + int_6;
	double_2 = double_2 + double_4;
	int_4 = int_2 + int_7;
	return short_1;
}
short v_lhCursorReset()
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_2 = long_1 + long_1;
	return short_1;
	float_1 = v_lhCursorFirst(float_2);

}
double v_lhCursorData( short parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = v_lhConsumeCellData(int_1,double_1,unsigned_int_1);

	char_1 = char_1;
	short_2 = short_1 + short_1;
	double_3 = double_2 * double_1;
	if(1)
	{
	}
	int_2 = int_3;
	double_1 = double_1 * double_3;
	return double_2;
}
double v_lhCursorDataLength( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_3 = int_1 + int_2;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	float_1 = float_2;
	double_1 = double_1 * double_2;
	return double_1;
}
double v_lhCursorKey( double parameter_1,char parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = v_lhConsumeCellkey(double_1,unsigned_int_1,double_2,int_3);

	double_1 = double_1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	return double_1;
}
long v_lhCursorKeyLength( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_1 = long_1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	float_2 = float_1 + float_1;
	return long_1;
}
float v_lhRecordRemove( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float_1 = float_1 * float_2;
	v_lhUnlinkCell(int_1);

	float_4 = float_1 + float_3;
	if(1)
	{
		float float_5 = 1;
		float float_6 = 1;
		unsigned int unsigned_int_1 = 1;
		float_6 = float_5 + float_1;
		unsigned_int_1 = unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			short short_1 = 1;
			v_SyBigEndianUnpack64(float_1,char_1);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
			}
			double_1 = double_1 + double_1;
			char_1 = char_1 * char_1;
			if(1)
			{
			}
			short_1 = short_1;
			if(1)
			{
				double double_2 = 1;
				long_1 = v_lhRestorePage(int_2,char_2);

				double_2 = double_2;
			}
		}
	}
	int_4 = int_3 + int_2;
	return float_2;
}
long v_lhCursorDelete( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short_2 = short_1 + short_1;
	char_1 = char_1 * char_1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	float_1 = v_lhRecordRemove(unsigned_int_1);

	int_2 = int_1 * int_2;
	int_3 = int_1 * int_1;
	return long_1;
}
char v_lhCursorPrev( float parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float_1 = float_1;
	long_1 = long_1 + long_2;
	long_2 = v_lhCursorPrevPage();

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_2 = float_3;
	}
	double_2 = double_1 + double_1;
	char_2 = char_1 * char_1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	return char_2;
}
short v_lhCursorNext( unsigned int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int_1 = v_lhCursorNextPage(double_1);

	char_3 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
		double_1 = double_1;
	}
	float_2 = float_1 * float_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2 * float_1;
	}
	return short_1;
}
long v_lhCursorValid( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_1;
	return long_1;
}
long v_lhCursorPrevPage()
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_4 = 1;
	double_1 = double_1 * double_2;
	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
		}
		if(1)
		{
			float_3 = v_lhLoadPage(unsigned_int_1,int_1,unsigned_int_2,int_1,int_2);

			int_2 = int_3 + int_1;
			int_2 = int_1;
		}
		double_4 = double_3 + double_3;
		short_1 = short_1 * short_1;
		if(1)
		{
		}
		if(1)
		{
			char char_1 = 1;
			long long_3 = 1;
			char_1 = char_1;
			int_3 = int_1;
			long_3 = long_2 + long_2;
			long_4 = long_1;
		}
		short_2 = short_1 * short_1;
	}
	return long_4;
}
char v_lhCursorLast()
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 + int_1;
	long_1 = long_1;
	int_3 = int_2 + int_1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
		if(1)
		{
		}
		char_1 = char_1 * char_1;
	}
	long_2 = v_lhCursorPrevPage();

	float_1 = float_1 + float_2;
	double_2 = double_1 + double_2;
	return char_1;
}
int v_lhCursorNextPage( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_8 = 1;
	short_2 = short_1 * short_1;
	int_2 = int_1 * int_2;
	double_1 = double_1 + double_1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		int int_4 = 1;
		long long_3 = 1;
		short_2 = short_1;
		if(1)
		{
			int_3 = int_2 * int_2;
		}
		if(1)
		{
			long long_1 = 1;
			unsigned_int_1 = unsigned_int_1;
			long_1 = long_2;
		}
		int_2 = int_2 + int_4;
		long_3 = long_2 + long_2;
		if(1)
		{
		}
		if(1)
		{
			int int_7 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
			float_1 = v_lhLoadPage(unsigned_int_1,int_5,unsigned_int_2,int_3,int_6);

			int_7 = int_7;
			char_2 = char_1 + char_1;
			double_2 = double_1 + double_1;
		}
		int_3 = int_3;
	}
	return int_8;
}
float v_lhCursorFirst( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long_1 = long_2;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "DV") < 0)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
		int_1 = int_1 * int_1;
	}
	int_3 = int_2 * int_1;
	int_2 = v_lhCursorNextPage(double_3);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return float_1;
}
char v_lhRecordLookup( unsigned int parameter_1,int parameter_2,double parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	long long_5 = 1;
	char char_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_2;
	float_1 = float_1 * float_1;
	long_2 = long_1 * long_2;
	long_2 = long_3 + long_3;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
	}
	v_lhMapFindBucket(unsigned_int_3,short_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	float_2 = v_lhLoadPage(unsigned_int_2,int_1,unsigned_int_3,int_3,int_2);

	float_3 = float_1 * float_2;
	if(1)
	{
		long long_4 = 1;
		long_4 = long_1 * long_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_2 = int_2 + int_2;
	if(1)
	{
	}
	short_2 = short_2 + short_3;
	if(1)
	{
	}
	if(1)
	{
		float float_4 = 1;
		int_4 = v_lhFindCell(char_3,short_1,long_5,unsigned_int_1);

		float_4 = float_2 + float_4;
	}
	return char_4;
}
double v_lhCursorSeek( float parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	char_2 = char_1 + char_1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		int_1 = int_1;
		int_1 = int_2;
	}
	char_1 = v_lhRecordLookup(unsigned_int_4,int_1,double_3,float_1);

	unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
	return double_4;
}
int v_lhInitCursor()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_1;
	char_2 = char_1 + char_1;
	char_1 = char_1;
	float_1 = float_2;
	int_3 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	return int_4;
}
short v_lhash_kv_append( int parameter_1,int parameter_2,int parameter_3,int parameter_4,long parameter_5)
{
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_1 = v_lh_record_insert(double_1,float_1,short_1,char_1,unsigned_int_1,int_1);

	int_3 = int_1 + int_2;
	int_1 = int_1 + int_3;
	return short_1;
}
long v_lhRestorePage( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	double_2 = v_SyBigEndianPack64(char_1,double_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 + short_2;
	int_3 = int_2 * int_1;
	return long_1;
}
unsigned int v_lhRecordOverwrite( double parameter_1,double parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_4 = 1;
	long long_1 = 1;
	int int_6 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_5 = 1;
	float float_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	short short_5 = 1;
	long long_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	short_1 = short_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	int_1 = int_1;
	float_2 = float_1 + float_2;
	int_1 = int_1 * int_1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_1;
		if(1)
		{
			char_2 = char_1 * char_1;
		}
		if(1)
		{
			short_2 = short_3;
			unsigned_int_4 = v_lhCellWriteOvflPayload(int_3,float_2,char_3,float_3);

			int_5 = int_2 + int_4;
			float_2 = float_4 * float_3;
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			int_2 = int_5 * int_1;
			int_2 = int_3;
			if(1)
			{
				int_3 = int_6 * int_6;
				if(1)
				{
				}
				long_2 = v_lhAllocateSpace(short_3,char_3,long_2);

				unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
				int_1 = v_lhAcquirePage(float_4,float_4);

				unsigned_int_2 = unsigned_int_6 * unsigned_int_5;
				char_3 = char_2 * char_4;
			}
			if(1)
			{
				unsigned int unsigned_int_8 = 1;
				unsigned_int_9 = unsigned_int_7 + unsigned_int_8;
				double_4 = double_2 * double_3;
				int_4 = int_3 * int_2;
				float_2 = float_4 + float_4;
			}
		}
	}
	long_2 = long_3;
	if(1)
	{
	}
	long_3 = long_4 + long_4;
	char_1 = char_5 + char_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short_1 = v_SyMemcpy(float_5,short_2);

			double_4 = v_SyBigEndianPack64(char_2,double_3);

			int_3 = int_6 + int_3;
		}
		if(1)
		{
			short short_4 = 1;
			v_SyBigEndianUnpack64(float_4,char_4);

			short_4 = short_3 * short_2;
		}
		char_7 = char_5 + char_6;
		if(1)
		{
			float_4 = float_5 * float_2;
			double_3 = double_3 + double_1;
		}
	}
	double_3 = double_1 + double_1;
	unsigned_int_7 = unsigned_int_4;
	short_5 = v_lhRestoreSpace(long_3,short_1,int_5);

	unsigned_int_7 = v_lhMoveLocalCell(int_5,char_6,int_4,float_4);

	int_3 = int_3 * int_3;
	int_5 = int_3 + int_6;
	int_6 = int_4;
	if(1)
	{
	}
	long_5 = long_4 * long_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_10 = 1;
		double_5 = double_4 + double_4;
		if(1)
		{
			char_1 = char_5 + char_2;
		}
		if(1)
		{
			int int_7 = 1;
			long_4 = long_3;
			if(1)
			{
			}
			double_5 = double_3 * double_5;
			if(1)
			{
			}
			long_3 = long_5;
			long_5 = long_3 + long_1;
			long_4 = long_2 + long_1;
			double_1 = double_3 + double_4;
			long_1 = v_lhRestorePage(int_5,char_5);

			unsigned_int_3 = unsigned_int_5 + unsigned_int_10;
			int_7 = int_7;
		}
		long_3 = long_5 * long_5;
		unsigned_int_10 = unsigned_int_6 + unsigned_int_1;
		if(1)
		{
			float_1 = float_5 + float_4;
		}
		unsigned_int_9 = unsigned_int_5 + unsigned_int_1;
		char_7 = char_5;
		float_5 = float_2 + float_1;
	}
	double_6 = double_3 * double_5;
	long_4 = long_1 + long_4;
	long_1 = long_1 * long_4;
	return unsigned_int_1;
}
unsigned int v_lhMoveLocalCell( int parameter_1,char parameter_2,int parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = v_lhFindSibeling(float_1);

	unsigned_int_3 = unsigned_int_4;
	int_3 = int_1 * int_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int_3 = int_4 * int_4;
		int_2 = int_3 + int_4;
	}
	if(1)
	{
		int int_5 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_2 = int_5 * int_2;
		v_SyBigEndianPack16(long_1,float_2);

		double_3 = double_1 * double_2;
	}
	unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
	char_2 = char_1 * char_1;
	char_1 = v_lhCellWriteLocalPayload(short_1,unsigned_int_6,short_1,long_1,long_2);

	float_2 = v_lhCellWriteHeader(unsigned_int_1);

	int_2 = int_1 + int_4;
	unsigned_int_7 = unsigned_int_6 * unsigned_int_2;
	return unsigned_int_1;
}
double v_lhRecordAppend( short parameter_1,long parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	double double_6 = 1;
	short short_4 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_5 = 1;
	short short_6 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_7 = 1;
	long long_7 = 1;
	double double_8 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_9 = 1;
	long long_9 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char char_5 = 1;
	char char_6 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double_1 = double_2;
	short_2 = short_1 + short_2;
	long_1 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_2 * short_2;
	double_3 = v_SyBigEndianPack64(char_1,double_2);

	short_2 = short_3 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	long_2 = long_3;
	int_2 = int_1 + int_2;
	if(1)
	{
		short_2 = short_1;
	}
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		double_5 = double_4 * double_1;
		char_1 = char_2 + char_2;
		if(1)
		{
			char char_3 = 1;
			char_2 = char_3 * char_3;
			if(1)
			{
			}
			double_6 = double_6 * double_1;
			double_6 = double_3 + double_3;
			unsigned_int_4 = unsigned_int_1;
		}
		if(1)
		{
			long long_8 = 1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			int_2 = int_1 + int_1;
			char_2 = char_2 + char_2;
			long_1 = v_lhAllocateSpace(short_4,char_1,long_4);

			int_1 = v_lhAcquirePage(float_1,float_2);

			short_6 = short_5 + short_2;
			int_2 = int_1 + int_2;
			if(1)
			{
				long_6 = long_5 * long_3;
			}
			if(1)
			{
				double_2 = double_4 * double_7;
			}
			long_7 = long_7 + long_5;
			long_2 = long_4 * long_8;
			double_1 = double_6 * double_8;
		}
	}
	double_4 = double_2 + double_8;
	if(1)
	{
	}
	unsigned_int_4 = v_SyBlobInit(char_2,long_2);

	int_4 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_5;
	long_4 = long_3;
	double_8 = double_7 * double_9;
	long_9 = long_5 + long_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				long_9 = long_9 * long_9;
			}
			v_SyBigEndianUnpack64(float_1,char_4);

			unsigned_int_2 = unsigned_int_6 * unsigned_int_2;
			if(1)
			{
			}
			unsigned_int_4 = unsigned_int_1;
			int_3 = int_3 * int_3;
			double_9 = double_2 * double_2;
			double_8 = double_8 + double_2;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_6;
			short_1 = short_6 * short_4;
		}
		if(1)
		{
			int_4 = int_4 + int_1;
			int_2 = int_3 + int_2;
		}
		if(1)
		{
			double_4 = double_3 + double_3;
		}
		float_3 = float_2 * float_2;
	}
	int_2 = int_5 * int_6;
	unsigned_int_1 = unsigned_int_7;
	int_1 = int_2 * int_7;
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_10 = 1;
		double double_13 = 1;
		long long_10 = 1;
		double_9 = double_9 + double_1;
		if(1)
		{
			double_6 = double_4 + double_2;
		}
		if(1)
		{
			double double_11 = 1;
			double double_12 = 1;
			double_10 = double_11;
			if(1)
			{
			}
			short_5 = v_SyBlobRelease(long_1);

			double_3 = double_9 + double_12;
			if(1)
			{
			}
			int_3 = int_7 + int_1;
			unsigned_int_7 = unsigned_int_3 * unsigned_int_1;
			long_6 = long_5 * long_7;
			double_6 = double_10 * double_5;
			double_7 = double_13;
			int_7 = int_6 * int_6;
		}
		short_2 = v_lhRestoreSpace(long_1,short_2,int_6);

		double_1 = double_4 * double_4;
		long_10 = long_7 * long_7;
		if(1)
		{
			int_8 = v_SyBlobAppend(char_5,int_1,float_3,-1 );

			int_1 = int_1 * int_4;
		}
		unsigned_int_6 = unsigned_int_6;
		char_4 = char_6 * char_4;
		unsigned_int_3 = v_lhMoveLocalCell(int_4,char_2,int_1,float_1);

		short_1 = v_SyMemcpy(float_4,short_3);

		double_10 = double_13 + double_2;
	}
	short_5 = short_3 + short_5;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
	unsigned_int_3 = v_lhCellWriteOvflPayload(int_8,float_3,char_6,float_5);

	short_1 = short_4 + short_6;
	return double_1;
}
char v_lhFindSibeling( float parameter_1)
{
	char char_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
		}
	}
	return char_1;
}
void v_lhUnlinkCell( int parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	double double_5 = 1;
	v_SyBigEndianPack16(long_1,float_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 * float_2;
	short_1 = v_lhRestoreSpace(long_2,short_1,int_1);

	int_1 = int_1 * int_2;
	double_2 = double_1 * double_1;
	short_1 = v_lhCellDiscard(char_1);

	float_3 = float_3 * float_2;
	double_2 = double_3 * double_4;
	if(1)
	{
	}
	char_1 = char_2 + char_2;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
		int_2 = int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double_5 = double_4 * double_1;
		char_2 = v_lhFindSibeling(float_2);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		long_1 = long_2 + long_1;
	}
	float_1 = float_3;
	double_5 = double_2 * double_4;
}
int v_lhConsumeCellData( int parameter_1,double parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	char char_2 = 1;
	int int_9 = 1;
	double_1 = double_2;
	double_3 = double_3;
	long_3 = long_1 + long_2;
	v_SyBigEndianUnpack64(float_1,char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
		double_4 = double_3 * double_1;
		if(1)
		{
			char_1 = char_2 + char_2;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_5 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float_1 = float_1;
		int_4 = int_3 * int_3;
		int_4 = int_4;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		float_1 = float_2 * float_3;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		int_4 = int_5;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_3 = 1;
			int int_6 = 1;
			int int_7 = 1;
			char char_4 = 1;
			if(1)
			{
				long_2 = long_3 * long_2;
			}
			char_1 = char_3;
			if(1)
			{
			}
			double_1 = double_3 + double_2;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
				int_2 = int_1 * int_5;
				int_2 = int_6 * int_5;
			}
			if(1)
			{
				float_3 = float_2 * float_1;
				int_7 = int_6 * int_2;
			}
			if(1)
			{
				int_7 = int_2 * int_7;
				if(1)
				{
					double double_5 = 1;
					double_3 = double_5 * double_5;
				}
				double_1 = double_3;
			}
			if(1)
			{
				if(1)
				{
					double double_6 = 1;
					unsigned int unsigned_int_5 = 1;
					double_6 = double_3 * double_4;
					if(1)
					{
						int int_8 = 1;
						int_2 = int_8 + int_5;
					}
					unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
				}
			}
			char_4 = char_3 * char_2;
			double_1 = double_2;
		}
		short_4 = short_2 + short_3;
	}
	return int_9;
}
void v_SyBlobReset( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long_2 = long_1 + long_1;
		double_1 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_1;
	}
}
short v_SyBlobDup( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
		short short_2 = 1;
		int_1 = v_SyBlobAppend(char_1,int_2,float_1,-1 );

		short_2 = short_1 * short_1;
	}
	return short_1;
}
void v_lhTransferCell( long parameter_1,long parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char_1 = v_lhInstallCell();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_2;
	double_2 = double_1 * double_3;
	int_2 = int_1 + int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
		}
	}
	double_1 = double_3 * double_2;
	if(1)
	{
	}
	unsigned_int_3 = v_lhFindSlavePage(double_4,unsigned_int_4,float_1,long_1);

	char_2 = char_1 + char_1;
	double_5 = double_1 * double_4;
	float_2 = float_1 * float_1;
	double_2 = v_lhNewCell(short_1,short_1);

	short_3 = short_2 * short_1;
	short_1 = v_SyBlobDup(int_1,int_3);

	unsigned_int_4 = unsigned_int_2;
	float_1 = v_lhCellWriteHeader(unsigned_int_3);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	double_7 = double_4 + double_6;
	double_7 = double_8;
	double_1 = double_3 + double_7;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	long_2 = v_lhAllocateSpace(short_1,char_2,long_3);

}
void v_lhPageSplit( short parameter_1,short parameter_2,short parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	char char_1 = 1;
	long long_3 = 1;
	char char_2 = 1;
	double double_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	long long_4 = 1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = v_lhConsumeCellkey(double_1,unsigned_int_2,double_2,int_1);

	double_2 = double_2;
	int_3 = int_2 * int_1;
	short_3 = short_2;
	float_3 = float_1 * float_2;
	double_2 = double_3 + double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		if(1)
		{
			int_2 = int_3 + int_1;
		}
		v_lhTransferCell(long_1,long_2);

		int_4 = int_1 * int_4;
		int_5 = v_lhConsumeCellData(int_2,double_4,unsigned_int_3);

		double_2 = double_5;
		if(1)
		{
			float float_4 = 1;
			short short_4 = 1;
			float float_5 = 1;
			float_4 = float_1 * float_4;
			if(1)
			{
				char_1 = v_lhStoreCell(long_3,short_1,char_2,double_6,char_2,double_2,int_6);

				short_2 = short_4 * short_4;
			}
			if(1)
			{
				v_lhUnlinkCell(int_7);

				int_3 = int_6 + int_1;
				if(1)
				{
					short_2 = short_3 * short_4;
					if(1)
					{
						short_3 = v_SyBlobRelease(long_1);

						float_2 = float_5 * float_1;
					}
				}
				int_3 = int_4 * int_7;
				if(1)
				{
					double_5 = v_vedisDataConsumer(long_3,char_3);

					int_2 = int_1 * int_4;
				}
				long_3 = long_1 + long_2;
			}
			if(1)
			{
				short_2 = short_4 + short_3;
			}
			float_4 = float_5 + float_5;
		}
		double_1 = double_5 + double_2;
	}
	v_SyBlobReset(unsigned_int_4);

	int_3 = int_1;
	double_7 = double_1 * double_5;
	unsigned_int_4 = v_SyBlobInit(char_2,long_4);

}
long v_lhSplit( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	float float_4 = 1;
	double double_3 = 1;
	int int_6 = 1;
	double double_4 = 1;
	short short_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_3 = 1;
	float_2 = float_1 + float_2;
	v_lhMapFindBucket(unsigned_int_1,short_1);

	char_2 = char_1 + char_1;
	int_3 = int_1 + int_2;
	double_1 = double_1 + double_1;
	int_1 = int_4 * int_5;
	int_4 = v_lhAcquirePage(float_3,float_1);

	double_1 = double_1;
	if(1)
	{
	}
	float_3 = v_lhLoadPage(unsigned_int_2,int_5,unsigned_int_1,int_4,int_3);

	int_4 = int_1 * int_4;
	if(1)
	{
	}
	char_1 = v_lhSetEmptyPage(int_5);

	unsigned_int_3 = unsigned_int_1;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if(remainder_check(controller_3,100,2))
	{
	}
	float_1 = float_2;
	if(1)
	{
	}
	v_lhPageSplit(short_2,short_1,short_3,int_4);

	double_1 = v_SyBigEndianPack64(char_3,double_1);

	long_2 = long_1 + long_1;
	if(1)
	{
		double_1 = double_2 + double_2;
	}
	long_1 = v_lhMapWriteRecord(short_3,double_2,long_1);

	float_2 = float_3 * float_4;
	if(1)
	{
		float float_5 = 1;
		float_5 = float_5;
	}
	if(1)
	{
		double_1 = double_3 + double_3;
	}
	int_6 = int_5 + int_1;
	if(1)
	{
		double_2 = double_3 + double_4;
	}
	v_lhNewPage(int_3,short_4,char_2);

	double_6 = double_5 * double_2;
	int_4 = int_1;
	if(1)
	{
	}
	if(1)
	{
		int int_7 = 1;
		double_1 = double_6;
		int_6 = int_7 + int_4;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			int int_8 = 1;
			int_2 = int_5 * int_8;
		}
		double_2 = double_2;
		double_5 = double_3 * double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	}
	int_4 = int_4 + int_6;
	return long_3;
}
char v_lhRecordInstall( char parameter_1,short parameter_2,unsigned int parameter_3,short parameter_4,int parameter_5,long parameter_6)
{
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char_1 = v_lhStoreCell(long_1,short_1,char_2,double_1,char_1,double_2,int_1);

	long_1 = v_lhSplit(float_1,int_2);

	int_3 = int_3 + int_3;
	long_2 = long_1 * long_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_3 = double_3 * double_4;
		if(1)
		{
			float float_2 = 1;
			if(1)
			{
			}
			float_2 = float_1 + float_2;
		}
	}
	return char_3;
}
long v_lhKeyCmp( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
		}
	}
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	return long_1;
}
int v_lhFindCell( char parameter_1,short parameter_2,long parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double double_4 = 1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			if(1)
			{
				long long_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				float float_4 = 1;
				long long_2 = 1;
				long_1 = long_1 * long_1;
				unsigned_int_2 = v_lhConsumeCellkey(double_1,unsigned_int_4,double_2,int_1);

				double_2 = double_1 + double_1;
				float_2 = float_3;
				float_1 = float_4 * float_4;
				double_2 = double_3 * double_2;
				long_3 = long_2 + long_1;
				if(1)
				{
				}
			}
			if(1)
			{
			}
		}
		double_3 = double_4 + double_1;
	}
	return int_2;
	long_3 = v_lhKeyCmp(char_1,char_2);

}
double v_vedisDataConsumer( long parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 * double_1;
	int_1 = v_SyBlobAppend(char_1,int_1,float_1,-1 );

	unsigned_int_1 = unsigned_int_2;
	return double_1;
}
unsigned int v_lhConsumeCellkey( double parameter_1,unsigned int parameter_2,double parameter_3,int parameter_6)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int_1 = int_1 + int_1;
	long_1 = long_2;
	char_1 = char_1;
	v_SyBigEndianUnpack64(float_1,char_2);

	long_1 = long_2;
	double_2 = double_1 + double_1;
	if(1)
	{
		int_1 = int_1 + int_1;
		short_2 = short_1 * short_1;
		if(1)
		{
			char_3 = char_1 + char_1;
		}
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int_3 = int_2 + int_1;
		char_2 = char_2 + char_3;
		double_3 = v_SyBigEndianUnpack16(float_1,double_3);

		float_1 = float_1 * float_1;
		short_1 = short_2 * short_1;
		double_4 = double_4 + double_3;
		int_2 = int_1 + int_1;
		float_3 = float_2 * float_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_6 = 1;
			if(1)
			{
				int_2 = int_2 + int_3;
			}
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			if(1)
			{
			}
			double_3 = double_1 * double_1;
			if(1)
			{
				unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
				unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
				long_2 = long_1 * long_1;
				double_1 = double_2 + double_2;
				if(1)
				{
					int int_4 = 1;
					int_4 = int_3 + int_2;
				}
				float_2 = float_1;
			}
			if(1)
			{
				short short_3 = 1;
				long long_3 = 1;
				short_3 = short_1 + short_1;
				if(1)
				{
					long_3 = long_2 * long_2;
				}
				long_2 = long_3 + long_2;
			}
			if(1)
			{
				double_3 = double_1 * double_5;
				if(1)
				{
					unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
				}
				unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
			}
			unsigned_int_6 = unsigned_int_2 + unsigned_int_4;
			double_5 = double_5 + double_2;
		}
		unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	}
	return unsigned_int_7;
}
char v_lhParseOneCell( char parameter_1,unsigned int parameter_2,long parameter_3,long parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	long long_4 = 1;
	char char_1 = 1;
	float float_2 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_7 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_2;
	double_2 = double_2 * double_3;
	int_1 = int_3 + int_3;
	double_3 = v_lhNewCell(short_1,short_1);

	double_2 = double_3 * double_2;
	long_3 = long_1 + long_2;
	int_3 = int_1;
	double_2 = v_SyBigEndianUnpack16(float_1,double_1);

	unsigned_int_1 = v_lhConsumeCellkey(double_3,unsigned_int_1,double_4,int_2);

	int_4 = int_2;
	double_5 = v_vedisDataConsumer(long_4,char_1);

	double_5 = double_5 + double_2;
	float_2 = float_2;
	short_1 = v_SyBlobRelease(long_5);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
	}
	char_2 = char_1;
	int_1 = int_5 + int_5;
	if(1)
	{
	}
	int_6 = int_2 * int_1;
	v_SyBigEndianUnpack64(float_1,char_3);

	char_2 = v_lhInstallCell();

	float_2 = float_1;
	int_6 = int_3 + int_5;
	double_1 = double_5 + double_1;
	long_1 = v_SyBigEndianUnpack32(short_1,unsigned_int_3);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	int_2 = int_6 + int_2;
	short_3 = short_1 + short_2;
	int_7 = int_2;
	if(1)
	{
		double_5 = double_5 * double_5;
	}
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "l") < 0)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
	}
	return char_1;
}
char v_lhPageFreeSpace()
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	long_2 = long_1 + long_1;
	double_2 = double_1 * double_1;
	short_1 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int_1 = int_1;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_1 = v_SyBigEndianUnpack16(float_1,double_1);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int_1 = int_2 + int_1;
		int_4 = int_2 * int_3;
		long_3 = long_3;
		double_3 = double_2;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
		}
		long_1 = long_4;
		if(1)
		{
		}
	}
	double_3 = double_2 * double_4;
	return char_1;
}
char v_lhLoadCells( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_1;
	char_1 = v_lhPageFreeSpace();

	float_1 = float_1 * float_1;
	char_2 = v_lhParseOneCell(char_1,unsigned_int_2,long_1,long_2);

	int_4 = int_2 + int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = int_5 + int_5;
	double_2 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		float_1 = float_1 * float_1;
		if(1)
		{
		}
		if(1)
		{
			int int_6 = 1;
			int_4 = int_6;
		}
		double_2 = double_3 * double_1;
		if(1)
		{
		}
	}
	return char_2;
}
double v_lhParsePageHeader( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	long_3 = long_1 + long_2;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	long_5 = long_4 + long_2;
	double_3 = v_SyBigEndianUnpack16(float_1,double_3);

	double_3 = double_2 * double_2;
	float_1 = float_1 + float_1;
	return double_3;
	v_SyBigEndianUnpack64(float_2,char_4);

}
float v_lhLoadPage( unsigned int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	short short_4 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_3 = 1;
	short_3 = short_1 * short_2;
	int_1 = int_1 + int_1;
	short_1 = short_2 + short_4;
	double_1 = v_lhParsePageHeader(float_1);

	char_1 = v_lhLoadCells(short_2);

	double_2 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
		short short_5 = 1;
		short_3 = short_2 + short_5;
	}
	if(1)
	{
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_3 = double_3 + double_1;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			v_lhNewPage(int_2,short_3,char_1);

			unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		}
		if(1)
		{
			float_1 = float_1 * float_1;
		}
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_4 = unsigned_int_4;
			}
			float_1 = float_1 + float_1;
		}
	}
	if(1)
	{
		float float_2 = 1;
		float_3 = float_1 + float_2;
	}
	return float_3;
}
long v_lhMapWriteRecord( short parameter_1,double parameter_2,long parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	char char_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	long long_4 = 1;
	int_1 = v_lhAcquirePage(float_1,float_1);

	int_2 = int_1;
	int_2 = int_2;
	int_3 = int_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int_1 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
		unsigned_int_2 = v_SyBigEndianPack32(float_2,unsigned_int_2);

		double_1 = double_1 * double_2;
		if(1)
		{
		}
		double_3 = v_SyBigEndianPack64(char_1,double_3);

		float_2 = float_3;
		int_4 = int_2 + int_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		char_2 = char_2 + char_1;
		int_4 = int_3 * int_4;
		if(1)
		{
		}
		if(1)
		{
			int_3 = int_1 * int_4;
		}
		if(1)
		{
			int_5 = int_3 + int_3;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
		}
		double_2 = double_1 + double_3;
		if(1)
		{
		}
		unsigned_int_6 = unsigned_int_5 + unsigned_int_6;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_2 = unsigned_int_7 + unsigned_int_4;
		if(1)
		{
		}
	}
	char_1 = char_2 + char_2;
	if(1)
	{
	}
	double_3 = double_4;
	double_2 = double_2 * double_5;
	int_5 = int_2 * int_3;
	float_1 = float_2 + float_2;
	int_1 = v_lhMapInstallBucket(float_2,short_1,double_4);

	double_4 = double_1 * double_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
		if(1)
		{
			float float_4 = 1;
			float_3 = float_4 + float_1;
		}
		if(1)
		{
			long long_3 = 1;
			double_3 = double_4 * double_1;
			if(1)
			{
			}
			long_3 = long_1 + long_3;
		}
	}
	return long_4;
}
float v_lhCellWriteHeader( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	float float_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 + double_1;
	int_3 = int_1 * int_2;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 + short_1;
	double_2 = double_2 + double_3;
	unsigned_int_4 = v_SyBigEndianPack32(float_1,unsigned_int_2);

	double_1 = double_3 + double_4;
	long_1 = long_2;
	double_5 = v_SyBigEndianPack64(char_1,double_2);

	v_SyBigEndianPack16(long_1,float_2);

	double_1 = double_1;
	float_1 = float_2;
	double_3 = double_6 + double_1;
	double_4 = double_7 * double_4;
	int_2 = int_1 + int_2;
	return float_1;
}
char v_lhCellWriteLocalPayload( short parameter_1,unsigned int parameter_2,short parameter_3,long parameter_4,long parameter_5)
{
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	short_1 = v_SyMemcpy(float_1,short_2);

	float_3 = float_2 + float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	int_1 = int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	return char_1;
}
short v_lhCellDiscard( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_2 = 1;
	long long_5 = 1;
	double double_7 = 1;
	short short_3 = 1;
	float_3 = float_1 * float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		double double_3 = 1;
		long_1 = v_SyMemBackendPoolFree(short_1);

		double_3 = double_3 * double_4;
	}
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_2 * long_3;
	}
	float_2 = float_1 * float_3;
	double_6 = double_5 * double_4;
	short_2 = v_SyBlobRelease(long_5);

	double_7 = double_2 * double_4;
	return short_3;
}
unsigned int v_lhCellWriteOvflPayload( int parameter_1,float parameter_2,char parameter_3,float parameter_4)
{
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_7 = 1;
	float float_4 = 1;
	short short_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_5 = 1;
	int int_9 = 1;
	int_1 = int_1;
	long_1 = long_1;
	float_1 = float_1 * float_1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 + float_2;
	float_3 = float_3 * float_1;
	int_2 = int_1 + int_1;
	float_1 = float_3 * float_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_2 + int_2;
	long_3 = long_2 + long_1;
	unsigned_int_2 = unsigned_int_3;
	int_2 = int_2 + int_3;
	int_5 = int_3 * int_4;
	double_2 = double_2 + double_2;
	int_4 = int_2 * int_2;
	unsigned_int_3 = unsigned_int_1;
	int_1 = int_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long_3 = long_1 + long_2;
		}
		if(1)
		{
			double double_3 = 1;
			double_1 = double_3 + double_1;
			if(1)
			{
			}
			unsigned_int_2 = unsigned_int_1;
			if(1)
			{
			}
			short_1 = short_1 * short_2;
			unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
			double_4 = double_3 * double_2;
			char_2 = char_1 + char_2;
			char_3 = char_1 * char_1;
			char_2 = char_4 + char_2;
		}
		char_4 = char_3 + char_2;
		int_4 = int_6 + int_4;
		if(1)
		{
			int_5 = int_2 + int_7;
		}
		float_4 = float_1 * float_1;
		unsigned_int_3 = unsigned_int_2;
		short_3 = short_2 * short_2;
	}
	int_3 = int_3 + int_5;
	char_2 = char_1 * char_1;
	long_5 = long_4 + long_5;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
	double_1 = double_2 + double_4;
	float_4 = float_4 * float_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		v_SyBigEndianPack16(long_5,float_2);

		double_1 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_1;
		int_6 = int_1 * int_7;
		unsigned_int_3 = unsigned_int_1;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
		if(1)
		{
			double_1 = double_4 + double_2;
		}
		float_5 = float_2 + float_2;
		int_2 = int_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int int_8 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_5 = 1;
			if(1)
			{
				float_4 = float_3 * float_4;
			}
			if(1)
			{
				short short_4 = 1;
				char_2 = char_3 * char_4;
				if(1)
				{
					int_6 = int_8;
				}
				short_1 = short_1 * short_3;
				if(1)
				{
					long long_6 = 1;
					long long_7 = 1;
					long_7 = long_6 + long_6;
				}
				float_1 = float_3 * float_2;
				unsigned_int_1 = unsigned_int_6 + unsigned_int_6;
				double_2 = v_SyBigEndianPack64(char_2,double_1);

				unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
				short_1 = short_1 + short_4;
				unsigned_int_6 = unsigned_int_6 * unsigned_int_1;
				int_1 = int_3;
			}
			short_2 = v_SyMemcpy(float_5,short_2);

			short_5 = short_1;
			long_3 = long_3 * long_5;
			if(1)
			{
				unsigned int unsigned_int_7 = 1;
				unsigned_int_6 = unsigned_int_7 * unsigned_int_4;
			}
			int_1 = int_8 + int_4;
			char_2 = char_1;
			double_2 = double_1;
		}
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	int_2 = v_lhAcquirePage(float_3,float_1);

	int_9 = int_9 * int_6;
	return unsigned_int_4;
}
char v_lhInstallCell()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	double_1 = double_1;
	double_2 = double_2 * double_2;
	if(1)
	{
		double_1 = double_1 + double_3;
		double_1 = double_1 + double_2;
		int_1 = int_1 * int_2;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		long_2 = long_1 + long_1;
		double_2 = double_1 + double_2;
	}
	int_2 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		double_2 = double_2;
	}
	char_1 = char_1 * char_1;
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		short_1 = short_1;
	}
	int_1 = int_1;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		double double_4 = 1;
		long long_3 = 1;
		double_1 = v_SyZero(long_1);

		short_3 = short_1 * short_2;
		unsigned_int_1 = v_SyMemBackendFree(short_4);

		float_1 = float_2 * float_1;
		double_4 = double_1 + double_2;
		long_3 = long_1 + long_2;
		unsigned_int_1 = unsigned_int_3;
		if(1)
		{
			long long_4 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_7 = 1;
			double double_8 = 1;
			double_2 = double_2;
			long_4 = long_4 * long_2;
			unsigned_int_1 = v_SyMemBackendAlloc(int_2,unsigned_int_4,-1 );

			int_4 = int_3 + int_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int int_5 = 1;
				int int_6 = 1;
				int int_7 = 1;
				double double_5 = 1;
				double double_6 = 1;
				char controller_8[2];
				fgets(controller_8 ,2 ,stdin);
				if( strcmp( controller_8, ">") < 0)
				{
					float float_3 = 1;
					float_3 = float_3 + float_3;
				}
				double_1 = double_3 * double_4;
				short_1 = short_2 + short_3;
				unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
				if(1)
				{
					short short_5 = 1;
					short_2 = short_3 + short_5;
				}
				char_2 = char_1 * char_1;
				int_7 = int_5 + int_6;
				double_5 = double_5 + double_6;
			}
			double_1 = double_2 + double_7;
			double_8 = double_1 + double_8;
			long_1 = long_2;
		}
	}
	return char_2;
}
unsigned int v_SyBlobInit( char parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		if(1)
		{
		}
		short_3 = short_1 * short_2;
	}
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_2;
	return unsigned_int_3;
}
double v_lhNewCell( short parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_2 = float_1 + float_1;
	double_1 = v_SyZero(long_1);

	double_2 = double_2 * double_1;
	if(1)
	{
	}
	v_SyMemBackendPoolAlloc(double_3,float_1);

	unsigned_int_1 = unsigned_int_1;
	double_2 = double_2 * double_3;
	unsigned_int_1 = v_SyBlobInit(char_1,long_2);

	int_1 = int_2;
	return double_2;
}
short v_lhRestoreSpace( long parameter_1,short parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	long long_3 = 1;
	float float_3 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	char_1 = char_1;
	short_2 = short_1 * short_1;
	long_1 = long_1 + long_2;
	float_2 = float_1 + float_1;
	double_2 = double_1 * double_1;
	char_2 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return short_3;
	v_SyBigEndianPack16(long_3,float_3);

}
unsigned int v_lhFindSlavePage( double parameter_1,unsigned int parameter_2,float parameter_3,long parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_6 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	char_3 = char_1 + char_2;
	double_1 = v_SyBigEndianPack64(char_2,double_1);

	float_3 = float_1 * float_2;
	short_1 = v_lhRestoreSpace(long_1,short_2,int_1);

	char_5 = char_4 + char_5;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 + double_2;
	int_1 = int_2 + int_1;
	double_2 = double_2;
	int_3 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		char_5 = char_6;
		if(1)
		{
			double double_4 = 1;
			double_4 = double_3 + double_2;
			double_1 = double_3 * double_4;
		}
		if(1)
		{
			if(1)
			{
				int_3 = int_1 + int_3;
			}
			if(1)
			{
				int_2 = int_4 * int_4;
			}
			int_4 = int_1 + int_2;
		}
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	}
	int_2 = int_4 + int_4;
	if(1)
	{
	}
	char_1 = v_lhSetEmptyPage(int_5);

	double_3 = double_1 + double_2;
	if(1)
	{
		double double_5 = 1;
		v_lhNewPage(int_2,short_2,char_4);

		double_2 = double_5 * double_6;
	}
	unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
	if(1)
	{
	}
	short_1 = short_2 + short_1;
	if(1)
	{
		double double_7 = 1;
		long_2 = v_lhAllocateSpace(short_2,char_5,long_3);

		double_1 = double_2 + double_7;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		if(1)
		{
			char_3 = char_4;
		}
		unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
	}
	unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
	if(1)
	{
		long long_4 = 1;
		long_4 = long_1 * long_3;
	}
	unsigned_int_2 = unsigned_int_7 + unsigned_int_4;
	int_3 = v_lhAcquirePage(float_3,float_2);

	float_3 = float_1 + float_3;
	double_6 = double_1 * double_1;
	char_1 = char_1 + char_6;
	return unsigned_int_8;
}
unsigned int v_lhSlaveStore( char parameter_1,float parameter_2,double parameter_3,float parameter_4,unsigned int parameter_5,char parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = v_lhStoreCell(long_1,short_1,char_1,double_1,char_2,double_1,int_1);

	char_2 = char_2;
	unsigned_int_1 = v_lhFindSlavePage(double_2,unsigned_int_2,float_1,long_2);

	long_1 = long_2;
	if(1)
	{
	}
	int_3 = int_2 * int_1;
	return unsigned_int_1;
}
unsigned int v_lhPageDefragment( int parameter_1)
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
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_5 = 1;
	double double_7 = 1;
	int int_5 = 1;
	char char_1 = 1;
	float float_2 = 1;
	short short_6 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_8 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_4;
	double_1 = double_2;
	long_1 = long_2;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_6 = 1;
		if(1)
		{
			double_1 = double_2 + double_1;
		}
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_2 = 1;
			short_3 = short_3;
			if(1)
			{
				double_2 = double_3 * double_4;
			}
			int_4 = int_3 * int_1;
			short_1 = short_4 + short_4;
			double_5 = double_3 * double_4;
			double_5 = double_6 + double_4;
			short_5 = short_5 + short_5;
			unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
			double_1 = double_6 + double_7;
			int_2 = int_2 * int_3;
			int_5 = int_2 * int_4;
			double_7 = double_1 * double_7;
			float_1 = float_1 * float_1;
			char_1 = char_2;
			short_5 = v_SyMemcpy(float_2,short_6);

			double_3 = double_7 * double_6;
			if(1)
			{
				long_3 = long_3 * long_1;
				short_5 = short_6 * short_3;
			}
			if(1)
			{
				unsigned_int_3 = v_SyBigEndianPack32(float_2,unsigned_int_3);

				v_SyBigEndianPack16(long_3,float_2);

				int_1 = int_4 + int_5;
			}
		}
		double_3 = double_4 + double_6;
	}
	double_3 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		int int_6 = 1;
		unsigned_int_7 = unsigned_int_6 * unsigned_int_4;
		unsigned_int_8 = unsigned_int_3 * unsigned_int_8;
		int_4 = int_3 + int_6;
	}
	if(1)
	{
		long long_4 = 1;
		float float_3 = 1;
		long_3 = long_4 * long_4;
		float_1 = float_2 * float_3;
	}
	char_3 = char_3 + char_4;
	double_4 = double_3;
	double_7 = v_SyBigEndianPack64(char_1,double_8);

	int_8 = int_5 + int_7;
	return unsigned_int_1;
}
double v_SyBigEndianUnpack16( float parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long_2 = long_1 + long_1;
	return double_1;
}
long v_lhAllocateSpace( short parameter_1,char parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_7 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_5 = 1;
	int_1 = int_1 + int_2;
	int_3 = int_1 + int_3;
	v_SyBigEndianPack16(long_1,float_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	if(1)
	{
	}
	int_5 = int_4 + int_2;
	int_6 = int_2;
	float_2 = float_1 + float_2;
	double_2 = double_1 + double_1;
	unsigned_int_2 = v_lhPageDefragment(int_4);

	float_3 = float_3 + float_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		if(1)
		{
		}
		long_2 = long_1 + long_1;
		float_4 = float_3;
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "-") < 0)
		{
			long_1 = long_2 * long_2;
		}
		char_1 = char_1;
		if(1)
		{
			double_2 = v_SyBigEndianUnpack16(float_1,double_2);

			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				int int_8 = 1;
				unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
				int_8 = int_7 + int_3;
				long_2 = long_1 + long_2;
				float_2 = float_3 + float_2;
				unsigned_int_6 = unsigned_int_1 * unsigned_int_3;
			}
			if(1)
			{
			}
		}
		long_2 = long_1 * long_1;
	}
	int_1 = int_1 + int_9;
	if(1)
	{
	}
	float_1 = float_3 + float_4;
	if(1)
	{
		unsigned_int_4 = unsigned_int_6 * unsigned_int_3;
		unsigned_int_4 = unsigned_int_6 * unsigned_int_1;
		int_3 = int_4 * int_7;
		int_5 = int_5 * int_7;
		float_2 = float_3 + float_2;
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_3 = long_3 + long_4;
	}
	if(1)
	{
		int int_10 = 1;
		unsigned int unsigned_int_8 = 1;
		int_10 = int_10;
		unsigned_int_8 = unsigned_int_3 * unsigned_int_7;
	}
	unsigned_int_4 = unsigned_int_6 * unsigned_int_7;
	return long_5;
}
char v_lhStoreCell( long parameter_1,short parameter_2,char parameter_3,double parameter_4,char parameter_5,double parameter_6,int parameter_7)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_6 = 1;
	int int_6 = 1;
	char char_7 = 1;
	char_1 = char_2;
	char_1 = char_1;
	int_1 = int_1 + int_2;
	double_1 = double_1 + double_1;
	char_1 = char_3 * char_4;
	int_4 = int_2 + int_3;
	if(1)
	{
	}
	double_2 = double_3;
	if(1)
	{
		long_1 = long_1 * long_1;
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			}
		}
		short_1 = v_lhCellDiscard(char_1);

		long_2 = long_1;
	}
	int_4 = int_1 + int_3;
	if(1)
	{
		double_1 = double_4 * double_3;
	}
	char_2 = char_3 + char_5;
	char_2 = v_lhInstallCell();

	double_3 = double_1 + double_2;
	long_1 = v_lhAllocateSpace(short_1,char_3,long_2);

	unsigned_int_2 = v_lhCellWriteOvflPayload(int_1,float_1,char_4,float_2);

	float_2 = float_1;
	int_5 = v_SyBlobAppend(char_5,int_3,float_1,-1 );

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		double_5 = v_lhNewCell(short_1,short_1);

		float_2 = v_lhCellWriteHeader(unsigned_int_1);

		int_2 = int_2 + int_5;
	}
	double_2 = double_4 + double_3;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			unsigned_int_2 = v_lhSlaveStore(char_2,float_1,double_4,float_1,unsigned_int_4,char_6);

			int_6 = int_5 * int_4;
		}
	}
	if(1)
	{
		double_4 = double_1;
	}
	char_7 = v_lhCellWriteLocalPayload(short_1,unsigned_int_3,short_1,long_1,long_1);

	int_6 = int_2 * int_1;
	return char_3;
}
void v_SyBigEndianPack16( long parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_2;
	short_3 = short_1 + short_2;
	int_2 = int_1 * int_1;
}
char v_lhSetEmptyPage( int parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_5 = 1;
	char char_2 = 1;
	double_1 = double_1 * double_1;
	long_2 = long_1 * long_1;
	int_2 = int_1 * int_1;
	v_SyBigEndianPack16(long_2,float_1);

	short_3 = short_1 * short_2;
	long_1 = long_2 * long_3;
	if(1)
	{
	}
	float_1 = float_2 * float_3;
	float_3 = float_2 * float_3;
	float_4 = float_1 * float_2;
	double_1 = v_SyBigEndianPack64(char_1,double_2);

	short_1 = short_2;
	double_1 = double_3 + double_1;
	long_3 = long_4;
	short_3 = short_1 + short_1;
	long_2 = long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_2 + double_3;
	int_2 = int_3 * int_1;
	long_2 = long_3 + long_5;
	double_3 = double_1 * double_3;
	return char_2;
}
void v_lhNewPage( int parameter_1,short parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	float_1 = float_1 + float_2;
	if(1)
	{
		long long_1 = 1;
		short short_1 = 1;
		double_1 = double_1 * double_1;
		long_1 = long_1 + long_1;
		short_1 = short_1 + short_1;
	}
	v_SyMemBackendPoolAlloc(double_2,float_1);

	double_3 = double_1 * double_2;
	double_2 = v_SyZero(long_2);

}
int v_lhAcquirePage( float parameter_1,float parameter_2)
{
	double double_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double_1 = double_1 * double_1;
	double_1 = double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			int int_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			int_1 = int_1;
			double_1 = double_2;
			if(1)
			{
			}
			double_1 = double_1 * double_2;
			double_1 = double_2 * double_2;
			char_1 = char_1 + char_2;
		}
	}
	short_1 = short_2;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	return int_2;
	v_SyBigEndianUnpack64(float_1,char_2);

	double_3 = v_SyBigEndianPack64(char_2,double_1);

}
void v_lhMapFindBucket( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_2 = int_1 + int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "3") < 0)
	{
	}
	int_4 = int_1 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
}
char v_lh_record_insert( double parameter_1,float parameter_2,short parameter_3,char parameter_4,unsigned int parameter_5,int parameter_6)
{
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
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	short short_1 = 1;
	int int_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char char_3 = 1;
	short short_4 = 1;
	long long_4 = 1;
	long_3 = long_1 * long_2;
	int_3 = int_1 + int_2;
	double_1 = double_2;
	double_1 = double_3 + double_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	int_3 = int_3 + int_4;
	char_2 = v_lhStoreCell(long_1,short_1,char_1,double_2,char_1,double_2,int_4);

	int_5 = int_4 + int_5;
	double_3 = double_2 * double_5;
	if(1)
	{
	}
	double_5 = double_4 * double_5;
	v_lhMapFindBucket(unsigned_int_5,short_1);

	unsigned_int_5 = unsigned_int_6 * unsigned_int_3;
	int_1 = v_lhAcquirePage(float_1,float_2);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
	if(1)
	{
		double_4 = v_lhRecordAppend(short_1,long_1,double_4);

		long_2 = long_1 + long_3;
	}
	char_1 = v_lhSetEmptyPage(int_3);

	long_3 = long_1 * long_2;
	if(1)
	{
		int_4 = int_6 + int_2;
		if(1)
		{
		}
		char_2 = char_1 + char_1;
		if(1)
		{
		}
		char_2 = v_lhRecordInstall(char_1,short_2,unsigned_int_6,short_2,int_6,long_2);

		short_1 = short_1 + short_1;
		if(1)
		{
			long_1 = v_lhMapWriteRecord(short_1,double_1,long_1);

			int_4 = int_6 + int_3;
		}
		float_1 = v_lhLoadPage(unsigned_int_3,int_5,unsigned_int_5,int_1,int_6);

		short_3 = short_1 * short_1;
		if(1)
		{
			unsigned_int_5 = unsigned_int_6 + unsigned_int_7;
		}
		int_4 = int_7;
	}
	if(1)
	{
		unsigned_int_7 = v_lhRecordOverwrite(double_5,double_3,short_2);

		long_3 = long_2;
		if(1)
		{
		}
		double_3 = double_4 * double_5;
		int_3 = int_7;
		if(1)
		{
			double double_6 = 1;
			double_2 = double_3 * double_6;
			if(1)
			{
				double double_7 = 1;
				short_2 = short_3 + short_1;
				v_lhNewPage(int_8,short_2,char_1);

				double_7 = double_4 + double_2;
			}
		}
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_8 = 1;
				unsigned_int_8 = unsigned_int_7 * unsigned_int_2;
			}
			if(1)
			{
				int_6 = v_lhFindCell(char_3,short_4,long_4,unsigned_int_6);

				float_2 = float_1 * float_2;
			}
		}
		int_8 = int_6 + int_2;
	}
	return char_1;
}
unsigned int v_lhash_kv_replace( unsigned int parameter_1,long parameter_2,int parameter_3,short parameter_4,double parameter_5)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_1 * short_1;
	int_1 = int_1;
	return unsigned_int_1;
	char_1 = v_lh_record_insert(double_1,float_1,short_2,char_2,unsigned_int_2,int_1);

}
unsigned int v_MemPoolBucketAlloc( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_1;
	unsigned_int_4 = v_MemBackendAlloc(double_1,unsigned_int_4,-1 );

	short_1 = short_1 + short_2;
	if(1)
	{
	}
	short_2 = short_1 + short_2;
	short_2 = short_1;
	int_2 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		char char_1 = 1;
		if(1)
		{
			float float_2 = 1;
			float_1 = float_1 * float_2;
		}
		unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
		int_5 = int_3 * int_4;
		char_1 = char_1 + char_1;
	}
	short_2 = short_2 * short_1;
	return unsigned_int_4;
}
unsigned int v_MemBackendPoolAlloc( short parameter_1,float parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char_1 = char_1;
	int_1 = int_1 * int_2;
	int_3 = int_1 * int_1;
	unsigned_int_1 = v_MemBackendAlloc(double_1,unsigned_int_1,-1 );

	unsigned_int_1 = v_MemPoolBucketAlloc(int_2,unsigned_int_2);

	double_3 = double_2 + double_2;
	char_3 = char_2 * char_1;
	return unsigned_int_1;
}
void v_SyMemBackendPoolAlloc( double parameter_1,float parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_1 + double_2;
		}
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = v_MemBackendPoolAlloc(short_1,float_2);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
}
int v_lhMapInstallBucket( float parameter_1,short parameter_2,double parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long long_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	long_2 = long_1 + long_1;
	double_2 = double_1 + double_2;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	unsigned_int_1 = v_SyMemBackendAlloc(int_3,unsigned_int_1,-1 );

	char_1 = char_1 * char_1;
	int_2 = int_4 + int_1;
	float_1 = float_1 + float_1;
	float_2 = float_1;
	char_3 = char_2 * char_1;
	if(1)
	{
		int_1 = int_3;
	}
	long_3 = long_1 * long_3;
	if(1)
	{
		v_SyMemBackendPoolAlloc(double_2,float_1);

		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		double_3 = v_SyZero(long_4);

		double_2 = double_3 * double_3;
	}
	int_3 = int_3 + int_1;
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "):") < 0)
	{
		short short_1 = 1;
		short short_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		short_3 = short_1 + short_2;
		float_2 = float_1 * float_3;
		float_6 = float_4 * float_5;
		double_2 = double_1 + double_1;
		unsigned_int_4 = unsigned_int_3;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			char char_5 = 1;
			long long_5 = 1;
			char_3 = char_1 + char_1;
			int_4 = int_2 * int_2;
			unsigned_int_2 = unsigned_int_5 + unsigned_int_5;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char char_4 = 1;
				if(1)
				{
					short short_4 = 1;
					short_4 = short_2 * short_2;
				}
				int_2 = int_4 + int_3;
				long_4 = long_3 * long_3;
				char_1 = char_4 + char_4;
				if(1)
				{
					double double_4 = 1;
					double double_5 = 1;
					double_5 = double_4 * double_1;
				}
				long_4 = long_3 * long_3;
				double_1 = double_1 + double_1;
				unsigned_int_4 = v_SyMemBackendFree(short_2);

				char_5 = char_5 + char_3;
			}
			long_1 = long_5 * long_3;
			float_4 = float_4 + float_3;
			char_5 = char_3 * char_5;
		}
	}
	return int_5;
}
int v_lhMapLoadPage( int parameter_1,short parameter_2,char parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int_1 = v_lhMapInstallBucket(float_1,short_1,double_1);

	short_2 = short_1;
	long_2 = long_1 * long_1;
	v_SyBigEndianUnpack64(float_2,char_1);

	int_1 = int_1 + int_1;
	long_3 = v_SyBigEndianUnpack32(short_1,unsigned_int_1);

	double_2 = double_2 + double_1;
	float_2 = float_3 * float_1;
	if(1)
	{
		double_1 = double_3 * double_2;
		double_2 = double_1 * double_2;
		short_1 = short_3 * short_1;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_1 * double_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		short short_4 = 1;
		short short_5 = 1;
		if(1)
		{
			char_1 = char_1 + char_2;
		}
		char_2 = char_2;
		short_1 = short_2 + short_3;
		short_5 = short_1 + short_4;
		float_3 = float_1 * float_3;
		int_2 = int_2 * int_1;
		if(1)
		{
		}
	}
	double_1 = double_1 + double_3;
	return int_2;
}
void v_SyBigEndianUnpack64( float parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 + short_1;
	int_1 = int_1 * int_2;
	short_3 = short_1 + short_1;
}
long v_SyBigEndianUnpack32( short parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_2;
	return long_1;
}
unsigned int v_lhash_read_header( char parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_3 = 1;
	long_1 = long_1;
	long_2 = long_2 * long_2;
	long_1 = long_1 * long_2;
	float_2 = float_1 + float_1;
	double_2 = double_1 + double_1;
	long_2 = long_3;
	int_1 = v_lhMapLoadPage(int_2,short_1,char_1);

	double_1 = double_3;
	if(1)
	{
	}
	double_4 = double_3 + double_1;
	long_4 = long_3 * long_1;
	if(1)
	{
		short_1 = short_1 + short_2;
	}
	double_4 = double_3;
	long_1 = v_SyBigEndianUnpack32(short_2,unsigned_int_1);

	double_3 = double_4 * double_4;
	long_3 = long_3 + long_5;
	double_1 = double_4 + double_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	long_3 = long_4;
	v_SyBigEndianUnpack64(float_2,char_2);

	short_2 = short_2 + short_1;
	char_3 = char_2 + char_2;
	short_4 = short_1 * short_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
	unsigned_int_7 = unsigned_int_4 + unsigned_int_4;
	double_1 = double_3 + double_4;
	float_2 = float_3;
	double_1 = double_2 + double_3;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_6 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_8 = 1;
		long_2 = long_5 + long_6;
		float_5 = float_4 * float_2;
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_3 = int_4;
		}
		char_1 = char_3;
		if(1)
		{
		}
		unsigned_int_4 = unsigned_int_1;
		double_4 = double_5 * double_4;
		unsigned_int_5 = unsigned_int_6 * unsigned_int_8;
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
double v_SyBigEndianPack64( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_1;
	int_1 = int_1;
	int_1 = int_2 + int_2;
	double_2 = double_2 * double_3;
	long_2 = long_1 * long_2;
	long_1 = long_3;
	int_3 = int_3 * int_3;
	double_4 = double_2 + double_4;
	char_2 = char_1 + char_1;
	short_2 = short_1 * short_1;
	double_1 = double_4 * double_5;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_2;
	return double_5;
}
unsigned int v_SyBigEndianPack32( float parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 + float_1;
	char_1 = char_1 * char_1;
	double_1 = double_1 + double_1;
	int_2 = int_1 * int_2;
	double_1 = double_1 + double_2;
	long_1 = long_1 * long_1;
	short_2 = short_1 + short_1;
	return unsigned_int_1;
}
short v_lhash_write_header( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	double double_6 = 1;
	int int_4 = 1;
	float float_3 = 1;
	char char_3 = 1;
	double double_7 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	long_2 = long_1 + long_1;
	short_2 = short_1 + short_2;
	int_2 = int_1 + int_1;
	float_2 = float_1 + float_1;
	double_3 = double_1 * double_2;
	unsigned_int_1 = v_SyBigEndianPack32(float_1,unsigned_int_2);

	double_1 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	char_2 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	double_4 = double_4 * double_5;
	int_3 = int_1 * int_2;
	double_4 = double_6 + double_2;
	int_4 = int_3 * int_3;
	float_2 = float_3 + float_1;
	double_6 = v_SyBigEndianPack64(char_3,double_2);

	int_2 = int_3 * int_4;
	double_4 = double_7 + double_5;
	short_2 = short_2 * short_1;
	short_2 = short_1;
	char_2 = char_3 + char_2;
	long_2 = long_3 + long_4;
	return short_3;
}
short v_lhash_kv_open( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int_2 = int_1 * int_1;
	long_1 = long_1 + long_2;
	double_2 = double_1 + double_2;
	if(1)
	{
		int int_3 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_1 = v_lhash_write_header(short_2,int_2);

		int_3 = int_2 * int_1;
		if(1)
		{
		}
		char_1 = char_1 + char_1;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
	}
	if(1)
	{
		short short_3 = 1;
		double_2 = double_2 + double_1;
		if(1)
		{
		}
		short_1 = short_3 + short_1;
		if(1)
		{
		}
	}
	return short_4;
	unsigned_int_3 = v_lhash_read_header(char_2,char_2);

}
long v_lhash_kv_config( float parameter_1,int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 * double_2;
	int_1 = int_1 + int_1;
	if(1)
	{
		int_3 = int_2 * int_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_2 = int_4 * int_4;
		if(1)
		{
			int int_5 = 1;
			int_5 = int_2 * int_1;
		}
	}
	short_2 = short_1 * short_1;
	short_3 = short_2 * short_2;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	int_3 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 + double_2;
	return long_1;
}
long v_lhash_kv_release( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	short_1 = v_SyMemBackendRelease(int_1);

	double_1 = double_1 + double_1;
	return long_1;
}
short v_MemBackendPoolFree( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	if(1)
	{
		int int_2 = 1;
		int int_4 = 1;
		int_2 = int_2 + int_3;
		int_3 = v_MemBackendFree(char_1);

		int_4 = int_2 * int_2;
	}
	return short_2;
}
long v_SyMemBackendPoolFree( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int_1 = int_2;
	if(1)
	{
		double double_1 = 1;
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		double double_4 = 1;
		short_1 = v_MemBackendPoolFree(long_1);

		double_4 = double_3 + double_2;
	}
	return long_1;
}
short v_SyBlobRelease( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 * short_2;
	unsigned_int_2 = v_SyMemBackendFree(short_2);

	float_2 = float_1 * float_1;
	return short_2;
}
int v_lhash_page_release()
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_2;
	long_2 = long_1 + long_2;
	float_2 = float_1 + float_2;
	short_2 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		long_2 = v_SyMemBackendPoolFree(short_1);

		double_2 = double_1 + double_2;
		int_1 = int_1 + int_2;
		short_3 = v_SyBlobRelease(long_2);

		unsigned_int_2 = v_SyMemBackendFree(short_4);

		long_3 = long_1 + long_1;
		float_5 = float_3 * float_4;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	int_2 = int_2 + int_3;
	int_1 = int_3 + int_3;
	return int_4;
}
unsigned int v_lhash_bin_hash( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float_3 = float_1 + float_2;
	char_3 = char_1 * char_2;
	double_1 = double_1 + double_1;
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		float_4 = float_4 + float_5;
	}
	short_1 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_6 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			double_1 = double_1;
		}
		long_2 = long_1 + long_1;
		int_3 = int_1 * int_2;
		if(1)
		{
			short_2 = short_1 + short_1;
		}
		float_2 = float_3 + float_2;
		float_1 = float_1 * float_6;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		long_1 = long_3 + long_1;
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			short_4 = short_2 + short_3;
		}
		unsigned_int_1 = unsigned_int_3;
		char_3 = char_2;
	}
	return unsigned_int_2;
}
char v_lhash_kv_init( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	long long_3 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_5 = 1;
	long long_4 = 1;
	int_1 = int_1 * int_1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		short short_4 = 1;
		long_1 = v_SyMemcmp(int_2,double_1,int_2);

		short_4 = short_3 * short_3;
	}
	unsigned_int_2 = v_SyMemBackendAlloc(int_1,unsigned_int_1,-1 );

	int_2 = v_lhash_page_release();

	double_1 = double_2 + double_1;
	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	long_1 = long_2 + long_1;
	if(1)
	{
		int_2 = int_2 + int_2;
		float_3 = float_1 * float_2;
	}
	float_4 = v_SyMemBackendInitFromParent(char_2,char_1);

	unsigned_int_4 = v_lhash_bin_hash(int_3,double_2);

	float_3 = float_1;
	long_1 = long_3;
	int_3 = int_2 * int_1;
	short_5 = v_SyMemBackendRelease(int_3);

	short_3 = short_6 + short_6;
	int_4 = v_vedisExportMemBackend();

	double_4 = double_2 + double_3;
	float_2 = float_2 * float_5;
	char_1 = char_2 + char_2;
	long_4 = long_2 * long_2;
	return char_1;
	double_1 = v_SyZero(long_4);

}
short v_vedisExportDiskKvStorage()
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	char_1 = v_lhash_kv_init(double_1,int_1);

	long_1 = v_lhash_kv_config(float_1,int_1,short_1);

	float_1 = v_lhCursorFirst(float_1);

	char_2 = v_lhCursorLast();

	long_2 = v_lhCursorValid(short_1);

	short_1 = v_lhCursorNext(unsigned_int_1);

	long_2 = v_lhCursorDelete(double_1);

	double_2 = v_lhCursorKey(double_1,char_2,long_1);

	double_2 = v_lhCursorDataLength(int_1,int_2);

	short_1 = v_lhCursorReset();

	double_2 = double_1 * double_3;
	return short_2;
	long_3 = v_lhash_kv_release(int_2);

	short_2 = v_lhash_kv_open(int_2,char_3);

	unsigned_int_2 = v_lhash_kv_replace(unsigned_int_1,long_4,int_3,short_1,double_3);

	short_2 = v_lhash_kv_append(int_3,int_4,int_5,int_3,long_1);

	int_6 = v_lhInitCursor();

	double_3 = v_lhCursorSeek(float_2,float_3,int_6,int_6);

	char_2 = v_lhCursorPrev(float_4);

	long_4 = v_lhCursorKeyLength(short_3,int_3);

	double_1 = v_lhCursorData(short_3,int_2,char_2);

}
float v_MemHashCursorReset( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_1 * char_1;
	return float_1;
}
unsigned int v_MemHashCursorData( int parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	return unsigned_int_2;
}
short v_MemHashCursorDataLength( double parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	return short_1;
}
char v_MemHashCursorKey( double parameter_1,long parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	int_1 = int_3 + int_4;
	return char_1;
}
unsigned int v_MemHashCursorKeyLength( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	long_2 = long_1 * long_2;
	return unsigned_int_1;
}
double v_MemHashUnlinkRecord( unsigned int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	if(1)
	{
		short_3 = short_1 + short_2;
	}
	if(1)
	{
		short_1 = short_3 * short_2;
	}
	int_2 = int_2 * int_3;
	if(1)
	{
		int int_4 = 1;
		int_4 = int_1 + int_2;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_4 = v_SyMemBackendFree(short_2);

	float_1 = float_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	return double_1;
}
long v_MemHashCursorDelete( float parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	long_3 = long_1 + long_2;
	double_1 = v_MemHashUnlinkRecord(unsigned_int_2,unsigned_int_3);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return long_2;
}
unsigned int v_MemHashCursorPrev( short parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "2*") > 0)
	{
	}
	char_1 = char_1 + char_2;
	return unsigned_int_1;
}
float v_MemHashCursorNext()
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	return float_2;
}
int v_MemHashCursorValid( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char_1 = char_1 + char_2;
	int_3 = int_1 + int_2;
	return int_4;
}
float v_MemHashCursorLast( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int_3 = int_1 * int_2;
	int_2 = int_1 + int_1;
	double_1 = double_1 * double_1;
	return float_1;
}
double v_MemHashCursorFirst( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char_2 = char_1 * char_1;
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return double_1;
}
void v_MemHashCursorSeek( char parameter_1,short parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_1;
	double_1 = v_MemHashGetEntry(double_1,unsigned_int_1,int_1);

	double_1 = double_1 * double_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		if(1)
		{
		}
	}
}
short v_MemHashInitCursor( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_2;
	long_1 = long_2;
	return short_1;
}
unsigned int v_MemHashAppend( float parameter_1,float parameter_2,int parameter_3,float parameter_4,int parameter_5)
{
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	double double_4 = 1;
	short short_5 = 1;
	float_1 = float_1 * float_1;
	int_1 = int_1 + int_1;
	if(1)
	{
		char_1 = v_MemHashLinkRecord(char_1,short_1);

		int_1 = int_2 * int_3;
	}
	float_1 = float_1;
	if(1)
	{
		char char_2 = 1;
		char_1 = v_MemHashGrowTable(int_4);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
		char_2 = char_1 * char_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char char_3 = 1;
		double_2 = double_1 * double_1;
		short_1 = v_SyMemBackendRealloc(double_1,double_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		int_3 = int_2 + int_2;
		double_3 = v_MemHashGetEntry(double_2,unsigned_int_3,int_5);

		v_MemHashNewRecord(short_1,int_5,int_2,double_4,float_1,char_1);

		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
			double_2 = double_1 * double_3;
		}
		long_3 = long_1 * long_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
		if(1)
		{
		}
		short_3 = short_1 * short_2;
		short_3 = short_4 + short_4;
		char_3 = char_1 * char_3;
	}
	return unsigned_int_3;
	short_1 = v_SyMemcpy(float_1,short_5);

}
char v_MemHashGrowTable( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_5 = 1;
	double_1 = double_1 + double_2;
	int_1 = int_1 * int_2;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	float_3 = float_2 + float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		int int_3 = 1;
		short short_2 = 1;
		long long_2 = 1;
		int int_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_4 = 1;
		long long_5 = 1;
		double double_6 = 1;
		int int_6 = 1;
		double double_7 = 1;
		short short_3 = 1;
		long long_6 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		float_1 = float_4 * float_3;
		int_1 = int_1 + int_2;
		char_2 = char_1 + char_1;
		if(1)
		{
			int_2 = int_1 * int_3;
		}
		unsigned_int_4 = v_SyMemBackendFree(short_1);

		double_2 = double_2 + double_2;
		short_2 = short_2 + short_1;
		long_2 = long_1 * long_1;
		if(1)
		{
			int_1 = int_3 * int_4;
		}
		float_3 = float_4;
		float_4 = float_3 * float_3;
		double_2 = v_SyZero(long_1);

		int_2 = int_2 + int_2;
		if(1)
		{
			double_1 = double_3 * double_1;
		}
		int_1 = int_4;
		double_4 = double_4 * double_5;
		long_5 = long_3 + long_4;
		if(1)
		{
			double_6 = double_4;
		}
		int_1 = int_4 * int_3;
		long_4 = long_5 + long_5;
		unsigned_int_1 = v_SyMemBackendAlloc(int_5,unsigned_int_3,-1 );

		int_2 = int_1 * int_6;
		if(1)
		{
			int_5 = int_6 + int_6;
		}
		double_5 = double_7 + double_6;
		int_3 = int_6;
		int_3 = int_2 * int_3;
		if(1)
		{
			double_7 = double_3;
		}
		long_2 = long_3 + long_5;
		short_3 = short_1 * short_3;
		double_1 = double_6 + double_7;
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
		}
		unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
		int_3 = int_4;
		long_7 = long_6 + long_7;
	}
	long_7 = long_3 + long_1;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_5;
	float_3 = float_5 + float_4;
	return char_1;
}
char v_MemHashLinkRecord( char parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_2 = double_1 * double_1;
	double_3 = double_2 + double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	char_1 = char_1 * char_1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	unsigned_int_3 = unsigned_int_4;
	return char_1;
}
void v_MemHashNewRecord( short parameter_1,int parameter_2,int parameter_3,double parameter_4,float parameter_5,char parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_2 = 1;
	char char_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_2 = double_1 * double_2;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 + int_2;
	double_4 = double_1 * double_3;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		unsigned_int_4 = v_SyMemBackendAlloc(int_2,unsigned_int_4,-1 );

		double_3 = double_4 * double_2;
	}
	char_1 = char_1;
	unsigned_int_4 = v_SyMemBackendFree(short_1);

	int_1 = int_4 * int_2;
	char_2 = char_2 + char_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	int_2 = int_5 * int_2;
	float_3 = float_4;
	short_2 = short_2;
	short_2 = v_SyMemcpy(float_2,short_2);

	unsigned_int_3 = unsigned_int_1;
	char_2 = char_4;
	short_4 = short_2 * short_3;
	long_2 = long_1 * long_2;
	double_4 = v_SyZero(long_3);

}
double v_MemHashGetEntry( double parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	double_1 = double_1 * double_1;
	long_3 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_4 = double_2 + double_3;
	short_3 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
			double_2 = double_4 + double_5;
		}
		if(1)
		{
		}
		char_2 = char_1 + char_2;
	}
	return double_5;
}
unsigned int v_MemHashReplace( char parameter_1,char parameter_2,int parameter_3,short parameter_4,long parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_6 = 1;
	float float_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	char_1 = char_1;
	char_2 = char_3;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	double_1 = v_MemHashGetEntry(double_2,unsigned_int_1,int_1);

	int_4 = int_2 + int_3;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_4 = double_3 * double_2;
		if(1)
		{
		}
		double_2 = double_4 + double_5;
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, ":") < 0)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_6 = 1;
		int_2 = int_4 + int_5;
		short_1 = short_1 * short_2;
		if(1)
		{
			v_MemHashNewRecord(short_1,int_5,int_6,double_2,float_2,char_3);

			unsigned_int_2 = v_SyMemBackendFree(short_1);

			unsigned_int_3 = unsigned_int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = v_SyMemBackendAlloc(int_4,unsigned_int_2,-1 );

			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
			if(1)
			{
			}
			char_3 = char_1;
		}
		short_3 = v_SyMemcpy(float_3,short_2);

		long_1 = long_1;
		char_2 = v_MemHashLinkRecord(char_2,short_1);

		char_2 = v_MemHashGrowTable(int_4);

		long_2 = long_2 + long_2;
		double_2 = double_2 + double_6;
	}
	return unsigned_int_2;
}
float v_MemHashConfigure( long parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_1 = long_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2 + char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			int_1 = int_1 + int_1;
		}
	}
	double_2 = double_1 * double_1;
	int_3 = int_1 * int_2;
	if(1)
	{
		double_1 = double_1;
	}
	int_4 = int_2 + int_4;
	float_2 = float_1 + float_2;
	return float_1;
}
long v_MemBackendRelease()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long long_8 = 1;
	char char_4 = 1;
	int_1 = int_2;
	float_3 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_4 = 1;
		long long_5 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_3 = 1;
		long long_6 = 1;
		long long_7 = 1;
		if(1)
		{
			char char_1 = 1;
			char_3 = char_1 * char_2;
		}
		long_1 = long_1 + long_2;
		double_2 = double_1 * double_1;
		long_3 = long_2;
		short_1 = short_1 * short_2;
		if(1)
		{
			short_1 = short_1 + short_1;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_3;
		double_3 = double_1;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "cP") > 0)
		{
			double_1 = double_2;
		}
		long_4 = long_4;
		long_4 = long_5 * long_1;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
		short_4 = short_3 + short_2;
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		int_2 = int_3;
		long_1 = long_6 + long_6;
		float_2 = float_3;
		long_3 = long_7 + long_8;
	}
	if(1)
	{
		double_1 = double_2 * double_3;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	char_3 = char_4 * char_2;
	if(1)
	{
		float_2 = float_2 * float_2;
	}
	return long_8;
}
short v_SyMemBackendRelease( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char_1 = char_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		if(1)
		{
		}
		if(1)
		{
			long_1 = v_MemBackendRelease();

			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	return short_1;
}
long v_MemHashRelease( int parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short_1 = v_SyMemBackendRelease(int_1);

	int_2 = int_1;
	float_1 = float_1 + float_2;
	return long_1;
}
double v_MemHashFunc( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double_2 = double_1 + double_1;
	char_3 = char_1 + char_2;
	short_2 = short_1 * short_2;
	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_4 = 1;
		short short_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		if(1)
		{
			double_3 = double_3 + double_1;
		}
		short_3 = short_2;
		char_2 = char_2 * char_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		double_1 = double_3 * double_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		if(1)
		{
			short_2 = short_1 + short_1;
		}
		short_1 = short_2 + short_1;
		short_5 = short_2 + short_4;
		if(1)
		{
			long_2 = long_1 * long_1;
		}
		unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
		long_1 = long_2 * long_3;
	}
	return double_4;
}
float v_SyMemBackendInitFromParent( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double_1 = v_SyZero(long_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		if(1)
		{
		}
		int_1 = int_1;
	}
	int_2 = int_2 + int_3;
	double_1 = double_1 + double_1;
	int_1 = int_1;
	long_2 = long_2 + long_2;
	if(1)
	{
		int int_4 = 1;
		float float_1 = 1;
		int_4 = int_2 * int_2;
		float_2 = float_1 + float_2;
		if(1)
		{
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	}
	return float_2;
}
int v_MemHashInit( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = v_MemHashFunc(float_1,unsigned_int_1);

	short_1 = short_2;
	int_2 = int_1 + int_2;
	if(1)
	{
		double_1 = double_2;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	double_1 = double_2 * double_2;
	double_2 = v_SyZero(long_1);

	double_1 = double_2 + double_2;
	if(1)
	{
		int_1 = int_2;
	}
	int_1 = int_2 + int_3;
	long_1 = v_SyMemcmp(int_4,double_1,int_2);

	double_2 = double_2;
	float_2 = v_SyMemBackendInitFromParent(char_1,char_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	return int_4;
	int_4 = v_vedisExportMemBackend();

	unsigned_int_3 = v_SyMemBackendAlloc(int_2,unsigned_int_3,-1 );

}
char v_vedisExportMemKvStorage()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	long long_4 = 1;
	float float_3 = 1;
	short short_4 = 1;
	int_1 = v_MemHashInit(unsigned_int_1,int_2);

	float_1 = v_MemHashConfigure(long_1,int_1,int_1);

	short_1 = v_MemHashInitCursor(int_2);

	v_MemHashCursorSeek(char_1,short_2,int_2,int_3);

	double_1 = v_MemHashCursorFirst(int_1);

	float_2 = v_MemHashCursorLast(int_3);

	long_1 = v_MemHashCursorDelete(float_1);

	unsigned_int_1 = v_MemHashCursorKeyLength(int_3,int_1);

	char_2 = v_MemHashCursorKey(double_2,long_1,double_3);

	unsigned_int_2 = v_MemHashCursorData(int_4,int_1,int_2);

	float_2 = v_MemHashCursorReset(float_2);

	long_1 = long_2;
	return char_1;
	long_3 = v_MemHashRelease(int_2);

	unsigned_int_1 = v_MemHashReplace(char_1,char_1,int_3,short_3,long_4);

	unsigned_int_1 = v_MemHashAppend(float_2,float_3,int_3,float_1,int_4);

	int_3 = v_MemHashCursorValid(double_2);

	float_2 = v_MemHashCursorNext();

	unsigned_int_1 = v_MemHashCursorPrev(short_1);

	short_2 = v_MemHashCursorDataLength(double_3,short_4);

}
unsigned int v_SySetInit( double parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1 + double_2;
	int_3 = int_2 + int_3;
	short_1 = short_1 + short_2;
	short_4 = short_3 * short_1;
	double_3 = double_1 * double_1;
	int_1 = int_3 * int_1;
	return unsigned_int_1;
}
int v_UnixUnmap(unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_1;
	return int_1;
}
long v_UnixMmap( double parameter_1,float parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_3 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1;
	double_2 = double_1 * double_2;
	double_3 = double_3 * double_1;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	double_3 = double_4 + double_4;
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		double double_5 = 1;
		int int_2 = 1;
		double_5 = double_3;
		int_2 = int_1 * int_1;
	}
	int_1 = int_1 * int_3;
	return long_1;
}
long v_unixCurrentTime( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 + char_2;
	char_2 = char_3 + char_4;
	float_2 = float_1 * float_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	return long_1;
}
short v_unixSleep( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_4;
	int_1 = int_1 * int_1;
	short_1 = short_1 * short_2;
	char_1 = char_1 * char_1;
	float_2 = float_1 + float_2;
	double_2 = double_1 * double_1;
	return short_2;
}
float v_SyMemBackendDup( short parameter_1,int parameter_2,char parameter_3,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_1;
	char controller4vul_1806[3];
	fgets(controller4vul_1806 ,3 ,stdin);
	if( strcmp( controller4vul_1806, "..") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char controller4vul_1807[2];
		fgets(controller4vul_1807 ,2 ,stdin);
		if( strcmp( controller4vul_1807, "#") < 0)
		{
			unsigned_int_1 = v_SyMemBackendAlloc(int_1,unsigned_int_1,uni_para);

		}
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	return float_1;
}
float v_BlobPrepareGrow( char parameter_1,long parameter_2,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int_1 = int_1;
	double_1 = double_1;
	double_1 = double_2 + double_1;
	char controller4vul_1804[2];
	fgets(controller4vul_1804 ,2 ,stdin);
	if( strcmp( controller4vul_1804, "|") > 0)
	{
		char controller4vul_1805[3];
		fgets(controller4vul_1805 ,3 ,stdin);
		if( strcmp( controller4vul_1805, "/k") < 0)
		{
			char char_2 = 1;
			float_1 = v_SyMemBackendDup(short_1,int_2,char_1,uni_para);

			char_3 = char_1 + char_2;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		char char_5 = 1;
		if(1)
		{
			char char_4 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
			}
			char_4 = char_3 + char_3;
			short_3 = short_2 + short_2;
		}
		if(1)
		{
			int_1 = int_1 + int_2;
			short_2 = short_3 * short_1;
		}
		char_1 = char_5;
	}
	if(1)
	{
	}
	if(1)
	{
		int_3 = int_3 + int_4;
	}
	if(1)
	{
		int_4 = int_3 * int_1;
	}
	double_1 = double_1 + double_3;
	if(1)
	{
	}
	double_3 = double_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	return float_2;
}
int v_SyBlobAppend( char parameter_1,int parameter_2,float parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_1803[3];
	fgets(controller4vul_1803 ,3 ,stdin);
	if( strcmp( controller4vul_1803, "32") > 0)
	{
		float_1 = v_BlobPrepareGrow(char_1,long_1,uni_para);

	}
	char_2 = char_2 + char_3;
	if(1)
	{
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double_4 = double_3 * double_1;
		unsigned_int_1 = unsigned_int_2;
		long_1 = long_2 * long_2;
		long_3 = long_2 * long_1;
	}
	return int_1;
}
short v_FormatConsumer( short parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = v_SyBlobAppend(char_1,int_2,float_1,uni_para);

	char_1 = char_2;
	char_3 = char_4;
	char_4 = char_2 * char_4;
	int_1 = int_3;
	int_6 = int_4 * int_5;
	short_2 = short_1 + short_2;
	int_4 = int_6 * int_3;
	double_1 = double_1 + double_1;
	long_1 = long_2;
	return short_2;
}
void v_getdigit( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	double_1 = double_2 + double_2;
	unsigned_int_2 = unsigned_int_1;
	long_1 = long_1;
}
void v_InternFormat( float parameter_1,short parameter_3,float parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1 + int_1;
	double_3 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		v_getdigit(long_1,int_1);

		double_5 = double_4 * double_3;
	}
	v_SyStrlen(unsigned_int_2);

	double_1 = double_3;
	int_2 = int_2;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
}
void v_FormatMount( float parameter_1,float parameter_3,long parameter_5,unsigned int parameter_6,float parameter_7,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 + int_1;
	int_1 = int_1 * int_1;
	char_3 = char_1 * char_2;
	long_1 = long_2;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1;
	}
	char controller4vul_1801[3];
	fgets(controller4vul_1801 ,3 ,stdin);
	if( strcmp( controller4vul_1801, "}P") > 0)
	{
		char controller4vul_1802[2];
		fgets(controller4vul_1802 ,2 ,stdin);
		if( strcmp( controller4vul_1802, "Y") > 0)
		{
			short_1 = v_FormatConsumer(short_1,int_1,uni_para);

		}
		double_2 = double_1 + double_1;
	}
	float_1 = float_1;
	double_1 = double_1 * double_2;
	int_3 = int_1 * int_2;
	int_4 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char char_4 = 1;
		char_4 = char_4 + char_2;
	}
}
short v_SyBlobInitFromBuf( int parameter_1,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "{") > 0)
		{
		}
		int_2 = int_1 + int_1;
	}
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_1 * double_2;
	short_3 = short_1 + short_2;
	float_1 = float_1 + float_2;
	return short_2;
}
float v_SyBufferFormat( char parameter_1,long parameter_2,char parameter_3,float parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	int_1 = int_1 * int_2;
	int_2 = int_1 + int_1;
	short_3 = short_1 * short_2;
	char controller4vul_1799[3];
	fgets(controller4vul_1799 ,3 ,stdin);
	if( strcmp( controller4vul_1799, "  ") < 0)
	{
		char controller4vul_1800[3];
		fgets(controller4vul_1800 ,3 ,stdin);
		if( strcmp( controller4vul_1800, "zB") < 0)
		{
			v_FormatMount(float_1,float_1,long_1,unsigned_int_1,float_2,uni_para);

		}
		if(1)
		{
		}
		int_1 = int_2 + int_1;
	}
	short_4 = short_3 + short_2;
	double_3 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	int_2 = int_2;
	short_4 = short_4 + short_4;
	return float_3;
}
char v_unixFullPathname( unsigned int parameter_1,float parameter_2,int parameter_3,char parameter_4,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	if(1)
	{
		short short_1 = 1;
		float_2 = float_1 * float_2;
		short_1 = short_1;
	}
	char controller4vul_1797[2];
	fgets(controller4vul_1797 ,2 ,stdin);
	if( strcmp( controller4vul_1797, "G") > 0)
	{
		int int_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_4 = 1;
		double double_1 = 1;
		int_1 = int_1 * int_1;
		short_2 = short_3;
		char controller4vul_1798[2];
		fgets(controller4vul_1798 ,2 ,stdin);
		if( strcmp( controller4vul_1798, "z") < 0)
		{
			float_1 = v_SyBufferFormat(char_1,long_1,char_2,float_3,uni_para);

		}
		float_4 = float_2 * float_4;
		double_1 = double_1;
	}
	return char_3;
}
int v_unixAccess( long parameter_1,short parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_1;
	double_3 = double_1 * double_2;
	double_3 = double_4 + double_5;
	char_1 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 + char_1;
	int_2 = int_1 + int_2;
	short_3 = short_1 + short_2;
	int_1 = int_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		double double_6 = 1;
		double double_7 = 1;
		double_7 = double_6 * double_5;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		}
	}
	return int_1;
}
long v_unixDelete( unsigned int parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	int_1 = int_2;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "D") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_3 = 1;
		float_2 = float_1 + float_1;
		int_4 = int_3 + int_1;
		if(1)
		{
			if(1)
			{
				int_5 = v_openDirectory(int_5,int_4);

				int_4 = int_3 + int_3;
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double_1 = double_2;
			}
		}
	}
	return long_1;
}
int v_MemBackendFree( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			if(1)
			{
				unsigned_int_3 = unsigned_int_3;
			}
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			short_3 = short_1 * short_2;
			long_2 = long_1 + long_1;
		}
	}
	return int_1;
}
unsigned int v_SyMemBackendFree( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "Y") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "X") > 0)
		{
		}
		if(1)
		{
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_2;
		}
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	return unsigned_int_1;
	int_3 = v_MemBackendFree(char_1);

}
long v_vedis_free()
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int_1 = v_vedisExportMemBackend();

	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	return long_1;
	unsigned_int_3 = v_SyMemBackendFree(short_1);

}
short v_SyMemcpy( float parameter_1,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	return short_1;
}
long v_SyMemcmp( int parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	short_2 = short_1 * short_1;
	return long_1;
}
unsigned int v_findInodeInfo( double parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	short_2 = short_1 + short_1;
	double_1 = double_1 * double_2;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3 + long_3;
	}
	if(1)
	{
		double double_3 = 1;
		double_4 = double_3 + double_4;
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_4 * double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
		double_1 = double_1 * double_1;
	}
	return unsigned_int_3;
	double_1 = v_SyZero(long_4);

	long_4 = v_SyMemcmp(int_1,double_2,int_2);

	short_3 = v_vedis_malloc(float_1);

	short_1 = v_SyMemcpy(float_1,short_1);

}
int v_fillInUnixFile( float parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,double parameter_5,int parameter_6,int parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	int_2 = int_1 + int_2;
	char_2 = char_1 * char_2;
	double_1 = double_1 + double_2;
	int_2 = int_2 + int_3;
	char_3 = char_1 * char_1;
	float_2 = float_1 * float_1;
	char_4 = char_4 + char_5;
	float_3 = v_unixLeaveMutex();

	double_2 = double_2 * double_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	double_3 = double_1 + double_1;
	if(1)
	{
		double_4 = double_1 + double_2;
		double_2 = double_4 + double_3;
	}
	double_5 = v_unixEnterMutex();

	unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
	double_6 = double_1;
	if(1)
	{
		if(1)
		{
			double_4 = double_6 * double_4;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	return int_1;
	unsigned_int_5 = v_findInodeInfo(double_6,unsigned_int_5);

}
void v_SyStrlen( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
		if(1)
		{
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2;
			}
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double_2 = double_1 + double_2;
			}
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
			if(1)
			{
				float_2 = float_1 + float_2;
			}
			unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
			if(1)
			{
				float float_3 = 1;
				float_3 = float_2 * float_1;
			}
			float_2 = float_1 + float_1;
		}
	}
}
double v_Systrcpy( char parameter_1,unsigned int parameter_2,char parameter_3,short parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	long_1 = long_1 * long_2;
	long_1 = long_1;
	int_3 = int_1 * int_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			float_2 = float_1 * float_1;
		}
		double_2 = double_1 * double_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		char char_1 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_4 = 1;
		float float_5 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			double_1 = double_2 * double_2;
		}
		double_3 = double_3 + double_1;
		char_1 = char_1 + char_1;
		float_2 = float_3;
		long_3 = long_1 + long_3;
		if(1)
		{
			char char_2 = 1;
			char_1 = char_2;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_4 = float_1 * float_4;
		double_1 = double_3 * double_2;
		int_3 = int_2;
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			char_4 = char_3 + char_4;
		}
		unsigned_int_1 = unsigned_int_1;
		long_3 = long_4;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		float_3 = float_5 + float_3;
		if(1)
		{
			double double_4 = 1;
			double_3 = double_1 + double_4;
		}
		double_2 = double_1;
		v_SyStrlen(unsigned_int_2);

		short_1 = short_1 + short_1;
		unsigned_int_3 = unsigned_int_4;
		short_1 = short_1;
	}
	long_4 = long_3 * long_2;
	return double_1;
}
int v_openDirectory( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 + long_2;
	double_1 = double_1 * double_2;
	short_1 = short_2;
	double_3 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = long_2;
	}
	if(1)
	{
		char char_2 = 1;
		char_1 = char_1 + char_2;
		char_3 = char_2 + char_1;
		if(1)
		{
			double double_5 = 1;
			double_4 = v_Systrcpy(char_3,unsigned_int_2,char_1,short_2);

			double_4 = double_5;
		}
	}
	short_4 = short_3 * short_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	return int_1;
}
float v_findCreateFileMode( int parameter_1,int parameter_2,double parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "0W") < 0)
	{
		short short_1 = 1;
		float_1 = float_1 + float_1;
		short_1 = short_1 * short_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "oe") == 0)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 + int_2;
	}
	return float_1;
}
unsigned int v_SyMemBackendAlloc( int parameter_1,unsigned int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_1 = unsigned_int_1;
	char controller4vul_1808[3];
	fgets(controller4vul_1808 ,3 ,stdin);
	if( strcmp( controller4vul_1808, "+N") < 0)
	{
		char controller4vul_1809[3];
		fgets(controller4vul_1809 ,3 ,stdin);
		if( strcmp( controller4vul_1809, ";f") > 0)
		{
			unsigned_int_2 = v_MemBackendAlloc(double_1,unsigned_int_3,uni_para);

		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	}
	return unsigned_int_6;
}
int v_vedisExportMemBackend()
{
	int int_1 = 1;
	return int_1;
}
short v_vedis_malloc( float parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = v_vedisExportMemBackend();

	unsigned_int_1 = v_SyMemBackendAlloc(int_1,unsigned_int_2,-1 );

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_1;
	short_1 = short_1 + short_1;
	double_1 = double_1 * double_1;
	return short_2;
}
float v_unixLeaveMutex()
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_2;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_1 = int_1 + int_1;
		double_1 = double_1 + double_2;
	}
	return float_2;
}
double v_unixEnterMutex()
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_2 = short_1 * short_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	return double_2;
}
short v_findReusableFd( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char char_4 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_3 = 1;
	double double_7 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_10 = 1;
	int int_10 = 1;
	char_2 = char_1 * char_1;
	short_3 = short_1 * short_2;
	double_1 = double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		long long_2 = 1;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		int_4 = int_1 * int_1;
	}
	if(1)
	{
		double_2 = double_2 + double_3;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
	}
	if(1)
	{
		short_2 = short_2;
	}
	if(1)
	{
		char_2 = char_1 + char_3;
	}
	short_1 = short_4;
	short_5 = short_1;
	float_1 = v_unixLeaveMutex();

	double_4 = double_5;
	int_1 = int_5 + int_4;
	double_4 = double_3;
	if(1)
	{
		int_1 = int_6 * int_1;
	}
	int_6 = int_3 * int_5;
	double_6 = double_5 + double_3;
	int_6 = int_7 * int_8;
	char_1 = char_1 + char_4;
	double_3 = double_6 * double_5;
	int_7 = int_6;
	double_1 = v_unixEnterMutex();

	int_8 = int_5 + int_9;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_6 * unsigned_int_7;
	float_2 = float_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_8;
	long_1 = long_3;
	unsigned_int_5 = unsigned_int_2;
	if(1)
	{
		double double_8 = 1;
		double_8 = double_7 * double_8;
	}
	if(1)
	{
		int_1 = int_6 + int_5;
	}
	double_4 = double_4 * double_7;
	if(1)
	{
		unsigned_int_8 = unsigned_int_1 + unsigned_int_6;
	}
	double_9 = double_2 + double_1;
	unsigned_int_3 = unsigned_int_9 * unsigned_int_4;
	double_10 = double_4 * double_1;
	unsigned_int_6 = unsigned_int_2;
	char_2 = char_1;
	if(1)
	{
		unsigned_int_8 = unsigned_int_4 * unsigned_int_3;
	}
	if(1)
	{
		char char_5 = 1;
		char_5 = char_4 + char_2;
	}
	int_10 = int_3 * int_2;
	char_2 = char_3;
	if(1)
	{
		int_8 = int_6;
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_4 * unsigned_int_2;
	}
	double_7 = double_4 + double_5;
	return short_1;
}
long v_unixOpen( int parameter_1,char parameter_2,long parameter_3,double parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	float float_4 = 1;
	short short_4 = 1;
	float float_5 = 1;
	double double_6 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_5 = 1;
	char char_4 = 1;
	int int_6 = 1;
	short short_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_8 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	double_3 = double_1 * double_2;
	float_3 = float_1 * float_2;
	double_5 = double_4 * double_4;
	int_2 = int_1 + int_2;
	int_4 = int_3 + int_4;
	float_3 = v_findCreateFileMode(int_4,int_3,double_5);

	long_3 = long_1 * long_2;
	short_1 = short_1 + short_2;
	char_1 = char_1 + char_2;
	short_2 = short_3 + short_1;
	int_1 = v_openDirectory(int_2,int_1);

	long_3 = long_2;
	double_4 = double_2;
	double_1 = double_4 * double_2;
	char_3 = char_3 * char_2;
	float_4 = float_2;
	short_2 = short_4 + short_3;
	float_1 = float_2;
	if(1)
	{
		float_4 = float_1 * float_5;
	}
	if(1)
	{
		double_4 = double_6 * double_1;
		if(1)
		{
		}
	}
	char_2 = char_3;
	if(1)
	{
		int_4 = int_2;
	}
	if(1)
	{
		int_4 = int_4 + int_4;
	}
	if(1)
	{
		int_5 = int_4 * int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	float_2 = float_5 + float_2;
	if(1)
	{
		double_1 = double_2 * double_2;
		short_2 = v_findReusableFd(short_5,int_4);

		char_2 = char_4 + char_3;
		if(1)
		{
		}
		int_6 = int_1 + int_2;
		if(1)
		{
			char_4 = char_1 * char_4;
			short_6 = v_vedis_malloc(float_2);

			int_3 = v_fillInUnixFile(float_1,int_7,int_4,unsigned_int_3,double_5,int_4,int_8);

			short_4 = short_5 + short_6;
		}
	}
	if(1)
	{
		float float_7 = 1;
		float float_8 = 1;
		float_8 = float_6 * float_7;
		double_5 = double_5 * double_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		float float_9 = 1;
		float_6 = float_9;
		if(1)
		{
			double_2 = v_SyZero(long_2);

			double_1 = double_6 + double_6;
			long_3 = v_vedis_free();

			int_1 = int_6 + int_8;
		}
	}
	double_2 = double_7 + double_7;
	double_3 = double_4 + double_3;
	if(1)
	{
		double_6 = double_5 * double_1;
	}
	if(1)
	{
		int int_9 = 1;
		int int_10 = 1;
		int_7 = int_4 + int_9;
		if(1)
		{
			double_2 = double_1 * double_5;
		}
		int_5 = int_10 + int_10;
	}
	if(1)
	{
		double double_8 = 1;
		double double_9 = 1;
		double_8 = double_9;
	}
	char_4 = char_4 + char_1;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3;
	}
	return long_1;
}
float v_vedisExportBuiltinVfs(int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	char_1 = v_unixFullPathname(unsigned_int_1,float_1,int_1,char_1,uni_para);

	double_1 = double_1;
	return float_2;
}
long v_SyMemBackendInitFromOthers( double parameter_1,int parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
		}
		double_1 = double_2;
	}
	double_3 = double_1 * double_2;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		double double_4 = 1;
		double_3 = v_SyZero(long_1);

		double_4 = double_4;
	}
	return long_2;
}
double v_SyZero(long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_1;
	if(1)
	{
		if(1)
		{
		}
		int_1 = int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
			int int_2 = 1;
			int_2 = int_1;
		}
		char_2 = char_1 * char_1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_1;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_1 = int_3 * int_3;
		if(1)
		{
			long_1 = long_1;
		}
		double_1 = double_2;
		float_2 = float_1 + float_2;
		if(1)
		{
			char char_3 = 1;
			char_1 = char_1 * char_3;
		}
		long_1 = long_1 * long_1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	}
	return double_2;
}
int v_SyMemBackendInit( int parameter_1,double parameter_2)
{
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	double double_3 = 1;
	if(1)
	{
		short short_1 = 1;
		if(1)
		{
		}
		short_1 = short_2;
	}
	long_1 = long_2;
	double_2 = double_1 * double_2;
	short_4 = short_2 + short_3;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	return int_1;
	double_3 = v_SyZero(long_2);

}
unsigned int v_MemBackendAlloc( double parameter_1,unsigned int parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char * vul_var;
	int_1 = int_2;
	double_2 = double_1 + double_2;
	char_2 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		char_3 = char_1 * char_1;
		char controller4vul_1810[2];
		fgets(controller4vul_1810 ,2 ,stdin);
		if( strcmp( controller4vul_1810, "[") < 0)
		{
			vul_var=(char*)malloc(20*sizeof(char));
			strcpy(vul_var, "CWE-761");
			if(uni_para == 273)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			char_2 = char_2 + char_3;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
	}
	int_3 = int_3 + int_4;
	float_1 = float_1 * float_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	}
	int_2 = int_3 * int_3;
	int_3 = int_3 + int_4;
}
void v_MemBackendRealloc( float parameter_1,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_2 = double_1 * double_1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	int_1 = int_1 * int_2;
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		float_2 = float_2 * float_3;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		}
		double_2 = double_3 * double_2;
	}
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			float float_4 = 1;
			float_4 = float_3 + float_2;
		}
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_4 = int_3 * int_1;
		}
		if(1)
		{
			int int_5 = 1;
			int_1 = int_5 + int_2;
		}
		if(1)
		{
			unsigned_int_1 = v_MemBackendAlloc(double_2,unsigned_int_1,-1 );

			double_2 = double_2 + double_2;
		}
	}
}
short v_SyMemBackendRealloc( double parameter_1,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		if(1)
		{
		}
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 * float_1;
		}
		short_3 = short_1 + short_2;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	return short_1;
	v_MemBackendRealloc(float_2,int_2);

}
int v_SySetPut( short parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_1 = short_2;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int_1 = int_2;
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
		double_2 = double_1 + double_1;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1;
		short_4 = short_1 + short_3;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	int_4 = int_3 * int_2;
	short_2 = v_SyMemBackendRealloc(double_2,double_2);

	float_1 = float_1 * float_2;
	return int_1;
}
long v_vedisCoreConfigure( short parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_5 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	double double_6 = 1;
	long long_5 = 1;
	short short_6 = 1;
	long long_6 = 1;
	float float_5 = 1;
	short short_7 = 1;
	char_1 = char_2;
	int_1 = v_SySetPut(short_1,unsigned_int_1);

	int_1 = int_1;
	if(1)
	{
		if(1)
		{
			int_1 = int_1 * int_1;
		}
		if(1)
		{
			int_2 = int_3;
		}
	}
	if(1)
	{
		long_2 = long_1 + long_2;
	}
	int_3 = int_3 * int_4;
	long_1 = long_2 + long_1;
	if(1)
	{
		float_1 = float_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	int_5 = v_SyMemBackendInit(int_3,double_1);

	float_1 = float_1 * float_2;
	int_5 = int_5 + int_5;
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	char_3 = char_4;
	int_2 = int_5 * int_6;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
	char_4 = char_2 * char_5;
	if(1)
	{
		float float_4 = 1;
		float_4 = float_2 * float_3;
	}
	if(1)
	{
		short_1 = short_2 + short_3;
	}
	long_1 = long_1 * long_1;
	char_5 = char_2 * char_5;
	short_2 = short_3 + short_1;
	double_4 = double_3 + double_2;
	char_4 = char_5 * char_2;
	float_3 = float_2;
	if(1)
	{
		int_1 = int_3;
	}
	if(1)
	{
		long long_3 = 1;
		double double_5 = 1;
		if(1)
		{
			long_4 = long_3 * long_3;
		}
		if(1)
		{
			double_6 = double_1 + double_5;
			long_3 = long_1 * long_5;
		}
		if(1)
		{
			double_5 = double_1;
			if(1)
			{
				short_2 = short_2;
			}
			float_3 = float_3 * float_3;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_3 * unsigned_int_3;
			if(1)
			{
				char_4 = char_1 * char_5;
			}
		}
		double_6 = double_2 + double_3;
	}
	if(1)
	{
		short short_5 = 1;
		if(1)
		{
			short short_4 = 1;
			short_1 = short_2 * short_4;
		}
		unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
		short_6 = short_3 * short_5;
	}
	long_2 = long_2 * long_6;
	if(1)
	{
		int_6 = int_1 + int_5;
	}
	int_1 = int_1 * int_5;
	if(1)
	{
		char char_6 = 1;
		char_3 = char_3 * char_6;
	}
	float_5 = float_1 * float_2;
	if(1)
	{
		int_3 = int_1;
	}
	long_1 = long_2 * long_2;
	short_2 = short_1 * short_1;
	short_1 = short_6 * short_7;
	return long_4;
	long_4 = v_SyMemBackendInitFromOthers(double_6,int_2,long_5);

}
int v_vedis_lib_config( int parameter_1,float parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long_1 = v_vedisCoreConfigure(short_1,char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2;
	return int_1;
}
char v_vedisCoreInitialize()
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_8 = 1;
	long long_2 = 1;
	short short_4 = 1;
	char char_3 = 1;
	double_1 = double_1 + double_2;
	char_1 = char_1 * char_1;
	if(1)
	{
		double_1 = double_3;
	}
	int_3 = int_1 * int_2;
	unsigned_int_1 = v_SySetInit(double_4,int_2,long_1);

	double_6 = double_5 + double_3;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			double double_7 = 1;
			float_2 = float_1 + float_1;
			if(1)
			{
				int_1 = int_1;
				if(1)
				{
				}
				int_1 = v_vedis_lib_config(int_2,float_2);

				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
				if(1)
				{
				}
			}
			double_3 = double_7 + double_8;
			if(1)
			{
			}
		}
		long_2 = long_2 + long_1;
	}
	double_3 = double_8 + double_3;
	if(1)
	{
		short short_2 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_5 = 1;
		short short_6 = 1;
		double double_9 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_4 = 1;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 + short_2;
			if(1)
			{
				unsigned_int_2 = unsigned_int_2;
			}
		}
		if(1)
		{
			if(1)
			{
				short short_3 = 1;
				float_1 = v_vedisExportBuiltinVfs(-1 );

				short_3 = short_2 * short_2;
				if(1)
				{
					long long_3 = 1;
					long long_4 = 1;
					short_4 = v_vedisExportDiskKvStorage();

					long_4 = long_2 + long_3;
				}
			}
			double_5 = double_2 * double_4;
		}
		if(1)
		{
			char char_2 = 1;
			char_2 = char_1;
		}
		char_3 = char_1 * char_3;
		short_6 = short_5 * short_4;
		double_9 = double_9 * double_4;
		int_2 = int_2 * int_4;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		if(1)
		{
			float_2 = float_2 * float_2;
		}
		char_4 = char_1 * char_3;
		char_1 = v_vedisExportMemKvStorage();

		double_8 = double_9 + double_9;
		if(1)
		{
		}
		if(1)
		{
			short short_7 = 1;
			short_5 = short_6 + short_7;
		}
	}
	return char_3;
}
int v_vedis_open( char parameter_1,double parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short_2 = short_1 * short_2;
	char_2 = char_1 + char_2;
	char controller4vul_1778[2];
	fgets(controller4vul_1778 ,2 ,stdin);
	if( strcmp( controller4vul_1778, "n") < 0)
	{
		char controller4vul_1779[2];
		fgets(controller4vul_1779 ,2 ,stdin);
		if( strcmp( controller4vul_1779, "E") < 0)
		{
			short_1 = v_vedisInitDatabase(unsigned_int_1,short_3,int_1,float_1,uni_para);

		}
		int_2 = int_1 + int_1;
	}
	short_1 = short_1 + short_4;
	if(1)
	{
	}
	int_2 = int_1;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	char_3 = char_1 * char_3;
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_4;
	if(1)
	{
		if(1)
		{
			int_4 = int_3 + int_1;
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				int_4 = int_5 + int_2;
				long_2 = long_1 + long_2;
			}
		}
		if(1)
		{
			long long_3 = 1;
			long_3 = long_3;
		}
	}
	char_1 = char_3 + char_4;
	char_3 = char_2 + char_4;
	if(1)
	{
		int_5 = int_4;
	}
	float_1 = float_1 * float_1;
	int_7 = int_6 * int_1;
	float_1 = float_1 * float_1;
	return int_5;
}
int main()
{
	int uni_para =273;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	int_1 = int_1 * int_1;
	long_2 = long_1 * long_1;
	double_2 = double_1 + double_1;
	char_2 = char_1 * char_1;
	if(1)
	{
		float_1 = float_1;
	}
	int_3 = int_2 * int_1;
	int_1 = int_4 + int_2;
	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		short short_4 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_4 = short_3 * short_2;
		float_2 = float_1 * float_1;
		if(1)
		{
			int int_5 = 1;
			int_2 = int_5;
			short_2 = short_4 + short_3;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char controller4vul_1776[3];
		fgets(controller4vul_1776 ,3 ,stdin);
		if( strcmp( controller4vul_1776, "iG") < 0)
		{
			double double_3 = 1;
			char char_3 = 1;
			double_1 = double_3;
			char_3 = char_3 * char_1;
			double_1 = double_3;
			char controller4vul_1777[3];
			fgets(controller4vul_1777 ,3 ,stdin);
			if( strcmp( controller4vul_1777, "xa") > 0)
			{
				int_1 = v_vedis_open(char_2,double_2,uni_para);

				long_1 = long_3 * long_3;
			}
			if(1)
			{
				float_2 = float_2 + float_1;
			}
		}
	}
	long_2 = long_3;
	return int_2;
}

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

long v_vedisRemoveCommand( float parameter_1,long parameter_2);
int v_vedis_delete_command( short parameter_1,char parameter_2);
unsigned int v_vedisDeleteBuiltinCommands( unsigned int parameter_1);
int v_vedis_close( unsigned int parameter_1);
short v_vedisObjContainerDestroy( double parameter_1,short parameter_2);
void v_vedisReleaseContext( double parameter_1);
int v_vedisInitContext( short parameter_1,unsigned int parameter_2,float parameter_3);
void v_vedisExec( short parameter_1);
void v_SyLexRelease( unsigned int parameter_1);
double v_SyLexTokenizeInput( float parameter_1,float parameter_2,long parameter_3,float parameter_5,char parameter_6);
void v_vedisTokenizeInput( char parameter_1,float parameter_2);
char v_SyLexInit( double parameter_1,float parameter_2,float parameter_3);
unsigned int v_vedisTokenize( short parameter_1,float parameter_2,long parameter_3);
float v_vedisProcessInput( long parameter_1,char parameter_2,unsigned int parameter_3);
int v_vedis_exec( int parameter_1,short parameter_2,int parameter_3);
int v_isBlank( unsigned int parameter_1,long parameter_2);
void v_vedis_exit();
long v_VmJsonArrayEncode( float parameter_1);
int v_vedis_value_is_string( int parameter_1);
int v_SyStrIsNumeric( int parameter_1,double parameter_2,double parameter_3,unsigned int parameter_4);
long v_vedisMemObjIsNumeric( char parameter_1);
int v_vedis_value_is_numeric( float parameter_1);
short v_MemObjBooleanValue();
double v_vedisMemObjToBool( float parameter_1);
int v_vedis_value_to_bool( short parameter_1);
int v_vedis_value_is_bool( int parameter_1);
float v_VmJsonEncode( short parameter_1,double parameter_2);
unsigned int v_vedisJsonSerialize( int parameter_1,char parameter_2);
double v_MemObjStringValue( short parameter_1,double parameter_2);
void v_vedisMemObjToString();
char v_vedis_value_to_string( double parameter_1,int parameter_2);
char v_array_render( long parameter_1);
short v_vedisHashmapWalk( char parameter_1,int parameter_2);
int v_vedis_array_walk( unsigned int parameter_1,short parameter_2);
int v_vedis_value_is_array( int parameter_1);
int v_vedis_value_is_null( float parameter_1);
double v_command_result_render( short parameter_1);
float v_vedisObjectValueDestroy( long parameter_1,unsigned int parameter_2);
unsigned int v_vedisHashmapRef( unsigned int parameter_1);
long v_vedisMemObjStore( int parameter_1,short parameter_2);
float v_SyStrToReal( int parameter_1,short parameter_2,float parameter_4);
void v_MemObjRealValue( double parameter_1);
double v_vedisMemObjToReal( int parameter_1);
int v_vedisMemObjRelease( int parameter_1);
int v_vedisHashmapRelease( float parameter_1);
short v_vedisHashmapUnref();
int v_vedisHashmapCount( float parameter_1);
long v_SyStrToInt64( double parameter_1,unsigned int parameter_2,long parameter_4);
double v_SyOctalStrToInt64( int parameter_1,double parameter_2,int parameter_4);
short v_SyBinaryStrToInt64( int parameter_1,float parameter_2,short parameter_4);
short v_SyHexToint();
unsigned int v_SyHexStrToInt64( double parameter_1,short parameter_2,char parameter_4);
short v_vedisTokenValueToInt64( char parameter_1);
float v_MemObjStringToInt();
int v_MemObjRealToInt();
short v_MemObjIntValue( float parameter_1);
void v_vedisMemObjToInteger( short parameter_1);
long v_vedisMemObjInitFromString( float parameter_1,int parameter_2,unsigned int parameter_3);
int v_vedisNewObjectValue( long parameter_1,float parameter_2);
float v_SyBlobNullAppend();
float v_vedisPagerSetCachesize( short parameter_1,int parameter_2);
char v_vedisConfigure( short parameter_1,int parameter_2,char parameter_3);
int v_vedis_config( unsigned int parameter_1,int parameter_2,float parameter_3);
int v_SySetRelease( char parameter_1);
double v_vedisPagerClose( float parameter_1);
double v_pager_reset_state( float parameter_1,int parameter_2);
short v_vedisPagerRollback( short parameter_1,int parameter_2);
void v_vedisBitvecDestroy( long parameter_1);
int v_pager_commit_phase2( long parameter_1);
void v_pager_write_dirty_pages( char parameter_1,int parameter_2);
int v_page_merge_dirty( char parameter_1,int parameter_2);
long v_pager_get_dirty_pages( double parameter_1);
int v_pager_commit_phase1();
float v_vedisPagerCommit( char parameter_1);
unsigned int v_vedisEngineRelease( char parameter_1);
int v_vedisCoreShutdown();
int v_vedis_lib_shutdown();
int v_Fatal( int parameter_1);
char v_SyBlobAppendBig32( int parameter_1,char parameter_2);
char v_SyBlobAppendBig16( float parameter_1,float parameter_2);
long v_SyBlobFormat( int parameter_1,float parameter_2,long parameter_3);
double v_vedisPagerGetKvEngine( long parameter_1);
char v_vedisTableSerialize( short parameter_1);
short v_vedisPagerisMemStore( short parameter_1);
char v_vedisOnCommit();
char v_vedisPagerSetCommitCallback( unsigned int parameter_1,unsigned int parameter_2);
void v_SySetReset( char parameter_1);
void v_SyBinHash( unsigned int parameter_1,int parameter_2);
unsigned int v_vedisFetchCommand( float parameter_1,short parameter_2);
int v_vedisInstallCommand( long parameter_1,short parameter_2,unsigned int parameter_3);
int v_vedis_register_command( unsigned int parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4,unsigned int parameter_5);
double v_vedisRegisterBuiltinCommands( short parameter_1);
int v_vedisMemObjInit( unsigned int parameter_1,long parameter_2);
double v_vedisInitCursor( int parameter_1,char parameter_2);
void v_vedisKvIoErr( int parameter_1,char parameter_2);
long v_vedisKvIoPageReload( int parameter_1,unsigned int parameter_2);
int v_vedisKvIoPageUnpin( char parameter_1,float parameter_2);
unsigned int v_vedisKvIoTempPage( int parameter_1);
double v_vedisKvIoReadOnly();
short v_vedisKvIoPageSize( long parameter_1);
int v_page_unref();
long v_vedisKvIoPageUnRef( long parameter_1);
long v_vedisKvIopage_ref( unsigned int parameter_1);
char v_vedisKvIoPageDontMakeHot( unsigned int parameter_1);
long v_vedisKvIoPageDontJournal( short parameter_1);
long v_vedisPagerDontWrite( float parameter_1);
long v_vedisKvIoPageDontWrite();
int v_vedisBitvecSet( double parameter_1,double parameter_2);
int v_WriteInt64( int parameter_1,float parameter_2,int parameter_3);
void v_vedisBitvecTest( char parameter_1,long parameter_2);
double v_page_write( int parameter_1,int parameter_2);
int v_pager_release_page( short parameter_1,float parameter_2);
char v_pager_unlink_page( float parameter_1,int parameter_2);
void v_pager_write_hot_dirty_pages( float parameter_1,unsigned int parameter_2);
double v_page_merge_hot( float parameter_1,double parameter_2);
unsigned int v_pager_get_hot_pages( float parameter_1);
unsigned int v_WriteInt32( double parameter_1,int parameter_2,short parameter_3);
int v_vedisFinalizeJournal( short parameter_1,int parameter_2,int parameter_3);
int v_pager_dirty_commit( unsigned int parameter_1);
unsigned int v_pager_write_journal_header( unsigned int parameter_1,float parameter_2);
double v_vedisOpenJournal( double parameter_1);
int v_SyTimeFormatToDos( float parameter_1,int parameter_2);
long v_pager_write_db_header();
short v_pager_page_to_dirty_list( float parameter_1,float parameter_2);
char v_pager_create_header( short parameter_1);
int v_vedisBitvecCreate( long parameter_1,int parameter_2);
double v_vedisPagerBegin( char parameter_1,int uni_para);
short v_vedisPageWrite( int parameter_1,int uni_para);
float v_vedisKvIopageWrite( int parameter_1,int uni_para);
int v_vedisKvIoNewPage( float parameter_1,long parameter_2);
char v_vedisKvIoPageLookup( char parameter_1,int parameter_2,long parameter_3);
long v_page_ref( char parameter_1);
char v_pager_link_page( short parameter_1,double parameter_2);
char v_pager_get_page_contents( float parameter_1,char parameter_2,int parameter_3);
short v_pager_alloc_page( float parameter_1,char parameter_2);
void v_vedisGetPageSize();
int v_vedisOsSectorSize( char parameter_1);
unsigned int v_GetSectorSize( char parameter_1);
short v_SyDosTimeFormat( long parameter_1,short parameter_2);
unsigned int v_pager_extract_header( unsigned int parameter_1,int parameter_2,unsigned int parameter_3);
void v_pager_read_db_header( char parameter_1);
unsigned int v_vedisOsCloseFree( long parameter_1,unsigned int parameter_2);
float v_pager_fetch_page( short parameter_1,float parameter_2);
char v_pager_fill_page( int parameter_1,double parameter_2);
unsigned int v_vedisOsWrite( long parameter_1,long parameter_2,unsigned int parameter_3,long parameter_4);
long v_pager_cksum( float parameter_1,short parameter_2);
int v_pager_play_back_one_page( short parameter_1,double parameter_2,char parameter_3);
long v_vedisOsTruncate( int parameter_1,short parameter_2);
int v_ReadInt64( unsigned int parameter_1,short parameter_2,long parameter_3);
unsigned int v_ReadInt32( int parameter_1,char parameter_2,short parameter_3);
short v_vedisOsRead( int parameter_1,int parameter_3,float parameter_4);
int v_pager_read_journal_header( double parameter_1,char parameter_2,unsigned int parameter_3);
unsigned int v_pager_playback( double parameter_1);
char v_vedisOsSync( int parameter_1,int parameter_2);
char v_vedisOsUnlock( int parameter_1,int parameter_2);
long v_pager_unlock_db( unsigned int parameter_1,int parameter_2);
int v_vedisOsDelete( float parameter_1,char parameter_2,int parameter_3);
float v_vedisOsFileSize( int parameter_1,float parameter_2);
float v_vedisOsCheckReservedLock( float parameter_1,int parameter_2);
int v_vedisOsAccess( double parameter_1,char parameter_2,int parameter_3,int parameter_4);
short v_pager_has_hot_journal( char parameter_1,int parameter_2,int uni_para);
float v_pager_journal_rollback( double parameter_1,int parameter_2,int uni_para);
double v_vedisOsLock( int parameter_1,int parameter_2);
float v_pager_lock_db( double parameter_1,int parameter_2,int uni_para);
char v_pager_wait_on_lock( long parameter_1,int parameter_2);
short v_SyBlobFormatAp( short parameter_1,char parameter_2,char parameter_3);
float v_vedisGenErrorFormat( float parameter_1,unsigned int parameter_2,unsigned int parameter_3);
char v_vedisOsOpen( double parameter_1,float parameter_2,float parameter_3,double parameter_4,short parameter_5);
unsigned int v_pager_shared_lock( short parameter_1,int uni_para);
int v_vedisPagerAcquire( char parameter_1,char parameter_2,char parameter_3,int parameter_4,int parameter_5);
float v_vedisKvIoPageGet( float parameter_1,int parameter_2,int parameter_3);
float v_pager_kv_io_init( int parameter_1,char parameter_2,double parameter_3,int uni_para);
void v_vedisGenOutofMem( double parameter_1);
short v_vedisReleaseCursor( char parameter_1,unsigned int parameter_2);
void v_pager_release_kv_engine( char parameter_1);
int v_vedisPagerRegisterKvEngine( double parameter_1,char parameter_2,int uni_para);
double v_randomByte( unsigned int parameter_1);
double v_SyRandomness( unsigned int parameter_1,short parameter_3);
char v_SyOSUtilRandomSeed(long parameter_2);
double v_SyRandomnessInit( char parameter_1,double parameter_2);
float v_vedisGenError( float parameter_1,double parameter_2,int uni_para);
int v_vedisFindKVStore( char parameter_1,char parameter_2);
double v_SyStrnicmp( int parameter_1,short parameter_2,double parameter_3);
char v_vedisInMemory( double parameter_1);
short v_vedisPagerOpen( short parameter_1,short parameter_2,int parameter_3,long parameter_4,int uni_para);
double v_vedisSanityzeFlag( double parameter_1);
short v_vedisInitDatabase( short parameter_1,float parameter_2,int parameter_3,double parameter_4,int uni_para);
short v_lhCursorReset( short parameter_1);
char v_lhCursorData( unsigned int parameter_1,double parameter_2,int parameter_3);
float v_lhCursorDataLength( float parameter_1,unsigned int parameter_2);
unsigned int v_lhCursorKey( long parameter_1,short parameter_2,long parameter_3);
int v_lhCursorKeyLength( short parameter_1,int parameter_2);
unsigned int v_lhRecordRemove( unsigned int parameter_1);
double v_lhCursorDelete( unsigned int parameter_1);
short v_lhCursorPrev( int parameter_1);
long v_lhCursorNext( double parameter_1);
int v_lhCursorValid( int parameter_1);
void v_lhCursorPrevPage( long parameter_1);
float v_lhCursorLast( long parameter_1);
double v_lhCursorNextPage( unsigned int parameter_1);
short v_lhCursorFirst( unsigned int parameter_1);
float v_lhRecordLookup( char parameter_1,char parameter_2,unsigned int parameter_3,int parameter_4);
unsigned int v_lhCursorSeek( double parameter_1,double parameter_2,int parameter_3,int parameter_4);
long v_lhInitCursor( double parameter_1);
long v_lhash_kv_append( double parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,short parameter_5);
float v_lhRestorePage( unsigned int parameter_1,float parameter_2);
long v_lhRecordOverwrite( char parameter_1,short parameter_2,short parameter_3);
float v_lhMoveLocalCell( double parameter_1,long parameter_2,long parameter_3,float parameter_4);
char v_lhRecordAppend( char parameter_1,short parameter_2,short parameter_3);
double v_lhFindSibeling( float parameter_1);
char v_lhUnlinkCell( long parameter_1);
short v_lhConsumeCellData( float parameter_1,char parameter_2,int parameter_3);
float v_SyBlobReset();
short v_SyBlobDup( char parameter_1,unsigned int parameter_2);
void v_lhTransferCell( short parameter_1,float parameter_2);
char v_lhPageSplit( char parameter_1,char parameter_2,char parameter_3,short parameter_4);
short v_lhSplit( char parameter_1,int parameter_2);
char v_lhRecordInstall( char parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6);
unsigned int v_lhKeyCmp( int parameter_1,short parameter_2);
double v_lhFindCell( unsigned int parameter_1,double parameter_2,float parameter_3,long parameter_4);
double v_vedisDataConsumer( double parameter_1,unsigned int parameter_2);
int v_lhConsumeCellkey( char parameter_1,double parameter_2,double parameter_3,int parameter_6);
double v_lhParseOneCell( short parameter_1,double parameter_2,float parameter_3,long parameter_4);
void v_lhPageFreeSpace( float parameter_1);
long v_lhLoadCells( double parameter_1);
void v_lhParsePageHeader( char parameter_1);
short v_lhLoadPage( float parameter_1,long parameter_2,unsigned int parameter_3,short parameter_4,int parameter_5);
long v_lhMapWriteRecord( int parameter_1,short parameter_2,short parameter_3);
void v_lhCellWriteHeader( char parameter_1);
short v_lhCellWriteLocalPayload( long parameter_1,unsigned int parameter_2,double parameter_3,short parameter_4,long parameter_5);
short v_lhCellDiscard( unsigned int parameter_1);
char v_lhCellWriteOvflPayload( unsigned int parameter_1,double parameter_2,int parameter_3,short parameter_4);
void v_lhInstallCell( short parameter_1);
unsigned int v_SyBlobInit( char parameter_1,unsigned int parameter_2);
float v_lhNewCell( double parameter_1,int parameter_2);
void v_lhRestoreSpace( double parameter_1,float parameter_2,float parameter_3);
long v_lhFindSlavePage( double parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4);
int v_lhSlaveStore( float parameter_1,unsigned int parameter_2,char parameter_3,unsigned int parameter_4,short parameter_5,float parameter_6);
short v_lhPageDefragment( long parameter_1);
void v_SyBigEndianUnpack16( double parameter_1,short parameter_2);
unsigned int v_lhAllocateSpace( float parameter_1,int parameter_2,short parameter_3);
unsigned int v_lhStoreCell( unsigned int parameter_1,short parameter_2,unsigned int parameter_3,short parameter_4,long parameter_5,unsigned int parameter_6,int parameter_7);
char v_SyBigEndianPack16( float parameter_1,short parameter_2);
int v_lhSetEmptyPage( long parameter_1);
unsigned int v_lhNewPage( double parameter_1,double parameter_2,char parameter_3);
char v_lhAcquirePage( short parameter_1,int parameter_2);
unsigned int v_lhMapFindBucket( float parameter_1,char parameter_2);
double v_lh_record_insert( short parameter_1,char parameter_2,int parameter_3,long parameter_4,float parameter_5,int parameter_6);
short v_lhash_kv_replace( short parameter_1,short parameter_2,int parameter_3,float parameter_4,char parameter_5);
short v_MemPoolBucketAlloc( char parameter_1,double parameter_2);
unsigned int v_MemBackendPoolAlloc( unsigned int parameter_1,short parameter_2);
long v_SyMemBackendPoolAlloc( char parameter_1,short parameter_2);
short v_lhMapInstallBucket( double parameter_1,unsigned int parameter_2,long parameter_3);
float v_lhMapLoadPage( short parameter_1,char parameter_2,int parameter_3);
int v_SyBigEndianUnpack64( double parameter_1,long parameter_2);
float v_SyBigEndianUnpack32( float parameter_1,char parameter_2);
void v_lhash_read_header( char parameter_1,float parameter_2);
long v_SyBigEndianPack64( short parameter_1,int parameter_2);
int v_SyBigEndianPack32( double parameter_1,unsigned int parameter_2);
void v_lhash_write_header( short parameter_1,char parameter_2);
int v_lhash_kv_open( double parameter_1,float parameter_2);
long v_lhash_kv_config( unsigned int parameter_1,int parameter_2,long parameter_3);
void v_lhash_kv_release( long parameter_1);
void v_MemBackendPoolFree( char parameter_1);
unsigned int v_SyMemBackendPoolFree( long parameter_1);
long v_SyBlobRelease( short parameter_1);
void v_lhash_page_release();
unsigned int v_lhash_bin_hash( char parameter_1,double parameter_2);
void v_lhash_kv_init( float parameter_1,int parameter_2);
void v_vedisExportDiskKvStorage();
long v_MemHashCursorReset( double parameter_1);
unsigned int v_MemHashCursorData( double parameter_1,short parameter_2,char parameter_3);
long v_MemHashCursorDataLength( unsigned int parameter_1,double parameter_2);
short v_MemHashCursorKey( char parameter_1,unsigned int parameter_2,char parameter_3);
void v_MemHashCursorKeyLength( unsigned int parameter_1,int parameter_2);
void v_MemHashUnlinkRecord( short parameter_1,short parameter_2);
float v_MemHashCursorDelete( unsigned int parameter_1);
char v_MemHashCursorPrev( short parameter_1);
unsigned int v_MemHashCursorNext( float parameter_1);
short v_MemHashCursorValid( char parameter_1);
int v_MemHashCursorLast( float parameter_1);
void v_MemHashCursorFirst();
long v_MemHashCursorSeek( double parameter_1,double parameter_2,int parameter_3,int parameter_4);
void v_MemHashInitCursor( short parameter_1);
unsigned int v_MemHashAppend( unsigned int parameter_1,float parameter_2,int parameter_3,float parameter_4,long parameter_5);
double v_MemHashGrowTable( double parameter_1);
int v_MemHashLinkRecord( unsigned int parameter_1,int parameter_2);
int v_MemHashNewRecord( unsigned int parameter_1,float parameter_2,int parameter_3,short parameter_4,short parameter_5,unsigned int parameter_6);
short v_MemHashGetEntry( float parameter_1,unsigned int parameter_2,int parameter_3);
char v_MemHashReplace( double parameter_1,char parameter_2,int parameter_3,double parameter_4,int parameter_5);
unsigned int v_MemHashConfigure( short parameter_1,int parameter_2,int parameter_3);
int v_MemBackendRelease( int parameter_1);
double v_SyMemBackendRelease( float parameter_1);
float v_MemHashRelease( unsigned int parameter_1);
void v_MemHashFunc( short parameter_1,char parameter_2);
int v_SyMemBackendInitFromParent( char parameter_1,int parameter_2);
long v_MemHashInit( char parameter_1,int parameter_2);
short v_vedisExportMemKvStorage();
void v_SySetInit( char parameter_1,char parameter_2,float parameter_3);
char v_UnixUnmap(unsigned int parameter_2);
void v_UnixMmap( char parameter_1,short parameter_3);
double v_unixCurrentTime( float parameter_1,unsigned int parameter_2);
unsigned int v_unixSleep( unsigned int parameter_1,int parameter_2);
char v_SyMemBackendDup( int parameter_1,short parameter_2,char parameter_3);
char v_BlobPrepareGrow( short parameter_1,int parameter_2,int uni_para);
double v_SyBlobAppend( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,int uni_para);
float v_FormatConsumer( short parameter_1,char parameter_2);
unsigned int v_getdigit( int parameter_1,int parameter_2);
void v_InternFormat( char parameter_1,int parameter_3,double parameter_4);
unsigned int v_FormatMount( double parameter_1,char parameter_3,char parameter_5,int parameter_6,char parameter_7);
void v_SyBlobInitFromBuf( char parameter_1,long parameter_3);
int v_SyBufferFormat( char parameter_1,long parameter_2,char parameter_3,char parameter_4);
int v_unixFullPathname( double parameter_1,long parameter_2,int parameter_3,char parameter_4);
double v_unixAccess( long parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
long v_unixDelete( int parameter_1,float parameter_2,int parameter_3);
double v_MemBackendFree( long parameter_1);
double v_SyMemBackendFree( short parameter_1);
unsigned int v_vedis_free();
long v_SyMemcpy( long parameter_1,char parameter_3);
unsigned int v_SyMemcmp( double parameter_1,double parameter_2,float parameter_3);
unsigned int v_findInodeInfo( long parameter_1,short parameter_2);
char v_fillInUnixFile( short parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5,int parameter_6,int parameter_7);
short v_SyStrlen( double parameter_1);
double v_Systrcpy( char parameter_1,long parameter_2,int parameter_3,double parameter_4);
void v_openDirectory( double parameter_1,int parameter_2);
unsigned int v_findCreateFileMode( short parameter_1,int parameter_2,char parameter_3);
unsigned int v_SyMemBackendAlloc( double parameter_1,double parameter_2);
int v_vedisExportMemBackend();
int v_vedis_malloc( double parameter_1);
char v_unixLeaveMutex();
long v_unixEnterMutex();
int v_findReusableFd( unsigned int parameter_1,int parameter_2);
int v_unixOpen( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4);
float v_vedisExportBuiltinVfs();
void v_SyMemBackendInitFromOthers( long parameter_1,char parameter_2,int parameter_3);
char v_SyZero(int parameter_2);
void v_SyMemBackendInit( long parameter_1,double parameter_2);
long v_MemBackendAlloc( float parameter_1,short parameter_2,int uni_para);
void v_MemBackendRealloc( long parameter_1,double parameter_3,int uni_para);
char v_SyMemBackendRealloc( float parameter_1,float parameter_3,int uni_para);
char v_SySetPut( int parameter_1,short parameter_2);
void v_vedisCoreConfigure( char parameter_1,float parameter_2);
int v_vedis_lib_config( int parameter_1,unsigned int parameter_2);
void v_vedisCoreInitialize();
int v_vedis_open( unsigned int parameter_1,char parameter_2,int uni_para);
long v_vedisRemoveCommand( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_2;
	double_3 = double_1 + double_3;
	unsigned_int_1 = v_vedisFetchCommand(float_1,short_1);

	double_3 = double_1;
	double_3 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		double_4 = double_4 * double_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		long long_2 = 1;
		short_2 = v_SyStrlen(double_4);

		float_1 = float_1;
		long_1 = long_2;
		double_2 = v_SyMemBackendFree(short_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	short_2 = short_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	return long_1;
}
int v_vedis_delete_command( short parameter_1,char parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long_1 = v_vedisRemoveCommand(float_1,long_2);

	short_2 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		short_2 = short_2 * short_1;
	}
	return int_1;
}
unsigned int v_vedisDeleteBuiltinCommands( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_2;
	int_2 = v_vedis_delete_command(short_1,char_1);

	long_3 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	return unsigned_int_1;
}
int v_vedis_close( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char_1 = char_2;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	short_1 = short_1 * short_2;
	if(1)
	{
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		long_1 = long_1 * long_2;
	}
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = v_vedisEngineRelease(char_2);

	short_3 = short_1 + short_2;
	if(1)
	{
		double double_2 = 1;
		unsigned_int_1 = v_SyMemBackendPoolFree(long_1);

		double_2 = double_2 + double_1;
	}
	unsigned_int_3 = v_vedisDeleteBuiltinCommands(unsigned_int_2);

	double_1 = double_1 + double_3;
	return int_1;
}
short v_vedisObjContainerDestroy( double parameter_1,short parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	float_1 = v_vedisObjectValueDestroy(long_1,unsigned_int_1);

	int_1 = v_SySetRelease(char_1);

	short_1 = short_1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		double_2 = double_2 + double_2;
	}
	short_2 = short_1 * short_2;
	return short_2;
}
void v_vedisReleaseContext( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = v_SyMemBackendPoolFree(long_1);

	long_1 = v_SyBlobRelease(short_1);

	long_2 = long_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_1 = v_vedisMemObjRelease(int_1);

		double_1 = double_1 + double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			if(1)
			{
				short short_2 = 1;
				short_1 = short_1 + short_2;
			}
			unsigned_int_2 = unsigned_int_3;
			double_4 = double_3 * double_3;
		}
		char_1 = char_1 * char_2;
	}
	int_1 = v_SySetRelease(char_3);

	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
}
int v_vedisInitContext( short parameter_1,unsigned int parameter_2,float parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = v_vedisMemObjRelease(int_1);

	int_2 = int_2;
	unsigned_int_2 = v_SyBlobInit(char_1,unsigned_int_3);

	char_1 = char_1 + char_1;
	long_1 = long_1 + long_1;
	v_SySetInit(char_1,char_1,float_1);

	int_1 = int_2 + int_3;
	return int_3;
}
void v_vedisExec( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	short short_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_1;
	double_1 = double_2 + double_3;
	int_3 = v_vedisNewObjectValue(long_1,float_1);

	char_1 = v_SySetPut(int_3,short_1);

	char_2 = char_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short_1 = v_vedisObjContainerDestroy(double_4,short_2);

			int_3 = int_3 + int_2;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		}
	}
	if(1)
	{
		short short_3 = 1;
		short_4 = short_2 + short_3;
	}
	char_1 = char_2;
	long_2 = long_1 + long_1;
	float_1 = v_vedisGenError(float_1,double_3,-1 );

	unsigned_int_3 = v_vedisFetchCommand(float_1,short_2);

	long_4 = long_2 + long_3;
	if(1)
	{
		int_1 = v_vedisInitContext(short_1,unsigned_int_3,float_2);

		int_2 = int_3;
	}
	v_SySetInit(char_1,char_3,float_3);

	float_3 = float_3 * float_1;
	if(1)
	{
		int_2 = int_1;
	}
	double_2 = double_5 + double_3;
	if(1)
	{
		float float_4 = 1;
		float_2 = float_1 + float_4;
	}
	float_3 = v_vedisGenErrorFormat(float_1,unsigned_int_4,unsigned_int_5);

	unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
	if(1)
	{
		v_vedisReleaseContext(double_1);

		short_2 = short_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			short_2 = short_1 + short_2;
		}
	}
	long_3 = long_5 + long_1;
}
void v_SyLexRelease( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			double double_3 = 1;
			double_1 = double_3 * double_2;
		}
	}
}
double v_SyLexTokenizeInput( float parameter_1,float parameter_2,long parameter_3,float parameter_5,char parameter_6)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	double double_5 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 + long_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		double double_3 = 1;
		if(1)
		{
		}
		unsigned_int_1 = v_SyMemcmp(double_2,double_2,float_1);

		double_2 = double_3 * double_2;
	}
	short_1 = short_1;
	float_1 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_5 = 1;
		if(1)
		{
			int_2 = int_1 * int_2;
		}
		int_2 = int_1;
		int_4 = int_2 + int_3;
		if(1)
		{
			if(1)
			{
			}
			int_2 = int_1;
		}
		if(1)
		{
			int_2 = int_1 + int_5;
		}
		if(1)
		{
			char_1 = v_SySetPut(int_1,short_1);

			int_3 = int_5;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			}
		}
		if(1)
		{
			long long_3 = 1;
			long_3 = long_1 * long_2;
		}
	}
	if(1)
	{
		double double_4 = 1;
		double_5 = double_1 + double_4;
		if(1)
		{
			int int_6 = 1;
			int_4 = int_6;
		}
		short_1 = short_1 * short_1;
	}
	return double_5;
}
void v_vedisTokenizeInput( char parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
		int int_2 = 1;
		double double_1 = 1;
		double double_3 = 1;
		int int_4 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			long long_3 = 1;
			long_2 = long_3 + long_2;
			int_1 = int_1 + int_2;
		}
		double_3 = double_1 * double_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 + float_2;
			int_4 = int_2 + int_3;
		}
		int_3 = int_4;
	}
	char_2 = char_1 + char_1;
	if(1)
	{
		short short_2 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		short_2 = short_1 + short_1;
	}
	double_5 = double_2 * double_4;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
		short_1 = short_1;
	}
	unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		char char_3 = 1;
		int_3 = int_1;
		char_3 = char_3 + char_2;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
}
char v_SyLexInit( double parameter_1,float parameter_2,float parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long_3 = long_1 * long_2;
	if(1)
	{
		int int_1 = 1;
		if(1)
		{
		}
		int_3 = int_1 + int_2;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "_f") > 0)
	{
		int int_4 = 1;
		if(1)
		{
		}
		int_4 = int_2 + int_3;
	}
	double_2 = double_1 + double_1;
	double_1 = double_2;
	double_3 = double_1 * double_1;
	double_4 = double_2 + double_1;
	long_4 = long_3;
	unsigned_int_1 = unsigned_int_1;
	float_2 = float_1 + float_2;
	return char_1;
}
unsigned int v_vedisTokenize( short parameter_1,float parameter_2,long parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	float float_4 = 1;
	char_1 = char_1 * char_1;
	char_1 = v_SyLexInit(double_1,float_1,float_1);

	short_2 = short_1 + short_1;
	char_1 = char_2 * char_2;
	if(1)
	{
	}
	v_vedisTokenizeInput(char_3,float_2);

	int_1 = int_1 + int_1;
	short_1 = short_2 * short_3;
	return unsigned_int_1;
	double_2 = v_SyLexTokenizeInput(float_3,float_3,long_1,float_4,char_1);

	v_SyLexRelease(unsigned_int_1);

}
float v_vedisProcessInput( long parameter_1,char parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	long long_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_6 = 1;
	int_1 = v_SySetRelease(char_1);

	float_1 = float_1 * float_2;
	double_1 = double_1 + double_2;
	v_vedisExec(short_1);

	long_2 = long_1 * long_2;
	float_1 = float_2 * float_3;
	long_3 = long_1 * long_1;
	double_1 = double_3;
	v_SySetInit(char_2,char_3,float_2);

	unsigned_int_1 = v_vedisTokenize(short_2,float_4,long_4);

	float_2 = float_2 * float_5;
	float_5 = float_4 + float_5;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	}
	unsigned_int_1 = unsigned_int_5;
	double_2 = double_2;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_1;
	char_4 = char_1;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2;
		long_2 = long_4 * long_3;
	}
	unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	float_2 = float_3 * float_4;
	if(1)
	{
		short short_3 = 1;
		unsigned_int_4 = unsigned_int_6 * unsigned_int_5;
		short_3 = short_1;
		unsigned_int_1 = unsigned_int_6 * unsigned_int_4;
	}
	double_5 = double_4 + double_5;
	return float_6;
}
int v_vedis_exec( int parameter_1,short parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
	}
	float_1 = v_vedisProcessInput(long_1,char_1,unsigned_int_1);

	short_1 = v_SyStrlen(double_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1;
	}
	return int_2;
}
int v_isBlank( unsigned int parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_1 = double_1 * double_2;
	float_1 = float_1 + float_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	int_2 = int_1 * int_1;
	int_4 = int_2 + int_3;
	int_5 = int_2 * int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return int_3;
}
void v_vedis_exit()
{
	char char_1 = 1;
	int int_1 = 1;
	char_1 = char_1;
	int_1 = v_vedis_lib_shutdown();

}
long v_VmJsonArrayEncode( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	long_1 = long_2;
	if(1)
	{
	}
	if(1)
	{
		double_1 = v_SyBlobAppend(short_1,unsigned_int_1,unsigned_int_1,-1 );

		int_1 = int_2;
	}
	int_2 = int_3 * int_1;
	char_1 = char_1 + char_2;
	float_1 = v_VmJsonEncode(short_1,double_1);

	double_2 = double_1 + double_1;
	char_3 = char_2 * char_3;
	return long_1;
}
int v_vedis_value_is_string( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	char_3 = char_1 * char_2;
	return int_1;
}
int v_SyStrIsNumeric( int parameter_1,double parameter_2,double parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_1;
	long_2 = long_1 + long_2;
	double_1 = double_1;
	if(1)
	{
		int_2 = int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_2 = int_2 + int_2;
		}
		double_1 = double_1 * double_2;
		char_2 = char_1 + char_1;
	}
	return int_3;
}
long v_vedisMemObjIsNumeric( char parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
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
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		int_1 = v_SyStrIsNumeric(int_1,double_1,double_2,unsigned_int_1);

		char_2 = char_1 * char_2;
		int_1 = int_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
		}
		double_1 = double_3 * double_3;
		int_2 = int_1 * int_1;
	}
	return long_1;
}
int v_vedis_value_is_numeric( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_2;
	long_1 = v_vedisMemObjIsNumeric(char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return int_2;
}
short v_MemObjBooleanValue()
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	if(1)
	{
	}
	short_1 = v_vedisHashmapUnref();

	int_3 = int_1 * int_2;
	int_2 = v_vedisHashmapCount(float_1);

	double_1 = double_2;
	int_2 = int_2 + int_4;
	double_1 = v_SyStrnicmp(int_4,short_1,double_1);

	short_1 = short_1;
	if(1)
	{
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3 + double_1;
	}
	return short_2;
}
double v_vedisMemObjToBool( float parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_2 = 1;
		long_1 = v_SyBlobRelease(short_1);

		float_1 = float_1 + float_2;
		long_3 = long_2 * long_1;
		short_1 = v_MemObjBooleanValue();

		short_2 = short_1 + short_2;
	}
	return double_1;
}
int v_vedis_value_to_bool( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	float float_2 = 1;
	double_3 = double_1 + double_2;
	float_1 = float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "}<") > 0)
	{
	}
	return int_1;
	double_4 = v_vedisMemObjToBool(float_2);

}
int v_vedis_value_is_bool( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	return int_1;
}
float v_VmJsonEncode( short parameter_1,double parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	long long_2 = 1;
	int int_5 = 1;
	float float_5 = 1;
	int_1 = v_vedis_value_is_numeric(float_1);

	double_2 = double_1 * double_1;
	short_2 = short_1 + short_1;
	if(1)
	{
		double_2 = double_2 * double_1;
	}
	if(1)
	{
		short short_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		int_3 = int_2 + int_2;
		short_2 = short_3;
		double_3 = v_SyBlobAppend(short_1,unsigned_int_1,unsigned_int_1,-1 );

		double_3 = double_2 + double_4;
	}
	if(1)
	{
		char_1 = char_1 * char_2;
		int_3 = v_vedis_array_walk(unsigned_int_2,short_4);

		double_1 = double_3 * double_5;
		short_1 = short_4;
	}
	if(1)
	{
		long long_1 = 1;
		int_1 = v_vedis_value_is_null(float_1);

		double_1 = double_1 + double_6;
		int_4 = v_vedis_value_to_bool(short_1);

		char_2 = char_1 + char_1;
		double_5 = double_1 * double_6;
		long_1 = long_1 * long_2;
		char_2 = v_vedis_value_to_string(double_4,int_2);

		double_1 = double_5;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_2 = 1;
			float float_4 = 1;
			if(1)
			{
				float_2 = float_1 + float_1;
			}
			int_2 = v_vedis_value_is_array(int_4);

			long_2 = v_VmJsonArrayEncode(float_1);

			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			short_4 = short_4;
			if(1)
			{
				float float_3 = 1;
				int_5 = v_vedis_value_is_bool(int_5);

				float_1 = float_3 + float_1;
			}
			float_5 = float_4 + float_2;
		}
		double_1 = double_1 * double_5;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		short short_5 = 1;
		double double_7 = 1;
		int_5 = v_vedis_value_is_string(int_2);

		double_2 = double_6 + double_6;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		short_5 = short_2 + short_1;
		double_7 = double_6 * double_7;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1;
	}
	return float_5;
}
unsigned int v_vedisJsonSerialize( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_2 = double_1 + double_2;
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_3 + double_4;
	float_3 = v_VmJsonEncode(short_1,double_2);

	int_2 = int_1 + int_1;
	short_3 = short_2 * short_2;
	return unsigned_int_1;
}
double v_MemObjStringValue( short parameter_1,double parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		long_1 = v_SyBlobFormat(int_1,float_1,long_2);

		double_1 = v_SyBlobAppend(short_1,unsigned_int_1,unsigned_int_1,-1 );

		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		float float_2 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		if(1)
		{
			short short_2 = 1;
			unsigned_int_1 = v_vedisJsonSerialize(int_2,char_1);

			short_1 = short_2;
		}
		if(1)
		{
			int_1 = int_2 + int_1;
		}
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_1;
		short_3 = v_vedisHashmapUnref();

		float_3 = float_3;
	}
	return double_1;
}
void v_vedisMemObjToString()
{
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
		int int_1 = 1;
		float float_2 = 1;
		float_1 = v_SyBlobReset();

		int_1 = int_1 * int_1;
		float_2 = float_1 * float_1;
		int_1 = int_1 + int_1;
	}
	double_1 = v_MemObjStringValue(short_1,double_1);

}
char v_vedis_value_to_string( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v_vedisMemObjToString();

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1 * float_2;
		}
	}
	if(1)
	{
		if(1)
		{
			int_3 = int_1 + int_1;
		}
	}
	return char_1;
	float_1 = v_SyBlobNullAppend();

}
char v_array_render( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char_1 = char_1 + char_2;
	int_1 = v_vedis_value_is_null(float_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_1;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = double_1 * double_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		char_1 = char_1;
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	return char_3;
	char_3 = v_vedis_value_to_string(double_2,int_3);

}
short v_vedisHashmapWalk( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_2 = 1;
	char_1 = char_2;
	double_1 = double_2;
	short_1 = short_1 * short_1;
	long_1 = long_1 + long_2;
	long_2 = long_1 * long_2;
	char_4 = char_1 + char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
			double double_3 = 1;
			double_2 = double_3;
		}
		long_1 = long_2 + long_1;
		if(1)
		{
		}
		int_1 = int_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return short_2;
}
int v_vedis_array_walk( unsigned int parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = float_1;
	short_1 = v_vedisHashmapWalk(char_3,int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
int v_vedis_value_is_array( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_1 * int_2;
	return int_2;
}
int v_vedis_value_is_null( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_2 = float_1 + float_1;
	return int_1;
}
double v_command_result_render( short parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	double double_4 = 1;
	char_1 = v_array_render(long_1);

	short_1 = short_1 + short_1;
	if(1)
	{
		int int_2 = 1;
		int_1 = v_vedis_array_walk(unsigned_int_1,short_1);

		char_1 = v_vedis_value_to_string(double_1,int_1);

		int_2 = int_1 + int_2;
	}
	if(1)
	{
		long long_2 = 1;
		int_3 = int_3 * int_4;
		int_3 = v_vedis_value_is_null(float_1);

		long_2 = long_1 + long_1;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		int_4 = v_vedis_value_is_array(int_3);

		double_3 = double_2 + double_1;
	}
	return double_4;
}
float v_vedisObjectValueDestroy( long parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned_int_1 = v_SyMemBackendPoolFree(long_1);

	double_1 = double_1;
	int_1 = v_vedisMemObjRelease(int_2);

	int_3 = int_1 + int_3;
	return float_1;
}
unsigned int v_vedisHashmapRef( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_2 = float_1 + float_2;
	return unsigned_int_1;
}
long v_vedisMemObjStore( int parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short_1 = short_1 * short_2;
	int_1 = int_1;
	if(1)
	{
		float_1 = v_SyBlobReset();

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short_3 = v_SyBlobDup(char_1,unsigned_int_1);

		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	float_1 = float_1;
	int_1 = int_1 * int_1;
	if(1)
	{
		short short_4 = 1;
		long_1 = v_SyBlobRelease(short_3);

		short_4 = short_1 + short_1;
		unsigned_int_1 = v_vedisHashmapRef(unsigned_int_1);

		double_1 = double_1 * double_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			short_3 = v_vedisHashmapUnref();

			unsigned_int_4 = unsigned_int_4;
		}
	}
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	return long_2;
	long_1 = v_SyMemcpy(long_3,char_1);

}
float v_SyStrToReal( int parameter_1,short parameter_2,float parameter_4)
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
void v_MemObjRealValue( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float_1 = v_MemObjStringToInt();

	float_2 = v_SyStrToReal(int_1,short_1,float_1);

	int_2 = v_vedisHashmapCount(float_3);

	short_2 = short_2 * short_3;
	short_1 = v_vedisHashmapUnref();

}
double v_vedisMemObjToReal( int parameter_1)
{
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_2 = short_1 * short_1;
		long_1 = v_SyBlobRelease(short_2);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		v_MemObjRealValue(double_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	return double_2;
}
int v_vedisMemObjRelease( int parameter_1)
{
	short short_1 = 1;
	short short_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_2 = 1;
		if(1)
		{
			short_1 = v_vedisHashmapUnref();

			int_1 = int_1 + int_1;
		}
		int_1 = int_1 * int_2;
		short_2 = short_2 * short_3;
	}
	return int_3;
	long_1 = v_SyBlobRelease(short_3);

}
int v_vedisHashmapRelease( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	short_1 = short_2;
	double_1 = v_SyMemBackendFree(short_1);

	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = v_SyMemBackendPoolFree(long_1);

	short_3 = short_1 * short_2;
	int_2 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_2 = 1;
		if(1)
		{
			long_2 = v_SyBlobRelease(short_1);

			long_1 = long_2 * long_2;
		}
		unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
		long_4 = long_3 + long_2;
		if(1)
		{
			unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
		}
		double_1 = double_1 + double_2;
		double_1 = double_2;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		int_1 = v_vedisMemObjRelease(int_3);

		unsigned_int_2 = unsigned_int_6;
	}
	float_1 = float_1 * float_1;
	return int_4;
}
short v_vedisHashmapUnref()
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int_1 = v_vedisHashmapRelease(float_1);

	double_2 = double_1 * double_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	return short_1;
}
int v_vedisHashmapCount( float parameter_1)
{
	int int_1 = 1;
	return int_1;
}
long v_SyStrToInt64( double parameter_1,unsigned int parameter_2,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_1;
	int_2 = int_1 + int_1;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	return long_1;
	unsigned_int_2 = v_SyMemcmp(double_1,double_2,float_1);

}
double v_SyOctalStrToInt64( int parameter_1,double parameter_2,int parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int_1 = int_1 + int_1;
	double_2 = double_1 + double_1;
	long_1 = long_1 * long_2;
	char_1 = char_1 + char_2;
	return double_3;
}
short v_SyBinaryStrToInt64( int parameter_1,float parameter_2,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	return short_1;
}
short v_SyHexToint()
{
	short short_1 = 1;
	return short_1;
}
unsigned int v_SyHexStrToInt64( double parameter_1,short parameter_2,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_5 = 1;
	int_2 = int_1 + int_2;
	int_3 = int_2 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_2 + int_1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
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
			float float_1 = 1;
			float_1 = float_1;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			short_1 = short_1 * short_1;
		}
	}
	short_1 = v_SyHexToint();

	char_3 = char_1 * char_2;
	int_3 = int_2 * int_4;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double double_4 = 1;
		double_4 = double_3 + double_1;
		double_1 = double_5;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int_4 = int_4;
		char_2 = char_3;
	}
	double_5 = double_3 * double_1;
	return unsigned_int_1;
}
short v_vedisTokenValueToInt64( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	short short_3 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		int_3 = int_2 * int_2;
		if(1)
		{
		}
		short_1 = v_SyBinaryStrToInt64(int_2,float_1,short_2);

		long_1 = v_SyStrToInt64(double_1,unsigned_int_1,long_1);

		double_2 = double_2 + double_2;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			double_3 = v_SyOctalStrToInt64(int_2,double_2,int_3);

			double_1 = double_3 * double_3;
		}
		if(1)
		{
			float float_2 = 1;
			float_1 = float_2 * float_1;
		}
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_3 + float_1;
	}
	return short_3;
	unsigned_int_3 = v_SyHexStrToInt64(double_3,short_2,char_1);

}
float v_MemObjStringToInt()
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short_1 = v_vedisTokenValueToInt64(char_1);

	char_1 = char_2 + char_1;
	int_1 = int_2;
	return float_1;
}
int v_MemObjRealToInt()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_7 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_1;
	double_5 = double_3 + double_4;
	long_1 = long_1 * long_2;
	double_3 = double_2 + double_5;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	long_3 = long_4;
	long_4 = long_4 + long_1;
	double_5 = double_6;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	double_4 = double_6 + double_7;
	char_1 = char_1;
	short_1 = short_1;
	return int_1;
}
short v_MemObjIntValue( float parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int_1 = v_MemObjRealToInt();

	double_2 = double_1 * double_1;
	float_1 = v_MemObjStringToInt();

	long_2 = long_1 * long_1;
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
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_2 = 1;
		short_1 = v_vedisHashmapUnref();

		char_3 = char_1 * char_2;
		int_1 = int_2 + int_2;
		int_1 = int_1 + int_2;
	}
	return short_2;
	int_3 = v_vedisHashmapCount(float_2);

}
void v_vedisMemObjToInteger( short parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	if(1)
	{
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		int_1 = int_1;
		short_1 = v_MemObjIntValue(float_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_2 = int_1;
	}
	long_1 = v_SyBlobRelease(short_1);

}
long v_vedisMemObjInitFromString( float parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_2;
	double_1 = v_SyBlobAppend(short_1,unsigned_int_1,unsigned_int_2,-1 );

	float_1 = float_1 * float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "h") < 0)
	{
		int int_3 = 1;
		char_1 = v_SyZero(int_1);

		int_2 = int_3 * int_3;
	}
	unsigned_int_3 = v_SyBlobInit(char_2,unsigned_int_4);

	long_1 = long_1 * long_2;
	return long_1;
}
int v_vedisNewObjectValue( long parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	long long_2 = 1;
	short short_5 = 1;
	int int_4 = 1;
	long long_3 = 1;
	char_3 = char_1 * char_2;
	double_1 = v_vedisMemObjToReal(int_1);

	double_3 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		long_1 = v_vedisMemObjInitFromString(float_1,int_2,unsigned_int_1);

		short_2 = short_1 * short_2;
		long_1 = long_1;
		if(1)
		{
			short short_3 = 1;
			short_3 = short_2 + short_2;
		}
		if(1)
		{
			int int_3 = 1;
			v_vedisMemObjToInteger(short_4);

			int_3 = int_1 * int_1;
		}
	}
	if(1)
	{
		long_2 = v_SyMemBackendPoolAlloc(char_1,short_5);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return int_1;
	int_4 = v_vedisMemObjInit(unsigned_int_1,long_3);

}
float v_SyBlobNullAppend()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	char_3 = char_1 * char_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double_1 = v_SyBlobAppend(short_1,unsigned_int_5,unsigned_int_1,-1 );

		long_2 = long_1 + long_2;
	}
	return float_1;
}
float v_vedisPagerSetCachesize( short parameter_1,int parameter_2)
{
	float float_1 = 1;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	return float_1;
}
char v_vedisConfigure( short parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	long long_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_6 = 1;
	float float_7 = 1;
	char char_1 = 1;
	double_1 = double_2;
	double_3 = v_vedisPagerGetKvEngine(long_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = v_SyBlobNullAppend();

	float_1 = float_2 * float_2;
	double_2 = double_1 * double_3;
	int_1 = int_1 * int_2;
	double_5 = double_4 * double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		long_1 = long_1 * long_1;
	}
	double_5 = double_1 * double_6;
	double_8 = double_6 * double_7;
	if(1)
	{
		if(1)
		{
			int_3 = int_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		}
	}
	double_3 = double_3 * double_8;
	float_3 = v_vedisObjectValueDestroy(long_2,unsigned_int_3);

	long_3 = long_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		float_1 = float_1 + float_2;
		short_1 = short_1 + short_1;
		long_4 = long_1 + long_4;
	}
	double_3 = double_3;
	float_1 = float_4 + float_2;
	if(1)
	{
		int_3 = v_vedisNewObjectValue(long_2,float_3);

		float_1 = float_1 + float_5;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
			int_3 = int_1 + int_4;
			long_5 = v_vedisMemObjStore(int_1,short_1);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		double_7 = double_5;
		long_5 = long_4 + long_3;
	}
	unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
	double_2 = double_7 + double_8;
	if(1)
	{
		long_4 = long_1 * long_5;
	}
	int_4 = int_3;
	int_1 = int_4;
	long_5 = long_4 + long_5;
	double_4 = double_4 + double_4;
	double_8 = double_3 * double_8;
	float_6 = float_5 + float_3;
	float_5 = float_7 + float_3;
	float_4 = v_vedisPagerSetCachesize(short_1,int_4);

	double_8 = double_8 + double_3;
	return char_1;
}
int v_vedis_config( unsigned int parameter_1,int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
	}
	if(1)
	{
		char_1 = v_vedisConfigure(short_1,int_1,char_1);

		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_2;
	double_1 = double_1 + double_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	return int_2;
}
int v_SySetRelease( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double_1 = double_1;
	if(1)
	{
		double_3 = double_2 + double_1;
	}
	long_2 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_4 = v_SyMemBackendFree(short_1);

	double_2 = double_2 * double_3;
	return int_1;
}
double v_vedisPagerClose( float parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_4 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	v_pager_release_kv_engine(char_1);

	float_2 = float_1 * float_2;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
		if(1)
		{
			v_vedisBitvecDestroy(long_1);

			unsigned_int_1 = unsigned_int_2;
		}
	}
	if(1)
	{
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_2 = double_1 + double_1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		short_2 = short_1 * short_2;
		double_1 = double_1 + double_3;
	}
	return double_4;
	float_2 = v_vedisExportBuiltinVfs();

	long_2 = v_pager_unlock_db(unsigned_int_1,int_2);

	unsigned_int_4 = v_vedisOsCloseFree(long_1,unsigned_int_5);

}
double v_pager_reset_state( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	short short_4 = 1;
	double_2 = double_1 * double_2;
	float_2 = float_1 + float_1;
	double_4 = double_2 + double_3;
	float_4 = float_2 + float_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	double_2 = double_1 * double_4;
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_4 = 1;
		if(1)
		{
			long long_2 = 1;
			long_3 = long_1 * long_2;
		}
		char_1 = v_SyZero(int_2);

		int_3 = int_1 + int_3;
		double_3 = double_1 + double_3;
		long_1 = v_pager_unlock_db(unsigned_int_3,int_2);

		long_1 = long_3;
		long_1 = long_4;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	int_1 = int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	short_2 = short_1;
	unsigned_int_5 = unsigned_int_6;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		char char_2 = 1;
		v_vedisBitvecDestroy(long_3);

		int_1 = int_1;
		char_1 = char_1 * char_2;
	}
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	short_1 = short_3 * short_1;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_3 * unsigned_int_1;
		if(1)
		{
			int_2 = int_1 * int_2;
		}
		double_2 = double_2 * double_5;
		int_4 = v_pager_release_page(short_4,float_4);

		short_4 = short_3 + short_1;
		if(1)
		{
			long long_5 = 1;
			long_3 = long_5;
			if(1)
			{
			}
		}
		if(1)
		{
			int_2 = int_3 * int_4;
			if(1)
			{
			}
		}
	}
	return double_5;
}
short v_vedisPagerRollback( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		short short_3 = 1;
		long_1 = v_pager_unlock_db(unsigned_int_2,int_1);

		short_3 = short_1 + short_2;
	}
	if(1)
	{
		char char_2 = 1;
		if(1)
		{
			long long_2 = 1;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_1;
			}
			char_1 = v_vedisOsSync(int_1,int_2);

			long_2 = long_1 + long_1;
			float_1 = float_2;
			if(1)
			{
				int_2 = int_2;
				if(1)
				{
					short_4 = short_1 + short_2;
				}
			}
		}
		int_1 = int_1;
		float_1 = v_vedisGenError(float_2,double_1,-1 );

		unsigned_int_4 = v_vedisOsCloseFree(long_1,unsigned_int_5);

		char_2 = char_2;
		if(1)
		{
			double double_3 = 1;
			short short_5 = 1;
			float_1 = v_pager_journal_rollback(double_2,int_1,-1 );

			double_1 = double_3 * double_4;
			double_4 = v_pager_reset_state(float_2,int_3);

			short_2 = short_1 + short_5;
		}
	}
	if(1)
	{
		float float_3 = 1;
		long long_3 = 1;
		float_3 = float_1 * float_2;
		long_3 = long_3;
	}
	return short_4;
	int_4 = v_vedisOsDelete(float_1,char_1,int_3);

}
void v_vedisBitvecDestroy( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int_2 = int_1 + int_1;
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_4 = 1;
		float float_3 = 1;
		if(1)
		{
			int_2 = int_2 * int_1;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_1 = v_SyMemBackendFree(short_1);

		float_1 = float_2 * float_1;
		double_2 = double_2 * double_2;
		unsigned_int_1 = v_SyMemBackendPoolFree(long_1);

		int_3 = int_1 * int_1;
		if(1)
		{
			double_1 = double_2 * double_2;
		}
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
		double_1 = double_2 * double_1;
		double_2 = double_1;
		char_1 = char_1 * char_2;
		if(1)
		{
			short_2 = short_1 * short_1;
		}
		short_1 = short_2 * short_2;
		long_3 = long_2 * long_3;
		long_2 = long_3;
		int_3 = int_3 * int_1;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_1 + char_3;
		}
		unsigned_int_3 = unsigned_int_2;
		int_4 = int_3 * int_2;
		int_3 = int_4 + int_4;
		float_3 = float_3 * float_2;
	}
	short_2 = short_1 * short_1;
	double_3 = double_3 * double_2;
}
int v_pager_commit_phase2( long parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			if(1)
			{
				double_2 = double_1 + double_1;
			}
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			v_vedisBitvecDestroy(long_1);

			short_3 = short_1 * short_2;
			if(1)
			{
				int int_2 = 1;
				int int_3 = 1;
				double_1 = double_1 + double_2;
				int_1 = v_vedisOsDelete(float_1,char_1,int_1);

				long_2 = v_pager_unlock_db(unsigned_int_2,int_1);

				int_2 = int_3;
			}
		}
	}
	return int_4;
}
void v_pager_write_dirty_pages( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_3 = 1;
		float float_2 = 1;
		if(1)
		{
			short_3 = short_1 + short_2;
		}
		int_1 = v_pager_release_page(short_2,float_1);

		int_1 = int_2 + int_1;
		if(1)
		{
			double double_3 = 1;
			double_3 = double_2;
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
			}
		}
		char_1 = v_pager_unlink_page(float_1,int_1);

		char_3 = char_1 * char_2;
		if(1)
		{
			double double_4 = 1;
			short_1 = short_3;
			double_2 = double_4 * double_4;
		}
		float_2 = float_2;
	}
	unsigned_int_3 = v_vedisOsWrite(long_1,long_1,unsigned_int_3,long_2);

	int_2 = int_2 * int_3;
	char_5 = char_4 + char_3;
	char_7 = char_2 + char_6;
}
int v_page_merge_dirty( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_1;
	int_3 = int_1 * int_2;
	double_1 = double_1 * double_1;
	float_1 = float_1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 * double_2;
	return int_1;
}
long v_pager_get_dirty_pages( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	if(1)
	{
		if(1)
		{
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			long long_1 = 1;
			long_2 = long_1 + long_2;
		}
	}
	return long_2;
	char_1 = v_SyZero(int_1);

	int_1 = v_page_merge_dirty(char_2,int_1);

}
int v_pager_commit_phase1()
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_4 = 1;
	char char_3 = 1;
	short short_2 = 1;
	long long_5 = 1;
	long long_6 = 1;
	long_2 = long_1 * long_1;
	float_1 = v_vedisGenError(float_1,double_1,-1 );

	char_1 = char_1 + char_2;
	v_pager_write_dirty_pages(char_1,int_1);

	long_1 = long_2 + long_3;
	if(1)
	{
	}
	if(1)
	{
		int_2 = v_vedisFinalizeJournal(short_1,int_1,int_3);

		long_3 = v_pager_get_dirty_pages(double_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double_2 = double_2 * double_1;
		if(1)
		{
			char_1 = v_vedisOsSync(int_2,int_4);

			float_3 = float_2 + float_2;
		}
		long_2 = v_vedisOsTruncate(int_4,short_1);

		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
	}
	long_4 = long_1 * long_1;
	if(1)
	{
	}
	char_3 = v_pager_wait_on_lock(long_2,int_1);

	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		long_1 = long_3 + long_3;
		if(1)
		{
			short_2 = short_1 + short_1;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	long_6 = long_3 * long_5;
	if(1)
	{
		long long_7 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long_2 = long_7 + long_7;
		short_1 = short_3 + short_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	char_2 = char_3;
	float_2 = float_3;
	int_3 = int_4;
	return int_2;
}
float v_vedisPagerCommit( char parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_1 = v_pager_commit_phase2(long_1);

	char_1 = char_2;
	int_2 = v_pager_commit_phase1();

	float_2 = float_1 * float_2;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 * int_3;
	}
	char_1 = char_2 + char_3;
	if(1)
	{
		char char_4 = 1;
		char_3 = char_2 * char_4;
	}
	double_2 = double_1 + double_1;
	double_2 = double_3 * double_3;
	return float_2;
}
unsigned int v_vedisEngineRelease( char parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_4 = 1;
	float float_3 = 1;
	double double_5 = 1;
	float float_5 = 1;
	double_1 = v_SyMemBackendRelease(float_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_1 = double_2;
		if(1)
		{
			double double_3 = 1;
			short_1 = v_vedisPagerRollback(short_1,int_1);

			double_3 = double_2 + double_2;
		}
	}
	if(1)
	{
		float float_4 = 1;
		float_2 = v_vedisPagerCommit(char_1);

		double_4 = v_vedisPagerClose(float_3);

		float_4 = float_1 * float_4;
	}
	double_1 = double_2 + double_5;
	float_1 = float_3 + float_1;
	float_2 = float_2 + float_5;
	return unsigned_int_2;
}
int v_vedisCoreShutdown()
{
	float float_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_5 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float_1 = float_1 + float_1;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_3 = 1;
		char char_1 = 1;
		if(1)
		{
			long long_2 = 1;
			long_1 = long_2;
		}
		long_3 = long_3 * long_1;
		char_3 = char_1 * char_2;
		char_2 = char_2 * char_4;
		double_1 = double_1 * double_2;
	}
	char_2 = char_3;
	if(1)
	{
		char char_7 = 1;
		char char_8 = 1;
		if(1)
		{
			char char_5 = 1;
			char char_6 = 1;
			if(1)
			{
				double double_3 = 1;
				double double_4 = 1;
				double_5 = double_3 * double_4;
				int_2 = int_1 * int_1;
			}
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short_1 = short_1 * short_2;
			}
			char_6 = char_4 + char_5;
		}
		char_8 = char_4 + char_7;
	}
	if(1)
	{
		double_5 = double_2 * double_1;
	}
	unsigned_int_1 = v_vedisEngineRelease(char_2);

	int_3 = int_3 * int_1;
	return int_2;
	int_1 = v_SySetRelease(char_3);

	double_2 = v_SyMemBackendRelease(float_2);

}
int v_vedis_lib_shutdown()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	int_1 = v_vedisCoreShutdown();

	unsigned_int_1 = unsigned_int_2;
	return int_2;
}
int v_Fatal( int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_1;
	double_1 = double_1 * double_1;
	int_1 = v_vedis_lib_shutdown();

	int_2 = int_1 * int_2;
	return int_2;
}
char v_SyBlobAppendBig32( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int_1 = v_SyBigEndianPack32(double_1,unsigned_int_1);

	int_2 = int_2 + int_3;
	short_3 = short_1 + short_2;
	int_3 = int_3 * int_1;
	int_4 = int_2 + int_1;
	return char_1;
	double_1 = v_SyBlobAppend(short_2,unsigned_int_1,unsigned_int_1,-1 );

}
char v_SyBlobAppendBig16( float parameter_1,float parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	int_1 = int_1;
	short_1 = short_1 + short_1;
	char_1 = v_SyBigEndianPack16(float_1,short_1);

	char_1 = char_1 * char_1;
	double_1 = v_SyBlobAppend(short_2,unsigned_int_1,unsigned_int_1,-1 );

	float_2 = float_1 + float_2;
	return char_1;
}
long v_SyBlobFormat( int parameter_1,float parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 + long_1;
	if(1)
	{
		double double_1 = 1;
		if(1)
		{
		}
		double_1 = double_1;
	}
	unsigned_int_3 = unsigned_int_4;
	double_3 = double_2 + double_2;
	return long_2;
	unsigned_int_3 = v_FormatMount(double_4,char_1,char_2,int_1,char_3);

}
double v_vedisPagerGetKvEngine( long parameter_1)
{
	double double_1 = 1;
	return double_1;
}
char v_vedisTableSerialize( short parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_3 = 1;
	char char_3 = 1;
	long_1 = v_SyBlobFormat(int_1,float_1,long_1);

	short_2 = short_1 + short_1;
	long_1 = long_1 + long_1;
	float_4 = float_2 * float_3;
	double_1 = double_1;
	float_1 = v_vedisGenErrorFormat(float_3,unsigned_int_1,unsigned_int_1);

	char_1 = v_SyBlobAppendBig32(int_1,char_2);

	float_2 = float_2 + float_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_3 = v_SyBlobInit(char_2,unsigned_int_2);

	short_1 = short_1 * short_2;
	char_1 = v_SyBlobAppendBig16(float_4,float_4);

	int_1 = int_1 * int_2;
	if(1)
	{
		double_2 = v_vedisPagerGetKvEngine(long_1);

		int_4 = int_3 + int_1;
	}
	int_5 = int_1 + int_5;
	int_5 = int_6 + int_3;
	double_2 = double_1 + double_2;
	double_2 = double_1;
	int_4 = int_4;
	int_5 = int_2 + int_7;
	long_1 = v_SyBlobRelease(short_2);

	int_3 = int_4 * int_1;
	if(1)
	{
	}
	short_3 = short_2;
	return char_3;
}
short v_vedisPagerisMemStore( short parameter_1)
{
	short short_1 = 1;
	return short_1;
}
char v_vedisOnCommit()
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short_1 = v_vedisPagerisMemStore(short_2);

	int_2 = int_1 * int_1;
	double_3 = double_1 + double_2;
	int_2 = int_3 * int_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "e") > 0)
	{
	}
	float_2 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
		}
		char_1 = v_vedisTableSerialize(short_1);

		int_1 = int_4 * int_1;
	}
	return char_2;
}
char v_vedisPagerSetCommitCallback( unsigned int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_3 = float_1 * float_2;
	return char_1;
}
void v_SySetReset( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_2 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void v_SyBinHash( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 * double_1;
	short_2 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
			long_1 = long_1;
		}
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
		short_2 = short_1 + short_2;
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 * long_1;
		}
		double_3 = double_3 * double_1;
		double_2 = double_3 * double_1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_2;
		}
		double_2 = double_2 + double_2;
		double_4 = double_2 * double_3;
		if(1)
		{
			double double_5 = 1;
			double_4 = double_5 * double_2;
		}
		int_3 = int_3 * int_4;
		char_2 = char_1 * char_2;
	}
}
unsigned int v_vedisFetchCommand( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_1;
	double_1 = double_2;
	if(1)
	{
	}
	float_2 = float_1 + float_1;
	unsigned_int_1 = v_SyMemcmp(double_1,double_2,float_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 + int_1;
		}
		if(1)
		{
		}
		long_3 = long_1 * long_2;
	}
	return unsigned_int_2;
	v_SyBinHash(unsigned_int_3,int_2);

}
int v_vedisInstallCommand( long parameter_1,short parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	float_2 = float_1 + float_1;
	double_2 = double_1 + double_1;
	short_2 = short_1 + short_1;
	double_2 = v_SyMemBackendFree(short_1);

	int_1 = int_1;
	double_2 = double_2 * double_3;
	char_1 = char_1 * char_1;
	double_2 = double_3;
	int_1 = int_2 + int_1;
	float_2 = float_3 + float_3;
	if(1)
	{
		int_2 = int_1 * int_2;
		short_1 = short_1 + short_1;
		short_1 = v_SyStrlen(double_4);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	unsigned_int_2 = v_vedisFetchCommand(float_2,short_3);

	double_4 = double_4;
	if(1)
	{
	}
	int_4 = int_3 + int_3;
	double_2 = double_5;
	v_SySetInit(char_2,char_1,float_2);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	int_2 = int_2 + int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	short_3 = short_3 * short_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	char_2 = v_SyZero(int_1);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
	v_SySetReset(char_2);

	v_SyBinHash(unsigned_int_4,int_4);

	long_2 = long_1 + long_1;
	double_3 = double_1 * double_1;
	long_2 = long_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_5;
	if(1)
	{
		double_1 = double_4;
	}
	long_1 = v_SyMemcpy(long_3,char_3);

	double_6 = double_3 * double_3;
	if(1)
	{
		double double_7 = 1;
		float float_4 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
		double_2 = double_7 * double_5;
		float_3 = float_3 + float_4;
		double_7 = double_6 * double_5;
		float_1 = float_3 + float_1;
		if(1)
		{
			int_2 = int_3;
			int_1 = int_3 * int_2;
			int_1 = int_4 + int_3;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned int unsigned_int_7 = 1;
				int int_6 = 1;
				double double_8 = 1;
				if(1)
				{
					char_1 = char_1;
				}
				double_6 = double_5;
				long_3 = long_3 + long_3;
				unsigned_int_2 = unsigned_int_6 + unsigned_int_7;
				if(1)
				{
					char_2 = char_3 + char_1;
				}
				int_6 = int_2 + int_5;
				float_3 = float_1 + float_2;
				double_8 = double_1 + double_5;
			}
			unsigned_int_6 = v_SyMemBackendAlloc(double_1,double_1);

			char_1 = char_1 + char_3;
			char_2 = char_2 + char_3;
			int_2 = int_1 + int_5;
		}
	}
	return int_5;
}
int v_vedis_register_command( unsigned int parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		int_1 = v_vedisInstallCommand(long_1,short_1,unsigned_int_1);

		double_5 = double_4 + double_1;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_2;
	}
	return int_2;
}
double v_vedisRegisterBuiltinCommands( short parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int_1 = v_vedis_register_command(unsigned_int_1,long_1,unsigned_int_1,int_2,unsigned_int_1);

	float_2 = float_1 * float_1;
	int_2 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	return double_1;
}
int v_vedisMemObjInit( unsigned int parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long_1 = long_2;
	char_1 = v_SyZero(int_1);

	long_3 = long_2 + long_3;
	unsigned_int_1 = v_SyBlobInit(char_2,unsigned_int_1);

	float_3 = float_1 * float_2;
	return int_1;
}
double v_vedisInitCursor( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 + int_2;
	char_1 = v_SyZero(int_1);

	int_1 = int_1 * int_1;
	if(1)
	{
		long_1 = v_SyMemBackendPoolAlloc(char_2,short_1);

		v_vedisGenOutofMem(double_3);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	float_1 = v_vedisGenErrorFormat(float_2,unsigned_int_1,unsigned_int_2);

	int_2 = int_2 + int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	int_1 = int_3 + int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
	}
	int_1 = int_3 * int_4;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	int_2 = int_5 * int_5;
	return double_4;
}
void v_vedisKvIoErr( int parameter_1,char parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float_1 = v_vedisGenError(float_1,double_1,-1 );

	char_1 = char_1 + char_1;
	int_1 = int_1;
}
long v_vedisKvIoPageReload( int parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long_1 = long_1 + long_1;
	double_3 = double_1 * double_2;
	return long_2;
}
int v_vedisKvIoPageUnpin( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3;
	return int_1;
}
unsigned int v_vedisKvIoTempPage( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double v_vedisKvIoReadOnly()
{
	double double_1 = 1;
	return double_1;
}
short v_vedisKvIoPageSize( long parameter_1)
{
	short short_1 = 1;
	return short_1;
}
int v_page_unref()
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	char_1 = v_pager_unlink_page(float_1,int_1);

	long_1 = long_1 * long_1;
	if(1)
	{
		int int_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int_1 = int_1 * int_2;
		if(1)
		{
			int_1 = v_pager_release_page(short_1,float_2);

			short_2 = short_2 + short_2;
			short_2 = short_3 + short_1;
		}
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				unsigned_int_1 = unsigned_int_1;
				if(1)
				{
					unsigned int unsigned_int_2 = 1;
					unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
				}
				if(1)
				{
					int int_3 = 1;
					int int_4 = 1;
					short_2 = short_2 * short_1;
					if(1)
					{
						double_1 = double_1 * double_1;
					}
					int_3 = int_4;
				}
				double_1 = double_1 * double_2;
				short_3 = short_2 + short_3;
			}
		}
	}
	return int_5;
}
long v_vedisKvIoPageUnRef( long parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
		long long_2 = 1;
		int_1 = v_page_unref();

		long_1 = long_1 * long_2;
	}
	return long_1;
}
long v_vedisKvIopage_ref( unsigned int parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_1 = v_page_ref(char_1);

		unsigned_int_1 = unsigned_int_2;
	}
	return long_2;
}
char v_vedisKvIoPageDontMakeHot( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short_1 = short_2;
		if(1)
		{
			short_2 = short_2;
		}
		if(1)
		{
			int_1 = int_2;
		}
		if(1)
		{
			int_1 = int_2;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_1 * char_2;
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		double_2 = double_2;
	}
	return char_4;
}
long v_vedisKvIoPageDontJournal( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_2;
	int_3 = int_2 * int_3;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if(remainder_check(controller_2,100,2))
	{
		if(1)
		{
			int_1 = int_3 + int_3;
		}
	}
	return long_1;
	v_vedisBitvecTest(char_1,long_1);

	int_1 = v_vedisBitvecSet(double_1,double_2);

}
long v_vedisPagerDontWrite( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	return long_1;
}
long v_vedisKvIoPageDontWrite()
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	return long_1;
	long_2 = v_vedisPagerDontWrite(float_3);

}
int v_vedisBitvecSet( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 + int_1;
	short_1 = short_1 * short_1;
	double_1 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "!:") < 0)
	{
	}
	double_2 = double_1 * double_2;
	char_1 = char_1 + char_2;
	double_1 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	float_1 = float_1 + float_1;
	int_1 = int_1 + int_2;
	int_2 = int_2 * int_1;
	if(1)
	{
		double double_4 = 1;
		double_2 = double_2 * double_1;
		double_1 = double_4 * double_4;
		int_2 = int_1;
		double_3 = double_1 * double_5;
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			double double_6 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_7 = 1;
			short_1 = short_1 + short_2;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			short_3 = short_2 * short_3;
			int_2 = int_1 + int_3;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int int_4 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				int int_5 = 1;
				int int_6 = 1;
				if(1)
				{
					char char_3 = 1;
					long_1 = v_SyMemBackendPoolAlloc(char_2,short_1);

					char_3 = char_1;
				}
				char_1 = v_SyZero(int_3);

				double_5 = v_SyMemBackendFree(short_1);

				double_4 = double_2;
				unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
				unsigned_int_3 = v_SyMemBackendAlloc(double_3,double_2);

				int_1 = int_2 + int_4;
				unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
				int_5 = int_4 * int_2;
				int_2 = int_6 + int_4;
			}
			double_6 = double_4 * double_4;
			float_1 = float_2 + float_2;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_7;
		}
	}
	return int_1;
}
int v_WriteInt64( int parameter_1,float parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 * int_1;
	long_1 = v_SyBigEndianPack64(short_1,int_1);

	double_1 = double_1;
	unsigned_int_1 = v_vedisOsWrite(long_2,long_2,unsigned_int_1,long_3);

	float_2 = float_1 + float_2;
	return int_1;
}
void v_vedisBitvecTest( char parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_2;
		}
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		}
		if(1)
		{
		}
		long_2 = long_1 + long_1;
		if(1)
		{
			short short_3 = 1;
			short_2 = short_3 + short_3;
		}
		if(1)
		{
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_2 = unsigned_int_4;
		}
		if(1)
		{
		}
		unsigned_int_3 = unsigned_int_1;
	}
}
double v_page_write( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	float float_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_4 = 1;
			short_1 = v_pager_page_to_dirty_list(float_1,float_1);

			int_2 = int_1 * int_2;
			if(1)
			{
				short short_2 = 1;
				int_3 = v_vedisBitvecSet(double_1,double_2);

				short_2 = short_1 * short_2;
			}
			int_1 = int_2 * int_4;
			if(1)
			{
			}
			unsigned_int_1 = v_vedisOsWrite(long_1,long_1,unsigned_int_1,long_1);

			unsigned_int_1 = unsigned_int_1;
			if(1)
			{
			}
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			int_2 = int_4 * int_5;
			if(1)
			{
			}
			float_1 = float_1 * float_1;
			long_1 = v_pager_cksum(float_2,short_1);

			unsigned_int_2 = v_WriteInt32(double_3,int_4,short_1);

			unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
			double_3 = double_1 * double_4;
		}
	}
	float_3 = v_vedisGenError(float_1,double_3,-1 );

	int_1 = int_4 * int_2;
	if(1)
	{
		short_1 = short_1 * short_1;
		if(1)
		{
			int_5 = v_WriteInt64(int_4,float_4,int_2);

			float_3 = float_4 + float_3;
		}
	}
	return double_3;
	v_vedisBitvecTest(char_1,long_2);

}
int v_pager_release_page( short parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_1 + long_2;
		}
		double_1 = double_1 * double_2;
		unsigned_int_1 = v_SyMemBackendPoolFree(long_1);

		double_1 = double_3;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
	}
	return int_1;
}
char v_pager_unlink_page( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_3 = char_1 * char_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	unsigned_int_1 = unsigned_int_3;
	char_4 = char_3 * char_3;
	return char_4;
}
void v_pager_write_hot_dirty_pages( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	short short_5 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_4 = 1;
		int int_1 = 1;
		float float_2 = 1;
		short short_2 = 1;
		if(1)
		{
			double double_3 = 1;
			double_4 = double_2 * double_3;
		}
		int_1 = int_1 + int_2;
		if(1)
		{
			double_2 = double_2 * double_4;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
			}
		}
		float_3 = float_1 * float_2;
		if(1)
		{
			int_2 = int_2 * int_2;
		}
		if(1)
		{
			short short_1 = 1;
			short_2 = short_1 * short_2;
		}
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			short_2 = short_3 + short_4;
		}
		if(1)
		{
			unsigned_int_5 = v_vedisOsWrite(long_1,long_1,unsigned_int_3,long_1);

			char_1 = v_pager_unlink_page(float_1,int_2);

			double_2 = double_2;
		}
		double_2 = double_2;
		int_3 = v_pager_release_page(short_5,float_3);

		unsigned_int_5 = unsigned_int_2;
		int_3 = int_2 + int_2;
	}
}
double v_page_merge_hot( float parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long_2 = long_1 + long_1;
	double_2 = double_1 + double_1;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return double_3;
}
unsigned int v_pager_get_hot_pages( float parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1;
	double_1 = v_page_merge_hot(float_1,double_1);

	double_1 = double_2 + double_2;
	long_2 = long_2 + long_3;
	char_1 = v_SyZero(int_1);

	char_1 = char_1 * char_2;
	char_1 = char_2 * char_1;
	return unsigned_int_1;
}
unsigned int v_WriteInt32( double parameter_1,int parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 + int_1;
	int_2 = int_2 + int_2;
	char_1 = char_2;
	int_1 = v_SyBigEndianPack32(double_1,unsigned_int_1);

	long_3 = long_1 + long_2;
	return unsigned_int_1;
	unsigned_int_1 = v_vedisOsWrite(long_1,long_2,unsigned_int_2,long_2);

}
int v_vedisFinalizeJournal( short parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	double double_3 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = v_vedisOsCloseFree(long_1,unsigned_int_1);

	short_1 = short_1 * short_2;
	float_2 = float_1 + float_1;
	if(1)
	{
		char char_3 = 1;
		char_1 = v_vedisOsSync(int_2,int_1);

		char_4 = char_2 * char_3;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
	}
	char_4 = char_2 + char_4;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_1 + long_2;
		}
	}
	double_1 = double_1 * double_1;
	if(1)
	{
		short short_3 = 1;
		if(1)
		{
			if(1)
			{
			}
		}
		unsigned_int_2 = v_WriteInt32(double_2,int_3,short_2);

		short_3 = short_2;
	}
	if(1)
	{
		if(1)
		{
			float_2 = float_2;
		}
	}
	return int_4;
	float_3 = v_pager_lock_db(double_3,int_3,-1 );

}
int v_pager_dirty_commit( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	float float_2 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_2;
	char_1 = v_pager_wait_on_lock(long_1,int_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	int_2 = int_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		unsigned_int_4 = v_pager_get_hot_pages(float_1);

		short_1 = short_1;
		if(1)
		{
		}
	}
	double_1 = double_1 * double_1;
	v_pager_write_hot_dirty_pages(float_1,unsigned_int_5);

	int_3 = int_2;
	if(1)
	{
		int_3 = int_1 * int_3;
		double_1 = double_1 + double_1;
	}
	int_3 = int_3;
	float_1 = v_vedisGenError(float_2,double_2,-1 );

	long_4 = long_2 * long_3;
	return int_1;
	int_2 = v_vedisFinalizeJournal(short_2,int_3,int_2);

}
unsigned int v_pager_write_journal_header( unsigned int parameter_1,float parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_5 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float_1 = float_1;
	long_1 = long_1 * long_1;
	long_1 = v_SyBigEndianPack64(short_1,int_1);

	double_2 = double_1 * double_1;
	double_1 = double_2 * double_3;
	int_2 = v_SyBigEndianPack32(double_4,unsigned_int_1);

	double_4 = double_3 * double_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_3 + int_2;
	double_5 = double_4 * double_4;
	long_1 = v_SyMemcpy(long_2,char_1);

	double_4 = double_3 + double_5;
	double_3 = double_2 + double_1;
	int_1 = int_2;
	int_5 = int_4 * int_4;
	return unsigned_int_3;
}
double v_vedisOpenJournal( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	char char_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double_2 = double_1 + double_1;
	double_2 = double_2 + double_2;
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = v_vedisGenErrorFormat(float_2,unsigned_int_2,unsigned_int_3);

	int_1 = int_2 * int_2;
	if(1)
	{
		double_2 = double_2 * double_2;
	}
	unsigned_int_3 = v_SyMemBackendAlloc(double_1,double_2);

	unsigned_int_1 = v_vedisOsCloseFree(long_1,unsigned_int_1);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
		char_1 = v_vedisOsOpen(double_2,float_2,float_1,double_2,short_1);

		long_1 = long_2 + long_1;
		int_3 = v_vedisOsDelete(float_3,char_2,int_2);

		double_3 = double_1 + double_1;
	}
	short_1 = short_2 * short_2;
	double_2 = v_SyMemBackendFree(short_3);

	char_4 = char_2 + char_3;
	double_2 = double_2 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
		char_3 = char_3;
	}
	unsigned_int_5 = v_pager_write_journal_header(unsigned_int_1,float_2);

	unsigned_int_6 = v_vedisOsWrite(long_3,long_2,unsigned_int_3,long_1);

	float_2 = float_3 * float_3;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_6;
	double_3 = double_4 + double_4;
	return double_2;
}
int v_SyTimeFormatToDos( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_2;
	float_3 = float_1 + float_2;
	double_1 = double_1;
	double_1 = double_1 * double_1;
	return int_1;
}
long v_pager_write_db_header()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_6 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_2 = short_1 * short_2;
	short_3 = v_SyStrlen(double_1);

	int_3 = int_1 * int_2;
	int_4 = v_SyTimeFormatToDos(float_1,int_5);

	long_2 = long_1 * long_2;
	int_5 = v_SyBigEndianPack32(double_1,unsigned_int_1);

	int_4 = int_3 * int_2;
	float_1 = float_1 * float_1;
	char_1 = char_1 * char_1;
	char_1 = char_1 + char_1;
	int_5 = int_4;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_2 * double_2;
	int_4 = int_1 * int_6;
	double_3 = double_1;
	long_2 = v_SyMemcpy(long_3,char_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	double_1 = double_3 + double_2;
	short_3 = short_3 + short_3;
	int_5 = int_4 * int_3;
	float_1 = float_1 + float_1;
	char_1 = v_SyZero(int_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	double_1 = double_4;
	return long_2;
	char_1 = v_SyBigEndianPack16(float_1,short_1);

}
short v_pager_page_to_dirty_list( float parameter_1,float parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	short_3 = short_1 * short_2;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	return short_1;
}
char v_pager_create_header( short parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = v_pager_alloc_page(float_1,char_1);

	short_1 = v_pager_page_to_dirty_list(float_2,float_1);

	short_2 = short_1 * short_1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	short_4 = short_3 + short_4;
	char_2 = v_pager_link_page(short_2,double_2);

	int_1 = int_1 * int_1;
	int_2 = int_1 * int_1;
	return char_1;
	long_1 = v_pager_write_db_header();

}
int v_vedisBitvecCreate( long parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char_1 = char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	char_3 = v_SyZero(int_1);

	long_2 = long_1 + long_2;
	unsigned_int_1 = v_SyMemBackendAlloc(double_1,double_2);

	int_2 = int_3 * int_1;
	double_1 = v_SyMemBackendFree(short_1);

	unsigned_int_3 = unsigned_int_1;
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3;
	}
	int_4 = int_2;
	char_4 = char_1 + char_1;
	short_1 = short_2 * short_3;
	return int_2;
}
double v_vedisPagerBegin( char parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_3 = 1;
	float float_3 = 1;
	short short_2 = 1;
	char char_5 = 1;
	double double_4 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	char_1 = char_1 * char_1;
	char controller4vul_990[2];
	fgets(controller4vul_990 ,2 ,stdin);
	if( strcmp( controller4vul_990, ":") < 0)
	{
		int int_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		int_1 = int_1 * int_1;
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_2 = int_1 + int_2;
			char_1 = char_2 * char_3;
			int_2 = int_2 + int_3;
		}
		short_1 = short_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		double_1 = double_3;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		char controller4vul_991[2];
		fgets(controller4vul_991 ,2 ,stdin);
		if( strcmp( controller4vul_991, ",") < 0)
		{
			char char_4 = 1;
			float_1 = float_3 * float_2;
			char controller4vul_992[2];
			fgets(controller4vul_992 ,2 ,stdin);
			if( strcmp( controller4vul_992, "q") > 0)
			{
				unsigned_int_1 = v_pager_shared_lock(short_2,uni_para);

				float_1 = float_2 * float_3;
			}
			char_5 = char_2 + char_4;
		}
	}
	if(1)
	{
		float float_4 = 1;
		float_1 = float_4 + float_3;
	}
	char_5 = char_1 * char_3;
	return double_4;
}
short v_vedisPageWrite( int parameter_1,int uni_para)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float_1 = float_1 + float_1;
	double_3 = double_1 * double_2;
	char_1 = char_1 * char_2;
	float_4 = float_2 + float_3;
	if(1)
	{
	}
	char controller4vul_988[3];
	fgets(controller4vul_988 ,3 ,stdin);
	if( strcmp( controller4vul_988, "i7") < 0)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_3 = char_3 * char_4;
		char controller4vul_989[2];
		fgets(controller4vul_989 ,2 ,stdin);
		if( strcmp( controller4vul_989, "o") > 0)
		{
			double_4 = v_vedisPagerBegin(char_2,uni_para);

		}
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_1 * int_2;
		}
	}
	long_1 = long_1;
	return short_1;
}
float v_vedisKvIopageWrite( int parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	char_2 = char_1 * char_2;
	char controller4vul_987[2];
	fgets(controller4vul_987 ,2 ,stdin);
	if( strcmp( controller4vul_987, "G") < 0)
	{
		short_1 = v_vedisPageWrite(int_1,uni_para);

	}
	short_1 = short_2 + short_3;
	return float_1;
}
int v_vedisKvIoNewPage( float parameter_1,long parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v_vedisPagerAcquire(char_1,char_2,char_3,int_2,int_3);

	long_3 = long_1 * long_2;
	short_2 = short_1 + short_2;
	unsigned_int_1 = v_pager_shared_lock(short_2,-1 );

	int_3 = int_2 * int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "pE") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	return int_2;
}
char v_vedisKvIoPageLookup( char parameter_1,int parameter_2,long parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_4 = 1;
	char_1 = char_1 * char_1;
	int_1 = v_vedisPagerAcquire(char_2,char_3,char_2,int_1,int_2);

	int_1 = int_2 * int_3;
	return char_4;
}
long v_page_ref( char parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_1;
	return long_1;
}
char v_pager_link_page( short parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	int int_5 = 1;
	short short_1 = 1;
	char char_10 = 1;
	float_3 = float_1 * float_2;
	int_2 = int_1 * int_1;
	double_1 = double_1 + double_1;
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	long_1 = long_1;
	char_2 = char_1 * char_2;
	double_3 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		char char_4 = 1;
		double_4 = double_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		double_3 = double_3;
		char_4 = char_1 * char_3;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "Qt") > 0)
		{
			int int_3 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			unsigned_int_1 = v_SyMemBackendAlloc(double_2,double_1);

			int_3 = int_3;
			unsigned_int_1 = unsigned_int_1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
			double_2 = double_4 * double_5;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char char_5 = 1;
				double double_6 = 1;
				int int_4 = 1;
				char char_6 = 1;
				char char_7 = 1;
				char char_8 = 1;
				char char_9 = 1;
				if(1)
				{
					char_5 = char_4;
				}
				double_6 = double_1 * double_2;
				int_4 = int_1 * int_3;
				char_1 = char_5 + char_2;
				if(1)
				{
					long long_2 = 1;
					long_1 = long_2;
				}
				char_4 = char_2 + char_6;
				char_3 = v_SyZero(int_5);

				char_1 = char_4 * char_7;
				char_7 = char_8 + char_9;
			}
			unsigned_int_1 = unsigned_int_2;
			float_1 = float_2;
			double_4 = v_SyMemBackendFree(short_1);

			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
	}
	return char_10;
}
char v_pager_get_page_contents( float parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		double double_1 = 1;
		char_1 = v_SyZero(int_1);

		short_1 = v_vedisOsRead(int_1,int_1,float_1);

		double_2 = double_1 + double_1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2 + double_2;
	}
	return char_2;
}
short v_pager_alloc_page( float parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double_3 = double_1 + double_2;
	long_1 = v_SyMemBackendPoolAlloc(char_1,short_1);

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	int_2 = int_1 * int_1;
	double_1 = double_1 * double_1;
	return short_2;
	char_1 = v_SyZero(int_2);

}
void v_vedisGetPageSize()
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "?C") > 0)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
}
int v_vedisOsSectorSize( char parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	return int_1;
}
unsigned int v_GetSectorSize( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
		int_1 = int_1;
		if(1)
		{
			short short_1 = 1;
			int_1 = v_vedisOsSectorSize(char_1);

			short_1 = short_1 + short_1;
		}
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_2 + char_2;
		}
	}
	return unsigned_int_1;
}
short v_SyDosTimeFormat( long parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	int_1 = int_2;
	char_1 = char_1 + char_1;
	float_1 = float_1 * float_2;
	double_1 = double_1 * double_1;
	int_1 = int_2 * int_1;
	float_1 = float_1 * float_3;
	long_2 = long_1 + long_1;
	double_2 = double_2;
	double_1 = double_2 * double_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return short_1;
}
unsigned int v_pager_extract_header( unsigned int parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	int int_6 = 1;
	double double_6 = 1;
	float float_5 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = v_SyMemBackendDup(int_1,short_1,char_1);

	unsigned_int_3 = unsigned_int_3;
	double_1 = double_1;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	char_2 = char_1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	unsigned_int_4 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	short_2 = v_SyDosTimeFormat(long_1,short_1);

	int_2 = int_3 * int_1;
	double_4 = double_3 + double_4;
	int_3 = int_4 * int_2;
	int_1 = int_5;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	float_3 = v_SyBigEndianUnpack32(float_4,char_1);

	double_1 = double_5;
	if(1)
	{
		v_SyBigEndianUnpack16(double_4,short_3);

		unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	}
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	if(1)
	{
	}
	int_6 = int_1;
	return unsigned_int_4;
	unsigned_int_2 = v_SyMemcmp(double_4,double_6,float_5);

}
void v_pager_read_db_header( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_5 = 1;
	int int_5 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double_2 = double_1 + double_1;
	int_1 = v_vedisPagerRegisterKvEngine(double_3,char_1,-1 );

	int_1 = int_1 * int_2;
	short_1 = v_SyStrlen(double_2);

	int_1 = int_2 + int_2;
	int_3 = int_1 * int_3;
	if(1)
	{
	}
	float_1 = v_vedisOsFileSize(int_2,float_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_7 = 1;
		long_3 = long_1 + long_2;
		short_1 = short_2 + short_2;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			float_2 = v_vedisGenError(float_2,double_3,-1 );

			short_1 = short_1;
		}
		v_vedisGenOutofMem(double_1);

		int_3 = int_3;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_5 + unsigned_int_4;
		}
		double_1 = double_2 + double_1;
		if(1)
		{
			unsigned_int_1 = v_pager_extract_header(unsigned_int_1,int_3,unsigned_int_6);

			double_1 = double_1 + double_1;
		}
		v_vedisGetPageSize();

		char_1 = v_SyZero(int_3);

		long_4 = long_2 + long_3;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		}
		unsigned_int_7 = unsigned_int_6 + unsigned_int_1;
		unsigned_int_6 = unsigned_int_3 * unsigned_int_2;
		double_3 = double_1 + double_2;
		if(1)
		{
			float_1 = v_vedisGenErrorFormat(float_3,unsigned_int_8,unsigned_int_9);

			unsigned_int_10 = unsigned_int_10 * unsigned_int_6;
		}
		double_1 = double_3 + double_2;
		if(1)
		{
		}
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_3 + short_3;
		int_1 = int_3 + int_3;
		unsigned_int_10 = v_GetSectorSize(char_1);

		int_4 = int_1 + int_2;
		char_1 = char_2 * char_2;
	}
	int_1 = v_vedisFindKVStore(char_3,char_2);

	double_5 = double_2 * double_4;
	if(1)
	{
		unsigned_int_9 = v_SyMemBackendAlloc(double_2,double_5);

		char_1 = char_1;
	}
	short_5 = v_vedisOsRead(int_4,int_5,float_3);

	long_6 = long_1 + long_5;
}
unsigned int v_vedisOsCloseFree( long parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1;
	if(1)
	{
		short short_2 = 1;
		double double_2 = 1;
		double_1 = v_SyMemBackendFree(short_1);

		short_2 = short_1 + short_2;
		double_1 = double_1 * double_2;
	}
	return unsigned_int_1;
}
float v_pager_fetch_page( short parameter_1,float parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_3 = 1;
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1 + double_2;
		}
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "4h") < 0)
		{
		}
		double_1 = double_3 * double_3;
	}
	return float_1;
}
char v_pager_fill_page( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	char char_2 = 1;
	float_1 = v_pager_fetch_page(short_1,float_1);

	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "9") < 0)
	{
	}
	long_1 = v_SyMemcpy(long_2,char_1);

	long_1 = long_3 * long_2;
	return char_2;
}
unsigned int v_vedisOsWrite( long parameter_1,long parameter_2,unsigned int parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
long v_pager_cksum( float parameter_1,short parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	int_2 = int_1 + int_1;
	return long_1;
}
int v_pager_play_back_one_page( short parameter_1,double parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	long_1 = long_2;
	long_2 = v_pager_cksum(float_1,short_1);

	double_2 = double_1 + double_1;
	unsigned_int_1 = v_ReadInt32(int_1,char_1,short_1);

	float_2 = float_1 + float_1;
	double_3 = double_1 + double_3;
	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 * char_2;
	if(1)
	{
	}
	short_2 = v_vedisOsRead(int_2,int_1,float_1);

	char_3 = v_pager_fill_page(int_1,double_4);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_5 = char_1 + char_4;
	if(1)
	{
	}
	unsigned_int_3 = v_vedisOsWrite(long_3,long_4,unsigned_int_2,long_4);

	long_5 = long_3 + long_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
	}
	double_1 = double_4 * double_1;
	int_1 = v_ReadInt64(unsigned_int_4,short_3,long_5);

	char_4 = char_4 + char_3;
	if(1)
	{
	}
	if(1)
	{
	}
	short_2 = short_1 * short_4;
	if(1)
	{
		char char_6 = 1;
		char_6 = char_1 * char_1;
	}
	return int_3;
}
long v_vedisOsTruncate( int parameter_1,short parameter_2)
{
	long long_1 = 1;
	return long_1;
}
int v_ReadInt64( unsigned int parameter_1,short parameter_2,long parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short_1 = v_vedisOsRead(int_1,int_2,float_1);

	short_1 = short_2;
	short_2 = short_3;
	int_2 = v_SyBigEndianUnpack64(double_1,long_1);

	short_4 = short_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "4") > 0)
	{
	}
	double_3 = double_2 * double_3;
	return int_1;
}
unsigned int v_ReadInt32( int parameter_1,char parameter_2,short parameter_3)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = v_SyBigEndianUnpack32(float_1,char_1);

	char_3 = char_2 * char_2;
	long_2 = long_1 * long_2;
	short_1 = v_vedisOsRead(int_1,int_2,float_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	return unsigned_int_3;
}
short v_vedisOsRead( int parameter_1,int parameter_3,float parameter_4)
{
	short short_1 = 1;
	return short_1;
}
int v_pager_read_journal_header( double parameter_1,char parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_2 = 1;
	float float_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_6 = 1;
	float float_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int_1 = int_1 + int_2;
	int_1 = int_1 + int_2;
	int_2 = int_2;
	double_1 = double_1 * double_2;
	unsigned_int_1 = v_ReadInt32(int_2,char_1,short_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	long_3 = long_1 * long_2;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	short_1 = v_vedisOsRead(int_2,int_1,float_1);

	int_3 = int_3 + int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	double_5 = double_4 + double_4;
	if(1)
	{
	}
	long_5 = long_4 * long_5;
	int_1 = v_ReadInt64(unsigned_int_3,short_1,long_4);

	short_2 = short_1;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	int_2 = int_4 * int_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_4;
	if(1)
	{
	}
	int_5 = int_1 + int_3;
	float_3 = v_vedisOsFileSize(int_2,float_1);

	float_4 = float_4 + float_4;
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = int_5 + int_6;
	unsigned_int_2 = v_SyMemcmp(double_2,double_4,float_5);

	double_3 = double_1 + double_6;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_5;
	return int_5;
}
unsigned int v_pager_playback( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	double double_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float_2 = float_1 + float_2;
	int_3 = int_1 + int_2;
	int_3 = int_1 * int_3;
	char_1 = v_vedisOsSync(int_2,int_2);

	float_1 = float_1 * float_3;
	long_3 = long_1 + long_2;
	if(1)
	{
		if(1)
		{
			v_vedisGenOutofMem(double_1);

			char_1 = v_SyZero(int_2);

			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		float_3 = float_1;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = v_SyMemBackendAlloc(double_2,double_1);

		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	}
	long_3 = v_vedisOsTruncate(int_3,short_1);

	int_2 = int_3 + int_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	}
	float_3 = float_2 + float_3;
	int_2 = v_pager_read_journal_header(double_1,char_1,unsigned_int_3);

	double_3 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_3 = v_vedisGenError(float_2,double_1,-1 );

		short_2 = short_1 * short_1;
		if(1)
		{
			if(1)
			{
				unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
				int_3 = int_4 * int_4;
			}
		}
	}
	float_2 = v_vedisGenErrorFormat(float_4,unsigned_int_1,unsigned_int_3);

	char_3 = char_1 * char_2;
	if(1)
	{
		long long_4 = 1;
		long_2 = long_4 * long_3;
	}
	if(1)
	{
		int_1 = v_pager_play_back_one_page(short_2,double_1,char_4);

		unsigned_int_1 = unsigned_int_2;
	}
	return unsigned_int_4;
	double_2 = v_SyMemBackendFree(short_2);

}
char v_vedisOsSync( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
char v_vedisOsUnlock( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
long v_pager_unlock_db( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char_1 = v_vedisOsUnlock(int_1,int_1);

	long_2 = long_1 * long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Zc") > 0)
	{
		int int_2 = 1;
		float float_1 = 1;
		int_1 = int_2 * int_1;
		float_1 = float_1;
	}
	return long_3;
}
int v_vedisOsDelete( float parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	return int_1;
}
float v_vedisOsFileSize( int parameter_1,float parameter_2)
{
	float float_1 = 1;
	return float_1;
}
float v_vedisOsCheckReservedLock( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	return float_1;
}
int v_vedisOsAccess( double parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	return int_1;
}
short v_pager_has_hot_journal( char parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 * char_2;
	int_1 = int_1 * int_1;
	char controller4vul_999[2];
	fgets(controller4vul_999 ,2 ,stdin);
	if( strcmp( controller4vul_999, "z") < 0)
	{
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		unsigned_int_3 = unsigned_int_3;
		long_1 = long_1;
		char controller4vul_1000[3];
		fgets(controller4vul_1000 ,3 ,stdin);
		if( strcmp( controller4vul_1000, "XO") > 0)
		{
			double double_3 = 1;
			double double_4 = 1;
			float_1 = v_pager_lock_db(double_1,int_2,uni_para);

			unsigned_int_3 = unsigned_int_3;
			double_2 = double_3 * double_4;
			if(1)
			{
				if(1)
				{
					if(1)
					{
						long long_2 = 1;
						unsigned_int_3 = unsigned_int_1;
						long_1 = long_1 + long_2;
					}
				}
				if(1)
				{
					double_3 = double_3 * double_3;
				}
			}
		}
	}
	return short_1;
}
float v_pager_journal_rollback( double parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_1 = double_2;
	char controller4vul_997[2];
	fgets(controller4vul_997 ,2 ,stdin);
	if( strcmp( controller4vul_997, "@") > 0)
	{
		float float_2 = 1;
		float_2 = float_1 * float_2;
		int_1 = int_1;
		char controller4vul_998[3];
		fgets(controller4vul_998 ,3 ,stdin);
		if( strcmp( controller4vul_998, "0|") > 0)
		{
			short_1 = v_pager_has_hot_journal(char_1,int_2,uni_para);

		}
		if(1)
		{
		}
	}
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	double_3 = double_1 * double_2;
	if(1)
	{
		double_1 = double_1 + double_4;
		int_1 = int_3 + int_1;
	}
	double_5 = double_4 + double_5;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
		int_1 = int_1 + int_4;
	}
	long_1 = long_1 + long_1;
	int_3 = int_2 + int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_2 + long_3;
	double_4 = double_3 + double_2;
	if(1)
	{
		double double_6 = 1;
		double_3 = double_6 + double_3;
	}
	return float_1;
}
double v_vedisOsLock( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	return double_1;
}
float v_pager_lock_db( double parameter_1,int parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	float float_4 = 1;
	float_2 = float_1 * float_1;
	char controller4vul_1001[2];
	fgets(controller4vul_1001 ,2 ,stdin);
	if( strcmp( controller4vul_1001, "&") > 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
		char controller4vul_1002[3];
		fgets(controller4vul_1002 ,3 ,stdin);
		if( strcmp( controller4vul_1002, "nP") > 0)
		{
			long long_1 = 1;
			float_3 = v_vedisGenError(float_1,double_1,uni_para);

			long_1 = long_1;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 + int_2;
		}
	}
	return float_4;
}
char v_pager_wait_on_lock( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	double_2 = double_1 * double_1;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	float_3 = v_pager_lock_db(double_3,int_1,-1 );

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_1 = short_2;
	float_5 = float_4 + float_3;
	int_1 = int_1 + int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	double_3 = double_3 * double_3;
	int_1 = int_1 + int_2;
	long_2 = long_1 * long_2;
	double_1 = double_1 + double_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	double_4 = double_1;
	long_3 = long_4;
	float_4 = float_3 * float_3;
	short_3 = short_1 + short_3;
	short_4 = short_2 * short_1;
	int_1 = int_2;
	float_1 = float_2 * float_4;
	double_2 = double_3 * double_2;
	short_4 = short_1 + short_4;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	if(1)
	{
	}
	return char_1;
}
short v_SyBlobFormatAp( short parameter_1,char parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_3 = 1;
	short short_1 = 1;
	char_1 = char_2;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		if(1)
		{
		}
		unsigned_int_1 = v_FormatMount(double_1,char_1,char_1,int_1,char_3);

		double_2 = double_3;
	}
	return short_1;
}
float v_vedisGenErrorFormat( float parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short_1 = short_1 * short_1;
	short_2 = short_1 + short_1;
	int_3 = int_1 * int_2;
	float_1 = float_2;
	double_1 = v_SyBlobAppend(short_1,unsigned_int_1,unsigned_int_1,-1 );

	int_3 = int_2 * int_2;
	short_1 = v_SyBlobFormatAp(short_2,char_1,char_2);

	int_2 = int_2 * int_1;
	return float_2;
}
char v_vedisOsOpen( double parameter_1,float parameter_2,float parameter_3,double parameter_4,short parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	char char_2 = 1;
	unsigned_int_1 = v_SyMemBackendAlloc(double_1,double_2);

	int_3 = int_1 * int_2;
	double_2 = v_SyMemBackendFree(short_1);

	long_3 = long_1 + long_2;
	char_1 = v_SyZero(int_3);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	long_2 = long_3;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
		double_2 = double_2 + double_1;
		long_1 = long_2;
	}
	short_2 = short_1 + short_1;
	return char_2;
}
unsigned int v_pager_shared_lock( short parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_6 = 1;
	int_3 = int_1 * int_2;
	char controller4vul_993[3];
	fgets(controller4vul_993 ,3 ,stdin);
	if( strcmp( controller4vul_993, "|/") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		long_2 = long_1 + long_2;
		long_2 = long_2 + long_2;
		if(1)
		{
			int_4 = int_2 * int_3;
		}
		unsigned_int_1 = unsigned_int_2;
		char controller4vul_994[3];
		fgets(controller4vul_994 ,3 ,stdin);
		if( strcmp( controller4vul_994, "uM") > 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			char controller4vul_995[2];
			fgets(controller4vul_995 ,2 ,stdin);
			if( strcmp( controller4vul_995, "O") > 0)
			{
				short short_1 = 1;
				short_1 = short_1 * short_1;
				char controller4vul_996[2];
				fgets(controller4vul_996 ,2 ,stdin);
				if( strcmp( controller4vul_996, "D") > 0)
				{
					float_1 = v_pager_journal_rollback(double_1,int_2,uni_para);

				}
			}
			int_3 = int_4 + int_1;
			if(1)
			{
			}
			if(1)
			{
				if(1)
				{
					char char_3 = 1;
					char_3 = char_1 * char_2;
					if(1)
					{
						unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
						int_3 = int_2 + int_1;
						if(1)
						{
							unsigned int unsigned_int_3 = 1;
							unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
							int_3 = int_4;
						}
					}
					if(1)
					{
						short short_2 = 1;
						short short_3 = 1;
						double_2 = double_1 + double_2;
						short_2 = short_2 * short_3;
					}
				}
			}
			long_1 = long_1 * long_2;
			int_1 = int_1 + int_3;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
				if(1)
				{
					float float_2 = 1;
					float float_3 = 1;
					float float_4 = 1;
					float float_5 = 1;
					char_2 = char_1 + char_1;
					float_4 = float_2 * float_3;
					float_1 = float_2 * float_5;
				}
			}
		}
		if(1)
		{
			double double_3 = 1;
			double_2 = double_3 + double_3;
		}
	}
	return unsigned_int_6;
}
int v_vedisPagerAcquire( char parameter_1,char parameter_2,char parameter_3,int parameter_4,int parameter_5)
{
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float_1 = v_pager_fetch_page(short_1,float_1);

	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_2 = v_pager_alloc_page(float_2,char_1);

	char_2 = v_pager_get_page_contents(float_3,char_2,int_1);

	int_2 = int_2 + int_1;
	if(1)
	{
	}
	int_4 = int_3 * int_4;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		}
		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	}
	if(1)
	{
		short short_3 = 1;
		unsigned int unsigned_int_6 = 1;
		short_1 = short_1;
		if(1)
		{
			char char_3 = 1;
			unsigned_int_2 = v_pager_shared_lock(short_2,-1 );

			char_3 = char_3 + char_3;
		}
		unsigned_int_5 = v_SyMemBackendPoolFree(long_1);

		char_4 = v_pager_link_page(short_2,double_2);

		short_1 = short_3;
		if(1)
		{
			v_vedisGenOutofMem(double_2);

			char_5 = char_4 + char_2;
		}
		unsigned_int_6 = unsigned_int_2 * unsigned_int_4;
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_1 + double_1;
		}
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = long_2 + long_1;
	}
	return int_3;
	long_1 = v_page_ref(char_5);

}
float v_vedisKvIoPageGet( float parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_3 = 1;
	char_2 = char_1 * char_2;
	double_2 = double_1 * double_2;
	return float_1;
	int_1 = v_vedisPagerAcquire(char_2,char_3,char_2,int_1,int_1);

}
float v_pager_kv_io_init( int parameter_1,char parameter_2,double parameter_3,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float_1 = v_vedisKvIopageWrite(int_1,uni_para);

	int_1 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_2;
	double_4 = double_1 + double_3;
	double_1 = double_2 * double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	double_3 = double_1 * double_2;
	double_1 = double_2 + double_5;
	char_1 = char_1 + char_1;
	double_3 = double_1 + double_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	int_5 = int_1 * int_4;
	int_6 = int_3 + int_3;
	double_3 = double_4 + double_5;
	long_1 = long_1;
	long_1 = long_2 + long_3;
	short_2 = short_1 * short_1;
	return float_2;
}
void v_vedisGenOutofMem( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long_2 = long_1 + long_1;
	float_1 = v_vedisGenError(float_2,double_1,-1 );

	float_2 = float_2;
}
short v_vedisReleaseCursor( char parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	char_2 = char_1 * char_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned_int_1 = v_SyMemBackendPoolFree(long_3);

		int_3 = int_1 * int_2;
	}
	char_1 = char_2 + char_2;
	return short_1;
}
void v_pager_release_kv_engine( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	float_1 = float_1 * float_2;
	double_2 = double_1 * double_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double_1 = double_1 + double_2;
		int_1 = int_2;
	}
	if(1)
	{
		char char_2 = 1;
		short_1 = v_vedisReleaseCursor(char_1,unsigned_int_1);

		char_2 = char_1 + char_2;
	}
	double_4 = double_1 * double_3;
	long_1 = long_1 * long_2;
	double_1 = v_SyMemBackendFree(short_2);

	long_1 = long_1 + long_1;
}
int v_vedisPagerRegisterKvEngine( double parameter_1,char parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_4 = 1;
	long long_4 = 1;
	int_2 = int_1 + int_2;
	int_1 = int_3 * int_1;
	float_1 = float_1;
	double_2 = double_1 + double_1;
	long_1 = long_2;
	short_1 = short_1;
	char controller4vul_985[2];
	fgets(controller4vul_985 ,2 ,stdin);
	if( strcmp( controller4vul_985, "=") < 0)
	{
		char controller4vul_986[3];
		fgets(controller4vul_986 ,3 ,stdin);
		if( strcmp( controller4vul_986, "#w") < 0)
		{
			float_2 = v_pager_kv_io_init(int_3,char_1,double_2,uni_para);

		}
		float_3 = float_2 * float_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	long_3 = long_2 + long_3;
	if(1)
	{
		float_1 = float_3 + float_3;
		double_3 = double_1 + double_1;
	}
	double_1 = double_2 * double_1;
	float_1 = float_4 * float_5;
	int_1 = int_3 * int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			float float_6 = 1;
			float_2 = float_2 + float_6;
			float_2 = float_2 + float_4;
		}
		double_1 = double_3 * double_3;
	}
	double_4 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double_3 = double_2 + double_3;
	}
	long_3 = long_4 * long_2;
	int_1 = int_1;
	return int_1;
}
double v_randomByte( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long_2 = long_1 * long_2;
	int_1 = int_1;
	double_1 = double_1 * double_1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	double_2 = double_3;
	return double_2;
}
double v_SyRandomness( unsigned int parameter_1,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_6 = 1;
	int_2 = int_1 * int_2;
	double_1 = double_1 * double_1;
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
			unsigned int unsigned_int_1 = 1;
			int int_3 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_3 = 1;
			long long_2 = 1;
			long long_3 = 1;
			long long_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_4 = 1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1;
			}
			int_3 = int_3 + int_1;
			long_1 = long_1 * long_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2;
			}
			double_2 = double_2 + double_1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
			if(1)
			{
				double_3 = double_2 * double_1;
			}
			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
			long_4 = long_2 * long_3;
			if(1)
			{
				double double_4 = 1;
				double double_5 = 1;
				double_5 = double_3 + double_4;
			}
			char_2 = char_1 * char_2;
			double_6 = v_randomByte(unsigned_int_2);

			unsigned_int_1 = unsigned_int_4;
		}
	}
	return double_2;
}
char v_SyOSUtilRandomSeed(long parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	return char_1;
	long_1 = v_SyMemcpy(long_2,char_1);

}
double v_SyRandomnessInit( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_2 = int_1 * int_1;
	float_2 = float_1 * float_1;
	int_3 = int_1;
	short_2 = short_1 + short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ":7") > 0)
	{
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_3 + short_3;
	}
	float_3 = float_1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_4 = 1;
		char_1 = v_SyOSUtilRandomSeed(long_1);

		float_1 = float_4 * float_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_2 = 1;
		long long_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		float float_5 = 1;
		double double_1 = 1;
		long_1 = long_2 + long_3;
		int_5 = int_4 + int_5;
		float_2 = float_2 + float_5;
		double_2 = double_1 * double_1;
	}
	double_3 = double_3 + double_3;
	return double_2;
}
float v_vedisGenError( float parameter_1,double parameter_2,int uni_para)
{
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double_1 = v_SyBlobAppend(short_1,unsigned_int_1,unsigned_int_2,uni_para);

	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	int_2 = int_1 + int_1;
	return float_1;
}
int v_vedisFindKVStore( char parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	int_1 = int_2;
	int_3 = int_2 + int_3;
	short_1 = v_SyStrlen(double_1);

	float_1 = float_1 * float_1;
	double_3 = double_2 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_2 + int_1;
		if(1)
		{
		}
	}
	return int_2;
	double_3 = v_SyStrnicmp(int_3,short_2,double_3);

}
double v_SyStrnicmp( int parameter_1,short parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_4 = 1;
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		}
		short_1 = short_1 + short_2;
		int_3 = int_1 * int_2;
		int_3 = int_4 + int_2;
		if(1)
		{
		}
		if(1)
		{
			double_1 = double_1 * double_1;
		}
		int_1 = int_2 + int_3;
		double_2 = double_2 * double_1;
		float_2 = float_3 * float_2;
		if(1)
		{
		}
		if(1)
		{
			float float_4 = 1;
			float_4 = float_4 + float_4;
		}
		float_3 = float_2 + float_1;
		double_4 = double_2 + double_3;
		char_2 = char_1 * char_1;
		if(1)
		{
		}
		if(1)
		{
			char_3 = char_3 * char_3;
		}
		long_2 = long_1 + long_2;
		char_3 = char_1 * char_4;
		int_1 = int_1 * int_3;
	}
	return double_4;
}
char v_vedisInMemory( double parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double_1 = v_SyStrnicmp(int_1,short_1,double_2);

	int_3 = int_1 + int_2;
	if(1)
	{
	}
	short_2 = v_SyStrlen(double_2);

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return char_1;
}
short v_vedisPagerOpen( short parameter_1,short parameter_2,int parameter_3,long parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = double_2;
	long_2 = long_1 + long_1;
	long_1 = long_2 * long_3;
	int_2 = int_1 * int_2;
	double_3 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	char controller4vul_983[2];
	fgets(controller4vul_983 ,2 ,stdin);
	if( strcmp( controller4vul_983, "y") > 0)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		char controller4vul_984[3];
		fgets(controller4vul_984 ,3 ,stdin);
		if( strcmp( controller4vul_984, "Vz") < 0)
		{
			int_1 = v_vedisPagerRegisterKvEngine(double_4,char_1,uni_para);

			char_1 = char_1 * char_1;
		}
	}
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	double_3 = double_4 + double_4;
	char_1 = char_1 + char_1;
	int_2 = int_2 + int_2;
	unsigned_int_4 = unsigned_int_5;
	if(1)
	{
		short_3 = short_2 * short_1;
	}
	int_1 = int_3 + int_1;
	int_5 = int_3 + int_4;
	if(1)
	{
		int_1 = int_6;
		unsigned_int_7 = unsigned_int_5 + unsigned_int_6;
	}
	int_2 = int_3 * int_5;
	if(1)
	{
	}
	long_3 = long_3 * long_3;
	double_5 = double_3 + double_5;
	unsigned_int_6 = unsigned_int_7 + unsigned_int_8;
	short_5 = short_4 + short_4;
	unsigned_int_2 = unsigned_int_3;
	float_1 = float_1 * float_1;
	double_5 = double_4 + double_5;
	if(1)
	{
		unsigned_int_6 = unsigned_int_9;
		char_1 = char_2 + char_1;
	}
	double_4 = double_6;
	char_1 = char_2 + char_2;
	int_4 = int_4 + int_6;
	unsigned_int_2 = unsigned_int_9;
	double_2 = double_3 * double_7;
	float_1 = float_1 * float_1;
	int_7 = int_2 * int_3;
	int_8 = int_6 + int_1;
	unsigned_int_6 = unsigned_int_1;
	if(1)
	{
		long long_4 = 1;
		unsigned int unsigned_int_10 = 1;
		int int_9 = 1;
		long_2 = long_2 + long_4;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		if(1)
		{
			unsigned_int_7 = unsigned_int_9 * unsigned_int_5;
		}
		if(1)
		{
			unsigned_int_10 = unsigned_int_2 + unsigned_int_1;
			long_4 = long_4;
			short_4 = short_3;
		}
		if(1)
		{
			short_3 = short_5;
		}
		unsigned_int_8 = unsigned_int_10;
		if(1)
		{
			double double_8 = 1;
			double_1 = double_6 + double_7;
			double_8 = double_2 + double_1;
		}
		float_1 = float_1;
		int_9 = int_1 + int_5;
		short_4 = short_5 * short_3;
	}
	char_2 = char_1;
	if(1)
	{
		char_3 = char_1;
	}
	if(1)
	{
		char_1 = char_3 + char_1;
		unsigned_int_4 = unsigned_int_5;
	}
	if(1)
	{
		double double_9 = 1;
		float_2 = float_2 * float_2;
		double_9 = double_7 * double_6;
	}
	float_2 = float_1 + float_3;
	return short_2;
}
double v_vedisSanityzeFlag( double parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short_1 = short_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 + int_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 + long_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 + float_2;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
	}
	return double_1;
}
short v_vedisInitDatabase( short parameter_1,float parameter_2,int parameter_3,double parameter_4,int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_2;
	char controller4vul_982[3];
	fgets(controller4vul_982 ,3 ,stdin);
	if( strcmp( controller4vul_982, "* ") > 0)
	{
		float float_4 = 1;
		short_1 = v_vedisPagerOpen(short_2,short_2,int_1,long_1,uni_para);

		float_2 = float_3 * float_4;
	}
	double_2 = double_1 * double_1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "z2") < 0)
	{
	}
	float_2 = float_3 + float_1;
	if(1)
	{
	}
	double_3 = double_3 * double_1;
	char_1 = char_2 * char_2;
	double_4 = double_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
	}
	double_5 = double_3 + double_2;
	double_4 = double_5 * double_4;
	long_3 = long_2 * long_2;
	return short_3;
}
short v_lhCursorReset( short parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = v_lhCursorFirst(unsigned_int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return short_1;
}
char v_lhCursorData( unsigned int parameter_1,double parameter_2,int parameter_3)
{
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = v_lhConsumeCellData(float_1,char_1,int_1);

	short_3 = short_2 * short_1;
	unsigned_int_1 = unsigned_int_1;
	char_4 = char_2 * char_3;
	if(1)
	{
	}
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_2;
	return char_1;
}
float v_lhCursorDataLength( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_1;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 * short_2;
	return float_1;
}
unsigned int v_lhCursorKey( long parameter_1,short parameter_2,long parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = v_lhConsumeCellkey(char_1,double_1,double_1,int_2);

	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 + int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	return unsigned_int_4;
}
int v_lhCursorKeyLength( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = char_1 * char_1;
	char_1 = char_2;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	int_2 = int_1 + int_2;
	return int_2;
}
unsigned int v_lhRecordRemove( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double_3 = double_1 * double_2;
	int_1 = v_SyBigEndianUnpack64(double_3,long_1);

	double_3 = double_3;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_1 = int_2 + int_1;
			if(1)
			{
			}
			float_1 = v_lhRestorePage(unsigned_int_2,float_2);

			int_3 = int_4;
			unsigned_int_3 = unsigned_int_2;
			if(1)
			{
			}
			float_2 = float_1 + float_1;
			if(1)
			{
				int int_5 = 1;
				int_1 = int_1 + int_5;
			}
		}
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_2;
	char_1 = v_lhUnlinkCell(long_1);

}
double v_lhCursorDelete( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned_int_1 = v_lhRecordRemove(unsigned_int_1);

	long_3 = long_1 * long_2;
	double_3 = double_1 * double_2;
	int_1 = int_2;
	if(1)
	{
	}
	int_2 = int_2 * int_1;
	double_4 = double_1 * double_4;
	double_1 = double_2 + double_1;
	return double_1;
}
short v_lhCursorPrev( int parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	v_lhCursorPrevPage(long_1);

	double_2 = double_1 * double_1;
	char_1 = char_1 * char_2;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	int_1 = int_1 + int_2;
	long_4 = long_3 * long_3;
	if(1)
	{
		double_2 = double_1;
	}
	return short_1;
}
long v_lhCursorNext( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	double_1 = double_1 + double_2;
	double_2 = v_lhCursorNextPage(unsigned_int_1);

	float_3 = float_1 * float_2;
	char_2 = char_1 * char_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	long_2 = long_1 + long_1;
	int_1 = int_1 * int_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	return long_3;
}
int v_lhCursorValid( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_2;
	return int_1;
}
void v_lhCursorPrevPage( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_3 = 1;
	long long_3 = 1;
	long_2 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 * char_1;
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		double double_4 = 1;
		int_3 = int_1 * int_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1;
		}
		if(1)
		{
			float float_2 = 1;
			short_2 = short_1 * short_1;
			float_2 = float_1 + float_1;
		}
		int_2 = int_2 * int_2;
		short_3 = short_2 + short_2;
		if(1)
		{
		}
		if(1)
		{
			double double_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_4 = 1;
			int_2 = int_1 + int_3;
			double_3 = double_4;
			short_3 = v_lhLoadPage(float_1,long_3,unsigned_int_1,short_1,int_2);

			unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
			int_4 = int_4 * int_2;
		}
		double_1 = double_2 + double_4;
	}
}
float v_lhCursorLast( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_2;
	v_lhCursorPrevPage(long_1);

	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		double double_3 = 1;
		char_1 = char_1 * char_1;
		if(1)
		{
		}
		double_2 = double_3 * double_1;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	short_1 = short_1 * short_2;
	return float_1;
}
double v_lhCursorNextPage( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int_2 = int_1 + int_1;
	char_1 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_5 = 1;
		short_1 = v_lhLoadPage(float_1,long_1,unsigned_int_2,short_2,int_2);

		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			char_2 = char_1 + char_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
			short_2 = short_2 * short_1;
		}
		long_1 = long_1 + long_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
		if(1)
		{
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			char_2 = char_2;
			double_3 = double_1 + double_2;
			float_4 = float_2 * float_3;
			char_1 = char_2;
		}
		int_1 = int_2;
	}
	return double_3;
}
short v_lhCursorFirst( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short_2 = short_1 * short_2;
	double_1 = v_lhCursorNextPage(unsigned_int_1);

	double_2 = double_1 + double_1;
	int_1 = int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char_1 = char_2;
		if(1)
		{
		}
		char_4 = char_2 * char_3;
	}
	short_1 = short_2;
	long_1 = long_1 + long_1;
	return short_1;
}
float v_lhRecordLookup( char parameter_1,char parameter_2,unsigned int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	float_1 = float_1 + float_2;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_1;
	double_1 = v_lhFindCell(unsigned_int_1,double_1,float_3,long_1);

	short_1 = short_1;
	double_3 = double_2 + double_1;
	unsigned_int_2 = v_lhMapFindBucket(float_2,char_1);

	double_4 = double_2 + double_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	short_1 = v_lhLoadPage(float_2,long_1,unsigned_int_1,short_1,int_2);

	char_3 = char_1 + char_2;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2 + short_3;
	}
	long_1 = long_2 * long_3;
	if(1)
	{
	}
	int_1 = int_3 + int_4;
	if(1)
	{
	}
	short_4 = short_3 * short_3;
	if(1)
	{
	}
	if(1)
	{
		double double_5 = 1;
		double_5 = double_3 * double_1;
	}
	return float_1;
}
unsigned int v_lhCursorSeek( double parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double_3 = double_1 + double_2;
	float_1 = v_lhRecordLookup(char_1,char_1,unsigned_int_1,int_1);

	double_4 = double_3;
	double_3 = double_3 + double_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int_2 = int_2 + int_3;
		double_3 = double_5 * double_4;
		long_2 = long_1 * long_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_2;
}
long v_lhInitCursor( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_2 = int_1 * int_2;
	char_2 = char_1 * char_1;
	int_1 = int_2 * int_3;
	short_1 = short_2;
	long_1 = long_1;
	long_1 = long_1 + long_1;
	int_1 = int_3 * int_3;
	return long_2;
}
long v_lhash_kv_append( double parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,short parameter_5)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return long_1;
	double_1 = v_lh_record_insert(short_1,char_1,int_1,long_1,float_1,int_2);

}
float v_lhRestorePage( unsigned int parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long_1 = long_1 * long_1;
	long_2 = v_SyBigEndianPack64(short_1,int_1);

	char_2 = char_1 * char_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_2 * int_2;
	char_1 = char_3 * char_4;
	short_1 = short_2;
	return float_1;
}
long v_lhRecordOverwrite( char parameter_1,short parameter_2,short parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	int int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_5 = 1;
	double double_7 = 1;
	int int_6 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_9 = 1;
	long long_6 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1;
	double_2 = double_1 + double_2;
	long_1 = v_SyMemcpy(long_1,char_1);

	long_2 = long_1 + long_1;
	v_lhRestoreSpace(double_2,float_2,float_1);

	double_2 = double_3 + double_2;
	long_4 = long_1 * long_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_2 * int_1;
		if(1)
		{
			int_1 = int_1 + int_2;
		}
		if(1)
		{
			unsigned_int_3 = v_lhAllocateSpace(float_3,int_1,short_1);

			float_3 = v_lhMoveLocalCell(double_3,long_1,long_2,float_3);

			long_3 = long_3;
			double_1 = double_3 * double_1;
			double_1 = double_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
			double_1 = double_4 + double_4;
			if(1)
			{
				char_2 = v_lhAcquirePage(short_2,int_1);

				long_1 = long_4 * long_4;
				if(1)
				{
				}
				double_3 = double_3 + double_5;
				unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
				double_6 = double_4 * double_5;
			}
			if(1)
			{
				int_1 = int_3 + int_4;
				unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
				long_4 = long_5 + long_5;
				int_1 = int_5;
			}
		}
	}
	int_4 = int_4 * int_2;
	if(1)
	{
	}
	char_3 = char_4;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long_2 = long_5 + long_1;
		}
		if(1)
		{
			char_1 = char_5 * char_5;
		}
		unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
		if(1)
		{
			double_2 = double_1 * double_5;
			unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
		}
	}
	double_7 = double_1 * double_6;
	int_6 = int_3 * int_1;
	double_7 = double_3 + double_8;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	int_1 = int_4 + int_1;
	if(1)
	{
	}
	char_1 = char_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_3 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_8 = 1;
		float float_4 = 1;
		short_4 = short_3 * short_1;
		if(1)
		{
			float_3 = v_lhRestorePage(unsigned_int_7,float_2);

			double_1 = double_3 + double_9;
		}
		if(1)
		{
			double_7 = double_8 * double_2;
			if(1)
			{
			}
			short_4 = short_1 * short_3;
			if(1)
			{
			}
			double_6 = double_6 * double_3;
			char_5 = char_3 + char_5;
			unsigned_int_5 = unsigned_int_8;
			int_1 = int_4 * int_6;
			char_2 = char_3 + char_1;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
		}
		float_4 = float_1 * float_4;
		char_3 = char_2 + char_1;
		if(1)
		{
			char_5 = v_lhCellWriteOvflPayload(unsigned_int_6,double_9,int_6,short_1);

			long_4 = long_5;
		}
		int_4 = int_2 * int_6;
		unsigned_int_5 = unsigned_int_8 + unsigned_int_7;
		int_2 = int_4 * int_3;
	}
	long_3 = v_SyBigEndianPack64(short_2,int_5);

	double_2 = double_3 * double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
	double_8 = double_8 + double_6;
	return long_4;
	int_1 = v_SyBigEndianUnpack64(double_4,long_6);

}
float v_lhMoveLocalCell( double parameter_1,long parameter_2,long parameter_3,float parameter_4)
{
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	int int_1 = 1;
	float float_2 = 1;
	char char_5 = 1;
	double_1 = double_1;
	double_1 = double_1;
	short_1 = short_1 * short_1;
	double_2 = double_2 + double_2;
	if(1)
	{
		short_2 = short_1 + short_2;
		short_1 = v_lhCellWriteLocalPayload(long_1,unsigned_int_1,double_1,short_2,long_2);

		char_2 = char_1 + char_2;
	}
	if(1)
	{
		char_3 = v_SyBigEndianPack16(float_1,short_3);

		char_1 = char_2 + char_3;
		short_2 = short_3 + short_2;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	double_2 = v_lhFindSibeling(float_1);

	char_3 = char_3 * char_4;
	int_1 = int_1 * int_1;
	float_1 = float_1 * float_1;
	return float_2;
	v_lhCellWriteHeader(char_5);

}
char v_lhRecordAppend( char parameter_1,short parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_2 = 1;
	double double_5 = 1;
	char char_5 = 1;
	float float_1 = 1;
	long long_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_3 = 1;
	long long_6 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	char char_7 = 1;
	char char_8 = 1;
	double double_7 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_6 = 1;
	short short_7 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_8 = 1;
	float float_5 = 1;
	int int_9 = 1;
	long long_8 = 1;
	double double_8 = 1;
	short short_8 = 1;
	int int_11 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	char_3 = char_1 + char_2;
	long_1 = v_SyBigEndianPack64(short_1,int_1);

	double_3 = double_1 * double_2;
	short_1 = short_1 * short_1;
	double_2 = double_3;
	double_1 = double_3 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = v_SyBlobInit(char_4,unsigned_int_3);

	short_2 = short_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	}
	int_2 = v_SyBigEndianUnpack64(double_4,long_2);

	double_3 = double_2 + double_2;
	if(1)
	{
	}
	if(1)
	{
		double_5 = v_SyBlobAppend(short_3,unsigned_int_3,unsigned_int_3,-1 );

		char_5 = char_3 * char_1;
		float_1 = v_lhMoveLocalCell(double_2,long_3,long_2,float_2);

		unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2;
			if(1)
			{
			}
			short_1 = short_1 * short_4;
			char_5 = char_2 + char_4;
			long_4 = long_1 + long_1;
		}
		if(1)
		{
			char char_6 = 1;
			int int_4 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
			short_1 = short_3 + short_4;
			long_4 = long_5 + long_1;
			char_1 = char_6 + char_4;
			int_4 = int_3 * int_2;
			if(1)
			{
				long_2 = long_4 * long_6;
			}
			if(1)
			{
				double_6 = double_2 * double_1;
			}
			unsigned_int_6 = unsigned_int_2;
			short_5 = short_1 * short_1;
			char_7 = char_8;
		}
	}
	double_7 = double_1 * double_6;
	if(1)
	{
	}
	int_7 = int_5 * int_6;
	char_5 = char_1 + char_5;
	short_7 = short_5 * short_6;
	float_4 = float_3 * float_3;
	long_4 = long_7 + long_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_10 = 1;
			float float_6 = 1;
			long long_9 = 1;
			if(1)
			{
				unsigned_int_4 = unsigned_int_7 + unsigned_int_6;
			}
			int_5 = int_8 * int_6;
			if(1)
			{
			}
			float_4 = float_5 + float_5;
			v_lhRestoreSpace(double_2,float_5,float_5);

			unsigned_int_7 = unsigned_int_6 * unsigned_int_1;
			int_9 = int_10;
			long_3 = long_8 * long_3;
			unsigned_int_1 = v_lhAllocateSpace(float_4,int_6,short_3);

			float_6 = float_6 * float_5;
			long_3 = long_9 + long_5;
		}
		if(1)
		{
			long_8 = v_SyBlobRelease(short_3);

			unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
			int_8 = int_5 + int_8;
		}
		if(1)
		{
			double_8 = double_3 * double_4;
		}
		float_4 = float_1;
	}
	char_1 = char_7 * char_7;
	short_7 = short_8;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_10 = 1;
		char char_11 = 1;
		long_6 = long_8 * long_6;
		if(1)
		{
			int_1 = int_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_7 * unsigned_int_1;
			if(1)
			{
			}
			unsigned_int_4 = unsigned_int_7 * unsigned_int_2;
			if(1)
			{
			}
			double_3 = double_5 + double_8;
			short_1 = short_3;
			unsigned_int_5 = unsigned_int_3 + unsigned_int_6;
			unsigned_int_4 = unsigned_int_6 + unsigned_int_4;
			int_1 = int_8;
			float_5 = float_4 * float_1;
		}
		char_8 = v_lhAcquirePage(short_4,int_3);

		long_5 = v_SyMemcpy(long_4,char_8);

		int_7 = int_6 * int_9;
		char_4 = v_lhCellWriteOvflPayload(unsigned_int_2,double_8,int_11,short_2);

		double_9 = double_6 * double_8;
		if(1)
		{
			char char_9 = 1;
			char_8 = char_4 * char_9;
		}
		short_8 = short_6 + short_5;
		char_7 = char_10 * char_11;
		double_5 = double_7 + double_1;
	}
	unsigned_int_8 = unsigned_int_8 + unsigned_int_5;
	unsigned_int_4 = unsigned_int_7 + unsigned_int_8;
	double_9 = double_3 * double_9;
	return char_2;
}
double v_lhFindSibeling( float parameter_1)
{
	double double_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
		}
	}
	return double_1;
}
char v_lhUnlinkCell( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_2 = 1;
	long_1 = long_1 * long_2;
	char_1 = v_SyBigEndianPack16(float_1,short_1);

	float_1 = float_1 + float_1;
	int_1 = int_1 * int_1;
	long_1 = long_2 * long_2;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_3 = double_2 + double_3;
	if(1)
	{
		double double_4 = 1;
		short_1 = v_lhCellDiscard(unsigned_int_2);

		double_5 = double_4 + double_5;
		v_lhRestoreSpace(double_5,float_1,float_1);

		double_4 = double_2 + double_5;
	}
	if(1)
	{
		double_5 = v_lhFindSibeling(float_2);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		long_2 = long_2 + long_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	}
	long_4 = long_1 * long_3;
	int_2 = int_1 * int_1;
	return char_1;
}
short v_lhConsumeCellData( float parameter_1,char parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	int int_1 = 1;
	long long_4 = 1;
	short short_4 = 1;
	char_1 = char_2;
	double_2 = double_1 + double_1;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		long_3 = long_2 * long_1;
		int_1 = v_SyBigEndianUnpack64(double_1,long_4);

		long_2 = long_4;
		if(1)
		{
			char_1 = char_1 + char_2;
		}
	}
	if(1)
	{
		long long_5 = 1;
		long long_6 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double_1 = double_2 + double_1;
		long_3 = long_5 + long_6;
		short_2 = short_1 + short_2;
		char_1 = char_3;
		char_3 = char_3 * char_2;
		float_3 = float_1 * float_2;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_2 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_4 = 1;
			short short_3 = 1;
			float float_5 = 1;
			if(1)
			{
				char_1 = char_1;
			}
			int_2 = int_1 + int_2;
			if(1)
			{
			}
			unsigned_int_6 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				double double_3 = 1;
				double_3 = double_3 + double_4;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_6;
				long_5 = long_2 + long_2;
			}
			if(1)
			{
				short short_5 = 1;
				float float_4 = 1;
				short_5 = short_3 * short_4;
				float_4 = float_3 * float_4;
			}
			if(1)
			{
				double double_5 = 1;
				double_4 = double_5;
				if(1)
				{
					unsigned int unsigned_int_7 = 1;
					unsigned_int_7 = unsigned_int_6 + unsigned_int_2;
				}
				short_1 = short_4 + short_3;
			}
			if(1)
			{
				if(1)
				{
					int_2 = int_2;
					if(1)
					{
						int int_3 = 1;
						int_3 = int_2 + int_3;
					}
					float_2 = float_5 * float_5;
				}
			}
			float_1 = float_5;
			char_1 = char_3 * char_3;
		}
		char_3 = char_3 * char_2;
	}
	return short_4;
}
float v_SyBlobReset()
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short_2 = short_1 * short_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		int_1 = int_1 + int_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	}
	return float_1;
}
short v_SyBlobDup( char parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = v_SyBlobAppend(short_1,unsigned_int_1,unsigned_int_1,-1 );

	int_2 = int_1 + int_2;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	return short_1;
}
void v_lhTransferCell( short parameter_1,float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float_2 = float_1 + float_1;
	float_4 = float_1 * float_3;
	long_2 = long_1 + long_2;
	char_2 = char_1 * char_1;
	if(1)
	{
		double double_2 = 1;
		short_1 = v_SyBlobDup(char_3,unsigned_int_1);

		double_2 = double_1 * double_1;
		if(1)
		{
		}
	}
	double_1 = double_3 + double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	v_lhInstallCell(short_2);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_3 = v_lhAllocateSpace(float_4,int_1,short_2);

	float_5 = v_lhNewCell(double_3,int_1);

	unsigned_int_2 = unsigned_int_5;
	int_2 = int_1 + int_1;
	int_1 = int_3;
	v_lhCellWriteHeader(char_2);

	int_1 = int_3 * int_3;
	long_1 = v_lhFindSlavePage(double_1,unsigned_int_6,float_3,char_4);

	char_3 = char_4 * char_1;
	short_3 = short_1;
	short_3 = short_2 + short_4;
	if(1)
	{
	}
	float_2 = float_1 + float_3;
}
char v_lhPageSplit( char parameter_1,char parameter_2,char parameter_3,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_4 = 1;
	long long_2 = 1;
	double double_7 = 1;
	long long_3 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	v_lhTransferCell(short_1,float_1);

	char_1 = char_1 * char_1;
	double_3 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		if(1)
		{
			float_1 = v_SyBlobReset();

			unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		}
		double_2 = double_3 + double_1;
		unsigned_int_4 = v_SyBlobInit(char_2,unsigned_int_5);

		double_4 = double_3 + double_1;
		if(1)
		{
			double double_5 = 1;
			double double_6 = 1;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
			if(1)
			{
				short short_2 = 1;
				short_3 = short_1 * short_2;
			}
			if(1)
			{
				double_5 = double_4 * double_5;
				if(1)
				{
					unsigned_int_6 = unsigned_int_6 + unsigned_int_3;
					if(1)
					{
						int_1 = v_lhConsumeCellkey(char_3,double_1,double_1,int_2);

						int_3 = int_1 + int_3;
					}
				}
				long_1 = long_1 * long_1;
				if(1)
				{
					unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
				}
				unsigned_int_3 = v_lhStoreCell(unsigned_int_6,short_3,unsigned_int_3,short_1,long_1,unsigned_int_3,int_2);

				char_3 = char_1 + char_3;
			}
			if(1)
			{
				char_4 = v_lhUnlinkCell(long_2);

				unsigned_int_5 = unsigned_int_4;
			}
			double_5 = double_6 * double_1;
		}
		int_3 = int_2 + int_3;
	}
	short_3 = v_lhConsumeCellData(float_1,char_1,int_1);

	long_2 = long_2;
	double_4 = v_vedisDataConsumer(double_7,unsigned_int_2);

	long_3 = v_SyBlobRelease(short_1);

	unsigned_int_1 = unsigned_int_4;
	return char_2;
}
short v_lhSplit( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	char char_5 = 1;
	long long_4 = 1;
	int int_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	short short_5 = 1;
	short_1 = v_lhLoadPage(float_1,long_1,unsigned_int_1,short_2,int_1);

	short_3 = short_2 + short_3;
	unsigned_int_2 = v_lhNewPage(double_1,double_2,char_1);

	short_2 = short_2 * short_3;
	double_1 = double_1;
	long_1 = long_1 + long_1;
	unsigned_int_3 = v_lhMapFindBucket(float_2,char_1);

	char_2 = char_1;
	short_1 = short_3;
	if(1)
	{
	}
	long_3 = long_2 + long_2;
	if(1)
	{
	}
	char_2 = v_lhPageSplit(char_3,char_3,char_4,short_4);

	char_4 = char_3;
	if(1)
	{
	}
	char_4 = char_5;
	if(1)
	{
	}
	float_1 = float_2;
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	double_1 = double_1 + double_1;
	if(1)
	{
		long_4 = v_SyBigEndianPack64(short_4,int_2);

		float_3 = float_2 * float_1;
	}
	if(1)
	{
		double double_3 = 1;
		char_3 = v_lhAcquirePage(short_3,int_2);

		double_1 = double_3 + double_1;
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double_5 = double_4 * double_1;
	}
	double_2 = double_1 + double_6;
	double_4 = double_7 + double_4;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		char char_6 = 1;
		int_4 = int_3 + int_1;
		unsigned_int_2 = unsigned_int_4;
		int_3 = v_lhSetEmptyPage(long_5);

		char_6 = char_6 + char_2;
		if(1)
		{
			double double_8 = 1;
			long_6 = v_lhMapWriteRecord(int_4,short_3,short_4);

			double_4 = double_8 * double_5;
		}
		short_3 = short_3 * short_5;
		float_3 = float_2 + float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
	}
	long_5 = long_1 + long_1;
	return short_5;
}
char v_lhRecordInstall( char parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		double_1 = double_1 + double_1;
		if(1)
		{
			double double_2 = 1;
			if(1)
			{
			}
			double_1 = double_2 + double_2;
		}
	}
	return char_1;
	unsigned_int_1 = v_lhStoreCell(unsigned_int_1,short_2,unsigned_int_1,short_1,long_1,unsigned_int_1,int_1);

	short_2 = v_lhSplit(char_1,int_2);

}
unsigned int v_lhKeyCmp( int parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 + short_1;
	float_2 = float_1 + float_1;
	if(1)
	{
		if(1)
		{
		}
	}
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	int_4 = int_3 * int_1;
	return unsigned_int_1;
}
double v_lhFindCell( unsigned int parameter_1,double parameter_2,float parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		double double_5 = 1;
		if(1)
		{
			double_2 = double_2;
		}
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
				long_1 = long_1 * long_2;
				char_3 = char_1 + char_2;
				int_3 = v_lhConsumeCellkey(char_4,double_3,double_1,int_2);

				double_1 = double_3 * double_1;
				double_4 = double_3 + double_1;
				double_2 = double_1;
				if(1)
				{
				}
			}
			if(1)
			{
			}
		}
		double_4 = double_3 + double_5;
	}
	return double_2;
	unsigned_int_1 = v_lhKeyCmp(int_1,short_1);

}
double v_vedisDataConsumer( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int_1 = int_1 * int_2;
	double_1 = v_SyBlobAppend(short_1,unsigned_int_1,unsigned_int_2,-1 );

	short_1 = short_2 + short_2;
	return double_1;
}
int v_lhConsumeCellkey( char parameter_1,double parameter_2,double parameter_3,int parameter_6)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_6 = 1;
	int int_6 = 1;
	double double_8 = 1;
	long long_3 = 1;
	float_1 = float_1 + float_1;
	double_3 = double_1 + double_2;
	int_2 = int_1 * int_2;
	short_1 = short_2;
	double_4 = double_3 + double_1;
	if(1)
	{
		int_3 = int_1 * int_1;
		float_3 = float_1 * float_2;
		if(1)
		{
			float_2 = float_3 + float_3;
		}
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short_1 = short_2 * short_1;
		int_5 = int_4 * int_4;
		float_1 = float_2 + float_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		long_2 = long_1 + long_1;
		double_4 = double_4;
		double_4 = double_3 * double_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			double double_7 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_3 = 1;
			if(1)
			{
				unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
			}
			double_1 = double_5;
			if(1)
			{
			}
			long_2 = long_2 * long_2;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				float float_4 = 1;
				char char_1 = 1;
				double_3 = double_5 + double_1;
				v_SyBigEndianUnpack16(double_6,short_2);

				double_5 = double_7 * double_7;
				int_6 = v_SyBigEndianUnpack64(double_8,long_3);

				unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
				float_3 = float_4;
				if(1)
				{
					double_2 = double_6;
				}
				char_1 = char_1 + char_1;
			}
			if(1)
			{
				double_7 = double_9 * double_9;
				if(1)
				{
					int int_7 = 1;
					int_7 = int_6 * int_4;
				}
				unsigned_int_1 = unsigned_int_5 + unsigned_int_5;
			}
			if(1)
			{
				double_2 = double_4;
				if(1)
				{
					double_9 = double_1 * double_5;
				}
				double_2 = double_5 + double_5;
			}
			unsigned_int_5 = unsigned_int_6 * unsigned_int_6;
			short_3 = short_2;
		}
		int_5 = int_3 + int_3;
	}
	return int_2;
}
double v_lhParseOneCell( short parameter_1,double parameter_2,float parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	double double_3 = 1;
	long long_2 = 1;
	char char_2 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_6 = 1;
	short short_5 = 1;
	int int_7 = 1;
	short short_6 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = v_SyBigEndianUnpack32(float_2,char_1);

	double_1 = double_1;
	int_1 = int_1 * int_2;
	float_3 = v_lhNewCell(double_2,int_3);

	long_1 = long_1 + long_1;
	int_2 = int_1 + int_4;
	int_2 = v_SyBigEndianUnpack64(double_3,long_2);

	char_2 = char_1 * char_2;
	int_3 = v_lhConsumeCellkey(char_2,double_1,double_2,int_3);

	int_5 = int_5 + int_5;
	short_2 = short_1 * short_1;
	double_1 = double_3 + double_2;
	v_SyBigEndianUnpack16(double_1,short_3);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_2 = v_SyBlobRelease(short_4);

	int_4 = int_6 + int_6;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_4;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	double_4 = double_3 * double_3;
	float_5 = float_4 + float_5;
	double_6 = double_5 * double_2;
	float_6 = float_1 * float_6;
	v_lhInstallCell(short_5);

	short_1 = short_5 * short_2;
	int_3 = int_3 + int_7;
	short_6 = short_1 + short_4;
	char_2 = char_1 + char_1;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "6P") < 0)
	{
		float_1 = float_3 * float_3;
	}
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		char_1 = char_2;
	}
	return double_3;
	double_6 = v_vedisDataConsumer(double_6,unsigned_int_3);

}
void v_lhPageFreeSpace( float parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	v_SyBigEndianUnpack16(double_1,short_1);

	int_1 = int_1 * int_1;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1;
	if(1)
	{
		short_2 = short_2 + short_2;
	}
	short_2 = short_3 * short_1;
	short_1 = short_2 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char_2 = char_1 + char_1;
		char_4 = char_3 * char_3;
		double_2 = double_1 + double_3;
		double_2 = double_3 * double_1;
		if(1)
		{
			char char_5 = 1;
			char_4 = char_5 * char_5;
		}
		double_3 = double_4;
		if(1)
		{
		}
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
}
long v_lhLoadCells( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	float float_2 = 1;
	int_3 = int_1 + int_2;
	int_1 = int_4 + int_2;
	v_lhPageFreeSpace(float_1);

	char_1 = char_1 + char_2;
	int_5 = int_6;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	char_1 = char_3 + char_3;
	long_1 = long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_1 = double_1;
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
		}
	}
	return long_3;
	double_1 = v_lhParseOneCell(short_1,double_2,float_2,long_3);

}
void v_lhParsePageHeader( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_2;
	double_1 = double_1 + double_1;
	float_1 = float_1 + float_2;
	int_3 = int_3 * int_3;
	int_2 = int_3 * int_3;
	v_SyBigEndianUnpack16(double_1,short_1);

	int_4 = v_SyBigEndianUnpack64(double_2,long_1);

	float_3 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
}
short v_lhLoadPage( float parameter_1,long parameter_2,unsigned int parameter_3,short parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_1;
	int_3 = int_1 + int_2;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		long_1 = long_2;
	}
	if(1)
	{
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		int_2 = int_1 + int_4;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
			v_lhParsePageHeader(char_1);

			char_1 = char_2 * char_2;
		}
		if(1)
		{
			unsigned_int_2 = v_lhNewPage(double_1,double_2,char_2);

			double_1 = double_2 * double_2;
		}
		if(1)
		{
			int int_5 = 1;
			if(1)
			{
				long_2 = v_lhLoadCells(double_3);

				int_2 = int_1 * int_3;
			}
			int_2 = int_5 + int_1;
		}
	}
	char controller_9[3];
	fgets(controller_9 ,3 ,stdin);
	if( strcmp( controller_9, "3N") < 0)
	{
		double_3 = double_2 + double_1;
	}
	return short_1;
}
long v_lhMapWriteRecord( int parameter_1,short parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	int int_6 = 1;
	short short_5 = 1;
	short_2 = short_1 + short_1;
	short_2 = v_lhMapInstallBucket(double_1,unsigned_int_1,long_1);

	int_1 = int_1 + int_2;
	long_2 = long_1 * long_2;
	if(1)
	{
		double double_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int_3 = int_3;
		double_2 = double_1 * double_1;
		if(1)
		{
		}
		long_1 = v_SyBigEndianPack64(short_1,int_2);

		short_4 = short_3 + short_2;
		if(1)
		{
		}
		long_2 = long_1;
		char_2 = char_1 * char_1;
		double_4 = double_1 * double_3;
		float_1 = float_1;
		int_4 = v_SyBigEndianPack32(double_5,unsigned_int_2);

		float_2 = float_2 + float_2;
		if(1)
		{
		}
		if(1)
		{
			char_3 = v_lhAcquirePage(short_1,int_4);

			long_2 = long_1;
		}
		if(1)
		{
			int int_5 = 1;
			double_5 = double_5 * double_2;
			int_6 = int_5 * int_2;
		}
		float_3 = float_1;
		if(1)
		{
		}
		double_2 = double_4 * double_3;
	}
	if(1)
	{
		int_3 = int_6;
		if(1)
		{
		}
	}
	short_1 = short_2 + short_5;
	if(1)
	{
	}
	short_1 = short_5;
	unsigned_int_2 = unsigned_int_2;
	int_4 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		long_2 = long_1 + long_2;
		if(1)
		{
			int int_7 = 1;
			int_6 = int_7 + int_4;
		}
		if(1)
		{
			double double_6 = 1;
			double_6 = double_4 * double_5;
			if(1)
			{
			}
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		}
	}
	return long_1;
}
void v_lhCellWriteHeader( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_1;
	int_1 = v_SyBigEndianPack32(double_1,unsigned_int_1);

	float_1 = float_2;
	int_2 = int_2 + int_2;
	double_1 = double_1 * double_1;
	long_1 = v_SyBigEndianPack64(short_1,int_2);

	char_3 = char_1 * char_2;
	long_1 = long_1 * long_2;
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_2;
	char_1 = char_2 * char_3;
	long_3 = long_1;
	long_2 = long_3 * long_4;
	char_4 = v_SyBigEndianPack16(float_1,short_1);

	int_2 = int_1 * int_2;
	short_2 = short_2 + short_1;
	int_3 = int_3 * int_2;
}
short v_lhCellWriteLocalPayload( long parameter_1,unsigned int parameter_2,double parameter_3,short parameter_4,long parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_1 = v_SyMemcpy(long_2,char_1);

	long_3 = long_3;
	double_3 = double_1 * double_2;
	short_1 = short_1 + short_1;
	double_3 = double_2 + double_2;
	short_1 = short_2 * short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return short_1;
}
short v_lhCellDiscard( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	unsigned_int_1 = v_SyMemBackendPoolFree(long_1);

	int_1 = int_1 + int_1;
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	long_2 = v_SyBlobRelease(short_1);

	int_2 = int_2 * int_3;
	if(1)
	{
		char_1 = char_1 * char_2;
	}
	char_3 = char_1 * char_2;
	short_1 = short_1;
	float_1 = float_1 + float_2;
	return short_2;
}
char v_lhCellWriteOvflPayload( unsigned int parameter_1,double parameter_2,int parameter_3,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	float float_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	float float_7 = 1;
	char char_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float float_8 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_9 = 1;
	char char_4 = 1;
	int int_10 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_1;
	int_1 = int_1 * int_1;
	long_1 = v_SyMemcpy(long_1,char_1);

	long_2 = long_1;
	double_3 = double_1 * double_3;
	float_1 = float_1 * float_1;
	int_2 = int_1 + int_2;
	float_3 = float_2 * float_1;
	long_1 = v_SyBigEndianPack64(short_1,int_2);

	long_4 = long_2 + long_3;
	if(1)
	{
	}
	char_1 = char_2 * char_1;
	if(1)
	{
	}
	double_1 = double_2 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_4 = long_5 + long_3;
	long_5 = long_6 + long_6;
	char_1 = v_SyBigEndianPack16(float_4,short_2);

	short_1 = short_3 * short_4;
	int_3 = int_1;
	float_5 = float_6;
	int_5 = int_4 + int_1;
	double_4 = double_2 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_2 = double_2 + double_4;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
			if(1)
			{
			}
			float_6 = float_7;
			if(1)
			{
			}
			short_2 = short_2 * short_1;
			char_3 = char_1 + char_1;
			int_5 = int_6;
			int_7 = int_5 * int_6;
			float_3 = float_8 * float_7;
			short_2 = short_1;
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		float_8 = float_1 * float_1;
		if(1)
		{
			long_6 = long_5 * long_2;
		}
		int_8 = int_7 * int_6;
		int_4 = int_5 * int_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	int_3 = int_3 * int_4;
	char_2 = char_3 * char_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	int_5 = int_7 + int_1;
	int_6 = int_8 * int_9;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
		float_7 = float_2 + float_5;
		double_2 = double_2 + double_1;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_5;
		if(1)
		{
			short_1 = short_2;
		}
		char_2 = char_3 * char_4;
		long_6 = long_1 + long_3;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			char char_5 = 1;
			if(1)
			{
				float_8 = float_6 + float_4;
			}
			if(1)
			{
				unsigned int unsigned_int_8 = 1;
				unsigned int unsigned_int_9 = 1;
				short short_5 = 1;
				short short_6 = 1;
				unsigned int unsigned_int_10 = 1;
				short_4 = short_4 + short_1;
				if(1)
				{
					unsigned int unsigned_int_7 = 1;
					unsigned_int_1 = unsigned_int_5 * unsigned_int_7;
				}
				double_1 = double_3 + double_4;
				if(1)
				{
					double_2 = double_4 * double_1;
				}
				unsigned_int_4 = unsigned_int_8 + unsigned_int_9;
				unsigned_int_4 = unsigned_int_8 * unsigned_int_6;
				double_2 = double_2 * double_1;
				short_4 = short_5 * short_6;
				unsigned_int_6 = unsigned_int_10 * unsigned_int_1;
				char_1 = char_3 + char_3;
			}
			float_2 = float_8 * float_6;
			char_3 = char_2 + char_4;
			if(1)
			{
				int_2 = int_8 * int_2;
			}
			char_4 = v_lhAcquirePage(short_2,int_9);

			float_8 = float_2;
			double_1 = double_1;
			char_5 = char_3 * char_1;
		}
	}
	int_2 = int_10;
	double_2 = double_5;
	return char_4;
}
void v_lhInstallCell( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 + short_1;
	if(1)
	{
		char char_2 = 1;
		int_1 = int_1 * int_1;
		char_2 = char_1 + char_1;
		char_3 = char_2 * char_1;
		if(1)
		{
		}
		double_2 = double_1 * double_1;
		char_3 = v_SyZero(int_2);

		int_2 = int_1 + int_1;
		short_2 = short_2 * short_2;
	}
	double_1 = double_3;
	int_3 = int_1 * int_2;
	if(1)
	{
		double_4 = double_3;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 + long_2;
	}
	if(1)
	{
		double_5 = v_SyMemBackendFree(short_1);

		unsigned_int_4 = unsigned_int_2;
	}
	double_4 = double_2 + double_2;
	if(1)
	{
		long long_3 = 1;
		unsigned int unsigned_int_5 = 1;
		long_3 = long_3 * long_3;
		double_3 = double_4 * double_5;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
		int_1 = int_2;
		if(1)
		{
			char char_4 = 1;
			int int_4 = 1;
			int int_5 = 1;
			char_1 = char_4 * char_4;
			unsigned_int_3 = v_SyMemBackendAlloc(double_2,double_3);

			int_3 = int_4 * int_4;
			int_1 = int_2 * int_5;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				float float_1 = 1;
				int int_6 = 1;
				float float_2 = 1;
				if(1)
				{
					unsigned_int_5 = unsigned_int_4;
				}
				float_1 = float_1 + float_1;
				int_4 = int_6 + int_3;
				int_2 = int_3 * int_2;
				if(1)
				{
					float_2 = float_1 + float_2;
				}
				double_5 = double_1 + double_2;
				unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
				float_1 = float_2;
			}
			short_1 = short_2 + short_2;
			long_3 = long_2;
			char_4 = char_3 * char_3;
		}
	}
}
unsigned int v_SyBlobInit( char parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
		}
		long_1 = long_1 + long_2;
	}
	double_2 = double_1 * double_1;
	double_3 = double_3 * double_3;
	long_3 = long_3 + long_3;
	return unsigned_int_1;
}
float v_lhNewCell( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = v_SyMemBackendPoolAlloc(char_1,short_1);

	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_1 = v_SyBlobInit(char_2,unsigned_int_2);

	long_1 = long_2 + long_3;
	float_2 = float_1 + float_1;
	char_3 = v_SyZero(int_1);

	int_1 = int_2 + int_3;
	return float_1;
}
void v_lhRestoreSpace( double parameter_1,float parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	char_1 = v_SyBigEndianPack16(float_1,short_1);

	short_2 = short_1 + short_1;
	char_3 = char_1 * char_2;
	short_1 = short_1 + short_2;
	long_1 = long_2;
	short_2 = short_2 * short_1;
	double_4 = double_1 + double_3;
	int_2 = int_1 * int_1;
}
long v_lhFindSlavePage( double parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_5 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	short short_2 = 1;
	int int_5 = 1;
	float float_4 = 1;
	int int_6 = 1;
	long long_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_5 = 1;
	int_2 = int_1 + int_1;
	double_2 = double_1 + double_1;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_2 * double_1;
	short_1 = short_1 * short_1;
	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		double_4 = double_2 + double_3;
		if(1)
		{
			short_1 = short_1;
			long_2 = v_SyBigEndianPack64(short_1,int_1);

			unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		}
		if(1)
		{
			if(1)
			{
				int_1 = v_lhSetEmptyPage(long_2);

				long_1 = long_3;
			}
			if(1)
			{
				int_3 = int_1 + int_1;
			}
			v_lhRestoreSpace(double_2,float_1,float_1);

			double_5 = double_1 + double_4;
		}
		unsigned_int_1 = v_lhNewPage(double_4,double_3,char_3);

		float_2 = float_3;
	}
	long_4 = long_3 + long_4;
	if(1)
	{
	}
	unsigned_int_4 = v_lhAllocateSpace(float_3,int_4,short_2);

	float_2 = float_3 * float_3;
	if(1)
	{
		int_5 = int_5 + int_2;
	}
	float_4 = float_1 * float_4;
	if(1)
	{
	}
	double_1 = double_5 + double_3;
	if(1)
	{
		int_3 = int_5 * int_5;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
		double_2 = double_3 + double_2;
	}
	int_5 = int_6 * int_3;
	if(1)
	{
		long_5 = long_4 * long_4;
	}
	char_3 = v_lhAcquirePage(short_3,int_4);

	float_2 = float_1;
	short_1 = short_1;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	float_2 = float_5 + float_5;
	return long_5;
}
int v_lhSlaveStore( float parameter_1,unsigned int parameter_2,char parameter_3,unsigned int parameter_4,short parameter_5,float parameter_6)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	long long_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	long_2 = long_1 * long_2;
	unsigned_int_1 = v_lhStoreCell(unsigned_int_1,short_1,unsigned_int_1,short_2,long_2,unsigned_int_1,int_1);

	short_1 = short_3;
	long_3 = v_lhFindSlavePage(double_1,unsigned_int_1,float_1,char_1);

	int_3 = int_1 + int_2;
	if(1)
	{
	}
	short_6 = short_4 * short_5;
	return int_3;
}
short v_lhPageDefragment( long parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_5 = 1;
	int_1 = int_1;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = v_SyBigEndianPack16(float_1,short_1);

	double_2 = double_1 + double_1;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_2 * int_2;
	int_4 = int_4;
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		if(1)
		{
			char_1 = char_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_2 = 1;
			short short_4 = 1;
			short short_5 = 1;
			char char_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
			}
			unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
			float_2 = float_3;
			short_2 = short_1 * short_1;
			double_3 = double_3;
			int_3 = int_2 * int_4;
			short_3 = short_1 + short_1;
			char_1 = char_1 + char_1;
			short_3 = short_4 * short_2;
			short_5 = short_3 * short_3;
			char_3 = char_2 * char_3;
			int_2 = v_SyBigEndianPack32(double_3,unsigned_int_6);

			int_3 = int_2 * int_3;
			int_2 = int_3 * int_4;
			char_3 = char_1 * char_2;
			if(1)
			{
				int_2 = int_3 * int_4;
				double_4 = double_4;
			}
			if(1)
			{
				char_3 = char_1 + char_3;
			}
		}
		long_1 = v_SyMemcpy(long_1,char_1);

		double_4 = double_1 + double_1;
	}
	long_3 = long_2 + long_1;
	if(1)
	{
		char char_4 = 1;
		float float_4 = 1;
		int_1 = int_4 + int_4;
		char_4 = char_1 + char_2;
		float_4 = float_1 + float_3;
	}
	if(1)
	{
		long_2 = v_SyBigEndianPack64(short_1,int_1);

		double_3 = double_1 * double_3;
		unsigned_int_4 = unsigned_int_4;
	}
	long_2 = long_3;
	float_5 = float_2 + float_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	return short_3;
}
void v_SyBigEndianUnpack16( double parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_1 * float_2;
}
unsigned int v_lhAllocateSpace( float parameter_1,int parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	long long_5 = 1;
	double double_5 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	short_1 = short_2;
	double_2 = double_1 + double_2;
	double_2 = double_2 + double_2;
	double_4 = double_2 + double_3;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
		double_1 = double_2;
		double_3 = double_4 * double_1;
		if(1)
		{
			long long_3 = 1;
			long_1 = long_3 + long_3;
		}
		short_2 = short_3 * short_3;
		if(1)
		{
			long long_4 = 1;
			long_4 = long_4 * long_5;
			if(1)
			{
				float float_2 = 1;
				v_SyBigEndianUnpack16(double_5,short_4);

				double_1 = double_2 * double_4;
				float_3 = float_1 * float_2;
				int_3 = int_2 * int_3;
				unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
				double_3 = double_4 + double_5;
			}
			if(1)
			{
			}
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	short_2 = short_1 + short_4;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char_3 = v_SyBigEndianPack16(float_4,short_4);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
		short_3 = v_lhPageDefragment(long_5);

		unsigned_int_6 = unsigned_int_5 * unsigned_int_6;
		float_3 = float_3 + float_1;
		int_2 = int_3 + int_3;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		int int_4 = 1;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
		int_4 = int_3 + int_2;
	}
	char_4 = char_2 * char_4;
	return unsigned_int_5;
}
unsigned int v_lhStoreCell( unsigned int parameter_1,short parameter_2,unsigned int parameter_3,short parameter_4,long parameter_5,unsigned int parameter_6,int parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	long long_3 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	double double_6 = 1;
	float float_1 = 1;
	short short_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_1;
	v_lhInstallCell(short_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2;
	long_2 = long_1 + long_1;
	double_2 = double_3 * double_2;
	if(1)
	{
	}
	char_1 = v_lhCellWriteOvflPayload(unsigned_int_3,double_3,int_1,short_2);

	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	if(1)
	{
		double_2 = double_4 + double_2;
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				long_2 = long_2 * long_3;
			}
		}
		double_3 = v_SyBlobAppend(short_1,unsigned_int_2,unsigned_int_2,-1 );

		short_2 = v_lhCellWriteLocalPayload(long_2,unsigned_int_3,double_2,short_2,long_2);

		double_1 = double_1 + double_5;
	}
	int_2 = int_2 + int_3;
	if(1)
	{
		long long_4 = 1;
		long_3 = long_3 * long_4;
	}
	double_4 = double_5 + double_4;
	unsigned_int_5 = unsigned_int_5;
	char_1 = char_2;
	double_6 = double_6 * double_2;
	if(1)
	{
		unsigned_int_5 = v_lhAllocateSpace(float_1,int_2,short_3);

		float_2 = v_lhNewCell(double_3,int_2);

		float_1 = float_2;
	}
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_6 * unsigned_int_6;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
		}
	}
	if(1)
	{
		int_1 = v_lhSlaveStore(float_2,unsigned_int_7,char_3,unsigned_int_8,short_1,float_3);

		v_lhCellWriteHeader(char_3);

		int_2 = int_2 + int_1;
	}
	double_2 = double_6;
	return unsigned_int_1;
	short_1 = v_lhCellDiscard(unsigned_int_6);

}
char v_SyBigEndianPack16( float parameter_1,short parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float_1 = float_1 * float_1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return char_1;
}
int v_lhSetEmptyPage( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_2 = short_1 * short_2;
	int_1 = int_1;
	int_3 = int_2 * int_2;
	int_1 = int_1 + int_1;
	float_1 = float_1 * float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "E[") == 0)
	{
	}
	char_1 = v_SyBigEndianPack16(float_1,short_1);

	long_1 = long_1 * long_1;
	double_2 = double_1 * double_2;
	double_3 = double_3 * double_3;
	double_1 = double_2 * double_2;
	long_2 = v_SyBigEndianPack64(short_2,int_2);

	double_1 = double_4;
	int_2 = int_3 * int_4;
	long_4 = long_3 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 * float_1;
	double_1 = double_4 * double_1;
	double_2 = double_4 * double_3;
	int_3 = int_4;
	return int_2;
}
unsigned int v_lhNewPage( double parameter_1,double parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = v_SyZero(int_1);

	double_1 = double_1 * double_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	double_1 = double_2 * double_1;
	long_1 = v_SyMemBackendPoolAlloc(char_1,short_1);

	unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
	int_2 = int_1 + int_1;
	if(1)
	{
		short_1 = short_1 + short_1;
		double_1 = double_2 * double_2;
		char_1 = char_1 * char_1;
	}
	int_1 = int_1 * int_2;
	return unsigned_int_6;
}
char v_lhAcquirePage( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_2;
	double_3 = double_1 + double_2;
	if(1)
	{
		int_1 = int_1;
		if(1)
		{
			int int_4 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int_3 = int_1 * int_3;
			long_1 = v_SyBigEndianPack64(short_1,int_3);

			double_2 = double_3 * double_3;
			if(1)
			{
			}
			int_1 = int_4 + int_4;
			int_5 = v_SyBigEndianUnpack64(double_1,long_1);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			long_3 = long_1 + long_2;
		}
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	return char_1;
}
unsigned int v_lhMapFindBucket( float parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	long_2 = long_1 + long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 + int_2;
		}
		if(1)
		{
		}
		char_3 = char_1 + char_2;
	}
	return unsigned_int_1;
}
double v_lh_record_insert( short parameter_1,char parameter_2,int parameter_3,long parameter_4,float parameter_5,int parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_7 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	char char_3 = 1;
	short short_5 = 1;
	int int_9 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int_2 = int_1 + int_2;
	float_1 = float_1 * float_1;
	int_2 = int_1;
	double_2 = double_1 + double_2;
	int_2 = int_3 + int_2;
	int_2 = int_2 + int_2;
	int_3 = int_4 * int_3;
	long_1 = long_1 * long_1;
	int_1 = int_1;
	double_2 = v_lhFindCell(unsigned_int_1,double_1,float_1,long_2);

	int_4 = int_2;
	if(1)
	{
	}
	int_6 = int_5 + int_6;
	short_1 = v_lhLoadPage(float_1,long_1,unsigned_int_1,short_1,int_3);

	long_4 = long_2 + long_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long_5 = v_lhMapWriteRecord(int_4,short_2,short_1);

		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	unsigned_int_1 = v_lhMapFindBucket(float_2,char_1);

	unsigned_int_3 = v_lhStoreCell(unsigned_int_1,short_3,unsigned_int_1,short_4,long_5,unsigned_int_3,int_3);

	int_7 = int_5 * int_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
		if(1)
		{
		}
		int_3 = int_7;
		if(1)
		{
		}
		int_6 = int_5;
		if(1)
		{
			int_6 = int_7;
		}
		unsigned_int_1 = v_lhNewPage(double_2,double_2,char_2);

		float_1 = float_1 * float_2;
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
		}
		unsigned_int_3 = unsigned_int_6 + unsigned_int_5;
	}
	if(1)
	{
		double double_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_2 = double_1 + double_3;
		if(1)
		{
		}
		int_3 = v_lhSetEmptyPage(long_5);

		double_5 = double_4 + double_3;
		char_2 = v_lhRecordAppend(char_3,short_3,short_5);

		double_4 = double_1;
		if(1)
		{
			int int_8 = 1;
			int_2 = int_2 + int_8;
			if(1)
			{
				int_9 = int_7;
				int_2 = int_6 + int_8;
			}
		}
		if(1)
		{
			if(1)
			{
				int_1 = int_9;
			}
			if(1)
			{
				long_1 = v_lhRecordOverwrite(char_3,short_5,short_6);

				double_1 = double_6 + double_2;
			}
		}
		char_1 = v_lhAcquirePage(short_4,int_2);

		char_3 = v_lhRecordInstall(char_2,unsigned_int_5,float_1,int_9,int_9,unsigned_int_7);

		double_2 = double_6 * double_5;
	}
	return double_4;
}
short v_lhash_kv_replace( short parameter_1,short parameter_2,int parameter_3,float parameter_4,char parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	char_3 = char_1 * char_2;
	double_1 = v_lh_record_insert(short_1,char_3,int_1,long_1,float_1,int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return short_2;
}
short v_MemPoolBucketAlloc( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int_3 = int_1 * int_2;
	long_1 = v_MemBackendAlloc(float_1,short_1,-1 );

	int_1 = int_4 + int_5;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	int_4 = int_6 * int_7;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_6 = 1;
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
		}
		unsigned_int_6 = unsigned_int_6 + unsigned_int_3;
		char_2 = char_1 * char_1;
		char_2 = char_1 + char_2;
	}
	int_7 = int_8;
	return short_1;
}
unsigned int v_MemBackendPoolAlloc( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int_3 = int_1 + int_2;
	long_1 = long_1 * long_2;
	long_1 = long_3;
	float_1 = float_1;
	long_4 = v_MemBackendAlloc(float_1,short_1,-1 );

	short_2 = short_1 + short_1;
	return unsigned_int_1;
	short_1 = v_MemPoolBucketAlloc(char_1,double_1);

}
long v_SyMemBackendPoolAlloc( char parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	unsigned_int_1 = v_MemBackendPoolAlloc(unsigned_int_2,short_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "hN") < 0)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3;
		}
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	return long_3;
}
short v_lhMapInstallBucket( double parameter_1,unsigned int parameter_2,long parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	float float_3 = 1;
	short short_1 = 1;
	char char_3 = 1;
	short short_3 = 1;
	long_1 = long_1;
	double_1 = double_1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = v_SyMemBackendAlloc(double_1,double_2);

	double_2 = double_2 + double_1;
	double_2 = double_2;
	int_1 = int_2;
	int_2 = int_1 + int_3;
	if(1)
	{
		int_1 = int_3 * int_3;
	}
	char_1 = char_1 + char_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "tg") > 0)
	{
		double_3 = double_3 + double_3;
	}
	float_2 = float_3;
	if(1)
	{
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		double double_4 = 1;
		short_2 = short_1 * short_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		long_1 = long_1 * long_1;
		int_4 = int_1 + int_3;
		double_1 = double_2 * double_4;
		if(1)
		{
			float float_4 = 1;
			float float_5 = 1;
			int int_6 = 1;
			int int_7 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_9 = 1;
			float_5 = float_4 * float_4;
			unsigned_int_1 = unsigned_int_4;
			float_4 = float_4 * float_5;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int int_5 = 1;
				long long_2 = 1;
				int int_8 = 1;
				if(1)
				{
					char_3 = char_3;
				}
				int_2 = int_5 + int_3;
				long_1 = v_SyMemBackendPoolAlloc(char_3,short_3);

				char_2 = v_SyZero(int_2);

				long_2 = long_1;
				char_1 = char_2 + char_1;
				if(1)
				{
					char char_4 = 1;
					char_4 = char_1 * char_2;
				}
				char_1 = char_3 * char_3;
				double_3 = v_SyMemBackendFree(short_1);

				int_6 = int_1;
				int_8 = int_7 * int_3;
			}
			double_5 = double_4 + double_3;
			unsigned_int_5 = unsigned_int_6;
			int_9 = int_7 * int_6;
		}
	}
	return short_1;
}
float v_lhMapLoadPage( short parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	short_1 = v_lhMapInstallBucket(double_1,unsigned_int_1,long_1);

	short_2 = short_1 + short_2;
	double_1 = double_2;
	long_3 = long_2 + long_3;
	int_1 = int_1 * int_2;
	char_1 = char_1;
	if(1)
	{
		short short_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		float_1 = v_SyBigEndianUnpack32(float_1,char_2);

		short_1 = short_3;
		double_1 = double_1;
		char_2 = char_2 + char_1;
	}
	if(1)
	{
		long_3 = long_3 * long_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		if(1)
		{
			long long_4 = 1;
			long_1 = long_2 * long_4;
		}
		double_2 = double_1 * double_2;
		int_3 = int_2 + int_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		int_4 = v_SyBigEndianUnpack64(double_1,long_3);

		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
		float_3 = float_2 * float_1;
		if(1)
		{
		}
	}
	int_1 = int_3 + int_3;
	return float_3;
}
int v_SyBigEndianUnpack64( double parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 * float_2;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
float v_SyBigEndianUnpack32( float parameter_1,char parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	double_1 = double_1 + double_1;
	return float_1;
}
void v_lhash_read_header( char parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	float float_1 = 1;
	short short_4 = 1;
	long long_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	short short_5 = 1;
	char_3 = char_1 * char_2;
	short_1 = short_1 * short_1;
	double_1 = double_1 + double_1;
	int_2 = int_1 + int_1;
	int_1 = int_3 * int_1;
	short_1 = short_2;
	double_2 = double_2 + double_3;
	if(1)
	{
	}
	short_3 = short_2 + short_2;
	float_1 = float_1;
	if(1)
	{
		short_4 = short_3 + short_1;
	}
	long_1 = long_1 + long_1;
	int_2 = int_1;
	float_1 = v_SyBigEndianUnpack32(float_2,char_1);

	char_5 = char_3 + char_4;
	short_1 = short_4 * short_1;
	char_3 = char_5 + char_4;
	int_4 = int_2 * int_3;
	int_5 = int_4 * int_3;
	double_3 = double_3 * double_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 + double_1;
	long_3 = long_2 * long_3;
	char_5 = char_2 + char_4;
	long_2 = long_3 * long_3;
	char_1 = char_4;
	int_6 = v_SyBigEndianUnpack64(double_2,long_3);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_7 = 1;
		double_6 = double_5 * double_2;
		float_3 = v_lhMapLoadPage(short_5,char_2,int_6);

		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			char char_6 = 1;
			char char_7 = 1;
			char_4 = char_6 + char_7;
		}
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
		}
		short_1 = short_3 * short_3;
		int_4 = int_2 + int_7;
		unsigned_int_2 = unsigned_int_2;
		if(1)
		{
		}
	}
}
long v_SyBigEndianPack64( short parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float_2 = float_1 + float_1;
	short_3 = short_1 + short_2;
	long_1 = long_2;
	char_2 = char_1 * char_1;
	char_3 = char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_5 = char_4 + char_5;
	int_1 = int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	int_1 = int_1 + int_2;
	double_1 = double_1;
	float_1 = float_3 * float_1;
	long_1 = long_3 + long_4;
	long_3 = long_1 * long_3;
	int_2 = int_1 + int_1;
	return long_4;
}
int v_SyBigEndianPack32( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_2;
	float_1 = float_1 * float_2;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	return int_3;
}
void v_lhash_write_header( short parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	float float_3 = 1;
	double_1 = double_1 + double_1;
	double_1 = double_2;
	int_1 = int_1;
	int_3 = int_2 * int_3;
	int_2 = int_4;
	float_1 = float_1 + float_1;
	short_3 = short_1 + short_2;
	long_1 = long_1;
	double_1 = double_1 * double_3;
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_1;
	double_5 = double_4 + double_5;
	long_3 = v_SyBigEndianPack64(short_1,int_4);

	unsigned_int_2 = unsigned_int_3;
	float_1 = float_1 + float_2;
	int_1 = v_SyBigEndianPack32(double_3,unsigned_int_3);

	int_4 = int_3 + int_3;
	long_3 = long_3 * long_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_6;
	float_3 = float_1 + float_1;
	double_5 = double_3 * double_2;
}
int v_lhash_kv_open( double parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long_2 = long_1 + long_1;
	long_4 = long_2 * long_3;
	double_1 = double_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_1 = double_3 + double_1;
		if(1)
		{
		}
		v_lhash_write_header(short_1,char_1);

		double_1 = double_2 * double_1;
		if(1)
		{
		}
		double_1 = double_4 + double_5;
		if(1)
		{
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long_3 = long_4;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
		}
	}
	return int_1;
	v_lhash_read_header(char_2,float_1);

}
long v_lhash_kv_config( unsigned int parameter_1,int parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char_1 = char_1 + char_2;
	long_2 = long_1 + long_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
		if(1)
		{
			double_1 = double_1 * double_2;
		}
	}
	double_2 = double_1 * double_1;
	short_2 = short_1 + short_2;
	if(1)
	{
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	}
	float_3 = float_1 * float_2;
	double_1 = double_2 + double_2;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_4;
	return long_2;
}
void v_lhash_kv_release( long parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = v_SyMemBackendRelease(float_1);

	double_2 = double_1 + double_2;
	double_2 = double_3 * double_1;
}
void v_MemBackendPoolFree( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float_2 = float_1 * float_1;
	int_2 = int_1 * int_2;
	int_2 = int_1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		double double_4 = 1;
		double_1 = v_MemBackendFree(long_1);

		double_4 = double_2 + double_1;
		double_4 = double_4;
	}
}
unsigned int v_SyMemBackendPoolFree( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
		int int_1 = 1;
		if(1)
		{
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			v_MemBackendPoolFree(char_1);

			double_2 = double_1 + double_1;
		}
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	return unsigned_int_1;
}
long v_SyBlobRelease( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	double_1 = v_SyMemBackendFree(short_1);

	int_1 = int_2 * int_3;
	float_2 = float_1 * float_2;
	float_1 = float_1;
	return long_1;
}
void v_lhash_page_release()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int_1 = int_1 * int_1;
	int_1 = int_1 * int_2;
	long_1 = v_SyBlobRelease(short_1);

	long_2 = long_1 * long_2;
	char_2 = char_1 * char_1;
	unsigned_int_1 = v_SyMemBackendPoolFree(long_3);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_3 = 1;
		char_4 = char_1 * char_3;
		char_1 = char_4 * char_5;
		short_1 = short_1 * short_2;
		unsigned_int_3 = unsigned_int_1;
	}
	if(1)
	{
		long_1 = long_3 + long_1;
	}
	long_5 = long_4 * long_2;
	double_1 = v_SyMemBackendFree(short_2);

	double_4 = double_2 * double_3;
}
unsigned int v_lhash_bin_hash( char parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = short_2;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		short_1 = short_2;
	}
	int_3 = int_3 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_4 = 1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		int_3 = int_1 * int_2;
		char_3 = char_1 + char_2;
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1;
		}
		double_1 = double_1 * double_2;
		float_2 = float_1 * float_1;
		if(1)
		{
			char_4 = char_3 + char_4;
		}
		char_2 = char_2 * char_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			char_1 = char_4 + char_4;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_1 = double_1 * double_2;
	}
	return unsigned_int_3;
}
void v_lhash_kv_init( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_4 = 1;
	double double_4 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_2 * double_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	int_2 = int_1 * int_1;
	short_3 = short_1 * short_2;
	short_3 = short_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	long_1 = long_1 + long_1;
	if(1)
	{
		short_3 = short_4 + short_3;
		unsigned_int_3 = v_SyMemcmp(double_2,double_4,float_1);

		int_1 = int_2 + int_3;
	}
	short_2 = short_1;
	short_4 = short_2 * short_1;
	unsigned_int_4 = v_lhash_bin_hash(char_1,double_4);

	double_2 = v_SyMemBackendRelease(float_2);

	unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
	char_2 = v_SyZero(int_1);

	unsigned_int_5 = unsigned_int_6;
	long_3 = long_2 + long_3;
	int_3 = int_1 * int_2;
	int_2 = v_vedisExportMemBackend();

	long_2 = long_1 * long_4;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
	int_1 = v_SyMemBackendInitFromParent(char_2,int_2);

	unsigned_int_3 = v_SyMemBackendAlloc(double_4,double_4);

	v_lhash_page_release();

}
void v_vedisExportDiskKvStorage()
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char char_2 = 1;
	double double_4 = 1;
	float float_2 = 1;
	v_lhash_kv_init(float_1,int_1);

	long_1 = v_lhash_kv_append(double_1,unsigned_int_1,int_2,int_2,short_1);

	unsigned_int_2 = v_lhCursorSeek(double_1,double_1,int_1,int_1);

	short_2 = v_lhCursorFirst(unsigned_int_2);

	int_3 = v_lhCursorValid(int_2);

	double_1 = v_lhCursorDelete(unsigned_int_2);

	char_1 = v_lhCursorData(unsigned_int_3,double_2,int_1);

	unsigned_int_3 = unsigned_int_4;
	v_lhash_kv_release(long_2);

	long_3 = v_lhash_kv_config(unsigned_int_1,int_1,long_2);

	int_4 = v_lhash_kv_open(double_3,float_1);

	short_1 = v_lhash_kv_replace(short_1,short_1,int_3,float_1,char_2);

	long_1 = v_lhInitCursor(double_4);

	float_1 = v_lhCursorLast(long_2);

	long_1 = v_lhCursorNext(double_1);

	short_2 = v_lhCursorPrev(int_2);

	int_1 = v_lhCursorKeyLength(short_1,int_4);

	unsigned_int_3 = v_lhCursorKey(long_3,short_2,long_2);

	float_1 = v_lhCursorDataLength(float_2,unsigned_int_4);

	short_1 = v_lhCursorReset(short_1);

}
long v_MemHashCursorReset( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_2;
	return long_1;
}
unsigned int v_MemHashCursorData( double parameter_1,short parameter_2,char parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	return unsigned_int_1;
}
long v_MemHashCursorDataLength( unsigned int parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	int_1 = int_1;
	return long_3;
}
short v_MemHashCursorKey( char parameter_1,unsigned int parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char_2 = char_1 + char_1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
void v_MemHashCursorKeyLength( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	long_2 = long_1 * long_2;
}
void v_MemHashUnlinkRecord( short parameter_1,short parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	char_1 = char_1 + char_1;
	short_1 = short_1;
	if(1)
	{
		double_1 = v_SyMemBackendFree(short_1);

		double_1 = double_2 + double_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "C") < 0)
	{
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	long_1 = long_2;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long_5 = long_3 + long_4;
	}
	double_2 = double_3;
	double_4 = double_1 + double_2;
	short_2 = short_2;
}
float v_MemHashCursorDelete( unsigned int parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_1;
	return float_1;
	v_MemHashUnlinkRecord(short_1,short_2);

}
char v_MemHashCursorPrev( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_2 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "c,") < 0)
	{
	}
	char_1 = char_2;
	return char_1;
}
unsigned int v_MemHashCursorNext( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	return unsigned_int_1;
}
short v_MemHashCursorValid( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_2;
	return short_1;
}
int v_MemHashCursorLast( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_1 = char_2;
	char_2 = char_3;
	int_2 = int_1 * int_1;
	return int_3;
}
void v_MemHashCursorFirst()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_2 = double_1 * double_1;
	int_2 = int_1 + int_2;
	double_3 = double_3 * double_4;
}
long v_MemHashCursorSeek( double parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	short_1 = v_MemHashGetEntry(float_1,unsigned_int_1,int_1);

	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		if(1)
		{
		}
	}
	return long_1;
}
void v_MemHashInitCursor( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 * double_1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2;
}
unsigned int v_MemHashAppend( unsigned int parameter_1,float parameter_2,int parameter_3,float parameter_4,long parameter_5)
{
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	short_1 = v_MemHashGetEntry(float_1,unsigned_int_1,int_1);

	int_1 = v_MemHashLinkRecord(unsigned_int_1,int_1);

	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 * long_2;
	}
	int_1 = int_1 * int_2;
	if(1)
	{
		short_1 = short_2;
		if(1)
		{
		}
		short_4 = short_2 * short_3;
		if(1)
		{
			int_2 = int_2 + int_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		double double_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_1 = v_MemHashNewRecord(unsigned_int_2,float_2,int_1,short_3,short_4,unsigned_int_2);

		char_2 = char_1 + char_2;
		int_3 = int_1 * int_1;
		float_1 = float_2 * float_1;
		if(1)
		{
			double_1 = double_1 * double_1;
		}
		double_3 = double_2 * double_1;
		int_3 = int_4 + int_2;
		if(1)
		{
		}
		int_5 = int_2;
		char_2 = v_SyMemBackendRealloc(float_2,float_2,-1 );

		long_2 = v_SyMemcpy(long_3,char_3);

		int_3 = int_2 + int_4;
		short_4 = short_2 + short_1;
	}
	return unsigned_int_2;
	double_1 = v_MemHashGrowTable(double_2);

}
double v_MemHashGrowTable( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long_2 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_2;
	float_2 = float_1 + float_2;
	int_1 = int_2;
	if(1)
	{
	}
	double_3 = double_1 + double_2;
	unsigned_int_3 = v_SyMemBackendAlloc(double_4,double_4);

	int_3 = int_2 + int_2;
	double_1 = double_4 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		char char_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		if(1)
		{
			int_1 = int_3 * int_4;
		}
		int_5 = int_4 * int_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		short_1 = short_1 + short_1;
		if(1)
		{
			int_3 = int_4 + int_4;
		}
		short_2 = short_1;
		float_3 = float_2 * float_2;
		int_5 = int_5 + int_5;
		if(1)
		{
			float_3 = float_2 + float_4;
		}
		unsigned_int_6 = unsigned_int_5 + unsigned_int_4;
		int_1 = int_5;
		double_2 = double_1 + double_2;
		char controller_5[2];
		fgets(controller_5 ,2 ,stdin);
		if( strcmp( controller_5, "F") > 0)
		{
			long_2 = long_1 + long_1;
		}
		float_3 = float_4;
		double_2 = double_2;
		unsigned_int_5 = unsigned_int_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_7 * unsigned_int_7;
		}
		double_2 = v_SyMemBackendFree(short_1);

		double_3 = double_2;
		short_2 = short_1;
		int_1 = int_2 * int_6;
		if(1)
		{
			int_5 = int_2;
		}
		unsigned_int_2 = unsigned_int_6 * unsigned_int_1;
		char_1 = char_1 + char_2;
		char_1 = char_1 * char_3;
		if(1)
		{
			char char_4 = 1;
			char_1 = char_2 + char_4;
		}
		short_5 = short_3 * short_4;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
		int_2 = int_5 + int_3;
		if(1)
		{
			unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
		}
		int_6 = int_6 * int_3;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
		unsigned_int_5 = unsigned_int_7;
	}
	int_1 = int_2 + int_6;
	char_2 = v_SyZero(int_7);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
	double_4 = double_4 + double_4;
	return double_1;
}
int v_MemHashLinkRecord( unsigned int parameter_1,int parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	long_1 = long_1 + long_1;
	char_2 = char_1 * char_2;
	if(1)
	{
		int int_2 = 1;
		int_3 = int_1 + int_2;
	}
	float_3 = float_1 * float_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "c") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	int_3 = int_3 + int_1;
	return int_4;
}
int v_MemHashNewRecord( unsigned int parameter_1,float parameter_2,int parameter_3,short parameter_4,short parameter_5,unsigned int parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_1;
	double_1 = v_SyMemBackendFree(short_1);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	int_1 = int_2;
	long_1 = long_2;
	char_2 = char_1 * char_1;
	long_1 = long_2;
	if(1)
	{
	}
	double_2 = double_3;
	if(1)
	{
		double_3 = double_2 * double_2;
	}
	long_3 = long_1 * long_3;
	unsigned_int_1 = v_SyMemBackendAlloc(double_2,double_4);

	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	float_2 = float_1 + float_2;
	int_1 = int_1 * int_2;
	char_2 = v_SyZero(int_2);

	double_1 = double_1 + double_4;
	float_1 = float_2 * float_2;
	float_2 = float_3;
	long_3 = v_SyMemcpy(long_3,char_1);

	unsigned_int_7 = unsigned_int_2 * unsigned_int_6;
	int_4 = int_1 + int_3;
	int_5 = int_5 + int_1;
	return int_5;
}
short v_MemHashGetEntry( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short_1 = short_1 + short_1;
	char_1 = char_1 * char_2;
	short_1 = short_2;
	int_1 = int_2;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return short_1;
}
char v_MemHashReplace( double parameter_1,char parameter_2,int parameter_3,double parameter_4,int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	double double_5 = 1;
	float float_5 = 1;
	char char_2 = 1;
	long_1 = v_SyMemcpy(long_2,char_1);

	long_2 = long_2;
	int_1 = int_1;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	double_1 = v_SyMemBackendFree(short_1);

	short_2 = short_2;
	if(1)
	{
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
		}
		short_2 = v_MemHashGetEntry(float_2,unsigned_int_2,int_1);

		unsigned_int_3 = v_SyMemBackendAlloc(double_2,double_2);

		double_4 = double_2 + double_3;
		if(1)
		{
			int_4 = int_2 + int_3;
		}
	}
	if(1)
	{
		float float_4 = 1;
		char char_3 = 1;
		float_1 = float_1 * float_4;
		short_3 = short_1 + short_1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double_5 = v_MemHashGrowTable(double_3);

			unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
		}
		if(1)
		{
			short short_4 = 1;
			int_1 = v_MemHashLinkRecord(unsigned_int_2,int_2);

			int_3 = int_2 + int_3;
			if(1)
			{
			}
			short_4 = short_4 + short_4;
		}
		int_4 = v_MemHashNewRecord(unsigned_int_1,float_5,int_3,short_3,short_1,unsigned_int_1);

		char_3 = char_2 * char_1;
		int_2 = int_2 * int_3;
		int_2 = int_4 + int_3;
	}
	return char_2;
}
unsigned int v_MemHashConfigure( short parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char_1 = char_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		int_2 = int_1 * int_2;
		if(1)
		{
			int int_3 = 1;
			int_2 = int_3 + int_1;
		}
	}
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	}
	int_2 = int_1 * int_2;
	short_1 = short_2 + short_3;
	return unsigned_int_2;
}
int v_MemBackendRelease( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_4 = 1;
	long long_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double_1 = double_1;
	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		if(1)
		{
			long_1 = long_1;
		}
		double_1 = double_2 + double_2;
		unsigned_int_1 = unsigned_int_2;
		short_2 = short_1 + short_1;
		short_3 = short_2 * short_3;
		if(1)
		{
			double_2 = double_3 * double_3;
		}
		double_4 = double_1 + double_3;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		short_2 = short_2 + short_4;
		long_4 = long_2 + long_3;
		if(1)
		{
			int_3 = int_1 * int_2;
		}
		double_2 = double_5;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
		int_1 = int_3;
		short_1 = short_2 * short_5;
		if(1)
		{
			long_1 = long_1 * long_2;
		}
		float_2 = float_1 + float_1;
		double_7 = double_6 + double_2;
		long_3 = long_1 * long_2;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	}
	if(1)
	{
		long_1 = long_4;
	}
	int_1 = int_2 + int_3;
	short_6 = short_6 * short_5;
	if(1)
	{
		short_2 = short_4 + short_6;
	}
	return int_1;
}
double v_SyMemBackendRelease( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	float_2 = float_1 + float_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
		}
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1;
		}
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
		double_1 = double_1;
	}
	return double_1;
	int_2 = v_MemBackendRelease(int_2);

}
float v_MemHashRelease( unsigned int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double_1 = v_SyMemBackendRelease(float_1);

	long_1 = long_1 * long_1;
	float_2 = float_3;
	return float_4;
}
void v_MemHashFunc( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long long_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_4 = 1;
		if(1)
		{
			long long_1 = 1;
			long_3 = long_1 * long_2;
		}
		char_2 = char_1 + char_1;
		double_2 = double_1 * double_2;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
		}
		long_4 = long_3 + long_2;
		float_2 = float_1 + float_2;
		if(1)
		{
			float_2 = float_2 * float_2;
		}
		double_3 = double_1 + double_2;
		int_2 = int_1 * int_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3;
		}
		float_3 = float_4;
		double_4 = double_1 * double_3;
	}
}
int v_SyMemBackendInitFromParent( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
		if(1)
		{
		}
		short_1 = short_1;
	}
	double_3 = double_3;
	short_1 = short_2 + short_3;
	long_2 = long_1 + long_1;
	float_1 = float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long_2 = long_2 * long_2;
		char_1 = v_SyZero(int_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
		}
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_2 = char_2 * char_3;
	}
	return int_1;
}
long v_MemHashInit( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	char char_5 = 1;
	long_2 = long_1 + long_2;
	char_3 = char_1 * char_2;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	v_MemHashFunc(short_2,char_3);

	unsigned_int_1 = v_SyMemcmp(double_1,double_1,float_1);

	char_1 = char_1 + char_2;
	short_2 = short_1 + short_2;
	unsigned_int_1 = v_SyMemBackendAlloc(double_2,double_3);

	int_1 = int_2;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_4 = short_3 + short_3;
	int_2 = v_SyMemBackendInitFromParent(char_4,int_3);

	int_3 = v_vedisExportMemBackend();

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	return long_3;
	char_5 = v_SyZero(int_2);

}
short v_vedisExportMemKvStorage()
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	long long_2 = 1;
	double double_5 = 1;
	long_1 = v_MemHashInit(char_1,int_1);

	unsigned_int_1 = v_MemHashConfigure(short_1,int_1,int_2);

	unsigned_int_1 = v_MemHashAppend(unsigned_int_2,float_1,int_3,float_1,long_1);

	v_MemHashInitCursor(short_2);

	long_1 = v_MemHashCursorSeek(double_1,double_1,int_3,int_4);

	int_5 = v_MemHashCursorLast(float_2);

	float_3 = v_MemHashCursorDelete(unsigned_int_1);

	v_MemHashCursorKeyLength(unsigned_int_3,int_4);

	double_1 = double_2 * double_1;
	return short_2;
	float_1 = v_MemHashRelease(unsigned_int_3);

	char_1 = v_MemHashReplace(double_3,char_1,int_4,double_4,int_2);

	v_MemHashCursorFirst();

	short_1 = v_MemHashCursorValid(char_2);

	unsigned_int_4 = v_MemHashCursorNext(float_2);

	char_2 = v_MemHashCursorPrev(short_1);

	short_3 = v_MemHashCursorKey(char_2,unsigned_int_1,char_1);

	long_2 = v_MemHashCursorDataLength(unsigned_int_4,double_2);

	unsigned_int_2 = v_MemHashCursorData(double_2,short_1,char_2);

	long_2 = v_MemHashCursorReset(double_5);

}
void v_SySetInit( char parameter_1,char parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_2;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	short_1 = short_3;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
}
char v_UnixUnmap(unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short_1 = short_2;
	return char_1;
}
void v_UnixMmap( char parameter_1,short parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_1 + double_2;
	double_2 = double_1 + double_2;
	int_1 = int_2 + int_2;
	double_3 = double_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_2 * double_4;
	float_2 = float_1 + float_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double_1 = double_2 + double_1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	}
	short_1 = short_2;
}
double v_unixCurrentTime( float parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1 * int_2;
	double_1 = double_1 * double_1;
	long_3 = long_1 * long_2;
	double_2 = double_2 * double_1;
	short_2 = short_1 + short_1;
	if(1)
	{
		int_1 = int_2 * int_1;
	}
	return double_1;
}
unsigned int v_unixSleep( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_1;
	short_3 = short_1 + short_2;
	char_1 = char_1 * char_1;
	double_1 = double_1 * double_1;
	return unsigned_int_2;
}
char v_SyMemBackendDup( int parameter_1,short parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = v_SyMemBackendAlloc(double_1,double_2);

	double_1 = double_2;
	if(1)
	{
		char char_1 = 1;
		if(1)
		{
		}
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = v_SyMemcpy(long_1,char_2);

		long_2 = long_1 + long_2;
	}
	return char_2;
}
char v_BlobPrepareGrow( short parameter_1,int parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char_3 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_1;
	char controller4vul_1004[2];
	fgets(controller4vul_1004 ,2 ,stdin);
	if( strcmp( controller4vul_1004, "^") > 0)
	{
		char controller4vul_1005[2];
		fgets(controller4vul_1005 ,2 ,stdin);
		if( strcmp( controller4vul_1005, "T") < 0)
		{
			double double_2 = 1;
			double_3 = double_1 * double_2;
			char controller4vul_1006[3];
			fgets(controller4vul_1006 ,3 ,stdin);
			if( strcmp( controller4vul_1006, "XG") < 0)
			{
				char_2 = v_SyMemBackendRealloc(float_1,float_1,uni_para);

			}
		}
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "_K") < 0)
	{
		if(1)
		{
			int int_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int_1 = int_1 + int_3;
			if(1)
			{
			}
			float_3 = float_1 + float_2;
			int_1 = int_1 * int_1;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_1;
			char_3 = char_4 * char_1;
		}
		double_1 = double_1 + double_3;
	}
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_2 * int_1;
	}
	if(1)
	{
		int_2 = int_1 * int_2;
	}
	double_1 = double_4;
	if(1)
	{
	}
	char_1 = char_4 + char_1;
	double_5 = double_3 + double_3;
	return char_1;
}
double v_SyBlobAppend( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3;
	char controller4vul_1003[2];
	fgets(controller4vul_1003 ,2 ,stdin);
	if( strcmp( controller4vul_1003, ".") < 0)
	{
		char_1 = v_BlobPrepareGrow(short_1,int_1,uni_para);

	}
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_2 = 1;
		float_2 = float_1 * float_1;
		double_1 = double_1;
		float_5 = float_3 * float_4;
		double_2 = double_1;
	}
	return double_3;
}
float v_FormatConsumer( short parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_2;
	long_1 = long_1 * long_2;
	long_3 = long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = v_SyBlobAppend(short_3,unsigned_int_3,unsigned_int_3,-1 );

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1;
	float_1 = float_1 + float_2;
	int_2 = int_1 + int_1;
	return float_2;
}
unsigned int v_getdigit( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = int_2;
	int_3 = int_4;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	short_3 = short_1 * short_2;
	return unsigned_int_3;
}
void v_InternFormat( char parameter_1,int parameter_3,double parameter_4)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_1 = char_1;
	unsigned_int_1 = v_getdigit(int_1,int_2);

	float_1 = float_1 + float_2;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_2 + int_3;
		int_3 = int_4 + int_3;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_1 = v_SyStrlen(double_1);

	long_2 = long_1 + long_1;
	float_1 = float_1 * float_1;
}
unsigned int v_FormatMount( double parameter_1,char parameter_3,char parameter_5,int parameter_6,char parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	short short_1 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	double_2 = double_1 * double_2;
	int_3 = int_1 + int_2;
	double_4 = double_3 * double_1;
	float_1 = float_1 + float_2;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	char_2 = char_1 * char_1;
	float_4 = v_FormatConsumer(short_1,char_3);

	short_1 = short_2 * short_3;
	double_2 = double_2 + double_2;
	char_4 = char_3 * char_3;
	int_4 = int_4 + int_4;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	}
	return unsigned_int_1;
	v_InternFormat(char_4,int_2,double_2);

}
void v_SyBlobInitFromBuf( char parameter_1,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	if(1)
	{
		if(1)
		{
		}
		int_2 = int_1 + int_2;
	}
	double_1 = double_2;
	int_2 = int_3 + int_1;
	long_3 = long_1 * long_2;
	double_2 = double_2 + double_1;
}
int v_SyBufferFormat( char parameter_1,long parameter_2,char parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_SyBlobInitFromBuf(char_1,long_1);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	double_1 = double_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		if(1)
		{
		}
		if(1)
		{
		}
		float_2 = float_1 + float_1;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	int_2 = int_1 * int_2;
	double_1 = double_2 * double_3;
	unsigned_int_5 = v_FormatMount(double_1,char_1,char_2,int_3,char_2);

	short_2 = short_1 + short_2;
	long_3 = long_2 * long_2;
	return int_1;
	double_3 = v_SyBlobAppend(short_1,unsigned_int_6,unsigned_int_6,-1 );

}
int v_unixFullPathname( double parameter_1,long parameter_2,int parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	if(1)
	{
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_1 = v_Systrcpy(char_1,long_1,int_1,double_2);

		int_2 = int_2 + int_2;
	}
	if(1)
	{
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char_1 = char_1 + char_2;
		short_1 = v_SyStrlen(double_3);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_1 = v_SyBufferFormat(char_3,long_1,char_4,char_5);

		char_3 = char_4 * char_5;
	}
	return int_1;
}
double v_unixAccess( long parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int_2 = int_1 * int_1;
	float_1 = float_1 * float_2;
	double_2 = double_1 * double_1;
	int_3 = int_2 + int_3;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_4 = double_3 * double_1;
	double_2 = double_2 * double_2;
	float_4 = float_3 * float_2;
	int_2 = int_2;
	if(1)
	{
		float float_5 = 1;
		float_5 = float_5 * float_1;
		if(1)
		{
			double double_5 = 1;
			double_4 = double_4 + double_5;
		}
	}
	return double_3;
}
long v_unixDelete( int parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_1 = int_1 * int_1;
	float_1 = float_1;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		v_openDirectory(double_1,int_2);

		long_1 = long_1 + long_1;
		short_1 = short_2;
		if(1)
		{
			char controller_4[3];
			fgets(controller_4 ,3 ,stdin);
			if( strcmp( controller_4, "-$") == 0)
			{
				short short_3 = 1;
				short_3 = short_3;
			}
			if(1)
			{
				float float_2 = 1;
				float float_3 = 1;
				float_3 = float_1 * float_2;
			}
		}
	}
	return long_1;
}
double v_MemBackendFree( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_2 = char_1 + char_1;
	double_1 = double_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			double double_3 = 1;
			int int_1 = 1;
			double double_4 = 1;
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float_2 = float_1 + float_2;
			}
			double_1 = double_1 + double_3;
			int_1 = int_1 * int_1;
			double_4 = double_3 + double_3;
		}
	}
	return double_2;
}
double v_SyMemBackendFree( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	long_3 = long_1 + long_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		double_1 = v_MemBackendFree(long_1);

		long_1 = long_1 * long_1;
	}
	if(1)
	{
		long long_4 = 1;
		long_2 = long_4;
	}
	return double_1;
}
unsigned int v_vedis_free()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int_1 = v_vedisExportMemBackend();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1;
	double_1 = v_SyMemBackendFree(short_1);

	char_1 = char_1 * char_1;
	return unsigned_int_2;
}
long v_SyMemcpy( long parameter_1,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	return long_1;
}
unsigned int v_SyMemcmp( double parameter_1,double parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	int_3 = int_1 * int_2;
	return unsigned_int_1;
}
unsigned int v_findInodeInfo( long parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = v_SyMemcmp(double_1,double_1,float_1);

	long_1 = v_SyMemcpy(long_1,char_1);

	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	if(1)
	{
		char_1 = v_SyZero(int_2);

		int_2 = v_vedis_malloc(double_2);

		int_2 = int_3;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_5;
		}
		if(1)
		{
			int_3 = int_1 * int_1;
		}
		unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	}
	return unsigned_int_5;
}
char v_fillInUnixFile( short parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5,int parameter_6,int parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_2;
	int_1 = int_1 * int_1;
	short_1 = short_1;
	short_2 = short_1 * short_1;
	double_2 = double_1 * double_3;
	double_1 = double_4 * double_2;
	double_6 = double_1 + double_5;
	long_1 = long_1 * long_2;
	char_1 = char_1;
	char_2 = v_unixLeaveMutex();

	short_1 = short_2;
	double_5 = double_1 * double_4;
	int_1 = int_1 * int_1;
	if(1)
	{
		char char_4 = 1;
		char_4 = char_2 + char_3;
		char_3 = char_1 + char_3;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2 + int_2;
	if(1)
	{
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, " ^") > 0)
		{
			char char_5 = 1;
			unsigned_int_2 = v_findInodeInfo(long_1,short_1);

			char_3 = char_3 * char_5;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			long_1 = v_unixEnterMutex();

			unsigned_int_3 = unsigned_int_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 + int_3;
	}
	return char_3;
}
short v_SyStrlen( double parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
		if(1)
		{
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			if(1)
			{
				float_1 = float_1 * float_1;
			}
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
				short_1 = short_1 * short_1;
			}
			float_1 = float_1;
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				int_2 = int_1 + int_1;
			}
			double_3 = double_2 * double_1;
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			}
			unsigned_int_3 = unsigned_int_4;
		}
	}
	return short_1;
}
double v_Systrcpy( char parameter_1,long parameter_2,int parameter_3,double parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	int_3 = int_1 + int_2;
	short_1 = v_SyStrlen(double_1);

	long_1 = long_1;
	long_4 = long_2 + long_3;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			char_1 = char_1 + char_1;
		}
		unsigned_int_1 = unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_2 = 1;
		char char_2 = 1;
		float float_2 = 1;
		short short_3 = 1;
		float float_3 = 1;
		long long_5 = 1;
		if(1)
		{
			double_2 = double_1 + double_2;
		}
		double_1 = double_1 * double_3;
		int_3 = int_2;
		double_3 = double_3 * double_1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		if(1)
		{
			double_2 = double_1 + double_4;
		}
		unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
		double_2 = double_3 * double_3;
		int_1 = int_3 + int_2;
		short_2 = short_2;
		if(1)
		{
			double_4 = double_4 + double_3;
		}
		short_1 = short_1 + short_1;
		double_4 = double_4 + double_2;
		short_2 = short_1 + short_2;
		char_1 = char_2;
		if(1)
		{
			float float_1 = 1;
			float_2 = float_1 * float_1;
		}
		short_3 = short_2 * short_1;
		int_1 = int_2 + int_1;
		float_3 = float_2 * float_3;
		long_2 = long_5 + long_1;
	}
	double_5 = double_2 * double_1;
	return double_3;
}
void v_openDirectory( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = v_Systrcpy(char_1,long_1,int_1,double_2);

	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	short_2 = short_1 * short_2;
	short_3 = short_3 + short_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_3 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		short_3 = short_3 * short_4;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "G") < 0)
		{
			double double_4 = 1;
			double_3 = double_4 + double_3;
		}
	}
	double_3 = double_1 * double_5;
	double_6 = double_2 + double_6;
}
unsigned int v_findCreateFileMode( short parameter_1,int parameter_2,char parameter_3)
{
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short_1 = short_1;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2 * short_1;
	}
	return unsigned_int_1;
}
unsigned int v_SyMemBackendAlloc( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short_1 = short_1 + short_1;
	if(1)
	{
		double double_1 = 1;
		if(1)
		{
		}
		if(1)
		{
			short_1 = short_1;
		}
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		double_2 = double_2;
	}
	return unsigned_int_1;
	long_1 = v_MemBackendAlloc(float_1,short_1,-1 );

}
int v_vedisExportMemBackend()
{
	int int_1 = 1;
	return int_1;
}
int v_vedis_malloc( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long_2 = long_1 * long_1;
	int_2 = int_1 + int_2;
	int_1 = v_vedisExportMemBackend();

	long_1 = long_2 * long_2;
	unsigned_int_1 = v_SyMemBackendAlloc(double_1,double_2);

	int_3 = int_2 + int_3;
	return int_2;
}
char v_unixLeaveMutex()
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long_1 = long_1 + long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "F") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_1 = double_2;
	}
	return char_1;
}
long v_unixEnterMutex()
{
	char char_1 = 1;
	long long_1 = 1;
	char_1 = char_1 + char_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "1,") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		char_1 = char_2 * char_1;
	}
	return long_1;
}
int v_findReusableFd( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_8 = 1;
	float float_2 = 1;
	double double_8 = 1;
	long long_6 = 1;
	char_1 = v_unixLeaveMutex();

	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		float_1 = float_1;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		char_1 = char_2;
	}
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	long_1 = v_unixEnterMutex();

	char_2 = char_1 + char_2;
	double_3 = double_1 * double_3;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		char_3 = char_1 * char_1;
	}
	double_2 = double_4 * double_3;
	double_3 = double_5;
	short_4 = short_1 * short_3;
	long_2 = long_1;
	double_7 = double_6 + double_4;
	char_3 = char_1 + char_1;
	short_1 = short_3;
	long_3 = long_4;
	long_4 = long_5 * long_3;
	long_3 = long_5 + long_2;
	int_3 = int_1 * int_1;
	char_2 = char_3 + char_2;
	short_1 = short_1 * short_3;
	if(1)
	{
		int_1 = int_2 * int_4;
	}
	if(1)
	{
		int_6 = int_5 + int_3;
	}
	long_2 = long_3 + long_2;
	if(1)
	{
		int int_7 = 1;
		int_2 = int_3 * int_7;
	}
	double_6 = double_2 * double_1;
	unsigned_int_6 = unsigned_int_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
	int_4 = int_8;
	float_1 = float_1 * float_2;
	if(1)
	{
		double_2 = double_8 * double_3;
	}
	if(1)
	{
		double_6 = double_8 + double_4;
	}
	long_4 = long_6 + long_5;
	int_5 = int_2 * int_2;
	if(1)
	{
		int_1 = int_4;
	}
	if(1)
	{
		double_6 = double_2;
	}
	int_2 = int_6 * int_5;
	return int_1;
}
int v_unixOpen( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_5 = 1;
	short short_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_9 = 1;
	double_2 = double_1 * double_1;
	char_1 = char_1 + char_1;
	int_1 = int_1 * int_1;
	double_1 = double_3 * double_3;
	int_2 = v_findReusableFd(unsigned_int_1,int_3);

	unsigned_int_1 = unsigned_int_1;
	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_vedis_malloc(double_1);

	double_1 = double_4;
	float_3 = float_1 * float_2;
	int_2 = int_2 + int_2;
	char_3 = v_fillInUnixFile(short_1,int_3,int_4,int_3,double_4,int_1,int_2);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	double_2 = double_3;
	char_2 = char_3;
	long_3 = long_1 + long_2;
	double_6 = double_5 + double_1;
	v_openDirectory(double_7,int_3);

	int_5 = int_2 * int_5;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3;
	}
	if(1)
	{
		double_5 = double_6 * double_3;
		if(1)
		{
		}
	}
	short_1 = short_2;
	if(1)
	{
		long_2 = long_2;
	}
	if(1)
	{
		char char_4 = 1;
		char_4 = char_3 * char_1;
	}
	if(1)
	{
		float_5 = float_4 * float_5;
	}
	if(1)
	{
		long_2 = long_2;
	}
	short_4 = short_1 + short_3;
	if(1)
	{
		char_1 = v_SyZero(int_4);

		int_3 = int_3 * int_1;
		float_5 = float_5 + float_2;
		if(1)
		{
		}
		short_3 = short_1 + short_2;
		if(1)
		{
			long long_4 = 1;
			long long_5 = 1;
			long_4 = long_5;
			int_1 = int_4 * int_3;
		}
	}
	if(1)
	{
		short short_5 = 1;
		short short_6 = 1;
		short_6 = short_5 * short_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		double double_8 = 1;
		double_2 = double_8 + double_5;
	}
	if(1)
	{
		float_3 = float_4;
		if(1)
		{
			float float_7 = 1;
			unsigned_int_4 = v_vedis_free();

			unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
			float_6 = float_7;
		}
	}
	int_7 = int_6 + int_3;
	int_2 = int_1 * int_4;
	if(1)
	{
		double_3 = double_9 + double_7;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		float float_8 = 1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
		if(1)
		{
			double double_10 = 1;
			unsigned_int_4 = v_findCreateFileMode(short_1,int_4,char_3);

			double_7 = double_9 * double_10;
		}
		float_6 = float_3 + float_8;
	}
	if(1)
	{
		double_9 = double_9 + double_5;
	}
	double_3 = double_4 + double_4;
	if(1)
	{
		char char_5 = 1;
		char char_6 = 1;
		char_5 = char_6;
	}
	return int_1;
}
float v_vedisExportBuiltinVfs()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	long long_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int_1 = v_unixOpen(unsigned_int_1,unsigned_int_2,int_2,unsigned_int_3);

	double_1 = v_unixAccess(long_1,unsigned_int_3,int_2,int_1);

	int_3 = v_unixFullPathname(double_2,long_2,int_1,char_1);

	unsigned_int_2 = v_unixSleep(unsigned_int_4,int_2);

	v_UnixMmap(char_1,short_1);

	char_1 = v_UnixUnmap(unsigned_int_5);

	int_3 = int_1 + int_1;
	return float_1;
	long_3 = v_unixDelete(int_4,float_1,int_3);

	double_1 = v_unixCurrentTime(float_1,unsigned_int_6);

}
void v_SyMemBackendInitFromOthers( long parameter_1,char parameter_2,int parameter_3)
{
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	if(1)
	{
		long long_1 = 1;
		if(1)
		{
		}
		if(1)
		{
		}
		long_1 = long_1 + long_2;
	}
	float_2 = float_1 * float_2;
	char_1 = v_SyZero(int_1);

	double_1 = double_1 * double_1;
	long_4 = long_2 * long_3;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
}
char v_SyZero(int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short_1 = short_1 * short_2;
	double_1 = double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 * int_2;
		}
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		double_1 = double_1 + double_1;
		if(1)
		{
			short_1 = short_1 + short_1;
		}
		long_2 = long_1 + long_1;
		short_2 = short_1;
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1 + double_1;
		}
		double_5 = double_3 + double_4;
		float_1 = float_1 * float_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
		char_1 = char_1 * char_1;
		double_1 = double_3 * double_1;
	}
	return char_1;
}
void v_SyMemBackendInit( long parameter_1,double parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	if(1)
	{
		if(1)
		{
		}
		char_1 = char_1 * char_1;
	}
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 + double_1;
	float_3 = float_1 + float_2;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	char_1 = v_SyZero(int_1);

}
long v_MemBackendAlloc( float parameter_1,short parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	int_2 = int_1 * int_1;
	float_1 = float_2;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		strcpy(vul_var, "CWE-761");
		short_2 = short_1 + short_1;
		char controller4vul_1011[2];
		fgets(controller4vul_1011 ,2 ,stdin);
		if( strcmp( controller4vul_1011, "z") > 0)
		{
			double double_2 = 1;
			if(uni_para == 495)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			double_1 = double_1 + double_2;
		}
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
	}
	char_2 = char_1 + char_1;
	char_2 = char_1 + char_3;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2;
	}
	float_2 = float_1 * float_1;
	long_1 = long_1 * long_1;
}
void v_MemBackendRealloc( long parameter_1,double parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_3 = double_1 + double_2;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_1009[3];
	fgets(controller4vul_1009 ,3 ,stdin);
	if( strcmp( controller4vul_1009, "P^") > 0)
	{
		long long_3 = 1;
		char controller4vul_1010[3];
		fgets(controller4vul_1010 ,3 ,stdin);
		if( strcmp( controller4vul_1010, "QS") > 0)
		{
			long_2 = v_MemBackendAlloc(float_1,short_1,uni_para);

		}
		long_3 = long_2 * long_2;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	short_1 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_1 = short_2 * short_3;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 * int_2;
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	}
	if(1)
	{
	}
	if(1)
	{
		float float_2 = 1;
		if(1)
		{
			float_2 = float_1 + float_1;
		}
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_4 = int_3 * int_4;
		}
		if(1)
		{
			float_2 = float_1 + float_1;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
		}
	}
}
char v_SyMemBackendRealloc( float parameter_1,float parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_1007[2];
	fgets(controller4vul_1007 ,2 ,stdin);
	if( strcmp( controller4vul_1007, "/") > 0)
	{
		long long_2 = 1;
		long long_3 = 1;
		char controller4vul_1008[3];
		fgets(controller4vul_1008 ,3 ,stdin);
		if( strcmp( controller4vul_1008, "2T") > 0)
		{
			v_MemBackendRealloc(long_1,double_1,uni_para);

		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		long_3 = long_2 + long_2;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	return char_1;
}
char v_SySetPut( int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	double double_5 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		int int_3 = 1;
		double double_3 = 1;
		int_3 = int_2 * int_1;
		if(1)
		{
		}
		if(1)
		{
			double_1 = double_1;
		}
		char_1 = v_SyMemBackendRealloc(float_1,float_1,-1 );

		char_2 = char_2;
		if(1)
		{
		}
		double_3 = double_2 * double_2;
		double_4 = double_3 * double_4;
	}
	char_3 = char_2 + char_1;
	double_1 = double_5 * double_4;
	double_4 = double_5 * double_2;
	return char_1;
}
void v_vedisCoreConfigure( char parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	int int_6 = 1;
	char char_6 = 1;
	char char_8 = 1;
	int int_8 = 1;
	char char_9 = 1;
	int int_9 = 1;
	int int_10 = 1;
	int_2 = int_1 * int_1;
	char_2 = char_1 + char_1;
	if(1)
	{
		if(1)
		{
			double_2 = double_1 + double_2;
		}
		if(1)
		{
			short_2 = short_1 + short_1;
		}
	}
	if(1)
	{
		v_SyMemBackendInitFromOthers(long_1,char_3,int_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	int_3 = int_1 * int_3;
	int_4 = int_4 * int_1;
	if(1)
	{
		double_2 = double_3 * double_1;
		double_1 = double_4;
	}
	long_3 = long_1 + long_2;
	long_2 = long_2 + long_3;
	short_2 = short_2 * short_1;
	if(1)
	{
		float_3 = float_1 * float_2;
	}
	long_1 = long_3 * long_2;
	int_1 = int_3 * int_2;
	float_2 = float_3 * float_3;
	int_5 = int_3 * int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		short short_3 = 1;
		short_1 = short_1 * short_3;
	}
	long_4 = long_3 * long_2;
	float_2 = float_2 * float_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	int_6 = int_2 + int_2;
	int_6 = int_4 * int_5;
	double_4 = double_3;
	if(1)
	{
		char char_4 = 1;
		char_1 = char_1 + char_4;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
		}
		if(1)
		{
			double double_5 = 1;
			char char_5 = 1;
			double_1 = double_3 + double_5;
			char_5 = char_6;
		}
		if(1)
		{
			int_3 = int_1 * int_4;
			if(1)
			{
				int_4 = int_3 * int_4;
			}
			float_2 = float_1 + float_3;
		}
		if(1)
		{
			int_4 = int_2 + int_3;
			if(1)
			{
				int int_7 = 1;
				int_7 = int_4 * int_3;
			}
		}
		int_5 = int_5 * int_3;
	}
	if(1)
	{
		char char_7 = 1;
		if(1)
		{
			v_SyMemBackendInit(long_1,double_1);

			int_2 = int_1 + int_4;
		}
		char_7 = char_8;
		double_2 = double_4 * double_2;
	}
	int_4 = int_8 + int_1;
	if(1)
	{
		char_9 = v_SySetPut(int_3,short_2);

		char_8 = char_9 * char_1;
	}
	int_6 = int_1 * int_5;
	if(1)
	{
		double_1 = double_3 + double_1;
	}
	char_1 = char_6 + char_2;
	if(1)
	{
		short short_4 = 1;
		short_1 = short_4 * short_2;
	}
	int_4 = int_9;
	int_6 = int_10 + int_9;
	double_2 = double_3 + double_2;
}
int v_vedis_lib_config( int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_3 = int_1 * int_2;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	v_vedisCoreConfigure(char_1,float_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 + short_1;
	return int_1;
}
void v_vedisCoreInitialize()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_2;
	long_2 = long_1 * long_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	v_vedisExportDiskKvStorage();

	double_1 = double_1;
	double_2 = double_3;
	if(1)
	{
	}
	if(1)
	{
		char char_4 = 1;
		if(1)
		{
			long long_3 = 1;
			long_1 = long_3 + long_2;
			if(1)
			{
				char_1 = char_1 * char_2;
				if(1)
				{
				}
				int_1 = int_1 * int_3;
				if(1)
				{
				}
			}
			double_2 = double_2 * double_3;
			if(1)
			{
			}
		}
		char_4 = char_1 * char_3;
	}
	short_1 = v_vedisExportMemKvStorage();

	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		float float_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_5 = 1;
		double double_6 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			if(1)
			{
				int_1 = v_vedis_lib_config(int_4,unsigned_int_4);

				int_5 = int_5;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			if(1)
			{
				v_SySetInit(char_1,char_3,float_1);

				int_1 = int_3 * int_6;
				if(1)
				{
					float_2 = float_1 * float_1;
				}
			}
			unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
		}
		if(1)
		{
			int_4 = int_2 * int_5;
		}
		double_2 = double_1 * double_2;
		double_4 = double_5;
		char_1 = char_2 * char_5;
		float_1 = float_1 * float_2;
		int_2 = int_6 + int_5;
		if(1)
		{
			int_1 = int_1;
		}
		float_2 = float_1 * float_2;
		float_1 = v_vedisExportBuiltinVfs();

		double_4 = double_5 + double_6;
		if(1)
		{
		}
		if(1)
		{
			int_4 = int_4 * int_6;
		}
	}
}
int v_vedis_open( unsigned int parameter_1,char parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_4 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_5 = 1;
	char char_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char_3 = char_1 * char_2;
	short_1 = short_1 + short_1;
	if(1)
	{
		double double_1 = 1;
		if(1)
		{
		}
		double_1 = double_1 * double_2;
	}
	double_2 = double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	char_3 = char_4 * char_2;
	short_2 = short_1 * short_1;
	if(1)
	{
		double double_4 = 1;
		double_4 = double_3 * double_3;
	}
	char_2 = char_5 + char_6;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 * long_2;
	char controller4vul_979[3];
	fgets(controller4vul_979 ,3 ,stdin);
	if( strcmp( controller4vul_979, "{$") < 0)
	{
		char controller4vul_980[3];
		fgets(controller4vul_980 ,3 ,stdin);
		if( strcmp( controller4vul_980, "oh") < 0)
		{
			int int_1 = 1;
			int_1 = int_1 + int_1;
			char controller4vul_981[2];
			fgets(controller4vul_981 ,2 ,stdin);
			if( strcmp( controller4vul_981, "j") > 0)
			{
				unsigned int unsigned_int_2 = 1;
				short_2 = v_vedisInitDatabase(short_2,float_1,int_2,double_3,uni_para);

				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
				int_3 = int_2;
			}
		}
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			short_3 = short_3 + short_4;
		}
	}
	int_3 = int_4;
	long_2 = long_1;
	if(1)
	{
		int int_5 = 1;
		int_5 = int_3 * int_5;
	}
	int_7 = int_6 * int_7;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
	return int_2;
}
int main()
{
	int uni_para =495;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	short_1 = short_1;
	short_4 = short_2 * short_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 + double_2;
	if(1)
	{
		char_1 = char_1 + char_2;
	}
	int_2 = int_1 * int_1;
	char_1 = char_2 * char_2;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			double_3 = double_3;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
		}
		unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
		char controller4vul_977[3];
		fgets(controller4vul_977 ,3 ,stdin);
		if( strcmp( controller4vul_977, "8f") > 0)
		{
			short short_5 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short_5 = short_3 * short_2;
			float_1 = float_1 + float_2;
			long_1 = long_1 * long_2;
			char controller4vul_978[3];
			fgets(controller4vul_978 ,3 ,stdin);
			if( strcmp( controller4vul_978, "D ") < 0)
			{
				int_2 = v_vedis_open(unsigned_int_2,char_3,uni_para);

				unsigned_int_3 = unsigned_int_1;
			}
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned_int_5 = unsigned_int_2;
			}
		}
	}
	int_2 = int_2 * int_2;
	return int_3;
}

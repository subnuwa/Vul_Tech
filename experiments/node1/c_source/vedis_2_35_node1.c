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

int v_vedisRemoveCommand( float parameter_1,double parameter_2);
int v_vedis_delete_command( long parameter_1,unsigned int parameter_2);
char v_vedisDeleteBuiltinCommands( int parameter_1);
int v_vedis_close( double parameter_1);
long v_vedisObjContainerDestroy( unsigned int parameter_1,short parameter_2);
int v_vedisReleaseContext( double parameter_1);
short v_vedisInitContext( long parameter_1,short parameter_2,int parameter_3);
char v_vedisExec( unsigned int parameter_1);
short v_SyLexRelease( char parameter_1);
double v_SyLexTokenizeInput( char parameter_1,float parameter_2,float parameter_3,unsigned int parameter_5,float parameter_6);
long v_vedisTokenizeInput( short parameter_1,float parameter_2);
double v_SyLexInit( unsigned int parameter_1,float parameter_2,char parameter_3);
void v_vedisTokenize( char parameter_1,unsigned int parameter_2,short parameter_3);
int v_vedisProcessInput( float parameter_1,char parameter_2,int parameter_3);
int v_vedis_exec( short parameter_1,float parameter_2,int parameter_3);
int v_isBlank( float parameter_1,float parameter_2);
void v_vedis_exit();
long v_VmJsonArrayEncode( unsigned int parameter_1);
int v_vedis_value_is_string( char parameter_1);
short v_SyStrIsNumeric( long parameter_1,float parameter_2,short parameter_3,char parameter_4);
long v_vedisMemObjIsNumeric( char parameter_1);
int v_vedis_value_is_numeric( unsigned int parameter_1);
long v_MemObjBooleanValue( int parameter_1);
short v_vedisMemObjToBool( char parameter_1);
int v_vedis_value_to_bool();
int v_vedis_value_is_bool( long parameter_1);
float v_VmJsonEncode( unsigned int parameter_1,short parameter_2);
float v_vedisJsonSerialize( long parameter_1,int parameter_2);
short v_MemObjStringValue( int parameter_1,float parameter_2);
long v_vedisMemObjToString( unsigned int parameter_1);
short v_vedis_value_to_string( char parameter_1,int parameter_2);
int v_array_render( int parameter_1);
int v_vedisHashmapWalk( char parameter_1,char parameter_2);
int v_vedis_array_walk( short parameter_1,long parameter_2);
int v_vedis_value_is_array( char parameter_1);
int v_vedis_value_is_null( float parameter_1);
unsigned int v_command_result_render( long parameter_1);
long v_vedisObjectValueDestroy( char parameter_1,unsigned int parameter_2);
float v_vedisHashmapRef( float parameter_1);
void v_vedisMemObjStore( short parameter_1,char parameter_2);
int v_SyStrToReal( double parameter_1,float parameter_2,float parameter_4);
short v_MemObjRealValue( float parameter_1);
short v_vedisMemObjToReal( long parameter_1);
int v_vedisMemObjRelease( int parameter_1);
void v_vedisHashmapRelease( unsigned int parameter_1);
char v_vedisHashmapUnref( int parameter_1);
int v_vedisHashmapCount( double parameter_1);
char v_SyStrToInt64( double parameter_1,int parameter_2,long parameter_4);
char v_SyOctalStrToInt64( unsigned int parameter_1,int parameter_2,int parameter_4);
void v_SyBinaryStrToInt64( unsigned int parameter_1,double parameter_2,float parameter_4);
long v_SyHexToint();
int v_SyHexStrToInt64( double parameter_1,char parameter_2,double parameter_4);
long v_vedisTokenValueToInt64( float parameter_1);
unsigned int v_MemObjStringToInt( int parameter_1);
int v_MemObjRealToInt( double parameter_1);
unsigned int v_MemObjIntValue();
float v_vedisMemObjToInteger();
float v_vedisMemObjInitFromString( long parameter_1,short parameter_2,long parameter_3);
float v_vedisNewObjectValue( short parameter_1,char parameter_2);
int v_SyBlobNullAppend( char parameter_1);
double v_vedisPagerSetCachesize( int parameter_1,int parameter_2);
double v_vedisConfigure( long parameter_1,int parameter_2,int parameter_3);
int v_vedis_config( long parameter_1,int parameter_2,int parameter_3);
float v_SySetRelease( short parameter_1);
void v_vedisPagerClose();
char v_pager_reset_state( char parameter_1,int parameter_2);
unsigned int v_vedisPagerRollback( double parameter_1,int parameter_2);
char v_vedisBitvecDestroy();
long v_pager_commit_phase2( int parameter_1);
int v_pager_write_dirty_pages( int parameter_1,double parameter_2);
int v_page_merge_dirty( long parameter_1,int parameter_2);
void v_pager_get_dirty_pages();
int v_pager_commit_phase1( short parameter_1);
short v_vedisPagerCommit();
unsigned int v_vedisEngineRelease( double parameter_1);
char v_vedisCoreShutdown();
int v_vedis_lib_shutdown();
float v_Fatal( char parameter_1);
void v_SyBlobAppendBig32( short parameter_1,float parameter_2);
float v_SyBlobAppendBig16( double parameter_1,unsigned int parameter_2);
short v_SyBlobFormat( long parameter_1,char parameter_2,float parameter_3);
int v_vedisPagerGetKvEngine( unsigned int parameter_1);
double v_vedisTableSerialize( double parameter_1);
void v_vedisPagerisMemStore( short parameter_1);
long v_vedisOnCommit();
double v_vedisPagerSetCommitCallback( double parameter_1,int parameter_2);
int v_SySetReset( long parameter_1);
double v_SyBinHash( char parameter_1,float parameter_2);
int v_vedisFetchCommand( int parameter_1,int parameter_2);
long v_vedisInstallCommand( double parameter_1,long parameter_2,long parameter_3);
int v_vedis_register_command( float parameter_1,char parameter_2,long parameter_3,int parameter_4,int parameter_5);
unsigned int v_vedisRegisterBuiltinCommands( unsigned int parameter_1);
void v_vedisMemObjInit( double parameter_1,long parameter_2);
long v_vedisInitCursor( unsigned int parameter_1,unsigned int parameter_2);
double v_vedisKvIoErr( char parameter_1,float parameter_2);
long v_vedisKvIoPageReload( int parameter_1,int parameter_2);
float v_vedisKvIoPageUnpin( short parameter_1,unsigned int parameter_2);
long v_vedisKvIoTempPage( long parameter_1);
int v_vedisKvIoReadOnly( short parameter_1);
short v_vedisKvIoPageSize( float parameter_1);
double v_page_unref( int parameter_1);
double v_vedisKvIoPageUnRef();
int v_vedisKvIopage_ref( long parameter_1);
void v_vedisKvIoPageDontMakeHot( unsigned int parameter_1);
short v_vedisKvIoPageDontJournal( char parameter_1);
int v_vedisPagerDontWrite( float parameter_1);
short v_vedisKvIoPageDontWrite( int parameter_1);
double v_vedisBitvecSet( double parameter_1,short parameter_2);
void v_WriteInt64( float parameter_1,double parameter_2,long parameter_3);
char v_vedisBitvecTest( long parameter_1,int parameter_2);
float v_page_write( unsigned int parameter_1,unsigned int parameter_2);
short v_pager_release_page( long parameter_1,int parameter_2);
short v_pager_unlink_page( unsigned int parameter_1,float parameter_2);
int v_pager_write_hot_dirty_pages( short parameter_1,char parameter_2);
int v_page_merge_hot( unsigned int parameter_1,int parameter_2);
long v_pager_get_hot_pages( unsigned int parameter_1);
unsigned int v_WriteInt32( short parameter_1,unsigned int parameter_2,float parameter_3);
int v_vedisFinalizeJournal( double parameter_1,int parameter_2,int parameter_3);
short v_pager_dirty_commit( double parameter_1);
int v_pager_write_journal_header( int parameter_1,double parameter_2);
float v_vedisOpenJournal( float parameter_1);
char v_SyTimeFormatToDos( int parameter_1,double parameter_2);
char v_pager_write_db_header( char parameter_1);
void v_pager_page_to_dirty_list( long parameter_1,char parameter_2);
short v_pager_create_header();
int v_vedisBitvecCreate( long parameter_1,float parameter_2);
float v_vedisPagerBegin( int parameter_1,int uni_para);
float v_vedisPageWrite( short parameter_1,int uni_para);
long v_vedisKvIopageWrite(int uni_para);
float v_vedisKvIoNewPage( char parameter_1,unsigned int parameter_2);
long v_vedisKvIoPageLookup( int parameter_1,long parameter_2,float parameter_3);
long v_page_ref( char parameter_1);
void v_pager_link_page( int parameter_1,float parameter_2);
short v_pager_get_page_contents( char parameter_1,short parameter_2,int parameter_3);
short v_pager_alloc_page( long parameter_1,long parameter_2);
double v_vedisGetPageSize();
int v_vedisOsSectorSize( int parameter_1);
double v_GetSectorSize( long parameter_1);
int v_SyDosTimeFormat( int parameter_1,unsigned int parameter_2);
char v_pager_extract_header( float parameter_1,short parameter_2,long parameter_3);
int v_pager_read_db_header( int parameter_1);
long v_vedisOsCloseFree( int parameter_1,double parameter_2);
short v_pager_fetch_page( double parameter_1,long parameter_2);
char v_pager_fill_page( float parameter_1,double parameter_2);
void v_vedisOsWrite( int parameter_1,char parameter_2,short parameter_3,short parameter_4);
long v_pager_cksum( double parameter_1,short parameter_2);
short v_pager_play_back_one_page( short parameter_1,char parameter_2,double parameter_3);
void v_vedisOsTruncate( long parameter_1,double parameter_2);
short v_ReadInt64( int parameter_1,int parameter_2,unsigned int parameter_3);
char v_ReadInt32( float parameter_1,char parameter_2,char parameter_3);
double v_vedisOsRead( double parameter_1,unsigned int parameter_3,int parameter_4);
char v_pager_read_journal_header( char parameter_1,double parameter_2,int parameter_3);
double v_pager_playback( float parameter_1);
float v_vedisOsSync( long parameter_1,int parameter_2);
unsigned int v_vedisOsUnlock( char parameter_1,int parameter_2);
void v_pager_unlock_db( float parameter_1,int parameter_2);
unsigned int v_vedisOsDelete( short parameter_1,int parameter_2,int parameter_3);
float v_vedisOsFileSize( char parameter_1,unsigned int parameter_2);
char v_vedisOsCheckReservedLock( char parameter_1,int parameter_2);
unsigned int v_vedisOsAccess( int parameter_1,short parameter_2,int parameter_3,int parameter_4);
short v_pager_has_hot_journal( unsigned int parameter_1,int parameter_2);
void v_pager_journal_rollback( int parameter_1,int parameter_2);
double v_vedisOsLock( char parameter_1,int parameter_2);
void v_pager_lock_db( char parameter_1,int parameter_2);
char v_pager_wait_on_lock( unsigned int parameter_1,int parameter_2);
float v_SyBlobFormatAp( double parameter_1,char parameter_2,int parameter_3);
double v_vedisGenErrorFormat( int parameter_1,short parameter_2,unsigned int parameter_3);
short v_vedisOsOpen( double parameter_1,double parameter_2,double parameter_3,char parameter_4,char parameter_5);
int v_pager_shared_lock( char parameter_1,int uni_para);
void v_vedisPagerAcquire( char parameter_1,long parameter_2,long parameter_3,int parameter_4,int parameter_5);
long v_vedisKvIoPageGet( long parameter_1,char parameter_2,char parameter_3);
unsigned int v_pager_kv_io_init( char parameter_1,short parameter_2,short parameter_3,int uni_para);
long v_vedisGenOutofMem( unsigned int parameter_1);
char v_vedisReleaseCursor( long parameter_1,double parameter_2);
double v_pager_release_kv_engine( char parameter_1);
void v_vedisPagerRegisterKvEngine( long parameter_1,double parameter_2,int uni_para);
int v_randomByte();
float v_SyRandomness( int parameter_1,long parameter_3);
long v_SyOSUtilRandomSeed(char parameter_2);
long v_SyRandomnessInit( long parameter_1,char parameter_2);
short v_vedisGenError( char parameter_1,char parameter_2);
void v_vedisFindKVStore( char parameter_1,double parameter_2);
void v_SyStrnicmp( double parameter_1,long parameter_2,char parameter_3);
float v_vedisInMemory( char parameter_1);
char v_vedisPagerOpen( int parameter_1,float parameter_2,float parameter_3,char parameter_4,int uni_para);
void v_vedisSanityzeFlag( long parameter_1);
void v_vedisInitDatabase( long parameter_1,char parameter_2,float parameter_3,char parameter_4,int uni_para);
void v_lhCursorReset( float parameter_1);
float v_lhCursorData( char parameter_1,char parameter_2,double parameter_3);
double v_lhCursorDataLength( unsigned int parameter_1,double parameter_2);
char v_lhCursorKey( unsigned int parameter_1,long parameter_2,double parameter_3);
short v_lhCursorKeyLength( double parameter_1,int parameter_2);
double v_lhRecordRemove( short parameter_1);
long v_lhCursorDelete( int parameter_1);
float v_lhCursorPrev( float parameter_1);
void v_lhCursorNext( short parameter_1);
double v_lhCursorValid( short parameter_1);
int v_lhCursorPrevPage( short parameter_1);
long v_lhCursorLast( int parameter_1);
short v_lhCursorNextPage( float parameter_1);
long v_lhCursorFirst( double parameter_1);
unsigned int v_lhRecordLookup( char parameter_1,int parameter_2,float parameter_3,float parameter_4);
int v_lhCursorSeek( float parameter_1,int parameter_2,int parameter_3,int parameter_4);
unsigned int v_lhInitCursor( double parameter_1);
long v_lhash_kv_append( float parameter_1,char parameter_2,int parameter_3,char parameter_4,short parameter_5);
void v_lhRestorePage( char parameter_1,unsigned int parameter_2);
float v_lhRecordOverwrite( int parameter_1,float parameter_2,short parameter_3);
float v_lhMoveLocalCell( float parameter_1,short parameter_2,long parameter_3,int parameter_4);
int v_lhRecordAppend( char parameter_1,long parameter_2,char parameter_3);
void v_lhFindSibeling( char parameter_1);
char v_lhUnlinkCell( unsigned int parameter_1);
void v_lhConsumeCellData( float parameter_1,long parameter_2,long parameter_3);
long v_SyBlobReset( int parameter_1);
double v_SyBlobDup( int parameter_1,short parameter_2);
int v_lhTransferCell( short parameter_1,long parameter_2);
float v_lhPageSplit( short parameter_1,double parameter_2,char parameter_3,long parameter_4);
int v_lhSplit( short parameter_1,int parameter_2);
long v_lhRecordInstall( long parameter_1,double parameter_2,long parameter_3,int parameter_4,char parameter_5,long parameter_6);
int v_lhKeyCmp( long parameter_1,double parameter_2);
short v_lhFindCell( short parameter_1,unsigned int parameter_2,float parameter_3,short parameter_4);
short v_vedisDataConsumer( double parameter_1,char parameter_2);
unsigned int v_lhConsumeCellkey( float parameter_1,long parameter_2,double parameter_3,int parameter_6);
char v_lhParseOneCell( double parameter_1,float parameter_2,long parameter_3,int parameter_4);
long v_lhPageFreeSpace( double parameter_1);
double v_lhLoadCells( char parameter_1);
short v_lhParsePageHeader( int parameter_1);
float v_lhLoadPage( char parameter_1,char parameter_2,int parameter_3,long parameter_4,int parameter_5);
long v_lhMapWriteRecord( float parameter_1,double parameter_2,int parameter_3);
unsigned int v_lhCellWriteHeader( float parameter_1);
double v_lhCellWriteLocalPayload( double parameter_1,int parameter_2,long parameter_3,double parameter_4,unsigned int parameter_5);
char v_lhCellDiscard( short parameter_1);
long v_lhCellWriteOvflPayload( float parameter_1,float parameter_2,unsigned int parameter_3,long parameter_4);
void v_lhInstallCell();
int v_SyBlobInit( unsigned int parameter_1,unsigned int parameter_2);
char v_lhNewCell( long parameter_1,int parameter_2);
double v_lhRestoreSpace( short parameter_1,short parameter_2,long parameter_3);
char v_lhFindSlavePage( double parameter_1,int parameter_2,float parameter_3,char parameter_4);
int v_lhSlaveStore( unsigned int parameter_1,long parameter_2,float parameter_3,double parameter_4,int parameter_5,float parameter_6);
double v_lhPageDefragment( char parameter_1);
short v_SyBigEndianUnpack16( char parameter_1,int parameter_2);
short v_lhAllocateSpace( long parameter_1,float parameter_2,long parameter_3);
unsigned int v_lhStoreCell( unsigned int parameter_1,float parameter_2,unsigned int parameter_3,int parameter_4,char parameter_5,char parameter_6,int parameter_7);
int v_SyBigEndianPack16( int parameter_1,char parameter_2);
float v_lhSetEmptyPage( float parameter_1);
int v_lhNewPage( int parameter_1,float parameter_2,long parameter_3);
double v_lhAcquirePage( long parameter_1,char parameter_2);
unsigned int v_lhMapFindBucket( short parameter_1,unsigned int parameter_2);
short v_lh_record_insert( unsigned int parameter_1,double parameter_2,unsigned int parameter_3,double parameter_4,unsigned int parameter_5,int parameter_6);
void v_lhash_kv_replace( char parameter_1,short parameter_2,int parameter_3,short parameter_4,double parameter_5);
short v_MemPoolBucketAlloc( char parameter_1,double parameter_2);
double v_MemBackendPoolAlloc( int parameter_1,unsigned int parameter_2);
double v_SyMemBackendPoolAlloc( unsigned int parameter_1,int parameter_2);
unsigned int v_lhMapInstallBucket( float parameter_1,unsigned int parameter_2,char parameter_3);
void v_lhMapLoadPage( int parameter_1,short parameter_2,short parameter_3);
float v_SyBigEndianUnpack64( unsigned int parameter_1,float parameter_2);
double v_SyBigEndianUnpack32( int parameter_1,float parameter_2);
double v_lhash_read_header( double parameter_1,float parameter_2);
int v_SyBigEndianPack64( double parameter_1,double parameter_2);
int v_SyBigEndianPack32( double parameter_1,short parameter_2);
float v_lhash_write_header( long parameter_1,short parameter_2);
void v_lhash_kv_open( double parameter_1,short parameter_2);
double v_lhash_kv_config( unsigned int parameter_1,int parameter_2,short parameter_3);
int v_lhash_kv_release();
long v_MemBackendPoolFree( long parameter_1);
double v_SyMemBackendPoolFree( int parameter_1);
long v_SyBlobRelease( char parameter_1);
short v_lhash_page_release();
int v_lhash_bin_hash( unsigned int parameter_1,unsigned int parameter_2);
void v_lhash_kv_init( long parameter_1,int parameter_2);
double v_vedisExportDiskKvStorage();
char v_MemHashCursorReset( short parameter_1);
float v_MemHashCursorData( float parameter_1,double parameter_2,unsigned int parameter_3);
char v_MemHashCursorDataLength( unsigned int parameter_1,char parameter_2);
long v_MemHashCursorKey( float parameter_1,int parameter_2,float parameter_3);
long v_MemHashCursorKeyLength( double parameter_1,int parameter_2);
char v_MemHashUnlinkRecord( char parameter_1,int parameter_2);
unsigned int v_MemHashCursorDelete();
double v_MemHashCursorPrev();
void v_MemHashCursorNext( char parameter_1);
short v_MemHashCursorValid( double parameter_1);
double v_MemHashCursorLast( double parameter_1);
void v_MemHashCursorFirst( double parameter_1);
unsigned int v_MemHashCursorSeek( long parameter_1,int parameter_2,int parameter_3,int parameter_4);
long v_MemHashInitCursor( int parameter_1);
double v_MemHashAppend( short parameter_1,int parameter_2,int parameter_3,char parameter_4,unsigned int parameter_5);
long v_MemHashGrowTable( char parameter_1);
double v_MemHashLinkRecord( int parameter_1,double parameter_2);
unsigned int v_MemHashNewRecord( short parameter_1,char parameter_2,int parameter_3,char parameter_4,short parameter_5,short parameter_6);
void v_MemHashGetEntry( unsigned int parameter_1,int parameter_2,int parameter_3);
int v_MemHashReplace( double parameter_1,double parameter_2,int parameter_3,int parameter_4,int parameter_5);
float v_MemHashConfigure( double parameter_1,int parameter_2,unsigned int parameter_3);
double v_MemBackendRelease( double parameter_1);
char v_SyMemBackendRelease( unsigned int parameter_1);
long v_MemHashRelease( int parameter_1);
int v_MemHashFunc( unsigned int parameter_1,char parameter_2);
void v_SyMemBackendInitFromParent( short parameter_1,char parameter_2);
void v_MemHashInit( long parameter_1,int parameter_2);
int v_vedisExportMemKvStorage();
float v_SySetInit( unsigned int parameter_1,float parameter_2,char parameter_3);
unsigned int v_UnixUnmap(float parameter_2);
float v_UnixMmap( double parameter_1,long parameter_3);
short v_unixCurrentTime( float parameter_1,short parameter_2);
short v_unixSleep( long parameter_1,int parameter_2);
short v_SyMemBackendDup( char parameter_1,long parameter_2,double parameter_3,int uni_para);
double v_BlobPrepareGrow( float parameter_1,short parameter_2,int uni_para);
short v_SyBlobAppend( int parameter_1,long parameter_2,long parameter_3,int uni_para);
long v_FormatConsumer( double parameter_1,short parameter_2,int uni_para);
short v_getdigit( unsigned int parameter_1,int parameter_2);
double v_InternFormat( unsigned int parameter_1,char parameter_3,int parameter_4);
char v_FormatMount( float parameter_1,float parameter_3,float parameter_5,short parameter_6,char parameter_7,int uni_para);
double v_SyBlobInitFromBuf( float parameter_1,double parameter_3);
double v_SyBufferFormat( char parameter_1,float parameter_2,double parameter_3,int parameter_4,int uni_para);
double v_unixFullPathname( char parameter_1,char parameter_2,int parameter_3,char parameter_4,int uni_para);
void v_unixAccess( float parameter_1,char parameter_2,int parameter_3,int parameter_4);
long v_unixDelete( int parameter_1,double parameter_2,int parameter_3);
double v_MemBackendFree( float parameter_1);
unsigned int v_SyMemBackendFree( float parameter_1);
long v_vedis_free();
long v_SyMemcpy( int parameter_1,unsigned int parameter_3);
long v_SyMemcmp( float parameter_1,unsigned int parameter_2,char parameter_3);
long v_findInodeInfo( char parameter_1,long parameter_2);
void v_fillInUnixFile( unsigned int parameter_1,int parameter_2,int parameter_3,short parameter_4,short parameter_5,int parameter_6,int parameter_7);
double v_SyStrlen( short parameter_1);
unsigned int v_Systrcpy( char parameter_1,int parameter_2,char parameter_3,double parameter_4);
long v_openDirectory( float parameter_1,int parameter_2);
float v_findCreateFileMode( int parameter_1,int parameter_2,unsigned int parameter_3);
long v_SyMemBackendAlloc( float parameter_1,char parameter_2,int uni_para);
int v_vedisExportMemBackend();
void v_vedis_malloc( double parameter_1);
float v_unixLeaveMutex();
char v_unixEnterMutex();
long v_findReusableFd( int parameter_1,int parameter_2);
long v_unixOpen( short parameter_1,float parameter_2,short parameter_3,float parameter_4);
int v_vedisExportBuiltinVfs(int uni_para);
float v_SyMemBackendInitFromOthers( float parameter_1,int parameter_2,unsigned int parameter_3);
short v_SyZero(int parameter_2);
char v_SyMemBackendInit( unsigned int parameter_1,double parameter_2);
void v_MemBackendAlloc( unsigned int parameter_1,short parameter_2);
int v_MemBackendRealloc( int parameter_1,unsigned int parameter_3);
unsigned int v_SyMemBackendRealloc( short parameter_1,char parameter_3);
char v_SySetPut( char parameter_1,int parameter_2);
char v_vedisCoreConfigure( int parameter_1,unsigned int parameter_2);
int v_vedis_lib_config( int parameter_1,char parameter_2);
float v_vedisCoreInitialize();
int v_vedis_open( short parameter_1,double parameter_2,int uni_para);
int v_vedisRemoveCommand( float parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	char_1 = char_2;
	int_1 = int_1 + int_1;
	short_1 = short_1 + short_2;
	char_4 = char_3 + char_2;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "1/") > 0)
	{
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		double_1 = v_SyStrlen(short_2);

		float_2 = float_1 + float_1;
	}
	if(1)
	{
		char char_5 = 1;
		int_2 = v_vedisFetchCommand(int_1,int_3);

		unsigned_int_1 = v_SyMemBackendFree(float_1);

		int_3 = int_2 * int_2;
		int_2 = int_1 * int_3;
		char_5 = char_1 * char_3;
	}
	float_2 = float_1 * float_1;
	int_2 = int_3 + int_1;
	double_2 = double_1 * double_1;
	return int_1;
}
int v_vedis_delete_command( long parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int_1 = v_vedisRemoveCommand(float_1,double_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
	}
	double_3 = double_2 + double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	return int_2;
}
char v_vedisDeleteBuiltinCommands( int parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int_2 = int_1 + int_2;
	}
	return char_1;
	int_1 = v_vedis_delete_command(long_1,unsigned_int_1);

}
int v_vedis_close( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "|e") > 0)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	int_3 = int_1 * int_2;
	if(1)
	{
		char_2 = v_vedisDeleteBuiltinCommands(int_3);

		unsigned_int_1 = v_vedisEngineRelease(double_1);

		int_2 = int_1 * int_2;
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_2 + double_3;
	}
	double_1 = v_SyMemBackendPoolFree(int_2);

	long_1 = long_2;
	double_3 = double_1 + double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	float_3 = float_1 * float_2;
	return int_4;
}
long v_vedisObjContainerDestroy( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_2;
	double_2 = double_3 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		short short_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		float_1 = v_SySetRelease(short_1);

		short_1 = short_2;
	}
	long_1 = v_vedisObjectValueDestroy(char_1,unsigned_int_2);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	return long_1;
}
int v_vedisReleaseContext( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
		long long_2 = 1;
		int_1 = v_vedisMemObjRelease(int_2);

		long_2 = long_1 + long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_1 = 1;
			double double_4 = 1;
			if(1)
			{
				long_2 = long_1 * long_2;
			}
			short_1 = short_1 * short_2;
			long_1 = v_SyBlobRelease(char_1);

			double_3 = double_4 + double_3;
		}
		int_3 = int_2 + int_2;
	}
	double_2 = v_SyMemBackendPoolFree(int_3);

	float_1 = v_SySetRelease(short_2);

	short_2 = short_2 + short_2;
	return int_3;
}
short v_vedisInitContext( long parameter_1,short parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_1;
	float_1 = v_SySetInit(unsigned_int_1,float_1,char_1);

	double_2 = double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_1 = v_SyBlobInit(unsigned_int_1,unsigned_int_1);

	long_2 = long_1 * long_2;
	int_1 = v_vedisMemObjRelease(int_2);

	double_1 = double_1;
	double_4 = double_3 + double_1;
	return short_1;
}
char v_vedisExec( unsigned int parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	char char_4 = 1;
	int int_6 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_5 = 1;
	float_1 = v_vedisNewObjectValue(short_1,char_1);

	float_1 = float_1 * float_1;
	double_3 = double_1 * double_2;
	double_5 = double_4 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = v_vedisFetchCommand(int_2,int_1);

	short_2 = v_vedisInitContext(long_1,short_3,int_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
			double_1 = double_4 * double_6;
		}
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "[V") > 0)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	int_3 = int_3 + int_4;
	int_1 = int_2 * int_1;
	double_6 = v_vedisGenErrorFormat(int_5,short_2,unsigned_int_2);

	char_2 = v_SySetPut(char_1,int_4);

	int_5 = int_3;
	if(1)
	{
		char_1 = char_1 + char_3;
	}
	short_4 = short_4 * short_4;
	if(1)
	{
		int_2 = int_2;
	}
	float_1 = v_SySetInit(unsigned_int_4,float_2,char_3);

	long_1 = v_vedisObjContainerDestroy(unsigned_int_3,short_1);

	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	if(1)
	{
		short_2 = v_vedisGenError(char_3,char_4);

		int_1 = int_1 * int_2;
	}
	double_1 = double_2 * double_4;
	if(1)
	{
		double_6 = double_3 * double_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			double double_7 = 1;
			double_4 = double_2 + double_7;
		}
	}
	int_6 = v_vedisReleaseContext(double_8);

	unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	return char_2;
}
short v_SyLexRelease( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
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
	}
	return short_1;
}
double v_SyLexTokenizeInput( char parameter_1,float parameter_2,float parameter_3,unsigned int parameter_5,float parameter_6)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_7 = 1;
	char_1 = char_1;
	char_1 = char_2 + char_1;
	double_2 = double_1 * double_2;
	short_1 = short_1 * short_2;
	if(1)
	{
		if(1)
		{
		}
		double_3 = double_3 + double_3;
	}
	char_2 = char_1 * char_3;
	char_2 = v_SySetPut(char_3,int_1);

	long_1 = v_SyMemcmp(float_1,unsigned_int_1,char_3);

	short_3 = short_3 * short_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			double_4 = double_3;
		}
		long_2 = long_1 * long_2;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "(>") < 0)
		{
			char char_4 = 1;
			if(1)
			{
			}
			char_1 = char_4 + char_4;
		}
		if(1)
		{
			int int_2 = 1;
			int_2 = int_1 + int_1;
		}
		if(1)
		{
			float_2 = float_1 * float_1;
			if(1)
			{
				double_5 = double_3 + double_3;
			}
		}
		if(1)
		{
			short short_5 = 1;
			short_5 = short_3 + short_4;
		}
	}
	if(1)
	{
		double double_6 = 1;
		float_2 = float_1 + float_1;
		if(1)
		{
			double_5 = double_1 + double_3;
		}
		double_6 = double_2 * double_4;
	}
	return double_7;
}
long v_vedisTokenizeInput( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long_3 = long_1 * long_2;
		if(1)
		{
			double_3 = double_2;
			long_1 = long_2 + long_4;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			char char_1 = 1;
			unsigned_int_3 = unsigned_int_2;
			char_1 = char_1 * char_1;
		}
		int_3 = int_1 * int_2;
	}
	float_2 = float_1 + float_2;
	if(1)
	{
		double double_4 = 1;
		double_3 = double_4 * double_1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	}
	int_1 = int_1 + int_1;
	if(1)
	{
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		double_5 = double_2 + double_5;
	}
	unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_3 = float_4;
		float_1 = float_4;
	}
	unsigned_int_5 = unsigned_int_1;
	return long_4;
}
double v_SyLexInit( unsigned int parameter_1,float parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
		char char_1 = 1;
		if(1)
		{
		}
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		long long_1 = 1;
		if(1)
		{
		}
		long_1 = long_2;
	}
	long_3 = long_4;
	long_4 = long_2 + long_3;
	char_2 = char_3;
	double_3 = double_3 * double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2;
	int_2 = int_1 * int_2;
	return double_3;
}
void v_vedisTokenize( char parameter_1,unsigned int parameter_2,short parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	long_1 = v_vedisTokenizeInput(short_1,float_1);

	float_2 = float_2 * float_2;
	double_1 = v_SyLexInit(unsigned_int_1,float_2,char_1);

	short_1 = v_SyLexRelease(char_1);

	char_3 = char_2 * char_1;
	int_1 = int_1;
	if(1)
	{
	}
	int_2 = int_2 * int_1;
	double_2 = v_SyLexTokenizeInput(char_1,float_2,float_1,unsigned_int_2,float_3);

	double_2 = double_1;
}
int v_vedisProcessInput( float parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_1 = 1;
	short short_2 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long_1 = long_1 + long_2;
	float_1 = v_SySetInit(unsigned_int_1,float_2,char_1);

	float_3 = float_2 * float_3;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	char_1 = char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	char_1 = char_2 + char_3;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_2;
	}
	char_3 = char_4 * char_3;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	double_2 = double_1 * double_3;
	if(1)
	{
		char_1 = char_1 * char_4;
		int_1 = int_1 + int_2;
	}
	int_2 = int_1 * int_3;
	v_vedisTokenize(char_1,unsigned_int_1,short_2);

	int_4 = int_1 * int_2;
	if(1)
	{
		float float_4 = 1;
		char_3 = char_3;
		double_3 = double_2;
		float_3 = v_SySetRelease(short_2);

		float_4 = float_2 * float_2;
	}
	char_2 = v_vedisExec(unsigned_int_1);

	float_1 = float_2;
	return int_2;
}
int v_vedis_exec( short parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int_1 = v_vedisProcessInput(float_1,char_1,int_1);

	int_1 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
	}
	double_1 = v_SyStrlen(short_1);

	char_1 = char_2 + char_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_3 + double_4;
	}
	return int_1;
}
int v_isBlank( float parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_3 = int_1 + int_2;
	char_2 = char_1 * char_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
	}
	short_2 = short_1 * short_2;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
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
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_2;
	int_1 = v_vedis_lib_shutdown();

}
long v_VmJsonArrayEncode( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "L") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	int_1 = int_1 * int_3;
	float_1 = v_VmJsonEncode(unsigned_int_1,short_1);

	double_1 = double_1;
	int_3 = int_1 + int_1;
	float_1 = float_1 + float_1;
	return long_1;
	short_1 = v_SyBlobAppend(int_3,long_1,long_1,-1 );

}
int v_vedis_value_is_string( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_1 = float_2;
	return int_1;
}
short v_SyStrIsNumeric( long parameter_1,float parameter_2,short parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	double_1 = double_1;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2 + double_2;
	}
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short_1 = short_1 * short_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_1 + char_2;
		}
		unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
		float_2 = float_1 + float_2;
	}
	return short_2;
}
long v_vedisMemObjIsNumeric( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_4 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float_1 = float_1 * float_1;
		float_3 = float_2 + float_3;
		int_3 = int_1 * int_2;
		if(1)
		{
		}
		long_3 = long_1 + long_2;
		double_2 = double_1 * double_2;
	}
	return long_1;
	short_1 = v_SyStrIsNumeric(long_2,float_4,short_1,char_1);

}
int v_vedis_value_is_numeric( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long_1 = long_1 + long_1;
	long_2 = v_vedisMemObjIsNumeric(char_1);

	unsigned_int_1 = unsigned_int_2;
	return int_1;
}
long v_MemObjBooleanValue( int parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	if(1)
	{
	}
	char_1 = v_vedisHashmapUnref(int_1);

	int_1 = int_1 * int_2;
	int_1 = v_vedisHashmapCount(double_1);

	float_1 = float_1;
	char_1 = char_2 * char_1;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
		v_SyStrnicmp(double_1,long_1,char_3);

		int_1 = int_2 + int_1;
	}
	return long_1;
}
short v_vedisMemObjToBool( char parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long_1 = v_SyBlobRelease(char_1);

		double_1 = double_1 * double_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	return short_1;
	long_1 = v_MemObjBooleanValue(int_1);

}
int v_vedis_value_to_bool()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = v_vedisMemObjToBool(char_1);

	int_1 = int_1 * int_1;
	if(1)
	{
	}
	return int_1;
}
int v_vedis_value_is_bool( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	return int_1;
}
float v_VmJsonEncode( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_7 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	short short_4 = 1;
	float float_4 = 1;
	int_1 = v_vedis_value_is_null(float_1);

	short_1 = short_1 + short_1;
	int_2 = v_vedis_array_walk(short_1,long_1);

	long_1 = long_1 + long_2;
	if(1)
	{
		float_2 = float_2 * float_3;
	}
	if(1)
	{
		int_1 = int_1 + int_3;
		double_1 = double_1 * double_2;
		int_2 = v_vedis_value_is_array(char_1);

		int_1 = int_4 + int_5;
		int_5 = int_5 + int_5;
	}
	if(1)
	{
		int_6 = v_vedis_value_is_numeric(unsigned_int_1);

		int_6 = int_3 + int_4;
		unsigned_int_2 = unsigned_int_1;
		int_7 = v_vedis_value_is_string(char_2);

		short_3 = short_2 * short_2;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		short short_5 = 1;
		int int_8 = 1;
		long long_4 = 1;
		short_3 = v_SyBlobAppend(int_1,long_1,long_3,-1 );

		double_2 = double_3 * double_4;
		int_2 = v_vedis_value_to_bool();

		short_2 = short_4 + short_5;
		float_1 = float_1 * float_2;
		int_8 = int_4 * int_8;
		long_4 = long_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_5 = 1;
			unsigned int unsigned_int_3 = 1;
			if(1)
			{
				float_1 = float_3 * float_1;
			}
			int_7 = v_vedis_value_is_bool(long_3);

			int_3 = int_4 + int_1;
			double_1 = double_4 + double_5;
			if(1)
			{
				short_4 = short_2 + short_4;
			}
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		}
		long_2 = long_2;
	}
	if(1)
	{
		int_1 = int_1 * int_1;
		int_1 = int_3 + int_5;
		float_2 = float_1 + float_2;
		long_3 = v_VmJsonArrayEncode(unsigned_int_2);

		short_2 = short_4 + short_2;
	}
	if(1)
	{
		int_5 = int_7 * int_5;
	}
	return float_4;
	short_2 = v_vedis_value_to_string(char_2,int_6);

}
float v_vedisJsonSerialize( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double_1 = double_2;
	int_2 = int_1 + int_1;
	double_2 = double_2 * double_3;
	char_1 = char_1 + char_2;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return float_1;
	float_1 = v_VmJsonEncode(unsigned_int_1,short_1);

}
short v_MemObjStringValue( int parameter_1,float parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int int_2 = 1;
	short short_2 = 1;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			double double_2 = 1;
			float_1 = v_vedisJsonSerialize(long_1,int_1);

			double_1 = double_1 + double_2;
		}
		if(1)
		{
			char_2 = char_1 * char_2;
		}
	}
	if(1)
	{
		float float_3 = 1;
		char_2 = char_3 + char_3;
		short_1 = v_SyBlobFormat(long_1,char_1,float_2);

		short_1 = v_SyBlobAppend(int_1,long_1,long_2,-1 );

		char_3 = v_vedisHashmapUnref(int_2);

		float_3 = float_3 + float_1;
	}
	return short_2;
}
long v_vedisMemObjToString( unsigned int parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	float float_3 = 1;
	long_1 = v_SyBlobReset(int_1);

	int_3 = int_1 * int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		float float_4 = 1;
		float_2 = float_1 * float_1;
		short_1 = short_2;
		short_2 = v_MemObjStringValue(int_1,float_3);

		float_4 = float_3;
	}
	return long_1;
}
short v_vedis_value_to_string( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		int_1 = v_SyBlobNullAppend(char_1);

		double_1 = double_1 * double_1;
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_2 = double_2 + double_3;
		}
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long_2 = long_1 * long_2;
		}
	}
	return short_1;
	long_2 = v_vedisMemObjToString(unsigned_int_3);

}
int v_array_render( int parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = v_vedis_value_is_null(float_1);

	float_3 = float_2 + float_1;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_2 * long_3;
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short_1 = v_vedis_value_to_string(char_1,int_2);

		double_2 = double_1 * double_2;
	}
	int_1 = int_1 * int_1;
	return int_2;
}
int v_vedisHashmapWalk( char parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_5 = 1;
	int_1 = int_1 * int_2;
	int_1 = int_1 + int_3;
	double_2 = double_1 * double_2;
	float_1 = float_1 * float_2;
	int_1 = int_1 * int_2;
	short_1 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			int_4 = int_3;
		}
		int_2 = int_4 + int_1;
		if(1)
		{
		}
		short_3 = short_2 + short_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	return int_5;
}
int v_vedis_array_walk( short parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = v_vedisHashmapWalk(char_1,char_1);

	char_3 = char_2 * char_1;
	double_2 = double_2;
	return int_2;
}
int v_vedis_value_is_array( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_1;
	return int_3;
}
int v_vedis_value_is_null( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_2;
	return int_3;
}
unsigned int v_command_result_render( long parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	short_1 = v_vedis_value_to_string(char_1,int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		int_2 = v_vedis_value_is_array(char_1);

		double_1 = double_1 * double_1;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_2 = double_2 + double_3;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		int_2 = v_array_render(int_3);

		int_4 = int_1 * int_2;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		int_4 = v_vedis_array_walk(short_1,long_1);

		long_3 = long_1 + long_2;
	}
	return unsigned_int_4;
	int_2 = v_vedis_value_is_null(float_1);

}
long v_vedisObjectValueDestroy( char parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double_1 = v_SyMemBackendPoolFree(int_1);

	char_1 = char_2;
	int_1 = v_vedisMemObjRelease(int_2);

	int_2 = int_1 + int_2;
	return long_1;
}
float v_vedisHashmapRef( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_2;
	return float_1;
}
void v_vedisMemObjStore( short parameter_1,char parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long_1 = v_SyBlobRelease(char_1);

	long_3 = long_2 + long_1;
	long_4 = v_SyBlobReset(int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	int_2 = int_2 * int_2;
	float_1 = float_1 + float_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		float_1 = v_vedisHashmapRef(float_1);

		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		double_2 = double_2 + double_2;
	}
	if(1)
	{
		if(1)
		{
			long_3 = v_SyMemcpy(int_2,unsigned_int_4);

			char_2 = v_vedisHashmapUnref(int_1);

			int_2 = int_2 + int_3;
		}
	}
	if(1)
	{
		double_2 = double_1;
	}
	double_2 = v_SyBlobDup(int_3,short_1);

}
int v_SyStrToReal( double parameter_1,float parameter_2,float parameter_4)
{
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
short v_MemObjRealValue( float parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int_1 = v_vedisHashmapCount(double_1);

	int_2 = int_1;
	return short_1;
	unsigned_int_1 = v_MemObjStringToInt(int_1);

	int_3 = v_SyStrToReal(double_2,float_1,float_2);

	char_1 = v_vedisHashmapUnref(int_2);

}
short v_vedisMemObjToReal( long parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		short_1 = v_MemObjRealValue(float_1);

		int_1 = int_1 + int_1;
		double_2 = double_1 + double_1;
		long_1 = v_SyBlobRelease(char_1);

		char_2 = char_1;
	}
	return short_1;
}
int v_vedisMemObjRelease( int parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	if(1)
	{
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		if(1)
		{
			float float_1 = 1;
			char_1 = v_vedisHashmapUnref(int_1);

			float_2 = float_1 + float_2;
		}
		double_2 = double_1 * double_1;
		float_4 = float_2 + float_3;
	}
	return int_1;
	long_1 = v_SyBlobRelease(char_2);

}
void v_vedisHashmapRelease( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_2;
	int_2 = int_2 * int_2;
	double_1 = v_SyMemBackendPoolFree(int_1);

	unsigned_int_1 = v_SyMemBackendFree(float_1);

	double_1 = double_2 * double_1;
	double_2 = double_1 * double_1;
	double_3 = double_3 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1;
		}
		double_4 = double_2 * double_4;
		int_1 = v_vedisMemObjRelease(int_3);

		double_5 = double_3 + double_4;
		if(1)
		{
			long_1 = long_1;
		}
		double_2 = double_3 + double_4;
		double_6 = double_1 + double_1;
		long_1 = v_SyBlobRelease(char_1);

		int_2 = int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	char_2 = char_2;
}
char v_vedisHashmapUnref( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		v_vedisHashmapRelease(unsigned_int_1);

		int_1 = int_1 + int_2;
	}
	return char_1;
}
int v_vedisHashmapCount( double parameter_1)
{
	int int_1 = 1;
	return int_1;
}
char v_SyStrToInt64( double parameter_1,int parameter_2,long parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1;
	long_1 = v_SyMemcmp(float_1,unsigned_int_1,char_1);

	int_1 = int_2 * int_2;
	double_1 = double_2;
	return char_1;
}
char v_SyOctalStrToInt64( unsigned int parameter_1,int parameter_2,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_2;
	long_1 = long_2;
	long_3 = long_2 + long_3;
	int_1 = int_2 * int_1;
	return char_1;
}
void v_SyBinaryStrToInt64( unsigned int parameter_1,double parameter_2,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
}
long v_SyHexToint()
{
	long long_1 = 1;
	return long_1;
}
int v_SyHexStrToInt64( double parameter_1,char parameter_2,double parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
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
			char char_1 = 1;
			char_3 = char_1 * char_2;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			double_1 = double_1 + double_1;
		}
	}
	long_1 = v_SyHexToint();

	char_2 = char_3;
	int_2 = int_2 * int_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double double_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double_2 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		long long_2 = 1;
		long long_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long_2 = long_2 * long_3;
		short_4 = short_2 * short_3;
	}
	float_1 = float_1 + float_2;
	return int_2;
}
long v_vedisTokenValueToInt64( float parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = v_SyHexStrToInt64(double_1,char_1,double_2);

	long_2 = long_1 + long_1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		float_1 = float_1 + float_1;
		if(1)
		{
		}
		char_2 = v_SyStrToInt64(double_3,int_2,long_3);

		double_3 = double_3 + double_4;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			v_SyBinaryStrToInt64(unsigned_int_1,double_5,float_2);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			char_2 = v_SyOctalStrToInt64(unsigned_int_3,int_2,int_1);

			unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_4 * unsigned_int_4;
		}
	}
	if(1)
	{
		int_2 = int_2 * int_2;
	}
	return long_1;
}
unsigned int v_MemObjStringToInt( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double_3 = double_1 + double_2;
	double_3 = double_2 + double_3;
	return unsigned_int_1;
	long_1 = v_vedisTokenValueToInt64(float_1);

}
int v_MemObjRealToInt( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_1;
	float_1 = float_1 + float_1;
	double_3 = double_2 * double_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	float_3 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_1;
	short_1 = short_2;
	long_2 = long_1 + long_2;
	long_3 = long_3 + long_2;
	double_4 = double_5;
	float_1 = float_2 * float_1;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	double_5 = double_2;
	return int_1;
}
unsigned int v_MemObjIntValue()
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v_MemObjRealToInt(double_1);

	int_2 = int_2 * int_1;
	int_1 = int_2;
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
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_2 = 1;
		char_1 = v_vedisHashmapUnref(int_3);

		short_3 = short_1 + short_2;
		int_2 = v_vedisHashmapCount(double_1);

		long_1 = long_1 + long_2;
		char_2 = char_1 * char_1;
	}
	return unsigned_int_1;
	unsigned_int_1 = v_MemObjStringToInt(int_2);

}
float v_vedisMemObjToInteger()
{
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long_3 = long_1 + long_2;
		long_2 = v_SyBlobRelease(char_1);

		int_1 = int_1 * int_1;
		unsigned_int_1 = v_MemObjIntValue();

		int_2 = int_3;
	}
	return float_1;
}
float v_vedisMemObjInitFromString( long parameter_1,short parameter_2,long parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	long long_1 = 1;
	short_1 = short_2;
	int_1 = v_SyBlobInit(unsigned_int_1,unsigned_int_1);

	char_1 = char_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		short_3 = v_SyZero(int_2);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	float_2 = float_1 * float_1;
	return float_1;
	short_4 = v_SyBlobAppend(int_1,long_1,long_1,-1 );

}
float v_vedisNewObjectValue( short parameter_1,char parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	float float_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	float_1 = v_vedisMemObjInitFromString(long_1,short_1,long_1);

	short_2 = short_1 + short_2;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		short short_3 = 1;
		double_1 = v_SyMemBackendPoolAlloc(unsigned_int_1,int_2);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		v_vedisMemObjInit(double_1,long_2);

		long_2 = long_2;
		if(1)
		{
			float_2 = v_vedisMemObjToInteger();

			short_1 = short_3 * short_3;
		}
		if(1)
		{
			short_3 = short_3 * short_2;
		}
	}
	if(1)
	{
		short_1 = v_vedisMemObjToReal(long_3);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return float_3;
}
int v_SyBlobNullAppend( char parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1;
	short_1 = v_SyBlobAppend(int_1,long_1,long_2,-1 );

	float_1 = float_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	return int_1;
}
double v_vedisPagerSetCachesize( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return double_1;
}
double v_vedisConfigure( long parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_5 = 1;
	double double_6 = 1;
	float float_7 = 1;
	float float_8 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_1 * double_1;
	int_2 = int_1 * int_1;
	char_1 = char_1 * char_1;
	int_1 = v_SyBlobNullAppend(char_1);

	char_2 = char_1 * char_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		int_2 = int_2;
		int_2 = int_2 + int_3;
	}
	float_5 = float_3 + float_4;
	short_1 = short_1 * short_1;
	if(1)
	{
		if(1)
		{
			int_3 = int_2;
		}
		if(1)
		{
			short_1 = short_2;
		}
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_4 + int_4;
	if(1)
	{
		long long_1 = 1;
		double_1 = double_1;
		long_2 = long_1 + long_1;
		double_1 = v_vedisPagerSetCachesize(int_3,int_2);

		double_3 = double_2 + double_3;
	}
	float_6 = float_3 + float_1;
	int_4 = v_vedisPagerGetKvEngine(unsigned_int_2);

	char_3 = char_3 * char_1;
	if(1)
	{
		char_3 = char_2 * char_2;
		if(1)
		{
			double_2 = double_2;
			int_2 = int_2 * int_4;
			char_4 = char_2 * char_2;
		}
		double_1 = double_1 + double_1;
		double_4 = double_4 * double_5;
	}
	char_5 = char_4 + char_2;
	double_4 = double_6 * double_2;
	if(1)
	{
		v_vedisMemObjStore(short_2,char_3);

		float_5 = float_6;
	}
	double_3 = double_1 + double_1;
	float_8 = float_2 * float_7;
	int_4 = int_1 * int_3;
	short_1 = short_2 + short_1;
	double_8 = double_2 + double_7;
	double_6 = double_1 * double_3;
	unsigned_int_2 = unsigned_int_3;
	double_5 = double_2 + double_7;
	return double_1;
	float_5 = v_vedisNewObjectValue(short_1,char_5);

	long_2 = v_vedisObjectValueDestroy(char_4,unsigned_int_3);

}
int v_vedis_config( long parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_3 + double_1;
	}
	if(1)
	{
	}
	double_4 = double_3 * double_1;
	int_2 = int_1 + int_1;
	double_5 = double_5 + double_5;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double_5 = v_vedisConfigure(long_1,int_1,int_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	return int_1;
}
float v_SySetRelease( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	double double_1 = 1;
	long_2 = long_1 * long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "D") < 0)
	{
		float_2 = float_1 + float_2;
	}
	unsigned_int_1 = v_SyMemBackendFree(float_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_2 * float_3;
	double_1 = double_1 + double_1;
	return float_3;
}
void v_vedisPagerClose()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_2;
		if(1)
		{
			char_1 = char_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		v_pager_unlock_db(float_1,int_1);

		float_2 = float_1 + float_2;
		int_1 = v_vedisExportBuiltinVfs(-1 );

		int_4 = int_3 + int_1;
	}
	if(1)
	{
		float float_3 = 1;
		long_1 = v_vedisOsCloseFree(int_2,double_3);

		float_2 = float_1 * float_3;
		double_2 = v_pager_release_kv_engine(char_2);

		char_1 = char_3 * char_1;
	}
	char_3 = v_vedisBitvecDestroy();

}
char v_pager_reset_state( char parameter_1,int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_6 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_4 = 1;
	int int_7 = 1;
	char char_4 = 1;
	double double_4 = 1;
	v_pager_unlock_db(float_1,int_1);

	short_1 = short_1;
	int_1 = int_2 + int_2;
	short_3 = short_2 + short_1;
	int_3 = int_3 * int_2;
	long_3 = long_1 + long_2;
	int_2 = int_4 + int_2;
	int_4 = int_2;
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
			int int_5 = 1;
			int_3 = int_5;
		}
		char_1 = v_vedisBitvecDestroy();

		float_1 = float_2 + float_2;
		double_1 = double_1 + double_1;
		double_2 = double_1 + double_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	int_6 = int_3;
	double_3 = double_1;
	char_3 = char_2 * char_1;
	float_2 = float_1 + float_1;
	float_1 = float_1 * float_1;
	if(1)
	{
		short_4 = short_3 * short_3;
	}
	if(1)
	{
		char char_5 = 1;
		int_7 = int_7 * int_4;
		char_5 = char_4 + char_2;
	}
	char_4 = char_3 + char_4;
	double_4 = double_4 + double_1;
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		double_3 = double_5 + double_4;
		if(1)
		{
			float float_3 = 1;
			float_3 = float_1 * float_1;
		}
		double_6 = double_1 * double_5;
		short_4 = v_pager_release_page(long_1,int_4);

		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		if(1)
		{
			long long_4 = 1;
			short_3 = v_SyZero(int_7);

			long_4 = long_1 + long_2;
			if(1)
			{
			}
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3;
			if(1)
			{
			}
		}
	}
	return char_1;
}
unsigned int v_vedisPagerRollback( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double double_3 = 1;
	short_1 = v_vedisGenError(char_1,char_2);

	int_1 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		v_pager_journal_rollback(int_1,int_2);

		short_2 = short_1 + short_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_4 = 1;
		if(1)
		{
			float float_2 = 1;
			if(1)
			{
				short short_3 = 1;
				short_3 = short_1 * short_3;
			}
			float_2 = float_1 * float_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				char_2 = char_2 + char_3;
				if(1)
				{
					short short_4 = 1;
					float_1 = v_vedisOsSync(long_1,int_3);

					char_2 = v_pager_reset_state(char_3,int_1);

					short_4 = short_4 * short_4;
				}
			}
		}
		unsigned_int_1 = v_vedisOsDelete(short_2,int_2,int_1);

		double_1 = double_1 * double_2;
		v_pager_unlock_db(float_3,int_2);

		char_4 = char_2 + char_3;
		if(1)
		{
			char char_5 = 1;
			long_1 = v_vedisOsCloseFree(int_1,double_3);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			char_2 = char_5;
		}
	}
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_2 = unsigned_int_2;
		double_4 = double_5;
	}
	return unsigned_int_2;
}
char v_vedisBitvecDestroy()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	short short_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_8 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_3 = 1;
		if(1)
		{
			float_1 = float_1 + float_2;
		}
		unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
		char_1 = char_2;
		unsigned_int_1 = v_SyMemBackendFree(float_2);

		char_2 = char_1;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
		}
		float_1 = float_3;
		int_1 = int_1 + int_1;
		double_3 = double_3;
		double_3 = double_3 * double_3;
		if(1)
		{
			double_3 = double_1 * double_1;
		}
		float_4 = float_3 * float_3;
		unsigned_int_7 = unsigned_int_6 + unsigned_int_1;
		double_3 = v_SyMemBackendPoolFree(int_1);

		double_2 = double_4 * double_2;
		unsigned_int_1 = unsigned_int_8 + unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_9 = 1;
			unsigned_int_6 = unsigned_int_3 + unsigned_int_9;
		}
		int_3 = int_1 + int_2;
		float_5 = float_2 * float_2;
		short_3 = short_1 + short_2;
		char_3 = char_3 * char_4;
	}
	short_3 = short_3;
	long_1 = long_1;
	return char_4;
}
long v_pager_commit_phase2( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			long long_1 = 1;
			short short_2 = 1;
			if(1)
			{
				long_1 = long_1 * long_1;
			}
			unsigned_int_1 = v_vedisOsDelete(short_1,int_1,int_2);

			short_2 = short_2 * short_1;
			char_1 = v_vedisBitvecDestroy();

			long_1 = long_1;
			if(1)
			{
				short short_3 = 1;
				double double_1 = 1;
				double double_2 = 1;
				short_2 = short_1 + short_3;
				double_1 = double_1 * double_2;
			}
		}
	}
	return long_2;
	v_pager_unlock_db(float_1,int_3);

}
int v_pager_write_dirty_pages( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float_1 = float_1 * float_2;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		double_2 = double_1 + double_2;
		if(1)
		{
			short_1 = v_pager_unlink_page(unsigned_int_1,float_2);

			int_2 = int_1 + int_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
		}
		v_vedisOsWrite(int_1,char_1,short_1,short_2);

		unsigned_int_3 = unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_4;
			long_1 = long_2;
		}
		double_1 = double_1;
	}
	long_1 = long_2 * long_2;
	short_3 = v_pager_release_page(long_3,int_2);

	unsigned_int_2 = unsigned_int_5;
	char_3 = char_1 + char_2;
	return int_1;
}
int v_page_merge_dirty( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_2 = double_1 + double_2;
	char_2 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_2;
	float_2 = float_1 * float_1;
	float_4 = float_2 + float_3;
	double_4 = double_2 + double_3;
	return int_1;
}
void v_pager_get_dirty_pages()
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 * float_1;
		}
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "az") < 0)
		{
			short_1 = v_SyZero(int_1);

			int_2 = int_1;
		}
	}
	int_1 = v_page_merge_dirty(long_1,int_2);

}
int v_pager_commit_phase1( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char char_3 = 1;
	double double_6 = 1;
	int int_5 = 1;
	float float_3 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_1 * double_2;
	v_pager_get_dirty_pages();

	long_1 = long_2;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			int_3 = v_vedisFinalizeJournal(double_3,int_1,int_3);

			int_3 = int_2 + int_1;
		}
		short_1 = short_2;
	}
	if(1)
	{
	}
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	v_vedisOsTruncate(long_3,double_3);

	double_5 = double_4 * double_3;
	if(1)
	{
		int_3 = int_2 * int_3;
		if(1)
		{
			char_1 = char_1 * char_2;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	long_1 = long_1 + long_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_4;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		char_2 = v_pager_wait_on_lock(unsigned_int_1,int_4);

		float_1 = v_vedisOsSync(long_1,int_4);

		short_2 = short_1 * short_1;
	}
	if(1)
	{
		float float_2 = 1;
		short_2 = v_vedisGenError(char_1,char_1);

		float_1 = float_1 + float_2;
	}
	char_3 = char_1 * char_2;
	double_6 = double_1 + double_5;
	int_5 = v_pager_write_dirty_pages(int_2,double_3);

	float_1 = float_3;
	return int_2;
}
short v_vedisPagerCommit()
{
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	long_1 = v_pager_commit_phase2(int_1);

	float_1 = float_1 + float_1;
	long_2 = long_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_1 = v_pager_commit_phase1(short_1);

		double_3 = double_1 * double_2;
	}
	int_2 = int_2 * int_2;
	if(1)
	{
		short_1 = short_1;
	}
	int_3 = int_2 + int_3;
	char_1 = char_2;
	return short_2;
}
unsigned int v_vedisEngineRelease( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "{") < 0)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
		if(1)
		{
			unsigned_int_1 = v_vedisPagerRollback(double_1,int_1);

			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
	}
	if(1)
	{
		char_1 = v_SyMemBackendRelease(unsigned_int_1);

		double_3 = double_1 + double_2;
	}
	double_1 = double_4 + double_4;
	v_vedisPagerClose();

	unsigned_int_2 = unsigned_int_3;
	double_3 = double_2;
	return unsigned_int_1;
	short_1 = v_vedisPagerCommit();

}
char v_vedisCoreShutdown()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		}
		unsigned_int_4 = v_vedisEngineRelease(double_1);

		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		double_2 = double_2 * double_2;
		int_2 = int_1 * int_1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	char_1 = v_SyMemBackendRelease(unsigned_int_1);

	int_1 = int_3;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			if(1)
			{
				double_2 = double_1 + double_1;
				float_1 = v_SySetRelease(short_1);

				unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
			}
			if(1)
			{
				long_1 = long_1 + long_1;
			}
			long_2 = long_1 + long_1;
		}
		unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_3 * double_2;
	}
	int_4 = int_3 + int_1;
	return char_1;
}
int v_vedis_lib_shutdown()
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	char_1 = v_vedisCoreShutdown();

	double_2 = double_1 * double_1;
	return int_1;
}
float v_Fatal( char parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_2;
	return float_1;
	int_3 = v_vedis_lib_shutdown();

}
void v_SyBlobAppendBig32( short parameter_1,float parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = v_SyBlobAppend(int_1,long_1,long_2,-1 );

	float_1 = float_1 + float_1;
	char_2 = char_1 + char_1;
	double_2 = double_1 + double_1;
	int_2 = v_SyBigEndianPack32(double_1,short_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
}
float v_SyBlobAppendBig16( double parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short_2 = short_1 * short_2;
	char_2 = char_1 + char_1;
	char_2 = char_2 + char_3;
	int_1 = v_SyBigEndianPack16(int_1,char_1);

	short_1 = v_SyBlobAppend(int_2,long_1,long_1,-1 );

	int_2 = int_3;
	return float_1;
}
short v_SyBlobFormat( long parameter_1,char parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		if(1)
		{
		}
		char_1 = v_FormatMount(float_1,float_2,float_3,short_1,char_1,-1 );

		int_1 = int_2;
	}
	int_3 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	return short_2;
}
int v_vedisPagerGetKvEngine( unsigned int parameter_1)
{
	int int_1 = 1;
	return int_1;
}
double v_vedisTableSerialize( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_6 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	short_2 = short_1 * short_1;
	char_1 = char_1 + char_2;
	int_1 = v_vedisPagerGetKvEngine(unsigned_int_1);

	float_1 = v_SyBlobAppendBig16(double_1,unsigned_int_2);

	double_2 = double_1 + double_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	short_4 = short_3 + short_1;
	double_3 = v_vedisGenErrorFormat(int_2,short_5,unsigned_int_6);

	unsigned_int_6 = unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_7;
	int_1 = v_SyBlobInit(unsigned_int_7,unsigned_int_8);

	short_6 = v_SyBlobFormat(long_1,char_2,float_1);

	float_3 = float_2 + float_1;
	if(1)
	{
		double_5 = double_4 + double_5;
	}
	short_5 = short_6 + short_2;
	double_3 = double_2 + double_3;
	long_2 = v_SyBlobRelease(char_2);

	double_2 = double_2 * double_4;
	long_2 = long_3 + long_2;
	int_4 = int_3 + int_2;
	int_3 = int_5 + int_2;
	v_SyBlobAppendBig32(short_4,float_3);

	double_5 = double_6 + double_3;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "n") > 0)
	{
	}
	float_3 = float_2 + float_2;
	return double_6;
}
void v_vedisPagerisMemStore( short parameter_1)
{
}
long v_vedisOnCommit()
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_4 = 1;
	double_2 = double_1 * double_1;
	v_vedisPagerisMemStore(short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = v_vedisTableSerialize(double_1);

	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_1 = long_1;
		if(1)
		{
		}
		long_3 = long_1 + long_2;
	}
	return long_4;
}
double v_vedisPagerSetCommitCallback( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_1 = double_2;
	char_1 = char_1;
	return double_2;
}
int v_SySetReset( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_1;
	return int_1;
}
double v_SyBinHash( char parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char_3 = char_1 * char_2;
	int_2 = int_1 * int_1;
	short_1 = short_1 + short_1;
	int_4 = int_3 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		int int_5 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		if(1)
		{
			short_1 = short_1 * short_1;
		}
		int_1 = int_4 * int_4;
		float_1 = float_1 + float_1;
		if(1)
		{
			int_5 = int_2;
		}
		double_1 = double_2;
		long_2 = long_1 * long_1;
		if(1)
		{
			int int_6 = 1;
			int_5 = int_6;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		float_2 = float_1 * float_1;
		if(1)
		{
			float_2 = float_2 * float_1;
		}
		long_3 = long_3 * long_4;
		long_5 = long_2 * long_3;
	}
	return double_3;
}
int v_vedisFetchCommand( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_2;
	double_1 = v_SyBinHash(char_2,float_1);

	char_1 = char_1 * char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			long_1 = v_SyMemcmp(float_2,unsigned_int_3,char_4);

			unsigned_int_4 = unsigned_int_3;
		}
		if(1)
		{
		}
		int_4 = int_3 * int_4;
	}
	return int_3;
}
long v_vedisInstallCommand( double parameter_1,long parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_2 = 1;
	long long_5 = 1;
	char char_2 = 1;
	long long_6 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	int int_5 = 1;
	long long_7 = 1;
	double_2 = double_1 * double_1;
	long_2 = long_1 * long_1;
	double_3 = v_SyBinHash(char_1,float_1);

	long_3 = long_1 * long_1;
	int_1 = v_SySetReset(long_1);

	int_1 = int_1;
	unsigned_int_1 = v_SyMemBackendFree(float_1);

	int_2 = int_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_3 = int_3;
	long_3 = long_1;
	double_1 = double_1;
	if(1)
	{
		double_3 = double_1 * double_1;
		long_4 = v_SyMemBackendAlloc(float_1,char_1,-1 );

		unsigned_int_3 = unsigned_int_1;
		short_1 = short_1 + short_1;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
	double_2 = v_SyStrlen(short_2);

	long_5 = long_2;
	char_2 = char_1 + char_2;
	long_6 = long_5 * long_2;
	short_1 = v_SyZero(int_3);

	short_1 = short_2;
	short_2 = short_2 * short_1;
	int_4 = int_4 + int_4;
	unsigned_int_8 = unsigned_int_7 * unsigned_int_2;
	long_4 = v_SyMemcpy(int_2,unsigned_int_6);

	short_1 = short_2;
	float_1 = float_2 * float_1;
	unsigned_int_1 = unsigned_int_9 * unsigned_int_7;
	float_2 = v_SySetInit(unsigned_int_3,float_3,char_2);

	double_5 = double_2 + double_4;
	if(1)
	{
		float_3 = float_2 + float_2;
	}
	char_3 = char_2;
	if(1)
	{
		unsigned int unsigned_int_10 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_11 = 1;
		float float_5 = 1;
		short short_3 = 1;
		unsigned_int_3 = unsigned_int_7 * unsigned_int_10;
		float_3 = float_2 * float_4;
		unsigned_int_11 = unsigned_int_5;
		float_5 = float_1;
		short_3 = short_2 * short_2;
		if(1)
		{
			unsigned_int_10 = unsigned_int_9 * unsigned_int_2;
			unsigned_int_6 = unsigned_int_1 * unsigned_int_8;
			int_2 = int_3 * int_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int int_6 = 1;
				int int_7 = 1;
				if(1)
				{
					int_6 = int_5 * int_2;
				}
				short_1 = short_2 + short_3;
				float_1 = float_4 + float_5;
				int_3 = int_6 + int_3;
				if(1)
				{
					double_1 = double_1 + double_3;
				}
				int_5 = v_vedisFetchCommand(int_4,int_5);

				int_3 = int_7 * int_4;
				double_1 = double_2 + double_2;
				unsigned_int_6 = unsigned_int_1 * unsigned_int_3;
			}
			int_2 = int_3 + int_1;
			long_4 = long_6 * long_2;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
		}
	}
	return long_7;
}
int v_vedis_register_command( float parameter_1,char parameter_2,long parameter_3,int parameter_4,int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	long_1 = long_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long_3 = v_vedisInstallCommand(double_1,long_3,long_1);

		int_1 = int_1 * int_2;
	}
	return int_3;
}
unsigned int v_vedisRegisterBuiltinCommands( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_2;
	long_2 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int_1 = v_vedis_register_command(float_1,char_1,long_2,int_1,int_1);

		int_2 = int_2 * int_1;
	}
	return unsigned_int_1;
}
void v_vedisMemObjInit( double parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_2 = char_1 * char_1;
	double_2 = double_1 + double_2;
	short_1 = v_SyZero(int_1);

	short_1 = short_1 + short_1;
	int_1 = v_SyBlobInit(unsigned_int_1,unsigned_int_2);

}
long v_vedisInitCursor( unsigned int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = v_SyZero(int_1);

	double_3 = double_1 + double_2;
	double_1 = double_2;
	double_3 = v_vedisGenErrorFormat(int_2,short_1,unsigned_int_2);

	float_1 = float_1 + float_1;
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	short_3 = short_1 * short_2;
	if(1)
	{
		int int_3 = 1;
		int_4 = int_2 * int_3;
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		int_4 = int_4 * int_5;
	}
	unsigned_int_3 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		short short_4 = 1;
		short_4 = short_3 * short_2;
	}
	long_1 = v_vedisGenOutofMem(unsigned_int_4);

	unsigned_int_5 = unsigned_int_2;
	return long_1;
	double_3 = v_SyMemBackendPoolAlloc(unsigned_int_6,int_5);

}
double v_vedisKvIoErr( char parameter_1,float parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short_1 = short_1 * short_1;
	short_1 = v_vedisGenError(char_1,char_2);

	long_2 = long_1 + long_1;
	return double_1;
}
long v_vedisKvIoPageReload( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_2;
	return long_1;
}
float v_vedisKvIoPageUnpin( short parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float_1 = float_2;
	float_1 = float_3 + float_4;
	return float_4;
}
long v_vedisKvIoTempPage( long parameter_1)
{
	long long_1 = 1;
	return long_1;
}
int v_vedisKvIoReadOnly( short parameter_1)
{
	int int_1 = 1;
	return int_1;
}
short v_vedisKvIoPageSize( float parameter_1)
{
	short short_1 = 1;
	return short_1;
}
double v_page_unref( int parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short_1 = v_pager_unlink_page(unsigned_int_1,float_1);

	char_1 = char_1 * char_2;
	if(1)
	{
		char char_3 = 1;
		int int_2 = 1;
		char_3 = char_3 * char_3;
		if(1)
		{
			int int_1 = 1;
			short short_2 = 1;
			short short_4 = 1;
			int_1 = int_1 + int_2;
			short_4 = short_2 * short_3;
		}
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				short short_5 = 1;
				int int_5 = 1;
				float float_2 = 1;
				short_1 = short_1 * short_5;
				if(1)
				{
					unsigned int unsigned_int_2 = 1;
					unsigned_int_2 = unsigned_int_2;
				}
				if(1)
				{
					int_2 = int_2 * int_2;
					if(1)
					{
						int int_4 = 1;
						short_3 = v_pager_release_page(long_1,int_3);

						int_4 = int_4 * int_5;
					}
					char_3 = char_3 + char_3;
				}
				float_1 = float_1 + float_2;
				int_2 = int_5 + int_3;
			}
		}
	}
	return double_1;
}
double v_vedisKvIoPageUnRef()
{
	double double_1 = 1;
	int int_1 = 1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	return double_1;
	double_1 = v_page_unref(int_1);

}
int v_vedisKvIopage_ref( long parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	return int_1;
	long_1 = v_page_ref(char_1);

}
void v_vedisKvIoPageDontMakeHot( unsigned int parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_2 * int_3;
		}
		if(1)
		{
			short_3 = short_1 + short_2;
		}
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1;
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 + char_1;
		}
		short_2 = short_2 + short_3;
		short_1 = short_3 * short_1;
	}
}
short v_vedisKvIoPageDontJournal( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_2;
	double_3 = double_1 + double_1;
	if(1)
	{
	}
	double_4 = double_2 * double_4;
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 + char_1;
		}
	}
	return short_1;
	char_2 = v_vedisBitvecTest(long_1,int_1);

	double_3 = v_vedisBitvecSet(double_3,short_1);

}
int v_vedisPagerDontWrite( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	return int_2;
}
short v_vedisKvIoPageDontWrite( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	int_4 = int_2 * int_3;
	return short_1;
	int_2 = v_vedisPagerDontWrite(float_1);

}
double v_vedisBitvecSet( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	float float_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	double_1 = double_1;
	float_1 = float_2;
	unsigned_int_1 = v_SyMemBackendFree(float_2);

	double_2 = double_1 + double_2;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	double_3 = double_1 * double_2;
	float_3 = float_4;
	int_1 = int_1 * int_1;
	float_5 = float_1 * float_1;
	int_3 = int_2 * int_3;
	short_1 = short_1 + short_1;
	double_1 = v_SyMemBackendPoolAlloc(unsigned_int_2,int_3);

	int_2 = int_1;
	if(1)
	{
		short short_2 = 1;
		int_3 = int_3 * int_2;
		char_2 = char_1;
		char_2 = char_1 * char_2;
		short_2 = short_1 + short_1;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "(X") > 0)
		{
			char char_4 = 1;
			int int_4 = 1;
			int int_5 = 1;
			float float_6 = 1;
			int int_6 = 1;
			float float_7 = 1;
			double_1 = double_2 + double_1;
			char_3 = char_4 + char_1;
			char_1 = char_1;
			unsigned_int_2 = unsigned_int_2;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned int unsigned_int_3 = 1;
				char char_5 = 1;
				long long_2 = 1;
				long long_3 = 1;
				if(1)
				{
					long_1 = v_SyMemBackendAlloc(float_1,char_3,-1 );

					int_5 = int_4 + int_3;
				}
				unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
				float_6 = float_4 * float_6;
				char_4 = char_5 * char_1;
				long_1 = long_2;
				long_2 = long_3;
				long_1 = long_3 * long_1;
			}
			short_3 = v_SyZero(int_2);

			int_5 = int_4 * int_6;
			char_2 = char_4 + char_1;
			float_1 = float_7 * float_6;
		}
	}
	return double_1;
}
void v_WriteInt64( float parameter_1,double parameter_2,long parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	int_1 = v_SyBigEndianPack64(double_1,double_2);

	char_1 = char_1 * char_2;
	float_1 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_vedisOsWrite(int_2,char_2,short_1,short_2);

	float_1 = float_3 * float_1;
}
char v_vedisBitvecTest( long parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short_3 = short_1 * short_2;
	int_1 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_2;
		}
		if(1)
		{
		}
		double_2 = double_1 + double_2;
		if(1)
		{
			short_2 = short_3 * short_1;
		}
		if(1)
		{
		}
		double_5 = double_3 + double_4;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
		}
		double_5 = double_4 + double_3;
		if(1)
		{
			int int_3 = 1;
			int_1 = int_3;
		}
		if(1)
		{
		}
		int_1 = int_1 * int_1;
	}
	return char_1;
}
float v_page_write( unsigned int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_4 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	double double_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_7 = 1;
	char char_4 = 1;
	short_1 = short_1;
	if(1)
	{
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_6 = 1;
			char_1 = v_vedisBitvecTest(long_1,int_1);

			long_4 = long_2 * long_3;
			if(1)
			{
				v_WriteInt64(float_1,double_1,long_4);

				int_3 = int_1 + int_2;
			}
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
			}
			unsigned_int_1 = v_WriteInt32(short_2,unsigned_int_1,float_2);

			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			if(1)
			{
			}
			long_1 = v_pager_cksum(double_2,short_3);

			char_3 = char_2 * char_1;
			int_3 = int_4 + int_2;
			if(1)
			{
			}
			int_3 = int_1 + int_4;
			v_vedisOsWrite(int_2,char_2,short_1,short_4);

			double_1 = v_vedisBitvecSet(double_1,short_5);

			double_1 = double_1 + double_1;
			short_6 = short_4 * short_1;
		}
	}
	short_7 = v_vedisGenError(char_3,char_1);

	short_4 = short_4 * short_5;
	if(1)
	{
		char_3 = char_2 + char_1;
		if(1)
		{
			int_4 = int_2 + int_4;
		}
	}
	return float_2;
	v_pager_page_to_dirty_list(long_1,char_4);

}
short v_pager_release_page( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	double_1 = v_SyMemBackendPoolFree(int_1);

	char_3 = char_1 + char_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 * long_2;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		short_1 = short_2;
	}
	if(1)
	{
		char_3 = char_3 + char_2;
	}
	return short_3;
}
short v_pager_unlink_page( unsigned int parameter_1,float parameter_2)
{
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
		int_2 = int_3 * int_3;
	}
	int_3 = int_3;
	double_1 = double_1;
	return short_1;
}
int v_pager_write_hot_dirty_pages( short parameter_1,char parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	char_1 = char_1 * char_1;
	short_1 = v_pager_unlink_page(unsigned_int_1,float_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			int_2 = int_1 + int_1;
		}
		int_1 = int_1 + int_3;
		if(1)
		{
			double double_2 = 1;
			short_1 = v_pager_release_page(long_1,int_4);

			double_1 = double_1 + double_2;
			if(1)
			{
				double_1 = double_1 + double_2;
			}
		}
		double_1 = double_3;
		if(1)
		{
			long_1 = long_1;
		}
		if(1)
		{
			double_1 = double_1 + double_3;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_2 * long_1;
		}
		int_2 = int_3 + int_2;
		v_vedisOsWrite(int_3,char_1,short_1,short_2);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	return int_4;
}
int v_page_merge_hot( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_1 * int_1;
	return int_1;
}
long v_pager_get_hot_pages( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long_2 = long_1 * long_1;
	short_1 = v_SyZero(int_1);

	double_2 = double_1 * double_2;
	double_3 = double_1;
	int_2 = v_page_merge_hot(unsigned_int_1,int_3);

	int_2 = int_2;
	short_2 = short_3;
	return long_1;
}
unsigned int v_WriteInt32( short parameter_1,unsigned int parameter_2,float parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_3 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	short short_4 = 1;
	long_1 = long_1 + long_1;
	short_1 = short_1 + short_2;
	int_1 = v_SyBigEndianPack32(double_1,short_3);

	double_2 = double_1 + double_1;
	int_2 = int_3;
	return unsigned_int_1;
	v_vedisOsWrite(int_4,char_1,short_4,short_2);

}
int v_vedisFinalizeJournal( double parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = v_WriteInt32(short_1,unsigned_int_1,float_1);

	int_2 = int_1 * int_2;
	long_1 = v_vedisOsCloseFree(int_3,double_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_4 = int_2 + int_1;
		double_1 = double_3 * double_3;
	}
	if(1)
	{
	}
	v_pager_lock_db(char_1,int_1);

	float_1 = v_vedisOsSync(long_1,int_4);

	char_3 = char_1 * char_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			short short_2 = 1;
			short_2 = short_1 * short_2;
		}
	}
	int_1 = int_5 * int_2;
	if(1)
	{
		long long_2 = 1;
		if(1)
		{
			if(1)
			{
			}
		}
		long_1 = long_2 * long_1;
	}
	if(1)
	{
		if(1)
		{
			double_3 = double_3 * double_3;
		}
	}
	return int_2;
}
short v_pager_dirty_commit( double parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_6 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_7 = 1;
	short short_8 = 1;
	char_1 = char_1;
	short_1 = short_1;
	long_1 = v_pager_get_hot_pages(unsigned_int_1);

	short_2 = v_vedisGenError(char_2,char_3);

	short_2 = short_2 * short_3;
	int_1 = int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "w") > 0)
	{
	}
	int_3 = int_2 + int_1;
	if(1)
	{
	}
	if(1)
	{
		char_1 = v_pager_wait_on_lock(unsigned_int_1,int_3);

		short_3 = short_4 + short_5;
		if(1)
		{
		}
	}
	long_3 = long_2 + long_2;
	short_2 = short_6;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int_4 = v_pager_write_hot_dirty_pages(short_5,char_1);

		float_2 = float_1 + float_1;
		float_1 = float_1 + float_2;
	}
	int_1 = v_vedisFinalizeJournal(double_1,int_3,int_4);

	double_1 = double_2 * double_3;
	short_5 = short_4 + short_7;
	return short_8;
}
int v_pager_write_journal_header( int parameter_1,double parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_2;
	long_3 = v_SyMemcpy(int_1,unsigned_int_4);

	long_4 = long_1 * long_4;
	char_2 = char_1 + char_1;
	double_1 = double_2;
	int_2 = v_SyBigEndianPack32(double_3,short_1);

	long_4 = long_1 * long_4;
	double_1 = double_2 + double_3;
	short_4 = short_2 * short_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 * float_2;
	return int_1;
	int_3 = v_SyBigEndianPack64(double_3,double_1);

}
float v_vedisOpenJournal( float parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	double double_4 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_3 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	v_vedisOsWrite(int_1,char_1,short_1,short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = v_SyMemBackendFree(float_1);

	double_2 = double_1 * double_2;
	if(1)
	{
		unsigned_int_3 = v_vedisOsDelete(short_1,int_1,int_2);

		double_2 = v_vedisGenErrorFormat(int_2,short_1,unsigned_int_4);

		int_2 = int_1 + int_3;
	}
	if(1)
	{
	}
	short_2 = v_vedisOsOpen(double_3,double_1,double_3,char_2,char_1);

	double_2 = double_3 + double_4;
	int_2 = v_pager_write_journal_header(int_4,double_1);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		long_1 = v_SyMemBackendAlloc(float_2,char_2,-1 );

		long_1 = v_vedisOsCloseFree(int_5,double_2);

		int_5 = int_5 * int_4;
	}
	int_6 = int_4 + int_4;
	if(1)
	{
		int_3 = int_4;
		float_2 = float_1 + float_2;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	char_2 = char_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	int_1 = int_6 + int_4;
	if(1)
	{
		float_1 = float_3;
	}
	int_1 = int_2 * int_6;
	short_3 = short_4;
	int_3 = int_2 + int_2;
	return float_3;
}
char v_SyTimeFormatToDos( int parameter_1,double parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1;
	double_1 = double_2 * double_1;
	int_1 = int_2 + int_2;
	return char_1;
}
char v_pager_write_db_header( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_6 = 1;
	short short_7 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_1 = 1;
	int int_8 = 1;
	int int_9 = 1;
	float float_3 = 1;
	short short_8 = 1;
	char char_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_2;
	long_1 = v_SyMemcpy(int_1,unsigned_int_3);

	long_3 = long_1 * long_2;
	int_2 = int_3;
	short_2 = short_3;
	short_4 = short_4 + short_5;
	float_1 = float_1 + float_2;
	double_2 = double_1 * double_2;
	int_2 = v_SyBigEndianPack32(double_2,short_6);

	short_3 = short_7 * short_3;
	if(1)
	{
		int_3 = int_3;
	}
	int_4 = int_1 * int_4;
	int_3 = int_1 * int_5;
	short_7 = v_SyZero(int_6);

	int_4 = int_7 + int_6;
	int_7 = int_1 + int_1;
	short_5 = short_2 + short_7;
	int_6 = v_SyBigEndianPack16(int_5,char_1);

	int_8 = int_2 * int_6;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	double_2 = v_SyStrlen(short_4);

	int_7 = int_6 * int_9;
	float_3 = float_1 + float_3;
	short_8 = short_6;
	int_4 = int_6 + int_2;
	char_2 = v_SyTimeFormatToDos(int_2,double_1);

	int_8 = int_4;
	return char_1;
}
void v_pager_page_to_dirty_list( long parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	int_1 = int_1;
	int_3 = int_2 + int_3;
	int_2 = int_1 + int_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	int_1 = int_3 + int_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
}
short v_pager_create_header()
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short_1 = v_pager_alloc_page(long_1,long_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
	}
	long_3 = long_1 + long_2;
	v_pager_page_to_dirty_list(long_2,char_1);

	char_1 = v_pager_write_db_header(char_2);

	double_2 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	int_2 = int_2 + int_2;
	return short_2;
	v_pager_link_page(int_1,float_1);

}
int v_vedisBitvecCreate( long parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	long long_3 = 1;
	float float_3 = 1;
	char char_1 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = long_1 + long_2;
	float_2 = float_1 * float_1;
	double_1 = double_2;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_2;
	}
	short_1 = v_SyZero(int_3);

	short_2 = short_3;
	short_3 = short_3;
	double_2 = double_3 + double_3;
	if(1)
	{
		int int_4 = 1;
		int_3 = int_4;
	}
	long_3 = v_SyMemBackendAlloc(float_3,char_1,-1 );

	float_1 = float_3 * float_4;
	unsigned_int_1 = v_SyMemBackendFree(float_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	short_3 = short_2;
	return int_2;
}
float v_vedisPagerBegin( int parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_5 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int_1 = int_1 + int_2;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2;
	}
	long_3 = long_1 * long_2;
	char controller4vul_112[2];
	fgets(controller4vul_112 ,2 ,stdin);
	if( strcmp( controller4vul_112, "x") < 0)
	{
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float_3 = float_2 * float_2;
		if(1)
		{
			float float_4 = 1;
			long_2 = long_1 * long_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			float_4 = float_4;
		}
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		unsigned_int_4 = unsigned_int_2;
		float_5 = float_1;
		unsigned_int_4 = unsigned_int_4;
		char controller4vul_113[3];
		fgets(controller4vul_113 ,3 ,stdin);
		if( strcmp( controller4vul_113, "f ") < 0)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_3 = unsigned_int_5 * unsigned_int_3;
			char controller4vul_114[2];
			fgets(controller4vul_114 ,2 ,stdin);
			if( strcmp( controller4vul_114, "/") > 0)
			{
				long long_4 = 1;
				int_1 = v_pager_shared_lock(char_1,uni_para);

				long_4 = long_2 + long_2;
			}
			float_5 = float_5 * float_2;
		}
	}
	if(1)
	{
		float_5 = float_5 * float_1;
	}
	double_3 = double_1;
	return float_5;
}
float v_vedisPageWrite( short parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	int_2 = int_1 + int_2;
	int_1 = int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_4;
	if(1)
	{
	}
	char controller4vul_110[3];
	fgets(controller4vul_110 ,3 ,stdin);
	if( strcmp( controller4vul_110, ",D") > 0)
	{
		int_3 = int_1;
		char controller4vul_111[2];
		fgets(controller4vul_111 ,2 ,stdin);
		if( strcmp( controller4vul_111, "A") > 0)
		{
			float_1 = v_vedisPagerBegin(int_4,uni_para);

		}
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_1;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_2;
		}
	}
	double_3 = double_3 * double_1;
	return float_2;
}
long v_vedisKvIopageWrite(int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	char controller4vul_109[3];
	fgets(controller4vul_109 ,3 ,stdin);
	if( strcmp( controller4vul_109, "q.") > 0)
	{
		float_1 = v_vedisPageWrite(short_1,uni_para);

	}
	int_2 = int_2 * int_2;
	return long_1;
}
float v_vedisKvIoNewPage( char parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = v_pager_shared_lock(char_1,-1 );

	float_1 = float_2;
	v_vedisPagerAcquire(char_2,long_1,long_1,int_1,int_1);

	short_1 = short_1 * short_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	return float_1;
}
long v_vedisKvIoPageLookup( int parameter_1,long parameter_2,float parameter_3)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_vedisPagerAcquire(char_1,long_1,long_1,int_1,int_2);

	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	return long_1;
}
long v_page_ref( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short_1 = short_1 + short_2;
	return long_1;
}
void v_pager_link_page( int parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_3;
	float_2 = float_1 * float_1;
	if(1)
	{
		short_1 = v_SyZero(int_1);

		unsigned_int_1 = v_SyMemBackendFree(float_3);

		int_1 = int_1 + int_1;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_1 = v_SyMemBackendAlloc(float_3,char_1,-1 );

	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 + int_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		int int_4 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		long_2 = long_1 * long_1;
		long_1 = long_3 * long_3;
		int_3 = int_4 + int_4;
		float_6 = float_4 + float_5;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			int int_5 = 1;
			char char_2 = 1;
			char char_3 = 1;
			float float_8 = 1;
			int int_6 = 1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
			int_4 = int_4 + int_5;
			char_3 = char_1 * char_2;
			double_1 = double_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				long long_4 = 1;
				unsigned int unsigned_int_5 = 1;
				char controller_4[2];
				fgets(controller_4 ,2 ,stdin);
				if( strcmp( controller_4, "X") < 0)
				{
					float float_7 = 1;
					float_8 = float_7 + float_1;
				}
				long_4 = long_3;
				double_3 = double_1 * double_1;
				float_5 = float_4;
				if(1)
				{
					int_3 = int_3 + int_2;
				}
				char_1 = char_2 * char_1;
				double_1 = double_1;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
			}
			double_1 = double_1;
			int_2 = int_6 + int_2;
			float_3 = float_8 * float_4;
		}
	}
}
short v_pager_get_page_contents( char parameter_1,short parameter_2,int parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	short_1 = v_SyZero(int_1);

	short_1 = short_1 * short_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
		int_1 = int_2 * int_1;
	}
	if(1)
	{
		int int_4 = 1;
		double_1 = v_vedisOsRead(double_1,unsigned_int_1,int_3);

		int_4 = int_3 + int_2;
	}
	return short_1;
}
short v_pager_alloc_page( long parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char_2 = char_1 + char_1;
	short_1 = v_SyZero(int_1);

	int_2 = int_1 + int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = v_SyMemBackendPoolAlloc(unsigned_int_3,int_1);

	int_2 = int_3 + int_3;
	unsigned_int_3 = unsigned_int_1;
	int_4 = int_4 + int_2;
	short_3 = short_2 * short_2;
	return short_2;
}
double v_vedisGetPageSize()
{
	long long_1 = 1;
	double double_4 = 1;
	long_1 = long_1 + long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "v-") == 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	return double_4;
}
int v_vedisOsSectorSize( int parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	return int_1;
}
double v_GetSectorSize( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = v_vedisOsSectorSize(int_2);

		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		if(1)
		{
			int int_3 = 1;
			int_3 = int_2 + int_1;
		}
		if(1)
		{
			int int_4 = 1;
			int_1 = int_2 * int_4;
		}
	}
	return double_1;
}
int v_SyDosTimeFormat( int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short_1 = short_1 + short_1;
	char_2 = char_1 * char_1;
	double_2 = double_1 * double_1;
	double_3 = double_2 * double_3;
	double_4 = double_2 + double_4;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_1;
	int_3 = int_3 * int_2;
	return int_2;
}
char v_pager_extract_header( float parameter_1,short parameter_2,long parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	int int_7 = 1;
	double double_3 = 1;
	int int_8 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short_1 = short_1 + short_1;
	int_1 = int_1 + int_1;
	int_3 = int_1 * int_2;
	short_1 = v_SyBigEndianUnpack16(char_1,int_3);

	long_1 = long_2;
	if(1)
	{
	}
	int_4 = v_SyDosTimeFormat(int_1,unsigned_int_1);

	int_2 = int_2 * int_5;
	long_2 = v_SyMemcmp(float_1,unsigned_int_2,char_2);

	double_1 = v_SyBigEndianUnpack32(int_3,float_1);

	int_4 = int_6 + int_4;
	float_2 = float_3;
	if(1)
	{
	}
	short_2 = v_SyMemBackendDup(char_2,long_1,double_1,-1 );

	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_2 * char_1;
	double_2 = double_1 * double_1;
	char_3 = char_3 * char_1;
	float_2 = float_3 * float_1;
	float_4 = float_3 * float_1;
	int_7 = int_6 + int_4;
	if(1)
	{
	}
	double_2 = double_3;
	double_1 = double_2 + double_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	}
	int_3 = int_8;
	if(1)
	{
	}
	double_5 = double_2 * double_4;
	return char_1;
}
int v_pager_read_db_header( int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	long long_2 = 1;
	char char_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1 * int_1;
	double_1 = v_GetSectorSize(long_1);

	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		int int_3 = 1;
		float float_1 = 1;
		char char_5 = 1;
		short short_4 = 1;
		double_4 = double_2 + double_1;
		double_3 = double_1 + double_2;
		int_3 = int_1 + int_2;
		if(1)
		{
			float_1 = float_1 * float_2;
		}
		unsigned_int_2 = unsigned_int_1;
		if(1)
		{
			double_3 = v_SyStrlen(short_1);

			short_2 = short_3;
		}
		char_1 = v_pager_extract_header(float_2,short_3,long_1);

		float_2 = float_2;
		if(1)
		{
			short_2 = v_vedisGenError(char_1,char_2);

			unsigned_int_2 = unsigned_int_3;
		}
		float_3 = v_vedisOsFileSize(char_3,unsigned_int_3);

		long_1 = v_SyMemBackendAlloc(float_2,char_1,-1 );

		long_2 = long_1;
		if(1)
		{
			float float_4 = 1;
			double_1 = v_vedisGenErrorFormat(int_1,short_3,unsigned_int_3);

			float_1 = float_4;
		}
		v_vedisFindKVStore(char_4,double_5);

		char_1 = char_1 * char_5;
		short_3 = short_1 * short_2;
		double_1 = double_1 * double_6;
		if(1)
		{
			char_1 = char_1 * char_2;
		}
		double_2 = v_vedisOsRead(double_3,unsigned_int_1,int_1);

		short_3 = short_4 + short_1;
		if(1)
		{
		}
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1 * long_2;
		short_2 = v_SyZero(int_4);

		double_5 = double_2 + double_4;
		v_vedisPagerRegisterKvEngine(long_4,double_1,-1 );

		double_4 = double_3;
		long_2 = v_vedisGenOutofMem(unsigned_int_4);

		double_6 = double_6 + double_7;
	}
	double_3 = double_7 * double_8;
	if(1)
	{
		double_2 = double_6 + double_4;
	}
	double_3 = v_vedisGetPageSize();

	unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
	return int_1;
}
long v_vedisOsCloseFree( int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_1 = int_1 + int_1;
		unsigned_int_3 = v_SyMemBackendFree(float_1);

		double_1 = double_2;
	}
	return long_1;
}
short v_pager_fetch_page( double parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
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
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return short_1;
}
char v_pager_fill_page( float parameter_1,double parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long_1 = v_SyMemcpy(int_1,unsigned_int_1);

	long_1 = long_1 * long_1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	return char_1;
	short_1 = v_pager_fetch_page(double_3,long_2);

}
void v_vedisOsWrite( int parameter_1,char parameter_2,short parameter_3,short parameter_4)
{
}
long v_pager_cksum( double parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short_1 = short_2;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_2 + double_2;
	return long_1;
}
short v_pager_play_back_one_page( short parameter_1,char parameter_2,double parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	char char_3 = 1;
	short short_2 = 1;
	long_1 = v_pager_cksum(double_1,short_1);

	long_1 = long_2 + long_3;
	double_2 = double_1 * double_2;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_2 * long_1;
	char_2 = v_ReadInt32(float_1,char_1,char_2);

	double_3 = double_1 * double_3;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	double_2 = v_vedisOsRead(double_3,unsigned_int_2,int_3);

	double_3 = double_3 + double_4;
	char_1 = v_pager_fill_page(float_2,double_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	short_1 = v_ReadInt64(int_2,int_2,unsigned_int_3);

	int_1 = int_4 * int_2;
	double_5 = double_5 + double_5;
	if(1)
	{
	}
	int_5 = int_2;
	int_5 = int_2 + int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	double_3 = double_4 + double_1;
	if(1)
	{
		int int_6 = 1;
		v_vedisOsWrite(int_5,char_3,short_2,short_1);

		int_6 = int_2;
	}
	return short_2;
}
void v_vedisOsTruncate( long parameter_1,double parameter_2)
{
}
short v_ReadInt64( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double_1 = v_vedisOsRead(double_2,unsigned_int_1,int_1);

	int_2 = int_1 + int_2;
	float_1 = v_SyBigEndianUnpack64(unsigned_int_1,float_1);

	char_1 = char_1;
	double_2 = double_3;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	return short_1;
}
char v_ReadInt32( float parameter_1,char parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = v_SyBigEndianUnpack32(int_1,float_1);

	long_4 = long_3 + long_4;
	if(1)
	{
	}
	double_1 = v_vedisOsRead(double_2,unsigned_int_1,int_2);

	char_2 = char_1 + char_1;
	return char_2;
}
double v_vedisOsRead( double parameter_1,unsigned int parameter_3,int parameter_4)
{
	double double_1 = 1;
	return double_1;
}
char v_pager_read_journal_header( char parameter_1,double parameter_2,int parameter_3)
{
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_4 = 1;
	long_1 = v_SyMemcmp(float_1,unsigned_int_1,char_1);

	short_1 = short_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	double_2 = double_1 + double_1;
	long_1 = long_1 + long_1;
	char_2 = v_ReadInt32(float_2,char_2,char_3);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	float_5 = float_3 + float_4;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_5 * unsigned_int_1;
	short_2 = v_ReadInt64(int_1,int_2,unsigned_int_3);

	double_3 = double_3 * double_4;
	if(1)
	{
	}
	double_3 = double_2 + double_3;
	float_4 = float_1 + float_3;
	if(1)
	{
	}
	double_1 = double_2 * double_1;
	float_2 = float_4 + float_3;
	if(1)
	{
	}
	int_3 = int_2 + int_3;
	char_4 = char_3 * char_2;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	float_1 = float_5 * float_2;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_6 = unsigned_int_6 * unsigned_int_6;
	double_1 = v_vedisOsRead(double_1,unsigned_int_7,int_3);

	unsigned_int_7 = unsigned_int_5;
	float_4 = v_vedisOsFileSize(char_4,unsigned_int_5);

	int_4 = int_2 + int_1;
	return char_1;
}
double v_pager_playback( float parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char char_4 = 1;
	float float_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_3 = 1;
	long long_5 = 1;
	double double_6 = 1;
	double_1 = v_vedisGenErrorFormat(int_1,short_1,unsigned_int_1);

	char_1 = char_1 + char_1;
	long_2 = long_1 + long_2;
	double_2 = double_2;
	double_3 = double_2 * double_2;
	short_2 = v_vedisGenError(char_1,char_1);

	char_3 = char_2 + char_2;
	if(1)
	{
		if(1)
		{
			double_2 = double_2 * double_1;
		}
		int_2 = int_1 * int_1;
	}
	short_2 = v_SyZero(int_3);

	long_2 = long_3;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	double_2 = double_4 + double_4;
	if(1)
	{
		long long_4 = 1;
		char_3 = v_pager_read_journal_header(char_3,double_3,int_4);

		long_4 = long_2 * long_1;
	}
	unsigned_int_3 = v_SyMemBackendFree(float_1);

	char_3 = char_3 + char_4;
	float_1 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_3 = int_5 * int_6;
		if(1)
		{
			if(1)
			{
				double double_5 = 1;
				long_3 = v_SyMemBackendAlloc(float_3,char_1,-1 );

				char_2 = char_1 * char_2;
				long_5 = v_vedisGenOutofMem(unsigned_int_1);

				short_1 = v_pager_play_back_one_page(short_2,char_1,double_2);

				double_5 = double_5;
			}
		}
	}
	double_2 = double_1 * double_2;
	if(1)
	{
		double_3 = double_4 * double_6;
	}
	if(1)
	{
		v_vedisOsTruncate(long_5,double_4);

		int_5 = int_2 + int_2;
	}
	return double_6;
	float_2 = v_vedisOsSync(long_2,int_6);

}
float v_vedisOsSync( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	return float_1;
}
unsigned int v_vedisOsUnlock( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void v_pager_unlock_db( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double_1 = double_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_1 = v_vedisOsUnlock(char_1,int_1);

		double_3 = double_2 + double_3;
		float_1 = float_1 * float_2;
	}
}
unsigned int v_vedisOsDelete( short parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
float v_vedisOsFileSize( char parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	return float_1;
}
char v_vedisOsCheckReservedLock( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
unsigned int v_vedisOsAccess( int parameter_1,short parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
short v_pager_has_hot_journal( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	char char_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	int int_6 = 1;
	v_pager_lock_db(char_1,int_1);

	char_3 = char_2 * char_2;
	int_3 = int_1 + int_2;
	float_1 = float_1 + float_2;
	int_4 = int_4 + int_3;
	char_2 = v_vedisOsCheckReservedLock(char_4,int_5);

	float_1 = v_vedisOsFileSize(char_4,unsigned_int_1);

	double_2 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_2;
		double_3 = double_4;
		if(1)
		{
			unsigned_int_3 = v_vedisOsDelete(short_1,int_4,int_3);

			int_2 = int_3 * int_4;
			short_2 = short_1;
			if(1)
			{
				if(1)
				{
					if(1)
					{
						unsigned int unsigned_int_4 = 1;
						char char_5 = 1;
						unsigned_int_1 = v_vedisOsAccess(int_1,short_2,int_3,int_5);

						v_pager_unlock_db(float_3,int_6);

						unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
						char_5 = char_5 + char_5;
					}
				}
				if(1)
				{
					long long_1 = 1;
					long long_2 = 1;
					long long_3 = 1;
					long_3 = long_1 + long_2;
				}
			}
		}
	}
	return short_2;
}
void v_pager_journal_rollback( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_6 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	short short_2 = 1;
	double double_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_4 = 1;
	unsigned_int_1 = v_vedisOsDelete(short_1,int_1,int_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		int int_3 = 1;
		float_1 = v_vedisOsSync(long_1,int_2);

		v_pager_unlock_db(float_1,int_2);

		int_5 = int_3 + int_4;
		short_1 = v_pager_has_hot_journal(unsigned_int_1,int_2);

		double_3 = double_1 * double_2;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	int_6 = int_1 * int_5;
	if(1)
	{
		short_1 = v_vedisOsOpen(double_3,double_3,double_2,char_1,char_1);

		unsigned_int_3 = unsigned_int_3;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
		double double_7 = 1;
		double_4 = v_vedisGenErrorFormat(int_4,short_2,unsigned_int_1);

		double_2 = double_5 + double_5;
		v_pager_lock_db(char_2,int_6);

		short_2 = v_vedisGenError(char_1,char_3);

		double_6 = v_pager_playback(float_1);

		double_6 = double_7 * double_6;
	}
	long_3 = long_2 + long_1;
	double_2 = double_5;
	long_4 = v_vedisOsCloseFree(int_5,double_1);

	int_4 = int_2 * int_6;
	char_4 = char_2 * char_1;
	long_3 = long_1 * long_3;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
	}
}
double v_vedisOsLock( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	return double_1;
}
void v_pager_lock_db( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	short short_3 = 1;
	char char_4 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double_1 = v_vedisOsLock(char_3,int_1);

			short_3 = v_vedisGenError(char_4,char_3);

			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			char_4 = char_1 + char_2;
		}
	}
}
char v_pager_wait_on_lock( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_1 = 1;
	char char_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 + short_1;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	float_2 = float_3 * float_1;
	double_1 = double_1 * double_1;
	long_1 = long_1 * long_1;
	long_2 = long_2 + long_2;
	double_4 = double_2 * double_3;
	char_1 = char_1;
	double_1 = double_3;
	long_2 = long_3 * long_1;
	char_1 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_2 = double_1 + double_4;
	v_pager_lock_db(char_3,int_1);

	short_2 = short_2 + short_2;
	char_4 = char_1 + char_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_3 * double_4;
	double_1 = double_1 + double_2;
	int_4 = int_2 * int_3;
	float_3 = float_1 * float_3;
	int_3 = int_2 + int_5;
	if(1)
	{
	}
	return char_2;
}
float v_SyBlobFormatAp( double parameter_1,char parameter_2,int parameter_3)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char_1 = v_FormatMount(float_1,float_1,float_2,short_1,char_2,-1 );

	float_3 = float_2 * float_3;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		if(1)
		{
		}
		short_3 = short_1 * short_2;
	}
	return float_4;
}
double v_vedisGenErrorFormat( int parameter_1,short parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = v_SyBlobAppend(int_1,long_1,long_1,-1 );

	char_1 = char_2;
	short_3 = short_2 * short_2;
	double_1 = double_1 * double_1;
	float_1 = v_SyBlobFormatAp(double_2,char_3,int_2);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	double_1 = double_3 * double_4;
	return double_5;
}
short v_vedisOsOpen( double parameter_1,double parameter_2,double parameter_3,char parameter_4,char parameter_5)
{
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	short short_2 = 1;
	long_1 = v_SyMemBackendAlloc(float_1,char_1,-1 );

	long_2 = long_1 * long_2;
	double_1 = double_1 + double_2;
	int_1 = int_1 + int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "hV") < 0)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	short_1 = v_SyZero(int_2);

	unsigned_int_2 = v_SyMemBackendFree(float_1);

	double_2 = double_3 * double_4;
	double_5 = double_5 + double_1;
	if(1)
	{
		char char_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char_3 = char_2 + char_2;
		float_2 = float_3;
	}
	char_1 = char_3 + char_1;
	return short_2;
}
int v_pager_shared_lock( char parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	int_1 = int_2;
	char controller4vul_115[2];
	fgets(controller4vul_115 ,2 ,stdin);
	if( strcmp( controller4vul_115, "-") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_1 * double_2;
		if(1)
		{
			short_1 = short_1 + short_1;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		char controller4vul_116[3];
		fgets(controller4vul_116 ,3 ,stdin);
		if( strcmp( controller4vul_116, "!v") > 0)
		{
			double double_6 = 1;
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				float_3 = float_1 + float_2;
				if(1)
				{
				}
			}
			int_1 = int_1 * int_1;
			if(1)
			{
			}
			char controller4vul_117[3];
			fgets(controller4vul_117 ,3 ,stdin);
			if( strcmp( controller4vul_117, "oD") < 0)
			{
				char controller4vul_118[3];
				fgets(controller4vul_118 ,3 ,stdin);
				if( strcmp( controller4vul_118, "P7") > 0)
				{
					short short_3 = 1;
					int_4 = int_3 * int_1;
					char controller4vul_119[2];
					fgets(controller4vul_119 ,2 ,stdin);
					if( strcmp( controller4vul_119, "0") > 0)
					{
						double double_3 = 1;
						double double_4 = 1;
						short short_2 = 1;
						int_4 = v_vedisExportBuiltinVfs(uni_para);

						double_4 = double_1 * double_3;
						short_3 = short_2 + short_3;
						if(1)
						{
							double double_5 = 1;
							short short_4 = 1;
							double_2 = double_5 * double_3;
							short_4 = short_4 * short_1;
						}
					}
					if(1)
					{
						long long_1 = 1;
						long long_2 = 1;
						long_2 = long_1 * long_1;
						short_3 = short_1 * short_3;
					}
				}
			}
			int_4 = int_4 * int_2;
			double_6 = double_6;
			if(1)
			{
				double_1 = double_2;
				if(1)
				{
					char char_1 = 1;
					char char_2 = 1;
					char char_3 = 1;
					double double_7 = 1;
					char_3 = char_1 * char_2;
					char_2 = char_2 + char_3;
					double_2 = double_7 + double_7;
				}
			}
		}
		if(1)
		{
			int_4 = int_3 + int_4;
		}
	}
	return int_2;
}
void v_vedisPagerAcquire( char parameter_1,long parameter_2,long parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = v_SyMemBackendPoolFree(int_1);

	v_pager_link_page(int_2,float_1);

	long_2 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_3;
	if(1)
	{
	}
	long_1 = v_vedisGenOutofMem(unsigned_int_4);

	unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_2 + float_2;
		}
		unsigned_int_6 = unsigned_int_1 + unsigned_int_4;
	}
	if(1)
	{
		double double_2 = 1;
		short_1 = v_pager_alloc_page(long_3,long_4);

		short_2 = v_pager_get_page_contents(char_1,short_3,int_3);

		double_2 = double_1 * double_1;
		if(1)
		{
			long long_5 = 1;
			long_1 = long_5;
		}
		short_2 = v_pager_fetch_page(double_3,long_2);

		double_3 = double_2;
		if(1)
		{
			short_1 = short_3;
		}
		long_1 = v_page_ref(char_1);

		short_3 = short_3 * short_2;
	}
	if(1)
	{
		if(1)
		{
			int int_4 = 1;
			int_3 = int_3 + int_4;
		}
	}
	if(1)
	{
		int_1 = v_pager_shared_lock(char_2,-1 );

		long_2 = long_1;
	}
}
long v_vedisKvIoPageGet( long parameter_1,char parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_2 = float_1 + float_2;
	v_vedisPagerAcquire(char_1,long_1,long_2,int_1,int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return long_1;
}
unsigned int v_pager_kv_io_init( char parameter_1,short parameter_2,short parameter_3,int uni_para)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long_1 = v_vedisKvIopageWrite(uni_para);

	char_2 = char_1 + char_1;
	double_2 = double_1 * double_1;
	float_1 = float_1 + float_2;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_2 * long_3;
	double_2 = double_2 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_3 = float_3 * float_2;
	int_3 = int_1;
	int_3 = int_4;
	double_1 = double_3 + double_3;
	char_3 = char_2 + char_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	double_2 = double_4 * double_5;
	unsigned_int_3 = unsigned_int_2;
	return unsigned_int_2;
}
long v_vedisGenOutofMem( unsigned int parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short_1 = short_1 * short_1;
	int_3 = int_1 + int_2;
	return long_1;
	short_2 = v_vedisGenError(char_1,char_2);

}
char v_vedisReleaseCursor( long parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	char_2 = char_1 * char_2;
	int_1 = int_1 * int_2;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_1 + int_3;
	}
	double_1 = v_SyMemBackendPoolFree(int_2);

	int_4 = int_1 + int_2;
	return char_2;
}
double v_pager_release_kv_engine( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_1 = char_2;
	char_1 = char_3 * char_4;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_2;
		char_2 = char_3 * char_2;
	}
	if(1)
	{
		unsigned_int_1 = v_SyMemBackendFree(float_1);

		long_1 = long_1 + long_1;
	}
	int_2 = int_1 + int_1;
	float_1 = float_1;
	char_5 = v_vedisReleaseCursor(long_1,double_1);

	short_1 = short_2;
	return double_1;
}
void v_vedisPagerRegisterKvEngine( long parameter_1,double parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_3 = 1;
	long long_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float_2 = float_1 + float_1;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1;
	int_1 = int_1 * int_2;
	int_1 = int_3 + int_1;
	char controller4vul_107[3];
	fgets(controller4vul_107 ,3 ,stdin);
	if( strcmp( controller4vul_107, "|8") < 0)
	{
		char controller4vul_108[2];
		fgets(controller4vul_108 ,2 ,stdin);
		if( strcmp( controller4vul_108, ".") > 0)
		{
			unsigned_int_2 = v_pager_kv_io_init(char_1,short_1,short_2,uni_para);

		}
		unsigned_int_2 = unsigned_int_1;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 + char_1;
	if(1)
	{
		char_2 = char_2 + char_2;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1;
		double_4 = double_2 * double_3;
	}
	double_5 = double_5;
	long_1 = long_1;
	short_1 = short_2 + short_1;
	short_4 = short_3 + short_4;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		short_3 = short_3 + short_2;
		if(1)
		{
			long long_2 = 1;
			long long_4 = 1;
			long_3 = long_1 + long_2;
			long_3 = long_3 * long_4;
		}
		unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
	}
	long_3 = long_3 * long_5;
	double_3 = double_3 + double_2;
	if(1)
	{
		double_2 = double_3 * double_4;
	}
	int_2 = int_4 + int_3;
	unsigned_int_7 = unsigned_int_6 * unsigned_int_4;
}
int v_randomByte()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	char char_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	int_1 = int_1;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_1 = int_2;
	char_3 = char_2 * char_2;
	return int_1;
}
float v_SyRandomness( int parameter_1,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float_2 = float_1 * float_1;
	int_1 = v_randomByte();

	short_3 = short_1 * short_2;
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
			int int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_4 = 1;
			char char_1 = 1;
			double double_5 = 1;
			char char_3 = 1;
			if(1)
			{
				int int_2 = 1;
				int_2 = int_1;
			}
			int_1 = int_3;
			double_2 = double_1 * double_2;
			if(1)
			{
				double_3 = double_2 * double_2;
			}
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			double_4 = double_2 * double_3;
			if(1)
			{
				double_4 = double_4 * double_2;
			}
			double_1 = double_1 * double_4;
			double_1 = double_3 + double_1;
			if(1)
			{
				char char_2 = 1;
				char_1 = char_2;
			}
			double_4 = double_5;
			char_3 = char_1 + char_3;
		}
	}
	return float_1;
}
long v_SyOSUtilRandomSeed(char parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return long_1;
	long_1 = v_SyMemcpy(int_1,unsigned_int_1);

}
long v_SyRandomnessInit( long parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	long long_4 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double_2 = double_1 * double_2;
	int_1 = int_2;
	double_4 = double_2 * double_3;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1 * double_5;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_6 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_5 = double_6 + double_4;
		long_2 = long_2 * long_3;
		long_4 = v_SyOSUtilRandomSeed(char_1);

		float_2 = float_1 + float_1;
		long_4 = long_2 + long_2;
	}
	int_1 = int_3 * int_3;
	return long_1;
}
short v_vedisGenError( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double_1 = v_SyStrlen(short_1);

	long_1 = long_1;
	short_1 = v_SyBlobAppend(int_1,long_2,long_2,-1 );

	float_1 = float_2;
	int_1 = int_1 * int_2;
	return short_1;
}
void v_vedisFindKVStore( char parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long_2 = long_1 * long_1;
	double_2 = double_1 + double_1;
	double_1 = double_2 + double_1;
	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = v_SyStrlen(short_1);

		v_SyStrnicmp(double_2,long_1,char_1);

		int_2 = int_3 + int_1;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "Bc") > 0)
		{
		}
	}
}
void v_SyStrnicmp( double parameter_1,long parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_1;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		char char_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		}
		int_2 = int_2 * int_2;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		int_2 = int_2 * int_2;
		if(1)
		{
		}
		if(1)
		{
			char char_2 = 1;
			char_3 = char_1 + char_2;
		}
		unsigned_int_3 = unsigned_int_1;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
		int_1 = int_3 + int_1;
		if(1)
		{
		}
		if(1)
		{
			int_1 = int_2 * int_3;
		}
		char_1 = char_3 * char_4;
		short_1 = short_1 * short_2;
		double_4 = double_2 * double_3;
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
		}
		char_1 = char_4 * char_1;
		double_5 = double_5;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
}
float v_vedisInMemory( char parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double_1 = v_SyStrlen(short_1);

	double_1 = double_1 * double_1;
	if(1)
	{
	}
	v_SyStrnicmp(double_1,long_1,char_1);

	int_1 = int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
}
char v_vedisPagerOpen( int parameter_1,float parameter_2,float parameter_3,char parameter_4,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	int int_3 = 1;
	char char_5 = 1;
	float float_3 = 1;
	short short_4 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char char_7 = 1;
	char_3 = char_1 + char_2;
	float_2 = float_1 * float_1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 * double_2;
	double_4 = double_1 * double_2;
	if(1)
	{
		char_1 = char_2 + char_3;
		short_3 = short_1 + short_2;
	}
	char controller4vul_105[3];
	fgets(controller4vul_105 ,3 ,stdin);
	if( strcmp( controller4vul_105, "@^") < 0)
	{
		char_1 = char_3 + char_4;
		char controller4vul_106[3];
		fgets(controller4vul_106 ,3 ,stdin);
		if( strcmp( controller4vul_106, "JM") > 0)
		{
			v_vedisPagerRegisterKvEngine(long_1,double_2,uni_para);

			unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		}
	}
	if(1)
	{
		long_2 = long_2 * long_3;
	}
	double_3 = double_1 * double_5;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_2;
	long_3 = long_2;
	short_3 = short_3;
	if(1)
	{
		double_4 = double_4 + double_3;
	}
	double_6 = double_3 + double_5;
	int_1 = int_2 * int_3;
	if(1)
	{
		char_1 = char_2 * char_4;
		char_3 = char_3 * char_5;
	}
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
	float_2 = float_3 + float_3;
	short_4 = short_2;
	double_5 = double_5 + double_2;
	unsigned_int_2 = unsigned_int_4;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
	if(1)
	{
		unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
		double_7 = double_1 * double_3;
	}
	double_6 = double_1;
	double_9 = double_4 + double_8;
	short_4 = short_1;
	long_2 = long_2 * long_2;
	float_1 = float_3;
	int_4 = int_1;
	double_1 = double_8 * double_8;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_6;
	long_4 = long_1 + long_3;
	if(1)
	{
		short short_5 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_5 = 1;
		char char_6 = 1;
		short short_6 = 1;
		short_3 = short_5 * short_3;
		unsigned_int_3 = unsigned_int_7;
		if(1)
		{
			int_5 = int_4;
		}
		if(1)
		{
			char_6 = char_4 + char_5;
			unsigned_int_6 = unsigned_int_5 * unsigned_int_7;
			double_4 = double_3;
		}
		if(1)
		{
			int_4 = int_5 * int_4;
		}
		char_4 = char_6 * char_4;
		if(1)
		{
			long_4 = long_2;
			long_3 = long_1 + long_3;
		}
		unsigned_int_1 = unsigned_int_7 + unsigned_int_1;
		short_1 = short_6 * short_1;
		int_3 = int_3 + int_4;
	}
	long_5 = long_4 * long_5;
	if(1)
	{
		float_2 = float_1 * float_3;
	}
	if(1)
	{
		char_5 = char_5 * char_3;
		double_7 = double_2 + double_2;
	}
	if(1)
	{
		int int_6 = 1;
		double_7 = double_7 + double_9;
		int_6 = int_6 + int_1;
	}
	long_4 = long_6 + long_5;
	return char_7;
}
void v_vedisSanityzeFlag( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_5;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		double double_2 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_6;
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
		}
	}
}
void v_vedisInitDatabase( long parameter_1,char parameter_2,float parameter_3,char parameter_4,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long_2 = long_1 * long_1;
	double_2 = double_1 * double_1;
	int_1 = int_1 + int_1;
	char controller4vul_104[2];
	fgets(controller4vul_104 ,2 ,stdin);
	if( strcmp( controller4vul_104, "9") > 0)
	{
		char_1 = v_vedisPagerOpen(int_1,float_1,float_1,char_1,uni_para);

		int_1 = int_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_1;
	double_3 = double_1 * double_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_2 + int_2;
	double_3 = double_3 + double_4;
	char_2 = char_1 + char_1;
	long_2 = long_3 * long_2;
	if(1)
	{
	}
	int_2 = int_2 + int_3;
	int_4 = int_1 * int_4;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
}
void v_lhCursorReset( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double_1 = double_1 * double_2;
	long_1 = v_lhCursorFirst(double_3);

}
float v_lhCursorData( char parameter_1,char parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_2;
	float_1 = float_1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	v_lhConsumeCellData(float_1,long_1,long_1);

	int_1 = int_3 + int_3;
	return float_1;
}
double v_lhCursorDataLength( unsigned int parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long_2 = long_1 + long_1;
	char_1 = char_1;
	if(1)
	{
	}
	char_1 = char_2 + char_1;
	float_1 = float_1 + float_1;
	return double_1;
}
char v_lhCursorKey( unsigned int parameter_1,long parameter_2,double parameter_3)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	float_1 = float_1;
	long_2 = long_1 + long_2;
	unsigned_int_1 = v_lhConsumeCellkey(float_1,long_1,double_1,int_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
	}
	float_1 = float_1;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_2;
	}
	return char_2;
}
short v_lhCursorKeyLength( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	short_1 = short_1;
	return short_1;
}
double v_lhRecordRemove( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int_2 = int_1 * int_2;
	int_2 = int_2 + int_1;
	if(1)
	{
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float_1 = v_SyBigEndianUnpack64(unsigned_int_1,float_2);

		double_2 = double_1 * double_1;
		v_lhRestorePage(char_1,unsigned_int_2);

		long_1 = long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_3 = 1;
			char char_3 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_3 = 1;
			int_1 = int_1 * int_3;
			if(1)
			{
			}
			char_2 = v_lhUnlinkCell(unsigned_int_2);

			double_2 = double_1;
			char_4 = char_1 + char_3;
			if(1)
			{
			}
			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
			if(1)
			{
				long long_3 = 1;
				long_3 = long_3 * long_3;
			}
		}
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	return double_1;
}
long v_lhCursorDelete( int parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double_1 = v_lhRecordRemove(short_1);

	short_2 = short_1 + short_1;
	double_1 = double_1 * double_1;
	short_2 = short_3;
	if(1)
	{
	}
	float_1 = float_2;
	short_1 = short_2 + short_4;
	int_2 = int_1 + int_1;
	return long_1;
}
float v_lhCursorPrev( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_1;
	double_2 = double_1 + double_1;
	char_1 = char_1;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	double_2 = double_1 * double_3;
	double_2 = double_3 * double_2;
	if(1)
	{
		double_2 = double_3 * double_1;
	}
	return float_1;
	int_3 = v_lhCursorPrevPage(short_1);

}
void v_lhCursorNext( short parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float_1 = float_1;
	short_1 = v_lhCursorNextPage(float_2);

	double_1 = double_2;
	double_2 = double_2 + double_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 * int_2;
	}
	double_2 = double_1 + double_1;
	long_1 = long_1;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 * double_3;
	}
}
double v_lhCursorValid( short parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_1;
	return double_1;
}
int v_lhCursorPrevPage( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int_1 = int_2;
	char_1 = char_1;
	int_1 = int_1 + int_1;
	int_1 = int_2 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float_1 = v_lhLoadPage(char_1,char_2,int_2,long_1,int_1);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
		}
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long long_4 = 1;
			long_3 = long_2 * long_1;
			long_4 = long_3 + long_3;
		}
		short_1 = short_1;
		int_1 = int_2 * int_2;
		if(1)
		{
		}
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			int_2 = int_1 * int_3;
			int_4 = int_5;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		}
		short_2 = short_1;
	}
	return int_2;
}
long v_lhCursorLast( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1 + char_1;
	int_1 = int_2;
	if(1)
	{
		double double_1 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int_3 = v_lhCursorPrevPage(short_1);

		double_1 = double_1 * double_1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "_") < 0)
		{
		}
		int_1 = int_4 + int_5;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_2;
	return long_1;
}
short v_lhCursorNextPage( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_6 = 1;
	long long_1 = 1;
	char char_3 = 1;
	float float_3 = 1;
	int_2 = int_1 + int_2;
	int_2 = int_3 * int_1;
	double_2 = double_1 + double_2;
	char_2 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		double double_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_5 = 1;
		int_4 = int_3;
		if(1)
		{
			double double_4 = 1;
			double_4 = double_3 * double_1;
		}
		if(1)
		{
			short_1 = short_1 * short_2;
			int_3 = int_1;
		}
		short_3 = short_1 * short_2;
		int_5 = int_5 * int_1;
		if(1)
		{
		}
		if(1)
		{
			long long_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int_4 = int_6 * int_2;
			long_1 = long_2;
			float_2 = float_1 + float_2;
			char_2 = char_3;
		}
		float_3 = v_lhLoadPage(char_3,char_2,int_2,long_1,int_6);

		double_2 = double_3 * double_1;
	}
	return short_1;
}
long v_lhCursorFirst( double parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int_1 = int_1 * int_1;
	double_2 = double_1 * double_1;
	int_2 = int_1;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		short_1 = v_lhCursorNextPage(float_1);

		int_1 = int_1;
		if(1)
		{
		}
		int_3 = int_3 + int_4;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	return long_1;
}
unsigned int v_lhRecordLookup( char parameter_1,int parameter_2,float parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = v_lhMapFindBucket(short_1,unsigned_int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2;
	char_1 = char_1 * char_1;
	float_1 = v_lhLoadPage(char_1,char_2,int_1,long_3,int_1);

	int_2 = int_3;
	double_1 = double_1;
	double_2 = double_1;
	int_2 = int_4 + int_4;
	if(1)
	{
	}
	char_1 = char_2 + char_1;
	double_2 = double_3 + double_4;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_2 + float_1;
	}
	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
	}
	double_4 = double_3;
	if(1)
	{
	}
	short_1 = v_lhFindCell(short_1,unsigned_int_4,float_4,short_1);

	short_3 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	return unsigned_int_5;
}
int v_lhCursorSeek( float parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_1 + int_1;
	long_2 = long_1 + long_2;
	char_2 = char_1 * char_2;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_1 = 1;
		int_4 = int_2 * int_3;
		char_3 = char_4;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	long_3 = long_2 * long_3;
	return int_5;
	unsigned_int_2 = v_lhRecordLookup(char_2,int_5,float_1,float_2);

}
unsigned int v_lhInitCursor( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_1;
	double_1 = double_1 + double_1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	char_1 = char_1 * char_2;
	double_1 = double_2 * double_2;
	return unsigned_int_2;
}
long v_lhash_kv_append( float parameter_1,char parameter_2,int parameter_3,char parameter_4,short parameter_5)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short_1 = v_lh_record_insert(unsigned_int_1,double_1,unsigned_int_1,double_1,unsigned_int_2,int_1);

	int_4 = int_2 + int_3;
	char_1 = char_2;
	return long_1;
}
void v_lhRestorePage( char parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	int_1 = v_SyBigEndianPack64(double_1,double_1);

	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
	}
	int_4 = int_2 + int_3;
	double_2 = double_1 * double_1;
	char_1 = char_1 * char_1;
}
float v_lhRecordOverwrite( int parameter_1,float parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_7 = 1;
	double double_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_8 = 1;
	short short_4 = 1;
	long long_6 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_5 = 1;
	long long_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_6 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_1;
	float_1 = v_SyBigEndianUnpack64(unsigned_int_3,float_1);

	double_1 = double_2 + double_1;
	short_3 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1;
	int_1 = int_1;
	int_1 = int_2 * int_3;
	unsigned_int_4 = unsigned_int_4;
	int_6 = int_4 * int_5;
	if(1)
	{
	}
	if(1)
	{
		long_1 = v_SyMemcpy(int_2,unsigned_int_4);

		double_2 = double_2;
		if(1)
		{
			float_2 = float_2 + float_2;
		}
		if(1)
		{
			long_2 = long_2 * long_2;
			double_2 = double_2 + double_2;
			long_1 = long_1 * long_2;
			long_2 = long_3 * long_2;
		}
		if(1)
		{
			char_1 = char_2;
			char_1 = char_2;
			if(1)
			{
				long long_4 = 1;
				int_7 = int_1 + int_3;
				if(1)
				{
				}
				int_4 = int_7 * int_4;
				long_3 = long_4 * long_2;
				char_1 = char_1 * char_1;
			}
			if(1)
			{
				double double_4 = 1;
				double_3 = double_1 + double_3;
				long_1 = v_lhCellWriteOvflPayload(float_3,float_2,unsigned_int_5,long_3);

				short_3 = short_2 + short_2;
				int_6 = int_2 + int_1;
				double_1 = double_4;
			}
		}
	}
	int_6 = int_3 + int_6;
	if(1)
	{
	}
	long_5 = long_3 + long_3;
	short_3 = short_2 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_7;
		}
		if(1)
		{
			int_2 = int_3 * int_2;
		}
		int_7 = int_8 + int_4;
		if(1)
		{
			double_3 = double_3 * double_1;
			double_3 = v_lhRestoreSpace(short_4,short_4,long_6);

			short_3 = short_1 + short_4;
		}
	}
	float_4 = v_lhMoveLocalCell(float_5,short_5,long_7,int_5);

	unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
	float_2 = float_2 * float_5;
	double_6 = double_5 * double_3;
	float_5 = float_3 * float_6;
	char_3 = char_2 + char_3;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_5 = 1;
		int int_9 = 1;
		long long_8 = 1;
		short_1 = short_3 * short_5;
		if(1)
		{
			int_7 = int_1;
		}
		if(1)
		{
			char char_4 = 1;
			char_5 = char_2 + char_4;
			if(1)
			{
			}
			int_8 = int_2 * int_9;
			if(1)
			{
			}
			long_5 = long_6 + long_7;
			short_3 = v_lhAllocateSpace(long_2,float_4,long_1);

			int_5 = int_6 + int_2;
			int_1 = int_1 * int_9;
			unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
			v_lhRestorePage(char_2,unsigned_int_8);

			long_7 = long_2;
			double_6 = v_lhAcquirePage(long_5,char_3);

			short_4 = short_4 * short_1;
		}
		char_3 = char_1 * char_5;
		long_5 = long_8 * long_7;
		if(1)
		{
			int_3 = int_9 + int_8;
		}
		int_6 = v_SyBigEndianPack64(double_3,double_7);

		float_2 = float_4;
		unsigned_int_7 = unsigned_int_8 * unsigned_int_3;
		long_5 = long_2 + long_1;
	}
	unsigned_int_5 = unsigned_int_9 + unsigned_int_1;
	double_1 = double_1;
	float_3 = float_3 * float_2;
	return float_5;
}
float v_lhMoveLocalCell( float parameter_1,short parameter_2,long parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	long_2 = long_1 + long_1;
	double_1 = double_1;
	double_1 = v_lhCellWriteLocalPayload(double_1,int_1,long_3,double_2,unsigned_int_1);

	int_2 = int_1 + int_1;
	unsigned_int_1 = v_lhCellWriteHeader(float_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_2 = int_2;
	}
	if(1)
	{
		float float_2 = 1;
		long long_4 = 1;
		v_lhFindSibeling(char_1);

		float_1 = float_2 + float_2;
		long_2 = long_2 * long_4;
	}
	int_4 = int_3 + int_2;
	double_1 = double_1 * double_1;
	int_1 = v_SyBigEndianPack16(int_2,char_2);

	double_1 = double_2;
	int_3 = int_3 + int_3;
	return float_1;
}
int v_lhRecordAppend( char parameter_1,long parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_7 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_8 = 1;
	double double_8 = 1;
	char char_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 * short_2;
	short_3 = v_SyBlobAppend(int_1,long_1,long_2,-1 );

	float_1 = float_1 * float_2;
	short_4 = short_1 + short_3;
	int_1 = int_1 * int_2;
	int_3 = int_2 * int_1;
	long_1 = long_2 + long_3;
	float_2 = float_2 * float_1;
	int_4 = int_2 + int_4;
	if(1)
	{
		float_3 = float_2;
	}
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1 + double_2;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			double_3 = double_2 * double_2;
			if(1)
			{
			}
			char_4 = char_2 + char_2;
			unsigned_int_5 = unsigned_int_3 * unsigned_int_3;
			double_2 = double_2 * double_1;
		}
		if(1)
		{
			long_2 = v_SyMemcpy(int_3,unsigned_int_5);

			float_3 = float_1;
			char_1 = char_2 + char_2;
			int_2 = int_1 + int_4;
			int_1 = int_4 * int_5;
			double_3 = v_lhRestoreSpace(short_4,short_1,long_1);

			float_3 = float_3;
			if(1)
			{
				double_4 = double_3 + double_1;
			}
			if(1)
			{
				short_4 = short_4;
			}
			double_2 = double_5;
			int_3 = int_5 + int_3;
			int_2 = int_1;
		}
	}
	short_5 = v_lhAllocateSpace(long_3,float_1,long_2);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
	}
	int_4 = int_5;
	float_3 = v_SyBigEndianUnpack64(unsigned_int_1,float_3);

	long_3 = long_4;
	long_1 = v_lhCellWriteOvflPayload(float_2,float_3,unsigned_int_4,long_5);

	long_5 = long_1 * long_5;
	int_5 = int_6 + int_3;
	char_2 = char_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
			}
			long_1 = long_3;
			if(1)
			{
			}
			double_4 = double_5 + double_4;
			int_1 = v_SyBlobInit(unsigned_int_6,unsigned_int_3);

			double_3 = double_2;
			int_3 = int_1 * int_3;
			double_4 = double_1;
			int_6 = int_1 + int_1;
			int_1 = int_1 * int_7;
		}
		char controller_13[3];
		fgets(controller_13 ,3 ,stdin);
		if( strcmp( controller_13, "62") < 0)
		{
			long_4 = long_1 + long_4;
			unsigned_int_6 = unsigned_int_1 * unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 + unsigned_int_6;
		}
		double_1 = double_6;
	}
	int_7 = int_6 + int_1;
	int_5 = v_SyBigEndianPack64(double_3,double_7);

	int_7 = int_1 + int_5;
	short_3 = short_2 + short_2;
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_7 = 1;
		char char_6 = 1;
		int_3 = int_3 * int_5;
		if(1)
		{
			double_1 = double_7 + double_6;
		}
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			int_1 = int_8 * int_7;
			if(1)
			{
			}
			double_4 = double_1 * double_1;
			if(1)
			{
			}
			double_4 = double_3;
			int_7 = int_2;
			double_8 = v_lhAcquirePage(long_3,char_5);

			int_2 = int_1 + int_5;
			unsigned_int_7 = unsigned_int_2 * unsigned_int_2;
			unsigned_int_1 = unsigned_int_8;
			long_5 = v_SyBlobRelease(char_5);

			int_7 = int_1 + int_4;
		}
		unsigned_int_3 = unsigned_int_7 + unsigned_int_3;
		char_2 = char_5 + char_6;
		if(1)
		{
			double_6 = double_1;
		}
		char_6 = char_4 + char_4;
		double_4 = double_3 * double_3;
		short_2 = short_2 * short_4;
	}
	float_3 = v_lhMoveLocalCell(float_1,short_1,long_1,int_4);

	unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
	int_4 = int_5 * int_8;
	short_1 = short_3 + short_4;
	return int_6;
}
void v_lhFindSibeling( char parameter_1)
{
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_2;
		if(1)
		{
		}
	}
}
char v_lhUnlinkCell( unsigned int parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	int int_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	int_1 = int_1 + int_1;
	char_3 = char_1 * char_2;
	char_5 = char_2 + char_4;
	unsigned_int_1 = unsigned_int_2;
	double_1 = v_lhRestoreSpace(short_1,short_2,long_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		double double_2 = 1;
		float_1 = float_1 + float_3;
		int_1 = v_SyBigEndianPack16(int_2,char_1);

		double_2 = double_2;
	}
	if(1)
	{
		float_3 = float_1 * float_1;
		v_lhFindSibeling(char_3);

		short_1 = short_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 * int_3;
	}
	short_3 = short_2 + short_1;
	long_2 = long_1 * long_1;
	return char_3;
	char_1 = v_lhCellDiscard(short_1);

}
void v_lhConsumeCellData( float parameter_1,long parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int_3 = int_1 + int_2;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	short_3 = short_1 + short_2;
	float_1 = float_1;
	if(1)
	{
		double_3 = double_1 + double_2;
		double_3 = double_4 + double_4;
		if(1)
		{
			char char_2 = 1;
			char_1 = char_1 + char_2;
		}
	}
	if(1)
	{
		char char_3 = 1;
		double double_5 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char_3 = char_3 + char_1;
		double_1 = double_5 * double_2;
		int_4 = int_2;
		float_2 = v_SyBigEndianUnpack64(unsigned_int_3,float_3);

		double_4 = double_5;
		long_3 = long_1 + long_2;
		unsigned_int_4 = unsigned_int_1;
		long_3 = long_1 + long_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_5 = 1;
			short short_4 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			if(1)
			{
				double_1 = double_5;
			}
			unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
			if(1)
			{
			}
			short_4 = short_4;
			if(1)
			{
				unsigned_int_7 = unsigned_int_6 + unsigned_int_4;
				float_2 = float_3;
				double_1 = double_4 + double_4;
			}
			if(1)
			{
				long long_4 = 1;
				long_1 = long_3 + long_4;
				unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
			}
			if(1)
			{
				double_4 = double_3 + double_6;
				if(1)
				{
					double_4 = double_2 * double_5;
				}
				double_3 = double_6;
			}
			if(1)
			{
				if(1)
				{
					int_1 = int_4;
					if(1)
					{
						unsigned_int_7 = unsigned_int_1;
					}
					double_6 = double_6 * double_3;
				}
			}
			int_1 = int_3 * int_2;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_6;
		}
		double_6 = double_7 + double_4;
	}
}
long v_SyBlobReset( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		double_2 = double_3;
		int_2 = int_1 * int_2;
		float_1 = float_1 * float_1;
	}
	return long_1;
}
double v_SyBlobDup( int parameter_1,short parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short_1 = v_SyBlobAppend(int_1,long_1,long_1,-1 );

	int_1 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	return double_1;
}
int v_lhTransferCell( short parameter_1,long parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	short short_5 = 1;
	int int_3 = 1;
	float float_2 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	short short_6 = 1;
	long long_2 = 1;
	char_1 = v_lhNewCell(long_1,int_1);

	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v_lhInstallCell();

	double_2 = double_2 * double_2;
	int_2 = int_1 + int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
		}
	}
	short_1 = short_1 * short_2;
	if(1)
	{
	}
	short_3 = short_2 + short_3;
	int_2 = int_1 + int_2;
	short_2 = short_4 * short_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_1 = v_lhCellWriteHeader(float_1);

	int_1 = int_1;
	short_5 = short_2 + short_1;
	double_1 = v_SyBlobDup(int_3,short_1);

	float_2 = float_1 + float_2;
	char_1 = v_lhFindSlavePage(double_1,int_2,float_1,char_2);

	int_4 = int_2 * int_2;
	if(1)
	{
	}
	double_3 = double_2 + double_1;
	return int_2;
	short_6 = v_lhAllocateSpace(long_1,float_2,long_2);

}
float v_lhPageSplit( short parameter_1,double parameter_2,char parameter_3,long parameter_4)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	char char_5 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	float_2 = float_1 + float_2;
	int_3 = int_2;
	long_1 = v_SyBlobReset(int_2);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_3 = 1;
		if(1)
		{
			double_1 = double_1 * double_2;
		}
		int_3 = v_lhTransferCell(short_1,long_1);

		int_5 = int_1 + int_4;
		short_1 = v_vedisDataConsumer(double_1,char_1);

		long_2 = v_SyBlobRelease(char_1);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			char char_2 = 1;
			int_3 = int_5 * int_2;
			if(1)
			{
				short short_2 = 1;
				unsigned_int_3 = v_lhStoreCell(unsigned_int_4,float_3,unsigned_int_2,int_2,char_1,char_1,int_3);

				short_1 = short_2 + short_2;
			}
			if(1)
			{
				double_2 = double_1 * double_1;
				if(1)
				{
					long_2 = long_1 * long_1;
					if(1)
					{
						int_4 = int_2 * int_3;
					}
				}
				double_2 = double_2 * double_2;
				if(1)
				{
					unsigned_int_1 = unsigned_int_3;
				}
				int_6 = v_SyBlobInit(unsigned_int_1,unsigned_int_4);

				v_lhConsumeCellData(float_2,long_1,long_1);

				double_2 = double_3;
			}
			if(1)
			{
				unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
			}
			char_1 = char_2 * char_2;
		}
		double_1 = double_3 + double_1;
	}
	unsigned_int_5 = v_lhConsumeCellkey(float_2,long_3,double_1,int_6);

	char_3 = char_4;
	short_3 = short_1 * short_1;
	return float_1;
	char_5 = v_lhUnlinkCell(unsigned_int_4);

}
int v_lhSplit( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_4 = 1;
	double_1 = v_lhAcquirePage(long_1,char_1);

	double_2 = double_2;
	unsigned_int_1 = unsigned_int_1;
	int_1 = v_lhNewPage(int_2,float_1,long_1);

	double_2 = double_2 + double_3;
	char_1 = char_2 * char_1;
	float_2 = float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_1 * double_3;
	if(1)
	{
	}
	float_3 = v_lhLoadPage(char_2,char_3,int_1,long_1,int_2);

	int_2 = int_2 * int_1;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
	}
	double_1 = double_2 + double_3;
	if(1)
	{
		short_1 = short_1 + short_2;
	}
	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
		short_3 = short_3;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
		float_2 = v_lhPageSplit(short_1,double_3,char_3,long_2);

		char_2 = char_1 * char_1;
	}
	float_2 = float_2 + float_1;
	long_1 = long_1;
	if(1)
	{
	}
	if(1)
	{
		short short_4 = 1;
		float_2 = v_lhSetEmptyPage(float_2);

		short_2 = short_3 * short_1;
		long_1 = long_3;
		long_2 = v_lhMapWriteRecord(float_3,double_2,int_1);

		short_1 = short_4;
		if(1)
		{
			char char_4 = 1;
			char_2 = char_4 * char_2;
		}
		unsigned_int_4 = v_lhMapFindBucket(short_5,unsigned_int_1);

		int_1 = int_3;
		int_4 = v_SyBigEndianPack64(double_4,double_5);

		char_1 = char_2;
	}
	if(1)
	{
		int_4 = int_2 + int_3;
	}
	long_3 = long_4 * long_1;
	return int_3;
}
long v_lhRecordInstall( long parameter_1,double parameter_2,long parameter_3,int parameter_4,char parameter_5,long parameter_6)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long_1 = long_2;
	long_1 = long_1 + long_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned_int_1 = v_lhStoreCell(unsigned_int_2,float_1,unsigned_int_3,int_1,char_1,char_1,int_2);

		unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
		char_2 = char_2 + char_3;
		if(1)
		{
			int int_4 = 1;
			if(1)
			{
			}
			int_3 = v_lhSplit(short_1,int_1);

			int_4 = int_3;
		}
	}
	return long_3;
}
int v_lhKeyCmp( long parameter_1,double parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
		}
	}
	double_1 = double_2;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	return int_2;
}
short v_lhFindCell( short parameter_1,unsigned int parameter_2,float parameter_3,short parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		if(1)
		{
			short_1 = short_1 * short_1;
		}
		if(1)
		{
			if(1)
			{
				int int_1 = 1;
				double double_3 = 1;
				short short_3 = 1;
				int_2 = int_1 + int_2;
				double_1 = double_2 * double_3;
				double_3 = double_2 + double_1;
				unsigned_int_1 = v_lhConsumeCellkey(float_1,long_2,double_2,int_2);

				int_2 = int_2 * int_2;
				short_2 = short_1;
				int_2 = v_lhKeyCmp(long_3,double_2);

				short_3 = short_1 * short_2;
				if(1)
				{
				}
			}
			if(1)
			{
			}
		}
		float_3 = float_1 * float_2;
	}
	return short_2;
}
short v_vedisDataConsumer( double parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long_2 = long_1 + long_1;
	char_3 = char_1 * char_2;
	return short_1;
	short_2 = v_SyBlobAppend(int_1,long_1,long_1,-1 );

}
unsigned int v_lhConsumeCellkey( float parameter_1,long parameter_2,double parameter_3,int parameter_6)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float_1 = v_SyBigEndianUnpack64(unsigned_int_1,float_2);

	char_1 = char_2;
	double_3 = double_1 * double_2;
	long_1 = long_2;
	short_1 = v_SyBigEndianUnpack16(char_2,int_1);

	double_4 = double_3 + double_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		short_2 = short_1 + short_2;
		int_1 = int_1 + int_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_8 = 1;
		int_4 = int_2 + int_3;
		double_2 = double_4;
		int_2 = int_2;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		long_1 = long_2 + long_1;
		char_3 = char_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_5 = 1;
			short short_3 = 1;
			short short_4 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_7 = 1;
			if(1)
			{
				double_4 = double_5 + double_2;
			}
			short_3 = short_4;
			if(1)
			{
			}
			unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
			if(1)
			{
				char char_4 = 1;
				char char_5 = 1;
				int_5 = int_4;
				int_3 = int_2 * int_3;
				char_5 = char_4 + char_3;
				unsigned_int_7 = unsigned_int_3 * unsigned_int_7;
				if(1)
				{
					unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
				}
				double_5 = double_4 * double_5;
			}
			if(1)
			{
				int int_6 = 1;
				int int_7 = 1;
				int_5 = int_6 * int_7;
				if(1)
				{
					unsigned_int_2 = unsigned_int_3 * unsigned_int_5;
				}
				unsigned_int_7 = unsigned_int_2 * unsigned_int_5;
			}
			if(1)
			{
				float float_3 = 1;
				float float_4 = 1;
				float_4 = float_3 * float_4;
				if(1)
				{
					unsigned_int_7 = unsigned_int_7 * unsigned_int_2;
				}
				float_1 = float_3 * float_2;
			}
			unsigned_int_1 = unsigned_int_3;
			short_3 = short_3 * short_2;
		}
		unsigned_int_2 = unsigned_int_3 + unsigned_int_8;
	}
	return unsigned_int_5;
}
char v_lhParseOneCell( double parameter_1,float parameter_2,long parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	short short_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_2 = double_1 + double_2;
	int_2 = int_1 + int_1;
	int_1 = int_2 * int_3;
	char_1 = v_lhNewCell(long_1,int_1);

	short_1 = short_1 + short_1;
	double_1 = double_3 + double_3;
	int_1 = int_4 + int_1;
	long_1 = v_SyBlobRelease(char_2);

	short_1 = short_2 * short_2;
	unsigned_int_5 = v_lhConsumeCellkey(float_1,long_2,double_2,int_2);

	long_2 = long_1 + long_2;
	short_2 = v_SyBigEndianUnpack16(char_3,int_2);

	unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
	int_2 = int_2;
	double_3 = v_SyBigEndianUnpack32(int_4,float_2);

	short_3 = v_vedisDataConsumer(double_3,char_4);

	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
	}
	short_1 = short_2 + short_2;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_6;
	if(1)
	{
	}
	float_3 = float_1 + float_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	char_3 = char_4 + char_2;
	double_2 = double_3 + double_3;
	v_lhInstallCell();

	double_4 = double_3 + double_2;
	unsigned_int_6 = unsigned_int_6 * unsigned_int_7;
	float_5 = float_2 * float_4;
	double_1 = double_4 + double_5;
	if(1)
	{
		char char_5 = 1;
		char_5 = char_2 * char_4;
	}
	short_1 = short_3 + short_1;
	if(1)
	{
	}
	if(1)
	{
		float_5 = v_SyBigEndianUnpack64(unsigned_int_8,float_3);

		int_3 = int_1;
	}
	return char_4;
}
long v_lhPageFreeSpace( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	int_3 = int_1 + int_2;
	int_4 = int_2 + int_3;
	long_2 = long_1 * long_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	double_1 = double_1 * double_1;
	float_3 = float_2 + float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		int_3 = int_3 + int_4;
		long_1 = long_3;
		double_1 = double_2 + double_2;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1;
		}
		short_2 = v_SyBigEndianUnpack16(char_1,int_2);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
		}
	}
	short_2 = short_2 + short_3;
	return long_3;
}
double v_lhLoadCells( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	long long_2 = 1;
	char_3 = char_1 + char_2;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_3 = v_lhParseOneCell(double_3,float_1,long_1,int_1);

	char_3 = char_2 + char_3;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = double_3 + double_3;
	float_2 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		double_2 = double_2 * double_4;
		if(1)
		{
		}
		if(1)
		{
			short short_2 = 1;
			long_2 = v_lhPageFreeSpace(double_4);

			short_2 = short_1;
		}
		int_2 = int_1;
		if(1)
		{
		}
	}
	return double_1;
}
short v_lhParsePageHeader( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = v_SyBigEndianUnpack64(unsigned_int_1,float_2);

	double_2 = double_1 + double_1;
	long_3 = long_1 + long_2;
	short_1 = v_SyBigEndianUnpack16(char_1,int_1);

	double_3 = double_2 * double_3;
	short_3 = short_4;
	double_1 = double_2;
	return short_3;
}
float v_lhLoadPage( char parameter_1,char parameter_2,int parameter_3,long parameter_4,int parameter_5)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	char_1 = char_1 * char_1;
	long_2 = long_1 + long_1;
	long_2 = long_1 + long_2;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
		short_1 = v_lhParsePageHeader(int_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_3 = int_2 + int_2;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
		}
		if(1)
		{
			short short_2 = 1;
			short_2 = short_2 + short_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			if(1)
			{
				int_1 = int_2 + int_3;
			}
			double_2 = v_lhLoadCells(char_2);

			unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
		}
	}
	if(1)
	{
		double double_3 = 1;
		int_1 = v_lhNewPage(int_3,float_1,long_1);

		double_1 = double_3 * double_2;
	}
	return float_1;
}
long v_lhMapWriteRecord( float parameter_1,double parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 + int_1;
	if(1)
	{
		long long_1 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long_1 = long_2;
		double_1 = double_2;
		if(1)
		{
		}
		double_3 = v_lhAcquirePage(long_3,char_1);

		char_2 = char_1 + char_2;
		if(1)
		{
		}
		double_2 = double_3 * double_4;
		int_1 = v_SyBigEndianPack32(double_3,short_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_3 = int_1 * int_2;
		int_1 = int_2 + int_2;
		long_3 = long_4 + long_5;
		if(1)
		{
		}
		if(1)
		{
			int_1 = int_4 + int_2;
		}
		if(1)
		{
			float float_1 = 1;
			double_4 = double_3;
			float_1 = float_1 + float_1;
		}
		int_1 = v_SyBigEndianPack64(double_3,double_4);

		double_3 = double_5 * double_1;
		if(1)
		{
		}
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		double_4 = double_5;
		if(1)
		{
		}
	}
	int_5 = int_4 + int_4;
	if(1)
	{
	}
	double_3 = double_4 * double_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	int_5 = int_2 + int_5;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	int_7 = int_3 * int_6;
	if(1)
	{
		double_1 = double_2;
		if(1)
		{
			long long_6 = 1;
			long_3 = long_6;
		}
		if(1)
		{
			int int_8 = 1;
			int_8 = int_3;
			if(1)
			{
			}
			unsigned_int_4 = v_lhMapInstallBucket(float_2,unsigned_int_4,char_1);

			char_2 = char_2 * char_1;
		}
	}
	return long_2;
}
unsigned int v_lhCellWriteHeader( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_6 = 1;
	char char_1 = 1;
	long_1 = long_1 + long_2;
	int_1 = v_SyBigEndianPack64(double_1,double_1);

	double_1 = double_2 + double_2;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	long_1 = long_1;
	int_1 = int_1 * int_1;
	int_2 = int_1;
	int_5 = int_3 * int_4;
	long_3 = long_3;
	int_1 = int_4 + int_1;
	double_4 = double_1 + double_3;
	double_1 = double_4 * double_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	return unsigned_int_2;
	int_6 = v_SyBigEndianPack32(double_3,short_1);

	int_4 = v_SyBigEndianPack16(int_2,char_1);

}
double v_lhCellWriteLocalPayload( double parameter_1,int parameter_2,long parameter_3,double parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int_1 = int_1 + int_1;
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	int_2 = int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "}") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		long_1 = v_SyMemcpy(int_1,unsigned_int_2);

		short_2 = short_1 * short_2;
	}
	return double_3;
}
char v_lhCellDiscard( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		long_1 = v_SyBlobRelease(char_1);

		double_3 = double_3 + double_2;
	}
	double_3 = double_4 * double_4;
	if(1)
	{
		long long_2 = 1;
		long_1 = long_2;
	}
	int_2 = int_1 * int_2;
	char_1 = char_2 + char_2;
	double_4 = v_SyMemBackendPoolFree(int_1);

	double_1 = double_3 + double_1;
	return char_2;
}
long v_lhCellWriteOvflPayload( float parameter_1,float parameter_2,unsigned int parameter_3,long parameter_4)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	int int_6 = 1;
	char char_3 = 1;
	float float_2 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_8 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_7 = 1;
	int int_9 = 1;
	float float_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_4 = 1;
	float float_4 = 1;
	int_1 = int_1 * int_1;
	char_2 = char_1 * char_2;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 * long_1;
	double_2 = double_2 + double_1;
	float_1 = float_1;
	int_3 = int_1 + int_2;
	double_2 = double_2 + double_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_3 * double_2;
	int_1 = int_4 * int_5;
	int_1 = int_5;
	double_1 = double_4 * double_2;
	int_6 = int_5 * int_5;
	unsigned_int_1 = unsigned_int_3;
	char_3 = char_3;
	int_2 = int_3;
	float_2 = float_2 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_6 = 1;
		if(1)
		{
			double_4 = v_lhAcquirePage(long_2,char_2);

			double_4 = double_5;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_3;
			if(1)
			{
			}
			double_2 = double_2 + double_4;
			if(1)
			{
			}
			double_2 = double_4 * double_6;
			int_6 = int_3 * int_7;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
			double_1 = double_1 * double_4;
			unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
		}
		char_3 = char_1;
		int_8 = int_1 + int_7;
		if(1)
		{
			double_6 = double_1;
		}
		unsigned_int_6 = unsigned_int_6;
		int_6 = v_SyBigEndianPack64(double_5,double_4);

		int_3 = v_SyBigEndianPack16(int_6,char_2);

		unsigned_int_4 = unsigned_int_6 + unsigned_int_3;
		long_3 = long_3 * long_1;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
	short_3 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_3;
	double_2 = double_2 * double_7;
	double_1 = double_7;
	int_9 = int_8 * int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_4 = 1;
		char char_5 = 1;
		int_2 = int_7 * int_7;
		char_4 = char_4 * char_4;
		float_3 = float_2 + float_1;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_5;
		float_1 = float_2 * float_2;
		if(1)
		{
			char_4 = char_5 * char_5;
		}
		long_4 = v_SyMemcpy(int_3,unsigned_int_4);

		long_3 = long_5;
		unsigned_int_2 = unsigned_int_2;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			if(1)
			{
				int_1 = int_7 * int_4;
			}
			if(1)
			{
				int int_10 = 1;
				unsigned_int_5 = unsigned_int_1;
				if(1)
				{
					int_8 = int_9;
				}
				char_1 = char_2;
				if(1)
				{
					short_4 = short_1 + short_3;
				}
				double_6 = double_5 * double_2;
				int_10 = int_8;
				double_4 = double_7;
				unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
				int_7 = int_10;
				char_2 = char_4 * char_3;
			}
			char_5 = char_4 * char_1;
			char_4 = char_2 * char_2;
			if(1)
			{
				long_3 = long_3 * long_2;
			}
			unsigned_int_8 = unsigned_int_7 + unsigned_int_7;
			double_1 = double_7 * double_2;
			float_3 = float_2 * float_3;
		}
	}
	float_4 = float_3 * float_2;
	short_3 = short_2 * short_4;
	return long_5;
}
void v_lhInstallCell()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_4 = 1;
	char char_4 = 1;
	double_1 = double_1 + double_2;
	int_1 = int_1 * int_2;
	if(1)
	{
		short short_1 = 1;
		long_1 = long_1 + long_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		float_2 = float_1 + float_1;
		if(1)
		{
		}
		double_2 = double_1 * double_1;
		short_2 = short_1 * short_1;
		long_3 = long_1 * long_2;
	}
	unsigned_int_1 = v_SyMemBackendFree(float_1);

	int_1 = int_1 * int_1;
	double_2 = double_1;
	if(1)
	{
		long_2 = long_1 * long_1;
	}
	short_2 = v_SyZero(int_2);

	double_2 = double_2 * double_1;
	if(1)
	{
		short_4 = short_2 * short_3;
	}
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	short_5 = short_5 * short_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		double double_3 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
		short_2 = short_4;
		int_1 = int_3;
		int_1 = int_3 * int_1;
		double_1 = double_2 + double_3;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			int int_5 = 1;
			int int_6 = 1;
			int int_7 = 1;
			int int_8 = 1;
			int_3 = int_1;
			short_3 = short_3 * short_2;
			char_3 = char_1 * char_2;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				float float_3 = 1;
				if(1)
				{
					int int_4 = 1;
					int_4 = int_2 * int_3;
				}
				long_2 = long_2 + long_1;
				short_4 = short_3 + short_3;
				int_5 = int_3 * int_2;
				if(1)
				{
					float float_4 = 1;
					float_4 = float_3 * float_3;
				}
				long_3 = long_1 * long_3;
				float_2 = float_3;
				long_3 = long_4 * long_4;
			}
			int_1 = int_6 * int_3;
			double_2 = double_2 + double_3;
			int_8 = int_7 * int_5;
		}
	}
	long_4 = v_SyMemBackendAlloc(float_1,char_4,-1 );

}
int v_SyBlobInit( unsigned int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	double_3 = double_1 + double_2;
	int_2 = int_1 + int_2;
	double_3 = double_2 * double_2;
	return int_3;
}
char v_lhNewCell( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_1 = 1;
	float_1 = float_1 * float_2;
	short_1 = v_SyZero(int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	double_1 = v_SyMemBackendPoolAlloc(unsigned_int_1,int_1);

	unsigned_int_2 = unsigned_int_6 * unsigned_int_5;
	int_2 = v_SyBlobInit(unsigned_int_7,unsigned_int_2);

	unsigned_int_1 = unsigned_int_3;
	return char_1;
}
double v_lhRestoreSpace( short parameter_1,short parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_2;
	int_1 = v_SyBigEndianPack16(int_1,char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
	double_1 = double_3 + double_3;
	long_1 = long_1 * long_1;
	return double_2;
}
char v_lhFindSlavePage( double parameter_1,int parameter_2,float parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	long long_6 = 1;
	long long_7 = 1;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1;
	int_2 = int_1 * int_2;
	short_1 = short_2 + short_1;
	short_1 = short_3 + short_2;
	short_3 = short_3 * short_3;
	double_1 = double_1 * double_1;
	int_3 = int_2 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		long_1 = long_1 + long_1;
		short_3 = v_lhAllocateSpace(long_1,float_1,long_2);

		char_1 = char_2;
		if(1)
		{
			double_1 = double_2 + double_2;
			char_3 = char_1 + char_3;
		}
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "u<") > 0)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
			}
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
			}
			int_2 = int_3 + int_2;
		}
		double_1 = double_2 + double_1;
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_3 * int_2;
	if(1)
	{
		double_4 = double_1 + double_3;
	}
	double_3 = double_4;
	if(1)
	{
	}
	long_3 = long_2 * long_1;
	if(1)
	{
		double_4 = double_4;
	}
	if(1)
	{
		long long_4 = 1;
		if(1)
		{
			int_2 = v_lhNewPage(int_2,float_1,long_2);

			int_1 = v_SyBigEndianPack64(double_1,double_3);

			double_3 = double_4 + double_2;
		}
		long_1 = long_4 + long_3;
	}
	float_2 = v_lhSetEmptyPage(float_2);

	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		long long_5 = 1;
		long_3 = long_5;
	}
	char_1 = char_1 * char_3;
	int_4 = int_4 * int_3;
	double_1 = v_lhRestoreSpace(short_3,short_1,long_2);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	long_7 = long_6 + long_2;
	return char_3;
	double_3 = v_lhAcquirePage(long_6,char_3);

}
int v_lhSlaveStore( unsigned int parameter_1,long parameter_2,float parameter_3,double parameter_4,int parameter_5,float parameter_6)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char_1 = v_lhFindSlavePage(double_1,int_1,float_1,char_2);

	unsigned_int_1 = v_lhStoreCell(unsigned_int_2,float_2,unsigned_int_1,int_2,char_2,char_3,int_1);

	char_5 = char_4 + char_3;
	double_2 = double_2 + double_1;
	float_2 = float_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return int_3;
}
double v_lhPageDefragment( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	char char_2 = 1;
	short short_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_8 = 1;
	int int_6 = 1;
	char char_4 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_5 = 1;
	int_2 = int_1 + int_1;
	short_1 = short_1 + short_2;
	double_1 = double_2;
	long_3 = long_1 + long_2;
	double_4 = double_3 * double_3;
	float_1 = float_2;
	long_2 = long_2;
	double_1 = double_3 + double_2;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_8 = 1;
		if(1)
		{
			int_2 = v_SyBigEndianPack16(int_3,char_1);

			int_1 = int_2 * int_4;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			char char_3 = 1;
			short short_3 = 1;
			double double_7 = 1;
			short short_5 = 1;
			double_4 = double_1 + double_4;
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			}
			char_2 = char_3;
			short_1 = short_3 * short_4;
			int_1 = int_1;
			int_2 = v_SyBigEndianPack64(double_5,double_3);

			double_7 = double_6 * double_6;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			int_3 = int_3 * int_5;
			double_3 = double_5 + double_5;
			long_3 = v_SyMemcpy(int_5,unsigned_int_3);

			double_8 = double_7 * double_2;
			int_6 = int_6 + int_1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			char_4 = char_1 * char_1;
			short_2 = short_3 + short_5;
			int_7 = int_2 + int_1;
			if(1)
			{
				int_2 = int_1;
				unsigned_int_1 = unsigned_int_4;
			}
			if(1)
			{
				double_1 = double_5 + double_8;
			}
		}
		int_8 = int_6 * int_7;
	}
	unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		int_2 = int_1 + int_4;
		float_1 = float_1 + float_2;
		unsigned_int_6 = unsigned_int_6 * unsigned_int_7;
	}
	if(1)
	{
		int_6 = int_3 * int_7;
		double_3 = double_4 + double_8;
	}
	int_9 = v_SyBigEndianPack32(double_6,short_4);

	unsigned_int_4 = unsigned_int_6 * unsigned_int_8;
	double_4 = double_5;
	char_4 = char_5 + char_2;
	return double_5;
}
short v_SyBigEndianUnpack16( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	return short_1;
}
short v_lhAllocateSpace( long parameter_1,float parameter_2,long parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	double double_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	char char_3 = 1;
	short short_5 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	float float_3 = 1;
	double double_5 = 1;
	float float_4 = 1;
	char char_4 = 1;
	long long_3 = 1;
	long_1 = long_1;
	short_2 = short_1 * short_1;
	double_2 = double_1 + double_1;
	double_1 = v_lhPageDefragment(char_1);

	short_3 = short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_3 = double_2 * double_3;
	short_4 = short_3;
	float_2 = float_1 * float_2;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		if(1)
		{
		}
		char_1 = char_1 + char_2;
		int_1 = int_4 * int_3;
		if(1)
		{
			short_4 = v_SyBigEndianUnpack16(char_3,int_4);

			short_5 = short_1 + short_5;
		}
		long_2 = long_2 + long_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
				double_1 = double_4 * double_2;
				float_3 = float_3;
				double_1 = double_3;
				double_1 = double_5 + double_3;
			}
			if(1)
			{
			}
		}
		char_1 = char_3 * char_2;
	}
	double_3 = double_4 * double_3;
	if(1)
	{
	}
	float_4 = float_4 + float_3;
	if(1)
	{
		float float_5 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
		int_2 = int_1;
		double_5 = double_1 * double_5;
		int_1 = v_SyBigEndianPack16(int_4,char_4);

		long_1 = long_3 + long_3;
		float_5 = float_4;
		long_3 = long_3 * long_1;
	}
	if(1)
	{
		long_3 = long_2;
	}
	if(1)
	{
		int_1 = int_2;
		long_1 = long_3 + long_3;
	}
	double_2 = double_3;
	return short_5;
}
unsigned int v_lhStoreCell( unsigned int parameter_1,float parameter_2,unsigned int parameter_3,int parameter_4,char parameter_5,char parameter_6,int parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	long long_4 = 1;
	int int_4 = 1;
	double double_6 = 1;
	long long_5 = 1;
	short short_2 = 1;
	double double_7 = 1;
	float float_1 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double_2 = double_1 * double_1;
	double_3 = double_3;
	int_2 = int_1 + int_1;
	short_1 = v_SyBlobAppend(int_2,long_1,long_1,-1 );

	double_1 = v_lhCellWriteLocalPayload(double_2,int_2,long_2,double_1,unsigned_int_1);

	long_2 = long_3 + long_3;
	int_3 = int_1 * int_3;
	double_5 = double_4 + double_2;
	if(1)
	{
	}
	double_4 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		char_1 = v_lhNewCell(long_4,int_3);

		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
			}
		}
		int_4 = int_4 * int_2;
	}
	double_3 = double_6;
	if(1)
	{
		long_3 = long_4 * long_1;
	}
	long_5 = long_2 + long_3;
	short_2 = short_2 * short_2;
	double_5 = double_7;
	long_5 = long_3 + long_2;
	if(1)
	{
		short_1 = v_lhAllocateSpace(long_4,float_1,long_2);

		int_5 = v_lhSlaveStore(unsigned_int_4,long_2,float_1,double_3,int_4,float_1);

		long_5 = v_lhCellWriteOvflPayload(float_2,float_1,unsigned_int_5,long_6);

		short_2 = short_2;
	}
	unsigned_int_6 = v_lhCellWriteHeader(float_2);

	short_4 = short_2 + short_3;
	if(1)
	{
	}
	if(1)
	{
		int int_6 = 1;
		int_2 = int_6 * int_4;
		if(1)
		{
			double_3 = double_2 * double_7;
		}
	}
	if(1)
	{
		long_2 = long_1 + long_4;
	}
	v_lhInstallCell();

	char_1 = v_lhCellDiscard(short_1);

	short_4 = short_3 * short_2;
	return unsigned_int_5;
}
int v_SyBigEndianPack16( int parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float_2 = float_1 + float_1;
	float_2 = float_3 + float_1;
	double_1 = double_1;
	return int_1;
}
float v_lhSetEmptyPage( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	int int_3 = 1;
	double double_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	int int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_1;
	double_4 = double_1 * double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "BS") > 0)
	{
	}
	char_1 = char_1 + char_1;
	float_1 = float_1;
	char_2 = char_2 * char_2;
	unsigned_int_3 = unsigned_int_3;
	double_4 = double_1 + double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	double_1 = double_5;
	int_1 = int_1 + int_3;
	int_2 = v_SyBigEndianPack64(double_6,double_4);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	float_4 = float_2 + float_3;
	short_1 = short_1 * short_1;
	int_4 = v_SyBigEndianPack16(int_2,char_3);

	double_4 = double_3 * double_2;
	char_4 = char_2 + char_1;
	return float_2;
}
int v_lhNewPage( int parameter_1,float parameter_2,long parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double_1 = v_SyMemBackendPoolAlloc(unsigned_int_1,int_1);

	char_1 = char_1 * char_2;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	char_3 = char_1 * char_1;
	char_1 = char_3 * char_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "W)") == 0)
	{
		double double_2 = 1;
		double_2 = double_2 + double_2;
		double_2 = double_2 + double_1;
		int_2 = int_1 * int_2;
	}
	long_2 = long_1 * long_1;
	return int_3;
	short_1 = v_SyZero(int_2);

}
double v_lhAcquirePage( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
		if(1)
		{
			long long_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			long_3 = long_2 + long_2;
			if(1)
			{
			}
			int_1 = v_SyBigEndianPack64(double_1,double_1);

			char_3 = char_1 + char_2;
			float_1 = v_SyBigEndianUnpack64(unsigned_int_2,float_1);

			char_2 = char_4 * char_2;
			double_3 = double_1 * double_2;
		}
	}
	int_3 = int_2 * int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	return double_4;
}
unsigned int v_lhMapFindBucket( short parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 + int_2;
		}
		if(1)
		{
		}
		double_1 = double_3 * double_3;
	}
	return unsigned_int_1;
}
short v_lh_record_insert( unsigned int parameter_1,double parameter_2,unsigned int parameter_3,double parameter_4,unsigned int parameter_5,int parameter_6)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	float float_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_4 = 1;
	int int_7 = 1;
	double double_8 = 1;
	long long_5 = 1;
	long long_6 = 1;
	float_1 = v_lhLoadPage(char_1,char_2,int_1,long_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_2;
	int_3 = int_2 * int_2;
	int_1 = int_4 * int_3;
	int_1 = int_2;
	int_1 = int_5;
	double_1 = v_lhAcquirePage(long_2,char_1);

	int_1 = v_lhRecordAppend(char_3,long_1,char_1);

	int_1 = int_5 * int_5;
	double_1 = double_1;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
	}
	int_3 = int_2 * int_5;
	int_6 = v_lhNewPage(int_3,float_1,long_1);

	short_1 = v_lhFindCell(short_1,unsigned_int_2,float_2,short_3);

	short_2 = short_4 + short_2;
	double_4 = double_5;
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	}
	float_2 = v_lhRecordOverwrite(int_3,float_1,short_5);

	double_5 = double_1 * double_2;
	if(1)
	{
		double double_6 = 1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
		if(1)
		{
		}
		long_2 = long_3 + long_1;
		if(1)
		{
		}
		char_5 = char_4 + char_2;
		if(1)
		{
			double_5 = double_4 * double_2;
		}
		long_4 = v_lhMapWriteRecord(float_2,double_3,int_5);

		double_6 = double_4;
		if(1)
		{
			float float_3 = 1;
			float_3 = float_1 * float_3;
		}
		unsigned_int_3 = unsigned_int_5 * unsigned_int_3;
	}
	if(1)
	{
		double double_7 = 1;
		int int_8 = 1;
		short short_6 = 1;
		char_5 = char_2 + char_3;
		if(1)
		{
		}
		double_1 = double_7 * double_1;
		unsigned_int_4 = unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned_int_5 = v_lhStoreCell(unsigned_int_1,float_1,unsigned_int_4,int_2,char_4,char_3,int_7);

			unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
			if(1)
			{
				int_8 = int_7;
				long_3 = v_lhRecordInstall(long_3,double_8,long_5,int_2,char_1,long_6);

				int_8 = int_8 + int_7;
			}
		}
		if(1)
		{
			if(1)
			{
				int_4 = int_3 + int_4;
			}
			if(1)
			{
				float_2 = v_lhSetEmptyPage(float_1);

				int_8 = int_1 + int_5;
			}
		}
		unsigned_int_1 = v_lhMapFindBucket(short_3,unsigned_int_5);

		short_6 = short_6 * short_6;
	}
	return short_2;
}
void v_lhash_kv_replace( char parameter_1,short parameter_2,int parameter_3,short parameter_4,double parameter_5)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_1 = v_lh_record_insert(unsigned_int_1,double_1,unsigned_int_2,double_1,unsigned_int_1,int_1);

	int_3 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_2;
}
short v_MemPoolBucketAlloc( char parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_2;
	short_1 = short_1 + short_2;
	v_MemBackendAlloc(unsigned_int_1,short_1);

	int_1 = int_1 + int_2;
	int_3 = int_3;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	double_3 = double_3 * double_2;
	short_1 = short_2 * short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_1 + char_2;
		}
		float_3 = float_1 + float_2;
		char_2 = char_2 + char_1;
		short_2 = short_4 * short_1;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	return short_4;
}
double v_MemBackendPoolAlloc( int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 * int_2;
	float_1 = float_1 * float_1;
	v_MemBackendAlloc(unsigned_int_1,short_1);

	double_1 = double_1 * double_1;
	short_2 = v_MemPoolBucketAlloc(char_1,double_2);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	return double_3;
}
double v_SyMemBackendPoolAlloc( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
		int int_2 = 1;
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double_1 = v_MemBackendPoolAlloc(int_1,unsigned_int_1);

		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	return double_1;
}
unsigned int v_lhMapInstallBucket( float parameter_1,unsigned int parameter_2,char parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = v_SyMemBackendPoolAlloc(unsigned_int_1,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_2 + double_2;
	short_1 = v_SyZero(int_1);

	double_3 = double_4;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	long_1 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	long_2 = long_1 * long_2;
	double_4 = double_5 * double_6;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	short_1 = short_1 * short_2;
	if(1)
	{
		long_1 = v_SyMemBackendAlloc(float_1,char_1,-1 );

		int_3 = int_3 * int_1;
	}
	if(1)
	{
		unsigned_int_1 = v_SyMemBackendFree(float_2);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_7 = 1;
		unsigned_int_5 = unsigned_int_3;
		char_3 = char_2 * char_2;
		float_4 = float_2 + float_3;
		long_1 = long_2 + long_1;
		double_7 = double_3 * double_5;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			double double_8 = 1;
			long long_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			long long_4 = 1;
			double_5 = double_5;
			unsigned_int_6 = unsigned_int_5 + unsigned_int_4;
			double_7 = double_1 * double_8;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned int unsigned_int_7 = 1;
				unsigned int unsigned_int_8 = 1;
				if(1)
				{
					short short_3 = 1;
					short_3 = short_3 + short_2;
				}
				unsigned_int_7 = unsigned_int_2 * unsigned_int_3;
				double_3 = double_6 * double_5;
				double_4 = double_3 + double_1;
				if(1)
				{
					char_1 = char_1 * char_2;
				}
				long_1 = long_1 + long_3;
				unsigned_int_4 = unsigned_int_8 * unsigned_int_3;
				double_3 = double_8 * double_4;
			}
			double_7 = double_2 * double_7;
			int_5 = int_1 * int_4;
			long_4 = long_2 * long_3;
		}
	}
	return unsigned_int_4;
}
void v_lhMapLoadPage( int parameter_1,short parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 * int_2;
	char_2 = char_1 * char_2;
	long_2 = long_1 * long_1;
	double_2 = double_1 + double_1;
	double_2 = double_3;
	if(1)
	{
		char char_3 = 1;
		long_3 = long_3 + long_2;
		char_3 = char_1 * char_2;
		float_3 = float_1 + float_2;
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
		double_1 = v_SyBigEndianUnpack32(int_2,float_2);

		int_2 = int_2 + int_3;
		float_1 = float_3 + float_2;
		double_3 = double_1 * double_1;
		long_3 = long_1 * long_3;
		float_4 = v_SyBigEndianUnpack64(unsigned_int_1,float_5);

		double_1 = double_3;
		if(1)
		{
		}
	}
	unsigned_int_2 = v_lhMapInstallBucket(float_3,unsigned_int_1,char_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
}
float v_SyBigEndianUnpack64( unsigned int parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double_2 = double_1 * double_2;
	double_3 = double_3;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	return float_1;
}
double v_SyBigEndianUnpack32( int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return double_1;
}
double v_lhash_read_header( double parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	float float_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2;
	double_1 = double_3;
	unsigned_int_2 = unsigned_int_2;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	double_4 = double_1 * double_2;
	if(1)
	{
	}
	double_1 = double_4 * double_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	}
	int_1 = int_1;
	float_1 = float_1 + float_1;
	int_3 = int_1 + int_2;
	double_5 = v_SyBigEndianUnpack32(int_1,float_2);

	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	int_4 = int_4 + int_4;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
	double_3 = double_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	double_4 = double_1 * double_4;
	long_3 = long_1 * long_1;
	float_3 = float_3 + float_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	long_4 = long_3 * long_1;
	char_1 = char_1;
	float_4 = v_SyBigEndianUnpack64(unsigned_int_5,float_2);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_5;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_5 = 1;
		double double_6 = 1;
		long long_6 = 1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
		long_1 = long_3 + long_5;
		if(1)
		{
			double_1 = double_1 * double_5;
		}
		double_5 = double_1 + double_6;
		if(1)
		{
		}
		int_4 = int_3 + int_1;
		long_1 = long_6;
		int_1 = int_3 + int_2;
		if(1)
		{
		}
	}
	return double_4;
	v_lhMapLoadPage(int_4,short_1,short_2);

}
int v_SyBigEndianPack64( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	double double_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_2;
	int_1 = int_2 + int_2;
	float_1 = float_2;
	int_2 = int_3 * int_3;
	int_4 = int_3;
	char_2 = char_1 + char_2;
	double_1 = double_1;
	float_3 = float_2 * float_2;
	double_2 = double_1 + double_2;
	float_6 = float_4 + float_5;
	int_1 = int_5 * int_2;
	short_2 = short_1 + short_2;
	short_1 = short_3 * short_2;
	long_2 = long_1 * long_1;
	return int_1;
}
int v_SyBigEndianPack32( double parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_3 = int_1 * int_2;
	int_4 = int_2 + int_1;
	long_2 = long_1 + long_2;
	float_2 = float_1 + float_1;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1;
	return int_3;
}
float v_lhash_write_header( long parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1;
	int_1 = int_2;
	char_2 = char_2 + char_2;
	char_3 = char_4;
	int_1 = int_3 * int_2;
	double_1 = double_1 + double_2;
	double_4 = double_3 + double_4;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_2 + double_2;
	int_1 = v_SyBigEndianPack64(double_2,double_5);

	double_4 = double_1 + double_3;
	int_2 = v_SyBigEndianPack32(double_5,short_1);

	short_2 = short_2 * short_2;
	char_1 = char_3 * char_2;
	int_3 = int_3 * int_3;
	float_1 = float_2;
	int_5 = int_4 + int_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	long_1 = long_1 + long_1;
	long_1 = long_2 * long_2;
	long_1 = long_2;
	return float_2;
}
void v_lhash_kv_open( double parameter_1,short parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
		if(1)
		{
		}
		double_2 = double_1;
		if(1)
		{
		}
		double_2 = double_1 + double_1;
		if(1)
		{
		}
	}
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double_3 = v_lhash_read_header(double_2,float_1);

		short_2 = short_1 * short_2;
		if(1)
		{
		}
		float_1 = v_lhash_write_header(long_3,short_2);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
		}
	}
}
double v_lhash_kv_config( unsigned int parameter_1,int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_6 = 1;
	double double_3 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_4 = 1;
	double_2 = double_1 * double_2;
	int_2 = int_1 + int_2;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3 + int_2;
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_5 = int_4 * int_2;
		if(1)
		{
			short_2 = short_1 * short_2;
		}
	}
	short_2 = short_1 + short_1;
	int_6 = int_1;
	if(1)
	{
		double_3 = double_2 + double_2;
	}
	int_8 = int_6 * int_7;
	double_2 = double_4 * double_2;
	double_3 = double_1 * double_1;
	return double_4;
}
int v_lhash_kv_release()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = v_SyMemBackendRelease(unsigned_int_2);

	int_3 = int_1 + int_2;
	return int_4;
}
long v_MemBackendPoolFree( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char_2 = char_1 * char_2;
	float_2 = float_1 * float_1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	double_1 = v_MemBackendFree(float_3);

	long_3 = long_1 + long_2;
	if(1)
	{
		int int_3 = 1;
		int_1 = int_1 + int_3;
	}
	if(1)
	{
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_2 = double_2 + double_2;
		short_2 = short_1 + short_1;
	}
	return long_2;
}
double v_SyMemBackendPoolFree( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 * float_2;
		}
		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	return double_1;
	long_1 = v_MemBackendPoolFree(long_1);

}
long v_SyBlobRelease( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	if(1)
	{
		unsigned_int_1 = v_SyMemBackendFree(float_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	char_2 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return long_1;
}
short v_lhash_page_release()
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	char char_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	double_1 = v_SyMemBackendPoolFree(int_1);

	long_1 = long_1 + long_1;
	int_1 = int_2;
	char_1 = char_1;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		float float_1 = 1;
		char char_3 = 1;
		short_1 = short_1 * short_1;
		int_2 = int_1;
		float_2 = float_1 + float_1;
		long_1 = v_SyBlobRelease(char_2);

		unsigned_int_1 = v_SyMemBackendFree(float_3);

		char_3 = char_1 + char_1;
	}
	if(1)
	{
		float float_4 = 1;
		float_2 = float_4 + float_3;
	}
	double_2 = double_3;
	long_1 = long_2 * long_3;
	return short_2;
}
int v_lhash_bin_hash( unsigned int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_2;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		if(1)
		{
			int_1 = int_2;
		}
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		unsigned_int_4 = unsigned_int_1;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "fs") > 0)
		{
			double_2 = double_2 * double_3;
		}
		double_1 = double_4 + double_2;
		double_6 = double_5 + double_3;
		if(1)
		{
			double double_7 = 1;
			double_7 = double_7;
		}
		long_4 = long_4 + long_2;
		short_2 = short_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
		}
		unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
		long_1 = long_1 * long_4;
	}
	return int_1;
}
void v_lhash_kv_init( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_2 = double_1 + double_2;
	v_SyMemBackendInitFromParent(short_1,char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1;
	if(1)
	{
		char_1 = v_SyMemBackendRelease(unsigned_int_3);

		short_1 = short_1 * short_1;
	}
	long_3 = long_1 * long_2;
	short_2 = short_2;
	int_1 = v_lhash_bin_hash(unsigned_int_4,unsigned_int_1);

	long_3 = v_SyMemcmp(float_1,unsigned_int_3,char_2);

	short_1 = short_1 + short_3;
	short_4 = v_lhash_page_release();

	double_1 = double_3;
	short_1 = v_SyZero(int_1);

	double_3 = double_1 * double_3;
	if(1)
	{
		int_1 = int_1;
		double_1 = double_1 + double_1;
	}
	char_2 = char_3 + char_1;
	int_1 = int_2 * int_1;
	double_5 = double_2 + double_4;
	char_2 = char_4 * char_1;
	long_2 = long_3 * long_1;
	int_2 = v_vedisExportMemBackend();

	long_3 = v_SyMemBackendAlloc(float_1,char_5,-1 );

	int_4 = int_3 + int_4;
	short_2 = short_1 + short_1;
	int_1 = int_4 * int_4;
}
double v_vedisExportDiskKvStorage()
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	short short_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	int int_5 = 1;
	double double_6 = 1;
	short short_4 = 1;
	char char_3 = 1;
	int_1 = v_lhash_kv_release();

	v_lhash_kv_replace(char_1,short_1,int_1,short_1,double_1);

	long_1 = v_lhash_kv_append(float_1,char_1,int_2,char_2,short_2);

	unsigned_int_1 = v_lhInitCursor(double_2);

	long_1 = v_lhCursorFirst(double_1);

	long_1 = v_lhCursorLast(int_3);

	double_3 = v_lhCursorValid(short_3);

	v_lhCursorNext(short_1);

	short_2 = v_lhCursorKeyLength(double_1,int_4);

	char_2 = v_lhCursorKey(unsigned_int_1,long_1,double_1);

	double_2 = v_lhCursorDataLength(unsigned_int_2,double_2);

	v_lhCursorReset(float_2);

	double_4 = double_2 * double_2;
	return double_5;
	v_lhash_kv_init(long_2,int_4);

	double_5 = v_lhash_kv_config(unsigned_int_2,int_5,short_1);

	v_lhash_kv_open(double_6,short_4);

	int_4 = v_lhCursorSeek(float_2,int_2,int_2,int_1);

	float_1 = v_lhCursorPrev(float_1);

	long_1 = v_lhCursorDelete(int_3);

	float_2 = v_lhCursorData(char_3,char_3,double_3);

}
char v_MemHashCursorReset( short parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_1;
	float_1 = float_1 * float_1;
	return char_1;
}
float v_MemHashCursorData( float parameter_1,double parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char_2 = char_1 * char_1;
	double_2 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "-i") < 0)
	{
	}
	int_1 = int_1;
	return float_1;
}
char v_MemHashCursorDataLength( unsigned int parameter_1,char parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	return char_1;
}
long v_MemHashCursorKey( float parameter_1,int parameter_2,float parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float_1 = float_1 * float_1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	int_2 = int_2 * int_1;
	return long_1;
}
long v_MemHashCursorKeyLength( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int_1 = int_2;
	if(1)
	{
	}
	float_3 = float_1 + float_2;
	return long_1;
}
char v_MemHashUnlinkRecord( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_2;
	float_1 = float_1;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
		unsigned_int_1 = v_SyMemBackendFree(float_3);

		short_1 = short_1 + short_1;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_2;
	}
	float_4 = float_3 * float_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	short_3 = short_2 * short_1;
	int_2 = int_1 + int_2;
	double_2 = double_1 * double_1;
	return char_2;
}
unsigned int v_MemHashCursorDelete()
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	char_1 = v_MemHashUnlinkRecord(char_1,int_1);

	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_2;
	return unsigned_int_1;
}
double v_MemHashCursorPrev()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3;
	return double_1;
}
void v_MemHashCursorNext( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	float_1 = float_2;
}
short v_MemHashCursorValid( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return short_1;
}
double v_MemHashCursorLast( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_2 = short_1 * short_2;
	int_2 = int_1 + int_2;
	double_2 = double_1 + double_2;
	return double_2;
}
void v_MemHashCursorFirst( double parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short_1 = short_1;
	int_2 = int_1 + int_1;
	double_1 = double_1 * double_1;
}
unsigned int v_MemHashCursorSeek( long parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	v_MemHashGetEntry(unsigned_int_1,int_1,int_2);

	double_2 = double_1 * double_1;
	int_2 = int_1 * int_3;
	double_3 = double_1 * double_3;
	if(1)
	{
		if(1)
		{
		}
	}
	return unsigned_int_2;
}
long v_MemHashInitCursor( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1;
	return long_3;
}
double v_MemHashAppend( short parameter_1,int parameter_2,int parameter_3,char parameter_4,unsigned int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	long_1 = long_2;
	char_2 = char_1 * char_1;
	if(1)
	{
		float_2 = float_1 + float_2;
	}
	float_1 = float_2 * float_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
		}
		float_3 = float_1 * float_2;
		if(1)
		{
			double_1 = v_MemHashLinkRecord(int_1,double_1);

			float_3 = float_2 + float_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		long_1 = v_MemHashGrowTable(char_3);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		int_2 = int_2 + int_3;
		short_2 = short_1 + short_2;
		float_3 = float_2 * float_4;
		if(1)
		{
			unsigned_int_4 = v_SyMemBackendRealloc(short_2,char_1);

			long_2 = v_SyMemcpy(int_3,unsigned_int_1);

			char_1 = char_3;
		}
		int_1 = int_2 * int_2;
		double_1 = double_2 * double_1;
		if(1)
		{
		}
		v_MemHashGetEntry(unsigned_int_5,int_2,int_2);

		short_1 = short_1 * short_1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
		float_6 = float_5 * float_6;
	}
	return double_2;
	unsigned_int_6 = v_MemHashNewRecord(short_1,char_4,int_3,char_2,short_1,short_2);

}
long v_MemHashGrowTable( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_3 = 1;
	float float_5 = 1;
	double double_6 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	short short_5 = 1;
	char_3 = char_1 + char_2;
	double_3 = double_1 * double_2;
	double_2 = double_3 + double_2;
	int_1 = int_1 * int_1;
	double_5 = double_3 + double_4;
	if(1)
	{
	}
	int_1 = int_2 * int_2;
	short_1 = v_SyZero(int_1);

	short_1 = short_2 * short_1;
	long_1 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_4 = 1;
		float float_6 = 1;
		long long_2 = 1;
		int int_5 = 1;
		short short_4 = 1;
		int int_6 = 1;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1 * float_1;
		}
		int_2 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		short_3 = short_2 + short_1;
		if(1)
		{
			double_3 = double_2 + double_3;
		}
		float_5 = float_3 + float_4;
		char_4 = char_4;
		double_6 = double_2 * double_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		}
		double_5 = double_4;
		float_5 = float_3;
		int_3 = int_1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_3;
		}
		char_4 = char_5 * char_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		long_1 = v_SyMemBackendAlloc(float_5,char_6,-1 );

		unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
		if(1)
		{
			int_4 = int_3 + int_3;
		}
		float_5 = float_5 + float_4;
		double_5 = double_6 + double_3;
		float_6 = float_1 * float_3;
		if(1)
		{
			unsigned_int_5 = unsigned_int_1;
		}
		unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
		long_1 = long_2;
		unsigned_int_6 = v_SyMemBackendFree(float_1);

		int_5 = int_3 * int_4;
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
		}
		unsigned_int_6 = unsigned_int_6 + unsigned_int_4;
		long_1 = long_3 + long_3;
		char_4 = char_4 * char_3;
		if(1)
		{
			float_3 = float_5 + float_1;
		}
		unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
		short_3 = short_4 + short_4;
		int_6 = int_1 + int_3;
	}
	double_2 = double_6 * double_3;
	short_3 = short_5 * short_2;
	char_1 = char_3 * char_5;
	return long_3;
}
double v_MemHashLinkRecord( int parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	short_2 = short_1 + short_2;
	int_1 = int_1 + int_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3 * int_3;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "(") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	int_4 = int_4 + int_2;
	return double_2;
}
unsigned int v_MemHashNewRecord( short parameter_1,char parameter_2,int parameter_3,char parameter_4,short parameter_5,short parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_5 = 1;
	unsigned_int_1 = v_SyMemBackendFree(float_1);

	int_1 = int_1 + int_1;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	char_4 = char_1 + char_3;
	int_3 = int_2 * int_2;
	if(1)
	{
	}
	long_1 = v_SyMemcpy(int_2,unsigned_int_1);

	int_2 = int_2 * int_1;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	float_2 = float_1 * float_2;
	char_1 = char_2 * char_1;
	short_1 = v_SyZero(int_3);

	int_1 = int_2 + int_1;
	unsigned_int_4 = unsigned_int_4;
	short_2 = short_2 * short_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	double_3 = double_1 + double_1;
	int_3 = int_2 * int_3;
	short_3 = short_2 * short_3;
	long_1 = long_2 + long_2;
	return unsigned_int_1;
	long_3 = v_SyMemBackendAlloc(float_1,char_5,-1 );

}
void v_MemHashGetEntry( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	short_1 = short_1 * short_1;
	double_1 = double_2;
	int_1 = int_1 * int_1;
	double_2 = double_2;
	double_3 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_2 = int_3;
		}
		if(1)
		{
		}
		char_1 = char_1 + char_1;
	}
}
int v_MemHashReplace( double parameter_1,double parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_3 = 1;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	long_1 = v_MemHashGrowTable(char_1);

	char_2 = char_1;
	if(1)
	{
		char_1 = char_1 * char_1;
		if(1)
		{
		}
		double_3 = double_1 * double_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
	}
	if(1)
	{
		float float_2 = 1;
		long_1 = v_SyMemcpy(int_1,unsigned_int_3);

		int_2 = int_2 + int_2;
		double_1 = double_2 * double_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			char char_4 = 1;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
			char controller_8[3];
			fgets(controller_8 ,3 ,stdin);
			if( strcmp( controller_8, "Ef") < 0)
			{
			}
			v_MemHashGetEntry(unsigned_int_5,int_2,int_3);

			char_4 = char_2 + char_2;
		}
		unsigned_int_2 = v_MemHashNewRecord(short_1,char_3,int_2,char_3,short_2,short_1);

		long_2 = v_SyMemBackendAlloc(float_1,char_1,-1 );

		float_3 = float_2 * float_1;
		double_1 = v_MemHashLinkRecord(int_3,double_3);

		unsigned_int_2 = v_SyMemBackendFree(float_3);

		double_2 = double_2;
		int_2 = int_3;
	}
	return int_2;
}
float v_MemHashConfigure( double parameter_1,int parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	long_1 = long_1 + long_1;
	double_1 = double_1 + double_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
		if(1)
		{
			double_2 = double_1 + double_2;
		}
	}
	char_3 = char_2 + char_2;
	double_2 = double_3 + double_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_4 = double_1 + double_3;
	return float_2;
}
double v_MemBackendRelease( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_5 = 1;
	double double_4 = 1;
	short short_6 = 1;
	int int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short_1 = short_1 + short_2;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_4 = 1;
		if(1)
		{
			char char_1 = 1;
			char_2 = char_1 * char_1;
		}
		double_1 = double_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		short_1 = short_1 + short_3;
		if(1)
		{
			double_3 = double_3 * double_1;
		}
		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
		int_2 = int_1 + int_3;
		short_1 = short_4 + short_5;
		double_1 = double_4 * double_4;
		if(1)
		{
			double_1 = double_3;
		}
		short_6 = short_3 * short_6;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
		int_4 = int_4 * int_5;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_2;
		}
		double_3 = double_1 + double_5;
		double_5 = double_4 * double_4;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
		short_4 = short_5 * short_5;
	}
	if(1)
	{
		int_3 = int_3 + int_5;
	}
	double_6 = double_3 + double_3;
	double_2 = double_5 + double_2;
	if(1)
	{
		short_6 = short_2 + short_5;
	}
	return double_4;
}
char v_SyMemBackendRelease( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		if(1)
		{
		}
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if(remainder_check(controller_3,100,1))
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_1 * int_2;
		}
		double_1 = v_MemBackendRelease(double_2);

		char_3 = char_1 * char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		short_1 = short_1;
	}
	return char_1;
}
long v_MemHashRelease( int parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char_1 = v_SyMemBackendRelease(unsigned_int_1);

	long_1 = long_1 * long_1;
	int_1 = int_1 + int_1;
	return long_1;
}
int v_MemHashFunc( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 * long_2;
		}
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		int_1 = int_1 + int_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		}
		double_2 = double_1 + double_2;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		if(1)
		{
			double double_3 = 1;
			double_1 = double_3 * double_4;
		}
		double_1 = double_5 * double_2;
		double_4 = double_5;
		if(1)
		{
			long long_3 = 1;
			long_3 = long_3;
		}
		char_4 = char_1 * char_3;
		unsigned_int_3 = unsigned_int_4;
	}
	return int_2;
}
void v_SyMemBackendInitFromParent( short parameter_1,char parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_1 = v_SyZero(int_1);

	double_2 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	short_1 = short_2 * short_2;
	double_1 = double_1 * double_2;
	int_2 = int_2 * int_2;
	long_1 = long_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
		int_1 = int_1;
		if(1)
		{
		}
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 * int_1;
	}
}
void v_MemHashInit( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = v_SyMemcmp(float_1,unsigned_int_1,char_1);

	char_4 = char_2 + char_3;
	v_SyMemBackendInitFromParent(short_1,char_3);

	int_1 = v_vedisExportMemBackend();

	char_3 = char_4;
	if(1)
	{
		int_2 = int_2 + int_1;
	}
	short_2 = v_SyZero(int_1);

	unsigned_int_2 = unsigned_int_2;
	long_3 = long_2 * long_3;
	long_3 = v_SyMemBackendAlloc(float_1,char_4,-1 );

	float_3 = float_2 + float_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	char_1 = char_4 * char_2;
	int_2 = v_MemHashFunc(unsigned_int_2,char_2);

	unsigned_int_1 = unsigned_int_3;
}
int v_vedisExportMemKvStorage()
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	float_1 = v_MemHashConfigure(double_1,int_1,unsigned_int_1);

	int_1 = v_MemHashReplace(double_1,double_2,int_1,int_2,int_3);

	long_1 = v_MemHashInitCursor(int_2);

	short_1 = v_MemHashCursorValid(double_2);

	v_MemHashCursorNext(char_1);

	unsigned_int_2 = v_MemHashCursorDelete();

	long_2 = v_MemHashCursorKey(float_2,int_4,float_2);

	double_2 = double_2 * double_2;
	return int_3;
	v_MemHashInit(long_2,int_5);

	long_3 = v_MemHashRelease(int_4);

	double_3 = v_MemHashAppend(short_1,int_5,int_1,char_1,unsigned_int_3);

	unsigned_int_2 = v_MemHashCursorSeek(long_4,int_2,int_4,int_5);

	v_MemHashCursorFirst(double_4);

	double_5 = v_MemHashCursorLast(double_6);

	double_4 = v_MemHashCursorPrev();

	long_2 = v_MemHashCursorKeyLength(double_4,int_2);

	char_1 = v_MemHashCursorDataLength(unsigned_int_3,char_2);

	float_2 = v_MemHashCursorData(float_1,double_3,unsigned_int_3);

	char_1 = v_MemHashCursorReset(short_1);

}
float v_SySetInit( unsigned int parameter_1,float parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char_1 = char_2;
	long_1 = long_1 * long_2;
	int_1 = int_1 + int_1;
	short_1 = short_2;
	double_2 = double_1 * double_1;
	int_1 = int_1 * int_2;
	long_1 = long_2 + long_1;
	return float_1;
}
unsigned int v_UnixUnmap(float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 * long_1;
	return unsigned_int_1;
}
float v_UnixMmap( double parameter_1,long parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	float float_3 = 1;
	short_1 = short_1 + short_2;
	float_1 = float_1 + float_1;
	short_1 = short_3 * short_1;
	float_1 = float_1 + float_1;
	float_1 = float_2 * float_1;
	if(1)
	{
	}
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_1;
	if(1)
	{
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = long_2 * long_1;
		long_1 = long_1 * long_3;
	}
	short_3 = short_1 + short_4;
	return float_3;
}
short v_unixCurrentTime( float parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1;
	double_3 = double_1 + double_2;
	float_2 = float_1 * float_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	return short_1;
}
short v_unixSleep( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long_2 = long_1 + long_1;
	double_1 = double_1 * double_2;
	float_1 = float_1 + float_2;
	double_3 = double_2;
	int_1 = int_2;
	double_4 = double_5;
	float_3 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_2;
	return short_1;
}
short v_SyMemBackendDup( char parameter_1,long parameter_2,double parameter_3,int uni_para)
{
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_1;
	char controller4vul_130[3];
	fgets(controller4vul_130 ,3 ,stdin);
	if( strcmp( controller4vul_130, "eE") < 0)
	{
		int int_2 = 1;
		int int_3 = 1;
		char controller4vul_131[2];
		fgets(controller4vul_131 ,2 ,stdin);
		if( strcmp( controller4vul_131, "Y") < 0)
		{
			long_1 = v_SyMemBackendAlloc(float_1,char_1,uni_para);

		}
		int_3 = int_2 + int_2;
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_2;
	}
	return short_1;
}
double v_BlobPrepareGrow( float parameter_1,short parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 + long_1;
	int_3 = int_1 + int_2;
	char controller4vul_127[3];
	fgets(controller4vul_127 ,3 ,stdin);
	if( strcmp( controller4vul_127, ")H") > 0)
	{
		char controller4vul_128[3];
		fgets(controller4vul_128 ,3 ,stdin);
		if( strcmp( controller4vul_128, ":@") > 0)
		{
			int_2 = int_1 * int_2;
			char controller4vul_129[2];
			fgets(controller4vul_129 ,2 ,stdin);
			if( strcmp( controller4vul_129, "O") < 0)
			{
				short_1 = v_SyMemBackendDup(char_1,long_2,double_1,uni_para);

			}
		}
	}
	if(1)
	{
		double double_2 = 1;
		if(1)
		{
			float float_1 = 1;
			int int_4 = 1;
			float_2 = float_1 + float_1;
			if(1)
			{
			}
			short_2 = short_1 + short_1;
			int_4 = int_4 * int_1;
		}
		if(1)
		{
			int int_5 = 1;
			float float_3 = 1;
			int_2 = int_5;
			float_2 = float_3 * float_3;
		}
		double_2 = double_1;
	}
	if(1)
	{
	}
	if(1)
	{
		char_1 = char_2 * char_2;
	}
	if(1)
	{
		char_1 = char_3 + char_3;
	}
	float_4 = float_2 + float_4;
	if(1)
	{
	}
	char_2 = char_3 + char_1;
	short_4 = short_2 + short_3;
	return double_1;
}
short v_SyBlobAppend( int parameter_1,long parameter_2,long parameter_3,int uni_para)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1;
	char controller4vul_126[3];
	fgets(controller4vul_126 ,3 ,stdin);
	if( strcmp( controller4vul_126, "U+") < 0)
	{
		double_1 = v_BlobPrepareGrow(float_2,short_1,uni_para);

	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float_2 = float_2 * float_1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		short_1 = short_1 * short_2;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	}
	return short_3;
}
long v_FormatConsumer( double parameter_1,short parameter_2,int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	short_1 = v_SyBlobAppend(int_1,long_1,long_1,uni_para);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_5;
	double_1 = double_1 * double_2;
	int_1 = int_2 + int_1;
	float_1 = float_2;
	unsigned_int_3 = unsigned_int_6;
	return long_1;
}
short v_getdigit( unsigned int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	long_1 = long_1 * long_2;
	int_1 = int_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	long_3 = long_3 + long_3;
	long_2 = long_2 * long_2;
	return short_1;
}
double v_InternFormat( unsigned int parameter_1,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double_1 = double_1;
	char_3 = char_1 * char_2;
	if(1)
	{
		float float_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float_1 = float_1 * float_1;
		int_1 = int_2;
	}
	double_3 = double_2 * double_3;
	short_1 = v_getdigit(unsigned_int_1,int_3);

	double_2 = v_SyStrlen(short_2);

	long_1 = long_2;
	double_2 = double_3;
	return double_4;
}
char v_FormatMount( float parameter_1,float parameter_3,float parameter_5,short parameter_6,char parameter_7,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_2 = char_1 + char_1;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	char controller4vul_124[2];
	fgets(controller4vul_124 ,2 ,stdin);
	if( strcmp( controller4vul_124, "S") > 0)
	{
		char controller4vul_125[3];
		fgets(controller4vul_125 ,3 ,stdin);
		if( strcmp( controller4vul_125, "R2") < 0)
		{
			long_1 = v_FormatConsumer(double_1,short_1,uni_para);

		}
		double_2 = double_2 * double_2;
	}
	char_1 = char_1 * char_3;
	double_4 = double_2 + double_3;
	char_3 = char_3;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		int int_4 = 1;
		int_2 = int_3 + int_4;
	}
	return char_2;
}
double v_SyBlobInitFromBuf( float parameter_1,double parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	double double_2 = 1;
	if(1)
	{
		float float_1 = 1;
		if(1)
		{
		}
		float_1 = float_1;
	}
	double_1 = double_1 * double_1;
	long_1 = long_1;
	char_3 = char_1 * char_2;
	long_2 = long_2 * long_1;
	return double_2;
}
double v_SyBufferFormat( char parameter_1,float parameter_2,double parameter_3,int parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 * short_2;
	double_2 = double_1 + double_1;
	char controller4vul_122[2];
	fgets(controller4vul_122 ,2 ,stdin);
	if( strcmp( controller4vul_122, "W") > 0)
	{
		char controller4vul_123[2];
		fgets(controller4vul_123 ,2 ,stdin);
		if( strcmp( controller4vul_123, "{") > 0)
		{
			char_1 = v_FormatMount(float_1,float_2,float_2,short_2,char_1,uni_para);

		}
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	float_2 = float_3 * float_2;
	double_4 = double_3 + double_4;
	float_4 = float_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	return double_4;
}
double v_unixFullPathname( char parameter_1,char parameter_2,int parameter_3,char parameter_4,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
		int_1 = int_1 + int_2;
	}
	char controller4vul_120[2];
	fgets(controller4vul_120 ,2 ,stdin);
	if( strcmp( controller4vul_120, ":") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_2 = 1;
		int int_4 = 1;
		float float_2 = 1;
		short_3 = short_1 + short_2;
		double_2 = double_1 * double_1;
		char controller4vul_121[3];
		fgets(controller4vul_121 ,3 ,stdin);
		if( strcmp( controller4vul_121, "WH") > 0)
		{
			double_1 = v_SyBufferFormat(char_1,float_1,double_3,int_3,uni_para);

		}
		int_4 = int_4;
		float_2 = float_1 + float_2;
	}
	return double_3;
}
void v_unixAccess( float parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	int_2 = int_1 + int_1;
	short_1 = short_1 + short_2;
	int_1 = int_3 * int_3;
	char_2 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_5 = int_2 * int_4;
	char_1 = char_1 * char_1;
	char_3 = char_1 + char_3;
	char_3 = char_1 * char_4;
	short_3 = short_2 + short_2;
	if(1)
	{
		char_3 = char_3 * char_4;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 + double_2;
		}
	}
}
long v_unixDelete( int parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int_2 = int_3 + int_2;
		long_1 = v_openDirectory(float_1,int_4);

		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		if(1)
		{
			if(1)
			{
				int int_5 = 1;
				int_3 = int_2 * int_5;
			}
			if(1)
			{
				double double_1 = 1;
				double_1 = double_1 + double_1;
			}
		}
	}
	return long_1;
}
double v_MemBackendFree( float parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 + double_1;
	float_2 = float_1 * float_1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			if(1)
			{
				float float_3 = 1;
				float_3 = float_2 + float_3;
			}
			long_1 = long_1 * long_1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			char_2 = char_1 * char_2;
		}
	}
	return double_1;
}
unsigned int v_SyMemBackendFree( float parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
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
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		long_1 = long_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	return unsigned_int_1;
	double_1 = v_MemBackendFree(float_1);

}
long v_vedis_free()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int_1 = v_vedisExportMemBackend();

	unsigned_int_1 = v_SyMemBackendFree(float_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 + int_2;
	short_1 = short_1;
	return long_1;
}
long v_SyMemcpy( int parameter_1,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	return long_1;
}
long v_SyMemcmp( float parameter_1,unsigned int parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	int_1 = int_3 * int_3;
	return long_3;
}
long v_findInodeInfo( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_2;
	}
	if(1)
	{
		v_vedis_malloc(double_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			int int_2 = 1;
			short_1 = v_SyZero(int_1);

			int_1 = int_2;
		}
		if(1)
		{
			double double_2 = 1;
			long_1 = v_SyMemcmp(float_2,unsigned_int_1,char_1);

			double_2 = double_1;
		}
		long_2 = v_SyMemcpy(int_1,unsigned_int_2);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	return long_2;
}
void v_fillInUnixFile( unsigned int parameter_1,int parameter_2,int parameter_3,short parameter_4,short parameter_5,int parameter_6,int parameter_7)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char_1 = char_1 * char_2;
	long_1 = v_findInodeInfo(char_2,long_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_1 + char_2;
	double_3 = double_1 + double_2;
	float_1 = v_unixLeaveMutex();

	float_1 = float_1 * float_1;
	char_3 = v_unixEnterMutex();

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	long_1 = long_2 * long_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	short_2 = short_1 * short_2;
	char_2 = char_3;
	unsigned_int_1 = unsigned_int_3;
	long_4 = long_1 * long_3;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_2 = 1;
		int_2 = int_1 * int_1;
		float_1 = float_2 * float_2;
	}
	short_1 = short_1 * short_1;
	short_4 = short_3 + short_4;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "c") < 0)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			double double_4 = 1;
			double_3 = double_4 + double_2;
		}
	}
	if(1)
	{
		long_2 = long_4 * long_1;
	}
}
double v_SyStrlen( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			char char_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				float_3 = float_1 + float_2;
			}
			double_3 = double_1 * double_2;
			if(1)
			{
				char char_2 = 1;
				char_1 = char_1 + char_2;
			}
			int_3 = int_1 * int_2;
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			}
			long_3 = long_1 * long_2;
			if(1)
			{
				char_1 = char_1;
			}
			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		}
	}
	return double_2;
}
unsigned int v_Systrcpy( char parameter_1,int parameter_2,char parameter_3,double parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float_2 = float_1 * float_1;
	long_2 = long_1 + long_2;
	char_1 = char_1 * char_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			double_2 = double_1 + double_1;
		}
		double_2 = double_1 + double_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_3 = 1;
		int int_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		if(1)
		{
			double_2 = double_3;
		}
		int_1 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		char_1 = char_3;
		double_1 = v_SyStrlen(short_1);

		int_1 = int_2 + int_1;
		if(1)
		{
			long_2 = long_1;
		}
		long_2 = long_2 * long_3;
		float_3 = float_2;
		int_2 = int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			double_2 = double_3 + double_3;
		}
		int_1 = int_1;
		long_4 = long_4 * long_4;
		short_1 = short_1 * short_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
		}
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		char_3 = char_1 * char_2;
		int_2 = int_1 + int_1;
		short_2 = short_2 + short_2;
	}
	float_3 = float_1 + float_1;
	return unsigned_int_2;
}
long v_openDirectory( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1;
	short_2 = short_1 * short_2;
	int_2 = int_2 * int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		unsigned_int_3 = v_Systrcpy(char_1,int_1,char_2,double_1);

		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		if(1)
		{
			short short_3 = 1;
			short_3 = short_3;
		}
	}
	long_1 = long_1 * long_1;
	char_1 = char_2 + char_3;
	return long_1;
}
float v_findCreateFileMode( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float_3 = float_1 + float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	return float_1;
}
long v_SyMemBackendAlloc( float parameter_1,char parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char * vul_var;
	long_2 = long_1 + long_2;
	char controller4vul_132[2];
	fgets(controller4vul_132 ,2 ,stdin);
	if( strcmp( controller4vul_132, "#") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char controller4vul_133[2];
		fgets(controller4vul_133 ,2 ,stdin);
		if( strcmp( controller4vul_133, "u") > 0)
		{
			vul_var=(char*)malloc(20*sizeof(char));
			strcpy(vul_var, "CWE-761");
			if(uni_para == 997)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_2;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	long_3 = long_2;
}
int v_vedisExportMemBackend()
{
	int int_1 = 1;
	return int_1;
}
void v_vedis_malloc( double parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long_1 = long_1 + long_1;
	char_2 = char_1 * char_2;
	long_2 = v_SyMemBackendAlloc(float_1,char_3,-1 );

	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = v_vedisExportMemBackend();

}
float v_unixLeaveMutex()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int_4 = int_1 + int_3;
		short_3 = short_1 + short_2;
	}
	return float_1;
}
char v_unixEnterMutex()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_2 = double_1 * double_1;
		float_2 = float_1 * float_1;
	}
	return char_1;
}
long v_findReusableFd( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	short short_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	long long_2 = 1;
	int int_6 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	long long_5 = 1;
	float float_4 = 1;
	double double_5 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 * char_2;
	int_1 = int_2;
	if(1)
	{
	}
	int_2 = int_2 * int_3;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		int_2 = int_4 * int_1;
	}
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		short_4 = short_2 * short_3;
	}
	if(1)
	{
		char_4 = char_3 + char_1;
	}
	if(1)
	{
		int_3 = int_3 + int_5;
	}
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	float_1 = float_2;
	float_2 = float_2 * float_2;
	double_1 = double_1 * double_2;
	short_2 = short_4 + short_5;
	float_2 = float_3 + float_3;
	if(1)
	{
		char_4 = char_3 * char_3;
	}
	int_5 = int_5 + int_3;
	char_2 = v_unixEnterMutex();

	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	long_1 = long_1 * long_1;
	double_1 = double_3 + double_3;
	int_3 = int_3 + int_5;
	long_2 = long_2 * long_1;
	int_6 = int_2;
	int_4 = int_3;
	int_2 = int_1;
	int_1 = int_1 * int_1;
	double_2 = double_2 * double_1;
	int_6 = int_6 + int_2;
	if(1)
	{
		int int_7 = 1;
		int int_8 = 1;
		int_8 = int_6 + int_7;
	}
	if(1)
	{
		int_3 = int_2 + int_2;
	}
	long_3 = long_4;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		float_3 = v_unixLeaveMutex();

		unsigned_int_1 = unsigned_int_6 * unsigned_int_2;
	}
	double_3 = double_4 + double_4;
	long_5 = long_4 + long_1;
	float_1 = float_4 * float_3;
	int_3 = int_3 + int_1;
	double_5 = double_1;
	if(1)
	{
		short short_6 = 1;
		short_3 = short_6 + short_5;
	}
	if(1)
	{
		char char_5 = 1;
		char_4 = char_4 + char_5;
	}
	int_2 = int_9 + int_4;
	unsigned_int_7 = unsigned_int_8;
	if(1)
	{
		double double_6 = 1;
		double_2 = double_4 + double_6;
	}
	if(1)
	{
		float_4 = float_2 * float_3;
	}
	char_1 = char_1;
	return long_4;
}
long v_unixOpen( short parameter_1,float parameter_2,short parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	short short_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	short short_2 = 1;
	int int_6 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_7 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_4 = 1;
	long long_6 = 1;
	double double_7 = 1;
	double_1 = double_2;
	long_1 = v_findReusableFd(int_1,int_2);

	int_2 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	double_3 = double_1;
	long_2 = long_3;
	int_3 = int_4 + int_4;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	int_1 = int_2 * int_5;
	int_5 = int_3;
	int_2 = int_3 + int_3;
	short_1 = v_SyZero(int_1);

	double_4 = double_3 * double_1;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
	short_1 = short_1 + short_1;
	unsigned_int_4 = unsigned_int_7 * unsigned_int_7;
	char_3 = char_1 + char_2;
	if(1)
	{
		double_3 = double_5 * double_3;
	}
	if(1)
	{
		v_fillInUnixFile(unsigned_int_1,int_1,int_4,short_1,short_2,int_6,int_2);

		double_3 = double_6 + double_3;
		if(1)
		{
		}
	}
	float_2 = float_1 + float_1;
	if(1)
	{
		int_1 = int_4 * int_1;
	}
	if(1)
	{
		double_6 = double_5 * double_2;
	}
	if(1)
	{
		float_1 = float_3 + float_2;
	}
	if(1)
	{
		double_2 = double_3 + double_1;
	}
	char_2 = char_2 * char_1;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned_int_6 = unsigned_int_6 * unsigned_int_3;
		short_3 = short_3 + short_4;
		if(1)
		{
		}
		unsigned_int_9 = unsigned_int_5 + unsigned_int_8;
		if(1)
		{
			int_7 = int_2 * int_2;
			long_2 = long_1;
		}
	}
	if(1)
	{
		long_4 = long_2 * long_1;
		long_2 = long_1 + long_2;
	}
	if(1)
	{
		double_4 = double_6;
	}
	if(1)
	{
		long_5 = long_3 + long_3;
		if(1)
		{
			short short_5 = 1;
			int_1 = int_2 + int_4;
			short_2 = short_5;
		}
	}
	long_5 = v_vedis_free();

	float_3 = float_1 * float_1;
	float_4 = v_findCreateFileMode(int_6,int_7,unsigned_int_9);

	int_2 = int_3 + int_5;
	if(1)
	{
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		long_5 = v_openDirectory(float_1,int_7);

		double_3 = double_4 + double_1;
		if(1)
		{
			int_3 = int_5;
		}
		long_6 = long_4 + long_4;
	}
	if(1)
	{
		int int_8 = 1;
		int int_9 = 1;
		int_9 = int_8 * int_9;
	}
	v_vedis_malloc(double_7);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_5;
	if(1)
	{
		long_6 = long_2 * long_5;
	}
	return long_1;
}
int v_vedisExportBuiltinVfs(int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = v_unixFullPathname(char_1,char_2,int_1,char_1,uni_para);

	short_1 = short_2;
	return int_1;
}
float v_SyMemBackendInitFromOthers( float parameter_1,int parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
		}
		if(1)
		{
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	short_1 = short_1 + short_1;
	long_2 = long_1 + long_1;
	char_2 = char_1 * char_1;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	return float_2;
	short_1 = v_SyZero(int_1);

}
short v_SyZero(int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	int_3 = int_1 + int_2;
	int_3 = int_4 + int_3;
	if(1)
	{
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_5 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int int_6 = 1;
		int int_7 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1;
		}
		char_3 = char_1 + char_2;
		long_1 = long_2;
		if(1)
		{
			int_5 = int_4 + int_3;
		}
		long_4 = long_3 + long_2;
		int_7 = int_3 * int_6;
		if(1)
		{
			int_5 = int_4 * int_5;
		}
		short_1 = short_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			short_1 = short_2 * short_2;
		}
		float_1 = float_1 + float_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	return short_2;
}
char v_SyMemBackendInit( unsigned int parameter_1,double parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	if(1)
	{
		long long_1 = 1;
		if(1)
		{
		}
		short_1 = v_SyZero(int_1);

		long_1 = long_1 * long_1;
	}
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1 * float_2;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	return char_1;
}
void v_MemBackendAlloc( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int_3 = int_1 + int_2;
	short_2 = short_1 + short_2;
	int_2 = int_2 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		double_1 = double_1 * double_2;
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	short_3 = short_4;
	if(1)
	{
		double_2 = double_2 + double_1;
	}
	double_2 = double_2 + double_2;
}
int v_MemBackendRealloc( int parameter_1,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = char_1 + char_2;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	char_5 = char_3 + char_4;
	if(1)
	{
		short short_1 = 1;
		if(1)
		{
		}
		short_1 = short_1 * short_2;
	}
	short_3 = short_2;
	long_3 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_1 + double_2;
		if(1)
		{
			long_3 = long_2 + long_1;
		}
		char_2 = char_1 * char_4;
	}
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int int_3 = 1;
			int_4 = int_1 + int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			v_MemBackendAlloc(unsigned_int_3,short_2);

			double_2 = double_3 + double_3;
		}
		if(1)
		{
			double_3 = double_3 + double_1;
		}
	}
	return int_4;
}
unsigned int v_SyMemBackendRealloc( short parameter_1,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float_2 = float_1 + float_1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		float_1 = float_2 + float_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	return unsigned_int_3;
	int_1 = v_MemBackendRealloc(int_1,unsigned_int_4);

}
char v_SySetPut( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_3 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "V") > 0)
		{
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		double_2 = double_1 + double_1;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_2 = int_1 * int_2;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_5 = v_SyMemBackendRealloc(short_1,char_1);

	char_2 = char_1 * char_1;
	unsigned_int_7 = unsigned_int_3 + unsigned_int_6;
	return char_3;
}
char v_vedisCoreConfigure( int parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_10 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
			long_3 = long_1 * long_1;
		}
		if(1)
		{
			long_2 = long_2 + long_3;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	float_2 = float_1 * float_2;
	long_2 = long_4 + long_3;
	if(1)
	{
		int_2 = int_1 * int_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	char_1 = v_SyMemBackendInit(unsigned_int_1,double_1);

	char_2 = char_2 * char_3;
	int_1 = int_2 + int_2;
	float_2 = v_SyMemBackendInitFromOthers(float_1,int_3,unsigned_int_1);

	int_2 = int_2 * int_3;
	if(1)
	{
		char char_4 = 1;
		char_3 = char_4 + char_2;
	}
	int_1 = int_2 * int_2;
	short_3 = short_1 * short_2;
	int_1 = int_4 * int_2;
	float_3 = float_1 * float_2;
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	}
	char_1 = char_3 * char_3;
	int_6 = int_1 * int_5;
	double_1 = double_1 + double_3;
	double_3 = double_3;
	char_3 = char_1 * char_5;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
	if(1)
	{
		unsigned_int_7 = unsigned_int_3 * unsigned_int_1;
	}
	if(1)
	{
		int int_8 = 1;
		if(1)
		{
			double_3 = double_2;
		}
		if(1)
		{
			double_4 = double_4 * double_1;
			unsigned_int_6 = unsigned_int_1 * unsigned_int_7;
		}
		if(1)
		{
			short short_4 = 1;
			int int_7 = 1;
			short_3 = short_4 + short_3;
			if(1)
			{
				int_2 = int_2 * int_5;
			}
			int_4 = int_7 * int_8;
		}
		if(1)
		{
			long_4 = long_2 + long_1;
			if(1)
			{
				unsigned_int_4 = unsigned_int_6 * unsigned_int_6;
			}
		}
		int_5 = int_8 * int_5;
	}
	if(1)
	{
		int int_9 = 1;
		if(1)
		{
			float_1 = float_3 + float_1;
		}
		double_4 = double_2 + double_1;
		int_6 = int_9;
	}
	float_1 = float_1 + float_1;
	if(1)
	{
		char_1 = char_5 * char_3;
	}
	unsigned_int_6 = unsigned_int_8 * unsigned_int_5;
	if(1)
	{
		char_5 = v_SySetPut(char_6,int_3);

		unsigned_int_9 = unsigned_int_2 * unsigned_int_1;
	}
	double_4 = double_1;
	if(1)
	{
		double double_5 = 1;
		double_4 = double_5 + double_2;
	}
	float_4 = float_2 * float_1;
	unsigned_int_8 = unsigned_int_10 * unsigned_int_9;
	double_4 = double_3 * double_1;
	return char_5;
}
int v_vedis_lib_config( int parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	float_1 = float_1 + float_2;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	char_2 = char_2 * char_2;
	double_2 = double_1 * double_2;
	char_2 = v_vedisCoreConfigure(int_1,unsigned_int_1);

	float_1 = float_2 + float_3;
	return int_1;
}
float v_vedisCoreInitialize()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	short short_4 = 1;
	char char_3 = 1;
	float float_3 = 1;
	int_1 = v_vedisExportMemKvStorage();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		long_2 = long_1 + long_1;
	}
	int_3 = int_1 * int_2;
	int_3 = int_4 + int_5;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			double double_2 = 1;
			short_1 = short_1 + short_1;
			if(1)
			{
				short short_2 = 1;
				short_3 = short_2 + short_3;
				if(1)
				{
				}
				double_1 = v_vedisExportDiskKvStorage();

				short_3 = short_3 * short_1;
				if(1)
				{
				}
			}
			float_1 = v_SySetInit(unsigned_int_2,float_2,char_1);

			double_2 = double_2 + double_3;
			if(1)
			{
			}
		}
		double_1 = double_3 * double_3;
	}
	short_1 = short_4 * short_3;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_4 = 1;
		int int_7 = 1;
		if(1)
		{
			double double_4 = 1;
			double_4 = double_3 * double_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
		}
		if(1)
		{
			if(1)
			{
				char char_2 = 1;
				int_5 = v_vedisExportBuiltinVfs(-1 );

				char_1 = char_1 * char_2;
				if(1)
				{
					char_1 = char_1 + char_1;
				}
			}
			short_1 = short_3;
		}
		if(1)
		{
			long_1 = long_1 * long_2;
		}
		long_4 = long_2 + long_3;
		int_3 = int_6 + int_3;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		long_2 = long_1 + long_4;
		int_5 = v_vedis_lib_config(int_5,char_3);

		char_4 = char_3 * char_3;
		if(1)
		{
			char char_5 = 1;
			char_3 = char_5 * char_1;
		}
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		int_7 = int_3 * int_4;
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
	}
	return float_3;
}
int v_vedis_open( short parameter_1,double parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_5 = 1;
	float float_6 = 1;
	int int_5 = 1;
	float_2 = float_1 * float_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		if(1)
		{
		}
		int_2 = int_1 + int_3;
	}
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	int_2 = int_4 + int_3;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		double_1 = double_3 * double_1;
	}
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_5 = double_4 * double_5;
	char controller4vul_101[2];
	fgets(controller4vul_101 ,2 ,stdin);
	if( strcmp( controller4vul_101, "N") < 0)
	{
		char controller4vul_102[3];
		fgets(controller4vul_102 ,3 ,stdin);
		if( strcmp( controller4vul_102, "K-") > 0)
		{
			double_3 = double_3;
			char controller4vul_103[2];
			fgets(controller4vul_103 ,2 ,stdin);
			if( strcmp( controller4vul_103, "d") > 0)
			{
				short short_3 = 1;
				v_vedisInitDatabase(long_1,char_1,float_1,char_1,uni_para);

				short_2 = short_3;
				int_3 = int_4;
			}
		}
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "|") < 0)
		{
			char char_3 = 1;
			char char_4 = 1;
			char_4 = char_1 + char_3;
		}
	}
	float_2 = float_2;
	float_5 = float_3 + float_4;
	if(1)
	{
		short short_4 = 1;
		short_4 = short_2;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	short_5 = short_1;
	float_6 = float_5 + float_1;
	return int_5;
}
int main()
{
	int uni_para =997;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	short_1 = short_1 + short_1;
	int_2 = int_1 + int_1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		char_2 = char_1 * char_1;
	}
	int_4 = int_3 * int_2;
	short_1 = short_1;
	long_2 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int_1 = int_4 * int_1;
		float_2 = float_1 + float_2;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_2 + char_1;
			float_3 = float_1 + float_2;
		}
		long_1 = long_2 + long_1;
		char controller4vul_99[3];
		fgets(controller4vul_99 ,3 ,stdin);
		if( strcmp( controller4vul_99, "@b") < 0)
		{
			char char_4 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_2 = 1;
			short short_3 = 1;
			char_4 = char_2 * char_2;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			short_3 = short_2 * short_1;
			char controller4vul_100[3];
			fgets(controller4vul_100 ,3 ,stdin);
			if( strcmp( controller4vul_100, "m4") > 0)
			{
				int_1 = v_vedis_open(short_4,double_1,uni_para);

				double_1 = double_1 + double_1;
			}
			char controller_1[2];
			fgets(controller_1 ,2 ,stdin);
			if( strcmp( controller_1, "m") > 0)
			{
				float float_4 = 1;
				float float_5 = 1;
				float_5 = float_3 + float_4;
			}
		}
	}
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	return int_5;
}

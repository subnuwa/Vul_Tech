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

void v_USBEndpointResetPID( short parameter_1);
int v_USBBulkOnlyMassStorageDeviceReset();
float v_uspi_le2be16( float parameter_1);
int v_USBBulkOnlyMassStorageDeviceTryRead( int parameter_1,char parameter_3);
int v_USBBulkOnlyMassStorageDeviceRead( long parameter_1,short parameter_3);
unsigned int v_USBBulkOnlyMassStorageDeviceSeek( char parameter_1,unsigned int parameter_2);
int v_USPiMassStorageDeviceRead( double parameter_1,long parameter_3,short parameter_4);
int v_USPiMassStorageDeviceAvailable();
void v_USPiEnvClose();
int v_strcmp( int parameter_1,double parameter_2);
int v_DeviceNameServiceGetDevice( double parameter_1,float parameter_2,char parameter_3);
void v__DeviceNameService( unsigned int parameter_1);
void v__DWHCIRootPort( int parameter_1);
void v__DWHCIDevice( float parameter_1);
void v_DWHCIDeviceDisableRootPort( long parameter_1);
void v_DWHCIDeviceOvercurrentDetected( unsigned int parameter_1);
void v_USBMIDIDeviceCompletionRoutine( long parameter_1);
float v_USBMIDIDeviceStartRequest( float parameter_1);
short v_USBMIDIDeviceConfigure( float parameter_1);
void v_USBMIDIDevice( long parameter_1);
void v_USBGamePadDeviceCompletionRoutine( double parameter_1);
unsigned int v_USBGamePadDeviceStartRequest( int parameter_1);
void v_USBGamePadDevicePS3Configure( short parameter_1);
double v_BitGetSigned(short parameter_2,short parameter_3);
float v_BitGetUnsigned(char parameter_2,double parameter_3);
double v_USBGamePadDeviceDecodeReport( double parameter_1);
float v_USBGamePadDeviceConfigure();
void v_USBGamePadDevice( long parameter_1);
double v_LAN7800DevicePHYWrite( char parameter_1,unsigned int parameter_2,unsigned int parameter_3);
short v_LAN7800DevicePHYRead( double parameter_1,short parameter_2,double parameter_3);
int v_LAN7800DeviceInitPHY( unsigned int parameter_1);
void v_LAN7800DeviceInitMACAddress( short parameter_1);
float v_LAN7800DeviceWaitReg( short parameter_1,char parameter_2,short parameter_3,double parameter_4);
double v_LAN7800DeviceWriteReg( short parameter_1,int parameter_2,unsigned int parameter_3);
long v_LAN7800DeviceReadWriteReg( unsigned int parameter_1,int parameter_2,float parameter_3,int parameter_4);
double v_LAN7800DeviceReadReg( int parameter_1,short parameter_2,float parameter_3);
void v_LAN7800DeviceConfigure( long parameter_1);
void v_LAN7800Device( double parameter_1);
int v_SMSC951xDeviceWriteReg( float parameter_1,long parameter_2,unsigned int parameter_3);
void v_MACAddressCopyTo( double parameter_1,double parameter_2);
void v_MACAddressFormat( double parameter_1,int parameter_2);
void v_MACAddressSet( int parameter_1,int parameter_2);
int v_GetMACAddress( double parameter_1);
void v_MACAddress( int parameter_1);
void v_SMSC951xDeviceConfigure( int parameter_1);
void v_SMSC951xDevice();
int v_uspi_char2int( char parameter_1);
void v_USBMouseDeviceCompletionRoutine( long parameter_1);
short v_USBMouseDeviceStartRequest( int parameter_1);
long v_USBMouseDeviceConfigure( float parameter_1);
void v_USBMouseDevice( float parameter_1);
void v_KeyMap( int parameter_1);
int v_DWHCIDeviceSubmitAsyncRequest( double parameter_1,unsigned int parameter_2);
void v_TimerCancelKernelTimer( float parameter_1,char parameter_2);
void v_CancelKernelTimer();
void v_KeyMapGetString( short parameter_1,char parameter_2,int parameter_3,char parameter_4);
unsigned int v_KeyMapTranslate( int parameter_1,unsigned int parameter_2,unsigned int parameter_3);
void v_USBKeyboardDeviceGenerateKeyEvent( short parameter_1,short parameter_2);
short v_USBKeyboardDeviceGetKeyCode( double parameter_1);
void v_USBKeyboardDeviceGetModifiers( double parameter_1);
void v_USBKeyboardDeviceCompletionRoutine( float parameter_1);
long v_USBKeyboardDeviceStartRequest();
float v_USBKeyboardDeviceConfigure( double parameter_1,int uni_para);
void v_USBKeyboardDevice( short parameter_1,int uni_para);
long v_DeviceNameServiceGet();
char v_strcpy( char parameter_1,long parameter_2);
void v_DeviceNameServiceAddDevice( short parameter_1,short parameter_2,short parameter_4);
int v_uspi_le2be32( long parameter_1);
int v_DWHCIDeviceTransfer( double parameter_1,float parameter_2,int parameter_4);
int v_USBBulkOnlyMassStorageDeviceCommand( float parameter_1,int parameter_3,short parameter_5,float parameter_6);
void v_USBEndpoint2( int parameter_1,unsigned int parameter_2,int parameter_3);
float v_USBBulkOnlyMassStorageDeviceConfigure( char parameter_1);
void v_USBBulkOnlyMassStorageDevice( int parameter_1);
short v_USBStandardHubEnumeratePorts( long parameter_1);
char v_USBConfigurationParserGetDescriptor( double parameter_1,char parameter_2);
float v_USBDeviceGetDescriptor( short parameter_1,unsigned int parameter_2);
float v_USBDeviceGetDeviceDescriptor( char parameter_1);
int v_USBStandardHubConfigure( int parameter_1);
void v_USBEndpointCopy( short parameter_1,long parameter_2,long parameter_3);
void v_USBStringCopy( double parameter_1,unsigned int parameter_2);
void v_USBDeviceCopy( float parameter_1,float parameter_2);
void v_USBStandardHub( short parameter_1);
int v_GetDevice( unsigned int parameter_1,unsigned int parameter_2,int uni_para);
double v_USBDeviceFactoryGetDevice( int parameter_1,int uni_para);
void v_StringAppend( double parameter_1,int parameter_2);
char v_StringGetLength( short parameter_1);
int v_StringCompare( double parameter_1,short parameter_2);
long v_StringSet( double parameter_1,unsigned int parameter_2);
double v_USBDeviceGetName( char parameter_1,double parameter_2);
char v_USBStandardHubGetDeviceNames( int parameter_1);
void v__USBString( float parameter_1);
void v__USBEndpoint( short parameter_1);
void v__USBConfigurationParser( unsigned int parameter_1);
void v__USBDevice( int parameter_1);
void v_debug_hexdump( int parameter_1,int parameter_2,unsigned int parameter_3);
void v_DebugHexdump( double parameter_1,float parameter_2,double parameter_3);
void v_USBConfigurationParserError( float parameter_1,float parameter_2);
void v_USBDeviceConfigurationError( double parameter_1,double parameter_2);
double v_USBConfigurationParserIsValid( short parameter_1);
void v_USBConfigurationParser( char parameter_1);
void v_String2( long parameter_1,long parameter_2);
unsigned int v_USBStringGetFromDescriptor( double parameter_1,short parameter_2,float parameter_3);
char v_USBDeviceGetEndpoint0( short parameter_1);
void v_USBDeviceGetHost( char parameter_1);
double v_USBStringGetLanguageID( long parameter_1);
void v_USBDeviceSetAddress( long parameter_1,double parameter_2);
long v_DWHCIDeviceSetAddress( char parameter_1,short parameter_2,long parameter_3);
void v_USBEndpointSetMaxPacketSize( double parameter_1,short parameter_2);
int v_DWHCIDeviceGetDescriptor( float parameter_1,unsigned int parameter_2,short parameter_3,char parameter_4,long parameter_6,long parameter_7);
float v_USBDeviceInitialize();
void v_USBString( int parameter_1);
void v_USBEndpoint( short parameter_1);
void v__USBRequest( short parameter_1);
short v_USBRequestGetResultLength( char parameter_1);
int v_USBEndpointIsDirectionIn( unsigned int parameter_1);
int v_USBRequestGetStatus( short parameter_1);
void v_DWHCIDeviceEnableChannelInterrupt( double parameter_1,unsigned int parameter_2);
char v_DWHCIFrameSchedulerNoSplitIsOddFrame( unsigned int parameter_1);
void v_DWHCIFrameSchedulerNoSplitWaitForFrame( unsigned int parameter_1);
void v_DWHCIFrameSchedulerNoSplitTransactionComplete( double parameter_1,int parameter_2);
long v_DWHCIFrameSchedulerNoSplitCompleteSplit( long parameter_1);
void v_DWHCIFrameSchedulerNoSplitStartSplit( unsigned int parameter_1);
void v__DWHCIFrameSchedulerNoSplit( int parameter_1);
void v_DWHCIFrameSchedulerNoSplit( long parameter_1);
short v_DWHCIFrameSchedulerNonPeriodicIsOddFrame( int parameter_1);
void v_DWHCIFrameSchedulerNonPeriodicWaitForFrame( unsigned int parameter_1);
void v_DWHCIFrameSchedulerNonPeriodicTransactionComplete( char parameter_1,int parameter_2,int uni_para);
int v_DWHCIFrameSchedulerNonPeriodicCompleteSplit( long parameter_1);
void v_DWHCIFrameSchedulerNonPeriodicStartSplit( short parameter_1);
void v__DWHCIFrameSchedulerNonPeriodic( unsigned int parameter_1);
void v_DWHCIFrameSchedulerNonPeriodic( float parameter_1,int uni_para);
char v_DWHCIFrameSchedulerPeriodicIsOddFrame( double parameter_1);
void v_DWHCIFrameSchedulerPeriodicWaitForFrame( long parameter_1);
void v_DWHCIFrameSchedulerPeriodicTransactionComplete( unsigned int parameter_1,unsigned int parameter_2);
char v_DWHCIFrameSchedulerPeriodicCompleteSplit();
void v_DWHCIFrameSchedulerPeriodicStartSplit( float parameter_1);
void v__DWHCIFrameSchedulerPeriodic( float parameter_1);
void v_DWHCIFrameSchedulerPeriodic( int parameter_1);
int v_USBRequestGetBuffer();
unsigned int v_USBEndpointGetMaxPacketSize( short parameter_1);
unsigned int v_USBDeviceGetSpeed( int parameter_1);
short v_USBEndpointGetDevice( float parameter_1);
void v_DWHCITransferStageData( double parameter_1,int uni_para);
char v_DWHCIDeviceAllocateChannel( long parameter_1);
int v_DWHCIDeviceTransferStageAsync( double parameter_1,int parameter_2,long parameter_3,short parameter_4,int uni_para);
void v_DWHCIDeviceCompletionRoutine( int parameter_1);
void v_USBRequestSetCompletionRoutine( short parameter_1,short parameter_2);
char v_DWHCIDeviceTransferStage( float parameter_1,int parameter_2,double parameter_3,double parameter_4,int uni_para);
int v_USBRequestGetBufLen( unsigned int parameter_1);
float v_USBRequestGetSetupData( double parameter_1);
float v_DWHCIDeviceSubmitBlockingRequest( short parameter_1,long parameter_2,int uni_para);
void v_USBRequest( double parameter_1);
int v_DWHCIDeviceControlMessage( char parameter_1,float parameter_2,int parameter_3,double parameter_4,float parameter_5,char parameter_6,unsigned int parameter_8,int uni_para);
char v_DWHCIDeviceSetConfiguration( int parameter_1,float parameter_2,short parameter_3,int uni_para);
void v_USBDeviceConfigure( int parameter_1,int uni_para);
void v_USBDevice( double parameter_1);
int v_DWHCIDeviceGetPortSpeed( double parameter_1);
unsigned int v_DWHCIRootPortInitialize( float parameter_1,int uni_para);
char v_DWHCIDeviceEnableRootPort( float parameter_1);
void v_DWHCIDeviceEnableHostInterrupts( long parameter_1);
void v_DWHCIDeviceFlushRxFIFO( char parameter_1);
void v_TimerusDelay( unsigned int parameter_1,unsigned int parameter_2);
void v_usDelay( double parameter_1);
void v_DWHCIDeviceFlushTxFIFO( short parameter_1,int parameter_2);
char v_DWHCIDeviceInitHost();
void v_DWHCIDeviceEnableGlobalInterrupts( double parameter_1);
void v_DWHCIDeviceEnableCommonInterrupts();
void v_MsDelay( unsigned int parameter_1);
double v_DWHCIDeviceWaitForBit( float parameter_1,double parameter_2,int parameter_3,short parameter_4,short parameter_5);
float v_DWHCIDeviceReset( float parameter_1);
long v_DWHCIDeviceInitCore( double parameter_1);
short v_DWHCITransferStageDataBeginSplitCycle( unsigned int parameter_1);
char v_DWHCITransferStageDataIsStageComplete( short parameter_1);
void v_USBRequestCallCompletionRoutine();
void v_DWHCIDeviceFreeChannel( int parameter_1,int parameter_2);
void v__DWHCITransferStageData( float parameter_1);
void v_uspi_LeaveCritical();
void v_uspi_EnterCritical();
void v_DWHCIDeviceDisableChannelInterrupt( int parameter_1,short parameter_2);
char v_DWHCITransferStageDataGetResultLen( unsigned int parameter_1);
void v_USBRequestSetResultLen( char parameter_1,int parameter_2);
unsigned int v_DWHCITransferStageDataIsStatusStage( float parameter_1);
void v_DWHCITransferStageDataSetSplitComplete( float parameter_1,double parameter_2);
void v_DWHCIDeviceTimerHandler( int parameter_1);
long v_TimerGet();
unsigned int v_TimerStartKernelTimer( char parameter_1,char parameter_2,short parameter_3);
char v_StartKernelTimer( float parameter_1,float parameter_2);
short v_USBRequestGetEndpoint( long parameter_1);
void v_USBEndpointGetInterval( char parameter_1);
void v_DWHCITransferStageDataSetState( unsigned int parameter_1,int parameter_2);
void v_USBRequestSetStatus( double parameter_1,int parameter_2);
short v_DWHCITransferStageDataGetTransactionStatus( short parameter_1);
double v_DWHCITransferStageDataGetState( int parameter_1);
void v_USBEndpointSkipPID( unsigned int parameter_1,double parameter_2,unsigned int parameter_3);
void v_DWHCITransferStageDataTransactionComplete( unsigned int parameter_1,long parameter_2,float parameter_3,long parameter_4);
unsigned int v_DWHCIRegisterIsSet( int parameter_1,float parameter_2);
void v_DWHCIDeviceStartTransaction( short parameter_1,double parameter_2);
double v_DWHCITransferStageDataIsPeriodic();
char v_DWHCITransferStageDataGetStatusMask( short parameter_1);
void v_DWHCIRegisterSet( int parameter_1,unsigned int parameter_2);
long v_USBEndpointGetNumber( short parameter_1);
void v_DWHCITransferStageDataGetEndpointNumber( short parameter_1);
long v_USBEndpointGetType( char parameter_1);
double v_DWHCITransferStageDataGetEndpointType( short parameter_1);
double v_USBDeviceGetAddress( int parameter_1);
short v_DWHCITransferStageDataGetDeviceAddress( double parameter_1);
float v_DWHCITransferStageDataGetSpeed();
int v_DWHCITransferStageDataIsDirectionIn( long parameter_1);
float v_DWHCITransferStageDataGetMaxPacketSize( long parameter_1);
void v_DWHCITransferStageDataIsSplitComplete( long parameter_1);
float v_DWHCITransferStageDataGetSplitPosition( long parameter_1);
float v_USBDeviceGetHubAddress( long parameter_1);
short v_DWHCITransferStageDataGetHubAddress( float parameter_1);
double v_USBDeviceGetHubPortNumber( long parameter_1);
short v_DWHCITransferStageDataGetHubPortAddress( char parameter_1);
void v_DWHCITransferStageDataIsSplit( int parameter_1);
void v_uspi_CleanAndInvalidateDataCacheRange( int parameter_1,char parameter_2);
void v_DWHCITransferStageDataGetDMAAddress();
short v_USBEndpointGetNextPID( long parameter_1,long parameter_2);
long v_DWHCITransferStageDataGetPID( int parameter_1);
long v_DWHCITransferStageDataGetPacketsToTransfer( long parameter_1);
float v_DWHCITransferStageDataGetBytesToTransfer( long parameter_1);
void v_DWHCIRegisterOr( double parameter_1,unsigned int parameter_2);
void v_DWHCIRegisterSetAll( int parameter_1);
void v_DWHCITransferStageDataSetSubState( int parameter_1,unsigned int parameter_2);
void v_DWHCITransferStageDataGetChannelNumber( unsigned int parameter_1);
void v_DWHCIDeviceStartChannel( short parameter_1,long parameter_2);
char v_DWHCITransferStageDataGetSubState( double parameter_1);
double v_DWHCITransferStageDataGetURB( long parameter_1);
char v_DWHCITransferStageDataGetFrameScheduler( char parameter_1);
void v_DWHCIDeviceChannelInterruptHandler( double parameter_1,int parameter_2);
void v_DWHCIRegister2( double parameter_1,long parameter_2,unsigned int parameter_3);
void v_DWHCIDeviceInterruptHandler();
short v_InterruptSystemGet();
void v_ConnectInterrupt( unsigned int parameter_1,double parameter_2);
void v_DWHCIRegisterWrite( unsigned int parameter_1);
void v_DWHCIRegisterAnd( char parameter_1,float parameter_2);
int v_SetPowerStateOn();
void v__DWHCIRegister( float parameter_1);
long v_DWHCIRegisterGet( float parameter_1);
double v_LoggerGet();
void v_LogWrite( short parameter_1,long parameter_2,double parameter_3,short parameter_4,int uni_para);
unsigned int v_DWHCIRegisterRead( unsigned int parameter_1);
void v_DWHCIRegister( long parameter_1);
char v_DWHCIDeviceInitialize( double parameter_1,int uni_para);
void v_DWHCIRootPort();
void v_DWHCIDevice( float parameter_1);
void v_DeviceNameService();
int v_USPiInitialize(int uni_para);
void v__ExceptionHandler( int parameter_1);
void v__InterruptSystem( double parameter_1);
void v__Timer( short parameter_1);
void v__Logger( unsigned int parameter_1);
void v_DelayLoop( short parameter_1);
void v_TimerMsDelay( double parameter_1,long parameter_2);
double v_TimerGetTicks();
void v_TimerTuneMsDelay( long parameter_1);
void v_TimerPollKernelTimers( char parameter_1);
void v_TimerInterruptHandler();
void v_InterruptSystemEnableIRQ( short parameter_1);
void v_InterruptSystemConnectIRQ( double parameter_1,long parameter_2,short parameter_3);
double v_TimerInitialize( long parameter_1);
void v_IRQStub();
int v_InterruptSystemInitialize( short parameter_1);
void v_StringFormatV( unsigned int parameter_1,unsigned int parameter_2,short parameter_3);
void v__String( int parameter_1);
void v_StringGet( double parameter_1);
void v_StringFormat( char parameter_1,short parameter_2,int parameter_3);
void v_String( long parameter_1);
void v_TimerGetTimeString( long parameter_1);
void v_ScreenDeviceSetCursorMode( long parameter_1,double parameter_2);
void v_ScreenDeviceCursorMove( short parameter_1,float parameter_2,unsigned int parameter_3);
void v_ScreenDeviceSetStandoutMode( float parameter_1,float parameter_2);
void v_ScreenDeviceInsertMode( int parameter_1,long parameter_2);
void v_ScreenDeviceEraseChars( double parameter_1,short parameter_2);
void v_ScreenDeviceDeleteChars( long parameter_1,double parameter_2);
void v_ScreenDeviceDeleteLines( int parameter_1,float parameter_2);
void v_ScreenDeviceCursorUp();
void v_ScreenDeviceInsertLines( float parameter_1,double parameter_2);
void v_ScreenDeviceReverseScroll( char parameter_1);
void v_ScreenDeviceCursorRight( long parameter_1,int uni_para);
float v_CharGeneratorGetPixel( short parameter_1,char parameter_2,long parameter_3,char parameter_4);
void v_ScreenDeviceDisplayChar2( short parameter_1,char parameter_2,short parameter_3,long parameter_4,unsigned int parameter_5);
void v_ScreenDeviceDisplayChar( long parameter_1,char parameter_2,int uni_para);
short v_memcpyblk(char parameter_2,long parameter_3);
void v_ScreenDeviceScroll( float parameter_1);
void v_ScreenDeviceCursorDown( int parameter_1);
void v_ScreenDeviceCarriageReturn( unsigned int parameter_1);
void v_ScreenDeviceNewLine( long parameter_1);
void v_ScreenDeviceTabulator( char parameter_1);
void v_ScreenDeviceCursorLeft( long parameter_1);
void v_ScreenDeviceWrite2( float parameter_1,char parameter_2,int uni_para);
int v_ScreenDeviceWrite( float parameter_1,double parameter_2,int parameter_3,int uni_para);
short v_strlen();
void v_LoggerWrite2( int parameter_1,char parameter_2,int uni_para);
void v_LoggerWriteV( unsigned int parameter_1,unsigned int parameter_2,char parameter_3,short parameter_4,int parameter_5,int uni_para);
void v_LoggerWrite( short parameter_1,short parameter_2,double parameter_3,short parameter_4,long parameter_5);
char v_LoggerInitialize( unsigned int parameter_1,long parameter_2);
void v_Logger( unsigned int parameter_1);
void v_Timer( int parameter_1);
void v_InterruptSystem( long parameter_1);
void v_DataAbortStub();
void v_PrefetchAbortStub();
void v_UndefinedInstructionStub();
void v_ExceptionHandler2( short parameter_1);
void v__CharGenerator( double parameter_1);
void v_free();
void v__BcmFrameBuffer( long parameter_1);
void v__ScreenDevice( short parameter_1);
long v_ScreenDeviceGetPixel( double parameter_1,long parameter_2,float parameter_3);
void v_CharGeneratorGetUnderline( int parameter_1);
void v_ScreenDeviceInvertCursor();
void v_ScreenDeviceSetPixel( float parameter_1,int parameter_2,short parameter_3,long parameter_4);
void v_ScreenDeviceEraseChar( float parameter_1,float parameter_2,char parameter_3);
int v_CharGeneratorGetCharWidth( int parameter_1);
void v_ScreenDeviceClearLineEnd( float parameter_1);
void v_ScreenDeviceClearDisplayEnd( float parameter_1);
void v_ScreenDeviceCursorHome( unsigned int parameter_1);
float v_CharGeneratorGetCharHeight( double parameter_1);
int v_BcmFrameBufferGetPitch( float parameter_1);
short v_BcmFrameBufferGetHeight( char parameter_1);
void v_BcmFrameBufferGetWidth( char parameter_1);
void v_BcmFrameBufferGetSize( short parameter_1);
int v_BcmFrameBufferGetBuffer( long parameter_1);
double v_BcmFrameBufferGetDepth( double parameter_1);
float v_BcmFrameBufferInitialize( float parameter_1);
void v_BcmFrameBufferSetPalette( char parameter_1,double parameter_2,double parameter_3);
short v_memset(int parameter_2,long parameter_3);
void v_BcmFrameBuffer( char parameter_1);
unsigned int v_ScreenDeviceInitialize( float parameter_1);
void v_CharGenerator( unsigned int parameter_1);
void v_ScreenDevice( int parameter_1);
void v__BcmMailBox( long parameter_1);
void v__BcmPropertyTags( double parameter_1);
float v_PageTableGetBaseAddress();
void v_MemorySystemEnableMMU( int parameter_1);
void v_PageTable( int parameter_1);
unsigned int v_palloc();
void v_PageTable2( char parameter_1,long parameter_2);
void v_LeaveCritical();
void v_EnterCritical();
int v_malloc( float parameter_1);
void v_mem_init( int parameter_1,double parameter_2);
void v_InvalidateDataCache();
void v_BcmMailBoxRead( char parameter_1);
void v_write32( double parameter_1,short parameter_2);
void v_BcmMailBoxWrite( long parameter_1,double parameter_2);
void v_TimerSimpleusDelay( float parameter_1);
void v_TimerSimpleMsDelay();
float v_read32( int parameter_1);
void v_BcmMailBoxFlush();
unsigned int v_BcmMailBoxWriteRead( long parameter_1,char parameter_2);
void v_CleanDataCache();
double v_memcpy(unsigned int parameter_2,long parameter_3);
double v_BcmPropertyTagsGetTag( unsigned int parameter_1,double parameter_2,int parameter_4,long parameter_5);
void v_BcmMailBox( long parameter_1);
void v_BcmPropertyTags( unsigned int parameter_1);
void v_MemorySystem( long parameter_1);
int v_USPiEnvInitialize();
void v_USBEndpointResetPID( short parameter_1)
{
	double double_1 = 1;
	double_1 = double_1;
	double_1 = double_1 * double_1;
	double_1 = double_1 * double_1;
}
int v_USBBulkOnlyMassStorageDeviceReset()
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	short short_3 = 1;
	long long_2 = 1;
	v_USBDeviceGetHost(char_1);

	float_2 = float_1 + float_1;
	double_2 = double_1 * double_1;
	double_3 = double_3 * double_4;
	if(1)
	{
		char_2 = v_USBDeviceGetEndpoint0(short_1);

		double_4 = double_2 + double_1;
	}
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	int_2 = v_DWHCIDeviceControlMessage(char_2,float_1,int_3,double_3,float_3,char_2,unsigned_int_2,-1 );

	long_1 = long_1 * long_1;
	v_LogWrite(short_2,long_1,double_5,short_3,-1 );

	v_USBEndpointResetPID(short_2);

	long_1 = long_1 * long_2;
	return int_1;
}
float v_uspi_le2be16( float parameter_1)
{
	float float_1 = 1;
	return float_1;
}
int v_USBBulkOnlyMassStorageDeviceTryRead( int parameter_1,char parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	float float_3 = 1;
	int_1 = v_uspi_le2be32(long_1);

	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_3 * double_1;
	if(1)
	{
	}
	float_1 = v_uspi_le2be16(float_1);

	int_2 = int_1 * int_2;
	char_3 = char_1 * char_2;
	int_1 = int_1;
	char_3 = char_2 + char_2;
	v_LogWrite(short_1,long_1,double_4,short_1,-1 );

	float_1 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_3;
	int_2 = int_2 * int_1;
	char_4 = char_4 * char_3;
	if(1)
	{
		int_1 = int_2 + int_2;
	}
	return int_3;
	int_3 = v_USBBulkOnlyMassStorageDeviceCommand(float_2,int_4,short_1,float_3);

}
int v_USBBulkOnlyMassStorageDeviceRead( long parameter_1,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int_1 = v_USBBulkOnlyMassStorageDeviceTryRead(int_2,char_1);

	long_1 = long_1 + long_1;
	return int_2;
	int_2 = v_USBBulkOnlyMassStorageDeviceReset();

}
unsigned int v_USBBulkOnlyMassStorageDeviceSeek( char parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	return unsigned_int_3;
}
int v_USPiMassStorageDeviceRead( double parameter_1,long parameter_3,short parameter_4)
{
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = v_USBBulkOnlyMassStorageDeviceRead(long_1,short_1);

	float_1 = float_1 + float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "_#") < 0)
	{
	}
	if(1)
	{
	}
	return int_1;
	unsigned_int_1 = v_USBBulkOnlyMassStorageDeviceSeek(char_1,unsigned_int_2);

}
int v_USPiMassStorageDeviceAvailable()
{
	int int_1 = 1;
	int_1 = int_1 * int_1;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_2;
		}
	}
	return int_1;
}
void v_USPiEnvClose()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	v__Logger(unsigned_int_1);

	char_2 = char_1 + char_1;
	int_2 = int_1 + int_1;
	v__ExceptionHandler(int_3);

	double_1 = double_1 * double_1;
	v__Timer(short_1);

	double_1 = double_1 + double_1;
	v__ScreenDevice(short_2);

	int_5 = int_4 + int_5;
	v__InterruptSystem(double_2);

}
int v_strcmp( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_2 = float_1 + float_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
		}
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		if(1)
		{
		}
		short_2 = short_1 * short_1;
	}
	if(1)
	{
	}
	int_1 = int_2;
	short_1 = short_1 * short_2;
	if(1)
	{
	}
	return int_1;
}
int v_DeviceNameServiceGetDevice( double parameter_1,float parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_2 = long_1 * long_2;
	int_1 = v_strcmp(int_2,double_1);

	int_5 = int_3 + int_4;
	float_1 = float_2;
	return int_5;
}
void v__DeviceNameService( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_free();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
void v__DWHCIRootPort( int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	v__USBDevice(int_1);

	double_2 = double_1 * double_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char_2 = char_1 * char_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_1 = double_1 + double_1;
	}
	long_3 = long_1 * long_2;
	v_free();

}
void v__DWHCIDevice( float parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	v__DWHCIRootPort(int_1);

	unsigned_int_1 = unsigned_int_1;
}
void v_DWHCIDeviceDisableRootPort( long parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float_1 = float_1 * float_1;
	v_DWHCIRegister(long_1);

	int_2 = int_1 + int_2;
	unsigned_int_1 = v_DWHCIRegisterRead(unsigned_int_1);

	v__DWHCIRegister(float_1);

	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1 + short_2;
	v_DWHCIRegisterWrite(unsigned_int_1);

	long_2 = long_1 + long_2;
	v_DWHCIRegisterAnd(char_1,float_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
}
void v_DWHCIDeviceOvercurrentDetected( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	double_2 = double_1 + double_1;
	v_DWHCIRegister(long_1);

	v__DWHCIRegister(float_1);

	double_2 = double_3 + double_3;
	unsigned_int_1 = v_DWHCIRegisterRead(unsigned_int_2);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	long_1 = long_1 + long_2;
}
void v_USBMIDIDeviceCompletionRoutine( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	int int_5 = 1;
	int_2 = int_1 * int_1;
	int_3 = v_USBRequestGetStatus(short_1);

	short_2 = short_2 + short_2;
	int_2 = int_3 + int_2;
	v__USBRequest(short_2);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		int_2 = int_1 + int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char controller_2[2];
			fgets(controller_2 ,2 ,stdin);
			if( strcmp( controller_2, "B") > 0)
			{
				if(1)
				{
					double double_3 = 1;
					int_3 = int_4 * int_1;
					v_free();

					float_1 = v_USBMIDIDeviceStartRequest(float_2);

					double_3 = double_1 * double_2;
					short_3 = v_USBRequestGetResultLength(char_1);

					unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
				}
			}
		}
	}
	double_1 = double_2 + double_2;
	char_1 = char_1;
	int_2 = int_5 * int_4;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
}
float v_USBMIDIDeviceStartRequest( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = double_1 + double_2;
	v_USBRequest(double_1);

	long_1 = long_1 * long_1;
	long_2 = long_3;
	v_USBMIDIDeviceCompletionRoutine(long_3);

	int_1 = v_DWHCIDeviceSubmitAsyncRequest(double_2,unsigned_int_1);

	double_4 = double_3 + double_4;
	int_2 = v_malloc(float_1);

	v_USBRequestSetCompletionRoutine(short_1,short_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 * char_1;
	v_USBDeviceGetHost(char_3);

	short_2 = short_1;
	float_2 = float_3;
	return float_3;
}
short v_USBMIDIDeviceConfigure( float parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	v_USBDeviceConfigurationError(double_1,double_1);

	v_USBEndpoint2(int_1,unsigned_int_1,int_1);

	v_USBDeviceConfigure(int_2,-1 );

	long_1 = v_DeviceNameServiceGet();

	v__String(int_1);

	int_3 = int_2 * int_3;
	float_1 = v_USBDeviceGetDescriptor(short_1,unsigned_int_2);

	int_2 = v_malloc(float_2);

	float_3 = v_USBMIDIDeviceStartRequest(float_2);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	return short_1;
	v_LogWrite(short_1,long_1,double_2,short_2,-1 );

	v_String(long_1);

	v_StringFormat(char_1,short_2,int_2);

	v_DeviceNameServiceAddDevice(short_1,short_3,short_1);

	v_StringGet(double_1);

}
void v_USBMIDIDevice( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 + int_2;
	v_USBDeviceCopy(float_1,float_2);

	int_2 = int_1 * int_2;
	int_3 = int_3 + int_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	short_2 = short_1 + short_1;
	short_1 = v_USBMIDIDeviceConfigure(float_1);

	int_1 = int_4 * int_5;
}
void v_USBGamePadDeviceCompletionRoutine( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	long_3 = long_1 * long_2;
	short_3 = short_1 + short_2;
	double_1 = double_2;
	int_1 = v_USBRequestGetStatus(short_2);

	short_5 = short_4 + short_2;
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			short_1 = v_USBRequestGetResultLength(char_1);

			short_3 = short_4 + short_4;
		}
	}
	double_1 = double_2;
	v_free();

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_3 = v_USBGamePadDeviceStartRequest(int_2);

	double_3 = double_3 + double_3;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	double_4 = v_USBGamePadDeviceDecodeReport(double_1);

	v__USBRequest(short_1);

}
unsigned int v_USBGamePadDeviceStartRequest( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	v_USBGamePadDeviceCompletionRoutine(double_1);

	double_3 = double_2 + double_2;
	v_USBRequestSetCompletionRoutine(short_1,short_2);

	int_1 = v_DWHCIDeviceSubmitAsyncRequest(double_2,unsigned_int_1);

	double_4 = double_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	v_USBRequest(double_4);

	long_1 = long_1 + long_2;
	int_1 = v_malloc(float_1);

	int_1 = int_2 * int_2;
	double_5 = double_3 + double_1;
	int_3 = int_1 + int_1;
	v_USBDeviceGetHost(char_1);

	short_2 = short_2 * short_2;
	return unsigned_int_3;
}
void v_USBGamePadDevicePS3Configure( short parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int_1 = v_DWHCIDeviceControlMessage(char_1,float_1,int_1,double_1,float_2,char_1,unsigned_int_1,-1 );

	char_2 = char_2 + char_1;
	double_2 = double_2 * double_1;
	int_1 = int_2 + int_3;
	int_2 = int_4 * int_4;
	v_USBDeviceGetHost(char_3);

	long_1 = long_1 * long_1;
	long_2 = long_2;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	int_5 = int_5 * int_6;
	char_1 = v_USBDeviceGetEndpoint0(short_1);

}
double v_BitGetSigned(short parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float_3 = float_1 * float_2;
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		float_1 = v_BitGetUnsigned(char_1,double_1);

		float_3 = float_4 + float_5;
	}
	return double_1;
}
float v_BitGetUnsigned(char parameter_2,double parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short_3 = short_1 * short_2;
	int_1 = int_1 * int_2;
	double_1 = double_2;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_1 = int_2;
			int_2 = int_1;
		}
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double_2 = double_3 * double_2;
			double_2 = double_1;
			double_4 = double_5;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_3 = 1;
			char_3 = char_1 + char_2;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		}
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_2 = int_3;
			int_4 = int_4 + int_3;
		}
	}
	return float_1;
}
double v_USBGamePadDeviceDecodeReport( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_2;
	long_1 = long_1 + long_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_4;
	int_2 = int_2 * int_3;
	double_1 = double_2;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_5;
	int_5 = int_4 + int_4;
	double_1 = double_2;
	double_3 = double_3 + double_3;
	double_1 = double_3 + double_4;
	double_3 = double_3;
	if(1)
	{
		double_3 = v_BitGetSigned(short_1,short_2);

		short_1 = short_1;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		float_1 = v_BitGetUnsigned(char_1,double_4);

		long_1 = long_2 * long_3;
	}
	return double_4;
}
float v_USBGamePadDeviceConfigure()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_3 = 1;
	char char_2 = 1;
	short short_2 = 1;
	int int_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	double double_5 = 1;
	char char_3 = 1;
	short short_3 = 1;
	double double_6 = 1;
	short short_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = v_USBGamePadDeviceDecodeReport(double_1);

	unsigned_int_1 = v_USBGamePadDeviceStartRequest(int_1);

	double_2 = double_1 * double_2;
	v_String(long_1);

	long_2 = v_DeviceNameServiceGet();

	v__String(int_1);

	unsigned_int_2 = unsigned_int_1;
	v_USBDeviceConfigurationError(double_1,double_3);

	long_2 = long_2;
	char_1 = v_USBDeviceGetEndpoint0(short_1);

	v_DeviceNameServiceAddDevice(short_1,short_1,short_1);

	long_2 = long_3 + long_3;
	char_2 = char_2 * char_1;
	v_StringFormat(char_2,short_2,int_2);

	long_3 = long_2 + long_3;
	double_4 = double_2 * double_4;
	char_1 = char_2 + char_1;
	float_1 = v_USBDeviceGetDescriptor(short_1,unsigned_int_3);

	int_2 = v_DWHCIDeviceControlMessage(char_1,float_2,int_2,double_5,float_2,char_3,unsigned_int_2,-1 );

	short_2 = short_2 + short_3;
	v_StringGet(double_5);

	double_6 = double_3 + double_4;
	v_USBDeviceGetHost(char_1);

	v_LogWrite(short_4,long_4,double_3,short_2,-1 );

	v_USBGamePadDevicePS3Configure(short_1);

	long_2 = long_1 * long_5;
	int_3 = v_malloc(float_3);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	v_USBDeviceConfigure(int_2,-1 );

	double_2 = double_5 * double_6;
	long_4 = long_1;
	v_USBEndpoint2(int_3,unsigned_int_4,int_3);

	long_3 = long_5 + long_4;
	return float_1;
}
void v_USBGamePadDevice( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_4 = 1;
	short short_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_5 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	float_2 = float_1 + float_1;
	int_2 = int_1 * int_1;
	double_1 = double_1 + double_2;
	float_3 = v_USBGamePadDeviceConfigure();

	double_3 = double_1 + double_3;
	short_3 = short_1 * short_2;
	v_USBDeviceCopy(float_1,float_4);

	int_1 = v_malloc(float_4);

	short_3 = short_4 * short_4;
	int_1 = int_2;
	double_5 = double_4 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int_2 = int_2 + int_1;
		int_3 = int_3;
		int_3 = int_3 * int_4;
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_5 = 1;
		int_5 = int_5 + int_4;
	}
	unsigned_int_2 = unsigned_int_6 + unsigned_int_2;
	float_1 = float_3 * float_5;
	int_2 = int_1;
	long_1 = long_1 * long_1;
}
double v_LAN7800DevicePHYWrite( char parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	char char_3 = 1;
	char_2 = char_1 * char_2;
	double_1 = v_LAN7800DeviceWriteReg(short_1,int_1,unsigned_int_1);

	short_2 = short_2 * short_1;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	float_3 = float_3 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	return double_1;
	float_4 = v_LAN7800DeviceWaitReg(short_2,char_3,short_1,double_1);

}
short v_LAN7800DevicePHYRead( double parameter_1,short parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_3 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	double_1 = v_LAN7800DeviceWriteReg(short_1,int_1,unsigned_int_2);

	short_4 = short_2 + short_3;
	float_1 = v_LAN7800DeviceWaitReg(short_3,char_1,short_3,double_2);

	short_6 = short_5 * short_5;
	double_3 = double_3 + double_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "s") < 0)
	{
	}
	double_3 = double_3 + double_2;
	double_3 = v_LAN7800DeviceReadReg(int_2,short_6,float_2);

	short_4 = short_6 + short_2;
	return short_6;
}
int v_LAN7800DeviceInitPHY( unsigned int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	double_1 = v_LAN7800DevicePHYWrite(char_1,unsigned_int_1,unsigned_int_2);

	int_1 = int_1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	char_1 = char_1 * char_2;
	short_1 = v_LAN7800DevicePHYRead(double_1,short_1,double_1);

	int_3 = int_2 + int_1;
	char_2 = char_2 * char_3;
	return int_2;
}
void v_LAN7800DeviceInitMACAddress( short parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short short_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	v_MACAddressFormat(double_1,int_1);

	short_2 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	char_1 = char_2;
	v_MACAddressSet(int_2,int_2);

	double_2 = v_LAN7800DeviceWriteReg(short_2,int_3,unsigned_int_2);

	int_5 = int_3 * int_4;
	v_MACAddress(int_3);

	v__String(int_2);

	double_2 = double_3 * double_4;
	if(1)
	{
	}
	if(1)
	{
	}
	short_2 = short_2 + short_1;
	v_LogWrite(short_2,long_1,double_1,short_3,-1 );

	double_5 = double_3 * double_2;
	v_String(long_1);

	int_1 = int_1 + int_5;
	int_5 = v_GetMACAddress(double_6);

	double_7 = double_6 * double_7;
	v_StringGet(double_3);

	short_1 = short_3 * short_3;
}
float v_LAN7800DeviceWaitReg( short parameter_1,char parameter_2,short parameter_3,double parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	char_1 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_2;
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	double_1 = double_1;
	double_1 = double_1 * double_2;
	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_2;
	double_3 = double_1 * double_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	char_3 = char_4 + char_4;
	long_1 = long_2;
	float_2 = float_1 + float_2;
	float_1 = float_2 * float_1;
	if(1)
	{
		double_1 = v_LAN7800DeviceReadReg(int_1,short_1,float_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	int_2 = int_2 + int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	int_3 = int_1 * int_1;
	float_3 = float_3;
	return float_2;
	v_MsDelay(unsigned_int_1);

}
double v_LAN7800DeviceWriteReg( short parameter_1,int parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char_1 = v_USBDeviceGetEndpoint0(short_1);

	long_1 = long_1 * long_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "=") < 0)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_1 = v_DWHCIDeviceControlMessage(char_2,float_1,int_2,double_1,float_1,char_1,unsigned_int_1,-1 );

		v_LogWrite(short_2,long_1,double_2,short_2,-1 );

		int_4 = int_1 + int_3;
	}
	return double_3;
	v_USBDeviceGetHost(char_2);

}
long v_LAN7800DeviceReadWriteReg( unsigned int parameter_1,int parameter_2,float parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int_3 = int_1 * int_2;
	double_1 = v_LAN7800DeviceReadReg(int_2,short_1,float_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_1 = v_LAN7800DeviceWriteReg(short_1,int_1,unsigned_int_1);

	short_1 = short_1;
	float_3 = float_1 * float_2;
	return long_1;
}
double v_LAN7800DeviceReadReg( int parameter_1,short parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "eD") < 0)
	{
		v_USBDeviceGetHost(char_1);

		char_2 = v_USBDeviceGetEndpoint0(short_1);

		long_1 = long_1;
	}
	return double_1;
	int_1 = v_DWHCIDeviceControlMessage(char_2,float_1,int_1,double_1,float_1,char_1,unsigned_int_1,-1 );

	v_LogWrite(short_2,long_1,double_1,short_3,-1 );

}
void v_LAN7800DeviceConfigure( long parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_6 = 1;
	long long_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_7 = 1;
	if(1)
	{
	}
	float_1 = v_USBDeviceGetDescriptor(short_1,unsigned_int_1);

	v_USBDeviceConfigurationError(double_1,double_1);

	v_LAN7800DeviceInitMACAddress(short_1);

	double_2 = v_LAN7800DeviceWriteReg(short_1,int_1,unsigned_int_1);

	v_DeviceNameServiceAddDevice(short_1,short_2,short_2);

	double_4 = double_3 + double_2;
	if(1)
	{
	}
	double_5 = v_LAN7800DeviceReadReg(int_1,short_2,float_2);

	float_2 = v_LAN7800DeviceWaitReg(short_2,char_1,short_1,double_6);

	v_String(long_1);

	v_StringFormat(char_2,short_1,int_1);

	double_1 = double_4 * double_6;
	v_USBEndpoint2(int_1,unsigned_int_2,int_2);

	v_USBDeviceConfigure(int_1,-1 );

	v_LogWrite(short_2,long_1,double_6,short_2,-1 );

	short_3 = short_3 + short_2;
	int_1 = v_LAN7800DeviceInitPHY(unsigned_int_1);

	long_2 = v_DeviceNameServiceGet();

	v__String(int_1);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = v_malloc(float_3);

	long_3 = v_LAN7800DeviceReadWriteReg(unsigned_int_1,int_3,float_3,int_4);

	v_StringGet(double_7);

}
void v_LAN7800Device( double parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	int_1 = v_malloc(float_1);

	double_2 = double_1 + double_1;
	v_USBDeviceCopy(float_2,float_2);

	int_2 = int_1 * int_1;
	int_3 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_4 = double_3 + double_2;
	double_4 = double_3;
	short_2 = short_1 * short_1;
	v_LAN7800DeviceConfigure(long_1);

	float_2 = float_3;
}
int v_SMSC951xDeviceWriteReg( float parameter_1,long parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	v_USBDeviceGetHost(char_1);

	char_2 = v_USBDeviceGetEndpoint0(short_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_1;
	int_1 = v_DWHCIDeviceControlMessage(char_1,float_1,int_1,double_1,float_2,char_2,unsigned_int_1,-1 );

}
void v_MACAddressCopyTo( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	short_1 = short_1 + short_2;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = v_memcpy(unsigned_int_3,long_1);

}
void v_MACAddressFormat( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_1 + int_2;
	double_1 = double_1 * double_1;
	float_2 = float_1 + float_2;
	v_StringFormat(char_1,short_1,int_2);

	long_1 = long_1 * long_2;
}
void v_MACAddressSet( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = v_memcpy(unsigned_int_1,long_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	long_2 = long_1 * long_1;
	short_1 = short_1 * short_1;
	int_3 = int_1 + int_2;
}
int v_GetMACAddress( double parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = v_memcpy(unsigned_int_1,long_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	double_1 = v_BcmPropertyTagsGetTag(unsigned_int_2,double_1,int_1,long_1);

	float_3 = float_1 * float_2;
	double_2 = double_1 * double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "s") == 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		v__BcmPropertyTags(double_3);

		char_3 = char_1 * char_2;
	}
	v_MACAddress(int_1);

	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	int_1 = int_1 + int_1;
	return int_1;
	v_BcmPropertyTags(unsigned_int_3);

}
void v_MACAddress( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 + char_2;
}
void v_SMSC951xDeviceConfigure( int parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	float float_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_MACAddressSet(int_1,int_1);

		v_String(long_1);

		v_MACAddressFormat(double_1,int_2);

		v__String(int_3);

		v_MACAddressCopyTo(double_1,double_1);

		v_StringFormat(char_1,short_1,int_1);

		v_DeviceNameServiceAddDevice(short_2,short_3,short_2);

		double_2 = double_2 * double_1;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	v_MACAddress(int_3);

	int_3 = v_GetMACAddress(double_1);

	v_LogWrite(short_1,long_2,double_2,short_2,-1 );

	v_StringGet(double_1);

	float_1 = v_USBDeviceGetDescriptor(short_3,unsigned_int_1);

	v_USBDeviceConfigurationError(double_1,double_2);

	int_1 = v_malloc(float_1);

	v_USBEndpoint2(int_4,unsigned_int_2,int_3);

	v_USBDeviceConfigure(int_1,-1 );

	int_5 = v_SMSC951xDeviceWriteReg(float_2,long_1,unsigned_int_1);

	long_1 = v_DeviceNameServiceGet();

}
void v_SMSC951xDevice()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 * float_1;
	char_1 = char_1;
	double_2 = double_1 + double_2;
	short_1 = short_1;
	double_4 = double_3 * double_3;
	int_1 = v_malloc(float_3);

	float_3 = float_1 * float_1;
	v_USBDeviceCopy(float_4,float_3);

	int_2 = int_3;
	v_SMSC951xDeviceConfigure(int_1);

}
int v_uspi_char2int( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "qS") > 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	return int_1;
}
void v_USBMouseDeviceCompletionRoutine( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	short short_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	v_free();

	double_1 = double_1 + double_1;
	int_1 = int_1 * int_1;
	int_2 = v_uspi_char2int(char_1);

	double_1 = double_1 + double_2;
	short_1 = v_USBMouseDeviceStartRequest(int_3);

	float_1 = float_1 + float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "0H") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v__USBRequest(short_2);

		double_3 = double_1 + double_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	double_2 = double_3 + double_1;
	int_2 = int_4 + int_2;
	double_3 = double_4;
	int_3 = v_USBRequestGetStatus(short_3);

	float_3 = float_1 * float_2;
	short_2 = v_USBRequestGetResultLength(char_2);

}
short v_USBMouseDeviceStartRequest( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	char_2 = char_1 + char_1;
	int_1 = v_malloc(float_1);

	v_USBRequestSetCompletionRoutine(short_1,short_2);

	v_USBMouseDeviceCompletionRoutine(long_1);

	int_1 = v_DWHCIDeviceSubmitAsyncRequest(double_1,unsigned_int_1);

	v_USBDeviceGetHost(char_2);

	char_2 = char_2 + char_2;
	char_1 = char_2;
	double_2 = double_2 * double_1;
	char_1 = char_3 + char_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	v_USBRequest(double_2);

	double_2 = double_3 + double_2;
	int_2 = int_1;
	return short_2;
}
long v_USBMouseDeviceConfigure( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	long long_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_4 = 1;
	long long_4 = 1;
	v_DeviceNameServiceAddDevice(short_1,short_1,short_2);

	float_1 = float_1 * float_1;
	v_USBDeviceConfigure(int_1,-1 );

	v_String(long_1);

	int_1 = int_2 + int_1;
	char_1 = char_1 * char_1;
	v_USBDeviceConfigurationError(double_1,double_2);

	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_3 = v_malloc(float_2);

	v_StringFormat(char_2,short_3,int_1);

	double_1 = double_3 + double_3;
	char_1 = v_USBDeviceGetEndpoint0(short_2);

	v_StringGet(double_3);

	v__String(int_4);

	short_1 = v_USBMouseDeviceStartRequest(int_4);

	int_3 = int_2 + int_2;
	float_2 = v_USBDeviceGetDescriptor(short_4,unsigned_int_1);

	v_USBEndpoint2(int_1,unsigned_int_1,int_1);

	v_LogWrite(short_1,long_2,double_3,short_4,-1 );

	int_1 = v_DWHCIDeviceControlMessage(char_2,float_2,int_1,double_3,float_3,char_2,unsigned_int_2,-1 );

	v_USBDeviceGetHost(char_3);

	long_3 = v_DeviceNameServiceGet();

	int_3 = int_3 * int_4;
	float_4 = float_1 + float_1;
	return long_4;
}
void v_USBMouseDevice( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_1;
	long_2 = long_1 * long_1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	int_1 = int_2;
	int_1 = v_malloc(float_1);

	float_3 = float_1 + float_2;
	long_1 = v_USBMouseDeviceConfigure(float_2);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	double_4 = double_3 + double_2;
	v_USBDeviceCopy(float_1,float_4);

}
void v_KeyMap( int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1 + int_1;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = v_memcpy(unsigned_int_3,long_1);

	int_1 = int_1;
	double_3 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
}
int v_DWHCIDeviceSubmitAsyncRequest( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int int_4 = 1;
	long long_2 = 1;
	int int_5 = 1;
	int_1 = int_1 * int_2;
	long_1 = v_USBEndpointGetType(char_1);

	short_1 = v_USBRequestGetEndpoint(long_1);

	int_2 = v_USBRequestGetBufLen(unsigned_int_1);

	double_2 = double_1 + double_2;
	int_1 = int_1 + int_2;
	v_USBRequestSetStatus(double_2,int_1);

	int_1 = int_2 * int_3;
	float_1 = float_1 + float_1;
	double_4 = double_3 * double_4;
	int_3 = v_USBEndpointIsDirectionIn(unsigned_int_2);

	char_1 = char_2 * char_1;
	int_4 = v_DWHCIDeviceTransferStageAsync(double_4,int_2,long_2,short_1,-1 );

	char_1 = char_1 + char_1;
	return int_5;
}
void v_TimerCancelKernelTimer( float parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_2;
	int_3 = int_2;
	char_1 = char_2;
}
void v_CancelKernelTimer()
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float_2 = float_1 * float_1;
	v_TimerCancelKernelTimer(float_1,char_1);

	long_1 = v_TimerGet();

}
void v_KeyMapGetString( short parameter_1,char parameter_2,int parameter_3,char parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_3 = char_1 * char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "+Q") > 0)
	{
	}
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			int int_3 = 1;
			char char_4 = 1;
			int_3 = int_2 + int_1;
			char_2 = char_4;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_1 + short_2;
		}
		if(1)
		{
			char char_5 = 1;
			char_5 = char_3 * char_2;
		}
	}
	int_2 = int_4 * int_1;
	double_1 = double_1 + double_2;
}
unsigned int v_KeyMapTranslate( int parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 + int_2;
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_4;
		}
	}
	if(1)
	{
		int_5 = int_5 + int_4;
	}
	int_5 = int_2 + int_5;
	long_3 = long_1 + long_2;
	short_2 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	return unsigned_int_2;
}
void v_USBKeyboardDeviceGenerateKeyEvent( short parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	float float_3 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_2;
	float_1 = float_1;
	double_5 = double_3 + double_4;
	v_USBKeyboardDeviceGetModifiers(double_2);

	char_1 = char_1 + char_2;
	if(1)
	{
		double double_6 = 1;
		int_1 = int_1 * int_1;
		float_1 = float_1 + float_2;
		double_3 = double_6;
	}
	v_KeyMapGetString(short_1,char_3,int_1,char_3);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_2 = v_KeyMapTranslate(int_2,unsigned_int_4,unsigned_int_3);

		unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
	}
	long_1 = long_1 * long_1;
	float_3 = float_2 + float_2;
	if(1)
	{
		if(1)
		{
			int_2 = int_2 + int_1;
		}
	}
	float_2 = float_3 * float_3;
}
short v_USBKeyboardDeviceGetKeyCode( double parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
	}
	return short_1;
}
void v_USBKeyboardDeviceGetModifiers( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 + double_2;
}
void v_USBKeyboardDeviceCompletionRoutine( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	short short_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_3 = 1;
	v_free();

	int_2 = int_1 + int_1;
	v_CancelKernelTimer();

	int_3 = int_3;
	v_USBKeyboardDeviceGetModifiers(double_1);

	char_1 = char_2;
	float_1 = float_1;
	if(1)
	{
		if(1)
		{
			double_1 = double_1;
		}
		if(1)
		{
			double double_2 = 1;
			double double_4 = 1;
			long_1 = v_USBKeyboardDeviceStartRequest();

			char_1 = char_1 + char_2;
			if(1)
			{
				long long_2 = 1;
				long long_3 = 1;
				v_USBKeyboardDeviceGenerateKeyEvent(short_1,short_1);

				long_3 = long_1 + long_2;
			}
			if(1)
			{
				int_4 = v_USBRequestGetStatus(short_1);

				short_2 = v_USBKeyboardDeviceGetKeyCode(double_1);

				double_2 = double_1 * double_1;
			}
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				int int_5 = 1;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
				if(1)
				{
					double_3 = double_1 * double_1;
				}
				double_3 = double_4 * double_5;
				int_1 = int_4 + int_5;
			}
			if(1)
			{
				long long_4 = 1;
				long long_5 = 1;
				double_2 = double_1 * double_4;
				v__USBRequest(short_3);

				long_5 = long_1 + long_4;
			}
		}
	}
	short_2 = v_USBRequestGetResultLength(char_1);

	double_1 = double_3 + double_5;
	double_7 = double_1 + double_6;
	char_2 = char_1 * char_3;
	char_1 = char_1 * char_3;
	char_1 = v_StartKernelTimer(float_1,float_1);

}
long v_USBKeyboardDeviceStartRequest()
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	v_USBKeyboardDeviceCompletionRoutine(float_1);

	double_1 = double_1 + double_1;
	int_3 = int_1 * int_2;
	short_2 = short_1 * short_1;
	int_3 = int_3 * int_1;
	int_3 = int_2 * int_1;
	double_2 = double_1 * double_2;
	int_2 = v_malloc(float_1);

	v_USBRequestSetCompletionRoutine(short_2,short_1);

	int_4 = v_DWHCIDeviceSubmitAsyncRequest(double_3,unsigned_int_1);

	v_USBDeviceGetHost(char_1);

	double_2 = double_2 * double_1;
	v_USBRequest(double_1);

	int_1 = int_4 * int_4;
	return long_1;
}
float v_USBKeyboardDeviceConfigure( double parameter_1,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	v_USBDeviceConfigure(int_1,uni_para);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_3;
	int_3 = int_1 + int_2;
	long_2 = long_1 * long_1;
	float_1 = float_1;
	double_2 = double_1 + double_2;
	return float_1;
}
void v_USBKeyboardDevice( short parameter_1,int uni_para)
{
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	float_1 = v_USBKeyboardDeviceConfigure(double_1,uni_para);

	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 + short_1;
	double_2 = double_1 + double_1;
	double_3 = double_2;
	double_4 = double_2 + double_2;
	double_4 = double_4;
	int_1 = int_1;
	char_1 = char_1;
	float_1 = float_2;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_4 = short_1 + short_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_2 * float_2;
	long_2 = long_1 + long_1;
}
long v_DeviceNameServiceGet()
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short_1 = short_2;
	return long_1;
}
char v_strcpy( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_2;
	return char_1;
}
void v_DeviceNameServiceAddDevice( short parameter_1,short parameter_2,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_5 = 1;
	double_1 = double_1 * double_2;
	int_1 = int_1 + int_1;
	char_2 = char_1 + char_1;
	short_1 = v_strlen();

	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_2 * short_3;
	long_2 = long_1 + long_1;
	char_2 = v_strcpy(char_1,long_1);

	double_4 = double_3 * double_1;
	int_2 = v_malloc(float_1);

	short_3 = short_1 + short_2;
	int_2 = int_2;
	char_1 = char_3 + char_4;
	double_5 = double_1 * double_2;
}
int v_uspi_le2be32( long parameter_1)
{
	int int_1 = 1;
	return int_1;
}
int v_DWHCIDeviceTransfer( double parameter_1,float parameter_2,int parameter_4)
{
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	v__USBRequest(short_1);

	int_1 = int_1;
	short_1 = v_USBRequestGetResultLength(char_1);

	long_1 = long_1;
	float_1 = v_DWHCIDeviceSubmitBlockingRequest(short_1,long_2,-1 );

	char_2 = char_2 * char_1;
	int_3 = int_2 + int_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "$m") < 0)
	{
		double_1 = double_1 + double_1;
	}
	long_4 = long_3 + long_3;
	return int_4;
	v_USBRequest(double_1);

}
int v_USBBulkOnlyMassStorageDeviceCommand( float parameter_1,int parameter_3,short parameter_5,float parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	float_2 = float_1 + float_1;
	double_2 = double_1 * double_1;
	int_1 = int_1 * int_1;
	char_2 = char_1 + char_2;
	long_1 = long_1 * long_1;
	short_1 = short_1 * short_1;
	double_2 = double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_USBDeviceGetHost(char_1);

	long_1 = long_2 + long_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	short_3 = short_2 * short_1;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	float_4 = float_1 * float_3;
	double_1 = v_memcpy(unsigned_int_5,long_3);

	int_1 = v_DWHCIDeviceTransfer(double_1,float_1,int_2);

	double_2 = double_2 * double_2;
	char_1 = char_2 * char_1;
	if(1)
	{
		int_3 = int_2;
	}
	double_4 = double_3 * double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
		if(1)
		{
			short_3 = short_3 * short_1;
		}
	}
	int_1 = int_2;
	if(1)
	{
		int int_4 = 1;
		int_3 = int_4 * int_5;
	}
	if(1)
	{
		short_3 = v_memset(int_2,long_3);

		v_LogWrite(short_2,long_2,double_5,short_3,-1 );

		double_1 = double_1 + double_1;
	}
	if(1)
	{
		double double_6 = 1;
		double_4 = double_6 * double_2;
	}
	if(1)
	{
	}
	if(1)
	{
		double double_7 = 1;
		double_3 = double_7 + double_2;
	}
	return int_5;
}
void v_USBEndpoint2( int parameter_1,unsigned int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	int_1 = int_2;
	int_1 = int_3 + int_3;
	char_2 = char_1 * char_1;
	float_1 = float_2;
	short_1 = short_1 * short_1;
	char_1 = char_2 * char_2;
	long_1 = long_1 + long_1;
	float_3 = float_3 * float_1;
	short_2 = short_1 + short_1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1;
	int_2 = int_3 + int_2;
	double_3 = double_3;
	if(1)
	{
		int int_4 = 1;
		int_3 = int_3 + int_4;
		if(1)
		{
			int_4 = int_3 * int_2;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		}
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
			}
			char_2 = char_1 * char_3;
			char_1 = char_2 * char_4;
			if(1)
			{
				unsigned_int_3 = v_USBDeviceGetSpeed(int_1);

				unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			}
		}
	}
}
float v_USBBulkOnlyMassStorageDeviceConfigure( char parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	short short_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	float_1 = v_USBDeviceGetDescriptor(short_1,unsigned_int_1);

	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		v_USBDeviceConfigure(int_1,-1 );

		int_1 = v_USBBulkOnlyMassStorageDeviceCommand(float_2,int_1,short_1,float_3);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		int_2 = v_malloc(float_3);

		int_2 = int_2 * int_1;
	}
	int_2 = int_1 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = short_2 * short_2;
		char_1 = char_1 + char_1;
		int_2 = v_uspi_le2be32(long_1);

		double_1 = double_2 + double_3;
		double_4 = double_4 * double_4;
		int_6 = int_4 + int_5;
		if(1)
		{
			v_LogWrite(short_1,long_1,double_5,short_1,-1 );

			double_3 = double_1 * double_4;
		}
	}
	v_USBDeviceConfigurationError(double_4,double_4);

	short_2 = short_2 * short_1;
	short_3 = short_3 * short_1;
	v_USBEndpoint2(int_5,unsigned_int_3,int_2);

	long_1 = long_1 * long_1;
	if(1)
	{
		int_3 = int_7 * int_3;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_2 = double_1 * double_6;
		double_3 = double_5 * double_6;
		if(1)
		{
			v_DeviceNameServiceAddDevice(short_4,short_2,short_3);

			long_1 = long_2;
		}
	}
	if(1)
	{
		int_1 = int_4 * int_2;
		if(1)
		{
			double_3 = double_4;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double_3 = double_2 + double_4;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			if(1)
			{
				short_1 = short_3 * short_3;
				if(1)
				{
					unsigned int unsigned_int_6 = 1;
					unsigned_int_5 = unsigned_int_3 * unsigned_int_6;
				}
			}
			if(1)
			{
				long_3 = v_DeviceNameServiceGet();

				double_6 = double_2 + double_6;
			}
		}
		if(1)
		{
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				v_String(long_4);

				short_4 = short_3 + short_4;
				float_4 = float_4;
			}
			unsigned_int_7 = unsigned_int_4 + unsigned_int_7;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			float_3 = float_1 * float_1;
		}
	}
	if(1)
	{
		int int_8 = 1;
		int_8 = int_6 + int_4;
		v_StringGet(double_5);

		v__String(int_6);

		long_2 = long_2 * long_2;
	}
	v_StringFormat(char_1,short_2,int_7);

	float_1 = float_4 * float_2;
	return float_3;
	v_MsDelay(unsigned_int_7);

}
void v_USBBulkOnlyMassStorageDevice( int parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	v_USBDeviceCopy(float_1,float_1);

	int_1 = int_2;
	double_1 = double_1 * double_1;
	int_2 = int_1;
	int_2 = int_1 + int_2;
	int_2 = int_3 + int_2;
	float_1 = v_USBBulkOnlyMassStorageDeviceConfigure(char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_6 = int_4 + int_5;
	int_4 = int_7 * int_3;
}
short v_USBStandardHubEnumeratePorts( long parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	float float_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_6 = 1;
	long long_4 = 1;
	double double_4 = 1;
	short short_6 = 1;
	double double_5 = 1;
	int int_6 = 1;
	char char_7 = 1;
	long long_5 = 1;
	double double_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_5 = 1;
	short short_7 = 1;
	long_1 = long_1 * long_1;
	char_1 = char_1 * char_2;
	double_3 = double_1 + double_2;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short_2 = short_1 * short_2;
		}
	}
	int_3 = v_DWHCIDeviceControlMessage(char_2,float_1,int_1,double_1,float_2,char_2,unsigned_int_4,-1 );

	long_1 = long_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_3 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		float_2 = v_USBDeviceInitialize();

		short_2 = short_3 + short_2;
		long_3 = long_2 * long_2;
		int_1 = v_malloc(float_1);

		int_3 = int_1 * int_1;
		if(1)
		{
			short short_4 = 1;
			short_5 = short_4 + short_3;
			double_3 = v_USBDeviceFactoryGetDevice(int_2,-1 );

			char_2 = char_3 * char_3;
		}
		float_2 = float_2 + float_3;
		if(1)
		{
			char_4 = char_5;
		}
		if(1)
		{
			char_2 = char_5 * char_3;
			long_2 = long_1 + long_2;
		}
		v__USBDevice(int_1);

		unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
		if(1)
		{
		}
		if(1)
		{
			int_5 = int_1 * int_4;
			unsigned_int_2 = unsigned_int_7 + unsigned_int_4;
		}
		if(1)
		{
			char_1 = char_3 + char_6;
			float_2 = float_1 * float_2;
		}
		double_2 = double_2 * double_3;
		if(1)
		{
			char_1 = v_USBDeviceGetEndpoint0(short_1);

			unsigned_int_7 = unsigned_int_7 + unsigned_int_8;
		}
		if(1)
		{
			long_4 = long_2;
		}
		if(1)
		{
			double_2 = double_2 * double_1;
		}
		double_2 = double_4;
		int_1 = int_3 + int_5;
		double_4 = double_2 * double_2;
		v_USBDeviceGetHost(char_1);

		short_6 = short_5 * short_1;
		if(1)
		{
			double_4 = v_USBDeviceGetAddress(int_5);

			v__String(int_5);

			double_4 = double_2;
			char_6 = v_USBStandardHubGetDeviceNames(int_3);

			unsigned_int_8 = unsigned_int_8 + unsigned_int_3;
			char_6 = char_1 * char_2;
			unsigned_int_9 = unsigned_int_2 * unsigned_int_2;
		}
		double_3 = double_5 * double_1;
		v_USBDevice(double_5);

		unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
		unsigned_int_8 = unsigned_int_4 * unsigned_int_9;
		long_2 = long_2 + long_4;
		short_5 = short_2 * short_6;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			int_4 = int_6 + int_6;
		}
		int_3 = int_3;
		if(1)
		{
			float float_4 = 1;
			float_4 = float_1 + float_3;
			double_4 = double_3 + double_1;
			long_4 = long_1 + long_1;
			if(1)
			{
				char_3 = char_2 * char_2;
				char_7 = char_6 + char_4;
			}
			int_3 = int_4 * int_6;
		}
		if(1)
		{
			long_3 = long_4 + long_5;
			int_3 = int_2;
			char_2 = char_4 * char_3;
			double_6 = double_1;
		}
	}
	int_1 = int_3 + int_7;
	int_6 = int_8 + int_9;
	if(1)
	{
		char_7 = char_6 + char_4;
		char_1 = char_5 + char_5;
	}
	if(1)
	{
		unsigned int unsigned_int_10 = 1;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double_8 = double_7 + double_6;
		}
		float_3 = float_1 * float_1;
		unsigned_int_4 = unsigned_int_6 * unsigned_int_10;
	}
	v_MsDelay(unsigned_int_7);

	int_2 = int_9 + int_6;
	float_5 = float_2 + float_1;
	short_6 = short_2 * short_1;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		if(1)
		{
			v_StringGet(double_8);

			long_3 = long_5 * long_3;
		}
		if(1)
		{
			long long_6 = 1;
			long long_7 = 1;
			v_LogWrite(short_7,long_5,double_1,short_6,-1 );

			float_3 = float_3 + float_5;
			v_free();

			double_4 = double_7 * double_3;
			long_7 = long_6 * long_2;
		}
	}
	return short_1;
}
char v_USBConfigurationParserGetDescriptor( double parameter_1,char parameter_2)
{
	char char_1 = 1;
	if(1)
	{
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short_1 = short_1;
		float_2 = float_1 * float_2;
		if(1)
		{
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
	}
	return char_1;
}
float v_USBDeviceGetDescriptor( short parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char_1 = v_USBConfigurationParserGetDescriptor(double_1,char_2);

	int_1 = int_1 * int_1;
	double_1 = double_2 + double_3;
	return float_1;
}
float v_USBDeviceGetDeviceDescriptor( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return float_1;
}
int v_USBStandardHubConfigure( int parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	float_1 = v_USBDeviceGetDeviceDescriptor(char_1);

	float_1 = v_USBDeviceGetDescriptor(short_1,unsigned_int_1);

	v_USBDeviceConfigurationError(double_1,double_2);

	v_USBDeviceConfigure(int_1,-1 );

	v_USBDeviceGetHost(char_1);

	int_1 = v_malloc(float_1);

	int_1 = v_DWHCIDeviceGetDescriptor(float_1,unsigned_int_2,short_2,char_2,long_1,long_2);

	v_free();

	long_1 = long_3 + long_1;
	return int_1;
	v_LogWrite(short_2,long_1,double_3,short_2,-1 );

	int_2 = v_DWHCIDeviceControlMessage(char_2,float_2,int_2,double_2,float_3,char_3,unsigned_int_3,-1 );

	char_3 = v_USBDeviceGetEndpoint0(short_3);

	short_1 = v_USBStandardHubEnumeratePorts(long_3);

}
void v_USBEndpointCopy( short parameter_1,long parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1;
	short_2 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_3;
	double_3 = double_1 + double_2;
	char_2 = char_1 + char_1;
	short_2 = short_1 + short_1;
	int_2 = int_2 * int_3;
	int_5 = int_3 * int_4;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
}
void v_USBStringCopy( double parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_7 = 1;
	v_StringGet(double_1);

	char_1 = char_1 * char_2;
	double_2 = double_2;
	v_String2(long_1,long_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_2 * long_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_4;
		double_2 = v_memcpy(unsigned_int_3,long_2);

		unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	}
	double_3 = double_1 + double_3;
	float_2 = float_1 * float_1;
	long_3 = long_4;
	int_1 = v_malloc(float_2);

	unsigned_int_7 = unsigned_int_2 + unsigned_int_4;
}
void v_USBDeviceCopy( float parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_1 = 1;
	short short_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_2;
	int_1 = int_1 * int_2;
	double_2 = double_1 * double_1;
	double_4 = double_2 + double_3;
	v_USBConfigurationParser(char_3);

	char_1 = char_2 + char_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_3 + int_3;
	int_1 = int_3 + int_4;
	int_3 = v_malloc(float_1);

	int_1 = int_4 * int_5;
	long_1 = long_1 + long_2;
	double_3 = double_1 + double_5;
	int_6 = int_4 * int_1;
	double_1 = double_4 * double_2;
	double_2 = double_5 * double_3;
	int_1 = int_7 + int_8;
	if(1)
	{
		short short_2 = 1;
		long_5 = long_3 + long_4;
		short_1 = short_1 + short_2;
		short_2 = short_3 * short_3;
	}
	if(1)
	{
		short short_5 = 1;
		double_6 = double_7;
		unsigned_int_3 = unsigned_int_2;
		double_6 = double_7 * double_2;
		v_USBEndpointCopy(short_4,long_2,long_4);

		double_6 = v_memcpy(unsigned_int_3,long_3);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		short_1 = short_3 + short_5;
		if(1)
		{
			long long_6 = 1;
			double double_8 = 1;
			double double_9 = 1;
			long_3 = long_6 * long_6;
			v_USBStringCopy(double_7,unsigned_int_4);

			long_5 = long_5 + long_1;
			double_9 = double_4 + double_8;
		}
	}
}
void v_USBStandardHub( short parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	v_USBDeviceCopy(float_1,float_1);

	long_1 = long_1 + long_1;
	float_2 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_1 * short_2;
	int_1 = v_USBStandardHubConfigure(int_2);

	float_3 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 * int_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
}
int v_GetDevice( unsigned int parameter_1,unsigned int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	long long_3 = 1;
	char char_2 = 1;
	short short_5 = 1;
	int int_4 = 1;
	double double_1 = 1;
	float float_3 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_2;
	char_1 = char_1 * char_1;
	char controller4vul_930[2];
	fgets(controller4vul_930 ,2 ,stdin);
	if( strcmp( controller4vul_930, "c") > 0)
	{
		v_USBKeyboardDevice(short_1,uni_para);

		short_2 = short_1;
		int_3 = int_2 * int_1;
		float_1 = float_1 + float_2;
		int_2 = int_3 + int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int_2 = int_2 + int_3;
		int_1 = int_2 * int_3;
		long_1 = long_1 + long_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_4 = short_1 + short_3;
		short_4 = short_2 + short_1;
		long_3 = long_1 * long_1;
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		short_1 = short_2 + short_5;
		float_1 = float_1 + float_2;
		long_2 = long_2 * long_3;
		short_5 = short_1 + short_4;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		int_2 = int_4 * int_4;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		int_4 = int_4 + int_4;
		double_1 = double_1;
	}
	if(1)
	{
		short_5 = short_4;
		int_1 = int_1 * int_4;
		int_3 = int_1 + int_3;
		float_3 = float_3 + float_2;
	}
	if(1)
	{
		int int_5 = 1;
		char_1 = char_2 * char_1;
		double_1 = double_1 + double_1;
		int_1 = int_4 + int_5;
		double_2 = double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
		float_3 = float_1 + float_1;
		int_2 = int_4 + int_2;
		double_2 = double_2 + double_1;
	}
	if(1)
	{
		int_2 = int_4 * int_1;
	}
	double_2 = double_1;
	short_2 = short_5;
	return int_1;
}
double v_USBDeviceFactoryGetDevice( int parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double_1 = double_1;
	double_1 = double_2;
	char controller4vul_929[2];
	fgets(controller4vul_929 ,2 ,stdin);
	if( strcmp( controller4vul_929, "J") < 0)
	{
		int_1 = v_GetDevice(unsigned_int_1,unsigned_int_2,uni_para);

	}
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	return double_3;
}
void v_StringAppend( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	double_1 = double_1 * double_2;
	int_1 = int_1 * int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	long_2 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_2 = int_3;
		short_1 = short_1 + short_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	long_1 = long_3 + long_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
}
char v_StringGetLength( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	return char_1;
}
int v_StringCompare( double parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
long v_StringSet( double parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	int_1 = int_1;
	int_3 = int_2 + int_1;
	short_1 = short_1;
	return long_1;
}
double v_USBDeviceGetName( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	double_1 = double_2;
	int_2 = int_1 + int_2;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = v_malloc(float_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	v_String(long_1);

	unsigned_int_2 = unsigned_int_1;
	float_3 = float_2 * float_3;
	short_1 = short_1 + short_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	long_1 = v_StringSet(double_2,unsigned_int_3);

	long_3 = long_2 + long_1;
	char_2 = char_1 + char_1;
	short_3 = short_2 + short_2;
	if(1)
	{
		char char_3 = 1;
		char_2 = char_1 * char_3;
	}
	unsigned_int_2 = unsigned_int_3;
	int_1 = int_2 + int_3;
	char_1 = char_4 * char_1;
	int_3 = int_2 + int_4;
	int_1 = int_1 * int_2;
	return double_2;
	v_StringFormat(char_1,short_2,int_1);

}
char v_USBStandardHubGetDeviceNames( int parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	v__String(int_1);

	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = v_StringGetLength(short_1);

	long_1 = v_StringSet(double_1,unsigned_int_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long long_3 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_5 = 1;
		v_free();

		long_3 = long_2 * long_1;
		int_1 = v_malloc(float_1);

		double_2 = double_1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "`") < 0)
		{
			long long_4 = 1;
			if(1)
			{
				double_3 = double_2 * double_3;
			}
			v_StringGet(double_3);

			long_4 = long_2 + long_1;
		}
		int_2 = v_StringCompare(double_2,short_1);

		char_1 = char_2;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "A&") < 0)
	{
		v_String(long_1);

		int_1 = int_2 + int_2;
	}
	return char_3;
	double_1 = v_USBDeviceGetName(char_3,double_2);

	v_StringAppend(double_1,int_3);

}
void v__USBString( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_2 = double_1 * double_2;
	double_1 = double_3 * double_4;
	v_free();

	float_2 = float_1 + float_2;
	int_1 = int_1 * int_1;
	double_3 = double_1 + double_4;
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		v__String(int_2);

		float_3 = float_3;
		float_5 = float_4 * float_1;
	}
	char_2 = char_1 * char_2;
}
void v__USBEndpoint( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void v__USBConfigurationParser( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_2 = long_1 + long_1;
	int_2 = int_1 + int_2;
}
void v__USBDevice( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	int int_2 = 1;
	char_2 = char_1 * char_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_3;
		v_free();

		double_2 = double_1 * double_2;
	}
	if(1)
	{
		v__USBEndpoint(short_1);

		short_1 = short_1 + short_1;
		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char_2 = char_1 + char_3;
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		int int_1 = 1;
		float float_1 = 1;
		int_1 = int_1;
		v__USBConfigurationParser(unsigned_int_4);

		float_1 = float_2;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	double_1 = double_1 * double_1;
	v__USBString(float_2);

	int_2 = int_2 + int_2;
	char_1 = char_1 * char_1;
}
void v_debug_hexdump( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	char char_6 = 1;
	int int_6 = 1;
	char_3 = char_1 + char_2;
	short_2 = short_1 + short_1;
	v_LoggerWrite(short_1,short_3,double_1,short_2,long_1);

	int_2 = int_1 * int_2;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	double_1 = v_LoggerGet();

	short_5 = short_3 * short_4;
	double_2 = double_1 + double_1;
	int_1 = int_3 + int_4;
	int_2 = int_4;
	float_1 = float_1 + float_2;
	double_1 = double_3;
	double_4 = double_2;
	float_3 = float_1 + float_1;
	int_3 = int_3 * int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_6 = 1;
		double_4 = double_3 * double_4;
		char_1 = char_3 + char_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long_2 = long_2 + long_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			}
			if(1)
			{
				short_2 = short_5;
			}
			if(1)
			{
				short_2 = short_3 + short_4;
			}
			short_2 = short_6 * short_5;
			double_4 = double_2 + double_3;
			if(1)
			{
				if(1)
				{
					float_2 = float_1 * float_2;
				}
				if(1)
				{
					int_3 = int_4 * int_3;
				}
			}
			if(1)
			{
				if(1)
				{
					double_1 = double_1 + double_3;
				}
				if(1)
				{
					int_1 = int_5 + int_1;
				}
			}
		}
		char_2 = char_5 * char_3;
		short_6 = short_5;
		float_2 = float_1;
		double_4 = double_2 * double_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		int_4 = int_3 * int_2;
		int_2 = int_3 + int_4;
		long_2 = long_3;
		float_2 = float_3;
		long_1 = long_1 + long_2;
		float_4 = float_4;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	}
	if(1)
	{
		int_4 = int_4;
	}
	if(1)
	{
		short short_7 = 1;
		short_7 = short_5 * short_2;
	}
	if(1)
	{
		float_2 = float_2 * float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_1 = unsigned_int_5;
	}
	if(1)
	{
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				double_3 = double_4 + double_4;
			}
			int_2 = int_1 + int_1;
		}
		int_5 = int_3 + int_5;
	}
	char_2 = char_2 + char_3;
	double_1 = double_5 * double_4;
	double_1 = double_4;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		float float_5 = 1;
		if(1)
		{
			int_4 = int_5;
		}
		float_5 = float_4 * float_4;
	}
	long_2 = long_1 * long_3;
	char_6 = char_6;
	if(1)
	{
		if(1)
		{
			int_3 = int_6 + int_2;
		}
	}
	if(1)
	{
		char char_7 = 1;
		char char_8 = 1;
		int_6 = int_4;
		char_4 = char_5 + char_5;
		int_6 = int_1 + int_1;
		if(1)
		{
			if(1)
			{
				char_7 = char_4;
			}
		}
		char_7 = char_8 * char_3;
	}
}
void v_DebugHexdump( double parameter_1,float parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	v_debug_hexdump(int_1,int_2,unsigned_int_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
}
void v_USBConfigurationParserError( float parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = long_2;
	v_LogWrite(short_1,long_1,double_1,short_1,-1 );

	long_4 = long_2 + long_3;
	v_DebugHexdump(double_1,float_1,double_1);

	double_2 = double_1;
	double_3 = double_2 + double_1;
}
void v_USBDeviceConfigurationError( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	double_2 = double_1 + double_2;
	v_USBConfigurationParserError(float_1,float_2);

}
double v_USBConfigurationParserIsValid( short parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	short_1 = short_1 + short_1;
	return double_1;
}
void v_USBConfigurationParser( char parameter_1)
{
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_2;
	}
}
void v_String2( long parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_1 = char_1 * char_1;
	char_3 = char_1 * char_2;
	float_1 = float_1;
	double_2 = double_1 + double_2;
}
unsigned int v_USBStringGetFromDescriptor( double parameter_1,short parameter_2,float parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	double double_4 = 1;
	short short_1 = 1;
	char char_5 = 1;
	long long_2 = 1;
	float float_4 = 1;
	long long_3 = 1;
	int int_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long_1 = long_1 + long_1;
	v__String(int_1);

	int_1 = int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	int_3 = int_1 + int_3;
	double_2 = double_1 * double_2;
	double_3 = double_2 + double_1;
	if(1)
	{
	}
	int_2 = v_malloc(float_1);

	float_1 = float_2;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		int_1 = int_2 * int_4;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char_3 = char_1 * char_2;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	double_3 = double_3 + double_3;
	float_2 = float_2;
	int_2 = v_DWHCIDeviceControlMessage(char_4,float_1,int_4,double_4,float_1,char_2,unsigned_int_4,-1 );

	char_4 = v_USBDeviceGetEndpoint0(short_1);

	double_4 = double_3;
	char_2 = char_5 * char_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		unsigned int unsigned_int_6 = 1;
		float_3 = float_1 * float_2;
		if(1)
		{
			int int_5 = 1;
			int_5 = int_1 * int_3;
		}
		v_String2(long_2,long_1);

		unsigned_int_6 = unsigned_int_1 + unsigned_int_2;
	}
	v_USBDeviceGetHost(char_3);

	float_4 = float_4 + float_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
	long_1 = long_2 * long_3;
	double_3 = double_3 + double_2;
	double_3 = double_1 * double_2;
	int_6 = int_4 + int_6;
	v_free();

	short_1 = short_2 + short_3;
	return unsigned_int_5;
}
char v_USBDeviceGetEndpoint0( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return char_1;
}
void v_USBDeviceGetHost( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
double v_USBStringGetLanguageID( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	short short_3 = 1;
	float float_3 = 1;
	double_3 = double_1 * double_2;
	char_2 = char_1 * char_1;
	double_3 = double_1 * double_2;
	short_1 = short_1 + short_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	char_3 = v_USBDeviceGetEndpoint0(short_2);

	int_1 = int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		int_2 = int_1;
		int_1 = int_1 + int_2;
		long_1 = long_1 + long_1;
		if(1)
		{
			float float_1 = 1;
			float_1 = float_2;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
	}
	long_3 = long_1 * long_2;
	v_USBDeviceGetHost(char_2);

	int_3 = int_2;
	double_1 = double_3 * double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_5 = double_4 + double_2;
		}
	}
	int_2 = int_2 + int_2;
	int_4 = v_DWHCIDeviceGetDescriptor(float_2,unsigned_int_1,short_3,char_3,long_2,long_2);

	int_4 = int_4 + int_3;
	return double_5;
	int_1 = v_malloc(float_3);

	v_free();

}
void v_USBDeviceSetAddress( long parameter_1,double parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char_1 = char_1 + char_1;
	double_1 = double_1 + double_1;
	short_1 = short_1 * short_1;
}
long v_DWHCIDeviceSetAddress( char parameter_1,short parameter_2,long parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = v_DWHCIDeviceControlMessage(char_1,float_1,int_1,double_1,float_2,char_1,unsigned_int_1,-1 );

	int_1 = int_1 * int_1;
	if(1)
	{
	}
	v_MsDelay(unsigned_int_2);

	long_1 = long_1 + long_2;
	return long_3;
}
void v_USBEndpointSetMaxPacketSize( double parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_2 = int_1 + int_1;
	int_1 = int_3 * int_4;
}
int v_DWHCIDeviceGetDescriptor( float parameter_1,unsigned int parameter_2,short parameter_3,char parameter_4,long parameter_6,long parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	return int_1;
	int_1 = v_DWHCIDeviceControlMessage(char_1,float_1,int_1,double_1,float_2,char_1,unsigned_int_1,-1 );

}
float v_USBDeviceInitialize()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	char char_2 = 1;
	float float_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	double double_5 = 1;
	long long_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_5 = 1;
	char char_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_4 = 1;
	double double_7 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_8 = 1;
	short short_5 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short_3 = short_1 * short_2;
	long_1 = v_DWHCIDeviceSetAddress(char_1,short_4,long_1);

	double_1 = double_2;
	short_2 = short_2 + short_3;
	double_1 = double_2 + double_3;
	double_1 = double_1 * double_2;
	double_2 = double_1;
	char_1 = char_1;
	if(1)
	{
		v_LogWrite(short_1,long_1,double_1,short_4,-1 );

		double_3 = double_3 + double_2;
		int_1 = int_1 + int_1;
		int_2 = v_DWHCIDeviceGetDescriptor(float_1,unsigned_int_1,short_2,char_1,long_1,long_2);

		double_3 = v_USBConfigurationParserIsValid(short_1);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_2 + float_3;
		char_2 = char_2 + char_2;
		v_free();

		float_2 = float_4 * float_4;
	}
	double_4 = double_1 * double_4;
	if(1)
	{
		unsigned_int_4 = v_USBStringGetFromDescriptor(double_3,short_3,float_3);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
		int_2 = int_3 * int_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	double_5 = double_1 * double_2;
	if(1)
	{
		v_USBDeviceSetAddress(long_3,double_6);

		unsigned_int_6 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		double_5 = v_USBStringGetLanguageID(long_1);

		float_1 = float_4 + float_5;
	}
	double_6 = double_2 + double_6;
	if(1)
	{
		float float_6 = 1;
		float_3 = float_4 + float_6;
		if(1)
		{
			double_6 = double_6 + double_1;
		}
		if(1)
		{
			int_3 = int_1;
		}
	}
	v_USBConfigurationParser(char_3);

	long_1 = long_2 * long_4;
	unsigned_int_3 = unsigned_int_7;
	double_1 = double_5 * double_6;
	if(1)
	{
		unsigned_int_5 = unsigned_int_6 + unsigned_int_4;
		double_1 = double_1 + double_4;
		int_1 = int_3;
	}
	if(1)
	{
		int_4 = v_malloc(float_4);

		unsigned_int_7 = unsigned_int_6 * unsigned_int_1;
		v_USBDeviceConfigurationError(double_6,double_3);

		double_3 = double_1;
		double_7 = double_4;
	}
	int_1 = int_4 * int_5;
	char_3 = char_2 + char_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_7;
	int_6 = int_5 + int_5;
	if(1)
	{
		unsigned_int_3 = unsigned_int_6;
		double_4 = double_6 * double_3;
		double_7 = double_5 * double_4;
	}
	v_USBEndpointSetMaxPacketSize(double_8,short_5);

	long_1 = long_2 + long_1;
	short_2 = short_2;
	int_8 = int_3 + int_7;
	int_1 = int_2;
	if(1)
	{
		unsigned_int_6 = unsigned_int_2 * unsigned_int_6;
	}
	return float_5;
}
void v_USBString( int parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_4 = 1;
	v_String(long_1);

	short_2 = short_1 + short_1;
	short_1 = short_3 + short_1;
	double_1 = double_1 + double_1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_malloc(float_1);

	short_2 = short_2 * short_4;
}
void v_USBEndpoint( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_2;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_3 = char_2;
	double_1 = double_1;
	int_3 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	float_1 = float_1 * float_1;
	long_1 = long_1 + long_1;
}
void v__USBRequest( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_2 = long_1 * long_1;
	long_2 = long_1 * long_1;
	float_2 = float_1 * float_1;
	short_1 = short_1 * short_1;
	int_2 = int_1 * int_1;
}
short v_USBRequestGetResultLength( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_1;
	double_4 = double_3 * double_2;
	return short_1;
}
int v_USBEndpointIsDirectionIn( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long_1 = long_1 * long_2;
	return int_1;
}
int v_USBRequestGetStatus( short parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_1;
	return int_1;
}
void v_DWHCIDeviceEnableChannelInterrupt( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_4 = 1;
	int_3 = int_1 + int_2;
	v_uspi_LeaveCritical();

	int_1 = int_3 * int_3;
	int_1 = int_1;
	v_uspi_EnterCritical();

	unsigned_int_1 = v_DWHCIRegisterRead(unsigned_int_2);

	v_DWHCIRegisterOr(double_1,unsigned_int_3);

	short_2 = short_1 * short_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	v__DWHCIRegister(float_1);

	short_3 = short_2 + short_2;
	v_DWHCIRegisterWrite(unsigned_int_4);

	unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
	v_DWHCIRegister(long_1);

	char_1 = char_1 + char_1;
	short_4 = short_3 * short_1;
}
char v_DWHCIFrameSchedulerNoSplitIsOddFrame( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_2;
	char_2 = char_1 + char_1;
	return char_2;
}
void v_DWHCIFrameSchedulerNoSplitWaitForFrame( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = v_DWHCIRegisterRead(unsigned_int_2);

	unsigned_int_2 = unsigned_int_3;
	v_DWHCIRegister(long_1);

	char_1 = char_1 * char_2;
	long_1 = long_1 * long_1;
	if(1)
	{
		char_2 = char_1 + char_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "-") < 0)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	}
	v__DWHCIRegister(float_1);

}
void v_DWHCIFrameSchedulerNoSplitTransactionComplete( double parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_1 * float_2;
}
long v_DWHCIFrameSchedulerNoSplitCompleteSplit( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return long_1;
}
void v_DWHCIFrameSchedulerNoSplitStartSplit( unsigned int parameter_1)
{
	float float_1 = 1;
	float_1 = float_1 + float_1;
}
void v__DWHCIFrameSchedulerNoSplit( int parameter_1)
{
}
void v_DWHCIFrameSchedulerNoSplit( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	v_DWHCIFrameSchedulerNoSplitTransactionComplete(double_1,int_1);

	float_2 = float_1 + float_2;
	double_2 = double_2 * double_2;
	double_1 = double_3;
	int_2 = int_2 + int_3;
	char_1 = v_DWHCIFrameSchedulerNoSplitIsOddFrame(unsigned_int_1);

	char_1 = char_2 + char_2;
	long_1 = long_1 * long_1;
	v__DWHCIFrameSchedulerNoSplit(int_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1;
	v_DWHCIFrameSchedulerNoSplitWaitForFrame(unsigned_int_2);

	float_2 = float_1 + float_2;
	v_DWHCIFrameSchedulerNoSplitStartSplit(unsigned_int_3);

	double_2 = double_3 * double_2;
	long_2 = v_DWHCIFrameSchedulerNoSplitCompleteSplit(long_1);

}
short v_DWHCIFrameSchedulerNonPeriodicIsOddFrame( int parameter_1)
{
	short short_1 = 1;
	return short_1;
}
void v_DWHCIFrameSchedulerNonPeriodicWaitForFrame( unsigned int parameter_1)
{
}
void v_DWHCIFrameSchedulerNonPeriodicTransactionComplete( char parameter_1,int parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	int int_2 = 1;
	float float_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_1 * float_1;
	float_1 = float_1 + float_2;
	double_1 = double_1 * double_2;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_942[3];
	fgets(controller4vul_942 ,3 ,stdin);
	if( strcmp( controller4vul_942, "Nm") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		v_LogWrite(short_1,long_1,double_1,short_1,uni_para);

		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			short_2 = short_2 + short_3;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_3 = 1;
			double_3 = double_3 + double_3;
			float_2 = float_3;
		}
		char controller_6[2];
		fgets(controller_6 ,2 ,stdin);
		if( strcmp( controller_6, "*") == 0)
		{
			float_3 = float_3 * float_2;
		}
	}
	if(1)
	{
		int_1 = int_2;
		short_3 = short_1 + short_2;
	}
	float_2 = float_3 + float_4;
	int_1 = int_2 + int_3;
	unsigned_int_3 = unsigned_int_1;
}
int v_DWHCIFrameSchedulerNonPeriodicCompleteSplit( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	v_usDelay(double_1);

	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_2 * double_3;
	float_1 = float_1 * float_1;
	short_1 = short_1 + short_2;
	char_2 = char_1 * char_2;
	int_1 = int_1 * int_2;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_2 + double_1;
	short_2 = short_1 + short_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_3 + double_3;
	return int_2;
}
void v_DWHCIFrameSchedulerNonPeriodicStartSplit( short parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = long_1;
	char_2 = char_1 * char_2;
	double_3 = double_1 + double_2;
}
void v__DWHCIFrameSchedulerNonPeriodic( unsigned int parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1;
}
void v_DWHCIFrameSchedulerNonPeriodic( float parameter_1,int uni_para)
{
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	v_DWHCIFrameSchedulerNonPeriodicTransactionComplete(char_1,int_1,uni_para);

	float_2 = float_1 * float_2;
	float_3 = float_2 + float_1;
	char_3 = char_2 * char_1;
	double_2 = double_1 + double_2;
	double_1 = double_2 + double_2;
	float_3 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_4 = float_1 + float_4;
	char_5 = char_4 + char_5;
}
char v_DWHCIFrameSchedulerPeriodicIsOddFrame( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int_1 = int_2;
	double_1 = double_1 * double_2;
	int_2 = int_1 * int_2;
	return char_1;
}
void v_DWHCIFrameSchedulerPeriodicWaitForFrame( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = v_DWHCIRegisterRead(unsigned_int_2);

	double_3 = double_1 + double_2;
	v_DWHCIRegister(long_1);

	v__DWHCIRegister(float_1);

	int_1 = int_1 * int_1;
	double_1 = double_2 + double_3;
}
void v_DWHCIFrameSchedulerPeriodicTransactionComplete( unsigned int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_2 = 1;
	short_1 = short_1 * short_1;
	float_3 = float_1 + float_2;
	char_1 = char_1 + char_1;
	long_1 = long_2;
	float_4 = float_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
			int_1 = int_2;
		}
		if(1)
		{
			int_3 = int_1 + int_3;
		}
	}
	if(1)
	{
		v_LogWrite(short_1,long_2,double_1,short_2,-1 );

		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		int_3 = int_2 + int_2;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_3 * long_2;
		int_4 = int_3 * int_2;
	}
	int_4 = int_3;
	double_2 = double_2;
	v_usDelay(double_1);

	float_3 = float_2 + float_4;
}
char v_DWHCIFrameSchedulerPeriodicCompleteSplit()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	char_2 = char_1 + char_1;
	long_1 = long_1 + long_2;
	float_2 = float_1 * float_2;
	float_1 = float_1 * float_3;
	double_5 = double_3 * double_4;
	float_1 = float_1 * float_1;
	float_4 = float_1 + float_3;
	short_1 = short_1;
	short_2 = short_1 * short_1;
	int_3 = int_2 * int_1;
	int_5 = int_4 * int_2;
	return char_1;
}
void v_DWHCIFrameSchedulerPeriodicStartSplit( float parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_2;
}
void v__DWHCIFrameSchedulerPeriodic( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	char_1 = char_1 * char_2;
}
void v_DWHCIFrameSchedulerPeriodic( int parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = v_DWHCIFrameSchedulerPeriodicCompleteSplit();

	short_1 = short_1 + short_2;
	v__DWHCIFrameSchedulerPeriodic(float_1);

	double_1 = double_1 + double_1;
	v_DWHCIFrameSchedulerPeriodicTransactionComplete(unsigned_int_1,unsigned_int_2);

	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	int_2 = int_1 + int_1;
	v_DWHCIFrameSchedulerPeriodicWaitForFrame(long_1);

	short_3 = short_3;
	int_2 = int_3 + int_3;
	v_DWHCIFrameSchedulerPeriodicStartSplit(float_1);

	double_2 = double_1;
	char_1 = v_DWHCIFrameSchedulerPeriodicIsOddFrame(double_3);

	unsigned_int_4 = unsigned_int_3;
	long_1 = long_1 + long_1;
}
int v_USBRequestGetBuffer()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_2 = long_1 * long_2;
	int_2 = int_1 * int_1;
	return int_2;
}
unsigned int v_USBEndpointGetMaxPacketSize( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 + double_1;
	return unsigned_int_1;
}
unsigned int v_USBDeviceGetSpeed( int parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1;
	return unsigned_int_1;
}
short v_USBEndpointGetDevice( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_2;
	char_3 = char_1 * char_2;
	return short_1;
}
void v_DWHCITransferStageData( double parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_6 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_7 = 1;
	long long_5 = 1;
	double double_6 = 1;
	int int_8 = 1;
	float float_4 = 1;
	int int_9 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_1;
	float_3 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	int_2 = int_1 + int_2;
	char_2 = char_1 * char_2;
	long_1 = long_2;
	int_1 = int_3;
	int_4 = int_2;
	unsigned_int_2 = unsigned_int_1;
	short_2 = short_1 * short_1;
	int_2 = int_3 + int_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	int_3 = int_5;
	float_3 = float_3 * float_1;
	short_1 = short_3;
	int_1 = int_5 + int_4;
	short_4 = short_2 * short_2;
	int_4 = int_6 + int_3;
	double_2 = double_2 * double_1;
	char controller4vul_939[3];
	fgets(controller4vul_939 ,3 ,stdin);
	if( strcmp( controller4vul_939, "{F") < 0)
	{
		if(1)
		{
			float_1 = float_1 * float_2;
			char_2 = char_1 + char_1;
		}
		if(1)
		{
			long long_3 = 1;
			double_1 = double_2;
			long_2 = long_3;
		}
		double_4 = double_3 + double_1;
		char controller4vul_940[2];
		fgets(controller4vul_940 ,2 ,stdin);
		if( strcmp( controller4vul_940, "@") < 0)
		{
			char controller4vul_941[2];
			fgets(controller4vul_941 ,2 ,stdin);
			if( strcmp( controller4vul_941, "/") < 0)
			{
				v_DWHCIFrameSchedulerNonPeriodic(float_3,uni_para);

				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
			if(1)
			{
				double double_5 = 1;
				double_1 = double_4 * double_5;
			}
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		}
		if(1)
		{
			int_6 = int_7 + int_7;
			int_3 = int_2;
		}
	}
	if(1)
	{
		long long_4 = 1;
		double double_7 = 1;
		float float_5 = 1;
		long_5 = long_1 + long_4;
		double_2 = double_6 * double_2;
		int_1 = int_8 + int_2;
		int_2 = int_6 * int_2;
		double_1 = double_7 + double_4;
		int_2 = int_3 + int_6;
		int_4 = int_7 * int_8;
		float_5 = float_1 + float_4;
	}
	int_8 = int_9 + int_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		float float_6 = 1;
		if(1)
		{
			double_6 = double_4 * double_3;
			int_1 = int_5 * int_4;
		}
		if(1)
		{
			int_2 = int_5 * int_4;
			double_2 = double_3 * double_1;
		}
		float_6 = float_3 + float_4;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
			long_2 = long_5 + long_2;
			int_7 = int_3 + int_4;
		}
	}
}
char v_DWHCIDeviceAllocateChannel( long parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long_1 = long_1;
	char_1 = char_1;
	float_1 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "Tn") > 0)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			v_uspi_LeaveCritical();

			unsigned_int_1 = unsigned_int_2;
		}
		double_1 = double_1 * double_1;
	}
	long_1 = long_1 + long_1;
	return char_1;
	v_uspi_EnterCritical();

}
int v_DWHCIDeviceTransferStageAsync( double parameter_1,int parameter_2,long parameter_3,short parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_4 = 1;
	float float_6 = 1;
	int_1 = int_1 * int_2;
	double_1 = double_1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	long_1 = long_2;
	double_1 = double_1 * double_2;
	double_2 = double_1 + double_1;
	short_1 = short_1 + short_1;
	double_1 = double_1;
	int_2 = int_3;
	if(1)
	{
		int_2 = int_2 + int_1;
	}
	char controller4vul_937[2];
	fgets(controller4vul_937 ,2 ,stdin);
	if( strcmp( controller4vul_937, ";") < 0)
	{
		int int_4 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		char controller4vul_938[3];
		fgets(controller4vul_938 ,3 ,stdin);
		if( strcmp( controller4vul_938, "lq") < 0)
		{
			float float_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			v_DWHCITransferStageData(double_1,uni_para);

			float_2 = float_1 * float_1;
			int_4 = int_3 * int_1;
			float_4 = float_3 + float_2;
			char_1 = char_1 * char_2;
			char_2 = char_3 * char_1;
		}
		unsigned_int_1 = unsigned_int_1;
		float_6 = float_3 + float_5;
		int_3 = int_4 * int_1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		short_2 = short_2;
	}
	float_6 = float_4 * float_2;
	return int_1;
}
void v_DWHCIDeviceCompletionRoutine( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_2;
}
void v_USBRequestSetCompletionRoutine( short parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_2 = int_1 + int_1;
	int_3 = int_2 * int_2;
	short_2 = short_1 + short_2;
	int_1 = int_3 * int_4;
	double_3 = double_1 * double_2;
}
char v_DWHCIDeviceTransferStage( float parameter_1,int parameter_2,double parameter_3,double parameter_4,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	int_1 = v_DWHCIDeviceTransferStageAsync(double_1,int_2,long_1,short_1,uni_para);

	long_2 = long_3;
	double_2 = double_1 * double_2;
	short_1 = short_1 * short_2;
	int_3 = int_1 + int_2;
	double_2 = double_2 + double_1;
	short_3 = short_1 + short_3;
	int_5 = int_4 + int_3;
	return char_1;
}
int v_USBRequestGetBufLen( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
float v_USBRequestGetSetupData( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = v_USBEndpointGetType(char_1);

	long_1 = long_2;
	double_1 = double_1 + double_1;
	return float_1;
}
float v_DWHCIDeviceSubmitBlockingRequest( short parameter_1,long parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_5 = 1;
	char char_1 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float_3 = float_1 + float_2;
	int_2 = int_1 + int_1;
	int_1 = int_3 + int_4;
	double_1 = double_1 * double_2;
	char controller4vul_934[3];
	fgets(controller4vul_934 ,3 ,stdin);
	if( strcmp( controller4vul_934, "&I") > 0)
	{
		float float_4 = 1;
		float_1 = float_4 + float_5;
		double_1 = double_1;
		char controller4vul_935[2];
		fgets(controller4vul_935 ,2 ,stdin);
		if( strcmp( controller4vul_935, "_") < 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_1;
			char controller4vul_936[2];
			fgets(controller4vul_936 ,2 ,stdin);
			if( strcmp( controller4vul_936, "3") > 0)
			{
				char_1 = v_DWHCIDeviceTransferStage(float_3,int_5,double_1,double_2,uni_para);

			}
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
				}
			}
			if(1)
			{
				if(1)
				{
				}
			}
		}
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
		double_1 = double_2;
		if(1)
		{
		}
	}
	short_2 = short_1 * short_1;
	return float_5;
}
void v_USBRequest( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1 + char_2;
	long_1 = long_1 * long_2;
	short_1 = short_1 * short_1;
	float_1 = float_1 + float_2;
	short_2 = short_1 * short_2;
	double_1 = double_1;
	int_3 = int_1 + int_2;
	int_4 = int_4 + int_4;
	float_3 = float_1 + float_1;
	int_5 = int_3 * int_4;
	int_5 = int_6 * int_6;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
}
int v_DWHCIDeviceControlMessage( char parameter_1,float parameter_2,int parameter_3,double parameter_4,float parameter_5,char parameter_6,unsigned int parameter_8,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	double_2 = double_3 + double_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	float_2 = float_1 * float_1;
	float_2 = float_2 + float_2;
	long_1 = long_2;
	int_1 = int_1;
	float_3 = float_1 * float_1;
	float_2 = float_1;
	char controller4vul_933[2];
	fgets(controller4vul_933 ,2 ,stdin);
	if( strcmp( controller4vul_933, "2") < 0)
	{
		char char_1 = 1;
		float_4 = v_DWHCIDeviceSubmitBlockingRequest(short_1,long_3,uni_para);

		char_1 = char_1;
	}
	int_1 = int_1 * int_2;
	int_3 = int_1;
	return int_1;
}
char v_DWHCIDeviceSetConfiguration( int parameter_1,float parameter_2,short parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double_1 = double_2;
	char controller4vul_932[2];
	fgets(controller4vul_932 ,2 ,stdin);
	if( strcmp( controller4vul_932, "*") > 0)
	{
		int_1 = v_DWHCIDeviceControlMessage(char_1,float_1,int_2,double_2,float_2,char_1,unsigned_int_1,uni_para);

	}
	short_1 = short_1 * short_1;
	return char_1;
}
void v_USBDeviceConfigure( int parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	float_1 = float_1 + float_2;
	long_3 = long_1 * long_2;
	int_2 = int_1 * int_2;
	char controller4vul_931[2];
	fgets(controller4vul_931 ,2 ,stdin);
	if( strcmp( controller4vul_931, "A") > 0)
	{
		char_1 = v_DWHCIDeviceSetConfiguration(int_1,float_3,short_1,uni_para);

	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
}
void v_USBDevice( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_3 = 1;
	int_2 = int_1 + int_2;
	double_1 = double_1 + double_1;
	double_1 = double_2;
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1;
	short_1 = short_1 + short_2;
	v_USBDeviceConfigure(int_1,-1 );

	double_3 = double_3 + double_3;
	float_1 = float_1;
	v_USBString(int_1);

	short_2 = short_1 + short_2;
	int_2 = int_2 * int_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	int_1 = int_3 + int_2;
	float_1 = float_2;
	short_1 = short_3 * short_2;
	v_USBEndpoint(short_1);

	unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	unsigned_int_7 = unsigned_int_5 + unsigned_int_1;
	int_1 = v_malloc(float_1);

	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	float_3 = float_2 * float_1;
}
int v_DWHCIDeviceGetPortSpeed( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float_2 = float_1 + float_2;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	unsigned_int_3 = v_DWHCIRegisterRead(unsigned_int_2);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	long_2 = long_1 + long_2;
	char_2 = char_1 * char_2;
	v__DWHCIRegister(float_2);

	float_3 = float_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	float_1 = float_1 + float_3;
	double_2 = double_2 * double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
	return int_1;
	v_DWHCIRegister(long_2);

}
unsigned int v_DWHCIRootPortInitialize( float parameter_1,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1;
	if(1)
	{
		int_1 = int_2 + int_2;
	}
	double_1 = double_1 * double_2;
	char_1 = char_1;
	float_1 = float_1 * float_1;
	double_2 = double_1 + double_3;
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 * short_1;
		char_2 = char_2;
		unsigned_int_1 = unsigned_int_1;
	}
	int_3 = int_2 + int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	long_2 = long_2 + long_2;
	int_4 = int_1 + int_2;
	char controller4vul_927[2];
	fgets(controller4vul_927 ,2 ,stdin);
	if( strcmp( controller4vul_927, "R") < 0)
	{
		float float_3 = 1;
		int_5 = int_6;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		int_5 = int_4 * int_2;
		char controller4vul_928[2];
		fgets(controller4vul_928 ,2 ,stdin);
		if( strcmp( controller4vul_928, "y") < 0)
		{
			short short_3 = 1;
			float float_2 = 1;
			double_3 = v_USBDeviceFactoryGetDevice(int_5,uni_para);

			double_4 = double_2 * double_4;
			short_3 = short_3 * short_2;
			float_1 = float_2;
			double_5 = double_1 * double_1;
		}
		float_3 = float_1 + float_1;
	}
	if(1)
	{
		int int_7 = 1;
		int int_8 = 1;
		int_5 = int_7 + int_8;
		double_5 = double_1 * double_6;
		char_2 = char_1 + char_1;
		int_7 = int_6 + int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		double double_7 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_9 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
		double_6 = double_4 * double_7;
		char_2 = char_3 * char_4;
		int_1 = int_9 * int_9;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_5;
	}
	return unsigned_int_2;
}
char v_DWHCIDeviceEnableRootPort( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	double double_5 = 1;
	int int_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_6 = 1;
	int int_3 = 1;
	long long_2 = 1;
	v_DWHCIRegisterWrite(unsigned_int_1);

	double_1 = double_1;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "> ") > 0)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_3 = v_DWHCIRegisterRead(unsigned_int_2);

	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	char_2 = char_1 + char_2;
	double_2 = double_2 * double_3;
	v_DWHCIRegister(long_1);

	short_2 = short_2;
	double_4 = double_2 * double_2;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_4;
	double_2 = v_DWHCIDeviceWaitForBit(float_1,double_5,int_1,short_3,short_3);

	unsigned_int_5 = unsigned_int_6;
	int_2 = int_1 * int_1;
	v_MsDelay(unsigned_int_3);

	v_DWHCIRegisterAnd(char_3,float_2);

	short_1 = short_2 + short_1;
	v__DWHCIRegister(float_3);

	v_DWHCIRegisterOr(double_1,unsigned_int_5);

	double_5 = double_4 + double_6;
	int_1 = int_3 * int_3;
	long_1 = long_1 * long_2;
	return char_2;
}
void v_DWHCIDeviceEnableHostInterrupts( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = v_DWHCIRegisterRead(unsigned_int_1);

	unsigned_int_1 = unsigned_int_1;
	v_DWHCIRegister2(double_1,long_1,unsigned_int_1);

	int_1 = int_1 * int_1;
	double_1 = double_1 + double_1;
	v_DWHCIDeviceEnableCommonInterrupts();

	float_1 = float_1 + float_1;
	v_DWHCIRegisterWrite(unsigned_int_2);

	double_2 = double_1;
	v__DWHCIRegister(float_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_2 = int_1 + int_1;
	short_2 = short_1 * short_1;
	v_DWHCIRegisterOr(double_1,unsigned_int_1);

	char_2 = char_1 * char_1;
}
void v_DWHCIDeviceFlushRxFIFO( char parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_1;
	v_DWHCIRegisterWrite(unsigned_int_1);

	long_1 = long_1 + long_2;
	int_1 = int_1 * int_1;
	v_DWHCIRegisterOr(double_1,unsigned_int_1);

	int_2 = int_2;
	double_1 = v_DWHCIDeviceWaitForBit(float_1,double_2,int_2,short_1,short_1);

	v__DWHCIRegister(float_1);

	long_2 = long_2 + long_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "e") > 0)
	{
		double double_3 = 1;
		double_3 = double_2 + double_2;
	}
	v_DWHCIRegister2(double_2,long_3,unsigned_int_2);

	v_usDelay(double_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
}
void v_TimerusDelay( unsigned int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_2 = int_1 * int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	v_DelayLoop(short_1);

}
void v_usDelay( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	v_TimerusDelay(unsigned_int_1,unsigned_int_1);

	long_1 = v_TimerGet();

	short_1 = short_2;
}
void v_DWHCIDeviceFlushTxFIFO( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double_1 = double_2;
	int_1 = int_1 * int_1;
	double_2 = v_DWHCIDeviceWaitForBit(float_1,double_2,int_2,short_1,short_2);

	float_3 = float_2 * float_1;
	v_usDelay(double_1);

	long_3 = long_1 * long_2;
	v_DWHCIRegister2(double_1,long_4,unsigned_int_1);

	v_DWHCIRegisterAnd(char_1,float_3);

	v_DWHCIRegisterWrite(unsigned_int_2);

	short_3 = short_3 + short_1;
	v_DWHCIRegisterOr(double_2,unsigned_int_3);

	v__DWHCIRegister(float_3);

	double_3 = double_1;
	int_1 = int_2;
	if(1)
	{
		double_2 = double_3 + double_2;
	}
	long_6 = long_5 + long_4;
}
char v_DWHCIDeviceInitHost()
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_3 = 1;
	int int_5 = 1;
	float float_5 = 1;
	int_1 = int_1 * int_1;
	short_1 = short_1;
	float_1 = float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 * long_1;
	double_1 = double_1 * double_2;
	int_2 = int_3;
	long_2 = long_2 * long_3;
	float_2 = float_3;
	long_2 = v_DWHCIRegisterGet(float_2);

	char_2 = char_1 + char_2;
	char_3 = char_2;
	v_DWHCIRegisterAnd(char_3,float_4);

	v_DWHCIDeviceEnableHostInterrupts(long_1);

	char_3 = char_3 + char_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		char char_4 = 1;
		char_1 = char_4;
	}
	unsigned_int_2 = unsigned_int_3;
	double_1 = double_3 + double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
	v_DWHCIDeviceFlushRxFIFO(char_2);

	unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
	int_4 = int_2 + int_3;
	double_4 = double_1 * double_4;
	v_DWHCIRegister2(double_2,long_3,unsigned_int_4);

	double_2 = double_4 * double_5;
	long_3 = long_1 * long_1;
	int_1 = int_3 * int_3;
	unsigned_int_3 = unsigned_int_3;
	float_2 = float_3;
	v_DWHCIDeviceFlushTxFIFO(short_1,int_2);

	unsigned_int_1 = unsigned_int_6 + unsigned_int_7;
	short_2 = short_1;
	v_DWHCIRegisterWrite(unsigned_int_4);

	float_4 = float_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_6;
	v_DWHCIRegister(long_1);

	char_3 = char_3 * char_2;
	unsigned_int_4 = unsigned_int_7 + unsigned_int_7;
	unsigned_int_2 = v_DWHCIRegisterRead(unsigned_int_1);

	unsigned_int_4 = unsigned_int_4;
	unsigned_int_6 = unsigned_int_8 + unsigned_int_5;
	long_3 = long_2 * long_3;
	if(1)
	{
		double_3 = double_4 * double_5;
		double_5 = double_2 * double_1;
	}
	int_1 = int_4 + int_2;
	short_1 = short_2 * short_3;
	float_3 = float_4 * float_4;
	int_4 = int_3 * int_5;
	v__DWHCIRegister(float_5);

	double_4 = double_2 + double_2;
	unsigned_int_7 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_7 + unsigned_int_6;
	int_3 = int_5 * int_3;
	v_DWHCIRegisterOr(double_5,unsigned_int_4);

	double_1 = double_3 + double_1;
	return char_2;
}
void v_DWHCIDeviceEnableGlobalInterrupts( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int_1 = int_2;
	v__DWHCIRegister(float_1);

	char_2 = char_1 + char_1;
	v_DWHCIRegister(long_1);

	long_1 = long_1 + long_1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = v_DWHCIRegisterRead(unsigned_int_2);

	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_3;
	v_DWHCIRegisterOr(double_2,unsigned_int_3);

	float_2 = float_1 + float_2;
	v_DWHCIRegisterWrite(unsigned_int_3);

}
void v_DWHCIDeviceEnableCommonInterrupts()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char_3 = char_1 + char_2;
	v_DWHCIRegister(long_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_DWHCIRegister2(double_1,long_2,unsigned_int_1);

	int_1 = int_1 + int_1;
	v_DWHCIRegisterWrite(unsigned_int_2);

	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double_1 = double_2 + double_2;
	}
	int_3 = int_1 * int_2;
	long_1 = long_1 * long_2;
	v__DWHCIRegister(float_1);

	double_4 = double_1 * double_3;
	v_DWHCIRegisterSetAll(int_3);

	double_2 = double_3 * double_4;
}
void v_MsDelay( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	long long_4 = 1;
	long_3 = long_1 * long_2;
	v_TimerMsDelay(double_1,long_3);

	long_4 = v_TimerGet();

}
double v_DWHCIDeviceWaitForBit( float parameter_1,double parameter_2,int parameter_3,short parameter_4,short parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 + double_2;
	short_2 = short_1 * short_2;
	short_1 = short_2 + short_1;
	char_2 = char_1 * char_1;
	return double_1;
	unsigned_int_1 = v_DWHCIRegisterRead(unsigned_int_2);

	v_MsDelay(unsigned_int_2);

}
float v_DWHCIDeviceReset( float parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	v_DWHCIRegister2(double_1,long_1,unsigned_int_1);

	int_2 = int_1 + int_1;
	v_MsDelay(unsigned_int_1);

	double_2 = double_1 * double_1;
	v__DWHCIRegister(float_1);

	v_DWHCIRegisterWrite(unsigned_int_1);

	float_2 = float_1 + float_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_3 = short_1 + short_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_DWHCIRegisterOr(double_1,unsigned_int_3);

	double_2 = double_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_4;
	}
	double_1 = v_DWHCIDeviceWaitForBit(float_3,double_3,int_2,short_3,short_3);

	int_1 = int_2 + int_2;
	char_1 = char_2;
	return float_4;
}
long v_DWHCIDeviceInitCore( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	char char_1 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_6 = 1;
	float float_6 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_9 = 1;
	int_1 = int_1 + int_2;
	float_1 = float_1;
	v_DWHCIRegister(long_1);

	float_3 = float_1 + float_2;
	v_LogWrite(short_1,long_2,double_1,short_2,-1 );

	long_2 = long_1 * long_3;
	long_2 = long_3 + long_3;
	short_3 = short_2;
	double_2 = double_1;
	if(1)
	{
		double_3 = double_1 + double_1;
	}
	int_3 = int_1 * int_3;
	double_5 = double_3 * double_4;
	long_4 = v_DWHCIRegisterGet(float_3);

	long_5 = long_3 * long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
	double_4 = double_3 + double_3;
	float_3 = v_DWHCIDeviceReset(float_4);

	char_1 = char_1 * char_1;
	if(1)
	{
		short_1 = short_2 * short_3;
		v_DWHCIRegisterOr(double_2,unsigned_int_5);

		double_5 = double_2 + double_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
		int_1 = int_3 + int_4;
	}
	char_2 = char_1 + char_1;
	unsigned_int_5 = unsigned_int_7;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	float_5 = float_1 * float_1;
	unsigned_int_5 = v_DWHCIRegisterRead(unsigned_int_2);

	int_3 = int_4 + int_4;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	long_1 = long_3 * long_2;
	float_5 = float_4 + float_5;
	float_1 = float_5 * float_4;
	double_1 = double_4 * double_1;
	v_DWHCIRegisterWrite(unsigned_int_3);

	short_5 = short_4 + short_5;
	short_2 = short_3 + short_3;
	unsigned_int_8 = unsigned_int_8;
	float_5 = float_1 * float_3;
	short_3 = short_6;
	v_DWHCIDeviceEnableCommonInterrupts();

	float_1 = float_3 * float_3;
	float_2 = float_6 + float_4;
	v_DWHCIRegisterAnd(char_2,float_5);

	double_6 = double_5 * double_1;
	unsigned_int_7 = unsigned_int_9 + unsigned_int_1;
	return long_1;
	v__DWHCIRegister(float_2);

}
short v_DWHCITransferStageDataBeginSplitCycle( unsigned int parameter_1)
{
	short short_1 = 1;
	return short_1;
}
char v_DWHCITransferStageDataIsStageComplete( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float_2 = float_1 + float_1;
	return char_1;
}
void v_USBRequestCallCompletionRoutine()
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_1;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void v_DWHCIDeviceFreeChannel( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_2;
	v_uspi_EnterCritical();

	char_3 = char_1 * char_2;
	char_4 = char_5;
	unsigned_int_1 = unsigned_int_1;
	v_uspi_LeaveCritical();

	char_1 = char_2 * char_6;
	short_2 = short_1 * short_2;
	float_1 = float_2;
}
void v__DWHCITransferStageData( float parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long_2 = long_1 + long_1;
		v_free();

		short_3 = short_1 * short_2;
		short_2 = short_2 + short_2;
	}
	double_3 = double_1 + double_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, " Z") > 0)
	{
		double_3 = double_1;
		double_3 = double_3;
	}
	float_2 = float_1 * float_2;
	int_3 = int_1 * int_2;
	int_1 = int_3 + int_3;
}
void v_uspi_LeaveCritical()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 + char_1;
		}
	}
}
void v_uspi_EnterCritical()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	double_1 = double_1 + double_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
	}
	unsigned_int_1 = unsigned_int_1;
}
void v_DWHCIDeviceDisableChannelInterrupt( int parameter_1,short parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_1 * int_1;
	v_uspi_LeaveCritical();

	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = v_DWHCIRegisterRead(unsigned_int_1);

	char_1 = char_1 * char_2;
	v_DWHCIRegisterAnd(char_2,float_1);

	v__DWHCIRegister(float_1);

	int_2 = int_2;
	double_1 = double_2;
	v_uspi_EnterCritical();

	char_3 = char_4;
	v_DWHCIRegisterWrite(unsigned_int_1);

	long_1 = long_1 * long_2;
	v_DWHCIRegister(long_1);

	double_2 = double_2 * double_2;
	char_3 = char_1 * char_2;
}
char v_DWHCITransferStageDataGetResultLen( unsigned int parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	return char_1;
}
void v_USBRequestSetResultLen( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_1 + int_1;
}
unsigned int v_DWHCITransferStageDataIsStatusStage( float parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 + char_1;
	return unsigned_int_1;
}
void v_DWHCITransferStageDataSetSplitComplete( float parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_2 = double_1 * double_1;
	char_2 = char_1 * char_1;
	double_4 = double_3 + double_1;
}
void v_DWHCIDeviceTimerHandler( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_5 = 1;
	char_2 = char_1 + char_2;
	v_DWHCITransferStageDataSetSplitComplete(float_1,double_1);

	int_1 = int_1 + int_2;
	v_DWHCITransferStageDataIsSplit(int_3);

	char_1 = v_DWHCITransferStageDataGetFrameScheduler(char_3);

	double_1 = double_1;
	int_2 = int_3 * int_4;
	v_DWHCITransferStageDataSetState(unsigned_int_1,int_5);

	float_2 = float_1 + float_1;
	short_3 = short_1 * short_2;
	v_DWHCIDeviceStartTransaction(short_3,double_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char char_4 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		double_2 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		int_6 = int_6 + int_1;
		char_4 = char_1 + char_4;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double_2 = v_DWHCITransferStageDataGetState(int_6);

		long_1 = long_2;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	char_1 = char_3 + char_5;
}
long v_TimerGet()
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char_2 = char_1 + char_1;
	return long_1;
}
unsigned int v_TimerStartKernelTimer( char parameter_1,char parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 * double_1;
	v_LoggerWrite(short_1,short_2,double_3,short_3,long_1);

	double_4 = double_3 + double_2;
	int_3 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_1 = double_3;
		}
	}
	if(1)
	{
		short_1 = short_1 * short_1;
		v_LeaveCritical();

		double_3 = double_5;
	}
	short_3 = short_2 * short_1;
	double_5 = v_LoggerGet();

	double_4 = double_2 + double_5;
	float_1 = float_1 * float_1;
	v_EnterCritical();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1;
	char_1 = char_1 * char_1;
	return unsigned_int_2;
}
char v_StartKernelTimer( float parameter_1,float parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	return char_1;
	unsigned_int_1 = v_TimerStartKernelTimer(char_2,char_3,short_1);

	long_1 = v_TimerGet();

}
short v_USBRequestGetEndpoint( long parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float_1 = float_1;
	int_1 = int_2;
	return short_1;
}
void v_USBEndpointGetInterval( char parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
void v_DWHCITransferStageDataSetState( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
}
void v_USBRequestSetStatus( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
}
short v_DWHCITransferStageDataGetTransactionStatus( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_1;
	return short_1;
}
double v_DWHCITransferStageDataGetState( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	float_2 = float_1 * float_1;
	return double_1;
}
void v_USBEndpointSkipPID( unsigned int parameter_1,double parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char_2 = char_1 + char_1;
	char_3 = char_1 * char_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double_1 = double_1 + double_1;
		int_1 = int_2;
		if(1)
		{
			short_1 = short_2;
		}
		char_4 = char_2 + char_4;
		if(1)
		{
			double double_2 = 1;
			double_3 = double_2 + double_1;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_1 = double_3 + double_3;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		double double_4 = 1;
		short_2 = short_1 + short_1;
		double_3 = double_4 * double_1;
	}
}
void v_DWHCITransferStageDataTransactionComplete( unsigned int parameter_1,long parameter_2,float parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		char char_2 = 1;
		if(1)
		{
			long_1 = long_1 + long_1;
		}
		v_USBEndpointSkipPID(unsigned_int_1,double_1,unsigned_int_1);

		char_2 = char_1 * char_2;
	}
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		v_Logger(unsigned_int_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	int_1 = int_1 * int_2;
	char_3 = char_1 + char_3;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	int_3 = int_2 + int_3;
	double_3 = double_2 + double_3;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long_3 = long_2 * long_1;
		unsigned_int_4 = unsigned_int_5;
	}
}
unsigned int v_DWHCIRegisterIsSet( int parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_2;
	int_1 = int_1 + int_1;
	short_1 = short_1;
	return unsigned_int_1;
}
void v_DWHCIDeviceStartTransaction( short parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double_1 = double_2;
	int_1 = int_1 * int_2;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1;
	v_DWHCITransferStageDataSetSubState(int_1,unsigned_int_2);

	v_DWHCIRegisterOr(double_1,unsigned_int_1);

	char_1 = char_1 * char_2;
	v_DWHCIRegisterSet(int_1,unsigned_int_3);

	float_1 = float_1 + float_2;
	int_2 = int_1;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int int_4 = 1;
		v_DWHCIDeviceStartChannel(short_1,long_1);

		double_1 = double_3 + double_2;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
		unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
		v_DWHCIRegister(long_2);

		int_2 = int_2 + int_3;
		v_DWHCITransferStageDataGetChannelNumber(unsigned_int_4);

		double_3 = double_2 + double_4;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
		long_2 = long_3 * long_4;
		unsigned_int_1 = v_DWHCIRegisterIsSet(int_3,float_2);

		v__DWHCIRegister(float_3);

		short_2 = short_2 + short_1;
		int_3 = int_3 + int_4;
	}
	if(1)
	{
		short_2 = short_2 * short_1;
	}
	unsigned_int_1 = v_DWHCIRegisterRead(unsigned_int_5);

	v_DWHCIRegisterWrite(unsigned_int_5);

	float_3 = float_1 * float_3;
	v_DWHCIRegisterAnd(char_1,float_2);

}
double v_DWHCITransferStageDataIsPeriodic()
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char_2 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = v_USBEndpointGetType(char_2);

	int_1 = int_1;
	return double_1;
}
char v_DWHCITransferStageDataGetStatusMask( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_2;
	double_1 = v_DWHCITransferStageDataIsPeriodic();

	int_2 = int_3 * int_2;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	return char_1;
}
void v_DWHCIRegisterSet( int parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1;
}
long v_USBEndpointGetNumber( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double_3 = double_1 + double_2;
	return long_1;
}
void v_DWHCITransferStageDataGetEndpointNumber( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	double_2 = double_1 * double_1;
	short_2 = short_1 * short_2;
	long_1 = v_USBEndpointGetNumber(short_3);

}
long v_USBEndpointGetType( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long_3 = long_1 * long_2;
	return long_1;
}
double v_DWHCITransferStageDataGetEndpointType( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
	long_1 = v_USBEndpointGetType(char_1);

	float_2 = float_1 * float_1;
	char_3 = char_2 + char_2;
	double_1 = double_1 * double_2;
	short_1 = short_1 * short_2;
	char_4 = char_3 * char_1;
	float_1 = float_2 * float_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	int_1 = int_1 * int_1;
	return double_3;
}
double v_USBDeviceGetAddress( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return double_1;
}
short v_DWHCITransferStageDataGetDeviceAddress( double parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double_1 = v_USBDeviceGetAddress(int_1);

	long_1 = long_1 * long_1;
	int_2 = int_1;
	return short_1;
}
float v_DWHCITransferStageDataGetSpeed()
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_2;
	return float_1;
}
int v_DWHCITransferStageDataIsDirectionIn( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_1;
	return int_1;
}
float v_DWHCITransferStageDataGetMaxPacketSize( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return float_1;
}
void v_DWHCITransferStageDataIsSplitComplete( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	short_3 = short_1 + short_2;
	int_1 = int_1;
}
float v_DWHCITransferStageDataGetSplitPosition( long parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_1 = float_1 * float_1;
	double_2 = double_1 + double_1;
	return float_1;
}
float v_USBDeviceGetHubAddress( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_2;
	return float_1;
}
short v_DWHCITransferStageDataGetHubAddress( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	float float_4 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float_3 = float_1 + float_2;
	char_1 = char_1 * char_1;
	float_4 = v_USBDeviceGetHubAddress(long_1);

	double_2 = double_1 + double_2;
	return short_1;
}
double v_USBDeviceGetHubPortNumber( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short_2 = short_1 * short_1;
	return double_1;
}
short v_DWHCITransferStageDataGetHubPortAddress( char parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double_1 = v_USBDeviceGetHubPortNumber(long_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_4 = double_2 + double_3;
	unsigned_int_2 = unsigned_int_1;
	return short_1;
}
void v_DWHCITransferStageDataIsSplit( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 + int_1;
}
void v_uspi_CleanAndInvalidateDataCacheRange( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_3 = double_1 + double_2;
	double_2 = double_2 * double_1;
	int_2 = int_1 * int_1;
	int_1 = int_2;
	char_2 = char_1 + char_2;
	long_1 = long_1 + long_1;
	long_1 = long_2;
	int_2 = int_2 * int_2;
}
void v_DWHCITransferStageDataGetDMAAddress()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_3 = char_1 + char_2;
	double_1 = double_2;
}
short v_USBEndpointGetNextPID( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
		double double_4 = 1;
		double_3 = double_3 + double_4;
	}
	return short_1;
}
long v_DWHCITransferStageDataGetPID( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int_1 = int_1 + int_2;
	int_2 = int_2;
	double_3 = double_1 * double_2;
	int_4 = int_2 * int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_5 = double_2 + double_4;
	int_4 = int_4 * int_3;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	double_4 = double_4 * double_6;
	short_1 = v_USBEndpointGetNextPID(long_1,long_2);

	float_1 = float_1 + float_2;
	unsigned_int_5 = unsigned_int_6;
	return long_2;
}
long v_DWHCITransferStageDataGetPacketsToTransfer( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char_2 = char_1 + char_2;
	return long_1;
}
float v_DWHCITransferStageDataGetBytesToTransfer( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	short_3 = short_1 + short_2;
	return float_1;
}
void v_DWHCIRegisterOr( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1;
}
void v_DWHCIRegisterSetAll( int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double_1 = double_1;
	int_3 = int_1 * int_2;
	short_1 = short_1 + short_1;
}
void v_DWHCITransferStageDataSetSubState( int parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_2 = char_1 * char_2;
	int_1 = int_1 * int_2;
}
void v_DWHCITransferStageDataGetChannelNumber( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
void v_DWHCIDeviceStartChannel( short parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	char char_5 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_3 = 1;
	int int_9 = 1;
	double double_4 = 1;
	short short_6 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_6 = 1;
	float float_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_7 = 1;
	float float_7 = 1;
	int int_11 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	char_1 = char_2;
	int_3 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	float_3 = float_1 * float_2;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
	unsigned_int_6 = v_DWHCIRegisterRead(unsigned_int_2);

	unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
	v_DWHCITransferStageDataIsSplitComplete(long_1);

	short_1 = short_1 + short_2;
	unsigned_int_4 = unsigned_int_1;
	short_3 = short_2 * short_2;
	unsigned_int_7 = unsigned_int_3 * unsigned_int_3;
	float_3 = float_4 + float_1;
	unsigned_int_3 = unsigned_int_7 * unsigned_int_3;
	double_1 = double_1 + double_2;
	int_4 = int_1;
	v_DWHCITransferStageDataIsSplit(int_2);

	int_2 = int_1 * int_4;
	int_2 = int_3 + int_2;
	float_3 = v_DWHCITransferStageDataGetMaxPacketSize(long_1);

	char_4 = char_2 * char_3;
	double_1 = double_1 + double_1;
	int_6 = int_5 * int_6;
	if(1)
	{
		float_4 = float_2;
		short_2 = v_DWHCITransferStageDataGetDeviceAddress(double_1);

		v__DWHCIRegister(float_3);

		double_2 = double_1 + double_1;
		v_DWHCITransferStageDataGetChannelNumber(unsigned_int_3);

		float_4 = v_DWHCITransferStageDataGetSplitPosition(long_2);

		char_3 = v_DWHCITransferStageDataGetFrameScheduler(char_5);

		int_7 = int_7;
		if(1)
		{
			unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
		}
		unsigned_int_1 = unsigned_int_7;
	}
	v_DWHCITransferStageDataGetEndpointNumber(short_2);

	double_1 = double_2 + double_1;
	int_6 = int_1 + int_5;
	char_3 = char_5 + char_4;
	int_7 = int_5 * int_1;
	v_uspi_CleanAndInvalidateDataCacheRange(int_7,char_4);

	v_DWHCIRegisterSet(int_8,unsigned_int_4);

	long_2 = long_3 * long_3;
	double_1 = double_1 * double_1;
	int_4 = int_3 + int_5;
	char_1 = char_3;
	if(1)
	{
		v_DWHCITransferStageDataGetDMAAddress();

		long_4 = long_3 + long_1;
	}
	if(1)
	{
		double_2 = v_DWHCITransferStageDataGetEndpointType(short_2);

		int_6 = int_1 * int_7;
	}
	if(1)
	{
		char_5 = v_DWHCITransferStageDataGetStatusMask(short_3);

		long_3 = long_1;
	}
	if(1)
	{
		char_4 = char_5 * char_2;
	}
	v_DWHCIRegisterOr(double_2,unsigned_int_4);

	float_1 = v_DWHCITransferStageDataGetBytesToTransfer(long_5);

	int_6 = int_5;
	float_5 = float_2 * float_4;
	unsigned_int_2 = unsigned_int_6;
	unsigned_int_7 = unsigned_int_3 * unsigned_int_7;
	short_5 = short_1 * short_4;
	short_4 = short_5 + short_1;
	unsigned_int_7 = unsigned_int_3 * unsigned_int_6;
	if(1)
	{
		double_1 = double_3 + double_2;
		if(1)
		{
			long long_6 = 1;
			long_4 = v_DWHCITransferStageDataGetPID(int_4);

			long_1 = long_2 + long_6;
		}
		if(1)
		{
			v_DWHCIRegisterSetAll(int_9);

			v_DWHCIRegister2(double_4,long_1,unsigned_int_5);

			short_6 = v_DWHCITransferStageDataGetHubPortAddress(char_5);

			int_5 = int_2 + int_3;
		}
	}
	short_4 = short_5 * short_2;
	int_6 = int_6 + int_1;
	v_DWHCITransferStageDataSetSubState(int_10,unsigned_int_4);

	int_5 = int_7 * int_3;
	long_3 = v_DWHCITransferStageDataGetPacketsToTransfer(long_3);

	int_3 = int_3 + int_9;
	v_DWHCIRegisterWrite(unsigned_int_8);

	unsigned_int_4 = unsigned_int_7 * unsigned_int_3;
	short_1 = v_DWHCITransferStageDataGetHubAddress(float_3);

	long_2 = long_1 * long_5;
	int_9 = int_7 + int_4;
	v_DWHCIRegisterAnd(char_6,float_6);

	double_6 = double_5 + double_5;
	short_7 = short_7 * short_4;
	float_7 = v_DWHCITransferStageDataGetSpeed();

	short_4 = short_3 * short_1;
	double_3 = double_6 + double_1;
	v_DWHCIRegister(long_2);

	int_10 = int_9 * int_9;
	int_8 = int_11 * int_9;
	int_5 = v_DWHCITransferStageDataIsDirectionIn(long_3);

}
char v_DWHCITransferStageDataGetSubState( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_2;
	return char_1;
}
double v_DWHCITransferStageDataGetURB( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_2;
	double_2 = double_2 + double_2;
	return double_1;
}
char v_DWHCITransferStageDataGetFrameScheduler( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double_3 = double_1 * double_2;
	return char_1;
}
void v_DWHCIDeviceChannelInterruptHandler( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_7 = 1;
	int int_7 = 1;
	int int_8 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_3 = 1;
	double double_9 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_11 = 1;
	long long_7 = 1;
	double double_10 = 1;
	short short_4 = 1;
	long long_8 = 1;
	long long_9 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_13 = 1;
	short short_6 = 1;
	double_1 = v_DWHCITransferStageDataGetState(int_1);

	float_1 = float_1 + float_1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_1;
	char_1 = char_1 * char_2;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	double_3 = double_2 * double_1;
	double_2 = double_4;
	double_2 = double_1 * double_4;
	v_LogWrite(short_1,long_1,double_5,short_2,-1 );

	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	long_2 = v_DWHCIRegisterGet(float_2);

	char_1 = char_3 * char_1;
	v_free();

	short_2 = short_2;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
	if(1)
	{
		double_6 = double_2 * double_4;
	}
	int_1 = int_4 + int_3;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_6;
	v_DWHCIDeviceTimerHandler(int_4);

	float_3 = float_1;
	char_3 = v_DWHCITransferStageDataGetSubState(double_5);

	char_2 = v_DWHCITransferStageDataIsStageComplete(short_1);

	int_6 = int_4 * int_5;
	float_2 = float_4 + float_4;
	v_DWHCITransferStageDataTransactionComplete(unsigned_int_1,long_2,float_5,long_1);

	char_2 = v_StartKernelTimer(float_6,float_1);

	v__DWHCITransferStageData(float_3);

	char_1 = char_4 + char_5;
	char_5 = char_4 + char_5;
	long_2 = long_3 + long_4;
	char_1 = char_1 + char_3;
	if(1)
	{
		v_DWHCIDeviceDisableChannelInterrupt(int_4,short_2);

		int_6 = int_6;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		v_USBRequestCallCompletionRoutine();

		double_7 = double_5 + double_1;
		double_1 = double_1 + double_7;
		int_7 = int_3;
		short_1 = short_1 + short_2;
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_7 * double_3;
		}
		double_6 = v_DWHCITransferStageDataIsPeriodic();

		v__DWHCIRegister(float_5);

		double_5 = double_1 * double_2;
	}
	double_2 = double_1 + double_5;
	v_DWHCITransferStageDataSetSplitComplete(float_5,double_4);

	int_5 = int_6 * int_8;
	unsigned_int_6 = unsigned_int_5;
	int_8 = int_2 + int_8;
	float_1 = float_1;
	double_7 = double_4 + double_3;
	v_DWHCIDeviceFreeChannel(int_7,int_8);

	float_6 = float_3 + float_7;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	if(1)
	{
		long_2 = long_4 * long_1;
		unsigned_int_7 = unsigned_int_5 * unsigned_int_4;
		long_4 = long_4 + long_5;
		long_3 = long_4 + long_1;
		float_7 = v_DWHCITransferStageDataGetBytesToTransfer(long_4);

		double_7 = double_4 * double_4;
		v_DWHCIRegister(long_3);

		double_3 = double_7 + double_4;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
		double_6 = double_4 * double_6;
		long_4 = long_5 + long_1;
	}
	char_4 = char_2 * char_5;
	char_5 = char_6 + char_7;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		unsigned_int_6 = unsigned_int_6 * unsigned_int_7;
	}
	int_9 = int_9;
	unsigned_int_5 = unsigned_int_8 + unsigned_int_6;
	unsigned_int_9 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
		float float_8 = 1;
		double_4 = double_8 * double_2;
		unsigned_int_9 = v_DWHCITransferStageDataIsStatusStage(float_7);

		unsigned_int_9 = unsigned_int_10 + unsigned_int_2;
		float_2 = float_4 * float_8;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_8;
		long_4 = long_2 + long_4;
		double_5 = double_1;
		double_3 = double_3;
		long_4 = long_5 * long_3;
		long_5 = long_2 + long_3;
	}
	short_3 = short_1 * short_2;
	if(1)
	{
		double_7 = double_9;
		v_uspi_CleanAndInvalidateDataCacheRange(int_9,char_3);

		long_1 = long_2 * long_6;
	}
	if(1)
	{
		unsigned int unsigned_int_12 = 1;
		if(1)
		{
			long_4 = long_1 + long_2;
			unsigned_int_9 = unsigned_int_2 * unsigned_int_3;
			long_6 = long_5 * long_6;
			char_6 = v_DWHCITransferStageDataGetResultLen(unsigned_int_11);

			double_5 = double_9 + double_6;
			v_DWHCITransferStageDataGetDMAAddress();

			int_9 = int_5;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_10;
			v_USBRequestSetResultLen(char_4,int_9);

			unsigned_int_5 = unsigned_int_7 * unsigned_int_5;
			unsigned_int_5 = unsigned_int_11;
		}
		if(1)
		{
			long_3 = long_4;
			char_4 = v_DWHCITransferStageDataGetFrameScheduler(char_6);

			int_6 = int_7;
			unsigned_int_5 = v_DWHCIRegisterRead(unsigned_int_6);

			long_7 = long_2 + long_7;
			double_6 = double_6 + double_5;
		}
		if(1)
		{
			int int_10 = 1;
			v_DWHCITransferStageDataSetState(unsigned_int_8,int_4);

			int_5 = int_10 + int_10;
			double_8 = double_10 * double_3;
			double_1 = double_9 * double_7;
		}
		unsigned_int_9 = unsigned_int_12 + unsigned_int_8;
	}
	double_10 = double_7 + double_2;
	if(1)
	{
		double_6 = double_6 + double_4;
	}
	short_2 = v_DWHCITransferStageDataGetTransactionStatus(short_1);

	char_4 = char_5 + char_6;
	short_1 = short_4 * short_4;
	double_1 = v_DWHCITransferStageDataGetURB(long_6);

	v_USBRequestSetStatus(double_10,int_8);

	v_USBEndpointGetInterval(char_6);

	int_2 = int_3 * int_7;
	v_DWHCIDeviceStartChannel(short_3,long_1);

	short_4 = v_USBRequestGetEndpoint(long_3);

	long_7 = long_8;
	long_8 = long_9 * long_4;
	short_5 = short_2 + short_3;
	unsigned_int_9 = unsigned_int_13;
	int_9 = int_5 * int_7;
	v_DWHCIDeviceStartTransaction(short_6,double_5);

	double_3 = double_7;
	short_2 = v_DWHCITransferStageDataBeginSplitCycle(unsigned_int_13);

}
void v_DWHCIRegister2( double parameter_1,long parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_2;
	int_1 = int_1 + int_1;
	int_2 = int_2 + int_2;
}
void v_DWHCIDeviceInterruptHandler()
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	char char_2 = 1;
	long long_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_6 = 1;
	short short_4 = 1;
	long long_8 = 1;
	long_1 = v_DWHCIRegisterGet(float_1);

	float_3 = float_1 * float_2;
	double_1 = double_1 + double_1;
	double_1 = double_2;
	v_DWHCIRegister2(double_1,long_1,unsigned_int_1);

	short_1 = short_1 * short_1;
	int_2 = int_1 * int_2;
	float_2 = float_2 + float_1;
	if(1)
	{
		char char_1 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long_1 = long_1 + long_2;
		double_2 = double_2;
		v__DWHCIRegister(float_3);

		double_2 = double_1;
		char_2 = char_1 + char_1;
		long_1 = long_3 + long_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				int int_3 = 1;
				int int_4 = 1;
				long long_6 = 1;
				long long_7 = 1;
				v_DWHCIRegister(long_5);

				short_2 = short_2 + short_1;
				int_3 = int_4;
				long_4 = long_3 * long_1;
				long_7 = long_6 + long_4;
				short_1 = short_2 * short_3;
			}
			unsigned_int_2 = v_DWHCIRegisterRead(unsigned_int_1);

			long_4 = long_3 * long_5;
		}
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "5") > 0)
		{
			unsigned int unsigned_int_4 = 1;
			int int_5 = 1;
			char_2 = char_2 * char_2;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
			int_2 = int_1 * int_5;
			short_1 = short_3;
			short_2 = short_3 * short_3;
			char_3 = char_3;
			v_DWHCIRegisterWrite(unsigned_int_2);

			float_2 = float_1 * float_1;
		}
		v_DWHCIDeviceChannelInterruptHandler(double_2,int_6);

		char_4 = char_3;
	}
	short_4 = short_1 + short_4;
	long_5 = long_2 * long_8;
}
short v_InterruptSystemGet()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short_1 = short_1 * short_2;
	return short_3;
}
void v_ConnectInterrupt( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	v_InterruptSystemConnectIRQ(double_1,long_1,short_1);

	short_2 = v_InterruptSystemGet();

	double_2 = double_1 + double_2;
}
void v_DWHCIRegisterWrite( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_2;
	char_1 = char_1 + char_1;
	float_1 = float_1 + float_1;
}
void v_DWHCIRegisterAnd( char parameter_1,float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 + short_2;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1;
}
int v_SetPowerStateOn()
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	char_1 = char_1 + char_1;
	double_3 = double_1 * double_2;
	short_2 = short_1 + short_1;
	v_BcmPropertyTags(unsigned_int_1);

	long_1 = long_1 + long_1;
	v__BcmPropertyTags(double_4);

	int_1 = int_1 + int_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_2 = v_BcmPropertyTagsGetTag(unsigned_int_1,double_1,int_3,long_2);

		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	char_1 = char_1;
	return int_4;
}
void v__DWHCIRegister( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_2 = double_1 + double_1;
	double_3 = double_1 * double_2;
}
long v_DWHCIRegisterGet( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1 * float_1;
	return long_1;
}
double v_LoggerGet()
{
	double double_1 = 1;
	return double_1;
}
void v_LogWrite( short parameter_1,long parameter_2,double parameter_3,short parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v_LoggerWriteV(unsigned_int_1,unsigned_int_1,char_1,short_1,int_1,uni_para);

	float_2 = float_1 * float_1;
	int_3 = int_2 * int_1;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_1;
}
unsigned int v_DWHCIRegisterRead( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 + float_2;
	double_1 = double_2;
	double_1 = double_3 * double_4;
	return unsigned_int_1;
}
void v_DWHCIRegister( long parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_2;
}
char v_DWHCIDeviceInitialize( double parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	double double_5 = 1;
	int int_6 = 1;
	short short_3 = 1;
	float_2 = float_1 + float_1;
	char_3 = char_1 * char_2;
	long_2 = long_1 * long_2;
	float_2 = float_1 * float_3;
	char controller4vul_926[3];
	fgets(controller4vul_926 ,3 ,stdin);
	if( strcmp( controller4vul_926, "HR") > 0)
	{
		unsigned_int_1 = v_DWHCIRootPortInitialize(float_3,uni_para);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_2 = float_3 * float_3;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_3;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	int_3 = int_1 + int_2;
	float_3 = float_4 * float_1;
	double_2 = double_1 * double_1;
	char_4 = char_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	short_1 = short_1 * short_2;
	if(1)
	{
		double double_4 = 1;
		double_4 = double_3 * double_4;
		int_2 = int_3;
		double_2 = double_3 + double_2;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		float_3 = float_3 + float_3;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		int int_5 = 1;
		int_4 = int_1 * int_3;
		short_2 = short_1;
		int_1 = int_4 * int_5;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned_int_8 = unsigned_int_7 + unsigned_int_8;
		double_2 = double_1 + double_3;
		unsigned_int_6 = unsigned_int_6 * unsigned_int_2;
	}
	double_5 = double_3 + double_2;
	int_6 = int_4 + int_6;
	short_3 = short_2 * short_3;
	return char_2;
}
void v_DWHCIRootPort()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	char_2 = char_1 + char_2;
}
void v_DWHCIDevice( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_3 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_2;
	v_DWHCIRootPort();

	float_4 = float_2 * float_2;
	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int_4 = int_1 * int_2;
	}
}
void v_DeviceNameService()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_2;
	double_1 = double_1 + double_1;
	char_3 = char_1 * char_2;
	int_3 = int_1;
}
int v_USPiInitialize(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	int int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_6 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_1;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 + short_2;
	long_1 = long_1 + long_1;
	int_3 = int_1 * int_2;
	char controller4vul_925[3];
	fgets(controller4vul_925 ,3 ,stdin);
	if( strcmp( controller4vul_925, "k^") > 0)
	{
		float float_4 = 1;
		int int_4 = 1;
		char_1 = v_DWHCIDeviceInitialize(double_2,uni_para);

		float_4 = float_1 * float_3;
		int_2 = int_3 * int_4;
		short_2 = short_1 + short_1;
		int_2 = int_4 + int_5;
		int_2 = int_4 * int_3;
	}
	char_3 = char_2 + char_1;
	long_3 = long_1 * long_2;
	int_6 = int_3 * int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_4 = 1;
		double_3 = double_1;
		long_1 = long_2 + long_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		short_2 = short_2 + short_2;
		char_2 = char_4 * char_3;
	}
	short_1 = short_2 * short_1;
	char_3 = char_3 + char_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_5 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		float_5 = float_3 * float_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		double_1 = double_2 + double_3;
		double_1 = double_4 * double_1;
		double_4 = double_2 * double_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	return int_7;
}
void v__ExceptionHandler( int parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = char_1 + char_1;
	int_2 = int_1 * int_2;
}
void v__InterruptSystem( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_1 = long_1 * long_2;
}
void v__Timer( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_2;
}
void v__Logger( unsigned int parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1 * long_1;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void v_DelayLoop( short parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_2 = 1;
		double_3 = double_1 + double_2;
		short_2 = short_1 + short_1;
	}
	int_2 = int_1 * int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 + long_1;
		long_2 = long_1 + long_2;
	}
	short_4 = short_3 + short_1;
	short_5 = short_6;
}
void v_TimerMsDelay( double parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	v_DelayLoop(short_1);

	short_2 = short_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		int_3 = int_1 + int_2;
		float_1 = float_1;
	}
}
double v_TimerGetTicks()
{
	char char_1 = 1;
	double double_1 = 1;
	char_1 = char_1;
	return double_1;
}
void v_TimerTuneMsDelay( long parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1;
	v_TimerMsDelay(double_1,long_1);

	short_1 = short_1 * short_2;
	long_1 = long_1 * long_1;
	short_2 = short_1 + short_2;
	int_3 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2;
	double_1 = v_TimerGetTicks();

}
void v_TimerPollKernelTimers( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_2;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long_1 = long_1;
		v_LeaveCritical();

		char_3 = char_1 + char_2;
		if(1)
		{
			if(1)
			{
				int int_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				v_EnterCritical();

				int_2 = int_1 * int_2;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			}
		}
	}
	int_3 = int_1 * int_3;
}
void v_TimerInterruptHandler()
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	double_1 = double_2;
	short_1 = short_1 + short_2;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	v_TimerPollKernelTimers(char_1);

	double_1 = double_3 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 * int_1;
		double_5 = double_1 * double_4;
	}
	float_1 = v_read32(int_2);

	long_1 = long_1;
	long_2 = long_1 + long_2;
	if(1)
	{
		short_3 = short_1 + short_1;
	}
	double_5 = double_1 * double_2;
	v_write32(double_4,short_3);

}
void v_InterruptSystemEnableIRQ( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 + double_2;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_write32(double_3,short_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
}
void v_InterruptSystemConnectIRQ( double parameter_1,long parameter_2,short parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 * int_1;
	v_InterruptSystemEnableIRQ(short_1);

	char_1 = char_1 * char_1;
	float_1 = float_1 * float_2;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
}
double v_TimerInitialize( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	float float_2 = 1;
	int_3 = int_1 * int_2;
	v_TimerInterruptHandler();

	float_1 = v_read32(int_1);

	v_TimerTuneMsDelay(long_1);

	short_2 = short_1 * short_1;
	v_InterruptSystemConnectIRQ(double_1,long_1,short_1);

	short_1 = short_2 * short_3;
	char_1 = char_1;
	long_3 = long_2 + long_1;
	int_3 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_2;
	v_write32(double_1,short_4);

	float_2 = float_2 * float_2;
	return double_1;
}
void v_IRQStub()
{
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "+^") > 0)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
}
int v_InterruptSystemInitialize( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	float float_2 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	double_1 = double_1 + double_2;
	v_CleanDataCache();

	v_write32(double_1,short_1);

	float_1 = v_read32(int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_3 = short_1 * short_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	int_2 = int_1;
	int_3 = int_1 + int_2;
	char_2 = char_1 + char_2;
	v_IRQStub();

	unsigned_int_1 = unsigned_int_6 + unsigned_int_2;
	long_1 = long_1 * long_2;
	short_4 = short_2 + short_1;
	long_2 = long_1;
	float_2 = float_1 * float_1;
	int_2 = int_1 + int_4;
	long_5 = long_3 + long_4;
	double_4 = double_3 + double_2;
	short_4 = short_4;
	int_1 = int_5 + int_1;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_4;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
	return int_4;
}
void v_StringFormatV( unsigned int parameter_1,unsigned int parameter_2,short parameter_3)
{
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_2 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_3 = double_1 + double_2;
	}
}
void v__String( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_1 = double_1;
		short_2 = short_1 * short_1;
	}
}
void v_StringGet( double parameter_1)
{
	double double_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
}
void v_StringFormat( char parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	int_1 = int_1 + int_1;
	long_1 = long_1 + long_1;
}
void v_String( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short_2 = short_1 + short_1;
	int_2 = int_1 + int_1;
	char_3 = char_1 * char_2;
}
void v_TimerGetTimeString( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	short short_2 = 1;
	float float_3 = 1;
	int_1 = int_2;
	long_1 = long_2;
	double_1 = double_1;
	int_3 = v_malloc(float_1);

	int_4 = int_1;
	int_5 = int_3 * int_3;
	if(1)
	{
	}
	v_EnterCritical();

	unsigned_int_1 = unsigned_int_2;
	double_1 = double_2;
	v_LeaveCritical();

	float_1 = float_2 * float_2;
	char_1 = char_1 * char_1;
	int_5 = int_3;
	v_StringFormat(char_2,short_1,int_6);

	double_1 = double_1 + double_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	v_String(long_1);

	double_2 = double_3 + double_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	short_2 = short_1 * short_2;
	float_3 = float_3 + float_3;
}
void v_ScreenDeviceSetCursorMode( long parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
}
void v_ScreenDeviceCursorMove( short parameter_1,float parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = v_CharGeneratorGetCharHeight(double_1);

	long_1 = long_2;
	char_2 = char_1 * char_1;
	if(1)
	{
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		char_3 = char_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_1 = v_CharGeneratorGetCharWidth(int_2);

}
void v_ScreenDeviceSetStandoutMode( float parameter_1,float parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_1;
	float_2 = float_1 * float_2;
	long_1 = long_1;
	int_1 = int_1 + int_1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_2;
}
void v_ScreenDeviceInsertMode( int parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_2;
}
void v_ScreenDeviceEraseChars( double parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_2 = v_CharGeneratorGetCharWidth(int_3);

		v_ScreenDeviceEraseChar(float_1,float_2,char_1);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
}
void v_ScreenDeviceDeleteChars( long parameter_1,double parameter_2)
{
}
void v_ScreenDeviceDeleteLines( int parameter_1,float parameter_2)
{
}
void v_ScreenDeviceCursorUp()
{
	float float_3 = 1;
	double double_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	float_3 = v_CharGeneratorGetCharHeight(double_1);

}
void v_ScreenDeviceInsertLines( float parameter_1,double parameter_2)
{
}
void v_ScreenDeviceReverseScroll( char parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "B5") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	v_ScreenDeviceInsertLines(float_1,double_1);

}
void v_ScreenDeviceCursorRight( long parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	char * vul_var;
	int_2 = int_1 * int_1;
	char controller4vul_946[3];
	fgets(controller4vul_946 ,3 ,stdin);
	if( strcmp( controller4vul_946, "l)") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 495)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
}
float v_CharGeneratorGetPixel( short parameter_1,char parameter_2,long parameter_3,char parameter_4)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short_1 = short_1 + short_1;
	long_1 = long_1 * long_2;
	return float_1;
}
void v_ScreenDeviceDisplayChar2( short parameter_1,char parameter_2,short parameter_3,long parameter_4,unsigned int parameter_5)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_2 = 1;
			char char_3 = 1;
			v_ScreenDeviceSetPixel(float_1,int_1,short_1,long_1);

			float_1 = v_CharGeneratorGetPixel(short_2,char_1,long_2,char_1);

			char_3 = char_2 + char_1;
		}
	}
	float_1 = v_CharGeneratorGetCharHeight(double_1);

	int_2 = v_CharGeneratorGetCharWidth(int_3);

}
void v_ScreenDeviceDisplayChar( long parameter_1,char parameter_2,int uni_para)
{
	long long_1 = 1;
	char controller4vul_945[3];
	fgets(controller4vul_945 ,3 ,stdin);
	if( strcmp( controller4vul_945, ".8") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		v_ScreenDeviceCursorRight(long_1,uni_para);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_2;
	}
}
short v_memcpyblk(char parameter_2,long parameter_3)
{
	double double_2 = 1;
	short short_1 = 1;
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_2 = double_1 * double_2;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		int int_1 = 1;
		double double_3 = 1;
		int_1 = int_1;
		double_3 = double_2;
	}
	return short_1;
}
void v_ScreenDeviceScroll( float parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float_1 = v_CharGeneratorGetCharHeight(double_1);

	double_2 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double_1 = v_memcpy(unsigned_int_1,long_1);

			int_1 = int_1 * int_2;
		}
	}
	if(1)
	{
	}
	if(1)
	{
	}
	short_1 = v_memcpyblk(char_1,long_1);

}
void v_ScreenDeviceCursorDown( int parameter_1)
{
	double double_1 = 1;
	float float_2 = 1;
	double_1 = double_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		char_2 = char_1 + char_2;
		float_1 = float_1 + float_1;
	}
	float_2 = v_CharGeneratorGetCharHeight(double_1);

	v_ScreenDeviceScroll(float_2);

}
void v_ScreenDeviceCarriageReturn( unsigned int parameter_1)
{
	char char_1 = 1;
	char_1 = char_1 + char_1;
}
void v_ScreenDeviceNewLine( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_ScreenDeviceCarriageReturn(unsigned_int_1);

	float_3 = float_1 + float_2;
	v_ScreenDeviceCursorDown(int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void v_ScreenDeviceTabulator( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int_1 = v_CharGeneratorGetCharWidth(int_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	v_ScreenDeviceNewLine(long_1);

	int_2 = int_3 * int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "`") < 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
}
void v_ScreenDeviceCursorLeft( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			float float_2 = 1;
			long_2 = long_1 * long_1;
			int_1 = v_CharGeneratorGetCharWidth(int_2);

			float_1 = v_CharGeneratorGetCharHeight(double_1);

			float_2 = float_1;
		}
	}
}
void v_ScreenDeviceWrite2( float parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_2;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		char char_1 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_3 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		double_3 = double_1 + double_1;
		char_1 = char_1 + char_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_4 = double_3;
		}
		if(1)
		{
			float float_2 = 1;
			float_3 = float_1 * float_2;
		}
		if(1)
		{
			int int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			int_1 = int_1 + int_1;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			}
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
			}
			float_1 = float_3;
			double_4 = double_5 * double_5;
		}
	}
}
int v_ScreenDeviceWrite( float parameter_1,double parameter_2,int parameter_3,int uni_para)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char controller4vul_944[3];
	fgets(controller4vul_944 ,3 ,stdin);
	if( strcmp( controller4vul_944, "-w") > 0)
	{
		v_ScreenDeviceWrite2(float_1,char_1,uni_para);

	}
	return int_1;
}
short v_strlen()
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1 * float_1;
	int_1 = int_2;
	int_3 = int_1 * int_1;
	double_3 = double_1 * double_2;
	int_1 = int_3;
	int_3 = int_2 + int_4;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_2;
	return short_3;
}
void v_LoggerWrite2( int parameter_1,char parameter_2,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int_1 = v_ScreenDeviceWrite(float_1,double_1,int_1,uni_para);

	double_1 = double_1 * double_2;
	int_2 = int_1 + int_2;
}
void v_LoggerWriteV( unsigned int parameter_1,unsigned int parameter_2,char parameter_3,short parameter_4,int parameter_5,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char controller4vul_943[2];
	fgets(controller4vul_943 ,2 ,stdin);
	if( strcmp( controller4vul_943, "?") > 0)
	{
		v_LoggerWrite2(int_1,char_1,uni_para);

	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "0") > 0)
	{
	}
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_2 + double_1;
}
void v_LoggerWrite( short parameter_1,short parameter_2,double parameter_3,short parameter_4,long parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_LoggerWriteV(unsigned_int_3,unsigned_int_2,char_1,short_1,int_1,-1 );

	int_2 = int_2 * int_3;
	char_2 = char_2 * char_2;
}
char v_LoggerInitialize( unsigned int parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char_1 = char_2;
	char_2 = char_2 + char_1;
	return char_3;
	v_LoggerWrite(short_1,short_2,double_1,short_2,long_1);

}
void v_Logger( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_3 = long_1 * long_2;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3;
}
void v_Timer( int parameter_1)
{
	float float_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double_1 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_2 = 1;
		short_2 = short_1 * short_2;
		float_2 = float_2 + float_2;
	}
}
void v_InterruptSystem( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long_2 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_2 = long_1 + long_1;
		unsigned_int_1 = unsigned_int_2;
	}
	char_1 = char_1 + char_1;
}
void v_DataAbortStub()
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
}
void v_PrefetchAbortStub()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		}
		int_2 = int_1 * int_1;
		int_3 = int_3 * int_3;
		double_2 = double_1 * double_2;
		int_1 = int_2 * int_2;
	}
}
void v_UndefinedInstructionStub()
{
}
void v_ExceptionHandler2( short parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	long long_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	v_PrefetchAbortStub();

	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_3 = long_1 * long_2;
	int_3 = int_1 + int_2;
	v_DataAbortStub();

	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	int_1 = int_1 * int_4;
	long_4 = long_2;
	v_UndefinedInstructionStub();

	unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
	double_1 = double_1 + double_1;
	v_CleanDataCache();

	unsigned_int_3 = unsigned_int_2;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_6;
	float_1 = float_1 + float_2;
	double_1 = double_2 * double_2;
}
void v__CharGenerator( double parameter_1)
{
}
void v_free()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			short short_1 = 1;
			int_3 = int_1 + int_2;
			int_3 = int_3;
			double_1 = double_1;
			char_2 = char_1 + char_2;
			double_2 = double_1 * double_1;
			short_1 = short_1 + short_1;
		}
	}
}
void v__BcmFrameBuffer( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double_2 = double_1 * double_1;
	v_free();

	short_1 = short_1;
	double_2 = double_3 + double_1;
	v__BcmMailBox(long_1);

	short_2 = short_1 * short_1;
}
void v__ScreenDevice( short parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	v_free();

	int_1 = int_1;
	float_2 = float_1 * float_1;
	v__BcmFrameBuffer(long_1);

	float_1 = float_2 + float_2;
	short_1 = short_1 * short_2;
	v__CharGenerator(double_1);

	double_2 = double_2 * double_3;
}
long v_ScreenDeviceGetPixel( double parameter_1,long parameter_2,float parameter_3)
{
	long long_1 = 1;
	if(1)
	{
	}
	return long_1;
}
void v_CharGeneratorGetUnderline( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int_1 = int_2;
	float_2 = float_1 + float_1;
	double_2 = double_1 * double_1;
	double_3 = double_1 + double_2;
	short_3 = short_1 + short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "`v") > 0)
	{
		double_1 = double_3 * double_2;
		double_2 = double_3 * double_2;
	}
	long_1 = long_1;
}
void v_ScreenDeviceInvertCursor()
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			}
			if(1)
			{
				float_1 = v_CharGeneratorGetCharHeight(double_1);

				int_1 = v_CharGeneratorGetCharWidth(int_1);

				long_1 = long_1 + long_1;
			}
		}
	}
	v_CharGeneratorGetUnderline(int_2);

	long_1 = v_ScreenDeviceGetPixel(double_1,long_2,float_2);

	v_ScreenDeviceSetPixel(float_3,int_3,short_1,long_2);

}
void v_ScreenDeviceSetPixel( float parameter_1,int parameter_2,short parameter_3,long parameter_4)
{
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
}
void v_ScreenDeviceEraseChar( float parameter_1,float parameter_2,char parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float_1 = v_CharGeneratorGetCharHeight(double_1);

			int_1 = v_CharGeneratorGetCharWidth(int_1);

			v_ScreenDeviceSetPixel(float_2,int_1,short_1,long_1);

			double_1 = double_1 * double_1;
		}
	}
}
int v_CharGeneratorGetCharWidth( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_3 = double_1 * double_2;
	return int_1;
}
void v_ScreenDeviceClearLineEnd( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v_ScreenDeviceEraseChar(float_1,float_2,char_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	int_1 = v_CharGeneratorGetCharWidth(int_1);

}
void v_ScreenDeviceClearDisplayEnd( float parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	v_ScreenDeviceClearLineEnd(float_1);

	unsigned_int_1 = unsigned_int_1;
	float_2 = v_CharGeneratorGetCharHeight(double_1);

	long_3 = long_1 + long_2;
}
void v_ScreenDeviceCursorHome( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_3 = long_1 * long_2;
	int_2 = int_1 + int_2;
}
float v_CharGeneratorGetCharHeight( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 + double_1;
	float_1 = float_1;
	float_1 = float_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "L") > 0)
	{
	}
	return float_1;
}
int v_BcmFrameBufferGetPitch( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_1 * int_2;
	return int_1;
}
short v_BcmFrameBufferGetHeight( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	return short_1;
}
void v_BcmFrameBufferGetWidth( char parameter_1)
{
	int int_1 = 1;
	int_1 = int_1 * int_1;
}
void v_BcmFrameBufferGetSize( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char_3 = char_1 + char_2;
}
int v_BcmFrameBufferGetBuffer( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
double v_BcmFrameBufferGetDepth( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return double_1;
}
float v_BcmFrameBufferInitialize( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_4 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int_3 = int_1 + int_2;
	long_3 = long_1 + long_2;
	unsigned_int_1 = v_BcmMailBoxWriteRead(long_4,char_1);

	v_InvalidateDataCache();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2;
	v_CleanDataCache();

	double_2 = double_1 + double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "]") < 0)
	{
	}
	if(1)
	{
	}
	return float_1;
}
void v_BcmFrameBufferSetPalette( char parameter_1,double parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
}
short v_memset(int parameter_2,long parameter_3)
{
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
}
void v_BcmFrameBuffer( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	char char_3 = 1;
	int int_6 = 1;
	double double_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double_2 = double_1 + double_2;
	int_1 = int_1 + int_1;
	if(1)
	{
		double double_3 = 1;
		short short_2 = 1;
		v__BcmPropertyTags(double_1);

		double_2 = double_2 * double_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		v_BcmMailBox(long_1);

		short_2 = short_1 + short_1;
		if(1)
		{
			double_2 = double_4 + double_1;
			int_2 = int_3;
			if(1)
			{
				short_2 = short_1 + short_2;
				int_4 = int_3 + int_3;
			}
		}
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 * float_1;
			char_1 = char_1 * char_2;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		double_1 = double_4;
	}
	if(1)
	{
		short_3 = v_memset(int_1,long_2);

		long_1 = long_2 * long_1;
	}
	unsigned_int_3 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_3;
	int_2 = int_2 * int_3;
	v_BcmPropertyTags(unsigned_int_2);

	short_1 = short_4;
	int_5 = int_3;
	int_5 = v_malloc(float_2);

	int_5 = int_2 + int_2;
	int_3 = int_4 * int_5;
	char_1 = char_3 * char_2;
	int_4 = int_3 + int_6;
	double_5 = v_BcmPropertyTagsGetTag(unsigned_int_3,double_5,int_4,long_3);

	long_5 = long_3 + long_4;
}
unsigned int v_ScreenDeviceInitialize( float parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	v_BcmFrameBufferSetPalette(char_1,double_1,double_1);

	double_2 = v_BcmFrameBufferGetDepth(double_1);

	int_2 = int_1 + int_1;
	double_4 = double_2 + double_3;
	if(1)
	{
		v_BcmFrameBufferGetWidth(char_2);

		long_1 = long_1 + long_1;
	}
	long_2 = long_1 + long_1;
	v_ScreenDeviceCursorHome(unsigned_int_1);

	double_1 = double_2 * double_1;
	if(1)
	{
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "{") > 0)
	{
	}
	float_1 = v_CharGeneratorGetCharHeight(double_1);

	double_2 = double_1 * double_1;
	v_BcmFrameBuffer(char_2);

	double_3 = double_3 * double_3;
	float_1 = v_BcmFrameBufferInitialize(float_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	short_1 = v_BcmFrameBufferGetHeight(char_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	v_BcmFrameBufferGetSize(short_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	v_ScreenDeviceClearDisplayEnd(float_2);

	int_4 = int_3 + int_1;
	int_4 = v_malloc(float_2);

	int_3 = v_BcmFrameBufferGetBuffer(long_1);

	int_4 = v_BcmFrameBufferGetPitch(float_1);

	v_ScreenDeviceInvertCursor();

	int_2 = int_3 * int_5;
	double_2 = double_5 + double_2;
	float_2 = float_3;
	return unsigned_int_4;
}
void v_CharGenerator( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_4 = double_3 * double_2;
		double_3 = double_5 * double_2;
	}
	int_3 = int_1 + int_2;
}
void v_ScreenDevice( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 * char_1;
	v_CharGenerator(unsigned_int_3);

	unsigned_int_4 = unsigned_int_1;
	int_2 = int_1 * int_2;
	float_1 = float_2;
	float_2 = float_1 + float_3;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_3;
	char_2 = char_2 + char_3;
	unsigned_int_3 = unsigned_int_4;
	short_1 = short_1 * short_2;
	float_3 = float_1 * float_1;
}
void v__BcmMailBox( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
}
void v__BcmPropertyTags( double parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v__BcmMailBox(long_1);

	double_2 = double_1 + double_1;
	int_1 = int_1 * int_2;
}
float v_PageTableGetBaseAddress()
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short_2 = short_1 * short_2;
	return float_1;
}
void v_MemorySystemEnableMMU( int parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float_1 = v_PageTableGetBaseAddress();

	char_3 = char_1 * char_2;
	if(1)
	{
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float_2 = float_1;
		int_2 = int_1 * int_2;
	}
	v_InvalidateDataCache();

}
void v_PageTable( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_5 = 1;
	float_2 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 + char_1;
	int_2 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_4 = 1;
		int int_3 = 1;
		short_1 = short_1;
		float_1 = float_1 * float_2;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
		char_3 = char_2 * char_1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		float_2 = float_3 + float_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
		v_CleanDataCache();

		double_2 = double_1 * double_1;
		double_3 = double_3 * double_1;
		float_1 = float_4 + float_5;
		double_2 = double_3 + double_1;
		double_3 = double_1 + double_2;
		unsigned_int_1 = unsigned_int_1;
		int_3 = int_1 + int_2;
		int_1 = int_1;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "{T") < 0)
		{
			double double_4 = 1;
			double double_5 = 1;
			double_4 = double_4 * double_5;
		}
	}
	char_1 = char_1;
	float_2 = float_1 * float_5;
}
unsigned int v_palloc()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		if(1)
		{
		}
	}
	char_2 = char_1 * char_2;
	return unsigned_int_1;
}
void v_PageTable2( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = v_palloc();

	v_CleanDataCache();

	double_1 = double_1 + double_1;
	double_1 = double_1 * double_2;
}
void v_LeaveCritical()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_2;
		}
	}
}
void v_EnterCritical()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	long_1 = long_2 * long_3;
}
int v_malloc( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	double_2 = double_1 + double_2;
	v_EnterCritical();

	int_1 = int_1 * int_2;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 * long_2;
			if(1)
			{
				double_1 = double_2 + double_3;
			}
			int_4 = int_3 * int_2;
		}
	}
	short_1 = short_1 + short_1;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		float float_1 = 1;
		short_3 = short_1 * short_2;
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_4 = 1;
		char char_6 = 1;
		char_3 = char_1 + char_2;
		int_3 = int_2 + int_3;
		if(1)
		{
			char char_4 = 1;
			char char_5 = 1;
			v_LeaveCritical();

			char_2 = char_4 * char_5;
		}
		double_3 = double_1 * double_4;
		char_6 = char_2 * char_6;
	}
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_1;
	int_5 = int_3 + int_3;
	return int_4;
}
void v_mem_init( int parameter_1,double parameter_2)
{
	if(1)
	{
		char char_1 = 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 + double_2;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 + float_2;
		}
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "w") < 0)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 * int_2;
		}
		if(1)
		{
			char_1 = char_1;
		}
		char_1 = char_1 + char_1;
	}
}
void v_InvalidateDataCache()
{
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			float_1 = float_1 * float_1;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			short short_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			short_1 = short_1;
			int_3 = int_1 * int_2;
		}
	}
}
void v_BcmMailBoxRead( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		float_1 = v_read32(int_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	}
	float_1 = float_1 + float_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double_1 = double_2;
		float_4 = float_3 + float_3;
		float_3 = float_3 + float_3;
	}
	short_1 = short_1 * short_1;
}
void v_write32( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	double_1 = double_1;
}
void v_BcmMailBoxWrite( long parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	float_1 = v_read32(int_1);

	int_1 = int_1 + int_2;
	v_write32(double_1,short_1);

}
void v_TimerSimpleusDelay( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_1;
	double_1 = double_2 + double_1;
	char_1 = char_1;
	float_1 = v_read32(int_1);

	float_1 = float_1 + float_2;
	double_2 = double_2 + double_1;
}
void v_TimerSimpleMsDelay()
{
	float float_1 = 1;
	if(1)
	{
		double double_1 = 1;
		v_TimerSimpleusDelay(float_1);

		double_1 = double_1;
	}
}
float v_read32( int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
void v_BcmMailBoxFlush()
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float_1 = v_read32(int_1);

	double_1 = double_1 * double_2;
	short_1 = short_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	v_TimerSimpleMsDelay();

	float_4 = float_2 + float_3;
}
unsigned int v_BcmMailBoxWriteRead( long parameter_1,char parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	short_1 = short_1;
	float_2 = float_1 + float_2;
	v_BcmMailBoxRead(char_1);

	int_3 = int_1 * int_2;
	double_2 = double_1 * double_2;
	long_1 = long_1 * long_1;
	char_2 = char_2 + char_3;
	return unsigned_int_1;
	v_BcmMailBoxFlush();

	v_BcmMailBoxWrite(long_2,double_3);

}
void v_CleanDataCache()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_4 = 1;
			char_1 = char_2;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		}
	}
}
double v_memcpy(unsigned int parameter_2,long parameter_3)
{
	double double_1 = 1;
	if(1)
	{
	}
	return double_1;
}
double v_BcmPropertyTagsGetTag( unsigned int parameter_1,double parameter_2,int parameter_4,long parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short_3 = short_1 * short_2;
	double_1 = v_memcpy(unsigned_int_1,long_1);

	float_2 = float_1 * float_1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_2 + float_2;
	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	v_InvalidateDataCache();

	short_4 = short_1 + short_2;
	unsigned_int_2 = v_BcmMailBoxWriteRead(long_1,char_2);

	char_3 = char_3 * char_3;
	double_1 = double_2 + double_1;
	double_3 = double_2 + double_3;
	int_4 = int_2 * int_4;
	short_3 = short_1 * short_2;
	float_1 = float_3 + float_3;
	double_4 = double_1;
	double_1 = double_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	v_CleanDataCache();

	double_5 = double_4 + double_1;
	return double_6;
}
void v_BcmMailBox( long parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = double_1;
	float_3 = float_1 + float_2;
}
void v_BcmPropertyTags( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	double_2 = double_1 + double_2;
	char_3 = char_1 + char_2;
	v_BcmMailBox(long_1);

}
void v_MemorySystem( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v__BcmPropertyTags(double_1);

	int_1 = int_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	v_PageTable(int_1);

	unsigned_int_2 = unsigned_int_2;
	float_3 = float_1 * float_2;
	short_1 = short_1 + short_2;
	double_2 = v_BcmPropertyTagsGetTag(unsigned_int_2,double_2,int_3,long_1);

	v_mem_init(int_3,double_3);

	double_5 = double_2 + double_4;
	int_4 = int_2 * int_1;
	if(1)
	{
		int_4 = int_1 + int_3;
		int_2 = int_4;
	}
	v_MemorySystemEnableMMU(int_5);

	char_2 = char_1 + char_1;
	short_2 = short_2 + short_1;
	char_1 = char_2 + char_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		v_BcmPropertyTags(unsigned_int_4);

		int_3 = int_4;
		float_2 = float_3 + float_3;
		int_3 = v_malloc(float_2);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
		double_5 = double_3 * double_2;
		char_1 = char_2 + char_1;
		v_PageTable2(char_1,long_1);

		unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
	}
	float_2 = float_1;
}
int v_USPiEnvInitialize()
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	v__Logger(unsigned_int_1);

	v__Timer(short_1);

	long_1 = long_1 * long_1;
	if(1)
	{
		int int_2 = 1;
		int_1 = v_InterruptSystemInitialize(short_2);

		int_2 = int_1 + int_2;
	}
	v_MemorySystem(long_1);

	unsigned_int_1 = v_ScreenDeviceInitialize(float_1);

	v_ExceptionHandler2(short_3);

	v_InterruptSystem(long_1);

	long_1 = long_1;
	v__ScreenDevice(short_2);

	v_Logger(unsigned_int_2);

	char_1 = v_LoggerInitialize(unsigned_int_2,long_1);

	double_1 = v_TimerInitialize(long_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_1;
	v_ScreenDevice(int_1);

	v_Timer(int_3);

	v__InterruptSystem(double_2);

	v__ExceptionHandler(int_3);

}
int main()
{
	int uni_para =495;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	char controller4vul_924[3];
	fgets(controller4vul_924 ,3 ,stdin);
	if( strcmp( controller4vul_924, "M.") < 0)
	{
		int_1 = v_USPiInitialize(uni_para);

	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
		double_1 = double_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		float_2 = float_1 + float_2;
		char_1 = char_1 * char_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int_1 = int_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			double_2 = double_2 * double_1;
			unsigned_int_3 = unsigned_int_2;
		}
		if(1)
		{
			double double_3 = 1;
			char char_2 = 1;
			double_3 = double_2;
			char_2 = char_1 + char_1;
		}
		int_3 = int_2 * int_3;
		float_2 = float_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_2;
		}
	}
	int_2 = int_1 + int_2;
	return int_4;
}

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

float v_USPiEnvGetScreen();
void v_ScreenDeviceRotor( short parameter_1,int parameter_2,float parameter_3);
short v_PacketHandler( float parameter_1,float parameter_2,char parameter_3);
void v_USBMIDIDeviceRegisterPacketHandler( unsigned int parameter_1,float parameter_2);
void v_USPiMIDIRegisterPacketHandler();
int v_USPiMIDIAvailable();
void v_USPiEnvClose();
int v_strcmp( long parameter_1,int parameter_2);
short v_DeviceNameServiceGetDevice( float parameter_1,long parameter_2,char parameter_3);
void v__DeviceNameService( unsigned int parameter_1);
void v__DWHCIRootPort( short parameter_1);
void v__DWHCIDevice( char parameter_1);
void v_DWHCIDeviceDisableRootPort( int parameter_1);
void v_DWHCIDeviceOvercurrentDetected( float parameter_1);
void v_USBMIDIDeviceCompletionRoutine( short parameter_1);
int v_USBMIDIDeviceStartRequest( double parameter_1);
long v_USBMIDIDeviceConfigure();
void v_USBMIDIDevice( long parameter_1);
void v_USBGamePadDeviceCompletionRoutine( float parameter_1);
double v_USBGamePadDeviceStartRequest( short parameter_1);
void v_USBGamePadDevicePS3Configure( int parameter_1);
int v_BitGetSigned(long parameter_2,long parameter_3);
int v_BitGetUnsigned(long parameter_2,float parameter_3);
float v_USBGamePadDeviceDecodeReport( short parameter_1);
void v_USBGamePadDeviceConfigure();
void v_USBGamePadDevice( short parameter_1);
float v_LAN7800DevicePHYWrite( char parameter_1,float parameter_2,char parameter_3);
long v_LAN7800DevicePHYRead( float parameter_1,char parameter_2,float parameter_3);
double v_LAN7800DeviceInitPHY( char parameter_1);
char v_LAN7800DeviceInitMACAddress();
long v_LAN7800DeviceWaitReg( int parameter_1,int parameter_2,int parameter_3,long parameter_4);
long v_LAN7800DeviceWriteReg( char parameter_1,int parameter_2,long parameter_3);
double v_LAN7800DeviceReadWriteReg( float parameter_1,short parameter_2,float parameter_3,float parameter_4);
float v_LAN7800DeviceReadReg( double parameter_1,unsigned int parameter_2,short parameter_3);
int v_LAN7800DeviceConfigure( short parameter_1);
void v_LAN7800Device( unsigned int parameter_1);
int v_SMSC951xDeviceWriteReg( short parameter_1,int parameter_2,float parameter_3);
void v_MACAddressCopyTo( short parameter_1,char parameter_2);
void v_MACAddressFormat( char parameter_1,long parameter_2);
void v_MACAddressSet( int parameter_1,char parameter_2);
int v_GetMACAddress( float parameter_1);
void v_MACAddress( long parameter_1);
unsigned int v_SMSC951xDeviceConfigure( double parameter_1);
void v_SMSC951xDevice( long parameter_1);
int v_uspi_char2int( char parameter_1);
void v_USBMouseDeviceCompletionRoutine( float parameter_1);
float v_USBMouseDeviceStartRequest( short parameter_1);
float v_USBMouseDeviceConfigure( char parameter_1);
void v_USBMouseDevice( double parameter_1);
void v_KeyMap( double parameter_1);
char v_DWHCIDeviceSubmitAsyncRequest( long parameter_1,char parameter_2);
void v_TimerCancelKernelTimer( long parameter_1,long parameter_2);
void v_CancelKernelTimer( short parameter_1);
char v_KeyMapGetString( int parameter_1,char parameter_2,unsigned int parameter_3,char parameter_4);
char v_KeyMapTranslate( char parameter_1,double parameter_2,double parameter_3);
void v_USBKeyboardDeviceGenerateKeyEvent( short parameter_1,int parameter_2);
unsigned int v_USBKeyboardDeviceGetKeyCode( float parameter_1);
int v_USBKeyboardDeviceGetModifiers( unsigned int parameter_1);
void v_USBKeyboardDeviceCompletionRoutine( int parameter_1);
float v_USBKeyboardDeviceStartRequest( float parameter_1);
void v_USBKeyboardDeviceConfigure( char parameter_1,int uni_para);
void v_USBKeyboardDevice( double parameter_1,int uni_para);
int v_DeviceNameServiceGet();
short v_strcpy( char parameter_1,long parameter_2);
void v_DeviceNameServiceAddDevice( unsigned int parameter_1,int parameter_2,char parameter_4);
char v_uspi_le2be32( int parameter_1);
int v_DWHCIDeviceTransfer( unsigned int parameter_1,float parameter_2,float parameter_4);
int v_USBBulkOnlyMassStorageDeviceCommand( char parameter_1,char parameter_3,char parameter_5,char parameter_6);
void v_USBEndpoint2( short parameter_1,int parameter_2,unsigned int parameter_3);
long v_USBBulkOnlyMassStorageDeviceConfigure( char parameter_1);
void v_USBBulkOnlyMassStorageDevice( short parameter_1);
float v_USBStandardHubEnumeratePorts( long parameter_1);
unsigned int v_USBConfigurationParserGetDescriptor( float parameter_1,unsigned int parameter_2);
short v_USBDeviceGetDescriptor( unsigned int parameter_1,short parameter_2);
long v_USBDeviceGetDeviceDescriptor( long parameter_1);
double v_USBStandardHubConfigure( short parameter_1);
void v_USBEndpointCopy( long parameter_1,double parameter_2,unsigned int parameter_3);
void v_USBStringCopy( float parameter_1,float parameter_2);
void v_USBDeviceCopy( float parameter_1,double parameter_2);
void v_USBStandardHub( int parameter_1);
int v_GetDevice( short parameter_1,float parameter_2,int uni_para);
double v_USBDeviceFactoryGetDevice( float parameter_1,int uni_para);
void v_StringAppend( unsigned int parameter_1,long parameter_2);
short v_StringGetLength( unsigned int parameter_1);
int v_StringCompare( float parameter_1,char parameter_2);
char v_StringSet( double parameter_1,unsigned int parameter_2);
long v_USBDeviceGetName( char parameter_1,int parameter_2);
float v_USBStandardHubGetDeviceNames( short parameter_1);
void v__USBString( unsigned int parameter_1);
void v__USBEndpoint( long parameter_1);
void v__USBConfigurationParser( short parameter_1);
void v__USBDevice( float parameter_1);
void v_debug_hexdump( float parameter_1,char parameter_2,long parameter_3);
void v_DebugHexdump( unsigned int parameter_1,double parameter_2,double parameter_3);
void v_USBConfigurationParserError( char parameter_1,int parameter_2);
void v_USBDeviceConfigurationError( int parameter_1,double parameter_2);
float v_USBConfigurationParserIsValid();
void v_USBConfigurationParser( double parameter_1);
void v_String2( long parameter_1,short parameter_2);
double v_USBStringGetFromDescriptor( int parameter_1,int parameter_2,unsigned int parameter_3);
int v_USBDeviceGetEndpoint0();
short v_USBDeviceGetHost( long parameter_1);
short v_USBStringGetLanguageID( double parameter_1);
void v_USBDeviceSetAddress( unsigned int parameter_1,short parameter_2);
unsigned int v_DWHCIDeviceSetAddress( double parameter_1,unsigned int parameter_2,double parameter_3);
void v_USBEndpointSetMaxPacketSize( char parameter_1,float parameter_2);
int v_DWHCIDeviceGetDescriptor( char parameter_1,long parameter_2,int parameter_3,int parameter_4,float parameter_6,int parameter_7);
char v_USBDeviceInitialize( int parameter_1);
void v_USBString( char parameter_1);
void v_USBEndpoint( short parameter_1);
void v__USBRequest( unsigned int parameter_1);
float v_USBRequestGetResultLength( long parameter_1);
long v_USBEndpointIsDirectionIn();
int v_USBRequestGetStatus( int parameter_1);
void v_DWHCIDeviceEnableChannelInterrupt( char parameter_1,short parameter_2);
int v_DWHCIFrameSchedulerNoSplitIsOddFrame( int parameter_1);
void v_DWHCIFrameSchedulerNoSplitWaitForFrame();
void v_DWHCIFrameSchedulerNoSplitTransactionComplete( int parameter_1,short parameter_2);
int v_DWHCIFrameSchedulerNoSplitCompleteSplit( double parameter_1);
void v_DWHCIFrameSchedulerNoSplitStartSplit( double parameter_1);
void v__DWHCIFrameSchedulerNoSplit( unsigned int parameter_1);
void v_DWHCIFrameSchedulerNoSplit( short parameter_1);
long v_DWHCIFrameSchedulerNonPeriodicIsOddFrame( double parameter_1);
void v_DWHCIFrameSchedulerNonPeriodicWaitForFrame( char parameter_1);
void v_DWHCIFrameSchedulerNonPeriodicTransactionComplete( long parameter_1,char parameter_2);
unsigned int v_DWHCIFrameSchedulerNonPeriodicCompleteSplit( long parameter_1);
void v_DWHCIFrameSchedulerNonPeriodicStartSplit( unsigned int parameter_1);
void v__DWHCIFrameSchedulerNonPeriodic( char parameter_1);
void v_DWHCIFrameSchedulerNonPeriodic( char parameter_1);
void v_DWHCIFrameSchedulerPeriodicIsOddFrame( char parameter_1);
void v_DWHCIFrameSchedulerPeriodicWaitForFrame( double parameter_1);
void v_DWHCIFrameSchedulerPeriodicTransactionComplete( float parameter_1,char parameter_2,int uni_para);
unsigned int v_DWHCIFrameSchedulerPeriodicCompleteSplit( int parameter_1);
void v_DWHCIFrameSchedulerPeriodicStartSplit( long parameter_1);
void v__DWHCIFrameSchedulerPeriodic( int parameter_1);
void v_DWHCIFrameSchedulerPeriodic( float parameter_1,int uni_para);
char v_USBRequestGetBuffer( float parameter_1);
unsigned int v_USBEndpointGetMaxPacketSize( int parameter_1);
long v_USBDeviceGetSpeed( short parameter_1);
int v_USBEndpointGetDevice();
void v_DWHCITransferStageData( long parameter_1,int uni_para);
char v_DWHCIDeviceAllocateChannel( short parameter_1);
char v_DWHCIDeviceTransferStageAsync( char parameter_1,long parameter_2,int parameter_3,float parameter_4,int uni_para);
void v_DWHCIDeviceCompletionRoutine( char parameter_1);
void v_USBRequestSetCompletionRoutine( int parameter_1,char parameter_2);
long v_DWHCIDeviceTransferStage( long parameter_1,int parameter_2,double parameter_3,short parameter_4,int uni_para);
short v_USBRequestGetBufLen( char parameter_1);
unsigned int v_USBRequestGetSetupData();
short v_DWHCIDeviceSubmitBlockingRequest( float parameter_1,short parameter_2,int uni_para);
void v_USBRequest( double parameter_1);
int v_DWHCIDeviceControlMessage( int parameter_1,double parameter_2,double parameter_3,short parameter_4,long parameter_5,int parameter_6,char parameter_8,int uni_para);
char v_DWHCIDeviceSetConfiguration( double parameter_1,short parameter_2,unsigned int parameter_3,int uni_para);
unsigned int v_USBDeviceConfigure( double parameter_1,int uni_para);
void v_USBDevice( float parameter_1);
int v_DWHCIDeviceGetPortSpeed( float parameter_1);
short v_DWHCIRootPortInitialize( double parameter_1,int uni_para);
long v_DWHCIDeviceEnableRootPort( short parameter_1);
void v_DWHCIDeviceEnableHostInterrupts();
void v_DWHCIDeviceFlushRxFIFO( short parameter_1);
void v_TimerusDelay( short parameter_1,char parameter_2);
void v_usDelay( long parameter_1);
void v_DWHCIDeviceFlushTxFIFO( unsigned int parameter_1,short parameter_2);
short v_DWHCIDeviceInitHost( int parameter_1);
void v_DWHCIDeviceEnableGlobalInterrupts( long parameter_1);
void v_DWHCIDeviceEnableCommonInterrupts( short parameter_1);
void v_MsDelay( long parameter_1);
float v_DWHCIDeviceWaitForBit( int parameter_1,double parameter_2,short parameter_3,double parameter_4,long parameter_5);
float v_DWHCIDeviceReset( long parameter_1);
void v_DWHCIDeviceInitCore( short parameter_1);
unsigned int v_DWHCITransferStageDataBeginSplitCycle( long parameter_1);
unsigned int v_DWHCITransferStageDataIsStageComplete();
void v_USBRequestCallCompletionRoutine( short parameter_1);
void v_DWHCIDeviceFreeChannel( int parameter_1,long parameter_2);
void v__DWHCITransferStageData( short parameter_1);
void v_uspi_LeaveCritical();
void v_uspi_EnterCritical();
void v_DWHCIDeviceDisableChannelInterrupt( double parameter_1,unsigned int parameter_2);
short v_DWHCITransferStageDataGetResultLen( unsigned int parameter_1);
void v_USBRequestSetResultLen( unsigned int parameter_1,float parameter_2);
short v_DWHCITransferStageDataIsStatusStage( double parameter_1);
void v_DWHCITransferStageDataSetSplitComplete( short parameter_1,char parameter_2);
void v_DWHCIDeviceTimerHandler( char parameter_1);
double v_TimerGet();
short v_TimerStartKernelTimer( int parameter_1,double parameter_2,long parameter_3);
void v_StartKernelTimer( double parameter_1,char parameter_2);
char v_USBRequestGetEndpoint();
short v_USBEndpointGetInterval();
void v_DWHCITransferStageDataSetState( long parameter_1,unsigned int parameter_2);
void v_USBRequestSetStatus( double parameter_1,int parameter_2);
char v_DWHCITransferStageDataGetTransactionStatus( double parameter_1);
long v_DWHCITransferStageDataGetState();
void v_USBEndpointSkipPID( float parameter_1,char parameter_2,char parameter_3);
void v_DWHCITransferStageDataTransactionComplete( float parameter_1,unsigned int parameter_2,long parameter_3,double parameter_4);
void v_DWHCIRegisterIsSet( short parameter_1,unsigned int parameter_2);
void v_DWHCIDeviceStartTransaction( float parameter_1,unsigned int parameter_2);
short v_DWHCITransferStageDataIsPeriodic( double parameter_1);
char v_DWHCITransferStageDataGetStatusMask( double parameter_1);
void v_DWHCIRegisterSet( int parameter_1,float parameter_2);
double v_USBEndpointGetNumber();
double v_DWHCITransferStageDataGetEndpointNumber( short parameter_1);
long v_USBEndpointGetType( char parameter_1);
unsigned int v_DWHCITransferStageDataGetEndpointType( int parameter_1);
float v_USBDeviceGetAddress( double parameter_1);
unsigned int v_DWHCITransferStageDataGetDeviceAddress( unsigned int parameter_1);
float v_DWHCITransferStageDataGetSpeed( short parameter_1);
int v_DWHCITransferStageDataIsDirectionIn( double parameter_1);
void v_DWHCITransferStageDataGetMaxPacketSize( long parameter_1);
double v_DWHCITransferStageDataIsSplitComplete( short parameter_1);
unsigned int v_DWHCITransferStageDataGetSplitPosition( double parameter_1);
unsigned int v_USBDeviceGetHubAddress( unsigned int parameter_1);
short v_DWHCITransferStageDataGetHubAddress( int parameter_1);
void v_USBDeviceGetHubPortNumber( short parameter_1);
double v_DWHCITransferStageDataGetHubPortAddress( int parameter_1);
unsigned int v_DWHCITransferStageDataIsSplit( unsigned int parameter_1);
void v_uspi_CleanAndInvalidateDataCacheRange( float parameter_1,long parameter_2);
long v_DWHCITransferStageDataGetDMAAddress( float parameter_1);
short v_USBEndpointGetNextPID( unsigned int parameter_1,int parameter_2);
short v_DWHCITransferStageDataGetPID( char parameter_1);
short v_DWHCITransferStageDataGetPacketsToTransfer( int parameter_1);
double v_DWHCITransferStageDataGetBytesToTransfer( int parameter_1);
void v_DWHCIRegisterOr( double parameter_1,int parameter_2);
void v_DWHCIRegisterSetAll( float parameter_1);
void v_DWHCITransferStageDataSetSubState( long parameter_1,short parameter_2);
void v_DWHCITransferStageDataGetChannelNumber( char parameter_1);
void v_DWHCIDeviceStartChannel( char parameter_1,unsigned int parameter_2);
unsigned int v_DWHCITransferStageDataGetSubState( long parameter_1);
int v_DWHCITransferStageDataGetURB();
char v_DWHCITransferStageDataGetFrameScheduler( long parameter_1);
void v_DWHCIDeviceChannelInterruptHandler( int parameter_1,char parameter_2);
void v_DWHCIRegister2( int parameter_1,short parameter_2,unsigned int parameter_3);
void v_DWHCIDeviceInterruptHandler();
int v_InterruptSystemGet();
void v_ConnectInterrupt( long parameter_1,long parameter_2);
void v_DWHCIRegisterWrite( unsigned int parameter_1);
void v_DWHCIRegisterAnd( long parameter_1,double parameter_2);
int v_SetPowerStateOn( float parameter_1);
void v__DWHCIRegister( float parameter_1);
long v_DWHCIRegisterGet( char parameter_1);
short v_LoggerGet();
void v_LogWrite( long parameter_1,long parameter_2,long parameter_3,long parameter_4,int uni_para);
void v_DWHCIRegisterRead( long parameter_1);
void v_DWHCIRegister( short parameter_1);
long v_DWHCIDeviceInitialize( long parameter_1,int uni_para);
void v_DWHCIRootPort( int parameter_1);
void v_DWHCIDevice( long parameter_1);
void v_DeviceNameService( double parameter_1);
int v_USPiInitialize(int uni_para);
void v__ExceptionHandler( char parameter_1);
void v__InterruptSystem( char parameter_1);
void v__Timer();
void v__Logger( unsigned int parameter_1);
void v_DelayLoop( short parameter_1);
void v_TimerMsDelay( unsigned int parameter_1,float parameter_2);
unsigned int v_TimerGetTicks( long parameter_1);
void v_TimerTuneMsDelay( float parameter_1);
void v_TimerPollKernelTimers( short parameter_1);
void v_TimerInterruptHandler();
void v_InterruptSystemEnableIRQ( long parameter_1);
void v_InterruptSystemConnectIRQ( float parameter_1,char parameter_2,long parameter_3);
long v_TimerInitialize( double parameter_1);
void v_IRQStub();
int v_InterruptSystemInitialize();
void v_StringFormatV( short parameter_1,long parameter_2,short parameter_3);
void v__String( float parameter_1);
unsigned int v_StringGet( char parameter_1);
void v_StringFormat( float parameter_1,double parameter_2,char parameter_3);
void v_String( long parameter_1);
int v_TimerGetTimeString( char parameter_1);
void v_ScreenDeviceSetCursorMode( unsigned int parameter_1,long parameter_2);
void v_ScreenDeviceCursorMove( long parameter_1,char parameter_2,int parameter_3);
void v_ScreenDeviceSetStandoutMode( unsigned int parameter_1,double parameter_2);
void v_ScreenDeviceInsertMode( unsigned int parameter_1,char parameter_2);
void v_ScreenDeviceEraseChars( double parameter_1,short parameter_2);
void v_ScreenDeviceDeleteChars( int parameter_1,char parameter_2);
void v_ScreenDeviceDeleteLines( long parameter_1,char parameter_2);
void v_ScreenDeviceCursorUp( unsigned int parameter_1);
void v_ScreenDeviceInsertLines( char parameter_1,long parameter_2);
void v_ScreenDeviceReverseScroll( int parameter_1);
void v_ScreenDeviceCursorRight( long parameter_1);
float v_CharGeneratorGetPixel( char parameter_1,char parameter_2,char parameter_3,char parameter_4);
void v_ScreenDeviceDisplayChar2( short parameter_1,char parameter_2,int parameter_3,short parameter_4,long parameter_5);
void v_ScreenDeviceDisplayChar( float parameter_1,char parameter_2,int uni_para);
int v_memcpyblk(int parameter_2,char parameter_3);
void v_ScreenDeviceScroll( short parameter_1);
void v_ScreenDeviceCursorDown( unsigned int parameter_1);
void v_ScreenDeviceCarriageReturn( float parameter_1);
void v_ScreenDeviceNewLine();
void v_ScreenDeviceTabulator( unsigned int parameter_1);
void v_ScreenDeviceCursorLeft( int parameter_1);
void v_ScreenDeviceWrite2( short parameter_1,char parameter_2,int uni_para);
int v_ScreenDeviceWrite( char parameter_1,float parameter_2,float parameter_3,int uni_para);
float v_strlen( double parameter_1);
void v_LoggerWrite2( long parameter_1,unsigned int parameter_2,int uni_para);
void v_LoggerWriteV( short parameter_1,unsigned int parameter_2,float parameter_3,float parameter_4,int parameter_5,int uni_para);
void v_LoggerWrite( double parameter_1,short parameter_2,int parameter_3,long parameter_4,int parameter_5);
long v_LoggerInitialize( double parameter_1,short parameter_2);
void v_Logger( short parameter_1);
void v_Timer( int parameter_1);
void v_InterruptSystem( double parameter_1);
void v_DataAbortStub();
void v_PrefetchAbortStub();
void v_UndefinedInstructionStub();
void v_ExceptionHandler2();
void v__CharGenerator( short parameter_1);
void v_free();
void v__BcmFrameBuffer( unsigned int parameter_1);
void v__ScreenDevice( short parameter_1);
long v_ScreenDeviceGetPixel( int parameter_1,char parameter_2,char parameter_3);
unsigned int v_CharGeneratorGetUnderline( int parameter_1);
void v_ScreenDeviceInvertCursor( long parameter_1);
void v_ScreenDeviceSetPixel( int parameter_1,double parameter_2,float parameter_3,int parameter_4);
void v_ScreenDeviceEraseChar( int parameter_1,float parameter_2,float parameter_3);
float v_CharGeneratorGetCharWidth( float parameter_1);
void v_ScreenDeviceClearLineEnd( short parameter_1);
void v_ScreenDeviceClearDisplayEnd( char parameter_1);
void v_ScreenDeviceCursorHome( long parameter_1);
double v_CharGeneratorGetCharHeight();
float v_BcmFrameBufferGetPitch( short parameter_1);
char v_BcmFrameBufferGetHeight( char parameter_1);
short v_BcmFrameBufferGetWidth( unsigned int parameter_1);
double v_BcmFrameBufferGetSize( unsigned int parameter_1);
unsigned int v_BcmFrameBufferGetBuffer( double parameter_1);
int v_BcmFrameBufferGetDepth( long parameter_1);
unsigned int v_BcmFrameBufferInitialize( int parameter_1);
void v_BcmFrameBufferSetPalette( unsigned int parameter_1,char parameter_2,short parameter_3);
int v_memset(int parameter_2,float parameter_3);
void v_BcmFrameBuffer();
int v_ScreenDeviceInitialize( int parameter_1);
void v_CharGenerator( float parameter_1);
void v_ScreenDevice( char parameter_1);
void v__BcmMailBox( unsigned int parameter_1);
void v__BcmPropertyTags( short parameter_1);
int v_PageTableGetBaseAddress();
void v_MemorySystemEnableMMU( long parameter_1);
void v_PageTable( int parameter_1);
char v_palloc();
void v_PageTable2( int parameter_1,int parameter_2);
void v_LeaveCritical();
void v_EnterCritical();
double v_malloc( long parameter_1);
void v_mem_init( double parameter_1,short parameter_2);
void v_InvalidateDataCache();
int v_BcmMailBoxRead( double parameter_1);
void v_write32( long parameter_1,long parameter_2);
void v_BcmMailBoxWrite( float parameter_1,double parameter_2);
void v_TimerSimpleusDelay( int parameter_1);
void v_TimerSimpleMsDelay( short parameter_1);
float v_read32( long parameter_1);
void v_BcmMailBoxFlush( unsigned int parameter_1);
unsigned int v_BcmMailBoxWriteRead( int parameter_1,int parameter_2);
void v_CleanDataCache();
double v_memcpy(unsigned int parameter_2,short parameter_3);
double v_BcmPropertyTagsGetTag( double parameter_1,long parameter_2,char parameter_4,unsigned int parameter_5);
void v_BcmMailBox( float parameter_1);
void v_BcmPropertyTags( double parameter_1);
void v_MemorySystem( float parameter_1);
int v_USPiEnvInitialize();
float v_USPiEnvGetScreen()
{
	float float_1 = 1;
	return float_1;
}
void v_ScreenDeviceRotor( short parameter_1,int parameter_2,float parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	v_ScreenDeviceDisplayChar2(short_1,char_1,int_1,short_2,long_1);

	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = v_CharGeneratorGetCharWidth(float_2);

	double_1 = double_1;
	int_1 = int_1 * int_1;
	long_1 = long_1;
}
short v_PacketHandler( float parameter_1,float parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_2;
	char_1 = char_1 + char_1;
	double_3 = double_1 + double_2;
	int_1 = int_1 * int_2;
	v_LogWrite(long_3,long_3,long_3,long_1,-1 );

	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	return short_1;
}
void v_USBMIDIDeviceRegisterPacketHandler( unsigned int parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char_1 = char_1 * char_2;
	long_2 = long_1 * long_1;
	int_1 = int_1 + int_1;
}
void v_USPiMIDIRegisterPacketHandler()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double_1 = double_2;
	v_USBMIDIDeviceRegisterPacketHandler(unsigned_int_1,float_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_3 = double_3 * double_1;
}
int v_USPiMIDIAvailable()
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_2;
	return int_1;
}
void v_USPiEnvClose()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v__Timer();

	v__InterruptSystem(char_1);

	char_1 = char_2;
	v__ExceptionHandler(char_1);

	v__ScreenDevice(short_1);

	long_2 = long_1 + long_1;
	double_2 = double_1 * double_1;
	v__Logger(unsigned_int_1);

	double_2 = double_1;
}
int v_strcmp( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float_3 = float_1 + float_2;
	double_2 = double_1 + double_1;
	int_1 = int_1 + int_1;
	int_1 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1;
	int_3 = int_2 + int_3;
	return int_4;
}
short v_DeviceNameServiceGetDevice( float parameter_1,long parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	float_1 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = v_strcmp(long_1,int_2);

		unsigned_int_1 = unsigned_int_2;
		float_3 = float_1 + float_1;
	}
	float_3 = float_2 * float_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_3 = 1;
		short_1 = short_1 + short_1;
		int_1 = int_3 + int_2;
	}
	return short_1;
}
void v__DeviceNameService( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	if(1)
	{
	}
	v_free();

	double_1 = double_1;
	double_1 = double_2 * double_1;
	int_1 = int_1 + int_1;
	float_1 = float_1 * float_1;
	char_1 = char_1;
	short_1 = short_1 + short_1;
	char_2 = char_2 + char_3;
	if(1)
	{
		double_2 = double_2 + double_2;
	}
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, ")") > 0)
	{
	}
	float_3 = float_2 + float_3;
}
void v__DWHCIRootPort( short parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1;
		long_1 = long_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	v_free();

	double_2 = double_1 * double_1;
	v__USBDevice(float_1);

}
void v__DWHCIDevice( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float_2 = float_1 * float_2;
	v__DWHCIRootPort(short_1);

}
void v_DWHCIDeviceDisableRootPort( int parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	v_DWHCIRegister(short_1);

	v__DWHCIRegister(float_1);

	float_1 = float_2;
	v_DWHCIRegisterWrite(unsigned_int_1);

	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	double_1 = double_2;
	v_DWHCIRegisterRead(long_1);

	v_DWHCIRegisterAnd(long_1,double_3);

	char_2 = char_1 * char_1;
}
void v_DWHCIDeviceOvercurrentDetected( float parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	v_DWHCIRegisterRead(long_1);

	int_1 = int_1 + int_2;
	float_3 = float_1 + float_2;
	short_1 = short_1 * short_1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2;
	}
	v__DWHCIRegister(float_1);

	double_1 = double_1;
	v_DWHCIRegister(short_2);

}
void v_USBMIDIDeviceCompletionRoutine( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 + int_2;
	char_2 = char_1 + char_2;
	int_1 = v_USBMIDIDeviceStartRequest(double_1);

	double_1 = double_1 + double_1;
	int_1 = v_USBRequestGetStatus(int_2);

	float_1 = v_USBRequestGetResultLength(long_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_2 + long_2;
		char_3 = char_2 + char_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				if(1)
				{
					float float_2 = 1;
					float float_3 = 1;
					double double_2 = 1;
					double double_3 = 1;
					float_3 = float_2 * float_1;
					double_1 = double_2;
					double_2 = double_3;
				}
			}
		}
	}
	v__USBRequest(unsigned_int_4);

	short_1 = short_1 * short_2;
	v_free();

	short_1 = short_2 * short_2;
	int_2 = int_2 + int_1;
	char_3 = char_2 * char_1;
}
int v_USBMIDIDeviceStartRequest( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	short short_3 = 1;
	long long_4 = 1;
	short short_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_1;
	short_1 = short_1 * short_2;
	double_1 = v_malloc(long_1);

	v_USBRequestSetCompletionRoutine(int_2,char_1);

	long_3 = long_2 * long_2;
	v_USBRequest(double_2);

	short_3 = v_USBDeviceGetHost(long_4);

	short_3 = short_3 * short_4;
	char_2 = v_DWHCIDeviceSubmitAsyncRequest(long_4,char_3);

	short_1 = short_4 + short_4;
	int_3 = int_1 * int_1;
	return int_3;
	v_USBMIDIDeviceCompletionRoutine(short_4);

}
long v_USBMIDIDeviceConfigure()
{
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_7 = 1;
	double_1 = v_malloc(long_1);

	v_StringFormat(float_1,double_1,char_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		v_USBEndpoint2(short_1,int_1,unsigned_int_4);

		int_2 = v_DeviceNameServiceGet();

		long_1 = long_1 + long_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "5p") < 0)
	{
		short_2 = v_USBDeviceGetDescriptor(unsigned_int_5,short_3);

		v_String(long_1);

		v__String(float_1);

		int_2 = int_2 + int_1;
	}
	v_USBDeviceConfigurationError(int_2,double_1);

	unsigned_int_1 = v_USBDeviceConfigure(double_2,-1 );

	v_DeviceNameServiceAddDevice(unsigned_int_6,int_3,char_1);

	char_1 = char_1 + char_1;
	v_LogWrite(long_2,long_1,long_3,long_3,-1 );

	unsigned_int_1 = v_StringGet(char_1);

	int_4 = v_USBMIDIDeviceStartRequest(double_2);

	unsigned_int_6 = unsigned_int_2 + unsigned_int_7;
	return long_2;
}
void v_USBMIDIDevice( long parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char_1 = char_1;
	int_1 = int_1 + int_2;
	long_1 = v_USBMIDIDeviceConfigure();

	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_USBDeviceCopy(float_1,double_1);

	double_2 = double_2 + double_1;
	double_2 = double_1 * double_2;
	int_2 = int_1 * int_1;
}
void v_USBGamePadDeviceCompletionRoutine( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_2;
	double_3 = double_1 + double_1;
	v_free();

	float_1 = float_1 + float_1;
	float_1 = v_USBRequestGetResultLength(long_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		if(1)
		{
			int_1 = int_1;
			short_2 = short_1 * short_1;
		}
	}
	float_1 = v_USBGamePadDeviceDecodeReport(short_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	char_1 = char_1 * char_2;
	v__USBRequest(unsigned_int_2);

	unsigned_int_2 = unsigned_int_1;
	double_3 = v_USBGamePadDeviceStartRequest(short_3);

	short_2 = short_4 + short_1;
	int_1 = v_USBRequestGetStatus(int_2);

}
double v_USBGamePadDeviceStartRequest( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_4 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long_2 = long_1 + long_1;
	char_1 = v_DWHCIDeviceSubmitAsyncRequest(long_3,char_1);

	short_1 = v_USBDeviceGetHost(long_2);

	unsigned_int_1 = unsigned_int_2;
	long_3 = long_3 * long_2;
	float_2 = float_1 + float_2;
	v_USBRequest(double_1);

	long_3 = long_3 * long_4;
	v_USBGamePadDeviceCompletionRoutine(float_1);

	short_2 = short_1 + short_1;
	char_2 = char_1 * char_2;
	double_1 = v_malloc(long_4);

	char_1 = char_3;
	return double_2;
	v_USBRequestSetCompletionRoutine(int_1,char_3);

}
void v_USBGamePadDevicePS3Configure( int parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = v_USBDeviceGetHost(long_1);

	int_1 = v_USBDeviceGetEndpoint0();

	double_1 = double_1 + double_1;
	int_1 = v_DWHCIDeviceControlMessage(int_2,double_2,double_2,short_1,long_1,int_3,char_1,-1 );

	float_3 = float_1 * float_2;
	int_2 = int_4;
	char_2 = char_1 + char_1;
	double_3 = double_3 + double_3;
	double_2 = double_4;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_2 + double_4;
	unsigned_int_1 = unsigned_int_2;
}
int v_BitGetSigned(long parameter_2,long parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short_1 = short_1 + short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "H") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		int_1 = v_BitGetUnsigned(long_1,float_1);

		double_2 = double_1 * double_1;
	}
	return int_1;
}
int v_BitGetUnsigned(long parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
			long long_1 = 1;
			char_2 = char_1 * char_1;
			long_1 = long_1;
		}
		if(1)
		{
			int int_4 = 1;
			int_4 = int_1 + int_1;
			char_2 = char_1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		}
		if(1)
		{
			int int_6 = 1;
			char char_3 = 1;
			int_6 = int_3 * int_5;
			char_3 = char_2 + char_2;
		}
		if(1)
		{
			int int_7 = 1;
			int int_8 = 1;
			double_1 = double_2 + double_1;
			int_7 = int_8;
		}
	}
	return int_5;
}
float v_USBGamePadDeviceDecodeReport( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	char_3 = char_1 * char_2;
	int_1 = v_BitGetUnsigned(long_1,float_1);

	long_3 = long_1 * long_2;
	double_2 = double_1 + double_1;
	char_3 = char_2 * char_2;
	int_3 = int_2 * int_2;
	long_3 = long_2 * long_3;
	return float_2;
	int_2 = v_BitGetSigned(long_3,long_3);

}
void v_USBGamePadDeviceConfigure()
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = v_USBDeviceGetDescriptor(unsigned_int_1,short_1);

	double_1 = v_malloc(long_1);

	v_USBEndpoint2(short_1,int_1,unsigned_int_1);

	int_1 = v_DWHCIDeviceControlMessage(int_2,double_1,double_2,short_2,long_1,int_1,char_1,-1 );

	short_3 = v_USBDeviceGetHost(long_1);

	v_LogWrite(long_1,long_2,long_2,long_3,-1 );

	float_1 = v_USBGamePadDeviceDecodeReport(short_2);

	unsigned_int_1 = v_USBDeviceConfigure(double_3,-1 );

	v_USBGamePadDevicePS3Configure(int_2);

	v_StringFormat(float_1,double_2,char_2);

	v_DeviceNameServiceAddDevice(unsigned_int_1,int_1,char_2);

	unsigned_int_1 = v_StringGet(char_1);

	v__String(float_2);

	double_4 = v_USBGamePadDeviceStartRequest(short_2);

	unsigned_int_2 = unsigned_int_1;
	v_USBDeviceConfigurationError(int_1,double_4);

	int_1 = v_USBDeviceGetEndpoint0();

	v_String(long_2);

	int_1 = v_DeviceNameServiceGet();

}
void v_USBGamePadDevice( short parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	v_USBGamePadDeviceConfigure();

	int_1 = int_1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
	int_4 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	double_3 = v_malloc(long_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	int_2 = int_1 + int_2;
	float_1 = float_1;
	int_2 = int_3 * int_2;
	v_USBDeviceCopy(float_1,double_4);

	float_1 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		short_1 = short_1 + short_1;
		short_3 = short_1 + short_2;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	}
	int_5 = int_3 + int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_5 = int_2 * int_2;
	}
	short_4 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_4;
	double_3 = double_1 * double_2;
}
float v_LAN7800DevicePHYWrite( char parameter_1,float parameter_2,char parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_1 = v_LAN7800DeviceWaitReg(int_1,int_1,int_2,long_1);

	long_1 = v_LAN7800DeviceWriteReg(char_1,int_1,long_2);

	short_1 = short_1 * short_2;
	int_1 = int_3 * int_4;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_6 = int_5 * int_1;
	float_1 = float_2;
	if(1)
	{
	}
	return float_2;
}
long v_LAN7800DevicePHYRead( float parameter_1,char parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_3 = short_1 * short_2;
	short_4 = short_3 * short_1;
	if(1)
	{
	}
	float_1 = v_LAN7800DeviceReadReg(double_1,unsigned_int_1,short_1);

	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_3 = float_1 * float_2;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	long_4 = v_LAN7800DeviceWaitReg(int_1,int_1,int_1,long_2);

	long_5 = v_LAN7800DeviceWriteReg(char_1,int_2,long_3);

	int_3 = int_1;
	float_3 = float_3;
	return long_5;
}
double v_LAN7800DeviceInitPHY( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
	}
	float_1 = v_LAN7800DevicePHYWrite(char_1,float_2,char_1);

	float_2 = float_2 + float_2;
	short_2 = short_1 + short_1;
	long_1 = v_LAN7800DevicePHYRead(float_3,char_1,float_3);

	double_1 = double_1 + double_2;
	return double_3;
}
char v_LAN7800DeviceInitMACAddress()
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_4 = 1;
	long long_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	long_1 = v_LAN7800DeviceWriteReg(char_1,int_1,long_1);

	long_3 = long_1 + long_2;
	int_2 = int_2 + int_3;
	if(1)
	{
	}
	int_1 = v_GetMACAddress(float_1);

	v_LogWrite(long_3,long_4,long_2,long_3,-1 );

	short_1 = short_1 + short_1;
	unsigned_int_1 = v_StringGet(char_1);

	v__String(float_1);

	double_1 = double_1 + double_1;
	v_MACAddress(long_2);

	int_3 = int_4;
	if(1)
	{
	}
	if(1)
	{
	}
	v_String(long_1);

	int_4 = int_2 * int_3;
	long_5 = long_4 * long_2;
	double_3 = double_2 + double_3;
	v_MACAddressFormat(char_2,long_5);

	int_4 = int_5 + int_4;
	v_MACAddressSet(int_2,char_2);

	float_3 = float_2 + float_3;
	return char_3;
}
long v_LAN7800DeviceWaitReg( int parameter_1,int parameter_2,int parameter_3,long parameter_4)
{
	float float_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_5 = 1;
	if(1)
	{
		short short_1 = 1;
		if(1)
		{
			float_1 = float_1;
		}
		short_1 = short_1 + short_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_4;
		long_2 = long_1 + long_1;
		char_2 = char_1 + char_1;
		double_2 = double_1 + double_2;
		float_1 = v_LAN7800DeviceReadReg(double_3,unsigned_int_4,short_3);

		char_3 = char_1 * char_1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	}
	if(1)
	{
		float float_2 = 1;
		double_5 = double_3 * double_4;
		if(1)
		{
			int int_1 = 1;
			if(1)
			{
				char_1 = char_4 * char_5;
			}
			int_3 = int_1 + int_2;
		}
		float_1 = float_1 + float_2;
		if(1)
		{
		}
		if(1)
		{
			double_2 = double_4 + double_5;
		}
	}
	if(1)
	{
		char char_7 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		if(1)
		{
			char char_6 = 1;
			double_2 = double_2 * double_4;
			if(1)
			{
				double_2 = double_1 + double_5;
			}
			double_1 = double_2 + double_4;
			long_1 = long_1 * long_1;
			char_7 = char_1 + char_6;
			v_MsDelay(long_2);

			double_6 = double_2 * double_3;
			double_5 = double_1 * double_1;
		}
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		char_3 = char_2 * char_7;
		if(1)
		{
			double_3 = double_7;
			long_2 = long_2 * long_2;
		}
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_3 = long_4;
			short_2 = short_3 + short_2;
			long_3 = long_1 * long_4;
			char_3 = char_5 + char_4;
		}
		char_7 = char_1;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
		unsigned_int_6 = unsigned_int_1;
		int_3 = int_2;
	}
	double_7 = double_1 * double_4;
	if(1)
	{
		double double_8 = 1;
		double_2 = double_6 * double_8;
	}
	return long_5;
}
long v_LAN7800DeviceWriteReg( char parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = v_DWHCIDeviceControlMessage(int_2,double_1,double_2,short_1,long_1,int_2,char_1,-1 );

	v_LogWrite(long_1,long_1,long_2,long_2,-1 );

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	}
	return long_2;
	short_1 = v_USBDeviceGetHost(long_1);

	int_1 = v_USBDeviceGetEndpoint0();

}
double v_LAN7800DeviceReadWriteReg( float parameter_1,short parameter_2,float parameter_3,float parameter_4)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long_1 = v_LAN7800DeviceWriteReg(char_1,int_1,long_2);

	double_2 = double_1 + double_2;
	double_1 = double_2 * double_2;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	float_1 = v_LAN7800DeviceReadReg(double_2,unsigned_int_1,short_1);

	double_1 = double_1 * double_2;
	return double_2;
}
float v_LAN7800DeviceReadReg( double parameter_1,unsigned int parameter_2,short parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	int_1 = v_DWHCIDeviceControlMessage(int_1,double_1,double_1,short_1,long_1,int_1,char_1,-1 );

	short_1 = v_USBDeviceGetHost(long_2);

	int_1 = v_USBDeviceGetEndpoint0();

	short_3 = short_2 * short_2;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	return float_1;
	v_LogWrite(long_2,long_1,long_2,long_2,-1 );

}
int v_LAN7800DeviceConfigure( short parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double double_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	long long_3 = 1;
	int int_5 = 1;
	double double_4 = 1;
	long long_4 = 1;
	double double_5 = 1;
	int int_6 = 1;
	short_1 = v_USBDeviceGetDescriptor(unsigned_int_1,short_2);

	v_USBEndpoint2(short_2,int_1,unsigned_int_1);

	int_4 = int_2 * int_3;
	long_1 = v_LAN7800DeviceWaitReg(int_4,int_1,int_4,long_1);

	double_2 = double_1 + double_1;
	v_StringFormat(float_1,double_1,char_1);

	char_2 = char_1 + char_1;
	short_1 = short_3 * short_3;
	if(1)
	{
	}
	unsigned_int_1 = v_USBDeviceConfigure(double_1,-1 );

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	float_1 = float_2 * float_3;
	double_1 = v_LAN7800DeviceInitPHY(char_1);

	double_2 = double_2;
	v__String(float_3);

	short_3 = short_3 + short_3;
	v_String(long_1);

	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = v_malloc(long_2);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	char_3 = v_LAN7800DeviceInitMACAddress();

	double_3 = double_1 * double_2;
	unsigned_int_2 = v_StringGet(char_3);

	short_2 = short_3 * short_3;
	short_4 = short_4 + short_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
			float_4 = float_3 + float_3;
		}
		if(1)
		{
			float_2 = v_LAN7800DeviceReadReg(double_2,unsigned_int_2,short_3);

			int_4 = v_DeviceNameServiceGet();

			long_2 = long_1 * long_3;
		}
	}
	if(1)
	{
	}
	v_USBDeviceConfigurationError(int_5,double_4);

	v_DeviceNameServiceAddDevice(unsigned_int_3,int_1,char_3);

	int_5 = int_1 * int_4;
	v_LogWrite(long_2,long_1,long_3,long_4,-1 );

	double_3 = double_1 * double_5;
	int_1 = int_1 * int_5;
	return int_2;
	double_5 = v_LAN7800DeviceReadWriteReg(float_2,short_3,float_3,float_4);

	long_1 = v_LAN7800DeviceWriteReg(char_2,int_6,long_1);

}
void v_LAN7800Device( unsigned int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_1;
	char_3 = char_1 * char_2;
	int_1 = v_LAN7800DeviceConfigure(short_1);

	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 + short_2;
	v_USBDeviceCopy(float_1,double_2);

	short_3 = short_1 * short_2;
	int_2 = int_2 * int_2;
	double_3 = double_1 + double_3;
	double_1 = v_malloc(long_1);

}
int v_SMSC951xDeviceWriteReg( short parameter_1,int parameter_2,float parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int_1 = v_DWHCIDeviceControlMessage(int_1,double_1,double_2,short_1,long_1,int_2,char_1,-1 );

	short_2 = v_USBDeviceGetHost(long_2);

	long_1 = long_3 * long_2;
	return int_3;
	int_2 = v_USBDeviceGetEndpoint0();

}
void v_MACAddressCopyTo( short parameter_1,char parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short_1 = short_1 * short_1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2;
	double_1 = v_memcpy(unsigned_int_2,short_2);

}
void v_MACAddressFormat( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int_1 = int_1 + int_1;
	short_2 = short_1 * short_2;
	v_StringFormat(float_1,double_1,char_1);

	float_2 = float_1 * float_2;
	float_3 = float_1;
}
void v_MACAddressSet( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	float_3 = float_1 * float_2;
	double_2 = v_memcpy(unsigned_int_4,short_1);

}
int v_GetMACAddress( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = v_memcpy(unsigned_int_2,short_1);

	short_1 = short_2;
	double_2 = v_BcmPropertyTagsGetTag(double_3,long_1,char_1,unsigned_int_3);

	double_1 = double_1 * double_3;
	if(1)
	{
		v_MACAddress(long_1);

		double_2 = double_1;
	}
	int_3 = int_1 + int_2;
	v_BcmPropertyTags(double_3);

	short_1 = short_3;
	return int_1;
	v__BcmPropertyTags(short_4);

}
void v_MACAddress( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char_1 = char_2;
	short_3 = short_1 * short_2;
}
unsigned int v_SMSC951xDeviceConfigure( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	return unsigned_int_1;
	v_MACAddress(long_1);

	int_1 = v_GetMACAddress(float_1);

	v_MACAddressSet(int_2,char_1);

	v_LogWrite(long_2,long_3,long_2,long_4,-1 );

	v_String(long_5);

	v_MACAddressFormat(char_1,long_5);

	unsigned_int_1 = v_StringGet(char_1);

	short_1 = v_USBDeviceGetDescriptor(unsigned_int_2,short_1);

	v_USBDeviceConfigurationError(int_3,double_1);

	v__String(float_1);

	double_2 = v_malloc(long_5);

	v_USBEndpoint2(short_1,int_1,unsigned_int_3);

	unsigned_int_2 = v_USBDeviceConfigure(double_1,-1 );

	v_MACAddressCopyTo(short_1,char_2);

	int_4 = v_SMSC951xDeviceWriteReg(short_2,int_2,float_1);

	v_StringFormat(float_2,double_3,char_3);

	v_DeviceNameServiceAddDevice(unsigned_int_3,int_4,char_1);

	int_3 = v_DeviceNameServiceGet();

}
void v_SMSC951xDevice( long parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1 + long_2;
	v_USBDeviceCopy(float_1,double_1);

	int_4 = int_2 + int_3;
	double_1 = v_malloc(long_1);

	double_3 = double_2 * double_3;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = v_SMSC951xDeviceConfigure(double_4);

	double_2 = double_3 * double_1;
}
int v_uspi_char2int( char parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	return int_1;
}
void v_USBMouseDeviceCompletionRoutine( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_1;
	v_free();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = v_USBMouseDeviceStartRequest(short_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	int_1 = v_USBRequestGetStatus(int_2);

	int_2 = v_uspi_char2int(char_1);

	v__USBRequest(unsigned_int_3);

	int_3 = int_2 + int_2;
	if(1)
	{
		long long_2 = 1;
		double_1 = double_1;
		long_1 = long_2;
	}
	float_2 = v_USBRequestGetResultLength(long_3);

	double_3 = double_2 + double_1;
	long_3 = long_3 * long_3;
	long_1 = long_4 + long_5;
	short_1 = short_1 + short_2;
}
float v_USBMouseDeviceStartRequest( short parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short_1 = v_USBDeviceGetHost(long_1);

	double_1 = double_2;
	v_USBRequestSetCompletionRoutine(int_1,char_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_2;
	v_USBMouseDeviceCompletionRoutine(float_1);

	unsigned_int_3 = unsigned_int_4;
	v_USBRequest(double_1);

	char_2 = v_DWHCIDeviceSubmitAsyncRequest(long_2,char_1);

	double_4 = double_3 + double_3;
	double_5 = v_malloc(long_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
	int_3 = int_4;
	return float_1;
}
float v_USBMouseDeviceConfigure( char parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	if(1)
	{
	}
	v_USBEndpoint2(short_1,int_1,unsigned_int_1);

	unsigned_int_1 = v_USBDeviceConfigure(double_1,-1 );

	int_2 = v_USBDeviceGetEndpoint0();

	unsigned_int_2 = v_StringGet(char_1);

	v__String(float_1);

	float_2 = v_USBMouseDeviceStartRequest(short_1);

	short_2 = short_2 * short_2;
	short_1 = v_USBDeviceGetDescriptor(unsigned_int_3,short_1);

	v_USBDeviceConfigurationError(int_1,double_2);

	double_1 = v_malloc(long_1);

	v_LogWrite(long_1,long_2,long_1,long_2,-1 );

	int_1 = v_DWHCIDeviceControlMessage(int_2,double_1,double_3,short_2,long_1,int_2,char_1,-1 );

	v_DeviceNameServiceAddDevice(unsigned_int_4,int_2,char_2);

	int_3 = v_DeviceNameServiceGet();

	float_3 = float_3 * float_1;
	return float_3;
	short_1 = v_USBDeviceGetHost(long_1);

	v_String(long_2);

	v_StringFormat(float_1,double_2,char_2);

}
void v_USBMouseDevice( double parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	char char_1 = 1;
	double_1 = v_malloc(long_1);

	int_1 = int_1 * int_2;
	short_2 = short_1 * short_1;
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2;
	v_USBDeviceCopy(float_1,double_1);

	int_2 = int_2 + int_2;
	long_3 = long_2 + long_1;
	int_2 = int_3 + int_1;
	float_3 = float_2 * float_3;
	long_4 = long_4;
	float_4 = v_USBMouseDeviceConfigure(char_1);

}
void v_KeyMap( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 + char_2;
	double_1 = v_memcpy(unsigned_int_3,short_1);

	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
}
char v_DWHCIDeviceSubmitAsyncRequest( long parameter_1,char parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	long_1 = v_USBEndpointGetType(char_1);

	long_2 = v_USBEndpointIsDirectionIn();

	int_1 = int_1 * int_1;
	int_1 = int_1;
	v_USBRequestSetStatus(double_1,int_1);

	char_1 = v_DWHCIDeviceTransferStageAsync(char_2,long_3,int_1,float_1,-1 );

	long_2 = long_1 * long_4;
	short_3 = short_1 * short_2;
	char_1 = char_2 * char_3;
	char_2 = v_USBRequestGetEndpoint();

	short_3 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_4 = char_3 * char_3;
	return char_2;
	short_2 = v_USBRequestGetBufLen(char_4);

}
void v_TimerCancelKernelTimer( long parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1 + long_1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
void v_CancelKernelTimer( short parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	v_TimerCancelKernelTimer(long_1,long_1);

	double_1 = v_TimerGet();

	double_1 = double_1 * double_1;
}
char v_KeyMapGetString( int parameter_1,char parameter_2,unsigned int parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double_2 = double_2;
		if(1)
		{
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double_3 = double_1 + double_1;
			int_2 = int_1 * int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			double double_4 = 1;
			double double_5 = 1;
			double_5 = double_4 + double_5;
		}
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 * float_1;
	return char_1;
}
char v_KeyMapTranslate( char parameter_1,double parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	float_3 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	if(1)
	{
		char controller_6[2];
		fgets(controller_6 ,2 ,stdin);
		if( strcmp( controller_6, "C") > 0)
		{
			float_2 = float_2 + float_2;
		}
	}
	if(1)
	{
		int int_2 = 1;
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 * int_2;
		}
		if(1)
		{
			int_2 = int_2;
		}
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	double_1 = double_2;
	float_3 = float_1 + float_4;
	double_3 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return char_3;
}
void v_USBKeyboardDeviceGenerateKeyEvent( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	int int_5 = 1;
	long_1 = long_1 * long_1;
	char_1 = v_KeyMapTranslate(char_1,double_1,double_1);

	int_2 = int_1 * int_2;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_2 * char_2;
	double_2 = double_2 + double_2;
	if(1)
	{
		char_1 = char_3 * char_1;
		int_2 = int_1 + int_3;
		int_3 = v_USBKeyboardDeviceGetModifiers(unsigned_int_2);

		char_3 = v_KeyMapGetString(int_3,char_3,unsigned_int_3,char_1);

		int_2 = int_2 * int_3;
	}
	int_1 = int_3 * int_2;
	if(1)
	{
		int_4 = int_1;
	}
	long_2 = long_1;
	int_4 = int_5;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "5+") < 0)
	{
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_3 = double_4;
		}
	}
	int_1 = int_2 + int_4;
}
unsigned int v_USBKeyboardDeviceGetKeyCode( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short_3 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
int v_USBKeyboardDeviceGetModifiers( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_1;
	return int_1;
}
void v_USBKeyboardDeviceCompletionRoutine( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char char_4 = 1;
	unsigned_int_1 = v_USBKeyboardDeviceGetKeyCode(float_1);

	short_1 = short_1;
	int_1 = int_1 * int_2;
	int_2 = v_USBKeyboardDeviceGetModifiers(unsigned_int_2);

	float_1 = float_1 * float_2;
	float_2 = v_USBRequestGetResultLength(long_1);

	v_USBKeyboardDeviceGenerateKeyEvent(short_2,int_2);

	v_CancelKernelTimer(short_3);

	char_2 = char_1 + char_1;
	if(1)
	{
		if(1)
		{
			v__USBRequest(unsigned_int_1);

			char_2 = char_1;
		}
		if(1)
		{
			float_2 = float_3 + float_3;
			if(1)
			{
				long long_2 = 1;
				long_1 = long_1 * long_2;
			}
			if(1)
			{
				int_3 = int_2 + int_3;
			}
			if(1)
			{
				int int_5 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int_3 = v_USBRequestGetStatus(int_1);

				int_3 = int_2 * int_1;
				if(1)
				{
					char_3 = char_2 * char_1;
				}
				int_4 = int_4 * int_5;
				double_3 = double_1 + double_2;
			}
			if(1)
			{
				int int_6 = 1;
				short short_4 = 1;
				int_6 = int_6 + int_1;
				short_1 = short_4 + short_3;
			}
		}
	}
	float_3 = v_USBKeyboardDeviceStartRequest(float_3);

	int_7 = int_1 * int_1;
	char_3 = char_2;
	v_free();

	int_2 = int_8 + int_4;
	float_3 = float_1 * float_2;
	v_StartKernelTimer(double_3,char_4);

}
float v_USBKeyboardDeviceStartRequest( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	int int_3 = 1;
	short_2 = short_1 * short_1;
	double_2 = double_1 + double_2;
	short_3 = v_USBDeviceGetHost(long_1);

	int_2 = int_1 + int_2;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_USBRequest(double_1);

	long_2 = long_2 + long_2;
	char_1 = v_DWHCIDeviceSubmitAsyncRequest(long_2,char_2);

	double_3 = double_3 + double_4;
	v_USBKeyboardDeviceCompletionRoutine(int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return float_1;
	double_3 = v_malloc(long_3);

	v_USBRequestSetCompletionRoutine(int_3,char_1);

}
void v_USBKeyboardDeviceConfigure( char parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	float_2 = float_1 * float_1;
	char controller4vul_1199[2];
	fgets(controller4vul_1199 ,2 ,stdin);
	if( strcmp( controller4vul_1199, "n") < 0)
	{
		unsigned_int_1 = v_USBDeviceConfigure(double_1,uni_para);

	}
	float_3 = float_3 + float_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "b<") < 0)
	{
		double_1 = double_1 * double_1;
	}
}
void v_USBKeyboardDevice( double parameter_1,int uni_para)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	v_USBKeyboardDeviceConfigure(char_1,uni_para);

	double_2 = double_1 + double_1;
	long_2 = long_1 + long_2;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2 + double_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	int_1 = int_2 + int_2;
	int_1 = int_2 * int_1;
	float_2 = float_1 * float_2;
	long_1 = long_2 + long_1;
	char_4 = char_2 * char_3;
	int_3 = int_2 + int_3;
	long_1 = long_3 * long_4;
	int_1 = int_2;
	short_2 = short_1 + short_1;
}
int v_DeviceNameServiceGet()
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_1 = char_1 * char_2;
	return int_1;
}
short v_strcpy( char parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char_2 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double_1 = double_1 + double_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	char_2 = char_2 + char_3;
	double_3 = double_2 * double_2;
	return short_1;
}
void v_DeviceNameServiceAddDevice( unsigned int parameter_1,int parameter_2,char parameter_4)
{
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	short_1 = v_strcpy(char_1,long_1);

	double_3 = double_1 * double_2;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 * int_1;
	double_4 = double_4 * double_2;
	float_2 = float_1 * float_2;
	double_1 = v_malloc(long_1);

	int_3 = int_2 + int_1;
	double_3 = double_3;
	float_2 = v_strlen(double_3);

	short_1 = short_1 * short_2;
	short_3 = short_3 + short_1;
	float_3 = float_2 * float_2;
	double_4 = double_2;
}
char v_uspi_le2be32( int parameter_1)
{
	char char_1 = 1;
	return char_1;
}
int v_DWHCIDeviceTransfer( unsigned int parameter_1,float parameter_2,float parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	float float_2 = 1;
	v_USBRequest(double_1);

	int_1 = int_1 * int_2;
	v__USBRequest(unsigned_int_1);

	double_1 = double_1;
	float_1 = v_USBRequestGetResultLength(long_1);

	short_1 = short_1 * short_1;
	int_1 = int_1 + int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "CI") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	long_3 = long_1 + long_2;
	return int_2;
	short_2 = v_DWHCIDeviceSubmitBlockingRequest(float_2,short_2,-1 );

}
int v_USBBulkOnlyMassStorageDeviceCommand( char parameter_1,char parameter_3,char parameter_5,char parameter_6)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_4 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char_2 = char_1 * char_1;
	int_1 = v_memset(int_1,float_1);

	float_3 = float_1 + float_2;
	int_1 = v_DWHCIDeviceTransfer(unsigned_int_1,float_4,float_3);

	float_3 = float_3 + float_3;
	int_1 = int_2 * int_1;
	short_1 = short_1;
	double_1 = double_2;
	short_1 = v_USBDeviceGetHost(long_1);

	int_1 = int_1 + int_1;
	short_3 = short_2 * short_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = v_memcpy(unsigned_int_2,short_2);

	int_2 = int_2 * int_1;
	double_4 = double_3 * double_2;
	v_LogWrite(long_2,long_2,long_3,long_4,-1 );

	float_2 = float_2;
	int_1 = int_2 * int_3;
	short_1 = short_4 + short_1;
	long_3 = long_4 + long_1;
	if(1)
	{
		int_2 = int_2 + int_4;
	}
	short_3 = short_4 + short_1;
	if(1)
	{
		short_1 = short_4;
		if(1)
		{
			short short_5 = 1;
			short_1 = short_5 * short_3;
		}
	}
	int_5 = int_4 + int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		float_2 = float_2 * float_4;
	}
	if(1)
	{
		double_3 = double_3 + double_2;
	}
	if(1)
	{
	}
	if(1)
	{
		double_4 = double_3;
	}
	return int_1;
}
void v_USBEndpoint2( short parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double_3 = double_1 * double_2;
	int_1 = int_1 * int_2;
	long_1 = v_USBDeviceGetSpeed(short_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_3 = float_1 * float_2;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	char_2 = char_1 + char_1;
	char_1 = char_2 * char_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	int_3 = int_3 * int_4;
	int_5 = int_2 * int_3;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_1 * int_4;
	short_3 = short_1 * short_2;
	double_1 = double_1 + double_2;
	char_1 = char_1 + char_1;
	double_4 = double_1 + double_1;
	if(1)
	{
		char char_3 = 1;
		double double_5 = 1;
		char_2 = char_2 * char_3;
		if(1)
		{
			double_5 = double_4 + double_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			int int_6 = 1;
			double double_6 = 1;
			if(1)
			{
				short short_4 = 1;
				short_2 = short_4 + short_4;
			}
			int_3 = int_3 + int_6;
			double_5 = double_2 * double_6;
			if(1)
			{
				int int_7 = 1;
				int_6 = int_7 + int_2;
			}
		}
	}
}
long v_USBBulkOnlyMassStorageDeviceConfigure( char parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	short short_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "jL") > 0)
		{
			float float_3 = 1;
			v_USBDeviceConfigurationError(int_1,double_1);

			double_1 = v_malloc(long_1);

			char_1 = v_uspi_le2be32(int_2);

			v_String(long_1);

			v_DeviceNameServiceAddDevice(unsigned_int_1,int_1,char_2);

			int_3 = v_DeviceNameServiceGet();

			char_1 = char_1 + char_1;
			v_USBEndpoint2(short_1,int_3,unsigned_int_1);

			v_LogWrite(long_1,long_2,long_1,long_2,-1 );

			v_StringFormat(float_1,double_2,char_1);

			unsigned_int_2 = v_StringGet(char_1);

			v__String(float_2);

			float_3 = float_1 * float_2;
		}
	}
	return long_1;
	short_1 = v_USBDeviceGetDescriptor(unsigned_int_2,short_2);

	unsigned_int_2 = v_USBDeviceConfigure(double_1,-1 );

	int_3 = v_USBBulkOnlyMassStorageDeviceCommand(char_2,char_3,char_1,char_2);

	v_MsDelay(long_3);

}
void v_USBBulkOnlyMassStorageDevice( short parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	long_1 = v_USBBulkOnlyMassStorageDeviceConfigure(char_1);

	float_2 = float_1 + float_1;
	char_2 = char_2 + char_1;
	int_1 = int_1 * int_1;
	char_3 = char_2 * char_2;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1;
	int_2 = int_1;
	double_2 = double_1 + double_1;
	v_USBDeviceCopy(float_3,double_1);

}
float v_USBStandardHubEnumeratePorts( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	short short_2 = 1;
	char char_5 = 1;
	short short_3 = 1;
	long long_8 = 1;
	short short_4 = 1;
	float float_7 = 1;
	long long_9 = 1;
	long long_10 = 1;
	char char_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int_2 = int_1 + int_2;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	double_3 = double_1 + double_2;
	double_3 = double_1 + double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float_1 = float_1 + float_1;
		}
	}
	float_2 = float_1 + float_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		char_1 = char_1 * char_1;
		int_1 = int_1 * int_2;
		double_4 = double_3 + double_4;
		if(1)
		{
			long_1 = long_1 * long_2;
			double_5 = double_5 + double_5;
		}
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		if(1)
		{
			double_2 = double_1 + double_3;
		}
		if(1)
		{
			v_LogWrite(long_1,long_3,long_1,long_2,-1 );

			v_free();

			unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
			float_1 = float_1;
		}
		float_4 = float_3 + float_2;
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
			float_2 = v_USBStandardHubGetDeviceNames(short_1);

			float_6 = float_5 * float_2;
		}
		if(1)
		{
			int_1 = int_2;
			long_1 = long_4 * long_1;
		}
		long_1 = long_3 + long_3;
		if(1)
		{
			int_4 = int_3 + int_3;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		}
		if(1)
		{
			unsigned_int_5 = v_StringGet(char_2);

			unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
		}
		char_3 = char_4;
		double_3 = v_USBDeviceFactoryGetDevice(float_5,-1 );

		float_5 = float_6;
		long_6 = long_5 + long_1;
		unsigned_int_6 = unsigned_int_7;
		if(1)
		{
			char_4 = v_USBDeviceInitialize(int_4);

			unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
			v__String(float_4);

			double_4 = double_2 + double_4;
			unsigned_int_4 = unsigned_int_8 * unsigned_int_4;
			int_3 = int_5 * int_3;
		}
		v_MsDelay(long_5);

		int_3 = int_3;
		unsigned_int_4 = unsigned_int_5;
		float_3 = float_6 + float_1;
		unsigned_int_2 = unsigned_int_7 + unsigned_int_8;
		v__USBDevice(float_3);

		int_3 = int_3 * int_1;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			int_3 = v_USBDeviceGetEndpoint0();

			unsigned_int_4 = unsigned_int_4;
		}
		float_1 = float_5 * float_5;
		if(1)
		{
			short_2 = short_1 + short_1;
			double_1 = double_3 * double_1;
			char_3 = char_1 * char_5;
			if(1)
			{
				int_3 = int_2 * int_2;
				double_3 = v_malloc(long_5);

				long_5 = long_4 + long_6;
			}
			short_3 = short_1;
		}
		if(1)
		{
			long long_7 = 1;
			v_USBDevice(float_3);

			long_3 = long_2 * long_7;
			double_2 = double_5 + double_5;
			short_2 = short_2 * short_2;
			double_3 = double_1;
		}
	}
	long_8 = long_1 * long_6;
	short_4 = short_1 * short_3;
	if(1)
	{
		double double_6 = 1;
		double_5 = double_1 + double_6;
		float_3 = float_6 * float_7;
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			long_1 = long_9 * long_6;
		}
		short_4 = v_USBDeviceGetHost(long_10);

		unsigned_int_5 = unsigned_int_3 * unsigned_int_6;
		char_4 = char_1;
	}
	char_2 = char_5 + char_6;
	int_2 = v_DWHCIDeviceControlMessage(int_2,double_7,double_3,short_1,long_9,int_5,char_4,-1 );

	double_5 = double_3 + double_1;
	float_4 = v_USBDeviceGetAddress(double_2);

	double_9 = double_4 + double_8;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		if(1)
		{
			long_6 = long_10 + long_8;
		}
		if(1)
		{
			int int_6 = 1;
			short_2 = short_3 * short_3;
			long_6 = long_1 * long_9;
			int_6 = int_6 * int_3;
		}
	}
	return float_7;
}
unsigned int v_USBConfigurationParserGetDescriptor( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		int int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		char char_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_5 = 1;
		if(1)
		{
			int_3 = int_2 * int_2;
		}
		char_1 = char_1 * char_2;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3;
		}
		char_2 = char_3 * char_1;
		short_2 = short_1 + short_1;
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		double_4 = double_2 * double_1;
		if(1)
		{
			int int_4 = 1;
			if(1)
			{
				int_4 = int_4 * int_4;
			}
			if(1)
			{
				int_2 = int_4 * int_3;
			}
		}
		if(1)
		{
			char_1 = char_2 * char_3;
		}
		long_1 = long_1 + long_1;
		char_4 = char_3;
		long_2 = long_2 + long_3;
		double_4 = double_5 * double_3;
	}
	return unsigned_int_3;
}
short v_USBDeviceGetDescriptor( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = v_USBConfigurationParserGetDescriptor(float_1,unsigned_int_2);

	int_3 = int_2 + int_3;
	return short_1;
}
long v_USBDeviceGetDeviceDescriptor( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 + char_1;
	return long_1;
}
double v_USBStandardHubConfigure( short parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int_1 = v_USBDeviceGetEndpoint0();

	unsigned_int_1 = unsigned_int_1;
	long_1 = v_USBDeviceGetDeviceDescriptor(long_1);

	v_LogWrite(long_1,long_2,long_2,long_3,-1 );

	int_2 = v_DWHCIDeviceControlMessage(int_1,double_1,double_2,short_1,long_3,int_3,char_1,-1 );

	double_3 = v_malloc(long_2);

	v_free();

	double_1 = double_2 * double_2;
	short_1 = v_USBDeviceGetDescriptor(unsigned_int_1,short_1);

	v_USBDeviceConfigurationError(int_4,double_4);

	unsigned_int_1 = v_USBDeviceConfigure(double_1,-1 );

	int_5 = v_DWHCIDeviceGetDescriptor(char_1,long_3,int_3,int_6,float_1,int_6);

	double_2 = double_2 * double_4;
	return double_2;
	short_2 = v_USBDeviceGetHost(long_4);

	float_1 = v_USBStandardHubEnumeratePorts(long_5);

}
void v_USBEndpointCopy( long parameter_1,double parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	int_2 = int_1 * int_2;
	float_1 = float_1 + float_1;
	float_1 = float_2 * float_3;
	int_1 = int_3 * int_1;
	long_1 = long_1;
	char_1 = char_1;
	double_3 = double_1 + double_2;
	int_3 = int_2 * int_2;
	unsigned_int_1 = unsigned_int_1;
	double_4 = double_2 + double_1;
}
void v_USBStringCopy( float parameter_1,float parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_5 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = v_malloc(long_1);

	float_1 = float_1;
	double_1 = v_memcpy(unsigned_int_1,short_1);

	int_1 = int_2;
	float_3 = float_2 * float_1;
	int_3 = int_1 + int_2;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		long long_2 = 1;
		int int_4 = 1;
		double_2 = double_2 * double_3;
		long_2 = long_1;
		int_4 = int_2 + int_1;
	}
	int_5 = int_3 + int_5;
	v_String2(long_1,short_2);

	unsigned_int_1 = v_StringGet(char_1);

	int_5 = int_6;
	char_2 = char_1 + char_2;
	char_1 = char_3 + char_3;
}
void v_USBDeviceCopy( float parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_3 + int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	double_4 = double_3 * double_1;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	v_USBStringCopy(float_1,float_2);

	char_2 = char_1 + char_1;
	short_3 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	char_4 = char_3 * char_3;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
	short_3 = short_4 * short_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_6;
	v_USBConfigurationParser(double_2);

	double_5 = double_4 + double_2;
	double_1 = double_4 + double_6;
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		double_6 = double_4;
		int_1 = int_4 + int_5;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		short short_5 = 1;
		char char_5 = 1;
		short_1 = short_1 * short_5;
		short_1 = short_3;
		char_1 = char_2 + char_5;
		double_7 = double_2 + double_6;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_7;
		if(1)
		{
			short short_6 = 1;
			short short_7 = 1;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
			double_5 = double_2 * double_1;
			double_7 = v_malloc(long_1);

			double_1 = v_memcpy(unsigned_int_7,short_4);

			short_7 = short_6 + short_7;
		}
	}
	v_USBEndpointCopy(long_1,double_3,unsigned_int_7);

}
void v_USBStandardHub( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float_1 = float_2;
	double_1 = v_USBStandardHubConfigure(short_1);

	int_2 = int_1 + int_1;
	float_3 = float_1 * float_3;
	v_USBDeviceCopy(float_4,double_1);

	int_1 = int_1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		int int_3 = 1;
		short_2 = short_1 * short_2;
		int_3 = int_3 * int_1;
	}
}
int v_GetDevice( short parameter_1,float parameter_2,int uni_para)
{
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	long long_4 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_4 = 1;
	float float_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_6 = 1;
	int int_8 = 1;
	short_1 = short_1 + short_1;
	double_1 = double_1 * double_1;
	float_3 = float_1 * float_2;
	char controller4vul_1198[3];
	fgets(controller4vul_1198 ,3 ,stdin);
	if( strcmp( controller4vul_1198, "un") < 0)
	{
		long long_1 = 1;
		v_USBKeyboardDevice(double_2,uni_para);

		double_1 = double_2 * double_1;
		long_3 = long_1 * long_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		double_3 = double_2 * double_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		long_4 = long_2 * long_2;
		double_3 = double_1 + double_1;
		float_4 = float_3 + float_1;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		long_3 = long_4;
		unsigned_int_4 = unsigned_int_6 + unsigned_int_4;
		int_2 = int_1 + int_3;
		int_4 = int_4 + int_3;
	}
	if(1)
	{
		double double_5 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
		double_5 = double_4 * double_4;
		int_4 = int_4 + int_2;
		float_5 = float_3 * float_3;
	}
	if(1)
	{
		short short_3 = 1;
		int int_5 = 1;
		float_4 = float_2;
		short_3 = short_1 * short_2;
		unsigned_int_4 = unsigned_int_1;
		int_3 = int_4 + int_5;
	}
	if(1)
	{
		float_1 = float_4 + float_4;
		unsigned_int_3 = unsigned_int_4;
		char_3 = char_1 * char_3;
		char_2 = char_4;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		int int_6 = 1;
		int int_7 = 1;
		float_5 = float_5 * float_2;
		unsigned_int_4 = unsigned_int_1;
		unsigned_int_7 = unsigned_int_2 + unsigned_int_2;
		int_4 = int_6 * int_7;
	}
	if(1)
	{
		char_1 = char_2 * char_4;
	}
	char_3 = char_1 * char_2;
	double_4 = double_3 + double_6;
	return int_8;
}
double v_USBDeviceFactoryGetDevice( float parameter_1,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short short_4 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short_3 = short_1 * short_2;
	long_2 = long_1 + long_1;
	char controller4vul_1197[3];
	fgets(controller4vul_1197 ,3 ,stdin);
	if( strcmp( controller4vul_1197, "]-") > 0)
	{
		int_1 = v_GetDevice(short_4,float_1,uni_para);

	}
	int_3 = int_1 * int_2;
	return double_1;
}
void v_StringAppend( unsigned int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int_2 = int_1 * int_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		int int_3 = 1;
		long long_2 = 1;
		int_3 = int_1 + int_2;
		long_1 = long_2 + long_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_2;
	}
	int_1 = int_4 * int_1;
	double_1 = double_2 * double_1;
}
short v_StringGetLength( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	return short_1;
}
int v_StringCompare( float parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_2;
	return int_1;
}
char v_StringSet( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 + int_3;
	}
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 * char_2;
	return char_3;
}
long v_USBDeviceGetName( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	char char_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1 * int_2;
	v_StringFormat(float_1,double_1,char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_4 = int_3 * int_1;
	double_1 = double_2 + double_1;
	double_1 = double_1;
	float_2 = float_2;
	long_3 = long_1 * long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "NW") > 0)
	{
		char_1 = char_1 + char_1;
	}
	float_1 = float_2;
	v_String(long_1);

	char_1 = char_2 + char_2;
	float_3 = float_1 + float_1;
	double_1 = double_3 + double_2;
	if(1)
	{
		float_2 = float_3;
	}
	int_1 = int_3 * int_4;
	double_4 = v_malloc(long_1);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	double_2 = double_1 * double_5;
	float_3 = float_2 + float_4;
	char_3 = v_StringSet(double_6,unsigned_int_5);

	char_1 = char_2;
	return long_3;
}
float v_USBStandardHubGetDeviceNames( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int_2 = int_1 * int_1;
	v_StringAppend(unsigned_int_1,long_1);

	unsigned_int_2 = unsigned_int_1;
	int_1 = int_1 * int_1;
	v_String(long_2);

	v_free();

	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		int_2 = int_2 + int_3;
		double_2 = v_malloc(long_3);

		long_1 = v_USBDeviceGetName(char_1,int_1);

		char_1 = v_StringSet(double_1,unsigned_int_2);

		int_1 = int_2;
		if(1)
		{
			double double_3 = 1;
			if(1)
			{
				char_1 = char_1;
			}
			double_3 = double_2 + double_3;
		}
		unsigned_int_2 = v_StringGet(char_1);

		short_1 = short_1 * short_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		double double_4 = 1;
		int_3 = v_StringCompare(float_1,char_2);

		short_2 = v_StringGetLength(unsigned_int_3);

		v__String(float_1);

		double_1 = double_4 + double_2;
	}
	return float_2;
}
void v__USBString( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_2 = double_1 * double_1;
	int_3 = int_1 * int_2;
	v__String(float_1);

	v_free();

	short_1 = short_1 + short_2;
	double_3 = double_3 * double_3;
	long_3 = long_1 * long_2;
	if(1)
	{
		float float_2 = 1;
		int_1 = int_2 * int_1;
		float_1 = float_1 + float_2;
	}
	int_3 = int_1 + int_3;
}
void v__USBEndpoint( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_2 = double_1 * double_1;
	double_3 = double_3 + double_4;
}
void v__USBConfigurationParser( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_2;
	char_2 = char_1 * char_2;
}
void v__USBDevice( float parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_5 = 1;
	float float_3 = 1;
	long long_6 = 1;
	long long_7 = 1;
	v__USBEndpoint(long_1);

	char_3 = char_1 + char_2;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_1 + short_2;
		int_1 = int_1;
		int_2 = int_2 * int_2;
	}
	if(1)
	{
		long_2 = long_2 * long_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_1 = long_3 + long_4;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		v__USBString(unsigned_int_2);

		float_1 = float_1 + float_2;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
		int_1 = int_2 * int_1;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	long_5 = long_1 * long_2;
	float_3 = float_2 + float_1;
	v_free();

	long_7 = long_5 * long_6;
	v__USBConfigurationParser(short_1);

}
void v_debug_hexdump( float parameter_1,char parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_2;
	short_1 = v_LoggerGet();

	double_1 = double_1 * double_2;
	long_2 = long_1 + long_1;
	v_LoggerWrite(double_1,short_2,int_3,long_3,int_2);

	float_1 = float_1 + float_2;
	int_3 = int_3 + int_3;
}
void v_DebugHexdump( unsigned int parameter_1,double parameter_2,double parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int_1 = int_1;
	v_debug_hexdump(float_1,char_1,long_1);

}
void v_USBConfigurationParserError( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	v_DebugHexdump(unsigned_int_1,double_1,double_2);

	long_1 = long_1 * long_2;
	long_3 = long_3 + long_2;
	long_1 = long_3 + long_4;
	v_LogWrite(long_3,long_5,long_3,long_1,-1 );

	double_2 = double_2 * double_1;
}
void v_USBDeviceConfigurationError( int parameter_1,double parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	v_USBConfigurationParserError(char_1,int_1);

	short_2 = short_1 * short_2;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
}
float v_USBConfigurationParserIsValid()
{
	long long_1 = 1;
	float float_1 = 1;
	long_1 = long_1;
	return float_1;
}
void v_USBConfigurationParser( double parameter_1)
{
}
void v_String2( long parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_6;
}
double v_USBStringGetFromDescriptor( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_6 = 1;
	int int_4 = 1;
	double double_5 = 1;
	float_1 = float_1;
	float_1 = float_1 * float_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	double_3 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	float_2 = float_3 * float_2;
	if(1)
	{
	}
	double_2 = double_2;
	if(1)
	{
	}
	if(1)
	{
		long_1 = long_1 + long_2;
		char_1 = char_2;
		v_free();

		double_3 = v_malloc(long_3);

		unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	int_1 = v_USBDeviceGetEndpoint0();

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	v__String(float_3);

	v_String2(long_2,short_1);

	float_1 = float_1 + float_1;
	short_1 = short_1 + short_1;
	short_2 = short_2;
	short_1 = v_USBDeviceGetHost(long_2);

	short_1 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_4 = 1;
		float float_5 = 1;
		int_1 = v_DWHCIDeviceControlMessage(int_1,double_2,double_4,short_2,long_1,int_1,char_1,-1 );

		float_5 = float_2 * float_4;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_2 + char_2;
		}
		int_2 = int_3;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_5;
	double_3 = double_3 * double_3;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_6;
	float_2 = float_3 + float_6;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
	int_2 = int_1 * int_3;
	int_4 = int_2 * int_2;
	return double_5;
}
int v_USBDeviceGetEndpoint0()
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_2;
	return int_1;
}
short v_USBDeviceGetHost( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int_1 = int_2;
	short_1 = short_1 + short_1;
	return short_1;
}
short v_USBStringGetLanguageID( double parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int_1 = v_USBDeviceGetEndpoint0();

	double_2 = double_1 * double_2;
	double_3 = double_3 * double_2;
	short_1 = v_USBDeviceGetHost(long_1);

	long_2 = long_1 * long_2;
	float_1 = float_1 + float_2;
	if(1)
	{
		int_2 = int_2 * int_3;
	}
	float_1 = float_1;
	if(1)
	{
		int_3 = int_3;
	}
	if(1)
	{
		double double_5 = 1;
		int_3 = int_4;
		double_5 = double_4 + double_4;
		int_2 = int_4 + int_4;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double_4 = v_malloc(long_2);

			int_5 = v_DWHCIDeviceGetDescriptor(char_1,long_3,int_4,int_1,float_1,int_5);

			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			short_1 = short_1 + short_2;
		}
	}
	float_3 = float_3 + float_1;
	short_2 = short_3 * short_3;
	v_free();

	long_1 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_6 = 1;
			double_6 = double_2 + double_6;
		}
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	char_1 = char_2 * char_1;
	return short_1;
}
void v_USBDeviceSetAddress( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_3 = double_1 * double_2;
	short_2 = short_1 + short_2;
	int_2 = int_1 * int_2;
}
unsigned int v_DWHCIDeviceSetAddress( double parameter_1,unsigned int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	v_MsDelay(long_1);

	double_3 = double_1 + double_2;
	return unsigned_int_1;
	int_1 = v_DWHCIDeviceControlMessage(int_2,double_3,double_1,short_1,long_2,int_1,char_1,-1 );

}
void v_USBEndpointSetMaxPacketSize( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_1;
}
int v_DWHCIDeviceGetDescriptor( char parameter_1,long parameter_2,int parameter_3,int parameter_4,float parameter_6,int parameter_7)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short_1 = short_1 + short_1;
	return int_1;
	int_1 = v_DWHCIDeviceControlMessage(int_2,double_1,double_1,short_2,long_1,int_2,char_1,-1 );

}
char v_USBDeviceInitialize( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_5 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int int_7 = 1;
	float float_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_8 = 1;
	double double_7 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_9 = 1;
	short short_6 = 1;
	int_1 = int_1 + int_2;
	long_2 = long_1 * long_2;
	int_4 = int_3 + int_4;
	long_4 = long_3 * long_4;
	float_1 = v_USBConfigurationParserIsValid();

	float_1 = float_1 * float_2;
	short_1 = short_1 + short_1;
	float_1 = float_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		v_LogWrite(long_4,long_2,long_5,long_4,-1 );

		v_free();

		short_2 = short_2 * short_1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		float_3 = float_1 * float_2;
		int_3 = int_2 * int_5;
		char_1 = char_2;
	}
	int_2 = v_DWHCIDeviceGetDescriptor(char_2,long_1,int_6,int_1,float_1,int_6);

	v_USBDeviceSetAddress(unsigned_int_2,short_2);

	short_1 = short_2 + short_2;
	if(1)
	{
		double_1 = double_3 + double_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		v_USBDeviceConfigurationError(int_5,double_1);

		double_1 = double_3 * double_2;
	}
	double_4 = double_2 * double_4;
	if(1)
	{
		double_5 = double_4 + double_5;
	}
	if(1)
	{
		long_4 = long_3 * long_3;
	}
	v_USBConfigurationParser(double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		short_3 = v_USBStringGetLanguageID(double_4);

		int_5 = int_7;
		if(1)
		{
			v_USBEndpointSetMaxPacketSize(char_1,float_4);

			double_4 = double_5;
		}
		if(1)
		{
			int_1 = int_6 + int_7;
		}
	}
	double_3 = double_1 + double_6;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	short_2 = short_4 * short_5;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		float float_5 = 1;
		int_3 = int_7 + int_2;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
		float_1 = float_3 + float_5;
	}
	if(1)
	{
		float float_6 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned_int_4 = v_DWHCIDeviceSetAddress(double_6,unsigned_int_1,double_4);

		float_6 = float_2 * float_1;
		char_4 = char_3 * char_1;
		int_5 = int_2 + int_8;
	}
	int_1 = int_5 + int_4;
	long_5 = long_3 + long_3;
	double_4 = double_7;
	char_1 = char_5 * char_6;
	if(1)
	{
		long long_6 = 1;
		double_4 = v_malloc(long_5);

		long_1 = long_2 * long_1;
		double_5 = v_USBStringGetFromDescriptor(int_8,int_5,unsigned_int_4);

		long_1 = long_2 + long_6;
		int_1 = int_8 + int_1;
	}
	short_4 = short_1 + short_4;
	float_4 = float_4 + float_1;
	int_9 = int_7 * int_3;
	short_6 = short_1 + short_4;
	if(1)
	{
		short_4 = short_3 * short_1;
	}
	return char_6;
}
void v_USBString( char parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	v_String(long_1);

	int_1 = int_1 * int_2;
	double_1 = double_1 * double_1;
	int_1 = int_3 * int_1;
	double_2 = v_malloc(long_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_4 = double_2 + double_3;
	int_1 = int_2 * int_2;
	float_2 = float_1 + float_1;
}
void v_USBEndpoint( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short_1 = short_2;
	double_1 = double_2;
	double_3 = double_1 + double_2;
	long_1 = long_1;
	short_1 = short_2 + short_1;
	float_1 = float_1 + float_1;
	double_1 = double_1;
	long_3 = long_2 + long_2;
	int_1 = int_1 * int_1;
}
void v__USBRequest( unsigned int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double_1 = double_1 * double_1;
	float_2 = float_1 * float_1;
	double_2 = double_1 + double_1;
	short_2 = short_1 * short_2;
	char_1 = char_1 * char_1;
}
float v_USBRequestGetResultLength( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_1;
	int_2 = int_1 + int_2;
	return float_1;
}
long v_USBEndpointIsDirectionIn()
{
	long long_1 = 1;
	long_1 = long_1 * long_1;
	return long_1;
}
int v_USBRequestGetStatus( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_1;
	return int_1;
}
void v_DWHCIDeviceEnableChannelInterrupt( char parameter_1,short parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	v_DWHCIRegister(short_1);

	v_DWHCIRegisterOr(double_1,int_1);

	int_2 = int_2 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_uspi_EnterCritical();

	v_DWHCIRegisterWrite(unsigned_int_2);

	int_1 = int_2 + int_3;
	float_1 = float_1 + float_1;
	int_1 = int_1 + int_1;
	double_1 = double_2 + double_2;
	v_DWHCIRegisterRead(long_1);

	v__DWHCIRegister(float_1);

	long_3 = long_2 + long_2;
	v_uspi_LeaveCritical();

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_3 + int_4;
}
int v_DWHCIFrameSchedulerNoSplitIsOddFrame( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float_1 = float_1;
	float_3 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return int_1;
}
void v_DWHCIFrameSchedulerNoSplitWaitForFrame()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_7 = 1;
	float float_3 = 1;
	long_1 = long_1 * long_1;
	long_2 = long_2 + long_3;
	double_1 = double_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		int int_5 = 1;
		char char_4 = 1;
		if(1)
		{
			int_1 = int_2;
		}
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "t") == 0)
		{
			int_4 = int_3 * int_2;
			char_3 = char_1 * char_2;
			float_2 = float_1 + float_1;
			long_3 = long_3;
			char_3 = char_2 * char_1;
			double_2 = double_2 * double_3;
		}
		if(1)
		{
			int_1 = int_4 + int_4;
			int_5 = int_1 * int_3;
			char_1 = char_4 * char_3;
		}
		if(1)
		{
			float_1 = float_2;
			if(1)
			{
				int_1 = int_5;
			}
			char controller_7[3];
			fgets(controller_7 ,3 ,stdin);
			if( strcmp( controller_7, "|F") < 0)
			{
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_6 = 1;
				double double_5 = 1;
				v_DWHCIRegister(short_1);

				double_4 = double_1 + double_3;
				double_2 = double_4 + double_3;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
				int_7 = int_6 * int_2;
				char_1 = char_2 + char_4;
				v__DWHCIRegister(float_3);

				float_1 = float_1 + float_2;
				v_DWHCIRegisterRead(long_2);

				double_5 = double_2 * double_5;
			}
			char_4 = char_4 + char_3;
		}
	}
	int_1 = int_7 + int_3;
}
void v_DWHCIFrameSchedulerNoSplitTransactionComplete( int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
}
int v_DWHCIFrameSchedulerNoSplitCompleteSplit( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
void v_DWHCIFrameSchedulerNoSplitStartSplit( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_3 = int_1 * int_2;
}
void v__DWHCIFrameSchedulerNoSplit( unsigned int parameter_1)
{
}
void v_DWHCIFrameSchedulerNoSplit( short parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	float float_1 = 1;
	double double_4 = 1;
	int int_6 = 1;
	v_DWHCIFrameSchedulerNoSplitWaitForFrame();

	int_1 = int_1 + int_1;
	v__DWHCIFrameSchedulerNoSplit(unsigned_int_1);

	short_2 = short_1 * short_1;
	int_2 = v_DWHCIFrameSchedulerNoSplitIsOddFrame(int_3);

	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_3 + double_3;
	v_DWHCIFrameSchedulerNoSplitStartSplit(double_3);

	v_DWHCIFrameSchedulerNoSplitTransactionComplete(int_4,short_3);

	char_2 = char_1 * char_1;
	int_5 = v_DWHCIFrameSchedulerNoSplitCompleteSplit(double_3);

	float_1 = float_1 * float_1;
	double_2 = double_4 + double_3;
	int_2 = int_3 * int_3;
	int_2 = int_3 + int_6;
}
long v_DWHCIFrameSchedulerNonPeriodicIsOddFrame( double parameter_1)
{
	long long_1 = 1;
	return long_1;
}
void v_DWHCIFrameSchedulerNonPeriodicWaitForFrame( char parameter_1)
{
}
void v_DWHCIFrameSchedulerNonPeriodicTransactionComplete( long parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float float_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	short short_1 = 1;
	v_usDelay(long_1);

	v_LogWrite(long_1,long_2,long_1,long_3,-1 );

	int_1 = int_1 + int_2;
	int_1 = int_2 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	int_3 = int_2 + int_2;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_3 = float_1 * float_2;
		}
		if(1)
		{
			char char_2 = 1;
			char_1 = char_1 + char_2;
		}
	}
	if(1)
	{
		char controller_6[3];
		fgets(controller_6 ,3 ,stdin);
		if( strcmp( controller_6, "$j") < 0)
		{
			unsigned_int_3 = unsigned_int_4;
			int_1 = int_1;
		}
		if(1)
		{
			char char_3 = 1;
			char_3 = char_3 + char_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		double double_2 = 1;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
		double_1 = double_1 + double_2;
	}
	float_4 = float_3 + float_4;
	unsigned_int_3 = unsigned_int_4;
	short_1 = short_1 * short_1;
}
unsigned int v_DWHCIFrameSchedulerNonPeriodicCompleteSplit( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1;
	v_usDelay(long_1);

	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	short_3 = short_2 + short_2;
	long_2 = long_1 * long_1;
	char_2 = char_1 + char_1;
	float_2 = float_2 * float_1;
	short_4 = short_1;
	unsigned_int_4 = unsigned_int_4;
	int_2 = int_1 + int_2;
	long_3 = long_2 + long_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
	return unsigned_int_6;
}
void v_DWHCIFrameSchedulerNonPeriodicStartSplit( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1 + float_2;
}
void v__DWHCIFrameSchedulerNonPeriodic( char parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = long_1 * long_1;
	int_2 = int_1 + int_1;
	double_3 = double_1 * double_2;
}
void v_DWHCIFrameSchedulerNonPeriodic( char parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_1 = v_DWHCIFrameSchedulerNonPeriodicIsOddFrame(double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	int_1 = int_2 * int_2;
	int_2 = int_3 * int_2;
	v__DWHCIFrameSchedulerNonPeriodic(char_1);

	v_DWHCIFrameSchedulerNonPeriodicWaitForFrame(char_2);

	double_4 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_3 = v_DWHCIFrameSchedulerNonPeriodicCompleteSplit(long_2);

	double_6 = double_5 * double_6;
	float_2 = float_1 + float_2;
	v_DWHCIFrameSchedulerNonPeriodicTransactionComplete(long_2,char_1);

	int_1 = int_3 + int_1;
	v_DWHCIFrameSchedulerNonPeriodicStartSplit(unsigned_int_3);

}
void v_DWHCIFrameSchedulerPeriodicIsOddFrame( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2 + int_2;
}
void v_DWHCIFrameSchedulerPeriodicWaitForFrame( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = int_1 * int_2;
	v_DWHCIRegisterRead(long_1);

	double_1 = double_2;
	v_DWHCIRegister(short_1);

	v__DWHCIRegister(float_1);

	long_3 = long_1 * long_2;
}
void v_DWHCIFrameSchedulerPeriodicTransactionComplete( float parameter_1,char parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_3 = 1;
	short_1 = short_1 * short_2;
	int_3 = int_1 * int_2;
	int_1 = int_3 + int_4;
	char_3 = char_1 + char_2;
	int_2 = int_4 * int_4;
	if(1)
	{
		short_2 = short_2 * short_1;
	}
	char controller4vul_1213[2];
	fgets(controller4vul_1213 ,2 ,stdin);
	if( strcmp( controller4vul_1213, "z") > 0)
	{
		char controller4vul_1214[3];
		fgets(controller4vul_1214 ,3 ,stdin);
		if( strcmp( controller4vul_1214, "7j") < 0)
		{
			double double_2 = 1;
			v_LogWrite(long_1,long_2,long_2,long_1,uni_para);

			double_1 = double_2;
			short_1 = short_1 + short_3;
		}
		if(1)
		{
			long_2 = long_1 + long_1;
		}
	}
	if(1)
	{
		char_1 = char_1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		int int_5 = 1;
		int_1 = int_5 + int_1;
		float_2 = float_1 * float_1;
	}
	char_6 = char_4 * char_5;
	short_3 = short_2;
	double_1 = double_3;
}
unsigned int v_DWHCIFrameSchedulerPeriodicCompleteSplit( int parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int_1 = int_1 * int_1;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	float_1 = float_1 * float_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	double_3 = double_3 + double_2;
	int_2 = int_2 + int_1;
	double_2 = double_3 + double_2;
	int_3 = int_3 * int_2;
	char_3 = char_2 + char_2;
	unsigned_int_5 = unsigned_int_6;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_5;
	return unsigned_int_6;
}
void v_DWHCIFrameSchedulerPeriodicStartSplit( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 + short_2;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
}
void v__DWHCIFrameSchedulerPeriodic( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_3;
}
void v_DWHCIFrameSchedulerPeriodic( float parameter_1,int uni_para)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	v_DWHCIFrameSchedulerPeriodicTransactionComplete(float_1,char_1,uni_para);

	char_3 = char_1 * char_2;
	double_1 = double_2;
	long_1 = long_1;
	double_2 = double_3 * double_1;
	double_3 = double_2 * double_3;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	double_4 = double_3 + double_4;
	double_5 = double_2;
}
char v_USBRequestGetBuffer( float parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_1 * int_1;
	char_1 = char_1;
	return char_2;
}
unsigned int v_USBEndpointGetMaxPacketSize( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float_3 = float_1 + float_2;
	return unsigned_int_1;
}
long v_USBDeviceGetSpeed( short parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	short_1 = short_1 * short_1;
	return long_1;
}
int v_USBEndpointGetDevice()
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
void v_DWHCITransferStageData( long parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_6 = 1;
	short short_5 = 1;
	double double_4 = 1;
	int_3 = int_1 * int_2;
	long_2 = long_1 + long_1;
	long_2 = long_2 * long_1;
	short_1 = short_2;
	char_3 = char_1 * char_2;
	double_1 = double_1 * double_1;
	char_1 = char_1 * char_2;
	double_2 = double_2;
	double_2 = double_1 + double_1;
	long_3 = long_3 * long_4;
	float_2 = float_1 * float_2;
	int_2 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_2;
	char_4 = char_3 + char_2;
	unsigned_int_3 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	double_1 = double_3;
	int_2 = int_4 * int_1;
	char controller4vul_1210[2];
	fgets(controller4vul_1210 ,2 ,stdin);
	if( strcmp( controller4vul_1210, ":") > 0)
	{
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
			float_3 = float_1 * float_3;
		}
		if(1)
		{
			long_1 = long_3 + long_4;
			unsigned_int_6 = unsigned_int_1 * unsigned_int_3;
		}
		float_2 = float_4 + float_1;
		char controller4vul_1211[3];
		fgets(controller4vul_1211 ,3 ,stdin);
		if( strcmp( controller4vul_1211, "en") > 0)
		{
			char controller4vul_1212[3];
			fgets(controller4vul_1212 ,3 ,stdin);
			if( strcmp( controller4vul_1212, "c{") < 0)
			{
				v_DWHCIFrameSchedulerPeriodic(float_4,uni_para);

				unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
			}
			if(1)
			{
				unsigned_int_6 = unsigned_int_7 * unsigned_int_1;
			}
			short_1 = short_3 + short_4;
		}
		if(1)
		{
			char_1 = char_1;
			int_4 = int_1 + int_3;
		}
	}
	if(1)
	{
		int int_5 = 1;
		int_3 = int_5 * int_3;
		double_3 = double_1 + double_1;
		long_1 = long_4;
		float_2 = float_3 * float_3;
		int_6 = int_4;
		unsigned_int_2 = unsigned_int_3;
		unsigned_int_7 = unsigned_int_6 * unsigned_int_3;
		short_1 = short_5 * short_4;
	}
	short_3 = short_5;
	double_3 = double_3 + double_4;
	if(1)
	{
		double double_5 = 1;
		if(1)
		{
			char_4 = char_2 + char_2;
			short_5 = short_2;
		}
		if(1)
		{
			float float_5 = 1;
			float_1 = float_2 * float_5;
			float_3 = float_4 + float_5;
		}
		double_5 = double_4 + double_4;
	}
	if(1)
	{
		if(1)
		{
			double double_6 = 1;
			int_1 = int_2 * int_6;
			double_4 = double_3 * double_1;
			double_6 = double_6 * double_6;
		}
	}
}
char v_DWHCIDeviceAllocateChannel( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_2;
	int_1 = int_1;
	float_1 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_2 + float_2;
			v_uspi_EnterCritical();

			v_uspi_LeaveCritical();

			unsigned_int_1 = unsigned_int_1;
		}
		long_2 = long_1 + long_1;
	}
	unsigned_int_1 = unsigned_int_1;
	return char_1;
}
char v_DWHCIDeviceTransferStageAsync( char parameter_1,long parameter_2,int parameter_3,float parameter_4,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	float float_2 = 1;
	char char_5 = 1;
	char_3 = char_1 * char_2;
	long_2 = long_1 + long_1;
	short_1 = short_1;
	if(1)
	{
	}
	float_1 = float_1;
	char_2 = char_4 + char_3;
	long_2 = long_3 + long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	double_2 = double_1 * double_2;
	if(1)
	{
		short_1 = short_1;
	}
	char controller4vul_1208[2];
	fgets(controller4vul_1208 ,2 ,stdin);
	if( strcmp( controller4vul_1208, "u") > 0)
	{
		int int_2 = 1;
		long long_5 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_6 = 1;
		char controller4vul_1209[2];
		fgets(controller4vul_1209 ,2 ,stdin);
		if( strcmp( controller4vul_1209, "6") < 0)
		{
			double double_3 = 1;
			v_DWHCITransferStageData(long_4,uni_para);

			double_3 = double_1 * double_3;
			double_1 = double_1 * double_2;
			int_2 = int_1 + int_2;
			long_1 = long_1;
			long_5 = long_4;
		}
		int_2 = int_1 * int_1;
		short_1 = short_2;
		short_3 = short_1 * short_2;
		long_6 = long_5 * long_1;
		float_1 = float_1 + float_1;
	}
	float_2 = float_2 * float_2;
	return char_5;
}
void v_DWHCIDeviceCompletionRoutine( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_2;
	double_2 = double_1 * double_1;
	int_3 = int_3 * int_1;
}
void v_USBRequestSetCompletionRoutine( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	long_1 = long_1 + long_2;
	int_3 = int_1 * int_2;
	double_1 = double_1 + double_1;
}
long v_DWHCIDeviceTransferStage( long parameter_1,int parameter_2,double parameter_3,short parameter_4,int uni_para)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	char controller4vul_1207[2];
	fgets(controller4vul_1207 ,2 ,stdin);
	if( strcmp( controller4vul_1207, "s") < 0)
	{
		char_1 = v_DWHCIDeviceTransferStageAsync(char_1,long_1,int_1,float_1,uni_para);

	}
	char_2 = char_1 + char_2;
	float_1 = float_1 * float_1;
	int_1 = int_2 + int_2;
	return long_1;
}
short v_USBRequestGetBufLen( char parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	return short_1;
}
unsigned int v_USBRequestGetSetupData()
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char_1 = char_1 + char_1;
	int_1 = int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return unsigned_int_2;
	long_1 = v_USBEndpointGetType(char_2);

}
short v_DWHCIDeviceSubmitBlockingRequest( float parameter_1,short parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float_2 = float_1 + float_1;
	int_2 = int_1 + int_2;
	long_1 = long_1 + long_1;
	int_2 = int_1 + int_2;
	char controller4vul_1203[2];
	fgets(controller4vul_1203 ,2 ,stdin);
	if( strcmp( controller4vul_1203, "<") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		float_2 = float_1 + float_3;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			if(1)
			{
			}
		}
		char controller4vul_1204[3];
		fgets(controller4vul_1204 ,3 ,stdin);
		if( strcmp( controller4vul_1204, "7G") < 0)
		{
			char controller4vul_1205[3];
			fgets(controller4vul_1205 ,3 ,stdin);
			if( strcmp( controller4vul_1205, "Ua") < 0)
			{
				char controller4vul_1206[3];
				fgets(controller4vul_1206 ,3 ,stdin);
				if( strcmp( controller4vul_1206, "2)") < 0)
				{
					long_1 = v_DWHCIDeviceTransferStage(long_1,int_2,double_1,short_1,uni_para);

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
		int int_3 = 1;
		int_2 = int_1 * int_2;
		int_3 = int_1 * int_2;
		if(1)
		{
		}
	}
	short_1 = short_2 * short_3;
	return short_3;
}
void v_USBRequest( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short_2 = short_1 + short_1;
	double_2 = double_1 * double_1;
	short_3 = short_2 * short_1;
	char_3 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_1;
	double_1 = double_1 * double_3;
	double_1 = double_4 + double_4;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1;
	float_1 = float_1 + float_1;
	long_2 = long_2;
}
int v_DWHCIDeviceControlMessage( int parameter_1,double parameter_2,double parameter_3,short parameter_4,long parameter_5,int parameter_6,char parameter_8,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1;
	int_4 = int_1;
	float_1 = float_1 * float_2;
	float_3 = float_1 * float_1;
	int_2 = int_1 * int_4;
	double_2 = double_1 * double_1;
	int_2 = int_3 * int_3;
	unsigned_int_2 = unsigned_int_2;
	short_2 = short_1 * short_2;
	char controller4vul_1202[2];
	fgets(controller4vul_1202 ,2 ,stdin);
	if( strcmp( controller4vul_1202, "+") < 0)
	{
		int int_5 = 1;
		short_3 = v_DWHCIDeviceSubmitBlockingRequest(float_3,short_1,uni_para);

		int_2 = int_5;
	}
	short_3 = short_1 * short_4;
	long_2 = long_1 + long_2;
	return int_3;
}
char v_DWHCIDeviceSetConfiguration( double parameter_1,short parameter_2,unsigned int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int_3 = int_1 * int_2;
	char controller4vul_1201[3];
	fgets(controller4vul_1201 ,3 ,stdin);
	if( strcmp( controller4vul_1201, "Gk") < 0)
	{
		int_3 = v_DWHCIDeviceControlMessage(int_3,double_1,double_2,short_1,long_1,int_4,char_1,uni_para);

	}
	double_2 = double_1 * double_2;
	return char_1;
}
unsigned int v_USBDeviceConfigure( double parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_1200[3];
	fgets(controller4vul_1200 ,3 ,stdin);
	if( strcmp( controller4vul_1200, "o.") > 0)
	{
		char_1 = v_DWHCIDeviceSetConfiguration(double_2,short_1,unsigned_int_1,uni_para);

	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return unsigned_int_1;
}
void v_USBDevice( float parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	char char_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	long long_3 = 1;
	float float_4 = 1;
	int int_6 = 1;
	double double_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	v_USBEndpoint(short_1);

	int_3 = int_1 + int_2;
	int_3 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_2;
	unsigned_int_2 = v_USBDeviceConfigure(double_1,-1 );

	int_2 = int_4 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
	float_2 = float_1 + float_2;
	float_2 = float_3 * float_2;
	int_2 = int_2 * int_3;
	int_4 = int_1 * int_5;
	char_1 = char_1;
	double_3 = double_1;
	v_USBString(char_2);

	int_1 = int_3 + int_5;
	double_2 = v_malloc(long_3);

	float_2 = float_4 * float_2;
	int_6 = int_3 * int_2;
	double_3 = double_1 * double_4;
	short_1 = short_2 * short_1;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
}
int v_DWHCIDeviceGetPortSpeed( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 * char_1;
	char_2 = char_2;
	v_DWHCIRegister(short_1);

	v_DWHCIRegisterRead(long_1);

	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2;
	v__DWHCIRegister(float_1);

	float_3 = float_2 + float_3;
	int_1 = int_2;
	double_1 = double_1 + double_1;
	int_3 = int_3 + int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	char_3 = char_3 + char_1;
	return int_4;
}
short v_DWHCIRootPortInitialize( double parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_7 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 + char_1;
	short_1 = short_1;
	if(1)
	{
		long_3 = long_1 * long_2;
	}
	long_2 = long_2 * long_1;
	long_4 = long_1 * long_4;
	short_2 = short_2 * short_3;
	long_6 = long_4 + long_5;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		short_1 = short_2;
		double_2 = double_1 + double_2;
	}
	int_1 = int_1 + int_1;
	int_1 = int_1 + int_2;
	double_1 = double_1 + double_3;
	double_3 = double_2 * double_1;
	double_1 = double_1 * double_1;
	long_1 = long_1 * long_7;
	char controller4vul_1195[3];
	fgets(controller4vul_1195 ,3 ,stdin);
	if( strcmp( controller4vul_1195, "u$") < 0)
	{
		float float_1 = 1;
		unsigned int unsigned_int_7 = 1;
		double_2 = double_1 + double_1;
		float_1 = float_1;
		float_1 = float_2 + float_1;
		char controller4vul_1196[3];
		fgets(controller4vul_1196 ,3 ,stdin);
		if( strcmp( controller4vul_1196, "xe") < 0)
		{
			double_4 = v_USBDeviceFactoryGetDevice(float_2,uni_para);

			unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
			int_5 = int_3 + int_4;
			int_3 = int_3 * int_4;
			double_2 = double_2 * double_1;
		}
		unsigned_int_2 = unsigned_int_7 * unsigned_int_7;
	}
	if(1)
	{
		int int_6 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned_int_1 = unsigned_int_6 * unsigned_int_1;
		int_6 = int_3 + int_6;
		unsigned_int_8 = unsigned_int_6 * unsigned_int_4;
		int_4 = int_5 * int_4;
	}
	if(1)
	{
		double double_5 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_9 = 1;
		double_5 = double_5 * double_2;
		long_2 = long_1 + long_3;
		float_4 = float_3 * float_2;
		unsigned_int_9 = unsigned_int_5 * unsigned_int_1;
		unsigned_int_5 = unsigned_int_9;
	}
	return short_1;
}
long v_DWHCIDeviceEnableRootPort( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	int_2 = int_1 * int_2;
	char_3 = char_1 + char_2;
	short_3 = short_1 * short_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "r") < 0)
	{
		float float_2 = 1;
		float_1 = v_DWHCIDeviceWaitForBit(int_2,double_1,short_2,double_1,long_1);

		v__DWHCIRegister(float_1);

		float_1 = float_1 * float_2;
	}
	v_DWHCIRegister(short_4);

	double_2 = double_1;
	double_2 = double_2 * double_3;
	int_4 = int_1 * int_3;
	int_1 = int_4 * int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	v_DWHCIRegisterAnd(long_1,double_3);

	float_3 = float_1 * float_3;
	double_3 = double_1 * double_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_DWHCIRegisterOr(double_4,int_4);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	int_3 = int_2 * int_5;
	v_MsDelay(long_1);

	v_DWHCIRegisterRead(long_1);

	v_DWHCIRegisterWrite(unsigned_int_2);

	float_3 = float_3;
	long_1 = long_1 * long_2;
	return long_2;
}
void v_DWHCIDeviceEnableHostInterrupts()
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_1 = double_1 + double_1;
	v_DWHCIRegisterRead(long_1);

	v_DWHCIRegisterOr(double_1,int_1);

	unsigned_int_1 = unsigned_int_2;
	v_DWHCIDeviceEnableCommonInterrupts(short_1);

	v__DWHCIRegister(float_1);

	int_1 = int_1;
	long_3 = long_2 + long_1;
	double_2 = double_3;
	int_1 = int_2 + int_1;
	v_DWHCIRegister2(int_1,short_2,unsigned_int_1);

	short_4 = short_2 * short_3;
	v_DWHCIRegisterWrite(unsigned_int_3);

	long_2 = long_2 + long_4;
	int_4 = int_3 + int_4;
}
void v_DWHCIDeviceFlushRxFIFO( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	short_1 = short_2;
	v_DWHCIRegisterOr(double_1,int_1);

	v_usDelay(long_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	v_DWHCIRegisterWrite(unsigned_int_1);

	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		double double_2 = 1;
		v__DWHCIRegister(float_1);

		double_2 = double_2 + double_2;
	}
	v_DWHCIRegister2(int_1,short_2,unsigned_int_1);

	float_1 = v_DWHCIDeviceWaitForBit(int_2,double_1,short_1,double_1,long_1);

	int_3 = int_2;
}
void v_TimerusDelay( short parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		v_DelayLoop(short_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		double_1 = double_1 + double_3;
	}
}
void v_usDelay( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int_2 = int_1 * int_1;
	v_TimerusDelay(short_1,char_1);

	double_1 = v_TimerGet();

}
void v_DWHCIDeviceFlushTxFIFO( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_2;
	double_2 = double_2;
	v__DWHCIRegister(float_1);

	double_2 = double_1 + double_3;
	v_usDelay(long_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	float_2 = v_DWHCIDeviceWaitForBit(int_1,double_1,short_1,double_1,long_1);

	double_2 = double_1 * double_2;
	double_2 = double_3;
	if(1)
	{
		v_DWHCIRegisterOr(double_1,int_1);

		v_DWHCIRegisterAnd(long_1,double_2);

		double_2 = double_2 + double_1;
	}
	int_1 = int_1 + int_1;
	v_DWHCIRegister2(int_1,short_1,unsigned_int_2);

	v_DWHCIRegisterWrite(unsigned_int_3);

}
short v_DWHCIDeviceInitHost( int parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	short short_5 = 1;
	long long_4 = 1;
	float float_2 = 1;
	long long_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_7 = 1;
	short_1 = short_1;
	int_1 = int_1;
	long_2 = long_1 + long_2;
	v_DWHCIRegisterWrite(unsigned_int_1);

	float_1 = float_1;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_1;
	int_1 = int_1 + int_2;
	long_1 = long_1 + long_3;
	int_1 = int_1 * int_3;
	v_DWHCIRegister2(int_4,short_3,unsigned_int_2);

	v_DWHCIDeviceFlushTxFIFO(unsigned_int_3,short_4);

	long_1 = long_2 * long_2;
	v_DWHCIRegisterAnd(long_2,double_2);

	short_2 = short_3;
	if(1)
	{
		v_DWHCIRegister(short_5);

		v_DWHCIRegisterRead(long_4);

		v__DWHCIRegister(float_2);

		short_3 = short_2 * short_1;
	}
	if(1)
	{
		short_1 = short_2 + short_4;
	}
	short_4 = short_1;
	long_2 = long_1 * long_2;
	int_3 = int_2 * int_2;
	long_5 = long_4 * long_3;
	double_3 = double_1 * double_1;
	double_2 = double_4 + double_2;
	double_1 = double_3;
	unsigned_int_2 = unsigned_int_3;
	double_3 = double_4 * double_5;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	double_1 = double_5;
	short_6 = short_3;
	v_DWHCIRegisterOr(double_4,int_3);

	double_1 = double_3 * double_4;
	char_2 = char_1 + char_1;
	double_6 = double_4 + double_6;
	short_6 = short_4;
	unsigned_int_3 = unsigned_int_2;
	double_3 = double_5 * double_6;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_4;
	if(1)
	{
		float_2 = float_1;
		short_1 = short_6;
	}
	float_1 = float_1 + float_2;
	v_DWHCIDeviceEnableHostInterrupts();

	double_1 = double_7;
	short_5 = short_1;
	double_6 = double_5 + double_4;
	long_4 = long_6 * long_2;
	double_3 = double_3 * double_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	long_2 = long_2 * long_5;
	long_7 = v_DWHCIRegisterGet(char_2);

	v_DWHCIDeviceFlushRxFIFO(short_6);

	unsigned_int_3 = unsigned_int_3;
	return short_2;
}
void v_DWHCIDeviceEnableGlobalInterrupts( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	int int_5 = 1;
	double double_5 = 1;
	int int_6 = 1;
	v_DWHCIRegisterWrite(unsigned_int_1);

	double_2 = double_1 * double_2;
	double_4 = double_3 + double_3;
	double_2 = double_2 * double_2;
	int_1 = int_2;
	v_DWHCIRegisterRead(long_1);

	float_3 = float_1 + float_2;
	int_4 = int_3 * int_3;
	v_DWHCIRegister(short_1);

	int_5 = int_4 * int_2;
	v_DWHCIRegisterOr(double_5,int_6);

	v__DWHCIRegister(float_1);

}
void v_DWHCIDeviceEnableCommonInterrupts( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_2 = 1;
	int int_5 = 1;
	char_3 = char_1 + char_2;
	v_DWHCIRegisterWrite(unsigned_int_1);

	float_1 = float_1 + float_1;
	char_5 = char_3 * char_4;
	int_2 = int_1 * int_2;
	double_3 = double_1 * double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ">") < 0)
	{
		int_3 = int_2 * int_2;
	}
	v_DWHCIRegister(short_1);

	v_DWHCIRegisterSetAll(float_2);

	float_2 = float_3 + float_4;
	v__DWHCIRegister(float_5);

	int_3 = int_4 + int_2;
	double_5 = double_4 * double_2;
	short_1 = short_1 + short_2;
	v_DWHCIRegister2(int_5,short_2,unsigned_int_1);

}
void v_MsDelay( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double_1 = v_TimerGet();

	double_2 = double_1 * double_1;
	v_TimerMsDelay(unsigned_int_1,float_1);

}
float v_DWHCIDeviceWaitForBit( int parameter_1,double parameter_2,short parameter_3,double parameter_4,long parameter_5)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_2 = 1;
	v_MsDelay(long_1);

	double_3 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	return float_1;
	v_DWHCIRegisterRead(long_2);

}
float v_DWHCIDeviceReset( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	long long_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int_2 = int_1 * int_1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		v_DWHCIRegisterWrite(unsigned_int_2);

		short_1 = short_1 * short_1;
	}
	float_1 = v_DWHCIDeviceWaitForBit(int_1,double_1,short_2,double_2,long_1);

	int_2 = int_2 + int_3;
	v_DWHCIRegisterOr(double_3,int_2);

	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		v_MsDelay(long_2);

		float_1 = float_2;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	v_DWHCIRegister2(int_3,short_2,unsigned_int_2);

	v__DWHCIRegister(float_1);

	char_1 = char_3 + char_3;
	return float_2;
}
void v_DWHCIDeviceInitCore( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_6 = 1;
	short short_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	double double_6 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	long long_2 = 1;
	char char_4 = 1;
	long long_3 = 1;
	int_3 = int_1 + int_2;
	double_2 = double_1 * double_1;
	int_3 = int_2 * int_2;
	v_DWHCIDeviceEnableCommonInterrupts(short_1);

	double_1 = double_2 * double_1;
	double_3 = double_1 * double_3;
	int_3 = int_1 * int_3;
	int_3 = int_3 + int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "u") > 0)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	v_DWHCIRegisterWrite(unsigned_int_1);

	int_5 = int_2 * int_4;
	v__DWHCIRegister(float_1);

	double_3 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_4 = double_2;
	v_DWHCIRegisterOr(double_3,int_6);

	short_2 = short_2;
	short_2 = short_2 + short_2;
	double_4 = double_3 * double_5;
	v_DWHCIRegisterAnd(long_1,double_6);

	int_2 = int_2;
	double_4 = double_6 + double_5;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		short_1 = short_3 * short_2;
		double_3 = double_5 + double_3;
	}
	short_3 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	int_5 = int_6;
	float_2 = v_DWHCIDeviceReset(long_1);

	short_1 = short_4;
	int_1 = int_4;
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
	int_5 = int_4 + int_2;
	double_4 = double_3 + double_3;
	double_6 = double_3 + double_4;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_3;
	double_3 = double_6 + double_5;
	v_DWHCIRegister(short_5);

	v_DWHCIRegisterRead(long_2);

	short_1 = short_4 * short_2;
	double_2 = double_1 * double_4;
	char_1 = char_4;
	double_1 = double_1;
	int_3 = int_4 * int_1;
	v_LogWrite(long_1,long_3,long_3,long_1,-1 );

	long_1 = v_DWHCIRegisterGet(char_1);

}
unsigned int v_DWHCITransferStageDataBeginSplitCycle( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
unsigned int v_DWHCITransferStageDataIsStageComplete()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 * double_2;
	return unsigned_int_1;
}
void v_USBRequestCallCompletionRoutine( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 + double_2;
	short_1 = short_1 * short_1;
	float_2 = float_1 * float_1;
}
void v_DWHCIDeviceFreeChannel( int parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char_2 = char_1 * char_2;
	float_2 = float_1 + float_2;
	int_3 = int_1 * int_2;
	v_uspi_LeaveCritical();

	short_1 = short_1 + short_1;
	float_1 = float_2 + float_1;
	long_1 = long_1 + long_2;
	double_3 = double_1 + double_2;
	v_uspi_EnterCritical();

}
void v__DWHCITransferStageData( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		short_1 = short_1 + short_2;
		v_free();

		double_1 = double_1 * double_1;
		short_2 = short_2 + short_1;
	}
	float_2 = float_1 + float_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
		int_1 = int_1;
	}
	int_3 = int_2 + int_1;
	long_2 = long_3;
	long_1 = long_1 * long_3;
}
void v_uspi_LeaveCritical()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_2 = short_1 + short_2;
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 + int_1;
		}
	}
}
void v_uspi_EnterCritical()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_1 + double_1;
	double_1 = double_1 * double_2;
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 + long_1;
	}
	long_4 = long_2 * long_3;
}
void v_DWHCIDeviceDisableChannelInterrupt( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	double double_5 = 1;
	short short_1 = 1;
	int_3 = int_1 + int_2;
	v_uspi_EnterCritical();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	v_DWHCIRegisterRead(long_1);

	v_DWHCIRegisterWrite(unsigned_int_1);

	double_1 = double_1;
	v_DWHCIRegisterAnd(long_1,double_2);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	long_2 = long_2 + long_2;
	v_uspi_LeaveCritical();

	v__DWHCIRegister(float_1);

	int_1 = int_2 + int_3;
	double_4 = double_2 + double_3;
	char_1 = char_1 * char_1;
	double_1 = double_5 * double_5;
	v_DWHCIRegister(short_1);

}
short v_DWHCITransferStageDataGetResultLen( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	return short_1;
}
void v_USBRequestSetResultLen( unsigned int parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	long_1 = long_1 + long_1;
}
short v_DWHCITransferStageDataIsStatusStage( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short_1 = short_1 + short_1;
	return short_2;
}
void v_DWHCITransferStageDataSetSplitComplete( short parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_2 = long_1 * long_1;
	double_1 = double_1;
	float_1 = float_1 * float_2;
}
void v_DWHCIDeviceTimerHandler( char parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	v_DWHCITransferStageDataSetState(long_1,unsigned_int_1);

	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1;
	long_1 = v_DWHCITransferStageDataGetState();

	char_1 = char_1 + char_1;
	unsigned_int_2 = v_DWHCITransferStageDataIsSplit(unsigned_int_1);

	float_2 = float_2 + float_1;
	char_1 = v_DWHCITransferStageDataGetFrameScheduler(long_1);

	char_3 = char_1 + char_2;
	double_2 = double_1 + double_1;
	v_DWHCITransferStageDataSetSplitComplete(short_1,char_1);

	double_2 = double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ")[") > 0)
	{
		short short_2 = 1;
		short short_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short_3 = short_2 + short_1;
		int_1 = int_2;
		float_1 = float_1 * float_2;
		char_3 = char_2 * char_3;
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		long_1 = long_1;
	}
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_DWHCIDeviceStartTransaction(float_2,unsigned_int_3);

}
double v_TimerGet()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return double_1;
}
short v_TimerStartKernelTimer( int parameter_1,double parameter_2,long parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_6 = 1;
	v_LoggerWrite(double_1,short_1,int_1,long_1,int_1);

	float_1 = float_1 * float_2;
	short_1 = short_2;
	short_2 = v_LoggerGet();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_2 = double_1 + double_1;
		}
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		v_EnterCritical();

		short_4 = short_3 * short_2;
		short_5 = short_1 + short_3;
	}
	double_2 = double_1 * double_1;
	float_3 = float_2 * float_2;
	v_LeaveCritical();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_4 = double_2 + double_3;
	double_3 = double_2 * double_5;
	return short_6;
}
void v_StartKernelTimer( double parameter_1,char parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	short_1 = v_TimerStartKernelTimer(int_1,double_1,long_1);

	double_2 = v_TimerGet();

}
char v_USBRequestGetEndpoint()
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return char_1;
}
short v_USBEndpointGetInterval()
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_2;
	double_2 = double_1 * double_1;
	return short_1;
}
void v_DWHCITransferStageDataSetState( long parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = float_1 * float_1;
	int_1 = int_1 * int_2;
}
void v_USBRequestSetStatus( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_1;
	char_2 = char_1 + char_2;
}
char v_DWHCITransferStageDataGetTransactionStatus( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_3 = char_1 + char_2;
	short_1 = short_1 * short_2;
	return char_1;
}
long v_DWHCITransferStageDataGetState()
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_2;
	return long_1;
}
void v_USBEndpointSkipPID( float parameter_1,char parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long_1 = long_2;
	short_1 = short_1 + short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_3 = long_3 + long_4;
		}
		double_2 = double_1 * double_2;
		if(1)
		{
			double_2 = double_2 + double_1;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_3;
		double_2 = double_3 * double_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
		double_1 = double_1;
	}
}
void v_DWHCITransferStageDataTransactionComplete( float parameter_1,unsigned int parameter_2,long parameter_3,double parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long_3 = long_1 + long_2;
	if(1)
	{
		if(1)
		{
			char char_2 = 1;
			char_3 = char_1 * char_2;
		}
		int_2 = int_1 + int_1;
	}
	if(1)
	{
	}
	int_3 = int_2 * int_3;
	int_4 = int_2 + int_1;
	if(1)
	{
		v_USBEndpointSkipPID(float_1,char_3,char_1);

		long_2 = long_3 * long_2;
	}
	float_2 = float_1 * float_1;
	v_Logger(short_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 * double_2;
	}
	long_3 = long_3;
	int_2 = int_1;
	if(1)
	{
		double double_3 = 1;
		float float_3 = 1;
		double_2 = double_3;
		float_3 = float_1 * float_1;
	}
}
void v_DWHCIRegisterIsSet( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_1;
}
void v_DWHCIDeviceStartTransaction( float parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_7 = 1;
	char_1 = char_1;
	double_2 = double_1 * double_2;
	double_2 = double_3 * double_2;
	v_DWHCITransferStageDataGetChannelNumber(char_2);

	v_DWHCIRegisterRead(long_1);

	v_DWHCIRegisterOr(double_2,int_1);

	double_4 = double_1 + double_2;
	double_5 = double_5 + double_5;
	double_6 = double_5 + double_2;
	float_1 = float_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_3 = 1;
		float float_4 = 1;
		long long_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		v_DWHCIRegisterIsSet(short_1,unsigned_int_3);

		v_DWHCIRegisterWrite(unsigned_int_4);

		double_7 = double_6 + double_1;
		v__DWHCIRegister(float_2);

		unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
		double_7 = double_6 + double_1;
		v_DWHCIRegisterAnd(long_1,double_5);

		float_1 = float_3;
		v_DWHCIRegister(short_2);

		v_DWHCIDeviceStartChannel(char_1,unsigned_int_6);

		float_1 = float_4 * float_4;
		long_2 = long_1 * long_1;
		float_4 = float_2 + float_4;
	}
	if(1)
	{
		long_1 = long_1 + long_3;
	}
	v_DWHCITransferStageDataSetSubState(long_3,short_2);

	v_DWHCIRegisterSet(int_2,float_1);

	unsigned_int_1 = unsigned_int_7;
}
short v_DWHCITransferStageDataIsPeriodic( double parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long_1 = v_USBEndpointGetType(char_1);

	char_2 = char_1;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
char v_DWHCITransferStageDataGetStatusMask( double parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short_1 = v_DWHCITransferStageDataIsPeriodic(double_1);

	int_2 = int_1 * int_1;
	short_1 = short_2 * short_1;
	if(1)
	{
		char_1 = char_1;
	}
	return char_1;
}
void v_DWHCIRegisterSet( int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_2;
	float_1 = float_1;
}
double v_USBEndpointGetNumber()
{
	char char_1 = 1;
	double double_1 = 1;
	char_1 = char_1;
	return double_1;
}
double v_DWHCITransferStageDataGetEndpointNumber( short parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	long_1 = long_1 * long_1;
	double_1 = v_USBEndpointGetNumber();

	int_1 = int_2;
	return double_2;
}
long v_USBEndpointGetType( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_2;
	return long_1;
}
unsigned int v_DWHCITransferStageDataGetEndpointType( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	double double_5 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_2;
	int_1 = int_2;
	int_3 = int_2 + int_3;
	double_1 = double_2;
	double_3 = double_3;
	double_3 = double_4 * double_2;
	double_3 = double_1;
	char_1 = char_1;
	double_1 = double_2 + double_5;
	long_1 = v_USBEndpointGetType(char_2);

	int_1 = int_3 * int_2;
	int_4 = int_1 * int_2;
	return unsigned_int_1;
}
float v_USBDeviceGetAddress( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double_3 = double_1 * double_2;
	return float_1;
}
unsigned int v_DWHCITransferStageDataGetDeviceAddress( unsigned int parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = v_USBDeviceGetAddress(double_1);

	double_2 = double_2 * double_2;
	char_1 = char_1;
	return unsigned_int_1;
}
float v_DWHCITransferStageDataGetSpeed( short parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_1;
	return float_1;
}
int v_DWHCITransferStageDataIsDirectionIn( double parameter_1)
{
	int int_1 = 1;
	int_1 = int_1 * int_1;
	return int_1;
}
void v_DWHCITransferStageDataGetMaxPacketSize( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_1;
}
double v_DWHCITransferStageDataIsSplitComplete( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short_2 = short_1 + short_2;
	char_2 = char_1 * char_2;
	return double_1;
}
unsigned int v_DWHCITransferStageDataGetSplitPosition( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_3 = char_1 + char_2;
	short_2 = short_1 * short_1;
	return unsigned_int_1;
}
unsigned int v_USBDeviceGetHubAddress( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_3 = int_1 + int_2;
	return unsigned_int_1;
}
short v_DWHCITransferStageDataGetHubAddress( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = v_USBDeviceGetHubAddress(unsigned_int_2);

	long_1 = long_2;
	return short_1;
}
void v_USBDeviceGetHubPortNumber( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_1 = long_1 * long_2;
}
double v_DWHCITransferStageDataGetHubPortAddress( int parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	float_1 = float_1 + float_1;
	v_USBDeviceGetHubPortNumber(short_1);

	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	return double_1;
}
unsigned int v_DWHCITransferStageDataIsSplit( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 * long_2;
	return unsigned_int_1;
}
void v_uspi_CleanAndInvalidateDataCacheRange( float parameter_1,long parameter_2)
{
}
long v_DWHCITransferStageDataGetDMAAddress( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_2;
	return long_1;
}
short v_USBEndpointGetNextPID( unsigned int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	return short_1;
}
short v_DWHCITransferStageDataGetPID( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float_2 = float_1 + float_2;
	double_1 = double_1 * double_2;
	float_1 = float_2 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	int_1 = int_2;
	long_1 = long_1 + long_2;
	short_1 = v_USBEndpointGetNextPID(unsigned_int_3,int_1);

	double_5 = double_3 + double_4;
	short_3 = short_1 + short_2;
	int_2 = int_1 * int_1;
	return short_1;
}
short v_DWHCITransferStageDataGetPacketsToTransfer( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short_1 = short_1 * short_2;
	return short_1;
}
double v_DWHCITransferStageDataGetBytesToTransfer( int parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	char_1 = char_1;
	return double_1;
}
void v_DWHCIRegisterOr( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double_1 = double_2;
	int_1 = int_1;
	char_1 = char_1 + char_1;
}
void v_DWHCIRegisterSetAll( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_2 = float_1 + float_1;
	char_2 = char_1 + char_2;
	int_1 = int_1 + int_2;
}
void v_DWHCITransferStageDataSetSubState( long parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_2;
	double_2 = double_1 + double_1;
}
void v_DWHCITransferStageDataGetChannelNumber( char parameter_1)
{
	int int_1 = 1;
	int_1 = int_1 + int_1;
}
void v_DWHCIDeviceStartChannel( char parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	short short_5 = 1;
	float float_4 = 1;
	char char_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_5 = 1;
	float float_7 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_6 = 1;
	long long_2 = 1;
	int int_6 = 1;
	char char_5 = 1;
	float float_9 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_8 = 1;
	double double_9 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 * char_1;
	double_1 = double_2;
	v_DWHCIRegisterSetAll(float_1);

	float_2 = v_DWHCITransferStageDataGetSpeed(short_1);

	short_1 = short_1 + short_1;
	unsigned_int_3 = v_DWHCITransferStageDataIsSplit(unsigned_int_3);

	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	float_1 = float_2 + float_2;
	double_1 = double_1;
	double_3 = double_3;
	int_1 = int_1 + int_2;
	unsigned_int_7 = unsigned_int_2 * unsigned_int_6;
	float_1 = float_1 * float_1;
	v_DWHCIRegisterOr(double_1,int_1);

	unsigned_int_8 = v_DWHCITransferStageDataGetSplitPosition(double_3);

	float_2 = float_1 + float_2;
	unsigned_int_8 = unsigned_int_6;
	int_2 = int_3 * int_1;
	int_2 = int_2 * int_4;
	int_2 = int_2 + int_3;
	v_DWHCIRegisterAnd(long_1,double_2);

	unsigned_int_4 = v_DWHCITransferStageDataGetDeviceAddress(unsigned_int_2);

	unsigned_int_7 = unsigned_int_7 * unsigned_int_1;
	long_1 = long_1;
	short_1 = v_DWHCITransferStageDataGetPID(char_2);

	unsigned_int_9 = unsigned_int_4 * unsigned_int_3;
	float_2 = float_1 + float_2;
	float_2 = float_2 + float_2;
	short_2 = v_DWHCITransferStageDataGetPacketsToTransfer(int_1);

	char_2 = char_2 + char_1;
	if(1)
	{
		char_3 = v_DWHCITransferStageDataGetFrameScheduler(long_1);

		short_4 = short_3 + short_4;
		v_DWHCITransferStageDataGetMaxPacketSize(long_1);

		char_2 = char_2 * char_2;
		v_uspi_CleanAndInvalidateDataCacheRange(float_3,long_1);

		int_3 = int_4 + int_1;
		if(1)
		{
			unsigned_int_9 = unsigned_int_6 + unsigned_int_6;
		}
		int_3 = int_1;
	}
	short_5 = short_2 * short_5;
	float_4 = float_3 * float_2;
	int_3 = int_3 * int_1;
	int_1 = v_DWHCITransferStageDataIsDirectionIn(double_3);

	char_2 = char_4 + char_1;
	unsigned_int_4 = unsigned_int_6;
	float_6 = float_4 + float_5;
	char_3 = v_DWHCITransferStageDataGetStatusMask(double_2);

	int_1 = int_5 + int_5;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_8;
	if(1)
	{
		float float_8 = 1;
		float_4 = float_7 * float_8;
	}
	if(1)
	{
		double_3 = double_3 * double_3;
	}
	if(1)
	{
		v_DWHCIRegister(short_4);

		unsigned_int_2 = unsigned_int_4;
	}
	if(1)
	{
		double_1 = v_DWHCITransferStageDataIsSplitComplete(short_1);

		unsigned_int_6 = unsigned_int_5 + unsigned_int_6;
	}
	unsigned_int_5 = unsigned_int_7 * unsigned_int_2;
	v_DWHCIRegisterRead(long_1);

	double_2 = v_DWHCITransferStageDataGetEndpointNumber(short_5);

	double_6 = double_4 * double_5;
	int_1 = int_4 * int_2;
	double_7 = double_5 * double_2;
	float_5 = float_5 * float_6;
	short_4 = short_6 * short_5;
	long_2 = v_DWHCITransferStageDataGetDMAAddress(float_7);

	int_3 = int_4 + int_1;
	if(1)
	{
		double_5 = v_DWHCITransferStageDataGetBytesToTransfer(int_6);

		int_6 = int_1 + int_1;
		if(1)
		{
			char_4 = char_4 + char_5;
		}
		if(1)
		{
			v__DWHCIRegister(float_9);

			long_1 = long_2 + long_2;
		}
	}
	unsigned_int_5 = v_DWHCITransferStageDataGetEndpointType(int_4);

	short_3 = short_5 * short_6;
	long_3 = long_2 + long_2;
	short_6 = short_6;
	long_4 = long_4;
	v_DWHCIRegisterWrite(unsigned_int_4);

	unsigned_int_2 = unsigned_int_8 * unsigned_int_1;
	double_2 = double_7 * double_2;
	long_4 = long_2;
	v_DWHCITransferStageDataSetSubState(long_1,short_7);

	char_5 = char_2 * char_3;
	unsigned_int_8 = unsigned_int_10 * unsigned_int_9;
	double_1 = double_8 + double_9;
	int_3 = int_4;
	v_DWHCITransferStageDataGetChannelNumber(char_4);

	unsigned_int_4 = unsigned_int_6 * unsigned_int_10;
	short_2 = v_DWHCITransferStageDataGetHubAddress(int_4);

	long_6 = long_5 * long_4;
	v_DWHCIRegister2(int_5,short_2,unsigned_int_5);

	double_7 = v_DWHCITransferStageDataGetHubPortAddress(int_3);

	v_DWHCIRegisterSet(int_1,float_5);

}
unsigned int v_DWHCITransferStageDataGetSubState( long parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1 + long_1;
	return unsigned_int_1;
}
int v_DWHCITransferStageDataGetURB()
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_1;
	int_2 = int_1 * int_1;
	return int_3;
}
char v_DWHCITransferStageDataGetFrameScheduler( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_1 + char_2;
	return char_1;
}
void v_DWHCIDeviceChannelInterruptHandler( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	float float_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_2 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_3 = 1;
	short short_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	int int_5 = 1;
	float float_4 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_5 = 1;
	char char_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_5 = 1;
	long long_6 = 1;
	short short_7 = 1;
	int int_6 = 1;
	char char_7 = 1;
	long long_7 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_9 = 1;
	float float_6 = 1;
	float float_7 = 1;
	double double_12 = 1;
	long long_9 = 1;
	long long_10 = 1;
	int int_8 = 1;
	double_2 = double_1 + double_1;
	char_2 = char_1 * char_1;
	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_3 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_3 * double_1;
	v_DWHCIDeviceFreeChannel(int_1,long_1);

	short_3 = short_3 * short_1;
	float_1 = float_2;
	double_4 = double_2 + double_2;
	float_3 = float_2 + float_2;
	int_1 = int_1;
	long_2 = long_3;
	long_2 = long_3 * long_3;
	if(1)
	{
		long_3 = long_3;
	}
	float_2 = float_2 * float_3;
	v_uspi_CleanAndInvalidateDataCacheRange(float_3,long_3);

	double_5 = double_4 * double_5;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	float_3 = float_2;
	v_StartKernelTimer(double_6,char_3);

	double_7 = double_4 * double_2;
	short_3 = short_3;
	short_3 = v_DWHCITransferStageDataGetResultLen(unsigned_int_2);

	char_3 = char_2 * char_3;
	v_USBRequestSetStatus(double_7,int_2);

	char_2 = char_1 + char_3;
	int_1 = v_DWHCITransferStageDataGetURB();

	float_1 = float_3 * float_1;
	if(1)
	{
		double_8 = double_9;
		float_1 = float_1 * float_3;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "I") == 0)
	{
		int_3 = int_3;
		v_USBRequestCallCompletionRoutine(short_4);

		v_DWHCITransferStageDataSetSplitComplete(short_4,char_2);

		short_2 = short_4;
		unsigned_int_2 = unsigned_int_3;
		long_4 = long_3;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_4;
		}
		short_2 = v_USBEndpointGetInterval();

		short_3 = short_3 + short_3;
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	double_5 = double_5 + double_9;
	float_2 = float_1;
	int_1 = int_3 * int_3;
	v_DWHCITransferStageDataSetState(long_4,unsigned_int_1);

	short_1 = short_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	int_3 = int_4 * int_4;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_2;
	if(1)
	{
		long_3 = v_DWHCITransferStageDataGetDMAAddress(float_2);

		char_2 = char_3 + char_2;
		char_2 = v_DWHCITransferStageDataGetFrameScheduler(long_1);

		v__DWHCITransferStageData(short_5);

		double_4 = double_9 + double_2;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
		float_2 = float_3 + float_1;
		int_4 = int_5 * int_3;
		v_DWHCIDeviceDisableChannelInterrupt(double_4,unsigned_int_3);

		double_5 = double_4;
		float_4 = float_1 + float_4;
		short_6 = short_5 * short_2;
		unsigned_int_7 = unsigned_int_4 + unsigned_int_1;
	}
	long_1 = long_3 + long_1;
	double_4 = double_9 + double_3;
	unsigned_int_4 = unsigned_int_4;
	if(1)
	{
		unsigned_int_5 = unsigned_int_7 + unsigned_int_7;
	}
	int_3 = int_4 + int_2;
	short_4 = v_DWHCITransferStageDataIsStatusStage(double_2);

	float_5 = float_4;
	char_4 = char_2 + char_1;
	if(1)
	{
		char char_6 = 1;
		long_5 = long_2 * long_4;
		v_DWHCITransferStageDataTransactionComplete(float_5,unsigned_int_8,long_4,double_9);

		unsigned_int_5 = unsigned_int_6 * unsigned_int_8;
		int_1 = int_3 + int_2;
		char_6 = char_4 + char_5;
		unsigned_int_8 = unsigned_int_6;
		unsigned_int_8 = unsigned_int_7;
		double_8 = v_DWHCITransferStageDataGetBytesToTransfer(int_4);

		v_LogWrite(long_3,long_1,long_2,long_3,-1 );

		double_9 = double_4;
		long_6 = long_5 + long_6;
		v_DWHCIRegister(short_7);

		int_4 = int_4 * int_1;
	}
	unsigned_int_7 = unsigned_int_7;
	if(1)
	{
		v_DWHCIDeviceStartChannel(char_4,unsigned_int_7);

		char_3 = v_DWHCITransferStageDataGetTransactionStatus(double_7);

		v_USBRequestSetResultLen(unsigned_int_7,float_2);

		unsigned_int_6 = v_DWHCITransferStageDataBeginSplitCycle(long_1);

		int_6 = int_5 + int_6;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_8;
	}
	if(1)
	{
		if(1)
		{
			int int_7 = 1;
			long long_8 = 1;
			double double_11 = 1;
			long_6 = v_DWHCIRegisterGet(char_7);

			double_4 = double_5;
			short_2 = short_3 * short_1;
			short_6 = short_4;
			int_5 = int_6 * int_7;
			long_2 = long_7 + long_8;
			double_10 = double_10 * double_11;
			unsigned_int_6 = v_DWHCITransferStageDataIsStageComplete();

			long_2 = long_2 * long_1;
			unsigned_int_9 = v_DWHCITransferStageDataGetSubState(long_2);

			char_5 = v_USBRequestGetEndpoint();

			unsigned_int_8 = unsigned_int_7 + unsigned_int_1;
		}
		if(1)
		{
			char char_8 = 1;
			short_1 = short_6 * short_2;
			short_1 = short_1 + short_7;
			char_9 = char_8 * char_5;
			unsigned_int_3 = unsigned_int_9 + unsigned_int_9;
		}
		if(1)
		{
			double_3 = double_4 * double_4;
			long_7 = v_DWHCITransferStageDataGetState();

			unsigned_int_6 = unsigned_int_3;
			v_DWHCIDeviceTimerHandler(char_9);

			float_7 = float_4 + float_6;
		}
		double_2 = double_12;
	}
	float_7 = float_5;
	if(1)
	{
		v_DWHCIDeviceStartTransaction(float_5,unsigned_int_5);

		short_7 = short_5;
	}
	v_DWHCIRegisterRead(long_4);

	short_6 = v_DWHCITransferStageDataIsPeriodic(double_9);

	float_3 = float_7 * float_6;
	float_7 = float_3;
	v__DWHCIRegister(float_7);

	long_10 = long_9 * long_5;
	int_8 = int_4 * int_6;
	long_3 = long_6 + long_3;
	unsigned_int_2 = unsigned_int_3;
	double_1 = double_4 + double_9;
	v_free();

	unsigned_int_3 = unsigned_int_6 + unsigned_int_7;
	double_12 = double_4 * double_10;
}
void v_DWHCIRegister2( int parameter_1,short parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_2;
	char_1 = char_1 * char_1;
	double_1 = double_3 * double_3;
	int_1 = int_1 * int_2;
}
void v_DWHCIDeviceInterruptHandler()
{
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double double_4 = 1;
	float float_3 = 1;
	int int_4 = 1;
	float_1 = float_1 + float_1;
	v_DWHCIDeviceChannelInterruptHandler(int_1,char_1);

	double_2 = double_1 * double_2;
	double_1 = double_2;
	double_3 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	v_DWHCIRegisterWrite(unsigned_int_1);

	long_2 = long_1 + long_2;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		char char_6 = 1;
		v_DWHCIRegister2(int_2,short_1,unsigned_int_2);

		char_2 = char_2 + char_3;
		char_5 = char_2 * char_4;
		int_2 = int_1 * int_1;
		char_2 = char_5 * char_6;
		float_2 = float_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				char char_7 = 1;
				unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
				char_6 = char_2 * char_7;
				int_3 = int_2 * int_3;
				v_DWHCIRegister(short_2);

				v_DWHCIRegisterRead(long_2);

				double_2 = double_2 * double_4;
				unsigned_int_3 = unsigned_int_2;
			}
			short_1 = short_2 * short_2;
		}
		int_1 = int_3 + int_1;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "$&") < 0)
	{
		short short_4 = 1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			double double_5 = 1;
			short short_3 = 1;
			long_1 = long_1 * long_2;
			double_4 = double_3 * double_3;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
			double_5 = double_4 * double_2;
			float_3 = float_1 + float_2;
			v__DWHCIRegister(float_3);

			short_3 = short_1 + short_3;
		}
		short_2 = short_4;
	}
	int_4 = int_3 + int_3;
	long_1 = v_DWHCIRegisterGet(char_2);

	int_1 = int_2;
}
int v_InterruptSystemGet()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
void v_ConnectInterrupt( long parameter_1,long parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	v_InterruptSystemConnectIRQ(float_1,char_1,long_1);

	char_2 = char_2;
	int_1 = v_InterruptSystemGet();

}
void v_DWHCIRegisterWrite( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 * float_2;
}
void v_DWHCIRegisterAnd( long parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1 + long_2;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
int v_SetPowerStateOn( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = v_BcmPropertyTagsGetTag(double_1,long_1,char_1,unsigned_int_2);

	int_1 = int_1;
	char_1 = char_1 * char_1;
	v_BcmPropertyTags(double_2);

	short_2 = short_1 * short_1;
	short_3 = short_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ">") < 0)
	{
		short_3 = short_3 + short_2;
	}
	float_1 = float_1 * float_1;
	return int_1;
	v__BcmPropertyTags(short_2);

}
void v__DWHCIRegister( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_3 = long_1 * long_2;
	double_1 = double_2;
}
long v_DWHCIRegisterGet( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1 + double_2;
	return long_1;
}
short v_LoggerGet()
{
	short short_1 = 1;
	return short_1;
}
void v_LogWrite( long parameter_1,long parameter_2,long parameter_3,long parameter_4,int uni_para)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	v_LoggerWriteV(short_1,unsigned_int_1,float_1,float_2,int_1,uni_para);

	double_1 = double_1 * double_1;
	short_1 = short_1;
	short_2 = short_1;
	int_2 = int_1;
}
void v_DWHCIRegisterRead( long parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1 * short_1;
	long_1 = long_1 * long_2;
	double_2 = double_1 * double_1;
}
void v_DWHCIRegister( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_1;
	double_1 = double_1 + double_1;
}
long v_DWHCIDeviceInitialize( long parameter_1,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	int int_6 = 1;
	double double_4 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1;
	int_1 = int_1 + int_1;
	char controller4vul_1194[3];
	fgets(controller4vul_1194 ,3 ,stdin);
	if( strcmp( controller4vul_1194, "fo") > 0)
	{
		short_1 = v_DWHCIRootPortInitialize(double_2,uni_para);

		long_1 = long_1;
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	}
	float_3 = float_1 * float_2;
	int_3 = int_2 * int_1;
	int_4 = int_4 * int_5;
	int_3 = int_4 * int_5;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	int_2 = int_1;
	if(1)
	{
		unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
		int_1 = int_2;
		double_3 = double_2;
	}
	int_1 = int_6 + int_5;
	if(1)
	{
		float float_4 = 1;
		float_4 = float_2;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
		double_4 = double_3;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, ".q") > 0)
	{
		unsigned int unsigned_int_6 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_6;
		double_6 = double_4 + double_5;
		int_8 = int_7 * int_5;
	}
	if(1)
	{
		float float_5 = 1;
		double double_7 = 1;
		double double_8 = 1;
		float_5 = float_1;
		double_3 = double_3;
		double_8 = double_7 * double_8;
	}
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_3;
	return long_1;
}
void v_DWHCIRootPort( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_2 = double_1 * double_2;
	long_1 = long_2;
	short_1 = short_1 * short_2;
	char_2 = char_1 * char_1;
}
void v_DWHCIDevice( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_2 = char_1 * char_2;
	v_DWHCIRootPort(int_1);

	float_1 = float_2;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double_3 = double_2 + double_1;
	}
}
void v_DeviceNameService( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_1;
	int_1 = int_2;
	long_3 = long_1 * long_2;
}
int v_USPiInitialize(int uni_para)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	short short_3 = 1;
	int int_5 = 1;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	double_3 = double_2 * double_1;
	int_3 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	long_1 = long_1 + long_2;
	char controller4vul_1193[2];
	fgets(controller4vul_1193 ,2 ,stdin);
	if( strcmp( controller4vul_1193, "d") > 0)
	{
		long_3 = v_DWHCIDeviceInitialize(long_3,uni_para);

		char_2 = char_1 * char_1;
		short_1 = short_1 * short_1;
		long_2 = long_2;
		short_2 = short_1 * short_2;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	}
	double_1 = double_3 * double_2;
	double_5 = double_4 + double_1;
	double_5 = double_3 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_6 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double_6 = double_6 + double_4;
		unsigned_int_4 = unsigned_int_5;
		short_1 = short_2 * short_2;
		unsigned_int_4 = unsigned_int_3;
		int_4 = int_3 * int_1;
	}
	short_3 = short_3 + short_2;
	int_3 = int_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_2 = 1;
		float float_3 = 1;
		double double_7 = 1;
		int_1 = int_4;
		char_2 = char_2 * char_1;
		long_1 = long_2 + long_2;
		float_3 = float_2 * float_1;
		double_4 = double_5 + double_7;
	}
	int_2 = int_2 + int_5;
	return int_4;
}
void v__ExceptionHandler( char parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_1 = char_1 * char_1;
	float_2 = float_1 * float_2;
}
void v__InterruptSystem( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_1 = long_1 + long_2;
}
void v__Timer()
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_2;
}
void v__Logger( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_1;
	char_3 = char_1 + char_2;
}
void v_DelayLoop( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_1 = char_2;
	double_1 = double_2;
	int_3 = int_1 * int_2;
}
void v_TimerMsDelay( unsigned int parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char_1 = char_1 + char_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		v_DelayLoop(short_1);

		double_2 = double_1 + double_2;
		long_2 = long_1 * long_2;
	}
}
unsigned int v_TimerGetTicks( long parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 + char_1;
	return unsigned_int_1;
}
void v_TimerTuneMsDelay( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	double_1 = double_2;
	double_1 = double_2 * double_1;
	char_2 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_TimerMsDelay(unsigned_int_2,float_1);

	float_2 = float_1 * float_1;
	unsigned_int_2 = v_TimerGetTicks(long_1);

	long_3 = long_2 * long_3;
	char_1 = char_3 * char_1;
}
void v_TimerPollKernelTimers( short parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_1;
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = int_1 + int_1;
		v_EnterCritical();

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				v_LeaveCritical();

				unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
				long_3 = long_1 + long_2;
			}
		}
	}
	int_2 = int_2 * int_3;
}
void v_TimerInterruptHandler()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_5 = 1;
	long_1 = long_1 + long_2;
	int_1 = int_1;
	v_write32(long_1,long_3);

	char_1 = char_1 + char_2;
	short_3 = short_1 * short_2;
	char_2 = char_1 + char_1;
	float_1 = v_read32(long_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 + int_1;
		int_1 = int_2 + int_2;
	}
	v_TimerPollKernelTimers(short_1);

	int_4 = int_3 + int_3;
	double_1 = double_1 * double_2;
	if(1)
	{
		int_3 = int_4 * int_4;
	}
	int_4 = int_1 * int_5;
}
void v_InterruptSystemEnableIRQ( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double_1 = double_1 * double_2;
	long_1 = long_1 + long_1;
	short_1 = short_1 + short_1;
	v_write32(long_2,long_3);

	double_2 = double_3 * double_2;
}
void v_InterruptSystemConnectIRQ( float parameter_1,char parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_3 = 1;
	char_1 = char_2;
	int_1 = int_2;
	v_InterruptSystemEnableIRQ(long_1);

	short_2 = short_1 + short_1;
	double_3 = double_1 + double_2;
	float_1 = float_1 + float_1;
	char_3 = char_2 * char_2;
}
long v_TimerInitialize( double parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float_1 = v_read32(long_1);

	double_1 = double_1 * double_1;
	v_TimerTuneMsDelay(float_2);

	double_1 = double_2 * double_1;
	v_TimerInterruptHandler();

	float_3 = float_1 + float_3;
	short_1 = short_1 * short_2;
	int_3 = int_1 + int_2;
	int_1 = int_3;
	v_InterruptSystemConnectIRQ(float_4,char_1,long_2);

	v_write32(long_1,long_1);

	double_2 = double_2;
	int_2 = int_3 * int_2;
	return long_3;
}
void v_IRQStub()
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1 + char_1;
	double_2 = double_1 + double_2;
	float_1 = float_1 * float_2;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_1;
}
int v_InterruptSystemInitialize()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 * short_1;
	int_2 = int_1 + int_1;
	float_2 = float_1 * float_1;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	double_5 = double_3 * double_4;
	char_2 = char_1 + char_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	int_2 = int_3;
	unsigned_int_4 = unsigned_int_5;
	double_5 = double_2 * double_4;
	v_CleanDataCache();

	v_write32(long_1,long_2);

	double_1 = double_3 * double_3;
	unsigned_int_8 = unsigned_int_6 + unsigned_int_7;
	v_IRQStub();

	float_3 = float_1 * float_1;
	int_4 = int_4 * int_1;
	unsigned_int_7 = unsigned_int_4 + unsigned_int_1;
	float_2 = v_read32(long_3);

	short_2 = short_1 * short_2;
	int_4 = int_1 * int_4;
	return int_3;
}
void v_StringFormatV( short parameter_1,long parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	char_2 = char_1 * char_1;
}
void v__String( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float_1 = float_1;
		char_2 = char_1 + char_2;
	}
}
unsigned int v_StringGet( char parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1;
	if(1)
	{
	}
	return unsigned_int_1;
}
void v_StringFormat( float parameter_1,double parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_2;
	int_1 = int_1;
	int_2 = int_2 * int_2;
	long_1 = long_1 + long_1;
}
void v_String( long parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_1;
	short_1 = short_1 * short_1;
	char_1 = char_1 + char_1;
}
int v_TimerGetTimeString( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double_2 = double_1 + double_1;
	v_EnterCritical();

	double_3 = double_2 * double_2;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	v_String(long_1);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	char_3 = char_1 + char_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	int_2 = int_1 + int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
		v_StringFormat(float_2,double_1,char_4);

		double_1 = double_1;
	}
	double_3 = double_1 + double_4;
	v_LeaveCritical();

	float_1 = float_2 + float_1;
	double_5 = v_malloc(long_1);

	long_3 = long_1 + long_2;
	int_4 = int_1;
	return int_2;
}
void v_ScreenDeviceSetCursorMode( unsigned int parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short_1 = short_1 + short_2;
}
void v_ScreenDeviceCursorMove( long parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	long_2 = long_1 + long_2;
	double_2 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float_1 = v_CharGeneratorGetCharWidth(float_2);

		unsigned_int_1 = unsigned_int_2;
		unsigned_int_3 = unsigned_int_3;
	}
	double_3 = v_CharGeneratorGetCharHeight();

}
void v_ScreenDeviceSetStandoutMode( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double_3 = double_1 * double_2;
	long_1 = long_1;
	int_1 = int_2;
	float_2 = float_1 + float_1;
	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1;
	double_4 = double_3 + double_1;
}
void v_ScreenDeviceInsertMode( unsigned int parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_1 + char_2;
}
void v_ScreenDeviceEraseChars( double parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v_ScreenDeviceEraseChar(int_2,float_1,float_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int_1 = int_2 * int_3;
	}
	float_1 = v_CharGeneratorGetCharWidth(float_2);

}
void v_ScreenDeviceDeleteChars( int parameter_1,char parameter_2)
{
}
void v_ScreenDeviceDeleteLines( long parameter_1,char parameter_2)
{
}
void v_ScreenDeviceCursorUp( unsigned int parameter_1)
{
	double double_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
	}
	double_1 = v_CharGeneratorGetCharHeight();

}
void v_ScreenDeviceInsertLines( char parameter_1,long parameter_2)
{
}
void v_ScreenDeviceReverseScroll( int parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	if(1)
	{
		short short_1 = 1;
		v_ScreenDeviceInsertLines(char_1,long_1);

		short_1 = short_1 + short_1;
	}
}
void v_ScreenDeviceCursorRight( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		v_ScreenDeviceNewLine();

		long_3 = long_1 + long_2;
	}
	float_1 = v_CharGeneratorGetCharWidth(float_2);

}
float v_CharGeneratorGetPixel( char parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float float_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_2;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2;
	}
	if(1)
	{
		int_2 = int_2 + int_2;
	}
	return float_3;
}
void v_ScreenDeviceDisplayChar2( short parameter_1,char parameter_2,int parameter_3,short parameter_4,long parameter_5)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double_1 = v_CharGeneratorGetCharHeight();

			v_ScreenDeviceSetPixel(int_1,double_1,float_1,int_2);

			float_2 = v_CharGeneratorGetPixel(char_1,char_2,char_1,char_3);

			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
	}
	float_2 = v_CharGeneratorGetCharWidth(float_3);

}
void v_ScreenDeviceDisplayChar( float parameter_1,char parameter_2,int uni_para)
{
	char * vul_var;
	char controller4vul_1216[2];
	fgets(controller4vul_1216 ,2 ,stdin);
	if( strcmp( controller4vul_1216, "(") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 893)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		int_1 = int_2;
		int_1 = int_1;
	}
}
int v_memcpyblk(int parameter_2,char parameter_3)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_2 = 1;
	double double_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	short short_6 = 1;
	short_1 = short_1;
	short_1 = short_1;
	float_2 = float_1 * float_2;
	long_3 = long_1 + long_2;
	long_1 = long_2 * long_3;
	if(1)
	{
	}
	short_1 = short_2 + short_3;
	if(1)
	{
		long_4 = long_4 + long_5;
	}
	if(1)
	{
		double double_1 = 1;
		double double_3 = 1;
		if(1)
		{
			double_3 = double_1 * double_2;
		}
		if(1)
		{
			double_4 = double_3 * double_1;
		}
		if(1)
		{
			short_3 = short_2 * short_4;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	int_2 = int_1 + int_2;
	if(1)
	{
		double double_5 = 1;
		double_5 = double_2 * double_4;
	}
	int_3 = int_1 * int_3;
	float_1 = float_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		if(1)
		{
			long_4 = long_3 * long_5;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_5 = unsigned_int_6;
		}
		unsigned_int_2 = unsigned_int_3 * unsigned_int_5;
		short_3 = short_4 * short_2;
		unsigned_int_7 = unsigned_int_4 * unsigned_int_7;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_8;
	}
	short_5 = short_6;
	return int_2;
}
void v_ScreenDeviceScroll( short parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = v_memcpyblk(int_1,char_1);

	double_1 = v_memcpy(unsigned_int_1,short_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	int_2 = int_2 * int_3;
	double_1 = v_CharGeneratorGetCharHeight();

}
void v_ScreenDeviceCursorDown( unsigned int parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	v_ScreenDeviceScroll(short_1);

	double_1 = double_1 + double_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_1 = v_CharGeneratorGetCharHeight();

		double_1 = double_2 * double_3;
		int_1 = int_2;
	}
}
void v_ScreenDeviceCarriageReturn( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_2;
}
void v_ScreenDeviceNewLine()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float_2 = float_1 * float_1;
	v_ScreenDeviceCarriageReturn(float_3);

	v_ScreenDeviceCursorDown(unsigned_int_1);

	char_3 = char_1 + char_2;
}
void v_ScreenDeviceTabulator( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double_1 = double_2;
	v_ScreenDeviceNewLine();

	int_1 = int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "h6") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float_1 = v_CharGeneratorGetCharWidth(float_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
}
void v_ScreenDeviceCursorLeft( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "I") < 0)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 + int_2;
			float_1 = v_CharGeneratorGetCharWidth(float_2);

			double_1 = double_1 + double_1;
		}
	}
	double_1 = v_CharGeneratorGetCharHeight();

}
void v_ScreenDeviceWrite2( short parameter_1,char parameter_2,int uni_para)
{
	float float_1 = 1;
	char char_1 = 1;
	char controller4vul_1215[3];
	fgets(controller4vul_1215 ,3 ,stdin);
	if( strcmp( controller4vul_1215, "YJ") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		v_ScreenDeviceDisplayChar(float_1,char_1,uni_para);

		long_1 = long_1 + long_2;
		short_1 = short_1 * short_1;
		unsigned_int_1 = unsigned_int_1;
		long_2 = long_2 * long_2;
	}
}
int v_ScreenDeviceWrite( char parameter_1,float parameter_2,float parameter_3,int uni_para)
{
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_ScreenDeviceWrite2(short_1,char_1,uni_para);

	short_4 = short_2 * short_3;
	int_2 = int_1 * int_1;
	return int_1;
}
float v_strlen( double parameter_1)
{
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		if(1)
		{
			double double_1 = 1;
			double_2 = double_1 * double_2;
		}
		long_3 = long_1 * long_2;
		double_3 = double_2 * double_2;
	}
	return float_1;
}
void v_LoggerWrite2( long parameter_1,unsigned int parameter_2,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = v_ScreenDeviceWrite(char_1,float_1,float_2,uni_para);

	char_4 = char_2 * char_3;
	double_2 = double_1 * double_1;
}
void v_LoggerWriteV( short parameter_1,unsigned int parameter_2,float parameter_3,float parameter_4,int parameter_5,int uni_para)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	v_LoggerWrite2(long_1,unsigned_int_1,uni_para);

	double_2 = double_1 + double_2;
	float_2 = float_1 + float_2;
	double_1 = double_2 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 + char_2;
	double_1 = double_3 + double_4;
	char_4 = char_2 * char_3;
	int_3 = int_1 * int_2;
	short_2 = short_1 + short_1;
}
void v_LoggerWrite( double parameter_1,short parameter_2,int parameter_3,long parameter_4,int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	v_LoggerWriteV(short_2,unsigned_int_1,float_1,float_2,int_1,-1 );

	unsigned_int_3 = unsigned_int_4;
	long_2 = long_1 * long_1;
}
long v_LoggerInitialize( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_LoggerWrite(double_1,short_1,int_1,long_1,int_1);

	int_2 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return long_1;
}
void v_Logger( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = double_1 + double_1;
	double_4 = double_2 + double_3;
	double_1 = double_3 * double_1;
	double_5 = double_2 * double_2;
}
void v_Timer( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long_1 = long_2;
	short_1 = short_1 * short_1;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2 * long_3;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_5 = 1;
			short short_6 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			char controller_3[3];
			fgets(controller_3 ,3 ,stdin);
			if( strcmp( controller_3, "se") > 0)
			{
				short short_2 = 1;
				int int_1 = 1;
				unsigned int unsigned_int_3 = 1;
				short_1 = short_2 * short_1;
				int_1 = int_1;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
			}
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				short short_3 = 1;
				short short_4 = 1;
				char_3 = char_1 + char_2;
				short_4 = short_3 * short_1;
			}
			short_5 = short_6;
		}
	}
}
void v_InterruptSystem( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	float_2 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		int int_1 = 1;
		double_1 = double_1 + double_1;
		int_2 = int_1 + int_2;
	}
	int_2 = int_2;
}
void v_DataAbortStub()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double_1 = double_1 * double_2;
	int_3 = int_1 + int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	int_4 = int_1 * int_4;
	double_2 = double_2 + double_3;
}
void v_PrefetchAbortStub()
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_2;
	short_2 = short_1 * short_2;
	double_4 = double_2 + double_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_2;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int_1 = int_1 * int_2;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
	}
	if(1)
	{
		int int_3 = 1;
		short short_3 = 1;
		float float_1 = 1;
		int_2 = int_3 + int_3;
		short_3 = short_3 * short_1;
		float_1 = float_1 * float_1;
		int_2 = int_2;
	}
}
void v_UndefinedInstructionStub()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short_3 = short_1 + short_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_5 = 1;
		int int_6 = 1;
		unsigned_int_1 = unsigned_int_1;
		int_1 = int_1 * int_2;
		double_3 = double_1 + double_2;
		int_4 = int_2 + int_3;
		double_2 = double_2 + double_2;
		long_2 = long_1 * long_1;
		char_2 = char_1 + char_2;
		int_3 = int_5 * int_6;
	}
}
void v_ExceptionHandler2()
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_2;
	int_1 = int_2 + int_2;
	v_PrefetchAbortStub();

	char_1 = char_2;
	v_DataAbortStub();

	long_1 = long_1;
	int_1 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_2 + int_2;
	int_3 = int_2 * int_3;
	v_UndefinedInstructionStub();

	float_3 = float_1 * float_2;
	float_3 = float_2;
	double_1 = double_1 + double_1;
	v_CleanDataCache();

	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
}
void v__CharGenerator( short parameter_1)
{
}
void v_free()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long_2 = long_1 * long_1;
	int_1 = int_1 * int_1;
	char_1 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			char char_3 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_1 = 1;
			int_4 = int_2 * int_3;
			char_3 = char_2 * char_2;
			long_3 = long_3 * long_3;
			int_4 = int_1 + int_1;
			char_3 = char_1 * char_2;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
	}
}
void v__BcmFrameBuffer( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	v__BcmMailBox(unsigned_int_1);

	short_2 = short_1 + short_2;
	int_3 = int_1 + int_2;
	int_3 = int_4 + int_4;
	v_free();

	int_4 = int_1 + int_2;
}
void v__ScreenDevice( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v__BcmFrameBuffer(unsigned_int_3);

	int_1 = int_1 + int_2;
	char_1 = char_1 + char_2;
	v_free();

	v__CharGenerator(short_1);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	short_1 = short_2 * short_2;
}
long v_ScreenDeviceGetPixel( int parameter_1,char parameter_2,char parameter_3)
{
	long long_1 = 1;
	if(1)
	{
	}
	return long_1;
}
unsigned int v_CharGeneratorGetUnderline( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1;
	return unsigned_int_1;
}
void v_ScreenDeviceInvertCursor( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				double double_3 = 1;
				double double_4 = 1;
				double_1 = v_CharGeneratorGetCharHeight();

				v_ScreenDeviceSetPixel(int_1,double_2,float_1,int_2);

				double_2 = double_3 * double_4;
			}
			char controller_3[3];
			fgets(controller_3 ,3 ,stdin);
			if( strcmp( controller_3, "1@") > 0)
			{
				float_2 = v_CharGeneratorGetCharWidth(float_3);

				unsigned_int_1 = unsigned_int_1;
			}
		}
	}
	unsigned_int_1 = v_CharGeneratorGetUnderline(int_1);

	long_1 = v_ScreenDeviceGetPixel(int_1,char_1,char_1);

}
void v_ScreenDeviceSetPixel( int parameter_1,double parameter_2,float parameter_3,int parameter_4)
{
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
}
void v_ScreenDeviceEraseChar( int parameter_1,float parameter_2,float parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_1 = 1;
			v_ScreenDeviceSetPixel(int_1,double_1,float_1,int_1);

			short_1 = short_1;
		}
	}
	double_1 = v_CharGeneratorGetCharHeight();

	float_1 = v_CharGeneratorGetCharWidth(float_2);

}
float v_CharGeneratorGetCharWidth( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float_1 = float_1 * float_2;
	return float_3;
}
void v_ScreenDeviceClearLineEnd( short parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_ScreenDeviceEraseChar(int_1,float_1,float_1);

		int_1 = int_1 * int_1;
	}
	float_2 = v_CharGeneratorGetCharWidth(float_1);

}
void v_ScreenDeviceClearDisplayEnd( char parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	v_ScreenDeviceClearLineEnd(short_1);

	double_1 = v_CharGeneratorGetCharHeight();

	double_2 = double_2 + double_1;
}
void v_ScreenDeviceCursorHome( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char_2 = char_1 + char_1;
	char_1 = char_3 + char_2;
}
double v_CharGeneratorGetCharHeight()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1;
	double_3 = double_4;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_4 = 1;
		short short_4 = 1;
		long long_3 = 1;
		char char_1 = 1;
		if(1)
		{
			double double_6 = 1;
			unsigned int unsigned_int_4 = 1;
			int_3 = int_1 + int_2;
			if(1)
			{
				double double_5 = 1;
				long long_2 = 1;
				double_4 = double_5 + double_6;
				long_1 = long_1 + long_2;
			}
			if(1)
			{
				double_6 = double_4 * double_2;
			}
			unsigned_int_4 = unsigned_int_4;
			short_2 = short_1 * short_2;
		}
		if(1)
		{
			int_4 = int_4 * int_4;
		}
		if(1)
		{
			short_2 = short_1 + short_2;
		}
		if(1)
		{
			short short_3 = 1;
			short_1 = short_3 + short_4;
		}
		if(1)
		{
			char char_2 = 1;
			long_3 = long_3 + long_1;
			char_1 = char_2;
		}
		if(1)
		{
			int_3 = int_1;
			double_3 = double_3 * double_4;
		}
		if(1)
		{
			float float_1 = 1;
			long_1 = long_3 + long_1;
			float_1 = float_1 * float_1;
		}
		if(1)
		{
			short short_5 = 1;
			int int_5 = 1;
			short_2 = short_5 * short_4;
			int_5 = int_2;
			int_1 = int_4 + int_4;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char char_3 = 1;
				char char_4 = 1;
				char_1 = char_3 * char_4;
			}
		}
	}
	return double_1;
}
float v_BcmFrameBufferGetPitch( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	return float_1;
}
char v_BcmFrameBufferGetHeight( char parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	short_1 = short_1;
	return char_1;
}
short v_BcmFrameBufferGetWidth( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long_1 = long_2;
	return short_1;
}
double v_BcmFrameBufferGetSize( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return double_1;
}
unsigned int v_BcmFrameBufferGetBuffer( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_2;
	return unsigned_int_1;
}
int v_BcmFrameBufferGetDepth( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_2;
	return int_3;
}
unsigned int v_BcmFrameBufferInitialize( int parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_1 = char_1 * char_1;
	float_2 = float_1 + float_2;
	short_1 = short_1 * short_2;
	v_InvalidateDataCache();

	char_1 = char_2 * char_3;
	v_CleanDataCache();

	unsigned_int_1 = v_BcmMailBoxWriteRead(int_1,int_1);

	double_2 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
}
void v_BcmFrameBufferSetPalette( unsigned int parameter_1,char parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_1 * char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "rJ") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
}
int v_memset(int parameter_2,float parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int_1 = int_1;
	double_2 = double_1 + double_1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_2;
}
void v_BcmFrameBuffer()
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	short short_3 = 1;
	float_2 = float_1 + float_1;
	int_1 = int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		long_1 = long_1;
		short_2 = short_1 * short_1;
		if(1)
		{
			int_2 = int_2 + int_1;
			double_1 = v_BcmPropertyTagsGetTag(double_2,long_1,char_1,unsigned_int_3);

			double_2 = double_1;
			if(1)
			{
				unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
				int_2 = v_memset(int_1,float_2);

				double_1 = double_1;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			v_BcmMailBox(float_1);

			double_3 = double_2 * double_3;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
		}
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
		double_4 = double_1 + double_1;
	}
	if(1)
	{
		int_3 = int_3 * int_1;
	}
	float_2 = float_2;
	float_4 = float_2 + float_3;
	char_2 = char_2;
	v_BcmPropertyTags(double_2);

	double_2 = double_5 + double_1;
	double_7 = double_3 * double_6;
	double_4 = v_malloc(long_1);

	int_3 = int_2 * int_1;
	short_1 = short_1;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_3;
	double_3 = double_7 + double_1;
	char_2 = char_1 + char_3;
	v__BcmPropertyTags(short_3);

}
int v_ScreenDeviceInitialize( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	long long_4 = 1;
	short short_3 = 1;
	long long_5 = 1;
	float float_4 = 1;
	long long_6 = 1;
	unsigned_int_1 = unsigned_int_1;
	v_BcmFrameBuffer();

	long_1 = long_1;
	if(1)
	{
		v_ScreenDeviceClearDisplayEnd(char_1);

		int_1 = int_2;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_1 = v_BcmFrameBufferGetWidth(unsigned_int_3);

	unsigned_int_4 = unsigned_int_4;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = v_BcmFrameBufferInitialize(int_3);

	int_2 = v_BcmFrameBufferGetDepth(long_2);

	double_2 = double_1 * double_1;
	v_ScreenDeviceCursorHome(long_3);

	float_3 = float_1 * float_2;
	double_2 = v_CharGeneratorGetCharHeight();

	short_2 = short_2 * short_2;
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	double_1 = v_malloc(long_4);

	unsigned_int_2 = v_BcmFrameBufferGetBuffer(double_2);

	double_1 = v_BcmFrameBufferGetSize(unsigned_int_3);

	float_1 = v_BcmFrameBufferGetPitch(short_3);

	short_3 = short_3 * short_1;
	v_ScreenDeviceInvertCursor(long_5);

	float_4 = float_1;
	int_1 = int_3;
	v_BcmFrameBufferSetPalette(unsigned_int_4,char_1,short_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	char_1 = v_BcmFrameBufferGetHeight(char_1);

	long_4 = long_6 * long_3;
	return int_2;
}
void v_CharGenerator( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_7 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_8 = 1;
	short short_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char_1 = char_1 + char_2;
	float_1 = float_1;
	int_1 = int_1 * int_2;
	long_3 = long_1 + long_2;
	double_1 = double_1;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_3;
	short_1 = short_1 + short_1;
	long_3 = long_2 + long_1;
	int_5 = int_4 * int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_6 = 1;
			int_3 = int_2 * int_2;
			int_7 = int_5 * int_6;
			int_1 = int_4 * int_3;
		}
		if(1)
		{
			char char_4 = 1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
			double_1 = double_1 + double_1;
			double_1 = double_2;
			double_1 = double_1;
			int_2 = int_4 * int_3;
			char_3 = char_1 + char_1;
			char_3 = char_4 + char_4;
		}
		if(1)
		{
			if(1)
			{
				double double_3 = 1;
				double_2 = double_2 * double_3;
			}
			if(1)
			{
				int_2 = int_7 * int_1;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_2;
			}
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
			}
			if(1)
			{
				double double_4 = 1;
				double_2 = double_4 * double_1;
				double_2 = double_4 + double_2;
			}
		}
	}
	long_5 = long_4 + long_4;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long long_6 = 1;
		char_2 = char_1 * char_3;
		int_5 = int_7 + int_8;
		long_6 = long_5;
	}
	if(1)
	{
		short short_2 = 1;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
		short_2 = short_1 * short_1;
		int_4 = int_8 * int_5;
		short_3 = short_1;
	}
	short_3 = short_3 * short_1;
	int_1 = int_8 * int_8;
	int_7 = int_1;
	unsigned_int_5 = unsigned_int_3;
	float_2 = float_2 * float_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
	unsigned_int_6 = unsigned_int_6 * unsigned_int_7;
}
void v_ScreenDevice( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long_3 = long_1 * long_2;
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_3 + char_1;
	int_2 = int_1 * int_1;
	int_1 = int_2 * int_2;
	short_1 = short_1;
	int_1 = int_3 + int_1;
	long_4 = long_1 + long_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	v_CharGenerator(float_1);

	double_1 = double_1 + double_1;
}
void v__BcmMailBox( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 * char_2;
}
void v__BcmPropertyTags( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v__BcmMailBox(unsigned_int_2);

}
int v_PageTableGetBaseAddress()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_1;
	return int_3;
}
void v_MemorySystemEnableMMU( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	int int_1 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	long_1 = long_3 * long_3;
	int_1 = int_1 * int_1;
	int_1 = v_PageTableGetBaseAddress();

	v_InvalidateDataCache();

}
void v_PageTable( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long_2 = long_1 * long_1;
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		double double_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_6 = 1;
		int int_7 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		int_1 = int_1 * int_1;
		double_2 = double_1 + double_1;
		int_2 = int_3;
		double_4 = double_3 + double_2;
		short_3 = short_1 * short_2;
		int_5 = int_4 * int_4;
		int_2 = int_5 * int_6;
		double_5 = double_3 + double_3;
		char_4 = char_2 * char_3;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
		double_6 = double_6 * double_3;
		int_4 = int_1 + int_3;
		float_2 = float_1 * float_2;
		int_7 = int_7 + int_4;
		double_2 = double_3;
		if(1)
		{
			v_CleanDataCache();

			unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		}
	}
	float_1 = float_2 + float_1;
	float_3 = float_3 + float_4;
}
char v_palloc()
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double_1 = double_1 * double_1;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
		int_2 = int_1 + int_1;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	float_1 = float_1 + float_2;
	return char_1;
}
void v_PageTable2( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "(") > 0)
		{
		}
	}
	char_1 = v_palloc();

	v_CleanDataCache();

}
void v_LeaveCritical()
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1 * long_1;
	double_2 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
			double double_3 = 1;
			double_1 = double_2 * double_3;
		}
	}
}
void v_EnterCritical()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_3 = char_1 * char_2;
	double_2 = double_1 + double_2;
	int_2 = int_1 + int_2;
	if(1)
	{
		char char_4 = 1;
		char_1 = char_4 * char_2;
	}
	float_1 = float_1 * float_2;
}
double v_malloc( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_5 = 1;
	double double_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_2;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_3 = double_2 + double_2;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
			}
			unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		}
	}
	v_LeaveCritical();

	double_2 = double_3 * double_4;
	if(1)
	{
		char_2 = char_1 + char_1;
		char_1 = char_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_4 = 1;
		v_EnterCritical();

		long_3 = long_1 + long_2;
		double_3 = double_1 * double_4;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		long_2 = long_1 + long_4;
		char_3 = char_1 + char_2;
	}
	char_1 = char_1 * char_3;
	double_4 = double_2 + double_4;
	long_5 = long_3 * long_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	return double_5;
}
void v_mem_init( double parameter_1,short parameter_2)
{
	float float_1 = 1;
	float_1 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float_2 = float_2;
	}
}
void v_InvalidateDataCache()
{
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double_2 = double_1 + double_2;
			float_2 = float_1 + float_2;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_1 * short_1;
			short_1 = short_2;
		}
	}
}
int v_BcmMailBoxRead( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	long_1 = long_1 * long_2;
	float_1 = v_read32(long_3);

	char_1 = char_1 + char_2;
	if(1)
	{
		long_1 = long_4;
	}
	double_1 = double_1 * double_2;
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "V5") > 0)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			float float_2 = 1;
			float_2 = float_2 + float_1;
		}
		long_4 = long_3 + long_2;
		if(1)
		{
			double_1 = double_1 + double_1;
		}
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_2 + int_1;
		if(1)
		{
			char_1 = char_1;
		}
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	return int_3;
}
void v_write32( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_3 = double_1 * double_2;
}
void v_BcmMailBoxWrite( float parameter_1,double parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		v_write32(long_1,long_1);

		char_1 = char_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	float_1 = v_read32(long_1);

}
void v_TimerSimpleusDelay( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	float_1 = v_read32(long_1);

	int_2 = int_1 * int_2;
}
void v_TimerSimpleMsDelay( short parameter_1)
{
	int int_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	v_TimerSimpleusDelay(int_1);

}
float v_read32( long parameter_1)
{
	float float_1 = 1;
	return float_1;
}
void v_BcmMailBoxFlush( unsigned int parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "v[") < 0)
		{
			long long_2 = 1;
			long long_3 = 1;
			long long_4 = 1;
			float_1 = v_read32(long_1);

			long_4 = long_2 + long_3;
		}
		v_TimerSimpleMsDelay(short_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
}
unsigned int v_BcmMailBoxWriteRead( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	v_BcmMailBoxFlush(unsigned_int_1);

	int_1 = v_BcmMailBoxRead(double_1);

	int_1 = int_1 + int_1;
	float_1 = float_2;
	double_2 = double_1 + double_2;
	int_2 = int_2 * int_1;
	double_4 = double_2 * double_3;
	short_2 = short_1 * short_1;
	return unsigned_int_1;
	v_BcmMailBoxWrite(float_2,double_2);

}
void v_CleanDataCache()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_1 = 1;
			long_1 = long_1 * long_1;
			double_3 = double_1 + double_2;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double_1 = double_3 + double_3;
			double_1 = double_2 + double_2;
		}
	}
}
double v_memcpy(unsigned int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "B-") > 0)
	{
	}
	return double_1;
}
double v_BcmPropertyTagsGetTag( double parameter_1,long parameter_2,char parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = v_memcpy(unsigned_int_1,short_1);

	unsigned_int_2 = v_BcmMailBoxWriteRead(int_1,int_1);

	v_InvalidateDataCache();

	char_1 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		v_CleanDataCache();

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	return double_1;
}
void v_BcmMailBox( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = int_2;
	short_3 = short_1 + short_2;
}
void v_BcmPropertyTags( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_2;
	double_1 = double_2 * double_3;
	v_BcmMailBox(float_1);

}
void v_MemorySystem( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	double double_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	int int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char_2 = char_1 * char_2;
	double_1 = double_1 * double_2;
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_1 + long_2;
	char_1 = char_2 * char_3;
	v_BcmPropertyTags(double_1);

	double_1 = v_BcmPropertyTagsGetTag(double_3,long_2,char_3,unsigned_int_2);

	long_3 = long_2 + long_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
		v_PageTable(int_1);

		v_MemorySystemEnableMMU(long_2);

		int_1 = int_1 * int_1;
	}
	double_4 = v_malloc(long_5);

	unsigned_int_5 = unsigned_int_6;
	char_3 = char_3;
	double_5 = double_4 * double_3;
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_6 = 1;
		int int_4 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_6;
		char_5 = char_4 * char_2;
		int_2 = int_2 * int_1;
		short_2 = short_1 + short_2;
		v_PageTable2(int_1,int_3);

		long_3 = long_2 + long_6;
		v_mem_init(double_3,short_3);

		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
		int_4 = int_3 + int_3;
	}
	unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
	v__BcmPropertyTags(short_4);

}
int v_USPiEnvInitialize()
{
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	v_MemorySystem(float_1);

	v__ScreenDevice(short_1);

	v_ExceptionHandler2();

	v_InterruptSystem(double_1);

	long_1 = v_LoggerInitialize(double_2,short_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	int_1 = v_ScreenDeviceInitialize(int_1);

	v_Timer(int_1);

	int_2 = v_InterruptSystemInitialize();

	v__Logger(unsigned_int_1);

	v__ExceptionHandler(char_1);

	float_1 = float_2 + float_3;
	v_Logger(short_2);

	long_2 = v_TimerInitialize(double_2);

	v__Timer();

	v__InterruptSystem(char_1);

	int_2 = int_2 + int_3;
	return int_3;
	v_ScreenDevice(char_1);

}
int main()
{
	int uni_para =893;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char controller4vul_1192[2];
	fgets(controller4vul_1192 ,2 ,stdin);
	if( strcmp( controller4vul_1192, "?") > 0)
	{
		int_1 = v_USPiInitialize(uni_para);

	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		float_1 = float_1;
	}
	int_3 = int_2 * int_1;
	long_2 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	return int_3;
}

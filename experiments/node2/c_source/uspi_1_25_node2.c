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

void v_ScreenDeviceRotor( long parameter_1,long parameter_2,char parameter_3);
float v_USPiEnvGetScreen();
char v_KeyPressedHandler( double parameter_1);
void v_USBKeyboardDeviceRegisterKeyPressedHandler( long parameter_1,char parameter_2);
void v_USPiKeyboardRegisterKeyPressedHandler( float parameter_1);
int v_USPiKeyboardAvailable();
void v_USPiEnvClose();
int v_strcmp( float parameter_1,long parameter_2);
float v_DeviceNameServiceGetDevice( char parameter_1,short parameter_2,long parameter_3);
void v__DeviceNameService( int parameter_1);
void v__DWHCIRootPort( int parameter_1);
void v__DWHCIDevice();
void v_DWHCIDeviceDisableRootPort( short parameter_1);
long v_DWHCIDeviceOvercurrentDetected( int parameter_1);
void v_USBMIDIDeviceCompletionRoutine( long parameter_1);
short v_USBMIDIDeviceStartRequest();
float v_USBMIDIDeviceConfigure( double parameter_1);
void v_USBMIDIDevice( long parameter_1);
void v_USBGamePadDeviceCompletionRoutine( unsigned int parameter_1);
short v_USBGamePadDeviceStartRequest( long parameter_1);
void v_USBGamePadDevicePS3Configure( short parameter_1);
char v_BitGetSigned(short parameter_2,char parameter_3);
long v_BitGetUnsigned(char parameter_2,double parameter_3);
short v_USBGamePadDeviceDecodeReport( unsigned int parameter_1);
short v_USBGamePadDeviceConfigure();
void v_USBGamePadDevice( unsigned int parameter_1);
void v_LAN7800DevicePHYWrite( long parameter_1,unsigned int parameter_2,unsigned int parameter_3);
char v_LAN7800DevicePHYRead( double parameter_1,short parameter_2,int parameter_3,int uni_para);
double v_LAN7800DeviceInitPHY( int parameter_1,int uni_para);
unsigned int v_LAN7800DeviceInitMACAddress( short parameter_1);
double v_LAN7800DeviceWaitReg( unsigned int parameter_1,double parameter_2,char parameter_3,long parameter_4);
long v_LAN7800DeviceWriteReg( char parameter_1,short parameter_2,float parameter_3,int uni_para);
char v_LAN7800DeviceReadWriteReg( unsigned int parameter_1,long parameter_2,long parameter_3,char parameter_4);
float v_LAN7800DeviceReadReg( unsigned int parameter_1,unsigned int parameter_2,int parameter_3);
void v_LAN7800DeviceConfigure( float parameter_1,int uni_para);
void v_LAN7800Device(int uni_para);
double v_SMSC951xDeviceWriteReg( char parameter_1,double parameter_2,unsigned int parameter_3);
void v_MACAddressCopyTo( char parameter_1,double parameter_2);
void v_MACAddressFormat( float parameter_1,int parameter_2);
void v_MACAddressSet( double parameter_1,unsigned int parameter_2);
int v_GetMACAddress( char parameter_1);
void v_MACAddress( short parameter_1);
double v_SMSC951xDeviceConfigure( long parameter_1);
void v_SMSC951xDevice( double parameter_1);
int v_uspi_char2int( char parameter_1);
void v_USBMouseDeviceCompletionRoutine( int parameter_1);
float v_USBMouseDeviceStartRequest( float parameter_1);
double v_USBMouseDeviceConfigure( char parameter_1);
void v_USBMouseDevice( double parameter_1);
void v_KeyMap( char parameter_1);
long v_DWHCIDeviceSubmitAsyncRequest( long parameter_1,char parameter_2);
void v_TimerCancelKernelTimer( int parameter_1,char parameter_2);
void v_CancelKernelTimer( double parameter_1);
long v_KeyMapGetString( float parameter_1,double parameter_2,int parameter_3,char parameter_4);
void v_KeyMapTranslate( short parameter_1,unsigned int parameter_2,float parameter_3);
void v_USBKeyboardDeviceGenerateKeyEvent( unsigned int parameter_1,unsigned int parameter_2);
unsigned int v_USBKeyboardDeviceGetKeyCode( double parameter_1);
float v_USBKeyboardDeviceGetModifiers();
void v_USBKeyboardDeviceCompletionRoutine( int parameter_1);
char v_USBKeyboardDeviceStartRequest( unsigned int parameter_1);
unsigned int v_USBKeyboardDeviceConfigure();
void v_USBKeyboardDevice();
double v_DeviceNameServiceGet();
int v_strcpy( char parameter_1,double parameter_2);
void v_DeviceNameServiceAddDevice( int parameter_1,short parameter_2,char parameter_4);
double v_uspi_le2be32();
int v_DWHCIDeviceTransfer( long parameter_1,int parameter_2,char parameter_4);
int v_USBBulkOnlyMassStorageDeviceCommand( char parameter_1,char parameter_3,short parameter_5,unsigned int parameter_6);
void v_USBEndpoint2( long parameter_1,double parameter_2,char parameter_3);
char v_USBBulkOnlyMassStorageDeviceConfigure( double parameter_1);
void v_USBBulkOnlyMassStorageDevice( short parameter_1);
char v_USBStandardHubEnumeratePorts( unsigned int parameter_1);
char v_USBConfigurationParserGetDescriptor( short parameter_1,char parameter_2);
long v_USBDeviceGetDescriptor( float parameter_1,unsigned int parameter_2);
void v_USBDeviceGetDeviceDescriptor( unsigned int parameter_1);
double v_USBStandardHubConfigure( char parameter_1);
void v_USBEndpointCopy( char parameter_1,long parameter_2,double parameter_3);
void v_USBStringCopy( unsigned int parameter_1,float parameter_2);
void v_USBDeviceCopy( double parameter_1,unsigned int parameter_2);
void v_USBStandardHub( long parameter_1);
double v_GetDevice( double parameter_1,long parameter_2,int uni_para);
float v_USBDeviceFactoryGetDevice( double parameter_1,int uni_para);
void v_StringAppend( float parameter_1,double parameter_2);
unsigned int v_StringGetLength( double parameter_1);
int v_StringCompare( double parameter_1,long parameter_2);
unsigned int v_StringSet( double parameter_1,int parameter_2);
long v_USBDeviceGetName( int parameter_1,double parameter_2);
char v_USBStandardHubGetDeviceNames( int parameter_1);
void v__USBString( float parameter_1);
void v__USBEndpoint( float parameter_1);
void v__USBConfigurationParser();
void v__USBDevice( short parameter_1);
void v_debug_hexdump( short parameter_1,double parameter_2,float parameter_3);
void v_DebugHexdump( float parameter_1,short parameter_2,float parameter_3);
void v_USBConfigurationParserError( char parameter_1,unsigned int parameter_2);
void v_USBDeviceConfigurationError( unsigned int parameter_1,int parameter_2);
double v_USBConfigurationParserIsValid( char parameter_1);
void v_USBConfigurationParser( char parameter_1);
void v_String2( long parameter_1,char parameter_2);
unsigned int v_USBStringGetFromDescriptor( long parameter_1,int parameter_2,int parameter_3);
char v_USBDeviceGetEndpoint0( unsigned int parameter_1);
int v_USBDeviceGetHost( float parameter_1);
float v_USBStringGetLanguageID( double parameter_1);
void v_USBDeviceSetAddress( unsigned int parameter_1,char parameter_2);
short v_DWHCIDeviceSetAddress( unsigned int parameter_1,char parameter_2,short parameter_3);
void v_USBEndpointSetMaxPacketSize( unsigned int parameter_1,unsigned int parameter_2);
int v_DWHCIDeviceGetDescriptor( double parameter_1,int parameter_2,char parameter_3,long parameter_4,unsigned int parameter_6,char parameter_7);
char v_USBDeviceInitialize( double parameter_1);
void v_USBString( int parameter_1);
void v_USBEndpoint( double parameter_1);
void v__USBRequest( double parameter_1);
void v_USBRequestGetResultLength( double parameter_1);
void v_USBEndpointIsDirectionIn( float parameter_1);
int v_USBRequestGetStatus( float parameter_1);
void v_DWHCIDeviceEnableChannelInterrupt( float parameter_1,char parameter_2);
unsigned int v_DWHCIFrameSchedulerNoSplitIsOddFrame( char parameter_1);
void v_DWHCIFrameSchedulerNoSplitWaitForFrame( long parameter_1);
void v_DWHCIFrameSchedulerNoSplitTransactionComplete( int parameter_1,double parameter_2);
char v_DWHCIFrameSchedulerNoSplitCompleteSplit( short parameter_1);
void v_DWHCIFrameSchedulerNoSplitStartSplit( char parameter_1);
void v__DWHCIFrameSchedulerNoSplit( unsigned int parameter_1);
void v_DWHCIFrameSchedulerNoSplit( long parameter_1);
float v_DWHCIFrameSchedulerNonPeriodicIsOddFrame( int parameter_1);
void v_DWHCIFrameSchedulerNonPeriodicWaitForFrame( float parameter_1);
void v_DWHCIFrameSchedulerNonPeriodicTransactionComplete( long parameter_1,float parameter_2,int uni_para);
char v_DWHCIFrameSchedulerNonPeriodicCompleteSplit( char parameter_1);
void v_DWHCIFrameSchedulerNonPeriodicStartSplit( long parameter_1);
void v__DWHCIFrameSchedulerNonPeriodic( long parameter_1);
void v_DWHCIFrameSchedulerNonPeriodic( unsigned int parameter_1,int uni_para);
int v_DWHCIFrameSchedulerPeriodicIsOddFrame();
void v_DWHCIFrameSchedulerPeriodicWaitForFrame( float parameter_1);
void v_DWHCIFrameSchedulerPeriodicTransactionComplete( long parameter_1,char parameter_2);
double v_DWHCIFrameSchedulerPeriodicCompleteSplit( short parameter_1);
void v_DWHCIFrameSchedulerPeriodicStartSplit();
void v__DWHCIFrameSchedulerPeriodic( long parameter_1);
void v_DWHCIFrameSchedulerPeriodic();
short v_USBRequestGetBuffer();
double v_USBEndpointGetMaxPacketSize( unsigned int parameter_1);
unsigned int v_USBDeviceGetSpeed( float parameter_1);
float v_USBEndpointGetDevice( float parameter_1);
void v_DWHCITransferStageData( float parameter_1,int uni_para);
double v_DWHCIDeviceAllocateChannel( char parameter_1);
short v_DWHCIDeviceTransferStageAsync( char parameter_1,float parameter_2,double parameter_3,unsigned int parameter_4,int uni_para);
void v_DWHCIDeviceCompletionRoutine( char parameter_1);
void v_USBRequestSetCompletionRoutine( unsigned int parameter_1,float parameter_2);
double v_DWHCIDeviceTransferStage( float parameter_1,short parameter_2,float parameter_3,double parameter_4,int uni_para);
long v_USBRequestGetBufLen( int parameter_1);
float v_USBRequestGetSetupData( int parameter_1);
double v_DWHCIDeviceSubmitBlockingRequest( long parameter_1,char parameter_2,int uni_para);
void v_USBRequest( unsigned int parameter_1);
int v_DWHCIDeviceControlMessage( short parameter_1,double parameter_2,unsigned int parameter_3,char parameter_4,float parameter_5,double parameter_6,float parameter_8,int uni_para);
void v_DWHCIDeviceSetConfiguration( long parameter_1,long parameter_2,long parameter_3);
double v_USBDeviceConfigure( char parameter_1);
void v_USBDevice( float parameter_1);
long v_DWHCIDeviceGetPortSpeed( short parameter_1);
void v_DWHCIRootPortInitialize( unsigned int parameter_1,int uni_para);
long v_DWHCIDeviceEnableRootPort( int parameter_1);
void v_DWHCIDeviceEnableHostInterrupts( long parameter_1);
void v_DWHCIDeviceFlushRxFIFO( float parameter_1);
void v_TimerusDelay( int parameter_1,unsigned int parameter_2);
void v_usDelay( double parameter_1);
void v_DWHCIDeviceFlushTxFIFO( long parameter_1,short parameter_2);
long v_DWHCIDeviceInitHost();
void v_DWHCIDeviceEnableGlobalInterrupts( int parameter_1);
void v_DWHCIDeviceEnableCommonInterrupts( int parameter_1);
void v_MsDelay( char parameter_1);
long v_DWHCIDeviceWaitForBit( float parameter_1,float parameter_2,float parameter_3,int parameter_4,float parameter_5);
char v_DWHCIDeviceReset( long parameter_1);
char v_DWHCIDeviceInitCore( long parameter_1);
float v_DWHCITransferStageDataBeginSplitCycle( char parameter_1);
short v_DWHCITransferStageDataIsStageComplete( float parameter_1);
void v_USBRequestCallCompletionRoutine( double parameter_1);
void v_DWHCIDeviceFreeChannel( double parameter_1,int parameter_2);
void v__DWHCITransferStageData( char parameter_1);
void v_uspi_LeaveCritical();
void v_uspi_EnterCritical();
void v_DWHCIDeviceDisableChannelInterrupt( long parameter_1,long parameter_2);
void v_DWHCITransferStageDataGetResultLen( short parameter_1);
void v_USBRequestSetResultLen( unsigned int parameter_1,float parameter_2);
float v_DWHCITransferStageDataIsStatusStage( float parameter_1);
void v_DWHCITransferStageDataSetSplitComplete( unsigned int parameter_1,long parameter_2);
void v_DWHCIDeviceTimerHandler( char parameter_1);
float v_TimerGet();
short v_TimerStartKernelTimer( char parameter_1,float parameter_2,short parameter_3);
int v_StartKernelTimer( short parameter_1,short parameter_2);
unsigned int v_USBRequestGetEndpoint();
float v_USBEndpointGetInterval( short parameter_1);
void v_DWHCITransferStageDataSetState( float parameter_1,char parameter_2);
void v_USBRequestSetStatus( long parameter_1,int parameter_2);
short v_DWHCITransferStageDataGetTransactionStatus( char parameter_1);
unsigned int v_DWHCITransferStageDataGetState( double parameter_1);
void v_USBEndpointSkipPID( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3);
void v_DWHCITransferStageDataTransactionComplete( int parameter_1,int parameter_2,char parameter_3,float parameter_4);
unsigned int v_DWHCIRegisterIsSet( double parameter_1,float parameter_2);
void v_DWHCIDeviceStartTransaction( float parameter_1,int parameter_2);
unsigned int v_DWHCITransferStageDataIsPeriodic( int parameter_1);
void v_DWHCITransferStageDataGetStatusMask( unsigned int parameter_1);
void v_DWHCIRegisterSet( int parameter_1,float parameter_2);
unsigned int v_USBEndpointGetNumber( float parameter_1);
int v_DWHCITransferStageDataGetEndpointNumber( char parameter_1);
long v_USBEndpointGetType( short parameter_1);
double v_DWHCITransferStageDataGetEndpointType( short parameter_1);
double v_USBDeviceGetAddress( char parameter_1);
int v_DWHCITransferStageDataGetDeviceAddress( long parameter_1);
double v_DWHCITransferStageDataGetSpeed( unsigned int parameter_1);
void v_DWHCITransferStageDataIsDirectionIn( double parameter_1);
int v_DWHCITransferStageDataGetMaxPacketSize( int parameter_1);
long v_DWHCITransferStageDataIsSplitComplete( int parameter_1);
float v_DWHCITransferStageDataGetSplitPosition( unsigned int parameter_1);
float v_USBDeviceGetHubAddress( unsigned int parameter_1);
int v_DWHCITransferStageDataGetHubAddress( double parameter_1);
char v_USBDeviceGetHubPortNumber( char parameter_1);
unsigned int v_DWHCITransferStageDataGetHubPortAddress( unsigned int parameter_1);
char v_DWHCITransferStageDataIsSplit( long parameter_1);
void v_uspi_CleanAndInvalidateDataCacheRange( float parameter_1,int parameter_2);
int v_DWHCITransferStageDataGetDMAAddress( long parameter_1);
char v_USBEndpointGetNextPID( long parameter_1,double parameter_2);
char v_DWHCITransferStageDataGetPID( double parameter_1);
long v_DWHCITransferStageDataGetPacketsToTransfer( char parameter_1);
short v_DWHCITransferStageDataGetBytesToTransfer( int parameter_1);
void v_DWHCIRegisterOr( double parameter_1,int parameter_2);
void v_DWHCIRegisterSetAll( long parameter_1);
void v_DWHCITransferStageDataSetSubState( double parameter_1,unsigned int parameter_2);
short v_DWHCITransferStageDataGetChannelNumber( int parameter_1);
void v_DWHCIDeviceStartChannel( double parameter_1,short parameter_2);
void v_DWHCITransferStageDataGetSubState( double parameter_1);
long v_DWHCITransferStageDataGetURB( float parameter_1);
unsigned int v_DWHCITransferStageDataGetFrameScheduler( char parameter_1);
void v_DWHCIDeviceChannelInterruptHandler( long parameter_1,double parameter_2);
void v_DWHCIRegister2( int parameter_1,double parameter_2,double parameter_3);
void v_DWHCIDeviceInterruptHandler();
double v_InterruptSystemGet();
void v_ConnectInterrupt( float parameter_1,float parameter_2);
void v_DWHCIRegisterWrite( unsigned int parameter_1);
void v_DWHCIRegisterAnd( short parameter_1,char parameter_2);
int v_SetPowerStateOn( short parameter_1);
void v__DWHCIRegister( char parameter_1);
void v_DWHCIRegisterGet();
long v_LoggerGet();
void v_LogWrite( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,int uni_para);
void v_DWHCIRegisterRead( long parameter_1);
void v_DWHCIRegister( unsigned int parameter_1);
char v_DWHCIDeviceInitialize( char parameter_1,int uni_para);
void v_DWHCIRootPort( char parameter_1);
void v_DWHCIDevice( double parameter_1);
void v_DeviceNameService( int parameter_1);
int v_USPiInitialize(int uni_para);
void v__ExceptionHandler( double parameter_1);
void v__InterruptSystem();
void v__Timer( char parameter_1);
void v__Logger( double parameter_1);
void v_DelayLoop( int parameter_1);
void v_TimerMsDelay( float parameter_1,long parameter_2);
void v_TimerGetTicks( float parameter_1);
void v_TimerTuneMsDelay( short parameter_1);
void v_TimerPollKernelTimers( long parameter_1);
void v_TimerInterruptHandler();
void v_InterruptSystemEnableIRQ( float parameter_1);
void v_InterruptSystemConnectIRQ( long parameter_1,float parameter_2,long parameter_3);
unsigned int v_TimerInitialize( long parameter_1);
void v_IRQStub();
int v_InterruptSystemInitialize( float parameter_1);
void v_StringFormatV( int parameter_1,short parameter_2,short parameter_3);
void v__String( unsigned int parameter_1);
void v_StringGet( double parameter_1);
void v_StringFormat( short parameter_1,int parameter_2,char parameter_3);
void v_String( short parameter_1);
char v_TimerGetTimeString( unsigned int parameter_1);
void v_ScreenDeviceSetCursorMode( double parameter_1,short parameter_2);
void v_ScreenDeviceCursorMove( char parameter_1,short parameter_2,double parameter_3);
void v_ScreenDeviceSetStandoutMode( char parameter_1,short parameter_2);
void v_ScreenDeviceInsertMode( short parameter_1,float parameter_2);
void v_ScreenDeviceEraseChars( short parameter_1,long parameter_2);
void v_ScreenDeviceDeleteChars( unsigned int parameter_1,unsigned int parameter_2);
void v_ScreenDeviceDeleteLines( short parameter_1,char parameter_2);
void v_ScreenDeviceCursorUp( double parameter_1);
void v_ScreenDeviceInsertLines( double parameter_1,unsigned int parameter_2);
void v_ScreenDeviceReverseScroll();
void v_ScreenDeviceCursorRight( long parameter_1);
unsigned int v_CharGeneratorGetPixel( char parameter_1,char parameter_2,unsigned int parameter_3,short parameter_4);
void v_ScreenDeviceDisplayChar2( short parameter_1,char parameter_2,char parameter_3,unsigned int parameter_4,char parameter_5);
void v_ScreenDeviceDisplayChar( int parameter_1,char parameter_2);
short v_memcpyblk(short parameter_2,long parameter_3,int uni_para);
void v_ScreenDeviceScroll( int parameter_1,int uni_para);
void v_ScreenDeviceCursorDown( double parameter_1,int uni_para);
void v_ScreenDeviceCarriageReturn( char parameter_1);
void v_ScreenDeviceNewLine( long parameter_1,int uni_para);
void v_ScreenDeviceTabulator( float parameter_1,int uni_para);
void v_ScreenDeviceCursorLeft( unsigned int parameter_1);
void v_ScreenDeviceWrite2( float parameter_1,char parameter_2,int uni_para);
int v_ScreenDeviceWrite( long parameter_1,char parameter_2,float parameter_3,int uni_para);
char v_strlen( unsigned int parameter_1);
void v_LoggerWrite2( long parameter_1,float parameter_2,int uni_para);
void v_LoggerWriteV( unsigned int parameter_1,float parameter_2,short parameter_3,short parameter_4,long parameter_5,int uni_para);
void v_LoggerWrite( short parameter_1,short parameter_2,int parameter_3,char parameter_4,char parameter_5);
unsigned int v_LoggerInitialize( char parameter_1,long parameter_2);
void v_Logger( long parameter_1);
void v_Timer( char parameter_1);
void v_InterruptSystem();
void v_DataAbortStub();
void v_PrefetchAbortStub();
void v_UndefinedInstructionStub();
void v_ExceptionHandler2( float parameter_1);
void v__CharGenerator( float parameter_1);
void v_free();
void v__BcmFrameBuffer();
void v__ScreenDevice( unsigned int parameter_1);
float v_ScreenDeviceGetPixel( long parameter_1,unsigned int parameter_2,int parameter_3);
double v_CharGeneratorGetUnderline( char parameter_1);
void v_ScreenDeviceInvertCursor( int parameter_1);
void v_ScreenDeviceSetPixel( double parameter_1,int parameter_2,unsigned int parameter_3,unsigned int parameter_4);
void v_ScreenDeviceEraseChar( unsigned int parameter_1,long parameter_2,float parameter_3);
short v_CharGeneratorGetCharWidth( double parameter_1);
void v_ScreenDeviceClearLineEnd( short parameter_1);
void v_ScreenDeviceClearDisplayEnd( float parameter_1);
void v_ScreenDeviceCursorHome( float parameter_1);
double v_CharGeneratorGetCharHeight( short parameter_1);
long v_BcmFrameBufferGetPitch( int parameter_1);
unsigned int v_BcmFrameBufferGetHeight( int parameter_1);
int v_BcmFrameBufferGetWidth( char parameter_1);
unsigned int v_BcmFrameBufferGetSize( int parameter_1);
float v_BcmFrameBufferGetBuffer( int parameter_1);
float v_BcmFrameBufferGetDepth( long parameter_1);
float v_BcmFrameBufferInitialize( char parameter_1);
void v_BcmFrameBufferSetPalette( long parameter_1,double parameter_2,float parameter_3);
float v_memset(int parameter_2,float parameter_3);
void v_BcmFrameBuffer( unsigned int parameter_1);
long v_ScreenDeviceInitialize( long parameter_1);
void v_CharGenerator( long parameter_1);
void v_ScreenDevice( int parameter_1);
void v__BcmMailBox( long parameter_1);
void v__BcmPropertyTags( double parameter_1);
int v_PageTableGetBaseAddress();
void v_MemorySystemEnableMMU( short parameter_1);
void v_PageTable();
int v_palloc();
void v_PageTable2( short parameter_1,long parameter_2);
void v_LeaveCritical();
void v_EnterCritical();
short v_malloc( short parameter_1);
void v_mem_init( int parameter_1,int parameter_2);
void v_InvalidateDataCache();
void v_BcmMailBoxRead( long parameter_1);
void v_write32( float parameter_1,char parameter_2);
void v_BcmMailBoxWrite( char parameter_1,short parameter_2);
void v_TimerSimpleusDelay( float parameter_1);
void v_TimerSimpleMsDelay( double parameter_1);
float v_read32( double parameter_1);
void v_BcmMailBoxFlush( unsigned int parameter_1);
int v_BcmMailBoxWriteRead( unsigned int parameter_1,double parameter_2);
void v_CleanDataCache();
char v_memcpy(float parameter_2,double parameter_3);
long v_BcmPropertyTagsGetTag( short parameter_1,char parameter_2,short parameter_4,char parameter_5);
void v_BcmMailBox( char parameter_1);
void v_BcmPropertyTags( float parameter_1);
void v_MemorySystem( double parameter_1);
int v_USPiEnvInitialize();
void v_ScreenDeviceRotor( long parameter_1,long parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	short_1 = v_CharGeneratorGetCharWidth(double_1);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	v_ScreenDeviceDisplayChar2(short_1,char_1,char_1,unsigned_int_1,char_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
}
float v_USPiEnvGetScreen()
{
	float float_1 = 1;
	return float_1;
}
char v_KeyPressedHandler( double parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v_ScreenDeviceWrite(long_1,char_1,float_1,-1 );

	int_3 = int_2 + int_2;
	return char_1;
	float_1 = v_USPiEnvGetScreen();

	char_1 = v_strlen(unsigned_int_1);

}
void v_USBKeyboardDeviceRegisterKeyPressedHandler( long parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_3 = float_1 * float_2;
	long_1 = long_1;
	double_2 = double_1 * double_1;
}
void v_USPiKeyboardRegisterKeyPressedHandler( float parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_1;
	v_USBKeyboardDeviceRegisterKeyPressedHandler(long_1,char_1);

	float_1 = float_1;
	int_2 = int_1 + int_1;
}
int v_USPiKeyboardAvailable()
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short_1 = short_1 + short_2;
	return int_1;
}
void v_USPiEnvClose()
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	v__ScreenDevice(unsigned_int_1);

	float_2 = float_1 + float_1;
	float_2 = float_3 * float_1;
	short_1 = short_1 * short_2;
	v__ExceptionHandler(double_1);

	int_1 = int_1 * int_1;
	v__Timer(char_1);

	long_1 = long_2;
	v__Logger(double_2);

	v__InterruptSystem();

}
int v_strcmp( float parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	long_1 = long_1 * long_2;
	float_1 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_4;
	double_2 = double_1 + double_1;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_3 * long_2;
	}
	return int_2;
}
float v_DeviceNameServiceGetDevice( char parameter_1,short parameter_2,long parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float_1 = float_1 + float_1;
	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_3 = v_strcmp(float_1,long_1);

		int_4 = int_1 + int_4;
		unsigned_int_1 = unsigned_int_2;
	}
	return float_1;
}
void v__DeviceNameService( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_2;
	v_free();

	int_3 = int_1 * int_1;
}
void v__DWHCIRootPort( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short_2 = short_1 + short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "&+") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_1 = float_1 + float_2;
		v_free();

		long_1 = long_1 * long_2;
	}
	double_3 = double_1 * double_2;
	v__USBDevice(short_3);

}
void v__DWHCIDevice()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v__DWHCIRootPort(int_1);

	int_3 = int_2 + int_3;
}
void v_DWHCIDeviceDisableRootPort( short parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	v__DWHCIRegister(char_1);

	long_1 = long_2;
	short_2 = short_1 + short_1;
	v_DWHCIRegister(unsigned_int_1);

	v_DWHCIRegisterWrite(unsigned_int_2);

	int_1 = int_1 * int_1;
	double_1 = double_1 * double_2;
	v_DWHCIRegisterAnd(short_3,char_1);

	short_4 = short_4 * short_3;
	short_3 = short_2 + short_3;
	long_1 = long_1;
	v_DWHCIRegisterRead(long_1);

}
long v_DWHCIDeviceOvercurrentDetected( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	float_3 = float_1 * float_2;
	v_DWHCIRegisterRead(long_1);

	long_1 = long_2 * long_2;
	int_2 = int_1 * int_1;
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	v_DWHCIRegister(unsigned_int_1);

	v__DWHCIRegister(char_2);

	char_1 = char_2 * char_1;
	return long_2;
}
void v_USBMIDIDeviceCompletionRoutine( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	short short_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short_3 = short_1 + short_2;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = v_USBRequestGetStatus(float_1);

	v_USBRequestGetResultLength(double_2);

	double_1 = double_3 + double_4;
	if(1)
	{
		char char_1 = 1;
		short short_4 = 1;
		v__USBRequest(double_5);

		char_1 = char_1;
		short_4 = short_1 * short_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				if(1)
				{
					int int_2 = 1;
					int int_3 = 1;
					unsigned int unsigned_int_3 = 1;
					int_2 = int_2 * int_2;
					int_1 = int_2 * int_3;
					unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
				}
			}
		}
	}
	char_2 = char_2 * char_2;
	short_5 = v_USBMIDIDeviceStartRequest();

	long_2 = long_1 * long_2;
	char_4 = char_3 + char_3;
	int_5 = int_4 * int_4;
	v_free();

}
short v_USBMIDIDeviceStartRequest()
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long_1 = v_DWHCIDeviceSubmitAsyncRequest(long_1,char_1);

	char_1 = char_1 + char_2;
	char_3 = char_3 + char_1;
	int_2 = int_1 + int_1;
	v_USBRequestSetCompletionRoutine(unsigned_int_1,float_1);

	char_4 = char_3 + char_2;
	double_1 = double_2;
	double_4 = double_1 * double_3;
	v_USBRequest(unsigned_int_1);

	float_1 = float_1 * float_2;
	v_USBMIDIDeviceCompletionRoutine(long_1);

	int_3 = v_USBDeviceGetHost(float_3);

	short_3 = short_1 + short_2;
	return short_2;
	short_2 = v_malloc(short_4);

}
float v_USBMIDIDeviceConfigure( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_5 = 1;
	int int_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_9 = 1;
	int int_7 = 1;
	long long_6 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_7 = 1;
	int int_10 = 1;
	int int_11 = 1;
	long long_8 = 1;
	char char_6 = 1;
	long long_9 = 1;
	short_2 = short_1 + short_2;
	char_1 = char_1 * char_2;
	if(1)
	{
		short_2 = short_3 * short_4;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			double_1 = double_1 * double_1;
		}
		double_1 = double_2 + double_1;
		double_3 = double_1;
		if(1)
		{
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			long_2 = v_USBDeviceGetDescriptor(float_1,unsigned_int_1);

			double_2 = double_3 * double_4;
		}
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			int_3 = int_1 * int_2;
			double_2 = double_3 + double_1;
		}
		int_3 = int_2 * int_2;
	}
	if(1)
	{
		if(1)
		{
			int_5 = int_4 + int_5;
		}
		double_4 = double_2 * double_4;
	}
	if(1)
	{
		if(1)
		{
			v_USBDeviceConfigurationError(unsigned_int_4,int_3);

			double_6 = double_5 * double_5;
		}
		int_2 = int_1 + int_4;
	}
	if(1)
	{
		v_String(short_4);

		double_7 = double_4 + double_2;
		int_2 = int_4 + int_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_5 = 1;
			double_8 = double_2;
			long_5 = long_3 * long_4;
		}
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double_2 = double_5 + double_2;
		float_4 = float_2 + float_3;
		if(1)
		{
			float_4 = float_4 + float_5;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_5 = v_DeviceNameServiceGet();

			double_4 = double_1 * double_4;
			int_3 = int_6 + int_4;
		}
		if(1)
		{
			char char_5 = 1;
			short short_6 = 1;
			int int_8 = 1;
			int int_9 = 1;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double_5 = double_3 + double_6;
				double_5 = double_2;
			}
			if(1)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					char_2 = char_1 + char_2;
					char_5 = char_3 * char_4;
				}
			}
			if(1)
			{
				double_3 = double_9 * double_5;
				int_6 = int_4 * int_7;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						float_2 = float_4 + float_3;
					}
					if(1)
					{
						float float_6 = 1;
						short short_5 = 1;
						int_4 = int_5 + int_5;
						float_6 = float_6 + float_4;
						short_6 = short_5 * short_1;
						for(int looper_5=0; looper_5<1;looper_5++)
						{
							if(1)
							{
								double_9 = double_9;
							}
							long_4 = long_6 * long_1;
							double_8 = v_USBDeviceConfigure(char_3);

							v_LogWrite(short_2,unsigned_int_1,int_4,int_4,-1 );

							unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
						}
					}
					for(int looper_6=0; looper_6<1;looper_6++)
					{
						double_4 = double_2 * double_5;
						int_6 = int_3 + int_8;
					}
				}
				double_4 = double_9 * double_8;
			}
			if(1)
			{
				if(1)
				{
					long_6 = long_1;
				}
				float_1 = float_5 * float_1;
			}
			if(1)
			{
				double double_10 = 1;
				if(1)
				{
					double_4 = double_10 + double_3;
				}
				v_StringFormat(short_1,int_2,char_3);

				double_10 = double_8 + double_6;
			}
			if(1)
			{
				if(1)
				{
					short_7 = v_malloc(short_3);

					v__String(unsigned_int_5);

					float_7 = float_5 + float_7;
				}
				int_8 = int_7 * int_2;
			}
			if(1)
			{
				if(1)
				{
					v_StringGet(double_6);

					char_3 = char_3 + char_4;
				}
				if(1)
				{
					int_9 = int_7 * int_6;
				}
				long_2 = long_1 * long_1;
			}
			if(1)
			{
				char controller_33[3];
				fgets(controller_33 ,3 ,stdin);
				if( strcmp( controller_33, "au") > 0)
				{
					int_2 = int_1 + int_3;
				}
				int_9 = int_1 + int_10;
			}
			if(1)
			{
				if(1)
				{
					double_7 = double_5 * double_2;
				}
				v_DeviceNameServiceAddDevice(int_11,short_2,char_2);

				int_4 = int_11;
				if(1)
				{
					double_8 = double_5 * double_4;
				}
				if(1)
				{
					long long_7 = 1;
					long_1 = long_2 * long_7;
				}
			}
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				long_3 = long_8 * long_4;
				unsigned_int_4 = unsigned_int_5 * unsigned_int_6;
				if(1)
				{
					short_7 = short_6 + short_7;
				}
				short_6 = short_6 + short_4;
				for(int looper_7=0; looper_7<1;looper_7++)
				{
					if(1)
					{
						float float_8 = 1;
						char_5 = char_1;
						char_3 = char_2 + char_6;
						float_5 = float_4 + float_7;
						short_1 = v_USBMIDIDeviceStartRequest();

						int_2 = int_5 * int_10;
						float_8 = float_5 * float_3;
					}
					int_10 = int_1 + int_2;
				}
			}
			if(1)
			{
				float float_9 = 1;
				float_2 = float_9;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			int_7 = int_1 * int_10;
		}
		char_2 = char_6 + char_1;
		float_5 = float_1 + float_7;
		double_9 = double_4 + double_4;
		v_USBEndpoint2(long_1,double_9,char_4);

		int_5 = int_6 * int_1;
	}
	long_8 = long_9 + long_6;
	return float_5;
}
void v_USBMIDIDevice( long parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	v_USBDeviceCopy(double_1,unsigned_int_1);

	float_1 = float_1;
	double_3 = double_2 + double_3;
	int_1 = int_1 + int_1;
	float_1 = v_USBMIDIDeviceConfigure(double_3);

	float_3 = float_2 + float_3;
	float_1 = float_1 + float_2;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
}
void v_USBGamePadDeviceCompletionRoutine( unsigned int parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short_1 = short_1;
	v_USBRequestGetResultLength(double_1);

	float_1 = float_1;
	v__USBRequest(double_2);

	v_free();

	int_1 = int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
			double double_4 = 1;
			float float_2 = 1;
			double_3 = double_4;
			float_2 = float_2 + float_2;
		}
	}
	short_2 = v_USBGamePadDeviceStartRequest(long_1);

	char_2 = char_1 * char_2;
	int_2 = int_1 * int_2;
	double_3 = double_2 * double_2;
	int_3 = v_USBRequestGetStatus(float_1);

	float_3 = float_3 * float_1;
	short_2 = v_USBGamePadDeviceDecodeReport(unsigned_int_4);

}
short v_USBGamePadDeviceStartRequest( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_2 = char_1 + char_1;
	float_1 = float_1 + float_1;
	short_1 = v_malloc(short_2);

	v_USBRequestSetCompletionRoutine(unsigned_int_1,float_2);

	int_1 = int_1 + int_2;
	short_2 = short_2 + short_3;
	v_USBRequest(unsigned_int_2);

	int_1 = v_USBDeviceGetHost(float_2);

	double_1 = double_1 * double_2;
	short_4 = short_2 + short_2;
	double_4 = double_3 * double_2;
	long_2 = long_1 * long_1;
	return short_1;
	v_USBGamePadDeviceCompletionRoutine(unsigned_int_3);

	long_2 = v_DWHCIDeviceSubmitAsyncRequest(long_1,char_1);

}
void v_USBGamePadDevicePS3Configure( short parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_5 = 1;
	long_1 = long_1;
	char_1 = v_USBDeviceGetEndpoint0(unsigned_int_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_2 = double_1 + double_2;
	float_3 = float_1 + float_2;
	int_2 = int_1 + int_1;
	double_4 = double_3 * double_1;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	int_2 = v_USBDeviceGetHost(float_2);

	int_2 = int_3 + int_4;
	float_4 = float_2 + float_4;
	int_5 = v_DWHCIDeviceControlMessage(short_1,double_2,unsigned_int_6,char_1,float_3,double_3,float_5,-1 );

}
char v_BitGetSigned(short parameter_2,char parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	long_1 = v_BitGetUnsigned(char_1,double_1);

	int_1 = int_2;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	return char_4;
}
long v_BitGetUnsigned(char parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	double_2 = double_1 * double_2;
	char_1 = char_1;
	char_2 = char_1 + char_2;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		if(1)
		{
			char_2 = char_2 + char_2;
			int_2 = int_2 + int_1;
		}
		if(1)
		{
			int int_3 = 1;
			int_1 = int_1 + int_3;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
			long_1 = long_1 * long_1;
		}
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "+9") > 0)
		{
			long long_3 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
			long_3 = long_1 * long_2;
		}
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "Cm") < 0)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
			double_1 = double_2 * double_2;
		}
	}
	return long_2;
}
short v_USBGamePadDeviceDecodeReport( unsigned int parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	long_1 = v_BitGetUnsigned(char_1,double_1);

	float_1 = float_1 * float_1;
	char_1 = v_BitGetSigned(short_1,char_1);

	int_1 = int_1 * int_2;
	return short_2;
}
short v_USBGamePadDeviceConfigure()
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	int int_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	v_DeviceNameServiceAddDevice(int_1,short_1,char_1);

	double_1 = double_2;
	long_1 = v_USBDeviceGetDescriptor(float_1,unsigned_int_1);

	int_1 = v_USBDeviceGetHost(float_1);

	int_2 = int_2 * int_1;
	v_USBDeviceConfigurationError(unsigned_int_2,int_2);

	short_2 = v_malloc(short_2);

	v_USBGamePadDevicePS3Configure(short_3);

	v__String(unsigned_int_1);

	int_1 = int_2 * int_2;
	double_3 = v_DeviceNameServiceGet();

	short_1 = v_USBGamePadDeviceStartRequest(long_1);

	int_2 = int_2 * int_2;
	int_1 = v_DWHCIDeviceControlMessage(short_3,double_1,unsigned_int_1,char_2,float_2,double_1,float_3,-1 );

	short_2 = v_USBGamePadDeviceDecodeReport(unsigned_int_1);

	double_1 = v_USBDeviceConfigure(char_3);

	v_StringFormat(short_2,int_3,char_3);

	double_3 = double_1 * double_3;
	if(1)
	{
		v_USBEndpoint2(long_2,double_4,char_4);

		char_2 = v_USBDeviceGetEndpoint0(unsigned_int_1);

		v_LogWrite(short_2,unsigned_int_3,int_3,int_3,-1 );

		v_String(short_1);

		v_StringGet(double_4);

		int_3 = int_3 + int_2;
	}
	return short_1;
}
void v_USBGamePadDevice( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	short short_5 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	short_3 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_3 = short_2 + short_4;
	char_1 = char_1 * char_1;
	char_1 = char_1;
	double_1 = double_1;
	long_2 = long_1 + long_1;
	v_USBDeviceCopy(double_2,unsigned_int_1);

	long_1 = long_2;
	double_4 = double_3 * double_2;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = char_1;
		int_2 = int_1 + int_2;
		double_5 = double_5 * double_5;
	}
	short_5 = v_malloc(short_2);

	int_1 = int_2 * int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_5 = double_4;
	}
	short_1 = v_USBGamePadDeviceConfigure();

	char_1 = char_1 * char_1;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	int_4 = int_3 * int_2;
}
void v_LAN7800DevicePHYWrite( long parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "A") == 0)
	{
	}
	unsigned_int_2 = unsigned_int_1;
	double_2 = double_1;
	double_2 = v_LAN7800DeviceWaitReg(unsigned_int_1,double_3,char_1,long_1);

	long_1 = v_LAN7800DeviceWriteReg(char_2,short_1,float_1,-1 );

	float_3 = float_2 + float_1;
	if(1)
	{
	}
}
char v_LAN7800DevicePHYRead( double parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = int_2;
	double_2 = double_1 + double_1;
	char controller4vul_309[2];
	fgets(controller4vul_309 ,2 ,stdin);
	if( strcmp( controller4vul_309, "0") < 0)
	{
		long_1 = v_LAN7800DeviceWriteReg(char_1,short_1,float_1,uni_para);

	}
	int_3 = int_1;
	short_1 = short_2 * short_2;
	long_3 = long_1 + long_2;
	double_2 = double_3;
	if(1)
	{
	}
	int_1 = int_3;
	char_2 = char_3;
	return char_1;
}
double v_LAN7800DeviceInitPHY( int parameter_1,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short_1 = short_1 * short_2;
	double_1 = double_1 + double_1;
	char controller4vul_308[2];
	fgets(controller4vul_308 ,2 ,stdin);
	if( strcmp( controller4vul_308, "Q") > 0)
	{
		char_1 = v_LAN7800DevicePHYRead(double_2,short_2,int_1,uni_para);

	}
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	return double_1;
}
unsigned int v_LAN7800DeviceInitMACAddress( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	long_1 = long_1 * long_2;
	long_1 = v_LAN7800DeviceWriteReg(char_1,short_1,float_1,-1 );

	int_1 = int_1;
	if(1)
	{
	}
	int_2 = v_GetMACAddress(char_1);

	v_String(short_1);

	int_3 = int_4;
	v_MACAddress(short_1);

	char_1 = char_1 + char_1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	v_LogWrite(short_2,unsigned_int_1,int_5,int_6,-1 );

	short_1 = short_2 * short_1;
	v_StringGet(double_2);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	v_MACAddressFormat(float_2,int_6);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	v__String(unsigned_int_2);

	unsigned_int_3 = unsigned_int_3;
	return unsigned_int_3;
	v_MACAddressSet(double_1,unsigned_int_1);

}
double v_LAN7800DeviceWaitReg( unsigned int parameter_1,double parameter_2,char parameter_3,long parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		float float_5 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			float_1 = v_LAN7800DeviceReadReg(unsigned_int_2,unsigned_int_2,int_1);

			float_3 = float_2 * float_2;
			long_2 = long_1 + long_1;
		}
		float_5 = float_2 + float_4;
		if(1)
		{
			int_1 = int_2 * int_1;
			float_3 = float_5;
		}
		float_3 = float_1 * float_2;
	}
	v_MsDelay(char_3);

	float_2 = float_4 * float_4;
	if(1)
	{
		int int_3 = 1;
		int_1 = int_1 * int_3;
		double_1 = double_1 * double_2;
	}
	char_3 = char_3 * char_1;
	if(1)
	{
		float_2 = float_4 + float_1;
		int_1 = int_2 * int_1;
	}
	double_1 = double_2 + double_1;
	if(1)
	{
		short short_1 = 1;
		float_4 = float_3 * float_1;
		short_1 = short_1 * short_1;
	}
	double_1 = double_1 * double_2;
	return double_2;
}
long v_LAN7800DeviceWriteReg( char parameter_1,short parameter_2,float parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short_1 = short_1 + short_2;
	char controller4vul_310[3];
	fgets(controller4vul_310 ,3 ,stdin);
	if( strcmp( controller4vul_310, "g_") > 0)
	{
		double double_2 = 1;
		double double_3 = 1;
		int_1 = v_DWHCIDeviceControlMessage(short_2,double_1,unsigned_int_1,char_1,float_1,double_1,float_1,uni_para);

		double_3 = double_2 + double_1;
	}
	return long_1;
}
char v_LAN7800DeviceReadWriteReg( unsigned int parameter_1,long parameter_2,long parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = int_2;
	long_1 = v_LAN7800DeviceWriteReg(char_1,short_1,float_1,-1 );

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	float_2 = v_LAN7800DeviceReadReg(unsigned_int_2,unsigned_int_3,int_3);

	short_2 = short_1 + short_2;
	short_2 = short_1 + short_3;
	return char_1;
}
float v_LAN7800DeviceReadReg( unsigned int parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int_1 = v_USBDeviceGetHost(float_1);

	char_1 = char_1 + char_1;
	if(1)
	{
		double double_2 = 1;
		int_1 = v_DWHCIDeviceControlMessage(short_1,double_1,unsigned_int_1,char_1,float_1,double_1,float_2,-1 );

		char_1 = v_USBDeviceGetEndpoint0(unsigned_int_2);

		v_LogWrite(short_1,unsigned_int_2,int_1,int_2,-1 );

		double_1 = double_2;
	}
	return float_2;
}
void v_LAN7800DeviceConfigure( float parameter_1,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = v_LAN7800DeviceInitPHY(int_1,uni_para);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_1;
	}
}
void v_LAN7800Device(int uni_para)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	v_LAN7800DeviceConfigure(float_1,uni_para);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_1;
	long_1 = long_1;
	char_2 = char_1 + char_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	int_1 = int_2;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_4;
}
double v_SMSC951xDeviceWriteReg( char parameter_1,double parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = v_USBDeviceGetHost(float_1);

	int_1 = int_2 * int_1;
	return double_1;
	int_2 = v_DWHCIDeviceControlMessage(short_1,double_1,unsigned_int_1,char_1,float_2,double_1,float_2,-1 );

	char_2 = v_USBDeviceGetEndpoint0(unsigned_int_2);

}
void v_MACAddressCopyTo( char parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_1 + long_2;
	char_1 = v_memcpy(float_1,double_1);

	int_1 = int_1 + int_1;
	short_2 = short_1 * short_1;
}
void v_MACAddressFormat( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	v_StringFormat(short_1,int_1,char_1);

	int_2 = int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	int_2 = int_4 + int_5;
}
void v_MACAddressSet( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 * int_1;
	char_1 = v_memcpy(float_1,double_1);

	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
}
int v_GetMACAddress( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	int int_1 = 1;
	float float_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = v_BcmPropertyTagsGetTag(short_1,char_1,short_2,char_2);

	float_1 = float_1 + float_1;
	v_MACAddress(short_2);

	v__BcmPropertyTags(double_1);

	char_3 = char_3 * char_4;
	if(1)
	{
		char_5 = v_memcpy(float_1,double_1);

		long_2 = long_1 * long_1;
	}
	float_3 = float_2 + float_1;
	long_3 = long_2 * long_1;
	return int_1;
	v_BcmPropertyTags(float_4);

}
void v_MACAddress( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_2;
	long_2 = long_1 * long_1;
}
double v_SMSC951xDeviceConfigure( long parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "f") > 0)
	{
		v_MACAddress(short_1);

		v_String(short_1);

		v_MACAddressFormat(float_1,int_1);

		long_1 = v_USBDeviceGetDescriptor(float_1,unsigned_int_1);

		v_USBDeviceConfigurationError(unsigned_int_1,int_1);

		v__String(unsigned_int_1);

		short_2 = v_malloc(short_2);

		double_1 = v_USBDeviceConfigure(char_1);

		v_StringFormat(short_2,int_1,char_2);

		double_1 = v_DeviceNameServiceGet();

		char_3 = char_1;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int_1 = v_GetMACAddress(char_2);

		v_MACAddressSet(double_1,unsigned_int_1);

		v_LogWrite(short_1,unsigned_int_2,int_1,int_1,-1 );

		v_USBEndpoint2(long_1,double_2,char_2);

		double_1 = v_SMSC951xDeviceWriteReg(char_2,double_2,unsigned_int_2);

		v_DeviceNameServiceAddDevice(int_2,short_2,char_3);

		long_4 = long_2 * long_3;
	}
	return double_3;
	v_StringGet(double_2);

	v_MACAddressCopyTo(char_2,double_1);

}
void v_SMSC951xDevice( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float_2 = float_1 + float_1;
	float_3 = float_4;
	v_USBDeviceCopy(double_1,unsigned_int_1);

	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_2;
	double_1 = v_SMSC951xDeviceConfigure(long_1);

	short_3 = v_malloc(short_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	char_1 = char_1 * char_1;
	short_5 = short_4 * short_2;
}
int v_uspi_char2int( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	float_3 = float_1 + float_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "8D") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	return int_1;
}
void v_USBMouseDeviceCompletionRoutine( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_USBRequestGetResultLength(double_1);

	double_1 = double_1 * double_2;
	v__USBRequest(double_1);

	long_2 = long_1 * long_2;
	int_1 = v_USBRequestGetStatus(float_1);

	short_1 = short_1 + short_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "^") < 0)
	{
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_2 = int_1 * int_1;
	}
	int_3 = v_uspi_char2int(char_1);

	int_3 = int_3 * int_4;
	double_2 = double_3 + double_2;
	double_4 = double_2 * double_1;
	int_1 = int_3 * int_5;
	v_free();

	float_2 = v_USBMouseDeviceStartRequest(float_2);

}
float v_USBMouseDeviceStartRequest( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	float float_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short_1 = v_malloc(short_2);

	char_3 = char_1 + char_2;
	v_USBRequest(unsigned_int_1);

	v_USBMouseDeviceCompletionRoutine(int_1);

	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	char_3 = char_1 * char_4;
	v_USBRequestSetCompletionRoutine(unsigned_int_1,float_1);

	short_4 = short_2 * short_3;
	int_3 = v_USBDeviceGetHost(float_2);

	float_3 = float_1;
	long_1 = v_DWHCIDeviceSubmitAsyncRequest(long_2,char_3);

	int_4 = int_3 + int_4;
	float_3 = float_1 * float_2;
	return float_2;
}
double v_USBMouseDeviceConfigure( char parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double double_3 = 1;
	long long_2 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	if(1)
	{
		long_1 = v_USBDeviceGetDescriptor(float_1,unsigned_int_1);

		v_LogWrite(short_1,unsigned_int_2,int_1,int_2,-1 );

		int_1 = v_DWHCIDeviceControlMessage(short_1,double_1,unsigned_int_2,char_1,float_2,double_2,float_2,-1 );

		int_3 = v_USBDeviceGetHost(float_3);

		v_StringGet(double_1);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		v_USBDeviceConfigurationError(unsigned_int_2,int_1);

		char_1 = v_USBDeviceGetEndpoint0(unsigned_int_2);

		v_String(short_1);

		double_1 = double_2 + double_3;
	}
	v_USBEndpoint2(long_2,double_2,char_1);

	double_2 = v_USBDeviceConfigure(char_2);

	double_3 = v_DeviceNameServiceGet();

	v__String(unsigned_int_1);

	float_3 = v_USBMouseDeviceStartRequest(float_1);

	char_2 = char_2 * char_2;
	return double_2;
	short_2 = v_malloc(short_2);

	v_StringFormat(short_2,int_1,char_1);

	v_DeviceNameServiceAddDevice(int_2,short_3,char_1);

}
void v_USBMouseDevice( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1 * char_2;
	v_USBDeviceCopy(double_1,unsigned_int_2);

	float_2 = float_1 + float_2;
	int_3 = int_1 * int_2;
	float_2 = float_3 * float_1;
	double_1 = v_USBMouseDeviceConfigure(char_1);

	int_2 = int_4 * int_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	short_1 = v_malloc(short_1);

	long_1 = long_1 + long_2;
	char_1 = char_2 * char_3;
}
void v_KeyMap( char parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_1 = v_memcpy(float_1,double_1);

	char_3 = char_2 + char_3;
	char_2 = char_2 * char_3;
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 + int_2;
}
long v_DWHCIDeviceSubmitAsyncRequest( long parameter_1,char parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long_1 = v_USBEndpointGetType(short_1);

	char_1 = char_2;
	short_1 = v_DWHCIDeviceTransferStageAsync(char_2,float_1,double_1,unsigned_int_1,-1 );

	unsigned_int_2 = unsigned_int_2;
	v_USBEndpointIsDirectionIn(float_1);

	float_2 = float_2 + float_1;
	int_1 = int_1 * int_1;
	double_1 = double_1;
	int_4 = int_2 * int_3;
	double_2 = double_1 + double_1;
	long_1 = v_USBRequestGetBufLen(int_1);

	v_USBRequestSetStatus(long_2,int_4);

	long_2 = long_2 * long_1;
	return long_2;
	unsigned_int_1 = v_USBRequestGetEndpoint();

}
void v_TimerCancelKernelTimer( int parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_1 = float_2;
	short_2 = short_1 * short_1;
	double_2 = double_1 * double_1;
}
void v_CancelKernelTimer( double parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	v_TimerCancelKernelTimer(int_1,char_1);

	float_1 = v_TimerGet();

	int_1 = int_1 + int_1;
}
long v_KeyMapGetString( float parameter_1,double parameter_2,int parameter_3,char parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int_1 = int_1 * int_2;
			int_3 = int_2 * int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_2;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_3;
		}
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_4 * char_1;
	return long_2;
}
void v_KeyMapTranslate( short parameter_1,unsigned int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
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
	long_1 = long_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_2 = 1;
			short_2 = short_1 * short_2;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 * float_2;
		}
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_2 * long_2;
	}
	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	double_2 = double_1 + double_2;
	double_3 = double_1 * double_3;
	int_1 = int_1 * int_1;
}
void v_USBKeyboardDeviceGenerateKeyEvent( unsigned int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_4 = 1;
	float float_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1;
	int_2 = int_1 * int_2;
	double_1 = double_1 + double_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int_1 = int_1 * int_3;
		long_3 = long_1 + long_2;
		v_KeyMapTranslate(short_2,unsigned_int_1,float_1);

		long_4 = long_3 + long_4;
	}
	long_4 = v_KeyMapGetString(float_2,double_1,int_2,char_2);

	unsigned_int_3 = unsigned_int_1;
	if(1)
	{
		int_2 = int_1;
	}
	int_5 = int_3 + int_4;
	float_3 = v_USBKeyboardDeviceGetModifiers();

	double_2 = double_3;
	if(1)
	{
		if(1)
		{
			float_3 = float_3;
		}
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
}
unsigned int v_USBKeyboardDeviceGetKeyCode( double parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double_1 = double_1;
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
float v_USBKeyboardDeviceGetModifiers()
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_2;
	return float_1;
}
void v_USBKeyboardDeviceCompletionRoutine( int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	double double_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_2 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	v_USBRequestGetResultLength(double_1);

	int_1 = int_1;
	v_USBKeyboardDeviceGenerateKeyEvent(unsigned_int_1,unsigned_int_2);

	int_3 = int_2 + int_1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = v_USBKeyboardDeviceGetKeyCode(double_2);

	double_3 = double_3 + double_4;
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
			int int_4 = 1;
			int_4 = int_1 * int_3;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_1;
			}
			if(1)
			{
				double double_5 = 1;
				double_1 = double_5;
			}
			if(1)
			{
				char char_2 = 1;
				v_free();

				char_1 = v_USBKeyboardDeviceStartRequest(unsigned_int_2);

				char_2 = char_2;
				if(1)
				{
					short short_1 = 1;
					v_CancelKernelTimer(double_6);

					short_1 = short_1 * short_1;
				}
				int_5 = int_6;
				float_2 = v_USBKeyboardDeviceGetModifiers();

				double_1 = double_1 * double_4;
			}
			if(1)
			{
				double double_7 = 1;
				double_2 = double_3 * double_4;
				double_7 = double_1 * double_2;
			}
		}
	}
	double_4 = double_2;
	int_7 = int_2 + int_6;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	int_1 = v_USBRequestGetStatus(float_3);

	int_1 = v_StartKernelTimer(short_2,short_3);

	v__USBRequest(double_4);

	int_5 = int_3 * int_1;
}
char v_USBKeyboardDeviceStartRequest( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short_1 = v_malloc(short_2);

	char_1 = char_1 * char_2;
	v_USBKeyboardDeviceCompletionRoutine(int_1);

	double_2 = double_1 * double_1;
	long_1 = v_DWHCIDeviceSubmitAsyncRequest(long_2,char_1);

	int_2 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_USBRequestSetCompletionRoutine(unsigned_int_2,float_1);

	long_2 = long_1 * long_1;
	int_3 = v_USBDeviceGetHost(float_2);

	unsigned_int_3 = unsigned_int_4;
	short_2 = short_2 + short_1;
	v_USBRequest(unsigned_int_3);

	char_1 = char_3 * char_4;
	return char_4;
}
unsigned int v_USBKeyboardDeviceConfigure()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	short short_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	v_USBDeviceConfigurationError(unsigned_int_1,int_1);

	int_2 = v_DWHCIDeviceControlMessage(short_1,double_1,unsigned_int_1,char_1,float_1,double_1,float_2,-1 );

	char_2 = v_USBDeviceGetEndpoint0(unsigned_int_1);

	v_String(short_1);

	v_StringFormat(short_2,int_1,char_2);

	v_DeviceNameServiceAddDevice(int_1,short_2,char_3);

	v_StringGet(double_2);

	char_3 = v_USBKeyboardDeviceStartRequest(unsigned_int_2);

	double_4 = double_2 * double_3;
	long_1 = v_USBDeviceGetDescriptor(float_1,unsigned_int_1);

	v_USBEndpoint2(long_2,double_2,char_1);

	v__String(unsigned_int_2);

	float_1 = float_3 * float_1;
	return unsigned_int_3;
	short_1 = v_malloc(short_3);

	double_3 = v_USBDeviceConfigure(char_4);

	v_LogWrite(short_4,unsigned_int_2,int_1,int_1,-1 );

	int_1 = v_USBDeviceGetHost(float_2);

	double_4 = v_DeviceNameServiceGet();

}
void v_USBKeyboardDevice()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = v_malloc(short_1);

	double_2 = double_1 * double_2;
	double_2 = double_2 * double_2;
	long_1 = long_1 * long_1;
	double_3 = double_3 + double_1;
	char_1 = char_1 * char_1;
	v_KeyMap(char_1);

	int_1 = int_1;
	double_3 = double_2 + double_1;
	unsigned_int_3 = v_USBKeyboardDeviceConfigure();

	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	v_USBDeviceCopy(double_2,unsigned_int_1);

	int_2 = int_1;
	float_1 = float_1 * float_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 * float_1;
	double_1 = double_4 * double_1;
}
double v_DeviceNameServiceGet()
{
	char char_1 = 1;
	double double_1 = 1;
	char_1 = char_1 + char_1;
	return double_1;
}
int v_strcpy( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	return int_1;
}
void v_DeviceNameServiceAddDevice( int parameter_1,short parameter_2,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int_1 = int_2;
	int_2 = int_2 * int_2;
	char_1 = char_1 + char_1;
	char_2 = char_1;
	char_3 = v_strlen(unsigned_int_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_4 = int_3 * int_4;
	float_1 = float_1 * float_2;
	int_5 = v_strcpy(char_3,double_1);

	unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
	short_1 = v_malloc(short_1);

	short_1 = short_2;
	double_1 = double_1 * double_1;
	double_2 = double_1 + double_1;
}
double v_uspi_le2be32()
{
	double double_1 = 1;
	return double_1;
}
int v_DWHCIDeviceTransfer( long parameter_1,int parameter_2,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int_1 = int_1 * int_2;
	v__USBRequest(double_1);

	double_1 = double_1 + double_1;
	v_USBRequestGetResultLength(double_1);

	int_1 = int_1 + int_2;
	int_2 = int_1 * int_3;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		v_USBRequest(unsigned_int_1);

		double_2 = v_DWHCIDeviceSubmitBlockingRequest(long_1,char_1,-1 );

		short_3 = short_1 + short_2;
	}
	long_2 = long_1 * long_2;
	return int_4;
}
int v_USBBulkOnlyMassStorageDeviceCommand( char parameter_1,char parameter_3,short parameter_5,unsigned int parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_1 + float_2;
	float_3 = float_1 * float_2;
	int_1 = int_1;
	char_1 = v_memcpy(float_1,double_1);

	short_1 = short_1;
	long_1 = long_2;
	float_2 = float_1 * float_2;
	float_3 = v_memset(int_2,float_1);

	int_1 = v_USBDeviceGetHost(float_1);

	int_1 = int_1;
	short_2 = short_2 * short_2;
	long_3 = long_2 + long_3;
	long_1 = long_4 * long_2;
	double_2 = double_1 + double_1;
	double_3 = double_4;
	v_LogWrite(short_1,unsigned_int_1,int_1,int_1,-1 );

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_DWHCIDeviceTransfer(long_2,int_2,char_1);

	char_2 = char_2;
	int_1 = int_3 * int_1;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_2 = short_3 + short_4;
	}
	double_2 = double_3 + double_5;
	if(1)
	{
		int int_4 = 1;
		int_1 = int_4 * int_5;
		if(1)
		{
			long long_5 = 1;
			long_5 = long_5 + long_4;
		}
	}
	char_1 = char_1 * char_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	}
	return int_5;
}
void v_USBEndpoint2( long parameter_1,double parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_4 = 1;
	char char_6 = 1;
	float float_2 = 1;
	long long_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_6 = 1;
	short_2 = short_1 * short_1;
	char_3 = char_1 + char_2;
	char_5 = char_3 * char_4;
	char_1 = char_5 + char_4;
	int_1 = int_1;
	double_1 = double_1 * double_1;
	int_3 = int_1 + int_2;
	long_3 = long_1 * long_2;
	unsigned_int_1 = v_USBDeviceGetSpeed(float_1);

	long_2 = long_3 * long_4;
	int_1 = int_1 * int_1;
	char_6 = char_3;
	float_2 = float_1 * float_2;
	long_5 = long_1 + long_4;
	double_2 = double_2;
	double_1 = double_1 * double_3;
	double_1 = double_3 + double_1;
	long_6 = long_6;
	if(1)
	{
		double double_4 = 1;
		long long_7 = 1;
		double_4 = double_2 * double_4;
		if(1)
		{
			long long_8 = 1;
			long_8 = long_4 + long_7;
		}
		if(1)
		{
			long long_9 = 1;
			long_7 = long_9 * long_9;
		}
		if(1)
		{
			double double_5 = 1;
			if(1)
			{
				double_3 = double_3 * double_2;
			}
			long_4 = long_3 * long_5;
			double_5 = double_4 * double_3;
			if(1)
			{
				float_2 = float_1 + float_1;
			}
		}
	}
}
char v_USBBulkOnlyMassStorageDeviceConfigure( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	char char_4 = 1;
	v_USBDeviceConfigurationError(unsigned_int_1,int_1);

	v_String(short_1);

	v_DeviceNameServiceAddDevice(int_2,short_2,char_1);

	double_1 = double_1 + double_1;
	short_1 = v_malloc(short_3);

	v_MsDelay(char_2);

	double_1 = v_uspi_le2be32();

	double_1 = v_DeviceNameServiceGet();

	v__String(unsigned_int_2);

	int_2 = int_3 + int_3;
	v_USBEndpoint2(long_1,double_1,char_1);

	unsigned_int_1 = unsigned_int_1;
	long_1 = v_USBDeviceGetDescriptor(float_1,unsigned_int_3);

	int_4 = v_USBBulkOnlyMassStorageDeviceCommand(char_3,char_2,short_3,unsigned_int_2);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	v_LogWrite(short_1,unsigned_int_4,int_5,int_4,-1 );

	v_StringFormat(short_3,int_2,char_2);

	v_StringGet(double_2);

	char_2 = char_2 + char_2;
	return char_3;
	double_1 = v_USBDeviceConfigure(char_4);

}
void v_USBBulkOnlyMassStorageDevice( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_2;
	int_5 = int_3 + int_4;
	char_1 = v_USBBulkOnlyMassStorageDeviceConfigure(double_1);

	char_1 = char_1 * char_1;
	int_5 = int_5;
	char_3 = char_2 * char_1;
	int_1 = int_1;
	double_2 = double_2;
	float_2 = float_1 * float_1;
	v_USBDeviceCopy(double_1,unsigned_int_1);

}
char v_USBStandardHubEnumeratePorts( unsigned int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	float float_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	float float_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	float float_6 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	char char_7 = 1;
	char char_8 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_6 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_12 = 1;
	float float_7 = 1;
	char char_9 = 1;
	double_1 = double_1;
	int_1 = int_1 * int_1;
	int_1 = int_2 + int_1;
	double_3 = double_2 * double_1;
	char_2 = char_1 * char_1;
	char_1 = v_USBDeviceInitialize(double_2);

	short_1 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char_2 = char_2 * char_2;
		}
	}
	int_3 = int_3 * int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_3 = 1;
		char_2 = v_USBStandardHubGetDeviceNames(int_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		float_2 = float_1 * float_2;
		float_1 = float_2 * float_3;
		if(1)
		{
			int_4 = v_USBDeviceGetHost(float_4);

			double_2 = double_4 + double_4;
			float_1 = float_2 * float_1;
		}
		char_2 = char_1 * char_2;
		if(1)
		{
			v__USBDevice(short_1);

			int_1 = int_3;
		}
		if(1)
		{
			double_4 = double_4 * double_5;
			int_2 = int_1 + int_5;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
		}
		if(1)
		{
			char_3 = v_USBDeviceGetEndpoint0(unsigned_int_3);

			short_1 = short_2 * short_1;
			float_2 = float_5 * float_4;
		}
		if(1)
		{
			int_5 = int_5;
			short_2 = short_1 * short_3;
		}
		short_1 = short_1 * short_4;
		if(1)
		{
			int_3 = int_4 * int_2;
		}
		if(1)
		{
			double_5 = double_4 + double_2;
		}
		if(1)
		{
			char_4 = char_4 + char_4;
		}
		char_2 = char_3 + char_5;
		char_2 = char_6 * char_5;
		double_3 = v_USBDeviceGetAddress(char_6);

		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		v_USBDevice(float_6);

		double_1 = double_3 + double_6;
		if(1)
		{
			v_MsDelay(char_1);

			unsigned_int_1 = unsigned_int_4;
			v_StringGet(double_2);

			double_7 = double_1 * double_5;
			double_7 = double_1 * double_7;
			short_4 = short_1;
		}
		double_1 = double_3 + double_6;
		char_5 = char_3 + char_1;
		v_free();

		char_7 = char_5;
		char_8 = char_4 * char_6;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			double_7 = double_2 + double_8;
		}
		int_4 = int_1 + int_2;
		if(1)
		{
			double_4 = double_9 + double_9;
			int_5 = int_4;
			float_1 = v_USBDeviceFactoryGetDevice(double_4,-1 );

			short_3 = short_4 + short_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
				double_8 = double_9 * double_5;
			}
			char_3 = char_2 + char_5;
		}
		if(1)
		{
			short short_5 = 1;
			double double_10 = 1;
			v_LogWrite(short_2,unsigned_int_1,int_1,int_3,-1 );

			char_2 = char_1;
			int_3 = int_6 + int_1;
			short_3 = v_malloc(short_3);

			short_2 = short_1 + short_5;
			double_10 = double_4 + double_5;
		}
	}
	double_11 = double_7 + double_4;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double_1 = double_8 * double_9;
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		int_4 = int_2 * int_6;
		char_6 = char_5;
	}
	v__String(unsigned_int_3);

	double_11 = double_8 + double_9;
	float_6 = float_2 * float_5;
	char_7 = char_4 + char_2;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		if(1)
		{
			double_3 = double_6 * double_7;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
			int_4 = v_DWHCIDeviceControlMessage(short_4,double_12,unsigned_int_5,char_6,float_7,double_5,float_2,-1 );

			unsigned_int_5 = unsigned_int_6 * unsigned_int_1;
			char_8 = char_4 * char_1;
		}
	}
	return char_9;
}
char v_USBConfigurationParserGetDescriptor( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_2;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_2 + double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return char_1;
}
long v_USBDeviceGetDescriptor( float parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float_1 = float_1 * float_1;
	char_1 = v_USBConfigurationParserGetDescriptor(short_1,char_2);

	long_1 = long_1 * long_1;
	return long_1;
}
void v_USBDeviceGetDeviceDescriptor( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_2;
	char_2 = char_1 * char_2;
}
double v_USBStandardHubConfigure( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	v_USBDeviceGetDeviceDescriptor(unsigned_int_1);

	int_1 = v_DWHCIDeviceControlMessage(short_1,double_1,unsigned_int_2,char_1,float_1,double_2,float_2,-1 );

	short_1 = v_malloc(short_2);

	v_free();

	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	v_LogWrite(short_2,unsigned_int_2,int_1,int_1,-1 );

	int_1 = int_2;
	long_1 = v_USBDeviceGetDescriptor(float_3,unsigned_int_1);

	v_USBDeviceConfigurationError(unsigned_int_1,int_1);

	int_2 = v_USBDeviceGetHost(float_3);

	char_1 = v_USBDeviceGetEndpoint0(unsigned_int_4);

	unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
	double_1 = v_USBDeviceConfigure(char_1);

	float_4 = float_2 * float_3;
	return double_2;
	int_1 = v_DWHCIDeviceGetDescriptor(double_2,int_3,char_2,long_1,unsigned_int_3,char_3);

	char_3 = v_USBStandardHubEnumeratePorts(unsigned_int_3);

}
void v_USBEndpointCopy( char parameter_1,long parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_2;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_2;
	int_3 = int_3 * int_4;
	int_4 = int_4 * int_3;
	float_1 = float_2 * float_2;
	unsigned_int_2 = unsigned_int_2;
	int_3 = int_4 + int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
}
void v_USBStringCopy( unsigned int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	long_1 = long_1 * long_1;
	short_1 = v_malloc(short_2);

	char_1 = char_1 + char_2;
	if(1)
	{
		long long_2 = 1;
		float float_1 = 1;
		float float_3 = 1;
		long_3 = long_1 + long_2;
		float_1 = float_1;
		char_1 = v_memcpy(float_2,double_1);

		float_2 = float_3;
	}
	int_1 = int_2 * int_3;
	double_1 = double_1 + double_1;
	v_String2(long_3,char_3);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	v_StringGet(double_1);

	long_1 = long_3 * long_3;
}
void v_USBDeviceCopy( double parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	double_2 = double_1 + double_1;
	short_1 = short_2;
	double_1 = double_2 * double_3;
	float_1 = float_1 * float_2;
	char_3 = char_1 + char_2;
	double_3 = double_2 + double_1;
	int_2 = int_1 + int_2;
	double_1 = double_4 * double_4;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_2 + char_2;
	int_2 = int_3 * int_3;
	v_USBStringCopy(unsigned_int_2,float_2);

	v_USBConfigurationParser(char_2);

	double_3 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	long_3 = long_1 + long_2;
	int_2 = int_3 + int_2;
	int_3 = int_3 * int_2;
	int_4 = int_3 + int_4;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "_") < 0)
	{
		long_2 = long_3 + long_2;
		double_4 = double_5 * double_5;
		int_4 = int_3 * int_4;
	}
	if(1)
	{
		double double_6 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_4 = 1;
		short_1 = v_malloc(short_3);

		v_USBEndpointCopy(char_3,long_2,double_5);

		char_1 = char_1;
		char_2 = v_memcpy(float_1,double_4);

		double_1 = double_6 + double_2;
		int_5 = int_5 + int_5;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		int_5 = int_1 + int_2;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			int_5 = int_3 + int_1;
			double_2 = double_4 + double_2;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
		}
	}
}
void v_USBStandardHub( long parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	v_USBDeviceCopy(double_1,unsigned_int_1);

	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_2 + double_1;
	double_3 = v_USBStandardHubConfigure(char_2);

	short_2 = short_1 + short_2;
	short_3 = short_3 * short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		char_2 = char_1 + char_2;
		int_1 = int_1 * int_2;
	}
}
double v_GetDevice( double parameter_1,long parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	long_2 = long_1 * long_1;
	double_3 = double_1 * double_2;
	int_1 = int_1 * int_2;
	char controller4vul_307[3];
	fgets(controller4vul_307 ,3 ,stdin);
	if( strcmp( controller4vul_307, ">v") > 0)
	{
		v_LAN7800Device(uni_para);

		double_3 = double_3 + double_1;
		double_5 = double_4 * double_1;
		double_5 = double_4 * double_1;
		short_1 = short_1 * short_1;
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "[") < 0)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		short_2 = short_1;
		double_2 = double_6 * double_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		long long_3 = 1;
		float_2 = float_1 + float_1;
		int_1 = int_1 + int_2;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
		long_3 = long_2;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_4;
		short_1 = short_3 * short_1;
		char_2 = char_1 * char_1;
		double_2 = double_3 + double_5;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		int_2 = int_2;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
		double_1 = double_6 + double_6;
		unsigned_int_5 = unsigned_int_4;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		long_1 = long_2 + long_2;
		double_4 = double_1 * double_1;
		short_2 = short_2 * short_1;
	}
	if(1)
	{
		short short_4 = 1;
		char_1 = char_1 * char_1;
		short_4 = short_1 + short_3;
		double_3 = double_1 * double_6;
		double_2 = double_2 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		char char_3 = 1;
		int int_3 = 1;
		unsigned_int_7 = unsigned_int_5 + unsigned_int_7;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
		char_2 = char_2 * char_3;
		int_3 = int_1 * int_3;
	}
	if(1)
	{
		long_4 = long_1;
	}
	long_4 = long_2;
	double_4 = double_6 + double_2;
	return double_1;
}
float v_USBDeviceFactoryGetDevice( double parameter_1,int uni_para)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_306[2];
	fgets(controller4vul_306 ,2 ,stdin);
	if( strcmp( controller4vul_306, "3") > 0)
	{
		double_1 = v_GetDevice(double_2,long_2,uni_para);

	}
	long_3 = long_2 * long_3;
	return float_1;
}
void v_StringAppend( float parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int_2 = int_1 * int_1;
	short_3 = short_1 * short_2;
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		short_5 = short_4 * short_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short short_6 = 1;
		short short_7 = 1;
		int_2 = int_1 + int_2;
		short_7 = short_2 + short_6;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	long_1 = long_1 * long_1;
	int_5 = int_3 * int_4;
}
unsigned int v_StringGetLength( double parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	return unsigned_int_1;
}
int v_StringCompare( double parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
unsigned int v_StringSet( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	long_2 = long_1 + long_1;
	int_3 = int_1 + int_2;
	return unsigned_int_3;
}
long v_USBDeviceGetName( int parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_2;
	int_1 = int_2;
	v_String(short_1);

	int_1 = int_2 + int_3;
	double_2 = double_1 * double_1;
	double_3 = double_2;
	double_3 = double_3 + double_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	int_4 = int_1 + int_1;
	int_4 = int_3;
	short_1 = v_malloc(short_3);

	v_StringFormat(short_4,int_3,char_1);

	int_1 = int_4 * int_3;
	double_1 = double_1 * double_2;
	if(1)
	{
		int_1 = int_4;
	}
	double_1 = double_1 + double_4;
	double_4 = double_3 * double_4;
	int_4 = int_3 * int_3;
	long_1 = long_1 * long_2;
	int_1 = int_1 * int_4;
	return long_2;
	unsigned_int_3 = v_StringSet(double_1,int_2);

}
char v_USBStandardHubGetDeviceNames( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_5 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	char char_5 = 1;
	long_1 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_StringGet(double_1);

	v__String(unsigned_int_2);

	long_4 = long_1 + long_3;
	v_String(short_1);

	char_1 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double_1 = double_1 + double_2;
		char_3 = char_1 * char_3;
		if(1)
		{
			if(1)
			{
				char char_4 = 1;
				long_2 = v_USBDeviceGetName(int_1,double_1);

				int_1 = v_StringCompare(double_1,long_5);

				char_4 = char_2 + char_1;
			}
			short_1 = v_malloc(short_2);

			unsigned_int_2 = v_StringSet(double_3,int_2);

			unsigned_int_2 = unsigned_int_2;
		}
		char_1 = char_3 + char_1;
		unsigned_int_3 = v_StringGetLength(double_3);

		v_StringAppend(float_1,double_4);

		v_free();

		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		int_2 = int_2;
	}
	return char_5;
}
void v__USBString( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_2 = char_1 * char_1;
	float_2 = float_1 * float_1;
	v__String(unsigned_int_1);

	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_2;
	if(1)
	{
		double double_3 = 1;
		int_2 = int_2 + int_2;
		v_free();

		double_2 = double_3;
	}
	int_1 = int_2 * int_2;
}
void v__USBEndpoint( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
}
void v__USBConfigurationParser()
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_2 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
}
void v__USBDevice( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	v__USBEndpoint(float_1);

	float_2 = float_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_1 = long_1;
		long_1 = long_2 * long_2;
		long_3 = long_3;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		v__USBString(float_4);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_2;
		char_1 = char_1 * char_1;
		double_3 = double_2 * double_1;
	}
	int_2 = int_1 * int_1;
	int_2 = int_2 * int_1;
	double_3 = double_3 * double_1;
	v__USBConfigurationParser();

	char_2 = char_3 * char_1;
	v_free();

}
void v_debug_hexdump( short parameter_1,double parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double_2 = double_1 + double_1;
	short_1 = short_1 + short_1;
	v_LoggerWrite(short_1,short_2,int_1,char_1,char_1);

	double_1 = double_1 * double_3;
	int_1 = int_2;
	long_1 = v_LoggerGet();

}
void v_DebugHexdump( float parameter_1,short parameter_2,float parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	v_debug_hexdump(short_1,double_1,float_1);

	short_1 = short_1 * short_1;
}
void v_USBConfigurationParserError( char parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	v_LogWrite(short_1,unsigned_int_1,int_1,int_1,-1 );

	unsigned_int_1 = unsigned_int_1;
	v_DebugHexdump(float_1,short_2,float_1);

	unsigned_int_1 = unsigned_int_1;
	char_2 = char_1 * char_1;
	short_3 = short_2;
}
void v_USBDeviceConfigurationError( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 * char_2;
	int_1 = int_1 + int_1;
	int_3 = int_2 + int_1;
	v_USBConfigurationParserError(char_3,unsigned_int_1);

}
double v_USBConfigurationParserIsValid( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return double_1;
}
void v_USBConfigurationParser( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
}
void v_String2( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_2;
	double_1 = double_1;
	short_1 = short_1;
}
unsigned int v_USBStringGetFromDescriptor( long parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int_3 = int_1 + int_2;
	double_1 = double_1 * double_2;
	if(1)
	{
		char_1 = char_1 + char_2;
	}
	int_2 = int_2;
	v__String(unsigned_int_1);

	float_1 = float_1 * float_2;
	char_3 = char_2 + char_1;
	if(1)
	{
	}
	char_4 = v_USBDeviceGetEndpoint0(unsigned_int_2);

	double_1 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
		short_1 = short_1;
		short_1 = short_1 * short_1;
		v_free();

		int_1 = v_USBDeviceGetHost(float_1);

		char_3 = char_2 * char_4;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	double_3 = double_3 + double_3;
	double_4 = double_5;
	double_1 = double_5 + double_3;
	int_1 = v_DWHCIDeviceControlMessage(short_2,double_3,unsigned_int_3,char_5,float_2,double_6,float_1,-1 );

	int_2 = int_1;
	long_1 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int_4 = int_2 * int_2;
		if(1)
		{
			char char_6 = 1;
			v_String2(long_2,char_5);

			char_6 = char_6;
		}
		short_1 = v_malloc(short_2);

		short_4 = short_1 * short_3;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	int_5 = int_1 + int_3;
	double_2 = double_1;
	long_1 = long_2 * long_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
	unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
	return unsigned_int_2;
}
char v_USBDeviceGetEndpoint0( unsigned int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double_1 = double_1 * double_1;
	float_2 = float_1 + float_2;
	return char_1;
}
int v_USBDeviceGetHost( float parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_1;
	long_1 = long_1 * long_1;
	return int_1;
}
float v_USBStringGetLanguageID( double parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_6 = 1;
	char char_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_3 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
	int_3 = int_1 + int_2;
	if(1)
	{
		v_free();

		short_1 = short_2;
	}
	int_2 = int_4 + int_2;
	if(1)
	{
		int int_5 = 1;
		int_5 = int_5;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "<G") > 0)
	{
		char_2 = char_1 + char_2;
		long_1 = long_1 * long_1;
		int_1 = v_USBDeviceGetHost(float_1);

		int_3 = int_2 * int_4;
		if(1)
		{
			double double_2 = 1;
			double_1 = double_1 + double_2;
		}
		if(1)
		{
			char_1 = v_USBDeviceGetEndpoint0(unsigned_int_3);

			long_3 = long_2 + long_3;
		}
	}
	float_1 = float_2 + float_2;
	double_1 = double_1 + double_1;
	long_2 = long_2 + long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short_1 = short_3 * short_1;
		}
	}
	int_1 = v_DWHCIDeviceGetDescriptor(double_3,int_6,char_3,long_4,unsigned_int_1,char_2);

	long_4 = long_5;
	short_3 = v_malloc(short_2);

	long_5 = long_1 * long_1;
	return float_3;
}
void v_USBDeviceSetAddress( unsigned int parameter_1,char parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
}
short v_DWHCIDeviceSetAddress( unsigned int parameter_1,char parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char_2 = char_1 * char_2;
	if(1)
	{
	}
	int_1 = v_DWHCIDeviceControlMessage(short_1,double_1,unsigned_int_1,char_2,float_1,double_2,float_2,-1 );

	int_2 = int_1 + int_2;
	return short_2;
	v_MsDelay(char_3);

}
void v_USBEndpointSetMaxPacketSize( unsigned int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_2 = short_1 + short_2;
	float_2 = float_1 * float_1;
}
int v_DWHCIDeviceGetDescriptor( double parameter_1,int parameter_2,char parameter_3,long parameter_4,unsigned int parameter_6,char parameter_7)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = v_DWHCIDeviceControlMessage(short_1,double_1,unsigned_int_1,char_1,float_1,double_1,float_1,-1 );

	int_2 = int_2 * int_3;
	return int_3;
}
char v_USBDeviceInitialize( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_6 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_7 = 1;
	double_3 = double_1 * double_2;
	char_3 = char_1 + char_2;
	double_4 = v_USBConfigurationParserIsValid(char_3);

	double_1 = double_2 * double_3;
	v_USBDeviceSetAddress(unsigned_int_1,char_1);

	float_1 = float_1 * float_2;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	float_2 = float_3 + float_1;
	if(1)
	{
		int_2 = int_1 + int_2;
		int_2 = int_2;
		double_2 = double_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
		v_free();

		int_2 = int_2 * int_1;
		long_3 = long_1 + long_1;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_3;
		float_3 = float_1 + float_3;
	}
	double_4 = double_2 * double_4;
	if(1)
	{
		char_3 = char_4;
	}
	if(1)
	{
		double_4 = double_2 + double_3;
	}
	char_4 = char_1 * char_3;
	if(1)
	{
		double_5 = double_2 * double_3;
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
		}
		if(1)
		{
			float float_4 = 1;
			float_2 = float_4;
		}
	}
	int_1 = v_DWHCIDeviceGetDescriptor(double_6,int_2,char_1,long_3,unsigned_int_1,char_3);

	short_1 = short_1 * short_2;
	long_1 = long_3 + long_2;
	v_USBConfigurationParser(char_4);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		long long_4 = 1;
		v_USBEndpointSetMaxPacketSize(unsigned_int_1,unsigned_int_2);

		unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
		long_3 = long_4 * long_2;
		short_3 = short_2 * short_1;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_3;
		long_5 = long_5 * long_3;
		int_3 = int_2 * int_1;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
	v_LogWrite(short_1,unsigned_int_5,int_4,int_5,-1 );

	int_3 = int_5 * int_5;
	double_3 = double_6;
	int_1 = int_4 + int_6;
	if(1)
	{
		char char_5 = 1;
		char char_7 = 1;
		char char_8 = 1;
		short_2 = v_malloc(short_2);

		char_5 = char_1;
		char_8 = char_6 + char_7;
		unsigned_int_1 = unsigned_int_5;
	}
	short_3 = v_DWHCIDeviceSetAddress(unsigned_int_1,char_2,short_4);

	char_6 = char_6;
	unsigned_int_4 = v_USBStringGetFromDescriptor(long_5,int_1,int_2);

	short_1 = short_4 * short_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		v_USBDeviceConfigurationError(unsigned_int_6,int_7);

		unsigned_int_2 = unsigned_int_1;
	}
	return char_2;
	float_1 = v_USBStringGetLanguageID(double_5);

}
void v_USBString( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short_1 = v_malloc(short_2);

	long_1 = long_1 + long_1;
	int_1 = int_2;
	long_3 = long_1 * long_2;
	v_String(short_1);

	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_2 + int_3;
	int_4 = int_5;
}
void v_USBEndpoint( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_4;
	int_1 = int_1;
	float_1 = float_1 * float_2;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	long_1 = long_1 + long_1;
}
void v__USBRequest( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_1 + int_1;
	char_1 = char_1 * char_1;
	double_2 = double_1 * double_1;
}
void v_USBRequestGetResultLength( double parameter_1)
{
	double double_1 = 1;
	double_1 = double_1;
	double_1 = double_1 * double_1;
}
void v_USBEndpointIsDirectionIn( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_2;
}
int v_USBRequestGetStatus( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
void v_DWHCIDeviceEnableChannelInterrupt( float parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = float_1 + float_2;
	int_2 = int_1 * int_1;
	char_2 = char_1 * char_1;
	int_1 = int_2;
	v_DWHCIRegisterRead(long_1);

	v__DWHCIRegister(char_3);

	int_3 = int_2 + int_1;
	v_uspi_EnterCritical();

	int_2 = int_2 + int_3;
	v_DWHCIRegisterOr(double_1,int_2);

	float_4 = float_2 + float_3;
	v_DWHCIRegister(unsigned_int_1);

	double_3 = double_2 * double_1;
	v_uspi_LeaveCritical();

	double_3 = double_3;
	v_DWHCIRegisterWrite(unsigned_int_2);

}
unsigned int v_DWHCIFrameSchedulerNoSplitIsOddFrame( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
	long_2 = long_1 + long_2;
	return unsigned_int_3;
}
void v_DWHCIFrameSchedulerNoSplitWaitForFrame( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	v_DWHCIRegister(unsigned_int_1);

	v_DWHCIRegisterRead(long_1);

	v__DWHCIRegister(char_1);

}
void v_DWHCIFrameSchedulerNoSplitTransactionComplete( int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double_1 = double_1;
}
char v_DWHCIFrameSchedulerNoSplitCompleteSplit( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float_1 = float_2;
	return char_1;
}
void v_DWHCIFrameSchedulerNoSplitStartSplit( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 * double_1;
}
void v__DWHCIFrameSchedulerNoSplit( unsigned int parameter_1)
{
}
void v_DWHCIFrameSchedulerNoSplit( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_3 = double_1 * double_2;
	v_DWHCIFrameSchedulerNoSplitTransactionComplete(int_1,double_2);

	unsigned_int_1 = v_DWHCIFrameSchedulerNoSplitIsOddFrame(char_1);

	double_3 = double_2 + double_2;
	v_DWHCIFrameSchedulerNoSplitWaitForFrame(long_1);

	double_3 = double_3 * double_4;
	v__DWHCIFrameSchedulerNoSplit(unsigned_int_2);

	int_1 = int_1 * int_1;
	int_2 = int_1 + int_2;
	int_3 = int_1 + int_1;
	int_5 = int_4 + int_2;
	v_DWHCIFrameSchedulerNoSplitStartSplit(char_1);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
	char_2 = v_DWHCIFrameSchedulerNoSplitCompleteSplit(short_1);

	float_3 = float_1 * float_2;
}
float v_DWHCIFrameSchedulerNonPeriodicIsOddFrame( int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
void v_DWHCIFrameSchedulerNonPeriodicWaitForFrame( float parameter_1)
{
}
void v_DWHCIFrameSchedulerNonPeriodicTransactionComplete( long parameter_1,float parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	int_1 = int_2;
	int_3 = int_2 + int_1;
	long_1 = long_1 + long_2;
	short_1 = short_1 + short_1;
	double_1 = double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	char controller4vul_315[2];
	fgets(controller4vul_315 ,2 ,stdin);
	if( strcmp( controller4vul_315, "1") < 0)
	{
		char controller4vul_316[2];
		fgets(controller4vul_316 ,2 ,stdin);
		if( strcmp( controller4vul_316, "n") < 0)
		{
			v_LogWrite(short_2,unsigned_int_3,int_1,int_1,uni_para);

			long_2 = long_2;
		}
		if(1)
		{
			int_3 = int_2 + int_1;
		}
	}
	if(1)
	{
		long long_3 = 1;
		if(1)
		{
			short_1 = short_2 * short_3;
			long_3 = long_3 * long_2;
		}
		if(1)
		{
			long long_4 = 1;
			long_3 = long_2 + long_4;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	}
	short_2 = short_4 + short_1;
	float_1 = float_1;
	short_3 = short_4 * short_3;
}
char v_DWHCIFrameSchedulerNonPeriodicCompleteSplit( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_6 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_1;
	v_usDelay(double_3);

	float_2 = float_1 * float_2;
	double_3 = double_4 + double_5;
	short_2 = short_1 * short_1;
	short_2 = short_1 * short_3;
	short_2 = short_4 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	long_2 = long_1 * long_2;
	int_4 = int_3 + int_3;
	double_6 = double_6 * double_3;
	return char_1;
}
void v_DWHCIFrameSchedulerNonPeriodicStartSplit( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
}
void v__DWHCIFrameSchedulerNonPeriodic( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
}
void v_DWHCIFrameSchedulerNonPeriodic( unsigned int parameter_1,int uni_para)
{
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	v_DWHCIFrameSchedulerNonPeriodicTransactionComplete(long_1,float_1,uni_para);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_1;
	double_1 = double_1 * double_1;
	int_1 = int_2;
	long_3 = long_2 * long_1;
	long_5 = long_2 + long_4;
	long_4 = long_3 + long_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
}
int v_DWHCIFrameSchedulerPeriodicIsOddFrame()
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_2;
	long_1 = long_1 + long_2;
	double_2 = double_1 + double_1;
	return int_1;
}
void v_DWHCIFrameSchedulerPeriodicWaitForFrame( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	v_DWHCIRegisterRead(long_1);

	long_3 = long_2 * long_3;
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_1;
		}
		if(1)
		{
			v_DWHCIRegister(unsigned_int_1);

			v__DWHCIRegister(char_1);

			char_1 = char_1 + char_1;
		}
	}
	double_1 = double_1;
}
void v_DWHCIFrameSchedulerPeriodicTransactionComplete( long parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_2 = char_1 + char_1;
	v_LogWrite(short_1,unsigned_int_1,int_1,int_2,-1 );

	int_1 = int_3 + int_3;
	unsigned_int_2 = unsigned_int_1;
	int_1 = int_3 * int_3;
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		if(1)
		{
			int int_4 = 1;
			unsigned int unsigned_int_4 = 1;
			int_4 = int_4 + int_2;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
		}
		if(1)
		{
			char_2 = char_2 * char_2;
		}
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_2;
		v_usDelay(double_3);

		double_3 = double_2 + double_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 * float_2;
		double_1 = double_3;
	}
	float_1 = float_2 + float_1;
	char_2 = char_2;
	float_2 = float_2 + float_2;
}
double v_DWHCIFrameSchedulerPeriodicCompleteSplit( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	float_1 = float_1;
	double_1 = double_1 + double_2;
	float_4 = float_2 * float_3;
	float_4 = float_2 * float_3;
	long_2 = long_1 * long_2;
	float_1 = float_4 + float_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	double_3 = double_1 * double_3;
	short_1 = short_2;
	char_2 = char_2 * char_2;
	int_2 = int_1 * int_1;
	return double_2;
}
void v_DWHCIFrameSchedulerPeriodicStartSplit()
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_2;
	double_2 = double_1 + double_1;
	float_1 = float_2;
	int_1 = int_2;
}
void v__DWHCIFrameSchedulerPeriodic( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_1 * double_2;
	double_1 = double_2 * double_1;
}
void v_DWHCIFrameSchedulerPeriodic()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double_1 = double_1;
	v_DWHCIFrameSchedulerPeriodicStartSplit();

	double_3 = double_2 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	v_DWHCIFrameSchedulerPeriodicTransactionComplete(long_1,char_1);

	char_3 = char_2 + char_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	int_1 = v_DWHCIFrameSchedulerPeriodicIsOddFrame();

	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	v__DWHCIFrameSchedulerPeriodic(long_1);

	int_2 = int_1 * int_2;
	int_2 = int_2 * int_1;
	v_DWHCIFrameSchedulerPeriodicWaitForFrame(float_1);

	int_4 = int_1 + int_3;
	double_4 = v_DWHCIFrameSchedulerPeriodicCompleteSplit(short_1);

}
short v_USBRequestGetBuffer()
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_1;
	int_1 = int_1 + int_2;
	return short_1;
}
double v_USBEndpointGetMaxPacketSize( unsigned int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_1;
	return double_1;
}
unsigned int v_USBDeviceGetSpeed( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 * double_2;
	return unsigned_int_1;
}
float v_USBEndpointGetDevice( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 * long_1;
	return float_1;
}
void v_DWHCITransferStageData( float parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	char char_2 = 1;
	double double_6 = 1;
	long long_3 = 1;
	double double_7 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_8 = 1;
	v_DWHCIFrameSchedulerNonPeriodic(unsigned_int_1,uni_para);

	int_3 = int_1 * int_2;
	short_2 = short_1 * short_1;
	double_1 = double_2;
	int_1 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1 * char_1;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	float_4 = float_2 + float_3;
	double_1 = double_1 + double_3;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	double_1 = double_2 * double_2;
	double_1 = double_4 + double_5;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_3;
	char_1 = char_2 + char_1;
	double_6 = double_4 + double_3;
	short_1 = short_2 + short_1;
	if(1)
	{
		if(1)
		{
			double_6 = double_4 + double_4;
			long_1 = long_3;
		}
		if(1)
		{
			char char_3 = 1;
			double double_8 = 1;
			char_3 = char_1 * char_2;
			double_1 = double_7 + double_8;
		}
		int_4 = int_2 + int_3;
		if(1)
		{
			if(1)
			{
				int_5 = int_2 + int_4;
			}
			if(1)
			{
				long_3 = long_1;
			}
			long_4 = long_1 * long_1;
		}
		if(1)
		{
			double_4 = double_4 + double_3;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		int_3 = int_5 * int_1;
		long_2 = long_4 + long_2;
		float_4 = float_3 * float_1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
		int_2 = int_6 * int_4;
		int_2 = int_2 * int_6;
		unsigned_int_3 = unsigned_int_6 * unsigned_int_7;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
	}
	char_1 = char_1;
	long_5 = long_3 * long_5;
	if(1)
	{
		if(1)
		{
			int int_7 = 1;
			int int_8 = 1;
			int_7 = int_1 + int_6;
			int_6 = int_8 + int_3;
		}
		if(1)
		{
			long long_6 = 1;
			double_7 = double_7;
			long_6 = long_1 * long_3;
		}
		unsigned_int_8 = unsigned_int_6 + unsigned_int_3;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_5 = unsigned_int_8;
			short_1 = short_1 + short_1;
			unsigned_int_4 = unsigned_int_4;
		}
	}
}
double v_DWHCIDeviceAllocateChannel( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_2;
	int_1 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_1 = 1;
			unsigned_int_1 = unsigned_int_1;
			v_uspi_LeaveCritical();

			double_2 = double_1 + double_1;
		}
		int_2 = int_3 * int_3;
	}
	int_3 = int_1;
	return double_2;
	v_uspi_EnterCritical();

}
short v_DWHCIDeviceTransferStageAsync( char parameter_1,float parameter_2,double parameter_3,unsigned int parameter_4,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	short_1 = short_2;
	short_4 = short_2 + short_3;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	double_2 = double_1 + double_1;
	int_2 = int_1 * int_1;
	int_3 = int_2 + int_1;
	char_2 = char_2 + char_1;
	int_3 = int_3 * int_4;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	char controller4vul_313[2];
	fgets(controller4vul_313 ,2 ,stdin);
	if( strcmp( controller4vul_313, ">") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_5 = 1;
		float float_3 = 1;
		char controller4vul_314[2];
		fgets(controller4vul_314 ,2 ,stdin);
		if( strcmp( controller4vul_314, "S") > 0)
		{
			double double_3 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_4 = 1;
			char char_4 = 1;
			v_DWHCITransferStageData(float_2,uni_para);

			double_1 = double_3;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			double_1 = double_4 + double_4;
			char_2 = char_4 * char_4;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		int_3 = int_2 * int_5;
		unsigned_int_3 = unsigned_int_1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
		short_3 = short_5 * short_5;
		float_1 = float_1 * float_3;
	}
	unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
	return short_3;
}
void v_DWHCIDeviceCompletionRoutine( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	short_1 = short_2;
	int_1 = int_1;
}
void v_USBRequestSetCompletionRoutine( unsigned int parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	float float_2 = 1;
	int_3 = int_1 * int_2;
	float_1 = float_1 + float_1;
	double_1 = double_2;
	int_4 = int_1 * int_3;
	float_1 = float_2;
}
double v_DWHCIDeviceTransferStage( float parameter_1,short parameter_2,float parameter_3,double parameter_4,int uni_para)
{
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	short_1 = v_DWHCIDeviceTransferStageAsync(char_1,float_1,double_1,unsigned_int_1,uni_para);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	long_2 = long_1 * long_1;
	return double_2;
}
long v_USBRequestGetBufLen( int parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	char_1 = char_1 * char_1;
	return long_1;
}
float v_USBRequestGetSetupData( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int_3 = int_1 * int_2;
	short_1 = short_1 * short_2;
	long_1 = v_USBEndpointGetType(short_1);

	char_1 = char_1 + char_1;
	return float_1;
}
double v_DWHCIDeviceSubmitBlockingRequest( long parameter_1,char parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long_2 = long_1 + long_1;
	int_2 = int_1 + int_2;
	int_1 = int_3 + int_4;
	char_2 = char_1 * char_2;
	char controller4vul_312[3];
	fgets(controller4vul_312 ,3 ,stdin);
	if( strcmp( controller4vul_312, "E]") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = v_DWHCIDeviceTransferStage(float_1,short_1,float_2,double_2,uni_para);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
			if(1)
			{
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
		float float_3 = 1;
		double double_3 = 1;
		float_1 = float_3;
		double_2 = double_3 * double_2;
		if(1)
		{
		}
	}
	double_6 = double_4 * double_5;
	return double_7;
}
void v_USBRequest( unsigned int parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_1;
	double_2 = double_3;
	double_2 = double_3 * double_1;
	double_4 = double_2 + double_1;
	float_1 = float_1;
	short_2 = short_1 * short_1;
	int_1 = int_2 * int_3;
}
int v_DWHCIDeviceControlMessage( short parameter_1,double parameter_2,unsigned int parameter_3,char parameter_4,float parameter_5,double parameter_6,float parameter_8,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_6 = 1;
	int int_4 = 1;
	int int_6 = 1;
	float float_1 = 1;
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_2;
	short_3 = short_3 + short_2;
	int_3 = int_2 + int_3;
	char_5 = char_3 * char_4;
	double_1 = double_1 + double_1;
	int_2 = int_3 + int_2;
	int_1 = int_1 + int_1;
	char controller4vul_311[2];
	fgets(controller4vul_311 ,2 ,stdin);
	if( strcmp( controller4vul_311, "8") < 0)
	{
		int int_5 = 1;
		double_1 = v_DWHCIDeviceSubmitBlockingRequest(long_1,char_6,uni_para);

		int_5 = int_4 + int_5;
	}
	int_6 = int_1 + int_4;
	float_1 = float_1;
	return int_2;
}
void v_DWHCIDeviceSetConfiguration( long parameter_1,long parameter_2,long parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	v_MsDelay(char_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ">") < 0)
	{
	}
	int_1 = v_DWHCIDeviceControlMessage(short_1,double_1,unsigned_int_1,char_2,float_1,double_2,float_2,-1 );

	unsigned_int_1 = unsigned_int_1;
}
double v_USBDeviceConfigure( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 * int_1;
	long_2 = long_1 * long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "U") < 0)
	{
	}
	if(1)
	{
		int int_2 = 1;
		v_LogWrite(short_1,unsigned_int_2,int_1,int_1,-1 );

		int_1 = int_2;
	}
	return double_1;
	v_DWHCIDeviceSetConfiguration(long_2,long_1,long_3);

}
void v_USBDevice( float parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float_1 = float_1 * float_1;
	v_USBEndpoint(double_1);

	int_2 = int_1 + int_2;
	double_2 = v_USBDeviceConfigure(char_1);

	v_USBString(int_3);

	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	long_3 = long_1 + long_2;
	char_2 = char_2 * char_2;
	unsigned_int_3 = unsigned_int_4;
	int_2 = int_2 * int_2;
	float_3 = float_2 * float_1;
	short_1 = v_malloc(short_1);

	int_4 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_1;
	int_4 = int_3 + int_4;
	int_1 = int_2 * int_4;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
	long_2 = long_4;
	short_2 = short_2 * short_1;
	double_4 = double_3 * double_3;
}
long v_DWHCIDeviceGetPortSpeed( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_DWHCIRegister(unsigned_int_3);

	float_1 = float_1 * float_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	char_2 = char_1 * char_2;
	float_2 = float_1 * float_2;
	int_2 = int_3 * int_3;
	v__DWHCIRegister(char_3);

	char_5 = char_4 + char_1;
	unsigned_int_4 = unsigned_int_4;
	v_DWHCIRegisterRead(long_1);

	short_2 = short_1 * short_2;
	char_3 = char_2 + char_3;
	char_5 = char_3 * char_5;
	return long_2;
}
void v_DWHCIRootPortInitialize( unsigned int parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	float float_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	char_3 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		long_1 = long_2;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	char_4 = char_3 + char_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_1 = double_1 * double_2;
		int_1 = int_1 * int_1;
	}
	char_1 = char_1;
	int_1 = int_2 + int_3;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	int_3 = int_1 + int_1;
	long_2 = long_3 + long_2;
	char controller4vul_304[3];
	fgets(controller4vul_304 ,3 ,stdin);
	if( strcmp( controller4vul_304, "6B") > 0)
	{
		double double_3 = 1;
		char char_5 = 1;
		double_4 = double_3 * double_3;
		char_2 = char_5 * char_5;
		long_1 = long_4 + long_4;
		char controller4vul_305[3];
		fgets(controller4vul_305 ,3 ,stdin);
		if( strcmp( controller4vul_305, "Y#") > 0)
		{
			float_2 = v_USBDeviceFactoryGetDevice(double_1,uni_para);

			int_2 = int_4 * int_4;
			short_2 = short_3;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
		}
		int_1 = int_1;
	}
	if(1)
	{
		int int_5 = 1;
		double_4 = double_1 * double_2;
		short_3 = short_4 * short_3;
		float_3 = float_2 + float_1;
		int_4 = int_5 * int_5;
	}
	if(1)
	{
		long long_5 = 1;
		long long_6 = 1;
		float float_4 = 1;
		long_6 = long_5 + long_4;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		float_4 = float_3 * float_3;
		float_1 = float_2 * float_1;
		short_4 = short_2;
	}
}
long v_DWHCIDeviceEnableRootPort( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_DWHCIRegisterAnd(short_1,char_1);

	int_3 = int_1 + int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "w") < 0)
	{
		short short_2 = 1;
		short short_3 = 1;
		v_DWHCIRegister(unsigned_int_1);

		short_3 = short_2 + short_2;
	}
	double_1 = double_1 * double_2;
	float_2 = float_1 + float_2;
	long_1 = v_DWHCIDeviceWaitForBit(float_3,float_3,float_2,int_4,float_2);

	int_2 = int_4;
	v_DWHCIRegisterWrite(unsigned_int_2);

	char_2 = char_2 + char_2;
	v_DWHCIRegisterOr(double_2,int_2);

	long_2 = long_1;
	double_2 = double_3 * double_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	v__DWHCIRegister(char_1);

	int_2 = int_2 * int_3;
	double_2 = double_1 + double_3;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
	long_3 = long_3 * long_3;
	v_MsDelay(char_1);

	v_DWHCIRegisterRead(long_4);

	long_6 = long_4 + long_5;
	return long_1;
}
void v_DWHCIDeviceEnableHostInterrupts( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_2;
	float_2 = float_1 * float_1;
	int_3 = int_1 + int_2;
	v_DWHCIRegisterWrite(unsigned_int_1);

	v_DWHCIDeviceEnableCommonInterrupts(int_1);

	double_2 = double_1 * double_1;
	v_DWHCIRegister2(int_3,double_1,double_1);

	float_4 = float_3 * float_1;
	double_2 = double_3 * double_2;
	v_DWHCIRegisterOr(double_1,int_1);

	double_2 = double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_4;
	v_DWHCIRegisterRead(long_1);

	v__DWHCIRegister(char_2);

}
void v_DWHCIDeviceFlushRxFIFO( float parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	v_DWHCIRegister2(int_1,double_1,double_1);

	v_DWHCIRegisterOr(double_2,int_1);

	int_3 = int_1 * int_2;
	long_1 = v_DWHCIDeviceWaitForBit(float_1,float_2,float_3,int_4,float_2);

	v__DWHCIRegister(char_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	v_usDelay(double_2);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	float_5 = float_1 * float_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		v_DWHCIRegisterWrite(unsigned_int_4);

		int_1 = int_2 + int_1;
	}
	short_1 = short_1;
}
void v_TimerusDelay( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float_1 = float_1 + float_2;
		v_DelayLoop(int_1);

		short_2 = short_1 * short_1;
	}
}
void v_usDelay( double parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	v_TimerusDelay(int_1,unsigned_int_1);

	float_1 = v_TimerGet();

	int_1 = int_2 + int_1;
}
void v_DWHCIDeviceFlushTxFIFO( long parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int_1 = int_1 + int_2;
	v_DWHCIRegisterOr(double_1,int_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	v_DWHCIRegister2(int_2,double_1,double_1);

	v_DWHCIRegisterAnd(short_1,char_1);

	unsigned_int_2 = unsigned_int_3;
	long_1 = v_DWHCIDeviceWaitForBit(float_1,float_2,float_1,int_4,float_1);

	int_5 = int_1 * int_4;
	v_DWHCIRegisterWrite(unsigned_int_4);

	int_3 = int_1 + int_1;
	v__DWHCIRegister(char_1);

	char_3 = char_1 + char_2;
	short_3 = short_2 * short_3;
	if(1)
	{
		v_usDelay(double_2);

		int_4 = int_3 * int_4;
	}
	long_2 = long_1 * long_2;
}
long v_DWHCIDeviceInitHost()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	int int_4 = 1;
	long long_3 = 1;
	short short_2 = 1;
	char char_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	short short_3 = 1;
	int int_6 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_7 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_2;
	char_3 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	v_DWHCIRegister(unsigned_int_2);

	char_2 = char_2;
	long_2 = long_1 * long_1;
	int_2 = int_2 + int_2;
	v_DWHCIDeviceFlushTxFIFO(long_1,short_1);

	int_3 = int_2 * int_1;
	double_3 = double_1 + double_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	double_4 = double_2 + double_2;
	int_4 = int_2 * int_1;
	if(1)
	{
		v_DWHCIDeviceEnableHostInterrupts(long_3);

		int_2 = int_2;
	}
	if(1)
	{
		v_DWHCIRegisterAnd(short_2,char_1);

		char_1 = char_4 * char_2;
	}
	double_1 = double_5 + double_4;
	int_5 = int_3 + int_4;
	short_3 = short_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	v__DWHCIRegister(char_3);

	double_4 = double_2 * double_3;
	int_6 = int_3 + int_2;
	double_5 = double_6 + double_3;
	long_3 = long_3 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	double_4 = double_6 + double_3;
	double_2 = double_4 + double_3;
	v_DWHCIRegisterRead(long_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_1;
	v_DWHCIRegisterOr(double_1,int_2);

	double_6 = double_2 * double_6;
	int_4 = int_1 + int_4;
	v_DWHCIRegisterGet();

	v_DWHCIDeviceFlushRxFIFO(float_2);

	unsigned_int_4 = unsigned_int_5;
	char_4 = char_2 * char_3;
	v_DWHCIRegister2(int_3,double_2,double_6);

	char_3 = char_2 + char_1;
	float_3 = float_3;
	char_5 = char_5;
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		int_1 = int_6 + int_2;
		float_5 = float_3 + float_4;
	}
	unsigned_int_6 = unsigned_int_7;
	unsigned_int_7 = unsigned_int_5 * unsigned_int_7;
	int_1 = int_5 + int_6;
	unsigned_int_8 = unsigned_int_3 * unsigned_int_5;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
	char_6 = char_5 * char_5;
	v_DWHCIRegisterWrite(unsigned_int_4);

	unsigned_int_3 = unsigned_int_8 + unsigned_int_9;
	unsigned_int_9 = unsigned_int_1;
	int_7 = int_4 + int_6;
	return long_1;
}
void v_DWHCIDeviceEnableGlobalInterrupts( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	v_DWHCIRegister(unsigned_int_1);

	double_3 = double_1 * double_2;
	char_2 = char_1 + char_1;
	v_DWHCIRegisterOr(double_2,int_1);

	v_DWHCIRegisterWrite(unsigned_int_2);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	v_DWHCIRegisterRead(long_1);

	int_2 = int_1 * int_1;
	double_1 = double_4 * double_2;
	char_2 = char_3 + char_4;
	int_3 = int_3 + int_4;
	v__DWHCIRegister(char_1);

}
void v_DWHCIDeviceEnableCommonInterrupts( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	short_2 = short_1 * short_1;
	double_2 = double_1 + double_1;
	char_1 = char_1 * char_1;
	v_DWHCIRegister2(int_1,double_1,double_2);

	v__DWHCIRegister(char_2);

	char_3 = char_1 * char_3;
	float_2 = float_1 * float_2;
	if(1)
	{
		v_DWHCIRegister(unsigned_int_1);

		v_DWHCIRegisterSetAll(long_1);

		float_1 = float_2 + float_2;
	}
	v_DWHCIRegisterWrite(unsigned_int_2);

	unsigned_int_3 = unsigned_int_4;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	int_1 = int_1 * int_2;
	char_3 = char_2 + char_2;
}
void v_MsDelay( char parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	float_1 = v_TimerGet();

	short_2 = short_1 + short_1;
	v_TimerMsDelay(float_2,long_1);

}
long v_DWHCIDeviceWaitForBit( float parameter_1,float parameter_2,float parameter_3,int parameter_4,float parameter_5)
{
	long long_1 = 1;
	char char_1 = 1;
	return long_1;
	v_DWHCIRegisterRead(long_1);

	v_MsDelay(char_1);

}
char v_DWHCIDeviceReset( long parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	long_1 = v_DWHCIDeviceWaitForBit(float_1,float_2,float_3,int_1,float_2);

	float_1 = float_4 + float_5;
	v_DWHCIRegister2(int_2,double_1,double_1);

	double_1 = double_1 + double_1;
	v_DWHCIRegisterWrite(unsigned_int_1);

	int_2 = int_1;
	if(1)
	{
		float float_6 = 1;
		v_DWHCIRegisterOr(double_2,int_1);

		float_5 = float_6;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	char_3 = char_1 * char_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	double_3 = double_2 + double_1;
	v_MsDelay(char_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return char_2;
	v__DWHCIRegister(char_2);

}
char v_DWHCIDeviceInitCore( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_3 = 1;
	int_2 = int_1 * int_2;
	int_2 = int_1 * int_2;
	double_1 = double_2;
	v_DWHCIRegisterGet();

	v_DWHCIDeviceEnableCommonInterrupts(int_1);

	int_1 = int_3;
	float_1 = float_2;
	v_DWHCIRegisterOr(double_3,int_3);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_4 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if(remainder_check(controller_1,100,2))
	{
		v_LogWrite(short_1,unsigned_int_1,int_4,int_3,-1 );

		float_2 = float_1 * float_1;
	}
	v__DWHCIRegister(char_1);

	double_5 = double_5 * double_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	v_DWHCIRegisterAnd(short_1,char_1);

	short_1 = short_1 * short_1;
	short_2 = short_1 * short_1;
	float_1 = float_3;
	float_4 = float_4 + float_2;
	short_3 = short_1 * short_2;
	int_5 = int_1 * int_1;
	double_3 = double_5 + double_1;
	if(1)
	{
		long_1 = long_1 + long_2;
		int_3 = int_1;
	}
	if(1)
	{
		float float_5 = 1;
		float_5 = float_1 * float_5;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	}
	v_DWHCIRegister(unsigned_int_2);

	double_6 = double_1;
	double_6 = double_7 * double_4;
	int_3 = int_3 + int_2;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
	v_DWHCIRegisterWrite(unsigned_int_6);

	double_3 = double_5;
	char_1 = char_1 * char_1;
	short_2 = short_3;
	char_1 = char_2;
	char_1 = v_DWHCIDeviceReset(long_3);

	int_3 = int_2;
	v_DWHCIRegisterRead(long_2);

	long_2 = long_3 + long_1;
	float_4 = float_1;
	double_1 = double_3 * double_5;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_7 = unsigned_int_3;
	double_6 = double_2 * double_1;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
	char_3 = char_3;
	double_1 = double_6 * double_1;
	float_4 = float_4;
	return char_2;
}
float v_DWHCITransferStageDataBeginSplitCycle( char parameter_1)
{
	float float_1 = 1;
	return float_1;
}
short v_DWHCITransferStageDataIsStageComplete( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char_2 = char_1 + char_2;
	return short_1;
}
void v_USBRequestCallCompletionRoutine( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_2 = int_1 * int_2;
	float_2 = float_1 + float_1;
	long_2 = long_1 * long_1;
}
void v_DWHCIDeviceFreeChannel( double parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_uspi_LeaveCritical();

	float_1 = float_1 + float_2;
	float_3 = float_3 * float_2;
	v_uspi_EnterCritical();

	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_1;
	double_1 = double_1 + double_3;
	double_3 = double_1 + double_3;
	int_1 = int_1 + int_2;
}
void v__DWHCITransferStageData( char parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		double double_1 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		short_1 = short_2;
		double_1 = double_1;
	}
	int_2 = int_1 * int_1;
	if(1)
	{
		short short_3 = 1;
		v_free();

		short_3 = short_1 * short_3;
		float_2 = float_1 + float_2;
	}
	long_2 = long_2 + long_3;
	unsigned_int_1 = unsigned_int_4;
	float_2 = float_3 * float_1;
}
void v_uspi_LeaveCritical()
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float_2 = float_1 * float_1;
	double_3 = double_1 + double_2;
	if(1)
	{
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "*") < 0)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_2;
		}
	}
}
void v_uspi_EnterCritical()
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short_2 = short_1 + short_1;
	int_1 = int_1 * int_1;
	int_1 = int_2 + int_2;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	short_3 = short_2;
}
void v_DWHCIDeviceDisableChannelInterrupt( long parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_DWHCIRegisterWrite(unsigned_int_1);

	short_2 = short_1 * short_1;
	v_uspi_EnterCritical();

	double_1 = double_1 + double_2;
	v_uspi_LeaveCritical();

	v__DWHCIRegister(char_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	long_2 = long_1 + long_1;
	v_DWHCIRegisterAnd(short_1,char_2);

	double_4 = double_2 + double_3;
	v_DWHCIRegister(unsigned_int_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	long_3 = long_3 + long_3;
	long_4 = long_4 + long_1;
	v_DWHCIRegisterRead(long_5);

	int_1 = int_2;
}
void v_DWHCITransferStageDataGetResultLen( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short_2 = short_1 + short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "`1") < 0)
	{
	}
}
void v_USBRequestSetResultLen( unsigned int parameter_1,float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
float v_DWHCITransferStageDataIsStatusStage( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_1 + float_2;
	return float_2;
}
void v_DWHCITransferStageDataSetSplitComplete( unsigned int parameter_1,long parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_1;
	double_3 = double_1 + double_2;
	float_1 = float_1 * float_2;
}
void v_DWHCIDeviceTimerHandler( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = v_DWHCITransferStageDataGetFrameScheduler(char_1);

	double_1 = double_1 + double_2;
	int_1 = int_1 * int_2;
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_DWHCITransferStageDataSetState(float_1,char_3);

	v_DWHCITransferStageDataSetSplitComplete(unsigned_int_3,long_1);

	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		double double_3 = 1;
		float float_2 = 1;
		int int_3 = 1;
		float float_3 = 1;
		unsigned_int_5 = v_DWHCITransferStageDataGetState(double_2);

		unsigned_int_2 = unsigned_int_6 + unsigned_int_5;
		double_1 = double_2 * double_3;
		float_2 = float_2 * float_1;
		int_2 = int_2 + int_3;
		float_2 = float_3;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "$f") > 0)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_4 = double_5;
	}
	v_DWHCIDeviceStartTransaction(float_1,int_2);

	char_4 = char_1 + char_4;
	char_4 = v_DWHCITransferStageDataIsSplit(long_1);

	double_7 = double_1 + double_6;
}
float v_TimerGet()
{
	short short_1 = 1;
	float float_1 = 1;
	short_1 = short_1 * short_1;
	return float_1;
}
short v_TimerStartKernelTimer( char parameter_1,float parameter_2,short parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	double double_4 = 1;
	long_1 = long_1;
	int_3 = int_1 + int_2;
	v_LoggerWrite(short_1,short_1,int_3,char_1,char_1);

	float_2 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_2 = double_1 * double_1;
		}
	}
	if(1)
	{
		v_LeaveCritical();

		double_3 = double_2 + double_3;
		v_EnterCritical();

		long_2 = v_LoggerGet();

		float_3 = float_1 + float_1;
	}
	long_4 = long_3 + long_3;
	float_3 = float_4;
	double_3 = double_1;
	double_3 = double_2;
	long_2 = long_3 + long_1;
	double_4 = double_4 * double_1;
	return short_1;
}
int v_StartKernelTimer( short parameter_1,short parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	return int_1;
	short_1 = v_TimerStartKernelTimer(char_1,float_1,short_1);

	float_1 = v_TimerGet();

}
unsigned int v_USBRequestGetEndpoint()
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 + short_2;
	int_1 = int_1 * int_1;
	return unsigned_int_1;
}
float v_USBEndpointGetInterval( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return float_1;
}
void v_DWHCITransferStageDataSetState( float parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float_2 = float_1 + float_1;
	float_3 = float_2 + float_2;
}
void v_USBRequestSetStatus( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_1 = long_2;
	short_2 = short_1 * short_1;
}
short v_DWHCITransferStageDataGetTransactionStatus( char parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	int_1 = int_1;
	long_3 = long_1 * long_2;
	return short_1;
}
unsigned int v_DWHCITransferStageDataGetState( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 + double_1;
	return unsigned_int_1;
}
void v_USBEndpointSkipPID( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float_2 = float_1 * float_2;
	char_1 = char_1 * char_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		int int_1 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1 + double_1;
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
		float_4 = float_3 * float_1;
		double_1 = double_1;
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		int int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int_2 = int_3 * int_3;
		long_1 = long_2;
	}
}
void v_DWHCITransferStageDataTransactionComplete( int parameter_1,int parameter_2,char parameter_3,float parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
		if(1)
		{
			int_1 = int_2;
		}
		int_2 = int_1;
	}
	if(1)
	{
	}
	int_1 = int_2 + int_3;
	double_1 = double_1 + double_1;
	if(1)
	{
		int_1 = int_3 + int_1;
	}
	char_1 = char_1 + char_2;
	int_4 = int_1;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	v_USBEndpointSkipPID(unsigned_int_1,unsigned_int_1,unsigned_int_2);

	short_4 = short_3 * short_1;
	long_2 = long_1 * long_2;
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		int_5 = int_4 * int_2;
		v_Logger(long_2);

		int_2 = int_6 * int_1;
	}
}
unsigned int v_DWHCIRegisterIsSet( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_2;
	double_3 = double_3 + double_3;
	char_1 = char_1;
	return unsigned_int_1;
}
void v_DWHCIDeviceStartTransaction( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	int int_3 = 1;
	char char_4 = 1;
	double double_6 = 1;
	int int_4 = 1;
	short short_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	v_DWHCIDeviceStartChannel(double_1,short_1);

	long_2 = long_1 * long_1;
	v_DWHCIRegisterOr(double_2,int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 + char_1;
	long_1 = long_1 * long_2;
	v_DWHCITransferStageDataSetSubState(double_3,unsigned_int_1);

	float_1 = float_2;
	char_3 = char_1 * char_2;
	double_1 = double_3 * double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "M") == 0)
	{
		double double_4 = 1;
		float float_4 = 1;
		long long_4 = 1;
		double double_5 = 1;
		float float_5 = 1;
		double_2 = double_2 * double_4;
		v_DWHCIRegisterSet(int_2,float_3);

		float_4 = float_3 + float_2;
		char_3 = char_3 * char_2;
		v_DWHCIRegisterRead(long_3);

		int_2 = int_3;
		double_4 = double_3 * double_4;
		long_4 = long_1 * long_3;
		v_DWHCIRegisterWrite(unsigned_int_1);

		v__DWHCIRegister(char_4);

		double_6 = double_3 * double_5;
		int_1 = int_4;
		float_1 = float_5 + float_5;
	}
	if(1)
	{
		v_DWHCIRegisterAnd(short_1,char_4);

		int_2 = int_3;
	}
	short_2 = v_DWHCITransferStageDataGetChannelNumber(int_5);

	int_5 = int_4;
	v_DWHCIRegister(unsigned_int_2);

	unsigned_int_1 = v_DWHCIRegisterIsSet(double_6,float_2);

}
unsigned int v_DWHCITransferStageDataIsPeriodic( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_1 + double_2;
	char_2 = char_1 + char_2;
	return unsigned_int_1;
	long_1 = v_USBEndpointGetType(short_1);

}
void v_DWHCITransferStageDataGetStatusMask( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_1 = v_DWHCITransferStageDataIsPeriodic(int_1);

	double_2 = double_1 + double_1;
	double_3 = double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Oa") > 0)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
}
void v_DWHCIRegisterSet( int parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_1;
}
unsigned int v_USBEndpointGetNumber( float parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_1;
	return unsigned_int_1;
}
int v_DWHCITransferStageDataGetEndpointNumber( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	long_3 = long_1 * long_2;
	unsigned_int_1 = v_USBEndpointGetNumber(float_1);

	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	return int_1;
}
long v_USBEndpointGetType( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double_2 = double_1 + double_1;
	return long_1;
}
double v_DWHCITransferStageDataGetEndpointType( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	char_2 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_1;
	long_1 = long_1 + long_1;
	int_2 = int_1 + int_2;
	long_1 = v_USBEndpointGetType(short_3);

	int_3 = int_3 + int_1;
	int_2 = int_2 * int_3;
	short_5 = short_4 * short_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_1 * double_2;
	int_4 = int_1 * int_2;
	return double_2;
}
double v_USBDeviceGetAddress( char parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	int_1 = int_1;
	return double_1;
}
int v_DWHCITransferStageDataGetDeviceAddress( long parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 * int_1;
	double_1 = v_USBDeviceGetAddress(char_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
double v_DWHCITransferStageDataGetSpeed( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return double_1;
}
void v_DWHCITransferStageDataIsDirectionIn( double parameter_1)
{
	int int_1 = 1;
	int_1 = int_1 * int_1;
}
int v_DWHCITransferStageDataGetMaxPacketSize( int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1;
	return int_1;
}
long v_DWHCITransferStageDataIsSplitComplete( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double_3 = double_1 + double_2;
	int_1 = int_1;
	return long_1;
}
float v_DWHCITransferStageDataGetSplitPosition( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short_3 = short_1 + short_2;
	long_1 = long_1 * long_1;
	return float_1;
}
float v_USBDeviceGetHubAddress( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return float_1;
}
int v_DWHCITransferStageDataGetHubAddress( double parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float_1 = v_USBDeviceGetHubAddress(unsigned_int_1);

	int_1 = int_2;
	int_4 = int_3 + int_3;
	int_5 = int_4 * int_1;
	return int_2;
}
char v_USBDeviceGetHubPortNumber( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_2 = double_1 * double_2;
	return char_1;
}
unsigned int v_DWHCITransferStageDataGetHubPortAddress( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = v_USBDeviceGetHubPortNumber(char_2);

	long_3 = long_1 * long_2;
	int_3 = int_1 + int_2;
	int_3 = int_3 + int_3;
	return unsigned_int_1;
}
char v_DWHCITransferStageDataIsSplit( long parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	long_1 = long_1 + long_1;
	return char_1;
}
void v_uspi_CleanAndInvalidateDataCacheRange( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_2 = int_1 + int_1;
		double_2 = double_1 + double_1;
	}
}
int v_DWHCITransferStageDataGetDMAAddress( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_2 = int_1 + int_1;
	float_2 = float_1 * float_1;
	return int_2;
}
char v_USBEndpointGetNextPID( long parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_1 + char_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	return char_2;
}
char v_DWHCITransferStageDataGetPID( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_1;
	char_1 = v_USBEndpointGetNextPID(long_1,double_2);

	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1;
	double_3 = double_2;
	long_1 = long_2 * long_3;
	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_2;
	char_1 = char_1 + char_1;
	int_3 = int_1 + int_2;
	float_1 = float_1 * float_1;
	int_1 = int_1 * int_1;
	return char_1;
}
long v_DWHCITransferStageDataGetPacketsToTransfer( char parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	int_1 = int_1;
	return long_1;
}
short v_DWHCITransferStageDataGetBytesToTransfer( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short_1 = short_1 * short_2;
	return short_2;
}
void v_DWHCIRegisterOr( double parameter_1,int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_1 = char_1;
	double_1 = double_1;
	long_2 = long_1 * long_1;
}
void v_DWHCIRegisterSetAll( long parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short_1 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
}
void v_DWHCITransferStageDataSetSubState( double parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float_3 = float_1 + float_2;
	short_3 = short_1 + short_2;
}
short v_DWHCITransferStageDataGetChannelNumber( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return short_1;
}
void v_DWHCIDeviceStartChannel( double parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_6 = 1;
	short short_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	int int_6 = 1;
	double double_5 = 1;
	short short_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_7 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	long long_8 = 1;
	long long_9 = 1;
	char char_5 = 1;
	int int_8 = 1;
	char char_6 = 1;
	long long_10 = 1;
	char char_7 = 1;
	char_2 = char_1 + char_2;
	float_2 = float_1 * float_1;
	v_DWHCIRegisterWrite(unsigned_int_1);

	short_2 = short_1 * short_1;
	long_1 = long_1 * long_2;
	int_1 = int_1 * int_1;
	int_1 = int_2;
	int_2 = v_DWHCITransferStageDataGetEndpointNumber(char_1);

	float_3 = float_3 * float_3;
	double_3 = double_1 + double_2;
	int_2 = int_2 + int_1;
	short_2 = short_2 + short_2;
	int_3 = int_1;
	v_DWHCIRegisterRead(long_1);

	long_3 = long_3 * long_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	int_3 = int_3;
	v__DWHCIRegister(char_2);

	int_2 = int_4 * int_2;
	float_2 = float_4 * float_3;
	double_4 = double_3 + double_2;
	double_4 = double_3 * double_1;
	unsigned_int_2 = unsigned_int_4;
	float_5 = v_DWHCITransferStageDataGetSplitPosition(unsigned_int_2);

	double_3 = double_1 * double_3;
	long_4 = long_4 * long_3;
	long_4 = long_2 * long_5;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_3 = unsigned_int_3;
		short_3 = v_DWHCITransferStageDataGetChannelNumber(int_4);

		unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
		v_DWHCIRegister(unsigned_int_4);

		unsigned_int_5 = v_DWHCITransferStageDataGetHubPortAddress(unsigned_int_6);

		v_DWHCITransferStageDataGetStatusMask(unsigned_int_2);

		double_2 = double_1 * double_3;
		if(1)
		{
			v_DWHCIRegister2(int_3,double_1,double_3);

			char_3 = char_3 + char_2;
		}
		unsigned_int_1 = unsigned_int_7 * unsigned_int_8;
	}
	long_3 = long_6;
	short_4 = v_DWHCITransferStageDataGetBytesToTransfer(int_5);

	double_4 = double_3 * double_3;
	int_5 = v_DWHCITransferStageDataGetHubAddress(double_2);

	char_2 = char_4 + char_4;
	int_6 = v_DWHCITransferStageDataGetDMAAddress(long_4);

	int_5 = int_3 + int_4;
	v_DWHCITransferStageDataIsDirectionIn(double_2);

	int_1 = int_4 + int_6;
	short_3 = short_2 + short_3;
	double_1 = double_1 + double_5;
	long_5 = v_DWHCITransferStageDataIsSplitComplete(int_4);

	double_5 = v_DWHCITransferStageDataGetEndpointType(short_5);

	double_6 = double_4 + double_2;
	if(1)
	{
		char_3 = char_3 + char_3;
	}
	if(1)
	{
		v_DWHCIRegisterOr(double_7,int_5);

		int_5 = int_7 * int_2;
	}
	if(1)
	{
		float_3 = float_2;
	}
	if(1)
	{
		int_1 = int_4 + int_7;
	}
	long_1 = long_7;
	int_5 = v_DWHCITransferStageDataGetMaxPacketSize(int_5);

	double_3 = v_DWHCITransferStageDataGetSpeed(unsigned_int_8);

	double_5 = double_4 * double_5;
	unsigned_int_9 = unsigned_int_8 + unsigned_int_9;
	unsigned_int_8 = unsigned_int_8 * unsigned_int_10;
	v_DWHCIRegisterSetAll(long_6);

	int_7 = int_4;
	double_5 = double_2;
	long_6 = long_8 + long_3;
	if(1)
	{
		unsigned_int_6 = unsigned_int_9 * unsigned_int_9;
		if(1)
		{
			unsigned_int_6 = unsigned_int_10 + unsigned_int_10;
		}
		if(1)
		{
			char_4 = char_1 * char_3;
		}
	}
	int_6 = int_2 * int_4;
	double_6 = double_4 + double_7;
	long_9 = long_5 + long_2;
	v_DWHCITransferStageDataSetSubState(double_3,unsigned_int_3);

	v_DWHCIRegisterAnd(short_4,char_5);

	int_8 = v_DWHCITransferStageDataGetDeviceAddress(long_5);

	unsigned_int_2 = unsigned_int_10 + unsigned_int_4;
	unsigned_int_6 = v_DWHCITransferStageDataGetFrameScheduler(char_3);

	double_4 = double_5 * double_4;
	short_2 = short_3 + short_4;
	v_DWHCIRegisterSet(int_4,float_3);

	double_5 = double_2 + double_6;
	int_1 = int_4;
	char_6 = v_DWHCITransferStageDataGetPID(double_7);

	char_4 = v_DWHCITransferStageDataIsSplit(long_5);

	long_10 = long_7;
	int_3 = int_3 * int_7;
	unsigned_int_9 = unsigned_int_6 * unsigned_int_2;
	long_2 = v_DWHCITransferStageDataGetPacketsToTransfer(char_7);

	double_2 = double_1 * double_7;
	int_7 = int_6 * int_4;
	v_uspi_CleanAndInvalidateDataCacheRange(float_2,int_1);

}
void v_DWHCITransferStageDataGetSubState( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_2;
}
long v_DWHCITransferStageDataGetURB( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double_1 = double_2;
	double_3 = double_3 * double_3;
	return long_1;
}
unsigned int v_DWHCITransferStageDataGetFrameScheduler( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_1;
}
void v_DWHCIDeviceChannelInterruptHandler( long parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double double_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_5 = 1;
	long long_4 = 1;
	double double_8 = 1;
	int int_6 = 1;
	char char_5 = 1;
	int int_7 = 1;
	float float_6 = 1;
	int int_8 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_9 = 1;
	double double_9 = 1;
	char char_8 = 1;
	char char_10 = 1;
	double double_10 = 1;
	float float_7 = 1;
	long long_5 = 1;
	float float_8 = 1;
	int int_10 = 1;
	double double_12 = 1;
	double double_13 = 1;
	float float_9 = 1;
	short short_8 = 1;
	float_2 = float_1 + float_2;
	double_2 = double_1 + double_2;
	int_1 = int_1 + int_2;
	int_3 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 * short_1;
	double_3 = double_1 + double_2;
	float_2 = float_2 * float_3;
	float_3 = float_3;
	v_USBRequestCallCompletionRoutine(double_1);

	int_3 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	float_4 = v_USBEndpointGetInterval(short_1);

	char_3 = char_1 * char_2;
	double_5 = double_4 * double_4;
	char_3 = char_3 + char_2;
	if(1)
	{
		short_1 = short_1;
	}
	int_2 = int_4;
	unsigned_int_1 = v_DWHCITransferStageDataIsPeriodic(int_5);

	float_2 = float_4 * float_1;
	v_DWHCITransferStageDataGetResultLen(short_2);

	short_2 = short_1 + short_1;
	long_3 = long_1 * long_2;
	v_DWHCIRegister(unsigned_int_2);

	char_2 = char_1 + char_4;
	unsigned_int_1 = v_DWHCITransferStageDataGetFrameScheduler(char_4);

	v_free();

	short_4 = short_2 + short_3;
	short_4 = short_3 + short_5;
	v_DWHCIDeviceStartTransaction(float_3,int_4);

	short_7 = short_6 + short_4;
	float_2 = float_3 * float_2;
	if(1)
	{
		double_7 = double_2 * double_6;
		short_6 = short_1 * short_1;
	}
	if(1)
	{
		char_2 = char_4 + char_1;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
		unsigned_int_4 = unsigned_int_6 * unsigned_int_5;
		float_3 = float_5 * float_4;
	}
	if(1)
	{
		if(1)
		{
			long_1 = long_4;
		}
		double_7 = double_4 + double_5;
	}
	int_4 = int_3 * int_2;
	char_2 = char_4 + char_4;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
	short_6 = v_DWHCITransferStageDataGetBytesToTransfer(int_1);

	double_2 = double_6 * double_8;
	int_5 = int_6 * int_2;
	v_DWHCITransferStageDataTransactionComplete(int_1,int_4,char_5,float_3);

	int_1 = int_7 * int_5;
	float_6 = float_1 + float_3;
	unsigned_int_5 = v_USBRequestGetEndpoint();

	int_2 = int_3 * int_5;
	if(1)
	{
		int_1 = int_7 + int_6;
		double_6 = double_1 * double_3;
		int_5 = v_StartKernelTimer(short_2,short_5);

		double_7 = double_1;
		double_1 = double_4 + double_6;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_6;
		int_5 = int_6;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		int_8 = int_5 + int_5;
		char_2 = char_3;
	}
	double_3 = double_2 * double_8;
	char_3 = char_1 * char_6;
	v_DWHCIRegisterGet();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		char_7 = char_2 + char_3;
	}
	int_8 = int_4 + int_3;
	v_DWHCIRegisterRead(long_2);

	double_5 = double_7 * double_8;
	v_LogWrite(short_7,unsigned_int_5,int_8,int_1,-1 );

	v_DWHCITransferStageDataSetState(float_4,char_3);

	float_3 = float_6 + float_6;
	if(1)
	{
		double_4 = double_8 + double_4;
		unsigned_int_3 = unsigned_int_1;
		v_USBRequestSetResultLen(unsigned_int_2,float_3);

		unsigned_int_6 = unsigned_int_3 * unsigned_int_2;
		unsigned_int_1 = unsigned_int_7 + unsigned_int_7;
		float_3 = float_4 + float_1;
		int_9 = int_9 * int_4;
		v_DWHCIDeviceFreeChannel(double_9,int_6);

		long_4 = long_4;
		double_4 = double_7;
		unsigned_int_4 = v_DWHCITransferStageDataGetState(double_3);

		double_4 = double_2 * double_6;
	}
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		char char_9 = 1;
		v_DWHCIDeviceStartChannel(double_1,short_7);

		char_1 = char_8 * char_7;
		char_3 = char_9 + char_10;
	}
	if(1)
	{
		if(1)
		{
			double double_11 = 1;
			char_6 = char_2 * char_8;
			double_6 = double_9 + double_4;
			v_DWHCITransferStageDataGetSubState(double_10);

			double_4 = double_6 + double_10;
			unsigned_int_1 = unsigned_int_3;
			long_1 = v_DWHCITransferStageDataGetURB(float_7);

			char_6 = char_1;
			v_DWHCIDeviceDisableChannelInterrupt(long_5,long_4);

			float_6 = float_8 + float_7;
			short_6 = short_7 * short_4;
			double_11 = double_6;
		}
		if(1)
		{
			int int_11 = 1;
			v_uspi_CleanAndInvalidateDataCacheRange(float_6,int_5);

			int_6 = int_9 + int_10;
			v__DWHCIRegister(char_7);

			int_11 = int_8 + int_9;
			float_7 = v_DWHCITransferStageDataBeginSplitCycle(char_7);

			short_5 = short_2 + short_2;
			v_DWHCITransferStageDataSetSplitComplete(unsigned_int_6,long_4);

			int_2 = int_5;
		}
		if(1)
		{
			short_7 = short_3 + short_3;
			float_5 = float_8 * float_1;
			int_1 = int_2 * int_6;
		}
		int_2 = v_DWHCITransferStageDataGetDMAAddress(long_4);

		long_2 = long_3 + long_1;
	}
	float_8 = v_DWHCITransferStageDataIsStatusStage(float_4);

	double_12 = double_7 + double_10;
	if(1)
	{
		unsigned_int_2 = unsigned_int_6 + unsigned_int_7;
	}
	v_USBRequestSetStatus(long_3,int_1);

	int_4 = int_1 * int_2;
	int_10 = int_3 + int_2;
	double_13 = double_5 * double_1;
	short_3 = v_DWHCITransferStageDataGetTransactionStatus(char_3);

	int_1 = int_3;
	v_DWHCIDeviceTimerHandler(char_6);

	char_7 = char_6;
	unsigned_int_3 = unsigned_int_7 * unsigned_int_2;
	short_1 = v_DWHCITransferStageDataIsStageComplete(float_9);

	double_1 = double_1 + double_2;
	short_1 = short_3;
	short_8 = short_1 * short_8;
	v__DWHCITransferStageData(char_10);

}
void v_DWHCIRegister2( int parameter_1,double parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_2;
	short_1 = short_1;
	float_1 = float_1 * float_1;
	float_2 = float_1 * float_1;
}
void v_DWHCIDeviceInterruptHandler()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v__DWHCIRegister(char_1);

	char_2 = char_2 * char_1;
	short_2 = short_1 * short_2;
	int_2 = int_2 * int_1;
	if(1)
	{
		double_2 = double_1 * double_2;
		v_DWHCIRegister(unsigned_int_3);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		double_1 = double_1;
		v_DWHCIRegister2(int_3,double_1,double_2);

		long_1 = long_1;
		v_DWHCIDeviceChannelInterruptHandler(long_2,double_2);

		short_3 = short_2 * short_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				long_2 = long_3 * long_2;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
				char_2 = char_2 * char_2;
				unsigned_int_1 = unsigned_int_4;
				v_DWHCIRegisterWrite(unsigned_int_5);

				unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
			}
			v_DWHCIRegisterRead(long_3);

			float_1 = float_2;
		}
		double_1 = double_1;
	}
	if(1)
	{
		if(1)
		{
			short short_4 = 1;
			short short_5 = 1;
			long long_4 = 1;
			short_3 = short_4 * short_5;
			float_1 = float_2 * float_1;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
			double_1 = double_1 + double_2;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
			long_4 = long_2 * long_2;
			v_DWHCIRegisterGet();

			long_2 = long_1;
		}
		int_1 = int_2;
	}
	float_3 = float_2 + float_1;
	unsigned_int_4 = unsigned_int_5;
}
double v_InterruptSystemGet()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = double_2;
	return double_3;
}
void v_ConnectInterrupt( float parameter_1,float parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	v_InterruptSystemConnectIRQ(long_1,float_1,long_2);

	double_1 = v_InterruptSystemGet();

	char_1 = char_1 * char_1;
}
void v_DWHCIRegisterWrite( unsigned int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int_1 = int_1;
	double_2 = double_1 * double_1;
	char_1 = char_1;
}
void v_DWHCIRegisterAnd( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_2;
	short_1 = short_1;
}
int v_SetPowerStateOn( short parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	long_1 = v_BcmPropertyTagsGetTag(short_1,char_1,short_2,char_1);

	v__BcmPropertyTags(double_1);

	int_2 = int_1 * int_1;
	long_1 = long_2 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_4 = double_2 + double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double_1 = double_2;
	}
	v_BcmPropertyTags(float_1);

	char_1 = char_2 * char_1;
	return int_2;
}
void v__DWHCIRegister( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short_2 = short_1 + short_2;
	long_1 = long_1 * long_1;
}
void v_DWHCIRegisterGet()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_2;
	int_1 = int_2;
}
long v_LoggerGet()
{
	long long_1 = 1;
	return long_1;
}
void v_LogWrite( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	v_LoggerWriteV(unsigned_int_1,float_1,short_1,short_1,long_1,uni_para);

	float_2 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_1;
	double_1 = double_1 + double_1;
}
void v_DWHCIRegisterRead( long parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1;
}
void v_DWHCIRegister( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 * long_2;
}
char v_DWHCIDeviceInitialize( char parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	int int_7 = 1;
	char char_3 = 1;
	char_1 = char_2;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_1 * short_2;
	char controller4vul_303[2];
	fgets(controller4vul_303 ,2 ,stdin);
	if( strcmp( controller4vul_303, "R") < 0)
	{
		v_DWHCIRootPortInitialize(unsigned_int_2,uni_para);

		int_3 = int_1 + int_2;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		float_1 = float_1;
		double_2 = double_2 + double_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	int_2 = int_4 * int_1;
	int_3 = int_3 * int_2;
	double_3 = double_1 + double_3;
	int_6 = int_2 + int_5;
	long_2 = long_2 + long_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
		long_2 = long_2 * long_3;
		float_2 = float_3;
	}
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
		float float_4 = 1;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_3;
		unsigned_int_2 = unsigned_int_1;
		float_1 = float_3 + float_4;
	}
	if(1)
	{
		float float_5 = 1;
		long_2 = long_2 + long_1;
		long_2 = long_1 * long_4;
		float_5 = float_2 + float_3;
	}
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "k") < 0)
	{
		short_3 = short_1 * short_2;
		char_1 = char_2;
		long_1 = long_2 + long_2;
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	int_5 = int_4 + int_7;
	long_1 = long_3 * long_4;
	return char_3;
}
void v_DWHCIRootPort( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short_1 = short_1 + short_2;
	float_1 = float_1;
	char_1 = char_1 * char_2;
	char_3 = char_2 + char_1;
}
void v_DWHCIDevice( double parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	v_DWHCIRootPort(char_1);

	int_1 = int_1;
	int_1 = int_1;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_4 = int_2 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_2 + char_3;
	}
}
void v_DeviceNameService( int parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = int_1;
	float_2 = float_1 + float_2;
	double_1 = double_1 + double_1;
	long_3 = long_1 * long_2;
}
int v_USPiInitialize(int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	long long_5 = 1;
	int int_4 = 1;
	int_2 = int_1 + int_2;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_2 + double_1;
	long_2 = long_1 * long_1;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	char controller4vul_302[2];
	fgets(controller4vul_302 ,2 ,stdin);
	if( strcmp( controller4vul_302, "g") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		char_1 = v_DWHCIDeviceInitialize(char_2,uni_para);

		double_1 = double_1;
		int_2 = int_1;
		short_2 = short_1 + short_2;
		long_3 = long_1 + long_3;
		long_4 = long_1;
	}
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_2 * int_1;
	char_2 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int_2 = int_2 * int_1;
		float_4 = float_5;
		double_2 = double_2;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	}
	long_4 = long_5;
	long_2 = long_3 * long_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_3 = 1;
		unsigned int unsigned_int_6 = 1;
		char char_4 = 1;
		char_3 = char_2 + char_3;
		unsigned_int_3 = unsigned_int_6 + unsigned_int_1;
		char_4 = char_2 + char_3;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_3;
		char_4 = char_2 * char_1;
	}
	double_2 = double_1 + double_1;
	return int_4;
}
void v__ExceptionHandler( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 * short_1;
}
void v__InterruptSystem()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short_3 = short_1 + short_2;
}
void v__Timer( char parameter_1)
{
	int int_1 = 1;
	int_1 = int_1;
}
void v__Logger( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_3 = long_1 * long_2;
	long_2 = long_3;
	short_1 = short_1 + short_2;
}
void v_DelayLoop( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	if(1)
	{
	}
	short_3 = short_1 + short_2;
	double_2 = double_1 + double_2;
	double_1 = double_2 + double_2;
	if(1)
	{
		char char_2 = 1;
		char_1 = char_1 * char_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_4 = double_2 * double_3;
	if(1)
	{
		int int_2 = 1;
		if(1)
		{
			if(1)
			{
				int_2 = int_1 * int_1;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			}
		}
		if(1)
		{
			if(1)
			{
				short_3 = short_1 * short_3;
			}
			if(1)
			{
				int_1 = int_1 + int_2;
			}
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		}
		if(1)
		{
			int_1 = int_1 * int_1;
		}
	}
	long_1 = long_1;
	short_1 = short_2 * short_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
	char_5 = char_3 + char_4;
	char_7 = char_6 * char_1;
}
void v_TimerMsDelay( float parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char_1 = char_1 * char_1;
		double_1 = double_2;
	}
	v_DelayLoop(int_2);

}
void v_TimerGetTicks( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_1 * char_2;
}
void v_TimerTuneMsDelay( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	long long_5 = 1;
	double_2 = double_1 * double_2;
	long_1 = long_1 * long_2;
	char_1 = char_1;
	v_TimerGetTicks(float_1);

	long_2 = long_3 * long_4;
	double_2 = double_3 * double_3;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_2;
	v_TimerMsDelay(float_2,long_5);

}
void v_TimerPollKernelTimers( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_EnterCritical();

		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		v_LeaveCritical();

		int_1 = int_1 * int_1;
		if(1)
		{
			if(1)
			{
				double double_1 = 1;
				char char_1 = 1;
				double_2 = double_1 * double_1;
				char_1 = char_1 + char_1;
			}
		}
	}
	double_3 = double_3 * double_2;
}
void v_TimerInterruptHandler()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_4 = 1;
	float float_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1;
	float_1 = float_2;
	int_2 = int_1 + int_2;
	v_write32(float_1,char_1);

	unsigned_int_1 = unsigned_int_2;
	short_2 = short_1 + short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "O&") < 0)
	{
		double double_2 = 1;
		double double_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double_3 = double_1 + double_2;
		short_4 = short_1 * short_3;
	}
	float_1 = float_1 + float_2;
	double_1 = double_4 + double_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	float_3 = v_read32(double_1);

	int_2 = int_3;
	v_TimerPollKernelTimers(long_1);

}
void v_InterruptSystemEnableIRQ( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float_3 = float_1 + float_2;
	int_2 = int_1 + int_2;
	double_1 = double_1 * double_1;
	double_2 = double_3;
	v_write32(float_1,char_1);

}
void v_InterruptSystemConnectIRQ( long parameter_1,float parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_1;
	short_2 = short_1 + short_1;
	v_InterruptSystemEnableIRQ(float_1);

	int_1 = int_1;
	double_3 = double_3 * double_1;
	double_1 = double_3 * double_1;
	float_1 = float_2;
}
unsigned int v_TimerInitialize( long parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	short short_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float_1 = v_read32(double_1);

	float_3 = float_1 * float_2;
	v_TimerInterruptHandler();

	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_2 + short_3;
	int_2 = int_1 * int_1;
	v_write32(float_2,char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	v_InterruptSystemConnectIRQ(long_1,float_2,long_2);

	double_1 = double_2;
	v_TimerTuneMsDelay(short_4);

	int_3 = int_3 * int_1;
	return unsigned_int_4;
}
void v_IRQStub()
{
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "[T") > 0)
	{
	}
}
int v_InterruptSystemInitialize( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int_2 = int_1 + int_2;
	int_1 = int_2 * int_1;
	float_1 = float_2;
	int_1 = int_3 * int_3;
	int_3 = int_2 * int_2;
	char_1 = char_1 * char_1;
	v_write32(float_2,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_2 + float_3;
	int_2 = int_3 * int_2;
	float_1 = v_read32(double_1);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	short_2 = short_1 + short_1;
	v_IRQStub();

	short_2 = short_3 + short_1;
	char_2 = char_1 * char_1;
	long_1 = long_1 + long_1;
	short_5 = short_3 * short_4;
	char_1 = char_1;
	float_1 = float_2 * float_2;
	char_2 = char_3 + char_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	return int_3;
	v_CleanDataCache();

}
void v_StringFormatV( int parameter_1,short parameter_2,short parameter_3)
{
}
void v__String( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		short short_3 = 1;
		char_1 = char_1 * char_2;
		short_2 = short_3;
	}
}
void v_StringGet( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
}
void v_StringFormat( short parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1;
	long_2 = long_1 + long_2;
	double_2 = double_2 + double_2;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
}
void v_String( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_3 = long_1 * long_2;
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2;
}
char v_TimerGetTimeString( unsigned int parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	v_StringFormat(short_1,int_1,char_1);

	char_2 = char_1 * char_1;
	short_2 = v_malloc(short_1);

	int_2 = int_1 + int_1;
	char_4 = char_3 * char_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	int_1 = int_2 + int_2;
	v_String(short_1);

	short_2 = short_2 + short_1;
	short_2 = short_3 * short_1;
	char_2 = char_3 * char_2;
	v_EnterCritical();

	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	int_1 = int_3 * int_3;
	long_3 = long_1 * long_2;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_4;
	return char_4;
	v_LeaveCritical();

}
void v_ScreenDeviceSetCursorMode( double parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void v_ScreenDeviceCursorMove( char parameter_1,short parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_2;
	if(1)
	{
		int int_1 = 1;
		short_1 = v_CharGeneratorGetCharWidth(double_3);

		int_1 = int_1;
		double_1 = double_1 + double_2;
	}
	double_2 = v_CharGeneratorGetCharHeight(short_2);

}
void v_ScreenDeviceSetStandoutMode( char parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_3 = long_1 + long_2;
	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_2;
	double_1 = double_2;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
}
void v_ScreenDeviceInsertMode( short parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_1;
}
void v_ScreenDeviceEraseChars( short parameter_1,long parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	short_1 = v_CharGeneratorGetCharWidth(double_1);

	short_2 = short_3;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_2 = double_2 * double_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		v_ScreenDeviceEraseChar(unsigned_int_1,long_1,float_1);

		long_2 = long_2;
	}
}
void v_ScreenDeviceDeleteChars( unsigned int parameter_1,unsigned int parameter_2)
{
}
void v_ScreenDeviceDeleteLines( short parameter_1,char parameter_2)
{
}
void v_ScreenDeviceCursorUp( double parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	double_1 = v_CharGeneratorGetCharHeight(short_1);

}
void v_ScreenDeviceInsertLines( double parameter_1,unsigned int parameter_2)
{
}
void v_ScreenDeviceReverseScroll()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		v_ScreenDeviceInsertLines(double_1,unsigned_int_1);

		int_1 = int_2;
	}
}
void v_ScreenDeviceCursorRight( long parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		short_1 = v_CharGeneratorGetCharWidth(double_1);

		float_2 = float_1 + float_2;
	}
	v_ScreenDeviceNewLine(long_1,-1 );

}
unsigned int v_CharGeneratorGetPixel( char parameter_1,char parameter_2,unsigned int parameter_3,short parameter_4)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_1;
	short_2 = short_1 * short_1;
	float_3 = float_1 + float_2;
	return unsigned_int_1;
}
void v_ScreenDeviceDisplayChar2( short parameter_1,char parameter_2,char parameter_3,unsigned int parameter_4,char parameter_5)
{
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short_1 = v_CharGeneratorGetCharWidth(double_1);

			unsigned_int_1 = v_CharGeneratorGetPixel(char_1,char_1,unsigned_int_2,short_2);

			double_1 = double_1;
		}
	}
	double_1 = v_CharGeneratorGetCharHeight(short_3);

	v_ScreenDeviceSetPixel(double_2,int_1,unsigned_int_3,unsigned_int_3);

}
void v_ScreenDeviceDisplayChar( int parameter_1,char parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		v_ScreenDeviceDisplayChar2(short_1,char_1,char_1,unsigned_int_1,char_1);

		v_ScreenDeviceCursorRight(long_1);

		int_3 = int_1 + int_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
}
short v_memcpyblk(short parameter_2,long parameter_3,int uni_para)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	long_1 = long_1 + long_1;
	char controller4vul_324[3];
	fgets(controller4vul_324 ,3 ,stdin);
	if( strcmp( controller4vul_324, "Z{") > 0)
	{
		char controller4vul_325[2];
		fgets(controller4vul_325 ,2 ,stdin);
		if( strcmp( controller4vul_325, "M") > 0)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			strcpy(vul_var, "CWE-761");
			if(uni_para == 480)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 + double_1;
		}
	}
	float_2 = float_1 + float_1;
	float_3 = float_3 + float_4;
}
void v_ScreenDeviceScroll( int parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	double_2 = double_2 * double_1;
	int_1 = int_1 * int_1;
	char controller4vul_322[2];
	fgets(controller4vul_322 ,2 ,stdin);
	if( strcmp( controller4vul_322, "7") < 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_1 = 1;
			char char_2 = 1;
			short short_3 = 1;
			double_2 = double_1 + double_1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char controller4vul_323[2];
				fgets(controller4vul_323 ,2 ,stdin);
				if( strcmp( controller4vul_323, ".") < 0)
				{
					short_1 = v_memcpyblk(short_2,long_1,uni_para);

					int_1 = int_2 * int_2;
				}
			}
			long_1 = long_1 + long_1;
			char_2 = char_1 * char_1;
			short_3 = short_1 + short_3;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	}
	int_3 = int_2;
}
void v_ScreenDeviceCursorDown( double parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_2 = float_1 + float_2;
	char controller4vul_321[3];
	fgets(controller4vul_321 ,3 ,stdin);
	if( strcmp( controller4vul_321, "YK") < 0)
	{
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		v_ScreenDeviceScroll(int_1,uni_para);

		int_1 = int_2;
		double_1 = double_1 + double_2;
	}
}
void v_ScreenDeviceCarriageReturn( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_1 = long_2;
}
void v_ScreenDeviceNewLine( long parameter_1,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_ScreenDeviceCursorDown(double_1,uni_para);

	int_1 = int_1;
	int_2 = int_2 * int_2;
}
void v_ScreenDeviceTabulator( float parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_3;
	char controller4vul_320[3];
	fgets(controller4vul_320 ,3 ,stdin);
	if( strcmp( controller4vul_320, ":(") > 0)
	{
		long long_2 = 1;
		long long_3 = 1;
		v_ScreenDeviceNewLine(long_1,uni_para);

		long_3 = long_2 * long_3;
	}
}
void v_ScreenDeviceCursorLeft( unsigned int parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	if(1)
	{
		short_1 = v_CharGeneratorGetCharWidth(double_1);

		double_2 = double_1 + double_1;
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double_2 = v_CharGeneratorGetCharHeight(short_2);

			float_2 = float_1 + float_1;
			float_3 = float_2;
		}
	}
}
void v_ScreenDeviceWrite2( float parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 + long_2;
	short_2 = short_1 * short_1;
	char_1 = char_1 * char_2;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		double_1 = double_2 + double_1;
	}
	char controller4vul_318[2];
	fgets(controller4vul_318 ,2 ,stdin);
	if( strcmp( controller4vul_318, "J") > 0)
	{
		char controller4vul_319[2];
		fgets(controller4vul_319 ,2 ,stdin);
		if( strcmp( controller4vul_319, "&") < 0)
		{
			v_ScreenDeviceTabulator(float_1,uni_para);

			double_2 = double_1 + double_2;
		}
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, ";") < 0)
		{
			unsigned_int_2 = unsigned_int_1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
		}
	}
	int_1 = int_1 * int_2;
	long_1 = long_1 + long_2;
	if(1)
	{
		double double_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double_2 = double_3 + double_2;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_1;
		int_3 = int_3 + int_1;
		double_3 = double_2 * double_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
		int_2 = int_3 * int_4;
	}
	if(1)
	{
		short short_3 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
		short_2 = short_3;
		int_2 = int_5 * int_1;
		unsigned_int_4 = unsigned_int_5 * unsigned_int_6;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_7;
	}
}
int v_ScreenDeviceWrite( long parameter_1,char parameter_2,float parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_1 = 1;
	char char_6 = 1;
	double_2 = double_1 * double_1;
	long_1 = long_1 * long_1;
	short_1 = short_2;
	char_3 = char_1 * char_2;
	double_3 = double_3 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	int_1 = int_1 + int_2;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_4;
	char_5 = char_4 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_6 + unsigned_int_7;
		char controller4vul_317[3];
		fgets(controller4vul_317 ,3 ,stdin);
		if( strcmp( controller4vul_317, "*6") > 0)
		{
			v_ScreenDeviceWrite2(float_1,char_6,uni_para);

			int_1 = int_1;
		}
	}
	char_6 = char_4 + char_3;
	double_1 = double_1 + double_3;
	return int_2;
}
char v_strlen( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_5 = 1;
	int int_7 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_1 + int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "UY") > 0)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_3 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3;
	}
	long_2 = long_1 * long_2;
	double_1 = double_1 + double_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_3 = 1;
		long_1 = long_2 * long_3;
		if(1)
		{
			int int_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int_5 = int_4 + int_4;
			short_3 = short_1 * short_2;
			if(1)
			{
				int_2 = int_4 + int_3;
				short_3 = short_3 + short_2;
			}
			if(1)
			{
				char char_1 = 1;
				if(1)
				{
					char char_2 = 1;
					int int_6 = 1;
					char_2 = char_1 * char_1;
					int_3 = int_6 * int_7;
				}
				if(1)
				{
					double double_2 = 1;
					double double_3 = 1;
					double_2 = double_3;
					double_1 = double_2 + double_1;
					long_1 = long_3;
					int_4 = int_2 + int_1;
				}
				long_1 = long_2 + long_2;
				char_1 = char_3;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long_2 = long_1;
	}
	int_2 = int_5 * int_7;
	return char_3;
}
void v_LoggerWrite2( long parameter_1,float parameter_2,int uni_para)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v_ScreenDeviceWrite(long_1,char_1,float_1,uni_para);

	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1;
}
void v_LoggerWriteV( unsigned int parameter_1,float parameter_2,short parameter_3,short parameter_4,long parameter_5,int uni_para)
{
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_4 = 1;
	char char_1 = 1;
	v_LoggerWrite2(long_1,float_1,uni_para);

	int_3 = int_1 + int_2;
	float_3 = float_2 * float_3;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_2 + long_3;
	}
	float_1 = float_4;
	char_1 = char_1 + char_1;
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 * int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
}
void v_LoggerWrite( short parameter_1,short parameter_2,int parameter_3,char parameter_4,char parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_3 = long_1 * long_2;
	v_LoggerWriteV(unsigned_int_1,float_1,short_1,short_2,long_3,-1 );

	short_2 = short_3 + short_4;
	double_1 = double_1;
	int_1 = int_2;
}
unsigned int v_LoggerInitialize( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_2 = int_1 * int_2;
	double_1 = double_1;
	return unsigned_int_1;
	v_LoggerWrite(short_1,short_1,int_2,char_1,char_2);

}
void v_Logger( long parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
void v_Timer( char parameter_1)
{
	if(1)
	{
	}
}
void v_InterruptSystem()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int_1 = int_1;
		long_1 = long_1 + long_2;
	}
	short_1 = short_1;
}
void v_DataAbortStub()
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float_2 = float_1 + float_1;
	char_1 = char_1 + char_2;
	short_1 = short_1 + short_1;
	double_2 = double_1 * double_1;
	float_2 = float_3 * float_3;
	short_2 = short_1 * short_1;
	double_2 = double_3;
	unsigned_int_1 = unsigned_int_2;
	float_4 = float_4 + float_1;
	int_1 = int_2;
	if(1)
	{
		long_1 = long_1;
	}
	short_3 = short_2 * short_2;
	if(1)
	{
		double_3 = double_1 + double_3;
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_2 * double_1;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		long_1 = long_1;
	}
	char_5 = char_3 * char_4;
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
}
void v_PrefetchAbortStub()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_1;
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	float_2 = float_1 + float_1;
	double_1 = double_1;
	float_4 = float_1 + float_3;
	long_2 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_3 = long_4;
		if(1)
		{
			float float_5 = 1;
			int int_1 = 1;
			float_1 = float_5 + float_3;
			if(1)
			{
				short short_2 = 1;
				short_1 = short_1 + short_2;
				int_1 = int_1;
			}
			int_1 = int_1;
		}
	}
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	float_4 = float_3 * float_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			double double_4 = 1;
			short_1 = short_1;
			if(1)
			{
				double double_3 = 1;
				double_1 = double_3 + double_2;
				double_1 = double_3 + double_1;
			}
			double_2 = double_4;
		}
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_2 + int_2;
		}
	}
}
void v_UndefinedInstructionStub()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_8 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int_3 = int_1 + int_2;
	double_1 = double_2;
	float_1 = float_1 + float_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	long_1 = long_1 + long_1;
	int_3 = int_3 * int_1;
	char_1 = char_1 + char_2;
	double_4 = double_1 * double_3;
	int_3 = int_1 * int_3;
	short_2 = short_1 + short_1;
	int_2 = int_2 * int_4;
	double_5 = double_5 * double_4;
	double_6 = double_2 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_1 * int_3;
	float_3 = float_1 + float_2;
	long_2 = long_2 + long_3;
	int_3 = int_1 + int_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	int_1 = int_2 * int_2;
	float_2 = float_4 * float_2;
	float_4 = float_2 * float_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		char_2 = char_3 + char_2;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
	}
	if(1)
	{
		int int_5 = 1;
		long long_4 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int_5 = int_3;
		double_1 = double_1;
		long_4 = long_3 + long_1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2;
			if(1)
			{
				long_4 = long_2 + long_2;
				int_7 = int_6 * int_6;
			}
		}
		if(1)
		{
			float float_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
			double_1 = double_2 * double_2;
			float_2 = float_5 * float_4;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
				unsigned_int_6 = unsigned_int_2;
				int_7 = int_4;
				char_3 = char_2;
				long_1 = long_3;
			}
			unsigned_int_6 = unsigned_int_6 + unsigned_int_5;
		}
		if(1)
		{
			long long_5 = 1;
			long long_6 = 1;
			long long_7 = 1;
			short_1 = short_1 + short_2;
			int_8 = int_4 * int_6;
			long_6 = long_3 * long_5;
			char_1 = char_1 * char_1;
			long_6 = long_7 * long_2;
		}
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
	double_4 = double_5 * double_4;
	int_8 = int_8;
	double_3 = double_1 * double_1;
	short_1 = short_1 + short_1;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_1 = unsigned_int_7 + unsigned_int_1;
	}
	short_3 = short_3 + short_4;
}
void v_ExceptionHandler2( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_2;
	v_UndefinedInstructionStub();

	double_3 = double_1 * double_2;
	double_4 = double_4 + double_5;
	float_1 = float_2;
	int_2 = int_1 * int_3;
	v_PrefetchAbortStub();

	double_2 = double_6 + double_3;
	v_CleanDataCache();

	int_3 = int_3 * int_3;
	float_2 = float_3 + float_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 * short_1;
	int_3 = int_2 + int_1;
	float_2 = float_3 * float_2;
	float_1 = float_4 * float_2;
	v_DataAbortStub();

}
void v__CharGenerator( float parameter_1)
{
}
void v_free()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_3 = float_1 + float_2;
	long_2 = long_1 + long_2;
	float_3 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			long_2 = long_2;
			short_2 = short_1 + short_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			short_3 = short_3 * short_1;
			int_1 = int_2;
			int_3 = int_1 * int_3;
		}
	}
}
void v__BcmFrameBuffer()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 * int_2;
	v__BcmMailBox(long_1);

	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_free();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
}
void v__ScreenDevice( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	v__BcmFrameBuffer();

	float_1 = float_2;
	char_1 = char_1 + char_1;
	short_2 = short_1 * short_1;
	double_1 = double_2;
	v__CharGenerator(float_1);

	float_4 = float_2 * float_3;
	v_free();

}
float v_ScreenDeviceGetPixel( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	float float_1 = 1;
	if(1)
	{
	}
	return float_1;
}
double v_CharGeneratorGetUnderline( char parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	short_1 = short_1 * short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "Q") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	return double_1;
}
void v_ScreenDeviceInvertCursor( int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long_1 = long_1 + long_2;
			}
			if(1)
			{
				int int_2 = 1;
				double_1 = v_CharGeneratorGetUnderline(char_1);

				short_1 = v_CharGeneratorGetCharWidth(double_1);

				float_1 = v_ScreenDeviceGetPixel(long_3,unsigned_int_1,int_1);

				int_2 = int_1;
			}
		}
	}
	double_1 = v_CharGeneratorGetCharHeight(short_1);

	v_ScreenDeviceSetPixel(double_2,int_3,unsigned_int_2,unsigned_int_3);

}
void v_ScreenDeviceSetPixel( double parameter_1,int parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ".m") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
}
void v_ScreenDeviceEraseChar( unsigned int parameter_1,long parameter_2,float parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_2 = 1;
			int int_3 = 1;
			double_1 = v_CharGeneratorGetCharHeight(short_1);

			short_2 = v_CharGeneratorGetCharWidth(double_2);

			v_ScreenDeviceSetPixel(double_3,int_1,unsigned_int_1,unsigned_int_1);

			int_1 = int_2 * int_3;
		}
	}
}
short v_CharGeneratorGetCharWidth( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return short_1;
}
void v_ScreenDeviceClearLineEnd( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		v_ScreenDeviceEraseChar(unsigned_int_1,long_1,float_1);

		short_1 = short_1 + short_1;
	}
	short_2 = v_CharGeneratorGetCharWidth(double_1);

}
void v_ScreenDeviceClearDisplayEnd( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double_3 = double_1 * double_2;
	short_1 = short_1 + short_2;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_3 + double_4;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		char_2 = char_1 + char_1;
		double_2 = v_CharGeneratorGetCharHeight(short_1);

		int_1 = int_2 + int_2;
	}
	long_1 = long_1;
	v_ScreenDeviceClearLineEnd(short_3);

	char_5 = char_3 + char_4;
}
void v_ScreenDeviceCursorHome( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_1;
	int_3 = int_3;
}
double v_CharGeneratorGetCharHeight( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_3 = 1;
		float_2 = float_1 * float_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			int_1 = int_1 + int_1;
		}
		double_3 = double_1 + double_2;
	}
	int_3 = int_2 + int_2;
	char_2 = char_1 + char_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		int int_5 = 1;
		long_1 = long_1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
		}
		if(1)
		{
			int int_4 = 1;
			int_2 = int_4 * int_3;
		}
		int_3 = int_1 + int_5;
	}
	char_3 = char_1;
	char_4 = char_2 + char_2;
	return double_2;
}
long v_BcmFrameBufferGetPitch( int parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	char_1 = char_1 + char_1;
	return long_1;
}
unsigned int v_BcmFrameBufferGetHeight( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char_3 = char_1 * char_2;
	return unsigned_int_1;
}
int v_BcmFrameBufferGetWidth( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_2;
	return int_2;
}
unsigned int v_BcmFrameBufferGetSize( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_2;
	return unsigned_int_1;
}
float v_BcmFrameBufferGetBuffer( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return float_1;
}
float v_BcmFrameBufferGetDepth( long parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_1;
	return float_1;
}
float v_BcmFrameBufferInitialize( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	v_CleanDataCache();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 * short_1;
	int_2 = int_1 + int_2;
	char_1 = char_1 + char_1;
	int_2 = v_BcmMailBoxWriteRead(unsigned_int_1,double_1);

	double_3 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
	v_InvalidateDataCache();

}
void v_BcmFrameBufferSetPalette( long parameter_1,double parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
}
float v_memset(int parameter_2,float parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1;
	char_4 = char_2 + char_3;
	double_1 = double_1 + double_1;
	float_3 = float_1 * float_2;
	double_3 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return float_2;
}
void v_BcmFrameBuffer( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	short short_5 = 1;
	double double_6 = 1;
	long long_5 = 1;
	float float_4 = 1;
	char_1 = char_2;
	long_2 = long_1 * long_2;
	if(1)
	{
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double_2 = double_1 + double_1;
		long_3 = long_3 * long_3;
		double_3 = double_1 * double_1;
		if(1)
		{
			long_4 = long_2 * long_2;
			double_1 = double_1 * double_4;
			if(1)
			{
				short_2 = short_1 + short_1;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			v_BcmMailBox(char_3);

			int_2 = int_1 + int_1;
			short_2 = v_malloc(short_3);

			float_1 = v_memset(int_2,float_2);

			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	}
	if(1)
	{
		char char_4 = 1;
		char_3 = char_4 + char_2;
		int_1 = int_2 + int_2;
	}
	if(1)
	{
		short short_4 = 1;
		v__BcmPropertyTags(double_5);

		short_4 = short_4 * short_1;
	}
	double_1 = double_5;
	unsigned_int_5 = unsigned_int_6;
	int_2 = int_1 * int_2;
	double_4 = double_3 * double_2;
	v_BcmPropertyTags(float_3);

	long_4 = v_BcmPropertyTagsGetTag(short_5,char_1,short_5,char_2);

	double_5 = double_3 * double_5;
	double_1 = double_6;
	long_5 = long_2 + long_5;
	float_4 = float_2 * float_2;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
	short_2 = short_3 * short_1;
}
long v_ScreenDeviceInitialize( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		v_BcmFrameBuffer(unsigned_int_2);

		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	v_BcmFrameBufferSetPalette(long_1,double_1,float_1);

	float_2 = v_BcmFrameBufferGetDepth(long_2);

	double_1 = double_1;
	float_2 = v_BcmFrameBufferInitialize(char_1);

	v_ScreenDeviceClearDisplayEnd(float_2);

	long_4 = long_3 + long_2;
	if(1)
	{
	}
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	int_1 = v_BcmFrameBufferGetWidth(char_2);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	float_2 = v_BcmFrameBufferGetBuffer(int_1);

	int_2 = int_3 * int_4;
	double_2 = v_CharGeneratorGetCharHeight(short_1);

	v_ScreenDeviceInvertCursor(int_1);

	long_4 = long_2 * long_2;
	if(1)
	{
	}
	char_1 = char_3;
	char_1 = char_3;
	unsigned_int_4 = v_BcmFrameBufferGetHeight(int_2);

	v_ScreenDeviceCursorHome(float_2);

	int_5 = int_3 * int_2;
	short_2 = v_malloc(short_1);

	long_3 = v_BcmFrameBufferGetPitch(int_3);

	unsigned_int_3 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	return long_5;
	unsigned_int_5 = v_BcmFrameBufferGetSize(int_2);

}
void v_CharGenerator( long parameter_1)
{
	double double_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
	}
}
void v_ScreenDevice( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	double_1 = double_1 * double_1;
	double_2 = double_1 + double_1;
	float_1 = float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1 + short_2;
	v_CharGenerator(long_1);

	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_2;
}
void v__BcmMailBox( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
}
void v__BcmPropertyTags( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v__BcmMailBox(long_1);

	float_1 = float_1;
}
int v_PageTableGetBaseAddress()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	return int_1;
}
void v_MemorySystemEnableMMU( short parameter_1)
{
	int int_1 = 1;
	int_1 = v_PageTableGetBaseAddress();

	v_InvalidateDataCache();

}
void v_PageTable()
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int_1 = int_2;
	char_2 = char_1 + char_2;
	double_2 = double_1 * double_1;
	double_1 = double_2 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double_2 = double_3 + double_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_2 = int_1;
		int_1 = int_1;
		int_1 = int_1 + int_3;
		double_2 = double_1 + double_3;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		long_2 = long_1 * long_2;
		long_2 = long_1;
		long_1 = long_1;
		float_2 = float_1 + float_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
		long_3 = long_2 * long_1;
		v_CleanDataCache();

		unsigned_int_2 = unsigned_int_5;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_5;
		if(1)
		{
			long_1 = long_3;
		}
	}
	double_1 = double_1 + double_4;
	int_4 = int_5;
}
int v_palloc()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_3 = 1;
	int int_7 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_7 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	int_2 = int_1 + int_1;
	int_2 = int_3 * int_1;
	double_1 = double_1 + double_1;
	double_2 = double_1;
	int_1 = int_3 + int_3;
	double_1 = double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_4 + int_2;
	double_2 = double_2 * double_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	int_1 = int_1 * int_2;
	double_2 = double_4 + double_3;
	short_1 = short_1;
	short_1 = short_2 * short_2;
	int_1 = int_5 + int_6;
	short_3 = short_2 + short_3;
	int_5 = int_3;
	double_4 = double_3 + double_3;
	int_3 = int_6 + int_7;
	short_4 = short_1 * short_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	short_3 = short_5 * short_1;
	short_6 = short_1;
	double_4 = double_4 * double_4;
	double_6 = double_4 + double_5;
	long_1 = long_1 * long_1;
	int_3 = int_2 * int_2;
	int_6 = int_2 + int_1;
	unsigned_int_3 = unsigned_int_6 * unsigned_int_7;
	double_7 = double_6 + double_4;
	int_5 = int_4 + int_1;
	float_1 = float_1;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
	float_2 = float_1;
	unsigned_int_2 = unsigned_int_8 + unsigned_int_4;
	double_7 = double_5 * double_3;
	int_3 = int_6 * int_5;
	unsigned_int_7 = unsigned_int_7 + unsigned_int_6;
	return int_5;
}
void v_PageTable2( short parameter_1,long parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	float float_5 = 1;
	char char_7 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_4 = double_2 + double_3;
	long_1 = long_2;
	double_3 = double_2 * double_2;
	long_1 = long_2;
	int_1 = int_1 + int_1;
	float_2 = float_1 + float_2;
	float_2 = float_1;
	double_5 = double_4 * double_3;
	int_1 = v_palloc();

	short_2 = short_1 * short_1;
	int_2 = int_3;
	int_5 = int_1 * int_4;
	char_3 = char_1 * char_2;
	double_6 = double_5 * double_3;
	float_4 = float_1 + float_3;
	short_1 = short_2 + short_2;
	short_1 = short_3 + short_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	v_CleanDataCache();

	long_2 = long_1 + long_1;
	double_3 = double_5 * double_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	float_3 = float_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	char_5 = char_3 + char_4;
	char_2 = char_4 + char_6;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_1;
	int_4 = int_4 + int_2;
	long_1 = long_3 * long_3;
	int_4 = int_2 + int_5;
	float_4 = float_2 + float_5;
	int_5 = int_1;
	long_3 = long_2;
	char_1 = char_7 + char_7;
	char_1 = char_5;
	float_5 = float_2 * float_5;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_5;
	int_3 = int_2;
	double_3 = double_4 * double_1;
	int_7 = int_6 * int_2;
}
void v_LeaveCritical()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = double_1 + double_2;
	double_2 = double_3;
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 + char_1;
		}
	}
}
void v_EnterCritical()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_3;
	double_2 = double_1 + double_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	}
	short_1 = short_1 + short_1;
}
short v_malloc( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_1 = double_2;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				v_LeaveCritical();

				unsigned_int_2 = unsigned_int_3;
			}
			double_4 = double_3 * double_2;
		}
	}
	long_1 = long_2;
	if(1)
	{
		double double_5 = 1;
		double_6 = double_5 + double_2;
		v_EnterCritical();

		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		int int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int_1 = int_4 + int_4;
		char_1 = char_1 + char_1;
		if(1)
		{
			int_1 = int_2 + int_4;
		}
		char_3 = char_2 * char_3;
		double_1 = double_2 * double_6;
	}
	long_1 = long_2 * long_1;
	short_3 = short_1 * short_1;
	short_4 = short_5;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	return short_3;
}
void v_mem_init( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_1;
	float_1 = float_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_2 = short_1 + short_1;
		double_1 = double_1 + double_1;
		float_3 = float_2 * float_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_2 = unsigned_int_2;
	}
}
void v_InvalidateDataCache()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_2 = 1;
			int_1 = int_1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int int_2 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
			int_1 = int_1 + int_2;
		}
	}
}
void v_BcmMailBoxRead( long parameter_1)
{
	double double_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "/D") < 0)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				if(1)
				{
					int int_1 = 1;
					int int_2 = 1;
					int_2 = int_1 + int_1;
				}
			}
			float_2 = v_read32(double_1);

			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
	}
	long_2 = long_1 * long_2;
}
void v_write32( float parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float_3 = float_1 * float_2;
}
void v_BcmMailBoxWrite( char parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	float float_4 = 1;
	char char_1 = 1;
	short short_3 = 1;
	char char_2 = 1;
	int int_3 = 1;
	float float_5 = 1;
	short short_4 = 1;
	double double_1 = 1;
	float_3 = float_1 + float_2;
	long_1 = long_2;
	long_2 = long_3 * long_3;
	float_3 = float_3;
	int_1 = int_1 * int_1;
	short_1 = short_2;
	int_1 = int_2 + int_2;
	v_write32(float_4,char_1);

	short_3 = short_2 * short_1;
	char_2 = char_2 + char_2;
	int_3 = int_2 + int_3;
	float_5 = float_1 + float_3;
	long_3 = long_3 + long_1;
	short_2 = short_4 + short_3;
	int_1 = int_2 + int_1;
	float_3 = v_read32(double_1);

}
void v_TimerSimpleusDelay( float parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float_1 = v_read32(double_1);

	int_2 = int_1 * int_1;
	int_3 = int_1 * int_1;
	float_2 = float_2 * float_1;
}
void v_TimerSimpleMsDelay( double parameter_1)
{
	float float_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "C") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		v_TimerSimpleusDelay(float_1);

		int_2 = int_1 + int_1;
	}
}
float v_read32( double parameter_1)
{
	float float_1 = 1;
	return float_1;
}
void v_BcmMailBoxFlush( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_2;
	float_1 = v_read32(double_1);

	v_TimerSimpleMsDelay(double_1);

}
int v_BcmMailBoxWriteRead( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_2;
	v_BcmMailBoxFlush(unsigned_int_1);

	double_3 = double_3 * double_1;
	float_1 = float_1 + float_2;
	long_2 = long_1 * long_1;
	long_4 = long_2 + long_3;
	v_BcmMailBoxWrite(char_1,short_1);

	v_BcmMailBoxRead(long_3);

	short_2 = short_1 * short_2;
	return int_1;
}
void v_CleanDataCache()
{
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			short short_1 = 1;
			char_3 = char_1 * char_2;
			short_1 = short_1;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			double_1 = double_2;
			int_1 = int_1 * int_1;
		}
	}
}
char v_memcpy(float parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	int_3 = int_1;
	float_1 = float_1;
	return char_1;
}
long v_BcmPropertyTagsGetTag( short parameter_1,char parameter_2,short parameter_4,char parameter_5)
{
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char_1 = v_memcpy(float_1,double_1);

	v_InvalidateDataCache();

	short_1 = short_1 * short_2;
	int_1 = v_BcmMailBoxWriteRead(unsigned_int_1,double_1);

	short_3 = short_1 * short_2;
	if(1)
	{
	}
	v_CleanDataCache();

	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	return long_1;
}
void v_BcmMailBox( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	char_3 = char_1 * char_2;
	double_1 = double_1 * double_1;
}
void v_BcmPropertyTags( float parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	v_BcmMailBox(char_1);

	short_3 = short_1 * short_2;
	double_1 = double_1 * double_1;
}
void v_MemorySystem( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	float float_3 = 1;
	int_1 = int_1 * int_2;
	v_mem_init(int_2,int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_2;
	short_3 = short_1 * short_1;
	long_1 = v_BcmPropertyTagsGetTag(short_3,char_1,short_2,char_2);

	double_1 = double_1;
	double_1 = double_1 + double_2;
	char_2 = char_2 * char_3;
	short_4 = v_malloc(short_5);

	double_3 = double_1 + double_2;
	if(1)
	{
		v__BcmPropertyTags(double_4);

		short_4 = short_5;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	}
	float_2 = float_1 * float_1;
	v_MemorySystemEnableMMU(short_4);

	long_2 = long_2 + long_2;
	v_PageTable2(short_4,long_1);

	float_3 = float_2 + float_3;
	if(1)
	{
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		v_BcmPropertyTags(float_3);

		long_2 = long_2 + long_1;
		int_3 = int_1 + int_2;
		char_1 = char_1 + char_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		unsigned_int_6 = unsigned_int_2 + unsigned_int_5;
		short_5 = short_1 * short_4;
		long_2 = long_1 + long_1;
	}
	short_5 = short_1 * short_2;
	v_PageTable();

}
int v_USPiEnvInitialize()
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_5 = 1;
	float float_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	v_InterruptSystem();

	v_Logger(long_1);

	unsigned_int_1 = v_TimerInitialize(long_2);

	char_3 = char_1 * char_2;
	v_ExceptionHandler2(float_1);

	v_Timer(char_4);

	v__InterruptSystem();

	double_2 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		long long_3 = 1;
		v__ScreenDevice(unsigned_int_1);

		v__ExceptionHandler(double_3);

		unsigned_int_2 = unsigned_int_3;
		v_MemorySystem(double_3);

		v_ScreenDevice(int_1);

		unsigned_int_2 = v_LoggerInitialize(char_5,long_1);

		int_1 = v_InterruptSystemInitialize(float_2);

		int_2 = int_2 + int_2;
		long_3 = long_1 + long_3;
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "z") > 0)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_3 = 1;
			v__Logger(double_1);

			v__Timer(char_3);

			float_3 = float_1;
		}
	}
	return int_3;
	long_1 = v_ScreenDeviceInitialize(long_4);

}
int main()
{
	int uni_para =480;
	int int_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char controller4vul_301[3];
	fgets(controller4vul_301 ,3 ,stdin);
	if( strcmp( controller4vul_301, "ss") > 0)
	{
		int_1 = v_USPiInitialize(uni_para);

	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double_3 = double_2 + double_1;
		short_2 = short_1 * short_2;
	}
	long_1 = long_1 * long_2;
	int_2 = int_2 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		short_3 = short_2;
	}
	return int_4;
}

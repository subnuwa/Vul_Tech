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

void v_ScreenDeviceRotor( double parameter_1,unsigned int parameter_2,int parameter_3);
long v_USPiEnvGetScreen();
double v_KeyPressedHandler( double parameter_1);
void v_USBKeyboardDeviceRegisterKeyPressedHandler( long parameter_1,char parameter_2);
void v_USPiKeyboardRegisterKeyPressedHandler( float parameter_1);
int v_USPiKeyboardAvailable();
void v_USPiEnvClose();
int v_strcmp( int parameter_1,double parameter_2);
unsigned int v_DeviceNameServiceGetDevice( long parameter_1,short parameter_2,int parameter_3);
void v__DeviceNameService( short parameter_1);
void v__DWHCIRootPort();
void v__DWHCIDevice( double parameter_1);
void v_DWHCIDeviceDisableRootPort( char parameter_1);
double v_DWHCIDeviceOvercurrentDetected( char parameter_1);
void v_USBMIDIDeviceCompletionRoutine( float parameter_1);
unsigned int v_USBMIDIDeviceStartRequest( float parameter_1);
short v_USBMIDIDeviceConfigure( float parameter_1);
void v_USBMIDIDevice( unsigned int parameter_1);
void v_USBGamePadDeviceCompletionRoutine( unsigned int parameter_1);
float v_USBGamePadDeviceStartRequest();
void v_USBGamePadDevicePS3Configure( double parameter_1);
int v_BitGetSigned(short parameter_2,long parameter_3);
char v_BitGetUnsigned(long parameter_2,unsigned int parameter_3);
float v_USBGamePadDeviceDecodeReport( double parameter_1);
char v_USBGamePadDeviceConfigure( unsigned int parameter_1);
void v_USBGamePadDevice( short parameter_1);
void v_LAN7800DevicePHYWrite( float parameter_1,char parameter_2,int parameter_3);
long v_LAN7800DevicePHYRead( float parameter_1,char parameter_2,long parameter_3);
short v_LAN7800DeviceInitPHY( short parameter_1);
short v_LAN7800DeviceInitMACAddress( double parameter_1);
long v_LAN7800DeviceWaitReg( char parameter_1,long parameter_2,long parameter_3,long parameter_4);
float v_LAN7800DeviceWriteReg( int parameter_1,char parameter_2,float parameter_3);
short v_LAN7800DeviceReadWriteReg( unsigned int parameter_1,unsigned int parameter_2,short parameter_3,long parameter_4);
int v_LAN7800DeviceReadReg( char parameter_1,short parameter_2,char parameter_3);
char v_LAN7800DeviceConfigure( float parameter_1);
void v_LAN7800Device( float parameter_1);
long v_SMSC951xDeviceWriteReg( long parameter_1,int parameter_2,double parameter_3);
void v_MACAddressCopyTo( short parameter_1,char parameter_2);
void v_MACAddressFormat( unsigned int parameter_1,short parameter_2);
void v_MACAddressSet( char parameter_1,short parameter_2);
int v_GetMACAddress( short parameter_1);
void v_MACAddress( char parameter_1);
float v_SMSC951xDeviceConfigure( unsigned int parameter_1);
void v_SMSC951xDevice( char parameter_1);
int v_uspi_char2int( char parameter_1);
void v_USBMouseDeviceCompletionRoutine( short parameter_1);
long v_USBMouseDeviceStartRequest( double parameter_1);
int v_USBMouseDeviceConfigure( unsigned int parameter_1);
void v_USBMouseDevice( double parameter_1);
void v_KeyMap( unsigned int parameter_1);
char v_DWHCIDeviceSubmitAsyncRequest( double parameter_1,int parameter_2);
void v_TimerCancelKernelTimer( int parameter_1,float parameter_2);
void v_CancelKernelTimer( double parameter_1);
char v_KeyMapGetString( float parameter_1,short parameter_2,float parameter_3,char parameter_4);
float v_KeyMapTranslate( unsigned int parameter_1,long parameter_2,unsigned int parameter_3);
void v_USBKeyboardDeviceGenerateKeyEvent( char parameter_1,long parameter_2);
long v_USBKeyboardDeviceGetKeyCode( char parameter_1);
float v_USBKeyboardDeviceGetModifiers( int parameter_1);
void v_USBKeyboardDeviceCompletionRoutine( double parameter_1);
double v_USBKeyboardDeviceStartRequest( int parameter_1);
float v_USBKeyboardDeviceConfigure();
void v_USBKeyboardDevice( int parameter_1);
double v_DeviceNameServiceGet();
void v_strcpy( char parameter_1,int parameter_2);
void v_DeviceNameServiceAddDevice( int parameter_1,short parameter_2,unsigned int parameter_4);
double v_uspi_le2be32( int parameter_1);
int v_DWHCIDeviceTransfer( float parameter_1,float parameter_2,int parameter_4);
int v_USBBulkOnlyMassStorageDeviceCommand( unsigned int parameter_1,long parameter_3,short parameter_5,double parameter_6);
void v_USBEndpoint2( int parameter_1,long parameter_2,short parameter_3);
int v_USBBulkOnlyMassStorageDeviceConfigure( long parameter_1);
void v_USBBulkOnlyMassStorageDevice( double parameter_1);
float v_USBStandardHubEnumeratePorts( short parameter_1,int uni_para);
float v_USBConfigurationParserGetDescriptor( float parameter_1,short parameter_2);
float v_USBDeviceGetDescriptor( float parameter_1,char parameter_2);
double v_USBDeviceGetDeviceDescriptor( int parameter_1);
float v_USBStandardHubConfigure( short parameter_1,int uni_para);
void v_USBEndpointCopy( char parameter_1,unsigned int parameter_2,double parameter_3);
void v_USBStringCopy( short parameter_1,char parameter_2);
void v_USBDeviceCopy( double parameter_1,float parameter_2);
void v_USBStandardHub( unsigned int parameter_1,int uni_para);
char v_GetDevice( unsigned int parameter_1,short parameter_2,int uni_para);
short v_USBDeviceFactoryGetDevice( int parameter_1,int uni_para);
void v_StringAppend( double parameter_1,unsigned int parameter_2);
void v_StringGetLength();
int v_StringCompare( long parameter_1,char parameter_2);
void v_StringSet( float parameter_1,unsigned int parameter_2);
char v_USBDeviceGetName( short parameter_1,char parameter_2);
long v_USBStandardHubGetDeviceNames( long parameter_1);
void v__USBString( int parameter_1);
void v__USBEndpoint( long parameter_1);
void v__USBConfigurationParser( char parameter_1);
void v__USBDevice( int parameter_1);
void v_debug_hexdump( short parameter_1,int parameter_2,char parameter_3);
void v_DebugHexdump( int parameter_1,long parameter_2,short parameter_3);
void v_USBConfigurationParserError( char parameter_1,char parameter_2);
void v_USBDeviceConfigurationError( short parameter_1,short parameter_2);
double v_USBConfigurationParserIsValid();
void v_USBConfigurationParser( int parameter_1);
void v_String2( short parameter_1,short parameter_2);
char v_USBStringGetFromDescriptor( int parameter_1,long parameter_2,char parameter_3);
unsigned int v_USBDeviceGetEndpoint0( double parameter_1);
unsigned int v_USBDeviceGetHost( unsigned int parameter_1);
void v_USBStringGetLanguageID( short parameter_1,int uni_para);
void v_USBDeviceSetAddress( float parameter_1,short parameter_2);
char v_DWHCIDeviceSetAddress( double parameter_1,short parameter_2,double parameter_3);
void v_USBEndpointSetMaxPacketSize( long parameter_1,int parameter_2);
int v_DWHCIDeviceGetDescriptor( float parameter_1,int parameter_2,short parameter_3,unsigned int parameter_4,short parameter_6,float parameter_7,int uni_para);
unsigned int v_USBDeviceInitialize(int uni_para);
void v_USBString( int parameter_1);
void v_USBEndpoint( short parameter_1);
void v__USBRequest( char parameter_1);
char v_USBRequestGetResultLength( float parameter_1);
short v_USBEndpointIsDirectionIn( unsigned int parameter_1);
int v_USBRequestGetStatus();
void v_DWHCIDeviceEnableChannelInterrupt( int parameter_1,unsigned int parameter_2);
void v_DWHCIFrameSchedulerNoSplitIsOddFrame( long parameter_1);
void v_DWHCIFrameSchedulerNoSplitWaitForFrame( float parameter_1);
void v_DWHCIFrameSchedulerNoSplitTransactionComplete( unsigned int parameter_1,float parameter_2);
unsigned int v_DWHCIFrameSchedulerNoSplitCompleteSplit( long parameter_1);
void v_DWHCIFrameSchedulerNoSplitStartSplit( int parameter_1);
void v__DWHCIFrameSchedulerNoSplit( float parameter_1);
void v_DWHCIFrameSchedulerNoSplit( char parameter_1);
int v_DWHCIFrameSchedulerNonPeriodicIsOddFrame( double parameter_1);
void v_DWHCIFrameSchedulerNonPeriodicWaitForFrame( long parameter_1);
void v_DWHCIFrameSchedulerNonPeriodicTransactionComplete( double parameter_1,int parameter_2,int uni_para);
short v_DWHCIFrameSchedulerNonPeriodicCompleteSplit( double parameter_1);
void v_DWHCIFrameSchedulerNonPeriodicStartSplit( float parameter_1);
void v__DWHCIFrameSchedulerNonPeriodic( float parameter_1);
void v_DWHCIFrameSchedulerNonPeriodic( short parameter_1,int uni_para);
void v_DWHCIFrameSchedulerPeriodicIsOddFrame();
void v_DWHCIFrameSchedulerPeriodicWaitForFrame( float parameter_1);
void v_DWHCIFrameSchedulerPeriodicTransactionComplete( int parameter_1,double parameter_2);
char v_DWHCIFrameSchedulerPeriodicCompleteSplit( char parameter_1);
void v_DWHCIFrameSchedulerPeriodicStartSplit( int parameter_1);
void v__DWHCIFrameSchedulerPeriodic();
void v_DWHCIFrameSchedulerPeriodic( double parameter_1);
short v_USBRequestGetBuffer( short parameter_1);
float v_USBEndpointGetMaxPacketSize( unsigned int parameter_1);
float v_USBDeviceGetSpeed( double parameter_1);
int v_USBEndpointGetDevice( char parameter_1);
void v_DWHCITransferStageData( unsigned int parameter_1,int uni_para);
short v_DWHCIDeviceAllocateChannel( unsigned int parameter_1);
long v_DWHCIDeviceTransferStageAsync( float parameter_1,char parameter_2,long parameter_3,float parameter_4,int uni_para);
void v_DWHCIDeviceCompletionRoutine( long parameter_1);
void v_USBRequestSetCompletionRoutine( char parameter_1,double parameter_2);
char v_DWHCIDeviceTransferStage( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
long v_USBRequestGetBufLen( unsigned int parameter_1);
unsigned int v_USBRequestGetSetupData( double parameter_1);
double v_DWHCIDeviceSubmitBlockingRequest( long parameter_1,unsigned int parameter_2,int uni_para);
void v_USBRequest( unsigned int parameter_1);
int v_DWHCIDeviceControlMessage( char parameter_1,short parameter_2,short parameter_3,int parameter_4,short parameter_5,int parameter_6,short parameter_8,int uni_para);
double v_DWHCIDeviceSetConfiguration( char parameter_1,long parameter_2,char parameter_3);
void v_USBDeviceConfigure( double parameter_1);
void v_USBDevice();
double v_DWHCIDeviceGetPortSpeed( unsigned int parameter_1);
void v_DWHCIRootPortInitialize( short parameter_1,int uni_para);
int v_DWHCIDeviceEnableRootPort( float parameter_1);
void v_DWHCIDeviceEnableHostInterrupts();
void v_DWHCIDeviceFlushRxFIFO( double parameter_1);
void v_TimerusDelay( long parameter_1,char parameter_2);
void v_usDelay();
void v_DWHCIDeviceFlushTxFIFO( short parameter_1,int parameter_2);
int v_DWHCIDeviceInitHost();
void v_DWHCIDeviceEnableGlobalInterrupts( char parameter_1);
void v_DWHCIDeviceEnableCommonInterrupts();
void v_MsDelay( unsigned int parameter_1);
double v_DWHCIDeviceWaitForBit( char parameter_1,double parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5);
int v_DWHCIDeviceReset();
char v_DWHCIDeviceInitCore( double parameter_1);
float v_DWHCITransferStageDataBeginSplitCycle( unsigned int parameter_1);
void v_DWHCITransferStageDataIsStageComplete( short parameter_1);
void v_USBRequestCallCompletionRoutine( char parameter_1);
void v_DWHCIDeviceFreeChannel( double parameter_1,char parameter_2);
void v__DWHCITransferStageData( unsigned int parameter_1);
void v_uspi_LeaveCritical();
void v_uspi_EnterCritical();
void v_DWHCIDeviceDisableChannelInterrupt( unsigned int parameter_1,double parameter_2);
short v_DWHCITransferStageDataGetResultLen( double parameter_1);
void v_USBRequestSetResultLen( double parameter_1,int parameter_2);
short v_DWHCITransferStageDataIsStatusStage( char parameter_1);
void v_DWHCITransferStageDataSetSplitComplete( long parameter_1,long parameter_2);
void v_DWHCIDeviceTimerHandler( float parameter_1);
double v_TimerGet();
void v_TimerStartKernelTimer( unsigned int parameter_1,long parameter_2,long parameter_3);
int v_StartKernelTimer( float parameter_1,int parameter_2);
void v_USBRequestGetEndpoint( float parameter_1);
int v_USBEndpointGetInterval( float parameter_1);
void v_DWHCITransferStageDataSetState( float parameter_1,float parameter_2);
void v_USBRequestSetStatus( short parameter_1,int parameter_2);
short v_DWHCITransferStageDataGetTransactionStatus();
float v_DWHCITransferStageDataGetState( double parameter_1);
void v_USBEndpointSkipPID( double parameter_1,int parameter_2,unsigned int parameter_3);
void v_DWHCITransferStageDataTransactionComplete( unsigned int parameter_1,short parameter_2,char parameter_3,float parameter_4);
void v_DWHCIRegisterIsSet( char parameter_1,double parameter_2);
void v_DWHCIDeviceStartTransaction( char parameter_1,float parameter_2);
char v_DWHCITransferStageDataIsPeriodic();
unsigned int v_DWHCITransferStageDataGetStatusMask( char parameter_1);
void v_DWHCIRegisterSet( short parameter_1,long parameter_2);
void v_USBEndpointGetNumber( short parameter_1);
short v_DWHCITransferStageDataGetEndpointNumber( unsigned int parameter_1);
char v_USBEndpointGetType();
short v_DWHCITransferStageDataGetEndpointType( char parameter_1);
double v_USBDeviceGetAddress( short parameter_1);
double v_DWHCITransferStageDataGetDeviceAddress( char parameter_1);
double v_DWHCITransferStageDataGetSpeed( unsigned int parameter_1);
float v_DWHCITransferStageDataIsDirectionIn( unsigned int parameter_1);
char v_DWHCITransferStageDataGetMaxPacketSize( long parameter_1);
float v_DWHCITransferStageDataIsSplitComplete( short parameter_1);
int v_DWHCITransferStageDataGetSplitPosition( float parameter_1);
double v_USBDeviceGetHubAddress( double parameter_1);
void v_DWHCITransferStageDataGetHubAddress( int parameter_1);
void v_USBDeviceGetHubPortNumber( int parameter_1);
int v_DWHCITransferStageDataGetHubPortAddress( int parameter_1);
double v_DWHCITransferStageDataIsSplit( long parameter_1);
void v_uspi_CleanAndInvalidateDataCacheRange( char parameter_1,unsigned int parameter_2);
float v_DWHCITransferStageDataGetDMAAddress( unsigned int parameter_1);
int v_USBEndpointGetNextPID( short parameter_1,short parameter_2);
short v_DWHCITransferStageDataGetPID( short parameter_1);
void v_DWHCITransferStageDataGetPacketsToTransfer( unsigned int parameter_1);
char v_DWHCITransferStageDataGetBytesToTransfer( long parameter_1);
void v_DWHCIRegisterOr( unsigned int parameter_1,unsigned int parameter_2);
void v_DWHCIRegisterSetAll();
void v_DWHCITransferStageDataSetSubState( long parameter_1,unsigned int parameter_2);
float v_DWHCITransferStageDataGetChannelNumber( long parameter_1);
void v_DWHCIDeviceStartChannel( float parameter_1,int parameter_2);
char v_DWHCITransferStageDataGetSubState( long parameter_1);
void v_DWHCITransferStageDataGetURB( char parameter_1);
double v_DWHCITransferStageDataGetFrameScheduler( float parameter_1);
void v_DWHCIDeviceChannelInterruptHandler( long parameter_1,int parameter_2);
void v_DWHCIRegister2( char parameter_1,short parameter_2,unsigned int parameter_3);
void v_DWHCIDeviceInterruptHandler();
double v_InterruptSystemGet();
void v_ConnectInterrupt( float parameter_1,float parameter_2);
void v_DWHCIRegisterWrite( float parameter_1);
void v_DWHCIRegisterAnd( float parameter_1,long parameter_2);
int v_SetPowerStateOn();
void v__DWHCIRegister( char parameter_1);
short v_DWHCIRegisterGet();
unsigned int v_LoggerGet();
void v_LogWrite( char parameter_1,char parameter_2,float parameter_3,unsigned int parameter_4,int uni_para);
char v_DWHCIRegisterRead( short parameter_1);
void v_DWHCIRegister();
unsigned int v_DWHCIDeviceInitialize( char parameter_1,int uni_para);
void v_DWHCIRootPort( short parameter_1);
void v_DWHCIDevice( unsigned int parameter_1);
void v_DeviceNameService();
int v_USPiInitialize(int uni_para);
void v__ExceptionHandler( char parameter_1);
void v__InterruptSystem( float parameter_1);
void v__Timer( long parameter_1);
void v__Logger( float parameter_1);
void v_DelayLoop( int parameter_1);
void v_TimerMsDelay( char parameter_1,char parameter_2);
long v_TimerGetTicks( char parameter_1);
void v_TimerTuneMsDelay( short parameter_1);
void v_TimerPollKernelTimers( short parameter_1);
void v_TimerInterruptHandler();
void v_InterruptSystemEnableIRQ( long parameter_1);
void v_InterruptSystemConnectIRQ( char parameter_1,unsigned int parameter_2,unsigned int parameter_3);
double v_TimerInitialize();
void v_IRQStub();
int v_InterruptSystemInitialize( char parameter_1);
void v_StringFormatV( unsigned int parameter_1,long parameter_2,int parameter_3);
void v__String( unsigned int parameter_1);
short v_StringGet( float parameter_1);
void v_StringFormat( short parameter_1,long parameter_2,long parameter_3);
void v_String( float parameter_1);
void v_TimerGetTimeString( char parameter_1);
void v_ScreenDeviceSetCursorMode( int parameter_1,long parameter_2);
void v_ScreenDeviceCursorMove( unsigned int parameter_1,float parameter_2,char parameter_3);
void v_ScreenDeviceSetStandoutMode( int parameter_1,int parameter_2);
void v_ScreenDeviceInsertMode( long parameter_1,unsigned int parameter_2);
void v_ScreenDeviceEraseChars( short parameter_1,short parameter_2);
void v_ScreenDeviceDeleteChars( short parameter_1,double parameter_2);
void v_ScreenDeviceDeleteLines( long parameter_1,unsigned int parameter_2);
void v_ScreenDeviceCursorUp( int parameter_1);
void v_ScreenDeviceInsertLines( double parameter_1,char parameter_2);
void v_ScreenDeviceReverseScroll( double parameter_1);
void v_ScreenDeviceCursorRight(int uni_para);
double v_CharGeneratorGetPixel( double parameter_1,char parameter_2,float parameter_3,int parameter_4);
void v_ScreenDeviceDisplayChar2( double parameter_1,char parameter_2,short parameter_3,double parameter_4,char parameter_5);
void v_ScreenDeviceDisplayChar( char parameter_1,char parameter_2);
long v_memcpyblk(float parameter_2,int parameter_3,int uni_para);
void v_ScreenDeviceScroll(int uni_para);
void v_ScreenDeviceCursorDown(int uni_para);
void v_ScreenDeviceCarriageReturn( short parameter_1);
void v_ScreenDeviceNewLine( double parameter_1,int uni_para);
void v_ScreenDeviceTabulator( unsigned int parameter_1);
void v_ScreenDeviceCursorLeft( long parameter_1);
void v_ScreenDeviceWrite2( int parameter_1,char parameter_2,int uni_para);
int v_ScreenDeviceWrite( long parameter_1,unsigned int parameter_2,short parameter_3,int uni_para);
long v_strlen( int parameter_1);
void v_LoggerWrite2( int parameter_1,short parameter_2,int uni_para);
void v_LoggerWriteV( double parameter_1,float parameter_2,unsigned int parameter_3,long parameter_4,long parameter_5,int uni_para);
void v_LoggerWrite( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,float parameter_4,char parameter_5);
unsigned int v_LoggerInitialize( float parameter_1,unsigned int parameter_2);
void v_Logger( double parameter_1);
void v_Timer( short parameter_1);
void v_InterruptSystem( int parameter_1);
void v_DataAbortStub();
void v_PrefetchAbortStub();
void v_UndefinedInstructionStub();
void v_ExceptionHandler2( unsigned int parameter_1);
void v__CharGenerator( float parameter_1);
void v_free();
void v__BcmFrameBuffer( long parameter_1);
void v__ScreenDevice( double parameter_1);
unsigned int v_ScreenDeviceGetPixel( float parameter_1,char parameter_2,float parameter_3);
short v_CharGeneratorGetUnderline( int parameter_1);
void v_ScreenDeviceInvertCursor( unsigned int parameter_1);
void v_ScreenDeviceSetPixel( float parameter_1,unsigned int parameter_2,char parameter_3,unsigned int parameter_4);
void v_ScreenDeviceEraseChar( float parameter_1,short parameter_2,float parameter_3);
short v_CharGeneratorGetCharWidth();
void v_ScreenDeviceClearLineEnd( int parameter_1);
void v_ScreenDeviceClearDisplayEnd( short parameter_1);
void v_ScreenDeviceCursorHome( double parameter_1);
float v_CharGeneratorGetCharHeight( int parameter_1);
unsigned int v_BcmFrameBufferGetPitch( long parameter_1);
void v_BcmFrameBufferGetHeight( unsigned int parameter_1);
void v_BcmFrameBufferGetWidth( double parameter_1);
short v_BcmFrameBufferGetSize();
void v_BcmFrameBufferGetBuffer( char parameter_1);
char v_BcmFrameBufferGetDepth( unsigned int parameter_1);
short v_BcmFrameBufferInitialize( float parameter_1);
void v_BcmFrameBufferSetPalette( double parameter_1,unsigned int parameter_2,double parameter_3);
long v_memset(int parameter_2,int parameter_3);
void v_BcmFrameBuffer( char parameter_1);
long v_ScreenDeviceInitialize( double parameter_1);
void v_CharGenerator( float parameter_1);
void v_ScreenDevice( short parameter_1);
void v__BcmMailBox( double parameter_1);
void v__BcmPropertyTags( double parameter_1);
int v_PageTableGetBaseAddress( float parameter_1);
void v_MemorySystemEnableMMU( double parameter_1);
void v_PageTable( char parameter_1);
float v_palloc();
void v_PageTable2( short parameter_1,unsigned int parameter_2);
void v_LeaveCritical();
void v_EnterCritical();
short v_malloc( double parameter_1);
void v_mem_init( long parameter_1,unsigned int parameter_2);
void v_InvalidateDataCache();
short v_BcmMailBoxRead( unsigned int parameter_1);
void v_write32( short parameter_1,double parameter_2);
void v_BcmMailBoxWrite( short parameter_1,short parameter_2);
void v_TimerSimpleusDelay( double parameter_1);
void v_TimerSimpleMsDelay( short parameter_1);
unsigned int v_read32( unsigned int parameter_1);
void v_BcmMailBoxFlush( char parameter_1);
char v_BcmMailBoxWriteRead( unsigned int parameter_1,short parameter_2);
void v_CleanDataCache();
long v_memcpy(float parameter_2,long parameter_3);
void v_BcmPropertyTagsGetTag( long parameter_1,int parameter_2,char parameter_4,float parameter_5);
void v_BcmMailBox();
void v_BcmPropertyTags( float parameter_1);
void v_MemorySystem( int parameter_1);
int v_USPiEnvInitialize();
void v_ScreenDeviceRotor( double parameter_1,unsigned int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_2 = char_1 + char_1;
	short_1 = v_CharGeneratorGetCharWidth();

	short_1 = short_1;
	double_1 = double_1 + double_1;
	v_ScreenDeviceDisplayChar2(double_1,char_2,short_2,double_1,char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
}
long v_USPiEnvGetScreen()
{
	long long_1 = 1;
	return long_1;
}
double v_KeyPressedHandler( double parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int_1 = v_ScreenDeviceWrite(long_1,unsigned_int_1,short_1,-1 );

	char_3 = char_1 + char_2;
	return double_1;
	long_1 = v_USPiEnvGetScreen();

	long_2 = v_strlen(int_1);

}
void v_USBKeyboardDeviceRegisterKeyPressedHandler( long parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	long_1 = long_1 * long_1;
	long_1 = long_1 * long_1;
}
void v_USPiKeyboardRegisterKeyPressedHandler( float parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 + double_1;
	v_USBKeyboardDeviceRegisterKeyPressedHandler(long_1,char_1);

	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
int v_USPiKeyboardAvailable()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	return int_1;
}
void v_USPiEnvClose()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	v__Logger(float_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_1;
	v__ScreenDevice(double_1);

	float_3 = float_1 + float_2;
	v__InterruptSystem(float_2);

	float_1 = float_2 + float_1;
	v__Timer(long_1);

	v__ExceptionHandler(char_1);

}
int v_strcmp( int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_4;
	float_1 = float_1 + float_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2 + double_2;
	}
	if(1)
	{
		int_2 = int_2 + int_1;
	}
	return int_3;
}
unsigned int v_DeviceNameServiceGetDevice( long parameter_1,short parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 + short_1;
	long_1 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		int int_3 = 1;
		double_2 = double_1 + double_2;
		int_1 = v_strcmp(int_2,double_1);

		int_3 = int_1 + int_2;
	}
	return unsigned_int_1;
}
void v__DeviceNameService( short parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	v_free();

	double_1 = double_1 + double_1;
	float_2 = float_1 + float_1;
}
void v__DWHCIRootPort()
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
		int int_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		v__USBDevice(int_1);

		int_2 = int_1 + int_1;
		char_4 = char_2 + char_3;
		int_1 = int_1 + int_2;
	}
	long_1 = long_1 + long_1;
	v_free();

}
void v__DWHCIDevice( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_3 = int_1 + int_2;
	v__DWHCIRootPort();

}
void v_DWHCIDeviceDisableRootPort( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_1 * double_2;
	v_DWHCIRegisterWrite(float_1);

	v__DWHCIRegister(char_1);

	double_3 = double_4;
	v_DWHCIRegister();

	float_3 = float_2 * float_3;
	char_1 = v_DWHCIRegisterRead(short_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_DWHCIRegisterAnd(float_2,long_1);

	unsigned_int_1 = unsigned_int_1;
	int_3 = int_3 + int_3;
}
double v_DWHCIDeviceOvercurrentDetected( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_2;
	float_1 = float_1 + float_2;
	v__DWHCIRegister(char_1);

	int_2 = int_1 * int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	v_DWHCIRegister();

	char_2 = v_DWHCIRegisterRead(short_1);

	double_2 = double_1 * double_2;
	return double_1;
}
void v_USBMIDIDeviceCompletionRoutine( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_2;
	double_2 = double_1 * double_3;
	int_1 = v_USBRequestGetStatus();

	double_2 = double_3;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		v_free();

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		int_2 = int_1 * int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				if(1)
				{
					int int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					int_4 = int_1 + int_3;
					char_1 = char_1 * char_2;
					unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
				}
			}
		}
	}
	int_6 = int_4 + int_5;
	char_1 = v_USBRequestGetResultLength(float_1);

	long_1 = long_1 + long_2;
	unsigned_int_5 = v_USBMIDIDeviceStartRequest(float_2);

	long_3 = long_3 + long_3;
	int_1 = int_6 * int_1;
	v__USBRequest(char_2);

}
unsigned int v_USBMIDIDeviceStartRequest( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 + short_1;
	v_USBRequestSetCompletionRoutine(char_1,double_1);

	v_USBMIDIDeviceCompletionRoutine(float_1);

	char_2 = v_DWHCIDeviceSubmitAsyncRequest(double_1,int_1);

	short_1 = short_2;
	short_2 = short_2 * short_3;
	short_2 = v_malloc(double_1);

	unsigned_int_3 = v_USBDeviceGetHost(unsigned_int_2);

	int_3 = int_2 * int_2;
	char_3 = char_1 + char_3;
	double_4 = double_2 + double_3;
	v_USBRequest(unsigned_int_3);

	short_2 = short_1 + short_4;
	return unsigned_int_3;
}
short v_USBMIDIDeviceConfigure( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	float float_5 = 1;
	int int_10 = 1;
	double double_2 = 1;
	float float_6 = 1;
	long long_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_4 = 1;
	double double_3 = 1;
	float float_8 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_10 = 1;
	char char_8 = 1;
	float float_9 = 1;
	int_3 = int_1 + int_2;
	v_DeviceNameServiceAddDevice(int_3,short_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char_1 = char_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		short_2 = short_2 * short_1;
		int_5 = int_3 * int_4;
		if(1)
		{
			char_2 = char_2 + char_3;
		}
		if(1)
		{
			short_1 = short_1 * short_3;
		}
		float_1 = float_1 + float_2;
		if(1)
		{
			float_4 = float_1 + float_3;
			int_5 = int_2 + int_4;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		}
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		if(1)
		{
			int_1 = int_3 + int_6;
		}
		int_5 = int_1 * int_7;
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_7 * int_5;
		}
		int_7 = int_7 + int_1;
	}
	if(1)
	{
		long_2 = long_2 * long_1;
		char_3 = char_1 * char_3;
		if(1)
		{
			int_6 = int_4 + int_6;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			v_USBDeviceConfigurationError(short_4,short_4);

			unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
			double_1 = double_1 + double_1;
		}
	}
	if(1)
	{
		int int_8 = 1;
		int int_9 = 1;
		int_4 = int_8 * int_9;
		int_5 = int_4 * int_4;
		if(1)
		{
			float_3 = float_5;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_1 = double_1 + double_1;
			int_4 = int_1 + int_10;
		}
		if(1)
		{
			short short_7 = 1;
			short short_8 = 1;
			double double_4 = 1;
			double double_5 = 1;
			char char_5 = 1;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double_2 = double_1 + double_2;
				float_3 = float_6 * float_1;
			}
			if(1)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					v_StringFormat(short_3,long_1,long_4);

					unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
					short_1 = short_3 + short_2;
				}
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
				int_4 = int_2 * int_8;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						short_6 = short_1 + short_5;
					}
					if(1)
					{
						unsigned int unsigned_int_8 = 1;
						v__String(unsigned_int_6);

						long_3 = long_2 + long_3;
						unsigned_int_4 = unsigned_int_7 * unsigned_int_8;
						short_8 = short_7 * short_7;
						for(int looper_5=0; looper_5<1;looper_5++)
						{
							if(1)
							{
								short_7 = short_8 * short_1;
							}
							int_10 = int_3;
							float_3 = float_4 + float_3;
						}
					}
					for(int looper_6=0; looper_6<1;looper_6++)
					{
						float float_7 = 1;
						float_1 = float_7 * float_3;
						unsigned_int_4 = v_USBMIDIDeviceStartRequest(float_6);

						short_6 = short_2 * short_3;
					}
				}
				float_6 = v_USBDeviceGetDescriptor(float_1,char_4);

				v_String(float_5);

				unsigned_int_7 = unsigned_int_6 * unsigned_int_3;
			}
			if(1)
			{
				if(1)
				{
					double_4 = double_3 + double_1;
				}
				double_3 = v_DeviceNameServiceGet();

				double_1 = double_1 * double_1;
			}
			if(1)
			{
				if(1)
				{
					short_3 = v_StringGet(float_8);

					double_5 = double_3 * double_1;
				}
				char_2 = char_1 + char_5;
			}
			if(1)
			{
				if(1)
				{
					short_8 = short_7 + short_1;
				}
				short_3 = short_1 * short_5;
			}
			if(1)
			{
				if(1)
				{
					double double_6 = 1;
					double_6 = double_5 * double_1;
				}
				if(1)
				{
					short_1 = short_5;
				}
				char_5 = char_1;
			}
			if(1)
			{
				if(1)
				{
					float_2 = float_3 * float_8;
				}
				unsigned_int_3 = unsigned_int_6 + unsigned_int_2;
			}
			if(1)
			{
				if(1)
				{
					int_9 = int_10;
				}
				int_1 = int_7 * int_1;
				if(1)
				{
					long_1 = long_1 + long_4;
				}
				if(1)
				{
					v_USBEndpoint2(int_10,long_3,short_1);

					long_4 = long_2 + long_3;
				}
			}
			if(1)
			{
				int_8 = int_4;
				char_4 = char_5 * char_6;
				if(1)
				{
					short_3 = short_6 * short_4;
				}
				double_3 = double_4 + double_1;
				for(int looper_7=0; looper_7<1;looper_7++)
				{
					if(1)
					{
						short short_9 = 1;
						int int_11 = 1;
						unsigned int unsigned_int_9 = 1;
						int_7 = int_3 + int_6;
						short_9 = short_7 + short_4;
						short_3 = v_malloc(double_2);

						int_4 = int_11 * int_7;
						unsigned_int_9 = unsigned_int_2 * unsigned_int_7;
						long_4 = long_1 + long_3;
					}
					unsigned_int_7 = unsigned_int_10;
				}
			}
			if(1)
			{
				char char_7 = 1;
				char_7 = char_1 + char_3;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			v_LogWrite(char_8,char_6,float_9,unsigned_int_5,-1 );

			unsigned_int_10 = unsigned_int_1 + unsigned_int_3;
		}
		long_2 = long_3 * long_2;
		unsigned_int_7 = unsigned_int_3 * unsigned_int_7;
		short_1 = short_3 * short_5;
		char_1 = char_6;
	}
	float_6 = float_8 + float_3;
	return short_6;
	v_USBDeviceConfigure(double_2);

}
void v_USBMIDIDevice( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_2;
	v_USBDeviceCopy(double_1,float_1);

	float_2 = float_3;
	short_1 = v_USBMIDIDeviceConfigure(float_1);

	long_1 = long_1 * long_2;
	char_1 = char_1 + char_1;
	char_1 = char_2;
	long_3 = long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
void v_USBGamePadDeviceCompletionRoutine( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	char_1 = char_1 * char_1;
	char_2 = char_2 + char_3;
	int_1 = v_USBRequestGetStatus();

	float_1 = v_USBGamePadDeviceDecodeReport(double_1);

	float_1 = float_2;
	char_4 = v_USBRequestGetResultLength(float_3);

	double_1 = double_1 + double_1;
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			v_free();

			float_4 = v_USBGamePadDeviceStartRequest();

			char_1 = char_3;
			short_1 = short_1;
		}
	}
	int_1 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v__USBRequest(char_2);

	short_4 = short_2 + short_3;
	int_2 = int_3 + int_3;
}
float v_USBGamePadDeviceStartRequest()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int_2 = int_1 * int_2;
	long_2 = long_1 + long_1;
	short_1 = v_malloc(double_1);

	int_2 = int_3 * int_3;
	short_1 = short_1 * short_2;
	int_3 = int_4 + int_5;
	v_USBRequest(unsigned_int_1);

	v_USBGamePadDeviceCompletionRoutine(unsigned_int_1);

	char_1 = v_DWHCIDeviceSubmitAsyncRequest(double_2,int_4);

	float_1 = float_1 * float_1;
	v_USBRequestSetCompletionRoutine(char_2,double_3);

	unsigned_int_1 = v_USBDeviceGetHost(unsigned_int_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 + double_2;
	return float_2;
}
void v_USBGamePadDevicePS3Configure( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_1 = 1;
	int int_7 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = v_USBDeviceGetEndpoint0(double_1);

	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	int_2 = int_1 * int_1;
	int_4 = int_3 * int_1;
	unsigned_int_3 = v_USBDeviceGetHost(unsigned_int_1);

	double_3 = double_2 * double_1;
	char_1 = char_1 + char_1;
	int_2 = int_5 + int_5;
	int_6 = v_DWHCIDeviceControlMessage(char_1,short_1,short_1,int_2,short_1,int_7,short_2,-1 );

	float_2 = float_1 * float_1;
	int_7 = int_1 * int_3;
}
int v_BitGetSigned(short parameter_2,long parameter_3)
{
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 + short_1;
	if(1)
	{
		long_1 = long_1;
	}
	return int_1;
	char_1 = v_BitGetUnsigned(long_1,unsigned_int_1);

}
char v_BitGetUnsigned(long parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
	float_1 = float_1;
	long_3 = long_1 * long_2;
	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
			double_1 = double_2;
		}
		if(1)
		{
			char char_2 = 1;
			char_1 = char_1 * char_1;
			char_1 = char_1 * char_2;
			char_1 = char_1 + char_2;
		}
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
			float_3 = float_1 * float_2;
		}
		if(1)
		{
			char char_3 = 1;
			char_4 = char_1 * char_3;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
		}
	}
	return char_4;
}
float v_USBGamePadDeviceDecodeReport( double parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int_1 = int_1;
	char_1 = v_BitGetUnsigned(long_1,unsigned_int_1);

	int_2 = v_BitGetSigned(short_1,long_2);

	double_1 = double_1 * double_2;
	return float_1;
}
char v_USBGamePadDeviceConfigure( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	long long_3 = 1;
	short short_5 = 1;
	float float_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	unsigned_int_1 = v_USBDeviceGetEndpoint0(double_1);

	short_2 = short_1 + short_1;
	unsigned_int_2 = v_USBDeviceGetHost(unsigned_int_3);

	v_USBDeviceConfigure(double_2);

	v_StringFormat(short_3,long_1,long_2);

	double_2 = double_3 + double_1;
	short_1 = v_StringGet(float_1);

	float_1 = v_USBGamePadDeviceStartRequest();

	float_2 = float_1 + float_1;
	v_LogWrite(char_1,char_2,float_3,unsigned_int_1,-1 );

	v__String(unsigned_int_1);

	char_2 = char_1 * char_3;
	v_USBDeviceConfigurationError(short_4,short_2);

	v_USBEndpoint2(int_1,long_3,short_5);

	int_1 = v_DWHCIDeviceControlMessage(char_3,short_3,short_1,int_1,short_4,int_1,short_4,-1 );

	v_DeviceNameServiceAddDevice(int_1,short_3,unsigned_int_1);

	double_2 = double_2 * double_1;
	if(1)
	{
		int int_2 = 1;
		float_4 = v_USBGamePadDeviceDecodeReport(double_4);

		v_USBGamePadDevicePS3Configure(double_5);

		v_String(float_3);

		int_1 = int_2 * int_2;
	}
	return char_3;
	float_2 = v_USBDeviceGetDescriptor(float_1,char_4);

	short_4 = v_malloc(double_1);

	double_2 = v_DeviceNameServiceGet();

}
void v_USBGamePadDevice( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_3 + char_2;
	double_1 = double_1 * double_2;
	long_2 = long_2 + long_2;
	double_3 = double_2;
	double_4 = double_2;
	v_USBDeviceCopy(double_3,float_1);

	long_3 = long_1 + long_2;
	char_2 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
		int_2 = int_3 + int_1;
		char_3 = v_USBGamePadDeviceConfigure(unsigned_int_1);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_4 = double_1;
	}
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	short_1 = v_malloc(double_5);

	double_2 = double_5 * double_2;
	double_1 = double_6 * double_5;
	double_5 = double_5 * double_6;
}
void v_LAN7800DevicePHYWrite( float parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = v_LAN7800DeviceWaitReg(char_1,long_1,long_2,long_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_2 = v_LAN7800DeviceWriteReg(int_2,char_2,float_1);

	double_3 = double_1 + double_2;
	if(1)
	{
	}
}
long v_LAN7800DevicePHYRead( float parameter_1,char parameter_2,long parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	short short_4 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long_2 = long_1 * long_2;
	int_1 = v_LAN7800DeviceReadReg(char_1,short_1,char_2);

	double_2 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 * int_1;
	short_3 = short_2 * short_3;
	float_1 = v_LAN7800DeviceWriteReg(int_2,char_3,float_2);

	short_4 = short_3 * short_3;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "=") > 0)
	{
	}
	long_2 = v_LAN7800DeviceWaitReg(char_1,long_2,long_1,long_3);

	int_4 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	return long_1;
}
short v_LAN7800DeviceInitPHY( short parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long_1 = v_LAN7800DevicePHYRead(float_1,char_1,long_2);

	v_LAN7800DevicePHYWrite(float_1,char_2,int_1);

	long_1 = long_1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	double_2 = double_2 * double_1;
	int_1 = int_1 * int_2;
	short_3 = short_1 + short_2;
	return short_1;
}
short v_LAN7800DeviceInitMACAddress( double parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	float float_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_6 = 1;
	v_MACAddressSet(char_1,short_1);

	int_1 = int_1 * int_1;
	int_2 = int_3;
	if(1)
	{
	}
	v__String(unsigned_int_1);

	unsigned_int_2 = unsigned_int_3;
	char_2 = char_2 * char_2;
	int_4 = int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = v_GetMACAddress(short_2);

	float_1 = v_LAN7800DeviceWriteReg(int_3,char_3,float_1);

	v_LogWrite(char_3,char_1,float_2,unsigned_int_1,-1 );

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	v_MACAddressFormat(unsigned_int_1,short_3);

	int_3 = int_2 + int_2;
	v_String(float_1);

	short_2 = v_StringGet(float_1);

	short_3 = short_1;
	short_5 = short_2 * short_4;
	double_2 = double_1 + double_2;
	return short_6;
	v_MACAddress(char_2);

}
long v_LAN7800DeviceWaitReg( char parameter_1,long parameter_2,long parameter_3,long parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short_1 = short_2;
	if(1)
	{
		char char_1 = 1;
		char char_3 = 1;
		int_2 = int_1 * int_1;
		if(1)
		{
			double_2 = double_1 * double_2;
			double_3 = double_1 + double_2;
		}
		v_MsDelay(unsigned_int_1);

		char_3 = char_1 * char_2;
		if(1)
		{
			int_2 = int_2 * int_2;
			double_2 = double_2 * double_2;
		}
		int_1 = int_3;
	}
	short_1 = short_3 + short_4;
	if(1)
	{
		long long_2 = 1;
		double_3 = double_1 + double_3;
		long_2 = long_1 + long_2;
	}
	int_3 = v_LAN7800DeviceReadReg(char_2,short_4,char_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_1 = double_2 * double_2;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	}
	int_2 = int_4 * int_1;
	char controller_6[2];
	fgets(controller_6 ,2 ,stdin);
	if( strcmp( controller_6, ">") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
	return long_1;
}
float v_LAN7800DeviceWriteReg( int parameter_1,char parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_2 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "j#") > 0)
	{
		long long_1 = 1;
		int_1 = v_DWHCIDeviceControlMessage(char_1,short_1,short_1,int_1,short_1,int_1,short_1,-1 );

		long_1 = long_1;
	}
	return float_1;
	unsigned_int_1 = v_USBDeviceGetHost(unsigned_int_1);

	unsigned_int_2 = v_USBDeviceGetEndpoint0(double_1);

	v_LogWrite(char_2,char_3,float_1,unsigned_int_2,-1 );

}
short v_LAN7800DeviceReadWriteReg( unsigned int parameter_1,unsigned int parameter_2,short parameter_3,long parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int_1 = int_1 * int_1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	float_1 = v_LAN7800DeviceWriteReg(int_3,char_1,float_2);

	long_2 = long_1 + long_1;
	int_4 = v_LAN7800DeviceReadReg(char_1,short_1,char_1);

	unsigned_int_1 = unsigned_int_2;
	return short_2;
}
int v_LAN7800DeviceReadReg( char parameter_1,short parameter_2,char parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int_1 = v_DWHCIDeviceControlMessage(char_1,short_1,short_2,int_1,short_1,int_1,short_3,-1 );

	unsigned_int_1 = v_USBDeviceGetHost(unsigned_int_2);

	v_LogWrite(char_2,char_1,float_1,unsigned_int_3,-1 );

	long_2 = long_1 + long_1;
	if(1)
	{
		int int_2 = 1;
		unsigned_int_2 = v_USBDeviceGetEndpoint0(double_1);

		int_1 = int_2 + int_3;
	}
	return int_3;
}
char v_LAN7800DeviceConfigure( float parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	double double_2 = 1;
	float float_4 = 1;
	long long_3 = 1;
	short_1 = v_malloc(double_1);

	v_USBEndpoint2(int_1,long_1,short_2);

	v_LogWrite(char_1,char_2,float_1,unsigned_int_1,-1 );

	int_2 = v_LAN7800DeviceReadReg(char_1,short_1,char_1);

	long_1 = v_LAN7800DeviceWaitReg(char_2,long_1,long_2,long_1);

	float_2 = v_LAN7800DeviceWriteReg(int_2,char_3,float_1);

	short_3 = v_LAN7800DeviceInitPHY(short_1);

	double_1 = v_DeviceNameServiceGet();

	short_4 = v_StringGet(float_1);

	float_3 = float_2 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_USBDeviceConfigurationError(short_3,short_1);

		v_USBDeviceConfigure(double_1);

		v_DeviceNameServiceAddDevice(int_2,short_2,unsigned_int_2);

		int_1 = int_1 + int_2;
	}
	return char_4;
	float_2 = v_USBDeviceGetDescriptor(float_3,char_1);

	short_2 = v_LAN7800DeviceReadWriteReg(unsigned_int_2,unsigned_int_2,short_2,long_1);

	short_2 = v_LAN7800DeviceInitMACAddress(double_2);

	v_String(float_4);

	v_StringFormat(short_3,long_2,long_3);

	v__String(unsigned_int_1);

}
void v_LAN7800Device( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 + short_1;
	char_1 = char_2;
	v_USBDeviceCopy(double_1,float_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_1 = v_malloc(double_2);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	int_2 = int_1 + int_2;
	char_2 = v_LAN7800DeviceConfigure(float_1);

	double_2 = double_2 + double_2;
	double_2 = double_3 + double_3;
}
long v_SMSC951xDeviceWriteReg( long parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = v_USBDeviceGetEndpoint0(double_1);

	int_1 = int_1;
	return long_1;
	int_2 = v_DWHCIDeviceControlMessage(char_1,short_1,short_1,int_2,short_2,int_1,short_3,-1 );

	unsigned_int_2 = v_USBDeviceGetHost(unsigned_int_2);

}
void v_MACAddressCopyTo( short parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float_2 = float_1 + float_2;
	long_1 = v_memcpy(float_1,long_2);

	double_1 = double_1 + double_1;
	char_3 = char_1 + char_2;
	double_3 = double_2 + double_3;
}
void v_MACAddressFormat( unsigned int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	v_StringFormat(short_1,long_1,long_1);

	double_1 = double_1 + double_2;
}
void v_MACAddressSet( char parameter_1,short parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long_1 = v_memcpy(float_1,long_2);

	double_1 = double_1 + double_1;
	short_3 = short_1 * short_2;
	char_1 = char_1 + char_2;
	float_2 = float_3;
}
int v_GetMACAddress( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	short_1 = short_1 + short_2;
	v_BcmPropertyTags(float_1);

	v_MACAddress(char_1);

	double_1 = double_1 * double_1;
	v_BcmPropertyTagsGetTag(long_1,int_1,char_2,float_1);

	long_1 = long_1 * long_1;
	if(1)
	{
		char_2 = char_2;
	}
	double_3 = double_1 * double_2;
	double_1 = double_1 * double_1;
	return int_1;
	v__BcmPropertyTags(double_4);

	long_1 = v_memcpy(float_2,long_1);

}
void v_MACAddress( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_2;
	float_2 = float_1 + float_2;
}
float v_SMSC951xDeviceConfigure( unsigned int parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	char char_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	if(1)
	{
		int int_2 = 1;
		int int_4 = 1;
		int_1 = v_GetMACAddress(short_1);

		v_String(float_1);

		v_MACAddressFormat(unsigned_int_1,short_1);

		short_2 = v_StringGet(float_1);

		v_USBDeviceConfigurationError(short_2,short_2);

		v__String(unsigned_int_2);

		short_2 = v_malloc(double_1);

		int_4 = int_2 + int_3;
	}
	if(1)
	{
		v_MACAddress(char_1);

		double_1 = double_2;
	}
	return float_1;
	v_MACAddressSet(char_1,short_2);

	v_LogWrite(char_1,char_2,float_1,unsigned_int_2,-1 );

	float_2 = v_USBDeviceGetDescriptor(float_2,char_1);

	v_USBEndpoint2(int_1,long_1,short_2);

	v_USBDeviceConfigure(double_1);

	v_MACAddressCopyTo(short_3,char_3);

	long_1 = v_SMSC951xDeviceWriteReg(long_1,int_3,double_2);

	v_StringFormat(short_4,long_1,long_2);

	v_DeviceNameServiceAddDevice(int_1,short_1,unsigned_int_2);

	double_2 = v_DeviceNameServiceGet();

}
void v_SMSC951xDevice( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_2 = int_1 + int_1;
	float_2 = float_1 * float_1;
	short_1 = short_1;
	int_3 = int_1 + int_3;
	short_1 = v_malloc(double_1);

	char_2 = char_1 + char_1;
	v_USBDeviceCopy(double_1,float_1);

	float_3 = v_SMSC951xDeviceConfigure(unsigned_int_1);

	int_2 = int_3 * int_4;
	long_1 = long_1 + long_2;
	float_2 = float_2 + float_1;
}
int v_uspi_char2int( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 * int_1;
	}
	return int_2;
}
void v_USBMouseDeviceCompletionRoutine( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	long long_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_4 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char_1 = char_1 + char_2;
	int_1 = v_USBRequestGetStatus();

	long_1 = long_2;
	double_3 = double_1 * double_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		int_4 = v_uspi_char2int(char_3);

		long_3 = long_2 * long_1;
		char_1 = char_3 + char_3;
	}
	int_5 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_4 = v_USBMouseDeviceStartRequest(double_1);

	long_3 = long_2 * long_1;
	char_1 = v_USBRequestGetResultLength(float_1);

	v__USBRequest(char_2);

	v_free();

	double_4 = double_5;
}
long v_USBMouseDeviceStartRequest( double parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	short_1 = v_malloc(double_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_USBMouseDeviceCompletionRoutine(short_1);

	unsigned_int_3 = v_USBDeviceGetHost(unsigned_int_2);

	short_1 = short_1 * short_1;
	double_1 = double_2;
	double_2 = double_3;
	int_3 = int_1 * int_2;
	double_1 = double_3 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	char_1 = v_DWHCIDeviceSubmitAsyncRequest(double_2,int_2);

	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	return long_1;
	v_USBRequest(unsigned_int_1);

	v_USBRequestSetCompletionRoutine(char_1,double_2);

}
int v_USBMouseDeviceConfigure( unsigned int parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	double double_3 = 1;
	long long_2 = 1;
	short short_4 = 1;
	long long_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	if(1)
	{
		short_1 = v_malloc(double_1);

		v_USBEndpoint2(int_1,long_1,short_2);

		v_LogWrite(char_1,char_2,float_1,unsigned_int_1,-1 );

		unsigned_int_2 = v_USBDeviceGetHost(unsigned_int_1);

		unsigned_int_1 = v_USBDeviceGetEndpoint0(double_2);

		int_3 = int_2 + int_2;
	}
	if(1)
	{
		v_USBDeviceConfigurationError(short_2,short_1);

		int_1 = v_DWHCIDeviceControlMessage(char_2,short_2,short_3,int_2,short_3,int_2,short_3,-1 );

		double_3 = v_DeviceNameServiceGet();

		int_1 = int_1 + int_3;
	}
	v_StringFormat(short_2,long_1,long_2);

	v_DeviceNameServiceAddDevice(int_2,short_4,unsigned_int_1);

	short_4 = v_StringGet(float_1);

	long_3 = v_USBMouseDeviceStartRequest(double_1);

	int_1 = int_1;
	return int_2;
	float_2 = v_USBDeviceGetDescriptor(float_2,char_2);

	v_USBDeviceConfigure(double_3);

	v_String(float_3);

	v__String(unsigned_int_2);

}
void v_USBMouseDevice( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_2 = double_1 + double_1;
	long_2 = long_1 * long_1;
	v_USBDeviceCopy(double_2,float_1);

	long_2 = long_1 * long_2;
	long_1 = long_1 + long_1;
	double_4 = double_3 * double_4;
	int_2 = int_1 + int_2;
	double_2 = double_1 + double_2;
	short_1 = v_malloc(double_2);

	long_3 = long_2 * long_2;
	int_1 = v_USBMouseDeviceConfigure(unsigned_int_1);

	char_1 = char_1 + char_2;
}
void v_KeyMap( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	double_2 = double_1 + double_2;
	double_1 = double_1 * double_2;
	double_3 = double_3 + double_1;
	long_2 = long_1 * long_1;
	long_2 = v_memcpy(float_1,long_1);

	char_1 = char_1 + char_2;
	long_1 = long_3 * long_2;
}
char v_DWHCIDeviceSubmitAsyncRequest( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	float float_4 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_5 = 1;
	v_USBRequestSetStatus(short_1,int_1);

	float_2 = float_1 * float_1;
	char_1 = v_USBEndpointGetType();

	long_1 = v_DWHCIDeviceTransferStageAsync(float_2,char_2,long_1,float_3,-1 );

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 * short_2;
	float_2 = float_4 + float_2;
	long_1 = v_USBRequestGetBufLen(unsigned_int_3);

	short_2 = v_USBEndpointIsDirectionIn(unsigned_int_2);

	short_3 = short_2 + short_2;
	float_1 = float_1 * float_3;
	char_3 = char_4;
	float_2 = float_3 + float_4;
	return char_5;
	v_USBRequestGetEndpoint(float_5);

}
void v_TimerCancelKernelTimer( int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_1;
}
void v_CancelKernelTimer( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	v_TimerCancelKernelTimer(int_1,float_1);

	double_1 = v_TimerGet();

}
char v_KeyMapGetString( float parameter_1,short parameter_2,float parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_1 = double_1 + double_3;
		if(1)
		{
			char char_2 = 1;
			short_3 = short_1 * short_2;
			char_2 = char_1 + char_2;
		}
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
			short_1 = short_3 * short_2;
		}
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_3 * double_3;
	return char_1;
}
float v_KeyMapTranslate( unsigned int parameter_1,long parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_1;
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
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		if(1)
		{
			char_1 = char_1 + char_1;
		}
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_2 * double_2;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2 * int_1;
	}
	char_1 = char_1 + char_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	short_1 = short_1 + short_2;
	short_1 = short_3;
	return float_1;
}
void v_USBKeyboardDeviceGenerateKeyEvent( char parameter_1,long parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = v_USBKeyboardDeviceGetModifiers(int_1);

	int_1 = int_2 * int_2;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_1;
	float_3 = float_2 * float_1;
	char_3 = v_KeyMapGetString(float_3,short_1,float_3,char_4);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_3 = 1;
		short_2 = short_1 * short_2;
		short_3 = short_2 + short_2;
		double_2 = double_1 * double_3;
	}
	double_2 = double_1;
	if(1)
	{
		int_1 = int_2 + int_2;
	}
	double_2 = double_4;
	short_2 = short_3 * short_2;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "2") > 0)
	{
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "2") < 0)
		{
			short short_4 = 1;
			float_1 = v_KeyMapTranslate(unsigned_int_1,long_1,unsigned_int_3);

			short_3 = short_2 + short_4;
		}
	}
	int_2 = int_2 + int_1;
}
long v_USBKeyboardDeviceGetKeyCode( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long_1 = long_1;
		if(1)
		{
		}
	}
	return long_2;
}
float v_USBKeyboardDeviceGetModifiers( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return float_1;
}
void v_USBKeyboardDeviceCompletionRoutine( double parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	long long_3 = 1;
	double double_2 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int_1 = v_StartKernelTimer(float_1,int_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_free();

	int_2 = int_2 + int_1;
	long_1 = long_2;
	double_1 = v_USBKeyboardDeviceStartRequest(int_3);

	char_3 = char_1 + char_2;
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			char_2 = v_USBRequestGetResultLength(float_1);

			short_2 = short_1 + short_2;
		}
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_4 = float_2 * float_3;
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			}
			if(1)
			{
				float_4 = v_USBKeyboardDeviceGetModifiers(int_4);

				long_2 = long_1 * long_2;
			}
			if(1)
			{
				char char_4 = 1;
				char char_5 = 1;
				unsigned int unsigned_int_3 = 1;
				char_5 = char_1 * char_4;
				if(1)
				{
					long_1 = long_3;
				}
				double_1 = double_2 * double_2;
				unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
			}
			if(1)
			{
				long long_4 = 1;
				v__USBRequest(char_1);

				long_4 = long_4 + long_1;
				int_5 = int_5 * int_2;
			}
		}
	}
	v_USBKeyboardDeviceGenerateKeyEvent(char_3,long_2);

	int_5 = int_4 + int_1;
	long_3 = long_3 + long_1;
	double_2 = double_1 * double_3;
	double_4 = double_3 * double_4;
	int_1 = v_USBRequestGetStatus();

	long_2 = v_USBKeyboardDeviceGetKeyCode(char_2);

	v_CancelKernelTimer(double_3);

}
double v_USBKeyboardDeviceStartRequest( int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	v_USBKeyboardDeviceCompletionRoutine(double_1);

	char_1 = v_DWHCIDeviceSubmitAsyncRequest(double_2,int_1);

	unsigned_int_1 = v_USBDeviceGetHost(unsigned_int_1);

	short_2 = short_1 + short_1;
	char_2 = char_1 + char_1;
	v_USBRequest(unsigned_int_2);

	long_1 = long_1 * long_1;
	short_1 = v_malloc(double_2);

	short_2 = short_2 * short_1;
	int_1 = int_1 * int_2;
	v_USBRequestSetCompletionRoutine(char_3,double_2);

	double_3 = double_3 * double_3;
	long_2 = long_1;
	int_4 = int_3 * int_2;
	return double_2;
}
float v_USBKeyboardDeviceConfigure()
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	short_1 = v_malloc(double_1);

	v_USBEndpoint2(int_1,long_1,short_2);

	v_USBDeviceConfigure(double_2);

	v_String(float_1);

	v_StringFormat(short_1,long_1,long_2);

	short_1 = v_StringGet(float_1);

	char_2 = char_1 + char_1;
	v_USBDeviceConfigurationError(short_3,short_3);

	v_LogWrite(char_1,char_2,float_2,unsigned_int_1,-1 );

	int_2 = v_DWHCIDeviceControlMessage(char_3,short_3,short_2,int_3,short_1,int_2,short_4,-1 );

	double_3 = v_DeviceNameServiceGet();

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return float_3;
	float_1 = v_USBDeviceGetDescriptor(float_1,char_3);

	unsigned_int_1 = v_USBDeviceGetHost(unsigned_int_4);

	unsigned_int_3 = v_USBDeviceGetEndpoint0(double_1);

	v_DeviceNameServiceAddDevice(int_3,short_4,unsigned_int_2);

	v__String(unsigned_int_1);

	double_1 = v_USBKeyboardDeviceStartRequest(int_4);

}
void v_USBKeyboardDevice( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_5 = 1;
	double double_5 = 1;
	short_1 = short_2;
	short_4 = short_3 + short_1;
	int_2 = int_1 * int_1;
	double_1 = double_2;
	int_1 = int_3;
	float_1 = v_USBKeyboardDeviceConfigure();

	double_3 = double_3 * double_3;
	char_1 = char_1;
	v_USBDeviceCopy(double_4,float_2);

	v_KeyMap(unsigned_int_1);

	long_1 = long_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	int_3 = int_2 * int_3;
	int_2 = int_3;
	short_1 = v_malloc(double_1);

	short_3 = short_1 * short_5;
	double_4 = double_4 * double_5;
	double_5 = double_5;
	int_1 = int_2 * int_2;
}
double v_DeviceNameServiceGet()
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short_2 = short_1 + short_1;
	return double_1;
}
void v_strcpy( char parameter_1,int parameter_2)
{
}
void v_DeviceNameServiceAddDevice( int parameter_1,short parameter_2,unsigned int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	double double_6 = 1;
	int_1 = int_1 * int_2;
	short_2 = short_1 + short_2;
	float_1 = float_1 * float_2;
	int_2 = int_3;
	double_2 = double_1 + double_2;
	short_3 = v_malloc(double_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_4 = double_2;
	v_strcpy(char_1,int_3);

	double_5 = double_1;
	unsigned_int_3 = unsigned_int_4;
	int_4 = int_2 + int_1;
	int_5 = int_1 + int_1;
	long_1 = v_strlen(int_1);

	double_6 = double_3;
}
double v_uspi_le2be32( int parameter_1)
{
	double double_1 = 1;
	return double_1;
}
int v_DWHCIDeviceTransfer( float parameter_1,float parameter_2,int parameter_4)
{
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = v_USBRequestGetResultLength(float_1);

	long_1 = long_1;
	float_1 = float_1 * float_1;
	v_USBRequest(unsigned_int_1);

	short_1 = short_1 + short_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		v__USBRequest(char_2);

		char_1 = char_2 + char_2;
	}
	float_2 = float_2 + float_1;
	return int_1;
	double_1 = v_DWHCIDeviceSubmitBlockingRequest(long_2,unsigned_int_2,-1 );

}
int v_USBBulkOnlyMassStorageDeviceCommand( unsigned int parameter_1,long parameter_3,short parameter_5,double parameter_6)
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	short short_4 = 1;
	int int_2 = 1;
	long long_3 = 1;
	float float_4 = 1;
	long long_4 = 1;
	float float_5 = 1;
	long_1 = v_memset(int_1,int_1);

	double_2 = double_1 * double_2;
	short_3 = short_1 * short_2;
	double_1 = double_2 + double_2;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_5 = v_USBDeviceGetHost(unsigned_int_5);

	long_1 = long_1 + long_2;
	double_3 = double_2 * double_2;
	long_2 = v_memcpy(float_1,long_2);

	v_LogWrite(char_1,char_2,float_3,unsigned_int_2,-1 );

	double_3 = double_3 + double_1;
	unsigned_int_6 = unsigned_int_7;
	short_3 = short_3;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_6;
	double_4 = double_1;
	short_4 = short_1 * short_2;
	int_2 = v_DWHCIDeviceTransfer(float_1,float_2,int_1);

	int_2 = int_2 + int_2;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_3 + int_1;
	}
	long_2 = long_3;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_3 + char_3;
		if(1)
		{
			float_4 = float_4;
		}
	}
	long_3 = long_4 * long_1;
	if(1)
	{
		float_5 = float_4 * float_2;
	}
	if(1)
	{
		double_2 = double_2 * double_3;
	}
	if(1)
	{
		float_1 = float_5 + float_2;
	}
	if(1)
	{
	}
	if(1)
	{
		long long_5 = 1;
		long_1 = long_3 * long_5;
	}
	return int_1;
}
void v_USBEndpoint2( int parameter_1,long parameter_2,short parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	double double_4 = 1;
	float float_4 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	long_2 = long_1 + long_2;
	long_3 = long_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	float_2 = float_1 * float_1;
	int_1 = int_2;
	long_3 = long_2 * long_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	double_2 = double_1 * double_2;
	float_3 = v_USBDeviceGetSpeed(double_3);

	int_1 = int_1 + int_3;
	double_1 = double_1 * double_3;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_4;
	char_1 = char_1;
	double_4 = double_2 + double_2;
	float_2 = float_1 * float_4;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_6 + unsigned_int_4;
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_2 = char_2 + char_3;
		}
		if(1)
		{
			double_3 = double_2 * double_4;
		}
		if(1)
		{
			if(1)
			{
				int_3 = int_1;
			}
			double_1 = double_3 * double_1;
			float_4 = float_2 * float_4;
			if(1)
			{
				double_2 = double_4 + double_2;
			}
		}
	}
}
int v_USBBulkOnlyMassStorageDeviceConfigure( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	int int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	v_MsDelay(unsigned_int_1);

	long_1 = long_1 + long_1;
	v_USBEndpoint2(int_1,long_2,short_1);

	int_1 = v_USBBulkOnlyMassStorageDeviceCommand(unsigned_int_2,long_3,short_1,double_1);

	v_String(float_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = v_malloc(double_2);

	double_3 = v_uspi_le2be32(int_2);

	v_StringFormat(short_1,long_3,long_1);

	v_DeviceNameServiceAddDevice(int_1,short_2,unsigned_int_3);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	float_2 = v_USBDeviceGetDescriptor(float_3,char_1);

	v_USBDeviceConfigure(double_1);

	double_4 = double_3;
	short_1 = v_StringGet(float_1);

	v__String(unsigned_int_3);

	int_3 = int_2 * int_3;
	return int_2;
	v_USBDeviceConfigurationError(short_3,short_3);

	v_LogWrite(char_1,char_1,float_2,unsigned_int_4,-1 );

	double_1 = v_DeviceNameServiceGet();

}
void v_USBBulkOnlyMassStorageDevice( double parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double_1 = double_1 + double_1;
	float_3 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_1;
	long_1 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	short_1 = short_1;
	int_1 = v_USBBulkOnlyMassStorageDeviceConfigure(long_1);

	int_1 = int_1 * int_2;
	v_USBDeviceCopy(double_2,float_1);

}
float v_USBStandardHubEnumeratePorts( short parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	short short_7 = 1;
	int int_6 = 1;
	long long_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_9 = 1;
	char_2 = char_1 * char_2;
	double_1 = double_1 * double_2;
	long_1 = long_1 * long_2;
	double_4 = double_3 + double_1;
	int_3 = int_1 * int_2;
	short_3 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
	}
	short_4 = short_1 + short_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_2 = 1;
		unsigned int unsigned_int_6 = 1;
		float_2 = float_1 * float_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		char_2 = char_1 + char_2;
		if(1)
		{
			short short_5 = 1;
			short short_6 = 1;
			short_3 = short_5 + short_6;
			double_2 = double_1 * double_3;
		}
		long_3 = long_3 + long_1;
		if(1)
		{
			int_2 = int_4;
		}
		if(1)
		{
			float_2 = float_2;
			int_3 = int_5 + int_2;
		}
		double_4 = double_3 + double_1;
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
			unsigned_int_1 = unsigned_int_4;
		}
		if(1)
		{
			double_3 = double_3;
			unsigned_int_3 = unsigned_int_1;
		}
		unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
		if(1)
		{
			double_2 = double_3 * double_3;
		}
		if(1)
		{
			float_2 = float_2;
		}
		if(1)
		{
			float_2 = float_2 + float_2;
		}
		double_4 = double_2 + double_2;
		int_5 = int_2 + int_4;
		char_1 = char_1 * char_1;
		double_3 = double_3 * double_4;
		if(1)
		{
			long_4 = long_4 + long_1;
			int_4 = int_4 + int_1;
			double_2 = double_1 + double_4;
			short_1 = short_7;
		}
		int_3 = int_2 + int_6;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
		long_1 = long_4 * long_5;
		int_1 = int_2 * int_1;
		int_3 = int_2 * int_3;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			int_2 = int_3;
		}
		unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
		char controller4vul_1516[3];
		fgets(controller4vul_1516 ,3 ,stdin);
		if( strcmp( controller4vul_1516, "bK") > 0)
		{
			double double_5 = 1;
			int_1 = int_1 * int_6;
			long_4 = long_5;
			double_5 = double_5 + double_5;
			char controller4vul_1517[2];
			fgets(controller4vul_1517 ,2 ,stdin);
			if( strcmp( controller4vul_1517, "J") < 0)
			{
				unsigned_int_1 = v_USBDeviceInitialize(uni_para);

				unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
				long_4 = long_1 + long_3;
			}
			char_2 = char_1 + char_3;
		}
		if(1)
		{
			unsigned_int_7 = unsigned_int_1 + unsigned_int_5;
			double_1 = double_2 + double_4;
			long_5 = long_2 * long_1;
			int_4 = int_1 + int_5;
		}
	}
	char_4 = char_2 * char_1;
	unsigned_int_3 = unsigned_int_8 + unsigned_int_7;
	if(1)
	{
		long_6 = long_3 + long_1;
		double_3 = double_3 * double_3;
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			short short_8 = 1;
			short_8 = short_7 + short_4;
		}
		char_1 = char_3 * char_2;
		char_2 = char_1 * char_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_9;
	long_3 = long_5 * long_5;
	unsigned_int_4 = unsigned_int_7 * unsigned_int_2;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		int int_7 = 1;
		if(1)
		{
			int_7 = int_6 + int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_10 = 1;
			long long_7 = 1;
			int_2 = int_7 * int_6;
			unsigned_int_2 = unsigned_int_10;
			long_4 = long_6 * long_7;
		}
	}
	return float_1;
}
float v_USBConfigurationParserGetDescriptor( float parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_1;
	float_2 = float_1 + float_2;
	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return float_3;
}
float v_USBDeviceGetDescriptor( float parameter_1,char parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_1;
	float_2 = float_1 + float_1;
	return float_1;
	float_1 = v_USBConfigurationParserGetDescriptor(float_3,short_1);

}
double v_USBDeviceGetDeviceDescriptor( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_2 = int_1 * int_1;
	int_1 = int_1 + int_2;
	return double_1;
}
float v_USBStandardHubConfigure( short parameter_1,int uni_para)
{
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float_1 = v_USBStandardHubEnumeratePorts(short_1,uni_para);

	double_1 = double_1 + double_1;
	short_1 = short_1;
	float_1 = float_1 * float_1;
	double_2 = double_3;
	return float_2;
}
void v_USBEndpointCopy( char parameter_1,unsigned int parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float_2 = float_1 * float_1;
	double_2 = double_1 + double_2;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1 + char_1;
	float_1 = float_2 * float_2;
	float_3 = float_2 * float_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	int_1 = int_1 * int_2;
	double_4 = double_3 * double_2;
}
void v_USBStringCopy( short parameter_1,char parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	short_1 = v_StringGet(float_1);

	unsigned_int_2 = unsigned_int_5 * unsigned_int_4;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_3;
		v_String2(short_1,short_2);

		long_1 = long_2;
		long_3 = v_memcpy(float_1,long_3);

		int_1 = int_1 * int_1;
	}
	int_3 = int_2 + int_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_6;
	short_3 = v_malloc(double_2);

	char_2 = char_1 * char_2;
}
void v_USBDeviceCopy( double parameter_1,float parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	long long_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	v_USBStringCopy(short_1,char_1);

	double_2 = double_1 + double_1;
	short_2 = v_malloc(double_2);

	v_USBConfigurationParser(int_1);

	long_1 = long_1 + long_1;
	long_2 = long_2;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_2 + int_2;
	char_2 = char_1;
	char_3 = char_3;
	short_2 = short_3;
	long_2 = long_1 * long_3;
	v_USBEndpointCopy(char_4,unsigned_int_2,double_2);

	short_2 = short_3 + short_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	int_2 = int_3 + int_3;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
	double_3 = double_2;
	long_2 = v_memcpy(float_1,long_1);

	short_2 = short_3;
	double_2 = double_4 * double_3;
	float_3 = float_2 + float_2;
	if(1)
	{
		long long_4 = 1;
		char char_5 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		long_3 = long_4 + long_4;
		char_2 = char_2 * char_5;
		int_6 = int_4 * int_5;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		float float_4 = 1;
		double_3 = double_4 * double_3;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_5;
		double_4 = double_1 * double_4;
		float_1 = float_2 + float_4;
		if(1)
		{
			int int_7 = 1;
			double_1 = double_2 * double_1;
			unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
			int_1 = int_7;
		}
	}
}
void v_USBStandardHub( unsigned int parameter_1,int uni_para)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_1 = v_USBStandardHubConfigure(short_1,uni_para);

	int_2 = int_1 * int_1;
	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_2;
	double_2 = double_2 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		double_2 = double_1 * double_1;
		char_2 = char_1 + char_2;
	}
}
char v_GetDevice( unsigned int parameter_1,short parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_4 = 1;
	long long_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 * float_1;
	double_3 = double_1 + double_2;
	char controller4vul_1515[2];
	fgets(controller4vul_1515 ,2 ,stdin);
	if( strcmp( controller4vul_1515, "*") > 0)
	{
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		v_USBStandardHub(unsigned_int_3,uni_para);

		long_3 = long_1 * long_2;
		float_4 = float_2 * float_3;
		short_2 = short_1 + short_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_3 = int_1 + int_2;
		int_2 = int_1 * int_2;
		double_3 = double_3 * double_1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		char char_2 = 1;
		short short_4 = 1;
		short short_5 = 1;
		short_3 = short_3 * short_3;
		char_1 = char_1 + char_2;
		short_1 = short_4 + short_5;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
		int_5 = int_4 + int_5;
		int_7 = int_5 * int_6;
		double_4 = double_4 * double_1;
	}
	if(1)
	{
		short short_6 = 1;
		double double_5 = 1;
		short_6 = short_1;
		long_1 = long_3 * long_4;
		double_5 = double_2 * double_4;
		int_3 = int_5 + int_1;
	}
	if(1)
	{
		double_3 = double_3 * double_3;
		long_2 = long_4 + long_3;
		int_7 = int_7 + int_3;
		long_4 = long_3 + long_2;
	}
	if(1)
	{
		int int_8 = 1;
		char char_3 = 1;
		short_3 = short_1;
		int_5 = int_6 * int_8;
		int_4 = int_1 * int_4;
		char_4 = char_1 + char_3;
	}
	if(1)
	{
		short short_7 = 1;
		unsigned int unsigned_int_5 = 1;
		short_7 = short_2 * short_7;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		double_2 = double_4 * double_1;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_1;
	}
	if(1)
	{
		long_1 = long_1 * long_2;
	}
	unsigned_int_6 = unsigned_int_2 * unsigned_int_2;
	double_3 = double_3 + double_3;
	return char_4;
}
short v_USBDeviceFactoryGetDevice( int parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_3 = float_1 * float_2;
	int_1 = int_1 * int_1;
	char controller4vul_1514[3];
	fgets(controller4vul_1514 ,3 ,stdin);
	if( strcmp( controller4vul_1514, "yj") < 0)
	{
		char_1 = v_GetDevice(unsigned_int_1,short_1,uni_para);

	}
	double_1 = double_2;
	return short_1;
}
void v_StringAppend( double parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_1 = int_1;
	}
	char_1 = char_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		long long_2 = 1;
		double_3 = double_1 + double_2;
		long_2 = long_1 * long_1;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "M") < 0)
	{
		double_1 = double_2 + double_3;
	}
	unsigned_int_2 = unsigned_int_2;
	int_1 = int_2;
}
void v_StringGetLength()
{
	short short_1 = 1;
	short short_2 = 1;
	short_2 = short_1 + short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "?z") < 0)
	{
	}
}
int v_StringCompare( long parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_2;
	return int_1;
}
void v_StringSet( float parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_1 = long_1 + long_2;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2;
	}
	float_1 = float_1 * float_1;
	short_3 = short_1 + short_1;
	int_2 = int_1 * int_1;
}
char v_USBDeviceGetName( short parameter_1,char parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int int_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	double double_6 = 1;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_2;
	short_2 = short_1 * short_1;
	int_1 = int_1 * int_1;
	int_1 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	short_2 = v_malloc(double_1);

	int_1 = int_2 * int_3;
	long_3 = long_2 * long_2;
	if(1)
	{
		double_4 = double_2 * double_3;
	}
	v_StringFormat(short_2,long_4,long_2);

	v_StringSet(float_1,unsigned_int_1);

	float_2 = float_1 + float_1;
	long_6 = long_5 * long_4;
	int_2 = int_1 * int_4;
	short_1 = short_1 + short_2;
	if(1)
	{
		float_1 = float_2 + float_2;
	}
	double_5 = double_4 + double_3;
	float_1 = float_1 * float_2;
	char_1 = char_1;
	double_2 = double_4 * double_2;
	v_String(float_1);

	double_1 = double_6 * double_5;
	return char_1;
}
long v_USBStandardHubGetDeviceNames( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	long long_4 = 1;
	int_2 = int_1 * int_2;
	int_3 = int_3 * int_3;
	float_2 = float_1 + float_1;
	v__String(unsigned_int_1);

	v_StringSet(float_3,unsigned_int_1);

	double_3 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_3 = 1;
		char char_4 = 1;
		v_String(float_2);

		long_3 = long_1 + long_2;
		float_3 = float_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			if(1)
			{
				int int_4 = 1;
				char_1 = v_USBDeviceGetName(short_1,char_2);

				int_3 = int_4 * int_1;
			}
			short_2 = v_malloc(double_4);

			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		}
		v_StringAppend(double_1,unsigned_int_2);

		v_free();

		short_1 = short_3 + short_2;
		char_4 = char_3 * char_3;
	}
	if(1)
	{
		char char_5 = 1;
		int_3 = v_StringCompare(long_4,char_3);

		short_1 = v_StringGet(float_3);

		char_2 = char_5;
	}
	return long_4;
	v_StringGetLength();

}
void v__USBString( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		v_free();

		char_3 = char_1 + char_2;
		float_3 = float_1 + float_2;
	}
	v__String(unsigned_int_1);

	double_2 = double_1 + double_2;
}
void v__USBEndpoint( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2;
}
void v__USBConfigurationParser( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_2;
}
void v__USBDevice( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
		v__USBEndpoint(long_1);

		float_2 = float_1 * float_1;
	}
	if(1)
	{
		int int_4 = 1;
		v__USBString(int_1);

		int_4 = int_2 * int_3;
		int_1 = int_2 + int_3;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "?") > 0)
	{
		int int_5 = 1;
		v_free();

		int_5 = int_3 * int_3;
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		int int_6 = 1;
		double double_1 = 1;
		v__USBConfigurationParser(char_3);

		int_2 = int_6 * int_1;
		double_1 = double_1 + double_1;
		double_1 = double_1;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
	char_2 = char_1 + char_2;
	short_1 = short_1;
	double_3 = double_2 + double_2;
}
void v_debug_hexdump( short parameter_1,int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_1 = double_1 + double_1;
	v_LoggerWrite(char_1,unsigned_int_1,unsigned_int_1,float_1,char_2);

	unsigned_int_3 = v_LoggerGet();

	char_1 = char_1;
}
void v_DebugHexdump( int parameter_1,long parameter_2,short parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	v_debug_hexdump(short_1,int_1,char_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
void v_USBConfigurationParserError( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	v_LogWrite(char_1,char_1,float_1,unsigned_int_1,-1 );

	v_DebugHexdump(int_1,long_1,short_1);

	float_1 = float_1 + float_2;
	double_2 = double_1 * double_2;
}
void v_USBDeviceConfigurationError( short parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_2;
	v_USBConfigurationParserError(char_1,char_1);

	double_2 = double_3 * double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
double v_USBConfigurationParserIsValid()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return double_1;
}
void v_USBConfigurationParser( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_3 = double_1 + double_2;
}
void v_String2( short parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1;
	double_1 = double_2;
	int_1 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
}
char v_USBStringGetFromDescriptor( int parameter_1,long parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	long long_4 = 1;
	char char_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_6 = 1;
	short short_7 = 1;
	long_2 = long_1 + long_2;
	long_3 = long_1 * long_2;
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	double_2 = double_1 + double_1;
	long_3 = long_1;
	short_1 = short_2;
	if(1)
	{
	}
	short_3 = short_1 * short_3;
	if(1)
	{
	}
	if(1)
	{
		int int_4 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_1 = v_USBDeviceGetHost(unsigned_int_1);

		double_2 = double_3 * double_1;
		int_2 = int_3 * int_4;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	float_2 = float_1 + float_1;
	long_3 = long_1 * long_1;
	char_1 = char_2;
	int_5 = int_2 + int_2;
	long_2 = long_4 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		int_3 = v_DWHCIDeviceControlMessage(char_3,short_1,short_1,int_2,short_1,int_5,short_3,-1 );

		v__String(unsigned_int_1);

		v_String2(short_4,short_2);

		long_1 = long_2;
		if(1)
		{
			short short_6 = 1;
			short_5 = v_malloc(double_3);

			short_3 = short_6 + short_4;
		}
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	}
	float_2 = float_2 + float_1;
	double_1 = double_4 + double_2;
	double_3 = double_2 * double_4;
	int_6 = int_6 + int_1;
	v_free();

	int_3 = int_2 * int_3;
	unsigned_int_3 = v_USBDeviceGetEndpoint0(double_1);

	short_5 = short_7 + short_5;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	return char_3;
}
unsigned int v_USBDeviceGetEndpoint0( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_2;
	float_3 = float_1 + float_2;
	return unsigned_int_1;
}
unsigned int v_USBDeviceGetHost( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_3 = short_1 + short_2;
	return unsigned_int_3;
}
void v_USBStringGetLanguageID( short parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	int int_6 = 1;
	short short_3 = 1;
	int_2 = int_1 * int_1;
	int_2 = int_3 + int_2;
	int_2 = int_1 * int_2;
	float_2 = float_1 + float_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	char controller4vul_1520[2];
	fgets(controller4vul_1520 ,2 ,stdin);
	if( strcmp( controller4vul_1520, "=") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char_1 = char_2;
		int_1 = int_4 + int_4;
		long_2 = long_1 * long_2;
		char controller4vul_1521[2];
		fgets(controller4vul_1521 ,2 ,stdin);
		if( strcmp( controller4vul_1521, "&") > 0)
		{
			long long_4 = 1;
			int_5 = v_DWHCIDeviceGetDescriptor(float_3,int_4,short_1,unsigned_int_3,short_2,float_4,uni_para);

			long_3 = long_3 * long_4;
		}
		if(1)
		{
			long long_5 = 1;
			long_5 = long_1 + long_3;
		}
	}
	int_6 = int_3 * int_6;
	short_1 = short_1 + short_3;
	short_2 = short_2 * short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char_1 = char_1 + char_2;
		}
	}
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
}
void v_USBDeviceSetAddress( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_2 + double_1;
	double_4 = double_1 * double_3;
}
char v_DWHCIDeviceSetAddress( double parameter_1,short parameter_2,double parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = v_DWHCIDeviceControlMessage(char_1,short_1,short_2,int_2,short_2,int_3,short_1,-1 );

	double_1 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "^m") < 0)
	{
	}
	v_MsDelay(unsigned_int_1);

	char_2 = char_2 + char_1;
	return char_3;
}
void v_USBEndpointSetMaxPacketSize( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_2;
}
int v_DWHCIDeviceGetDescriptor( float parameter_1,int parameter_2,short parameter_3,unsigned int parameter_4,short parameter_6,float parameter_7,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = v_DWHCIDeviceControlMessage(char_1,short_1,short_1,int_2,short_2,int_1,short_1,uni_para);

	short_3 = short_3 * short_2;
	return int_2;
}
unsigned int v_USBDeviceInitialize(int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_8 = 1;
	double double_9 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_3 = 1;
	int int_5 = 1;
	char char_4 = 1;
	double double_11 = 1;
	char char_5 = 1;
	char char_6 = 1;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_1;
	float_2 = float_2 + float_1;
	double_3 = double_1 * double_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	double_5 = double_4 + double_3;
	if(1)
	{
		double_7 = double_6 + double_7;
		int_2 = int_1 + int_1;
		float_2 = float_1;
	}
	if(1)
	{
		float float_3 = 1;
		double_3 = double_4;
		char_1 = char_1 + char_2;
		float_3 = float_1 + float_1;
	}
	double_8 = double_5 * double_4;
	if(1)
	{
		float float_5 = 1;
		double_7 = double_9 * double_3;
		float_4 = float_5;
		long_3 = long_1 * long_2;
	}
	long_1 = long_4 * long_4;
	if(1)
	{
		unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
	}
	if(1)
	{
		long_5 = long_2 + long_4;
	}
	double_2 = double_9 + double_5;
	char controller4vul_1518[2];
	fgets(controller4vul_1518 ,2 ,stdin);
	if( strcmp( controller4vul_1518, "0") < 0)
	{
		unsigned_int_7 = unsigned_int_3 * unsigned_int_6;
		char controller4vul_1519[3];
		fgets(controller4vul_1519 ,3 ,stdin);
		if( strcmp( controller4vul_1519, "u1") < 0)
		{
			int int_3 = 1;
			v_USBStringGetLanguageID(short_3,uni_para);

			int_1 = int_3 + int_4;
		}
		if(1)
		{
			long_5 = long_1 + long_3;
		}
	}
	short_1 = short_2;
	short_5 = short_4 * short_3;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_8;
	if(1)
	{
		short short_6 = 1;
		double double_10 = 1;
		float float_6 = 1;
		short_6 = short_3 + short_2;
		double_4 = double_10 * double_7;
		float_4 = float_4 * float_6;
	}
	if(1)
	{
		char_3 = char_1 * char_2;
		unsigned_int_5 = unsigned_int_8 + unsigned_int_6;
		unsigned_int_7 = unsigned_int_4 * unsigned_int_4;
	}
	int_2 = int_5 + int_5;
	char_4 = char_2 + char_3;
	double_11 = double_6 * double_4;
	char_5 = char_4 + char_5;
	if(1)
	{
		double_8 = double_3 * double_1;
		int_5 = int_2 * int_4;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_5;
	}
	double_11 = double_3 + double_5;
	long_2 = long_2 * long_2;
	char_1 = char_6 + char_2;
	long_2 = long_5;
	if(1)
	{
		double_6 = double_11 * double_11;
	}
	return unsigned_int_2;
}
void v_USBString( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	short_1 = short_1 + short_2;
	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 * short_2;
	short_4 = v_malloc(double_1);

	double_2 = double_1 + double_2;
	v_String(float_2);

}
void v_USBEndpoint( short parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char_1 = char_1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1;
	short_1 = short_1 + short_1;
	int_2 = int_3 + int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	long_3 = long_1 * long_2;
}
void v__USBRequest( char parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long_1 = long_1 + long_1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 * short_2;
	int_3 = int_3 + int_4;
}
char v_USBRequestGetResultLength( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	short_2 = short_1 * short_1;
	short_3 = short_3 + short_4;
	return char_1;
}
short v_USBEndpointIsDirectionIn( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_2;
	return short_1;
}
int v_USBRequestGetStatus()
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_1;
	return int_1;
}
void v_DWHCIDeviceEnableChannelInterrupt( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v_uspi_EnterCritical();

	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	double_4 = double_3 + double_1;
	char_1 = v_DWHCIRegisterRead(short_1);

	v_DWHCIRegisterOr(unsigned_int_3,unsigned_int_2);

	short_4 = short_2 * short_3;
	v_DWHCIRegisterWrite(float_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	v_DWHCIRegister();

	float_3 = float_2 + float_2;
	int_3 = int_1 * int_2;
	char_1 = char_1;
	v_uspi_LeaveCritical();

	v__DWHCIRegister(char_1);

}
void v_DWHCIFrameSchedulerNoSplitIsOddFrame( long parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_1;
}
void v_DWHCIFrameSchedulerNoSplitWaitForFrame( float parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	v_DWHCIRegister();

	char_1 = v_DWHCIRegisterRead(short_1);

	v__DWHCIRegister(char_1);

}
void v_DWHCIFrameSchedulerNoSplitTransactionComplete( unsigned int parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_1;
}
unsigned int v_DWHCIFrameSchedulerNoSplitCompleteSplit( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_2 = float_1 + float_2;
	return unsigned_int_1;
}
void v_DWHCIFrameSchedulerNoSplitStartSplit( int parameter_1)
{
	float float_1 = 1;
	float_1 = float_1 + float_1;
}
void v__DWHCIFrameSchedulerNoSplit( float parameter_1)
{
}
void v_DWHCIFrameSchedulerNoSplit( char parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	v__DWHCIFrameSchedulerNoSplit(float_1);

	short_1 = short_1;
	double_1 = double_1;
	v_DWHCIFrameSchedulerNoSplitIsOddFrame(long_1);

	long_2 = long_1 + long_1;
	long_1 = long_2 * long_2;
	int_1 = int_1 * int_1;
	v_DWHCIFrameSchedulerNoSplitTransactionComplete(unsigned_int_1,float_2);

	long_3 = long_2 + long_3;
	unsigned_int_1 = v_DWHCIFrameSchedulerNoSplitCompleteSplit(long_2);

	unsigned_int_2 = unsigned_int_3;
	char_1 = char_2;
	v_DWHCIFrameSchedulerNoSplitWaitForFrame(float_3);

	int_4 = int_2 + int_3;
	v_DWHCIFrameSchedulerNoSplitStartSplit(int_3);

	short_1 = short_2;
}
int v_DWHCIFrameSchedulerNonPeriodicIsOddFrame( double parameter_1)
{
	int int_1 = 1;
	return int_1;
}
void v_DWHCIFrameSchedulerNonPeriodicWaitForFrame( long parameter_1)
{
}
void v_DWHCIFrameSchedulerNonPeriodicTransactionComplete( double parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_5 = 1;
	double_2 = double_1 * double_1;
	char_1 = char_2;
	double_1 = double_2 * double_3;
	long_1 = long_1 + long_2;
	char_2 = char_2 + char_1;
	if(1)
	{
		short_2 = short_1 + short_2;
	}
	char controller4vul_1532[3];
	fgets(controller4vul_1532 ,3 ,stdin);
	if( strcmp( controller4vul_1532, "tc") > 0)
	{
		char controller4vul_1533[2];
		fgets(controller4vul_1533 ,2 ,stdin);
		if( strcmp( controller4vul_1533, "U") > 0)
		{
			double double_4 = 1;
			v_LogWrite(char_1,char_1,float_1,unsigned_int_1,uni_para);

			double_2 = double_4 + double_2;
		}
		if(1)
		{
			short short_3 = 1;
			short_4 = short_3 + short_3;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			float_1 = float_2 + float_1;
		}
		if(1)
		{
			double_1 = double_3;
		}
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		short_2 = short_2 * short_1;
		long_4 = long_3 * long_2;
	}
	int_1 = int_1 + int_1;
	int_1 = int_2;
	short_4 = short_5 * short_2;
}
short v_DWHCIFrameSchedulerNonPeriodicCompleteSplit( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_2;
	double_1 = double_1;
	int_1 = int_3 + int_1;
	long_1 = long_1 * long_1;
	double_1 = double_1 * double_1;
	double_2 = double_2;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_2 + int_2;
	short_2 = short_1 + short_2;
	int_3 = int_3 + int_1;
	v_usDelay();

	short_1 = short_2;
	double_2 = double_2 + double_2;
	return short_2;
}
void v_DWHCIFrameSchedulerNonPeriodicStartSplit( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_2 = float_1 * float_1;
	double_1 = double_2;
	int_1 = int_2;
}
void v__DWHCIFrameSchedulerNonPeriodic( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_2;
	short_1 = short_1 * short_1;
}
void v_DWHCIFrameSchedulerNonPeriodic( short parameter_1,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	v_DWHCIFrameSchedulerNonPeriodicTransactionComplete(double_1,int_1,uni_para);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 * float_2;
	short_2 = short_1 + short_1;
	char_2 = char_1 * char_1;
	long_3 = long_1 * long_2;
	int_2 = int_2 * int_1;
	short_4 = short_2 + short_3;
	float_3 = float_1 * float_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
}
void v_DWHCIFrameSchedulerPeriodicIsOddFrame()
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_2;
	char_2 = char_1 + char_1;
	int_3 = int_2 + int_2;
}
void v_DWHCIFrameSchedulerPeriodicWaitForFrame( float parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	v_DWHCIRegister();

	double_1 = double_1 + double_1;
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			char_1 = v_DWHCIRegisterRead(short_1);

			int_1 = int_1;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
		}
	}
	v__DWHCIRegister(char_1);

	short_1 = short_1;
}
void v_DWHCIFrameSchedulerPeriodicTransactionComplete( int parameter_1,double parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_2;
	char_2 = char_1 + char_2;
	double_2 = double_1 * double_2;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		if(1)
		{
			int int_2 = 1;
			int_2 = int_1 + int_1;
			char_3 = char_3 * char_4;
		}
		if(1)
		{
			char_4 = char_2 + char_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		unsigned_int_1 = unsigned_int_1;
		int_1 = int_3 * int_1;
	}
	char controller_6[2];
	fgets(controller_6 ,2 ,stdin);
	if( strcmp( controller_6, "a") == 0)
	{
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		v_usDelay();

		double_4 = double_3 * double_4;
		float_1 = float_2;
	}
	v_LogWrite(char_4,char_3,float_3,unsigned_int_3,-1 );

	unsigned_int_2 = unsigned_int_4;
	double_2 = double_2 + double_5;
	double_6 = double_6;
}
char v_DWHCIFrameSchedulerPeriodicCompleteSplit( char parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_6 = 1;
	char_1 = char_1 + char_1;
	short_3 = short_1 + short_2;
	short_2 = short_2 * short_1;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_2;
	long_3 = long_2 + long_3;
	short_5 = short_4 + short_5;
	int_1 = int_1 + int_2;
	long_4 = long_3 + long_3;
	int_4 = int_3 + int_1;
	int_5 = int_5 + int_2;
	short_3 = short_6 + short_2;
	int_5 = int_3 + int_2;
	return char_1;
}
void v_DWHCIFrameSchedulerPeriodicStartSplit( int parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1;
	short_1 = short_1 + short_2;
	float_1 = float_1 * float_1;
	double_1 = double_2;
}
void v__DWHCIFrameSchedulerPeriodic()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1 + float_1;
}
void v_DWHCIFrameSchedulerPeriodic( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_1 * char_2;
	double_3 = double_1 + double_2;
	v_DWHCIFrameSchedulerPeriodicWaitForFrame(float_1);

	double_4 = double_1 * double_1;
	float_3 = float_1 + float_2;
	v_DWHCIFrameSchedulerPeriodicStartSplit(int_1);

	short_1 = short_1 + short_2;
	v_DWHCIFrameSchedulerPeriodicTransactionComplete(int_1,double_3);

	long_2 = long_1 + long_1;
	char_3 = v_DWHCIFrameSchedulerPeriodicCompleteSplit(char_1);

	int_1 = int_2 + int_1;
	v__DWHCIFrameSchedulerPeriodic();

	int_3 = int_3 + int_3;
	int_4 = int_2 * int_2;
	v_DWHCIFrameSchedulerPeriodicIsOddFrame();

}
short v_USBRequestGetBuffer( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	long_1 = long_1 * long_2;
	long_1 = long_2 + long_3;
	return short_1;
}
float v_USBEndpointGetMaxPacketSize( unsigned int parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	char_1 = char_1 * char_1;
	return float_1;
}
float v_USBDeviceGetSpeed( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int_3 = int_1 + int_2;
	return float_1;
}
int v_USBEndpointGetDevice( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_1;
	long_2 = long_1 * long_2;
	return int_3;
}
void v_DWHCITransferStageData( unsigned int parameter_1,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	char char_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long_2 = long_1 * long_1;
	float_2 = float_1 + float_1;
	double_1 = double_1 * double_2;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_3 * long_2;
	double_3 = double_2 * double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	char_1 = char_1;
	double_3 = double_1 * double_1;
	int_2 = int_1 * int_1;
	double_3 = double_3 * double_2;
	double_2 = double_4 + double_3;
	double_6 = double_3 + double_5;
	float_2 = float_2 * float_3;
	unsigned_int_3 = unsigned_int_2;
	double_3 = double_7 * double_5;
	short_2 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	short_1 = short_3 + short_1;
	char controller4vul_1529[2];
	fgets(controller4vul_1529 ,2 ,stdin);
	if( strcmp( controller4vul_1529, "9") > 0)
	{
		char char_3 = 1;
		if(1)
		{
			double_6 = double_2 * double_6;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			float_2 = float_2 + float_4;
			double_2 = double_3 * double_1;
		}
		char_1 = char_2 + char_3;
		char controller4vul_1530[2];
		fgets(controller4vul_1530 ,2 ,stdin);
		if( strcmp( controller4vul_1530, "b") > 0)
		{
			char controller4vul_1531[2];
			fgets(controller4vul_1531 ,2 ,stdin);
			if( strcmp( controller4vul_1531, ")") < 0)
			{
				double double_8 = 1;
				v_DWHCIFrameSchedulerNonPeriodic(short_1,uni_para);

				double_8 = double_3;
			}
			if(1)
			{
				short_2 = short_1 + short_4;
			}
			double_2 = double_2 + double_6;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_5;
			float_1 = float_4 + float_4;
		}
	}
	if(1)
	{
		short short_5 = 1;
		short short_6 = 1;
		char char_4 = 1;
		short_6 = short_5 * short_6;
		int_1 = int_2 * int_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_2 = double_2;
		char_2 = char_4 + char_4;
		short_1 = short_2 + short_4;
		double_4 = double_7 * double_4;
		float_4 = float_3 * float_2;
	}
	unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		float float_5 = 1;
		float float_6 = 1;
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			int_2 = int_1 + int_1;
			unsigned_int_5 = unsigned_int_7 * unsigned_int_6;
		}
		if(1)
		{
			float float_7 = 1;
			double_5 = double_6;
			float_7 = float_5 + float_6;
		}
		float_5 = float_3 + float_6;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_6;
			unsigned_int_6 = unsigned_int_8 + unsigned_int_6;
			double_7 = double_1 + double_7;
		}
	}
}
short v_DWHCIDeviceAllocateChannel( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "{") < 0)
		{
			unsigned int unsigned_int_3 = 1;
			v_uspi_LeaveCritical();

			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		v_uspi_EnterCritical();

		float_1 = float_1 + float_1;
	}
	int_1 = int_1;
	return short_1;
}
long v_DWHCIDeviceTransferStageAsync( float parameter_1,char parameter_2,long parameter_3,float parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int_1 = int_1 + int_1;
	int_2 = int_1 + int_1;
	double_1 = double_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	double_4 = double_2 + double_3;
	char_3 = char_1 + char_2;
	float_1 = float_1 * float_1;
	int_2 = int_3 + int_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	char controller4vul_1527[3];
	fgets(controller4vul_1527 ,3 ,stdin);
	if( strcmp( controller4vul_1527, "+0") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		long long_3 = 1;
		float float_3 = 1;
		char controller4vul_1528[3];
		fgets(controller4vul_1528 ,3 ,stdin);
		if( strcmp( controller4vul_1528, "v`") > 0)
		{
			float float_2 = 1;
			int int_4 = 1;
			double double_5 = 1;
			v_DWHCITransferStageData(unsigned_int_1,uni_para);

			float_2 = float_2 * float_2;
			int_1 = int_4 + int_5;
			double_4 = double_1 * double_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			double_1 = double_5;
		}
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		int_1 = int_6;
		long_1 = long_3;
		float_3 = float_1 + float_3;
		int_2 = int_6 * int_5;
	}
	int_6 = int_5 + int_6;
	return long_1;
}
void v_DWHCIDeviceCompletionRoutine( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_2 = long_1 * long_2;
	long_1 = long_1 + long_2;
	long_2 = long_2 + long_2;
}
void v_USBRequestSetCompletionRoutine( char parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float_3 = float_1 * float_2;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
}
char v_DWHCIDeviceTransferStage( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long_1 = v_DWHCIDeviceTransferStageAsync(float_1,char_1,long_1,float_1,uni_para);

	int_3 = int_1 + int_2;
	double_1 = double_1;
	return char_1;
}
long v_USBRequestGetBufLen( unsigned int parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	float_1 = float_1 + float_1;
	return long_1;
}
unsigned int v_USBRequestGetSetupData( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = long_2;
	int_3 = int_1 * int_2;
	char_1 = v_USBEndpointGetType();

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return unsigned_int_2;
}
double v_DWHCIDeviceSubmitBlockingRequest( long parameter_1,unsigned int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	char controller4vul_1523[2];
	fgets(controller4vul_1523 ,2 ,stdin);
	if( strcmp( controller4vul_1523, "T") > 0)
	{
		char char_1 = 1;
		double double_1 = 1;
		char_2 = char_1 * char_1;
		double_2 = double_1 * double_2;
		if(1)
		{
			int_1 = int_1;
			if(1)
			{
			}
		}
		char controller4vul_1524[3];
		fgets(controller4vul_1524 ,3 ,stdin);
		if( strcmp( controller4vul_1524, "ut") < 0)
		{
			char controller4vul_1525[3];
			fgets(controller4vul_1525 ,3 ,stdin);
			if( strcmp( controller4vul_1525, ";)") > 0)
			{
				char controller4vul_1526[2];
				fgets(controller4vul_1526 ,2 ,stdin);
				if( strcmp( controller4vul_1526, "Y") > 0)
				{
					char_2 = v_DWHCIDeviceTransferStage(int_1,int_1,int_2,int_3,uni_para);

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
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short_2 = short_1 + short_1;
		short_2 = short_3 + short_4;
		if(1)
		{
		}
	}
	int_3 = int_4 * int_5;
	return double_2;
}
void v_USBRequest( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_1;
	int_2 = int_1;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 + float_2;
	char_3 = char_1 + char_2;
	int_2 = int_2 * int_2;
	float_1 = float_1 + float_1;
	long_3 = long_1 + long_2;
	int_2 = int_2 + int_1;
	int_3 = int_4;
	double_2 = double_2 * double_1;
}
int v_DWHCIDeviceControlMessage( char parameter_1,short parameter_2,short parameter_3,int parameter_4,short parameter_5,int parameter_6,short parameter_8,int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	char_3 = char_2 * char_3;
	char_1 = char_2 * char_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
	double_2 = double_1 * double_1;
	long_1 = long_1 * long_1;
	char controller4vul_1522[2];
	fgets(controller4vul_1522 ,2 ,stdin);
	if( strcmp( controller4vul_1522, "$") > 0)
	{
		char char_4 = 1;
		double_1 = v_DWHCIDeviceSubmitBlockingRequest(long_2,unsigned_int_1,uni_para);

		char_2 = char_1 + char_4;
	}
	unsigned_int_7 = unsigned_int_6 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_6;
	return int_2;
}
double v_DWHCIDeviceSetConfiguration( char parameter_1,long parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 + short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if(remainder_check(controller_1,100,2))
	{
	}
	int_2 = int_1 + int_2;
	return double_1;
	int_1 = v_DWHCIDeviceControlMessage(char_1,short_3,short_1,int_2,short_1,int_1,short_2,-1 );

	v_MsDelay(unsigned_int_1);

}
void v_USBDeviceConfigure( double parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	v_LogWrite(char_1,char_1,float_1,unsigned_int_1,-1 );

	short_1 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_2 + double_2;
	}
	double_2 = v_DWHCIDeviceSetConfiguration(char_2,long_1,char_2);

}
void v_USBDevice()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	v_USBDeviceConfigure(double_1);

	double_1 = double_1 * double_2;
	int_2 = int_1 + int_2;
	double_1 = double_1 + double_1;
	double_1 = double_3 * double_4;
	int_3 = int_1 * int_2;
	v_USBString(int_3);

	float_2 = float_1 + float_1;
	double_3 = double_1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = v_malloc(double_1);

	double_3 = double_4 + double_5;
	int_3 = int_1 + int_4;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 * float_2;
	double_2 = double_1 + double_5;
	double_2 = double_4 + double_1;
	double_1 = double_2 + double_3;
	double_4 = double_1 + double_1;
	double_5 = double_4;
	v_USBEndpoint(short_2);

}
double v_DWHCIDeviceGetPortSpeed( unsigned int parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = double_1 + double_1;
	short_1 = short_1 + short_1;
	v_DWHCIRegister();

	long_3 = long_1 + long_2;
	double_2 = double_1 * double_1;
	v__DWHCIRegister(char_1);

	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 * int_1;
	char_2 = v_DWHCIRegisterRead(short_2);

	double_1 = double_3 + double_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 * float_1;
	short_4 = short_2 + short_3;
	long_3 = long_2 * long_2;
	float_3 = float_2 * float_1;
	return double_4;
}
void v_DWHCIRootPortInitialize( short parameter_1,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	long_1 = long_1 + long_1;
	long_3 = long_2 + long_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	double_2 = double_1 + double_2;
	long_5 = long_4 + long_1;
	char_1 = char_1;
	double_1 = double_3;
	if(1)
	{
		int_1 = int_1 + int_1;
		long_5 = long_1 * long_5;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	double_1 = double_2 + double_2;
	float_1 = float_2;
	int_1 = int_2 + int_3;
	double_2 = double_3 * double_1;
	double_2 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	char controller4vul_1512[2];
	fgets(controller4vul_1512 ,2 ,stdin);
	if( strcmp( controller4vul_1512, "k") > 0)
	{
		char char_2 = 1;
		char_2 = char_2 * char_2;
		double_1 = double_3 + double_2;
		long_4 = long_2 + long_2;
		char controller4vul_1513[2];
		fgets(controller4vul_1513 ,2 ,stdin);
		if( strcmp( controller4vul_1513, "z") < 0)
		{
			int int_4 = 1;
			char char_3 = 1;
			double double_4 = 1;
			short_2 = v_USBDeviceFactoryGetDevice(int_1,uni_para);

			short_2 = short_2;
			int_4 = int_2 * int_4;
			char_3 = char_2 + char_2;
			double_1 = double_4;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double_2 = double_2 + double_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int_2 = int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		double_1 = double_3 * double_1;
		unsigned_int_2 = unsigned_int_6 + unsigned_int_1;
		short_3 = short_3 + short_4;
	}
}
int v_DWHCIDeviceEnableRootPort( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	int_1 = int_2;
	long_1 = long_1 * long_2;
	char_1 = v_DWHCIRegisterRead(short_1);

	double_1 = double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "a") > 0)
	{
		v_DWHCIRegisterAnd(float_1,long_2);

		v_DWHCIRegisterWrite(float_2);

		float_2 = float_1 * float_1;
	}
	v_DWHCIRegisterOr(unsigned_int_1,unsigned_int_1);

	int_2 = int_1;
	v__DWHCIRegister(char_2);

	int_3 = int_1 * int_1;
	v_DWHCIRegister();

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	int_2 = int_3 * int_4;
	short_2 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	long_1 = long_1 * long_2;
	v_MsDelay(unsigned_int_1);

	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1;
	double_2 = double_3 * double_3;
	long_4 = long_3 + long_3;
	double_2 = v_DWHCIDeviceWaitForBit(char_3,double_3,char_4,unsigned_int_3,int_5);

	double_2 = double_1 * double_4;
	return int_2;
}
void v_DWHCIDeviceEnableHostInterrupts()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_3 = double_1 + double_2;
	v_DWHCIRegisterWrite(float_1);

	v_DWHCIRegisterOr(unsigned_int_1,unsigned_int_1);

	v__DWHCIRegister(char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	v_DWHCIDeviceEnableCommonInterrupts();

	char_1 = v_DWHCIRegisterRead(short_1);

	float_3 = float_2 + float_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	int_3 = int_1 + int_2;
	char_3 = char_1 * char_2;
	v_DWHCIRegister2(char_3,short_2,unsigned_int_3);

}
void v_DWHCIDeviceFlushRxFIFO( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	v__DWHCIRegister(char_1);

	char_3 = char_2 + char_1;
	int_2 = int_1 + int_1;
	double_1 = v_DWHCIDeviceWaitForBit(char_2,double_2,char_4,unsigned_int_1,int_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	v_DWHCIRegister2(char_3,short_1,unsigned_int_2);

	v_DWHCIRegisterOr(unsigned_int_2,unsigned_int_1);

	int_2 = int_2;
	v_DWHCIRegisterWrite(float_1);

	double_1 = double_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "1u") < 0)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	v_usDelay();

	double_1 = double_1;
}
void v_TimerusDelay( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, " ") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		v_DelayLoop(int_1);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		long_2 = long_1 + long_1;
	}
}
void v_usDelay()
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double_1 = double_2;
	v_TimerusDelay(long_1,char_1);

	double_3 = v_TimerGet();

}
void v_DWHCIDeviceFlushTxFIFO( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned_int_1 = unsigned_int_2;
	v_DWHCIRegisterOr(unsigned_int_1,unsigned_int_3);

	int_2 = int_1 * int_1;
	double_3 = double_1 * double_2;
	double_4 = double_1 * double_2;
	v_usDelay();

	unsigned_int_4 = unsigned_int_1;
	float_2 = float_1 + float_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		v_DWHCIRegister2(char_1,short_1,unsigned_int_5);

		double_1 = v_DWHCIDeviceWaitForBit(char_2,double_5,char_1,unsigned_int_3,int_1);

		double_6 = double_2;
	}
	v_DWHCIRegisterWrite(float_1);

	double_7 = double_6 * double_3;
	v_DWHCIRegisterAnd(float_2,long_1);

	v__DWHCIRegister(char_2);

}
int v_DWHCIDeviceInitHost()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_4 = 1;
	short short_4 = 1;
	float float_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_7 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_5 = 1;
	char char_4 = 1;
	long_1 = long_1;
	long_1 = long_2 + long_1;
	int_1 = int_1 * int_1;
	short_1 = short_1;
	int_2 = int_2 + int_2;
	double_3 = double_1 + double_2;
	v_DWHCIRegisterWrite(float_1);

	double_1 = double_3;
	v__DWHCIRegister(char_1);

	long_4 = long_1 * long_3;
	short_3 = short_2 + short_2;
	float_1 = float_1 + float_1;
	v_DWHCIDeviceFlushRxFIFO(double_3);

	unsigned_int_1 = unsigned_int_2;
	int_3 = int_3;
	if(1)
	{
		v_DWHCIDeviceEnableHostInterrupts();

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		v_DWHCIRegister();

		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	int_3 = int_2 + int_2;
	v_DWHCIRegister2(char_2,short_1,unsigned_int_2);

	int_3 = int_4;
	double_4 = double_1 * double_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	v_DWHCIDeviceFlushTxFIFO(short_4,int_4);

	int_4 = int_1 + int_4;
	char_2 = char_2;
	v_DWHCIRegisterAnd(float_2,long_2);

	char_3 = char_2 + char_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	double_1 = double_5 * double_2;
	char_1 = char_1;
	long_2 = long_4;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	int_1 = int_3 + int_3;
	double_4 = double_5 * double_2;
	short_4 = v_DWHCIRegisterGet();

	char_1 = char_1;
	short_4 = short_5;
	double_3 = double_3 + double_3;
	long_2 = long_4;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
		double double_6 = 1;
		long_1 = long_4;
		double_4 = double_6 * double_2;
	}
	double_5 = double_7 + double_7;
	int_2 = int_3 * int_4;
	int_4 = int_3 * int_3;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_4;
	char_1 = char_2;
	char_2 = v_DWHCIRegisterRead(short_2);

	int_3 = int_5 * int_4;
	v_DWHCIRegisterOr(unsigned_int_1,unsigned_int_6);

	unsigned_int_5 = unsigned_int_5;
	long_5 = long_4 * long_4;
	char_1 = char_4;
	return int_5;
}
void v_DWHCIDeviceEnableGlobalInterrupts( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	v_DWHCIRegisterOr(unsigned_int_1,unsigned_int_1);

	v_DWHCIRegisterWrite(float_1);

	double_1 = double_1 * double_2;
	v_DWHCIRegister();

	int_1 = int_2;
	double_2 = double_2 + double_2;
	char_2 = char_1 * char_1;
	char_3 = v_DWHCIRegisterRead(short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	v__DWHCIRegister(char_4);

	int_4 = int_3 + int_3;
	double_2 = double_1 + double_2;
}
void v_DWHCIDeviceEnableCommonInterrupts()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_1;
	short_1 = short_1 + short_1;
	short_1 = short_2;
	int_1 = int_1 + int_2;
	if(1)
	{
		v__DWHCIRegister(char_1);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	}
	v_DWHCIRegister();

	int_3 = int_3 + int_2;
	v_DWHCIRegisterSetAll();

	unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_5;
	v_DWHCIRegisterWrite(float_1);

	long_1 = long_1;
	v_DWHCIRegister2(char_2,short_2,unsigned_int_5);

}
void v_MsDelay( unsigned int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double_1 = v_TimerGet();

	int_1 = int_1 * int_1;
	v_TimerMsDelay(char_1,char_1);

}
double v_DWHCIDeviceWaitForBit( char parameter_1,double parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5)
{
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return double_1;
	char_1 = v_DWHCIRegisterRead(short_1);

	v_MsDelay(unsigned_int_1);

}
int v_DWHCIDeviceReset()
{
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	v_DWHCIRegister2(char_1,short_1,unsigned_int_1);

	v_DWHCIRegisterWrite(float_1);

	double_2 = double_1 * double_1;
	double_3 = double_2 + double_2;
	v__DWHCIRegister(char_1);

	short_3 = short_1 * short_2;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	float_2 = float_2 + float_3;
	v_MsDelay(unsigned_int_1);

	char_3 = char_2 + char_1;
	if(1)
	{
		double_4 = double_1 * double_1;
	}
	long_1 = long_2;
	double_3 = v_DWHCIDeviceWaitForBit(char_3,double_5,char_1,unsigned_int_1,int_1);

	v_DWHCIRegisterOr(unsigned_int_2,unsigned_int_1);

	double_2 = double_3 * double_4;
	return int_1;
}
char v_DWHCIDeviceInitCore( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_4 = 1;
	float float_4 = 1;
	long long_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_5 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_5 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int int_8 = 1;
	int int_9 = 1;
	float float_5 = 1;
	short_1 = short_2;
	long_3 = long_1 + long_2;
	char_1 = v_DWHCIRegisterRead(short_3);

	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_1;
	double_4 = double_2 + double_3;
	int_2 = int_1 * int_2;
	char_4 = char_2 + char_3;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	float_1 = float_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	int_4 = int_3 + int_2;
	float_3 = float_2 + float_1;
	int_3 = int_3 + int_1;
	short_4 = v_DWHCIRegisterGet();

	int_2 = int_1;
	int_3 = v_DWHCIDeviceReset();

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	float_1 = float_3 + float_3;
	int_1 = int_4 + int_4;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "/") > 0)
	{
		v_DWHCIRegisterAnd(float_1,long_3);

		float_4 = float_1 + float_1;
		long_3 = long_4 + long_4;
	}
	if(1)
	{
		int_4 = int_1 + int_3;
		int_5 = int_2;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	int_1 = int_3;
	int_6 = int_2 + int_3;
	double_1 = double_2 + double_5;
	double_1 = double_5;
	char_3 = char_2 * char_4;
	int_1 = int_3;
	v_LogWrite(char_4,char_3,float_2,unsigned_int_1,-1 );

	v_DWHCIDeviceEnableCommonInterrupts();

	int_6 = int_4 + int_7;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	char_2 = char_5 * char_1;
	v_DWHCIRegisterOr(unsigned_int_1,unsigned_int_2);

	long_6 = long_1 + long_5;
	int_9 = int_8 * int_2;
	double_3 = double_4 + double_3;
	v_DWHCIRegisterWrite(float_5);

	float_2 = float_4 + float_5;
	long_6 = long_4 * long_6;
	v__DWHCIRegister(char_4);

	unsigned_int_4 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	v_DWHCIRegister();

	int_6 = int_5 * int_3;
	double_5 = double_1;
	return char_5;
}
float v_DWHCITransferStageDataBeginSplitCycle( unsigned int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
void v_DWHCITransferStageDataIsStageComplete( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
}
void v_USBRequestCallCompletionRoutine( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
	float_1 = float_2;
}
void v_DWHCIDeviceFreeChannel( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1 + short_1;
	v_uspi_LeaveCritical();

	float_3 = float_1 + float_2;
	int_2 = int_2 + int_3;
	short_3 = short_1 + short_2;
	v_uspi_EnterCritical();

	double_1 = double_1;
}
void v__DWHCITransferStageData( unsigned int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	int_1 = int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		float_2 = float_1 + float_2;
		double_3 = double_1 + double_2;
		v_free();

		char_1 = char_1 + char_2;
	}
	int_2 = int_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "/") < 0)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_2 = double_4 + double_1;
		double_4 = double_2 * double_5;
	}
	long_3 = long_1 + long_2;
	char_2 = char_3 * char_3;
	int_2 = int_2;
}
void v_uspi_LeaveCritical()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1;
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
		}
	}
}
void v_uspi_EnterCritical()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_2 = double_1 * double_1;
	double_4 = double_3 + double_1;
	double_2 = double_4 + double_5;
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	int_5 = int_4 * int_2;
}
void v_DWHCIDeviceDisableChannelInterrupt( unsigned int parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	float_2 = float_1 * float_2;
	v_DWHCIRegister();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_1 + long_2;
	char_1 = v_DWHCIRegisterRead(short_1);

	short_3 = short_1 * short_2;
	char_3 = char_1 * char_2;
	int_2 = int_1 * int_2;
	double_3 = double_1 + double_2;
	v_uspi_EnterCritical();

	v_DWHCIRegisterAnd(float_3,long_4);

	int_2 = int_2 * int_2;
	v_uspi_LeaveCritical();

	v__DWHCIRegister(char_3);

	float_3 = float_1 + float_2;
	v_DWHCIRegisterWrite(float_4);

}
short v_DWHCITransferStageDataGetResultLen( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "`") < 0)
	{
	}
	return short_1;
}
void v_USBRequestSetResultLen( double parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	float_2 = float_1 * float_2;
	double_1 = double_1;
}
short v_DWHCITransferStageDataIsStatusStage( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_2;
	return short_1;
}
void v_DWHCITransferStageDataSetSplitComplete( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	double_1 = double_1;
	char_1 = char_1;
}
void v_DWHCIDeviceTimerHandler( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	float float_5 = 1;
	char char_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_3 = float_1 * float_2;
	int_1 = int_2;
	double_1 = double_2;
	double_3 = v_DWHCITransferStageDataGetFrameScheduler(float_1);

	char_2 = char_1 * char_2;
	int_1 = int_1 * int_2;
	double_1 = v_DWHCITransferStageDataIsSplit(long_1);

	double_2 = double_2;
	if(1)
	{
		double double_4 = 1;
		float float_4 = 1;
		double_4 = double_2 + double_1;
		v_DWHCITransferStageDataSetSplitComplete(long_1,long_1);

		char_4 = char_1 * char_3;
		float_3 = float_4;
		double_1 = double_3 * double_4;
		float_3 = float_4;
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = int_2 + int_3;
	}
	float_1 = v_DWHCITransferStageDataGetState(double_2);

	long_2 = long_1 * long_2;
	v_DWHCITransferStageDataSetState(float_5,float_5);

	v_DWHCIDeviceStartTransaction(char_3,float_2);

	char_4 = char_5 + char_2;
}
double v_TimerGet()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return double_1;
}
void v_TimerStartKernelTimer( unsigned int parameter_1,long parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char_2 = char_1 + char_1;
	double_1 = double_1;
	v_EnterCritical();

	double_1 = double_2 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, ",1") < 0)
		{
			unsigned_int_1 = unsigned_int_1;
		}
	}
	if(1)
	{
		char char_4 = 1;
		v_LeaveCritical();

		char_4 = char_2 * char_3;
		long_1 = long_1 + long_1;
	}
	v_LoggerWrite(char_3,unsigned_int_2,unsigned_int_3,float_1,char_3);

	unsigned_int_1 = v_LoggerGet();

	long_1 = long_1;
	float_1 = float_1 * float_1;
	int_2 = int_1 * int_2;
	long_1 = long_1 * long_2;
	int_4 = int_3 + int_3;
	char_3 = char_5 + char_6;
}
int v_StartKernelTimer( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	return int_1;
	v_TimerStartKernelTimer(unsigned_int_1,long_1,long_2);

	double_1 = v_TimerGet();

}
void v_USBRequestGetEndpoint( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_1;
}
int v_USBEndpointGetInterval( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_2;
	return int_1;
}
void v_DWHCITransferStageDataSetState( float parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void v_USBRequestSetStatus( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 * int_2;
}
short v_DWHCITransferStageDataGetTransactionStatus()
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char_1 = char_1 + char_1;
	float_2 = float_1 * float_2;
	return short_1;
}
float v_DWHCITransferStageDataGetState( double parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	double_1 = double_1 + double_1;
	return float_1;
}
void v_USBEndpointSkipPID( double parameter_1,int parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	short_2 = short_1 * short_1;
	float_2 = float_1 + float_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char_1 = char_1 * char_1;
		char_1 = char_2 + char_3;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		short_1 = short_1 + short_3;
		if(1)
		{
			float_3 = float_1;
		}
		double_2 = double_1 * double_1;
		float_2 = float_1 * float_2;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		int int_2 = 1;
		float_1 = float_2 * float_3;
		int_1 = int_2;
	}
}
void v_DWHCITransferStageDataTransactionComplete( unsigned int parameter_1,short parameter_2,char parameter_3,float parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
		if(1)
		{
			int_2 = int_1 * int_2;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
	}
	int_1 = int_3 + int_2;
	v_USBEndpointSkipPID(double_1,int_1,unsigned_int_3);

	short_2 = short_1 * short_1;
	if(1)
	{
		v_Logger(double_2);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	int_4 = int_3 * int_4;
	short_2 = short_1 + short_2;
	if(1)
	{
		int_1 = int_2 * int_2;
	}
	double_3 = double_3 * double_3;
	double_3 = double_3;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float_2 = float_1 * float_2;
		long_2 = long_1 * long_1;
	}
}
void v_DWHCIRegisterIsSet( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = int_1 * int_1;
	short_1 = short_1 + short_1;
	char_3 = char_1 * char_2;
}
void v_DWHCIDeviceStartTransaction( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	char char_1 = 1;
	short short_3 = 1;
	char char_2 = 1;
	long long_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	float_1 = v_DWHCITransferStageDataGetChannelNumber(long_1);

	v_DWHCIRegister();

	v_DWHCIRegisterWrite(float_2);

	unsigned_int_4 = unsigned_int_5;
	double_3 = double_1 * double_2;
	int_3 = int_1 + int_2;
	v_DWHCIRegisterSet(short_1,long_1);

	short_2 = short_2 + short_1;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
	if(1)
	{
		double double_5 = 1;
		long long_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double_4 = double_3 + double_3;
		char_1 = v_DWHCIRegisterRead(short_3);

		v_DWHCIDeviceStartChannel(float_2,int_1);

		char_1 = char_1 + char_1;
		v__DWHCIRegister(char_2);

		double_4 = double_5;
		v_DWHCITransferStageDataSetSubState(long_2,unsigned_int_4);

		long_3 = long_1 + long_3;
		float_4 = float_3 + float_3;
		float_1 = float_3 * float_5;
		v_DWHCIRegisterAnd(float_3,long_1);

		v_DWHCIRegisterOr(unsigned_int_1,unsigned_int_1);

		double_3 = double_1 * double_5;
		v_DWHCIRegisterIsSet(char_3,double_4);

		float_1 = float_2 * float_1;
		short_4 = short_3 * short_3;
	}
	if(1)
	{
		short short_5 = 1;
		short short_6 = 1;
		short_6 = short_5 + short_4;
	}
	int_2 = int_3 + int_3;
}
char v_DWHCITransferStageDataIsPeriodic()
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char_1 = char_1 * char_1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2;
	return char_2;
	char_1 = v_USBEndpointGetType();

}
unsigned int v_DWHCITransferStageDataGetStatusMask( char parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1;
	float_2 = float_1 * float_1;
	if(1)
	{
		char_1 = v_DWHCITransferStageDataIsPeriodic();

		char_1 = char_1 + char_1;
	}
	return unsigned_int_1;
}
void v_DWHCIRegisterSet( short parameter_1,long parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = long_1;
	char_1 = char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
}
void v_USBEndpointGetNumber( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_2 = long_1 + long_2;
}
short v_DWHCITransferStageDataGetEndpointNumber( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	short_2 = short_1 + short_2;
	float_1 = float_1;
	return short_2;
	v_USBEndpointGetNumber(short_3);

}
char v_USBEndpointGetType()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	return char_1;
}
short v_DWHCITransferStageDataGetEndpointType( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	short_1 = short_2;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_2;
	short_2 = short_2 * short_3;
	double_1 = double_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	char_1 = v_USBEndpointGetType();

	float_2 = float_3 * float_2;
	long_2 = long_1 * long_2;
	int_4 = int_2 * int_3;
	long_1 = long_1;
	return short_4;
}
double v_USBDeviceGetAddress( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long_2 = long_1 * long_2;
	return double_1;
}
double v_DWHCITransferStageDataGetDeviceAddress( char parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = v_USBDeviceGetAddress(short_1);

	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return double_1;
}
double v_DWHCITransferStageDataGetSpeed( unsigned int parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	short_1 = short_1 + short_1;
	return double_1;
}
float v_DWHCITransferStageDataIsDirectionIn( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_1;
	return float_1;
}
char v_DWHCITransferStageDataGetMaxPacketSize( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_1;
	return char_1;
}
float v_DWHCITransferStageDataIsSplitComplete( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 + double_1;
	float_1 = float_1 + float_2;
	return float_2;
}
int v_DWHCITransferStageDataGetSplitPosition( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	return int_1;
}
double v_USBDeviceGetHubAddress( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short_2 = short_1 + short_2;
	return double_1;
}
void v_DWHCITransferStageDataGetHubAddress( int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_1;
	double_1 = v_USBDeviceGetHubAddress(double_1);

	int_1 = int_2;
	double_1 = double_1 + double_1;
}
void v_USBDeviceGetHubPortNumber( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_2;
}
int v_DWHCITransferStageDataGetHubPortAddress( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_1 = short_1 * short_2;
	v_USBDeviceGetHubPortNumber(int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_2;
	return int_1;
}
double v_DWHCITransferStageDataIsSplit( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	short_3 = short_1 * short_2;
	return double_1;
}
void v_uspi_CleanAndInvalidateDataCacheRange( char parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_2 = double_1 + double_1;
		float_2 = float_1 * float_2;
	}
}
float v_DWHCITransferStageDataGetDMAAddress( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_2;
	float_1 = float_1 + float_1;
	return float_1;
}
int v_USBEndpointGetNextPID( short parameter_1,short parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	return int_1;
}
short v_DWHCITransferStageDataGetPID( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_3 = float_1 * float_2;
	char_1 = char_1 * char_1;
	long_1 = long_1;
	long_1 = long_1;
	int_3 = int_1 + int_2;
	short_1 = short_1 + short_2;
	float_4 = float_4;
	long_3 = long_1 + long_2;
	int_1 = int_4 + int_5;
	int_1 = v_USBEndpointGetNextPID(short_3,short_1);

	unsigned_int_3 = unsigned_int_1;
	return short_3;
}
void v_DWHCITransferStageDataGetPacketsToTransfer( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float_3 = float_1 * float_2;
}
char v_DWHCITransferStageDataGetBytesToTransfer( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return char_1;
}
void v_DWHCIRegisterOr( unsigned int parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_3 = long_1 + long_2;
	double_2 = double_1 * double_2;
	double_2 = double_3;
}
void v_DWHCIRegisterSetAll()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 + short_2;
}
void v_DWHCITransferStageDataSetSubState( long parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_2 = int_1 + int_2;
	short_3 = short_1 * short_2;
}
float v_DWHCITransferStageDataGetChannelNumber( long parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	short_1 = short_1;
	return float_1;
}
void v_DWHCIDeviceStartChannel( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_4 = 1;
	int int_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_2 = 1;
	long long_5 = 1;
	long long_6 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_6 = 1;
	short short_5 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_7 = 1;
	float float_7 = 1;
	char char_7 = 1;
	char char_8 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_7 = 1;
	float_1 = v_DWHCITransferStageDataIsSplitComplete(short_1);

	v__DWHCIRegister(char_1);

	float_3 = float_2 + float_1;
	int_3 = int_1 * int_2;
	double_1 = v_DWHCITransferStageDataGetDeviceAddress(char_2);

	unsigned_int_1 = unsigned_int_2;
	short_2 = v_DWHCITransferStageDataGetEndpointNumber(unsigned_int_2);

	char_3 = char_4;
	float_3 = float_1 * float_3;
	float_3 = float_2 + float_4;
	int_1 = int_4;
	short_1 = short_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	v_DWHCITransferStageDataGetPacketsToTransfer(unsigned_int_2);

	long_3 = long_1 * long_2;
	long_2 = long_2;
	long_4 = long_3 + long_2;
	float_1 = float_4 * float_3;
	short_1 = short_1 * short_2;
	float_3 = v_DWHCITransferStageDataIsDirectionIn(unsigned_int_2);

	int_2 = int_3 + int_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_3 = v_DWHCITransferStageDataGetStatusMask(char_4);

	double_1 = double_1 + double_2;
	short_2 = short_2 + short_2;
	v_DWHCIRegisterSetAll();

	char_4 = char_2 * char_2;
	v_DWHCITransferStageDataSetSubState(long_4,unsigned_int_1);

	long_3 = long_5 * long_6;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		v_DWHCIRegister2(char_1,short_4,unsigned_int_3);

		short_2 = short_1 + short_4;
		float_1 = float_1;
		if(1)
		{
			double_2 = double_1 + double_2;
		}
		float_4 = v_DWHCITransferStageDataGetDMAAddress(unsigned_int_4);

		double_1 = double_1 * double_1;
	}
	double_4 = double_2 * double_3;
	int_5 = int_2 + int_3;
	char_6 = char_5 + char_2;
	int_2 = v_DWHCITransferStageDataGetSplitPosition(float_3);

	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	double_1 = v_DWHCITransferStageDataGetSpeed(unsigned_int_2);

	short_3 = short_2 * short_2;
	double_1 = v_DWHCITransferStageDataIsSplit(long_1);

	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	v_DWHCIRegisterWrite(float_1);

	unsigned_int_2 = unsigned_int_3;
	int_2 = int_2 * int_6;
	if(1)
	{
		double_3 = double_2 * double_4;
	}
	if(1)
	{
		short_5 = v_DWHCITransferStageDataGetPID(short_5);

		float_2 = float_2 + float_5;
	}
	if(1)
	{
		double_4 = double_2 + double_4;
	}
	if(1)
	{
		char_2 = v_DWHCITransferStageDataGetBytesToTransfer(long_2);

		v_DWHCITransferStageDataGetHubAddress(int_4);

		v_DWHCIRegisterAnd(float_4,long_6);

		char_1 = char_6 * char_6;
	}
	float_5 = v_DWHCITransferStageDataGetChannelNumber(long_3);

	long_3 = long_3 * long_5;
	char_6 = v_DWHCITransferStageDataGetMaxPacketSize(long_1);

	float_5 = float_5;
	unsigned_int_1 = unsigned_int_5;
	v_DWHCIRegisterSet(short_2,long_1);

	unsigned_int_6 = unsigned_int_6 * unsigned_int_1;
	float_5 = float_1 + float_2;
	v_DWHCIRegister();

	unsigned_int_4 = unsigned_int_4 * unsigned_int_6;
	long_4 = long_4 + long_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
		if(1)
		{
			float float_6 = 1;
			int_3 = v_DWHCITransferStageDataGetHubPortAddress(int_1);

			float_5 = float_6 * float_1;
		}
		if(1)
		{
			char_4 = v_DWHCIRegisterRead(short_3);

			int_4 = int_4 + int_7;
		}
	}
	float_7 = float_1 + float_7;
	int_1 = int_6 + int_2;
	short_5 = v_DWHCITransferStageDataGetEndpointType(char_2);

	int_5 = int_5;
	v_DWHCIRegisterOr(unsigned_int_4,unsigned_int_6);

	double_1 = v_DWHCITransferStageDataGetFrameScheduler(float_7);

	double_2 = double_1 + double_3;
	char_4 = char_6 * char_3;
	char_7 = char_7 * char_8;
	int_3 = int_1 + int_7;
	double_4 = double_2;
	char_3 = char_2 + char_5;
	int_7 = int_1 + int_3;
	int_7 = int_1 + int_8;
	v_uspi_CleanAndInvalidateDataCacheRange(char_6,unsigned_int_7);

	unsigned_int_1 = unsigned_int_5;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_3;
}
char v_DWHCITransferStageDataGetSubState( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_1 = int_2;
	return char_1;
}
void v_DWHCITransferStageDataGetURB( char parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
double v_DWHCITransferStageDataGetFrameScheduler( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1;
	return double_2;
}
void v_DWHCIDeviceChannelInterruptHandler( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_5 = 1;
	float float_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_6 = 1;
	char char_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_8 = 1;
	long long_2 = 1;
	double double_4 = 1;
	char char_7 = 1;
	long long_3 = 1;
	int int_9 = 1;
	float float_4 = 1;
	char char_8 = 1;
	float float_5 = 1;
	float float_6 = 1;
	long long_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_10 = 1;
	char char_9 = 1;
	char char_10 = 1;
	short short_7 = 1;
	short short_8 = 1;
	long long_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_11 = 1;
	short short_11 = 1;
	short short_12 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_1;
	double_3 = v_DWHCITransferStageDataGetFrameScheduler(float_1);

	int_2 = int_1 + int_1;
	long_1 = long_1 * long_1;
	v_free();

	double_2 = double_3 + double_3;
	int_3 = v_StartKernelTimer(float_2,int_3);

	short_2 = short_1 + short_2;
	double_1 = double_1;
	int_4 = int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 + char_1;
	int_4 = int_3 * int_4;
	float_2 = float_2;
	short_1 = short_2 + short_2;
	v_DWHCITransferStageDataSetState(float_1,float_2);

	int_2 = int_1 + int_1;
	if(1)
	{
		char_3 = char_2 + char_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_3;
	v_uspi_CleanAndInvalidateDataCacheRange(char_3,unsigned_int_3);

	char_4 = char_1 * char_3;
	short_5 = short_3 * short_4;
	double_3 = double_3 + double_2;
	double_2 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	v_USBRequestCallCompletionRoutine(char_5);

	float_2 = float_1 * float_3;
	if(1)
	{
		int_5 = int_6;
		short_6 = v_DWHCITransferStageDataIsStatusStage(char_6);

		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		v_DWHCIDeviceFreeChannel(double_3,char_4);

		int_7 = int_1 * int_7;
		short_3 = v_DWHCIRegisterGet();

		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		v_DWHCIDeviceDisableChannelInterrupt(unsigned_int_4,double_2);

		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		char_5 = v_DWHCITransferStageDataGetSubState(long_1);

		int_1 = int_1 + int_7;
	}
	if(1)
	{
		if(1)
		{
			int_4 = int_8;
		}
		double_1 = double_3 + double_2;
	}
	v__DWHCIRegister(char_1);

	long_2 = long_1 * long_1;
	double_2 = double_4 * double_4;
	char_7 = v_DWHCITransferStageDataIsPeriodic();

	short_3 = short_6 + short_6;
	float_3 = float_1 + float_2;
	long_1 = long_3;
	int_3 = int_8 + int_9;
	float_2 = float_3 * float_4;
	int_6 = int_8 * int_4;
	if(1)
	{
		char_7 = char_8 + char_3;
		float_1 = float_5;
		v_DWHCIDeviceStartTransaction(char_7,float_6);

		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
		long_3 = long_3 + long_1;
		long_1 = long_1 + long_4;
		double_3 = double_4 + double_1;
		long_1 = long_2 * long_1;
		int_3 = int_9;
		short_5 = v_DWHCITransferStageDataGetResultLen(double_5);

		long_4 = long_1 * long_4;
	}
	float_6 = v_DWHCITransferStageDataGetState(double_1);

	unsigned_int_4 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_5;
	int_5 = int_3 * int_1;
	if(1)
	{
		unsigned_int_7 = unsigned_int_6 + unsigned_int_5;
	}
	unsigned_int_7 = unsigned_int_6 * unsigned_int_2;
	int_5 = int_10 * int_5;
	int_1 = int_5 + int_6;
	if(1)
	{
		v_LogWrite(char_6,char_9,float_3,unsigned_int_4,-1 );

		int_8 = int_10;
		double_5 = double_3 * double_1;
		char_10 = char_3;
		int_9 = int_8 * int_9;
		short_4 = short_3 * short_7;
		int_10 = int_8 + int_5;
		int_4 = int_8 + int_10;
		v_DWHCIRegister();

		int_4 = int_9 * int_8;
		short_6 = short_8 * short_6;
	}
	short_2 = short_7 + short_5;
	if(1)
	{
		short short_9 = 1;
		long_1 = long_3 + long_5;
		short_5 = short_6 * short_9;
	}
	if(1)
	{
		if(1)
		{
			v_DWHCITransferStageDataGetURB(char_6);

			v_USBRequestSetResultLen(double_4,int_7);

			v_DWHCITransferStageDataSetSplitComplete(long_5,long_5);

			unsigned_int_2 = unsigned_int_7 + unsigned_int_3;
			double_7 = double_6 * double_5;
			char_4 = char_3 + char_1;
			short_8 = short_8;
			int_3 = int_1 + int_10;
			char_6 = char_1 * char_5;
			v_DWHCIDeviceTimerHandler(float_3);

			long_4 = long_4;
			v_DWHCIDeviceStartChannel(float_4,int_11);

			unsigned_int_3 = unsigned_int_6 + unsigned_int_2;
		}
		if(1)
		{
			short short_10 = 1;
			double_4 = double_3;
			short_10 = short_5 * short_5;
			float_5 = v_DWHCITransferStageDataGetDMAAddress(unsigned_int_4);

			int_1 = int_1 * int_5;
			v_USBRequestSetStatus(short_2,int_1);

			int_4 = v_USBEndpointGetInterval(float_4);

			unsigned_int_4 = unsigned_int_6;
		}
		if(1)
		{
			double double_8 = 1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
			int_11 = int_6 + int_7;
			float_3 = v_DWHCITransferStageDataBeginSplitCycle(unsigned_int_6);

			double_8 = double_8 + double_4;
		}
		v_USBRequestGetEndpoint(float_4);

		int_5 = int_11 * int_7;
	}
	char_3 = v_DWHCIRegisterRead(short_11);

	double_7 = double_7;
	if(1)
	{
		short_3 = short_8 * short_1;
	}
	v_DWHCITransferStageDataIsStageComplete(short_1);

	double_3 = double_1 * double_1;
	v_DWHCITransferStageDataTransactionComplete(unsigned_int_1,short_5,char_9,float_5);

	unsigned_int_4 = unsigned_int_6 + unsigned_int_2;
	char_10 = char_8 + char_10;
	short_11 = v_DWHCITransferStageDataGetTransactionStatus();

	int_3 = int_4 + int_7;
	long_1 = long_1 * long_5;
	int_4 = int_11 + int_9;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	double_2 = double_6 + double_7;
	char_2 = v_DWHCITransferStageDataGetBytesToTransfer(long_2);

	short_5 = short_12 + short_5;
	v__DWHCITransferStageData(unsigned_int_4);

}
void v_DWHCIRegister2( char parameter_1,short parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	double_1 = double_1;
}
void v_DWHCIDeviceInterruptHandler()
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char_1 = char_2;
	v__DWHCIRegister(char_2);

	char_2 = char_2 + char_2;
	int_1 = int_1;
	char_2 = v_DWHCIRegisterRead(short_1);

	double_1 = double_1 + double_1;
	v_DWHCIRegister2(char_1,short_1,unsigned_int_1);

	float_1 = float_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		char char_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_6 = 1;
		short_3 = v_DWHCIRegisterGet();

		long_1 = long_1 + long_2;
		char_3 = char_3 * char_1;
		float_1 = float_1;
		int_3 = int_2 * int_3;
		int_3 = int_4 * int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				int_5 = int_1 * int_2;
				char_2 = char_1 + char_3;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
				char_5 = char_1 + char_4;
				long_1 = long_3 + long_1;
			}
			char_4 = char_5 * char_2;
		}
		int_3 = int_3 * int_6;
	}
	if(1)
	{
		long long_4 = 1;
		if(1)
		{
			double double_2 = 1;
			char char_6 = 1;
			double double_3 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double_1 = double_2 + double_2;
			v_DWHCIRegisterWrite(float_1);

			long_3 = long_2 + long_3;
			v_DWHCIDeviceChannelInterruptHandler(long_1,int_4);

			char_4 = char_6 * char_5;
			long_3 = long_1 * long_4;
			v_DWHCIRegister();

			double_3 = double_2 + double_3;
			int_5 = int_7;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		}
		long_4 = long_1 * long_2;
	}
	float_2 = float_2 + float_1;
	float_3 = float_2 + float_2;
}
double v_InterruptSystemGet()
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_2;
	return double_2;
}
void v_ConnectInterrupt( float parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char_1 = char_1 + char_2;
	v_InterruptSystemConnectIRQ(char_2,unsigned_int_1,unsigned_int_2);

	double_1 = v_InterruptSystemGet();

}
void v_DWHCIRegisterWrite( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 * int_2;
	float_1 = float_1 + float_2;
	double_2 = double_1 + double_1;
}
void v_DWHCIRegisterAnd( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_2;
	int_1 = int_1 + int_1;
	char_2 = char_1 * char_1;
}
int v_SetPowerStateOn()
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	char_1 = char_1 * char_2;
	short_1 = short_1;
	short_2 = short_1 + short_1;
	v_BcmPropertyTags(float_1);

	v__BcmPropertyTags(double_1);

	long_1 = long_1 * long_1;
	char_1 = char_2 * char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "A") < 0)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_2 * double_3;
	}
	v_BcmPropertyTagsGetTag(long_1,int_1,char_1,float_2);

	double_4 = double_1;
	return int_2;
}
void v__DWHCIRegister( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
}
short v_DWHCIRegisterGet()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_2;
	return short_1;
}
unsigned int v_LoggerGet()
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void v_LogWrite( char parameter_1,char parameter_2,float parameter_3,unsigned int parameter_4,int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	v_LoggerWriteV(double_1,float_1,unsigned_int_1,long_1,long_2,uni_para);

	int_1 = int_1 + int_2;
	float_3 = float_1 + float_2;
	long_2 = long_2 + long_2;
	long_4 = long_2 * long_3;
}
char v_DWHCIRegisterRead( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	return char_1;
}
void v_DWHCIRegister()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_1;
	double_4 = double_3 * double_3;
	char_1 = char_1 + char_1;
}
unsigned int v_DWHCIDeviceInitialize( char parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_5 = 1;
	char char_2 = 1;
	double double_6 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_2;
	int_2 = int_1 * int_2;
	char controller4vul_1511[3];
	fgets(controller4vul_1511 ,3 ,stdin);
	if( strcmp( controller4vul_1511, "J(") > 0)
	{
		v_DWHCIRootPortInitialize(short_1,uni_para);

		unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		short short_2 = 1;
		long long_3 = 1;
		short_3 = short_1 + short_2;
		long_2 = long_2 + long_3;
	}
	long_1 = long_2 + long_1;
	unsigned_int_5 = unsigned_int_7 + unsigned_int_4;
	short_4 = short_4 + short_1;
	float_1 = float_1 + float_2;
	long_5 = long_1 + long_4;
	int_2 = int_2 + int_2;
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		int_1 = int_1 * int_2;
		unsigned_int_8 = unsigned_int_2;
		int_2 = int_1 + int_2;
	}
	float_2 = float_3 + float_1;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		char char_1 = 1;
		int_3 = int_4;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		double double_4 = 1;
		double_1 = double_3 * double_2;
		double_3 = double_1 + double_4;
		double_5 = double_2 * double_5;
	}
	if(1)
	{
		long_5 = long_5;
		unsigned_int_1 = unsigned_int_6 * unsigned_int_5;
		double_2 = double_3 + double_1;
	}
	short_1 = short_3 * short_4;
	char_2 = char_2 * char_2;
	double_6 = double_5 + double_5;
	return unsigned_int_6;
}
void v_DWHCIRootPort( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_2 = char_1 * char_1;
	double_1 = double_1;
	int_2 = int_1 * int_2;
	double_1 = double_1 * double_1;
}
void v_DWHCIDevice( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_DWHCIRootPort(short_1);

	short_3 = short_2 * short_2;
	int_1 = int_1 + int_1;
	float_2 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
}
void v_DeviceNameService()
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 * char_2;
	int_2 = int_1 * int_2;
}
int v_USPiInitialize(int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short_3 = short_1 + short_2;
	long_2 = long_1 + long_2;
	double_1 = double_1 + double_1;
	char_1 = char_2;
	double_2 = double_2 + double_3;
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_1510[3];
	fgets(controller4vul_1510 ,3 ,stdin);
	if( strcmp( controller4vul_1510, "k;") > 0)
	{
		char char_3 = 1;
		unsigned_int_3 = v_DWHCIDeviceInitialize(char_1,uni_para);

		char_1 = char_1 * char_3;
		char_1 = char_1 * char_2;
		long_3 = long_3 + long_1;
		int_3 = int_2 * int_2;
		char_3 = char_3 * char_1;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	long_3 = long_4 + long_2;
	double_2 = double_4 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float_1 = float_1 + float_2;
		int_2 = int_3 + int_1;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		double_1 = double_5 * double_1;
		int_1 = int_2 * int_2;
	}
	int_1 = int_1;
	unsigned_int_5 = unsigned_int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_5 = 1;
		float float_3 = 1;
		short short_4 = 1;
		long_4 = long_2 + long_5;
		double_4 = double_5;
		float_3 = float_3;
		short_4 = short_2 * short_2;
		short_1 = short_1 + short_3;
	}
	double_2 = double_6 + double_6;
	return int_1;
}
void v__ExceptionHandler( char parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = float_1;
	int_1 = int_1 * int_2;
}
void v__InterruptSystem( float parameter_1)
{
	float float_1 = 1;
	float_1 = float_1 * float_1;
}
void v__Timer( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
void v__Logger( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_2 = char_1 + char_2;
	double_2 = double_1 + double_1;
	int_2 = int_1 + int_2;
}
void v_DelayLoop( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	if(1)
	{
	}
	char_2 = char_1 + char_1;
	int_2 = int_1 + int_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	char_1 = char_1 + char_3;
	float_1 = float_1;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				short_1 = short_1 + short_1;
			}
			char controller_6[3];
			fgets(controller_6 ,3 ,stdin);
			if( strcmp( controller_6, "AO") == 0)
			{
				unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
			}
		}
		if(1)
		{
			if(1)
			{
				double_2 = double_2 * double_2;
			}
			if(1)
			{
				double_2 = double_2;
			}
		}
	}
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	long_1 = long_1 * long_1;
	unsigned_int_4 = unsigned_int_5;
	if(1)
	{
		if(1)
		{
			short short_3 = 1;
			short_3 = short_2 + short_2;
		}
		if(1)
		{
			double_1 = double_1;
		}
	}
	long_2 = long_1 * long_2;
	double_3 = double_2 * double_3;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
	double_4 = double_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	short_1 = short_1 * short_2;
}
void v_TimerMsDelay( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "-0") > 0)
	{
		double double_3 = 1;
		v_DelayLoop(int_1);

		double_2 = double_3;
		int_1 = int_1 * int_1;
	}
}
long v_TimerGetTicks( char parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	char_1 = char_1 + char_1;
	return long_1;
}
void v_TimerTuneMsDelay( short parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	long_1 = v_TimerGetTicks(char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_2;
	int_2 = int_1 * int_1;
	v_TimerMsDelay(char_1,char_1);

	long_2 = long_1 + long_2;
	short_2 = short_1 + short_2;
	int_3 = int_3;
	double_2 = double_3 + double_1;
}
void v_TimerPollKernelTimers( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float_2 = float_1 + float_2;
	v_LeaveCritical();

	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int_1 = int_2;
		char_3 = char_1 + char_2;
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				v_EnterCritical();

				float_1 = float_1;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			}
		}
	}
	short_3 = short_1 + short_2;
}
void v_TimerInterruptHandler()
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	float float_1 = 1;
	v_TimerPollKernelTimers(short_1);

	double_1 = double_1 * double_2;
	char_1 = char_1 * char_2;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_2 + short_3;
	double_3 = double_2 + double_2;
	if(1)
	{
		double_2 = double_3 + double_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	v_write32(short_4,double_2);

	int_1 = int_1;
	int_2 = int_2 + int_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = v_read32(unsigned_int_3);

		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	}
	float_1 = float_1 * float_1;
}
void v_InterruptSystemEnableIRQ( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	v_write32(short_1,double_2);

	int_1 = int_1 + int_1;
	float_2 = float_1 + float_2;
}
void v_InterruptSystemConnectIRQ( char parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char_2 = char_1 * char_2;
	short_1 = short_2;
	double_1 = double_1 + double_1;
	short_2 = short_1;
	short_2 = short_3 + short_2;
	v_InterruptSystemEnableIRQ(long_1);

	double_2 = double_1 + double_2;
}
double v_TimerInitialize()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	char char_4 = 1;
	short short_3 = 1;
	double double_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 * short_2;
	v_InterruptSystemConnectIRQ(char_1,unsigned_int_2,unsigned_int_2);

	unsigned_int_2 = v_read32(unsigned_int_2);

	double_1 = double_2;
	double_1 = double_1 * double_3;
	v_TimerTuneMsDelay(short_2);

	char_3 = char_1 + char_2;
	v_TimerInterruptHandler();

	long_1 = long_1;
	short_2 = short_2 + short_2;
	char_4 = char_4 * char_3;
	return double_3;
	v_write32(short_3,double_4);

}
void v_IRQStub()
{
	if(1)
	{
	}
	if(1)
	{
	}
}
int v_InterruptSystemInitialize( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_2;
	int_1 = int_1 + int_1;
	char_3 = char_1 + char_2;
	float_3 = float_1 + float_2;
	float_2 = float_1 + float_3;
	unsigned_int_1 = v_read32(unsigned_int_1);

	double_2 = double_3 * double_3;
	double_1 = double_4 * double_2;
	int_1 = int_2;
	double_1 = double_5 + double_4;
	long_1 = long_1 + long_2;
	v_write32(short_1,double_4);

	double_5 = double_6 + double_2;
	double_5 = double_1 * double_6;
	v_IRQStub();

	int_1 = int_1 * int_2;
	int_1 = int_1 * int_2;
	v_CleanDataCache();

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	long_3 = long_3 + long_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	short_1 = short_1 + short_1;
	int_1 = int_1 + int_3;
	return int_1;
}
void v_StringFormatV( unsigned int parameter_1,long parameter_2,int parameter_3)
{
}
void v__String( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double_4 = double_3;
		unsigned_int_1 = unsigned_int_1;
	}
}
short v_StringGet( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short_1 = short_2;
	if(1)
	{
	}
	return short_3;
}
void v_StringFormat( short parameter_1,long parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_2;
	int_1 = int_1 * int_1;
	int_2 = int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
}
void v_String( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long_1 = long_1 + long_2;
	int_3 = int_1 + int_2;
	char_1 = char_1 * char_1;
}
void v_TimerGetTimeString( char parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short_1 = v_malloc(double_1);

	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_2;
	double_2 = double_1 * double_1;
	double_2 = double_1 + double_3;
	if(1)
	{
	}
	v_LeaveCritical();

	double_2 = double_2 + double_2;
	v_EnterCritical();

	v_String(float_1);

	short_2 = short_2 + short_2;
	v_StringFormat(short_1,long_1,long_1);

	short_1 = short_2 + short_2;
	short_1 = short_3 + short_2;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_2 * int_2;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	int_2 = int_3 * int_4;
	short_2 = short_2 + short_2;
	float_3 = float_3 * float_4;
	char_2 = char_1 + char_1;
}
void v_ScreenDeviceSetCursorMode( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
void v_ScreenDeviceCursorMove( unsigned int parameter_1,float parameter_2,char parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_1 = v_CharGeneratorGetCharWidth();

	char_2 = char_1 * char_1;
	float_1 = v_CharGeneratorGetCharHeight(int_1);

	int_2 = int_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 + long_2;
		short_1 = short_1;
	}
}
void v_ScreenDeviceSetStandoutMode( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	char_1 = char_2;
	double_3 = double_2 + double_2;
	float_1 = float_1 * float_2;
	double_4 = double_2 * double_4;
}
void v_ScreenDeviceInsertMode( long parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int_1 = int_1 * int_1;
}
void v_ScreenDeviceEraseChars( short parameter_1,short parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	v_ScreenDeviceEraseChar(float_1,short_1,float_1);

	char_1 = char_1 * char_1;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		short_1 = v_CharGeneratorGetCharWidth();

		float_3 = float_2 + float_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
}
void v_ScreenDeviceDeleteChars( short parameter_1,double parameter_2)
{
}
void v_ScreenDeviceDeleteLines( long parameter_1,unsigned int parameter_2)
{
}
void v_ScreenDeviceCursorUp( int parameter_1)
{
	float float_1 = 1;
	int int_3 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	float_1 = v_CharGeneratorGetCharHeight(int_3);

}
void v_ScreenDeviceInsertLines( double parameter_1,char parameter_2)
{
}
void v_ScreenDeviceReverseScroll( double parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		v_ScreenDeviceInsertLines(double_1,char_1);

		short_3 = short_1 * short_2;
	}
}
void v_ScreenDeviceCursorRight(int uni_para)
{
	double double_1 = 1;
	double_1 = double_1;
	char controller4vul_1538[3];
	fgets(controller4vul_1538 ,3 ,stdin);
	if( strcmp( controller4vul_1538, "Sj") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v_ScreenDeviceNewLine(double_1,uni_para);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
}
double v_CharGeneratorGetPixel( double parameter_1,char parameter_2,float parameter_3,int parameter_4)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_1;
	short_1 = short_2;
	float_1 = float_1 + float_2;
	return double_1;
}
void v_ScreenDeviceDisplayChar2( double parameter_1,char parameter_2,short parameter_3,double parameter_4,char parameter_5)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	float float_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float_1 = v_CharGeneratorGetCharHeight(int_1);

			short_1 = v_CharGeneratorGetCharWidth();

			short_1 = short_1 * short_1;
		}
	}
	v_ScreenDeviceSetPixel(float_1,unsigned_int_1,char_1,unsigned_int_2);

	double_1 = v_CharGeneratorGetPixel(double_2,char_2,float_2,int_1);

}
void v_ScreenDeviceDisplayChar( char parameter_1,char parameter_2)
{
	char char_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	if(1)
	{
		char char_2 = 1;
		double double_1 = 1;
		v_ScreenDeviceCursorRight(-1 );

		char_1 = char_1 + char_2;
		double_2 = double_1 * double_1;
	}
	v_ScreenDeviceDisplayChar2(double_2,char_1,short_1,double_2,char_1);

}
long v_memcpyblk(float parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_1542[2];
	fgets(controller4vul_1542 ,2 ,stdin);
	if( strcmp( controller4vul_1542, "s") < 0)
	{
		strcpy(vul_var, "CWE-761");
		char controller4vul_1543[2];
		fgets(controller4vul_1543 ,2 ,stdin);
		if( strcmp( controller4vul_1543, "2") > 0)
		{
			long long_1 = 1;
			if(uni_para == 447)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	int_2 = int_1 + int_1;
}
void v_ScreenDeviceScroll(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double_1 = double_2;
	char_3 = char_1 * char_2;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_1540[3];
	fgets(controller4vul_1540 ,3 ,stdin);
	if( strcmp( controller4vul_1540, "NJ") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_6 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_4 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char controller4vul_1541[2];
				fgets(controller4vul_1541 ,2 ,stdin);
				if( strcmp( controller4vul_1541, "j") < 0)
				{
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					long_1 = v_memcpyblk(float_1,int_3,uni_para);

					unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
				}
			}
			short_3 = short_1 + short_2;
			unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
			short_4 = short_4 * short_4;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_7 = unsigned_int_6 * unsigned_int_2;
		}
		long_1 = long_1;
	}
	long_1 = long_1;
}
void v_ScreenDeviceCursorDown(int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short_2 = short_1 * short_2;
	char controller4vul_1539[2];
	fgets(controller4vul_1539 ,2 ,stdin);
	if( strcmp( controller4vul_1539, "D") > 0)
	{
		float float_1 = 1;
		char char_1 = 1;
		v_ScreenDeviceScroll(uni_para);

		float_1 = float_1 * float_1;
		char_1 = char_1 * char_1;
	}
}
void v_ScreenDeviceCarriageReturn( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long_3 = long_1 + long_2;
}
void v_ScreenDeviceNewLine( double parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	v_ScreenDeviceCursorDown(uni_para);

	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 * int_1;
}
void v_ScreenDeviceTabulator( unsigned int parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short_1 = v_CharGeneratorGetCharWidth();

	float_1 = float_1;
	int_2 = int_1 + int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Ad") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		v_ScreenDeviceNewLine(double_1,-1 );

		long_3 = long_1 * long_2;
	}
}
void v_ScreenDeviceCursorLeft( long parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float_1 = v_CharGeneratorGetCharHeight(int_1);

			char_2 = char_1 * char_1;
			double_1 = double_2;
		}
	}
	short_3 = v_CharGeneratorGetCharWidth();

}
void v_ScreenDeviceWrite2( int parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	float float_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2;
	double_2 = double_1 + double_1;
	double_2 = double_3 + double_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		double_3 = double_3 + double_2;
	}
	char controller4vul_1536[2];
	fgets(controller4vul_1536 ,2 ,stdin);
	if( strcmp( controller4vul_1536, ">") > 0)
	{
		char controller4vul_1537[3];
		fgets(controller4vul_1537 ,3 ,stdin);
		if( strcmp( controller4vul_1537, "8W") < 0)
		{
			v_ScreenDeviceCursorRight(uni_para);

			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			float float_1 = 1;
			short_1 = short_2;
			float_1 = float_1 * float_2;
		}
	}
	int_1 = int_1;
	long_4 = long_1 + long_3;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
		double_4 = double_3 + double_1;
		int_1 = int_2 * int_3;
		int_4 = int_3 + int_2;
		float_3 = float_3 + float_2;
	}
	if(1)
	{
		float float_4 = 1;
		double double_5 = 1;
		float_3 = float_4;
		double_1 = double_4 + double_5;
		double_4 = double_3;
		double_5 = double_4 * double_3;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	}
}
int v_ScreenDeviceWrite( long parameter_1,unsigned int parameter_2,short parameter_3,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	long_3 = long_1 * long_2;
	int_3 = int_2 * int_3;
	float_2 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_1 + double_1;
	double_1 = double_2 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_3;
		char controller4vul_1535[3];
		fgets(controller4vul_1535 ,3 ,stdin);
		if( strcmp( controller4vul_1535, "FR") < 0)
		{
			v_ScreenDeviceWrite2(int_2,char_1,uni_para);

			int_3 = int_1;
		}
	}
	unsigned_int_1 = unsigned_int_4;
	double_3 = double_2 * double_4;
	return int_1;
}
long v_strlen( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_5 = 1;
	short_3 = short_1 + short_2;
	int_1 = int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_2 = float_1 * float_2;
	}
	short_3 = short_1 * short_3;
	char_3 = char_1 * char_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_2 * int_3;
		if(1)
		{
			char char_4 = 1;
			int_1 = int_2;
			char_2 = char_3 * char_4;
			if(1)
			{
				long long_4 = 1;
				float_1 = float_2 + float_1;
				long_4 = long_1 * long_2;
			}
			if(1)
			{
				long long_5 = 1;
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					double_1 = double_1 + double_2;
					int_4 = int_5;
				}
				if(1)
				{
					unsigned int unsigned_int_2 = 1;
					int int_6 = 1;
					unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
					unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
					unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
					int_4 = int_6 + int_2;
				}
				char_1 = char_3 * char_1;
				long_1 = long_2 + long_5;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long_3 = long_2;
	}
	int_5 = int_2 * int_5;
	return long_2;
}
void v_LoggerWrite2( int parameter_1,short parameter_2,int uni_para)
{
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int_1 = v_ScreenDeviceWrite(long_1,unsigned_int_1,short_1,uni_para);

	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
void v_LoggerWriteV( double parameter_1,float parameter_2,unsigned int parameter_3,long parameter_4,long parameter_5,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_1;
	long_1 = long_2;
	double_2 = double_1 + double_2;
	int_3 = int_2;
	double_4 = double_1 + double_3;
	char controller4vul_1534[3];
	fgets(controller4vul_1534 ,3 ,stdin);
	if( strcmp( controller4vul_1534, ":l") > 0)
	{
		v_LoggerWrite2(int_2,short_1,uni_para);

		double_3 = double_3;
	}
	short_2 = short_2 + short_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		short short_4 = 1;
		short_2 = short_2 * short_4;
	}
}
void v_LoggerWrite( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,float parameter_4,char parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 * short_1;
	double_3 = double_1 + double_2;
	long_2 = long_1 + long_1;
	short_3 = short_1;
	v_LoggerWriteV(double_3,float_1,unsigned_int_1,long_2,long_1,-1 );

}
unsigned int v_LoggerInitialize( float parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_LoggerWrite(char_1,unsigned_int_1,unsigned_int_1,float_1,char_2);

	long_2 = long_1 * long_1;
	return unsigned_int_1;
}
void v_Logger( double parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_1 = int_1 * int_1;
	short_2 = short_1 + short_1;
	double_1 = double_1 * double_2;
	double_3 = double_2 * double_1;
}
void v_Timer( short parameter_1)
{
	if(1)
	{
	}
}
void v_InterruptSystem( int parameter_1)
{
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float_1 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		char char_1 = 1;
		double_1 = double_1 + double_2;
		char_1 = char_1 + char_1;
	}
	double_3 = double_2 + double_3;
}
void v_DataAbortStub()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_1;
	int_3 = int_1 + int_2;
	char_1 = char_1 + char_2;
	double_1 = double_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	short_3 = short_1 * short_2;
	short_1 = short_4 * short_3;
	long_3 = long_1 + long_2;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2 + float_1;
	}
	char_3 = char_3 * char_3;
	if(1)
	{
		double_3 = double_1 + double_3;
	}
	if(1)
	{
		short short_5 = 1;
		short short_6 = 1;
		short_6 = short_3 * short_5;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		int_1 = int_2 + int_2;
	}
	double_3 = double_2 + double_4;
	if(1)
	{
		long_3 = long_1;
	}
	char_4 = char_4;
}
void v_PrefetchAbortStub()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int_2 = int_1 + int_2;
	int_3 = int_2 * int_2;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	int_1 = int_3 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_3;
		if(1)
		{
			int int_4 = 1;
			int_3 = int_1 * int_4;
			if(1)
			{
				short short_3 = 1;
				short_1 = short_3 * short_4;
				short_2 = short_5;
			}
			unsigned_int_3 = unsigned_int_3;
		}
	}
	if(1)
	{
		short short_6 = 1;
		short_4 = short_6 * short_5;
	}
	int_2 = int_2 * int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				int int_5 = 1;
				double_1 = double_1 + double_2;
				int_5 = int_3 * int_1;
			}
			float_1 = float_1;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
	}
}
void v_UndefinedInstructionStub()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_5 = 1;
	float float_4 = 1;
	int_1 = int_2;
	int_3 = int_1 + int_3;
	short_1 = short_1 * short_2;
	float_1 = float_1 * float_1;
	if(1)
	{
		int_4 = int_1;
	}
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 * double_1;
	short_2 = short_3 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_4 = short_1 * short_2;
	short_5 = short_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_2;
	double_2 = double_2 + double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	long_2 = long_1 * long_2;
	float_1 = float_2;
	double_1 = double_2;
	long_1 = long_2 + long_3;
	long_2 = long_1 + long_4;
	long_5 = long_1 * long_3;
	short_6 = short_4 + short_1;
	if(1)
	{
		short_6 = short_6;
		short_4 = short_1 * short_5;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3;
		double_5 = double_2 + double_4;
		double_2 = double_3;
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			char_4 = char_3 + char_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_3;
				unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
			}
		}
		if(1)
		{
			double double_7 = 1;
			long_3 = long_3 + long_4;
			short_4 = short_1 * short_6;
			double_1 = double_6 * double_6;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				long long_6 = 1;
				float float_3 = 1;
				int_2 = int_4 + int_3;
				long_6 = long_3;
				float_1 = float_2 + float_3;
				int_5 = int_2 * int_4;
				float_3 = float_1 * float_4;
			}
			double_7 = double_6;
		}
		if(1)
		{
			double_6 = double_5 * double_6;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
			long_4 = long_1 + long_5;
			int_2 = int_5;
			int_1 = int_3;
		}
	}
	int_1 = int_3 + int_5;
	float_4 = float_4 * float_1;
	double_6 = double_6 + double_5;
	int_2 = int_5 * int_3;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double double_8 = 1;
		double_8 = double_1 + double_4;
	}
	int_3 = int_1 * int_2;
}
void v_ExceptionHandler2( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	v_PrefetchAbortStub();

	short_3 = short_1 * short_2;
	long_1 = long_1 + long_2;
	int_1 = int_1;
	long_2 = long_2 * long_1;
	v_UndefinedInstructionStub();

	int_2 = int_1 * int_1;
	long_1 = long_3 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 * char_1;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_1 + double_2;
	v_DataAbortStub();

	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	int_3 = int_3 + int_3;
	v_CleanDataCache();

}
void v__CharGenerator( float parameter_1)
{
}
void v_free()
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1 * short_1;
	float_2 = float_1 * float_1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			float float_3 = 1;
			double_1 = double_1 * double_2;
			short_2 = short_2 * short_2;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			short_2 = short_2 * short_2;
			long_2 = long_1 + long_2;
			float_2 = float_1 + float_3;
		}
	}
}
void v__BcmFrameBuffer( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	v_free();

	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	v__BcmMailBox(double_2);

}
void v__ScreenDevice( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_2 = char_1 + char_1;
	v_free();

	int_2 = int_1 + int_1;
	v__BcmFrameBuffer(long_1);

	long_1 = long_2 * long_3;
	int_4 = int_1 + int_3;
	v__CharGenerator(float_1);

	double_1 = double_1 * double_2;
}
unsigned int v_ScreenDeviceGetPixel( float parameter_1,char parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	return unsigned_int_1;
}
short v_CharGeneratorGetUnderline( int parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	int_1 = int_1;
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	return short_1;
}
void v_ScreenDeviceInvertCursor( unsigned int parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				float_1 = float_1 * float_1;
			}
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				short_1 = v_CharGeneratorGetUnderline(int_1);

				short_1 = v_CharGeneratorGetCharWidth();

				unsigned_int_1 = v_ScreenDeviceGetPixel(float_1,char_1,float_2);

				v_ScreenDeviceSetPixel(float_2,unsigned_int_1,char_2,unsigned_int_2);

				long_2 = long_1 + long_2;
			}
		}
	}
	float_1 = v_CharGeneratorGetCharHeight(int_2);

}
void v_ScreenDeviceSetPixel( float parameter_1,unsigned int parameter_2,char parameter_3,unsigned int parameter_4)
{
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
}
void v_ScreenDeviceEraseChar( float parameter_1,short parameter_2,float parameter_3)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_2 = 1;
			char_1 = char_1 + char_2;
		}
	}
	float_1 = v_CharGeneratorGetCharHeight(int_1);

	short_1 = v_CharGeneratorGetCharWidth();

	v_ScreenDeviceSetPixel(float_2,unsigned_int_1,char_1,unsigned_int_2);

}
short v_CharGeneratorGetCharWidth()
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_2;
	return short_1;
}
void v_ScreenDeviceClearLineEnd( int parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = v_CharGeneratorGetCharWidth();

		v_ScreenDeviceEraseChar(float_1,short_2,float_2);

		short_2 = short_2 + short_1;
	}
}
void v_ScreenDeviceClearDisplayEnd( short parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_3 = 1;
	float_1 = float_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2;
	float_2 = v_CharGeneratorGetCharHeight(int_3);

	short_1 = short_1 + short_2;
	v_ScreenDeviceClearLineEnd(int_2);

	float_1 = float_2 * float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "h") > 0)
	{
		long long_2 = 1;
		float float_3 = 1;
		long_1 = long_1 + long_2;
		float_2 = float_3 * float_2;
	}
	long_1 = long_1 + long_3;
	int_2 = int_3 + int_2;
}
void v_ScreenDeviceCursorHome( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
}
float v_CharGeneratorGetCharHeight( int parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	long_1 = long_1 * long_1;
	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		double_1 = double_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			short_1 = short_1;
		}
		float_2 = float_1 + float_2;
	}
	int_3 = int_4;
	float_4 = float_2 * float_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_3 = 1;
		long long_2 = 1;
		double_2 = double_3 + double_1;
		if(1)
		{
			double_3 = double_2 * double_1;
		}
		if(1)
		{
			int int_5 = 1;
			int_5 = int_2 * int_3;
		}
		long_2 = long_2 + long_1;
	}
	short_3 = short_1 * short_2;
	double_4 = double_1 + double_1;
	return float_2;
}
unsigned int v_BcmFrameBufferGetPitch( long parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_1;
	return unsigned_int_1;
}
void v_BcmFrameBufferGetHeight( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_3 = double_1 * double_2;
}
void v_BcmFrameBufferGetWidth( double parameter_1)
{
	float float_1 = 1;
	float_1 = float_1;
}
short v_BcmFrameBufferGetSize()
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_1 = double_2;
	return short_1;
}
void v_BcmFrameBufferGetBuffer( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 + char_2;
}
char v_BcmFrameBufferGetDepth( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double_3 = double_1 + double_2;
	return char_1;
}
short v_BcmFrameBufferInitialize( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	v_InvalidateDataCache();

	double_2 = double_1 + double_1;
	double_1 = double_1;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_3 = v_BcmMailBoxWriteRead(unsigned_int_1,short_1);

	int_2 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_2;
	v_CleanDataCache();

}
void v_BcmFrameBufferSetPalette( double parameter_1,unsigned int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
}
long v_memset(int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	short_2 = short_1 * short_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
	return long_1;
}
void v_BcmFrameBuffer( char parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	short short_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float_1 = float_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int_1 = int_2 + int_2;
		v_BcmPropertyTags(float_2);

		char_1 = char_1 * char_2;
		long_1 = v_memset(int_2,int_1);

		float_2 = float_1 + float_3;
		if(1)
		{
			float float_4 = 1;
			int_2 = int_2;
			v_BcmMailBox();

			float_1 = float_4 * float_4;
			if(1)
			{
				int_2 = int_3 * int_4;
				double_1 = double_1 * double_1;
			}
		}
		if(1)
		{
			float float_5 = 1;
			float_5 = float_2 * float_3;
			double_3 = double_1 + double_2;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double_1 = double_2 + double_3;
		v_BcmPropertyTagsGetTag(long_1,int_2,char_3,float_3);

		v__BcmPropertyTags(double_4);

		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		int_5 = int_3 + int_5;
	}
	double_1 = double_3;
	int_4 = int_5;
	int_2 = int_4;
	short_2 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
	double_3 = double_5;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	short_3 = v_malloc(double_1);

	int_3 = int_4 * int_3;
	double_7 = double_5 + double_6;
	int_5 = int_1;
}
long v_ScreenDeviceInitialize( double parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_6 = 1;
	float_1 = v_CharGeneratorGetCharHeight(int_1);

	char_1 = char_1 * char_1;
	float_1 = float_1 * float_2;
	if(1)
	{
		float_3 = float_2 * float_1;
	}
	char_1 = v_BcmFrameBufferGetDepth(unsigned_int_1);

	char_1 = char_1 * char_1;
	v_BcmFrameBufferGetBuffer(char_2);

	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	long_3 = long_1 + long_2;
	int_1 = int_1 * int_1;
	short_1 = v_BcmFrameBufferGetSize();

	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	long_3 = long_1;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "1F") > 0)
	{
	}
	short_1 = v_malloc(double_1);

	short_2 = v_BcmFrameBufferInitialize(float_3);

	unsigned_int_4 = v_BcmFrameBufferGetPitch(long_1);

	long_4 = long_3 * long_4;
	char_2 = char_2 + char_3;
	v_BcmFrameBufferGetWidth(double_2);

	v_ScreenDeviceCursorHome(double_3);

	double_2 = double_3 + double_3;
	v_BcmFrameBufferSetPalette(double_4,unsigned_int_5,double_5);

	v_ScreenDeviceClearDisplayEnd(short_2);

	v_ScreenDeviceInvertCursor(unsigned_int_6);

	long_5 = long_4;
	unsigned_int_6 = unsigned_int_7 + unsigned_int_6;
	return long_6;
	v_BcmFrameBuffer(char_3);

	v_BcmFrameBufferGetHeight(unsigned_int_5);

}
void v_CharGenerator( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_1 = long_2;
	if(1)
	{
	}
	if(1)
	{
	}
}
void v_ScreenDevice( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_2 = 1;
	int_1 = int_2;
	double_2 = double_1 + double_1;
	char_1 = char_2;
	int_3 = int_1 * int_2;
	v_CharGenerator(float_1);

	char_2 = char_3 + char_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	char_1 = char_5 * char_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	int_1 = int_4 * int_4;
	float_1 = float_2 * float_1;
}
void v__BcmMailBox( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_1;
}
void v__BcmPropertyTags( double parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	v__BcmMailBox(double_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_1;
}
int v_PageTableGetBaseAddress( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short_2 = short_1 * short_1;
	return int_1;
}
void v_MemorySystemEnableMMU( double parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	int_1 = v_PageTableGetBaseAddress(float_1);

	v_InvalidateDataCache();

}
void v_PageTable( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_2;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_5 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		float_1 = float_1 * float_2;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		double_2 = double_1;
		long_2 = long_1 * long_1;
		char_2 = char_1 + char_2;
		short_2 = short_1 + short_1;
		char_4 = char_2 + char_3;
		short_3 = short_2;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		v_CleanDataCache();

		unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
		float_4 = float_2 * float_3;
		float_5 = float_1 * float_4;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
		char_5 = char_3;
		if(1)
		{
			double double_3 = 1;
			double_2 = double_3 + double_1;
		}
	}
	double_4 = double_1 * double_1;
	int_3 = int_1 * int_2;
}
float v_palloc()
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	char char_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_5 = 1;
	short short_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_7 = 1;
	double_1 = double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "E") > 0)
	{
		long_1 = long_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_1;
	double_2 = double_2 * double_2;
	int_2 = int_1 * int_2;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	int_3 = int_3 + int_1;
	short_1 = short_1 * short_1;
	int_2 = int_2 * int_1;
	short_1 = short_1 + short_1;
	short_4 = short_2 + short_3;
	int_3 = int_2 + int_3;
	double_3 = double_1 + double_2;
	short_2 = short_1 * short_1;
	char_1 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	double_1 = double_2;
	long_2 = long_3;
	int_1 = int_4;
	double_4 = double_4;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
	char_3 = char_2;
	unsigned_int_8 = unsigned_int_6 + unsigned_int_7;
	int_3 = int_5;
	double_3 = double_4;
	double_4 = double_2 * double_2;
	char_2 = char_2;
	double_2 = double_1 + double_2;
	short_5 = short_2 * short_4;
	short_3 = short_1;
	double_1 = double_5;
	double_5 = double_2 + double_5;
	char_2 = char_1 * char_2;
	double_2 = double_6 * double_1;
	long_1 = long_2 * long_2;
	float_3 = float_2 + float_1;
	char_1 = char_1;
	double_5 = double_7 * double_4;
	float_2 = float_1 * float_1;
	return float_2;
}
void v_PageTable2( short parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	double double_5 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_4 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_8 = 1;
	long long_5 = 1;
	double double_9 = 1;
	long long_6 = 1;
	char_2 = char_1 * char_1;
	short_3 = short_1 + short_2;
	double_1 = double_1 * double_2;
	double_1 = double_3 + double_4;
	float_1 = float_1;
	double_5 = double_2 * double_4;
	short_1 = short_1 + short_1;
	int_1 = int_1;
	long_3 = long_1 * long_2;
	float_2 = float_2 + float_2;
	float_2 = float_2;
	int_1 = int_2 + int_2;
	int_3 = int_2;
	short_3 = short_4 * short_5;
	long_3 = long_4 + long_2;
	char_3 = char_3;
	float_4 = float_3 * float_3;
	float_5 = v_palloc();

	char_1 = char_3 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	long_3 = long_1;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_4;
	int_2 = int_4 + int_2;
	char_5 = char_3 + char_4;
	double_1 = double_2 + double_4;
	short_2 = short_5;
	double_6 = double_1 + double_4;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_3 * int_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_6;
	double_7 = double_2 + double_3;
	long_1 = long_4 + long_4;
	unsigned_int_7 = unsigned_int_3 + unsigned_int_6;
	double_5 = double_2 + double_8;
	int_3 = int_2 + int_1;
	long_5 = long_5 + long_4;
	double_8 = double_4 + double_9;
	v_CleanDataCache();

	int_2 = int_4 + int_1;
	short_4 = short_5 + short_2;
	long_5 = long_6 * long_2;
}
void v_LeaveCritical()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long_2 = long_1 + long_1;
	int_1 = int_1 + int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "S") > 0)
	{
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
		}
	}
}
void v_EnterCritical()
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_2 = float_1 * float_2;
	double_3 = double_1 + double_2;
	float_2 = float_2 * float_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "+") > 0)
	{
		float_1 = float_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
}
short v_malloc( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	double_1 = double_2;
	double_3 = double_4;
	float_1 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_1 = 1;
			char char_3 = 1;
			char char_4 = 1;
			double_3 = double_1 + double_1;
			if(1)
			{
				char char_2 = 1;
				char_1 = char_2;
			}
			v_EnterCritical();

			char_1 = char_3 + char_4;
		}
	}
	int_2 = int_1 + int_1;
	if(1)
	{
		double_6 = double_2 * double_5;
		v_LeaveCritical();

		long_2 = long_1 + long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		float_1 = float_2 * float_1;
		if(1)
		{
			short_1 = short_1 * short_1;
		}
		long_1 = long_2 + long_2;
		double_6 = double_5 + double_4;
	}
	float_3 = float_3 * float_1;
	int_4 = int_3 + int_2;
	int_2 = int_1 + int_1;
	float_4 = float_4 + float_2;
	return short_1;
}
void v_mem_init( long parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double_2 = double_2 + double_3;
		double_1 = double_4;
		unsigned_int_3 = unsigned_int_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
	}
}
void v_InvalidateDataCache()
{
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double_1 = double_1;
			unsigned_int_1 = unsigned_int_2;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_1 = 1;
			float_3 = float_1 * float_2;
			int_1 = int_1 + int_1;
		}
	}
}
short v_BcmMailBoxRead( unsigned int parameter_1)
{
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short_2 = short_3;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				if(1)
				{
					float float_1 = 1;
					float float_2 = 1;
					float_2 = float_1 + float_2;
				}
			}
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		}
	}
	unsigned_int_1 = v_read32(unsigned_int_4);

	int_1 = int_3;
	return short_3;
}
void v_write32( short parameter_1,double parameter_2)
{
	short short_1 = 1;
	short_1 = short_1 + short_1;
}
void v_BcmMailBoxWrite( short parameter_1,short parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_4;
	char_2 = char_1 + char_2;
	double_2 = double_1 * double_1;
	unsigned_int_2 = v_read32(unsigned_int_1);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
	unsigned_int_3 = unsigned_int_6 + unsigned_int_7;
	char_2 = char_2;
	v_write32(short_1,double_2);

	short_2 = short_1;
	long_1 = long_1 + long_2;
	double_1 = double_2 + double_3;
	unsigned_int_7 = unsigned_int_6 * unsigned_int_7;
	double_5 = double_1 + double_4;
}
void v_TimerSimpleusDelay( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = v_read32(unsigned_int_1);

	long_1 = long_1 + long_2;
	char_1 = char_1 + char_1;
	int_1 = int_1 * int_2;
}
void v_TimerSimpleMsDelay( short parameter_1)
{
	double double_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	v_TimerSimpleusDelay(double_1);

}
unsigned int v_read32( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void v_BcmMailBoxFlush( char parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	v_TimerSimpleMsDelay(short_1);

	int_1 = int_1 + int_1;
	unsigned_int_1 = v_read32(unsigned_int_1);

}
char v_BcmMailBoxWriteRead( unsigned int parameter_1,short parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	short_1 = v_BcmMailBoxRead(unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_2;
	v_BcmMailBoxFlush(char_1);

	double_1 = double_1;
	short_2 = short_2 * short_1;
	v_BcmMailBoxWrite(short_2,short_2);

	double_2 = double_1;
	unsigned_int_4 = unsigned_int_3;
	return char_2;
}
void v_CleanDataCache()
{
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			short_1 = short_1 + short_1;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			long long_1 = 1;
			long long_2 = 1;
			short short_2 = 1;
			short short_3 = 1;
			long_2 = long_1 * long_1;
			short_2 = short_2 * short_3;
		}
	}
}
long v_memcpy(float parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char_3 = char_1 * char_2;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return long_1;
}
void v_BcmPropertyTagsGetTag( long parameter_1,int parameter_2,char parameter_4,float parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_2;
	long_1 = v_memcpy(float_1,long_1);

	v_CleanDataCache();

	float_2 = float_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	char_1 = v_BcmMailBoxWriteRead(unsigned_int_4,short_1);

	v_InvalidateDataCache();

}
void v_BcmMailBox()
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_2 = int_1 + int_2;
	char_1 = char_2;
}
void v_BcmPropertyTags( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_1 = long_1;
	long_1 = long_2 + long_1;
	v_BcmMailBox();

}
void v_MemorySystem( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_5 = 1;
	char char_6 = 1;
	float float_2 = 1;
	char char_7 = 1;
	double_1 = double_2;
	v_MemorySystemEnableMMU(double_3);

	short_3 = short_1 + short_2;
	v_PageTable2(short_3,unsigned_int_1);

	v_PageTable(char_1);

	double_3 = double_3 + double_4;
	v_BcmPropertyTagsGetTag(long_1,int_1,char_2,float_1);

	double_2 = double_2 * double_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	v__BcmPropertyTags(double_4);

	short_1 = short_2 * short_2;
	char_4 = char_2 + char_3;
	v_mem_init(long_2,unsigned_int_3);

	int_1 = int_2 + int_2;
	if(1)
	{
		char char_5 = 1;
		short_1 = v_malloc(double_5);

		char_5 = char_2 + char_5;
		int_1 = int_1 * int_2;
	}
	double_1 = double_5 * double_1;
	char_2 = char_6 * char_1;
	float_2 = float_1 + float_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "0") > 0)
	{
		long long_3 = 1;
		long long_4 = 1;
		double double_6 = 1;
		short short_4 = 1;
		short short_5 = 1;
		double_5 = double_1 * double_4;
		double_2 = double_3 * double_1;
		long_1 = long_1 + long_3;
		long_1 = long_4 * long_3;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		v_BcmPropertyTags(float_1);

		double_6 = double_2 + double_3;
		short_2 = short_4 + short_5;
	}
	char_4 = char_3 * char_7;
}
int v_USPiEnvInitialize()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	long long_5 = 1;
	v_MemorySystem(int_1);

	v__ScreenDevice(double_1);

	double_2 = v_TimerInitialize();

	v__InterruptSystem(float_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v_ScreenDevice(short_1);

	v_Timer(short_2);

	unsigned_int_2 = v_LoggerInitialize(float_2,unsigned_int_2);

	double_1 = double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = v_InterruptSystemInitialize(char_1);

		v__Logger(float_1);

		unsigned_int_1 = unsigned_int_2;
		v_ExceptionHandler2(unsigned_int_2);

		v_Logger(double_1);

		long_1 = long_1 * long_2;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_4 = 1;
			long_3 = v_ScreenDeviceInitialize(double_4);

			v_InterruptSystem(int_1);

			v__ExceptionHandler(char_2);

			long_2 = long_4 + long_1;
		}
	}
	return int_1;
	v__Timer(long_5);

}
int main()
{
	int uni_para =447;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	char controller4vul_1509[3];
	fgets(controller4vul_1509 ,3 ,stdin);
	if( strcmp( controller4vul_1509, "BN") < 0)
	{
		int_1 = v_USPiInitialize(uni_para);

	}
	if(1)
	{
		long_3 = long_1 * long_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "G") > 0)
	{
		long long_4 = 1;
		long_4 = long_2 + long_1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	short_1 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = long_1 * long_3;
	}
	return int_2;
}

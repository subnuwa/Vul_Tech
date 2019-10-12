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

void v_ScreenDeviceRotor( long parameter_1,long parameter_2,unsigned int parameter_3);
unsigned int v_USPiEnvGetScreen();
double v_KeyPressedHandler( char parameter_1);
void v_USBKeyboardDeviceRegisterKeyPressedHandler( short parameter_1,float parameter_2);
void v_USPiKeyboardRegisterKeyPressedHandler();
int v_USPiKeyboardAvailable();
void v_USPiEnvClose();
int v_strcmp( long parameter_1,int parameter_2);
short v_DeviceNameServiceGetDevice( short parameter_1,char parameter_2,double parameter_3);
void v__DeviceNameService( long parameter_1);
void v__DWHCIRootPort();
void v__DWHCIDevice( unsigned int parameter_1);
void v_DWHCIDeviceDisableRootPort( long parameter_1);
float v_DWHCIDeviceOvercurrentDetected();
void v_USBMIDIDeviceCompletionRoutine( char parameter_1);
short v_USBMIDIDeviceStartRequest();
short v_USBMIDIDeviceConfigure( short parameter_1,int uni_para);
void v_USBMIDIDevice( char parameter_1,int uni_para);
void v_USBGamePadDeviceCompletionRoutine( short parameter_1);
int v_USBGamePadDeviceStartRequest( long parameter_1);
void v_USBGamePadDevicePS3Configure( double parameter_1);
char v_BitGetSigned(double parameter_2,short parameter_3);
short v_BitGetUnsigned(char parameter_2,long parameter_3);
char v_USBGamePadDeviceDecodeReport( double parameter_1);
long v_USBGamePadDeviceConfigure();
void v_USBGamePadDevice( long parameter_1);
long v_LAN7800DevicePHYWrite( double parameter_1,unsigned int parameter_2,float parameter_3);
float v_LAN7800DevicePHYRead( int parameter_1,double parameter_2,unsigned int parameter_3);
void v_LAN7800DeviceInitPHY( double parameter_1);
double v_LAN7800DeviceInitMACAddress( char parameter_1);
long v_LAN7800DeviceWaitReg( char parameter_1,long parameter_2,unsigned int parameter_3,short parameter_4);
int v_LAN7800DeviceWriteReg( char parameter_1,double parameter_2,char parameter_3);
unsigned int v_LAN7800DeviceReadWriteReg( long parameter_1,double parameter_2,double parameter_3,double parameter_4);
void v_LAN7800DeviceReadReg( double parameter_1,long parameter_2,int parameter_3);
void v_LAN7800DeviceConfigure( long parameter_1);
void v_LAN7800Device( int parameter_1);
void v_SMSC951xDeviceWriteReg( double parameter_1,long parameter_2,char parameter_3);
void v_MACAddressCopyTo( long parameter_1,unsigned int parameter_2);
void v_MACAddressFormat( short parameter_1,short parameter_2);
void v_MACAddressSet( double parameter_1,unsigned int parameter_2);
int v_GetMACAddress( double parameter_1);
void v_MACAddress( int parameter_1);
short v_SMSC951xDeviceConfigure( int parameter_1);
void v_SMSC951xDevice( short parameter_1);
int v_uspi_char2int( char parameter_1);
void v_USBMouseDeviceCompletionRoutine( long parameter_1);
int v_USBMouseDeviceStartRequest( float parameter_1);
short v_USBMouseDeviceConfigure( int parameter_1);
void v_USBMouseDevice( short parameter_1);
void v_KeyMap( float parameter_1);
char v_DWHCIDeviceSubmitAsyncRequest( char parameter_1,double parameter_2);
void v_TimerCancelKernelTimer( int parameter_1,int parameter_2);
void v_CancelKernelTimer( short parameter_1);
short v_KeyMapGetString( float parameter_1,unsigned int parameter_2,short parameter_3,char parameter_4);
unsigned int v_KeyMapTranslate( double parameter_1,int parameter_2,char parameter_3);
void v_USBKeyboardDeviceGenerateKeyEvent( double parameter_1,char parameter_2);
double v_USBKeyboardDeviceGetKeyCode( float parameter_1);
char v_USBKeyboardDeviceGetModifiers( float parameter_1);
void v_USBKeyboardDeviceCompletionRoutine( long parameter_1);
int v_USBKeyboardDeviceStartRequest( float parameter_1);
char v_USBKeyboardDeviceConfigure();
void v_USBKeyboardDevice();
short v_DeviceNameServiceGet();
void v_strcpy( char parameter_1,long parameter_2);
void v_DeviceNameServiceAddDevice( unsigned int parameter_1,short parameter_2,char parameter_4);
float v_uspi_le2be32( double parameter_1);
int v_DWHCIDeviceTransfer( unsigned int parameter_1,float parameter_2,float parameter_4);
int v_USBBulkOnlyMassStorageDeviceCommand( short parameter_1,double parameter_3,char parameter_5,short parameter_6);
void v_USBEndpoint2( char parameter_1,short parameter_2,short parameter_3);
float v_USBBulkOnlyMassStorageDeviceConfigure( unsigned int parameter_1);
void v_USBBulkOnlyMassStorageDevice( unsigned int parameter_1);
float v_USBStandardHubEnumeratePorts( double parameter_1);
int v_USBConfigurationParserGetDescriptor( float parameter_1,char parameter_2);
char v_USBDeviceGetDescriptor( int parameter_1,unsigned int parameter_2);
int v_USBDeviceGetDeviceDescriptor( unsigned int parameter_1);
void v_USBStandardHubConfigure( float parameter_1);
void v_USBEndpointCopy( short parameter_1,long parameter_2,long parameter_3);
void v_USBStringCopy( short parameter_1,double parameter_2);
void v_USBDeviceCopy( float parameter_1,int parameter_2);
void v_USBStandardHub( unsigned int parameter_1);
long v_GetDevice( float parameter_1,double parameter_2,int uni_para);
int v_USBDeviceFactoryGetDevice( long parameter_1,int uni_para);
void v_StringAppend( long parameter_1,unsigned int parameter_2);
char v_StringGetLength();
int v_StringCompare( long parameter_1,char parameter_2);
char v_StringSet( int parameter_1,char parameter_2);
void v_USBDeviceGetName( unsigned int parameter_1,int parameter_2);
int v_USBStandardHubGetDeviceNames( unsigned int parameter_1);
void v__USBString( char parameter_1);
void v__USBEndpoint( short parameter_1);
void v__USBConfigurationParser( char parameter_1);
void v__USBDevice( int parameter_1);
void v_debug_hexdump( unsigned int parameter_1,unsigned int parameter_2,long parameter_3);
void v_DebugHexdump( long parameter_1,float parameter_2,short parameter_3);
void v_USBConfigurationParserError( unsigned int parameter_1,unsigned int parameter_2);
void v_USBDeviceConfigurationError( long parameter_1,char parameter_2);
short v_USBConfigurationParserIsValid( unsigned int parameter_1);
void v_USBConfigurationParser( unsigned int parameter_1);
void v_String2( short parameter_1,int parameter_2);
int v_USBStringGetFromDescriptor( short parameter_1,float parameter_2,float parameter_3);
float v_USBDeviceGetEndpoint0( int parameter_1);
short v_USBDeviceGetHost( float parameter_1);
long v_USBStringGetLanguageID( unsigned int parameter_1);
void v_USBDeviceSetAddress( unsigned int parameter_1,int parameter_2);
void v_DWHCIDeviceSetAddress( long parameter_1,double parameter_2,unsigned int parameter_3);
void v_USBEndpointSetMaxPacketSize( short parameter_1,float parameter_2);
int v_DWHCIDeviceGetDescriptor( long parameter_1,unsigned int parameter_2,char parameter_3,float parameter_4,int parameter_6,char parameter_7);
unsigned int v_USBDeviceInitialize( long parameter_1);
void v_USBString( double parameter_1);
void v_USBEndpoint( unsigned int parameter_1);
void v__USBRequest();
unsigned int v_USBRequestGetResultLength( short parameter_1);
unsigned int v_USBEndpointIsDirectionIn( int parameter_1);
int v_USBRequestGetStatus( double parameter_1);
void v_DWHCIDeviceEnableChannelInterrupt( unsigned int parameter_1,double parameter_2);
unsigned int v_DWHCIFrameSchedulerNoSplitIsOddFrame( int parameter_1);
void v_DWHCIFrameSchedulerNoSplitWaitForFrame( float parameter_1);
void v_DWHCIFrameSchedulerNoSplitTransactionComplete( long parameter_1,int parameter_2);
void v_DWHCIFrameSchedulerNoSplitCompleteSplit();
void v_DWHCIFrameSchedulerNoSplitStartSplit();
void v__DWHCIFrameSchedulerNoSplit( char parameter_1);
void v_DWHCIFrameSchedulerNoSplit( short parameter_1);
char v_DWHCIFrameSchedulerNonPeriodicIsOddFrame( unsigned int parameter_1);
void v_DWHCIFrameSchedulerNonPeriodicWaitForFrame( long parameter_1);
void v_DWHCIFrameSchedulerNonPeriodicTransactionComplete( char parameter_1,int parameter_2,int uni_para);
short v_DWHCIFrameSchedulerNonPeriodicCompleteSplit( char parameter_1);
void v_DWHCIFrameSchedulerNonPeriodicStartSplit( char parameter_1);
void v__DWHCIFrameSchedulerNonPeriodic( int parameter_1);
void v_DWHCIFrameSchedulerNonPeriodic( char parameter_1,int uni_para);
float v_DWHCIFrameSchedulerPeriodicIsOddFrame();
void v_DWHCIFrameSchedulerPeriodicWaitForFrame( unsigned int parameter_1);
void v_DWHCIFrameSchedulerPeriodicTransactionComplete( long parameter_1,unsigned int parameter_2);
float v_DWHCIFrameSchedulerPeriodicCompleteSplit( float parameter_1);
void v_DWHCIFrameSchedulerPeriodicStartSplit( char parameter_1);
void v__DWHCIFrameSchedulerPeriodic();
void v_DWHCIFrameSchedulerPeriodic( float parameter_1);
short v_USBRequestGetBuffer( int parameter_1);
char v_USBEndpointGetMaxPacketSize( long parameter_1);
char v_USBDeviceGetSpeed( long parameter_1);
void v_USBEndpointGetDevice( char parameter_1);
void v_DWHCITransferStageData(int uni_para);
char v_DWHCIDeviceAllocateChannel( float parameter_1);
int v_DWHCIDeviceTransferStageAsync( char parameter_1,int parameter_2,float parameter_3,short parameter_4,int uni_para);
void v_DWHCIDeviceCompletionRoutine( unsigned int parameter_1);
void v_USBRequestSetCompletionRoutine( float parameter_1,short parameter_2);
char v_DWHCIDeviceTransferStage( unsigned int parameter_1,float parameter_2,double parameter_3,char parameter_4,int uni_para);
void v_USBRequestGetBufLen( double parameter_1);
double v_USBRequestGetSetupData( int parameter_1);
void v_DWHCIDeviceSubmitBlockingRequest( double parameter_1,int parameter_2,int uni_para);
void v_USBRequest( unsigned int parameter_1);
int v_DWHCIDeviceControlMessage( float parameter_1,double parameter_2,double parameter_3,float parameter_4,unsigned int parameter_5,double parameter_6,double parameter_8,int uni_para);
int v_DWHCIDeviceSetConfiguration( short parameter_1,int parameter_2,char parameter_3,int uni_para);
void v_USBDeviceConfigure(int uni_para);
void v_USBDevice( unsigned int parameter_1);
long v_DWHCIDeviceGetPortSpeed( short parameter_1);
float v_DWHCIRootPortInitialize( double parameter_1,int uni_para);
short v_DWHCIDeviceEnableRootPort( unsigned int parameter_1);
void v_DWHCIDeviceEnableHostInterrupts( int parameter_1);
void v_DWHCIDeviceFlushRxFIFO( double parameter_1);
void v_TimerusDelay( long parameter_1,char parameter_2);
void v_usDelay( long parameter_1);
void v_DWHCIDeviceFlushTxFIFO( short parameter_1,int parameter_2);
int v_DWHCIDeviceInitHost( short parameter_1);
void v_DWHCIDeviceEnableGlobalInterrupts( unsigned int parameter_1);
void v_DWHCIDeviceEnableCommonInterrupts();
void v_MsDelay( long parameter_1);
unsigned int v_DWHCIDeviceWaitForBit( short parameter_1,int parameter_2,int parameter_3,short parameter_4,long parameter_5);
int v_DWHCIDeviceReset( long parameter_1);
float v_DWHCIDeviceInitCore( char parameter_1);
double v_DWHCITransferStageDataBeginSplitCycle( double parameter_1);
void v_DWHCITransferStageDataIsStageComplete( unsigned int parameter_1);
void v_USBRequestCallCompletionRoutine( short parameter_1);
void v_DWHCIDeviceFreeChannel( long parameter_1,short parameter_2);
void v__DWHCITransferStageData();
void v_uspi_LeaveCritical();
void v_uspi_EnterCritical();
void v_DWHCIDeviceDisableChannelInterrupt( int parameter_1,unsigned int parameter_2);
short v_DWHCITransferStageDataGetResultLen( float parameter_1);
void v_USBRequestSetResultLen( unsigned int parameter_1,short parameter_2);
double v_DWHCITransferStageDataIsStatusStage();
void v_DWHCITransferStageDataSetSplitComplete( short parameter_1,short parameter_2);
void v_DWHCIDeviceTimerHandler( long parameter_1);
unsigned int v_TimerGet();
unsigned int v_TimerStartKernelTimer( short parameter_1,char parameter_2,float parameter_3);
long v_StartKernelTimer( int parameter_1,float parameter_2);
char v_USBRequestGetEndpoint( unsigned int parameter_1);
double v_USBEndpointGetInterval();
void v_DWHCITransferStageDataSetState( double parameter_1,short parameter_2);
void v_USBRequestSetStatus( unsigned int parameter_1,int parameter_2);
long v_DWHCITransferStageDataGetTransactionStatus();
void v_DWHCITransferStageDataGetState( float parameter_1);
void v_USBEndpointSkipPID( short parameter_1,float parameter_2,long parameter_3);
void v_DWHCITransferStageDataTransactionComplete( unsigned int parameter_1,float parameter_2,char parameter_3,int parameter_4);
long v_DWHCIRegisterIsSet( char parameter_1,long parameter_2);
void v_DWHCIDeviceStartTransaction( int parameter_1,float parameter_2);
float v_DWHCITransferStageDataIsPeriodic( double parameter_1);
short v_DWHCITransferStageDataGetStatusMask( unsigned int parameter_1);
void v_DWHCIRegisterSet( float parameter_1,short parameter_2);
void v_USBEndpointGetNumber( unsigned int parameter_1);
long v_DWHCITransferStageDataGetEndpointNumber( int parameter_1);
long v_USBEndpointGetType( short parameter_1);
short v_DWHCITransferStageDataGetEndpointType( double parameter_1);
char v_USBDeviceGetAddress( unsigned int parameter_1);
float v_DWHCITransferStageDataGetDeviceAddress( long parameter_1);
float v_DWHCITransferStageDataGetSpeed();
char v_DWHCITransferStageDataIsDirectionIn( unsigned int parameter_1);
char v_DWHCITransferStageDataGetMaxPacketSize( unsigned int parameter_1);
void v_DWHCITransferStageDataIsSplitComplete( short parameter_1);
unsigned int v_DWHCITransferStageDataGetSplitPosition( double parameter_1);
int v_USBDeviceGetHubAddress( char parameter_1);
double v_DWHCITransferStageDataGetHubAddress();
long v_USBDeviceGetHubPortNumber( int parameter_1);
double v_DWHCITransferStageDataGetHubPortAddress( long parameter_1);
double v_DWHCITransferStageDataIsSplit();
void v_uspi_CleanAndInvalidateDataCacheRange( float parameter_1,short parameter_2);
double v_DWHCITransferStageDataGetDMAAddress( long parameter_1);
unsigned int v_USBEndpointGetNextPID( char parameter_1,char parameter_2);
float v_DWHCITransferStageDataGetPID( char parameter_1);
unsigned int v_DWHCITransferStageDataGetPacketsToTransfer( int parameter_1);
int v_DWHCITransferStageDataGetBytesToTransfer( int parameter_1);
void v_DWHCIRegisterOr( unsigned int parameter_1,char parameter_2);
void v_DWHCIRegisterSetAll( char parameter_1);
void v_DWHCITransferStageDataSetSubState( unsigned int parameter_1,float parameter_2);
long v_DWHCITransferStageDataGetChannelNumber( short parameter_1);
void v_DWHCIDeviceStartChannel( short parameter_1,unsigned int parameter_2);
double v_DWHCITransferStageDataGetSubState( float parameter_1);
double v_DWHCITransferStageDataGetURB();
void v_DWHCITransferStageDataGetFrameScheduler( char parameter_1);
void v_DWHCIDeviceChannelInterruptHandler( float parameter_1,int parameter_2);
void v_DWHCIRegister2( long parameter_1,unsigned int parameter_2,char parameter_3);
void v_DWHCIDeviceInterruptHandler();
unsigned int v_InterruptSystemGet();
void v_ConnectInterrupt( char parameter_1,double parameter_2);
void v_DWHCIRegisterWrite();
void v_DWHCIRegisterAnd( int parameter_1,short parameter_2);
int v_SetPowerStateOn( short parameter_1);
void v__DWHCIRegister( long parameter_1);
long v_DWHCIRegisterGet( long parameter_1);
int v_LoggerGet();
void v_LogWrite( short parameter_1,short parameter_2,int parameter_3,double parameter_4,int uni_para);
int v_DWHCIRegisterRead( short parameter_1);
void v_DWHCIRegister( long parameter_1);
char v_DWHCIDeviceInitialize( double parameter_1,int uni_para);
void v_DWHCIRootPort( long parameter_1);
void v_DWHCIDevice( unsigned int parameter_1);
void v_DeviceNameService( int parameter_1);
int v_USPiInitialize(int uni_para);
void v__ExceptionHandler( double parameter_1);
void v__InterruptSystem( float parameter_1);
void v__Timer( short parameter_1);
void v__Logger( char parameter_1);
void v_DelayLoop( int parameter_1);
void v_TimerMsDelay( char parameter_1,double parameter_2);
short v_TimerGetTicks( short parameter_1);
void v_TimerTuneMsDelay();
void v_TimerPollKernelTimers( short parameter_1);
void v_TimerInterruptHandler();
void v_InterruptSystemEnableIRQ( float parameter_1);
void v_InterruptSystemConnectIRQ( double parameter_1,int parameter_2,long parameter_3);
short v_TimerInitialize( float parameter_1);
void v_IRQStub();
int v_InterruptSystemInitialize( double parameter_1);
void v_StringFormatV( float parameter_1,short parameter_2,unsigned int parameter_3);
void v__String( long parameter_1);
int v_StringGet( float parameter_1);
void v_StringFormat( char parameter_1,short parameter_2,float parameter_3);
void v_String( long parameter_1);
float v_TimerGetTimeString( float parameter_1);
void v_ScreenDeviceSetCursorMode( char parameter_1,long parameter_2);
void v_ScreenDeviceCursorMove( short parameter_1,int parameter_2,char parameter_3);
void v_ScreenDeviceSetStandoutMode( short parameter_1,long parameter_2);
void v_ScreenDeviceInsertMode( char parameter_1,unsigned int parameter_2);
void v_ScreenDeviceEraseChars( float parameter_1,int parameter_2);
void v_ScreenDeviceDeleteChars( unsigned int parameter_1,short parameter_2);
void v_ScreenDeviceDeleteLines( long parameter_1,double parameter_2);
void v_ScreenDeviceCursorUp( char parameter_1);
void v_ScreenDeviceInsertLines( double parameter_1,float parameter_2);
void v_ScreenDeviceReverseScroll( char parameter_1);
void v_ScreenDeviceCursorRight( short parameter_1);
short v_CharGeneratorGetPixel( long parameter_1,char parameter_2,int parameter_3,char parameter_4);
void v_ScreenDeviceDisplayChar2( short parameter_1,char parameter_2,float parameter_3,short parameter_4,long parameter_5);
void v_ScreenDeviceDisplayChar( double parameter_1,char parameter_2);
char v_memcpyblk(double parameter_2,int parameter_3);
void v_ScreenDeviceScroll(int uni_para);
void v_ScreenDeviceCursorDown( char parameter_1,int uni_para);
void v_ScreenDeviceCarriageReturn();
void v_ScreenDeviceNewLine( char parameter_1);
void v_ScreenDeviceTabulator( long parameter_1);
void v_ScreenDeviceCursorLeft( long parameter_1);
void v_ScreenDeviceWrite2( float parameter_1,char parameter_2,int uni_para);
int v_ScreenDeviceWrite( unsigned int parameter_1,int parameter_2,short parameter_3,int uni_para);
short v_strlen( short parameter_1);
void v_LoggerWrite2( int parameter_1,int parameter_2,int uni_para);
void v_LoggerWriteV( unsigned int parameter_1,char parameter_2,char parameter_3,char parameter_4,long parameter_5,int uni_para);
void v_LoggerWrite( unsigned int parameter_1,int parameter_2,long parameter_3,long parameter_4,char parameter_5);
unsigned int v_LoggerInitialize( double parameter_1,int parameter_2);
void v_Logger( double parameter_1);
void v_Timer( double parameter_1);
void v_InterruptSystem();
void v_DataAbortStub();
void v_PrefetchAbortStub();
void v_UndefinedInstructionStub();
void v_ExceptionHandler2();
void v__CharGenerator();
void v_free();
void v__BcmFrameBuffer( long parameter_1);
void v__ScreenDevice( unsigned int parameter_1);
void v_ScreenDeviceGetPixel( short parameter_1,long parameter_2,long parameter_3);
char v_CharGeneratorGetUnderline( int parameter_1);
void v_ScreenDeviceInvertCursor( char parameter_1);
void v_ScreenDeviceSetPixel( long parameter_1,float parameter_2,int parameter_3,char parameter_4);
void v_ScreenDeviceEraseChar( short parameter_1,int parameter_2,int parameter_3);
float v_CharGeneratorGetCharWidth( unsigned int parameter_1);
void v_ScreenDeviceClearLineEnd( unsigned int parameter_1);
void v_ScreenDeviceClearDisplayEnd( char parameter_1);
void v_ScreenDeviceCursorHome( int parameter_1);
unsigned int v_CharGeneratorGetCharHeight( double parameter_1,int uni_para);
char v_BcmFrameBufferGetPitch( float parameter_1);
double v_BcmFrameBufferGetHeight( short parameter_1);
short v_BcmFrameBufferGetWidth( int parameter_1);
long v_BcmFrameBufferGetSize( float parameter_1);
double v_BcmFrameBufferGetBuffer( unsigned int parameter_1);
char v_BcmFrameBufferGetDepth( double parameter_1);
unsigned int v_BcmFrameBufferInitialize( int parameter_1);
void v_BcmFrameBufferSetPalette( int parameter_1,long parameter_2,unsigned int parameter_3);
short v_memset(int parameter_2,short parameter_3);
void v_BcmFrameBuffer( float parameter_1);
long v_ScreenDeviceInitialize();
void v_CharGenerator( long parameter_1);
void v_ScreenDevice( int parameter_1);
void v__BcmMailBox( float parameter_1);
void v__BcmPropertyTags( unsigned int parameter_1);
char v_PageTableGetBaseAddress( unsigned int parameter_1);
void v_MemorySystemEnableMMU( int parameter_1);
void v_PageTable( float parameter_1);
double v_palloc();
void v_PageTable2( short parameter_1,long parameter_2);
void v_LeaveCritical();
void v_EnterCritical();
short v_malloc( double parameter_1);
void v_mem_init( float parameter_1,float parameter_2);
void v_InvalidateDataCache();
double v_BcmMailBoxRead( double parameter_1);
void v_write32( double parameter_1,short parameter_2);
void v_BcmMailBoxWrite( double parameter_1,int parameter_2);
void v_TimerSimpleusDelay( double parameter_1);
void v_TimerSimpleMsDelay( float parameter_1);
long v_read32( int parameter_1);
void v_BcmMailBoxFlush( char parameter_1);
unsigned int v_BcmMailBoxWriteRead( long parameter_1,short parameter_2);
void v_CleanDataCache();
short v_memcpy(char parameter_2,int parameter_3);
double v_BcmPropertyTagsGetTag( int parameter_1,int parameter_2,char parameter_4,int parameter_5);
void v_BcmMailBox( short parameter_1);
void v_BcmPropertyTags( short parameter_1);
void v_MemorySystem( char parameter_1);
int v_USPiEnvInitialize();
void v_ScreenDeviceRotor( long parameter_1,long parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1 + double_2;
	short_1 = short_1 * short_2;
	v_ScreenDeviceDisplayChar2(short_1,char_1,float_1,short_2,long_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 * long_1;
	int_2 = int_1 + int_1;
	float_1 = v_CharGeneratorGetCharWidth(unsigned_int_3);

}
unsigned int v_USPiEnvGetScreen()
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double v_KeyPressedHandler( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned_int_1 = v_USPiEnvGetScreen();

	char_3 = char_1 * char_2;
	return double_1;
	int_1 = v_ScreenDeviceWrite(unsigned_int_1,int_2,short_1,-1 );

	short_2 = v_strlen(short_3);

}
void v_USBKeyboardDeviceRegisterKeyPressedHandler( short parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
}
void v_USPiKeyboardRegisterKeyPressedHandler()
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1;
	v_USBKeyboardDeviceRegisterKeyPressedHandler(short_1,float_1);

	char_2 = char_1 * char_2;
	double_2 = double_1 * double_1;
}
int v_USPiKeyboardAvailable()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
void v_USPiEnvClose()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	v__ExceptionHandler(double_1);

	v__ScreenDevice(unsigned_int_1);

	float_3 = float_1 * float_2;
	v__Timer(short_1);

	int_1 = int_1;
	v__Logger(char_1);

	char_2 = char_1;
	float_3 = float_4 * float_1;
	v__InterruptSystem(float_4);

	char_3 = char_4;
}
int v_strcmp( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3;
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_3;
	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_6;
	unsigned_int_4 = unsigned_int_6 + unsigned_int_6;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	return int_1;
}
short v_DeviceNameServiceGetDevice( short parameter_1,char parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_2;
	float_1 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char_2 = char_1 + char_1;
		int_1 = v_strcmp(long_1,int_2);

		char_2 = char_3 * char_4;
	}
	return short_1;
}
void v__DeviceNameService( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	v_free();

	int_1 = int_1 + int_2;
	char_3 = char_1 * char_2;
}
void v__DWHCIRootPort()
{
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned_int_1 = unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "B") < 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short_3 = short_1 * short_2;
		v__USBDevice(int_1);

		long_3 = long_1 + long_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	v_free();

	short_5 = short_4 + short_3;
}
void v__DWHCIDevice( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v__DWHCIRootPort();

}
void v_DWHCIDeviceDisableRootPort( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_2;
	v_DWHCIRegisterAnd(int_1,short_1);

	double_1 = double_3 + double_2;
	long_1 = long_1 * long_2;
	v__DWHCIRegister(long_3);

	float_2 = float_1 * float_2;
	short_3 = short_2 * short_2;
	v_DWHCIRegister(long_3);

	v_DWHCIRegisterWrite();

	char_1 = char_1 + char_2;
	int_2 = v_DWHCIRegisterRead(short_3);

	double_2 = double_2 * double_3;
}
float v_DWHCIDeviceOvercurrentDetected()
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	v_DWHCIRegister(long_1);

	double_1 = double_2;
	double_2 = double_1 * double_2;
	int_1 = v_DWHCIRegisterRead(short_1);

	int_2 = int_3;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 * double_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return float_1;
	v__DWHCIRegister(long_2);

}
void v_USBMIDIDeviceCompletionRoutine( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	int int_5 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_2;
	v_free();

	unsigned_int_3 = unsigned_int_2;
	double_1 = double_1 + double_2;
	if(1)
	{
		char char_1 = 1;
		unsigned_int_3 = unsigned_int_3;
		char_1 = char_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				if(1)
				{
					int int_1 = 1;
					int int_2 = 1;
					int int_3 = 1;
					int int_4 = 1;
					int_3 = int_1 * int_2;
					unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
					int_4 = int_1 + int_2;
				}
			}
		}
	}
	short_2 = short_1 * short_1;
	short_2 = short_2 * short_3;
	v__USBRequest();

	short_3 = v_USBMIDIDeviceStartRequest();

	double_1 = double_2 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	int_5 = v_USBRequestGetStatus(double_3);

	unsigned_int_2 = v_USBRequestGetResultLength(short_3);

}
short v_USBMIDIDeviceStartRequest()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	v_USBRequest(unsigned_int_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	short_1 = v_malloc(double_1);

	char_1 = v_DWHCIDeviceSubmitAsyncRequest(char_2,double_1);

	int_2 = int_1 + int_1;
	short_2 = v_USBDeviceGetHost(float_1);

	int_4 = int_3 + int_2;
	v_USBMIDIDeviceCompletionRoutine(char_2);

	int_5 = int_3;
	double_3 = double_1 + double_2;
	v_USBRequestSetCompletionRoutine(float_2,short_1);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	int_6 = int_5 + int_3;
	return short_2;
}
short v_USBMIDIDeviceConfigure( short parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	double double_7 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_7 = 1;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_3 = double_3;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		long_2 = long_1 + long_2;
		if(1)
		{
			float_2 = float_1 + float_2;
		}
		if(1)
		{
			char_1 = char_1 * char_1;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			char_2 = char_2 * char_1;
			int_1 = int_2;
			int_4 = int_3 * int_2;
		}
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		}
		int_2 = int_1 + int_3;
	}
	if(1)
	{
		if(1)
		{
			float_2 = float_3;
		}
		double_4 = double_1;
	}
	if(1)
	{
		int_3 = int_4 + int_2;
		char_1 = char_2;
		if(1)
		{
			short_2 = short_1 + short_1;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_5 = int_4;
			short_1 = short_2 * short_3;
		}
	}
	if(1)
	{
		float float_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int_1 = int_4 + int_5;
		float_1 = float_3 * float_1;
		if(1)
		{
			float float_5 = 1;
			float_5 = float_4 * float_2;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
			int_2 = int_1 * int_1;
		}
		if(1)
		{
			double double_5 = 1;
			double double_6 = 1;
			float float_6 = 1;
			float float_7 = 1;
			int int_7 = 1;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				long_2 = long_1 * long_3;
				float_4 = float_4 * float_1;
			}
			if(1)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					double_3 = double_4 * double_5;
					char_1 = char_1 * char_2;
				}
			}
			if(1)
			{
				double_6 = double_4 + double_1;
				float_6 = float_2 + float_4;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						unsigned_int_4 = unsigned_int_6;
					}
					if(1)
					{
						int_2 = int_5 + int_2;
						char_3 = char_1 + char_3;
						unsigned_int_6 = unsigned_int_3;
						for(int looper_5=0; looper_5<1;looper_5++)
						{
							if(1)
							{
								long long_4 = 1;
								long long_5 = 1;
								long_5 = long_1 + long_4;
							}
							double_7 = double_1 * double_6;
							short_2 = short_1;
						}
					}
					for(int looper_6=0; looper_6<1;looper_6++)
					{
						char char_4 = 1;
						char char_5 = 1;
						double_3 = double_5 * double_3;
						char_5 = char_1 + char_4;
					}
				}
				float_4 = float_4 + float_6;
			}
			if(1)
			{
				if(1)
				{
					long long_6 = 1;
					long long_7 = 1;
					long_7 = long_6 * long_6;
				}
				unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
			}
			if(1)
			{
				if(1)
				{
					long_3 = long_1 + long_1;
				}
				unsigned_int_5 = unsigned_int_2;
			}
			if(1)
			{
				if(1)
				{
					char char_6 = 1;
					char_6 = char_2 * char_6;
				}
				unsigned_int_5 = unsigned_int_5;
			}
			if(1)
			{
				if(1)
				{
					short short_5 = 1;
					short_2 = short_4 + short_5;
				}
				if(1)
				{
					int_1 = int_4 * int_5;
				}
				unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
			}
			if(1)
			{
				if(1)
				{
					unsigned_int_3 = unsigned_int_2 + unsigned_int_6;
				}
				float_3 = float_3 * float_7;
			}
			if(1)
			{
				if(1)
				{
					int_2 = int_4 + int_2;
				}
				long_1 = long_2 + long_3;
				if(1)
				{
					double_4 = double_7 + double_1;
				}
				if(1)
				{
					char_2 = char_3;
				}
			}
			if(1)
			{
				int int_6 = 1;
				int_5 = int_6 * int_2;
				int_5 = int_4;
				if(1)
				{
					unsigned_int_6 = unsigned_int_5 + unsigned_int_7;
				}
				float_4 = float_7 + float_2;
				for(int looper_7=0; looper_7<1;looper_7++)
				{
					if(1)
					{
						short short_6 = 1;
						int_5 = int_5 + int_5;
						short_6 = short_1;
						unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
						int_1 = int_7;
						unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
					}
					double_2 = double_6 * double_6;
				}
			}
			if(1)
			{
				int_3 = int_7 * int_3;
			}
		}
	}
	if(1)
	{
		char char_7 = 1;
		char char_8 = 1;
		long long_8 = 1;
		int int_8 = 1;
		if(1)
		{
			short_4 = short_3 + short_1;
		}
		double_2 = double_7;
		char_8 = char_3 + char_7;
		long_8 = long_3 + long_2;
		int_8 = int_2 + int_5;
	}
	unsigned_int_2 = unsigned_int_6 + unsigned_int_7;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
}
void v_USBMIDIDevice( char parameter_1,int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_1 = v_USBMIDIDeviceConfigure(short_1,uni_para);

	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_1;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_1;
	int_3 = int_1 * int_2;
}
void v_USBGamePadDeviceCompletionRoutine( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_3 = 1;
	v__USBRequest();

	int_2 = int_1 * int_2;
	int_1 = v_USBGamePadDeviceStartRequest(long_1);

	double_3 = double_1 + double_2;
	short_1 = short_1;
	v_free();

	short_1 = short_2 + short_3;
	if(1)
	{
		if(1)
		{
			double_2 = double_1 + double_2;
			unsigned_int_1 = v_USBRequestGetResultLength(short_2);

			int_2 = int_1;
		}
	}
	double_1 = double_3 * double_4;
	char_1 = v_USBGamePadDeviceDecodeReport(double_2);

	int_3 = int_3 + int_3;
	int_2 = int_3;
	int_1 = v_USBRequestGetStatus(double_2);

	double_4 = double_3 * double_1;
}
int v_USBGamePadDeviceStartRequest( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_1;
	char_1 = v_DWHCIDeviceSubmitAsyncRequest(char_2,double_1);

	char_3 = char_3 + char_2;
	v_USBRequestSetCompletionRoutine(float_1,short_1);

	long_1 = long_1 + long_2;
	double_1 = double_2 * double_3;
	v_USBGamePadDeviceCompletionRoutine(short_2);

	double_2 = double_1 + double_1;
	short_2 = v_malloc(double_1);

	long_4 = long_2 + long_3;
	short_2 = v_USBDeviceGetHost(float_1);

	short_1 = short_1 + short_1;
	v_USBRequest(unsigned_int_1);

	long_6 = long_3 + long_5;
	return int_3;
}
void v_USBGamePadDevicePS3Configure( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long_1 = long_1 + long_2;
	short_1 = v_USBDeviceGetHost(float_1);

	float_2 = v_USBDeviceGetEndpoint0(int_1);

	short_2 = short_1 + short_2;
	long_2 = long_1 * long_2;
	float_2 = float_2 * float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_3 = short_1;
	int_3 = int_2 * int_2;
	double_3 = double_1 + double_2;
	int_3 = v_DWHCIDeviceControlMessage(float_1,double_1,double_4,float_3,unsigned_int_1,double_3,double_1,-1 );

	double_6 = double_1 * double_5;
}
char v_BitGetSigned(double parameter_2,short parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = v_BitGetUnsigned(char_1,long_1);

	double_2 = double_1 + double_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	return char_1;
}
short v_BitGetUnsigned(char parameter_2,long parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	short short_4 = 1;
	short_1 = short_2;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_2;
	double_4 = double_1 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			char char_1 = 1;
			unsigned int unsigned_int_3 = 1;
			char_3 = char_1 + char_2;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		}
		if(1)
		{
			char char_4 = 1;
			int int_1 = 1;
			char_2 = char_3 + char_4;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
			int_1 = int_1 * int_1;
		}
		if(1)
		{
			short short_3 = 1;
			short_4 = short_3 * short_4;
			double_2 = double_3 * double_1;
		}
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			int_2 = int_2 * int_3;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
		}
	}
	return short_4;
}
char v_USBGamePadDeviceDecodeReport( double parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	short_1 = v_BitGetUnsigned(char_1,long_1);

	char_2 = v_BitGetSigned(double_1,short_1);

	unsigned_int_1 = unsigned_int_1;
	double_2 = double_2 * double_1;
	return char_1;
}
long v_USBGamePadDeviceConfigure()
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	long long_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	char_1 = v_USBDeviceGetDescriptor(int_1,unsigned_int_1);

	v_USBDeviceConfigurationError(long_1,char_2);

	v_USBGamePadDevicePS3Configure(double_1);

	v__String(long_1);

	short_1 = short_1 + short_1;
	short_1 = v_DeviceNameServiceGet();

	long_2 = long_1;
	int_2 = v_DWHCIDeviceControlMessage(float_1,double_2,double_2,float_1,unsigned_int_1,double_2,double_1,-1 );

	short_2 = v_USBDeviceGetHost(float_2);

	v_LogWrite(short_1,short_2,int_2,double_1,-1 );

	char_3 = v_USBGamePadDeviceDecodeReport(double_2);

	v_String(long_1);

	v_StringFormat(char_1,short_2,float_3);

	int_3 = v_StringGet(float_3);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	float_3 = v_USBDeviceGetEndpoint0(int_3);

	v_USBDeviceConfigure(-1 );

	int_4 = v_USBGamePadDeviceStartRequest(long_3);

	short_3 = short_3 + short_4;
	short_5 = v_malloc(double_2);

	short_5 = short_6 + short_5;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		v_DeviceNameServiceAddDevice(unsigned_int_1,short_4,char_2);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	}
	return long_1;
	v_USBEndpoint2(char_1,short_4,short_2);

}
void v_USBGamePadDevice( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	float float_4 = 1;
	short short_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_2;
	int_1 = int_2;
	float_1 = float_1 * float_1;
	char_1 = char_1 * char_1;
	v_USBDeviceCopy(float_2,int_3);

	short_3 = short_1 * short_2;
	double_3 = double_3 + double_4;
	float_3 = float_1 * float_2;
	long_1 = v_USBGamePadDeviceConfigure();

	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		short_1 = short_3 * short_1;
		int_3 = int_4 * int_2;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	int_2 = int_4 * int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_1 = int_3;
	}
	char_2 = char_2 + char_1;
	float_2 = float_3 * float_2;
	int_2 = int_3 + int_1;
	float_4 = float_1 + float_1;
	short_4 = v_malloc(double_2);

}
long v_LAN7800DevicePHYWrite( double parameter_1,unsigned int parameter_2,float parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char_2 = char_1 + char_1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	int_1 = v_LAN7800DeviceWriteReg(char_3,double_1,char_3);

	float_3 = float_1 * float_2;
	long_1 = v_LAN7800DeviceWaitReg(char_3,long_1,unsigned_int_1,short_1);

	long_3 = long_1 * long_2;
	if(1)
	{
	}
	return long_1;
}
float v_LAN7800DevicePHYRead( int parameter_1,double parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_4 = 1;
	float float_3 = 1;
	long_1 = v_LAN7800DeviceWaitReg(char_1,long_2,unsigned_int_1,short_1);

	int_1 = v_LAN7800DeviceWriteReg(char_2,double_1,char_2);

	v_LAN7800DeviceReadReg(double_1,long_3,int_1);

	char_1 = char_3;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	double_4 = double_3 * double_2;
	float_1 = float_1 + float_2;
	long_5 = long_4 + long_4;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	char_2 = char_3 + char_4;
	float_1 = float_1 * float_2;
	return float_3;
}
void v_LAN7800DeviceInitPHY( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_2 = double_1 * double_2;
	float_1 = v_LAN7800DevicePHYRead(int_1,double_1,unsigned_int_1);

	long_1 = long_1 + long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "e") < 0)
	{
	}
	double_2 = double_2;
	short_1 = short_1 + short_1;
	long_1 = v_LAN7800DevicePHYWrite(double_2,unsigned_int_2,float_1);

	short_2 = short_2 + short_3;
}
double v_LAN7800DeviceInitMACAddress( char parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	double double_2 = 1;
	double_1 = double_1 + double_1;
	int_1 = v_LAN7800DeviceWriteReg(char_1,double_1,char_2);

	v_MACAddressFormat(short_1,short_2);

	v__String(long_1);

	short_5 = short_3 * short_4;
	if(1)
	{
	}
	short_6 = short_3 + short_2;
	int_1 = v_StringGet(float_1);

	long_3 = long_2 + long_1;
	int_2 = int_2 + int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = int_2 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	v_MACAddressSet(double_1,unsigned_int_3);

	int_3 = int_2 + int_3;
	v_MACAddress(int_4);

	int_5 = v_GetMACAddress(double_1);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	v_String(long_4);

	char_2 = char_2 * char_1;
	return double_1;
	v_LogWrite(short_6,short_5,int_4,double_2,-1 );

}
long v_LAN7800DeviceWaitReg( char parameter_1,long parameter_2,unsigned int parameter_3,short parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long_1 = long_1;
	if(1)
	{
		v_MsDelay(long_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		unsigned_int_2 = unsigned_int_2;
		if(1)
		{
			double double_3 = 1;
			int_1 = int_1 + int_2;
			double_3 = double_1 * double_2;
		}
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 * int_1;
		int_1 = int_3 * int_2;
	}
	double_4 = double_2 * double_4;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double_2 = double_5 + double_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	double_6 = double_4 + double_4;
	if(1)
	{
		short short_1 = 1;
		double_4 = double_1 * double_6;
		v_LAN7800DeviceReadReg(double_5,long_1,int_1);

		short_1 = short_1 + short_1;
	}
	int_4 = int_2 * int_4;
	return long_3;
}
int v_LAN7800DeviceWriteReg( char parameter_1,double parameter_2,char parameter_3)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = v_USBDeviceGetHost(float_1);

	float_2 = v_USBDeviceGetEndpoint0(int_1);

	v_LogWrite(short_2,short_2,int_2,double_1,-1 );

	double_3 = double_1 * double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "nE") == 0)
	{
		float_3 = float_2;
	}
	return int_2;
	int_3 = v_DWHCIDeviceControlMessage(float_2,double_4,double_2,float_3,unsigned_int_1,double_4,double_3,-1 );

}
unsigned int v_LAN7800DeviceReadWriteReg( long parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int_1 = v_LAN7800DeviceWriteReg(char_1,double_1,char_1);

	int_4 = int_2 * int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_2 = double_2 + double_2;
	short_3 = short_1 * short_2;
	return unsigned_int_1;
	v_LAN7800DeviceReadReg(double_2,long_1,int_4);

}
void v_LAN7800DeviceReadReg( double parameter_1,long parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	double double_4 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
		short_1 = v_USBDeviceGetHost(float_1);

		float_2 = v_USBDeviceGetEndpoint0(int_1);

		double_1 = double_1 + double_1;
	}
	int_2 = v_DWHCIDeviceControlMessage(float_1,double_1,double_1,float_3,unsigned_int_1,double_2,double_3,-1 );

	v_LogWrite(short_1,short_2,int_2,double_4,-1 );

}
void v_LAN7800DeviceConfigure( long parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	long long_4 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short_1 = v_malloc(double_1);

	v_LAN7800DeviceInitPHY(double_2);

	v_String(long_1);

	v__String(long_2);

	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_USBDeviceConfigurationError(long_3,char_1);

		unsigned_int_2 = v_LAN7800DeviceReadWriteReg(long_4,double_1,double_2,double_3);

		int_1 = v_LAN7800DeviceWriteReg(char_2,double_2,char_2);

		v_DeviceNameServiceAddDevice(unsigned_int_1,short_1,char_1);

		int_1 = v_StringGet(float_1);

		float_2 = float_1 + float_1;
	}
	char_1 = v_USBDeviceGetDescriptor(int_1,unsigned_int_3);

	v_USBEndpoint2(char_2,short_1,short_1);

	v_USBDeviceConfigure(-1 );

	v_LogWrite(short_1,short_2,int_1,double_3,-1 );

	v_LAN7800DeviceReadReg(double_3,long_3,int_1);

	long_4 = v_LAN7800DeviceWaitReg(char_2,long_1,unsigned_int_4,short_3);

	double_2 = v_LAN7800DeviceInitMACAddress(char_2);

	v_StringFormat(char_2,short_4,float_2);

	short_3 = v_DeviceNameServiceGet();

}
void v_LAN7800Device( int parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	short short_2 = 1;
	float float_4 = 1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_USBDeviceCopy(float_1,int_1);

	char_2 = char_1 + char_1;
	v_LAN7800DeviceConfigure(long_1);

	short_1 = v_malloc(double_1);

	float_2 = float_3;
	double_1 = double_2 + double_2;
	float_1 = float_2 + float_3;
	short_1 = short_2 + short_2;
	float_4 = float_2 * float_2;
}
void v_SMSC951xDeviceWriteReg( double parameter_1,long parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_DWHCIDeviceControlMessage(float_1,double_1,double_1,float_2,unsigned_int_2,double_1,double_2,-1 );

	short_1 = v_USBDeviceGetHost(float_1);

	float_2 = v_USBDeviceGetEndpoint0(int_2);

}
void v_MACAddressCopyTo( long parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = double_2;
	short_1 = v_memcpy(char_1,int_1);

	float_1 = float_1 * float_1;
	long_1 = long_2;
	float_1 = float_2 * float_3;
}
void v_MACAddressFormat( short parameter_1,short parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_2 = 1;
	v_StringFormat(char_1,short_1,float_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_2;
	int_1 = int_1 * int_1;
	char_2 = char_2 + char_1;
}
void v_MACAddressSet( double parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = v_memcpy(char_1,int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1;
	long_2 = long_1 + long_2;
	double_1 = double_2;
}
int v_GetMACAddress( double parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = short_1;
	int_2 = int_1 * int_1;
	v_MACAddress(int_3);

	double_3 = double_1 + double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_1 = v_memcpy(char_1,int_2);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	double_3 = v_BcmPropertyTagsGetTag(int_4,int_1,char_1,int_5);

	int_5 = int_1 * int_3;
	v_BcmPropertyTags(short_2);

	long_1 = long_1 * long_1;
	return int_4;
	v__BcmPropertyTags(unsigned_int_3);

}
void v_MACAddress( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_1;
}
short v_SMSC951xDeviceConfigure( int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_4 = 1;
	if(1)
	{
		double double_3 = 1;
		v_MACAddress(int_1);

		int_1 = v_GetMACAddress(double_1);

		char_1 = v_USBDeviceGetDescriptor(int_2,unsigned_int_1);

		v_USBEndpoint2(char_2,short_1,short_1);

		double_4 = double_2 + double_3;
	}
	if(1)
	{
		v_MACAddressSet(double_1,unsigned_int_2);

		v_LogWrite(short_1,short_1,int_1,double_2,-1 );

		v_MACAddressFormat(short_2,short_3);

		int_3 = v_StringGet(float_1);

		v_StringFormat(char_2,short_1,float_2);

		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	}
	return short_1;
	v_String(long_1);

	v_USBDeviceConfigurationError(long_1,char_1);

	v__String(long_1);

	short_3 = v_malloc(double_1);

	v_USBDeviceConfigure(-1 );

	v_MACAddressCopyTo(long_1,unsigned_int_2);

	v_SMSC951xDeviceWriteReg(double_4,long_1,char_1);

	v_DeviceNameServiceAddDevice(unsigned_int_3,short_4,char_1);

	short_3 = v_DeviceNameServiceGet();

}
void v_SMSC951xDevice( short parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_1 = 1;
	short_1 = v_malloc(double_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_1 = v_SMSC951xDeviceConfigure(int_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	int_3 = int_1 * int_2;
	char_3 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_2;
	int_2 = int_2 + int_1;
	int_4 = int_4 + int_2;
	v_USBDeviceCopy(float_1,int_1);

	int_3 = int_3 * int_4;
}
int v_uspi_char2int( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	return int_1;
}
void v_USBMouseDeviceCompletionRoutine( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char_3 = char_1 + char_2;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		v_free();

		unsigned_int_2 = unsigned_int_3;
		double_1 = double_1 + double_2;
	}
	unsigned_int_4 = v_USBRequestGetResultLength(short_1);

	v__USBRequest();

	char_2 = char_3;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_2 * int_3;
	int_1 = v_USBRequestGetStatus(double_3);

	int_3 = int_2;
	int_3 = v_uspi_char2int(char_1);

	int_4 = v_USBMouseDeviceStartRequest(float_2);

}
int v_USBMouseDeviceStartRequest( float parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long long_2 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	v_USBMouseDeviceCompletionRoutine(long_1);

	short_2 = short_1 * short_1;
	int_1 = int_1 * int_1;
	char_1 = v_DWHCIDeviceSubmitAsyncRequest(char_1,double_1);

	short_1 = short_1 + short_2;
	short_2 = v_USBDeviceGetHost(float_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = v_malloc(double_2);

	long_2 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1;
	v_USBRequest(unsigned_int_1);

	v_USBRequestSetCompletionRoutine(float_2,short_1);

	long_1 = long_2 + long_1;
	char_3 = char_2 * char_2;
	return int_1;
}
short v_USBMouseDeviceConfigure( int parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	char char_4 = 1;
	short short_2 = 1;
	if(1)
	{
		v_USBDeviceConfigure(-1 );

		short_1 = v_USBDeviceGetHost(float_1);

		float_1 = v_USBDeviceGetEndpoint0(int_1);

		short_1 = v_DeviceNameServiceGet();

		int_2 = v_USBMouseDeviceStartRequest(float_1);

		double_2 = double_1 * double_1;
	}
	if(1)
	{
		double double_3 = 1;
		v_USBEndpoint2(char_1,short_1,short_1);

		v_String(long_1);

		v_DeviceNameServiceAddDevice(unsigned_int_1,short_1,char_1);

		double_1 = double_1 + double_3;
	}
	char_2 = v_USBDeviceGetDescriptor(int_1,unsigned_int_1);

	v_USBDeviceConfigurationError(long_2,char_3);

	v__String(long_1);

	int_1 = int_3 + int_2;
	return short_1;
	short_1 = v_malloc(double_4);

	v_LogWrite(short_1,short_1,int_4,double_1,-1 );

	int_5 = v_DWHCIDeviceControlMessage(float_2,double_2,double_4,float_3,unsigned_int_2,double_4,double_5,-1 );

	v_StringFormat(char_4,short_2,float_2);

	int_1 = v_StringGet(float_1);

}
void v_USBMouseDevice( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = v_malloc(double_1);

	short_1 = short_2 * short_1;
	v_USBDeviceCopy(float_1,int_4);

	double_3 = double_2 + double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	short_2 = v_USBMouseDeviceConfigure(int_2);

	double_2 = double_3;
	int_3 = int_2 * int_3;
	long_1 = long_2;
}
void v_KeyMap( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
	int_2 = int_3 * int_3;
	unsigned_int_3 = unsigned_int_2;
	short_1 = v_memcpy(char_1,int_2);

}
char v_DWHCIDeviceSubmitAsyncRequest( char parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	v_USBRequestSetStatus(unsigned_int_1,int_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	long_1 = v_USBEndpointGetType(short_1);

	int_2 = int_2 * int_1;
	long_3 = long_2 + long_1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = v_USBEndpointIsDirectionIn(int_2);

	double_1 = double_2;
	int_3 = int_1 + int_1;
	int_2 = v_DWHCIDeviceTransferStageAsync(char_1,int_1,float_1,short_1,-1 );

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	v_USBRequestGetBufLen(double_1);

	int_3 = int_4 * int_1;
	return char_2;
	char_2 = v_USBRequestGetEndpoint(unsigned_int_4);

}
void v_TimerCancelKernelTimer( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1 * double_2;
	int_1 = int_1 + int_2;
}
void v_CancelKernelTimer( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = v_TimerGet();

	short_1 = short_1 * short_1;
	v_TimerCancelKernelTimer(int_1,int_1);

}
short v_KeyMapGetString( float parameter_1,unsigned int parameter_2,short parameter_3,char parameter_4)
{
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			short_2 = short_1 + short_1;
			double_1 = double_1 * double_1;
		}
	}
	if(1)
	{
		if(1)
		{
			short_2 = short_1 * short_1;
		}
		if(1)
		{
			short short_3 = 1;
			short_1 = short_3 * short_1;
		}
	}
	double_1 = double_1 * double_1;
	double_1 = double_2 * double_1;
	return short_1;
}
unsigned int v_KeyMapTranslate( double parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	double_2 = double_1 + double_3;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_2;
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 + char_2;
		}
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_1 * double_3;
	}
	char_3 = char_2 * char_2;
	int_2 = int_1 * int_2;
	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_3;
}
void v_USBKeyboardDeviceGenerateKeyEvent( double parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	double double_4 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	short short_6 = 1;
	double_3 = double_1 + double_2;
	short_1 = v_KeyMapGetString(float_1,unsigned_int_1,short_2,char_1);

	short_2 = short_1 + short_3;
	short_1 = short_4 + short_5;
	int_2 = int_1 + int_1;
	int_3 = int_2 * int_3;
	int_2 = int_4 + int_1;
	if(1)
	{
		int int_5 = 1;
		int_5 = int_3 * int_5;
		float_1 = float_2 * float_2;
		double_3 = double_4;
	}
	char_2 = v_USBKeyboardDeviceGetModifiers(float_3);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		double_3 = double_1 + double_1;
	}
	double_1 = double_1 * double_2;
	unsigned_int_2 = v_KeyMapTranslate(double_3,int_1,char_3);

	double_4 = double_2 * double_2;
	if(1)
	{
		if(1)
		{
			float float_4 = 1;
			float_2 = float_3 + float_4;
		}
	}
	short_5 = short_6 + short_6;
}
double v_USBKeyboardDeviceGetKeyCode( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1 + double_2;
		if(1)
		{
		}
	}
	return double_2;
}
char v_USBKeyboardDeviceGetModifiers( float parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	short_1 = short_1 * short_1;
	return char_1;
}
void v_USBKeyboardDeviceCompletionRoutine( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_5 = 1;
	double double_6 = 1;
	int int_7 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_3 = int_1 + int_2;
	v_CancelKernelTimer(short_1);

	int_1 = v_USBKeyboardDeviceStartRequest(float_1);

	double_1 = double_2;
	double_1 = double_1 + double_2;
	int_2 = int_4 + int_4;
	if(1)
	{
		float float_3 = 1;
		if(1)
		{
			double_1 = v_USBKeyboardDeviceGetKeyCode(float_2);

			float_3 = float_2;
		}
		if(1)
		{
			double double_4 = 1;
			unsigned_int_1 = v_USBRequestGetResultLength(short_1);

			v_USBKeyboardDeviceGenerateKeyEvent(double_3,char_1);

			double_4 = double_2;
			if(1)
			{
				float float_4 = 1;
				float_1 = float_4;
			}
			if(1)
			{
				double double_5 = 1;
				v__USBRequest();

				v_free();

				double_2 = double_5;
			}
			char controller_6[2];
			fgets(controller_6 ,2 ,stdin);
			if( strcmp( controller_6, "7") < 0)
			{
				int int_6 = 1;
				float_3 = float_3 + float_1;
				if(1)
				{
					int_5 = v_USBRequestGetStatus(double_6);

					int_3 = int_3 * int_2;
				}
				float_1 = float_3 + float_2;
				int_6 = int_1 + int_5;
			}
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				double double_7 = 1;
				char_1 = v_USBKeyboardDeviceGetModifiers(float_1);

				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
				double_6 = double_7;
			}
		}
	}
	int_2 = int_7 + int_4;
	long_2 = long_1 * long_1;
	long_2 = long_1 * long_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	long_2 = v_StartKernelTimer(int_3,float_2);

}
int v_USBKeyboardDeviceStartRequest( float parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short_1 = v_USBDeviceGetHost(float_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 + char_1;
	short_1 = v_malloc(double_1);

	double_2 = double_1 + double_1;
	v_USBKeyboardDeviceCompletionRoutine(long_1);

	float_1 = float_1;
	v_USBRequestSetCompletionRoutine(float_2,short_1);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	v_USBRequest(unsigned_int_1);

	double_5 = double_3 * double_4;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_2;
	return int_1;
	char_1 = v_DWHCIDeviceSubmitAsyncRequest(char_1,double_5);

}
char v_USBKeyboardDeviceConfigure()
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_5 = 1;
	double double_4 = 1;
	short short_6 = 1;
	short short_7 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	v_LogWrite(short_1,short_2,int_1,double_1,-1 );

	int_1 = v_DWHCIDeviceControlMessage(float_1,double_2,double_1,float_1,unsigned_int_1,double_3,double_1,-1 );

	v_String(long_1);

	v_StringFormat(char_1,short_3,float_1);

	v_DeviceNameServiceAddDevice(unsigned_int_2,short_4,char_1);

	char_1 = char_2 * char_1;
	char_3 = v_USBDeviceGetDescriptor(int_2,unsigned_int_2);

	v_USBDeviceConfigure(-1 );

	short_3 = v_DeviceNameServiceGet();

	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	return char_2;
	v_USBDeviceConfigurationError(long_1,char_1);

	short_5 = v_malloc(double_4);

	v_USBEndpoint2(char_1,short_3,short_6);

	short_7 = v_USBDeviceGetHost(float_2);

	float_2 = v_USBDeviceGetEndpoint0(int_1);

	int_2 = v_StringGet(float_3);

	v__String(long_2);

	int_3 = v_USBKeyboardDeviceStartRequest(float_4);

}
void v_USBKeyboardDevice()
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_1 = double_1;
	int_2 = int_1 * int_1;
	char_1 = v_USBKeyboardDeviceConfigure();

	short_1 = v_malloc(double_2);

	short_3 = short_2 * short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_KeyMap(float_1);

	short_3 = short_1 + short_3;
	v_USBDeviceCopy(float_1,int_2);

	char_1 = char_1 + char_1;
	char_1 = char_2 + char_1;
	double_1 = double_3 + double_1;
	int_3 = int_2 + int_4;
	int_5 = int_5;
	float_1 = float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	double_2 = double_3 + double_2;
}
short v_DeviceNameServiceGet()
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float_1 = float_2;
	return short_1;
}
void v_strcpy( char parameter_1,long parameter_2)
{
}
void v_DeviceNameServiceAddDevice( unsigned int parameter_1,short parameter_2,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	float float_2 = 1;
	double_1 = double_2;
	v_strcpy(char_1,long_1);

	short_1 = short_1 * short_2;
	int_1 = int_1 * int_1;
	float_1 = float_1 + float_1;
	short_4 = short_3 + short_1;
	short_3 = v_malloc(double_1);

	short_2 = v_strlen(short_1);

	int_2 = int_1 + int_2;
	double_1 = double_2 + double_2;
	long_3 = long_2 + long_3;
	char_1 = char_2 + char_1;
	float_2 = float_1 * float_1;
	double_1 = double_2 + double_2;
	int_2 = int_2;
}
float v_uspi_le2be32( double parameter_1)
{
	float float_1 = 1;
	return float_1;
}
int v_DWHCIDeviceTransfer( unsigned int parameter_1,float parameter_2,float parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	v_DWHCIDeviceSubmitBlockingRequest(double_1,int_1,-1 );

	float_1 = float_1;
	unsigned_int_1 = v_USBRequestGetResultLength(short_1);

	float_2 = float_2;
	char_2 = char_1 + char_1;
	long_2 = long_1 + long_2;
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	v_USBRequest(unsigned_int_2);

	v__USBRequest();

	short_2 = short_1 * short_1;
	return int_1;
}
int v_USBBulkOnlyMassStorageDeviceCommand( short parameter_1,double parameter_3,char parameter_5,short parameter_6)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	short_1 = v_memset(int_1,short_1);

	int_1 = int_2 * int_1;
	long_2 = long_1 * long_1;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_1 * int_3;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_1;
	short_2 = v_USBDeviceGetHost(float_2);

	double_2 = double_1 + double_1;
	v_LogWrite(short_2,short_2,int_1,double_1,-1 );

	float_4 = float_3 * float_3;
	double_3 = double_2 + double_2;
	int_3 = int_2 * int_1;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
	short_1 = short_1 * short_1;
	long_2 = long_1 + long_3;
	if(1)
	{
		short_1 = v_memcpy(char_1,int_5);

		int_6 = v_DWHCIDeviceTransfer(unsigned_int_2,float_4,float_1);

		char_2 = char_1 + char_1;
	}
	unsigned_int_3 = unsigned_int_4 * unsigned_int_6;
	if(1)
	{
		long_2 = long_1 + long_2;
		if(1)
		{
			char_3 = char_1 * char_3;
		}
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	if(1)
	{
		char_2 = char_1 + char_3;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_1 = short_3 + short_4;
	}
	if(1)
	{
		int_2 = int_6 * int_4;
	}
	if(1)
	{
	}
	if(1)
	{
		double_3 = double_2 * double_1;
	}
	return int_5;
}
void v_USBEndpoint2( char parameter_1,short parameter_2,short parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_1;
	double_3 = double_1 * double_2;
	char_1 = char_1 + char_1;
	short_2 = short_1 + short_1;
	double_3 = double_4;
	double_1 = double_1 * double_1;
	int_3 = int_1 * int_2;
	short_2 = short_1;
	double_1 = double_4 + double_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_5;
	double_5 = double_1;
	double_4 = double_4 + double_1;
	char_1 = char_3;
	double_2 = double_2 + double_4;
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		char char_6 = 1;
		char_6 = char_4 + char_5;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "?@") < 0)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_5;
		}
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
			}
			int_4 = int_1 + int_4;
			int_1 = int_3 + int_5;
			if(1)
			{
				double double_6 = 1;
				double double_7 = 1;
				char_2 = v_USBDeviceGetSpeed(long_1);

				double_7 = double_6 + double_2;
			}
		}
	}
}
float v_USBBulkOnlyMassStorageDeviceConfigure( unsigned int parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	double double_3 = 1;
	short short_5 = 1;
	float float_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	v_USBDeviceConfigurationError(long_1,char_1);

	v_USBEndpoint2(char_2,short_1,short_2);

	v_USBDeviceConfigure(-1 );

	int_2 = int_1 * int_2;
	v_LogWrite(short_2,short_1,int_1,double_1,-1 );

	v_MsDelay(long_1);

	v_String(long_1);

	v__String(long_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_USBBulkOnlyMassStorageDeviceCommand(short_2,double_2,char_2,short_3);

	v_StringFormat(char_2,short_4,float_1);

	double_3 = double_3 * double_1;
	short_5 = v_malloc(double_3);

	int_2 = v_StringGet(float_2);

	long_3 = long_3 * long_2;
	v_DeviceNameServiceAddDevice(unsigned_int_1,short_4,char_1);

	short_2 = v_DeviceNameServiceGet();

	double_5 = double_4 + double_4;
	return float_1;
	char_2 = v_USBDeviceGetDescriptor(int_3,unsigned_int_3);

	float_2 = v_uspi_le2be32(double_1);

}
void v_USBBulkOnlyMassStorageDevice( unsigned int parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_2 + float_3;
	float_1 = v_USBBulkOnlyMassStorageDeviceConfigure(unsigned_int_3);

	int_2 = int_1 + int_2;
	int_4 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	int_5 = int_5 + int_1;
	short_2 = short_1 * short_1;
	v_USBDeviceCopy(float_2,int_1);

}
float v_USBStandardHubEnumeratePorts( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int int_5 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	int int_6 = 1;
	double double_4 = 1;
	long long_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	int int_7 = 1;
	short short_4 = 1;
	long long_6 = 1;
	int int_9 = 1;
	int int_10 = 1;
	float float_6 = 1;
	double double_9 = 1;
	int int_12 = 1;
	double double_10 = 1;
	int int_13 = 1;
	int_2 = int_1 * int_1;
	long_1 = long_1 * long_2;
	int_3 = v_StringGet(float_1);

	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1;
	long_4 = long_3 + long_4;
	int_4 = int_2 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long_4 = long_3 + long_4;
		}
	}
	char_1 = char_1 * char_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_5 = 1;
		short short_3 = 1;
		unsigned_int_1 = v_USBDeviceInitialize(long_4);

		int_1 = int_3 + int_5;
		float_2 = float_2 + float_1;
		double_3 = double_2 + double_2;
		if(1)
		{
			v__String(long_3);

			short_1 = short_1 * short_1;
			char_2 = char_1 + char_2;
		}
		double_3 = double_1 * double_3;
		if(1)
		{
			int_1 = v_USBDeviceFactoryGetDevice(long_4,-1 );

			char_2 = char_2;
		}
		if(1)
		{
			short_2 = short_1 + short_2;
			float_1 = v_USBDeviceGetEndpoint0(int_5);

			int_6 = int_1 * int_4;
		}
		short_1 = v_malloc(double_4);

		long_2 = long_5;
		if(1)
		{
		}
		if(1)
		{
			int_5 = int_3 + int_6;
			int_3 = v_DWHCIDeviceControlMessage(float_3,double_4,double_2,float_2,unsigned_int_2,double_5,double_6,-1 );

			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
			double_1 = double_2 * double_7;
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
		if(1)
		{
			float_3 = float_2 + float_1;
		}
		if(1)
		{
			long_4 = long_5 + long_1;
		}
		if(1)
		{
			int_1 = int_2 + int_3;
		}
		double_7 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_2;
		long_2 = long_3;
		unsigned_int_4 = unsigned_int_6 + unsigned_int_3;
		if(1)
		{
			int_1 = int_3 * int_1;
			float_4 = float_2;
			float_1 = float_2 + float_1;
			int_2 = int_1;
		}
		char_2 = v_USBDeviceGetAddress(unsigned_int_3);

		long_5 = long_1 + long_4;
		int_5 = int_3 * int_7;
		long_3 = long_4;
		float_5 = float_5 + float_2;
		short_1 = short_2 + short_3;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int int_8 = 1;
		if(1)
		{
			int_5 = v_USBStandardHubGetDeviceNames(unsigned_int_2);

			unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		}
		char_1 = char_1 + char_1;
		if(1)
		{
			short short_5 = 1;
			short_5 = short_4 + short_2;
			long_3 = long_2 + long_4;
			v_MsDelay(long_6);

			int_2 = int_6 + int_8;
			if(1)
			{
				int_9 = int_5 * int_6;
				long_6 = long_5 + long_2;
			}
			unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
		}
		if(1)
		{
			double double_8 = 1;
			int_2 = int_8 + int_7;
			float_3 = float_2 + float_2;
			double_3 = double_4 * double_1;
			double_8 = double_3 + double_2;
		}
	}
	short_2 = v_USBDeviceGetHost(float_4);

	long_2 = long_4 * long_2;
	v_free();

	int_3 = int_9 + int_10;
	if(1)
	{
		float_6 = float_3 * float_6;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		int int_11 = 1;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int_10 = int_2 + int_2;
		}
		v_USBDevice(unsigned_int_5);

		double_4 = double_9;
		int_9 = int_10 * int_11;
	}
	unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
	int_2 = int_4 + int_12;
	double_10 = double_9 * double_7;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_7 = unsigned_int_6 + unsigned_int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			double double_11 = 1;
			int int_14 = 1;
			v_LogWrite(short_1,short_4,int_6,double_1,-1 );

			unsigned_int_8 = unsigned_int_8;
			double_11 = double_5 * double_6;
			v__USBDevice(int_13);

			int_14 = int_4;
		}
	}
	return float_6;
}
int v_USBConfigurationParserGetDescriptor( float parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_1 * double_1;
	char_2 = char_1 * char_2;
	float_2 = float_1 + float_1;
	return int_1;
}
char v_USBDeviceGetDescriptor( int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	short_2 = short_1 * short_1;
	int_1 = v_USBConfigurationParserGetDescriptor(float_1,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return char_2;
}
int v_USBDeviceGetDeviceDescriptor( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_2 = short_1 + short_1;
	int_2 = int_1 + int_2;
	return int_1;
}
void v_USBStandardHubConfigure( float parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	int int_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	double double_7 = 1;
	float float_4 = 1;
	double double_8 = 1;
	int_1 = v_USBDeviceGetDeviceDescriptor(unsigned_int_1);

	char_1 = v_USBDeviceGetDescriptor(int_1,unsigned_int_1);

	v_USBDeviceConfigure(-1 );

	int_2 = v_DWHCIDeviceGetDescriptor(long_1,unsigned_int_2,char_1,float_1,int_2,char_2);

	short_2 = short_1 * short_1;
	v_USBDeviceConfigurationError(long_1,char_3);

	short_2 = v_malloc(double_1);

	v_free();

	long_1 = long_2 + long_2;
	short_1 = v_USBDeviceGetHost(float_2);

	double_3 = double_1 + double_2;
	v_LogWrite(short_3,short_3,int_2,double_4,-1 );

	float_3 = v_USBDeviceGetEndpoint0(int_3);

	double_5 = double_6;
	int_4 = v_DWHCIDeviceControlMessage(float_2,double_7,double_4,float_4,unsigned_int_2,double_8,double_8,-1 );

	float_3 = v_USBStandardHubEnumeratePorts(double_3);

}
void v_USBEndpointCopy( short parameter_1,long parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_5 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_4 = double_3 * double_1;
	char_1 = char_2;
	short_1 = short_1 + short_1;
	short_2 = short_1;
	int_2 = int_1 + int_2;
	short_1 = short_3;
	int_3 = int_3 + int_3;
	double_3 = double_5;
}
void v_USBStringCopy( short parameter_1,double parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short_1 = v_malloc(double_1);

	short_2 = short_1 + short_1;
	char_3 = char_1 + char_2;
	short_1 = v_memcpy(char_2,int_1);

	long_1 = long_1 + long_2;
	v_String2(short_1,int_1);

	float_3 = float_1 + float_2;
	if(1)
	{
		double double_2 = 1;
		char char_4 = 1;
		double_1 = double_1 + double_2;
		int_2 = int_2 + int_2;
		char_1 = char_4;
	}
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_1;
	int_2 = v_StringGet(float_1);

	float_5 = float_2 * float_4;
}
void v_USBDeviceCopy( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	double double_4 = 1;
	char_1 = char_1 * char_2;
	char_2 = char_3 + char_4;
	v_USBEndpointCopy(short_1,long_1,long_2);

	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_3 * char_4;
	int_2 = int_1 * int_1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	int_3 = int_3;
	char_1 = char_3;
	double_1 = double_1 * double_1;
	double_1 = double_1 + double_1;
	int_2 = int_1 + int_1;
	int_1 = int_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	v_USBStringCopy(short_1,double_1);

	v_USBConfigurationParser(unsigned_int_2);

	long_3 = long_2 + long_3;
	double_2 = double_2 + double_2;
	if(1)
	{
		float_1 = float_3 * float_1;
		short_1 = v_memcpy(char_1,int_3);

		int_3 = int_3 * int_4;
		unsigned_int_4 = unsigned_int_2;
	}
	if(1)
	{
		float float_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		float_4 = float_2 + float_3;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
		int_1 = int_2 + int_4;
		unsigned_int_7 = unsigned_int_5 + unsigned_int_6;
		unsigned_int_9 = unsigned_int_8 * unsigned_int_2;
		if(1)
		{
			double double_3 = 1;
			double double_5 = 1;
			double_2 = double_2 * double_3;
			short_2 = v_malloc(double_4);

			double_5 = double_1 + double_2;
			double_1 = double_1 + double_5;
		}
	}
}
void v_USBStandardHub( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_3 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_2 = char_1 + char_2;
	long_1 = long_2;
	v_USBDeviceCopy(float_1,int_1);

	long_3 = long_2;
	v_USBStandardHubConfigure(float_1);

	char_2 = char_1 + char_3;
	int_3 = int_2 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_2 + float_1;
		float_2 = float_2;
	}
}
long v_GetDevice( float parameter_1,double parameter_2,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	long long_4 = 1;
	int_1 = int_1 * int_1;
	char_1 = char_1 * char_2;
	double_1 = double_1;
	char controller4vul_2097[3];
	fgets(controller4vul_2097 ,3 ,stdin);
	if( strcmp( controller4vul_2097, "}E") < 0)
	{
		v_USBMIDIDevice(char_3,uni_para);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		char_1 = char_2;
		double_1 = double_1;
		double_1 = double_2 + double_1;
	}
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		float_1 = float_2;
		short_1 = short_2;
		char_1 = char_4 * char_5;
		double_1 = double_3 + double_2;
	}
	if(1)
	{
		int_1 = int_1;
		float_3 = float_2;
		int_1 = int_2 * int_1;
		int_2 = int_3 + int_2;
	}
	if(1)
	{
		float_2 = float_3 + float_1;
		double_3 = double_3;
		short_2 = short_2 + short_1;
		char_2 = char_3 + char_2;
	}
	if(1)
	{
		double double_4 = 1;
		float_1 = float_1 * float_2;
		long_1 = long_1;
		double_2 = double_3 + double_4;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		float float_5 = 1;
		float_4 = float_2 + float_3;
		int_1 = int_4;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		float_5 = float_2 + float_1;
	}
	if(1)
	{
		double double_5 = 1;
		float_4 = float_2 * float_2;
		double_5 = double_2 + double_2;
		int_4 = int_3 * int_1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
		int_3 = int_1 * int_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
		short_2 = short_2 * short_1;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_2 * long_1;
	}
	int_5 = int_2;
	int_1 = int_3 * int_2;
	return long_4;
}
int v_USBDeviceFactoryGetDevice( long parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 + int_1;
	int_1 = int_1 + int_2;
	char controller4vul_2096[2];
	fgets(controller4vul_2096 ,2 ,stdin);
	if( strcmp( controller4vul_2096, "x") < 0)
	{
		long_1 = v_GetDevice(float_1,double_1,uni_para);

	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_2;
}
void v_StringAppend( long parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 + double_2;
	if(1)
	{
		long long_1 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	unsigned_int_2 = unsigned_int_2;
	char_1 = char_2;
	if(1)
	{
		char char_3 = 1;
		unsigned int unsigned_int_3 = 1;
		char_3 = char_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	long_2 = long_4;
	short_1 = short_1 + short_1;
}
char v_StringGetLength()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	return char_1;
}
int v_StringCompare( long parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short_1 = short_2;
	return int_1;
}
char v_StringSet( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
		double double_1 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	int_3 = int_1 * int_2;
	double_2 = double_4;
	long_1 = long_2;
	return char_1;
}
void v_USBDeviceGetName( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	long_1 = long_2;
	short_2 = short_1 * short_2;
	v_String(long_3);

	short_2 = short_1 * short_3;
	double_2 = double_1 * double_2;
	int_2 = int_1 + int_1;
	v_StringFormat(char_1,short_1,float_1);

	int_2 = int_3 + int_4;
	if(1)
	{
		char_1 = v_StringSet(int_3,char_1);

		float_1 = float_1;
	}
	short_3 = v_malloc(double_1);

	int_1 = int_1 + int_4;
	int_1 = int_5 * int_6;
	int_3 = int_3;
	char_2 = char_1 + char_1;
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	int_6 = int_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	long_2 = long_2;
	double_1 = double_3 * double_2;
}
int v_USBStandardHubGetDeviceNames( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_1 = 1;
	v_USBDeviceGetName(unsigned_int_1,int_1);

	v__String(long_1);

	double_2 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	short_2 = short_1 + short_1;
	v_free();

	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		v_String(long_1);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		int_2 = v_StringCompare(long_1,char_1);

		double_2 = double_3 + double_4;
		if(1)
		{
			if(1)
			{
				double double_5 = 1;
				double double_6 = 1;
				char_2 = v_StringSet(int_3,char_2);

				double_6 = double_1 * double_5;
			}
			short_1 = short_2 * short_1;
		}
		unsigned_int_3 = unsigned_int_2;
		short_3 = v_malloc(double_3);

		unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "6") > 0)
	{
		char char_3 = 1;
		char_2 = v_StringGetLength();

		char_3 = char_2 + char_2;
	}
	return int_4;
	v_StringAppend(long_1,unsigned_int_4);

	int_3 = v_StringGet(float_1);

}
void v__USBString( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long_2 = long_1 * long_2;
	short_1 = short_2;
	int_2 = int_1 + int_1;
	double_2 = double_1 * double_1;
	v__String(long_3);

	long_4 = long_2 * long_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "{") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		v_free();

		char_1 = char_1 + char_2;
	}
	double_2 = double_2 * double_1;
}
void v__USBEndpoint( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_2;
	char_1 = char_2;
}
void v__USBConfigurationParser( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short_1 = short_1 + short_2;
	short_3 = short_2 * short_2;
}
void v__USBDevice( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	double double_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
		char char_2 = 1;
		short_1 = short_1 + short_1;
		char_1 = char_2;
		v_free();

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		v__USBConfigurationParser(char_1);

		long_2 = long_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_2 = int_1 * int_1;
		int_3 = int_1;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "E-") > 0)
	{
		short short_3 = 1;
		short_3 = short_2 + short_2;
		v__USBEndpoint(short_2);

		double_1 = double_1;
		v__USBString(char_3);

		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	}
	double_2 = double_2 + double_1;
	short_5 = short_4 * short_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	long_2 = long_1 * long_2;
}
void v_debug_hexdump( unsigned int parameter_1,unsigned int parameter_2,long parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long_3 = long_1 + long_2;
	int_1 = int_1 * int_1;
	v_LoggerWrite(unsigned_int_1,int_2,long_2,long_4,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = v_LoggerGet();

	short_3 = short_1 * short_2;
}
void v_DebugHexdump( long parameter_1,float parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_debug_hexdump(unsigned_int_1,unsigned_int_2,long_1);

	int_2 = int_1 + int_1;
}
void v_USBConfigurationParserError( unsigned int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	v_LogWrite(short_1,short_2,int_1,double_1,-1 );

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_2;
	short_4 = short_2 + short_3;
	int_3 = int_2 * int_1;
	v_DebugHexdump(long_1,float_1,short_2);

}
void v_USBDeviceConfigurationError( long parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_2 = int_1 + int_1;
	v_USBConfigurationParserError(unsigned_int_1,unsigned_int_2);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	char_2 = char_1 * char_2;
}
short v_USBConfigurationParserIsValid( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_2;
	return short_1;
}
void v_USBConfigurationParser( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short_2 = short_1 * short_1;
}
void v_String2( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_1;
	short_3 = short_1 * short_2;
	short_4 = short_3 + short_1;
	int_3 = int_2 + int_2;
}
int v_USBStringGetFromDescriptor( short parameter_1,float parameter_2,float parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	short short_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float_1 = v_USBDeviceGetEndpoint0(int_1);

	v_String2(short_1,int_1);

	char_1 = char_1 * char_1;
	float_2 = float_1;
	if(1)
	{
		float_3 = float_2 * float_3;
	}
	char_2 = char_2 + char_2;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		double_2 = double_1 * double_1;
		short_3 = short_2 * short_4;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	int_1 = int_2 + int_3;
	char_1 = char_1 + char_1;
	v__String(long_1);

	double_3 = double_1 * double_3;
	unsigned_int_3 = unsigned_int_1;
	float_4 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_5 = float_1 + float_2;
		if(1)
		{
			short_4 = short_2 * short_4;
		}
		short_4 = v_malloc(double_1);

		int_4 = int_3;
	}
	v_free();

	unsigned_int_1 = unsigned_int_2;
	int_3 = v_DWHCIDeviceControlMessage(float_4,double_1,double_3,float_4,unsigned_int_4,double_2,double_2,-1 );

	double_4 = double_2 + double_1;
	float_4 = float_5 * float_3;
	short_5 = v_USBDeviceGetHost(float_2);

	int_5 = int_5 + int_4;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_5;
	char_3 = char_2 + char_3;
	char_1 = char_4 + char_3;
	return int_1;
}
float v_USBDeviceGetEndpoint0( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_1;
	float_1 = float_1;
	return float_2;
}
short v_USBDeviceGetHost( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	return short_1;
}
long v_USBStringGetLanguageID( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_1;
	short_1 = v_malloc(double_1);

	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		short_3 = short_2 * short_2;
	}
	int_1 = int_2;
	if(1)
	{
		int_2 = v_DWHCIDeviceGetDescriptor(long_1,unsigned_int_3,char_1,float_1,int_2,char_2);

		short_4 = short_2 + short_4;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "IT") < 0)
	{
		double double_3 = 1;
		short_5 = short_2 + short_1;
		short_1 = v_USBDeviceGetHost(float_1);

		double_3 = double_1 * double_3;
		short_4 = short_3 + short_4;
		if(1)
		{
			v_free();

			short_4 = short_5 * short_4;
		}
		if(1)
		{
			int_3 = int_2;
		}
	}
	int_3 = int_2 * int_4;
	char_2 = char_2 * char_3;
	float_1 = v_USBDeviceGetEndpoint0(int_1);

	short_5 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_2 = 1;
			long_2 = long_2 * long_2;
		}
	}
	unsigned_int_3 = unsigned_int_5;
	int_4 = int_2 * int_2;
	return long_3;
}
void v_USBDeviceSetAddress( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 * int_2;
	long_1 = long_1 + long_2;
}
void v_DWHCIDeviceSetAddress( long parameter_1,double parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int_1 = v_DWHCIDeviceControlMessage(float_1,double_1,double_1,float_2,unsigned_int_1,double_1,double_2,-1 );

	int_2 = int_3;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	v_MsDelay(long_1);

}
void v_USBEndpointSetMaxPacketSize( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_1;
	char_1 = char_1 * char_1;
}
int v_DWHCIDeviceGetDescriptor( long parameter_1,unsigned int parameter_2,char parameter_3,float parameter_4,int parameter_6,char parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 * double_2;
	return int_1;
	int_1 = v_DWHCIDeviceControlMessage(float_1,double_1,double_1,float_1,unsigned_int_1,double_1,double_1,-1 );

}
unsigned int v_USBDeviceInitialize( long parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_10 = 1;
	float float_4 = 1;
	double double_6 = 1;
	long long_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	float float_5 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_11 = 1;
	long long_5 = 1;
	double double_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_12 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1;
	double_2 = double_1 + double_2;
	v_USBDeviceConfigurationError(long_1,char_1);

	double_4 = double_3 * double_1;
	double_1 = double_5 * double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_5;
		unsigned_int_3 = unsigned_int_2;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_5;
	}
	if(1)
	{
		int_1 = v_DWHCIDeviceGetDescriptor(long_1,unsigned_int_5,char_1,float_1,int_2,char_1);

		short_1 = v_USBConfigurationParserIsValid(unsigned_int_6);

		short_2 = short_2 * short_1;
		unsigned_int_5 = unsigned_int_7 + unsigned_int_6;
		char_1 = char_1 * char_2;
	}
	unsigned_int_4 = unsigned_int_8;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 + long_1;
		char_3 = char_3 * char_2;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
	}
	int_2 = int_1 * int_2;
	if(1)
	{
		float_3 = float_2 * float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		v_USBDeviceSetAddress(unsigned_int_7,int_3);

		unsigned_int_8 = unsigned_int_4 + unsigned_int_9;
	}
	long_1 = v_USBStringGetLanguageID(unsigned_int_10);

	char_2 = char_2 + char_1;
	if(1)
	{
		float_3 = float_2 * float_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_10 * unsigned_int_10;
		}
		if(1)
		{
			double double_7 = 1;
			double_7 = double_3 * double_6;
		}
	}
	v_LogWrite(short_2,short_1,int_2,double_5,-1 );

	long_3 = long_1 * long_1;
	int_4 = int_4;
	long_4 = long_1 + long_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 + unsigned_int_7;
		double_5 = double_1 * double_6;
		v_USBEndpointSetMaxPacketSize(short_2,float_5);

		double_2 = double_3 + double_5;
	}
	if(1)
	{
		short_2 = v_malloc(double_8);

		v_free();

		double_3 = double_6 + double_3;
		unsigned_int_11 = unsigned_int_7 * unsigned_int_7;
		long_5 = long_4 * long_3;
	}
	double_5 = double_9 + double_9;
	unsigned_int_10 = unsigned_int_10;
	double_10 = double_5 * double_8;
	char_3 = char_3 + char_3;
	char controller_11[3];
	fgets(controller_11 ,3 ,stdin);
	if( strcmp( controller_11, "{l") > 0)
	{
		int_1 = v_USBStringGetFromDescriptor(short_2,float_4,float_2);

		v_USBConfigurationParser(unsigned_int_3);

		char_1 = char_2 + char_3;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
		v_DWHCIDeviceSetAddress(long_5,double_10,unsigned_int_1);

		unsigned_int_11 = unsigned_int_2 * unsigned_int_4;
	}
	unsigned_int_12 = unsigned_int_6 * unsigned_int_8;
	double_4 = double_4 * double_8;
	int_5 = int_5 * int_6;
	double_2 = double_2 + double_8;
	if(1)
	{
		int_5 = int_1 + int_4;
	}
	return unsigned_int_7;
}
void v_USBString( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	float_3 = float_1 + float_2;
	v_String(long_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	long_1 = long_1 * long_1;
	short_1 = v_malloc(double_1);

	float_2 = float_2 + float_1;
	int_5 = int_3 * int_4;
}
void v_USBEndpoint( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_1;
	int_4 = int_3 * int_2;
	unsigned_int_4 = unsigned_int_1;
	char_1 = char_1 + char_1;
}
void v__USBRequest()
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_1;
	short_1 = short_1 * short_2;
	char_3 = char_4;
	int_1 = int_1;
	long_1 = long_1 * long_1;
}
unsigned int v_USBRequestGetResultLength( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_2;
	short_2 = short_1 + short_2;
	return unsigned_int_1;
}
unsigned int v_USBEndpointIsDirectionIn( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_2;
	return unsigned_int_1;
}
int v_USBRequestGetStatus( double parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1;
	return int_1;
}
void v_DWHCIDeviceEnableChannelInterrupt( unsigned int parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int_2 = int_1 + int_1;
	float_3 = float_1 + float_2;
	v_uspi_EnterCritical();

	v_uspi_LeaveCritical();

	short_3 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 * long_2;
	v_DWHCIRegister(long_1);

	int_1 = v_DWHCIRegisterRead(short_2);

	v_DWHCIRegisterOr(unsigned_int_2,char_1);

	v_DWHCIRegisterWrite();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_2;
	short_3 = short_4 + short_3;
	v__DWHCIRegister(long_1);

	float_5 = float_1 + float_4;
}
unsigned int v_DWHCIFrameSchedulerNoSplitIsOddFrame( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	char_1 = char_1 + char_1;
	return unsigned_int_1;
}
void v_DWHCIFrameSchedulerNoSplitWaitForFrame( float parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	v_DWHCIRegister(long_1);

	int_1 = v_DWHCIRegisterRead(short_1);

	v__DWHCIRegister(long_2);

}
void v_DWHCIFrameSchedulerNoSplitTransactionComplete( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_1;
}
void v_DWHCIFrameSchedulerNoSplitCompleteSplit()
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_2;
}
void v_DWHCIFrameSchedulerNoSplitStartSplit()
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
void v__DWHCIFrameSchedulerNoSplit( char parameter_1)
{
}
void v_DWHCIFrameSchedulerNoSplit( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = v_DWHCIFrameSchedulerNoSplitIsOddFrame(int_1);

	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	char_1 = char_1 * char_2;
	v_DWHCIFrameSchedulerNoSplitCompleteSplit();

	char_4 = char_3 * char_2;
	short_1 = short_1 + short_2;
	long_1 = long_1;
	v__DWHCIFrameSchedulerNoSplit(char_2);

	int_1 = int_1 + int_2;
	float_1 = float_1 * float_1;
	v_DWHCIFrameSchedulerNoSplitWaitForFrame(float_1);

	double_2 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	v_DWHCIFrameSchedulerNoSplitStartSplit();

	v_DWHCIFrameSchedulerNoSplitTransactionComplete(long_1,int_1);

}
char v_DWHCIFrameSchedulerNonPeriodicIsOddFrame( unsigned int parameter_1)
{
	char char_1 = 1;
	return char_1;
}
void v_DWHCIFrameSchedulerNonPeriodicWaitForFrame( long parameter_1)
{
}
void v_DWHCIFrameSchedulerNonPeriodicTransactionComplete( char parameter_1,int parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	long_1 = long_1 * long_2;
	int_1 = int_1 * int_1;
	int_4 = int_2 * int_3;
	short_1 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int_5 = int_1 * int_1;
	}
	char controller4vul_2110[2];
	fgets(controller4vul_2110 ,2 ,stdin);
	if( strcmp( controller4vul_2110, "*") > 0)
	{
		char controller4vul_2111[3];
		fgets(controller4vul_2111 ,3 ,stdin);
		if( strcmp( controller4vul_2111, "lj") > 0)
		{
			double double_2 = 1;
			v_LogWrite(short_3,short_2,int_4,double_1,uni_para);

			double_3 = double_2 + double_1;
		}
		if(1)
		{
			short_4 = short_1;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_5 = 1;
			short short_6 = 1;
			short short_7 = 1;
			double double_4 = 1;
			short_7 = short_5 + short_6;
			double_4 = double_1;
		}
		if(1)
		{
			int_5 = int_5 + int_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double_3 = double_1 * double_1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	unsigned_int_5 = unsigned_int_5 + unsigned_int_4;
	int_4 = int_6 + int_6;
	short_3 = short_4 * short_4;
}
short v_DWHCIFrameSchedulerNonPeriodicCompleteSplit( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	short short_1 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_2;
	double_1 = double_1 * double_1;
	v_usDelay(long_1);

	int_1 = int_1 + int_2;
	double_4 = double_2 * double_3;
	int_4 = int_2 * int_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	int_1 = int_2 * int_3;
	int_5 = int_2 * int_5;
	int_2 = int_2 + int_1;
	double_5 = double_4 + double_5;
	double_3 = double_3 * double_1;
	return short_1;
}
void v_DWHCIFrameSchedulerNonPeriodicStartSplit( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_2 = long_1 * long_2;
	double_1 = double_2;
	double_2 = double_3 * double_3;
}
void v__DWHCIFrameSchedulerNonPeriodic( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_2;
	int_1 = int_2;
}
void v_DWHCIFrameSchedulerNonPeriodic( char parameter_1,int uni_para)
{
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	v_DWHCIFrameSchedulerNonPeriodicTransactionComplete(char_1,int_1,uni_para);

	double_1 = double_1 * double_1;
	float_1 = float_1;
	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 * char_1;
	long_4 = long_3 + long_3;
	float_1 = float_1 + float_1;
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
}
float v_DWHCIFrameSchedulerPeriodicIsOddFrame()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 + double_2;
	char_1 = char_1 * char_2;
	return float_1;
}
void v_DWHCIFrameSchedulerPeriodicWaitForFrame( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	double_3 = double_1 * double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "1<") > 0)
	{
		if(1)
		{
			char char_1 = 1;
			char char_3 = 1;
			char_3 = char_1 + char_2;
		}
		if(1)
		{
			v_DWHCIRegister(long_1);

			int_1 = v_DWHCIRegisterRead(short_1);

			double_3 = double_2 + double_3;
		}
	}
	v__DWHCIRegister(long_2);

	char_4 = char_4 * char_2;
}
void v_DWHCIFrameSchedulerPeriodicTransactionComplete( long parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	float_3 = float_1 * float_2;
	v_LogWrite(short_1,short_2,int_1,double_1,-1 );

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_2 * short_1;
	v_usDelay(long_1);

	double_3 = double_1 * double_2;
	int_1 = int_1 + int_1;
	if(1)
	{
		int_3 = int_2 * int_3;
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
			int_3 = int_4 * int_4;
		}
		if(1)
		{
			float_3 = float_2;
		}
	}
	if(1)
	{
		short_2 = short_1 * short_1;
		int_1 = int_3 * int_2;
	}
	if(1)
	{
		char char_3 = 1;
		int_1 = int_4 + int_3;
		char_3 = char_3 + char_3;
	}
	long_1 = long_2 * long_3;
	int_5 = int_3 + int_5;
	short_3 = short_3 * short_2;
}
float v_DWHCIFrameSchedulerPeriodicCompleteSplit( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	long long_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_3;
	long_2 = long_1 * long_1;
	char_1 = char_1 + char_1;
	double_2 = double_1 * double_2;
	int_2 = int_1 * int_1;
	float_1 = float_1 + float_1;
	double_2 = double_3 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_4 = double_4 * double_1;
	long_1 = long_3 + long_2;
	char_1 = char_2 * char_3;
	int_2 = int_1;
	return float_2;
}
void v_DWHCIFrameSchedulerPeriodicStartSplit( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_3 = short_1 * short_2;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 + long_2;
}
void v__DWHCIFrameSchedulerPeriodic()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1;
}
void v_DWHCIFrameSchedulerPeriodic( float parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	float float_2 = 1;
	double double_4 = 1;
	v_DWHCIFrameSchedulerPeriodicStartSplit(char_1);

	v_DWHCIFrameSchedulerPeriodicTransactionComplete(long_1,unsigned_int_1);

	int_1 = int_2;
	short_1 = short_1 * short_1;
	float_1 = v_DWHCIFrameSchedulerPeriodicIsOddFrame();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_3 * int_3;
	double_3 = double_1 * double_2;
	v_DWHCIFrameSchedulerPeriodicWaitForFrame(unsigned_int_2);

	long_3 = long_1 * long_2;
	int_2 = int_4;
	long_4 = long_4 * long_2;
	float_1 = v_DWHCIFrameSchedulerPeriodicCompleteSplit(float_2);

	int_1 = int_4 * int_4;
	double_4 = double_1;
	v__DWHCIFrameSchedulerPeriodic();

}
short v_USBRequestGetBuffer( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return short_1;
}
char v_USBEndpointGetMaxPacketSize( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short_1 = short_2;
	return char_1;
}
char v_USBDeviceGetSpeed( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float_1 = float_2;
	return char_1;
}
void v_USBEndpointGetDevice( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_2;
	int_1 = int_1 + int_2;
}
void v_DWHCITransferStageData(int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_4 = 1;
	int_1 = int_1 * int_1;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_1 + long_2;
	long_3 = long_3 + long_3;
	int_2 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_3;
	int_3 = int_2 * int_1;
	int_4 = int_3 + int_4;
	int_1 = int_5 + int_4;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	double_1 = double_1 * double_1;
	float_1 = float_1;
	int_1 = int_1 + int_4;
	double_3 = double_2 + double_1;
	int_4 = int_6 + int_5;
	double_1 = double_3 * double_3;
	short_1 = short_2 * short_1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
	char controller4vul_2107[2];
	fgets(controller4vul_2107 ,2 ,stdin);
	if( strcmp( controller4vul_2107, "n") < 0)
	{
		if(1)
		{
			char_3 = char_1 + char_2;
			long_3 = long_1;
		}
		if(1)
		{
			int_6 = int_3 + int_2;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		}
		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
		char controller4vul_2108[2];
		fgets(controller4vul_2108 ,2 ,stdin);
		if( strcmp( controller4vul_2108, "O") > 0)
		{
			char controller4vul_2109[2];
			fgets(controller4vul_2109 ,2 ,stdin);
			if( strcmp( controller4vul_2109, "T") < 0)
			{
				float float_2 = 1;
				v_DWHCIFrameSchedulerNonPeriodic(char_4,uni_para);

				float_1 = float_2 * float_3;
			}
			if(1)
			{
				char_3 = char_1;
			}
			unsigned_int_6 = unsigned_int_3 + unsigned_int_2;
		}
		if(1)
		{
			float float_4 = 1;
			float float_5 = 1;
			double_3 = double_2 * double_3;
			float_4 = float_5;
		}
	}
	if(1)
	{
		char char_5 = 1;
		char char_6 = 1;
		float float_6 = 1;
		unsigned_int_7 = unsigned_int_1 * unsigned_int_7;
		char_1 = char_5 + char_1;
		int_6 = int_6 * int_7;
		short_1 = short_2 + short_1;
		unsigned_int_6 = unsigned_int_3;
		char_2 = char_6 * char_3;
		float_6 = float_3 + float_6;
		int_7 = int_8;
	}
	int_7 = int_8 * int_3;
	double_4 = double_3 + double_3;
	if(1)
	{
		int int_9 = 1;
		if(1)
		{
			int_1 = int_3;
			double_2 = double_3 + double_3;
		}
		if(1)
		{
			double double_5 = 1;
			double double_6 = 1;
			double_4 = double_5 * double_6;
			unsigned_int_4 = unsigned_int_5 * unsigned_int_6;
		}
		int_4 = int_2 + int_9;
	}
	if(1)
	{
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			unsigned int unsigned_int_8 = 1;
			short_4 = short_2 + short_3;
			unsigned_int_7 = unsigned_int_8 + unsigned_int_1;
			unsigned_int_8 = unsigned_int_1 * unsigned_int_6;
		}
	}
}
char v_DWHCIDeviceAllocateChannel( float parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_1;
	v_uspi_EnterCritical();

	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int_2 = int_1 + int_1;
			v_uspi_LeaveCritical();

			int_4 = int_3 + int_2;
		}
		double_2 = double_1 + double_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	return char_1;
}
int v_DWHCIDeviceTransferStageAsync( char parameter_1,int parameter_2,float parameter_3,short parameter_4,int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	float float_3 = 1;
	double double_5 = 1;
	double_1 = double_1 + double_1;
	float_2 = float_1 + float_2;
	double_3 = double_2 + double_2;
	if(1)
	{
	}
	double_1 = double_3 * double_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_3 * double_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	short_3 = short_1 + short_2;
	int_1 = int_1;
	if(1)
	{
		float_1 = float_1 + float_3;
	}
	char controller4vul_2105[3];
	fgets(controller4vul_2105 ,3 ,stdin);
	if( strcmp( controller4vul_2105, "<4") < 0)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		char controller4vul_2106[3];
		fgets(controller4vul_2106 ,3 ,stdin);
		if( strcmp( controller4vul_2106, "#1") < 0)
		{
			long long_1 = 1;
			short short_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			v_DWHCITransferStageData(uni_para);

			long_1 = long_1 * long_1;
			short_3 = short_4 + short_4;
			unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
			float_2 = float_3 * float_2;
			long_1 = long_1 + long_1;
		}
		unsigned_int_7 = unsigned_int_4 + unsigned_int_3;
		double_4 = double_1 * double_4;
		unsigned_int_4 = unsigned_int_8 + unsigned_int_4;
		short_2 = short_1 + short_2;
		float_1 = float_1 * float_1;
	}
	double_3 = double_5;
	return int_1;
}
void v_DWHCIDeviceCompletionRoutine( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 * char_2;
	long_2 = long_1 + long_2;
}
void v_USBRequestSetCompletionRoutine( float parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	int_2 = int_1 * int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	double_1 = double_1;
}
char v_DWHCIDeviceTransferStage( unsigned int parameter_1,float parameter_2,double parameter_3,char parameter_4,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	int_1 = v_DWHCIDeviceTransferStageAsync(char_1,int_2,float_1,short_1,uni_para);

	double_2 = double_1 + double_1;
	short_2 = short_2 * short_2;
	return char_1;
}
void v_USBRequestGetBufLen( double parameter_1)
{
	int int_1 = 1;
	int_1 = int_1;
}
double v_USBRequestGetSetupData( int parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long_1 = v_USBEndpointGetType(short_1);

	float_1 = float_1 + float_1;
	int_2 = int_1 + int_2;
	long_2 = long_1 + long_1;
	return double_1;
}
void v_DWHCIDeviceSubmitBlockingRequest( double parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_2;
	short_2 = short_1 + short_2;
	char_3 = char_1 * char_2;
	int_2 = int_1 + int_2;
	char controller4vul_2101[3];
	fgets(controller4vul_2101 ,3 ,stdin);
	if( strcmp( controller4vul_2101, "Z2") > 0)
	{
		double double_1 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
		double_1 = double_3 * double_1;
		if(1)
		{
			int_2 = int_2;
			if(1)
			{
			}
		}
		char controller4vul_2102[2];
		fgets(controller4vul_2102 ,2 ,stdin);
		if( strcmp( controller4vul_2102, "s") < 0)
		{
			char controller4vul_2103[2];
			fgets(controller4vul_2103 ,2 ,stdin);
			if( strcmp( controller4vul_2103, "O") < 0)
			{
				char controller4vul_2104[2];
				fgets(controller4vul_2104 ,2 ,stdin);
				if( strcmp( controller4vul_2104, "z") < 0)
				{
					char_3 = v_DWHCIDeviceTransferStage(unsigned_int_1,float_1,double_2,char_1,uni_para);

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
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_1 = long_1 * long_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
		}
	}
	float_1 = float_1 * float_1;
}
void v_USBRequest( unsigned int parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_1 = double_1 + double_1;
	long_3 = long_1 + long_2;
	int_2 = int_1 + int_1;
	long_2 = long_3 * long_2;
	int_2 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_3 * long_2;
	double_2 = double_1 * double_1;
	short_1 = short_1 * short_1;
	long_3 = long_4 + long_2;
	double_1 = double_1 * double_2;
	short_3 = short_2 * short_3;
}
int v_DWHCIDeviceControlMessage( float parameter_1,double parameter_2,double parameter_3,float parameter_4,unsigned int parameter_5,double parameter_6,double parameter_8,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_6 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_2;
	int_2 = int_1 * int_1;
	long_1 = long_1 + long_2;
	long_3 = long_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	int_1 = int_1 * int_2;
	char_2 = char_1 * char_1;
	double_1 = double_3 + double_2;
	char controller4vul_2100[3];
	fgets(controller4vul_2100 ,3 ,stdin);
	if( strcmp( controller4vul_2100, "fF") > 0)
	{
		int int_3 = 1;
		int int_5 = 1;
		v_DWHCIDeviceSubmitBlockingRequest(double_2,int_1,uni_para);

		int_5 = int_3 + int_4;
	}
	int_4 = int_4 * int_1;
	float_1 = float_2;
	return int_6;
}
int v_DWHCIDeviceSetConfiguration( short parameter_1,int parameter_2,char parameter_3,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float_2 = float_1 * float_2;
	char controller4vul_2099[3];
	fgets(controller4vul_2099 ,3 ,stdin);
	if( strcmp( controller4vul_2099, "`u") < 0)
	{
		int_1 = v_DWHCIDeviceControlMessage(float_1,double_1,double_1,float_1,unsigned_int_1,double_2,double_1,uni_para);

	}
	int_2 = int_1 * int_1;
	return int_1;
}
void v_USBDeviceConfigure(int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char_2 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1;
	char controller4vul_2098[3];
	fgets(controller4vul_2098 ,3 ,stdin);
	if( strcmp( controller4vul_2098, "c9") < 0)
	{
		int_1 = v_DWHCIDeviceSetConfiguration(short_1,int_2,char_2,uni_para);

	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
}
void v_USBDevice( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	float float_4 = 1;
	double_3 = double_1 + double_2;
	float_1 = float_1 * float_1;
	float_1 = float_2 * float_1;
	v_USBDeviceConfigure(-1 );

	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1;
	double_4 = double_1 + double_3;
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_1 + char_1;
	short_1 = v_malloc(double_3);

	char_3 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_1 + long_2;
	double_5 = double_3 * double_3;
	int_3 = int_3;
	double_5 = double_2;
	float_2 = float_2 + float_3;
	unsigned_int_2 = unsigned_int_1;
	short_2 = short_1 + short_1;
	v_USBString(double_2);

	short_1 = short_1 * short_2;
	v_USBEndpoint(unsigned_int_1);

	float_4 = float_4 + float_1;
}
long v_DWHCIDeviceGetPortSpeed( short parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int_1 = v_DWHCIRegisterRead(short_1);

	unsigned_int_1 = unsigned_int_2;
	int_1 = int_2 * int_1;
	long_2 = long_1 + long_1;
	int_1 = int_2 * int_1;
	char_3 = char_1 * char_2;
	char_3 = char_2 + char_2;
	double_3 = double_1 + double_2;
	v_DWHCIRegister(long_1);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	float_2 = float_1 + float_1;
	float_2 = float_3 * float_4;
	long_2 = long_1;
	v__DWHCIRegister(long_3);

	double_3 = double_2 + double_3;
	return long_4;
}
float v_DWHCIRootPortInitialize( double parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	char char_4 = 1;
	float float_2 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		char_3 = char_1 + char_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_2;
	short_3 = short_1 * short_1;
	char_2 = char_4;
	if(1)
	{
		float float_1 = 1;
		int_1 = int_2 * int_1;
		short_3 = short_2;
		float_1 = float_2;
	}
	char_7 = char_5 * char_6;
	float_2 = float_3;
	float_2 = float_3 + float_4;
	double_3 = double_1 * double_2;
	double_3 = double_1;
	char_8 = char_3;
	char controller4vul_2094[3];
	fgets(controller4vul_2094 ,3 ,stdin);
	if( strcmp( controller4vul_2094, "Ud") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		int_1 = int_1 * int_2;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		char controller4vul_2095[3];
		fgets(controller4vul_2095 ,3 ,stdin);
		if( strcmp( controller4vul_2095, "oT") < 0)
		{
			unsigned int unsigned_int_6 = 1;
			int_1 = v_USBDeviceFactoryGetDevice(long_1,uni_para);

			int_2 = int_1 * int_3;
			unsigned_int_6 = unsigned_int_6 * unsigned_int_5;
			int_4 = int_2 * int_4;
			unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
		}
		char_5 = char_3 + char_3;
	}
	if(1)
	{
		float float_5 = 1;
		float_2 = float_5 + float_5;
		double_1 = double_3 * double_3;
		int_1 = int_4;
		int_4 = int_2 * int_2;
	}
	if(1)
	{
		double_1 = double_2 + double_2;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
		int_3 = int_2 + int_4;
		char_7 = char_7;
		double_1 = double_3 + double_3;
	}
	return float_3;
}
short v_DWHCIDeviceEnableRootPort( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	v_DWHCIRegisterOr(unsigned_int_1,char_1);

	int_1 = int_1;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		long_3 = long_1 + long_2;
	}
	v__DWHCIRegister(long_3);

	v_DWHCIRegisterWrite();

	short_1 = short_1 * short_2;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	int_1 = int_2 * int_1;
	unsigned_int_4 = v_DWHCIDeviceWaitForBit(short_3,int_3,int_2,short_2,long_2);

	long_2 = long_2 + long_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	v_MsDelay(long_3);

	double_4 = double_4 + double_4;
	v_DWHCIRegisterAnd(int_3,short_1);

	char_3 = char_2 + char_3;
	short_2 = short_3 * short_1;
	v_DWHCIRegister(long_2);

	int_4 = v_DWHCIRegisterRead(short_3);

	unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
	int_3 = int_2 * int_1;
	return short_3;
}
void v_DWHCIDeviceEnableHostInterrupts( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v__DWHCIRegister(long_1);

	float_1 = float_1 * float_2;
	double_2 = double_1 + double_1;
	v_DWHCIRegisterWrite();

	int_2 = int_1 * int_1;
	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1;
	double_3 = double_2 + double_2;
	float_4 = float_3 * float_3;
	v_DWHCIDeviceEnableCommonInterrupts();

	int_3 = v_DWHCIRegisterRead(short_2);

	unsigned_int_3 = unsigned_int_3;
	v_DWHCIRegister2(long_2,unsigned_int_1,char_1);

	v_DWHCIRegisterOr(unsigned_int_4,char_2);

}
void v_DWHCIDeviceFlushRxFIFO( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_DWHCIRegister2(long_1,unsigned_int_1,char_1);

	double_1 = double_1 + double_2;
	v_DWHCIRegisterWrite();

	v__DWHCIRegister(long_1);

	long_1 = long_2 * long_2;
	unsigned_int_1 = v_DWHCIDeviceWaitForBit(short_1,int_1,int_1,short_2,long_2);

	int_1 = int_1 * int_1;
	double_1 = double_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		v_DWHCIRegisterOr(unsigned_int_2,char_1);

		float_1 = float_2;
	}
	double_1 = double_2 * double_2;
	v_usDelay(long_3);

}
void v_TimerusDelay( long parameter_1,char parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	v_DelayLoop(int_1);

	short_2 = short_1 + short_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long_2 = long_1 + long_1;
		int_1 = int_2 + int_3;
	}
}
void v_usDelay( long parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	v_TimerusDelay(long_1,char_1);

	char_3 = char_2 * char_1;
	unsigned_int_1 = v_TimerGet();

}
void v_DWHCIDeviceFlushTxFIFO( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	v__DWHCIRegister(long_1);

	double_1 = double_1 + double_2;
	short_2 = short_1 + short_2;
	short_1 = short_1;
	v_usDelay(long_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_DWHCIRegisterOr(unsigned_int_2,char_1);

	v_DWHCIRegisterWrite();

	long_3 = long_3 * long_2;
	long_2 = long_2 + long_1;
	v_DWHCIRegisterAnd(int_1,short_1);

	float_2 = float_1 + float_1;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	unsigned_int_1 = v_DWHCIDeviceWaitForBit(short_2,int_1,int_1,short_1,long_1);

	int_1 = int_1;
	v_DWHCIRegister2(long_1,unsigned_int_1,char_1);

}
int v_DWHCIDeviceInitHost( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	char char_6 = 1;
	int int_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_7 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_6 = 1;
	char char_8 = 1;
	char char_9 = 1;
	char char_10 = 1;
	long long_7 = 1;
	long long_8 = 1;
	char char_11 = 1;
	int int_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_2;
	v_DWHCIRegisterWrite();

	float_1 = float_2;
	double_1 = double_1 + double_2;
	char_4 = char_1 * char_3;
	float_1 = float_2 + float_1;
	double_1 = double_2 + double_1;
	int_1 = v_DWHCIRegisterRead(short_1);

	double_3 = double_3 * double_1;
	v_DWHCIRegister(long_1);

	long_1 = long_1;
	v_DWHCIRegisterAnd(int_2,short_1);

	char_3 = char_3;
	int_2 = int_2 * int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		v_DWHCIRegister2(long_1,unsigned_int_1,char_5);

		long_3 = long_1 * long_2;
	}
	double_4 = double_5;
	double_5 = double_2;
	int_1 = int_2 + int_2;
	float_1 = float_2 * float_2;
	v_DWHCIRegisterOr(unsigned_int_3,char_2);

	double_3 = double_2 + double_5;
	double_3 = double_5 * double_6;
	double_1 = double_3 + double_6;
	int_2 = int_1 * int_1;
	short_4 = short_2 * short_3;
	char_3 = char_2;
	double_4 = double_3 + double_1;
	v_DWHCIDeviceFlushTxFIFO(short_3,int_3);

	char_2 = char_6 + char_4;
	int_2 = int_1 * int_4;
	long_5 = long_4 + long_2;
	unsigned_int_4 = unsigned_int_5;
	char_4 = char_1 * char_6;
	char_2 = char_7 * char_7;
	long_2 = v_DWHCIRegisterGet(long_3);

	double_8 = double_5 * double_7;
	v__DWHCIRegister(long_3);

	double_3 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
	if(1)
	{
		short short_5 = 1;
		short short_6 = 1;
		short_3 = short_5 * short_6;
		long_5 = long_1 * long_6;
	}
	long_2 = long_4 * long_3;
	v_DWHCIDeviceFlushRxFIFO(double_2);

	double_6 = double_4 * double_6;
	char_5 = char_8 * char_9;
	char_10 = char_1 + char_1;
	v_DWHCIDeviceEnableHostInterrupts(int_3);

	double_8 = double_1 + double_1;
	float_2 = float_1 + float_2;
	long_8 = long_6 * long_7;
	float_2 = float_2;
	char_1 = char_4 + char_11;
	return int_5;
}
void v_DWHCIDeviceEnableGlobalInterrupts( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 + short_2;
	int_1 = v_DWHCIRegisterRead(short_1);

	double_1 = double_1 * double_1;
	v_DWHCIRegister(long_1);

	double_2 = double_3;
	v__DWHCIRegister(long_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_1 + int_2;
	v_DWHCIRegisterOr(unsigned_int_1,char_1);

	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_DWHCIRegisterWrite();

}
void v_DWHCIDeviceEnableCommonInterrupts()
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_1;
	v_DWHCIRegister(long_1);

	long_1 = long_1 + long_2;
	short_2 = short_1 + short_1;
	short_3 = short_1 + short_1;
	int_3 = int_2 * int_3;
	if(1)
	{
		v_DWHCIRegisterWrite();

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	v_DWHCIRegisterSetAll(char_1);

	char_2 = char_2;
	v_DWHCIRegister2(long_1,unsigned_int_1,char_2);

	unsigned_int_3 = unsigned_int_2;
	short_2 = short_3;
	float_1 = float_1;
	v__DWHCIRegister(long_2);

}
void v_MsDelay( long parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	v_TimerMsDelay(char_1,double_1);

	unsigned_int_1 = v_TimerGet();

	unsigned_int_2 = unsigned_int_3;
}
unsigned int v_DWHCIDeviceWaitForBit( short parameter_1,int parameter_2,int parameter_3,short parameter_4,long parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	return unsigned_int_1;
	int_1 = v_DWHCIRegisterRead(short_1);

	v_MsDelay(long_1);

}
int v_DWHCIDeviceReset( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned_int_1 = v_DWHCIDeviceWaitForBit(short_1,int_1,int_1,short_2,long_1);

	double_2 = double_1 + double_2;
	v_DWHCIRegisterOr(unsigned_int_1,char_1);

	short_1 = short_2 * short_2;
	char_3 = char_2 + char_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		v_MsDelay(long_1);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	short_3 = short_1;
	int_2 = int_3;
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		v_DWHCIRegister2(long_2,unsigned_int_4,char_4);

		v_DWHCIRegisterWrite();

		int_3 = int_4 + int_5;
	}
	double_4 = double_2 + double_3;
	v__DWHCIRegister(long_2);

	double_1 = double_2;
	return int_1;
}
float v_DWHCIDeviceInitCore( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	double double_6 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char char_4 = 1;
	short short_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_2;
	double_1 = double_2;
	char_2 = char_1 + char_2;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	}
	short_1 = short_1 * short_3;
	long_1 = v_DWHCIRegisterGet(long_2);

	float_3 = float_1 * float_2;
	int_2 = v_DWHCIRegisterRead(short_4);

	int_2 = int_1 + int_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_4;
	short_3 = short_2 * short_3;
	int_3 = v_DWHCIDeviceReset(long_3);

	long_2 = long_4;
	v_DWHCIRegisterWrite();

	double_4 = double_3 + double_3;
	v_DWHCIRegister(long_4);

	char_1 = char_1 * char_2;
	if(1)
	{
		v_LogWrite(short_4,short_1,int_3,double_4,-1 );

		double_5 = double_4 * double_1;
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		float_3 = float_2 + float_2;
		long_3 = long_1;
	}
	long_3 = long_3 * long_1;
	v_DWHCIRegisterOr(unsigned_int_1,char_3);

	double_4 = double_1 + double_6;
	long_4 = long_5 + long_6;
	v_DWHCIDeviceEnableCommonInterrupts();

	char_2 = char_3 + char_3;
	short_4 = short_3 * short_2;
	v_DWHCIRegisterAnd(int_1,short_4);

	short_3 = short_2 + short_1;
	char_1 = char_4 * char_2;
	short_1 = short_1 + short_5;
	short_2 = short_5 * short_5;
	double_3 = double_5 * double_7;
	short_3 = short_1;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
	v__DWHCIRegister(long_4);

	float_2 = float_3;
	char_6 = char_5 * char_4;
	int_1 = int_1 + int_4;
	unsigned_int_7 = unsigned_int_6 + unsigned_int_1;
	int_5 = int_4 * int_1;
	int_1 = int_2 * int_2;
	return float_1;
}
double v_DWHCITransferStageDataBeginSplitCycle( double parameter_1)
{
	double double_1 = 1;
	return double_1;
}
void v_DWHCITransferStageDataIsStageComplete( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
}
void v_USBRequestCallCompletionRoutine( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float_1 = float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1;
}
void v_DWHCIDeviceFreeChannel( long parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_1 = double_2;
	char_2 = char_1 * char_1;
	v_uspi_LeaveCritical();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_uspi_EnterCritical();

	char_2 = char_2;
	int_1 = int_1 * int_1;
	long_1 = long_1;
	short_3 = short_1 * short_2;
}
void v__DWHCITransferStageData()
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_2 = 1;
		v_free();

		short_3 = short_3 * short_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_2 = int_1 + int_1;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		long_2 = long_1 * long_1;
		int_1 = int_3 + int_3;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	float_2 = float_1 * float_2;
	float_4 = float_2 + float_3;
}
void v_uspi_LeaveCritical()
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 * int_1;
		}
	}
}
void v_uspi_EnterCritical()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "MJ") > 0)
	{
		double_1 = double_2 + double_1;
	}
	long_1 = long_1;
}
void v_DWHCIDeviceDisableChannelInterrupt( int parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	double double_2 = 1;
	char_2 = char_1 * char_1;
	v_DWHCIRegisterWrite();

	float_2 = float_1 + float_1;
	v_DWHCIRegister(long_1);

	int_1 = v_DWHCIRegisterRead(short_1);

	float_3 = float_4;
	v_uspi_EnterCritical();

	double_1 = double_1 * double_1;
	v__DWHCIRegister(long_1);

	int_2 = int_1 * int_2;
	v_DWHCIRegisterAnd(int_2,short_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_2;
	short_3 = short_2 + short_1;
	v_uspi_LeaveCritical();

	double_1 = double_2 + double_2;
}
short v_DWHCITransferStageDataGetResultLen( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	return short_1;
}
void v_USBRequestSetResultLen( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_3 = double_1 + double_2;
	int_2 = int_1 + int_2;
}
double v_DWHCITransferStageDataIsStatusStage()
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short_2 = short_1 + short_1;
	return double_1;
}
void v_DWHCITransferStageDataSetSplitComplete( short parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_2 = char_1 + char_1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
void v_DWHCIDeviceTimerHandler( long parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	float float_2 = 1;
	double double_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_1 * long_1;
	v_DWHCITransferStageDataGetState(float_1);

	int_2 = int_1 + int_1;
	v_DWHCITransferStageDataSetState(double_2,short_1);

	char_1 = char_1 * char_2;
	v_DWHCITransferStageDataSetSplitComplete(short_1,short_1);

	long_1 = long_3;
	short_2 = short_2 + short_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "-6") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		v_DWHCIDeviceStartTransaction(int_3,float_2);

		unsigned_int_2 = unsigned_int_2;
		long_3 = long_1 * long_1;
		float_4 = float_2 + float_3;
		double_3 = v_DWHCITransferStageDataIsSplit();

		float_1 = float_2 * float_5;
	}
	if(1)
	{
		v_DWHCITransferStageDataGetFrameScheduler(char_2);

		short_1 = short_2 + short_2;
	}
	long_1 = long_4 + long_4;
	long_5 = long_1 + long_5;
}
unsigned int v_TimerGet()
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 * char_1;
	return unsigned_int_1;
}
unsigned int v_TimerStartKernelTimer( short parameter_1,char parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float_1 = float_1 * float_2;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "i") < 0)
		{
			int_2 = int_1 + int_1;
		}
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "^") < 0)
	{
		short_3 = short_1 * short_2;
		unsigned_int_2 = unsigned_int_2;
	}
	double_3 = double_1 * double_2;
	v_LoggerWrite(unsigned_int_2,int_2,long_1,long_2,char_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	char_1 = char_1 + char_1;
	v_EnterCritical();

	v_LeaveCritical();

	short_4 = short_2;
	short_2 = short_1 + short_3;
	int_3 = int_1 * int_3;
	return unsigned_int_4;
	int_4 = v_LoggerGet();

}
long v_StartKernelTimer( int parameter_1,float parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	return long_1;
	unsigned_int_1 = v_TimerStartKernelTimer(short_1,char_1,float_1);

	unsigned_int_1 = v_TimerGet();

}
char v_USBRequestGetEndpoint( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_1;
	int_2 = int_2 * int_2;
	return char_1;
}
double v_USBEndpointGetInterval()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_1 = int_2;
	int_1 = int_2 * int_2;
	return double_1;
}
void v_DWHCITransferStageDataSetState( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_2 = double_1 * double_1;
	short_1 = short_1 * short_2;
}
void v_USBRequestSetStatus( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	char_1 = char_1;
	int_1 = int_1 + int_1;
}
long v_DWHCITransferStageDataGetTransactionStatus()
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double_2 = double_1 + double_2;
	float_1 = float_1;
	return long_1;
}
void v_DWHCITransferStageDataGetState( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 * char_1;
}
void v_USBEndpointSkipPID( short parameter_1,float parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	char_1 = char_1 * char_2;
	double_1 = double_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long_1 = long_1 * long_1;
		double_1 = double_2 + double_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		long_2 = long_1;
		if(1)
		{
			float_1 = float_1 * float_1;
		}
		float_1 = float_2 + float_3;
		int_1 = int_1;
		double_3 = double_1 + double_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 + int_2;
		double_3 = double_3 + double_3;
	}
}
void v_DWHCITransferStageDataTransactionComplete( unsigned int parameter_1,float parameter_2,char parameter_3,int parameter_4)
{
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	short_1 = short_1;
	if(1)
	{
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "Ha") == 0)
		{
			float_1 = float_1 * float_1;
		}
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	v_USBEndpointSkipPID(short_1,float_1,long_1);

	int_2 = int_1 * int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	}
	long_3 = long_1 + long_2;
	double_2 = double_1 * double_1;
	if(1)
	{
		char_1 = char_1 * char_2;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	char_3 = char_1;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		short short_2 = 1;
		v_Logger(double_1);

		float_3 = float_1 + float_2;
		short_2 = short_2 * short_1;
	}
}
long v_DWHCIRegisterIsSet( char parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	return long_1;
}
void v_DWHCIDeviceStartTransaction( int parameter_1,float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_3 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short_1 = short_2;
	double_1 = double_1 * double_2;
	short_2 = short_2;
	long_1 = v_DWHCIRegisterIsSet(char_1,long_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_3 * double_2;
	v_DWHCIRegisterAnd(int_1,short_1);

	v_DWHCIDeviceStartChannel(short_2,unsigned_int_2);

	unsigned_int_3 = unsigned_int_1;
	long_1 = v_DWHCITransferStageDataGetChannelNumber(short_1);

	double_4 = double_5;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "=") < 0)
	{
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		char char_2 = 1;
		v__DWHCIRegister(long_1);

		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		int_3 = int_2 * int_2;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
		int_3 = v_DWHCIRegisterRead(short_2);

		v_DWHCIRegisterSet(float_1,short_3);

		float_1 = float_2;
		double_5 = double_5 * double_1;
		float_2 = float_2 + float_1;
		v_DWHCIRegisterWrite();

		char_3 = char_1 * char_2;
		double_1 = double_4;
		double_5 = double_1 * double_1;
	}
	if(1)
	{
		int int_4 = 1;
		int_1 = int_3 + int_4;
	}
	v_DWHCIRegister(long_2);

	v_DWHCIRegisterOr(unsigned_int_3,char_3);

	long_3 = long_2 * long_2;
	v_DWHCITransferStageDataSetSubState(unsigned_int_5,float_1);

}
float v_DWHCITransferStageDataIsPeriodic( double parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int_1 = int_1;
	long_1 = long_2;
	long_3 = v_USBEndpointGetType(short_1);

	long_3 = long_3 + long_3;
	return float_1;
}
short v_DWHCITransferStageDataGetStatusMask( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	char_1 = char_2;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_2;
	}
	return short_1;
	float_1 = v_DWHCITransferStageDataIsPeriodic(double_2);

}
void v_DWHCIRegisterSet( float parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_1 = short_1 * short_2;
	long_1 = long_1;
	float_2 = float_1 * float_1;
}
void v_USBEndpointGetNumber( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_3 = int_1 + int_2;
}
long v_DWHCITransferStageDataGetEndpointNumber( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	v_USBEndpointGetNumber(unsigned_int_1);

	int_1 = int_1;
	double_2 = double_1 + double_1;
	return long_1;
}
long v_USBEndpointGetType( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	return long_1;
}
short v_DWHCITransferStageDataGetEndpointType( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_5 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 + short_2;
	int_1 = int_2;
	double_1 = double_1 * double_2;
	double_1 = double_3 + double_4;
	short_2 = short_2 + short_3;
	long_1 = v_USBEndpointGetType(short_3);

	int_3 = int_3 * int_3;
	double_5 = double_2 * double_1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_3;
	double_4 = double_3 * double_4;
	return short_1;
}
char v_USBDeviceGetAddress( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_2;
	return char_1;
}
float v_DWHCITransferStageDataGetDeviceAddress( long parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short_1 = short_1;
	char_1 = v_USBDeviceGetAddress(unsigned_int_1);

	int_2 = int_1 * int_1;
	return float_1;
}
float v_DWHCITransferStageDataGetSpeed()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	long_3 = long_1 + long_2;
	return float_1;
}
char v_DWHCITransferStageDataIsDirectionIn( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_2 = double_1 * double_1;
	return char_1;
}
char v_DWHCITransferStageDataGetMaxPacketSize( unsigned int parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	short_1 = short_1 * short_1;
	return char_1;
}
void v_DWHCITransferStageDataIsSplitComplete( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_2 = short_1 * short_1;
	int_1 = int_1 + int_2;
}
unsigned int v_DWHCITransferStageDataGetSplitPosition( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_1;
	return unsigned_int_1;
}
int v_USBDeviceGetHubAddress( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return int_1;
}
double v_DWHCITransferStageDataGetHubAddress()
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1 * int_2;
	int_2 = v_USBDeviceGetHubAddress(char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return double_1;
}
long v_USBDeviceGetHubPortNumber( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	return long_1;
}
double v_DWHCITransferStageDataGetHubPortAddress( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	char_3 = char_1 + char_2;
	long_1 = v_USBDeviceGetHubPortNumber(int_1);

	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return double_2;
}
double v_DWHCITransferStageDataIsSplit()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return double_1;
}
void v_uspi_CleanAndInvalidateDataCacheRange( float parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		long_2 = long_1 + long_1;
	}
}
double v_DWHCITransferStageDataGetDMAAddress( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	return double_1;
}
unsigned int v_USBEndpointGetNextPID( char parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float_3 = float_1 + float_2;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	return unsigned_int_1;
}
float v_DWHCITransferStageDataGetPID( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = v_USBEndpointGetNextPID(char_1,char_2);

	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_3;
	int_3 = int_1;
	int_3 = int_2 * int_4;
	short_2 = short_1 * short_1;
	int_4 = int_4 * int_1;
	char_3 = char_3 + char_1;
	float_2 = float_1 * float_2;
	float_3 = float_1 + float_1;
	return float_1;
}
unsigned int v_DWHCITransferStageDataGetPacketsToTransfer( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_2;
	return unsigned_int_1;
}
int v_DWHCITransferStageDataGetBytesToTransfer( int parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	char_1 = char_1;
	return int_1;
}
void v_DWHCIRegisterOr( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	char_3 = char_1 * char_2;
	int_2 = int_1 + int_1;
}
void v_DWHCIRegisterSetAll( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1;
}
void v_DWHCITransferStageDataSetSubState( unsigned int parameter_1,float parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1;
	int_2 = int_1 * int_1;
}
long v_DWHCITransferStageDataGetChannelNumber( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double_1 = double_2;
	return long_1;
}
void v_DWHCIDeviceStartChannel( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	float float_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_7 = 1;
	double double_6 = 1;
	short short_3 = 1;
	char char_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_4 = 1;
	float float_5 = 1;
	double double_7 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_8 = 1;
	int int_8 = 1;
	float float_7 = 1;
	short short_6 = 1;
	short short_7 = 1;
	int int_9 = 1;
	double double_9 = 1;
	short short_8 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_6 = 1;
	double_1 = v_DWHCITransferStageDataGetDMAAddress(long_1);

	int_3 = int_1 + int_2;
	v_DWHCITransferStageDataSetSubState(unsigned_int_1,float_1);

	float_3 = float_2 + float_1;
	long_1 = long_1 * long_1;
	char_1 = v_DWHCITransferStageDataIsDirectionIn(unsigned_int_2);

	char_2 = char_1 + char_1;
	int_4 = int_5;
	v_DWHCIRegisterSet(float_3,short_1);

	char_3 = char_3 + char_4;
	float_1 = v_DWHCITransferStageDataGetDeviceAddress(long_2);

	long_3 = long_1 * long_2;
	double_1 = v_DWHCITransferStageDataIsSplit();

	unsigned_int_2 = unsigned_int_2;
	double_3 = double_2 + double_3;
	unsigned_int_1 = v_DWHCITransferStageDataGetPacketsToTransfer(int_1);

	double_1 = double_2 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	short_2 = short_1 + short_2;
	float_4 = float_2 * float_1;
	v_DWHCIRegister2(long_2,unsigned_int_1,char_1);

	v_DWHCITransferStageDataGetFrameScheduler(char_4);

	int_6 = int_4 + int_4;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	int_5 = v_DWHCITransferStageDataGetBytesToTransfer(int_5);

	int_4 = int_5 * int_5;
	float_3 = v_DWHCITransferStageDataGetPID(char_3);

	float_1 = float_1 + float_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	double_5 = double_4 * double_3;
	double_2 = v_DWHCITransferStageDataGetHubAddress();

	unsigned_int_3 = unsigned_int_2;
	double_1 = double_3;
	int_2 = int_7;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "g") < 0)
	{
		unsigned int unsigned_int_6 = 1;
		float_1 = v_DWHCITransferStageDataGetSpeed();

		unsigned_int_3 = unsigned_int_6 + unsigned_int_5;
		float_4 = float_1;
		double_5 = double_5 * double_1;
		if(1)
		{
			double_4 = double_6;
		}
		short_1 = short_2;
	}
	double_3 = double_3 * double_3;
	v_DWHCIRegisterAnd(int_2,short_3);

	short_2 = v_DWHCITransferStageDataGetStatusMask(unsigned_int_2);

	char_5 = char_4 + char_4;
	long_5 = long_3 * long_4;
	short_2 = short_1 + short_4;
	v_DWHCITransferStageDataIsSplitComplete(short_2);

	float_2 = float_5 * float_3;
	v_DWHCIRegisterOr(unsigned_int_1,char_4);

	double_6 = double_5 * double_7;
	short_5 = short_1;
	short_4 = short_3;
	if(1)
	{
		float float_6 = 1;
		float_6 = float_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_7 * unsigned_int_7;
	}
	if(1)
	{
		double_8 = v_DWHCITransferStageDataGetHubPortAddress(long_3);

		double_8 = double_6 * double_8;
	}
	if(1)
	{
		long_1 = v_DWHCITransferStageDataGetEndpointNumber(int_8);

		float_2 = float_4 + float_7;
	}
	v_DWHCIRegisterWrite();

	char_1 = char_3 + char_3;
	long_1 = v_DWHCITransferStageDataGetChannelNumber(short_5);

	int_4 = v_DWHCIRegisterRead(short_6);

	unsigned_int_5 = unsigned_int_5 * unsigned_int_1;
	double_1 = double_1 * double_4;
	int_1 = int_4 * int_4;
	v_DWHCIRegister(long_4);

	v_uspi_CleanAndInvalidateDataCacheRange(float_2,short_7);

	int_4 = int_1 * int_8;
	int_1 = int_7;
	unsigned_int_7 = unsigned_int_1 * unsigned_int_7;
	if(1)
	{
		int_8 = int_5 * int_3;
		if(1)
		{
			float_7 = float_2;
		}
		if(1)
		{
			double_8 = double_3 * double_7;
		}
	}
	int_9 = int_3;
	short_1 = short_7 * short_5;
	double_4 = double_7 + double_9;
	short_1 = v_DWHCITransferStageDataGetEndpointType(double_5);

	char_3 = char_1;
	char_1 = v_DWHCITransferStageDataGetMaxPacketSize(unsigned_int_2);

	int_8 = int_2 * int_5;
	short_8 = short_2 * short_3;
	int_3 = int_6;
	char_3 = char_6 * char_5;
	unsigned_int_8 = v_DWHCITransferStageDataGetSplitPosition(double_1);

	v__DWHCIRegister(long_2);

	char_5 = char_5 * char_3;
	long_5 = long_6;
	double_5 = double_7;
	v_DWHCIRegisterSetAll(char_4);

	short_2 = short_8 * short_8;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
}
double v_DWHCITransferStageDataGetSubState( float parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	char_1 = char_1 * char_1;
	return double_1;
}
double v_DWHCITransferStageDataGetURB()
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_2;
	char_2 = char_1 * char_2;
	return double_1;
}
void v_DWHCITransferStageDataGetFrameScheduler( char parameter_1)
{
	float float_1 = 1;
	float_1 = float_1;
}
void v_DWHCIDeviceChannelInterruptHandler( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double double_5 = 1;
	float float_4 = 1;
	int int_4 = 1;
	long long_2 = 1;
	float float_5 = 1;
	float float_6 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	double double_6 = 1;
	long long_3 = 1;
	float float_8 = 1;
	long long_4 = 1;
	int int_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	char char_4 = 1;
	long long_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_7 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_8 = 1;
	long long_8 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_9 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_5 = 1;
	float float_9 = 1;
	long long_9 = 1;
	int int_10 = 1;
	char char_8 = 1;
	short short_6 = 1;
	double double_12 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_7 = 1;
	v_uspi_CleanAndInvalidateDataCacheRange(float_1,short_1);

	long_1 = long_1;
	double_2 = double_1 * double_1;
	float_2 = float_2 + float_3;
	char_1 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_3 + float_3;
	int_2 = int_1 * int_1;
	int_3 = int_1 + int_1;
	float_3 = float_2 + float_1;
	short_1 = short_1 + short_1;
	double_2 = double_3 * double_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	char_3 = v_USBRequestGetEndpoint(unsigned_int_3);

	int_2 = int_2 + int_3;
	double_5 = v_DWHCITransferStageDataGetURB();

	float_4 = float_2 + float_1;
	if(1)
	{
		int_2 = v_DWHCITransferStageDataGetBytesToTransfer(int_4);

		long_1 = long_2;
	}
	long_1 = v_DWHCITransferStageDataGetTransactionStatus();

	float_6 = float_5 + float_1;
	v_DWHCITransferStageDataSetSplitComplete(short_1,short_2);

	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	unsigned_int_3 = unsigned_int_3;
	int_2 = int_3 + int_2;
	float_6 = float_4 + float_7;
	int_4 = int_1;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
	v_LogWrite(short_3,short_3,int_2,double_6,-1 );

	long_3 = long_1 + long_3;
	float_8 = v_DWHCITransferStageDataIsPeriodic(double_4);

	long_1 = v_DWHCIRegisterGet(long_3);

	v_USBRequestCallCompletionRoutine(short_2);

	double_5 = double_5;
	if(1)
	{
		short_2 = short_2 * short_2;
		float_4 = float_8;
	}
	if(1)
	{
		v_DWHCIRegister(long_3);

		double_2 = double_6 + double_1;
		long_1 = long_1 * long_4;
		v_USBRequestSetResultLen(unsigned_int_3,short_1);

		float_2 = float_5;
		int_3 = int_5;
	}
	if(1)
	{
		if(1)
		{
			long long_5 = 1;
			long_2 = long_3 * long_5;
		}
		float_3 = float_7 * float_8;
	}
	double_8 = double_1 * double_7;
	float_3 = float_5;
	char_2 = char_1 + char_4;
	long_3 = long_6;
	int_3 = int_1 * int_2;
	int_6 = int_3 + int_2;
	double_5 = double_5;
	v_DWHCITransferStageDataGetState(float_8);

	int_7 = int_1;
	if(1)
	{
		double_1 = v_DWHCITransferStageDataGetDMAAddress(long_4);

		long_1 = long_4 * long_7;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
		int_2 = int_7;
		double_10 = double_9 * double_1;
		double_3 = double_11 + double_1;
		int_5 = int_1 * int_4;
		v_USBRequestSetStatus(unsigned_int_6,int_4);

		double_10 = double_8 + double_7;
		short_2 = short_1 + short_1;
		double_8 = double_6;
	}
	unsigned_int_6 = unsigned_int_5 + unsigned_int_6;
	double_10 = v_DWHCITransferStageDataGetSubState(float_4);

	long_4 = v_StartKernelTimer(int_8,float_1);

	v_DWHCIDeviceDisableChannelInterrupt(int_7,unsigned_int_1);

	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	float_3 = float_7 + float_7;
	if(1)
	{
		v_DWHCIDeviceTimerHandler(long_8);

		unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
	}
	long_4 = long_8 * long_2;
	char_4 = char_3 * char_5;
	float_2 = float_5 + float_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_6;
		char_5 = char_6 + char_2;
		unsigned_int_3 = unsigned_int_7 + unsigned_int_1;
		long_4 = long_2 + long_4;
		char_4 = char_2;
		short_3 = short_3 * short_4;
		short_2 = short_2 * short_1;
		double_5 = double_7 * double_9;
		v__DWHCIRegister(long_6);

		int_4 = int_2 * int_1;
	}
	unsigned_int_3 = unsigned_int_5 * unsigned_int_8;
	if(1)
	{
		int_4 = int_3 + int_5;
		int_3 = int_9 * int_8;
	}
	if(1)
	{
		if(1)
		{
			int_4 = int_7 * int_1;
			double_4 = v_DWHCITransferStageDataIsStatusStage();

			unsigned_int_8 = unsigned_int_4 + unsigned_int_6;
			float_7 = float_2;
			short_3 = short_1 * short_3;
			unsigned_int_3 = unsigned_int_6 + unsigned_int_6;
			v_DWHCITransferStageDataSetState(double_8,short_1);

			double_2 = double_11 + double_2;
			v_DWHCITransferStageDataTransactionComplete(unsigned_int_2,float_3,char_6,int_1);

			int_5 = int_9;
			char_3 = char_3 + char_7;
		}
		if(1)
		{
			double_3 = v_DWHCITransferStageDataBeginSplitCycle(double_11);

			unsigned_int_6 = unsigned_int_9;
			int_5 = int_3 + int_1;
			int_8 = int_3 + int_4;
			double_9 = double_6 * double_11;
		}
		if(1)
		{
			double_2 = double_7 * double_2;
			unsigned_int_8 = unsigned_int_4 * unsigned_int_7;
			int_8 = v_DWHCIRegisterRead(short_2);

			long_2 = long_6 * long_6;
		}
		short_5 = v_DWHCITransferStageDataGetResultLen(float_9);

		long_8 = long_9;
	}
	v_DWHCIDeviceStartTransaction(int_10,float_2);

	char_8 = char_7 + char_8;
	if(1)
	{
		char_7 = char_2 + char_1;
	}
	short_4 = short_6;
	double_12 = v_USBEndpointGetInterval();

	v__DWHCITransferStageData();

	v_DWHCITransferStageDataIsStageComplete(unsigned_int_1);

	double_12 = double_9 * double_9;
	v_free();

	v_DWHCIDeviceFreeChannel(long_9,short_1);

	long_2 = long_7 * long_6;
	unsigned_int_7 = unsigned_int_5;
	float_6 = float_4;
	double_8 = double_4 * double_11;
	v_DWHCIDeviceStartChannel(short_4,unsigned_int_10);

	short_7 = short_2 + short_6;
	v_DWHCITransferStageDataGetFrameScheduler(char_2);

	short_1 = short_7;
	unsigned_int_7 = unsigned_int_9 + unsigned_int_8;
}
void v_DWHCIRegister2( long parameter_1,unsigned int parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short_1 = short_2;
	double_1 = double_2;
	short_3 = short_3 * short_1;
	float_3 = float_1 * float_2;
}
void v_DWHCIDeviceInterruptHandler()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_5 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_1;
	double_2 = double_1 + double_1;
	int_1 = int_1;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		char char_4 = 1;
		double_1 = double_2 * double_2;
		double_3 = double_3 * double_3;
		int_1 = int_1 * int_1;
		float_3 = float_1 * float_2;
		double_2 = double_1 + double_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_7 = 1;
			if(1)
			{
				double_5 = double_1 + double_2;
				v_DWHCIRegister2(long_1,unsigned_int_6,char_1);

				int_2 = int_1 * int_1;
				double_5 = double_4;
				char_1 = char_1 * char_1;
				unsigned_int_1 = unsigned_int_7 * unsigned_int_3;
			}
			long_2 = v_DWHCIRegisterGet(long_3);

			unsigned_int_2 = unsigned_int_7 + unsigned_int_2;
		}
		v_DWHCIRegister(long_2);

		char_4 = char_2 + char_3;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
			long_3 = long_4 * long_2;
			float_4 = float_3;
			v_DWHCIRegisterWrite();

			char_2 = char_3 * char_2;
			v__DWHCIRegister(long_4);

			short_1 = short_1 + short_1;
			unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
			v_DWHCIDeviceChannelInterruptHandler(float_2,int_1);

			float_3 = float_1 + float_4;
		}
		unsigned_int_5 = unsigned_int_4 * unsigned_int_6;
	}
	double_5 = double_5 * double_5;
	int_2 = v_DWHCIRegisterRead(short_1);

	float_3 = float_3 * float_4;
}
unsigned int v_InterruptSystemGet()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_3;
}
void v_ConnectInterrupt( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	v_InterruptSystemConnectIRQ(double_1,int_1,long_1);

	char_1 = char_1 + char_2;
	unsigned_int_1 = v_InterruptSystemGet();

}
void v_DWHCIRegisterWrite()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_2 = long_1 + long_1;
	int_3 = int_1 + int_2;
	double_2 = double_1 * double_1;
}
void v_DWHCIRegisterAnd( int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = int_1 * int_2;
	int_1 = int_1 * int_2;
	char_3 = char_1 * char_2;
}
int v_SetPowerStateOn( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_2;
	v_BcmPropertyTags(short_1);

	char_1 = char_1;
	unsigned_int_1 = unsigned_int_2;
	v__BcmPropertyTags(unsigned_int_1);

	int_4 = int_3 + int_2;
	double_1 = v_BcmPropertyTagsGetTag(int_1,int_4,char_1,int_1);

	double_3 = double_2 * double_1;
	if(1)
	{
		int_5 = int_3;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	return int_5;
}
void v__DWHCIRegister( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
}
long v_DWHCIRegisterGet( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_2;
	int_2 = int_2 + int_1;
	return long_1;
}
int v_LoggerGet()
{
	int int_1 = 1;
	return int_1;
}
void v_LogWrite( short parameter_1,short parameter_2,int parameter_3,double parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_2 = 1;
	v_LoggerWriteV(unsigned_int_1,char_1,char_2,char_1,long_1,uni_para);

	int_3 = int_1 + int_2;
	double_1 = double_1;
	long_2 = long_1 + long_2;
	int_3 = int_2;
}
int v_DWHCIRegisterRead( short parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double_1 = double_1;
	char_1 = char_1;
	long_2 = long_1 + long_2;
	return int_1;
}
void v_DWHCIRegister( long parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_1;
	double_1 = double_1 * double_1;
	int_1 = int_2;
}
char v_DWHCIDeviceInitialize( double parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	double double_3 = 1;
	int int_6 = 1;
	long long_1 = 1;
	int int_7 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	double double_5 = 1;
	char char_4 = 1;
	float_2 = float_1 * float_1;
	double_2 = double_1 + double_2;
	double_1 = double_1 + double_1;
	short_2 = short_1 * short_2;
	char controller4vul_2093[2];
	fgets(controller4vul_2093 ,2 ,stdin);
	if( strcmp( controller4vul_2093, "6") < 0)
	{
		float_1 = v_DWHCIRootPortInitialize(double_2,uni_para);

		int_2 = int_1 + int_1;
		double_2 = double_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 * short_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	int_2 = int_1 + int_3;
	int_4 = int_3;
	int_4 = int_5;
	float_1 = float_3;
	double_2 = double_2 + double_3;
	int_2 = int_6 * int_3;
	if(1)
	{
		double double_4 = 1;
		long_1 = long_1;
		double_2 = double_3 * double_4;
		int_1 = int_7;
	}
	char_3 = char_1 + char_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		long_2 = long_1 + long_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		long_2 = long_1 * long_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		int_5 = int_7;
		double_2 = double_1 + double_2;
		char_1 = char_1 * char_1;
	}
	double_1 = double_5 + double_3;
	int_2 = int_3 + int_5;
	char_4 = char_2;
	return char_4;
}
void v_DWHCIRootPort( long parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	double_1 = double_1 + double_1;
	short_1 = short_1 + short_1;
	long_3 = long_1 + long_2;
	float_1 = float_1 * float_1;
}
void v_DWHCIDevice( unsigned int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1 * double_1;
	char_1 = char_2;
	int_1 = int_2;
	float_1 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long_2 = long_1 * long_1;
	}
	v_DWHCIRootPort(long_2);

}
void v_DeviceNameService( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_3;
	double_1 = double_1 * double_2;
}
int v_USPiInitialize(int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	long long_4 = 1;
	int int_7 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_1;
	char_2 = char_1 * char_1;
	int_2 = int_1 * int_1;
	int_2 = int_2 * int_3;
	unsigned_int_2 = unsigned_int_1;
	int_1 = int_4 * int_2;
	char controller4vul_2092[2];
	fgets(controller4vul_2092 ,2 ,stdin);
	if( strcmp( controller4vul_2092, ")") < 0)
	{
		char_1 = v_DWHCIDeviceInitialize(double_1,uni_para);

		float_2 = float_3 + float_1;
		double_1 = double_1 * double_2;
		double_3 = double_1 + double_2;
		double_1 = double_4 + double_4;
		short_3 = short_1 + short_2;
	}
	double_2 = double_2 * double_4;
	int_5 = int_2 + int_2;
	int_6 = int_4 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_4 = 1;
		double double_5 = 1;
		double_4 = double_4 * double_1;
		float_4 = float_3;
		short_1 = short_3 * short_2;
		double_1 = double_5 + double_1;
		int_2 = int_4 + int_4;
	}
	short_3 = short_1 * short_2;
	int_5 = int_6 + int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		long long_3 = 1;
		double double_6 = 1;
		long_2 = long_1 * long_2;
		long_2 = long_3 + long_1;
		int_4 = int_4 + int_1;
		long_1 = long_1 + long_3;
		double_3 = double_6 * double_4;
	}
	long_4 = long_4 * long_2;
	return int_7;
}
void v__ExceptionHandler( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_2 = int_1 * int_2;
	float_2 = float_1 * float_1;
}
void v__InterruptSystem( float parameter_1)
{
	int int_1 = 1;
	int_1 = int_1;
}
void v__Timer( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short_1 = short_1 + short_2;
}
void v__Logger( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_2 = double_1 * double_1;
	double_3 = double_2 * double_2;
	float_3 = float_1 + float_2;
}
void v_DelayLoop( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	short_3 = short_1 + short_2;
	long_1 = long_1 + long_2;
	if(1)
	{
		long_1 = long_3 + long_2;
	}
	float_3 = float_1 * float_2;
	int_4 = int_1 * int_3;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			}
			if(1)
			{
				float_2 = float_2 + float_3;
			}
		}
		if(1)
		{
			if(1)
			{
				double double_1 = 1;
				double_1 = double_1;
			}
			if(1)
			{
				long long_4 = 1;
				long_4 = long_2 * long_3;
			}
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	int_4 = int_1;
	float_2 = float_2 * float_2;
	if(1)
	{
		if(1)
		{
			long_1 = long_2;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		}
	}
	int_4 = int_3;
	int_4 = int_4;
	int_5 = int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_3 + int_3;
	float_2 = float_1;
}
void v_TimerMsDelay( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_1 = double_2;
	if(1)
	{
		short short_1 = 1;
		int int_2 = 1;
		short_1 = short_1;
		v_DelayLoop(int_1);

		int_1 = int_1 + int_2;
	}
}
short v_TimerGetTicks( short parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	long_1 = long_1 * long_1;
	return short_1;
}
void v_TimerTuneMsDelay()
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_2;
	v_TimerMsDelay(char_1,double_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = v_TimerGetTicks(short_1);

	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	long_1 = long_2 + long_2;
	double_1 = double_1 * double_2;
}
void v_TimerPollKernelTimers( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long_2 = long_1 + long_2;
	v_EnterCritical();

	short_2 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_3;
		if(1)
		{
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				int int_4 = 1;
				int_2 = int_1 * int_1;
				int_4 = int_3 + int_1;
			}
		}
	}
	float_1 = float_1;
	v_LeaveCritical();

}
void v_TimerInterruptHandler()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_4 = 1;
	double_3 = double_1 * double_2;
	int_2 = int_1 * int_1;
	double_1 = double_1 + double_1;
	float_2 = float_1 + float_1;
	float_3 = float_2 + float_1;
	long_3 = long_1 + long_2;
	if(1)
	{
		int int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int_3 = int_3 + int_4;
		char_3 = char_1 * char_2;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_3 = v_read32(int_2);

	v_write32(double_1,short_1);

	float_4 = float_3 + float_2;
	if(1)
	{
		v_TimerPollKernelTimers(short_1);

		double_3 = double_1;
	}
	int_1 = int_3 + int_2;
}
void v_InterruptSystemEnableIRQ( float parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	v_write32(double_1,short_1);

	double_2 = double_2 * double_3;
	int_1 = int_2;
	int_1 = int_1 * int_1;
	double_4 = double_1 * double_1;
}
void v_InterruptSystemConnectIRQ( double parameter_1,int parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	float_1 = float_2;
	double_1 = double_2;
	double_3 = double_3 + double_2;
	v_InterruptSystemEnableIRQ(float_3);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 * short_1;
	double_4 = double_3 * double_4;
}
short v_TimerInitialize( float parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_4 = 1;
	long long_6 = 1;
	char_1 = char_1 * char_1;
	double_1 = double_2;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_write32(double_3,short_1);

	v_TimerTuneMsDelay();

	float_2 = float_1 * float_1;
	long_2 = long_1 * long_2;
	long_4 = long_3 + long_3;
	long_5 = v_read32(int_2);

	long_1 = long_1 * long_2;
	return short_1;
	v_InterruptSystemConnectIRQ(double_4,int_2,long_6);

	v_TimerInterruptHandler();

}
void v_IRQStub()
{
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "J>") > 0)
	{
	}
	if(1)
	{
	}
}
int v_InterruptSystemInitialize( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short_1 = short_1 + short_2;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_1;
	v_write32(double_1,short_2);

	char_3 = char_3;
	double_3 = double_2 + double_1;
	double_5 = double_4 * double_4;
	v_CleanDataCache();

	double_1 = double_3 * double_2;
	short_1 = short_2 * short_2;
	long_1 = v_read32(int_2);

	int_3 = int_3 + int_3;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1;
	char_3 = char_2 * char_3;
	char_3 = char_3 + char_3;
	v_IRQStub();

	short_3 = short_2 * short_2;
	double_1 = double_1 * double_1;
	long_2 = long_1 + long_1;
	double_3 = double_4;
	int_4 = int_3 * int_3;
	return int_4;
}
void v_StringFormatV( float parameter_1,short parameter_2,unsigned int parameter_3)
{
}
void v__String( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long_2 = long_1 + long_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
}
int v_StringGet( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if(remainder_check(controller_1,100,2))
	{
	}
	return int_1;
}
void v_StringFormat( char parameter_1,short parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double_2 = double_1 * double_1;
	char_1 = char_1 * char_2;
	short_1 = short_1 * short_2;
	double_2 = double_2 + double_3;
	char_3 = char_2 + char_1;
}
void v_String( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
}
float v_TimerGetTimeString( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_4 = 1;
	long long_3 = 1;
	short short_2 = 1;
	long long_4 = 1;
	double double_4 = 1;
	char char_1 = 1;
	short short_3 = 1;
	float float_5 = 1;
	long_1 = long_1 * long_2;
	short_1 = v_malloc(double_1);

	float_3 = float_1 + float_2;
	int_1 = int_2;
	double_3 = double_2 + double_2;
	int_2 = int_2 + int_2;
	if(1)
	{
	}
	short_1 = short_1 * short_1;
	float_3 = float_3 * float_2;
	v_EnterCritical();

	v_LeaveCritical();

	v_String(long_1);

	double_1 = double_3 * double_1;
	float_4 = float_4 * float_4;
	long_3 = long_3;
	short_2 = short_1 + short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	double_2 = double_2;
	long_2 = long_4 * long_2;
	double_1 = double_2 + double_4;
	long_2 = long_1 * long_4;
	return float_4;
	v_StringFormat(char_1,short_3,float_5);

}
void v_ScreenDeviceSetCursorMode( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
void v_ScreenDeviceCursorMove( short parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_2;
	float_1 = v_CharGeneratorGetCharWidth(unsigned_int_1);

	unsigned_int_2 = v_CharGeneratorGetCharHeight(double_1,-1 );

	int_3 = int_2 + int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "+<") > 0)
	{
		float float_2 = 1;
		short short_1 = 1;
		float_2 = float_2 * float_2;
		short_1 = short_1 + short_1;
	}
}
void v_ScreenDeviceSetStandoutMode( short parameter_1,long parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	char_1 = char_1;
	double_3 = double_1 * double_2;
	short_1 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_3 * double_2;
	float_1 = float_1 + float_1;
	double_4 = double_3;
}
void v_ScreenDeviceInsertMode( char parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_1;
}
void v_ScreenDeviceEraseChars( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	float_1 = v_CharGeneratorGetCharWidth(unsigned_int_1);

	v_ScreenDeviceEraseChar(short_1,int_1,int_2);

	int_2 = int_1 * int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float_2 = float_1;
	}
}
void v_ScreenDeviceDeleteChars( unsigned int parameter_1,short parameter_2)
{
}
void v_ScreenDeviceDeleteLines( long parameter_1,double parameter_2)
{
}
void v_ScreenDeviceCursorUp( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	unsigned_int_1 = v_CharGeneratorGetCharHeight(double_1,-1 );

}
void v_ScreenDeviceInsertLines( double parameter_1,float parameter_2)
{
}
void v_ScreenDeviceReverseScroll( char parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "E_") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	v_ScreenDeviceInsertLines(double_1,float_1);

}
void v_ScreenDeviceCursorRight( short parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float_1 = v_CharGeneratorGetCharWidth(unsigned_int_1);

	double_1 = double_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	v_ScreenDeviceNewLine(char_1);

}
short v_CharGeneratorGetPixel( long parameter_1,char parameter_2,int parameter_3,char parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short_1 = short_1 + short_2;
	long_2 = long_1 + long_1;
	long_3 = long_1 + long_1;
	return short_1;
}
void v_ScreenDeviceDisplayChar2( short parameter_1,char parameter_2,float parameter_3,short parameter_4,long parameter_5)
{
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			v_ScreenDeviceSetPixel(long_1,float_1,int_1,char_1);

			short_1 = v_CharGeneratorGetPixel(long_2,char_2,int_2,char_3);

			double_1 = double_1 + double_2;
		}
	}
	unsigned_int_1 = v_CharGeneratorGetCharHeight(double_3,-1 );

	float_2 = v_CharGeneratorGetCharWidth(unsigned_int_2);

}
void v_ScreenDeviceDisplayChar( double parameter_1,char parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ">w") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		v_ScreenDeviceDisplayChar2(short_1,char_1,float_1,short_2,long_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	v_ScreenDeviceCursorRight(short_1);

}
char v_memcpyblk(double parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
			char_1 = char_1;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_2;
		}
	}
	char_2 = char_1 * char_1;
	return char_3;
}
void v_ScreenDeviceScroll(int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_2;
	double_1 = double_1 + double_1;
	char controller4vul_2117[2];
	fgets(controller4vul_2117 ,2 ,stdin);
	if( strcmp( controller4vul_2117, "^") > 0)
	{
		double double_2 = 1;
		float float_1 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_3 = 1;
			short short_4 = 1;
			double double_4 = 1;
			double double_5 = 1;
			long long_3 = 1;
			double_3 = double_2 * double_1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char controller4vul_2118[3];
				fgets(controller4vul_2118 ,3 ,stdin);
				if( strcmp( controller4vul_2118, "TU") < 0)
				{
					short short_1 = 1;
					short short_2 = 1;
					unsigned_int_3 = v_CharGeneratorGetCharHeight(double_3,uni_para);

					short_3 = short_1 * short_2;
				}
			}
			short_3 = short_4 * short_4;
			double_1 = double_4 * double_5;
			long_3 = long_3 * long_2;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double_3 = double_2 + double_3;
		}
		float_1 = float_1;
	}
	int_2 = int_3 + int_3;
}
void v_ScreenDeviceCursorDown( char parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 + int_2;
	char controller4vul_2116[3];
	fgets(controller4vul_2116 ,3 ,stdin);
	if( strcmp( controller4vul_2116, "G|") < 0)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v_ScreenDeviceScroll(uni_para);

		double_1 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_2;
	}
}
void v_ScreenDeviceCarriageReturn()
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 + double_2;
}
void v_ScreenDeviceNewLine( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	v_ScreenDeviceCarriageReturn();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_ScreenDeviceCursorDown(char_1,-1 );

	long_1 = long_1 + long_2;
}
void v_ScreenDeviceTabulator( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float_2 = float_1 + float_1;
	float_3 = v_CharGeneratorGetCharWidth(unsigned_int_1);

	int_3 = int_1 + int_2;
	if(1)
	{
		float float_4 = 1;
		float_3 = float_4;
	}
	v_ScreenDeviceNewLine(char_1);

}
void v_ScreenDeviceCursorLeft( long parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_1 = 1;
			float_1 = v_CharGeneratorGetCharWidth(unsigned_int_1);

			unsigned_int_1 = v_CharGeneratorGetCharHeight(double_3,-1 );

			unsigned_int_2 = unsigned_int_3;
			int_1 = int_1 * int_1;
		}
	}
}
void v_ScreenDeviceWrite2( float parameter_1,char parameter_2,int uni_para)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
		long_1 = long_1;
	}
	char controller4vul_2114[3];
	fgets(controller4vul_2114 ,3 ,stdin);
	if( strcmp( controller4vul_2114, "l)") > 0)
	{
		char controller4vul_2115[2];
		fgets(controller4vul_2115 ,2 ,stdin);
		if( strcmp( controller4vul_2115, "N") > 0)
		{
			v_ScreenDeviceCursorDown(char_1,uni_para);

			int_1 = int_1 * int_1;
		}
		if(1)
		{
			char char_2 = 1;
			double_1 = double_1 + double_3;
			char_2 = char_2 + char_2;
		}
	}
	double_3 = double_2 * double_3;
	int_1 = int_1 * int_2;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
		int_4 = int_3 * int_2;
		double_3 = double_1 + double_2;
		long_1 = long_1 + long_2;
		double_3 = double_2;
		int_1 = int_1 + int_4;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		short short_1 = 1;
		long long_3 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		float_3 = float_1 + float_2;
		char_4 = char_3 * char_3;
		short_1 = short_1;
		long_2 = long_3;
	}
}
int v_ScreenDeviceWrite( unsigned int parameter_1,int parameter_2,short parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_3 = double_1 + double_2;
	float_2 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_1 + long_2;
	float_1 = float_3 + float_2;
	float_4 = float_1 * float_1;
	int_3 = int_1 + int_2;
	double_2 = double_4 * double_4;
	double_1 = double_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
		char controller4vul_2113[3];
		fgets(controller4vul_2113 ,3 ,stdin);
		if( strcmp( controller4vul_2113, "Q]") < 0)
		{
			short short_1 = 1;
			short short_2 = 1;
			v_ScreenDeviceWrite2(float_5,char_1,uni_para);

			short_2 = short_1 * short_1;
		}
	}
	double_1 = double_4;
	char_2 = char_1 * char_2;
	return int_2;
}
short v_strlen( short parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_4 = 1;
	short short_2 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float_3 = float_1 + float_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2 * int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			double double_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			float_2 = float_2 * float_3;
			if(1)
			{
				double_3 = double_1 + double_2;
				double_4 = double_1 + double_1;
			}
			if(1)
			{
				int int_3 = 1;
				char char_2 = 1;
				char char_3 = 1;
				if(1)
				{
					short short_1 = 1;
					unsigned_int_1 = unsigned_int_3;
					short_2 = short_1 + short_2;
				}
				if(1)
				{
					long long_1 = 1;
					long long_2 = 1;
					int int_4 = 1;
					int int_5 = 1;
					long_1 = long_1 + long_2;
					double_3 = double_3 * double_2;
					unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
					int_5 = int_3 + int_4;
				}
				int_1 = int_3 * int_3;
				char_1 = char_2 * char_3;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double double_5 = 1;
		double_4 = double_5 * double_2;
	}
	double_4 = double_4 + double_4;
	return short_2;
}
void v_LoggerWrite2( int parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = v_ScreenDeviceWrite(unsigned_int_1,int_1,short_1,uni_para);

	double_1 = double_2;
	long_2 = long_1 + long_1;
}
void v_LoggerWriteV( unsigned int parameter_1,char parameter_2,char parameter_3,char parameter_4,long parameter_5,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_3 = float_4 * float_1;
	short_1 = short_1 * short_2;
	double_2 = double_1 * double_1;
	char controller4vul_2112[2];
	fgets(controller4vul_2112 ,2 ,stdin);
	if( strcmp( controller4vul_2112, ",") > 0)
	{
		double double_3 = 1;
		double double_4 = 1;
		v_LoggerWrite2(int_1,int_2,uni_para);

		double_2 = double_3 * double_4;
	}
	int_2 = int_3 * int_3;
	int_5 = int_4 + int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		float float_5 = 1;
		float_5 = float_1 + float_1;
	}
}
void v_LoggerWrite( unsigned int parameter_1,int parameter_2,long parameter_3,long parameter_4,char parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	float_1 = float_1 * float_2;
	double_2 = double_1 + double_1;
	v_LoggerWriteV(unsigned_int_1,char_1,char_2,char_3,long_1,-1 );

	int_1 = int_1 * int_2;
	long_1 = long_2 * long_1;
}
unsigned int v_LoggerInitialize( double parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_3 = char_1 + char_2;
	v_LoggerWrite(unsigned_int_1,int_1,long_1,long_1,char_1);

	float_1 = float_2;
	return unsigned_int_1;
}
void v_Logger( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2;
	char_2 = char_1 + char_1;
}
void v_Timer( double parameter_1)
{
	if(1)
	{
	}
}
void v_InterruptSystem()
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	char_1 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		long long_1 = 1;
		double_2 = double_1 + double_1;
		long_1 = long_1 * long_1;
	}
	double_1 = double_3 * double_1;
}
void v_DataAbortStub()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	int int_4 = 1;
	long long_3 = 1;
	int int_5 = 1;
	double_3 = double_1 + double_2;
	double_3 = double_1 + double_3;
	short_1 = short_1 + short_1;
	int_1 = int_1;
	int_3 = int_2 * int_2;
	int_1 = int_1;
	float_1 = float_2;
	float_1 = float_1 + float_2;
	long_2 = long_1 + long_2;
	double_3 = double_2 + double_2;
	if(1)
	{
		double double_4 = 1;
		double_2 = double_1 * double_4;
	}
	double_3 = double_5 + double_3;
	if(1)
	{
		int_4 = int_1 + int_2;
	}
	if(1)
	{
		double double_6 = 1;
		double_2 = double_6;
	}
	long_2 = long_2 * long_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_4 = int_1;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_2 * short_3;
	}
	int_1 = int_4 + int_5;
}
void v_PrefetchAbortStub()
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	int int_2 = 1;
	char char_4 = 1;
	char_1 = char_1;
	double_3 = double_1 * double_2;
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	double_1 = double_2 * double_3;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_2 * char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = char_2 + char_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				long long_1 = 1;
				long_1 = long_1 + long_1;
				double_1 = double_2 + double_1;
			}
			float_1 = float_2 * float_3;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 + int_2;
	}
	char_4 = char_3 * char_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			int int_3 = 1;
			unsigned int unsigned_int_3 = 1;
			int_2 = int_3;
			if(1)
			{
				float float_4 = 1;
				int_3 = int_3 + int_3;
				float_4 = float_3 + float_2;
			}
			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_4 = unsigned_int_5 * unsigned_int_2;
		}
	}
}
void v_UndefinedInstructionStub()
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int_1 = int_1;
	long_1 = long_1;
	int_2 = int_2 + int_3;
	float_1 = float_1 * float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "3") < 0)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 * short_2;
	char_2 = char_1 + char_1;
	double_2 = double_1 * double_2;
	short_4 = short_1 + short_3;
	int_1 = int_3 * int_1;
	long_3 = long_1 + long_2;
	int_2 = int_2 * int_1;
	int_4 = int_2 + int_2;
	float_1 = float_1 * float_1;
	int_4 = int_5 + int_3;
	short_5 = short_2 * short_3;
	double_4 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	float_2 = float_3;
	float_1 = float_2;
	int_4 = int_2 * int_1;
	short_5 = short_3 + short_4;
	if(1)
	{
		char_3 = char_3 * char_1;
		float_2 = float_4 * float_3;
		short_3 = short_5 * short_5;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		long long_4 = 1;
		int_2 = int_5 * int_4;
		char_3 = char_1 * char_2;
		float_1 = float_2 * float_3;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
			if(1)
			{
				short short_6 = 1;
				short_6 = short_5 * short_6;
				long_1 = long_2 + long_1;
			}
		}
		if(1)
		{
			char char_4 = 1;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
			long_1 = long_3 + long_4;
			char_4 = char_4 + char_2;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
				float_4 = float_3;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
				long_4 = long_4;
				float_4 = float_3 * float_3;
			}
			int_3 = int_1 * int_1;
		}
		if(1)
		{
			float_3 = float_2 * float_4;
			double_1 = double_5 + double_2;
			long_4 = long_1;
			int_2 = int_4 * int_5;
			unsigned_int_3 = unsigned_int_5 + unsigned_int_4;
		}
	}
	int_7 = int_4 * int_6;
	unsigned_int_6 = unsigned_int_6 * unsigned_int_6;
	double_4 = double_3 + double_5;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_5;
	int_5 = int_1 * int_8;
	if(1)
	{
		double double_6 = 1;
		double_5 = double_6 * double_1;
	}
	int_4 = int_9 * int_1;
}
void v_ExceptionHandler2()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_1;
	v_DataAbortStub();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_1;
	double_2 = double_1 + double_2;
	v_UndefinedInstructionStub();

	int_1 = int_1 * int_2;
	v_PrefetchAbortStub();

	short_1 = short_2;
	v_CleanDataCache();

	long_1 = long_2;
	char_2 = char_1 + char_1;
	char_4 = char_3 * char_1;
	double_4 = double_3 + double_4;
	unsigned_int_2 = unsigned_int_3;
	int_2 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_4;
}
void v__CharGenerator()
{
}
void v_free()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1 * int_2;
	double_1 = double_1 * double_1;
	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, ">,") > 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_2 = 1;
			long long_3 = 1;
			long_2 = long_1 * long_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			double_2 = double_2 + double_1;
			long_3 = long_2 + long_2;
			int_2 = int_2 * int_2;
			double_1 = double_2 + double_1;
		}
	}
}
void v__BcmFrameBuffer( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_1;
	short_2 = short_1 * short_2;
	v__BcmMailBox(float_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_free();

	int_1 = int_2 + int_2;
}
void v__ScreenDevice( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 + int_1;
	char_2 = char_1 * char_2;
	v__BcmFrameBuffer(long_1);

	double_1 = double_1 * double_2;
	v_free();

	v__CharGenerator();

	int_2 = int_1 + int_3;
}
void v_ScreenDeviceGetPixel( short parameter_1,long parameter_2,long parameter_3)
{
	if(1)
	{
	}
}
char v_CharGeneratorGetUnderline( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		int_2 = int_2 + int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	return char_1;
}
void v_ScreenDeviceInvertCursor( char parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				char char_2 = 1;
				char_1 = v_CharGeneratorGetUnderline(int_1);

				float_1 = v_CharGeneratorGetCharWidth(unsigned_int_1);

				v_ScreenDeviceGetPixel(short_1,long_1,long_1);

				char_2 = char_2 * char_2;
			}
			if(1)
			{
				v_ScreenDeviceSetPixel(long_2,float_2,int_2,char_1);

				int_2 = int_1;
			}
		}
	}
	unsigned_int_1 = v_CharGeneratorGetCharHeight(double_1,-1 );

}
void v_ScreenDeviceSetPixel( long parameter_1,float parameter_2,int parameter_3,char parameter_4)
{
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
}
void v_ScreenDeviceEraseChar( short parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_1 = 1;
			char char_2 = 1;
			unsigned_int_1 = v_CharGeneratorGetCharHeight(double_1,-1 );

			float_1 = v_CharGeneratorGetCharWidth(unsigned_int_2);

			char_2 = char_1 + char_2;
		}
	}
	v_ScreenDeviceSetPixel(long_1,float_2,int_1,char_3);

}
float v_CharGeneratorGetCharWidth( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double_3 = double_1 + double_2;
	return float_1;
}
void v_ScreenDeviceClearLineEnd( unsigned int parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_1 + int_1;
	}
	float_1 = v_CharGeneratorGetCharWidth(unsigned_int_1);

	v_ScreenDeviceEraseChar(short_1,int_1,int_1);

}
void v_ScreenDeviceClearDisplayEnd( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_4 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	v_ScreenDeviceClearLineEnd(unsigned_int_1);

	short_1 = short_1 + short_1;
	short_3 = short_2 + short_2;
	short_2 = short_1 + short_3;
	unsigned_int_2 = v_CharGeneratorGetCharHeight(double_1,-1 );

	short_3 = short_4;
	double_2 = double_1 + double_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		int_2 = int_1 + int_2;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	char_1 = char_1;
}
void v_ScreenDeviceCursorHome( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2;
}
unsigned int v_CharGeneratorGetCharHeight( double parameter_1,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	int_1 = int_1;
	float_3 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long_2 = long_1 + long_2;
		char controller4vul_2119[2];
		fgets(controller4vul_2119 ,2 ,stdin);
		if( strcmp( controller4vul_2119, "Y") < 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			strcpy(vul_var, "CWE-761");
			if(uni_para == 985)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			double_1 = double_2;
		}
		if(1)
		{
			float_2 = float_3;
		}
		int_3 = int_2 + int_1;
	}
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long_2 = long_2 + long_3;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double_5 = double_3 + double_4;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_3;
		}
		unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	}
	int_1 = int_3 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_2 + short_2;
}
char v_BcmFrameBufferGetPitch( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short_1 = short_2;
	return char_1;
}
double v_BcmFrameBufferGetHeight( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 + double_2;
	return double_2;
}
short v_BcmFrameBufferGetWidth( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int_3 = int_1 + int_2;
	return short_1;
}
long v_BcmFrameBufferGetSize( float parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	float_1 = float_1 * float_1;
	return long_1;
}
double v_BcmFrameBufferGetBuffer( unsigned int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	int_1 = int_1;
	return double_1;
}
char v_BcmFrameBufferGetDepth( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_1 = double_1 * double_2;
	return char_1;
}
unsigned int v_BcmFrameBufferInitialize( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	v_InvalidateDataCache();

	int_2 = int_1 + int_2;
	v_CleanDataCache();

	char_3 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2;
	unsigned_int_1 = v_BcmMailBoxWriteRead(long_1,short_1);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_4;
}
void v_BcmFrameBufferSetPalette( int parameter_1,long parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
}
short v_memset(int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1;
	char_2 = char_2 + char_3;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	long_1 = long_1 + long_1;
	double_2 = double_1 * double_1;
	return short_1;
}
void v_BcmFrameBuffer( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	short short_3 = 1;
	int int_5 = 1;
	float float_4 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	v_BcmPropertyTags(short_1);

	float_1 = float_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		double_1 = v_BcmPropertyTagsGetTag(int_1,int_1,char_1,int_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		float_1 = float_1 + float_2;
		if(1)
		{
			double double_2 = 1;
			double_3 = double_1 + double_2;
			short_1 = v_malloc(double_3);

			int_2 = int_1;
			if(1)
			{
				int_1 = int_1;
				v_BcmMailBox(short_2);

				short_2 = v_memset(int_1,short_2);

				int_1 = int_3;
			}
		}
		if(1)
		{
			long_1 = long_1 + long_1;
			int_4 = int_3;
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long_3 = long_1 + long_2;
		double_5 = double_3 + double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
	}
	float_3 = float_2;
	int_3 = int_3;
	short_1 = short_3;
	int_1 = int_2 + int_1;
	int_1 = int_5 + int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	int_4 = int_4 + int_4;
	v__BcmPropertyTags(unsigned_int_3);

	float_4 = float_4 * float_1;
	int_2 = int_4 * int_4;
	char_1 = char_2 + char_2;
}
long v_ScreenDeviceInitialize()
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float_1 = float_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		v_ScreenDeviceClearDisplayEnd(char_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	char_1 = v_BcmFrameBufferGetDepth(double_1);

	v_ScreenDeviceCursorHome(int_3);

	double_1 = double_1 + double_1;
	float_2 = float_2 * float_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "}") > 0)
	{
	}
	if(1)
	{
	}
	unsigned_int_3 = v_BcmFrameBufferInitialize(int_3);

	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	v_BcmFrameBuffer(float_1);

	long_1 = v_BcmFrameBufferGetSize(float_3);

	float_3 = float_2 * float_4;
	double_3 = double_2 + double_1;
	short_1 = v_BcmFrameBufferGetWidth(int_2);

	char_1 = v_BcmFrameBufferGetPitch(float_4);

	v_ScreenDeviceInvertCursor(char_1);

	int_5 = int_4 + int_2;
	if(1)
	{
	}
	double_1 = double_4 * double_1;
	double_4 = v_BcmFrameBufferGetBuffer(unsigned_int_2);

	double_4 = double_1;
	short_2 = v_malloc(double_2);

	float_2 = float_1 + float_4;
	double_2 = v_BcmFrameBufferGetHeight(short_3);

	unsigned_int_3 = v_CharGeneratorGetCharHeight(double_2,-1 );

	int_4 = int_3 * int_3;
	v_BcmFrameBufferSetPalette(int_1,long_2,unsigned_int_6);

	unsigned_int_2 = unsigned_int_7 + unsigned_int_6;
	return long_1;
}
void v_CharGenerator( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
	}
}
void v_ScreenDevice( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short_1 = short_2;
	double_1 = double_1 * double_1;
	v_CharGenerator(long_1);

	double_2 = double_1 * double_1;
	short_3 = short_2 * short_2;
	char_1 = char_1 + char_2;
	short_4 = short_2 + short_3;
	double_2 = double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_2 + char_1;
	long_1 = long_1 + long_1;
	char_4 = char_2 * char_3;
}
void v__BcmMailBox( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_3 = int_1 * int_2;
}
void v__BcmPropertyTags( unsigned int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double_1 = double_1;
	v__BcmMailBox(float_1);

	short_1 = short_1;
}
char v_PageTableGetBaseAddress( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long_2 = long_1 + long_1;
	return char_1;
}
void v_MemorySystemEnableMMU( int parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = v_PageTableGetBaseAddress(unsigned_int_1);

	v_InvalidateDataCache();

}
void v_PageTable( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	short_2 = short_1 + short_1;
	long_3 = long_1 * long_2;
	double_1 = double_1 * double_1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		short short_3 = 1;
		float float_1 = 1;
		char char_1 = 1;
		double double_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_4 = 1;
		double_1 = double_2 * double_3;
		unsigned_int_1 = unsigned_int_1;
		double_4 = double_1 * double_3;
		short_2 = short_3;
		float_1 = float_1 + float_1;
		char_1 = char_1;
		double_5 = double_4 + double_2;
		int_2 = int_1 * int_1;
		double_1 = double_5 + double_4;
		double_2 = double_1 * double_4;
		double_4 = double_2 + double_5;
		unsigned_int_2 = unsigned_int_2;
		char_2 = char_1 + char_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		short_4 = short_2 + short_1;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1 * float_1;
		}
	}
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	v_CleanDataCache();

	long_4 = long_1 + long_2;
}
double v_palloc()
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	short short_5 = 1;
	long long_3 = 1;
	double double_6 = 1;
	short short_6 = 1;
	short short_7 = 1;
	int int_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_7 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	double_2 = double_3 + double_2;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_4 * int_2;
	short_2 = short_1 * short_1;
	float_2 = float_1 + float_1;
	long_2 = long_1 + long_2;
	float_3 = float_2 + float_3;
	int_2 = int_2;
	double_3 = double_1;
	float_2 = float_3 + float_2;
	double_2 = double_3 + double_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_5 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1;
	long_1 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	double_2 = double_1;
	short_4 = short_3 + short_1;
	float_4 = float_2 * float_2;
	float_6 = float_5 * float_5;
	long_1 = long_2 + long_1;
	int_3 = int_3 * int_1;
	char_3 = char_1 + char_2;
	int_5 = int_3 + int_3;
	float_6 = float_5 * float_1;
	unsigned_int_2 = unsigned_int_4;
	short_5 = short_1 + short_5;
	short_2 = short_1 * short_4;
	long_3 = long_2 + long_1;
	double_3 = double_1 + double_6;
	short_2 = short_6 * short_7;
	int_3 = int_6;
	long_1 = long_4 + long_5;
	short_1 = short_1 + short_1;
	double_7 = double_6 * double_4;
	int_5 = int_5 + int_1;
	long_3 = long_4 + long_4;
	return double_7;
}
void v_PageTable2( short parameter_1,long parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	char char_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	long_1 = long_1;
	char_1 = char_1 + char_1;
	double_2 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_1;
	double_4 = double_3 * double_2;
	long_2 = long_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	char_1 = char_1 * char_1;
	double_5 = v_palloc();

	unsigned_int_4 = unsigned_int_5;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	int_1 = int_1;
	long_1 = long_2 + long_2;
	double_2 = double_4 * double_4;
	char_1 = char_2 * char_2;
	int_3 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	int_4 = int_1;
	int_3 = int_1;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
	long_2 = long_2 + long_2;
	int_4 = int_3 + int_4;
	v_CleanDataCache();

	long_3 = long_2 + long_3;
	char_2 = char_2 * char_3;
	unsigned_int_7 = unsigned_int_1 + unsigned_int_6;
	short_2 = short_1 + short_2;
	unsigned_int_7 = unsigned_int_2;
	int_4 = int_2 * int_2;
	int_4 = int_2 + int_4;
	long_4 = long_1 * long_2;
	char_1 = char_4;
	double_5 = double_6 + double_6;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	char_4 = char_1 * char_2;
	unsigned_int_9 = unsigned_int_6 * unsigned_int_8;
	short_2 = short_3 * short_4;
	double_6 = double_3;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_7;
	short_4 = short_1 * short_4;
	int_3 = int_2 + int_5;
}
void v_LeaveCritical()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 + double_2;
		}
	}
}
void v_EnterCritical()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_2;
	int_2 = int_1 * int_2;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	int_1 = int_3;
}
short v_malloc( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_8 = 1;
	short short_1 = 1;
	v_LeaveCritical();

	double_2 = double_1 * double_1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_2 = 1;
			int int_3 = 1;
			long_2 = long_2 + long_3;
			if(1)
			{
				int_3 = int_1 * int_2;
			}
			int_3 = int_2 + int_2;
		}
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int int_4 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		int_2 = int_1 * int_4;
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		long long_7 = 1;
		int int_5 = 1;
		long_5 = long_4 * long_3;
		long_7 = long_4 + long_6;
		if(1)
		{
			float float_1 = 1;
			float_1 = float_2;
		}
		int_2 = int_1 + int_5;
		char_2 = char_1 + char_2;
	}
	v_EnterCritical();

	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	char_1 = char_2 * char_2;
	float_4 = float_2 * float_3;
	long_8 = long_3 * long_3;
	return short_1;
}
void v_mem_init( float parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_1 * int_1;
	int_2 = int_2 * int_1;
	if(1)
	{
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int_3 = int_2 * int_3;
		double_1 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char_1 = char_1 * char_1;
		double_3 = double_4;
	}
}
void v_InvalidateDataCache()
{
	double double_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double_1 = double_2;
			short_2 = short_1 + short_2;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			double_3 = double_3 + double_1;
		}
	}
}
double v_BcmMailBoxRead( double parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		float_1 = float_1 * float_1;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "!N") > 0)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_1;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long long_4 = 1;
			long_2 = long_1 * long_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				if(1)
				{
					double_1 = double_2 * double_1;
				}
			}
			long_3 = v_read32(int_1);

			long_4 = long_1 + long_3;
		}
	}
	float_1 = float_1 * float_1;
	return double_2;
}
void v_write32( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 * double_1;
}
void v_BcmMailBoxWrite( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	short_2 = short_1 * short_1;
	float_1 = float_2;
	double_1 = double_1 * double_2;
	v_write32(double_3,short_2);

	short_2 = short_3;
	char_1 = char_1 + char_2;
	long_1 = v_read32(int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_2;
	float_2 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	long_1 = long_1 * long_1;
	float_1 = float_2 + float_2;
	int_3 = int_1 + int_2;
	long_2 = long_2 * long_1;
	double_1 = double_3;
}
void v_TimerSimpleusDelay( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = v_read32(int_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
}
void v_TimerSimpleMsDelay( float parameter_1)
{
	double double_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	v_TimerSimpleusDelay(double_1);

}
long v_read32( int parameter_1)
{
	long long_1 = 1;
	return long_1;
}
void v_BcmMailBoxFlush( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_2;
	long_3 = v_read32(int_1);

	v_TimerSimpleMsDelay(float_1);

}
unsigned int v_BcmMailBoxWriteRead( long parameter_1,short parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	v_BcmMailBoxFlush(char_1);

	int_2 = int_1 + int_1;
	char_1 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	v_BcmMailBoxWrite(double_1,int_2);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	return unsigned_int_5;
	double_2 = v_BcmMailBoxRead(double_3);

}
void v_CleanDataCache()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			int_1 = int_1;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int int_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
			int_2 = int_1 + int_1;
		}
	}
}
short v_memcpy(char parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	int_3 = int_1 + int_2;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_4 + int_4;
	return short_1;
}
double v_BcmPropertyTagsGetTag( int parameter_1,int parameter_2,char parameter_4,int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	short_2 = short_1 + short_1;
	long_1 = long_1 + long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "_") < 0)
	{
	}
	v_CleanDataCache();

	float_2 = float_1 + float_1;
	unsigned_int_1 = v_BcmMailBoxWriteRead(long_2,short_1);

	v_InvalidateDataCache();

	int_1 = int_1 * int_1;
	return double_1;
	short_2 = v_memcpy(char_1,int_2);

}
void v_BcmMailBox( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_1;
	short_1 = short_1 * short_1;
}
void v_BcmPropertyTags( short parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_1 = long_1 * long_1;
	v_BcmMailBox(short_1);

	int_2 = int_1 + int_1;
}
void v_MemorySystem( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_5 = 1;
	int int_4 = 1;
	v_BcmPropertyTags(short_1);

	short_3 = short_1 + short_2;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 + long_1;
	int_1 = int_1;
	v_MemorySystemEnableMMU(int_2);

	double_1 = double_2;
	double_2 = double_2 + double_2;
	v__BcmPropertyTags(unsigned_int_3);

	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
		double_2 = double_2 * double_3;
		unsigned_int_2 = unsigned_int_5;
	}
	int_1 = int_2;
	char_2 = char_1 + char_1;
	double_1 = double_2 * double_4;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "5f") < 0)
	{
		float float_3 = 1;
		float float_4 = 1;
		int int_3 = 1;
		long long_2 = 1;
		float_2 = float_1 + float_1;
		double_5 = double_3 + double_2;
		float_4 = float_3 * float_3;
		v_mem_init(float_2,float_5);

		int_2 = int_3 * int_3;
		short_1 = v_malloc(double_5);

		v_PageTable(float_2);

		int_2 = int_3 * int_3;
		double_4 = v_BcmPropertyTagsGetTag(int_2,int_4,char_1,int_4);

		long_2 = long_1 * long_1;
		v_PageTable2(short_1,long_1);

		int_2 = int_2 * int_4;
	}
	int_4 = int_2 * int_1;
}
int v_USPiEnvInitialize()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_4 = 1;
	char char_2 = 1;
	v__ScreenDevice(unsigned_int_1);

	int_1 = v_InterruptSystemInitialize(double_1);

	double_1 = double_1 + double_2;
	long_1 = v_ScreenDeviceInitialize();

	unsigned_int_1 = v_LoggerInitialize(double_3,int_2);

	double_2 = double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		v_InterruptSystem();

		v__Timer(short_1);

		v__ExceptionHandler(double_3);

		short_2 = short_2 + short_2;
		v_ExceptionHandler2();

		v__InterruptSystem(float_1);

		double_2 = double_1 * double_2;
		v_MemorySystem(char_1);

		v_ScreenDevice(int_2);

		v_Timer(double_4);

		double_4 = double_2 * double_5;
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "0") > 0)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_3 = 1;
			short_1 = v_TimerInitialize(float_1);

			short_2 = short_3 + short_3;
		}
	}
	return int_1;
	v_Logger(double_3);

	v__Logger(char_2);

}
int main()
{
	int uni_para =985;
	int int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char controller4vul_2091[2];
	fgets(controller4vul_2091 ,2 ,stdin);
	if( strcmp( controller4vul_2091, "`") > 0)
	{
		int_1 = v_USPiInitialize(uni_para);

	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		long_1 = long_1 + long_2;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_2 = 1;
		short_2 = short_1 + short_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	float_1 = float_1 + float_1;
	char_2 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	return int_2;
}

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

void v_testReadLargeVirtualMemory( double parameter_1);
unsigned int v_testReadLargePhysicalMemory( unsigned int parameter_1);
short v_testReadWritePhysicalMemorySpeed( short parameter_1);
double v_testReadWriteVirtualMemorySpeed( double parameter_1);
float v_testLargePhysicalPageSyscallBP( long parameter_1);
unsigned int v_testLargeVirtualPageSyscallBP( char parameter_1);
unsigned int v_testReadWriteAllPhysicalMemory( short parameter_1,int uni_para);
char v_FDP_GetPhysicalMemorySize( float parameter_1,long parameter_2,int uni_para);
int v_testReadAllPhysicalMemory( long parameter_1);
float v_testMultiplePhysicalSyscallBP( short parameter_1,long parameter_2);
short v_testMultipleVirtualSyscallBP( long parameter_1,unsigned int parameter_2);
double v_FDP_VirtualToPhysical( unsigned int parameter_1,double parameter_2,short parameter_3,double parameter_4);
unsigned int v_testPhysicalSyscallBP( int parameter_1,unsigned int parameter_2);
unsigned int v_testDebugRegisters( char parameter_1);
char v_testGetStatePerformance( double parameter_1);
float v_FDP_WriteVirtualMemory( short parameter_1,double parameter_2,char parameter_3,int parameter_4,unsigned int parameter_5);
double v_testReadWriteVirtualMemory( short parameter_1);
float v_FDP_WritePhysicalMemory( double parameter_1,int parameter_2,char parameter_3,short parameter_4);
float v_testReadWritePhysicalMemory( char parameter_1);
int v_testReadWriteRegister( double parameter_1);
unsigned int v_testMultiCpu( long parameter_1);
unsigned int v_FDP_GetCpuCount( unsigned int parameter_1,short parameter_2);
float v_testVirtualSyscallBP( int parameter_1,int parameter_2);
short v_testState( char parameter_1);
long v_FDP_ReadPhysicalMemoryInternal( long parameter_1,long parameter_2,short parameter_3,char parameter_4);
short v_FDP_ReadPhysicalMemory( short parameter_1,int parameter_2,short parameter_3,double parameter_4);
long v_testReadMemoryThread( int parameter_1);
void v_testReadRegisterThread();
char v_testStateThread( short parameter_1);
unsigned int v_testMultiThread( long parameter_1);
float v_FDP_WriteRegister( int parameter_1,char parameter_2,float parameter_3,int parameter_4);
int v_FDP_ReadVirtualMemoryInternal( float parameter_1,unsigned int parameter_2,unsigned int parameter_3,unsigned int parameter_4,float parameter_5);
int v_FDP_ReadVirtualMemory( short parameter_1,short parameter_2,long parameter_3,short parameter_4,int parameter_5);
short v_testSetCr3( char parameter_1);
double v_FDP_WriteMsr( char parameter_1,char parameter_2,char parameter_3,double parameter_4);
float v_testReadWriteMSR( long parameter_1);
int v_TimerGetDelay();
void v_TimerSetDelay( int parameter_1);
int v_testSingleStepSpeed( char parameter_1);
int v_FDP_ReadRegister( short parameter_1,double parameter_2,long parameter_3,unsigned int parameter_4);
char v_FDP_GetState( short parameter_1,int parameter_2);
double v_FDP_GetStateChanged( int parameter_1);
long v_FDP_SetBreakpoint( short parameter_1,short parameter_2,int parameter_3,int parameter_4,int parameter_5,short parameter_6,unsigned int parameter_7,int parameter_8,double parameter_9);
short v_FDP_ReadMsr( long parameter_1,float parameter_2,long parameter_3,double parameter_4);
long v_testSingleStepPageBreakpoint();
char v_FDP_SingleStep( short parameter_1,short parameter_2);
long v_testSingleStepPause( short parameter_1);
unsigned int v_FDP_Resume( float parameter_1);
unsigned int v_FDP_UnsetBreakpoint( char parameter_1,char parameter_2);
unsigned int v_UnlockSHM( char parameter_1);
double v_ReadFDPDataWithStatus( double parameter_1,short parameter_2,unsigned int parameter_3,int uni_para);
long v_ReadFDPData( char parameter_1,long parameter_2,int uni_para);
int v_ttas_spinlock_unlock( short parameter_1);
int v_WriteFDPDataWithStatus( float parameter_1,short parameter_2,unsigned int parameter_3,char parameter_4);
int v_WriteFDPData( long parameter_1,double parameter_2,int parameter_3);
void v_ttas_spinlock_lock( short parameter_1,int uni_para);
unsigned int v_LockSHM();
void v_FDP_Pause( long parameter_1);
short v_testUnsetBreakpoint( char parameter_1);
short v_FDP_Init( short parameter_1);
unsigned int v_TimerRoutine( float parameter_1);
void v_OpenShm( long parameter_1,long parameter_2);
short v_FDP_OpenSHM();
int v_testFDP( char parameter_1,int uni_para);
void v_usage();
void v_testReadLargeVirtualMemory( double parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int_1 = v_FDP_ReadVirtualMemory(short_1,short_1,long_1,short_2,int_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_2 + short_2;
	double_2 = double_1 * double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "@") > 0)
	{
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long_1 = long_2 * long_3;
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	int_1 = int_2 + int_1;
	short_1 = v_FDP_ReadMsr(long_4,float_1,long_3,double_2);

	double_3 = double_2 + double_2;
}
unsigned int v_testReadLargePhysicalMemory( unsigned int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	short short_4 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1 * int_1;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2;
	}
	double_2 = double_1 * double_2;
	int_1 = v_FDP_ReadRegister(short_1,double_3,long_1,unsigned_int_1);

	float_4 = float_1 * float_3;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if(remainder_check(controller_2,100,2))
	{
		double_2 = double_1;
		unsigned_int_2 = unsigned_int_1;
	}
	short_1 = v_FDP_ReadPhysicalMemory(short_2,int_2,short_3,double_2);

	int_3 = int_2 * int_3;
	short_3 = short_4 * short_1;
	return unsigned_int_2;
}
short v_testReadWritePhysicalMemorySpeed( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_3 = int_1 + int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Z-") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		short_1 = short_1 + short_2;
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		short_4 = short_3 + short_1;
		long_2 = long_1 + long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		short_4 = v_FDP_ReadPhysicalMemory(short_3,int_1,short_3,double_1);

		short_2 = short_2 * short_4;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
		long_1 = long_2 + long_2;
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3 * long_2;
		short_4 = short_1 + short_2;
	}
	double_1 = double_2 * double_2;
	return short_4;
}
double v_testReadWriteVirtualMemorySpeed( double parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	return double_1;
	short_1 = v_FDP_ReadMsr(long_1,float_1,long_2,double_1);

	int_1 = v_FDP_ReadVirtualMemory(short_1,short_1,long_2,short_1,int_2);

}
float v_testLargePhysicalPageSyscallBP( long parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	short short_2 = 1;
	int int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char char_2 = 1;
	short short_3 = 1;
	double_1 = v_FDP_VirtualToPhysical(unsigned_int_1,double_1,short_1,double_2);

	char_1 = v_FDP_GetState(short_1,int_1);

	unsigned_int_1 = unsigned_int_2;
	short_1 = v_FDP_ReadMsr(long_1,float_1,long_1,double_3);

	long_2 = v_FDP_SetBreakpoint(short_1,short_2,int_1,int_1,int_1,short_2,unsigned_int_2,int_2,double_3);

	unsigned_int_2 = v_FDP_Resume(float_2);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	return float_1;
	double_2 = v_FDP_GetStateChanged(int_3);

	unsigned_int_2 = v_FDP_UnsetBreakpoint(char_2,char_2);

	char_1 = v_FDP_SingleStep(short_2,short_3);

	v_FDP_Pause(long_1);

}
unsigned int v_testLargeVirtualPageSyscallBP( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	char char_3 = 1;
	double double_4 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = v_FDP_UnsetBreakpoint(char_1,char_2);

	double_1 = double_1 + double_2;
	char_1 = v_FDP_SingleStep(short_1,short_1);

	short_2 = short_2 + short_2;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_3;
	v_FDP_Pause(long_1);

	long_2 = v_FDP_SetBreakpoint(short_1,short_3,int_3,int_3,int_4,short_4,unsigned_int_1,int_3,double_3);

	char_1 = v_FDP_GetState(short_1,int_3);

	long_4 = long_1 * long_3;
	unsigned_int_1 = v_FDP_Resume(float_1);

	char_3 = char_3 * char_2;
	short_2 = v_FDP_ReadMsr(long_3,float_1,long_4,double_4);

	int_3 = int_1 * int_4;
	return unsigned_int_1;
}
unsigned int v_testReadWriteAllPhysicalMemory( short parameter_1,int uni_para)
{
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = v_FDP_GetPhysicalMemorySize(float_1,long_1,uni_para);

	short_1 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_3;
}
char v_FDP_GetPhysicalMemorySize( float parameter_1,long parameter_2,int uni_para)
{
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char controller4vul_2528[2];
	fgets(controller4vul_2528 ,2 ,stdin);
	if( strcmp( controller4vul_2528, "C") < 0)
	{
		long_1 = v_ReadFDPData(char_1,long_1,uni_para);

	}
	double_2 = double_1 * double_1;
	float_1 = float_1 * float_1;
	double_1 = double_1 * double_3;
	char_2 = char_1;
	int_2 = int_1 + int_2;
	long_3 = long_2 + long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_3 = short_1 * short_2;
	return char_2;
}
int v_testReadAllPhysicalMemory( long parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	float float_3 = 1;
	char char_2 = 1;
	double double_7 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int_1 = int_1 * int_1;
	char_1 = v_FDP_GetPhysicalMemorySize(float_1,long_1,-1 );

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 * double_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	int_2 = int_1 + int_2;
	float_2 = float_1 * float_1;
	short_1 = v_FDP_ReadPhysicalMemory(short_1,int_3,short_2,double_2);

	double_4 = double_5;
	unsigned_int_4 = unsigned_int_4;
	long_2 = long_2 + long_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
	if(1)
	{
		double_6 = double_4 * double_6;
	}
	unsigned_int_2 = v_FDP_Resume(float_3);

	char_2 = char_1 + char_2;
	double_3 = double_3 * double_4;
	long_1 = long_2;
	if(1)
	{
		short_2 = short_2 * short_1;
		long_1 = long_1 + long_2;
	}
	double_7 = double_1 * double_6;
	int_2 = int_2 * int_4;
	unsigned_int_1 = unsigned_int_6;
	return int_1;
	v_FDP_Pause(long_1);

}
float v_testMultiplePhysicalSyscallBP( short parameter_1,long parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	short short_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	char char_3 = 1;
	long_1 = v_FDP_SetBreakpoint(short_1,short_1,int_1,int_1,int_2,short_1,unsigned_int_1,int_1,double_1);

	unsigned_int_1 = v_FDP_Resume(float_1);

	double_2 = double_3;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		short_1 = v_FDP_ReadMsr(long_2,float_2,long_2,double_4);

		char_1 = v_FDP_GetState(short_1,int_3);

		char_2 = v_FDP_SingleStep(short_2,short_2);

		v_FDP_Pause(long_1);

		long_4 = long_2 + long_3;
	}
	float_3 = float_2;
	return float_1;
	double_1 = v_FDP_VirtualToPhysical(unsigned_int_2,double_5,short_2,double_5);

	unsigned_int_2 = v_FDP_UnsetBreakpoint(char_3,char_3);

}
short v_testMultipleVirtualSyscallBP( long parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_4 = 1;
	double double_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	short_1 = v_FDP_ReadMsr(long_1,float_1,long_1,double_1);

	char_1 = v_FDP_SingleStep(short_2,short_3);

	int_3 = int_1 + int_2;
	v_FDP_Pause(long_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = v_FDP_GetCpuCount(unsigned_int_1,short_2);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	int_2 = int_1;
	if(1)
	{
	}
	long_1 = v_FDP_SetBreakpoint(short_3,short_1,int_3,int_4,int_5,short_4,unsigned_int_1,int_1,double_2);

	unsigned_int_2 = v_FDP_UnsetBreakpoint(char_1,char_1);

	float_2 = float_1 + float_2;
	if(1)
	{
	}
	unsigned_int_4 = v_FDP_Resume(float_2);

	char_1 = v_FDP_GetState(short_3,int_4);

	int_4 = int_1;
	return short_2;
}
double v_FDP_VirtualToPhysical( unsigned int parameter_1,double parameter_2,short parameter_3,double parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	long long_3 = 1;
	char char_2 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "Z") > 0)
	{
	}
	unsigned_int_1 = v_LockSHM();

	double_3 = double_1 + double_2;
	float_2 = float_1 * float_1;
	long_1 = v_ReadFDPData(char_1,long_2,-1 );

	unsigned_int_2 = unsigned_int_1;
	short_1 = short_2;
	double_1 = double_1 + double_3;
	float_2 = float_2 * float_3;
	unsigned_int_2 = v_UnlockSHM(char_1);

	char_1 = char_1 * char_1;
	int_1 = v_WriteFDPData(long_3,double_2,int_1);

	char_1 = char_2;
	return double_3;
}
unsigned int v_testPhysicalSyscallBP( int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	short_1 = v_FDP_ReadMsr(long_1,float_1,long_1,double_1);

	long_1 = long_1 + long_1;
	if(1)
	{
	}
	double_2 = v_FDP_GetStateChanged(int_1);

	unsigned_int_1 = v_FDP_UnsetBreakpoint(char_1,char_2);

	char_2 = v_FDP_SingleStep(short_1,short_2);

	long_1 = long_1 + long_1;
	if(1)
	{
		v_FDP_Pause(long_1);

		int_1 = v_TimerGetDelay();

		int_2 = int_1;
		double_1 = v_FDP_VirtualToPhysical(unsigned_int_2,double_3,short_1,double_2);

		long_2 = v_FDP_SetBreakpoint(short_1,short_2,int_3,int_1,int_2,short_3,unsigned_int_3,int_1,double_2);

		char_2 = v_FDP_GetState(short_1,int_1);

		int_2 = int_3 + int_1;
	}
	return unsigned_int_2;
	unsigned_int_1 = v_FDP_Resume(float_2);

}
unsigned int v_testDebugRegisters( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_2 = 1;
	long long_4 = 1;
	float float_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_4 = 1;
	int int_9 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_5 = 1;
	double double_5 = 1;
	long long_5 = 1;
	double_2 = double_1 * double_1;
	int_1 = int_1;
	double_1 = double_2 + double_1;
	unsigned_int_1 = v_FDP_Resume(float_1);

	double_3 = double_1 + double_2;
	double_2 = v_FDP_GetStateChanged(int_2);

	int_1 = int_3 * int_4;
	long_1 = long_1 + long_1;
	float_2 = float_2 + float_3;
	char_1 = v_FDP_SingleStep(short_1,short_2);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	short_2 = short_2 * short_1;
	short_3 = short_1 + short_1;
	v_FDP_Pause(long_2);

	unsigned_int_2 = unsigned_int_3;
	int_2 = int_4 + int_3;
	short_2 = v_FDP_ReadMsr(long_3,float_1,long_1,double_4);

	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_6;
	unsigned_int_1 = unsigned_int_7 * unsigned_int_1;
	char_2 = v_FDP_GetState(short_2,int_3);

	short_3 = short_3 * short_3;
	double_4 = double_1 * double_2;
	long_4 = long_4 + long_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	short_2 = short_3 * short_3;
	float_4 = float_4 * float_2;
	unsigned_int_7 = unsigned_int_1;
	int_3 = int_2 + int_2;
	char_2 = char_2;
	char_2 = char_1 * char_1;
	int_7 = int_5 * int_6;
	double_2 = double_3;
	double_4 = double_1 + double_3;
	v_TimerSetDelay(int_6);

	double_4 = double_1 * double_2;
	int_1 = v_TimerGetDelay();

	double_4 = double_1 + double_2;
	float_4 = float_2 * float_1;
	int_2 = int_6 + int_3;
	float_3 = v_FDP_WriteRegister(int_8,char_1,float_2,int_1);

	short_4 = short_2 * short_3;
	int_9 = int_10;
	unsigned_int_7 = unsigned_int_2 * unsigned_int_7;
	int_6 = v_FDP_ReadRegister(short_1,double_4,long_3,unsigned_int_4);

	unsigned_int_1 = unsigned_int_7 * unsigned_int_8;
	short_5 = short_3 + short_2;
	double_4 = double_2 + double_2;
	double_4 = double_3 * double_5;
	long_1 = long_3 + long_5;
	return unsigned_int_7;
}
char v_testGetStatePerformance( double parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "7X") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char_1 = v_FDP_GetState(short_1,int_1);

		int_2 = v_TimerGetDelay();

		unsigned_int_1 = unsigned_int_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	return char_2;
}
float v_FDP_WriteVirtualMemory( short parameter_1,double parameter_2,char parameter_3,int parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	float float_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "?") > 0)
	{
	}
	double_3 = double_1 * double_2;
	unsigned_int_1 = v_LockSHM();

	unsigned_int_2 = v_UnlockSHM(char_1);

	char_1 = char_1 + char_1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_3 + int_2;
	long_2 = long_1 * long_1;
	double_5 = double_1 + double_4;
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		long_2 = long_2 + long_1;
		int_1 = int_3 + int_1;
		int_2 = v_WriteFDPData(long_3,double_2,int_4);

		int_4 = int_4 + int_4;
	}
	long_1 = v_ReadFDPData(char_2,long_3,-1 );

	char_2 = char_1;
	return float_1;
}
double v_testReadWriteVirtualMemory( short parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	long long_5 = 1;
	int int_4 = 1;
	short short_2 = 1;
	float float_3 = 1;
	short_1 = v_FDP_ReadMsr(long_1,float_1,long_2,double_1);

	long_4 = long_1 + long_3;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 + int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	char_2 = char_1 + char_2;
	double_1 = double_2 * double_2;
	if(1)
	{
		double double_3 = 1;
		float_2 = v_FDP_WriteVirtualMemory(short_1,double_2,char_2,int_2,unsigned_int_3);

		double_1 = double_3 * double_3;
	}
	int_1 = int_2 * int_3;
	long_4 = long_2 + long_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_3 = 1;
			char_1 = char_1 + char_3;
		}
	}
	long_2 = long_3 * long_1;
	if(1)
	{
		int_4 = v_FDP_ReadVirtualMemory(short_2,short_2,long_4,short_2,int_3);

		double_2 = double_2 * double_1;
	}
	if(1)
	{
		int int_5 = 1;
		int_5 = int_5 + int_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			int_2 = int_4;
		}
	}
	float_2 = float_3 * float_3;
	return double_2;
}
float v_FDP_WritePhysicalMemory( double parameter_1,int parameter_2,char parameter_3,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	float float_4 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "n") < 0)
	{
	}
	double_1 = double_1 + double_2;
	int_1 = v_WriteFDPData(long_1,double_2,int_2);

	float_2 = float_1 * float_2;
	int_2 = int_1 * int_3;
	int_2 = int_3;
	unsigned_int_1 = v_LockSHM();

	long_2 = v_ReadFDPData(char_1,long_2,-1 );

	int_4 = int_4 * int_5;
	unsigned_int_1 = v_UnlockSHM(char_1);

	short_1 = short_1 + short_2;
	float_3 = float_1 * float_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		int int_6 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		int_2 = int_6;
		int_6 = int_4 * int_3;
	}
	char_1 = char_1 * char_2;
	return float_4;
}
float v_testReadWritePhysicalMemory( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_4;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	float_2 = float_1 * float_2;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "hd") > 0)
	{
		double_3 = double_1 + double_1;
	}
	if(1)
	{
		float_3 = v_FDP_WritePhysicalMemory(double_1,int_1,char_1,short_1);

		short_1 = short_1;
	}
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "8") < 0)
	{
		short_2 = v_FDP_ReadPhysicalMemory(short_3,int_1,short_3,double_2);

		double_3 = double_3;
	}
	long_1 = long_1;
	return float_2;
}
int v_testReadWriteRegister( double parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_2 = double_2 + double_1;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_3 = double_3 + double_4;
	}
	double_2 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int_1 = v_FDP_ReadRegister(short_1,double_1,long_1,unsigned_int_1);

		float_1 = v_FDP_WriteRegister(int_1,char_1,float_1,int_1);

		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	char controller_6[2];
	fgets(controller_6 ,2 ,stdin);
	if( strcmp( controller_6, "S") < 0)
	{
		int int_3 = 1;
		int_2 = int_3;
	}
	v_FDP_Pause(long_2);

	long_2 = long_2 + long_3;
	return int_4;
}
unsigned int v_testMultiCpu( long parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	char_1 = char_1;
	double_2 = double_1 + double_1;
	if(1)
	{
		long long_2 = 1;
		long_1 = long_2;
	}
	short_1 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = v_FDP_GetCpuCount(unsigned_int_2,short_3);

		double_1 = double_2 * double_3;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 * int_1;
		}
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "PN") < 0)
		{
		}
	}
	long_4 = long_1 + long_3;
	return unsigned_int_1;
	int_3 = v_FDP_ReadRegister(short_1,double_3,long_1,unsigned_int_2);

}
unsigned int v_FDP_GetCpuCount( unsigned int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "g}") > 0)
	{
	}
	unsigned_int_1 = v_LockSHM();

	int_2 = int_1 * int_2;
	int_2 = int_1 * int_3;
	int_3 = v_WriteFDPData(long_1,double_1,int_2);

	long_1 = v_ReadFDPData(char_1,long_1,-1 );

	short_1 = short_1 + short_1;
	double_4 = double_2 * double_3;
	unsigned_int_2 = v_UnlockSHM(char_2);

	char_1 = char_2 + char_1;
	double_6 = double_5 * double_5;
	short_1 = short_1;
	char_2 = char_1 + char_1;
	return unsigned_int_2;
}
float v_testVirtualSyscallBP( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	double double_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_FDP_Pause(long_1);

	unsigned_int_2 = v_FDP_UnsetBreakpoint(char_1,char_1);

	char_1 = v_FDP_SingleStep(short_1,short_1);

	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = v_FDP_GetCpuCount(unsigned_int_2,short_2);

		long_1 = v_FDP_SetBreakpoint(short_2,short_2,int_2,int_3,int_3,short_3,unsigned_int_3,int_1,double_1);

		int_4 = int_1 * int_1;
		double_3 = double_1 * double_2;
		int_3 = v_TimerGetDelay();

		unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_3 = 1;
			short_4 = v_FDP_ReadMsr(long_2,float_1,long_1,double_3);

			double_4 = v_FDP_GetStateChanged(int_2);

			long_1 = long_3 + long_1;
		}
	}
	return float_2;
	unsigned_int_3 = v_FDP_Resume(float_3);

	char_1 = v_FDP_GetState(short_5,int_4);

}
short v_testState( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	long long_4 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	int int_3 = 1;
	unsigned_int_1 = v_FDP_Resume(float_1);

	long_2 = long_1 * long_1;
	long_1 = long_1 + long_3;
	short_1 = v_FDP_ReadMsr(long_3,float_1,long_4,double_1);

	double_1 = double_1;
	v_FDP_Pause(long_3);

	long_3 = v_FDP_SetBreakpoint(short_2,short_3,int_1,int_1,int_2,short_3,unsigned_int_1,int_2,double_2);

	unsigned_int_2 = v_FDP_UnsetBreakpoint(char_1,char_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_3 + char_4;
	return short_3;
	char_4 = v_FDP_GetState(short_4,int_3);

}
long v_FDP_ReadPhysicalMemoryInternal( long parameter_1,long parameter_2,short parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = v_UnlockSHM(char_1);

	int_2 = int_1 * int_1;
	unsigned_int_4 = v_LockSHM();

	int_1 = int_1;
	double_1 = v_ReadFDPDataWithStatus(double_2,short_1,unsigned_int_1,-1 );

	double_3 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
	int_1 = int_1 * int_1;
	char_3 = char_2 * char_2;
	double_4 = double_4 + double_2;
	char_1 = char_3 * char_4;
	int_2 = v_WriteFDPData(long_1,double_4,int_1);

	float_3 = float_1 * float_2;
	return long_2;
}
short v_FDP_ReadPhysicalMemory( short parameter_1,int parameter_2,short parameter_3,double parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int_1 = int_1 * int_1;
	double_2 = double_1 + double_1;
	long_1 = long_2;
	long_3 = v_FDP_ReadPhysicalMemoryInternal(long_2,long_3,short_1,char_1);

	int_2 = int_1 * int_1;
	double_1 = double_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "[") > 0)
	{
	}
	char_1 = char_1 * char_1;
	return short_1;
}
long v_testReadMemoryThread( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_2;
	char_1 = char_1 + char_2;
	short_1 = v_FDP_ReadPhysicalMemory(short_2,int_3,short_1,double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return long_1;
}
void v_testReadRegisterThread()
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_5 = 1;
	float float_6 = 1;
	int_1 = v_FDP_ReadRegister(short_1,double_1,long_1,unsigned_int_1);

	int_2 = int_1 + int_1;
	char_2 = char_1 * char_2;
	float_1 = float_1 + float_2;
	float_1 = float_2 * float_3;
	unsigned_int_2 = unsigned_int_2;
	char_1 = char_1 * char_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_3 = int_3 * int_1;
	char_4 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	float_5 = float_4 * float_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "k8") > 0)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	char_2 = char_2 * char_2;
	long_1 = long_1 + long_1;
	char_2 = char_2 * char_5;
	float_1 = float_6;
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int_6 = int_4 + int_5;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
}
char v_testStateThread( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_2 = 1;
	long_3 = long_1 + long_2;
	double_2 = double_1 * double_1;
	float_2 = float_1 * float_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	double_3 = double_2;
	float_1 = float_2 * float_2;
	int_1 = int_1 + int_1;
	int_4 = int_2 * int_3;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2 * float_1;
		float_3 = float_1 + float_3;
	}
	if(1)
	{
		int int_5 = 1;
		int_5 = int_1 + int_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	short_1 = short_1 * short_1;
	char_1 = v_FDP_GetState(short_1,int_2);

	short_4 = short_2 * short_3;
	char_1 = char_1 + char_1;
	return char_2;
}
unsigned int v_testMultiThread( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_3 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 + short_1;
	long_2 = long_1 * long_2;
	float_2 = float_1 + float_1;
	short_3 = short_1 * short_2;
	char_1 = v_testStateThread(short_4);

	short_5 = short_5 * short_5;
	long_3 = long_2 * long_3;
	int_1 = int_1 + int_1;
	v_testReadRegisterThread();

	char_2 = char_2 + char_1;
	double_2 = double_1 * double_1;
	float_2 = float_1 * float_2;
	float_2 = float_3 + float_3;
	unsigned_int_1 = unsigned_int_1;
	return unsigned_int_1;
	long_3 = v_testReadMemoryThread(int_1);

}
float v_FDP_WriteRegister( int parameter_1,char parameter_2,float parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "sS") > 0)
	{
	}
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 * char_1;
	unsigned_int_2 = v_UnlockSHM(char_1);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	int_1 = v_WriteFDPData(long_1,double_3,int_2);

	short_3 = short_1 * short_2;
	short_3 = short_2;
	char_2 = char_2 * char_2;
	unsigned_int_4 = v_LockSHM();

	double_1 = double_4 * double_2;
	long_2 = v_ReadFDPData(char_3,long_3,-1 );

	unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	int_3 = int_1 + int_3;
	int_1 = int_4;
	return float_1;
}
int v_FDP_ReadVirtualMemoryInternal( float parameter_1,unsigned int parameter_2,unsigned int parameter_3,unsigned int parameter_4,float parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float_1 = float_1 * float_2;
	int_1 = v_WriteFDPData(long_1,double_1,int_1);

	short_1 = short_1 * short_1;
	double_2 = double_2 * double_3;
	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = v_ReadFDPDataWithStatus(double_1,short_2,unsigned_int_1,-1 );

	float_3 = float_2 * float_2;
	float_2 = float_2;
	unsigned_int_4 = unsigned_int_3;
	char_1 = char_1 * char_2;
	unsigned_int_4 = v_LockSHM();

	float_4 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	return int_2;
	unsigned_int_6 = v_UnlockSHM(char_2);

}
int v_FDP_ReadVirtualMemory( short parameter_1,short parameter_2,long parameter_3,short parameter_4,int parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	double_2 = double_3;
	if(1)
	{
		int_1 = int_2;
	}
	double_2 = double_1 * double_3;
	if(1)
	{
		short short_1 = 1;
		short_3 = short_1 + short_2;
		int_2 = int_2 * int_2;
	}
	if(1)
	{
		int_3 = v_FDP_ReadVirtualMemoryInternal(float_1,unsigned_int_2,unsigned_int_3,unsigned_int_4,float_2);

		int_1 = int_2;
		if(1)
		{
			double_1 = double_1;
		}
	}
	if(1)
	{
		double_2 = double_3;
	}
	if(1)
	{
		int_2 = int_1;
		if(1)
		{
			int_5 = int_3 * int_4;
		}
	}
	if(1)
	{
		short_2 = short_3 * short_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
	}
	if(1)
	{
		int_4 = int_5 * int_2;
	}
	return int_2;
}
short v_testSetCr3( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_3 = 1;
	long long_3 = 1;
	float float_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2;
	float_1 = v_FDP_WriteRegister(int_1,char_1,float_2,int_2);

	double_1 = double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	char_1 = char_1 + char_1;
	unsigned_int_4 = v_FDP_Resume(float_2);

	char_3 = char_1 * char_2;
	short_1 = short_1 + short_2;
	long_2 = long_1 * long_2;
	char_4 = char_1 * char_1;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	v_FDP_Pause(long_2);

	double_3 = double_3 * double_1;
	int_3 = v_FDP_ReadRegister(short_3,double_3,long_3,unsigned_int_3);

	char_1 = char_1;
	if(1)
	{
		float_2 = float_1 * float_1;
	}
	short_3 = short_3 * short_3;
	float_1 = float_3 * float_3;
	return short_1;
	int_2 = v_FDP_ReadVirtualMemory(short_4,short_5,long_3,short_4,int_2);

}
double v_FDP_WriteMsr( char parameter_1,char parameter_2,char parameter_3,double parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	int int_2 = 1;
	char char_5 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "g!") < 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = v_LockSHM();

	char_1 = char_1 * char_2;
	long_1 = v_ReadFDPData(char_3,long_1,-1 );

	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	int_1 = v_WriteFDPData(long_2,double_1,int_1);

	unsigned_int_4 = unsigned_int_5;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_2 = v_UnlockSHM(char_3);

	char_4 = char_2 + char_2;
	int_2 = int_1 + int_1;
	double_1 = double_1 + double_1;
	char_1 = char_4 * char_5;
	int_1 = int_2 + int_3;
	short_2 = short_1 + short_2;
	return double_1;
}
float v_testReadWriteMSR( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_2 = 1;
	double_1 = double_1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = v_FDP_Resume(float_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		double double_3 = 1;
		double_2 = double_1 * double_3;
	}
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
		int int_2 = 1;
		short_1 = v_FDP_ReadMsr(long_2,float_1,long_3,double_1);

		double_2 = v_FDP_WriteMsr(char_1,char_1,char_2,double_2);

		int_1 = int_1 + int_2;
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		char char_3 = 1;
		char_1 = char_3 + char_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2 + short_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_1 = short_3;
	}
	v_FDP_Pause(long_3);

	long_1 = long_4;
	short_1 = short_4 * short_5;
	return float_2;
}
int v_TimerGetDelay()
{
	int int_1 = 1;
	return int_1;
}
void v_TimerSetDelay( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
int v_testSingleStepSpeed( char parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	v_TimerSetDelay(int_1);

	char_1 = v_FDP_SingleStep(short_1,short_2);

	short_2 = short_1 * short_1;
	return int_1;
	v_FDP_Pause(long_1);

	int_2 = v_TimerGetDelay();

	unsigned_int_1 = v_FDP_Resume(float_1);

}
int v_FDP_ReadRegister( short parameter_1,double parameter_2,long parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int int_7 = 1;
	if(1)
	{
	}
	int_1 = v_WriteFDPData(long_1,double_1,int_1);

	float_1 = float_1 + float_2;
	double_2 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2 + double_3;
	long_2 = long_3;
	int_3 = int_2 + int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	float_1 = float_3 * float_1;
	long_2 = v_ReadFDPData(char_1,long_2,-1 );

	double_4 = double_1 * double_2;
	short_3 = short_1 + short_2;
	unsigned_int_1 = v_LockSHM();

	char_3 = char_2 + char_3;
	double_3 = double_2 + double_2;
	double_3 = double_5 * double_6;
	int_2 = int_2 + int_4;
	double_5 = double_1 + double_3;
	double_4 = double_1 * double_1;
	int_5 = int_5 * int_2;
	int_3 = int_5 * int_6;
	int_2 = int_2 * int_4;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_3;
	char_1 = char_4 * char_4;
	int_1 = int_4 + int_4;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	double_2 = double_7 + double_4;
	double_1 = double_3 + double_7;
	long_4 = long_4 + long_2;
	double_3 = double_2 + double_5;
	unsigned_int_5 = v_UnlockSHM(char_2);

	long_6 = long_4 + long_5;
	int_5 = int_7;
	return int_7;
}
char v_FDP_GetState( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	double_1 = double_2;
	unsigned_int_1 = v_LockSHM();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_1 * char_2;
	long_1 = v_ReadFDPData(char_2,long_1,-1 );

	int_1 = int_1 + int_2;
	double_1 = double_1;
	int_1 = v_WriteFDPData(long_1,double_1,int_2);

	unsigned_int_3 = v_UnlockSHM(char_2);

	int_1 = int_2 + int_3;
	return char_3;
}
double v_FDP_GetStateChanged( int parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "6r") < 0)
	{
	}
	v_ttas_spinlock_lock(short_1,-1 );

	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_ttas_spinlock_unlock(short_2);

	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	double_2 = double_1 * double_1;
	return double_2;
}
long v_FDP_SetBreakpoint( short parameter_1,short parameter_2,int parameter_3,int parameter_4,int parameter_5,short parameter_6,unsigned int parameter_7,int parameter_8,double parameter_9)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	double double_5 = 1;
	char char_2 = 1;
	long long_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ",") < 0)
	{
	}
	double_3 = double_1 * double_2;
	int_2 = int_1 + int_2;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = v_LockSHM();

	int_3 = v_WriteFDPData(long_2,double_2,int_2);

	int_5 = int_4 + int_1;
	double_1 = double_4;
	float_2 = float_1 * float_1;
	int_5 = int_6 + int_6;
	float_2 = float_1 + float_1;
	unsigned_int_2 = v_UnlockSHM(char_1);

	unsigned_int_1 = unsigned_int_2;
	float_1 = float_3 + float_2;
	double_5 = double_2 + double_3;
	double_4 = double_3 * double_1;
	long_1 = v_ReadFDPData(char_2,long_3,-1 );

	double_7 = double_6 + double_2;
	return long_3;
}
short v_FDP_ReadMsr( long parameter_1,float parameter_2,long parameter_3,double parameter_4)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	int_1 = v_WriteFDPData(long_1,double_1,int_1);

	int_2 = int_1 + int_1;
	unsigned_int_1 = v_LockSHM();

	float_1 = float_1 + float_1;
	int_4 = int_3 + int_2;
	long_2 = v_ReadFDPData(char_1,long_3,-1 );

	char_1 = char_2 + char_2;
	double_1 = double_1;
	double_2 = double_2;
	char_2 = char_1;
	unsigned_int_2 = v_UnlockSHM(char_2);

	double_3 = double_1 * double_3;
	return short_1;
}
long v_testSingleStepPageBreakpoint()
{
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	short short_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	double double_2 = 1;
	char char_2 = 1;
	int int_6 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_4 = 1;
	v_FDP_Pause(long_1);

	short_1 = v_FDP_ReadMsr(long_1,float_1,long_1,double_1);

	char_1 = v_FDP_SingleStep(short_2,short_3);

	int_2 = int_1 * int_1;
	long_2 = v_FDP_SetBreakpoint(short_4,short_3,int_3,int_4,int_2,short_4,unsigned_int_1,int_5,double_2);

	unsigned_int_1 = v_FDP_Resume(float_1);

	char_2 = v_FDP_GetState(short_4,int_6);

	int_4 = v_FDP_ReadRegister(short_2,double_1,long_3,unsigned_int_2);

	float_2 = float_1 * float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "F") < 0)
	{
		short short_5 = 1;
		short short_6 = 1;
		unsigned_int_1 = v_FDP_UnsetBreakpoint(char_3,char_4);

		short_3 = short_5 * short_6;
	}
	return long_4;
	double_1 = v_FDP_GetStateChanged(int_1);

}
char v_FDP_SingleStep( short parameter_1,short parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	short_1 = short_1;
	int_1 = int_2;
	long_1 = v_ReadFDPData(char_1,long_2,-1 );

	double_2 = double_1 + double_1;
	unsigned_int_1 = v_LockSHM();

	int_1 = v_WriteFDPData(long_1,double_2,int_1);

	double_2 = double_1 * double_2;
	double_1 = double_2 + double_1;
	double_1 = double_2 * double_3;
	double_1 = double_3 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = v_UnlockSHM(char_1);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	return char_2;
}
long v_testSingleStepPause( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	float float_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = v_FDP_Resume(float_1);

	char_1 = v_FDP_SingleStep(short_1,short_2);

	long_2 = long_1 + long_2;
	int_1 = int_1;
	short_3 = short_3 + short_3;
	float_2 = float_1 * float_1;
	return long_3;
}
unsigned int v_FDP_Resume( float parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "r5") > 0)
	{
	}
	int_1 = v_WriteFDPData(long_1,double_1,int_1);

	long_2 = v_ReadFDPData(char_1,long_2,-1 );

	long_2 = long_3 * long_2;
	long_2 = long_3 * long_2;
	short_3 = short_1 * short_2;
	float_2 = float_1 * float_2;
	long_5 = long_3 * long_4;
	int_2 = int_2 + int_3;
	unsigned_int_1 = v_LockSHM();

	float_1 = float_3 + float_1;
	unsigned_int_2 = v_UnlockSHM(char_2);

	short_5 = short_3 * short_4;
	return unsigned_int_1;
}
unsigned int v_FDP_UnsetBreakpoint( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "oT") > 0)
	{
	}
	unsigned_int_1 = v_LockSHM();

	int_1 = v_WriteFDPData(long_1,double_1,int_1);

	int_1 = int_1;
	long_3 = long_2 + long_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	float_1 = float_1;
	unsigned_int_2 = v_UnlockSHM(char_1);

	double_2 = double_2 * double_2;
	double_1 = double_3 * double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_3 = v_ReadFDPData(char_1,long_2,-1 );

	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_2 = double_2;
	return unsigned_int_1;
}
unsigned int v_UnlockSHM( char parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_1;
	return unsigned_int_1;
	int_1 = v_ttas_spinlock_unlock(short_1);

}
double v_ReadFDPDataWithStatus( double parameter_1,short parameter_2,unsigned int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_2;
	int_4 = int_1 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		char_2 = char_1 * char_2;
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		char_2 = char_3;
	}
	int_5 = int_1 * int_3;
	long_3 = long_1 + long_2;
	char controller4vul_2529[2];
	fgets(controller4vul_2529 ,2 ,stdin);
	if( strcmp( controller4vul_2529, "H") > 0)
	{
		char controller4vul_2530[2];
		fgets(controller4vul_2530 ,2 ,stdin);
		if( strcmp( controller4vul_2530, "=") < 0)
		{
			int int_6 = 1;
			v_ttas_spinlock_lock(short_1,uni_para);

			int_5 = int_6;
		}
		if(1)
		{
			double_1 = double_1 * double_2;
		}
	}
	return double_2;
}
long v_ReadFDPData( char parameter_1,long parameter_2,int uni_para)
{
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double_1 = v_ReadFDPDataWithStatus(double_1,short_1,unsigned_int_1,uni_para);

	short_3 = short_2 + short_2;
	return long_1;
}
int v_ttas_spinlock_unlock( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short_2 = short_1 * short_1;
	return int_1;
}
int v_WriteFDPDataWithStatus( float parameter_1,short parameter_2,unsigned int parameter_3,char parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "hH") == 0)
	{
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short_2 = short_1 + short_1;
		int_1 = v_ttas_spinlock_unlock(short_2);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		if(1)
		{
			v_ttas_spinlock_lock(short_2,-1 );

			int_1 = int_1 * int_2;
		}
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "q") < 0)
	{
		int_1 = int_2 * int_1;
	}
	return int_3;
}
int v_WriteFDPData( long parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	return int_1;
	int_1 = v_WriteFDPDataWithStatus(float_1,short_1,unsigned_int_1,char_1);

}
void v_ttas_spinlock_lock( short parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char * vul_var;
	char_2 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller4vul_2531[2];
		fgets(controller4vul_2531 ,2 ,stdin);
		if( strcmp( controller4vul_2531, "s") > 0)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			short short_1 = 1;
			char char_3 = 1;
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			}
			double_1 = double_1 + double_1;
			short_1 = short_1 + short_1;
			if(1)
			{
				char_3 = char_3;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_1;
			}
			char controller4vul_2532[2];
			fgets(controller4vul_2532 ,2 ,stdin);
			if( strcmp( controller4vul_2532, "K") > 0)
			{
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				int int_1 = 1;
				double double_5 = 1;
				int int_2 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				char char_4 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_6 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				long long_4 = 1;
				double double_9 = 1;
				int int_6 = 1;
				vul_var=(char*)malloc(20*sizeof(char));
				strcpy(vul_var, "CWE-761");
				unsigned_int_1 = unsigned_int_1;
				double_2 = double_1 + double_1;
				double_3 = double_2 * double_3;
				if(1)
				{
					double_4 = double_3 + double_4;
				}
				int_1 = int_1;
				double_5 = double_2;
				int_3 = int_1 + int_2;
				unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
				float_3 = float_1 + float_2;
				if(1)
				{
					char_4 = char_4 + char_3;
					unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
					double_1 = double_3 + double_6;
				}
				float_2 = float_3 + float_3;
				if(1)
				{
					int int_4 = 1;
					unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
					int_3 = int_3 * int_4;
					unsigned_int_6 = unsigned_int_1 * unsigned_int_4;
				}
				unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
				if(1)
				{
					long_1 = long_1 * long_2;
					long_4 = long_3 + long_1;
					long_4 = long_4 * long_3;
				}
				char controller4vul_2533[3];
				fgets(controller4vul_2533 ,3 ,stdin);
				if( strcmp( controller4vul_2533, "GL") > 0)
				{
					int int_5 = 1;
					double double_7 = 1;
					int_2 = int_2 + int_5;
					double_6 = double_5;
					long_4 = long_2;
					double_7 = double_1;
					char controller4vul_2534[3];
					fgets(controller4vul_2534 ,3 ,stdin);
					if( strcmp( controller4vul_2534, "5-") < 0)
					{
						double double_8 = 1;
						if(uni_para == 949)
						{
							vul_var = vul_var + 1;
						}
						free(vul_var);
						double_3 = double_4 + double_8;
					}
					if(1)
					{
						int_1 = int_2 + int_5;
					}
					if(1)
					{
						short short_2 = 1;
						short_1 = short_2 + short_2;
					}
					if(1)
					{
						double_5 = double_5 + double_4;
					}
					if(1)
					{
						long_2 = long_1 + long_3;
					}
					if(1)
					{
						unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
					}
					if(1)
					{
						unsigned_int_5 = unsigned_int_2 + unsigned_int_6;
					}
				}
				if(1)
				{
					long long_5 = 1;
					float float_4 = 1;
					long_2 = long_5 * long_5;
					char_2 = char_4;
					float_1 = float_4 * float_3;
				}
				double_4 = double_9 * double_1;
				double_5 = double_1 * double_2;
				int_6 = int_2 + int_1;
			}
		}
	}
}
unsigned int v_LockSHM()
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	v_ttas_spinlock_lock(short_1,-1 );

	float_1 = float_2;
	return unsigned_int_1;
}
void v_FDP_Pause( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "]") > 0)
	{
	}
	unsigned_int_1 = v_UnlockSHM(char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = v_WriteFDPData(long_1,double_1,int_2);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	long_2 = v_ReadFDPData(char_1,long_2,-1 );

	double_1 = double_2 * double_1;
	unsigned_int_2 = v_LockSHM();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	char_1 = char_1 * char_1;
	int_3 = int_2 + int_2;
	int_1 = int_2 + int_3;
}
short v_testUnsetBreakpoint( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned_int_1 = v_FDP_UnsetBreakpoint(char_1,char_1);

	long_2 = long_1 + long_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		unsigned_int_2 = v_FDP_Resume(float_1);

		char_2 = char_1 + char_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "S") < 0)
	{
	}
	v_FDP_Pause(long_2);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	return short_1;
}
short v_FDP_Init( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	char_2 = char_1 + char_1;
	return short_1;
}
unsigned int v_TimerRoutine( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_2 = double_1 + double_1;
	int_1 = int_1;
	double_4 = double_3 + double_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	double_4 = double_4 * double_2;
	short_3 = short_2 * short_3;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	return unsigned_int_1;
}
void v_OpenShm( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_1;
	double_3 = double_2 + double_3;
	double_1 = double_4 + double_2;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_2 * float_1;
	}
}
short v_FDP_OpenSHM()
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 + char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "R") < 0)
	{
	}
	int_2 = int_1 * int_2;
	int_4 = int_3 + int_1;
	float_1 = float_1;
	short_2 = short_1 + short_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "^8") < 0)
	{
		short_3 = short_3 + short_3;
	}
	v_OpenShm(long_1,long_1);

	float_2 = float_2 * float_2;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "zM") < 0)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_3;
	return short_2;
}
int v_testFDP( char parameter_1,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long_2 = long_1 + long_1;
	char_2 = char_1 + char_2;
	char controller4vul_2526[2];
	fgets(controller4vul_2526 ,2 ,stdin);
	if( strcmp( controller4vul_2526, "^") < 0)
	{
		short short_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_6 = 1;
		double double_7 = 1;
		short_1 = short_2;
		char controller4vul_2527[3];
		fgets(controller4vul_2527 ,3 ,stdin);
		if( strcmp( controller4vul_2527, "?-") < 0)
		{
			unsigned_int_1 = v_testReadWriteAllPhysicalMemory(short_3,uni_para);

			double_1 = double_1;
			int_2 = int_1 + int_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			int_3 = int_4;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			float_1 = float_1 * float_1;
		}
		if(1)
		{
			char_2 = char_2 + char_1;
		}
		if(1)
		{
			long long_3 = 1;
			long_2 = long_2 * long_3;
		}
		if(1)
		{
			int_4 = int_3 + int_5;
		}
		if(1)
		{
			float_1 = float_1;
		}
		if(1)
		{
			double_2 = double_1;
		}
		if(1)
		{
			char_2 = char_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			short_1 = short_4;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		}
		if(1)
		{
			float_2 = float_1 * float_2;
		}
		if(1)
		{
			int_2 = int_2;
		}
		if(1)
		{
			double_2 = double_1;
		}
		if(1)
		{
			long_4 = long_1 * long_4;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_2 + double_3;
		}
		if(1)
		{
			int int_6 = 1;
			int int_7 = 1;
			int_4 = int_6 * int_7;
		}
		if(1)
		{
			float float_3 = 1;
			float_3 = float_1 * float_1;
		}
		if(1)
		{
			long long_5 = 1;
			long_5 = long_4 + long_5;
		}
		if(1)
		{
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			float float_4 = 1;
			float_4 = float_2 * float_2;
		}
		if(1)
		{
			double_1 = double_2 * double_1;
		}
		if(1)
		{
			double_6 = double_4 * double_5;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_6 * unsigned_int_2;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
		}
		if(1)
		{
			double_6 = double_4 + double_2;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_6 * unsigned_int_6;
		}
		long_1 = long_6;
		double_4 = double_2 + double_2;
		double_5 = double_7;
	}
	short_4 = short_3 + short_2;
	int_3 = int_5 * int_1;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4;
	}
	if(1)
	{
		int_4 = int_2;
	}
	char_1 = char_1 + char_1;
	char_1 = char_2 * char_1;
	return int_5;
}
void v_usage()
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	short_2 = short_1 * short_1;
	int_1 = int_1 + int_1;
	double_1 = double_2;
	double_1 = double_2 * double_3;
	double_2 = double_1 * double_4;
	int_2 = int_2;
}
int main()
{
	int uni_para =949;
	int int_1 = 1;
	char char_1 = 1;
	char controller4vul_2525[3];
	fgets(controller4vul_2525 ,3 ,stdin);
	if( strcmp( controller4vul_2525, "]$") > 0)
	{
		double double_1 = 1;
		int_1 = v_testFDP(char_1,uni_para);

		double_1 = double_1 + double_1;
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ")Z") < 0)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "Fd") == 0)
	{
	}
	return int_1;
}

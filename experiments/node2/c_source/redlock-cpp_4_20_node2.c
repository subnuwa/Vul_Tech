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

int v_redisAppendCommand( long parameter_1,double parameter_2,double parameter_3);
char v_usec();
int v_test_throughput( unsigned int parameter_1);
int v_redisAppendFormattedCommand( double parameter_1,int parameter_2,double parameter_3);
char v_test_append_formatted_commands( double parameter_1);
unsigned int v_redisConnectWithTimeout( int parameter_1,int parameter_2,short parameter_3);
int v_test_invalid_timeout_errors( float parameter_1);
int v_redisContextSetTimeout( short parameter_1,char parameter_2);
int v_redisSetTimeout( unsigned int parameter_1,short parameter_2);
double v_test_blocking_io_errors( float parameter_1);
float v_test_blocking_connection( char parameter_1);
long v_test_free_null();
float v_redisSetTcpNoDelay( short parameter_1);
short v_select_database( int parameter_1,int uni_para);
float v_redisConnectFd( int parameter_1);
void v_redisFree( char parameter_1);
int v_redisFreeKeepFd( unsigned int parameter_1);
int v_redisBufferRead( char parameter_1);
int v_redisBufferWrite( long parameter_1,int parameter_2);
int v_redisGetReplyFromReader( double parameter_1,int uni_para);
int v_redisGetReply( int parameter_1,int uni_para);
short v___redisBlockForReply( short parameter_1,int uni_para);
void v___redisAppendCommand( int parameter_1,char parameter_2,long parameter_3);
int v_redisvAppendCommand( short parameter_1,unsigned int parameter_2,double parameter_3);
int v_redisvCommand( float parameter_1,double parameter_2,float parameter_3,int uni_para);
char v_redisCommand( long parameter_1,short parameter_2,double parameter_3,int uni_para);
double v_disconnect( long parameter_1,int parameter_2);
int v_redisCheckSocketError();
short v_redisContextWaitReady( int parameter_1,long parameter_2);
long v_redisSetReuseAddr();
int v_redisCreateSocket( int parameter_1,int parameter_2);
int v_redisContextConnectUnix( short parameter_1,short parameter_2,unsigned int parameter_3);
void v_redisConnectUnix( char parameter_1);
short v_connect( char parameter_1,int uni_para);
int v_redisContextCloseFd( unsigned int parameter_1);
void v___redisSetErrorFromErrno( float parameter_1,int parameter_2,float parameter_3);
void v_redisSetBlocking( long parameter_1,int parameter_2);
void v___redisSetError( float parameter_1,int parameter_2,long parameter_3);
long v__redisContextConnectTcp( char parameter_1,double parameter_2,int parameter_3,long parameter_4,short parameter_5,int uni_para);
int v_redisContextConnectTcp( float parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,int uni_para);
char v_redisContextInit();
void v_redisConnect( double parameter_1,int parameter_2,int uni_para);
void v_test_blocking_connection_errors(int uni_para);
void v_freeReplyObject();
void v_redisReaderFree( long parameter_1);
void v_sdsrange( char parameter_1,int parameter_2,int parameter_3);
short v_processMultiBulkItem( float parameter_1);
double v_processBulkItem( long parameter_1,int uni_para);
void v_moveToNextTask( double parameter_1);
unsigned int v_readLongLong( char parameter_1);
void v_seekNewline( char parameter_1,char parameter_2);
long v_readLine( short parameter_1,int parameter_2);
long v_processLineItem( int parameter_1);
char v_chrtos( char parameter_1,short parameter_2,char parameter_3);
float v___redisReaderSetErrorProtocolByte( short parameter_1,char parameter_2);
char v_readBytes( short parameter_1,int parameter_2);
long v_processItem( float parameter_1,int uni_para);
int v_redisReaderGetReply( double parameter_1,int uni_para);
void v___redisReaderSetError( float parameter_1,int parameter_2,float parameter_3,int uni_para);
float v___redisReaderSetErrorOOM( char parameter_1,int uni_para);
int v_sdsavail( long parameter_1);
int v_redisReaderFeed( double parameter_1,char parameter_2,float parameter_3);
double v_redisReaderCreate();
float v_test_reply_reader();
int v_redisFormatCommandArgv( char parameter_1,int parameter_2,float parameter_3,unsigned int parameter_4);
void v_sdsfree(int uni_para);
short v_sdscatvprintf( short parameter_1,unsigned int parameter_2,short parameter_3);
long v_sdscat( float parameter_1,int parameter_2);
char v_sdscatlen( unsigned int parameter_1,unsigned int parameter_2,short parameter_3);
double v_sdslen( long parameter_1);
long v_intlen( int parameter_1);
double v_bulklen( int parameter_1);
int v_sdsempty();
int v_redisvFormatCommand( char parameter_1,char parameter_2,unsigned int parameter_3);
int v_redisFormatCommand( char parameter_1,double parameter_2,char parameter_3);
void v_test_format_commands();
int v_redisAppendCommand( long parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double_2 = double_1 + double_1;
	short_1 = short_1;
	int_1 = v_redisvAppendCommand(short_2,unsigned_int_1,double_1);

	double_2 = double_2 + double_2;
	double_2 = double_3 + double_3;
	double_3 = double_3 * double_2;
	return int_1;
}
char v_usec()
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float_1 = float_2;
	int_1 = int_1 * int_1;
	return char_1;
}
int v_test_throughput( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	long long_7 = 1;
	double double_4 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	float float_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_6 = 1;
	int int_10 = 1;
	int int_11 = 1;
	float float_7 = 1;
	long_3 = long_1 + long_2;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_2 = short_1 + short_1;
	}
	int_1 = int_2 * int_1;
	long_5 = long_4 * long_1;
	float_2 = float_1 * float_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_4 = int_3 + int_3;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	int_6 = int_5 + int_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	}
	unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
	double_2 = double_3;
	short_2 = short_1 * short_1;
	int_5 = v_redisGetReply(int_1,-1 );

	double_2 = double_3 + double_2;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short short_3 = 1;
		long long_6 = 1;
		double_1 = v_disconnect(long_3,int_6);

		short_3 = short_3 * short_1;
		unsigned_int_1 = unsigned_int_6;
		long_7 = long_1 + long_6;
	}
	double_1 = double_3;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		double_4 = double_2 + double_4;
	}
	unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	int_3 = int_6 * int_7;
	int_7 = int_3 * int_8;
	v_freeReplyObject();

	int_7 = v_redisAppendCommand(long_2,double_2,double_4);

	int_7 = int_1 * int_9;
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		float_4 = float_1 + float_3;
	}
	double_5 = double_1 + double_1;
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		float float_5 = 1;
		float_3 = float_5 + float_1;
		double_5 = double_5 * double_1;
	}
	int_1 = int_4 + int_8;
	for(int looper_8=0; looper_8<1;looper_8++)
	{
		short_2 = short_2 + short_2;
	}
	short_1 = v_connect(char_1,-1 );

	float_4 = float_6 + float_3;
	int_4 = int_3 * int_3;
	char_3 = char_1 + char_2;
	for(int looper_9=0; looper_9<1;looper_9++)
	{
		double_3 = double_6;
	}
	float_1 = float_3 * float_6;
	for(int looper_10=0; looper_10<1;looper_10++)
	{
		float_2 = float_4 * float_6;
		int_1 = int_7 + int_9;
		char_2 = v_redisCommand(long_7,short_2,double_3,-1 );

		long_3 = long_5 + long_5;
	}
	char_1 = char_2;
	for(int looper_11=0; looper_11<1;looper_11++)
	{
		char char_4 = 1;
		char_2 = char_4 * char_4;
	}
	int_2 = int_10 * int_11;
	double_6 = double_6;
	char_3 = v_usec();

	float_6 = float_7 + float_6;
	return int_7;
}
int v_redisAppendFormattedCommand( double parameter_1,int parameter_2,double parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	return int_1;
	v___redisAppendCommand(int_1,char_1,long_1);

}
char v_test_append_formatted_commands( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	short_1 = v_connect(char_1,-1 );

	int_1 = int_3;
	int_1 = v_redisGetReply(int_4,-1 );

	long_2 = long_1 * long_1;
	int_4 = int_2 * int_1;
	float_1 = float_1;
	int_3 = int_1 * int_4;
	short_3 = short_1 + short_2;
	int_1 = v_redisAppendFormattedCommand(double_1,int_2,double_2);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	int_2 = v_redisFormatCommand(char_2,double_3,char_1);

	int_3 = int_2;
	v_freeReplyObject();

	float_2 = float_2;
	return char_3;
	double_2 = v_disconnect(long_3,int_3);

}
unsigned int v_redisConnectWithTimeout( int parameter_1,int parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float_2 = float_1 + float_2;
	char_1 = v_redisContextInit();

	int_1 = int_1 * int_1;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	float_1 = float_1 * float_3;
	if(1)
	{
		if(1)
		{
			char char_2 = 1;
			double double_2 = 1;
			char_2 = char_1 + char_1;
			double_2 = double_2 + double_2;
		}
	}
	return unsigned_int_1;
	int_2 = v_redisContextConnectTcp(float_2,float_1,int_2,unsigned_int_2,-1 );

}
int v_test_invalid_timeout_errors( float parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char_1 = char_1 * char_1;
	long_1 = long_1 * long_1;
	double_3 = double_1 + double_2;
	float_1 = float_1 + float_1;
	v_redisFree(char_1);

	double_1 = double_4 + double_5;
	char_1 = char_1 + char_1;
	double_4 = double_1 + double_2;
	int_1 = int_1 * int_1;
	int_1 = int_2 * int_2;
	unsigned_int_1 = v_redisConnectWithTimeout(int_3,int_3,short_1);

	char_1 = char_1;
	int_2 = int_4;
	char_2 = char_2 + char_1;
	return int_3;
}
int v_redisContextSetTimeout( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	return int_3;
	v___redisSetErrorFromErrno(float_1,int_1,float_2);

}
int v_redisSetTimeout( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	return int_1;
	int_1 = v_redisContextSetTimeout(short_1,char_1);

}
double v_test_blocking_io_errors( float parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	short short_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_1;
	int_1 = v_redisSetTimeout(unsigned_int_1,short_1);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	float_1 = float_1 * float_1;
	char_3 = char_2 + char_2;
	double_1 = double_1 * double_1;
	short_1 = short_2 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	v_redisFree(char_2);

	long_3 = long_1 + long_2;
	char_3 = v_redisCommand(long_4,short_3,double_1,-1 );

	v_freeReplyObject();

	short_2 = short_4 + short_2;
	long_4 = long_3 + long_2;
	double_3 = double_2 * double_2;
	int_1 = v_redisGetReply(int_2,-1 );

	unsigned_int_3 = unsigned_int_2 * unsigned_int_5;
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		float_1 = float_1;
		short_3 = v_connect(char_2,-1 );

		char_5 = char_4 * char_1;
	}
	if(1)
	{
		int_1 = int_1 + int_3;
	}
	int_4 = int_2 * int_2;
	long_2 = long_5 * long_3;
	int_3 = int_1 + int_2;
	long_6 = long_3 * long_6;
	double_1 = double_3 * double_2;
	short_5 = short_2 + short_3;
	double_2 = double_4;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
	return double_5;
}
float v_test_blocking_connection( char parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_6 = 1;
	float float_4 = 1;
	double double_5 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	short_1 = short_1 + short_1;
	int_1 = int_1 + int_1;
	float_3 = float_1 + float_2;
	double_1 = double_1 + double_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_2 * int_2;
	int_4 = int_3 + int_3;
	char_2 = char_1 + char_1;
	int_4 = int_3 + int_5;
	short_2 = short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = v_connect(char_1,-1 );

	char_4 = char_2 * char_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_2 * short_3;
	long_1 = long_1;
	int_1 = int_3 * int_2;
	double_2 = double_2 * double_3;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	double_4 = double_1 + double_1;
	int_3 = int_1 + int_1;
	v_freeReplyObject();

	char_3 = char_5 + char_5;
	float_2 = float_2 + float_3;
	double_1 = double_2 * double_2;
	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	char_3 = v_redisCommand(long_2,short_3,double_2,-1 );

	char_5 = char_4 * char_3;
	int_1 = int_2 * int_4;
	int_3 = int_6 + int_6;
	double_1 = double_1 + double_4;
	float_2 = float_4;
	double_5 = v_disconnect(long_1,int_1);

	int_2 = int_3 + int_5;
	short_1 = short_3 * short_4;
	char_3 = char_5 * char_3;
	short_1 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	short_4 = short_5 + short_6;
	int_3 = int_5 + int_6;
	double_5 = double_4 + double_3;
	return float_3;
}
long v_test_free_null()
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	v_redisFree(char_1);

	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_2 + double_2;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	v_freeReplyObject();

	long_1 = long_1 + long_2;
	double_3 = double_2 + double_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	return long_3;
}
float v_redisSetTcpNoDelay( short parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = v_redisContextCloseFd(unsigned_int_1);

	char_2 = char_1 + char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ",") > 0)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		v___redisSetErrorFromErrno(float_1,int_1,float_2);

		int_3 = int_2 * int_1;
		int_2 = int_4;
	}
	return float_2;
}
short v_select_database( int parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_2;
	char_3 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	float_1 = float_1 + float_1;
	long_2 = long_1 * long_1;
	char controller4vul_288[2];
	fgets(controller4vul_288 ,2 ,stdin);
	if( strcmp( controller4vul_288, "/") > 0)
	{
		char char_4 = 1;
		char char_5 = 1;
		char_1 = v_redisCommand(long_1,short_1,double_1,uni_para);

		char_5 = char_4 + char_1;
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "C+") > 0)
	{
		short_1 = short_1;
		char_2 = char_2 + char_2;
	}
	return short_1;
}
float v_redisConnectFd( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_1 = v_redisContextInit();

	char_1 = char_2;
	short_1 = short_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	float_1 = float_1 + float_1;
	return float_2;
}
void v_redisFree( char parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		v_sdsfree(-1 );

		double_1 = double_1 * double_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		v_redisReaderFree(long_1);

		short_2 = short_1 * short_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	int_1 = int_1;
}
int v_redisFreeKeepFd( unsigned int parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_2 + int_3;
	return int_2;
	v_redisFree(char_1);

}
int v_redisBufferRead( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	char_3 = char_1 + char_2;
	char_4 = char_1 + char_1;
	if(1)
	{
	}
	char_3 = char_3;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			v___redisSetError(float_1,int_1,long_1);

			double_2 = double_1 * double_2;
		}
	}
	if(1)
	{
		int_2 = v_redisReaderFeed(double_1,char_3,float_2);

		double_2 = double_2 * double_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1;
		}
	}
	return int_3;
}
int v_redisBufferWrite( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	v_sdsfree(-1 );

	float_1 = float_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "|") == 0)
	{
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = v_sdslen(long_1);

		v___redisSetError(float_2,int_1,long_1);

		double_2 = double_1 * double_2;
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				int_2 = int_2 + int_2;
			}
		}
		if(1)
		{
			if(1)
			{
				char char_2 = 1;
				char char_3 = 1;
				char char_4 = 1;
				int_2 = v_sdsempty();

				v_sdsrange(char_1,int_3,int_2);

				char_3 = char_1 + char_2;
				char_4 = char_3;
			}
			if(1)
			{
				int_1 = int_3;
			}
		}
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
	return int_3;
}
int v_redisGetReplyFromReader( double parameter_1,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	char controller4vul_292[3];
	fgets(controller4vul_292 ,3 ,stdin);
	if( strcmp( controller4vul_292, "i)") < 0)
	{
		double double_2 = 1;
		int_1 = v_redisReaderGetReply(double_1,uni_para);

		double_2 = double_1 * double_1;
	}
	return int_1;
}
int v_redisGetReply( int parameter_1,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int_1 = v_redisGetReplyFromReader(double_1,uni_para);

	char_1 = char_1;
	double_1 = double_2 * double_3;
	short_3 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_1;
	return int_2;
}
short v___redisBlockForReply( short parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float_1 = float_1 + float_2;
	char controller4vul_290[2];
	fgets(controller4vul_290 ,2 ,stdin);
	if( strcmp( controller4vul_290, "f") < 0)
	{
		char controller4vul_291[3];
		fgets(controller4vul_291 ,3 ,stdin);
		if( strcmp( controller4vul_291, "=*") > 0)
		{
			int_1 = v_redisGetReply(int_2,uni_para);

		}
	}
	return short_1;
}
void v___redisAppendCommand( int parameter_1,char parameter_2,long parameter_3)
{
}
int v_redisvAppendCommand( short parameter_1,unsigned int parameter_2,double parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	char char_4 = 1;
	int int_2 = 1;
	int_1 = v_redisvFormatCommand(char_1,char_2,unsigned_int_1);

	short_3 = short_1 + short_2;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "M") > 0)
	{
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "0") > 0)
	{
		v___redisAppendCommand(int_1,char_2,long_2);

		char_2 = char_1 * char_3;
	}
	v___redisSetError(float_1,int_1,long_1);

	char_1 = char_4 + char_3;
	return int_2;
}
int v_redisvCommand( float parameter_1,double parameter_2,float parameter_3,int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	char controller4vul_289[2];
	fgets(controller4vul_289 ,2 ,stdin);
	if( strcmp( controller4vul_289, "]") > 0)
	{
		short_1 = v___redisBlockForReply(short_1,uni_para);

	}
	return int_1;
}
char v_redisCommand( long parameter_1,short parameter_2,double parameter_3,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	int_1 = v_redisvCommand(float_1,double_1,float_2,uni_para);

	unsigned_int_1 = unsigned_int_1;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	double_2 = double_1 * double_1;
	return char_1;
}
double v_disconnect( long parameter_1,int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	v_freeReplyObject();

	v_redisFree(char_1);

	double_3 = double_1 * double_2;
	long_2 = long_1 * long_2;
	char_2 = v_redisCommand(long_1,short_1,double_2,-1 );

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	int_2 = int_1 + int_2;
	int_2 = v_redisFreeKeepFd(unsigned_int_4);

	char_3 = char_2 + char_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Ht") > 0)
	{
	}
	long_1 = long_1 + long_2;
	return double_1;
}
int v_redisCheckSocketError()
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	short_2 = short_1 * short_1;
	long_2 = long_1 * long_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "=") < 0)
	{
		double_1 = double_1 + double_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "&5") > 0)
	{
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_2 = double_1 + double_2;
		v___redisSetErrorFromErrno(float_1,int_1,float_2);

		char_2 = char_1 + char_1;
	}
	return int_2;
}
short v_redisContextWaitReady( int parameter_1,long parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	int int_6 = 1;
	double double_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_7 = 1;
	int int_8 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_8 = 1;
	float_1 = float_1 + float_1;
	int_3 = int_1 + int_2;
	short_3 = short_1 * short_2;
	short_1 = short_2 + short_4;
	int_1 = int_4 + int_1;
	if(1)
	{
		if(1)
		{
			int int_5 = 1;
			double double_2 = 1;
			int_1 = int_5 * int_6;
			double_2 = double_1 * double_1;
		}
		double_3 = double_1 + double_3;
		if(1)
		{
			double_1 = double_3 * double_3;
		}
	}
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		double_5 = double_4 * double_1;
		if(1)
		{
			double_5 = double_6 * double_3;
			int_2 = v_redisContextCloseFd(unsigned_int_1);

			int_8 = int_7 + int_6;
		}
		if(1)
		{
			long long_2 = 1;
			double double_7 = 1;
			v___redisSetErrorFromErrno(float_2,int_7,float_1);

			long_1 = long_1 + long_2;
			double_7 = double_6;
			long_1 = long_1;
		}
		if(1)
		{
		}
	}
	long_1 = long_1 * long_1;
	double_4 = double_8;
	return short_4;
	int_8 = v_redisCheckSocketError();

}
long v_redisSetReuseAddr()
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "2Y") == 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char_2 = char_1 * char_1;
		v___redisSetErrorFromErrno(float_1,int_1,float_2);

		int_1 = v_redisContextCloseFd(unsigned_int_1);

		int_2 = int_2 + int_3;
	}
	return long_1;
}
int v_redisCreateSocket( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		float float_3 = 1;
		v___redisSetErrorFromErrno(float_1,int_1,float_2);

		float_3 = float_2 + float_2;
	}
	long_1 = v_redisSetReuseAddr();

	long_1 = long_1 + long_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "g") < 0)
	{
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "Fq") > 0)
		{
		}
	}
	return int_1;
}
int v_redisContextConnectUnix( short parameter_1,short parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	short_1 = v_connect(char_1,-1 );

	int_1 = int_1 + int_2;
	int_3 = v_redisCreateSocket(int_2,int_2);

	long_2 = long_1 * long_1;
	if(1)
	{
	}
	if(1)
	{
	}
	v_redisSetBlocking(long_3,int_1);

	float_2 = float_1 * float_1;
	short_2 = short_1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			if(1)
			{
			}
		}
	}
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	return int_4;
	short_1 = v_redisContextWaitReady(int_3,long_2);

}
void v_redisConnectUnix( char parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = v_redisContextConnectUnix(short_1,short_2,unsigned_int_1);

	short_2 = short_3 + short_2;
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	char_1 = v_redisContextInit();

	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_2;
}
short v_connect( char parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	float float_3 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	char controller4vul_286[3];
	fgets(controller4vul_286 ,3 ,stdin);
	if( strcmp( controller4vul_286, "_(") > 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
		char controller4vul_287[3];
		fgets(controller4vul_287 ,3 ,stdin);
		if( strcmp( controller4vul_287, "#b") > 0)
		{
			int int_3 = 1;
			short_1 = v_select_database(int_2,uni_para);

			float_2 = float_1 + float_1;
			int_3 = int_1;
			double_4 = double_2 + double_4;
		}
	}
	if(1)
	{
		float_2 = float_3;
	}
	if(1)
	{
		long long_1 = 1;
		float_2 = float_1 + float_3;
		long_1 = long_1;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		double double_5 = 1;
		long_3 = long_2 + long_3;
		double_5 = double_4 * double_1;
	}
	return short_1;
}
int v_redisContextCloseFd( unsigned int parameter_1)
{
	int int_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		long_2 = long_1 + long_2;
	}
	return int_1;
}
void v___redisSetErrorFromErrno( float parameter_1,int parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short_1 = short_2;
	v___redisSetError(float_1,int_1,long_1);

	long_1 = long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "4|") < 0)
	{
		long_1 = long_2;
	}
	long_2 = long_2 * long_2;
	char_2 = char_1 + char_2;
}
void v_redisSetBlocking( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_4;
		unsigned_int_6 = unsigned_int_2 + unsigned_int_5;
	}
	if(1)
	{
		v___redisSetErrorFromErrno(float_1,int_1,float_2);

		unsigned_int_6 = unsigned_int_4;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "u") > 0)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "G|") > 0)
	{
		float float_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float_1 = float_1 * float_3;
		int_2 = v_redisContextCloseFd(unsigned_int_6);

		short_2 = short_1 + short_1;
	}
}
void v___redisSetError( float parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int_3 = int_1 + int_2;
	char_2 = char_1 + char_1;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		double_1 = double_1 * double_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_3 = double_1 * double_2;
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long_4 = long_2 + long_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
}
long v__redisContextConnectTcp( char parameter_1,double parameter_2,int parameter_3,long parameter_4,short parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	char char_4 = 1;
	long long_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_1 * long_2;
	int_2 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_2 * int_1;
	double_1 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
		int_1 = int_4 + int_4;
		if(1)
		{
			unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
		}
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		long long_4 = 1;
		char char_3 = 1;
		char char_5 = 1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
		}
		double_3 = double_1 * double_1;
		if(1)
		{
			int_3 = int_1 * int_5;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
			if(1)
			{
				double double_4 = 1;
				double double_5 = 1;
				char char_1 = 1;
				int_3 = int_3 + int_4;
				double_5 = double_4 * double_1;
				char_1 = char_1 * char_1;
				double_1 = double_6 * double_4;
			}
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					double double_7 = 1;
					long_4 = long_2 + long_4;
					double_7 = double_7 + double_6;
				}
			}
			if(1)
			{
				char char_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				char_3 = char_2 + char_2;
				float_1 = float_2;
				short_1 = short_1 * short_1;
				short_2 = short_3;
			}
		}
		char controller4vul_283[3];
		fgets(controller4vul_283 ,3 ,stdin);
		if( strcmp( controller4vul_283, "jn") < 0)
		{
			if(1)
			{
				int_4 = int_5;
				float_1 = float_1 + float_2;
			}
			if(1)
			{
			}
			char controller4vul_284[3];
			fgets(controller4vul_284 ,3 ,stdin);
			if( strcmp( controller4vul_284, "Cz") < 0)
			{
				char controller4vul_285[3];
				fgets(controller4vul_285 ,3 ,stdin);
				if( strcmp( controller4vul_285, "Xl") > 0)
				{
					int int_6 = 1;
					short_4 = v_connect(char_4,uni_para);

					int_5 = int_3 + int_6;
				}
			}
		}
		if(1)
		{
			long long_6 = 1;
			long_6 = long_4 * long_5;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
		}
		char_5 = char_3 + char_4;
		int_5 = int_5;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_1;
	}
	if(1)
	{
		int_4 = int_4 * int_1;
		double_6 = double_3 * double_3;
		int_3 = int_1 * int_1;
		int_1 = int_3 * int_3;
	}
	long_5 = long_5;
	float_1 = float_2;
	return long_3;
}
int v_redisContextConnectTcp( float parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,int uni_para)
{
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long_1 = v__redisContextConnectTcp(char_1,double_1,int_1,long_2,short_1,uni_para);

	return int_1;
}
char v_redisContextInit()
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1;
	char_1 = char_1 * char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "C0") > 0)
	{
	}
	double_1 = double_1 + double_2;
	int_1 = v_sdsempty();

	double_3 = v_redisReaderCreate();

	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_3;
	return char_1;
}
void v_redisConnect( double parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_282[2];
	fgets(controller4vul_282 ,2 ,stdin);
	if( strcmp( controller4vul_282, "p") > 0)
	{
		int_2 = v_redisContextConnectTcp(float_1,float_1,int_1,unsigned_int_2,uni_para);

	}
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_1 * double_2;
}
void v_test_blocking_connection_errors(int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	v_redisConnect(double_1,int_1,uni_para);

	short_1 = short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 * int_2;
	long_1 = long_1;
	long_3 = long_2 + long_3;
	int_1 = int_2 + int_4;
	float_1 = float_2;
	int_3 = int_5 + int_2;
	short_1 = short_2 * short_2;
	short_1 = short_2 * short_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	long_3 = long_3 + long_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
}
void v_freeReplyObject()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 * double_2;
	double_4 = double_3 * double_2;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	if(1)
	{
		double double_5 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				v_freeReplyObject();

				long_1 = long_1 * long_1;
			}
		}
		double_3 = double_5 + double_3;
	}
	char_2 = char_1 + char_2;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2;
	}
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
void v_redisReaderFree( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	v_sdsfree(-1 );

	long_2 = long_1 * long_2;
}
void v_sdsrange( char parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1 + double_1;
		if(1)
		{
			int_2 = int_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_5 = int_3 * int_4;
		if(1)
		{
			int_1 = int_4 + int_4;
		}
	}
	int_4 = int_5 * int_4;
	if(1)
	{
		if(1)
		{
			int_2 = int_4 + int_4;
		}
		char controller_8[3];
		fgets(controller_8 ,3 ,stdin);
		if( strcmp( controller_8, "<K") > 0)
		{
			char char_1 = 1;
			unsigned int unsigned_int_3 = 1;
			char_1 = char_1;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		double_2 = double_2 * double_1;
	}
	double_1 = double_2 + double_2;
	long_3 = long_2;
	float_1 = float_1;
}
short v_processMultiBulkItem( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	short short_3 = 1;
	int int_5 = 1;
	float float_3 = 1;
	int int_7 = 1;
	float float_5 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_2;
	unsigned_int_2 = v_readLongLong(char_1);

	double_3 = double_1 * double_2;
	short_2 = short_1;
	int_2 = int_1 * int_2;
	if(1)
	{
		double double_4 = 1;
		double_4 = double_3 * double_2;
	}
	if(1)
	{
		long long_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long_2 = long_1 + long_2;
		int_3 = int_2 * int_3;
		if(1)
		{
			if(1)
			{
				float_2 = float_1 + float_2;
			}
			if(1)
			{
				int int_4 = 1;
				v_moveToNextTask(double_5);

				int_3 = int_4 * int_1;
			}
			if(1)
			{
				long_1 = long_1;
			}
			double_5 = double_2 + double_2;
		}
		if(1)
		{
			double double_6 = 1;
			if(1)
			{
				double_3 = double_6 * double_5;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			}
			if(1)
			{
				short_3 = short_1;
			}
			if(1)
			{
				int int_6 = 1;
				float float_4 = 1;
				int_2 = int_5 + int_3;
				int_6 = int_1 + int_1;
				v___redisReaderSetError(float_3,int_5,float_2,-1 );

				long_1 = v_readLine(short_1,int_7);

				double_3 = double_1 * double_3;
				float_3 = float_3 * float_1;
				float_2 = float_4 + float_1;
				long_2 = long_1;
				int_3 = int_5 * int_1;
				short_2 = short_2 * short_1;
				unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
			}
			if(1)
			{
				double double_7 = 1;
				double_7 = double_3 + double_6;
			}
		}
		char controller_13[2];
		fgets(controller_13 ,2 ,stdin);
		if( strcmp( controller_13, "R") < 0)
		{
			float_5 = v___redisReaderSetErrorOOM(char_2,-1 );

			unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
		}
	}
	return short_3;
}
double v_processBulkItem( long parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	char_1 = char_2;
	long_2 = long_1 + long_1;
	long_1 = long_2 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_3 * long_4;
	char_2 = char_3 + char_3;
	short_2 = short_1 * short_2;
	short_1 = short_3 + short_3;
	char controller4vul_295[3];
	fgets(controller4vul_295 ,3 ,stdin);
	if( strcmp( controller4vul_295, "i>") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_5 = 1;
		int_2 = int_1 + int_1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		int_3 = int_1 + int_2;
		if(1)
		{
			float float_1 = 1;
			if(1)
			{
				int_3 = int_3 + int_2;
			}
			if(1)
			{
				int_3 = int_1 * int_4;
			}
			float_1 = float_2;
		}
		char controller4vul_296[3];
		fgets(controller4vul_296 ,3 ,stdin);
		if( strcmp( controller4vul_296, "CB") < 0)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_4 = unsigned_int_5;
			char controller4vul_297[2];
			fgets(controller4vul_297 ,2 ,stdin);
			if( strcmp( controller4vul_297, ">") > 0)
			{
				double double_1 = 1;
				char char_4 = 1;
				char controller4vul_298[2];
				fgets(controller4vul_298 ,2 ,stdin);
				if( strcmp( controller4vul_298, "B") > 0)
				{
					double double_2 = 1;
					float_2 = v___redisReaderSetErrorOOM(char_3,uni_para);

					double_1 = double_1 + double_2;
				}
				if(1)
				{
					double double_3 = 1;
					double_1 = double_3;
				}
				char_5 = char_2 * char_4;
			}
		}
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "u") < 0)
		{
			int int_5 = 1;
			short short_4 = 1;
			short short_5 = 1;
			if(1)
			{
				char_3 = char_5 + char_2;
			}
			int_5 = int_4;
			if(1)
			{
				int int_6 = 1;
				int int_7 = 1;
				int_7 = int_6 * int_7;
			}
			short_2 = short_4 + short_5;
		}
	}
	return double_4;
}
void v_moveToNextTask( double parameter_1)
{
}
unsigned int v_readLongLong( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_1;
	char_2 = char_1 + char_1;
	return unsigned_int_1;
}
void v_seekNewline( char parameter_1,char parameter_2)
{
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "@/") > 0)
		{
		}
		if(1)
		{
		}
	}
}
long v_readLine( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_2;
	int_3 = int_3;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
		int_1 = int_1 * int_1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "7k") > 0)
		{
			unsigned int unsigned_int_4 = 1;
			v_seekNewline(char_1,char_2);

			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		}
	}
	return long_1;
}
long v_processLineItem( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = v_readLongLong(char_1);

	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	v_moveToNextTask(double_1);

	double_2 = double_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		int int_2 = 1;
		if(1)
		{
			if(1)
			{
				double_2 = double_3 + double_3;
			}
			if(1)
			{
				float_1 = v___redisReaderSetErrorOOM(char_2,-1 );

				unsigned_int_1 = unsigned_int_3;
			}
		}
		if(1)
		{
			if(1)
			{
				double double_4 = 1;
				long_1 = v_readLine(short_3,int_1);

				double_1 = double_4;
			}
			if(1)
			{
				float float_2 = 1;
				float_2 = float_2 + float_1;
			}
		}
		char controller_8[2];
		fgets(controller_8 ,2 ,stdin);
		if( strcmp( controller_8, "+") > 0)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		}
		if(1)
		{
			int_2 = int_1 + int_1;
		}
		int_1 = int_2 + int_1;
	}
	return long_2;
}
char v_chrtos( char parameter_1,short parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_4 = 1;
	short_1 = short_1 + short_2;
	int_2 = int_1 * int_1;
	short_2 = short_2 * short_1;
	short_3 = short_3 * short_3;
	short_2 = short_1;
	char_3 = char_1 * char_2;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2 * int_2;
	long_2 = long_1 * long_2;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	double_2 = double_2 + double_1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 * int_1;
	}
	if(1)
	{
		int int_4 = 1;
		int_1 = int_4;
	}
	double_3 = double_3;
	return char_4;
}
float v___redisReaderSetErrorProtocolByte( short parameter_1,char parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 + double_1;
	long_1 = long_1 * long_2;
	char_1 = v_chrtos(char_1,short_1,char_1);

	int_2 = int_1 + int_1;
	v___redisReaderSetError(float_1,int_2,float_2,-1 );

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return float_2;
}
char v_readBytes( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "&}") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	return char_1;
}
long v_processItem( float parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_3 = int_1 + int_2;
	int_2 = int_2 * int_3;
	char controller4vul_293[3];
	fgets(controller4vul_293 ,3 ,stdin);
	if( strcmp( controller4vul_293, "jp") > 0)
	{
		char controller4vul_294[3];
		fgets(controller4vul_294 ,3 ,stdin);
		if( strcmp( controller4vul_294, "z>") > 0)
		{
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_4 = 1;
			double_1 = v_processBulkItem(long_1,uni_para);

			double_3 = double_2 + double_1;
			double_1 = double_2 + double_1;
			int_1 = int_1;
			int_3 = int_1 + int_2;
			int_2 = int_3 + int_3;
			char_2 = char_1 * char_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			char_1 = char_2 * char_2;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			int_4 = int_3 + int_1;
		}
		if(1)
		{
		}
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	return long_1;
}
int v_redisReaderGetReply( double parameter_1,int uni_para)
{
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	long_1 = v_processItem(float_1,uni_para);

	char_1 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int_2 = int_1 + int_1;
	}
	return int_2;
}
void v___redisReaderSetError( float parameter_1,int parameter_2,float parameter_3,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_1 = char_1 + char_2;
	char controller4vul_299[2];
	fgets(controller4vul_299 ,2 ,stdin);
	if( strcmp( controller4vul_299, "M") > 0)
	{
		v_sdsfree(uni_para);

		int_1 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "+") < 0)
	{
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_3 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	char_4 = char_3 + char_2;
	double_2 = double_2 * double_3;
	int_1 = int_1 * int_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
	float_2 = float_1 + float_2;
}
float v___redisReaderSetErrorOOM( char parameter_1,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	v___redisReaderSetError(float_1,int_1,float_1,uni_para);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return float_2;
}
int v_sdsavail( long parameter_1)
{
	int int_1 = 1;
	int_1 = int_1 * int_1;
	return int_1;
}
int v_redisReaderFeed( double parameter_1,char parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_3 = 1;
		if(1)
		{
			double double_1 = 1;
			int_1 = int_1;
			v_sdsfree(-1 );

			int_3 = v_sdsempty();

			char_1 = char_1 + char_2;
			int_1 = v_sdsavail(long_1);

			char_2 = v_sdscatlen(unsigned_int_1,unsigned_int_1,short_1);

			double_1 = double_1;
			double_2 = v_sdslen(long_1);

			double_2 = double_2 + double_1;
		}
		float_3 = float_1 + float_2;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
		int_3 = int_3 * int_3;
		char_3 = char_3 * char_2;
	}
	return int_3;
	float_3 = v___redisReaderSetErrorOOM(char_1,-1 );

}
double v_redisReaderCreate()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char_3 = char_1 * char_2;
	long_1 = long_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "w") > 0)
	{
	}
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_2;
	int_1 = v_sdsempty();

	double_1 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "YO") > 0)
	{
		double_1 = double_2;
	}
	char_2 = char_1 * char_3;
	return double_2;
}
float v_test_reply_reader()
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	char char_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_6 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_7 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	double_2 = double_1 * double_2;
	char_2 = char_1 + char_1;
	double_2 = double_1 + double_3;
	char_4 = char_3 + char_4;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_3 * short_3;
	char_5 = char_5;
	double_2 = double_3 * double_2;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	int_3 = int_2 + int_2;
	double_5 = double_3 * double_4;
	int_3 = int_2 * int_3;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	int_2 = int_2 + int_2;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_5 = v_redisReaderCreate();

		long_2 = long_1 + long_1;
	}
	char_5 = char_5;
	double_4 = double_3 * double_5;
	int_1 = v_redisReaderGetReply(double_1,-1 );

	v_redisReaderFree(long_2);

	int_3 = int_3 + int_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	unsigned_int_2 = unsigned_int_4;
	unsigned_int_4 = unsigned_int_7 * unsigned_int_4;
	double_4 = double_4 * double_5;
	double_5 = double_6 + double_1;
	int_1 = v_redisReaderFeed(double_2,char_3,float_1);

	long_3 = long_1 * long_1;
	long_2 = long_4;
	long_3 = long_1 * long_2;
	char_3 = char_6 * char_4;
	double_4 = double_7 + double_8;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_4;
	float_2 = float_3;
	unsigned_int_5 = unsigned_int_4;
	int_4 = int_5;
	int_1 = int_4 * int_1;
	unsigned_int_8 = unsigned_int_1 + unsigned_int_3;
	short_2 = short_3 * short_2;
	double_8 = double_5 * double_8;
	char_7 = char_4 + char_4;
	int_4 = int_1;
	char_2 = char_1 + char_3;
	double_6 = double_5 * double_8;
	char_3 = char_7 * char_1;
	int_3 = int_5 * int_5;
	v_freeReplyObject();

	long_1 = long_2;
	unsigned_int_6 = unsigned_int_7 * unsigned_int_2;
	int_5 = int_5 * int_5;
	short_2 = short_4 * short_5;
	unsigned_int_6 = unsigned_int_7 * unsigned_int_5;
	double_1 = double_5 + double_3;
	short_2 = short_4 + short_3;
	double_3 = double_4 + double_1;
	return float_1;
}
int v_redisFormatCommandArgv( char parameter_1,int parameter_2,float parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_1;
	double_3 = double_1 * double_2;
	double_3 = double_3 * double_4;
	long_1 = v_intlen(int_1);

	double_2 = double_3;
	double_4 = double_3 + double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_2 = short_1 + short_1;
		short_2 = short_2 * short_1;
	}
	double_3 = double_3 * double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "1") > 0)
	{
	}
	double_2 = double_2 + double_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_3 = 1;
		double double_6 = 1;
		char_2 = char_1 * char_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_5 * double_5;
		short_2 = short_1 + short_3;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		double_2 = double_6 + double_3;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	double_7 = v_bulklen(int_1);

	double_4 = double_5 + double_3;
	int_1 = int_2;
	return int_3;
}
void v_sdsfree(int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char * vul_var;
	char controller4vul_300[3];
	fgets(controller4vul_300 ,3 ,stdin);
	if( strcmp( controller4vul_300, "Yq") > 0)
	{
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 480)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
	}
	char_3 = char_1 + char_2;
}
short v_sdscatvprintf( short parameter_1,unsigned int parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char_2 = char_1 + char_1;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_1;
	float_2 = float_1 * float_2;
	double_2 = double_2;
	int_1 = int_1 * int_2;
	return short_1;
}
long v_sdscat( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
char v_sdscatlen( unsigned int parameter_1,unsigned int parameter_2,short parameter_3)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	float_1 = float_1;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "+") < 0)
	{
	}
	double_2 = double_1 + double_2;
	short_2 = short_1 + short_1;
	short_2 = short_1 + short_1;
	float_2 = float_1 * float_2;
	int_2 = int_1 * int_1;
	double_4 = double_3 + double_1;
	return char_1;
}
double v_sdslen( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return double_1;
}
long v_intlen( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double_2 = double_1 * double_2;
	char_2 = char_1 + char_2;
	double_2 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		long long_2 = 1;
		long_1 = long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "?X") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
		double_1 = double_1 * double_1;
	}
	short_1 = short_1;
	double_2 = double_3 + double_4;
	int_3 = int_1 * int_2;
	double_2 = double_2 * double_1;
	if(1)
	{
		char_3 = char_3 * char_1;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
		char_3 = char_1;
	}
	char_1 = char_2 + char_1;
	int_4 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
	return long_1;
}
double v_bulklen( int parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	return double_1;
	long_1 = v_intlen(int_1);

}
int v_sdsempty()
{
	int int_1 = 1;
	return int_1;
}
int v_redisvFormatCommand( char parameter_1,char parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "m`") < 0)
	{
	}
	return int_1;
	int_1 = v_sdsempty();

	double_1 = v_bulklen(int_2);

	double_2 = v_sdslen(long_1);

	char_1 = v_sdscatlen(unsigned_int_1,unsigned_int_2,short_1);

	long_2 = v_sdscat(float_1,int_2);

	short_1 = v_sdscatvprintf(short_2,unsigned_int_3,short_1);

	v_sdsfree(-1 );

	long_1 = v_intlen(int_2);

}
int v_redisFormatCommand( char parameter_1,double parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 + int_1;
	float_1 = float_1;
	unsigned_int_3 = unsigned_int_4;
	int_2 = int_1 + int_2;
	return int_2;
	int_3 = v_redisvFormatCommand(char_1,char_1,unsigned_int_5);

}
void v_test_format_commands()
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v_redisFormatCommand(char_1,double_1,char_2);

	int_2 = v_redisFormatCommandArgv(char_2,int_1,float_1,unsigned_int_1);

}
int main()
{
	int uni_para =480;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 + int_1;
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		char controller4vul_281[3];
		fgets(controller4vul_281 ,3 ,stdin);
		if( strcmp( controller4vul_281, ".0") < 0)
		{
			double double_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			v_test_blocking_connection_errors(uni_para);

			double_3 = double_1 * double_2;
			long_2 = long_1 + long_1;
		}
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if(remainder_check(controller_1,100,2))
		{
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double_1 = double_2 * double_2;
			int_4 = int_2 * int_3;
		}
	}
	short_1 = short_1;
	return int_1;
}

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

unsigned int v_ErrorString();
int v_Stop( double parameter_1);
void v_SendNacks( double parameter_1);
float v_InternalRead( char parameter_1,int parameter_2);
long v_Read( unsigned int parameter_1,int parameter_2);
int v_GetAck();
int v_raw_read( unsigned int parameter_1,short parameter_2,int parameter_3);
unsigned int v_build_block_buffer( short parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5);
int v_Write( long parameter_1,char parameter_2,int parameter_3);
int v_Start( char parameter_1);
int v_GetClock( int parameter_1);
int v_GetDescription( unsigned int parameter_1);
void v_Close( long parameter_1);
int v_set_bits_low( float parameter_1,int parameter_2);
void v_SetAck( int parameter_1,int parameter_2);
int v_is_valid_context( long parameter_1);
int v_SetLoopback( long parameter_1,int parameter_2,int uni_para);
int v_ConfigurePinIO( float parameter_1);
int v_SetMode( float parameter_1,int parameter_2,int uni_para);
double v_div2freq( double parameter_1,char parameter_2);
short v_freq2div( unsigned int parameter_1,int parameter_2);
int v_raw_write( float parameter_1,short parameter_2,int parameter_3,int uni_para);
int v_SetClock( int parameter_1,long parameter_2);
void v_set_timeouts( unsigned int parameter_1,int parameter_2);
void v_FlushAfterRead( long parameter_1,int parameter_2);
short v_OpenIndex( int parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5,int parameter_6,double parameter_7,long parameter_8,int parameter_9,int uni_para);
double v_Open( int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5,int parameter_6,double parameter_7,char parameter_8,int uni_para);
int v_MPSSE( char parameter_1,int parameter_2,int parameter_3,int uni_para);
unsigned int v_ErrorString()
{
	unsigned int unsigned_int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ":") < 0)
	{
	}
	return unsigned_int_1;
}
int v_Stop( double parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int_1 = v_set_bits_low(float_1,int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "g&") > 0)
	{
		float float_2 = 1;
		float float_3 = 1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "`+") > 0)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		}
		int_2 = v_is_valid_context(long_1);

		double_1 = double_1 + double_1;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "Qe") > 0)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_1 + short_2;
		}
		float_3 = float_1 * float_2;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "X`") < 0)
	{
		double double_2 = 1;
		double double_3 = 1;
		int_2 = int_2 * int_1;
		double_1 = double_2 + double_3;
	}
	return int_3;
}
void v_SendNacks( double parameter_1)
{
	int int_1 = 1;
	v_SetAck(int_1,int_1);

}
float v_InternalRead( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int_1 = v_is_valid_context(long_1);

	int_2 = v_raw_write(float_1,short_1,int_1,-1 );

	double_3 = double_1 + double_2;
	int_1 = v_raw_read(unsigned_int_1,short_1,int_1);

	double_1 = double_1 * double_1;
	return float_1;
	unsigned_int_1 = v_build_block_buffer(short_1,int_2,unsigned_int_1,int_3,int_3);

}
long v_Read( unsigned int parameter_1,int parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "u") > 0)
	{
	}
	return long_1;
	float_1 = v_InternalRead(char_1,int_1);

}
int v_GetAck()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_1 = int_1 * int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "1:") > 0)
	{
		int_2 = v_is_valid_context(long_1);

		int_2 = int_1 + int_1;
	}
	return int_2;
}
int v_raw_read( unsigned int parameter_1,short parameter_2,int parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_2;
	int_3 = int_1 * int_2;
	return int_1;
}
unsigned int v_build_block_buffer( short parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5)
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
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double_2 = double_1 + double_1;
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "W}") > 0)
	{
		int_4 = int_2 + int_2;
	}
	char_3 = char_1 * char_3;
	if(1)
	{
		float_1 = float_2;
	}
	int_2 = int_5 + int_2;
	if(1)
	{
		double_3 = double_2 + double_2;
	}
	double_4 = double_2 + double_1;
	if(1)
	{
		int int_6 = 1;
		float float_4 = 1;
		int_5 = int_6 + int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_7 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			char controller_6[3];
			fgets(controller_6 ,3 ,stdin);
			if( strcmp( controller_6, "{Q") < 0)
			{
				int_3 = int_4;
			}
			unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
			if(1)
			{
				float_2 = float_3;
				unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
				if(1)
				{
					double_1 = double_1;
				}
				if(1)
				{
					char char_4 = 1;
					char_4 = char_4 + char_2;
				}
			}
			char_1 = char_2;
			long_1 = long_1 + long_2;
			char controller_10[3];
			fgets(controller_10 ,3 ,stdin);
			if( strcmp( controller_10, "A)") < 0)
			{
				long_2 = long_1;
			}
			char controller_11[3];
			fgets(controller_11 ,3 ,stdin);
			if( strcmp( controller_11, "T^") > 0)
			{
				int_1 = int_7;
				char_3 = char_2 + char_2;
				unsigned_int_2 = unsigned_int_3;
			}
			if(1)
			{
				if(1)
				{
					double double_5 = 1;
					double double_6 = 1;
					short short_1 = 1;
					double_5 = double_1 * double_2;
					int_5 = int_1;
					double_4 = double_1 + double_3;
					long_1 = long_1 + long_2;
					double_6 = double_3;
					short_1 = short_1 + short_1;
				}
				if(1)
				{
					double double_7 = 1;
					int int_8 = 1;
					int int_9 = 1;
					long long_3 = 1;
					float_3 = float_1 + float_1;
					double_4 = double_7;
					unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
					int_9 = int_8 + int_3;
					int_5 = int_3 + int_7;
					long_3 = long_3 * long_3;
				}
			}
		}
		float_2 = float_4 + float_2;
	}
	return unsigned_int_4;
}
int v_Write( long parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = v_is_valid_context(long_1);

	int_1 = int_2 * int_2;
	unsigned_int_1 = v_build_block_buffer(short_1,int_1,unsigned_int_2,int_2,int_2);

	int_3 = v_raw_write(float_1,short_2,int_4,-1 );

	int_3 = v_raw_read(unsigned_int_3,short_2,int_2);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	return int_1;
}
int v_Start( char parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_1 = float_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_2 = 1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "-^") > 0)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			int_1 = v_is_valid_context(long_1);

			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		}
		int_1 = v_set_bits_low(float_2,int_2);

		long_1 = long_1 * long_2;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_1 + char_2;
		}
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "T") > 0)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_1;
		}
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if(remainder_check(controller_5,100,2))
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
		int_1 = int_3;
	}
	return int_3;
}
int v_GetClock( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "2j") < 0)
	{
		int_1 = int_1 + int_1;
	}
	return int_1;
	int_2 = v_is_valid_context(long_1);

}
int v_GetDescription( unsigned int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double_1 = double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "f") > 0)
	{
		long long_2 = 1;
		long long_3 = 1;
		int_1 = v_is_valid_context(long_1);

		long_3 = long_1 * long_2;
	}
	return int_2;
}
void v_Close( long parameter_1)
{
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ")S") < 0)
	{
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "Y") > 0)
		{
			char_1 = char_1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "}") == 0)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		char_3 = char_2 * char_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
}
int v_set_bits_low( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float_2 = float_1 + float_2;
	int_2 = int_1 + int_1;
	short_1 = short_1 * short_2;
	double_3 = double_1 + double_2;
	return int_2;
	int_3 = v_raw_write(float_3,short_2,int_3,-1 );

}
void v_SetAck( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "Xx") > 0)
		{
			int_1 = int_1 * int_1;
		}
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "(") < 0)
		{
			int_1 = v_is_valid_context(long_1);

			int_1 = int_1 * int_1;
		}
	}
}
int v_is_valid_context( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "4") > 0)
	{
		int_1 = int_1 * int_1;
	}
	return int_1;
}
int v_SetLoopback( long parameter_1,int parameter_2,int uni_para)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short_1 = short_1 * short_1;
	double_2 = double_1 * double_2;
	char controller4vul_653[3];
	fgets(controller4vul_653 ,3 ,stdin);
	if( strcmp( controller4vul_653, "MH") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char controller4vul_654[2];
		fgets(controller4vul_654 ,2 ,stdin);
		if( strcmp( controller4vul_654, "`") > 0)
		{
			unsigned int unsigned_int_2 = 1;
			int_1 = v_raw_write(float_1,short_1,int_2,uni_para);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "x") > 0)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		}
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	return int_1;
}
int v_ConfigurePinIO( float parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
int v_SetMode( float parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_8 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_651[3];
	fgets(controller4vul_651 ,3 ,stdin);
	if( strcmp( controller4vul_651, "1c") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		long long_4 = 1;
		float float_3 = 1;
		int int_4 = 1;
		short short_2 = 1;
		char char_2 = 1;
		double double_1 = 1;
		float float_4 = 1;
		char char_3 = 1;
		int int_6 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_5 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_6 = 1;
		char char_4 = 1;
		char char_5 = 1;
		double double_8 = 1;
		float_2 = float_1 * float_1;
		long_2 = long_1 * long_2;
		long_1 = long_2 * long_3;
		short_1 = short_1 * short_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		char_1 = char_1;
		long_4 = long_1 * long_2;
		int_2 = int_2 + int_3;
		float_3 = float_1 + float_1;
		int_4 = int_1 + int_3;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
		short_1 = short_2 * short_1;
		char_2 = char_1 * char_1;
		long_1 = long_2 * long_2;
		long_1 = long_1 + long_2;
		float_3 = float_3 + float_1;
		double_1 = double_1 + double_1;
		float_4 = float_3 + float_3;
		int_5 = int_2;
		char_2 = char_1 * char_3;
		int_4 = int_1 * int_2;
		double_1 = double_1 + double_1;
		int_6 = int_1 + int_3;
		long_3 = long_3 + long_1;
		double_2 = double_2 + double_2;
		double_4 = double_3 * double_4;
		double_1 = double_3 * double_4;
		double_2 = double_1 * double_4;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_5;
		long_5 = long_4 * long_2;
		int_3 = int_1 * int_3;
		double_2 = double_4;
		double_3 = double_3 * double_5;
		int_3 = int_1 + int_1;
		double_7 = double_4 * double_6;
		short_1 = short_2;
		float_2 = float_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		float_4 = float_1;
		unsigned_int_2 = unsigned_int_6;
		unsigned_int_3 = unsigned_int_6 * unsigned_int_4;
		char_5 = char_4 * char_3;
		double_7 = double_4 * double_4;
		unsigned_int_3 = unsigned_int_4;
		double_8 = double_1 * double_5;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_3;
		char controller4vul_652[2];
		fgets(controller4vul_652 ,2 ,stdin);
		if( strcmp( controller4vul_652, "z") > 0)
		{
			long long_6 = 1;
			int_5 = v_SetLoopback(long_1,int_2,uni_para);

			long_6 = long_2 + long_3;
		}
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "9") > 0)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_5 = unsigned_int_3 + unsigned_int_6;
			unsigned_int_7 = unsigned_int_6 + unsigned_int_3;
			unsigned_int_8 = unsigned_int_4 * unsigned_int_7;
			int_3 = int_6 * int_2;
			char_1 = char_4 + char_1;
			int_6 = int_6 + int_3;
			double_5 = double_3 + double_7;
		}
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "gn") < 0)
	{
		unsigned int unsigned_int_9 = 1;
		unsigned_int_3 = unsigned_int_9 + unsigned_int_8;
	}
	return int_3;
}
double v_div2freq( double parameter_1,char parameter_2)
{
	double double_1 = 1;
	return double_1;
}
short v_freq2div( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	return short_1;
}
int v_raw_write( float parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char * vul_var;
	double_2 = double_1 + double_2;
	char controller4vul_655[3];
	fgets(controller4vul_655 ,3 ,stdin);
	if( strcmp( controller4vul_655, "gK") < 0)
	{
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		char controller4vul_656[3];
		fgets(controller4vul_656 ,3 ,stdin);
		if( strcmp( controller4vul_656, "[-") > 0)
		{
			long long_1 = 1;
			if(uni_para == 387)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			long_1 = long_1 * long_1;
		}
	}
	char_2 = char_1 + char_1;
}
int v_SetClock( int parameter_1,long parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	short short_5 = 1;
	int int_6 = 1;
	double double_3 = 1;
	short_1 = short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = v_freq2div(unsigned_int_2,int_1);

	double_2 = double_1 * double_2;
	int_2 = int_3;
	if(1)
	{
		char char_1 = 1;
		short short_2 = 1;
		int int_4 = 1;
		if(1)
		{
			char_1 = char_1 + char_1;
			short_1 = short_2;
		}
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "&") > 0)
		{
			short short_3 = 1;
			short short_4 = 1;
			int_4 = int_2 * int_3;
			short_4 = short_3 + short_2;
		}
		if(1)
		{
			int int_5 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_7 = 1;
			if(1)
			{
				int_5 = int_2 + int_2;
			}
			if(1)
			{
				float float_2 = 1;
				float_2 = float_1 * float_1;
			}
			unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
			char_2 = char_2 + char_1;
			int_1 = v_raw_write(float_1,short_5,int_2,-1 );

			int_7 = int_5 * int_6;
			if(1)
			{
				int_4 = int_7 + int_2;
				int_5 = int_7 * int_5;
			}
		}
	}
	return int_6;
	double_1 = v_div2freq(double_3,char_2);

}
void v_set_timeouts( unsigned int parameter_1,int parameter_2)
{
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "5B") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_2 = double_1 + double_2;
		float_3 = float_1 + float_2;
	}
}
void v_FlushAfterRead( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_2;
}
short v_OpenIndex( int parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5,int parameter_6,double parameter_7,long parameter_8,int parameter_9,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	short short_4 = 1;
	double_2 = double_1 + double_2;
	float_2 = float_1 * float_2;
	short_1 = short_1 * short_2;
	char controller4vul_644[2];
	fgets(controller4vul_644 ,2 ,stdin);
	if( strcmp( controller4vul_644, "#") < 0)
	{
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		double_2 = double_3 + double_4;
		double_2 = double_2 * double_3;
		long_1 = long_1 + long_1;
		char controller4vul_645[2];
		fgets(controller4vul_645 ,2 ,stdin);
		if( strcmp( controller4vul_645, "4") < 0)
		{
			double double_5 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double_1 = double_5;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			char controller4vul_646[3];
			fgets(controller4vul_646 ,3 ,stdin);
			if( strcmp( controller4vul_646, "-b") > 0)
			{
				char char_1 = 1;
				int int_1 = 1;
				int int_3 = 1;
				double double_6 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_3 = 1;
				char_1 = char_1 + char_1;
				int_1 = int_1;
				int_2 = int_2 * int_1;
				double_1 = double_5 + double_3;
				int_3 = int_3 + int_2;
				if(1)
				{
					int_2 = int_1 + int_3;
				}
				if(1)
				{
					double_2 = double_3 + double_6;
				}
				double_5 = double_7 + double_6;
				unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
				int_3 = int_1 + int_3;
				short_2 = short_2 * short_1;
				short_1 = short_2;
				char controller4vul_647[3];
				fgets(controller4vul_647 ,3 ,stdin);
				if( strcmp( controller4vul_647, "p]") < 0)
				{
					short short_3 = 1;
					short_1 = short_1 + short_1;
					char controller4vul_648[3];
					fgets(controller4vul_648 ,3 ,stdin);
					if( strcmp( controller4vul_648, "JG") < 0)
					{
						char char_2 = 1;
						char_1 = char_2;
						char controller4vul_649[3];
						fgets(controller4vul_649 ,3 ,stdin);
						if( strcmp( controller4vul_649, "g.") < 0)
						{
							char controller4vul_650[2];
							fgets(controller4vul_650 ,2 ,stdin);
							if( strcmp( controller4vul_650, "Y") < 0)
							{
								unsigned int unsigned_int_4 = 1;
								int_2 = v_SetMode(float_2,int_2,uni_para);

								short_2 = short_3 * short_3;
								unsigned_int_4 = unsigned_int_1;
								double_4 = double_2 + double_7;
							}
						}
					}
					char controller_1[2];
					fgets(controller_1 ,2 ,stdin);
					if( strcmp( controller_1, "W") == 0)
					{
						char controller_2[3];
						fgets(controller_2 ,3 ,stdin);
						if( strcmp( controller_2, "oj") > 0)
						{
							short_1 = short_3;
						}
					}
				}
			}
		}
	}
	return short_4;
}
double v_Open( int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5,int parameter_6,double parameter_7,char parameter_8,int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short_1 = v_OpenIndex(int_1,int_2,float_1,int_3,int_3,int_2,double_1,long_1,int_1,uni_para);

	return double_1;
}
int v_MPSSE( char parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	float_1 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller4vul_642[2];
		fgets(controller4vul_642 ,2 ,stdin);
		if( strcmp( controller4vul_642, "Z") > 0)
		{
			char controller4vul_643[3];
			fgets(controller4vul_643 ,3 ,stdin);
			if( strcmp( controller4vul_643, "Qb") > 0)
			{
				double double_3 = 1;
				double_2 = v_Open(int_1,int_1,unsigned_int_1,int_1,int_2,int_3,double_1,char_1,uni_para);

				int_2 = int_1 * int_1;
				double_3 = double_2 * double_2;
			}
			char controller_1[2];
			fgets(controller_1 ,2 ,stdin);
			if( strcmp( controller_1, "3") > 0)
			{
				short short_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				int int_4 = 1;
				short_3 = short_1 + short_2;
				int_1 = int_4 * int_4;
			}
		}
	}
	return int_1;
}
int main()
{
	int uni_para =387;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	double_2 = double_1 + double_1;
	int_1 = int_2 + int_1;
	double_2 = double_2 * double_2;
	char controller4vul_637[2];
	fgets(controller4vul_637 ,2 ,stdin);
	if( strcmp( controller4vul_637, "A") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		int int_6 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		char_1 = char_1 * char_1;
		int_1 = int_3 + int_4;
		char controller4vul_638[2];
		fgets(controller4vul_638 ,2 ,stdin);
		if( strcmp( controller4vul_638, "`") > 0)
		{
			long_1 = long_1 + long_1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			char controller4vul_639[2];
			fgets(controller4vul_639 ,2 ,stdin);
			if( strcmp( controller4vul_639, "z") > 0)
			{
				long long_3 = 1;
				long long_4 = 1;
				double double_3 = 1;
				double double_4 = 1;
				long_4 = long_2 * long_3;
				char controller4vul_640[3];
				fgets(controller4vul_640 ,3 ,stdin);
				if( strcmp( controller4vul_640, "_H") > 0)
				{
					long long_5 = 1;
					float float_1 = 1;
					long_5 = long_4 * long_2;
					char controller4vul_641[2];
					fgets(controller4vul_641 ,2 ,stdin);
					if( strcmp( controller4vul_641, "@") < 0)
					{
						int_2 = v_MPSSE(char_1,int_4,int_2,uni_para);

						double_2 = double_1 * double_2;
						double_2 = double_3 + double_3;
						int_5 = int_5 + int_3;
						int_2 = int_1 * int_1;
					}
					float_1 = float_1;
				}
				double_3 = double_4;
				double_1 = double_3;
			}
		}
		int_6 = int_2 + int_1;
	}
	if(1)
	{
		long_2 = long_1 + long_1;
	}
	short_1 = short_1 * short_1;
	return int_5;
}

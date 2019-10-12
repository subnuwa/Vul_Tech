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

float v_recompress( long parameter_1,long parameter_2);
double v_partcompress( short parameter_1,int parameter_2);
long v_quit( char parameter_1);
long v_inflateEnd( long parameter_1);
int v_inf( char parameter_1,long parameter_2);
long v_deflateEnd();
float v_fp_65();
unsigned int v_updatewindow( unsigned int parameter_1,int parameter_2,unsigned int parameter_3);
void v_inflate_fast( short parameter_1,unsigned int parameter_2);
char v_inflate_table( long parameter_1,long parameter_2,double parameter_3,float parameter_4,char parameter_5,double parameter_6);
unsigned int v_decode( short parameter_1,char parameter_2);
int v_codes( char parameter_1,long parameter_2,short parameter_3);
long v_construct( char parameter_1,int parameter_2,int parameter_3);
float v_fixed( int parameter_1);
short v_fixedtables( double parameter_1);
int v_fp();
double v_lm_init( double parameter_1);
void v_init_block( short parameter_1);
void v_bi_reverse( long parameter_1,int parameter_2);
char v_gen_codes( float parameter_1,int parameter_2,short parameter_3,int uni_para);
short v_tr_static_init(int uni_para);
unsigned int v__tr_init( float parameter_1,int uni_para);
int v_deflateResetKeep( unsigned int parameter_1,int uni_para);
float v_deflateReset( char parameter_1,int uni_para);
int v__tr_align( short parameter_1);
char v_deflate_rle( int parameter_1,int parameter_2);
double v_zmemzero( long parameter_1,double parameter_2);
void v_slide_hash( double parameter_1);
double v_long( unsigned int parameter_1);
int v_fill_window( unsigned int parameter_1);
char v_deflate_huff( long parameter_1,int parameter_2);
char v_read_buf( long parameter_1,int parameter_2,long parameter_3);
long v_bi_windup( char parameter_1);
int v__tr_stored_block( int parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4);
double v_deflate_stored( short parameter_1,int parameter_2);
void v_adler32_z( float parameter_1,char parameter_2,unsigned int parameter_3);
void v_adler32( double parameter_1,double parameter_2,short parameter_3);
short v_putShortMSB( long parameter_1,int parameter_2);
char v_zmemcpy( int parameter_1,int parameter_2,float parameter_3);
short v_bi_flush( float parameter_1);
int v__tr_flush_bits();
float v_flush_pending( unsigned int parameter_1);
int v_deflateStateCheck( unsigned int parameter_1);
long v_deflate( long parameter_1,int parameter_2);
float v_gz_comp( float parameter_1,int parameter_2,int uni_para);
double v_gz_zero( float parameter_1,double parameter_2,int uni_para);
double v_gz_init( float parameter_1);
double v_gz_write( int parameter_1,int parameter_2,unsigned int parameter_3,int uni_para);
double v_gzwrite( unsigned int parameter_1,double parameter_2,char parameter_3,int uni_para);
int v_write( short parameter_1,char parameter_2,unsigned int parameter_3,int uni_para);
float v_crc32_z( long parameter_1,int parameter_2,long parameter_3);
void v_crc32( unsigned int parameter_1,float parameter_2,short parameter_3);
float v_out(int uni_para);
void v_bits( long parameter_1,int parameter_2,int uni_para);
unsigned int v_inflate( char parameter_1,int parameter_2,int uni_para);
int v_gz_decomp(int uni_para);
long v_inflateResetKeep( short parameter_1);
float v_inflateStateCheck( char parameter_1);
float v_inflateReset( float parameter_1);
float v_gz_load( double parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4);
short v_gz_avail();
unsigned int v_gz_look( float parameter_1);
double v_gz_fetch( char parameter_1,int uni_para);
char v_gz_skip( int parameter_1,int parameter_2,int uni_para);
short v_gz_read( float parameter_1,int parameter_2,double parameter_3,int uni_para);
long v_gz_error( char parameter_1,int parameter_2,double parameter_3);
float v_gzread( char parameter_1,int parameter_2,float parameter_3,int uni_para);
int v_read( double parameter_1,double parameter_2,long parameter_3,int uni_para);
char v_int( char parameter_1,int uni_para);
void v_in(int uni_para);
int v_def( float parameter_1,int parameter_2,int parameter_3,int uni_para);
float v_recompress( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	unsigned_int_1 = v_inflate(char_1,int_1,-1 );

	short_1 = short_1 * short_2;
	if(1)
	{
	}
	long_1 = v_deflate(long_2,int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	return float_1;
}
double v_partcompress( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_1 = v_deflate(long_2,int_1);

	double_2 = double_1 + double_1;
	short_1 = short_2;
	return double_2;
}
long v_quit( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float_2 = float_1 * float_1;
	int_1 = int_1;
	return long_1;
}
long v_inflateEnd( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_2;
	double_1 = double_1 * double_1;
	int_2 = int_3 * int_3;
	if(1)
	{
	}
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float_2 = v_inflateStateCheck(char_1);

		float_2 = float_3 * float_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		float_1 = float_1;
	}
	return long_1;
}
int v_inf( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	return int_1;
	v_in(-1 );

	float_1 = v_out(-1 );

	long_1 = v_inflateEnd(long_2);

	unsigned_int_1 = v_inflate(char_1,int_2,-1 );

}
long v_deflateEnd()
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "/") > 0)
	{
		double double_3 = 1;
		double_1 = double_1 * double_3;
	}
	return long_1;
	int_1 = v_deflateStateCheck(unsigned_int_1);

}
float v_fp_65()
{
	float float_1 = 1;
	return float_1;
}
unsigned int v_updatewindow( unsigned int parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "2`") < 0)
	{
	}
	return unsigned_int_1;
	char_1 = v_zmemcpy(int_1,int_2,float_1);

}
void v_inflate_fast( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
		float float_1 = 1;
		float float_2 = 1;
		double_1 = v_long(unsigned_int_1);

		float_1 = float_1 + float_2;
	}
	long_2 = long_1 + long_1;
	short_3 = short_1 + short_2;
}
char v_inflate_table( long parameter_1,long parameter_2,double parameter_3,float parameter_4,char parameter_5,double parameter_6)
{
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int_1 = v_codes(char_1,long_1,short_1);

	long_2 = long_1 + long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Fd") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		char_1 = v_int(char_2,-1 );

		double_1 = double_1 + double_2;
	}
	return char_3;
	v_bits(long_1,int_2,-1 );

}
unsigned int v_decode( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_1 = int_1;
		float_1 = float_2;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "-") < 0)
		{
			float float_3 = 1;
			float_2 = float_1 * float_3;
		}
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	return unsigned_int_1;
}
int v_codes( char parameter_1,long parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	unsigned_int_1 = v_decode(short_1,char_3);

	int_3 = int_1 * int_2;
	v_bits(long_1,int_3,-1 );

	char_5 = char_3 * char_4;
	return int_2;
}
long v_construct( char parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	float_1 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	return long_2;
}
float v_fixed( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	int_1 = int_2;
	double_1 = double_1 + double_1;
	double_4 = double_2 + double_3;
	float_1 = float_1 + float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "G") > 0)
	{
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_6 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_7 = 1;
		double_5 = double_4 + double_5;
		long_1 = v_construct(char_1,int_2,int_1);

		long_2 = long_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		long_4 = long_3 * long_4;
		double_3 = double_6;
		int_2 = v_codes(char_1,long_2,short_1);

		double_4 = double_5 * double_5;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short_1 = short_1 * short_1;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long_5 = long_4 * long_1;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double_4 = double_1 + double_2;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		}
		double_3 = double_5 + double_6;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			long_5 = long_2 + long_5;
		}
		unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
		double_7 = double_4 + double_3;
	}
	return float_2;
}
short v_fixedtables( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	float_1 = float_1 + float_2;
	float_2 = float_3 * float_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_1 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				char_1 = v_inflate_table(long_1,long_1,double_1,float_2,char_1,double_2);

				double_2 = double_2;
				if(1)
				{
					long_1 = long_1 + long_1;
				}
				if(1)
				{
					char_1 = char_1 + char_1;
				}
				int_2 = int_1 * int_2;
			}
			if(1)
			{
				long long_2 = 1;
				long_2 = long_2 * long_2;
				if(1)
				{
					double_1 = double_2;
				}
				if(1)
				{
					int_1 = int_1 + int_2;
				}
				long_2 = long_1 + long_3;
			}
			if(1)
			{
				float float_4 = 1;
				float float_5 = 1;
				float_1 = float_4 * float_5;
				if(1)
				{
					int int_3 = 1;
					int_3 = int_3 * int_2;
				}
				if(1)
				{
					float_4 = float_2 + float_1;
				}
				int_1 = int_1 * int_2;
			}
			if(1)
			{
				double_2 = double_1;
				if(1)
				{
					long long_4 = 1;
					long long_5 = 1;
					long_5 = long_4 * long_1;
				}
				char controller_13[2];
				fgets(controller_13 ,2 ,stdin);
				if( strcmp( controller_13, "y") < 0)
				{
					char char_2 = 1;
					char_2 = char_2 * char_2;
				}
				float_1 = v_fixed(int_2);

				double_1 = double_1 * double_1;
			}
		}
	}
	return short_1;
	v_bits(long_3,int_2,-1 );

}
int v_fp()
{
	int int_1 = 1;
	return int_1;
}
double v_lm_init( double parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_1 = long_1;
	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_2;
	float_1 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return double_1;
}
void v_init_block( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char_2 = char_1 * char_2;
	short_1 = short_1 + short_1;
}
void v_bi_reverse( long parameter_1,int parameter_2)
{
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "R") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long_3 = long_1 + long_2;
		int_1 = int_1 * int_1;
		char_2 = char_1 + char_2;
		float_2 = float_1 * float_2;
	}
}
char v_gen_codes( float parameter_1,int parameter_2,short parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_2295[3];
	fgets(controller4vul_2295 ,3 ,stdin);
	if( strcmp( controller4vul_2295, "FI") > 0)
	{
		v_bits(long_1,int_1,uni_para);

	}
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int_1 = int_2;
	double_2 = double_1 * double_2;
	return char_1;
}
short v_tr_static_init(int uni_para)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_5 = 1;
	short short_4 = 1;
	short_1 = short_1;
	double_1 = double_1 + double_2;
	long_1 = long_1 + long_1;
	double_2 = double_2 + double_3;
	int_1 = int_1;
	int_2 = int_2 * int_1;
	float_1 = float_1 + float_1;
	float_3 = float_2 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 * long_2;
	int_3 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	short_1 = short_1;
	int_4 = int_3 * int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_4;
	char controller4vul_2294[3];
	fgets(controller4vul_2294 ,3 ,stdin);
	if( strcmp( controller4vul_2294, "]?") < 0)
	{
		short short_2 = 1;
		short short_3 = 1;
		char_1 = v_gen_codes(float_3,int_3,short_1,uni_para);

		short_3 = short_1 * short_2;
	}
	if(1)
	{
		double double_5 = 1;
		double_5 = double_5;
	}
	int_4 = int_5;
	int_4 = int_2 * int_4;
	unsigned_int_1 = unsigned_int_2;
	return short_4;
}
unsigned int v__tr_init( float parameter_1,int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char controller4vul_2293[3];
	fgets(controller4vul_2293 ,3 ,stdin);
	if( strcmp( controller4vul_2293, "e ") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		short_1 = v_tr_static_init(uni_para);

		double_1 = double_1 + double_2;
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "[") < 0)
	{
		int_2 = int_1 * int_1;
	}
	int_2 = int_2 + int_2;
	long_3 = long_1 * long_2;
	int_2 = int_1;
	int_2 = int_2;
	return unsigned_int_1;
}
int v_deflateResetKeep( unsigned int parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	float float_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_1 = v__tr_init(float_1,uni_para);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_2;
	double_1 = double_1 * double_1;
	char_1 = char_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	long_3 = long_1 * long_2;
	short_2 = short_1 * short_2;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	float_4 = float_3 * float_4;
	short_2 = short_2 + short_3;
	float_1 = float_1 * float_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	float_5 = float_1 + float_4;
	double_3 = double_2 + double_2;
	int_2 = int_2 + int_1;
	int_4 = int_3 + int_4;
	short_2 = short_2;
	char_2 = char_1 + char_2;
	int_5 = int_3 * int_1;
	double_2 = double_2;
	double_3 = double_2;
	return int_3;
}
float v_deflateReset( char parameter_1,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	int_1 = v_deflateResetKeep(unsigned_int_1,uni_para);

	short_2 = short_1 + short_2;
	double_1 = double_1 * double_1;
	char_3 = char_1 * char_2;
	return float_1;
}
int v__tr_align( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_2 = double_1 * double_2;
	long_2 = long_1 * long_2;
	long_3 = long_2 + long_3;
	int_1 = int_1;
	short_1 = v_bi_flush(float_1);

	float_2 = float_3;
	long_2 = long_2;
	return int_1;
}
char v_deflate_rle( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double_2 = double_1 * double_2;
	double_3 = double_2 * double_1;
	float_3 = float_1 + float_2;
	double_3 = double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		short_2 = short_1 * short_2;
		float_5 = float_4 + float_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_2 = int_1 + int_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		}
		double_1 = double_4;
	}
	short_1 = short_1;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
	short_1 = short_2 + short_2;
	int_1 = int_1;
	short_3 = short_4;
	long_1 = long_1 * long_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	int_2 = int_2 * int_2;
	return char_1;
	int_3 = v_fill_window(unsigned_int_2);

}
double v_zmemzero( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	if(1)
	{
		double double_3 = 1;
		int int_2 = 1;
		double double_4 = 1;
		double_3 = double_1 + double_2;
		int_2 = int_1 + int_1;
		double_1 = double_1 + double_4;
	}
	if(1)
	{
		double double_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_6 = 1;
		double_5 = double_2;
		short_1 = short_1 + short_2;
		double_6 = double_2 + double_5;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "I") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		int_1 = int_1 * int_3;
		double_2 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	int_3 = int_4 * int_1;
	return double_2;
}
void v_slide_hash( double parameter_1)
{
}
double v_long( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short_2 = short_1 + short_1;
	return double_1;
}
int v_fill_window( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	long long_3 = 1;
	int int_1 = 1;
	double double_5 = 1;
	int int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long_1 = long_2;
	double_1 = v_zmemzero(long_1,double_2);

	double_2 = double_1 + double_3;
	double_1 = v_long(unsigned_int_1);

	double_4 = double_2 + double_2;
	v_slide_hash(double_2);

	char_1 = v_read_buf(long_3,int_1,long_3);

	double_5 = double_2;
	return int_2;
	char_2 = v_zmemcpy(int_2,int_2,float_1);

}
char v_deflate_huff( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float_2 = float_1 + float_2;
	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short_2 = short_1 * short_1;
		double_3 = double_2 + double_1;
		int_2 = int_1 + int_1;
		int_3 = int_3 * int_3;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "M") < 0)
		{
			short_3 = short_1 + short_3;
		}
		if(1)
		{
			long long_1 = 1;
			int_4 = v_fill_window(unsigned_int_1);

			long_1 = long_1 + long_1;
		}
		int_2 = int_1 + int_2;
		int_3 = int_2 + int_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			short short_5 = 1;
			short_5 = short_4 + short_3;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			int_3 = int_3 * int_1;
		}
		if(1)
		{
			int_2 = int_1 * int_2;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_3;
		}
		char controller_9[3];
		fgets(controller_9 ,3 ,stdin);
		if( strcmp( controller_9, "]b") < 0)
		{
			float_2 = float_2 + float_2;
		}
		if(1)
		{
			short_2 = short_2 + short_4;
		}
		if(1)
		{
			short short_6 = 1;
			short_6 = short_2 * short_4;
		}
		int_3 = int_2;
	}
	return char_1;
}
char v_read_buf( long parameter_1,int parameter_2,long parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	short short_4 = 1;
	char char_3 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		float_2 = float_1 + float_3;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float_3 = float_3 * float_3;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "V<") < 0)
	{
		char controller_5[2];
		fgets(controller_5 ,2 ,stdin);
		if( strcmp( controller_5, "r") > 0)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			float_1 = float_3;
		}
		if(1)
		{
			int_1 = int_1 * int_1;
		}
		short_2 = short_2 * short_2;
		int_1 = int_1 + int_1;
	}
	long_1 = long_1 * long_2;
	float_3 = float_2 + float_4;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
			short short_3 = 1;
			short_3 = short_1 + short_3;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
		}
		if(1)
		{
			v_adler32(double_3,double_1,short_1);

			unsigned_int_4 = unsigned_int_4;
		}
		unsigned_int_6 = unsigned_int_5 + unsigned_int_5;
		char_1 = v_zmemcpy(int_1,int_2,float_3);

		int_1 = int_1 * int_2;
	}
	double_4 = double_1 * double_4;
	char controller_13[3];
	fgets(controller_13 ,3 ,stdin);
	if( strcmp( controller_13, "P4") < 0)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_2 * int_3;
	}
	if(1)
	{
		char char_2 = 1;
		v_crc32(unsigned_int_6,float_3,short_4);

		char_1 = char_1 + char_2;
	}
	short_2 = short_2;
	return char_3;
}
long v_bi_windup( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	short_2 = short_1 * short_1;
	float_2 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_3 * short_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	int_3 = int_3 * int_3;
	int_5 = int_4 + int_1;
	int_6 = int_3 + int_4;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	float_1 = float_2 + float_2;
	long_1 = long_1 * long_1;
	int_2 = int_2 + int_3;
	double_1 = double_1 + double_2;
	short_2 = short_3 * short_1;
	return long_2;
}
int v__tr_stored_block( int parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long_1 = v_bi_windup(char_1);

	int_2 = int_1 * int_1;
	char_1 = v_zmemcpy(int_1,int_2,float_1);

	int_1 = int_2 * int_2;
	double_1 = double_1 * double_2;
	return int_3;
}
double v_deflate_stored( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = char_1;
	double_1 = double_1 + double_2;
	int_1 = v__tr_stored_block(int_2,unsigned_int_1,float_1,int_3);

	char_1 = v_zmemcpy(int_1,int_1,float_1);

	long_3 = long_1 + long_2;
	double_1 = double_1;
	double_4 = double_3 + double_1;
	float_1 = v_flush_pending(unsigned_int_2);

	unsigned_int_3 = unsigned_int_2;
	char_1 = v_read_buf(long_1,int_2,long_2);

	double_1 = double_4 * double_2;
	return double_1;
}
void v_adler32_z( float parameter_1,char parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_2 = char_1 + char_1;
	long_2 = long_1 + long_2;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	float_2 = float_1 * float_1;
}
void v_adler32( double parameter_1,double parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	double_1 = double_1 * double_1;
	double_1 = double_2 + double_3;
	long_1 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		v_adler32_z(float_1,char_1,unsigned_int_2);

		char_3 = char_2 * char_3;
	}
}
short v_putShortMSB( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	short short_5 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_2;
	int_1 = int_1 * int_1;
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_3;
	float_3 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_4 = 1;
		long long_1 = 1;
		float float_6 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_4 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_7 = 1;
		long long_5 = 1;
		int int_6 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
			int_2 = int_1 + int_2;
		}
		if(1)
		{
			float_5 = float_4 + float_2;
			if(1)
			{
				double_4 = double_1 + double_4;
			}
			if(1)
			{
				char_2 = char_2;
			}
		}
		if(1)
		{
			long long_3 = 1;
			float_3 = float_3 + float_3;
			if(1)
			{
				int int_3 = 1;
				char char_3 = 1;
				int_1 = int_3 + int_1;
				int_3 = int_2 + int_2;
				if(1)
				{
					int_1 = int_2 * int_1;
					char_1 = char_1 + char_3;
					int_2 = int_2 + int_1;
					long_1 = long_1 * long_1;
					float_4 = float_6 + float_2;
					unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
					unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
					float_2 = float_4 * float_6;
				}
				if(1)
				{
					int_3 = int_2;
				}
				int_4 = int_3 * int_4;
				int_5 = int_4 * int_5;
				char_1 = char_3;
				if(1)
				{
					long long_2 = 1;
					long_2 = long_1 + long_2;
					long_3 = long_1 * long_2;
					float_2 = float_1;
					unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
				}
				short_2 = short_1 + short_1;
				int_5 = int_1 * int_2;
				float_2 = float_6 + float_2;
				long_3 = long_3 + long_4;
				int_4 = int_2;
			}
			if(1)
			{
				char controller_11[2];
				fgets(controller_11 ,2 ,stdin);
				if( strcmp( controller_11, ";") < 0)
				{
					unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
					if(1)
					{
						unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
						if(1)
						{
							unsigned int unsigned_int_6 = 1;
							int_4 = int_1 * int_4;
							float_4 = float_6 * float_1;
							unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
							int_5 = int_4;
							int_4 = int_1;
							unsigned_int_4 = unsigned_int_4 + unsigned_int_6;
							short_2 = short_2 * short_3;
						}
					}
					if(1)
					{
						unsigned_int_4 = unsigned_int_1 * unsigned_int_7;
					}
				}
				int_1 = int_2 + int_1;
				long_5 = long_3 + long_4;
				int_2 = int_2 * int_6;
			}
		}
		if(1)
		{
			double double_5 = 1;
			int int_8 = 1;
			double_2 = double_2 + double_5;
			if(1)
			{
				unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
				short_2 = short_1 * short_3;
				if(1)
				{
					int int_7 = 1;
					unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
					double_3 = double_3;
					int_5 = int_6 * int_7;
					if(1)
					{
						double_1 = double_4;
					}
					if(1)
					{
						long_5 = long_4 * long_4;
					}
					if(1)
					{
						int_1 = int_8 + int_6;
					}
					if(1)
					{
						char_2 = char_1 + char_2;
					}
				}
			}
			char controller_22[2];
			fgets(controller_22 ,2 ,stdin);
			if( strcmp( controller_22, "v") < 0)
			{
				if(1)
				{
					double double_6 = 1;
					double double_7 = 1;
					unsigned int unsigned_int_8 = 1;
					unsigned int unsigned_int_9 = 1;
					long long_6 = 1;
					unsigned int unsigned_int_10 = 1;
					short short_4 = 1;
					double double_8 = 1;
					long_4 = long_1 + long_1;
					double_5 = double_3 + double_1;
					float_2 = float_3 * float_5;
					unsigned_int_3 = unsigned_int_1;
					unsigned_int_5 = unsigned_int_7 * unsigned_int_7;
					double_7 = double_2 + double_6;
					unsigned_int_4 = unsigned_int_8 + unsigned_int_9;
					unsigned_int_5 = unsigned_int_8;
					float_5 = float_6 * float_1;
					int_4 = int_8 + int_8;
					float_2 = float_3;
					long_4 = long_1 * long_6;
					unsigned_int_3 = unsigned_int_10;
					short_4 = short_2 + short_2;
					short_4 = short_2 * short_1;
					double_8 = double_1;
				}
			}
		}
	}
	return short_5;
}
char v_zmemcpy( int parameter_1,int parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	int_3 = int_1 * int_2;
	short_2 = short_1 * short_2;
	if(1)
	{
		short_1 = short_2 * short_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		float_1 = float_1 + float_2;
		char_2 = char_1 * char_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
		if(1)
		{
			double double_3 = 1;
			double_3 = double_2 + double_2;
		}
	}
	return char_2;
}
short v_bi_flush( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 + double_2;
	int_2 = int_1 * int_1;
	return short_1;
}
int v__tr_flush_bits()
{
	int int_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "<") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_1;
			float_1 = float_1 + float_2;
		}
	}
	return int_1;
	short_1 = v_bi_flush(float_3);

}
float v_flush_pending( unsigned int parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char_1 = v_zmemcpy(int_1,int_2,float_1);

	double_3 = double_1 * double_2;
	return float_2;
	int_2 = v__tr_flush_bits();

}
int v_deflateStateCheck( unsigned int parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char_1 = char_1;
	double_2 = double_1 * double_1;
	short_1 = short_1;
	long_2 = long_1 * long_2;
	float_2 = float_1 + float_2;
	float_2 = float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		float_1 = float_2 * float_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		int_3 = int_1 * int_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		double_3 = double_1 + double_2;
		short_1 = short_1;
	}
	return int_1;
}
long v_deflate( long parameter_1,int parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	short_1 = v_putShortMSB(long_1,int_1);

	double_1 = double_1 + double_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_3 = 1;
		short short_3 = 1;
		v_adler32(double_1,double_1,short_1);

		double_3 = double_1 * double_2;
		double_4 = double_3 + double_3;
		char_1 = v_deflate_rle(int_2,int_2);

		int_2 = v__tr_align(short_1);

		float_2 = float_1 + float_2;
		int_2 = v_deflateStateCheck(unsigned_int_1);

		int_1 = v__tr_stored_block(int_2,unsigned_int_1,float_3,int_2);

		short_1 = short_1 * short_2;
		float_2 = v_flush_pending(unsigned_int_2);

		double_1 = v_deflate_stored(short_1,int_1);

		char_2 = v_deflate_huff(long_2,int_1);

		char_3 = char_1 * char_3;
		v_crc32(unsigned_int_1,float_1,short_2);

		short_3 = short_1 * short_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return long_3;
	char_1 = v_zmemcpy(int_2,int_3,float_3);

}
float v_gz_comp( float parameter_1,int parameter_2,int uni_para)
{
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float_1 = v_deflateReset(char_1,uni_para);

	short_2 = short_1 * short_1;
	int_2 = int_1 * int_2;
	int_3 = int_2 * int_1;
	short_1 = short_2 * short_1;
	return float_2;
}
double v_gz_zero( float parameter_1,double parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char controller4vul_2292[2];
	fgets(controller4vul_2292 ,2 ,stdin);
	if( strcmp( controller4vul_2292, "l") > 0)
	{
		float_1 = v_gz_comp(float_2,int_1,uni_para);

	}
	return double_1;
}
double v_gz_init( float parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long_1 = v_gz_error(char_1,int_1,double_1);

	float_1 = float_1 * float_1;
	return double_1;
}
double v_gz_write( int parameter_1,int parameter_2,unsigned int parameter_3,int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int int_4 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = v_gz_zero(float_1,double_1,uni_para);

	long_1 = long_1 + long_2;
	char_1 = char_1 * char_1;
	int_2 = int_1 * int_1;
	int_3 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1;
	long_1 = long_2 * long_3;
	double_2 = double_2;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_2 + char_2;
	int_4 = int_1 * int_3;
	int_2 = int_2;
	char_3 = char_1 * char_1;
	double_3 = double_1;
	return double_4;
}
double v_gzwrite( unsigned int parameter_1,double parameter_2,char parameter_3,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = v_gz_write(int_1,int_2,unsigned_int_1,uni_para);

	double_1 = double_1 * double_2;
	short_2 = short_1 * short_1;
	return double_1;
}
int v_write( short parameter_1,char parameter_2,unsigned int parameter_3,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double_1 = v_gzwrite(unsigned_int_1,double_1,char_1,uni_para);

	return int_1;
}
float v_crc32_z( long parameter_1,int parameter_2,long parameter_3)
{
	short short_1 = 1;
	float float_1 = 1;
	short_1 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return float_1;
}
void v_crc32( unsigned int parameter_1,float parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_2;
	float_1 = v_crc32_z(long_1,int_1,long_2);

	long_3 = long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "[&") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	short_2 = short_1 + short_2;
}
float v_out(int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char controller4vul_2291[2];
	fgets(controller4vul_2291 ,2 ,stdin);
	if( strcmp( controller4vul_2291, "P") < 0)
	{
		int_1 = v_write(short_1,char_1,unsigned_int_1,uni_para);

	}
	short_2 = short_2 + short_3;
	int_2 = int_1 + int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int_1 = int_2 + int_1;
		short_1 = short_3 + short_3;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
	}
	return float_1;
}
void v_bits( long parameter_1,int parameter_2,int uni_para)
{
	char char_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller4vul_2296[2];
		fgets(controller4vul_2296 ,2 ,stdin);
		if( strcmp( controller4vul_2296, "g") < 0)
		{
			char_1 = v_int(char_1,uni_para);

		}
	}
}
unsigned int v_inflate( char parameter_1,int parameter_2,int uni_para)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = v_out(uni_para);

	short_2 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	return unsigned_int_1;
}
int v_gz_decomp(int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int_1 = int_1 * int_1;
	float_2 = float_1 * float_2;
	int_1 = int_1 + int_1;
	char controller4vul_2290[3];
	fgets(controller4vul_2290 ,3 ,stdin);
	if( strcmp( controller4vul_2290, "q,") > 0)
	{
		unsigned_int_1 = v_inflate(char_1,int_2,uni_para);

	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3;
	float_1 = float_3;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1 + short_1;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	float_5 = float_4 + float_2;
	unsigned_int_2 = unsigned_int_2;
	long_2 = long_1 + long_1;
	int_4 = int_2 * int_3;
	int_1 = int_5 + int_4;
	int_6 = int_6 * int_7;
	double_1 = double_1 + double_3;
	float_1 = float_4 * float_5;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	int_8 = int_1 * int_4;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
	int_3 = int_4 * int_6;
	unsigned_int_3 = unsigned_int_6 + unsigned_int_7;
	int_8 = int_5 + int_7;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "mZ") > 0)
	{
	}
	return int_7;
}
long v_inflateResetKeep( short parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 + int_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "_O") < 0)
	{
		int int_3 = 1;
		float_1 = v_inflateStateCheck(char_1);

		int_3 = int_1 + int_3;
	}
	return long_1;
}
float v_inflateStateCheck( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int_3 = int_1 + int_2;
	return float_1;
}
float v_inflateReset( float parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
		char char_2 = 1;
		float_1 = v_inflateStateCheck(char_1);

		char_2 = char_1 + char_2;
	}
	long_2 = v_inflateResetKeep(short_1);

	double_2 = double_1 + double_1;
	return float_1;
}
float v_gz_load( double parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	return float_1;
	int_1 = v_read(double_1,double_2,long_1,-1 );

	long_2 = v_gz_error(char_1,int_2,double_3);

}
short v_gz_avail()
{
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		float_1 = v_gz_load(double_1,unsigned_int_1,long_1,int_1);

		double_2 = double_1 * double_1;
	}
	short_1 = short_1 + short_1;
	char_2 = char_1 + char_1;
	return short_1;
}
unsigned int v_gz_look( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_1 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = v_gz_error(char_1,int_1,double_1);

		long_2 = long_2 * long_2;
	}
	return unsigned_int_1;
	short_1 = v_gz_avail();

	float_1 = v_inflateReset(float_2);

}
double v_gz_fetch( char parameter_1,int uni_para)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_6 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	int int_7 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long_1 = long_1 + long_1;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_2;
	int_1 = int_1 * int_1;
	int_2 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	int_3 = int_1 + int_2;
	int_5 = int_4 * int_1;
	char_1 = char_1;
	if(1)
	{
		float_2 = float_1;
	}
	if(1)
	{
		double_1 = double_1;
	}
	short_1 = short_2;
	char controller4vul_2288[3];
	fgets(controller4vul_2288 ,3 ,stdin);
	if( strcmp( controller4vul_2288, "EV") < 0)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char controller4vul_2289[3];
			fgets(controller4vul_2289 ,3 ,stdin);
			if( strcmp( controller4vul_2289, "7.") < 0)
			{
				int_6 = v_gz_decomp(uni_para);

				int_5 = int_1 * int_5;
			}
			double_2 = double_3;
		}
	}
	if(1)
	{
		int_1 = int_3 + int_1;
	}
	int_2 = int_2 + int_5;
	if(1)
	{
		int_6 = int_2 + int_4;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_2 + long_2;
	}
	unsigned_int_4 = unsigned_int_5;
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_1;
			}
			double_3 = double_2 + double_4;
		}
	}
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		double_6 = double_3 * double_5;
	}
	int_7 = int_1 * int_1;
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int_3 = int_5 * int_7;
			if(1)
			{
				char char_2 = 1;
				char_3 = char_2 + char_1;
			}
			char_4 = char_3 + char_3;
			if(1)
			{
				short_3 = short_3;
			}
			int_7 = int_5 * int_2;
			if(1)
			{
				if(1)
				{
					double double_7 = 1;
					double_4 = double_1 + double_7;
				}
				if(1)
				{
					int_2 = int_1;
				}
				if(1)
				{
					short_5 = short_4 * short_2;
				}
			}
			if(1)
			{
				double double_8 = 1;
				double_4 = double_1 * double_8;
			}
		}
	}
	if(1)
	{
		short_3 = short_3;
	}
	float_2 = float_1 * float_2;
	if(1)
	{
		float float_3 = 1;
		unsigned_int_1 = unsigned_int_4;
		short_3 = short_2 + short_3;
		int_3 = int_5 * int_2;
		float_3 = float_1 * float_1;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			long long_4 = 1;
			long long_5 = 1;
			float float_4 = 1;
			long_5 = long_4 + long_5;
			float_4 = float_1 + float_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			}
		}
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			int int_8 = 1;
			int_4 = int_8;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				short_3 = short_4 + short_5;
				if(1)
				{
					int_2 = int_2;
				}
				if(1)
				{
					int int_9 = 1;
					int int_10 = 1;
					int_9 = int_10;
					for(int looper_7=0; looper_7<1;looper_7++)
					{
						if(1)
						{
							unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
						}
						if(1)
						{
							char_3 = char_1 * char_4;
						}
						if(1)
						{
							short_1 = short_2;
						}
					}
					if(1)
					{
						double double_9 = 1;
						double double_10 = 1;
						double_4 = double_9 + double_10;
					}
				}
				if(1)
				{
					char_4 = char_4;
				}
			}
		}
	}
	return double_1;
}
char v_gz_skip( int parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_7 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_2287[2];
	fgets(controller4vul_2287 ,2 ,stdin);
	if( strcmp( controller4vul_2287, "^") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		double_1 = v_gz_fetch(char_1,uni_para);

		float_1 = float_1 + float_2;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		long long_3 = 1;
		double_2 = double_1 * double_2;
		long_1 = long_2 + long_3;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "k") < 0)
	{
	}
	float_4 = float_3 + float_4;
	double_3 = double_3 + double_2;
	double_2 = double_1;
	int_2 = int_1 * int_1;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "Q") < 0)
	{
		long long_4 = 1;
		long long_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long_5 = long_2 + long_4;
		char_1 = char_2 * char_3;
		int_1 = int_2 + int_2;
	}
	double_2 = double_3 * double_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	double_1 = double_4;
	double_6 = double_5 * double_2;
	double_3 = double_7 + double_1;
	int_1 = int_1 * int_2;
	int_1 = int_2 + int_3;
	short_1 = short_1 + short_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		char char_6 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		char_6 = char_4 + char_5;
		short_2 = short_2 * short_2;
	}
	short_1 = short_2 + short_2;
	double_3 = double_6;
	int_3 = int_4 * int_1;
	double_3 = double_6 * double_4;
	short_4 = short_2 * short_3;
	return char_7;
}
short v_gz_read( float parameter_1,int parameter_2,double parameter_3,int uni_para)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long_1 = long_1 + long_1;
	double_3 = double_1 * double_2;
	int_2 = int_1 + int_2;
	char_1 = char_1 * char_2;
	float_3 = float_1 + float_2;
	char controller4vul_2286[3];
	fgets(controller4vul_2286 ,3 ,stdin);
	if( strcmp( controller4vul_2286, "V2") > 0)
	{
		char_3 = v_gz_skip(int_2,int_2,uni_para);

	}
	float_2 = float_1;
	double_4 = double_3 + double_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return short_1;
}
long v_gz_error( char parameter_1,int parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_3 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_4 = float_3 * float_2;
	char_1 = char_1 * char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "7") > 0)
	{
	}
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	return long_1;
}
float v_gzread( char parameter_1,int parameter_2,float parameter_3,int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	double_1 = double_1 + double_1;
	float_3 = float_1 * float_2;
	double_3 = double_2 * double_3;
	char controller4vul_2285[2];
	fgets(controller4vul_2285 ,2 ,stdin);
	if( strcmp( controller4vul_2285, "O") > 0)
	{
		int int_2 = 1;
		short_1 = v_gz_read(float_3,int_1,double_1,uni_para);

		int_1 = int_2 * int_1;
	}
	double_3 = double_3 * double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "}o") < 0)
	{
		short short_2 = 1;
		short_2 = short_2 * short_2;
	}
	char_1 = char_1 * char_1;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_2 + char_2;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "dl") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "!") < 0)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_3 = char_4;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 + short_1;
	}
	return float_4;
}
int v_read( double parameter_1,double parameter_2,long parameter_3,int uni_para)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float_1 = v_gzread(char_1,int_1,float_1,uni_para);

	return int_1;
}
char v_int( char parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char * vul_var;
	double_1 = double_1 + double_1;
	char controller4vul_2297[2];
	fgets(controller4vul_2297 ,2 ,stdin);
	if( strcmp( controller4vul_2297, "B") < 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		char controller4vul_2298[3];
		fgets(controller4vul_2298 ,3 ,stdin);
		if( strcmp( controller4vul_2298, "yL") > 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_1;
			double_1 = double_2 * double_1;
			char controller4vul_2299[3];
			fgets(controller4vul_2299 ,3 ,stdin);
			if( strcmp( controller4vul_2299, "x)") < 0)
			{
				double double_3 = 1;
				double double_4 = 1;
				vul_var=(char*)malloc(20*sizeof(char));
				strcpy(vul_var, "CWE-761");
				if(uni_para == 149)
				{
					vul_var = vul_var + 1;
				}
				free(vul_var);
				double_3 = double_4;
			}
			char controller_1[2];
			fgets(controller_1 ,2 ,stdin);
			if( strcmp( controller_1, "U") == 0)
			{
				short_2 = short_1 + short_1;
			}
		}
		if(1)
		{
			short short_3 = 1;
			short_2 = short_3 + short_1;
		}
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "|Q") < 0)
	{
		double_2 = double_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
}
void v_in(int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 + int_1;
	}
	char controller4vul_2283[2];
	fgets(controller4vul_2283 ,2 ,stdin);
	if( strcmp( controller4vul_2283, "!") > 0)
	{
		double double_3 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char controller4vul_2284[3];
		fgets(controller4vul_2284 ,3 ,stdin);
		if( strcmp( controller4vul_2284, "62") < 0)
		{
			int int_4 = 1;
			int_3 = v_read(double_1,double_2,long_1,uni_para);

			int_2 = int_3 * int_4;
		}
		double_3 = double_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
		float_1 = float_1;
		float_2 = float_2 * float_2;
		double_3 = double_3 * double_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		}
	}
}
int v_def( float parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 * short_1;
	long_1 = long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
		char controller4vul_2282[2];
		fgets(controller4vul_2282 ,2 ,stdin);
		if( strcmp( controller4vul_2282, "S") < 0)
		{
			double double_4 = 1;
			v_in(uni_para);

			double_4 = double_2 * double_4;
		}
	}
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_2;
}
int main()
{
	int uni_para =149;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_5 = 1;
	int int_6 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_3 = 1;
	int int_7 = 1;
	double double_7 = 1;
	short short_5 = 1;
	short short_6 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_8 = 1;
	double double_8 = 1;
	short short_7 = 1;
	char char_5 = 1;
	char char_6 = 1;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	double_3 = double_1 * double_2;
	float_2 = float_1 + float_1;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	double_4 = double_3 + double_1;
	if(1)
	{
		float_1 = float_2 * float_1;
	}
	if(1)
	{
		short_1 = short_2 * short_2;
	}
	float_1 = float_1;
	int_3 = int_1;
	char_3 = char_1 + char_2;
	float_2 = float_3 * float_4;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_4;
	if(1)
	{
		short_1 = short_1;
	}
	double_3 = double_3 + double_5;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_3;
	char_4 = char_4;
	if(1)
	{
		int_4 = int_2 + int_1;
	}
	char controller4vul_2280[2];
	fgets(controller4vul_2280 ,2 ,stdin);
	if( strcmp( controller4vul_2280, "k") < 0)
	{
		short short_4 = 1;
		int_5 = int_2 * int_2;
		char controller4vul_2281[2];
		fgets(controller4vul_2281 ,2 ,stdin);
		if( strcmp( controller4vul_2281, "<") < 0)
		{
			int_3 = v_def(float_5,int_6,int_3,uni_para);

			double_6 = double_3 + double_6;
		}
		double_4 = double_4 * double_5;
		long_2 = long_1 + long_1;
		unsigned_int_7 = unsigned_int_1 + unsigned_int_5;
		short_4 = short_1 * short_3;
	}
	int_7 = int_4 + int_5;
	long_1 = long_1 + long_2;
	short_1 = short_2 + short_3;
	double_1 = double_7 * double_6;
	char_3 = char_4;
	int_7 = int_3 + int_7;
	char_1 = char_4;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "F0") == 0)
	{
		float float_6 = 1;
		float_6 = float_2 + float_6;
	}
	short_5 = short_5 * short_6;
	unsigned_int_7 = unsigned_int_4 + unsigned_int_2;
	char_3 = char_3 * char_1;
	int_1 = int_2;
	long_1 = long_3 + long_4;
	float_3 = float_5;
	unsigned_int_3 = unsigned_int_6 + unsigned_int_4;
	if(1)
	{
		unsigned_int_4 = unsigned_int_6;
	}
	double_5 = double_6 * double_1;
	double_2 = double_7 * double_2;
	int_3 = int_8 + int_1;
	float_2 = float_2;
	int_5 = int_5 * int_8;
	float_2 = float_5 * float_3;
	double_1 = double_2 * double_7;
	double_2 = double_1 * double_8;
	int_1 = int_2;
	if(1)
	{
		short short_8 = 1;
		short_8 = short_7 + short_5;
	}
	double_7 = double_5 + double_8;
	char_5 = char_5 + char_6;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	}
	int_6 = int_4;
	int_6 = int_3 + int_5;
	int_6 = int_3 * int_3;
	unsigned_int_5 = unsigned_int_7 + unsigned_int_3;
	short_2 = short_6 + short_1;
	short_2 = short_7 + short_2;
	float_4 = float_1;
	return int_1;
}

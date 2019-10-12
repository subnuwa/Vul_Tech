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

short v_deflateEnd( short parameter_1);
char v_gztack( char parameter_1,int parameter_2,float parameter_3,int parameter_4);
double v_deflatePrime( double parameter_1,int parameter_2,int parameter_3);
double v_deflateSetDictionary( int parameter_1,double parameter_2,float parameter_3);
long v_gcd( char parameter_1,float parameter_2);
int v_rotate( long parameter_1,char parameter_2,long parameter_3);
unsigned int v_read4();
unsigned int v_inflateEnd( long parameter_1);
char v_fp_70();
float v_updatewindow( float parameter_1,char parameter_2,int parameter_3);
void v_inflate_fast( unsigned int parameter_1,long parameter_2);
void v_inflate_table( short parameter_1,char parameter_2,short parameter_3,double parameter_4,unsigned int parameter_5,int parameter_6,int uni_para);
char v_decode( short parameter_1,int parameter_2);
double v_codes( float parameter_1,long parameter_2,unsigned int parameter_3,int uni_para);
unsigned int v_construct( int parameter_1,short parameter_2,int parameter_3);
void v_fixed( int parameter_1);
double v_fixedtables( short parameter_1);
long v_fp();
void v_lm_init();
char v_init_block( double parameter_1);
long v_bi_reverse( double parameter_1,int parameter_2);
float v_gen_codes( long parameter_1,int parameter_2,float parameter_3);
void v_tr_static_init();
short v__tr_init( char parameter_1);
double v_deflateResetKeep();
char v_deflateReset( char parameter_1);
float v__tr_align( char parameter_1);
float v_deflate_rle( long parameter_1,int parameter_2);
long v_zmemzero( long parameter_1,double parameter_2);
double v_slide_hash( double parameter_1);
void v_long();
float v_fill_window( short parameter_1);
int v_deflate_huff( short parameter_1,int parameter_2);
long v_read_buf( double parameter_1,long parameter_2,int parameter_3);
float v_bi_windup( long parameter_1);
int v__tr_stored_block( unsigned int parameter_1,float parameter_2,long parameter_3,int parameter_4);
void v_deflate_stored( int parameter_1,int parameter_2);
short v_adler32_z( long parameter_1,double parameter_2,double parameter_3);
long v_adler32( char parameter_1,unsigned int parameter_2,short parameter_3);
short v_putShortMSB( short parameter_1,int parameter_2);
int v_zmemcpy( long parameter_1,int parameter_2,int parameter_3);
unsigned int v_bi_flush( float parameter_1);
short v__tr_flush_bits( char parameter_1);
int v_flush_pending();
char v_deflateStateCheck( float parameter_1);
long v_deflate( short parameter_1,int parameter_2);
long v_gz_comp( double parameter_1,int parameter_2);
double v_gz_zero( char parameter_1,char parameter_2);
int v_gz_init( char parameter_1);
int v_gz_write( float parameter_1,long parameter_2,char parameter_3);
int v_gzwrite( float parameter_1,short parameter_2,int parameter_3);
int v_write( double parameter_1,char parameter_2,int parameter_3);
float v_crc32_z( unsigned int parameter_1,double parameter_2,double parameter_3);
int v_crc32( float parameter_1,char parameter_2,unsigned int parameter_3);
unsigned int v_out();
float v_in();
void v_int();
float v_bits( char parameter_1,int parameter_2);
double v_inflate( float parameter_1,int parameter_2,int uni_para);
unsigned int v_gz_decomp( double parameter_1,int uni_para);
double v_inflateResetKeep( double parameter_1);
int v_inflateStateCheck( double parameter_1);
long v_inflateReset( short parameter_1);
void v_gz_load( short parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4);
char v_gz_avail( long parameter_1);
float v_gz_look( long parameter_1);
long v_gz_fetch( float parameter_1);
short v_gz_skip( char parameter_1,unsigned int parameter_2);
void v_gz_read( float parameter_1,short parameter_2,long parameter_3,int uni_para);
double v_gz_error( short parameter_1,int parameter_2,short parameter_3);
char v_gzread( char parameter_1,char parameter_2,float parameter_3,int uni_para);
int v_read( double parameter_1,unsigned int parameter_2,int parameter_3,int uni_para);
char v_readin( long parameter_1);
int v_readmore( short parameter_1);
void v_skip( int parameter_1,char parameter_2);
void v_gzheader( unsigned int parameter_1);
long v_gzscan( char parameter_1,double parameter_2,int parameter_3,int uni_para);
float v_bye( char parameter_1,char parameter_2);
short v_deflateEnd( short parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if(remainder_check(controller_1,100,2))
	{
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		char_1 = v_deflateStateCheck(float_1);

		float_2 = float_2;
		int_1 = int_1 * int_1;
		int_1 = int_2 * int_1;
		long_1 = long_1 + long_1;
	}
	return short_1;
}
char v_gztack( char parameter_1,int parameter_2,float parameter_3,int parameter_4)
{
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	return char_1;
	float_1 = v_in();

	unsigned_int_1 = v_out();

	float_2 = v_bye(char_2,char_2);

	int_1 = v_read(double_1,unsigned_int_1,int_1,-1 );

	int_1 = v_crc32(float_3,char_3,unsigned_int_2);

	long_1 = v_deflate(short_1,int_1);

	int_1 = v_write(double_1,char_1,int_2);

	short_2 = v_deflateEnd(short_2);

}
double v_deflatePrime( double parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	char char_4 = 1;
	float float_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "}2") < 0)
	{
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	float_1 = v_bits(char_1,int_1);

	short_1 = v__tr_flush_bits(char_1);

	char_1 = char_2 + char_3;
	return double_1;
	char_4 = v_deflateStateCheck(float_2);

}
double v_deflateSetDictionary( int parameter_1,double parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	double double_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float_1 = float_2;
	}
	double_3 = double_1 + double_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "4B") < 0)
	{
		short short_1 = 1;
		v_long();

		short_1 = short_1;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "wH") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		long_2 = long_2;
		float_1 = v_fill_window(short_2);

		int_1 = int_2;
		long_1 = v_adler32(char_1,unsigned_int_3,short_2);

		unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_2 = v_deflateStateCheck(float_1);

		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	}
	double_2 = double_3;
	return double_4;
}
long v_gcd( char parameter_1,float parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_1;
	double_1 = double_2;
	float_2 = float_2 + float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_2 = int_1 + int_2;
		double_4 = double_3 * double_2;
		double_1 = double_4 + double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_5 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double_1 = double_3 * double_5;
			short_1 = short_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					int_1 = int_3 + int_1;
				}
			}
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				int int_4 = 1;
				int_2 = int_3 + int_4;
			}
		}
		float_1 = float_2 * float_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_3 * float_2;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	long_2 = long_1 + long_2;
	return long_2;
}
int v_rotate( long parameter_1,char parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	char_1 = char_2;
	long_2 = long_1 * long_1;
	int_2 = int_1 + int_2;
	long_1 = v_gcd(char_1,float_1);

	int_3 = int_1;
	long_3 = long_3;
	int_3 = int_3 * int_4;
	return int_4;
}
unsigned int v_read4()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_2;
	v_long();

	int_3 = int_3;
	double_3 = double_1 + double_2;
	float_3 = float_1 + float_2;
	int_5 = int_4 * int_4;
	return unsigned_int_1;
}
unsigned int v_inflateEnd( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "[q") > 0)
	{
	}
	return unsigned_int_1;
	int_1 = v_inflateStateCheck(double_1);

}
char v_fp_70()
{
	char char_1 = 1;
	return char_1;
}
float v_updatewindow( float parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_1;
	return float_1;
	int_1 = v_zmemcpy(long_1,int_2,int_2);

}
void v_inflate_fast( unsigned int parameter_1,long parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	v_long();

	char_1 = char_1 + char_1;
	double_1 = double_2;
	if(1)
	{
		float float_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float_1 = float_1 + float_1;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		int int_2 = 1;
		if(1)
		{
			int int_1 = 1;
			int int_3 = 1;
			int_1 = int_2;
			int_2 = int_1 * int_3;
		}
		if(1)
		{
			int int_4 = 1;
			int_4 = int_2 + int_2;
			double_1 = double_2 + double_2;
		}
	}
}
void v_inflate_table( short parameter_1,char parameter_2,short parameter_3,double parameter_4,unsigned int parameter_5,int parameter_6,int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char controller4vul_1995[2];
	fgets(controller4vul_1995 ,2 ,stdin);
	if( strcmp( controller4vul_1995, "<") < 0)
	{
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_2 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		double_1 = v_codes(float_1,long_1,unsigned_int_1,uni_para);

		int_1 = int_1 * int_1;
		short_3 = short_1 * short_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		long_1 = long_1 * long_1;
		float_1 = float_2 + float_1;
		if(1)
		{
			int int_3 = 1;
			int_3 = int_1 * int_2;
			long_2 = long_1 * long_1;
		}
		if(1)
		{
			long_2 = long_1;
			short_3 = short_3 + short_2;
		}
		short_3 = short_2;
		if(1)
		{
			int int_4 = 1;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
			int_2 = int_4 + int_5;
			int_2 = int_1 * int_4;
			double_1 = double_1 * double_1;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			long long_3 = 1;
			long long_4 = 1;
			short_1 = short_1;
			char_2 = char_1 + char_1;
			unsigned_int_5 = unsigned_int_6 + unsigned_int_1;
			long_4 = long_3 * long_2;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_7;
		}
		char controller_5[2];
		fgets(controller_5 ,2 ,stdin);
		if( strcmp( controller_5, "K") < 0)
		{
			int int_6 = 1;
			double double_2 = 1;
			int_5 = int_6 * int_5;
			double_2 = double_1;
		}
	}
	if(1)
	{
		if(1)
		{
			long_2 = long_1 + long_2;
		}
		unsigned_int_6 = unsigned_int_7 + unsigned_int_4;
	}
}
char v_decode( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
double v_codes( float parameter_1,long parameter_2,unsigned int parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	if(uni_para == 985)
	{
		vul_var = vul_var + 1;
	}
	free(vul_var);
	double_2 = double_1 + double_1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
unsigned int v_construct( int parameter_1,short parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 + double_2;
	long_2 = long_1 * long_1;
	short_1 = short_1 * short_1;
	return unsigned_int_1;
}
void v_fixed( int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double_1 = v_codes(float_1,long_1,unsigned_int_1,-1 );

	double_4 = double_2 + double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_4 = double_2 + double_1;
	float_2 = float_1 * float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "B/") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_3 = 1;
		char char_5 = 1;
		char_2 = char_1 * char_1;
		char_4 = char_3 + char_3;
		int_1 = int_1 + int_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
		float_4 = float_3 * float_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float_3 = float_2 + float_1;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_4 = 1;
			unsigned_int_3 = v_construct(int_3,short_1,int_3);

			int_3 = int_4 * int_2;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			short_1 = short_1 * short_2;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int int_5 = 1;
			int_2 = int_5;
		}
		unsigned_int_5 = unsigned_int_2 * unsigned_int_2;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			double_1 = double_4 + double_3;
		}
		short_2 = short_3 + short_2;
		char_5 = char_2 + char_1;
	}
}
double v_fixedtables( short parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	float_1 = v_bits(char_1,int_1);

	v_inflate_table(short_1,char_2,short_1,double_1,unsigned_int_1,int_1,-1 );

	double_3 = double_2 * double_2;
	return double_1;
	v_fixed(int_2);

}
long v_fp()
{
	long long_1 = 1;
	return long_1;
}
void v_lm_init()
{
	if(1)
	{
	}
}
char v_init_block( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 + double_2;
	int_1 = int_1 + int_2;
	long_2 = long_1 * long_1;
	short_1 = short_1;
	int_2 = int_1 * int_1;
	return char_1;
}
long v_bi_reverse( double parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	char_1 = char_1 * char_2;
	int_1 = int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "}") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	int_2 = int_1 * int_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	int_1 = int_3 + int_4;
	return long_1;
}
float v_gen_codes( long parameter_1,int parameter_2,float parameter_3)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	return float_1;
	float_1 = v_bits(char_1,int_1);

	long_1 = v_bi_reverse(double_1,int_2);

}
void v_tr_static_init()
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float_1 = v_bits(char_1,int_1);

	float_3 = float_2 * float_1;
	float_2 = v_gen_codes(long_1,int_1,float_2);

	long_2 = v_bi_reverse(double_1,int_1);

}
short v__tr_init( char parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_1;
	v_tr_static_init();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = v_init_block(double_1);

	char_3 = char_2 + char_1;
	unsigned_int_3 = unsigned_int_1;
	return short_1;
}
double v_deflateResetKeep()
{
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_4 = 1;
	long long_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "!}") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		char_1 = v_deflateStateCheck(float_1);

		short_1 = short_1;
		unsigned_int_1 = unsigned_int_2;
	}
	short_1 = v__tr_init(char_2);

	float_1 = float_2 + float_3;
	return double_1;
	int_1 = v_crc32(float_4,char_1,unsigned_int_2);

	long_1 = v_adler32(char_3,unsigned_int_3,short_1);

}
char v_deflateReset( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = v_deflateResetKeep();

	short_2 = short_1 * short_2;
	return char_1;
	v_lm_init();

}
float v__tr_align( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int_1 = int_1;
	int_1 = int_2 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_2 = v_bi_flush(float_1);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	float_2 = float_2 + float_3;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	return float_1;
}
float v_deflate_rle( long parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char_3 = char_1 + char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "9:") < 0)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "w") > 0)
	{
	}
	return float_1;
	float_1 = v_fill_window(short_1);

}
long v_zmemzero( long parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	float float_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_10 = 1;
	char_2 = char_1 + char_1;
	int_2 = int_1 * int_2;
	int_2 = int_3 * int_1;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_4 = char_1 * char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		}
	}
	long_1 = long_1 + long_2;
	short_2 = short_1 * short_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
	}
	long_1 = long_3;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double_2 = double_1 + double_2;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	char_4 = char_4 * char_4;
	double_3 = double_2 * double_3;
	int_4 = int_3 * int_4;
	short_2 = short_2 * short_2;
	float_1 = float_1 * float_2;
	int_5 = int_1 * int_2;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
	short_2 = short_2 * short_2;
	unsigned_int_6 = unsigned_int_5;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		unsigned int unsigned_int_8 = 1;
		char char_5 = 1;
		char char_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		double double_6 = 1;
		int int_9 = 1;
		double_3 = double_1 + double_2;
		float_3 = float_1 + float_2;
		if(1)
		{
			unsigned_int_6 = unsigned_int_4;
		}
		if(1)
		{
			int_4 = int_2 + int_5;
		}
		if(1)
		{
			short_1 = short_3 * short_2;
		}
		if(1)
		{
			unsigned_int_7 = unsigned_int_7 * unsigned_int_3;
			if(1)
			{
				double_3 = double_2;
			}
		}
		if(1)
		{
			int_4 = int_5;
		}
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			int int_6 = 1;
			double double_5 = 1;
			char_2 = char_2 + char_3;
			int_4 = int_4 + int_3;
			double_2 = double_1 * double_3;
			short_2 = short_1 + short_1;
			unsigned_int_2 = unsigned_int_8 + unsigned_int_5;
			long_2 = long_2 * long_3;
			unsigned_int_7 = unsigned_int_5 * unsigned_int_7;
			int_6 = int_4 * int_5;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_6;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
			double_1 = double_4 + double_5;
			char_5 = char_6;
			double_3 = double_5 + double_1;
			char_1 = char_2;
			int_4 = int_7 + int_8;
			unsigned_int_7 = unsigned_int_6;
			double_5 = double_3 * double_4;
			char_4 = char_2 + char_5;
		}
		unsigned_int_7 = unsigned_int_9 + unsigned_int_1;
		double_3 = double_6;
		if(1)
		{
			double_6 = double_1;
			int_7 = int_2 + int_9;
		}
		if(1)
		{
			long long_4 = 1;
			long_1 = long_2 * long_4;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_4 + unsigned_int_6;
			long_3 = long_3 * long_2;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					float_1 = float_2 + float_2;
				}
			}
			if(1)
			{
				if(1)
				{
					double double_7 = 1;
					double_3 = double_6 * double_7;
				}
			}
		}
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			unsigned_int_6 = unsigned_int_8 + unsigned_int_4;
		}
		float_3 = float_1;
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			char_6 = char_5 + char_3;
		}
		int_8 = int_9 * int_9;
	}
	short_4 = short_3 + short_3;
	unsigned_int_3 = unsigned_int_10 * unsigned_int_9;
	if(1)
	{
		float_1 = float_3 * float_1;
	}
	if(1)
	{
		double_2 = double_4 + double_4;
	}
	if(1)
	{
		short_4 = short_1 + short_3;
	}
	if(1)
	{
		short_4 = short_2 + short_4;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_3 + unsigned_int_7;
	}
	return long_3;
}
double v_slide_hash( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_2 = 1;
		short_2 = short_1 * short_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	int_2 = int_1 + int_1;
	double_3 = double_1 + double_2;
	double_5 = double_4 * double_4;
	return double_5;
}
void v_long()
{
	if(1)
	{
	}
}
float v_fill_window( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double_1 = v_slide_hash(double_2);

	long_1 = v_read_buf(double_2,long_1,int_1);

	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		long_1 = v_zmemzero(long_1,double_2);

		unsigned_int_1 = unsigned_int_1;
	}
	return float_1;
	int_2 = v_zmemcpy(long_1,int_2,int_2);

	v_long();

}
int v_deflate_huff( short parameter_1,int parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float_1 = v_fill_window(short_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	return int_1;
}
long v_read_buf( double parameter_1,long parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_4 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	char_1 = char_1 * char_2;
	int_1 = int_1 + int_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, ")1") > 0)
	{
	}
	int_1 = v_crc32(float_1,char_3,unsigned_int_1);

	long_1 = long_1;
	char_4 = char_3;
	int_1 = v_zmemcpy(long_2,int_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_2;
	int_1 = int_2;
	char_3 = char_5 * char_5;
	double_4 = double_1 * double_3;
	if(1)
	{
	}
	return long_2;
	long_3 = v_adler32(char_2,unsigned_int_1,short_1);

}
float v_bi_windup( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char_3 = char_1 + char_2;
	char_3 = char_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "^:") < 0)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_1 + long_2;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_4 = long_3 + long_4;
	char_4 = char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	int_3 = int_1 + int_2;
	return float_1;
}
int v__tr_stored_block( unsigned int parameter_1,float parameter_2,long parameter_3,int parameter_4)
{
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	return int_1;
	float_1 = v_bi_windup(long_1);

	int_2 = v_zmemcpy(long_2,int_2,int_1);

}
void v_deflate_stored( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	double double_5 = 1;
	double_2 = double_1 * double_2;
	int_1 = v_zmemcpy(long_1,int_1,int_2);

	float_1 = float_1 * float_1;
	int_1 = v__tr_stored_block(unsigned_int_1,float_1,long_1,int_1);

	long_2 = v_read_buf(double_1,long_3,int_1);

	double_1 = double_3 + double_4;
	float_2 = float_2 + float_3;
	int_3 = v_flush_pending();

	long_3 = long_4;
	float_1 = float_1 * float_4;
	double_1 = double_4;
	double_3 = double_2 * double_5;
}
short v_adler32_z( long parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double_3 = double_1 + double_2;
	return short_1;
}
long v_adler32( char parameter_1,unsigned int parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	short_1 = v_adler32_z(long_1,double_1,double_2);

	double_3 = double_2 + double_2;
	float_2 = float_1 * float_2;
	return long_1;
}
short v_putShortMSB( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	char_1 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
	double_2 = double_1 * double_2;
	return short_2;
}
int v_zmemcpy( long parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_2;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	int_1 = int_2 * int_3;
	return int_1;
}
unsigned int v_bi_flush( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_3 = char_1 + char_2;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_2;
}
short v__tr_flush_bits( char parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
		short_1 = short_1 * short_2;
	}
	long_2 = long_1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = v_bi_flush(float_1);

	short_3 = short_2 + short_1;
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "O4") > 0)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_2 + float_3;
	}
	if(1)
	{
		short_2 = short_1 + short_2;
	}
	return short_4;
}
int v_flush_pending()
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int_1 = v_zmemcpy(long_1,int_2,int_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = v__tr_flush_bits(char_1);

	double_1 = double_1 + double_1;
	return int_3;
}
char v_deflateStateCheck( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_3 = float_1 * float_2;
	int_2 = int_1 + int_1;
	int_2 = int_1 + int_3;
	double_3 = double_1 + double_2;
	double_2 = double_1 * double_3;
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_3;
	char_1 = char_1 * char_1;
	long_3 = long_1 + long_2;
	return char_2;
}
long v_deflate( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	short short_2 = 1;
	long long_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		long_1 = v_adler32(char_1,unsigned_int_1,short_1);

		int_1 = v_zmemcpy(long_1,int_2,int_3);

		v_deflate_stored(int_2,int_1);

		float_1 = v_deflate_rle(long_1,int_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	return long_1;
	char_1 = v_deflateStateCheck(float_1);

	int_1 = v_flush_pending();

	short_1 = v_putShortMSB(short_1,int_1);

	int_4 = v_crc32(float_2,char_1,unsigned_int_3);

	int_5 = v_deflate_huff(short_2,int_3);

	float_1 = v__tr_align(char_1);

	int_4 = v__tr_stored_block(unsigned_int_1,float_2,long_2,int_4);

}
long v_gz_comp( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
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
	}
	if(1)
	{
	}
	return long_1;
	int_1 = v_gz_init(char_1);

	int_1 = v_write(double_1,char_1,int_1);

	double_1 = v_gz_error(short_1,int_1,short_1);

	v_int();

	long_1 = v_deflate(short_2,int_2);

	char_1 = v_deflateReset(char_1);

}
double v_gz_zero( char parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float_3 = float_1 * float_2;
	return double_1;
	long_1 = v_gz_comp(double_2,int_1);

}
int v_gz_init( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1 + double_1;
	long_2 = long_1 * long_1;
	return int_3;
	double_1 = v_gz_error(short_1,int_2,short_2);

}
int v_gz_write( float parameter_1,long parameter_2,char parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	double_1 = v_gz_zero(char_1,char_2);

	double_1 = double_2 + double_2;
	double_1 = double_2 + double_1;
	int_2 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_3 = v_gz_init(char_2);

		float_1 = float_1;
		short_1 = short_2;
	}
	double_3 = double_3;
	int_3 = int_1 * int_2;
	return int_1;
	long_1 = v_gz_comp(double_1,int_4);

}
int v_gzwrite( float parameter_1,short parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = v_gz_error(short_3,int_1,short_3);

		int_2 = v_gz_write(float_1,long_1,char_1);

		double_3 = double_1 * double_2;
	}
	return int_2;
}
int v_write( double parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	return int_1;
	int_1 = v_gzwrite(float_1,short_1,int_1);

	long_1 = v_fp();

}
float v_crc32_z( unsigned int parameter_1,double parameter_2,double parameter_3)
{
	float float_1 = 1;
	return float_1;
}
int v_crc32( float parameter_1,char parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float_1 = v_crc32_z(unsigned_int_1,double_1,double_2);

	int_2 = int_1 * int_1;
	int_1 = int_1 + int_1;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_2 = float_2 * float_3;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 * int_1;
	}
	short_2 = short_1 * short_1;
	int_1 = int_1;
	return int_2;
}
unsigned int v_out()
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	int_1 = v_crc32(float_1,char_1,unsigned_int_1);

	int_4 = int_2 + int_3;
	return unsigned_int_2;
	v_int();

	int_3 = v_write(double_1,char_2,int_3);

}
float v_in()
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	return float_1;
	v_int();

	int_1 = v_read(double_1,unsigned_int_1,int_2,-1 );

}
void v_int()
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	float_1 = float_2;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	short_1 = short_1 * short_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "+w") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		long_1 = long_2;
		float_4 = float_3 + float_1;
	}
}
float v_bits( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double_3 = double_1 + double_2;
	v_int();

	char_2 = char_1 * char_1;
	int_1 = int_2;
	double_4 = double_2 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "/Q") < 0)
	{
	}
	long_2 = long_1 * long_2;
	return float_1;
}
double v_inflate( float parameter_1,int parameter_2,int uni_para)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char controller4vul_1993[3];
	fgets(controller4vul_1993 ,3 ,stdin);
	if( strcmp( controller4vul_1993, "-$") < 0)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char controller4vul_1994[3];
			fgets(controller4vul_1994 ,3 ,stdin);
			if( strcmp( controller4vul_1994, "<8") > 0)
			{
				short short_2 = 1;
				v_inflate_table(short_1,char_1,short_1,double_1,unsigned_int_1,int_1,uni_para);

				short_2 = short_2 * short_1;
			}
		}
		int_2 = int_1 * int_2;
	}
	int_2 = int_1 * int_1;
	return double_2;
}
unsigned int v_gz_decomp( double parameter_1,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_2 = long_1 * long_2;
	float_2 = float_1 * float_2;
	char controller4vul_1992[2];
	fgets(controller4vul_1992 ,2 ,stdin);
	if( strcmp( controller4vul_1992, "$") > 0)
	{
		double_1 = v_inflate(float_2,int_1,uni_para);

	}
	int_4 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1;
	return unsigned_int_3;
}
double v_inflateResetKeep( double parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int_1 = v_inflateStateCheck(double_1);

	float_1 = float_1 * float_1;
	char_1 = char_2;
	return double_2;
}
int v_inflateStateCheck( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long_2 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		long_3 = long_3 * long_3;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "E") > 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_2;
		}
	}
	return int_1;
}
long v_inflateReset( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_1 = int_1 * int_2;
	int_3 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1 * double_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_1 = 1;
			long long_2 = 1;
			long long_4 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int_2 = v_inflateStateCheck(double_1);

			long_1 = long_1 + long_1;
			long_4 = long_2 * long_3;
			char controller_1[3];
			fgets(controller_1 ,3 ,stdin);
			if( strcmp( controller_1, "fD") > 0)
			{
				int_4 = int_3 + int_1;
			}
			int_5 = int_4 + int_3;
			double_2 = v_inflateResetKeep(double_3);

			int_5 = int_4 + int_4;
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				double double_4 = 1;
				double_3 = double_1 + double_2;
				float_2 = float_1 + float_1;
				double_3 = double_3 * double_4;
			}
		}
	}
	return long_3;
}
void v_gz_load( short parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	long_2 = long_1 + long_1;
	int_1 = int_1 * int_2;
	double_1 = v_gz_error(short_1,int_2,short_1);

	int_2 = int_2 + int_2;
	double_2 = double_1 + double_2;
	int_2 = v_read(double_3,unsigned_int_1,int_3,-1 );

}
char v_gz_avail( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "jy") > 0)
	{
	}
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	return char_1;
	v_gz_load(short_1,unsigned_int_2,float_1,char_2);

}
float v_gz_look( long parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	if(1)
	{
		char_1 = v_gz_avail(long_1);

		long_1 = long_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = v_gz_error(short_1,int_1,short_2);

		double_2 = double_1 + double_1;
	}
	long_1 = long_2 + long_1;
	return float_1;
	long_2 = v_inflateReset(short_3);

}
long v_gz_fetch( float parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	return long_1;
	float_1 = v_gz_look(long_1);

	v_gz_load(short_1,unsigned_int_1,float_2,char_1);

	unsigned_int_2 = v_gz_decomp(double_1,-1 );

}
short v_gz_skip( char parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1 * char_1;
	long_1 = v_gz_fetch(float_1);

	double_3 = double_1 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "`^") == 0)
	{
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		float_3 = float_2 * float_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	short_3 = short_1 + short_2;
	char_2 = char_2 + char_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	return short_3;
}
void v_gz_read( float parameter_1,short parameter_2,long parameter_3,int uni_para)
{
	int int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1 + int_1;
	char controller4vul_1990[3];
	fgets(controller4vul_1990 ,3 ,stdin);
	if( strcmp( controller4vul_1990, "CX") > 0)
	{
		char char_1 = 1;
		char_2 = char_1 + char_1;
		char controller4vul_1991[2];
		fgets(controller4vul_1991 ,2 ,stdin);
		if( strcmp( controller4vul_1991, "E") > 0)
		{
			unsigned_int_1 = v_gz_decomp(double_1,uni_para);

			float_2 = float_1 * float_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		}
	}
	if(1)
	{
		int int_2 = 1;
		float_2 = float_1 + float_2;
		if(1)
		{
			double double_2 = 1;
			int_2 = int_1 * int_1;
			double_2 = double_2 + double_3;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_2;
		}
		if(1)
		{
			int_2 = int_1 * int_1;
		}
		if(1)
		{
			float_1 = float_1 + float_2;
		}
	}
	char controller_7[3];
	fgets(controller_7 ,3 ,stdin);
	if( strcmp( controller_7, "+W") < 0)
	{
		double double_4 = 1;
		double_4 = double_3 * double_3;
		unsigned_int_3 = unsigned_int_2;
	}
	char_3 = char_3 + char_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
}
double v_gz_error( short parameter_1,int parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "t") < 0)
	{
	}
	float_2 = float_3;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "<") > 0)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	long_1 = long_1;
	return double_1;
}
char v_gzread( char parameter_1,char parameter_2,float parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	char char_6 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_1987[2];
	fgets(controller4vul_1987 ,2 ,stdin);
	if( strcmp( controller4vul_1987, "6") < 0)
	{
		char controller4vul_1988[2];
		fgets(controller4vul_1988 ,2 ,stdin);
		if( strcmp( controller4vul_1988, "n") > 0)
		{
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double_1 = double_1 + double_1;
			int_2 = int_1 * int_1;
			char controller4vul_1989[3];
			fgets(controller4vul_1989 ,3 ,stdin);
			if( strcmp( controller4vul_1989, "D2") < 0)
			{
				v_gz_read(float_1,short_1,long_1,uni_para);

				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			}
			if(1)
			{
				char_1 = char_1 * char_1;
			}
		}
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "5q") == 0)
		{
			long_2 = long_1 + long_1;
		}
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2 * long_3;
	}
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "p") < 0)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_2 * char_2;
	}
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "B") > 0)
	{
		char char_4 = 1;
		char char_5 = 1;
		char_1 = char_4 + char_5;
	}
	return char_6;
}
int v_read( double parameter_1,unsigned int parameter_2,int parameter_3,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char_1 = v_gzread(char_2,char_3,float_1,uni_para);

	return int_1;
}
char v_readin( long parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	float_1 = v_bye(char_1,char_2);

	short_1 = short_2;
	int_1 = v_read(double_1,unsigned_int_1,int_2,-1 );

	int_4 = int_3 * int_2;
	if(1)
	{
		float float_3 = 1;
		float_1 = float_2 + float_3;
	}
	double_2 = double_1 * double_2;
	float_2 = float_2 * float_1;
	return char_3;
}
int v_readmore( short parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "aT") < 0)
	{
		float float_2 = 1;
		char_1 = v_readin(long_1);

		float_1 = v_bye(char_1,char_2);

		float_2 = float_2 * float_2;
	}
	return int_1;
}
void v_skip( int parameter_1,char parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float_1 = float_1 + float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "sJ") > 0)
	{
		double double_1 = 1;
		short short_2 = 1;
		double_1 = double_1 * double_1;
		char_2 = char_1 * char_2;
		if(1)
		{
			if(1)
			{
				int int_2 = 1;
				int_2 = int_1 + int_2;
			}
			short_2 = short_1 * short_1;
		}
		int_1 = int_3;
		if(1)
		{
			short_2 = short_2 * short_1;
		}
	}
	long_2 = long_1 + long_1;
	float_2 = v_bye(char_1,char_2);

	int_1 = int_3;
	int_3 = v_readmore(short_1);

}
void v_gzheader( unsigned int parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "d") > 0)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			v_skip(int_1,char_1);

			int_1 = int_2 * int_1;
			int_4 = int_3 + int_4;
		}
	}
	float_2 = v_bye(char_2,char_1);

}
long v_gzscan( char parameter_1,double parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_2 = double_1 + double_1;
		float_1 = float_1 + float_2;
		char controller4vul_1984[3];
		fgets(controller4vul_1984 ,3 ,stdin);
		if( strcmp( controller4vul_1984, "oO") < 0)
		{
			char controller4vul_1985[3];
			fgets(controller4vul_1985 ,3 ,stdin);
			if( strcmp( controller4vul_1985, "34") > 0)
			{
				long_1 = long_1 * long_1;
				char controller4vul_1986[2];
				fgets(controller4vul_1986 ,2 ,stdin);
				if( strcmp( controller4vul_1986, "&") < 0)
				{
					int_1 = v_read(double_1,unsigned_int_1,int_1,uni_para);

				}
				if(1)
				{
					unsigned int unsigned_int_2 = 1;
					unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
				}
			}
			if(1)
			{
				double double_3 = 1;
				double_3 = double_1 * double_2;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		}
	}
	return long_1;
}
float v_bye( char parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long_3 = long_1 * long_2;
	double_2 = double_1 + double_1;
	return float_1;
}
int main()
{
	int uni_para =985;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int_1 = int_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_1 = double_1;
		}
		int_2 = int_1 + int_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	char controller4vul_1981[2];
	fgets(controller4vul_1981 ,2 ,stdin);
	if( strcmp( controller4vul_1981, "`") < 0)
	{
		double double_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_5 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short_2 = short_2 * short_2;
		double_2 = double_1 + double_1;
		char_3 = char_1 + char_2;
		char controller4vul_1982[2];
		fgets(controller4vul_1982 ,2 ,stdin);
		if( strcmp( controller4vul_1982, "[") < 0)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
			char controller4vul_1983[2];
			fgets(controller4vul_1983 ,2 ,stdin);
			if( strcmp( controller4vul_1983, "y") < 0)
			{
				char char_4 = 1;
				long_1 = v_gzscan(char_1,double_1,int_1,uni_para);

				char_1 = char_1 * char_3;
				char_4 = char_2 * char_3;
			}
			if(1)
			{
			}
		}
		char_1 = char_5;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_3 = 1;
			short_2 = short_1 + short_3;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			short_2 = short_1 + short_2;
			if(1)
			{
				int_3 = int_2 + int_2;
			}
			char controller_3[3];
			fgets(controller_3 ,3 ,stdin);
			if( strcmp( controller_3, "5c") < 0)
			{
				int_2 = int_3;
				if(1)
				{
					unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
				}
			}
			if(1)
			{
				unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
			}
		}
		double_2 = double_3 + double_1;
		float_2 = float_1 + float_1;
		float_3 = float_2 + float_1;
	}
	if(1)
	{
	}
	return int_1;
}

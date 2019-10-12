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

float v_tlog_pkt_pos_is_in( unsigned int parameter_1,int parameter_2);
char v_tlog_pkt_pos_is_past( short parameter_1,char parameter_2);
float v_tlog_pkt_pos_is_reachable( float parameter_1,short parameter_2);
long v_tlog_pkt_pos_is_compatible( unsigned int parameter_1,double parameter_2);
unsigned int v_tlog_pkt_pos_is_valid( unsigned int parameter_1);
void v_tlog_pkt_pos_move( double parameter_1,long parameter_2,int parameter_3);
void v_tlog_timespec_cap_add( double parameter_1,char parameter_2,short parameter_3);
void v_tlog_pkt_init( int parameter_1);
void v_tlog_pkt_cleanup( unsigned int parameter_1);
unsigned int v_tlog_source_loc_fmt( double parameter_1,long parameter_2);
void v_tlog_timespec_sub( unsigned int parameter_1,double parameter_2,char parameter_3);
short v_tlog_source_read( short parameter_1,char parameter_2);
long v_tlog_source_loc_get( int parameter_1);
unsigned int v_tlog_timespec_is_zero( unsigned int parameter_1);
void v_tlog_pkt_type_is_valid( double parameter_1);
short v_tlog_pkt_is_valid( long parameter_1);
unsigned int v_tlog_pkt_is_void();
void v_tlog_timespec_fp_div( float parameter_1,float parameter_2,char parameter_3);
void v_tlog_timespec_fp_mul( int parameter_1,long parameter_2,int parameter_3);
void v_tlog_timespec_cmp( long parameter_1,double parameter_2);
void v_tlog_timestr_parser_reset( double parameter_1);
char v_tlog_play_run_read_input( int parameter_1,long parameter_2);
unsigned int v_tlog_play_run( unsigned int parameter_1,int parameter_2);
int v_tlog_grc_to( unsigned int parameter_1,float parameter_2);
unsigned int v_tlog_grc_strerror( short parameter_1);
int v_tlog_errs_replace_with_nomem();
void v_tlog_errs_pushs( float parameter_1,unsigned int parameter_2);
short v_tlog_grc_range_is_valid( int parameter_1);
unsigned int v_tlog_grc_is( short parameter_1,unsigned int parameter_2);
void v_tlog_grc_is_valid( char parameter_1);
void v_tlog_errs_pushc( char parameter_1,double parameter_2);
char v_tlog_play_cleanup( int parameter_1);
long v_tlog_play_io_sighandler( int parameter_1);
double v_tlog_play_exit_sighandler( int parameter_1);
void v_tlog_source_destroy( float parameter_1);
char v_tlog_source_is_valid();
long v_tlog_source_type_is_valid();
float v_tlog_source_create( unsigned int parameter_1,float parameter_2,short parameter_3);
char v_tlog_json_source_params_is_valid( short parameter_1);
unsigned int v_tlog_json_source_create( int parameter_1,double parameter_2);
long v_tlog_fd_json_reader_create( short parameter_1,int parameter_2,short parameter_3,double parameter_4);
int v_tlog_play_create_file_json_reader( long parameter_1,long parameter_2,short parameter_3);
void v_tlog_json_reader_destroy( char parameter_1);
double v_tlog_json_reader_is_valid( float parameter_1);
double v_tlog_json_reader_type_is_valid( float parameter_1);
char v_tlog_json_reader_create( short parameter_1,long parameter_2,int parameter_3);
long v_tlog_es_json_reader_create( long parameter_1,char parameter_2,unsigned int parameter_3,long parameter_4);
unsigned int v_tlog_es_json_reader_base_url_is_valid( short parameter_1);
int v_tlog_play_create_es_json_reader( float parameter_1,float parameter_2,short parameter_3);
float v_tlog_play_create_json_reader( short parameter_1,double parameter_2,short parameter_3,int uni_para);
float v_tlog_play_create_log_source( short parameter_1,long parameter_2,double parameter_3,int uni_para);
short v_tlog_timestr_parser_yield( float parameter_1,unsigned int parameter_2);
short v_tlog_timestr_parser_is_valid( float parameter_1);
long v_tlog_timestr_parser_feed( char parameter_1,char parameter_2);
unsigned int v_tlog_timestr_to_timespec( long parameter_1,int parameter_2);
long v_tlog_timespec_is_valid( unsigned int parameter_1);
long v_tlog_timespec_from_fp( double parameter_1,double parameter_2);
char v_tlog_play_init( int parameter_1,float parameter_2,int uni_para);
void v_tlog_errs_destroy();
int v_tlog_errs_print( int parameter_1,int parameter_2);
void v_tlog_play( int parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4,int uni_para);
void v_tlog_errs_pushf( char parameter_1,unsigned int parameter_2,char parameter_3);
void v_tlog_play_conf_cmd_load( double parameter_1,char parameter_2,char parameter_3,int parameter_4,char parameter_5);
int v_tlog_json_overlay( char parameter_1,long parameter_2,long parameter_3);
int v_tlog_play_conf_validate( short parameter_1,int parameter_2,char parameter_3);
short v_tlog_json_object_from_file( float parameter_1,long parameter_2);
int v_tlog_play_conf_file_load( long parameter_1,double parameter_2,short parameter_3);
unsigned int v_tlog_build_or_inst_path( char parameter_1,long parameter_2,float parameter_3,double parameter_4);
unsigned int v_tlog_play_conf_load( unsigned int parameter_1,char parameter_2,char parameter_3,int parameter_4,char parameter_5);
float v_tlog_pkt_pos_is_in( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = v_tlog_pkt_is_valid(long_1);

	char_1 = char_2;
	long_1 = v_tlog_pkt_pos_is_compatible(unsigned_int_1,double_1);

	float_1 = float_1 + float_1;
	long_2 = long_2 + long_1;
	return float_1;
	unsigned_int_2 = v_tlog_pkt_pos_is_valid(unsigned_int_3);

}
char v_tlog_pkt_pos_is_past( short parameter_1,char parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long_1 = v_tlog_pkt_pos_is_compatible(unsigned_int_1,double_1);

	char_2 = char_1 * char_1;
	float_1 = v_tlog_pkt_pos_is_in(unsigned_int_2,int_1);

	float_2 = float_1;
	short_1 = short_1 * short_2;
	return char_3;
	unsigned_int_2 = v_tlog_pkt_pos_is_valid(unsigned_int_2);

	short_3 = v_tlog_pkt_is_valid(long_2);

}
float v_tlog_pkt_pos_is_reachable( float parameter_1,short parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char_1 = char_1 + char_1;
	short_1 = v_tlog_pkt_is_valid(long_1);

	double_1 = double_1 + double_2;
	unsigned_int_1 = v_tlog_pkt_pos_is_valid(unsigned_int_1);

	long_2 = v_tlog_pkt_pos_is_compatible(unsigned_int_1,double_2);

	int_1 = int_1 * int_1;
	return float_1;
}
long v_tlog_pkt_pos_is_compatible( unsigned int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = v_tlog_pkt_pos_is_valid(unsigned_int_3);

	short_1 = v_tlog_pkt_is_valid(long_1);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	return long_2;
}
unsigned int v_tlog_pkt_pos_is_valid( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "T") < 0)
	{
	}
	return unsigned_int_1;
	v_tlog_pkt_type_is_valid(double_1);

}
void v_tlog_pkt_pos_move( double parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	long long_2 = 1;
	int_1 = int_1 * int_2;
	double_2 = double_1 * double_1;
	int_1 = int_1;
	short_2 = short_1 + short_2;
	char_2 = char_1 * char_1;
	if(1)
	{
		double_2 = double_3 + double_1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		double double_4 = 1;
		long_1 = v_tlog_pkt_pos_is_compatible(unsigned_int_1,double_3);

		double_4 = double_4 * double_2;
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3 + int_3;
		float_2 = v_tlog_pkt_pos_is_reachable(float_1,short_2);

		int_3 = int_3;
	}
	if(1)
	{
		float_2 = float_1;
		unsigned_int_1 = v_tlog_pkt_pos_is_valid(unsigned_int_1);

		int_4 = int_5;
	}
	int_4 = int_1 + int_5;
	float_3 = float_3 + float_1;
	short_2 = v_tlog_pkt_is_valid(long_2);

}
void v_tlog_timespec_cap_add( double parameter_1,char parameter_2,short parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	double_1 = double_1;
	char_2 = char_1 * char_1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_1;
	if(1)
	{
		int_2 = int_1 * int_2;
		int_1 = int_2;
	}
	int_3 = int_2 + int_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			if(1)
			{
				char char_3 = 1;
				char char_4 = 1;
				char_2 = char_1 + char_2;
				char_4 = char_2 * char_3;
			}
			long_3 = v_tlog_timespec_is_valid(unsigned_int_1);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
			short_1 = short_2;
		}
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
				long_3 = long_2 + long_3;
			}
			int_2 = int_1 + int_3;
			float_1 = float_1;
		}
	}
	if(1)
	{
		double_2 = double_1 * double_2;
		float_3 = float_2 + float_1;
	}
	if(1)
	{
		int_1 = int_2 * int_3;
		float_1 = float_2 + float_3;
	}
	unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
	double_3 = double_2;
}
void v_tlog_pkt_init( int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_1 + double_2;
	char_1 = char_1 * char_1;
	short_1 = v_tlog_pkt_is_valid(long_1);

	unsigned_int_1 = v_tlog_pkt_is_void();

	float_1 = float_1 * float_1;
}
void v_tlog_pkt_cleanup( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_4 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "#,") > 0)
	{
		double_1 = double_1 * double_1;
	}
	short_3 = short_1 + short_2;
	double_1 = double_3 + double_3;
	char_2 = char_1 * char_1;
	v_tlog_pkt_init(int_1);

	short_3 = short_4 + short_4;
	short_3 = v_tlog_pkt_is_valid(long_1);

}
unsigned int v_tlog_source_loc_fmt( double parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "t") < 0)
	{
		long long_3 = 1;
		int int_1 = 1;
		long_2 = long_3 + long_1;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
	}
	return unsigned_int_1;
	char_1 = v_tlog_source_is_valid();

}
void v_tlog_timespec_sub( unsigned int parameter_1,double parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	long long_4 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	short_1 = short_1;
	float_1 = float_1 * float_2;
	long_2 = long_1 * long_1;
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
			long_3 = long_3 + long_1;
		}
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "&") < 0)
	{
		if(1)
		{
			int int_2 = 1;
			short short_2 = 1;
			int_3 = int_2 * int_3;
			short_2 = short_1 + short_1;
		}
	}
	if(1)
	{
		long long_5 = 1;
		long_4 = v_tlog_timespec_is_valid(unsigned_int_3);

		long_5 = long_3 + long_1;
		long_4 = long_1 + long_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_4 = 1;
		char_3 = char_1 * char_2;
		int_3 = int_3 * int_4;
	}
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_3;
}
short v_tlog_source_read( short parameter_1,char parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	double_1 = double_1 * double_1;
	char_2 = char_1 * char_1;
	double_2 = double_2 * double_1;
	v_tlog_timespec_sub(unsigned_int_1,double_3,char_3);

	double_5 = double_4 + double_4;
	float_1 = float_1 + float_1;
	unsigned_int_2 = v_tlog_pkt_is_void();

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	long_1 = long_1 + long_2;
	int_2 = int_1 + int_1;
	if(1)
	{
		float float_2 = 1;
		short_1 = v_tlog_pkt_is_valid(long_3);

		v_tlog_timespec_cmp(long_1,double_5);

		float_2 = float_2 + float_2;
		char_2 = char_2 + char_2;
		char_1 = v_tlog_source_is_valid();

		double_5 = double_4 * double_1;
		int_2 = int_2;
	}
	return short_1;
}
long v_tlog_source_loc_get( int parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char_1 = v_tlog_source_is_valid();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return long_1;
}
unsigned int v_tlog_timespec_is_zero( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void v_tlog_pkt_type_is_valid( double parameter_1)
{
}
short v_tlog_pkt_is_valid( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_tlog_pkt_type_is_valid(double_1);

	double_2 = double_1 + double_1;
	return short_1;
}
unsigned int v_tlog_pkt_is_void()
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long_2 = long_1 * long_2;
	return unsigned_int_1;
	short_1 = v_tlog_pkt_is_valid(long_2);

}
void v_tlog_timespec_fp_div( float parameter_1,float parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_2 = char_1 * char_2;
	float_2 = float_1 * float_1;
	long_1 = v_tlog_timespec_is_valid(unsigned_int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	float_2 = float_1 + float_2;
}
void v_tlog_timespec_fp_mul( int parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	int_3 = int_1 + int_2;
	short_2 = short_1 * short_1;
	float_2 = float_1 * float_1;
	char_2 = char_1 + char_2;
	long_1 = v_tlog_timespec_is_valid(unsigned_int_1);

	char_1 = char_1 + char_3;
}
void v_tlog_timespec_cmp( long parameter_1,double parameter_2)
{
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "v_") < 0)
	{
	}
}
void v_tlog_timestr_parser_reset( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
}
char v_tlog_play_run_read_input( int parameter_1,long parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short_1 = short_1;
	int_2 = int_1 * int_2;
	v_tlog_timespec_fp_div(float_1,float_2,char_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_1 * char_2;
	float_4 = float_3 * float_2;
	int_1 = int_2 * int_2;
	long_1 = long_1;
	long_2 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	int_3 = int_2 + int_1;
	short_1 = v_tlog_timestr_parser_yield(float_2,unsigned_int_1);

	v_tlog_timespec_cmp(long_2,double_1);

	unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
	v_tlog_timestr_parser_reset(double_2);

	char_5 = char_3 + char_4;
	int_3 = int_3 * int_4;
	double_2 = double_2 + double_2;
	long_1 = v_tlog_timestr_parser_feed(char_4,char_3);

	int_5 = int_2 * int_1;
	return char_2;
	v_tlog_timespec_fp_mul(int_2,long_1,int_4);

}
unsigned int v_tlog_play_run( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	long long_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short_1 = v_tlog_source_read(short_2,char_1);

	v_tlog_errs_pushc(char_2,double_1);

	unsigned_int_1 = v_tlog_source_loc_fmt(double_2,long_1);

	v_tlog_timespec_sub(unsigned_int_1,double_2,char_1);

	v_tlog_timespec_cap_add(double_3,char_3,short_2);

	v_tlog_timespec_fp_mul(int_1,long_2,int_1);

	long_2 = long_2 + long_3;
	return unsigned_int_1;
	char_2 = v_tlog_play_run_read_input(int_2,long_1);

	unsigned_int_2 = v_tlog_pkt_is_void();

	unsigned_int_3 = v_tlog_timespec_is_zero(unsigned_int_3);

	long_1 = v_tlog_source_loc_get(int_1);

	v_tlog_pkt_cleanup(unsigned_int_4);

	v_tlog_timespec_cmp(long_1,double_1);

	v_tlog_timespec_fp_div(float_1,float_1,char_2);

	v_tlog_pkt_pos_move(double_1,long_4,int_1);

	char_4 = v_tlog_pkt_pos_is_past(short_2,char_5);

}
int v_tlog_grc_to( unsigned int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_2 = 1;
	unsigned_int_1 = v_tlog_grc_is(short_1,unsigned_int_2);

	long_3 = long_1 + long_2;
	short_1 = v_tlog_grc_range_is_valid(int_1);

	long_5 = long_4 * long_2;
	return int_2;
}
unsigned int v_tlog_grc_strerror( short parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	v_tlog_grc_is_valid(char_1);

	long_1 = long_1 + long_2;
	unsigned_int_1 = v_tlog_grc_is(short_1,unsigned_int_2);

	int_1 = v_tlog_grc_to(unsigned_int_2,float_1);

	short_2 = short_1 * short_1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		short_1 = short_3 + short_2;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "_") > 0)
		{
		}
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	return unsigned_int_4;
}
int v_tlog_errs_replace_with_nomem()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v_tlog_errs_destroy();

	float_1 = float_1 + float_2;
	return int_1;
}
void v_tlog_errs_pushs( float parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	short_1 = short_2;
	float_2 = float_1 + float_2;
	short_4 = short_3 * short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1;
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "66") > 0)
		{
			unsigned int unsigned_int_3 = 1;
			int_1 = int_1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
		int_1 = int_1 * int_1;
		double_2 = double_1 * double_2;
		int_2 = v_tlog_errs_replace_with_nomem();

		char_3 = char_1 + char_2;
	}
}
short v_tlog_grc_range_is_valid( int parameter_1)
{
	short short_1 = 1;
	return short_1;
}
unsigned int v_tlog_grc_is( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_2;
	return unsigned_int_1;
	short_1 = v_tlog_grc_range_is_valid(int_1);

}
void v_tlog_grc_is_valid( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = v_tlog_grc_is(short_1,unsigned_int_2);

	int_2 = int_1 + int_1;
	char_2 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		short_2 = short_1 * short_1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "a") < 0)
		{
		}
	}
}
void v_tlog_errs_pushc( char parameter_1,double parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	v_tlog_grc_is_valid(char_1);

	v_tlog_errs_pushs(float_1,unsigned_int_1);

	short_1 = short_1 * short_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "6c") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	unsigned_int_1 = v_tlog_grc_strerror(short_2);

}
char v_tlog_play_cleanup( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_5 = 1;
	long long_5 = 1;
	short_2 = short_1 + short_2;
	char_1 = char_1;
	long_3 = long_1 + long_2;
	int_2 = int_1 + int_1;
	double_2 = double_1 * double_2;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		if(1)
		{
			int int_3 = 1;
			int_4 = int_2 + int_3;
			long_4 = long_3 * long_1;
			int_3 = int_4 + int_1;
		}
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_3 = 1;
			v_tlog_errs_pushs(float_1,unsigned_int_1);

			char_2 = char_3;
			short_3 = short_3 + short_4;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			short_3 = short_3 + short_5;
		}
	}
	long_5 = long_2 + long_4;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
		short_4 = short_3 * short_1;
		if(1)
		{
			double double_3 = 1;
			double_2 = double_2 * double_2;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
			v_tlog_source_destroy(float_2);

			v_tlog_errs_pushc(char_2,double_2);

			double_2 = double_3 * double_1;
		}
		long_1 = long_4 + long_1;
		if(1)
		{
			int_4 = int_4;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
			int_4 = int_2;
		}
	}
	short_4 = short_5 + short_4;
	return char_1;
}
long v_tlog_play_io_sighandler( int parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char_1 = char_1;
	double_2 = double_1 + double_1;
	return long_1;
}
double v_tlog_play_exit_sighandler( int parameter_1)
{
	double double_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	return double_1;
}
void v_tlog_source_destroy( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	short short_5 = 1;
	short short_6 = 1;
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		short short_4 = 1;
		short_2 = short_1 * short_4;
	}
	char_1 = v_tlog_source_is_valid();

	short_5 = short_6;
}
char v_tlog_source_is_valid()
{
	char char_1 = 1;
	long long_1 = 1;
	return char_1;
	long_1 = v_tlog_source_type_is_valid();

}
long v_tlog_source_type_is_valid()
{
	long long_1 = 1;
	return long_1;
}
float v_tlog_source_create( unsigned int parameter_1,float parameter_2,short parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_4 = 1;
	short short_6 = 1;
	char_1 = v_tlog_source_is_valid();

	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 * short_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	short_5 = short_3 * short_4;
	long_1 = long_1;
	float_2 = float_1 + float_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
	}
	if(1)
	{
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
		double_3 = double_3;
		int_3 = int_1 + int_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		if(1)
		{
			int_1 = int_3 * int_3;
		}
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "[") > 0)
		{
			char char_2 = 1;
			float float_3 = 1;
			float float_5 = 1;
			char_2 = char_1 + char_1;
			long_1 = v_tlog_source_type_is_valid();

			float_5 = float_3 * float_4;
		}
	}
	short_6 = short_3 + short_4;
	return float_4;
}
char v_tlog_json_source_params_is_valid( short parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	return char_1;
	double_1 = v_tlog_json_reader_is_valid(float_1);

}
unsigned int v_tlog_json_source_create( int parameter_1,double parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_1 = v_tlog_json_source_params_is_valid(short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_1;
	return unsigned_int_2;
	float_1 = v_tlog_source_create(unsigned_int_2,float_2,short_1);

}
long v_tlog_fd_json_reader_create( short parameter_1,int parameter_2,short parameter_3,double parameter_4)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_2;
	return long_1;
	char_3 = v_tlog_json_reader_create(short_1,long_1,int_1);

}
int v_tlog_play_create_file_json_reader( long parameter_1,long parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1;
	long_2 = long_2 + long_2;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	if(1)
	{
		long long_3 = 1;
		char_1 = char_1 * char_1;
		v_tlog_json_reader_destroy(char_2);

		long_4 = long_3 * long_4;
	}
	char_1 = char_1;
	short_1 = short_1 + short_2;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2;
		long_4 = long_1 + long_2;
	}
	unsigned_int_2 = unsigned_int_5 + unsigned_int_3;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	float_1 = float_3;
	long_4 = v_tlog_fd_json_reader_create(short_2,int_3,short_1,double_2);

	int_4 = int_2 + int_2;
	int_5 = int_4 + int_3;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	if(1)
	{
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	}
	int_1 = int_2 * int_5;
	return int_4;
}
void v_tlog_json_reader_destroy( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, ":b") > 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		double_1 = v_tlog_json_reader_is_valid(float_3);

		char_1 = char_1 + char_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
double v_tlog_json_reader_is_valid( float parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	return double_1;
	double_1 = v_tlog_json_reader_type_is_valid(float_1);

}
double v_tlog_json_reader_type_is_valid( float parameter_1)
{
	double double_1 = 1;
	return double_1;
}
char v_tlog_json_reader_create( short parameter_1,long parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	int int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
	double_2 = double_1 * double_2;
	double_2 = double_1 + double_2;
	int_1 = int_1 + int_1;
	double_3 = v_tlog_json_reader_is_valid(float_1);

	int_3 = int_2 + int_3;
	char_1 = char_1 * char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "@") > 0)
	{
		short short_1 = 1;
		short_2 = short_1 * short_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "^C") > 0)
	{
		double double_4 = 1;
		long long_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double_3 = double_4 + double_1;
		long_1 = long_1 + long_1;
		float_2 = float_1;
		char_3 = char_2 + char_2;
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "k") < 0)
		{
			int_3 = int_1 * int_4;
		}
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "G@") < 0)
		{
			short short_3 = 1;
			double_3 = v_tlog_json_reader_type_is_valid(float_2);

			double_4 = double_3;
			short_3 = short_2;
		}
	}
	int_2 = int_4 * int_4;
	return char_1;
}
long v_tlog_es_json_reader_create( long parameter_1,char parameter_2,unsigned int parameter_3,long parameter_4)
{
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	char_1 = v_tlog_json_reader_create(short_1,long_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = v_tlog_es_json_reader_base_url_is_valid(short_2);

	short_2 = short_3 + short_2;
	return long_2;
}
unsigned int v_tlog_es_json_reader_base_url_is_valid( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
int v_tlog_play_create_es_json_reader( float parameter_1,float parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	short short_3 = 1;
	float float_4 = 1;
	long long_5 = 1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = v_tlog_es_json_reader_create(long_1,char_1,unsigned_int_1,long_1);

	float_3 = float_1 + float_2;
	int_3 = int_3 * int_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	double_3 = double_1 + double_2;
	v_tlog_json_reader_destroy(char_2);

	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "2") == 0)
	{
		int_4 = int_2 * int_3;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
	}
	long_3 = long_2 + long_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_7 = unsigned_int_3 + unsigned_int_7;
		short_1 = short_2;
	}
	if(1)
	{
		double double_4 = 1;
		long_4 = long_4 + long_1;
		double_1 = double_4 + double_1;
	}
	unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
	unsigned_int_7 = unsigned_int_2 * unsigned_int_5;
	if(1)
	{
		long_4 = long_1 + long_2;
	}
	unsigned_int_6 = v_tlog_es_json_reader_base_url_is_valid(short_3);

	int_4 = int_1;
	double_3 = double_2;
	float_2 = float_4;
	long_5 = long_3 * long_4;
	return int_1;
}
float v_tlog_play_create_json_reader( short parameter_1,double parameter_2,short parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char * vul_var;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	float_1 = float_1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int_3 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		long_1 = long_1 * long_1;
		short_1 = short_1 + short_1;
	}
	double_2 = double_2 + double_3;
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_4;
			int_3 = int_4 * int_4;
		}
		long_1 = long_1 * long_1;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_6;
		}
	}
	char controller4vul_1686[3];
	fgets(controller4vul_1686 ,3 ,stdin);
	if( strcmp( controller4vul_1686, "Ra") < 0)
	{
		vul_var=(char*)malloc(20*sizeof(char));
		char controller4vul_1687[2];
		fgets(controller4vul_1687 ,2 ,stdin);
		if( strcmp( controller4vul_1687, "a") > 0)
		{
			strcpy(vul_var, "CWE-761");
			double_2 = double_4 * double_2;
			char controller4vul_1688[2];
			fgets(controller4vul_1688 ,2 ,stdin);
			if( strcmp( controller4vul_1688, "f") < 0)
			{
				if(uni_para == 273)
				{
					vul_var = vul_var + 1;
				}
				free(vul_var);
				unsigned_int_1 = unsigned_int_6 + unsigned_int_4;
			}
		}
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "w") < 0)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_6;
			if(1)
			{
				int_1 = int_4 * int_5;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			double double_5 = 1;
			double_2 = double_4 * double_2;
			double_5 = double_5;
		}
		int_6 = int_3 + int_6;
		if(1)
		{
			int_1 = int_7 * int_4;
		}
	}
	if(1)
	{
		int int_8 = 1;
		int_5 = int_2 + int_8;
		char_1 = char_1 * char_2;
	}
	int_1 = int_2 * int_5;
	int_1 = int_7 + int_6;
	char_3 = char_1 + char_2;
	char_1 = char_4 + char_4;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_2;
}
float v_tlog_play_create_log_source( short parameter_1,long parameter_2,double parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double_3 = double_1 + double_2;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_2;
	char_1 = char_1 * char_1;
	char controller4vul_1685[3];
	fgets(controller4vul_1685 ,3 ,stdin);
	if( strcmp( controller4vul_1685, "A*") < 0)
	{
		short short_4 = 1;
		float_1 = v_tlog_play_create_json_reader(short_3,double_4,short_2,uni_para);

		short_4 = short_3 + short_3;
	}
	int_2 = int_1 + int_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 + long_2;
	}
	unsigned_int_2 = unsigned_int_6;
	long_2 = long_3;
	char_3 = char_2 + char_3;
	char_2 = char_3 + char_4;
	unsigned_int_1 = unsigned_int_6;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	return float_1;
}
short v_tlog_timestr_parser_yield( float parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1 + double_2;
	float_2 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_2;
	int_1 = int_2 * int_3;
	double_2 = double_3 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		float_3 = float_2 * float_1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
		if(1)
		{
		}
		short_1 = v_tlog_timestr_parser_is_valid(float_3);

		unsigned_int_6 = unsigned_int_5 + unsigned_int_1;
		if(1)
		{
		}
		float_2 = float_1;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_2;
		}
	}
	int_3 = int_4 * int_1;
	return short_1;
}
short v_tlog_timestr_parser_is_valid( float parameter_1)
{
	short short_1 = 1;
	return short_1;
}
long v_tlog_timestr_parser_feed( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	double_1 = double_1 * double_1;
	long_2 = long_1 * long_2;
	double_1 = double_1 + double_1;
	int_2 = int_1 + int_2;
	if(1)
	{
		if(1)
		{
		}
		double_2 = double_2 * double_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "f:") > 0)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		}
		if(1)
		{
			double_3 = double_2 * double_2;
			char controller_6[3];
			fgets(controller_6 ,3 ,stdin);
			if( strcmp( controller_6, "q)") == 0)
			{
			}
		}
		char_1 = char_1;
	}
	if(1)
	{
	}
	short_1 = short_1;
	double_3 = double_1 + double_1;
	if(1)
	{
	}
	short_1 = v_tlog_timestr_parser_is_valid(float_1);

	char_1 = char_1 * char_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	double_3 = double_4 + double_5;
	return long_3;
}
unsigned int v_tlog_timestr_to_timespec( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long_1 = long_2;
	long_1 = v_tlog_timestr_parser_feed(char_1,char_2);

	short_1 = v_tlog_timestr_parser_yield(float_1,unsigned_int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "=_") > 0)
		{
			float_3 = float_2 + float_1;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float_2 = float_3 * float_2;
	}
	return unsigned_int_2;
}
long v_tlog_timespec_is_valid( unsigned int parameter_1)
{
	long long_1 = 1;
	return long_1;
}
long v_tlog_timespec_from_fp( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	char_1 = char_1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_2;
	float_3 = float_1 + float_2;
	long_1 = v_tlog_timespec_is_valid(unsigned_int_3);

	char_1 = char_2 + char_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	return long_2;
}
char v_tlog_play_init( int parameter_1,float parameter_2,int uni_para)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_7 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_5 = 1;
	int int_8 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_5 = 1;
	float float_6 = 1;
	short short_7 = 1;
	short short_8 = 1;
	short short_9 = 1;
	char char_6 = 1;
	short_1 = short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 + long_2;
	long_1 = long_2;
	float_1 = float_1 + float_1;
	double_1 = double_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	double_3 = double_3;
	int_1 = int_1;
	long_3 = long_1 + long_2;
	int_4 = int_2 * int_3;
	float_1 = float_1 * float_2;
	double_3 = double_1;
	long_3 = long_3 * long_3;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	double_1 = double_3 * double_3;
	short_1 = short_1;
	short_1 = short_1 * short_2;
	float_3 = float_4;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
	int_3 = int_4 + int_5;
	if(1)
	{
		unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
	}
	short_1 = short_2 + short_3;
	double_2 = double_2 + double_4;
	char controller4vul_1683[2];
	fgets(controller4vul_1683 ,2 ,stdin);
	if( strcmp( controller4vul_1683, "j") > 0)
	{
		int_5 = int_5 + int_6;
		char controller4vul_1684[2];
		fgets(controller4vul_1684 ,2 ,stdin);
		if( strcmp( controller4vul_1684, "[") < 0)
		{
			float_3 = v_tlog_play_create_log_source(short_2,long_3,double_2,uni_para);

			char_1 = char_1 * char_2;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_6 * unsigned_int_5;
		}
		if(1)
		{
			long_4 = long_1 * long_4;
			short_6 = short_4 * short_5;
		}
		int_7 = int_5;
	}
	char_5 = char_3 * char_4;
	char_4 = char_4 * char_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_6 * unsigned_int_3;
	}
	unsigned_int_1 = unsigned_int_1;
	short_6 = short_4 + short_3;
	if(1)
	{
		char_2 = char_5 + char_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short_1 = short_5 + short_4;
			char_3 = char_2 + char_4;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_7;
			long_3 = long_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char_2 = char_5;
			}
			double_4 = double_4;
			if(1)
			{
				int_5 = int_1 * int_4;
				short_3 = short_3 * short_2;
			}
		}
	}
	char_3 = char_1;
	short_6 = short_4 + short_1;
	char_2 = char_4 + char_2;
	long_2 = long_1 * long_5;
	if(1)
	{
		int_1 = int_5 * int_5;
		long_4 = long_4 * long_2;
	}
	if(1)
	{
		int_5 = int_6 + int_8;
		double_4 = double_3;
	}
	char_1 = char_2 + char_3;
	if(1)
	{
		float_4 = float_4 * float_4;
		double_1 = double_3;
	}
	if(1)
	{
		short_2 = short_1 + short_3;
		unsigned_int_4 = unsigned_int_2;
		char_1 = char_4 * char_5;
	}
	int_6 = int_1 + int_8;
	char controller_12[3];
	fgets(controller_12 ,3 ,stdin);
	if( strcmp( controller_12, "gM") < 0)
	{
		double_2 = double_4 + double_1;
		double_6 = double_2 + double_5;
	}
	int_1 = int_2 * int_8;
	float_1 = float_1 * float_4;
	char_4 = char_4;
	int_6 = int_2 + int_4;
	float_2 = float_4 * float_5;
	float_6 = float_5 * float_4;
	double_5 = double_6 * double_1;
	if(1)
	{
		char_3 = char_4 + char_2;
		short_3 = short_1 + short_7;
	}
	unsigned_int_1 = unsigned_int_7 + unsigned_int_5;
	long_4 = long_2 * long_1;
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		long_4 = long_3 * long_1;
		unsigned_int_3 = unsigned_int_5 * unsigned_int_8;
	}
	short_8 = short_8 * short_7;
	if(1)
	{
		int_8 = int_4;
		if(1)
		{
			int_4 = int_5 + int_7;
		}
	}
	short_9 = short_8;
	return char_6;
}
void v_tlog_errs_destroy()
{
	float float_1 = 1;
	float float_2 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			int int_1 = 1;
			long long_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			int_1 = int_1 + int_1;
			long_1 = long_1;
			char_3 = char_1 + char_2;
		}
		v_tlog_errs_destroy();

		short_2 = short_1 + short_1;
	}
}
int v_tlog_errs_print( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = v_tlog_errs_print(int_1,int_1);

	long_2 = long_1 * long_2;
	short_3 = short_1 + short_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "4") > 0)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
		}
		float_2 = float_1 * float_1;
	}
	return int_2;
}
void v_tlog_play( int parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	char controller4vul_1681[2];
	fgets(controller4vul_1681 ,2 ,stdin);
	if( strcmp( controller4vul_1681, "s") > 0)
	{
		char controller4vul_1682[2];
		fgets(controller4vul_1682 ,2 ,stdin);
		if( strcmp( controller4vul_1682, "o") > 0)
		{
			char_1 = v_tlog_play_init(int_2,float_1,uni_para);

			long_1 = long_1 + long_1;
			char_3 = char_1 * char_2;
			short_2 = short_1 + short_2;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			char char_4 = 1;
			char char_5 = 1;
			float float_2 = 1;
			int_5 = int_3 * int_4;
			char_3 = char_4 + char_5;
			float_2 = float_2 * float_2;
		}
	}
	short_1 = short_3 * short_2;
	unsigned_int_2 = unsigned_int_4;
	double_2 = double_1 + double_1;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "m") < 0)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	}
	unsigned_int_3 = unsigned_int_6 + unsigned_int_2;
	double_3 = double_2 + double_2;
	if(1)
	{
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "uT") < 0)
	{
		char_2 = char_2 * char_3;
	}
}
void v_tlog_errs_pushf( char parameter_1,unsigned int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_2;
	double_1 = double_1 * double_1;
	float_2 = float_1 * float_2;
	long_1 = long_2;
	int_3 = int_2;
	int_2 = int_2 + int_3;
	int_4 = int_3 + int_1;
	int_2 = int_4 * int_4;
	float_2 = float_1 * float_2;
	float_2 = float_1 + float_3;
}
void v_tlog_play_conf_cmd_load( double parameter_1,char parameter_2,char parameter_3,int parameter_4,char parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long_3 = long_1 + long_2;
}
int v_tlog_json_overlay( char parameter_1,long parameter_2,long parameter_3)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_4 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_9 = 1;
	short short_6 = 1;
	short short_7 = 1;
	short_1 = short_1;
	long_1 = long_1 + long_2;
	short_1 = short_1 * short_1;
	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	float_1 = float_1 * float_1;
	short_4 = short_2 + short_3;
	if(1)
	{
		double_3 = double_1 + double_2;
		char_2 = char_3 + char_3;
		char_1 = char_1 + char_1;
		double_2 = double_3 * double_1;
		if(1)
		{
			double_2 = double_3 * double_1;
			int_3 = int_1 + int_2;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_3 = 1;
			int_5 = int_1 + int_4;
			int_5 = int_6 + int_7;
			unsigned_int_3 = unsigned_int_1;
			if(1)
			{
				short short_5 = 1;
				short_5 = short_1 + short_2;
			}
			if(1)
			{
				double double_4 = 1;
				int_5 = int_1 + int_2;
				double_4 = double_3 + double_1;
			}
			int_1 = int_2 + int_6;
		}
	}
	if(1)
	{
		int int_8 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_7 = 1;
		double double_9 = 1;
		int_6 = int_8;
		double_2 = double_1 + double_5;
		if(1)
		{
			double_6 = double_2 * double_2;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
		}
		if(1)
		{
			long long_3 = 1;
			unsigned int unsigned_int_5 = 1;
			if(1)
			{
				double_7 = double_1 * double_5;
			}
			unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
			int_2 = int_2 * int_4;
			if(1)
			{
				char_3 = char_2 * char_1;
			}
			long_3 = long_1 * long_2;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
		}
		char controller_10[3];
		fgets(controller_10 ,3 ,stdin);
		if( strcmp( controller_10, "JO") < 0)
		{
			long_4 = long_2 + long_1;
		}
		if(1)
		{
			int_5 = int_3 + int_7;
		}
		int_3 = v_tlog_json_overlay(char_1,long_4,long_4);

		unsigned_int_1 = unsigned_int_4;
		double_8 = double_3 + double_1;
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_7 = unsigned_int_1 + unsigned_int_6;
		}
		double_1 = double_1 * double_7;
		double_9 = double_1;
	}
	if(1)
	{
		int_2 = int_7 * int_9;
		unsigned_int_6 = unsigned_int_6 * unsigned_int_2;
		if(1)
		{
			char char_4 = 1;
			char_4 = char_4 * char_3;
		}
	}
	if(1)
	{
		int int_10 = 1;
		int_5 = int_3 * int_10;
	}
	double_5 = double_6 + double_8;
	short_3 = short_6 + short_1;
	int_6 = int_3 * int_9;
	short_2 = short_4 + short_7;
	return int_2;
}
int v_tlog_play_conf_validate( short parameter_1,int parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char_1 = char_1 + char_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		int_1 = int_1 * int_1;
		double_1 = double_1 * double_2;
		float_1 = float_1 * float_1;
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			double double_3 = 1;
			long_2 = long_2 + long_3;
			double_3 = double_3;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char char_3 = 1;
				char_1 = char_3 * char_3;
			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float float_2 = 1;
				float_1 = float_2 + float_1;
			}
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	return int_1;
}
short v_tlog_json_object_from_file( float parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
int v_tlog_play_conf_file_load( long parameter_1,double parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_3 = 1;
	char_2 = char_1 * char_1;
	int_1 = v_tlog_play_conf_validate(short_1,int_1,char_2);

	float_1 = float_1 + float_2;
	float_4 = float_3 * float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "O") < 0)
	{
		long_1 = long_1 * long_2;
	}
	short_2 = v_tlog_json_object_from_file(float_2,long_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 + int_2;
	}
	short_3 = short_2;
	long_1 = long_1 * long_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	long_5 = long_4 * long_3;
	return int_3;
}
unsigned int v_tlog_build_or_inst_path( char parameter_1,long parameter_2,float parameter_3,double parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_8 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 + int_2;
	double_1 = double_1 + double_1;
	double_2 = double_1;
	char_2 = char_1 + char_1;
	char_1 = char_1 + char_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	float_2 = float_1 * float_1;
	char_4 = char_2 + char_3;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_2 * double_1;
	int_4 = int_4 + int_4;
	if(1)
	{
		int int_5 = 1;
		float float_3 = 1;
		float float_4 = 1;
		int_3 = int_5 * int_4;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "o") < 0)
		{
			short short_3 = 1;
			double_3 = double_3 * double_1;
			short_3 = short_1 * short_2;
		}
		float_4 = float_3 * float_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
			float_2 = float_1 * float_2;
		}
		int_2 = int_4 + int_3;
		if(1)
		{
			double double_5 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			float float_5 = 1;
			double_5 = double_3 + double_4;
			if(1)
			{
				double_4 = double_5 * double_3;
				long_3 = long_1 + long_2;
			}
			float_2 = float_4 + float_1;
			long_3 = long_1 + long_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
			float_5 = float_4 * float_2;
			if(1)
			{
				float_3 = float_5;
				double_6 = double_7;
			}
		}
	}
	if(1)
	{
		double_2 = double_7;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
	}
	char controller_8[2];
	fgets(controller_8 ,2 ,stdin);
	if( strcmp( controller_8, "7") > 0)
	{
		int_4 = int_4 + int_3;
		if(1)
		{
			char_4 = char_2 * char_4;
			unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
		}
	}
	int_6 = int_1 + int_1;
	double_6 = double_7 + double_3;
	int_7 = int_6 * int_7;
	double_8 = double_4 * double_2;
	short_1 = short_2 * short_4;
	int_6 = int_2 + int_4;
	short_2 = short_1;
	int_3 = int_3 + int_2;
	return unsigned_int_6;
}
unsigned int v_tlog_play_conf_load( unsigned int parameter_1,char parameter_2,char parameter_3,int parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	char char_6 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_6 = 1;
	short short_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_6 = 1;
	double_1 = double_1 + double_2;
	int_1 = int_1 + int_1;
	float_1 = float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	float_1 = float_2;
	long_1 = long_1 * long_1;
	short_2 = short_1 + short_1;
	int_2 = int_1 + int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
		int_2 = int_3 * int_2;
		int_3 = int_4 * int_2;
	}
	unsigned_int_2 = v_tlog_build_or_inst_path(char_1,long_2,float_2,double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "jV") > 0)
	{
		char_2 = char_2 * char_1;
	}
	int_1 = int_1 + int_3;
	if(1)
	{
		char_1 = char_1;
	}
	float_1 = float_2 + float_3;
	char_2 = char_3 + char_2;
	int_2 = int_3;
	if(1)
	{
		v_tlog_play_conf_cmd_load(double_1,char_3,char_4,int_2,char_5);

		float_3 = float_2 + float_1;
	}
	short_3 = short_1 + short_3;
	long_1 = long_3 * long_1;
	long_1 = long_4 + long_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	}
	long_3 = long_2;
	long_2 = long_1 + long_1;
	int_3 = int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	int_3 = int_3 * int_5;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	double_1 = double_1;
	if(1)
	{
		short_1 = short_2;
	}
	short_3 = short_1 + short_1;
	if(1)
	{
		double_1 = double_2;
	}
	unsigned_int_3 = unsigned_int_2;
	char_2 = char_2 * char_6;
	float_4 = float_5;
	int_6 = int_5 + int_4;
	float_5 = float_4 + float_5;
	short_4 = short_3;
	unsigned_int_4 = unsigned_int_2;
	long_5 = long_5 + long_3;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
	int_3 = v_tlog_json_overlay(char_7,long_1,long_5);

	unsigned_int_2 = unsigned_int_6;
	int_2 = int_6;
	return unsigned_int_3;
	int_1 = v_tlog_play_conf_file_load(long_4,double_1,short_1);

}
int main()
{
	int uni_para =273;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_3 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_5 = 1;
	int_1 = int_1 + int_2;
	short_2 = short_1 * short_2;
	short_4 = short_3 + short_2;
	double_1 = double_1 + double_1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long_1 = long_1 * long_2;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_7 = unsigned_int_6 * unsigned_int_1;
	}
	long_2 = long_3 * long_1;
	char controller4vul_1679[3];
	fgets(controller4vul_1679 ,3 ,stdin);
	if( strcmp( controller4vul_1679, "h/") > 0)
	{
		char controller4vul_1680[2];
		fgets(controller4vul_1680 ,2 ,stdin);
		if( strcmp( controller4vul_1680, "W") > 0)
		{
			v_tlog_play(int_2,unsigned_int_7,unsigned_int_5,int_3,uni_para);

			int_1 = int_3;
			double_2 = double_2 * double_2;
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
			double_2 = double_2 + double_1;
		}
	}
	double_2 = double_3 + double_3;
	int_2 = int_4 * int_5;
	char_3 = char_2 * char_2;
	unsigned_int_7 = unsigned_int_5 + unsigned_int_5;
	short_2 = short_5 * short_4;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	return int_1;
}

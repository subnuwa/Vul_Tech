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

void v_tr_free( int parameter_1);
void v_check_list_free( float parameter_1);
void v_check_list_apply( long parameter_1,int parameter_2);
void v_tcase_free( unsigned int parameter_1);
unsigned int v_suite_free( int parameter_1);
void v_srunner_free( char parameter_1);
int v_srunner_ntests_failed( char parameter_1);
char v_srunner_run_end( unsigned int parameter_1,long parameter_2);
int v_srunner_iterate_suites( double parameter_1,unsigned int parameter_2,unsigned int parameter_3,unsigned int parameter_4);
void v_log_srunner_start( char parameter_1);
float v_srunner_send_evt( float parameter_1,short parameter_3);
void v_tap_lfun( long parameter_1,double parameter_2,unsigned int parameter_3,unsigned int parameter_5);
char v_srunner_tap_fname( float parameter_1);
int v_srunner_has_tap();
int v_srunner_open_tapfile( char parameter_1);
double v_strdup( float parameter_1);
void v_tr_xmlprint( char parameter_1,short parameter_2,char parameter_3);
void v_fprint_xml_esc( unsigned int parameter_1,float parameter_2);
void v_localtime_r( short parameter_1,int parameter_2);
unsigned int v_alarm( float parameter_1);
void v_timer_delete();
char v_timer_create( double parameter_1,char parameter_2,short parameter_3);
int v_check_get_clockid();
int v_clock_gettime( long parameter_1,short parameter_2);
int v_gettimeofday( char parameter_1);
void v_xml_lfun( short parameter_1,char parameter_2,long parameter_3,long parameter_5);
float v_srunner_xml_fname( char parameter_1);
int v_srunner_has_xml();
short v_srunner_open_xmlfile( char parameter_1);
void v_lfile_lfun( long parameter_1,char parameter_2,char parameter_3,double parameter_5);
double v_srunner_open_file( char parameter_1);
short v_srunner_log_fname( long parameter_1);
int v_srunner_has_log( short parameter_1);
short v_srunner_open_lfile( unsigned int parameter_1);
void v_subunit_lfun( char parameter_1,unsigned int parameter_2,float parameter_3,double parameter_5);
char v_tr_type_str();
short v_tr_str( unsigned int parameter_1,int uni_para);
void v_tr_fprint( short parameter_1,short parameter_2,unsigned int parameter_3,int uni_para);
float v_check_list_val( double parameter_1);
void v_check_list_advance( float parameter_1);
int v_check_list_at_end( long parameter_1);
void v_check_list_front( unsigned int parameter_1);
float v_srunner_fprint_results( long parameter_1,unsigned int parameter_2,unsigned int parameter_3,int uni_para);
double v_percent_passed();
int v_sr_stat_str( short parameter_1);
long v_srunner_fprint_summary( int parameter_1,long parameter_2,short parameter_3);
void v_srunner_fprint( int parameter_1,int parameter_2,float parameter_3,int uni_para);
void v_stdout_lfun( double parameter_1,float parameter_2,char parameter_3,int parameter_5,int uni_para);
short v_get_env_printmode();
void v_srunner_register_lfun( short parameter_1,short parameter_2,int parameter_3,int parameter_4,unsigned int parameter_5);
void v_srunner_init_logging( short parameter_1,short parameter_2,int uni_para);
void v_ck_strdup_printf( long parameter_1,short parameter_2,int uni_para);
int v_open_tmp_file( char parameter_1);
long v_setup_pipe();
void v_setup_messaging();
long v_srunner_fork_status( long parameter_1);
void v_set_fork_status();
int v_srunner_run_init( float parameter_1,unsigned int parameter_2,int uni_para);
void v_srunner_run( unsigned int parameter_1,unsigned int parameter_2,short parameter_3,double parameter_4,int uni_para);
void v_srunner_run_all( char parameter_1,char parameter_2,int uni_para);
double v_srunner_create();
unsigned int v_realloc(int parameter_2);
float v_erealloc(int parameter_2,int uni_para);
long v_maybe_grow( double parameter_1);
void v_check_list_add_end( unsigned int parameter_1);
void v_suite_add_tcase( char parameter_1,long parameter_2);
long v_tcase_create( unsigned int parameter_1);
short v_check_list_create();
void v_eprintf( short parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,int uni_para);
long v_malloc( unsigned int parameter_1);
void v_emalloc( short parameter_1);
void v_suite_create( char parameter_1);
char v_money_suite();
void v_tr_free( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_2;
	short_1 = short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
void v_check_list_free( float parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	long_1 = long_1;
	double_1 = double_1 + double_1;
}
void v_check_list_apply( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "G9") > 0)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_check_list_front(unsigned_int_1);

		int_1 = v_check_list_at_end(long_1);

		float_1 = v_check_list_val(double_1);

		double_1 = double_1 + double_1;
	}
	v_check_list_advance(float_1);

}
void v_tcase_free( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	char_1 = char_1 * char_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1;
	float_1 = float_1 * float_2;
	char_1 = char_1;
	v_check_list_apply(long_2,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_check_list_free(float_3);

	short_2 = short_1 + short_1;
}
unsigned int v_suite_free( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	v_tcase_free(unsigned_int_1);

	long_3 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		v_check_list_advance(float_1);

		double_1 = double_1;
	}
	float_2 = v_check_list_val(double_2);

	v_check_list_free(float_1);

	short_1 = short_1 * short_1;
	char_2 = char_1 * char_2;
	return unsigned_int_2;
	v_check_list_front(unsigned_int_3);

	int_1 = v_check_list_at_end(long_3);

}
void v_srunner_free( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	v_check_list_advance(float_1);

	v_check_list_free(float_2);

	long_1 = long_1 + long_1;
	v_check_list_front(unsigned_int_1);

	int_1 = v_check_list_at_end(long_2);

	v_tr_free(int_2);

	int_2 = int_2 * int_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Pf") < 0)
	{
	}
	unsigned_int_2 = unsigned_int_1;
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_2 + double_1;
	}
	short_3 = short_1 + short_2;
	unsigned_int_3 = v_suite_free(int_2);

	float_2 = v_check_list_val(double_3);

	unsigned_int_1 = unsigned_int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_2 = 1;
		int int_4 = 1;
		char_2 = char_1 * char_2;
		int_3 = int_4 + int_4;
	}
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	char_1 = char_1;
}
int v_srunner_ntests_failed( char parameter_1)
{
	int int_1 = 1;
	return int_1;
}
char v_srunner_run_end( unsigned int parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_1 * char_1;
	char_1 = char_1 * char_1;
	return char_2;
}
int v_srunner_iterate_suites( double parameter_1,unsigned int parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
void v_log_srunner_start( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float_1 = v_srunner_send_evt(float_2,short_1);

	long_3 = long_1 * long_2;
}
float v_srunner_send_evt( float parameter_1,short parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float_1 = v_check_list_val(double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_2 + double_2;
	int_1 = v_check_list_at_end(long_1);

	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		long long_2 = 1;
		float float_3 = 1;
		int int_2 = 1;
		double_3 = double_1;
		long_1 = long_2 * long_1;
		v_check_list_advance(float_2);

		float_3 = float_1 + float_3;
		int_2 = int_1 * int_1;
	}
	return float_2;
	v_check_list_front(unsigned_int_1);

}
void v_tap_lfun( long parameter_1,double parameter_2,unsigned int parameter_3,unsigned int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_6 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_7 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1;
	v_eprintf(short_1,float_1,int_2,unsigned_int_2,-1 );

	unsigned_int_3 = unsigned_int_4;
	double_2 = double_1 * double_1;
	int_4 = int_1 + int_3;
	unsigned_int_5 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_6;
	int_5 = int_2 + int_1;
	short_3 = short_2 + short_1;
	short_2 = short_2 + short_3;
	char_2 = char_1 * char_1;
	float_3 = float_1 * float_2;
	int_6 = int_5;
	double_2 = double_1 + double_3;
	int_2 = int_4 * int_2;
	long_1 = long_1 * long_1;
	int_2 = int_4 * int_2;
	int_7 = int_7;
}
char v_srunner_tap_fname( float parameter_1)
{
	char char_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "[$") < 0)
	{
	}
	return char_1;
}
int v_srunner_has_tap()
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	return int_1;
	char_1 = v_srunner_tap_fname(float_1);

}
int v_srunner_open_tapfile( char parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char_1 = v_srunner_tap_fname(float_1);

	int_2 = int_1 + int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "V") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	return int_2;
	int_3 = v_srunner_has_tap();

	double_1 = v_srunner_open_file(char_2);

}
double v_strdup( float parameter_1)
{
	double double_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	return double_1;
}
void v_tr_xmlprint( char parameter_1,short parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	float float_6 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_3 = 1;
	double double_6 = 1;
	char_2 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_2 * char_2;
	float_3 = float_1 * float_2;
	int_2 = int_1 + int_1;
	int_2 = int_1 * int_1;
	double_1 = double_1;
	int_3 = int_1 + int_1;
	float_4 = float_3 + float_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	long_2 = long_1 * long_1;
	int_4 = int_2 * int_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ")") > 0)
	{
		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "b>") > 0)
		{
			double double_3 = 1;
			double_3 = double_2 * double_1;
		}
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			v_fprint_xml_esc(unsigned_int_2,float_3);

			int_3 = int_3 + int_4;
			char_4 = char_3 + char_3;
		}
		if(1)
		{
			float float_5 = 1;
			unsigned int unsigned_int_6 = 1;
			float_1 = float_5 + float_2;
			double_1 = v_strdup(float_6);

			double_4 = double_1;
			unsigned_int_6 = unsigned_int_3;
		}
	}
	short_2 = short_1 + short_2;
	double_2 = double_1 * double_1;
	int_1 = int_1 + int_1;
	double_5 = double_4 + double_2;
	int_3 = int_5 + int_4;
	unsigned_int_7 = unsigned_int_3 + unsigned_int_3;
	int_5 = int_5 + int_5;
	unsigned_int_8 = unsigned_int_3 * unsigned_int_7;
	short_3 = short_2 + short_1;
	unsigned_int_5 = unsigned_int_7 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
	double_4 = double_2;
	double_6 = double_4 + double_5;
	double_1 = double_2 + double_1;
}
void v_fprint_xml_esc( unsigned int parameter_1,float parameter_2)
{
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int_1 = int_1 + int_2;
		int_1 = int_2;
		double_1 = double_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		long_2 = long_1 * long_2;
		short_3 = short_1 * short_2;
		long_3 = long_2 * long_3;
		float_1 = float_1;
		float_3 = float_2 + float_1;
		double_1 = double_1 * double_1;
		double_1 = double_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
}
void v_localtime_r( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "#J") > 0)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
}
unsigned int v_alarm( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 * long_1;
	return unsigned_int_1;
}
void v_timer_delete()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_4 = 1;
	double_3 = double_1 * double_2;
	float_1 = float_1 * float_1;
	double_4 = double_2 + double_2;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		float_1 = float_2 * float_3;
		double_2 = double_1 + double_4;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int_2 = int_1 * int_1;
		unsigned_int_1 = v_alarm(float_4);

		double_6 = double_5 + double_3;
	}
}
char v_timer_create( double parameter_1,char parameter_2,short parameter_3)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = float_1 * float_1;
	float_1 = float_1 + float_1;
	short_3 = short_1 * short_2;
	char_1 = char_2;
	int_1 = int_1 + int_2;
	float_1 = float_1 + float_1;
	return char_1;
}
int v_check_get_clockid()
{
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_1 = v_timer_create(double_1,char_2,short_1);

	char_1 = char_3;
	double_1 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	int_2 = int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "h+") < 0)
	{
		char_2 = char_3 * char_2;
	}
	short_2 = short_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	double_3 = double_3 * double_1;
	float_1 = float_2;
	return int_2;
	v_timer_delete();

}
int v_clock_gettime( long parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 * long_2;
	return int_1;
}
int v_gettimeofday( char parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "jk") < 0)
	{
		int_1 = int_1 * int_1;
	}
	int_1 = int_1 + int_1;
	double_1 = double_2;
	return int_1;
}
void v_xml_lfun( short parameter_1,char parameter_2,long parameter_3,long parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_6 = 1;
	float float_7 = 1;
	float float_8 = 1;
	double double_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_9 = 1;
	double double_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_6 = 1;
	float float_10 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_11 = 1;
	long long_3 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 * double_1;
	double_3 = double_1 + double_2;
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		long_2 = long_1 + long_1;
		short_2 = short_1 + short_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		float_3 = float_1 * float_2;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if(remainder_check(controller_2,100,1))
		{
			double_4 = double_3 + double_3;
		}
	}
	v_fprint_xml_esc(unsigned_int_2,float_2);

	long_1 = long_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	double_2 = double_3 * double_2;
	float_5 = float_1 + float_4;
	v_eprintf(short_2,float_2,int_1,unsigned_int_5,-1 );

	double_3 = double_3 + double_1;
	float_3 = float_5 * float_1;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_2;
	float_8 = float_6 * float_7;
	unsigned_int_2 = unsigned_int_1;
	double_2 = double_3 * double_5;
	short_3 = short_4;
	short_3 = short_5 * short_3;
	unsigned_int_7 = unsigned_int_1 * unsigned_int_2;
	float_6 = float_1 * float_9;
	double_6 = double_5 * double_1;
	double_5 = double_6 * double_2;
	int_2 = v_gettimeofday(char_1);

	float_9 = float_1 * float_1;
	v_tr_xmlprint(char_1,short_5,char_2);

	double_5 = double_6 * double_4;
	short_6 = short_2 + short_2;
	int_3 = v_check_get_clockid();

	short_5 = short_2;
	float_10 = float_5 * float_8;
	int_4 = int_5;
	char_1 = char_3;
	unsigned_int_4 = unsigned_int_8 + unsigned_int_9;
	float_11 = float_6 + float_10;
	int_5 = v_clock_gettime(long_1,short_5);

	long_1 = long_3 + long_2;
	unsigned_int_8 = unsigned_int_1;
	v_localtime_r(short_3,int_2);

}
float v_srunner_xml_fname( char parameter_1)
{
	float float_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "`") < 0)
	{
	}
	return float_1;
}
int v_srunner_has_xml()
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	return int_1;
	float_1 = v_srunner_xml_fname(char_1);

}
short v_srunner_open_xmlfile( char parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double_1 = v_srunner_open_file(char_1);

	long_1 = long_2;
	if(1)
	{
		float float_2 = 1;
		float_1 = v_srunner_xml_fname(char_1);

		float_2 = float_1;
	}
	return short_1;
	int_1 = v_srunner_has_xml();

}
void v_lfile_lfun( long parameter_1,char parameter_2,char parameter_3,double parameter_5)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	float float_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	char char_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_3 = 1;
	char_1 = char_1 * char_1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_1;
	double_3 = double_2;
	int_1 = int_1;
	short_1 = short_1 * short_1;
	v_srunner_fprint(int_1,int_2,float_1,-1 );

	double_2 = double_4 + double_3;
	float_2 = float_2;
	v_tr_fprint(short_2,short_2,unsigned_int_3,-1 );

	double_2 = double_5 * double_4;
	char_1 = char_2;
	v_eprintf(short_3,float_1,int_2,unsigned_int_4,-1 );

	char_5 = char_3 + char_4;
	double_3 = double_3 + double_4;
	double_2 = double_2 * double_1;
	short_2 = short_1 * short_3;
	int_2 = int_2 * int_3;
	short_3 = short_2 * short_3;
}
double v_srunner_open_file( char parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	v_eprintf(short_1,float_1,int_1,unsigned_int_1,-1 );

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 * int_2;
		if(1)
		{
			int_2 = int_3 + int_2;
		}
	}
	return double_1;
}
short v_srunner_log_fname( long parameter_1)
{
	short short_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "_") < 0)
	{
	}
	return short_1;
}
int v_srunner_has_log( short parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	return int_1;
	short_1 = v_srunner_log_fname(long_1);

}
short v_srunner_open_lfile( unsigned int parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int_1 = v_srunner_has_log(short_1);

	double_1 = double_2;
	if(1)
	{
		double_1 = v_srunner_open_file(char_1);

		double_2 = double_1 + double_2;
	}
	return short_1;
	short_1 = v_srunner_log_fname(long_1);

}
void v_subunit_lfun( char parameter_1,unsigned int parameter_2,float parameter_3,double parameter_5)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	int_1 = int_1 * int_1;
	int_1 = int_1 + int_1;
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		double_4 = double_2 * double_3;
	}
	if(1)
	{
		char char_1 = 1;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_3 * float_1;
	}
	int_5 = int_4 + int_2;
	float_4 = float_2 * float_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		int_3 = int_2 * int_6;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
		if(1)
		{
			int_1 = int_6;
		}
	}
	if(1)
	{
		float float_5 = 1;
		float_5 = float_5 + float_4;
	}
	if(1)
	{
		int int_7 = 1;
		int_2 = int_7 + int_2;
	}
	if(1)
	{
		float_2 = float_4 + float_4;
	}
	if(1)
	{
		if(1)
		{
			double double_5 = 1;
			char char_3 = 1;
			double_2 = double_5 * double_2;
			double_3 = double_6 + double_1;
			char_3 = char_3 + char_2;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			double_4 = double_1 + double_6;
			unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int_4 = int_6 + int_3;
			unsigned_int_6 = unsigned_int_6;
			long_2 = long_1 * long_1;
		}
		char controller_20[2];
		fgets(controller_20 ,2 ,stdin);
		if( strcmp( controller_20, "p") < 0)
		{
			int int_8 = 1;
			double_1 = double_4 + double_6;
			int_1 = int_2 * int_8;
		}
	}
}
char v_tr_type_str()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 * int_2;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_2;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	return char_1;
}
short v_tr_str( unsigned int parameter_1,int uni_para)
{
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_4 = 1;
	v_ck_strdup_printf(long_1,short_1,uni_para);

	unsigned_int_1 = unsigned_int_1;
	long_3 = long_2 + long_1;
	int_2 = int_1 + int_2;
	long_4 = long_2 * long_2;
	return short_1;
}
void v_tr_fprint( short parameter_1,short parameter_2,unsigned int parameter_3,int uni_para)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	char controller4vul_1153[2];
	fgets(controller4vul_1153 ,2 ,stdin);
	if( strcmp( controller4vul_1153, "y") < 0)
	{
		double double_1 = 1;
		short_1 = v_tr_str(unsigned_int_1,uni_para);

		double_2 = double_1 * double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_3 = 1;
		char_2 = char_1 + char_1;
		char_2 = char_3 + char_4;
		double_3 = double_2 * double_2;
	}
}
float v_check_list_val( double parameter_1)
{
	float float_1 = 1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "-U") < 0)
	{
	}
	return float_1;
}
void v_check_list_advance( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	int_1 = v_check_list_at_end(long_1);

}
int v_check_list_at_end( long parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "M;") > 0)
	{
	}
	return int_1;
}
void v_check_list_front( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	if(1)
	{
	}
	long_3 = long_1 + long_2;
}
float v_srunner_fprint_results( long parameter_1,unsigned int parameter_2,unsigned int parameter_3,int uni_para)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short_1 = short_1 + short_1;
	char controller4vul_1151[2];
	fgets(controller4vul_1151 ,2 ,stdin);
	if( strcmp( controller4vul_1151, "@") < 0)
	{
		char controller4vul_1152[2];
		fgets(controller4vul_1152 ,2 ,stdin);
		if( strcmp( controller4vul_1152, "G") < 0)
		{
			v_tr_fprint(short_1,short_1,unsigned_int_1,uni_para);

		}
	}
	long_2 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	}
	return float_1;
}
double v_percent_passed()
{
	double double_1 = 1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "FJ") > 0)
	{
	}
	if(1)
	{
	}
	return double_1;
}
int v_sr_stat_str( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int_3 = int_1 * int_2;
	char_1 = char_1 + char_1;
	int_4 = int_3 * int_2;
	v_ck_strdup_printf(long_1,short_1,-1 );

	int_2 = int_3 * int_4;
	return int_1;
	double_1 = v_percent_passed();

}
long v_srunner_fprint_summary( int parameter_1,long parameter_2,short parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_2 = 1;
		short short_2 = 1;
		double_3 = double_1 * double_2;
		double_4 = double_4 * double_4;
		int_1 = v_sr_stat_str(short_1);

		int_2 = int_2 + int_2;
		short_1 = short_2;
	}
	return long_1;
}
void v_srunner_fprint( int parameter_1,int parameter_2,float parameter_3,int uni_para)
{
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	char controller4vul_1150[3];
	fgets(controller4vul_1150 ,3 ,stdin);
	if( strcmp( controller4vul_1150, "`1") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		float_1 = v_srunner_fprint_results(long_1,unsigned_int_1,unsigned_int_2,uni_para);

		double_1 = double_2;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	int_1 = int_1 + int_1;
}
void v_stdout_lfun( double parameter_1,float parameter_2,char parameter_3,int parameter_5,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_1 = double_2;
	int_1 = int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_1149[2];
	fgets(controller4vul_1149 ,2 ,stdin);
	if( strcmp( controller4vul_1149, "}") < 0)
	{
		v_srunner_fprint(int_2,int_1,float_1,uni_para);

		long_1 = long_1;
	}
	double_1 = double_3;
	float_3 = float_2 + float_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	int_2 = int_1 + int_2;
	if(1)
	{
		double double_4 = 1;
		double_3 = double_4 * double_4;
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	long_3 = long_2 + long_1;
	long_4 = long_1 * long_2;
	double_1 = double_5 + double_6;
	int_5 = int_3 * int_4;
}
short v_get_env_printmode()
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char_2 = char_1 + char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "I*") < 0)
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
	if( strcmp( controller_4, "+A") < 0)
	{
	}
	return short_1;
}
void v_srunner_register_lfun( short parameter_1,short parameter_2,int parameter_3,int parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_2 = int_1 + int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "][") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	short_1 = v_get_env_printmode();

	double_3 = double_1 * double_2;
	v_emalloc(short_2);

	int_2 = int_2 * int_1;
	v_check_list_add_end(unsigned_int_1);

	long_3 = long_1 + long_2;
	char_2 = char_1 + char_1;
	double_2 = double_2 + double_1;
}
void v_srunner_init_logging( short parameter_1,short parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	long long_4 = 1;
	short_2 = short_1 + short_1;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 + long_1;
	float_1 = float_2;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	char controller4vul_1148[2];
	fgets(controller4vul_1148 ,2 ,stdin);
	if( strcmp( controller4vul_1148, "C") < 0)
	{
		v_stdout_lfun(double_1,float_2,char_1,int_1,uni_para);

		unsigned_int_1 = unsigned_int_2;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
	}
	long_2 = long_2 * long_3;
	int_2 = int_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	int_1 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_7;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_7;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "W") > 0)
	{
		int_4 = int_4 * int_2;
		int_4 = int_2 * int_2;
	}
	float_1 = float_1;
	int_2 = int_4 * int_1;
	double_4 = double_3 * double_3;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "^6") < 0)
	{
		int_1 = int_5 + int_4;
		int_4 = int_2 + int_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	long_3 = long_4 * long_3;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_2;
	int_5 = int_2 * int_2;
	unsigned_int_5 = unsigned_int_7 * unsigned_int_1;
	int_5 = int_2;
}
void v_ck_strdup_printf( long parameter_1,short parameter_2,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	char controller4vul_1154[2];
	fgets(controller4vul_1154 ,2 ,stdin);
	if( strcmp( controller4vul_1154, "M") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		float_1 = v_erealloc(int_1,uni_para);

		double_1 = double_1 * double_2;
	}
	long_2 = long_1 * long_2;
	char_1 = char_1 * char_1;
	if(1)
	{
		float float_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "*I") == 0)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		}
		float_2 = float_1 * float_1;
	}
	unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
}
int v_open_tmp_file( char parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int_1 = int_1 + int_1;
	double_3 = double_1 + double_2;
	if(1)
	{
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		float float_1 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		int_1 = int_1;
		float_1 = float_1 + float_1;
		long_1 = long_1;
		char_2 = char_1 * char_1;
		double_1 = double_1;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "|") > 0)
	{
		char_3 = char_3 * char_1;
	}
	double_4 = double_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2;
	}
	v_ck_strdup_printf(long_1,short_1,-1 );

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
		if(1)
		{
			char char_4 = 1;
			char_4 = char_3 + char_1;
			char_4 = char_1 + char_2;
		}
	}
	return int_2;
}
long v_setup_pipe()
{
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "T") < 0)
	{
		char char_2 = 1;
		int_1 = v_open_tmp_file(char_1);

		char_2 = char_1 * char_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "U") < 0)
	{
		int_1 = int_1 + int_2;
	}
	v_eprintf(short_1,float_1,int_2,unsigned_int_1,-1 );

	double_1 = double_2;
	return long_1;
}
void v_setup_messaging()
{
	long long_1 = 1;
	double double_1 = 1;
	long_1 = v_setup_pipe();

	double_1 = double_1 * double_1;
}
long v_srunner_fork_status( long parameter_1)
{
	long long_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 * int_2;
		if(1)
		{
			if(1)
			{
			}
		}
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
			}
		}
	}
	if(1)
	{
	}
	return long_1;
}
void v_set_fork_status()
{
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		v_eprintf(short_1,float_1,int_1,unsigned_int_1,-1 );

		long_2 = long_1 + long_2;
	}
}
int v_srunner_run_init( float parameter_1,unsigned int parameter_2,int uni_para)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	v_srunner_init_logging(short_1,short_1,uni_para);

	char_2 = char_1 + char_1;
	double_1 = double_2;
	char_1 = char_3;
	short_3 = short_2 * short_2;
	return int_1;
}
void v_srunner_run( unsigned int parameter_1,unsigned int parameter_2,short parameter_3,double parameter_4,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	float float_6 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	int int_3 = 1;
	char controller4vul_1147[3];
	fgets(controller4vul_1147 ,3 ,stdin);
	if( strcmp( controller4vul_1147, "}@") < 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		int_1 = v_srunner_run_init(float_1,unsigned_int_1,uni_para);

		short_2 = short_1 + short_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_2 * float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_3 * float_3;
	}
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	if(1)
	{
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_2;
	}
	if(1)
	{
		double_3 = double_3 + double_1;
	}
	float_5 = float_1 + float_5;
	double_4 = double_4 * double_4;
	double_5 = double_1 * double_3;
	int_1 = int_2;
	float_2 = float_1 * float_6;
	double_6 = double_4 + double_4;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	char_2 = char_1 + char_1;
	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_6;
	if(1)
	{
		double double_7 = 1;
		double_7 = double_1 * double_2;
	}
	long_1 = long_1 * long_3;
	int_3 = int_3 * int_3;
}
void v_srunner_run_all( char parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	v_srunner_run(unsigned_int_1,unsigned_int_2,short_1,double_1,uni_para);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
}
double v_srunner_create()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	short short_2 = 1;
	v_check_list_add_end(unsigned_int_1);

	int_1 = int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	double_1 = double_1;
	short_1 = v_check_list_create();

	char_1 = char_1 * char_2;
	double_2 = double_1 * double_1;
	int_3 = int_4;
	int_3 = int_2 + int_1;
	short_1 = short_1 + short_1;
	double_1 = double_3 * double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_3 = char_4;
	}
	return double_3;
	v_emalloc(short_2);

}
unsigned int v_realloc(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_1;
}
float v_erealloc(int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_1;
	char controller4vul_1155[3];
	fgets(controller4vul_1155 ,3 ,stdin);
	if( strcmp( controller4vul_1155, "=S") < 0)
	{
		long long_1 = 1;
		v_eprintf(short_1,float_1,int_1,unsigned_int_2,uni_para);

		long_1 = long_1;
	}
	return float_2;
}
long v_maybe_grow( double parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		float_1 = v_erealloc(int_1,-1 );

		unsigned_int_1 = unsigned_int_2;
		int_1 = int_2 + int_2;
	}
	return long_1;
}
void v_check_list_add_end( unsigned int parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 * int_1;
	int_1 = int_2;
	long_1 = v_maybe_grow(double_1);

}
void v_suite_add_tcase( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "_i") > 0)
	{
	}
	v_check_list_add_end(unsigned_int_1);

	float_3 = float_1 * float_2;
}
long v_tcase_create( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	int int_4 = 1;
	long long_3 = 1;
	double_3 = double_1 * double_2;
	int_1 = int_2;
	double_1 = double_1 + double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "0") == 0)
	{
		short_1 = v_check_list_create();

		float_1 = float_1 + float_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_2 * float_3;
	}
	int_2 = int_3 + int_1;
	if(1)
	{
		short_1 = short_2 * short_3;
		double_3 = double_1 + double_3;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
	}
	v_emalloc(short_2);

	double_2 = double_1 * double_3;
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "y") < 0)
	{
		short short_4 = 1;
		short_4 = short_3 + short_3;
		float_2 = float_4 * float_2;
		if(1)
		{
			long long_1 = 1;
			long_1 = long_2;
		}
	}
	double_3 = double_2 * double_2;
	double_1 = double_1 * double_3;
	int_4 = int_1 + int_3;
	float_4 = float_4 * float_1;
	double_1 = double_3 * double_1;
	long_2 = long_2;
	int_3 = int_1 + int_2;
	return long_3;
}
short v_check_list_create()
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_1 = char_1 + char_1;
	float_1 = float_2;
	char_1 = char_1 * char_1;
	int_2 = int_1 + int_1;
	double_1 = double_1;
	short_1 = short_1 * short_1;
	return short_1;
	v_emalloc(short_2);

}
void v_eprintf( short parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	double_2 = double_1 * double_1;
	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_2;
	long_1 = long_1;
	float_1 = float_1 * float_2;
	char controller4vul_1156[3];
	fgets(controller4vul_1156 ,3 ,stdin);
	if( strcmp( controller4vul_1156, "}}") < 0)
	{
		long long_2 = 1;
		long long_3 = 1;
		if(uni_para == 893)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		long_2 = long_2 + long_3;
	}
	double_3 = double_1;
	double_3 = double_1 + double_2;
}
long v_malloc( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int_1 = int_2;
	double_1 = double_1 + double_1;
	short_1 = short_2;
	char_2 = char_1 + char_1;
	char_1 = char_3;
	char_1 = char_2 + char_1;
	double_1 = double_2;
	short_4 = short_3 * short_4;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "*C") < 0)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_2 = int_3 + int_4;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 + long_2;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	return long_1;
}
void v_emalloc( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_4 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_2;
	float_1 = float_1 * float_2;
	if(1)
	{
		float float_3 = 1;
		long_1 = v_malloc(unsigned_int_1);

		float_2 = float_3 * float_3;
	}
	v_eprintf(short_1,float_4,int_1,unsigned_int_1,-1 );

}
void v_suite_create( char parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = v_check_list_create();

	int_1 = int_1;
	int_2 = int_2;
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "e/") < 0)
	{
		double_1 = double_1 + double_2;
	}
	v_emalloc(short_1);

	double_1 = double_2;
}
char v_money_suite()
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	v_suite_create(char_1);

	float_2 = float_1 + float_1;
	float_1 = float_3 * float_3;
	v_suite_add_tcase(char_1,long_1);

	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_1;
	long_2 = long_3;
	return char_2;
	long_2 = v_tcase_create(unsigned_int_3);

}
int main()
{
	int uni_para =893;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_1 = 1;
	v_srunner_run_all(char_1,char_1,uni_para);

	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_1;
	char_1 = char_2 * char_2;
	char_2 = char_2 * char_3;
	char_3 = char_1 * char_4;
	char_5 = char_2 * char_2;
	short_1 = short_1 + short_2;
	short_2 = short_2 * short_2;
	return int_1;
}

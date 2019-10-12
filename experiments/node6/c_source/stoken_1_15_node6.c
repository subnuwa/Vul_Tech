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

long v_stoken_format_tokencode( long parameter_1);
unsigned int v_key_from_time( unsigned int parameter_1,int parameter_2,char parameter_3,short parameter_4);
long v_bcd_write( double parameter_1,int parameter_2,char parameter_3);
void v_securid_compute_tokencode( double parameter_1,char parameter_2,char parameter_3);
long v_update_tokencode( unsigned int parameter_1);
double v_clicked_to_clipboard( char parameter_1,double parameter_2);
short v_set_red_label( long parameter_1,short parameter_2);
void v_format_exp_date( float parameter_1);
short v_create_app_window();
unsigned int v_delete_callback( int parameter_1,float parameter_2,long parameter_3);
unsigned int v_draw_progress_bar_callback( float parameter_1,char parameter_2,short parameter_3);
int v_create_app_window_common( double parameter_1);
double v_copy_tokencode();
unsigned int v_press_to_clipboard( double parameter_1,char parameter_2,char parameter_3);
void v_create_small_app_window();
int v_securid_token_interval( char parameter_1);
int v_securid_pin_required( double parameter_1);
int v_securid_decrypt_pin( double parameter_1,int parameter_2,char parameter_3);
double v___gtk_builder_new_from_file( double parameter_1);
float v_do_password_dialog( char parameter_1);
void v_stc_aes128_ecb_decrypt( double parameter_1,char parameter_2,short parameter_3);
char v_v2_decrypt_seed( unsigned int parameter_1,unsigned int parameter_2,short parameter_3);
float v_v3_parse_date( char parameter_1);
void v_stc_aes256_cbc_decrypt( short parameter_1,long parameter_2,int parameter_3,float parameter_4,int parameter_5);
short v_sha256_hmac( double parameter_1,int parameter_2,int parameter_3,int parameter_4,float parameter_5);
float v_sha256_pbkdf2( float parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5,long parameter_6);
long v_v3_derive_key( int parameter_1,double parameter_2,char parameter_3,int parameter_4,long parameter_5);
void v_v3_compute_hmac( char parameter_1,int parameter_2,char parameter_3,double parameter_4);
void v_stc_sha256_hash( char parameter_1,double parameter_2);
void v_v3_compute_hash( char parameter_1,double parameter_2,long parameter_3,int parameter_4);
char v_v3_scrub_devid( float parameter_1,char parameter_2);
int v_v3_decrypt_seed( unsigned int parameter_1,char parameter_2,unsigned int parameter_3);
int v_securid_decrypt_seed( int parameter_1,unsigned int parameter_2,double parameter_3);
int v_securid_pass_required( float parameter_1);
unsigned int v_request_credentials( long parameter_1);
long v_warning_dialog( char parameter_1,long parameter_2,double parameter_3);
unsigned int v_adjusted_time();
double v_securid_unix_exp_date( double parameter_1);
int v_securid_check_exp( double parameter_1,double parameter_2);
int v_parse_opt_use_time();
int v_securid_devid_required( short parameter_1);
char v___error_dialog( int parameter_1,double parameter_2,int parameter_3,int parameter_4);
int v_error_dialog( int parameter_1,short parameter_2);
void v_xstrncpy( char parameter_1,int parameter_2,char parameter_3);
int v_securid_pin_format_ok( float parameter_1);
short v_decode_rc_token( unsigned int parameter_1,float parameter_2);
float v_generate_key_hash( unsigned int parameter_1,int parameter_2,double parameter_3,unsigned int parameter_4,char parameter_5);
int v_securid_rand(int parameter_2,int parameter_3);
int v_securid_random_token( unsigned int parameter_1);
unsigned int v_read_token_from_file( char parameter_1,unsigned int parameter_2);
void v_strstarts( short parameter_1,char parameter_2);
short v_hex2nibble( char parameter_1);
double v_hex2byte( int parameter_1);
unsigned int v_v3_decode_token( short parameter_1,unsigned int parameter_2);
short v_encrypt_then_xor( short parameter_1,char parameter_2,float parameter_3);
unsigned int v_securid_mac( int parameter_1,int parameter_2,long parameter_3);
int v_securid_shortmac( long parameter_1,int parameter_2);
float v_get_bits( char parameter_1,long parameter_2,int parameter_3);
void v_numinput_to_bits( double parameter_1,short parameter_2,char parameter_3);
double v_v2_decode_token( float parameter_1,long parameter_2);
int v_securid_decode_token( unsigned int parameter_1,short parameter_2);
void v_sdtid_free( double parameter_1);
long v_decrypt_seed( unsigned int parameter_1,long parameter_2,char parameter_3,int parameter_4);
void v_recursive_hash( int parameter_1,unsigned int parameter_2,short parameter_3);
char v___hash_section( long parameter_1,float parameter_2,int parameter_3);
unsigned int v_hash_section( float parameter_1,int parameter_2,unsigned int parameter_3,float parameter_4,char parameter_5);
double v_calc_key( long parameter_1,long parameter_2,char parameter_3,double parameter_4,int parameter_5);
void v_decrypt_secret( long parameter_1,unsigned int parameter_2,int parameter_3,long parameter_4);
void v_stc_aes128_ecb_encrypt( float parameter_1,char parameter_2,short parameter_3);
char v_xor_block( unsigned int parameter_1,short parameter_2);
float v_cbc_hash( long parameter_1,unsigned int parameter_2,short parameter_3,double parameter_4,int parameter_5);
float v_hash_password( unsigned int parameter_1,int parameter_2,double parameter_3,char parameter_4);
int v_stc_b64_decode( short parameter_1,long parameter_2,short parameter_3,double parameter_4);
double v_lookup_b64( long parameter_1,double parameter_2,char parameter_3,int parameter_4);
int v_b64_or_warn( unsigned int parameter_1,char parameter_2,short parameter_3,int parameter_4);
float v_str_or_warn( long parameter_1,int parameter_2,char parameter_3,int uni_para);
int v_generate_all_keys( short parameter_1,int parameter_2,int uni_para);
int v_sdtid_decrypt( int parameter_1,unsigned int parameter_2,int uni_para);
void v_parse_date( float parameter_1);
double v_lookup_int( double parameter_1,int parameter_2,int parameter_3);
unsigned int v___lookup_common( char parameter_1,float parameter_2,short parameter_3,int uni_para);
int v_lookup_common( double parameter_1,unsigned int parameter_2,int uni_para);
short v_lookup_string( short parameter_1,short parameter_2,float parameter_3,int uni_para);
double v_decode_fields(int uni_para);
int v_err_printf( double parameter_1,float parameter_2,int parameter_3);
short v_missing_node( int parameter_1,unsigned int parameter_2);
short v_xmlnode_is_named( char parameter_1,double parameter_2,int uni_para);
void v_find_child_named( double parameter_1,double parameter_2);
short v_parse_sdtid( long parameter_1,double parameter_2,int parameter_3,int parameter_4);
short v_decode_one( double parameter_1,int parameter_2,int parameter_3,int uni_para);
int v_sdtid_decode( float parameter_1,char parameter_2,int uni_para);
int v___stoken_parse_and_decode_token( float parameter_1,int parameter_2,int parameter_3,int uni_para);
void v_dbg( int parameter_1,unsigned int parameter_2);
double v_next_token( char parameter_1,char parameter_2,int parameter_3);
int v_parse_rcline( char parameter_1,int parameter_2,char parameter_3,char parameter_4);
unsigned int v_fopen_rcfile( long parameter_1,unsigned int parameter_2,long parameter_3,long parameter_4);
void v___stoken_zap_rcfile_data( float parameter_1);
int v___stoken_read_rcfile( float parameter_1,char parameter_2,unsigned int parameter_3);
float v_xmalloc( float parameter_1);
float v_xzalloc();
int v_stc_standalone_init();
int v_common_init( char parameter_1,int uni_para);
unsigned int v_show_version();
int v_usage_cli();
double v_usage_common();
void v_usage_gui();
void v_warn( int parameter_1,int parameter_2);
double v_xstrdup( int parameter_1);
short v_die( double parameter_1,short parameter_2);
int v_parse_cmdline( int parameter_1,char parameter_2,int parameter_3);
long v_stoken_format_tokencode( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_2;
	short_1 = short_1 * short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Y)") > 0)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1;
		}
		long_3 = long_1 * long_2;
	}
	long_1 = long_2;
	return long_1;
}
unsigned int v_key_from_time( unsigned int parameter_1,int parameter_2,char parameter_3,short parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_2;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 + short_1;
	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_1 * int_3;
	}
	return unsigned_int_3;
}
long v_bcd_write( double parameter_1,int parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	char_2 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		char char_4 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char_3 = char_3 + char_4;
		long_1 = long_1 * long_1;
		long_1 = long_1 + long_2;
		double_3 = double_1 + double_2;
	}
	return long_2;
}
void v_securid_compute_tokencode( double parameter_1,char parameter_2,char parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_8 = 1;
	short short_2 = 1;
	long_1 = long_1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	int_4 = int_4 + int_4;
	v_stc_aes128_ecb_encrypt(float_1,char_1,short_1);

	double_2 = double_1 * double_2;
	double_4 = double_3 * double_2;
	int_1 = int_3 + int_2;
	double_5 = double_2 + double_4;
	int_5 = int_5 * int_3;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	int_5 = v_securid_token_interval(char_1);

	double_5 = double_4 * double_2;
	double_6 = double_7;
	unsigned_int_4 = unsigned_int_1;
	unsigned_int_5 = v_key_from_time(unsigned_int_2,int_5,char_2,short_1);

	unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
	long_1 = long_1 * long_2;
	unsigned_int_7 = unsigned_int_6 + unsigned_int_4;
	long_1 = v_bcd_write(double_6,int_6,char_2);

	double_3 = double_2;
	int_6 = int_1 + int_1;
	int_2 = int_5;
	long_1 = long_1 + long_1;
	if(1)
	{
		int_5 = int_7 * int_8;
	}
	if(1)
	{
		double_8 = double_1;
	}
	short_2 = short_1 * short_2;
	float_1 = float_1 * float_1;
	double_7 = double_8;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_5 = int_2 * int_8;
		double_8 = double_8 * double_4;
		if(1)
		{
			int_1 = int_7 * int_7;
		}
		double_6 = double_4 * double_2;
	}
}
long v_update_tokencode( unsigned int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	long long_3 = 1;
	int_1 = int_1;
	v_securid_compute_tokencode(double_1,char_1,char_2);

	int_3 = int_2 + int_2;
	char_2 = char_2 + char_3;
	short_1 = short_1 * short_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double_3 = double_1 + double_2;
		double_2 = double_3 * double_4;
		float_2 = float_1 + float_2;
	}
	long_2 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_3;
	if(1)
	{
		double_2 = double_4 + double_4;
	}
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	int_3 = int_2 * int_4;
	if(1)
	{
		char_2 = char_2 + char_1;
		if(1)
		{
			long long_4 = 1;
			unsigned_int_3 = v_adjusted_time();

			long_1 = v_stoken_format_tokencode(long_3);

			long_4 = long_4 * long_4;
		}
		double_1 = double_4 * double_4;
		short_1 = v_die(double_1,short_1);

		double_3 = double_2 + double_3;
	}
	return long_1;
}
double v_clicked_to_clipboard( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = v_copy_tokencode();

	int_1 = int_1 + int_1;
	return double_1;
}
short v_set_red_label( long parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long_1 = long_1 * long_2;
	double_2 = double_1 + double_2;
	double_2 = double_3 + double_2;
	return short_1;
}
void v_format_exp_date( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		short_1 = v_set_red_label(long_1,short_1);

		double_1 = double_1;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_2;
	}
	double_3 = v_securid_unix_exp_date(double_3);

}
short v_create_app_window()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_4 = 1;
	float float_2 = 1;
	int int_6 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_2;
	unsigned_int_1 = v_press_to_clipboard(double_1,char_1,char_1);

	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	double_2 = v___gtk_builder_new_from_file(double_2);

	unsigned_int_3 = unsigned_int_2;
	int_1 = int_3 + int_2;
	char_1 = char_2;
	int_1 = v_create_app_window_common(double_1);

	float_1 = float_1 * float_1;
	int_5 = int_1 * int_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		double_3 = double_3 * double_3;
	}
	if(1)
	{
		double_3 = v_clicked_to_clipboard(char_3,double_2);

		char_5 = char_1 * char_4;
	}
	double_3 = double_3 * double_4;
	double_4 = double_4;
	v_format_exp_date(float_2);

	int_2 = int_4 + int_6;
	char_5 = char_3 + char_4;
	short_1 = v_set_red_label(long_1,short_2);

	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	return short_3;
}
unsigned int v_delete_callback( int parameter_1,float parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_3;
}
unsigned int v_draw_progress_bar_callback( float parameter_1,char parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	double_2 = double_1 + double_1;
	double_1 = double_3 * double_1;
	float_1 = float_1;
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1 * char_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1 + double_1;
	double_2 = double_2 + double_3;
	short_3 = short_1;
	return unsigned_int_4;
}
int v_create_app_window_common( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	int_2 = int_1 + int_1;
	char_3 = char_1 * char_2;
	unsigned_int_1 = v_delete_callback(int_1,float_1,long_1);

	int_2 = int_2 + int_2;
	int_4 = int_3 * int_2;
	unsigned_int_1 = v_draw_progress_bar_callback(float_1,char_4,short_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	char_2 = char_5 + char_1;
	return int_1;
}
double v_copy_tokencode()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1;
	short_1 = short_2;
	char_1 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_2 * short_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	return double_1;
}
unsigned int v_press_to_clipboard( double parameter_1,char parameter_2,char parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = v_copy_tokencode();

	long_3 = long_1 * long_2;
	return unsigned_int_1;
}
void v_create_small_app_window()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double_1 = v___gtk_builder_new_from_file(double_2);

	double_3 = double_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	int_2 = v_create_app_window_common(double_3);

	int_4 = int_3 + int_2;
	int_5 = int_5 * int_5;
	unsigned_int_2 = v_press_to_clipboard(double_4,char_1,char_1);

}
int v_securid_token_interval( char parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "6|") > 0)
	{
	}
	return int_1;
}
int v_securid_pin_required( double parameter_1)
{
	int int_1 = 1;
	return int_1;
}
int v_securid_decrypt_pin( double parameter_1,int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = v_securid_mac(int_1,int_2,long_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_stc_aes128_ecb_decrypt(double_1,char_1,short_1);

	long_1 = long_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = v_hex2byte(int_2);

		long_1 = long_1;
		long_1 = long_1 + long_2;
	}
	long_1 = long_1 + long_1;
	int_2 = int_1 * int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long_2 = long_2 + long_2;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	return int_2;
	int_1 = v_securid_pin_format_ok(float_1);

}
double v___gtk_builder_new_from_file( double parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = v_die(double_1,short_2);

	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "|G") > 0)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_3 + short_4;
	}
	return double_1;
}
float v_do_password_dialog( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	float float_1 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	int_2 = int_1 + int_2;
	char_2 = char_1 + char_2;
	double_1 = v___gtk_builder_new_from_file(double_2);

	int_4 = int_3 * int_3;
	short_1 = short_3 + short_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "wo") < 0)
	{
		int_4 = int_3 + int_2;
		int_4 = int_4 + int_1;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	return float_1;
}
void v_stc_aes128_ecb_decrypt( double parameter_1,char parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_2;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1;
}
char v_v2_decrypt_seed( unsigned int parameter_1,unsigned int parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	float_2 = float_1 * float_2;
	char_2 = char_1 * char_1;
	char_1 = char_1;
	unsigned_int_1 = v_securid_mac(int_1,int_1,long_1);

	char_1 = char_2 + char_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	float_3 = v_generate_key_hash(unsigned_int_2,int_1,double_1,unsigned_int_4,char_1);

	int_1 = int_1 * int_1;
	double_3 = double_2 + double_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
	}
	int_2 = int_1;
	return char_1;
	v_stc_aes128_ecb_decrypt(double_4,char_1,short_1);

}
float v_v3_parse_date( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_1;
	double_3 = double_1 + double_3;
	int_2 = int_1 + int_2;
	int_1 = int_1 + int_2;
	long_2 = long_1 * long_1;
	return float_1;
}
void v_stc_aes256_cbc_decrypt( short parameter_1,long parameter_2,int parameter_3,float parameter_4,int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_2;
	char_2 = char_1 + char_1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1;
}
short v_sha256_hmac( double parameter_1,int parameter_2,int parameter_3,int parameter_4,float parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_6 = 1;
	short short_3 = 1;
	char_2 = char_1 + char_1;
	int_1 = int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "`") > 0)
	{
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int_5 = int_3 * int_4;
		v_stc_sha256_hash(char_2,double_1);

		int_3 = int_5 + int_2;
		short_1 = short_1 * short_1;
	}
	short_1 = short_2;
	float_2 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		float_1 = float_1 + float_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_6 = int_1 + int_1;
	short_1 = short_1 + short_1;
	return short_3;
}
float v_sha256_pbkdf2( float parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5,long parameter_6)
{
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	float_1 = float_1 + float_1;
	short_1 = v_sha256_hmac(double_1,int_1,int_1,int_1,float_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	char_2 = char_1 + char_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_2 = double_1 * double_1;
	double_1 = double_2;
	int_1 = int_1 + int_2;
	long_2 = long_1 * long_2;
	long_3 = long_1 + long_3;
	double_3 = double_2 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		char_3 = char_2 + char_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_3 = 1;
			float float_4 = 1;
			float_4 = float_1 + float_3;
		}
	}
	return float_2;
}
long v_v3_derive_key( int parameter_1,double parameter_2,char parameter_3,int parameter_4,long parameter_5)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_3 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_1;
	double_1 = double_1 + double_1;
	char_2 = char_1 * char_1;
	float_2 = float_1 + float_1;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	float_1 = v_sha256_pbkdf2(float_1,int_2,unsigned_int_4,int_2,int_3,long_1);

	int_3 = int_2 * int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "b:") > 0)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "L") > 0)
	{
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	int_5 = int_1 + int_4;
	char_2 = char_2 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double_1 = double_2 + double_1;
	}
	int_6 = int_1 + int_1;
	return long_3;
}
void v_v3_compute_hmac( char parameter_1,int parameter_2,char parameter_3,double parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_2;
	long_1 = v_v3_derive_key(int_1,double_3,char_1,int_2,long_2);

	short_1 = v_sha256_hmac(double_2,int_1,int_2,int_3,float_1);

	char_2 = char_2 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
void v_stc_sha256_hash( char parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
}
void v_v3_compute_hash( char parameter_1,double parameter_2,long parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long_2 = long_1 + long_2;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_3 + long_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "wT") > 0)
	{
		v_stc_sha256_hash(char_1,double_1);

		int_2 = int_3 + int_3;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "g") > 0)
	{
		double double_2 = 1;
		double double_3 = 1;
		int int_4 = 1;
		double_3 = double_2 * double_1;
		int_4 = int_1 + int_3;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
}
char v_v3_scrub_devid( float parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_1 = int_1 + int_1;
		}
	}
	int_3 = int_2 + int_1;
	return char_1;
}
int v_v3_decrypt_seed( unsigned int parameter_1,char parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	char char_3 = 1;
	short short_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 * int_2;
	short_1 = short_1 + short_1;
	float_1 = v_v3_parse_date(char_1);

	int_2 = int_1 + int_2;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "+;") < 0)
	{
	}
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	v_stc_aes256_cbc_decrypt(short_2,long_2,int_2,float_2,int_3);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "8S") < 0)
	{
	}
	long_3 = long_1 + long_1;
	v_v3_compute_hmac(char_2,int_1,char_2,double_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	int_1 = int_4 * int_2;
	double_3 = double_2 + double_3;
	double_2 = double_2 + double_4;
	v_v3_compute_hash(char_3,double_1,long_1,int_2);

	short_1 = short_3 + short_1;
	float_3 = float_1;
	double_4 = double_1;
	char_1 = v_v3_scrub_devid(float_4,char_4);

	long_3 = v_v3_derive_key(int_3,double_4,char_4,int_5,long_3);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_1;
	return int_3;
}
int v_securid_decrypt_seed( int parameter_1,unsigned int parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_4 = 1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
		}
	}
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "a") > 0)
	{
		double double_2 = 1;
		int_1 = v_sdtid_decrypt(int_2,unsigned_int_1,-1 );

		int_3 = v_v3_decrypt_seed(unsigned_int_2,char_1,unsigned_int_2);

		char_1 = v_v2_decrypt_seed(unsigned_int_1,unsigned_int_2,short_1);

		double_2 = double_1 * double_2;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_3 * double_1;
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
	return int_4;
}
int v_securid_pass_required( float parameter_1)
{
	int int_1 = 1;
	return int_1;
}
unsigned int v_request_credentials( long parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int_1 = v_error_dialog(int_1,short_1);

	float_1 = v_do_password_dialog(char_1);

	long_1 = v_warning_dialog(char_2,long_2,double_1);

	int_1 = v_securid_pin_format_ok(float_1);

	v_xstrncpy(char_1,int_1,char_3);

	double_1 = double_2;
	return unsigned_int_1;
	int_1 = v_securid_pass_required(float_2);

	int_1 = v_securid_decrypt_seed(int_1,unsigned_int_1,double_1);

	v_warn(int_2,int_1);

	int_2 = v_securid_decrypt_pin(double_2,int_2,char_2);

	int_3 = v_securid_pin_required(double_3);

}
long v_warning_dialog( char parameter_1,long parameter_2,double parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	return long_1;
	char_1 = v___error_dialog(int_1,double_1,int_2,int_1);

}
unsigned int v_adjusted_time()
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double v_securid_unix_exp_date( double parameter_1)
{
	double double_1 = 1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if(remainder_check(controller_2,100,2))
	{
	}
	return double_1;
}
int v_securid_check_exp( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	int_4 = int_3 * int_3;
	return int_2;
	double_1 = v_securid_unix_exp_date(double_1);

}
int v_parse_opt_use_time()
{
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short_1 = v_die(double_1,short_1);

	long_1 = long_1 + long_1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "6") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	return int_1;
}
int v_securid_devid_required( short parameter_1)
{
	int int_1 = 1;
	return int_1;
}
char v___error_dialog( int parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_6 = 1;
	long long_7 = 1;
	char char_1 = 1;
	long_3 = long_1 + long_2;
	long_5 = long_4 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_2;
	float_3 = float_1 + float_2;
	long_6 = long_6 + long_7;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "O") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return char_1;
}
int v_error_dialog( int parameter_1,short parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	return int_1;
	char_1 = v___error_dialog(int_2,double_1,int_2,int_3);

}
void v_xstrncpy( char parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_1;
	long_1 = long_1 + long_1;
}
int v_securid_pin_format_ok( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double_3 = double_1 * double_2;
	short_1 = short_1 + short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "3G") > 0)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "(") < 0)
		{
		}
	}
	return int_1;
}
short v_decode_rc_token( unsigned int parameter_1,float parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	int_1 = int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ")") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		int_1 = v_securid_pin_format_ok(float_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "Z&") < 0)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int_2 = v_securid_decode_token(unsigned_int_2,short_1);

			v_xstrncpy(char_1,int_1,char_2);

			double_1 = double_1 * double_2;
		}
		if(1)
		{
			if(1)
			{
				short short_2 = 1;
				short short_3 = 1;
				double_3 = v_xstrdup(int_2);

				short_2 = short_2 * short_3;
			}
			if(1)
			{
				int int_4 = 1;
				int_4 = int_3 * int_4;
			}
		}
	}
	return short_4;
	v_warn(int_3,int_5);

}
float v_generate_key_hash( unsigned int parameter_1,int parameter_2,double parameter_3,unsigned int parameter_4,char parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_2;
	int_1 = int_2;
	int_1 = v_securid_shortmac(long_3,int_1);

	int_3 = int_4;
	if(1)
	{
		char_1 = char_1 * char_1;
		if(1)
		{
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	char_1 = char_1 + char_2;
	if(1)
	{
		int_3 = int_3 * int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_2 = 1;
			if(1)
			{
				int_1 = int_3;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
			}
			unsigned_int_5 = v_securid_mac(int_2,int_3,long_1);

			float_1 = float_1 + float_2;
		}
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 + char_3;
	}
	unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
	float_4 = float_1 + float_3;
	return float_1;
}
int v_securid_rand(int parameter_2,int parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_1 = int_2;
		char_1 = char_1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "#") > 0)
		{
			char_1 = char_1 * char_1;
		}
		double_1 = double_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
		}
	}
	return int_2;
}
int v_securid_random_token( unsigned int parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_4 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = v_securid_shortmac(long_1,int_1);

	int_1 = int_1 * int_1;
	int_1 = int_2 * int_2;
	int_2 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	float_1 = v_generate_key_hash(unsigned_int_1,int_4,double_1,unsigned_int_1,char_1);

	int_6 = int_5 + int_3;
	int_4 = v_securid_rand(int_5,int_4);

	double_1 = double_1 + double_2;
	double_2 = double_3;
	float_2 = float_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_3 * int_1;
	v_stc_aes128_ecb_encrypt(float_4,char_2,short_1);

	short_3 = short_2 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		double_4 = double_1 * double_4;
	}
	char_1 = char_2 + char_1;
	return int_6;
}
unsigned int v_read_token_from_file( char parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = short_1 + short_2;
	int_1 = v___stoken_parse_and_decode_token(float_1,int_2,int_3,-1 );

	int_1 = int_4 + int_3;
	double_1 = double_1 + double_2;
	long_2 = long_1 + long_2;
	int_4 = int_4 + int_3;
	if(1)
	{
	}
	float_3 = float_2 * float_3;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "TG") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	float_1 = float_1 + float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double double_4 = 1;
		short_1 = short_1 + short_2;
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
		}
		double_2 = double_1 * double_3;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		}
		double_1 = double_3 + double_4;
	}
	return unsigned_int_1;
}
void v_strstarts( short parameter_1,char parameter_2)
{
}
short v_hex2nibble( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_2;
	return short_1;
}
double v_hex2byte( int parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	return double_1;
	short_1 = v_hex2nibble(char_1);

}
unsigned int v_v3_decode_token( short parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			if(1)
			{
			}
			double_1 = v_hex2byte(int_2);

			short_1 = short_2 + short_1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		}
		if(1)
		{
			int_3 = int_1 + int_2;
		}
	}
	char_1 = char_1 + char_2;
	double_3 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
	}
	if(1)
	{
		char char_3 = 1;
		double double_4 = 1;
		int_1 = v_stc_b64_decode(short_3,long_1,short_1,double_3);

		char_2 = char_3 + char_2;
		double_4 = double_4 + double_1;
	}
	long_1 = long_1 + long_1;
	int_3 = int_1 * int_4;
	long_1 = long_2 + long_1;
	return unsigned_int_3;
}
short v_encrypt_then_xor( short parameter_1,char parameter_2,float parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short_1 = short_1 + short_1;
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	return short_2;
	v_stc_aes128_ecb_encrypt(float_1,char_1,short_1);

}
unsigned int v_securid_mac( int parameter_1,int parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_1;
	double_2 = double_1 * double_1;
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = v_encrypt_then_xor(short_2,char_1,float_1);

	double_3 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_3;
	double_2 = double_2 * double_4;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_5 = double_3 + double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_3 = 1;
		short_3 = short_2 + short_3;
	}
	int_4 = int_3 + int_2;
	double_1 = double_5;
	if(1)
	{
		float_2 = float_2 + float_1;
	}
	int_4 = int_4 + int_2;
	long_1 = long_1;
	int_3 = int_1;
	return unsigned_int_3;
}
int v_securid_shortmac( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned_int_1 = v_securid_mac(int_1,int_1,long_1);

	char_2 = char_1 * char_1;
	char_2 = char_2 + char_2;
	return int_2;
}
float v_get_bits( char parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_2;
	double_1 = double_1 * double_2;
	int_4 = int_2 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		int int_6 = 1;
		float_1 = float_1 * float_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		int_6 = int_1 + int_5;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_1;
			double_1 = double_2;
		}
	}
	return float_1;
}
void v_numinput_to_bits( double parameter_1,short parameter_2,char parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1;
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_3 = 1;
		unsigned_int_1 = unsigned_int_1;
		float_1 = float_1 * float_1;
		char_1 = char_1 * char_2;
		long_3 = long_2 * long_3;
		char_3 = char_3 + char_3;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_3 = 1;
			int_3 = int_1 * int_2;
			double_3 = double_2 + double_3;
		}
	}
}
double v_v2_decode_token( float parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_3 = 1;
	double double_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char_2 = char_1 + char_1;
	long_2 = long_1 + long_1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	float_1 = v_get_bits(char_3,long_1,int_1);

	float_3 = float_2 + float_1;
	double_1 = double_1 * double_2;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	short_3 = short_4;
	int_1 = v_securid_shortmac(long_2,int_1);

	short_3 = short_4 + short_1;
	long_2 = long_3 + long_3;
	v_numinput_to_bits(double_3,short_1,char_2);

	int_1 = int_1;
	float_5 = float_4 + float_2;
	double_2 = double_2;
	double_1 = double_1 + double_2;
	int_1 = int_2;
	double_4 = double_1 * double_1;
	return double_5;
}
int v_securid_decode_token( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	double_1 = v_v2_decode_token(float_1,long_1);

	unsigned_int_1 = v_v3_decode_token(short_1,unsigned_int_1);

}
void v_sdtid_free( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	short_1 = short_2;
	short_3 = short_1;
	float_2 = float_1 + float_2;
	int_2 = int_1 * int_2;
}
long v_decrypt_seed( unsigned int parameter_1,long parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double_2 = double_1 * double_1;
	long_3 = long_1 + long_2;
	v_stc_aes128_ecb_encrypt(float_1,char_1,short_1);

	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_1;
	return long_3;
	char_2 = v_xor_block(unsigned_int_2,short_2);

}
void v_recursive_hash( int parameter_1,unsigned int parameter_2,short parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int_1 = int_1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
			char_1 = char_1 * char_1;
		}
		double_3 = double_1 + double_2;
		double_5 = double_3 * double_4;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 * short_1;
		}
		int_3 = int_1 * int_2;
		if(1)
		{
		}
		float_2 = float_1 * float_1;
		if(1)
		{
			double double_6 = 1;
			double_4 = double_1 * double_6;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
		}
		float_2 = float_2 * float_2;
		if(1)
		{
			char char_2 = 1;
			char_1 = char_2 + char_1;
		}
		if(1)
		{
			double_4 = double_1 + double_5;
		}
		char controller_8[2];
		fgets(controller_8 ,2 ,stdin);
		if( strcmp( controller_8, "c") > 0)
		{
			double_3 = double_4 + double_5;
			double_5 = double_5 * double_3;
			if(1)
			{
				double double_7 = 1;
				unsigned int unsigned_int_5 = 1;
				double_5 = double_1 * double_7;
				unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
				int_1 = int_1 + int_1;
			}
		}
		unsigned_int_4 = unsigned_int_1;
		if(1)
		{
			int_2 = int_1 + int_1;
		}
		int_4 = int_1 + int_1;
		if(1)
		{
			double_1 = double_2;
		}
	}
	int_4 = int_2 + int_5;
	float_4 = float_3 * float_3;
}
char v___hash_section( long parameter_1,float parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long_3 = long_1 + long_2;
	v_recursive_hash(int_1,unsigned_int_1,short_1);

	float_1 = float_1 + float_1;
	return char_1;
}
unsigned int v_hash_section( float parameter_1,int parameter_2,unsigned int parameter_3,float parameter_4,char parameter_5)
{
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	char_1 = v___hash_section(long_1,float_1,int_1);

	double_2 = double_1 + double_1;
	int_2 = int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return unsigned_int_1;
	float_1 = v_cbc_hash(long_1,unsigned_int_1,short_1,double_3,int_3);

}
double v_calc_key( long parameter_1,long parameter_2,char parameter_3,double parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_2;
	int_3 = int_3 + int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2;
	float_1 = v_cbc_hash(long_1,unsigned_int_1,short_3,double_1,int_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return double_2;
}
void v_decrypt_secret( long parameter_1,unsigned int parameter_2,int parameter_3,long parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short_2 = short_1 + short_1;
	char_1 = v_xor_block(unsigned_int_1,short_2);

	double_2 = double_1 * double_1;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_stc_aes128_ecb_encrypt(float_1,char_1,short_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
}
void v_stc_aes128_ecb_encrypt( float parameter_1,char parameter_2,short parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_3;
}
char v_xor_block( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_1;
	}
	return char_1;
}
float v_cbc_hash( long parameter_1,unsigned int parameter_2,short parameter_3,double parameter_4,int parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	float_1 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			long_3 = long_1 * long_2;
		}
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "i") == 0)
		{
			float float_4 = 1;
			long_2 = long_3 * long_3;
			v_stc_aes128_ecb_encrypt(float_3,char_1,short_1);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			long_3 = long_2 * long_1;
			float_4 = float_3 * float_2;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	return float_3;
	char_1 = v_xor_block(unsigned_int_4,short_2);

}
float v_hash_password( unsigned int parameter_1,int parameter_2,double parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	double_1 = double_2;
	int_2 = int_1 + int_1;
	double_2 = double_2;
	unsigned_int_1 = unsigned_int_1;
	long_3 = long_1 + long_2;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_2;
	float_1 = v_cbc_hash(long_3,unsigned_int_2,short_2,double_2,int_1);

	char_2 = char_3 * char_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		short short_4 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		double_3 = double_2 + double_2;
		char_1 = v_xor_block(unsigned_int_1,short_3);

		short_4 = short_3 * short_4;
		int_1 = int_2 + int_2;
	}
	return float_1;
}
int v_stc_b64_decode( short parameter_1,long parameter_2,short parameter_3,double parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_2;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	double_1 = double_1;
	double_2 = double_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	double_1 = double_2 + double_4;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_2 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		char char_3 = 1;
		char_1 = char_3;
	}
	return int_1;
}
double v_lookup_b64( long parameter_1,double parameter_2,char parameter_3,int parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	short short_2 = 1;
	int_1 = v_lookup_common(double_1,unsigned_int_1,-1 );

	short_1 = short_1 + short_1;
	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	int_1 = int_2 + int_1;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	float_2 = float_1 * float_1;
	long_1 = long_1 * long_2;
	int_2 = v_stc_b64_decode(short_1,long_2,short_2,double_2);

	double_2 = double_1 + double_1;
	return double_2;
}
int v_b64_or_warn( unsigned int parameter_1,char parameter_2,short parameter_3,int parameter_4)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short_1 = v_missing_node(int_1,unsigned_int_1);

	short_1 = short_1 + short_1;
	if(1)
	{
		long long_2 = 1;
		double_1 = v_lookup_b64(long_1,double_1,char_1,int_1);

		long_2 = long_1 * long_1;
	}
	return int_1;
}
float v_str_or_warn( long parameter_1,int parameter_2,char parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	short_3 = short_1 * short_2;
	char controller4vul_1435[3];
	fgets(controller4vul_1435 ,3 ,stdin);
	if( strcmp( controller4vul_1435, "q5") < 0)
	{
		short_2 = v_lookup_string(short_2,short_3,float_1,uni_para);

		float_1 = float_1;
	}
	char_2 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	double_1 = double_1 * double_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int_5 = int_3 * int_4;
	}
	return float_1;
}
int v_generate_all_keys( short parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_6 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 + int_2;
	char_2 = char_1 + char_2;
	long_1 = long_1 * long_1;
	char controller4vul_1434[3];
	fgets(controller4vul_1434 ,3 ,stdin);
	if( strcmp( controller4vul_1434, "*W") < 0)
	{
		float float_2 = 1;
		float_1 = v_str_or_warn(long_2,int_1,char_3,uni_para);

		float_3 = float_2 * float_1;
	}
	float_1 = float_1 * float_1;
	long_2 = long_3 + long_4;
	float_5 = float_3 * float_4;
	char_3 = char_4 * char_4;
	int_4 = int_1;
	int_4 = int_5 * int_2;
	long_3 = long_1 + long_1;
	double_3 = double_1 + double_2;
	int_2 = int_1;
	float_3 = float_1 + float_6;
	return int_1;
}
int v_sdtid_decrypt( int parameter_1,unsigned int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_2;
	short_1 = short_2;
	int_1 = int_1 * int_1;
	char controller4vul_1433[3];
	fgets(controller4vul_1433 ,3 ,stdin);
	if( strcmp( controller4vul_1433, "9.") < 0)
	{
		int_1 = v_generate_all_keys(short_3,int_2,uni_para);

	}
	if(1)
	{
	}
	double_3 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	char_3 = char_1 * char_2;
	double_4 = double_3 * double_3;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_3 + int_2;
	}
	if(1)
	{
		short short_4 = 1;
		short_2 = short_4;
	}
	char controller_6[2];
	fgets(controller_6 ,2 ,stdin);
	if( strcmp( controller_6, "V") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	double_5 = double_5;
	short_2 = short_3;
	return int_1;
}
void v_parse_date( float parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "cr") > 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 + double_2;
}
double v_lookup_int( double parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	if(1)
	{
		char_1 = char_2 * char_3;
	}
	int_4 = v_lookup_common(double_1,unsigned_int_3,-1 );

	long_1 = long_1;
	return double_1;
}
unsigned int v___lookup_common( char parameter_1,float parameter_2,short parameter_3,int uni_para)
{
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double_2 = double_1 * double_1;
		if(1)
		{
		}
		char controller4vul_1439[3];
		fgets(controller4vul_1439 ,3 ,stdin);
		if( strcmp( controller4vul_1439, "h2") > 0)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			char controller4vul_1440[3];
			fgets(controller4vul_1440 ,3 ,stdin);
			if( strcmp( controller4vul_1440, "g[") < 0)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				short_1 = v_xmlnode_is_named(char_1,double_2,uni_para);

				unsigned_int_4 = unsigned_int_5;
			}
		}
	}
	return unsigned_int_2;
}
int v_lookup_common( double parameter_1,unsigned int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double_2 = double_1 + double_1;
	int_3 = int_1 * int_2;
	char controller4vul_1438[3];
	fgets(controller4vul_1438 ,3 ,stdin);
	if( strcmp( controller4vul_1438, "IO") < 0)
	{
		unsigned_int_1 = v___lookup_common(char_1,float_1,short_1,uni_para);

	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	int_3 = int_4 + int_3;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, ";") < 0)
	{
	}
	return int_2;
}
short v_lookup_string( short parameter_1,short parameter_2,float parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int_3 = int_1 + int_2;
	char controller4vul_1436[3];
	fgets(controller4vul_1436 ,3 ,stdin);
	if( strcmp( controller4vul_1436, "o[") > 0)
	{
		double double_2 = 1;
		double_2 = double_1 * double_1;
		char controller4vul_1437[2];
		fgets(controller4vul_1437 ,2 ,stdin);
		if( strcmp( controller4vul_1437, "|") > 0)
		{
			int int_5 = 1;
			int_4 = v_lookup_common(double_1,unsigned_int_1,uni_para);

			int_2 = int_4 * int_5;
		}
	}
	return short_1;
}
double v_decode_fields(int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	long long_3 = 1;
	int int_6 = 1;
	double double_7 = 1;
	int_1 = int_1 * int_1;
	char_1 = char_1 * char_2;
	long_2 = long_1 * long_2;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2 * int_1;
	char controller4vul_1432[2];
	fgets(controller4vul_1432 ,2 ,stdin);
	if( strcmp( controller4vul_1432, "d") < 0)
	{
		float float_3 = 1;
		int_2 = v_sdtid_decrypt(int_1,unsigned_int_3,uni_para);

		float_1 = float_1;
		float_3 = float_2 + float_1;
		int_2 = int_3 + int_4;
	}
	double_4 = double_1 + double_3;
	double_1 = double_5 * double_5;
	double_3 = double_4 + double_6;
	int_3 = int_3 * int_2;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_3 + int_3;
	int_4 = int_1 * int_2;
	long_1 = long_2 * long_1;
	short_3 = short_2 * short_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
	int_4 = int_4 * int_5;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	long_1 = long_1 * long_3;
	int_6 = int_6 + int_4;
	char_1 = char_1 * char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "n") < 0)
	{
		unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
	}
	if(1)
	{
	}
	double_5 = double_6 + double_1;
	if(1)
	{
		long long_4 = 1;
		float_1 = float_1 * float_2;
		long_4 = long_2 + long_4;
	}
	double_5 = double_3 * double_6;
	return double_7;
}
int v_err_printf( double parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	char_1 = char_1;
	float_1 = float_1 + float_2;
	return int_2;
}
short v_missing_node( int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int_1 = v_err_printf(double_1,float_1,int_1);

	float_1 = float_2 * float_1;
	return short_1;
}
short v_xmlnode_is_named( char parameter_1,double parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	char controller4vul_1441[2];
	fgets(controller4vul_1441 ,2 ,stdin);
	if( strcmp( controller4vul_1441, "d") > 0)
	{
		if(uni_para == 447)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
	}
	char_2 = char_1 * char_1;
}
void v_find_child_named( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 + double_1;
		}
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "!") < 0)
		{
		}
	}
	short_1 = v_xmlnode_is_named(char_1,double_2,-1 );

}
short v_parse_sdtid( long parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	v_find_child_named(double_1,double_1);

	long_2 = long_1 + long_1;
	char_3 = char_1 + char_2;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	short_1 = v_xmlnode_is_named(char_4,double_2,-1 );

	double_1 = double_2 * double_1;
	if(1)
	{
		char char_5 = 1;
		int_2 = int_1 + int_2;
		char_5 = char_2 + char_5;
	}
	float_2 = float_1 + float_1;
	char_6 = char_6 + char_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				char char_7 = 1;
				char_7 = char_1;
				double_2 = double_1 * double_1;
			}
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			short_2 = v_missing_node(int_2,unsigned_int_2);

			int_1 = int_1 * int_3;
			double_2 = double_1;
		}
		char controller_8[3];
		fgets(controller_8 ,3 ,stdin);
		if( strcmp( controller_8, "^N") > 0)
		{
			unsigned int unsigned_int_3 = 1;
			int int_4 = 1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
			int_4 = int_1 * int_4;
		}
		if(1)
		{
			float float_3 = 1;
			double double_3 = 1;
			float_3 = float_2 + float_2;
			double_1 = double_3 * double_1;
		}
	}
	int_3 = int_3 * int_1;
	return short_2;
}
short v_decode_one( double parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	int_3 = int_1 + int_2;
	double_3 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_1431[2];
	fgets(controller4vul_1431 ,2 ,stdin);
	if( strcmp( controller4vul_1431, "o") > 0)
	{
		double_1 = v_decode_fields(uni_para);

	}
	char_2 = char_1 * char_2;
	short_1 = short_1 + short_1;
	if(1)
	{
		int_3 = int_2;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
		char_1 = char_2 * char_1;
	}
	short_2 = short_1 + short_2;
	return short_2;
}
int v_sdtid_decode( float parameter_1,char parameter_2,int uni_para)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short_1 = v_decode_one(double_1,int_1,int_1,uni_para);

	return int_1;
}
int v___stoken_parse_and_decode_token( float parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char controller4vul_1430[2];
	fgets(controller4vul_1430 ,2 ,stdin);
	if( strcmp( controller4vul_1430, "X") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = v_sdtid_decode(float_1,char_1,uni_para);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	return int_1;
}
void v_dbg( int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	short_2 = short_1 * short_2;
	int_1 = int_2;
	float_1 = float_3 * float_1;
}
double v_next_token( char parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			if(1)
			{
			}
			char_1 = char_1 + char_2;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			if(1)
			{
				float_1 = float_1 * float_1;
			}
			int_2 = int_1 * int_1;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	float_1 = float_2 + float_2;
	return double_2;
}
int v_parse_rcline( char parameter_1,int parameter_2,char parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	char_1 = char_1 * char_1;
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int_3 = int_3 + int_2;
	}
	if(1)
	{
		char_1 = char_2 * char_3;
	}
	double_1 = double_3 * double_2;
	double_4 = v_next_token(char_2,char_3,int_2);

	short_2 = short_1 * short_2;
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 * int_1;
	}
	return int_3;
}
unsigned int v_fopen_rcfile( long parameter_1,unsigned int parameter_2,long parameter_3,long parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	long long_4 = 1;
	double double_4 = 1;
	long_1 = long_1 * long_2;
	double_1 = double_1;
	double_1 = double_2;
	short_1 = short_1 + short_1;
	if(1)
	{
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long_1 = long_3;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_3 = int_1 + int_2;
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
		}
		double_3 = double_1 + double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	int_4 = int_4 + int_3;
	float_1 = float_1;
	long_1 = long_4;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	}
	double_4 = double_3 + double_3;
	return unsigned_int_2;
}
void v___stoken_zap_rcfile_data( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_2;
	long_1 = long_1 * long_2;
	short_2 = short_1 * short_1;
	float_2 = float_1 + float_1;
}
int v___stoken_read_rcfile( float parameter_1,char parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long_1 = long_1 * long_2;
	int_1 = int_1 + int_2;
	int_1 = v_parse_rcline(char_1,int_2,char_1,char_1);

	double_2 = double_1 + double_1;
	long_1 = long_2 * long_1;
	unsigned_int_1 = v_fopen_rcfile(long_1,unsigned_int_1,long_1,long_3);

	long_2 = long_3 * long_1;
	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_3;
	float_1 = float_2;
	v___stoken_zap_rcfile_data(float_3);

	int_2 = int_3 * int_3;
	int_4 = int_2 * int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	return int_5;
}
float v_xmalloc( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		short_1 = v_die(double_1,short_2);

		char_1 = char_2;
	}
	return float_1;
}
float v_xzalloc()
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	long_1 = long_1 * long_1;
	float_1 = v_xmalloc(float_2);

	int_2 = int_1 + int_1;
	return float_3;
}
int v_stc_standalone_init()
{
	int int_1 = 1;
	return int_1;
}
int v_common_init( char parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_1 = 1;
			long_1 = long_1;
		}
		char controller4vul_1429[3];
		fgets(controller4vul_1429 ,3 ,stdin);
		if( strcmp( controller4vul_1429, "/1") > 0)
		{
			double double_1 = 1;
			short short_1 = 1;
			int_1 = v___stoken_parse_and_decode_token(float_2,int_1,int_2,uni_para);

			double_1 = double_1 * double_1;
			short_1 = short_1;
		}
	}
	return int_1;
}
unsigned int v_show_version()
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1;
	float_2 = float_1 + float_1;
	double_1 = double_1;
	double_1 = double_2;
	char_2 = char_1 + char_1;
	int_1 = int_2 * int_3;
	return unsigned_int_1;
}
int v_usage_cli()
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_3 = 1;
	int int_7 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_1 + long_2;
	short_1 = short_1 * short_2;
	double_2 = double_1 * double_2;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	int_1 = int_2 * int_1;
	double_2 = v_usage_common();

	float_2 = float_1 + float_1;
	double_4 = double_2 * double_3;
	long_4 = long_1 + long_3;
	long_5 = long_4 + long_1;
	short_1 = short_3 + short_2;
	short_1 = short_2 + short_2;
	int_5 = int_3 * int_4;
	int_6 = int_6 * int_1;
	float_3 = float_3;
	int_1 = int_6 + int_3;
	return int_7;
}
double v_usage_common()
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	long_2 = long_1 + long_1;
	double_2 = double_1 * double_1;
	char_1 = char_1 * char_1;
	long_1 = long_1 * long_1;
	float_2 = float_1 + float_1;
	float_3 = float_4;
	double_2 = double_2 + double_2;
	double_3 = double_1 + double_1;
	return double_2;
}
void v_usage_gui()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = v_usage_common();

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1;
	float_3 = float_1 + float_2;
	char_2 = char_1 + char_1;
}
void v_warn( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	short short_4 = 1;
	long long_2 = 1;
	long_1 = long_1;
	short_3 = short_1 * short_2;
	float_1 = float_1;
	short_4 = short_3 + short_3;
	long_2 = long_1 * long_1;
}
double v_xstrdup( int parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	short_1 = v_die(double_1,short_1);

	long_1 = long_1 * long_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	return double_2;
}
short v_die( double parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	float_1 = float_1 * float_2;
	char_3 = char_1 + char_2;
	float_1 = float_2 + float_3;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_2;
	return short_4;
}
int v_parse_cmdline( int parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	double double_5 = 1;
	int_1 = v_usage_cli();

	long_2 = long_1 + long_1;
	double_1 = v_xstrdup(int_1);

	v_usage_gui();

	int_2 = int_3;
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_1 + char_2;
		}
		if(1)
		{
		}
	}
	float_1 = float_1 * float_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	double_1 = double_2 * double_2;
	short_1 = v_die(double_2,short_2);

	double_4 = double_3 * double_1;
	float_1 = float_2 + float_1;
	double_2 = double_1 * double_5;
	unsigned_int_2 = unsigned_int_1;
	return int_3;
	v_warn(int_3,int_2);

	unsigned_int_2 = v_show_version();

}
int main()
{
	int uni_para =447;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 * double_2;
	short_2 = short_1 * short_1;
	int_1 = int_1 + int_2;
	int_2 = int_1 * int_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		int_2 = int_2 * int_2;
	}
	if(1)
	{
		int_3 = int_3 * int_1;
	}
	if(1)
	{
		int int_4 = 1;
		int_2 = int_4 + int_2;
	}
	int_1 = int_2 + int_2;
	long_2 = long_1 + long_1;
	char controller4vul_1427[3];
	fgets(controller4vul_1427 ,3 ,stdin);
	if( strcmp( controller4vul_1427, "V@") < 0)
	{
		char controller4vul_1428[3];
		fgets(controller4vul_1428 ,3 ,stdin);
		if( strcmp( controller4vul_1428, "BU") > 0)
		{
			float float_2 = 1;
			int_3 = v_common_init(char_1,uni_para);

			float_2 = float_1 + float_1;
		}
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "`") == 0)
		{
			double double_5 = 1;
			double double_6 = 1;
			long long_3 = 1;
			double_4 = double_3 * double_4;
			double_6 = double_4 + double_5;
			long_3 = long_2 * long_2;
		}
	}
	if(1)
	{
	}
	float_1 = float_1 * float_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_1 * char_2;
	char_4 = char_5;
	double_3 = double_4 + double_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2;
	return int_2;
}

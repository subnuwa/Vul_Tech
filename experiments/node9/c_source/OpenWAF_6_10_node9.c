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

char v_html_decode_char_at( char parameter_1,short parameter_2,char parameter_3);
double v_htmlencode_startswith( double parameter_1,unsigned int parameter_2,int parameter_3);
unsigned int v_is_black_url( double parameter_1,short parameter_2);
int v_is_black_attr( long parameter_1,int parameter_2);
short v_cstrcasecmp_with_null( char parameter_1,unsigned int parameter_2,float parameter_3);
unsigned int v_is_black_tag( char parameter_1,int parameter_2);
int v_libinjection_is_xss( long parameter_1,unsigned int parameter_2,int parameter_3,int uni_para);
int v_libinjection_xss( char parameter_1,double parameter_2,int uni_para);
long v_h5_type_to_string( unsigned int parameter_1);
void v_print_html5_token( char parameter_1);
int v_libinjection_h5_next( unsigned int parameter_1);
unsigned int v_h5_state_bogus_comment2( int parameter_1);
double v_h5_state_tag_name_close( int parameter_1);
double v_h5_state_attribute_value_no_quote( char parameter_1);
double v_h5_state_attribute_value_back_quote( short parameter_1,int uni_para);
double v_h5_state_attribute_value_single_quote( char parameter_1);
void v_h5_state_after_attribute_value_quoted_state( short parameter_1);
void v_h5_state_attribute_value_quote( char parameter_1,char parameter_2,int uni_para);
float v_h5_state_attribute_value_double_quote( unsigned int parameter_1);
float v_h5_state_before_attribute_value(int uni_para);
unsigned int v_h5_state_after_attribute_name( long parameter_1);
char v_h5_state_attribute_name( long parameter_1,int uni_para);
int v_h5_state_self_closing_start_tag( unsigned int parameter_1);
short v_h5_skip_white( char parameter_1);
void v_h5_state_before_attribute_name( unsigned int parameter_1,int uni_para);
void v_h5_is_white( char parameter_1);
float v_h5_state_tag_name( char parameter_1,int uni_para);
short v_h5_state_end_tag_open(int uni_para);
int v_h5_state_bogus_comment();
double v_h5_state_comment( float parameter_1);
int v_h5_state_cdata( short parameter_1);
int v_h5_state_doctype( unsigned int parameter_1);
void v_h5_state_markup_declaration_open( double parameter_1);
float v_h5_state_tag_open( float parameter_1,int uni_para);
void v_h5_state_eof( long parameter_1,int uni_para);
short v_h5_state_data( char parameter_1,int uni_para);
void v_libinjection_h5_init( short parameter_1,float parameter_2,short parameter_3,double parameter_4,int uni_para);
void v_reparse_as_mysql( unsigned int parameter_1);
void v_libinjection_sqli_reset( int parameter_1,int parameter_2);
short v_libinjection_sqli_fingerprint( long parameter_1,int parameter_2);
int v_libinjection_is_sqli( int parameter_1);
int v_libinjection_sqli( double parameter_1,unsigned int parameter_2,char parameter_3);
char v_libinjection_sqli_get_token( unsigned int parameter_1,int parameter_2);
short v_st_is_arithmetic_op( unsigned int parameter_1);
long v_syntax_merge_words( short parameter_1,char parameter_2,unsigned int parameter_3);
void v_st_copy( int parameter_1,int parameter_2);
float v_st_is_unary_op( int parameter_1);
int v_libinjection_sqli_fold( int parameter_1);
char v_flag2delim( int parameter_1);
short v_is_double_delim_escaped( long parameter_1,long parameter_2);
int v_is_backslash_escaped( int parameter_1,double parameter_2);
short v_st_assign( short parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4,unsigned int parameter_5);
char v_parse_string_core( unsigned int parameter_1,float parameter_2,short parameter_3,unsigned int parameter_4,char parameter_5,char parameter_6);
int v_st_clear( short parameter_1);
int v_libinjection_sqli_tokenize( float parameter_1);
void v_libinjection_sqli_callback( float parameter_1,long parameter_2);
char v_streq( unsigned int parameter_1,char parameter_2);
char v_my_memmem( double parameter_1,short parameter_2,int parameter_3,int parameter_4);
int v_libinjection_sqli_not_whitelist( long parameter_1);
long v_cstrcasecmp( double parameter_1,unsigned int parameter_2,float parameter_3);
double v_bsearch_keyword_type( float parameter_1,long parameter_2,double parameter_3,short parameter_4);
char v_is_keyword( char parameter_1,char parameter_2);
int v_libinjection_sqli_blacklist( long parameter_1);
int v_libinjection_sqli_check_fingerprint( double parameter_1);
char v_libinjection_sqli_lookup_word( char parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4);
void v_libinjection_sqli_init( char parameter_1,short parameter_2,unsigned int parameter_3,int parameter_4);
int v_modp_rtrim( char parameter_1,float parameter_2);
int v_read_file( float parameter_1,int parameter_2,int parameter_3,int uni_para);
unsigned int v_libinjection_version();
char v_html_decode_char_at( char parameter_1,short parameter_2,char parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	int_1 = int_1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	double_2 = double_2 * double_1;
	if(1)
	{
	}
	float_1 = float_2;
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	return char_2;
}
double v_htmlencode_startswith( double parameter_1,unsigned int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2;
	}
	int_1 = int_1 * int_1;
	float_1 = float_2;
	char_1 = v_html_decode_char_at(char_1,short_1,char_1);

	int_2 = int_1 * int_2;
	float_1 = float_3 * float_3;
	return double_1;
}
unsigned int v_is_black_url( double parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1;
	int_3 = int_1 + int_2;
	double_1 = double_1 * double_1;
	int_2 = int_2 * int_2;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_3;
	double_1 = double_2;
	short_2 = short_1 + short_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	double_2 = v_htmlencode_startswith(double_3,unsigned_int_2,int_1);

	int_6 = int_4 + int_5;
	char_1 = char_1 + char_2;
	double_4 = double_2 + double_4;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
	char_2 = char_2 + char_2;
	int_2 = int_3 * int_1;
	return unsigned_int_3;
}
int v_is_black_attr( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_2;
	double_3 = double_1 * double_2;
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		if(1)
		{
		}
		int_1 = int_1 + int_2;
		if(1)
		{
		}
		short_2 = v_cstrcasecmp_with_null(char_1,unsigned_int_3,float_3);

		int_3 = int_4;
	}
	if(1)
	{
		int_2 = int_4 + int_4;
	}
	if(1)
	{
	}
	return int_2;
}
short v_cstrcasecmp_with_null( char parameter_1,unsigned int parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_2;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	long_1 = long_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_1 = int_1 * int_2;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_3 + short_2;
	}
	return short_1;
}
unsigned int v_is_black_tag( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_2;
	int_2 = int_2;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		unsigned_int_1 = unsigned_int_2;
		int_3 = int_2;
		short_1 = short_1 + short_2;
		if(1)
		{
		}
		long_1 = long_1;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_2 = 1;
		double_1 = double_2 * double_2;
		double_1 = double_2 + double_3;
		short_2 = v_cstrcasecmp_with_null(char_1,unsigned_int_3,float_1);

		char_1 = char_1 + char_2;
		char_1 = char_3 * char_1;
		if(1)
		{
		}
		int_4 = int_4 * int_5;
		long_1 = long_2 * long_1;
		int_1 = int_3;
	}
	return unsigned_int_1;
}
int v_libinjection_is_xss( long parameter_1,unsigned int parameter_2,int parameter_3,int uni_para)
{
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	v_libinjection_h5_init(short_1,float_1,short_2,double_1,uni_para);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 + int_2;
	short_3 = short_1 * short_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2;
	short_1 = short_2 * short_3;
	return int_1;
}
int v_libinjection_xss( char parameter_1,double parameter_2,int uni_para)
{
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char controller4vul_2256[2];
	fgets(controller4vul_2256 ,2 ,stdin);
	if( strcmp( controller4vul_2256, "5") > 0)
	{
		int_1 = v_libinjection_is_xss(long_1,unsigned_int_1,int_2,uni_para);

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
	return int_3;
}
long v_h5_type_to_string( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	return long_1;
}
void v_print_html5_token( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	long_1 = v_h5_type_to_string(unsigned_int_1);

	int_1 = int_1 + int_1;
	int_2 = int_1 * int_1;
}
int v_libinjection_h5_next( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
unsigned int v_h5_state_bogus_comment2( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char_1 = char_1 + char_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		v_h5_state_eof(long_1,-1 );

		short_1 = v_h5_state_data(char_3,-1 );

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if(remainder_check(controller_4,100,2))
	{
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, "Q|") < 0)
		{
		}
		char controller_6[2];
		fgets(controller_6 ,2 ,stdin);
		if( strcmp( controller_6, "U") < 0)
		{
		}
	}
	if(1)
	{
	}
	return unsigned_int_1;
}
double v_h5_state_tag_name_close( int parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short_1 = v_h5_state_data(char_1,-1 );

	int_2 = int_1 * int_1;
	float_2 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	float_3 = float_1 * float_2;
	int_1 = int_1 + int_1;
	if(1)
	{
		int_2 = int_2;
	}
	if(1)
	{
		short short_2 = 1;
		v_h5_state_eof(long_1,-1 );

		short_1 = short_2;
	}
	return double_1;
}
double v_h5_state_attribute_value_no_quote( char parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	v_h5_is_white(char_1);

	long_2 = long_1 * long_1;
	return double_1;
	v_h5_state_before_attribute_name(unsigned_int_1,-1 );

	double_2 = v_h5_state_tag_name_close(int_1);

	v_h5_state_eof(long_1,-1 );

}
double v_h5_state_attribute_value_back_quote( short parameter_1,int uni_para)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	v_h5_state_attribute_value_quote(char_1,char_1,uni_para);

	float_1 = float_2;
	return double_1;
}
double v_h5_state_attribute_value_single_quote( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return double_1;
	v_h5_state_attribute_value_quote(char_1,char_2,-1 );

}
void v_h5_state_after_attribute_value_quoted_state( short parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_4 = 1;
	char char_1 = 1;
	short short_6 = 1;
	char char_2 = 1;
	int_1 = v_h5_state_self_closing_start_tag(unsigned_int_1);

	unsigned_int_2 = unsigned_int_2;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	short_1 = short_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "A") < 0)
	{
		short short_3 = 1;
		short_4 = short_2 + short_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		float float_4 = 1;
		short short_5 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		v_h5_is_white(char_1);

		float_2 = float_4 + float_4;
		short_4 = short_5 * short_1;
		double_2 = double_1 + double_1;
		double_3 = double_3 + double_1;
		short_6 = v_h5_state_data(char_2,-1 );

		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
	}
	v_h5_state_before_attribute_name(unsigned_int_1,-1 );

}
void v_h5_state_attribute_value_quote( char parameter_1,char parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_2;
	int_1 = int_1 + int_3;
	char controller4vul_2264[3];
	fgets(controller4vul_2264 ,3 ,stdin);
	if( strcmp( controller4vul_2264, "A$") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		v_h5_state_eof(long_1,uni_para);

		double_3 = double_1 * double_2;
	}
	long_1 = long_1 * long_2;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		short_1 = short_1;
		long_4 = long_3 * long_1;
		long_4 = long_4;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		char_2 = char_1 + char_1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		short_2 = short_1 * short_2;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	}
}
float v_h5_state_attribute_value_double_quote( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return float_1;
	v_h5_state_attribute_value_quote(char_1,char_1,-1 );

}
float v_h5_state_before_attribute_value(int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short_1 = short_1 + short_2;
	long_1 = long_1 * long_1;
	int_1 = int_1 + int_1;
	char controller4vul_2263[2];
	fgets(controller4vul_2263 ,2 ,stdin);
	if( strcmp( controller4vul_2263, "X") > 0)
	{
		double_1 = v_h5_state_attribute_value_back_quote(short_1,uni_para);

		float_1 = float_1 + float_1;
	}
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "^X") > 0)
	{
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "Ee") == 0)
	{
	}
	if(1)
	{
	}
	return float_1;
}
unsigned int v_h5_state_after_attribute_name( long parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	float_1 = v_h5_state_before_attribute_value(-1 );

	char_1 = char_1 + char_1;
	char_1 = v_h5_state_attribute_name(long_1,-1 );

	float_1 = float_1 * float_2;
	short_1 = v_h5_skip_white(char_1);

	int_1 = v_h5_state_self_closing_start_tag(unsigned_int_1);

	double_1 = v_h5_state_tag_name_close(int_2);

	int_2 = int_2 + int_2;
	char_1 = char_1 + char_2;
	int_2 = int_3 + int_1;
	return unsigned_int_1;
}
char v_h5_state_attribute_name( long parameter_1,int uni_para)
{
	float float_1 = 1;
	char char_1 = 1;
	float_1 = v_h5_state_before_attribute_value(uni_para);

	return char_1;
}
int v_h5_state_self_closing_start_tag( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	short short_4 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	v_h5_state_before_attribute_name(unsigned_int_1,-1 );

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "4)") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_3 = 1;
		short short_3 = 1;
		short short_5 = 1;
		double_1 = double_1;
		double_2 = double_3;
		float_2 = float_1 * float_1;
		int_4 = int_1 * int_3;
		short_4 = short_3 + short_4;
		short_4 = v_h5_state_data(char_1,-1 );

		short_5 = short_1 + short_3;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, ";") > 0)
	{
	}
	return int_4;
}
short v_h5_skip_white( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	double_3 = double_1 + double_2;
	return short_1;
}
void v_h5_state_before_attribute_name( unsigned int parameter_1,int uni_para)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char_1 = v_h5_state_attribute_name(long_1,uni_para);

	int_3 = int_1 * int_2;
	int_3 = int_3 * int_1;
	double_1 = double_2;
	short_1 = short_1;
	int_3 = int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	long_2 = long_1 + long_2;
	double_4 = double_2 + double_3;
}
void v_h5_is_white( char parameter_1)
{
}
float v_h5_state_tag_name( char parameter_1,int uni_para)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	char controller4vul_2262[3];
	fgets(controller4vul_2262 ,3 ,stdin);
	if( strcmp( controller4vul_2262, "+d") > 0)
	{
		short short_2 = 1;
		v_h5_state_before_attribute_name(unsigned_int_2,uni_para);

		short_2 = short_1 * short_1;
	}
	return float_1;
}
short v_h5_state_end_tag_open(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double_3 = double_1 * double_2;
	long_2 = long_1 + long_1;
	char controller4vul_2261[2];
	fgets(controller4vul_2261 ,2 ,stdin);
	if( strcmp( controller4vul_2261, "5") < 0)
	{
		float_1 = v_h5_state_tag_name(char_1,uni_para);

	}
	double_3 = double_4 * double_4;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return short_1;
}
int v_h5_state_bogus_comment()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = v_h5_state_data(char_1,-1 );

	double_1 = double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "B6") > 0)
	{
		double double_2 = 1;
		float float_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float_2 = float_1 + float_1;
		v_h5_state_eof(long_1,-1 );

		double_2 = double_1 * double_1;
		float_3 = float_2 * float_2;
		short_2 = short_2 * short_3;
	}
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3 + double_1;
		int_2 = int_1 + int_2;
		double_5 = double_4 * double_5;
		float_1 = float_1 + float_2;
	}
	double_4 = double_1 + double_5;
	return int_3;
}
double v_h5_state_comment( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	long long_1 = 1;
	double_1 = double_2;
	int_1 = int_1 + int_1;
	float_1 = float_1 * float_2;
	short_2 = short_1 + short_1;
	int_3 = int_2 * int_2;
	unsigned_int_1 = unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "99") > 0)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	double_2 = double_3 + double_2;
	int_4 = int_2 + int_2;
	char_2 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	double_3 = double_3 * double_1;
	char_2 = char_2;
	int_3 = int_2 + int_5;
	return double_1;
	v_h5_state_eof(long_1,-1 );

	short_1 = v_h5_state_data(char_2,-1 );

}
int v_h5_state_cdata( short parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_h5_state_eof(long_1,-1 );

	short_2 = short_1 * short_1;
	double_2 = double_1 * double_1;
	short_1 = v_h5_state_data(char_1,-1 );

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "YC") < 0)
	{
	}
	int_1 = int_1 + int_1;
	int_1 = int_1;
	return int_2;
}
int v_h5_state_doctype( unsigned int parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short_1 = v_h5_state_data(char_1,-1 );

	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char_3 = char_2 * char_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "]t") < 0)
	{
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_3 = 1;
		short_3 = short_2 + short_1;
		int_1 = int_1 * int_1;
		unsigned_int_3 = unsigned_int_1;
	}
	return int_1;
	v_h5_state_eof(long_1,-1 );

}
void v_h5_state_markup_declaration_open( double parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1 * long_1;
	int_1 = v_h5_state_cdata(short_1);

	char_3 = char_1 + char_2;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double_1 = v_h5_state_comment(float_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		int_1 = v_h5_state_bogus_comment();

		long_3 = long_3 * long_4;
	}
	int_1 = v_h5_state_doctype(unsigned_int_1);

}
float v_h5_state_tag_open( float parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 * long_2;
	float_1 = float_1 + float_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		float_2 = float_2 * float_1;
		int_1 = int_1;
	}
	if(1)
	{
		long_1 = long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	char controller4vul_2259[3];
	fgets(controller4vul_2259 ,3 ,stdin);
	if( strcmp( controller4vul_2259, "W&") > 0)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char controller4vul_2260[2];
		fgets(controller4vul_2260 ,2 ,stdin);
		if( strcmp( controller4vul_2260, "W") < 0)
		{
			short_1 = v_h5_state_end_tag_open(uni_para);

		}
		int_3 = int_1 * int_2;
		int_4 = int_2;
		long_2 = long_1 + long_2;
		char_3 = char_1 * char_2;
	}
	return float_2;
}
void v_h5_state_eof( long parameter_1,int uni_para)
{
	double double_1 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	if(uni_para == 149)
	{
		vul_var = vul_var + 1;
	}
	free(vul_var);
	double_1 = double_1 * double_1;
}
short v_h5_state_data( char parameter_1,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	long_1 = long_2;
	int_2 = int_1 + int_1;
	int_3 = int_4;
	double_1 = double_1;
	char controller4vul_2257[3];
	fgets(controller4vul_2257 ,3 ,stdin);
	if( strcmp( controller4vul_2257, "RX") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short_1 = short_2;
		char_2 = char_1 + char_2;
		double_2 = double_1;
		double_2 = double_1 + double_1;
		char controller4vul_2258[3];
		fgets(controller4vul_2258 ,3 ,stdin);
		if( strcmp( controller4vul_2258, "+$") < 0)
		{
			float_1 = v_h5_state_tag_open(float_1,uni_para);

		}
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "w") < 0)
	{
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		int_3 = int_1 + int_5;
		double_1 = double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_2 = int_1;
		double_2 = double_3 + double_1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "2*") < 0)
		{
		}
	}
	return short_3;
}
void v_libinjection_h5_init( short parameter_1,float parameter_2,short parameter_3,double parameter_4,int uni_para)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	float float_3 = 1;
	short_1 = v_h5_state_data(char_1,uni_para);

	char_1 = char_2 + char_2;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_1;
	char_1 = char_1 + char_2;
	double_1 = double_1 + double_1;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	int_3 = int_1 * int_1;
	short_2 = short_1 * short_2;
	int_4 = int_4 + int_5;
	short_2 = short_1 + short_3;
	float_3 = float_3 + float_1;
}
void v_reparse_as_mysql( unsigned int parameter_1)
{
}
void v_libinjection_sqli_reset( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_1;
	float_1 = float_1 + float_1;
	short_2 = short_1 + short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "{") > 0)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	double_3 = double_1 + double_2;
	double_2 = double_4 + double_3;
	v_libinjection_sqli_init(char_1,short_3,unsigned_int_1,int_4);

	long_1 = long_1 * long_2;
}
short v_libinjection_sqli_fingerprint( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	long_1 = long_1 + long_1;
	float_2 = float_1 * float_1;
	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Cf") > 0)
	{
		char char_3 = 1;
		char_2 = char_3 * char_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	double_2 = double_1 * double_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "Z/") < 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_3 = 1;
		double_1 = double_2 + double_2;
		int_1 = int_1 + int_2;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		int_2 = int_1;
		double_2 = double_3;
		v_libinjection_sqli_reset(int_3,int_1);

		double_2 = double_2;
	}
	return short_1;
	int_4 = v_libinjection_sqli_fold(int_2);

}
int v_libinjection_is_sqli( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_reparse_as_mysql(unsigned_int_1);

	int_1 = int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "4+") == 0)
	{
	}
	short_1 = v_libinjection_sqli_fingerprint(long_1,int_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3 * int_3;
		if(1)
		{
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		if(1)
		{
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
		if(1)
		{
		}
	}
	return int_1;
}
int v_libinjection_sqli( double parameter_1,unsigned int parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	long_1 = long_1 + long_2;
	v_libinjection_sqli_init(char_1,short_1,unsigned_int_1,int_1);

	int_1 = int_1 * int_1;
	long_2 = long_1 * long_1;
	int_1 = v_libinjection_is_sqli(int_1);

	long_1 = long_1 + long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "86") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "d&") < 0)
	{
		int int_2 = 1;
		int_3 = int_1 + int_2;
	}
	return int_3;
}
char v_libinjection_sqli_get_token( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "&") < 0)
	{
	}
	return char_1;
}
short v_st_is_arithmetic_op( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_2;
	return short_1;
}
long v_syntax_merge_words( short parameter_1,char parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	int_4 = int_3 + int_4;
	unsigned_int_5 = unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_1;
	int_2 = int_4;
	int_3 = int_5 + int_3;
	if(1)
	{
	}
	short_1 = v_st_assign(short_1,long_1,int_5,unsigned_int_3,unsigned_int_2);

	double_1 = double_1;
	double_2 = double_1 * double_2;
	short_1 = short_1 * short_1;
	char_1 = char_2;
	int_4 = int_3 * int_2;
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3 + double_1;
	}
	if(1)
	{
	}
	return long_1;
}
void v_st_copy( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double_1 = double_1 + double_1;
}
float v_st_is_unary_op( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_1 = long_1 + long_2;
	long_1 = v_cstrcasecmp(double_1,unsigned_int_1,float_1);

	short_2 = short_1 + short_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "7") > 0)
	{
	}
	return float_1;
}
int v_libinjection_sqli_fold( int parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	return int_1;
	int_1 = v_st_clear(short_1);

	int_1 = v_libinjection_sqli_tokenize(float_1);

	float_2 = v_st_is_unary_op(int_1);

	v_st_copy(int_1,int_2);

	long_1 = v_cstrcasecmp(double_1,unsigned_int_1,float_2);

	long_2 = v_syntax_merge_words(short_1,char_1,unsigned_int_1);

	short_1 = v_st_is_arithmetic_op(unsigned_int_1);

	char_2 = v_streq(unsigned_int_1,char_3);

}
char v_flag2delim( int parameter_1)
{
	char char_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return char_1;
}
short v_is_double_delim_escaped( long parameter_1,long parameter_2)
{
	short short_1 = 1;
	return short_1;
}
int v_is_backslash_escaped( int parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short_2 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "f.") > 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_1 * double_2;
		}
	}
	return int_1;
}
short v_st_assign( short parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_1;
	float_3 = float_1 + float_2;
	double_3 = double_2 + double_1;
	double_3 = double_2 * double_4;
	return short_1;
}
char v_parse_string_core( unsigned int parameter_1,float parameter_2,short parameter_3,unsigned int parameter_4,char parameter_5,char parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	int int_5 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	short short_4 = 1;
	long long_3 = 1;
	int_3 = int_1 * int_2;
	float_2 = float_1 * float_2;
	int_3 = v_is_backslash_escaped(int_4,double_1);

	double_4 = double_2 + double_3;
	char_1 = char_1 * char_1;
	double_3 = double_2 + double_3;
	float_2 = float_2;
	float_1 = float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_3 * double_1;
	double_5 = double_1 * double_1;
	int_4 = int_5 * int_4;
	long_1 = long_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		short_1 = short_1 + short_2;
		double_2 = double_2 * double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		short_2 = short_2 + short_1;
		short_1 = v_st_assign(short_3,long_2,int_2,unsigned_int_2,unsigned_int_2);

		short_1 = short_3 + short_2;
		short_4 = v_is_double_delim_escaped(long_3,long_3);

		unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_2 * char_3;
	}
	return char_1;
}
int v_st_clear( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_3 = int_1 + int_2;
	return int_4;
}
int v_libinjection_sqli_tokenize( float parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "l") < 0)
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
	}
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = v_st_clear(short_1);

	char_1 = v_parse_string_core(unsigned_int_1,float_1,short_2,unsigned_int_2,char_2,char_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	return int_2;
	char_1 = v_flag2delim(int_3);

}
void v_libinjection_sqli_callback( float parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		short short_2 = 1;
		char_1 = char_1 * char_2;
		short_1 = short_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, ":") < 0)
	{
		short short_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char_1 = v_libinjection_sqli_lookup_word(char_2,int_1,unsigned_int_1,int_1);

		short_3 = short_1 + short_3;
		char_1 = char_3 * char_4;
	}
}
char v_streq( unsigned int parameter_1,char parameter_2)
{
	char char_1 = 1;
	return char_1;
}
char v_my_memmem( double parameter_1,short parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1;
	double_1 = double_2;
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "E") > 0)
		{
		}
	}
	return char_1;
}
int v_libinjection_sqli_not_whitelist( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int_1 = int_1 * int_2;
	double_1 = double_1 + double_2;
	if(1)
	{
		if(1)
		{
			double_1 = double_1;
		}
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_2 + double_3;
		}
		if(1)
		{
			short_1 = short_1 + short_1;
		}
	}
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		char_1 = v_my_memmem(double_1,short_1,int_3,int_3);

		int_1 = int_2 + int_3;
	}
	if(1)
	{
	}
	if(1)
	{
		short short_2 = 1;
		if(1)
		{
			int_3 = int_1 * int_1;
		}
		short_1 = short_2 * short_1;
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	double_2 = double_2 + double_3;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		}
		if(1)
		{
			double_1 = double_2 * double_1;
		}
		int_1 = int_2 * int_3;
	}
	if(1)
	{
		if(1)
		{
			double double_4 = 1;
			double_4 = double_3 + double_1;
		}
	}
	if(1)
	{
		if(1)
		{
			char_2 = v_streq(unsigned_int_1,char_1);

			int_1 = int_2 + int_2;
		}
	}
	char_3 = char_1;
	long_1 = v_cstrcasecmp(double_1,unsigned_int_1,float_2);

	unsigned_int_3 = unsigned_int_2;
	return int_1;
}
long v_cstrcasecmp( double parameter_1,unsigned int parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, ";") > 0)
		{
			double_1 = double_1 * double_2;
		}
		if(1)
		{
		}
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "-Z") > 0)
		{
		}
	}
	double_2 = double_2 + double_1;
	return long_1;
}
double v_bsearch_keyword_type( float parameter_1,long parameter_2,double parameter_3,short parameter_4)
{
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_3 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_1 = 1;
			int int_2 = 1;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double_1 = double_2;
			}
			int_1 = int_1 + int_2;
		}
		long_1 = v_cstrcasecmp(double_2,unsigned_int_1,float_1);

		double_1 = double_2 + double_3;
	}
	return double_2;
}
char v_is_keyword( char parameter_1,char parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	return char_1;
	double_1 = v_bsearch_keyword_type(float_1,long_1,double_1,short_1);

}
int v_libinjection_sqli_blacklist( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = int_1 + int_2;
	int_3 = int_3 * int_1;
	double_3 = double_1 + double_2;
	double_1 = double_1 + double_2;
	short_1 = short_1 * short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "#") < 0)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
	double_1 = double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = int_3;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
		unsigned_int_3 = unsigned_int_2;
	}
	char_3 = char_1 * char_2;
	char_2 = v_is_keyword(char_3,char_2);

	double_1 = double_3 + double_2;
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		char_1 = char_4 * char_5;
	}
	return int_1;
}
int v_libinjection_sqli_check_fingerprint( double parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	return int_1;
	int_1 = v_libinjection_sqli_blacklist(long_1);

	int_2 = v_libinjection_sqli_not_whitelist(long_1);

}
char v_libinjection_sqli_lookup_word( char parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	if(1)
	{
		int int_2 = 1;
		int_1 = v_libinjection_sqli_check_fingerprint(double_1);

		double_1 = v_bsearch_keyword_type(float_1,long_1,double_2,short_1);

		int_2 = int_2;
	}
	if(1)
	{
	}
	return char_1;
}
void v_libinjection_sqli_init( char parameter_1,short parameter_2,unsigned int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "W") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	double_3 = double_1 + double_2;
	char_1 = char_1 * char_1;
	long_1 = long_1 + long_1;
	double_3 = double_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_2 = v_libinjection_sqli_lookup_word(char_1,int_4,unsigned_int_1,int_5);

	double_6 = double_1 * double_5;
	double_3 = double_6;
}
int v_modp_rtrim( char parameter_1,float parameter_2)
{
	int int_1 = 1;
	if(1)
	{
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		int_2 = int_1 + int_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		char_1 = char_1 + char_2;
		double_1 = double_1;
	}
	return int_1;
}
int v_read_file( float parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int_1 = v_libinjection_xss(char_1,double_1,uni_para);

	char_1 = char_2 * char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 * long_2;
	double_3 = double_2 + double_3;
	char_2 = char_3 + char_3;
	return int_1;
}
unsigned int v_libinjection_version()
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
int main()
{
	int uni_para =149;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	int int_5 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1;
	char controller4vul_2255[3];
	fgets(controller4vul_2255 ,3 ,stdin);
	if( strcmp( controller4vul_2255, "p^") < 0)
	{
		int_3 = v_read_file(float_1,int_4,int_3,uni_para);

		unsigned_int_1 = unsigned_int_3;
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	double_2 = double_1 * double_2;
	short_2 = short_1 * short_1;
	float_3 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_5;
	double_3 = double_3;
	return int_5;
}

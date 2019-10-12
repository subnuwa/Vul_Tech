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

void v_redhttp_server_free( unsigned int parameter_1);
void v_redhttp_request_set_path_glob( double parameter_1,float parameter_2);
long v_match_route( int parameter_1,float parameter_2);
void v_redhttp_response_new_empty( int parameter_1);
short v_add_allowed_method( long parameter_1,int parameter_2,int parameter_3);
void v_check_allowed_responses( int parameter_1,long parameter_2,double parameter_3);
void v_redhttp_server_dispatch_request( float parameter_1,unsigned int parameter_2);
void v_redhttp_headers_parse_line( unsigned int parameter_1,char parameter_2);
void v_redhttp_request_set_version( short parameter_1,float parameter_2);
char v_hex_decode( double parameter_1);
void v_redhttp_url_unescape( char parameter_1);
void v_redhttp_request_parse_arguments( char parameter_1,float parameter_2);
void v_redhttp_request_set_query_string( double parameter_1,char parameter_2);
void v_redhttp_request_set_path_and_query( double parameter_1,float parameter_2);
void v_redhttp_request_set_method( long parameter_1,char parameter_2);
unsigned int v_redhttp_request_read_line( int parameter_1);
int v_redhttp_request_read_status_line( unsigned int parameter_1);
int v_redhttp_request_read( unsigned int parameter_1);
short v_get_server_addr( long parameter_1,int parameter_2);
void v_redhttp_request_free( int parameter_1);
unsigned int v_redhttp_request_new();
int v_redhttp_server_handle_request( char parameter_1,int parameter_2,char parameter_3,int parameter_4);
void v_redhttp_server_run( short parameter_1);
int v_redhttp_server_listen( short parameter_1,double parameter_2,int parameter_3,int parameter_4);
void v_redhttp_server_set_signature( char parameter_1,float parameter_2);
void v_redhttp_headers_free( float parameter_1);
void v_redhttp_response_free( char parameter_1);
char v_redhttp_response_new_error_page( int parameter_1,short parameter_2);
float v_redhttp_response_new_redirect( char parameter_1,int parameter_2);
int v_handle_redirect( short parameter_1);
short v_syntax_select_list( short parameter_1,double parameter_2,short parameter_3,float parameter_4);
void v_handle_page_query_form( double parameter_1);
double v_format_graph_stream( unsigned int parameter_1,long parameter_2,int uni_para);
void v_redhttp_headers_print( long parameter_1,char parameter_2);
void v_redhttp_response_print_headers( char parameter_1,unsigned int parameter_2);
float v_redhttp_server_get_signature( short parameter_1);
void v_redhttp_response_add_time_header( int parameter_1,long parameter_2,short parameter_3);
void v_redhttp_response_send( int parameter_1,int parameter_2);
int v_redhttp_negotiate_get( char parameter_1,int parameter_2,char parameter_3,int parameter_4);
short v_redstore_get_format_by_name( int parameter_1,unsigned int parameter_2);
long v_redstore_negotiate_format( double parameter_1,char parameter_2,char parameter_3,float parameter_4,int uni_para);
char v_redhttp_request_get_socket();
char v_format_bindings_query_result( float parameter_1,unsigned int parameter_2);
void v_redstore_log( short parameter_1,long parameter_2,short parameter_3);
void v_redstore_page_end( short parameter_1);
int v_redstore_page_append_string_buffer( float parameter_1,double parameter_2,int parameter_3);
int v_redstore_page_append_escaped( float parameter_1,float parameter_2,char parameter_3);
int v_redstore_page_append_strings( long parameter_1,int parameter_2);
void v_redhttp_response_get_user_data( short parameter_1);
int v_redstore_page_append_string( unsigned int parameter_1,long parameter_2);
void v_redhttp_response_set_user_data( char parameter_1);
double v_redhttp_response_get_status_message( short parameter_1);
double v_redstore_page_new( int parameter_1,short parameter_2);
int v_redstore_is_html_format( unsigned int parameter_1);
void v_redhttp_negotiate_free( long parameter_1);
int v_redhttp_negotiate_compare_types( double parameter_1,long parameter_2);
unsigned int v_redhttp_negotiate_choose( short parameter_1,long parameter_2);
void v_redhttp_negotiate_sort( long parameter_1);
void v_redhttp_negotiate_add( char parameter_1,float parameter_2,double parameter_3,int parameter_4,int uni_para);
unsigned int v_redhttp_negotiate_round( double parameter_1);
char v_redhttp_negotiate_parse( unsigned int parameter_1,int uni_para);
long v_redhttp_request_get_header( double parameter_1,long parameter_2);
int v_redstore_negotiate_string( char parameter_1,float parameter_2,double parameter_3);
unsigned int v_redstore_page_new_with_message( long parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,unsigned int parameter_5);
char v_perform_query( short parameter_1,short parameter_2,int uni_para);
short v_redhttp_strcasecmp( float parameter_1,long parameter_2);
void v_redhttp_headers_get( long parameter_1,char parameter_2);
int v_redhttp_request_get_argument( unsigned int parameter_1,short parameter_2);
double v_handle_query( float parameter_1,int uni_para);
void v_redhttp_response_set_content( unsigned int parameter_1,char parameter_2,double parameter_3,short parameter_4);
void v_redhttp_headers_add( char parameter_1,double parameter_2,char parameter_3);
void v_redhttp_response_add_header( short parameter_1,int parameter_2,char parameter_3);
short v_redhttp_response_status_message_for_code( int parameter_1);
void v_redhttp_response_set_status_message( char parameter_1,long parameter_2);
void v_redhttp_response_set_status_code( int parameter_1,int parameter_2);
double v_redhttp_response_new( int parameter_1,short parameter_2);
unsigned int v_redhttp_response_new_with_type( int parameter_1,unsigned int parameter_2,double parameter_3);
int v_handle_homepage( char parameter_1);
short v_redhttp_request_get_path( short parameter_1);
float v_redhttp_request_get_method( double parameter_1);
unsigned int v_redhttp_request_get_remote_port( int parameter_1);
double v_redhttp_request_get_remote_addr( short parameter_1);
float v_handle_logging( unsigned int parameter_1);
short v_redhttp_strndup( int parameter_1,long parameter_2,int uni_para);
float v_redhttp_strdup( double parameter_1);
void v_redhttp_server_add_handler( long parameter_1,int parameter_2,char parameter_3,long parameter_4);
long v_redhttp_server_new();
double v_print_help( char parameter_1);
void v_redhttp_server_free( unsigned int parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1;
	short_1 = short_1 * short_1;
	long_1 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char_2 = char_1 * char_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_2 = 1;
		double double_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_2 = double_3;
		int_1 = int_1 + int_1;
		char_4 = char_2 + char_3;
		float_2 = float_1 * float_1;
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ">") == 0)
	{
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	int_1 = int_1 + int_2;
}
void v_redhttp_request_set_path_glob( double parameter_1,float parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float_1 = v_redhttp_strdup(double_1);

		short_1 = short_1 + short_2;
	}
}
long v_match_route( int parameter_1,float parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	v_redhttp_request_set_path_glob(double_1,float_1);

	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	if(1)
	{
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_2 = double_2 + double_1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
	}
	return long_1;
}
void v_redhttp_response_new_empty( int parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float_1 = float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "|") < 0)
	{
		short short_2 = 1;
		double_1 = v_redhttp_response_new(int_1,short_1);

		short_1 = short_2 + short_1;
	}
}
short v_add_allowed_method( long parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 + int_2;
		}
		if(1)
		{
		}
	}
	return short_1;
}
void v_check_allowed_responses( int parameter_1,long parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	short short_4 = 1;
	long long_1 = 1;
	char_1 = char_1 * char_2;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = v_redhttp_response_new_error_page(int_1,short_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_3 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1 + double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			float_2 = float_3 + float_3;
		}
		if(1)
		{
			char_2 = char_3 * char_1;
			v_redhttp_response_new_empty(int_1);

			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
				short short_2 = 1;
				short_2 = short_2 + short_1;
			}
		}
	}
	int_2 = int_1 + int_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			int_2 = int_2;
		}
		if(1)
		{
			short short_3 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short_1 = short_1 + short_3;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
	}
	if(1)
	{
		float float_4 = 1;
		float_1 = float_4 * float_4;
	}
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		double_1 = double_1 + double_1;
		char_4 = char_1 * char_1;
		char_5 = char_3 * char_1;
	}
	short_4 = v_add_allowed_method(long_1,int_1,int_2);

	v_redhttp_response_add_header(short_4,int_2,char_3);

	float_2 = float_2 * float_1;
}
void v_redhttp_server_dispatch_request( float parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_redhttp_response_add_header(short_1,int_1,char_1);

	short_1 = short_2;
	long_1 = v_match_route(int_2,float_1);

	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			char_1 = v_redhttp_response_new_error_page(int_1,short_1);

			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
			long_2 = long_1;
		}
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 + double_1;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
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
	v_check_allowed_responses(int_1,long_3,double_2);

	v_redhttp_response_new_empty(int_2);

}
void v_redhttp_headers_parse_line( unsigned int parameter_1,char parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	v_redhttp_headers_add(char_1,double_1,char_1);

	int_2 = int_1 * int_2;
	float_1 = v_redhttp_strdup(double_1);

	int_4 = int_3 * int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "8") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
}
void v_redhttp_request_set_version( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
		int int_1 = 1;
		float_1 = v_redhttp_strdup(double_3);

		int_1 = int_1;
	}
	double_3 = double_4;
}
char v_hex_decode( double parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	int_1 = int_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, ")a") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "|") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	return char_1;
}
void v_redhttp_url_unescape( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	double double_2 = 1;
	char_2 = char_1 + char_1;
	double_1 = double_1;
	long_3 = long_1 * long_2;
	long_2 = long_2;
	if(1)
	{
	}
	char_2 = char_2 + char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
			if(1)
			{
				unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
			}
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				char_2 = v_hex_decode(double_1);

				short_2 = short_1 * short_1;
				float_2 = float_1 * float_1;
			}
		}
		if(1)
		{
			double_1 = double_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
		}
	}
	double_2 = double_1;
}
void v_redhttp_request_parse_arguments( char parameter_1,float parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double double_5 = 1;
	int_1 = int_1 + int_1;
	float_1 = v_redhttp_strdup(double_1);

	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		int int_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_4 = 1;
		long_3 = long_3 * long_2;
		int_2 = int_1;
		v_redhttp_headers_add(char_1,double_2,char_2);

		double_1 = double_3 * double_3;
		double_1 = double_1;
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			char_1 = char_2;
			float_3 = float_2 + float_2;
		}
		if(1)
		{
			long_2 = long_1;
		}
		if(1)
		{
			if(1)
			{
				int_1 = int_1 + int_1;
				double_4 = double_3 * double_1;
			}
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
			}
		}
		if(1)
		{
			char_2 = char_2 + char_2;
		}
		double_4 = double_1;
		v_redhttp_url_unescape(char_3);

		short_2 = short_1 + short_2;
		long_1 = long_4 + long_3;
		if(1)
		{
			int int_3 = 1;
			int_3 = int_1 * int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
		}
	}
	double_5 = double_2 * double_3;
}
void v_redhttp_request_set_query_string( double parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	long_3 = long_1 * long_2;
	float_1 = v_redhttp_strdup(double_1);

}
void v_redhttp_request_set_path_and_query( double parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_3 = 1;
	int_1 = int_2;
	if(1)
	{
		int int_3 = 1;
		int_1 = int_1 + int_3;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short_2 = short_1 * short_2;
		float_1 = float_2;
		float_1 = float_2 * float_1;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
		}
		double_2 = double_1 + double_2;
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "!") < 0)
		{
			short short_3 = 1;
			short_2 = short_3 * short_2;
			double_4 = double_3 + double_3;
			int_2 = int_4 + int_4;
		}
		if(1)
		{
			double_2 = double_3;
		}
		long_2 = long_1 + long_1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			v_redhttp_request_set_query_string(double_2,char_1);

			v_redhttp_request_parse_arguments(char_1,float_2);

			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
			double_2 = double_4 * double_3;
			float_2 = v_redhttp_strdup(double_2);

			unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
			int_4 = int_4;
		}
	}
	if(1)
	{
		char char_2 = 1;
		char char_4 = 1;
		char_4 = char_2 + char_3;
	}
	v_redhttp_url_unescape(char_3);

}
void v_redhttp_request_set_method( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		short_2 = short_1 + short_2;
		if(1)
		{
			long long_1 = 1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char char_2 = 1;
				char_1 = char_1 * char_2;
			}
			long_1 = long_1;
		}
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_1 = char_3 * char_4;
	}
}
unsigned int v_redhttp_request_read_line( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					double_2 = double_1 + double_1;
				}
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
				}
			}
		}
		char controller_6[3];
		fgets(controller_6 ,3 ,stdin);
		if( strcmp( controller_6, "=g") < 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_1 * double_2;
		}
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
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
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 + long_1;
		}
	}
	return unsigned_int_4;
}
int v_redhttp_request_read_status_line( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_6 = 1;
	int int_4 = 1;
	long long_3 = 1;
	double double_7 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char_2 = char_1 * char_1;
	float_2 = float_1 + float_1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = v_redhttp_request_read_line(int_1);

	short_1 = short_1 + short_1;
	char_2 = char_1;
	long_2 = long_1 * long_2;
	double_4 = double_2 * double_3;
	double_2 = double_5 * double_4;
	int_1 = int_2 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_5 = double_3 + double_5;
	v_redhttp_request_set_version(short_1,float_2);

	int_2 = int_3 * int_3;
	double_1 = double_6 + double_4;
	int_4 = int_4;
	long_3 = long_1 + long_1;
	double_6 = double_7 + double_2;
	double_3 = double_7 + double_4;
	float_2 = float_2 * float_2;
	float_2 = float_1 * float_3;
	float_2 = float_3 + float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	float_1 = float_3 + float_2;
	int_3 = int_1;
	int_5 = int_3;
	short_2 = short_2 + short_3;
	char_1 = char_1 + char_2;
	double_5 = double_4 + double_7;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_4;
	if(1)
	{
		int_3 = int_1 * int_1;
	}
	if(1)
	{
		double_3 = double_6;
	}
	int_6 = int_4;
	unsigned_int_3 = unsigned_int_2;
	v_redhttp_request_set_path_and_query(double_2,float_2);

	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	int_7 = int_5 * int_3;
	long_6 = long_1 * long_5;
	int_2 = int_2 * int_6;
	double_7 = double_7 + double_3;
	unsigned_int_2 = unsigned_int_3;
	char_1 = char_1 * char_2;
	double_1 = double_5 + double_7;
	double_7 = double_2;
	int_3 = int_2 * int_5;
	unsigned_int_4 = unsigned_int_1;
	return int_6;
	v_redhttp_request_set_method(long_3,char_1);

}
int v_redhttp_request_read( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	return int_1;
	int_2 = v_redhttp_request_read_status_line(unsigned_int_1);

	unsigned_int_2 = v_redhttp_request_read_line(int_2);

	v_redhttp_headers_parse_line(unsigned_int_3,char_1);

	v_redhttp_headers_get(long_1,char_2);

	v_redhttp_request_parse_arguments(char_3,float_1);

}
short v_get_server_addr( long parameter_1,int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_2;
}
void v_redhttp_request_free( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_4 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		float_1 = float_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2 * float_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3 + double_1;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_2;
	}
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		float_2 = float_4;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		long_2 = long_2 * long_2;
	}
	if(1)
	{
		double_4 = double_4 + double_4;
	}
	double_4 = double_1 * double_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_2;
	v_redhttp_headers_free(float_4);

}
unsigned int v_redhttp_request_new()
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
	return unsigned_int_1;
}
int v_redhttp_server_handle_request( char parameter_1,int parameter_2,char parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	char char_2 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long_2 = long_1 + long_1;
	double_1 = double_1 * double_1;
	float_2 = float_1 + float_1;
	int_2 = int_1 + int_1;
	long_2 = long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "k") < 0)
	{
	}
	unsigned_int_1 = v_redhttp_request_new();

	float_4 = float_2 * float_3;
	int_3 = v_redhttp_request_read(unsigned_int_1);

	v_redhttp_response_send(int_1,int_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_2 * long_1;
	if(1)
	{
		short short_2 = 1;
		v_redhttp_server_dispatch_request(float_2,unsigned_int_2);

		short_2 = short_1 + short_1;
		char_1 = v_redhttp_response_new_error_page(int_3,short_3);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		float float_5 = 1;
		float_5 = float_4 * float_4;
		int_4 = int_3 * int_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		double double_2 = 1;
		short_1 = v_get_server_addr(long_4,int_5);

		double_2 = double_1 + double_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	int_5 = int_6 + int_4;
	v_redhttp_request_free(int_5);

	v_redhttp_response_free(char_2);

	int_7 = int_7 * int_4;
	return int_8;
}
void v_redhttp_server_run( short parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = long_1;
	int_1 = v_redhttp_server_handle_request(char_1,int_1,char_2,int_1);

	long_1 = long_1 * long_2;
	double_1 = double_1 + double_2;
	double_1 = double_3 + double_1;
	int_2 = int_1 + int_1;
	long_2 = long_2 * long_2;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_3 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	unsigned_int_1 = unsigned_int_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "0(") == 0)
	{
		char char_3 = 1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "VH") > 0)
		{
		}
		char_3 = char_3 * char_3;
		char_3 = char_3 * char_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
			if(1)
			{
				long long_3 = 1;
				long long_4 = 1;
				long long_5 = 1;
				long_5 = long_3 * long_4;
				long_4 = long_5 + long_3;
			}
			char controller_5[3];
			fgets(controller_5 ,3 ,stdin);
			if( strcmp( controller_5, "@P") > 0)
			{
				int int_3 = 1;
				double_3 = double_3;
				int_1 = int_2 + int_3;
			}
		}
	}
}
int v_redhttp_server_listen( short parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_5 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	short_2 = short_1 + short_1;
	float_1 = float_1 + float_1;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_3;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		short short_3 = 1;
		int int_3 = 1;
		double double_4 = 1;
		long long_3 = 1;
		short_2 = short_1 * short_2;
		double_2 = double_3;
		short_3 = short_1 * short_1;
		double_1 = double_1 + double_2;
		int_3 = int_1 * int_1;
		double_2 = double_4;
		if(1)
		{
			if(1)
			{
				double double_5 = 1;
				double_2 = double_4 * double_5;
			}
			unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
		}
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "{") > 0)
		{
			if(1)
			{
				short_3 = short_1;
			}
		}
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			if(1)
			{
				int int_4 = 1;
				int_2 = int_1 * int_4;
			}
			float_3 = float_2 + float_2;
			short_4 = short_2 * short_3;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			if(1)
			{
				long_3 = long_3 * long_2;
			}
			unsigned_int_6 = unsigned_int_4 + unsigned_int_1;
			int_3 = int_2;
		}
		if(1)
		{
			long long_4 = 1;
			long_3 = long_4 + long_3;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_5;
		short_2 = short_1;
	}
	short_4 = short_4 * short_5;
	if(1)
	{
	}
	return int_5;
}
void v_redhttp_server_set_signature( char parameter_1,float parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float_1 = float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "E") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	long_2 = long_1 + long_2;
	float_1 = v_redhttp_strdup(double_1);

}
void v_redhttp_headers_free( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_3 = double_3;
		float_2 = float_1 + float_1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		short_1 = short_1 * short_2;
	}
}
void v_redhttp_response_free( char parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1 * char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "w") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
	if(1)
	{
		float_1 = float_1;
	}
	v_redhttp_headers_free(float_1);

	float_2 = float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
char v_redhttp_response_new_error_page( int parameter_1,short parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
	}
	if(1)
	{
		long_1 = long_1 + long_2;
	}
	char_1 = char_1;
	if(1)
	{
		int_2 = int_1 * int_2;
	}
	unsigned_int_1 = v_redhttp_response_new_with_type(int_3,unsigned_int_2,double_1);

	long_2 = long_1 + long_2;
	if(1)
	{
		long long_3 = 1;
		v_redhttp_response_free(char_1);

		long_2 = long_3;
	}
	int_2 = int_1 + int_3;
	float_3 = float_1 + float_2;
	return char_2;
}
float v_redhttp_response_new_redirect( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	int int_5 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int_1 = int_2;
	int_4 = int_3 * int_4;
	long_1 = long_1 * long_1;
	double_2 = double_1 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "}C") > 0)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
	}
	float_1 = float_1;
	char_1 = v_redhttp_response_new_error_page(int_2,short_1);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
	}
	v_redhttp_response_add_header(short_2,int_5,char_2);

	double_3 = double_2 + double_1;
	return float_1;
}
int v_handle_redirect( short parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	return int_1;
	float_1 = v_redhttp_response_new_redirect(char_1,int_2);

}
short v_syntax_select_list( short parameter_1,double parameter_2,short parameter_3,float parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		int_3 = v_redstore_page_append_string(unsigned_int_1,long_1);

		double_1 = double_4 + double_4;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			double double_5 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double_3 = double_1 + double_2;
			int_4 = v_redstore_page_append_escaped(float_1,float_1,char_1);

			double_5 = double_3 + double_1;
			if(1)
			{
				float_2 = float_1 * float_1;
			}
			double_3 = double_4 + double_2;
			float_2 = float_2 * float_3;
			int_4 = int_4;
		}
	}
	if(1)
	{
		int int_5 = 1;
		int_2 = v_redstore_page_append_strings(long_2,int_2);

		int_5 = int_5 * int_3;
	}
	return short_1;
}
void v_handle_page_query_form( double parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	int int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_7 = 1;
	float float_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	v_redstore_page_end(short_1);

	int_1 = int_1;
	int_2 = v_redstore_page_append_string(unsigned_int_1,long_1);

	int_1 = int_1 + int_3;
	double_1 = v_redstore_page_new(int_3,short_1);

	short_3 = short_2 * short_2;
	double_1 = double_2 + double_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	short_2 = v_syntax_select_list(short_2,double_1,short_4,float_1);

	double_2 = double_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	double_3 = double_1 * double_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	int_3 = int_2 * int_3;
	int_5 = int_4 + int_2;
	int_2 = int_3 + int_3;
	float_2 = float_1 * float_1;
	int_4 = int_1;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	long_2 = long_1 * long_1;
	int_6 = int_6 + int_3;
	float_2 = float_2 + float_1;
	double_2 = double_3;
	char_1 = char_1 * char_2;
	double_2 = double_2 * double_1;
	int_1 = int_5 * int_4;
	v_redhttp_response_add_header(short_2,int_7,char_1);

	float_2 = float_3 * float_1;
	double_3 = double_4 * double_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
	long_2 = long_2 * long_2;
	float_4 = float_1 * float_4;
}
double v_format_graph_stream( unsigned int parameter_1,long parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	double_2 = double_1 * double_1;
	double_4 = double_1 * double_3;
	int_1 = int_3 * int_1;
	char controller4vul_1160[3];
	fgets(controller4vul_1160 ,3 ,stdin);
	if( strcmp( controller4vul_1160, "Xr") < 0)
	{
		long_1 = v_redstore_negotiate_format(double_2,char_1,char_2,float_1,uni_para);

		double_5 = double_3 * double_1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	}
	double_2 = double_1 + double_1;
	if(1)
	{
		unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
		double_2 = double_6;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	double_6 = double_1 * double_3;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	char_3 = char_2 + char_1;
	char_4 = char_1 + char_4;
	if(1)
	{
		double_5 = double_3 + double_1;
	}
	long_1 = long_2 * long_3;
	if(1)
	{
		long long_4 = 1;
		long_3 = long_2 * long_4;
	}
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2;
	}
	return double_6;
}
void v_redhttp_headers_print( long parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_1 + float_2;
	int_1 = int_1 + int_1;
	long_2 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
}
void v_redhttp_response_print_headers( char parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char_2 = char_1 + char_2;
	v_redhttp_headers_print(long_1,char_2);

}
float v_redhttp_server_get_signature( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	return float_1;
}
void v_redhttp_response_add_time_header( int parameter_1,long parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_1;
	int_4 = int_2 + int_3;
	v_redhttp_headers_add(char_1,double_1,char_1);

	float_1 = float_1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "<") > 0)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_2 + double_2;
	}
}
void v_redhttp_response_send( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	v_redhttp_response_add_time_header(int_1,long_1,short_1);

	char_1 = char_1;
	int_3 = int_2 + int_2;
	if(1)
	{
		short short_4 = 1;
		if(1)
		{
			int_3 = int_3;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			v_redhttp_response_print_headers(char_1,unsigned_int_2);

			int_2 = int_3;
		}
		unsigned_int_1 = unsigned_int_1;
		int_1 = int_3;
		if(1)
		{
			int_3 = int_3 * int_1;
			if(1)
			{
				char_1 = char_1 * char_1;
			}
		}
		if(1)
		{
			short_1 = short_1 * short_1;
			short_1 = short_1 + short_1;
			v_redhttp_response_add_header(short_2,int_1,char_1);

			float_1 = v_redhttp_server_get_signature(short_3);

			unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		}
		short_4 = short_4 * short_2;
	}
	if(1)
	{
		int int_4 = 1;
		long long_2 = 1;
		int_1 = int_4;
		long_1 = long_2 + long_1;
		char_1 = char_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		}
	}
}
int v_redhttp_negotiate_get( char parameter_1,int parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_2 * double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "9B") > 0)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		if(1)
		{
			if(1)
			{
				double_3 = double_1 * double_1;
			}
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			}
		}
		long_1 = long_1;
	}
	return int_1;
}
short v_redstore_get_format_by_name( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 * float_2;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
			}
		}
	}
	return short_1;
}
long v_redstore_negotiate_format( double parameter_1,char parameter_2,char parameter_3,float parameter_4,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_4 = 1;
	char char_1 = 1;
	float float_5 = 1;
	float_1 = float_1 * float_2;
	long_1 = long_1 + long_1;
	long_3 = long_2 * long_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1;
	}
	char controller4vul_1161[2];
	fgets(controller4vul_1161 ,2 ,stdin);
	if( strcmp( controller4vul_1161, "O") > 0)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		char controller4vul_1162[3];
		fgets(controller4vul_1162 ,3 ,stdin);
		if( strcmp( controller4vul_1162, "^_") > 0)
		{
			float float_3 = 1;
			float float_4 = 1;
			short_2 = short_1 * short_1;
			float_3 = float_1 * float_3;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				short short_3 = 1;
				double double_1 = 1;
				short_1 = short_3 * short_3;
				if(1)
				{
					double double_2 = 1;
					double_2 = double_1 + double_1;
				}
				for(int looper_2=0; looper_2<1;looper_2++)
				{
					int int_2 = 1;
					int int_3 = 1;
					short_4 = short_2 * short_3;
					int_3 = int_2 + int_2;
					int_1 = int_1 * int_2;
					for(int looper_3=0; looper_3<1;looper_3++)
					{
						char controller4vul_1163[3];
						fgets(controller4vul_1163 ,3 ,stdin);
						if( strcmp( controller4vul_1163, "/V") < 0)
						{
							double double_3 = 1;
							double double_4 = 1;
							double_4 = double_3 * double_1;
							char controller4vul_1164[3];
							fgets(controller4vul_1164 ,3 ,stdin);
							if( strcmp( controller4vul_1164, "sZ") > 0)
							{
								unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
								long_3 = long_1 + long_1;
								char controller4vul_1165[2];
								fgets(controller4vul_1165 ,2 ,stdin);
								if( strcmp( controller4vul_1165, "(") < 0)
								{
									char_1 = v_redhttp_negotiate_parse(unsigned_int_3,uni_para);

									short_2 = short_4 * short_3;
								}
							}
						}
					}
				}
			}
			float_5 = float_4 + float_3;
		}
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "V/") < 0)
	{
		float float_6 = 1;
		unsigned int unsigned_int_4 = 1;
		float_5 = float_6 + float_6;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	}
	if(1)
	{
		short_2 = short_1 * short_4;
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "H") > 0)
		{
			char char_2 = 1;
			char_1 = char_2 + char_1;
		}
	}
	if(1)
	{
		long_2 = long_3 + long_2;
	}
	return long_2;
}
char v_redhttp_request_get_socket()
{
	char char_1 = 1;
	return char_1;
}
char v_format_bindings_query_result( float parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_2;
	int_3 = int_2 + int_3;
	long_1 = v_redstore_negotiate_format(double_1,char_1,char_2,float_1,-1 );

	double_1 = v_redhttp_response_new(int_2,short_1);

	int_2 = int_1 + int_4;
	double_2 = double_1;
	float_1 = float_2 * float_2;
	char_3 = char_4;
	if(1)
	{
		float float_3 = 1;
		float_2 = float_3 + float_1;
		v_redhttp_response_send(int_1,int_3);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	unsigned_int_1 = v_redstore_page_new_with_message(long_2,int_1,int_4,unsigned_int_3,unsigned_int_2);

	short_1 = short_1 * short_1;
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3 * double_2;
		char_4 = v_redhttp_request_get_socket();

		double_3 = double_1 * double_2;
	}
	char_6 = char_5 + char_2;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, " h") > 0)
	{
		double_1 = double_1 + double_4;
		int_5 = int_6;
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	if(1)
	{
		char char_7 = 1;
		char_7 = char_6 + char_1;
	}
	double_4 = double_5;
	if(1)
	{
		double double_6 = 1;
		double_2 = double_6 + double_6;
	}
	int_6 = int_1 + int_3;
	if(1)
	{
		v_redhttp_response_add_header(short_1,int_1,char_2);

		int_3 = int_5 + int_5;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	return char_6;
}
void v_redstore_log( short parameter_1,long parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int int_5 = 1;
	double double_6 = 1;
	int int_6 = 1;
	short short_3 = 1;
	long long_2 = 1;
	short_1 = short_1;
	short_2 = short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_1;
	double_2 = double_1 * double_1;
	double_5 = double_3 + double_4;
	int_1 = int_1 + int_2;
	double_5 = double_4 + double_2;
	int_4 = int_3 + int_4;
	char_1 = char_1 * char_1;
	int_1 = int_2 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_3;
	int_3 = int_1 + int_5;
	double_3 = double_4 + double_4;
	double_4 = double_3 * double_6;
	int_6 = int_3 * int_3;
	short_2 = short_3 * short_2;
	double_5 = double_3;
	long_1 = long_2 * long_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
		if(1)
		{
			long long_3 = 1;
			long_2 = long_3;
		}
		if(1)
		{
			short short_4 = 1;
			double_2 = double_6 + double_1;
			short_4 = short_1 * short_2;
		}
	}
}
void v_redstore_page_end( short parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	int_1 = v_redstore_page_append_strings(long_1,int_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_3 = float_1 * float_2;
	v_redhttp_response_get_user_data(short_1);

	long_2 = long_1 + long_1;
	float_1 = float_1 + float_3;
	v_redhttp_response_set_content(unsigned_int_1,char_1,double_1,short_2);

	float_2 = float_2 * float_4;
	short_1 = short_2 * short_2;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	double_3 = double_2 * double_3;
	char_2 = char_1 * char_2;
	int_2 = v_redstore_page_append_string(unsigned_int_2,long_3);

	short_3 = short_1 * short_1;
}
int v_redstore_page_append_string_buffer( float parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int_1 = v_redstore_page_append_escaped(float_1,float_2,char_1);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	int_1 = v_redstore_page_append_string(unsigned_int_2,long_1);

}
int v_redstore_page_append_escaped( float parameter_1,float parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = long_2;
	v_redhttp_response_get_user_data(short_1);

	int_2 = int_1 * int_1;
	return int_3;
}
int v_redstore_page_append_strings( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return int_1;
	v_redhttp_response_get_user_data(short_1);

}
void v_redhttp_response_get_user_data( short parameter_1)
{
}
int v_redstore_page_append_string( unsigned int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return int_1;
	v_redhttp_response_get_user_data(short_1);

}
void v_redhttp_response_set_user_data( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char_3 = char_1 + char_2;
}
double v_redhttp_response_get_status_message( short parameter_1)
{
	double double_1 = 1;
	return double_1;
}
double v_redstore_page_new( int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	int int_7 = 1;
	double double_6 = 1;
	int_1 = int_1 + int_2;
	int_1 = int_3 + int_2;
	char_1 = char_2;
	if(1)
	{
		int_1 = int_1;
	}
	double_2 = double_1 + double_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "w") < 0)
	{
	}
	if(1)
	{
		int_2 = int_3;
	}
	long_1 = long_1 * long_2;
	float_2 = float_1 + float_2;
	int_2 = v_redstore_page_append_string(unsigned_int_1,long_1);

	int_5 = int_4 + int_3;
	unsigned_int_2 = v_redhttp_response_new_with_type(int_5,unsigned_int_1,double_3);

	double_2 = double_1 * double_2;
	v_redhttp_response_set_user_data(char_1);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	int_1 = v_redstore_page_append_strings(long_1,int_6);

	double_2 = double_1;
	double_2 = double_4 * double_3;
	char_4 = char_1 * char_3;
	short_2 = short_1 * short_2;
	double_5 = double_3 * double_1;
	int_4 = int_4 + int_7;
	double_4 = double_1 + double_3;
	double_6 = v_redhttp_response_get_status_message(short_1);

	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	int_1 = int_4 + int_6;
	return double_4;
}
int v_redstore_is_html_format( unsigned int parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
void v_redhttp_negotiate_free( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long_2 = long_1 * long_1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		float_1 = float_1 * float_2;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
}
int v_redhttp_negotiate_compare_types( double parameter_1,long parameter_2)
{
	int int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "aJ") < 0)
	{
	}
	if(1)
	{
	}
	return int_1;
}
unsigned int v_redhttp_negotiate_choose( short parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = char_1 + char_2;
	double_1 = double_2;
	float_1 = v_redhttp_strdup(double_3);

	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long_1 = long_2;
				if(1)
				{
					double double_4 = 1;
					long long_3 = 1;
					unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
					double_4 = double_3 * double_4;
					long_4 = long_3 * long_4;
				}
			}
		}
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "O") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = v_redhttp_negotiate_compare_types(double_2,long_4);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	return unsigned_int_4;
}
void v_redhttp_negotiate_sort( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2 + double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		double_1 = double_1 * double_3;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
}
void v_redhttp_negotiate_add( char parameter_1,float parameter_2,double parameter_3,int parameter_4,int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short_1 = v_redhttp_strndup(int_1,long_1,uni_para);

	double_3 = double_1 * double_2;
	long_1 = long_1;
}
unsigned int v_redhttp_negotiate_round( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
}
char v_redhttp_negotiate_parse( unsigned int parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller4vul_1166[2];
		fgets(controller4vul_1166 ,2 ,stdin);
		if( strcmp( controller4vul_1166, "P") > 0)
		{
			float float_1 = 1;
			float float_3 = 1;
			unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
			float_2 = float_1 * float_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char controller4vul_1167[2];
				fgets(controller4vul_1167 ,2 ,stdin);
				if( strcmp( controller4vul_1167, "8") < 0)
				{
					int int_1 = 1;
					char char_2 = 1;
					char char_3 = 1;
					int_1 = int_1 * int_1;
					for(int looper_3=0; looper_3<1;looper_3++)
					{
						char controller4vul_1168[3];
						fgets(controller4vul_1168 ,3 ,stdin);
						if( strcmp( controller4vul_1168, "t$") > 0)
						{
							int int_3 = 1;
							int int_4 = 1;
							int_1 = int_2;
							int_4 = int_3 + int_3;
							long_2 = long_1 * long_2;
							char controller4vul_1169[2];
							fgets(controller4vul_1169 ,2 ,stdin);
							if( strcmp( controller4vul_1169, "L") > 0)
							{
								v_redhttp_negotiate_add(char_1,float_2,double_1,int_2,uni_para);

								char_2 = char_1 * char_1;
							}
						}
					}
					char_2 = char_3;
				}
			}
			float_2 = float_2 + float_3;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
		}
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "L") > 0)
		{
			long long_3 = 1;
			long_2 = long_2 + long_3;
		}
	}
	return char_1;
}
long v_redhttp_request_get_header( double parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	return long_1;
	v_redhttp_headers_get(long_2,char_1);

}
int v_redstore_negotiate_string( char parameter_1,float parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	long long_7 = 1;
	char char_2 = 1;
	long long_8 = 1;
	int int_2 = 1;
	float_2 = float_1 + float_2;
	long_3 = long_1 * long_2;
	long_4 = long_1 + long_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 + int_1;
		}
		char_1 = v_redhttp_negotiate_parse(unsigned_int_3,-1 );

		short_1 = short_1 + short_2;
	}
	if(1)
	{
		long long_5 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
		long_6 = long_5 * long_3;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
		short_1 = short_2;
		long_2 = v_redhttp_request_get_header(double_1,long_7);

		char_2 = char_1;
		short_1 = short_2 * short_1;
		long_3 = long_6 + long_7;
	}
	if(1)
	{
		unsigned_int_4 = v_redhttp_negotiate_choose(short_1,long_8);

		int_2 = int_2;
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, "-e") < 0)
		{
			char_2 = char_1 + char_2;
		}
		int_2 = v_redhttp_request_get_argument(unsigned_int_3,short_2);

		v_redhttp_negotiate_free(long_8);

		unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	}
	return int_2;
}
unsigned int v_redstore_page_new_with_message( long parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_5 = 1;
	double_2 = double_1 * double_2;
	double_1 = double_1 + double_3;
	long_1 = long_1 * long_1;
	v_redstore_page_end(short_1);

	short_3 = short_2 * short_2;
	float_1 = float_1 + float_2;
	long_3 = long_1 * long_2;
	v_redstore_log(short_2,long_1,short_4);

	float_4 = float_3 * float_3;
	float_4 = float_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = v_redstore_is_html_format(unsigned_int_2);

	double_3 = double_3 * double_2;
	char_2 = char_1 * char_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_3 = double_2 + double_4;
	short_1 = short_1 + short_4;
	if(1)
	{
		int int_2 = 1;
		int_1 = v_redstore_page_append_string(unsigned_int_3,long_3);

		float_4 = float_2 * float_1;
		long_1 = long_3;
		short_4 = v_redhttp_response_status_message_for_code(int_1);

		v_redhttp_response_set_content(unsigned_int_2,char_3,double_4,short_1);

		int_3 = int_2 + int_1;
		float_2 = float_4 + float_3;
		if(1)
		{
			char char_4 = 1;
			int_3 = v_redstore_page_append_string_buffer(float_1,double_3,int_3);

			char_4 = char_1 + char_3;
			unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
			long_1 = long_2;
		}
		unsigned_int_5 = unsigned_int_6 + unsigned_int_4;
	}
	if(1)
	{
		long long_4 = 1;
		short short_5 = 1;
		short short_6 = 1;
		unsigned_int_7 = v_redhttp_response_new_with_type(int_1,unsigned_int_1,double_1);

		long_4 = long_2 + long_2;
		int_3 = v_redstore_negotiate_string(char_1,float_4,double_1);

		double_1 = double_3 + double_1;
		unsigned_int_8 = unsigned_int_5 * unsigned_int_5;
		if(1)
		{
			double_2 = v_redstore_page_new(int_1,short_3);

			long_1 = long_2 + long_2;
			int_4 = int_3 * int_3;
		}
		short_6 = short_5 * short_4;
		if(1)
		{
			unsigned_int_8 = unsigned_int_8 + unsigned_int_3;
			double_3 = double_4 + double_1;
			long_2 = long_4 + long_1;
		}
	}
	char controller_7[3];
	fgets(controller_7 ,3 ,stdin);
	if( strcmp( controller_7, "uk") < 0)
	{
		int_3 = int_4 * int_1;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_8 + unsigned_int_4;
	}
	if(1)
	{
		float_2 = float_4 * float_2;
	}
	return unsigned_int_9;
	int_4 = v_redstore_page_append_escaped(float_3,float_5,char_2);

}
char v_perform_query( short parameter_1,short parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int int_5 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	short_2 = short_1 * short_1;
	short_2 = short_2 + short_1;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	short_1 = short_3 * short_4;
	long_2 = long_1 * long_1;
	long_3 = long_4;
	if(1)
	{
		int_1 = int_1 * int_2;
		int_1 = int_1;
	}
	char_2 = char_1 * char_1;
	if(1)
	{
		double_1 = double_1;
		int_3 = int_2 + int_3;
	}
	short_1 = short_1 + short_2;
	if(1)
	{
		int_3 = int_3;
	}
	char controller4vul_1158[3];
	fgets(controller4vul_1158 ,3 ,stdin);
	if( strcmp( controller4vul_1158, "Gw") < 0)
	{
		unsigned_int_3 = unsigned_int_1;
		char controller4vul_1159[3];
		fgets(controller4vul_1159 ,3 ,stdin);
		if( strcmp( controller4vul_1159, "|k") < 0)
		{
			char char_3 = 1;
			double_2 = v_format_graph_stream(unsigned_int_2,long_3,uni_para);

			long_2 = long_1 * long_1;
			char_3 = char_3 + char_3;
		}
		if(1)
		{
			int_2 = int_1;
		}
	}
	if(1)
	{
		int int_4 = 1;
		int_5 = int_1 + int_4;
	}
	if(1)
	{
		int int_6 = 1;
		int_6 = int_2 * int_3;
	}
	if(1)
	{
		int_5 = int_5 * int_5;
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, " 2") < 0)
	{
		long_1 = long_2 + long_3;
	}
	if(1)
	{
		double_2 = double_2 * double_1;
	}
	return char_2;
}
short v_redhttp_strcasecmp( float parameter_1,long parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_3 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		short_2 = short_1 + short_1;
		double_2 = double_1 + double_1;
		int_3 = int_2 + int_3;
		char_1 = char_1 * char_1;
		double_2 = double_3;
	}
	float_1 = float_1 * float_2;
	int_4 = int_4;
	short_1 = short_3;
	int_4 = int_3 * int_2;
	int_4 = int_2 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_3 * int_1;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "qz") > 0)
		{
			float_2 = float_2 + float_2;
		}
	}
	double_5 = double_2 + double_4;
	char_1 = char_2;
	int_5 = int_2 + int_2;
	unsigned_int_3 = unsigned_int_4;
	return short_1;
}
void v_redhttp_headers_get( long parameter_1,char parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	char_1 = char_1 * char_1;
	short_1 = v_redhttp_strcasecmp(float_1,long_1);

	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "Y") < 0)
		{
		}
	}
}
int v_redhttp_request_get_argument( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	return int_1;
	v_redhttp_headers_get(long_1,char_1);

}
double v_handle_query( float parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 + double_1;
	char controller4vul_1157[3];
	fgets(controller4vul_1157 ,3 ,stdin);
	if( strcmp( controller4vul_1157, "eN") > 0)
	{
		char_1 = v_perform_query(short_1,short_2,uni_para);

	}
	if(1)
	{
	}
	return double_3;
}
void v_redhttp_response_set_content( unsigned int parameter_1,char parameter_2,double parameter_3,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_3;
}
void v_redhttp_headers_add( char parameter_1,double parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float_3 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	int_1 = int_2 * int_3;
	float_3 = float_3 + float_2;
	int_3 = int_1 * int_1;
	int_3 = int_2 + int_1;
	double_1 = double_1;
	double_1 = double_2 * double_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		float_3 = float_2 + float_3;
	}
	if(1)
	{
		int int_4 = 1;
		float_3 = v_redhttp_strdup(double_3);

		int_1 = int_3 * int_4;
	}
}
void v_redhttp_response_add_header( short parameter_1,int parameter_2,char parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	v_redhttp_headers_add(char_1,double_1,char_2);

	short_1 = short_1 + short_2;
}
short v_redhttp_response_status_message_for_code( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return short_1;
}
void v_redhttp_response_set_status_message( char parameter_1,long parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if(remainder_check(controller_1,100,2))
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	if(1)
	{
		float_1 = float_1;
	}
	if(1)
	{
		int int_1 = 1;
		float_1 = v_redhttp_strdup(double_1);

		int_1 = int_1;
	}
}
void v_redhttp_response_set_status_code( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	v_redhttp_response_set_status_message(char_1,long_1);

	short_1 = v_redhttp_response_status_message_for_code(int_1);

	long_3 = long_1 + long_2;
	double_1 = double_1;
	float_1 = float_1;
}
double v_redhttp_response_new( int parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float_1 = float_1 * float_2;
	v_redhttp_response_set_status_code(int_1,int_2);

	int_4 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	double_1 = double_1 + double_1;
	v_redhttp_response_set_status_message(char_1,long_1);

	double_3 = double_1 + double_2;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	return double_3;
}
unsigned int v_redhttp_response_new_with_type( int parameter_1,unsigned int parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
		char char_1 = 1;
		char_2 = char_1 + char_1;
	}
	return unsigned_int_1;
	double_2 = v_redhttp_response_new(int_1,short_1);

	v_redhttp_response_add_header(short_2,int_2,char_2);

}
int v_handle_homepage( char parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = v_redhttp_response_new_with_type(int_1,unsigned_int_1,double_1);

	v_redhttp_response_set_content(unsigned_int_2,char_1,double_1,short_1);

	short_3 = short_2 + short_1;
	return int_1;
}
short v_redhttp_request_get_path( short parameter_1)
{
	short short_1 = 1;
	return short_1;
}
float v_redhttp_request_get_method( double parameter_1)
{
	float float_1 = 1;
	return float_1;
}
unsigned int v_redhttp_request_get_remote_port( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double v_redhttp_request_get_remote_addr( short parameter_1)
{
	double double_1 = 1;
	return double_1;
}
float v_handle_logging( unsigned int parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	double_1 = v_redhttp_request_get_remote_addr(short_1);

	unsigned_int_1 = v_redhttp_request_get_remote_port(int_1);

	float_1 = v_redhttp_request_get_method(double_2);

	int_1 = int_1;
	return float_2;
	short_1 = v_redhttp_request_get_path(short_1);

}
short v_redhttp_strndup( int parameter_1,long parameter_2,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	int_1 = int_1;
	char controller4vul_1170[2];
	fgets(controller4vul_1170 ,2 ,stdin);
	if( strcmp( controller4vul_1170, "3") > 0)
	{
		float float_1 = 1;
		strcpy(vul_var, "CWE-761");
		float_1 = float_1 + float_1;
		char controller4vul_1171[3];
		fgets(controller4vul_1171 ,3 ,stdin);
		if( strcmp( controller4vul_1171, "wW") < 0)
		{
			short short_1 = 1;
			short short_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			if(uni_para == 893)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			short_2 = short_1 + short_1;
			long_3 = long_1 * long_2;
		}
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
float v_redhttp_strdup( double parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short_1 = v_redhttp_strndup(int_1,long_1,-1 );

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int_2 = int_2 + int_3;
		short_3 = short_2 * short_1;
	}
	return float_1;
}
void v_redhttp_server_add_handler( long parameter_1,int parameter_2,char parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_2;
	int_3 = int_1 + int_2;
	short_1 = short_1 + short_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
		float_1 = v_redhttp_strdup(double_3);

		short_1 = short_3 + short_4;
	}
}
long v_redhttp_server_new()
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short_1 = short_1 + short_1;
	double_3 = double_1 + double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		float_1 = float_2;
		float_2 = float_1 + float_2;
		char_1 = char_1 * char_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_4 = 1;
			double_4 = double_1 + double_2;
		}
		int_2 = int_1 * int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return long_1;
}
double v_print_help( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	float_2 = float_1 + float_1;
	return double_1;
}
int main()
{
	int uni_para =893;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double_1 = v_handle_query(float_1,uni_para);

	short_2 = short_1 * short_2;
	return int_1;
}

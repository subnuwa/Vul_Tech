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

long v_test_parse_icmpv6_packet();
int v_test_parse_icmpv4_packet();
int v_test_parse_ipv4_gre_mpls_ipv4_tcp_packet();
float v_test_parse_ipv4_gre_ipv4_tcp_packet();
float v_test_parse_udp_ipv6_packet(int uni_para);
int v_test_parse_udp_ipv4_packet();
double v_test_parse_tcp_ipv6_packet();
void v_packet_free( double parameter_1);
long v_close_memstream();
void v_write_bytes( long parameter_1,long parameter_2,int parameter_3);
int v_mem_stream_grow( float parameter_1,int parameter_2);
int v_write_memstream(float parameter_2,int parameter_3);
unsigned int v_open_memstream( char parameter_1,long parameter_2);
void v_hex_dump( long parameter_1,int parameter_2,char parameter_3);
short v_parse_layer3_packet( int parameter_1,float parameter_2,short parameter_3,char parameter_4,int uni_para);
short v_mpls_entry_stack( float parameter_1);
int v_parse_mpls( short parameter_1,int parameter_2,int parameter_3,char parameter_4,int uni_para);
long v_ipv6_init( char parameter_1);
void v_ip_from_ipv6( double parameter_1,long parameter_2);
char v_parse_ipv6( short parameter_1,short parameter_2,double parameter_3,char parameter_4);
float v_gre_len( unsigned int parameter_1);
unsigned int v_parse_gre( long parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5);
double v_parse_icmpv6( short parameter_1,long parameter_2,int parameter_3,int parameter_4,char parameter_5);
float v_parse_icmpv4( unsigned int parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5);
char v_parse_udp( long parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5);
float v_packet_tcp_header_len( int parameter_1);
short v_parse_tcp( float parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4,char parameter_5,int uni_para);
double v_parse_layer4( int parameter_1,int parameter_2,int parameter_3,int parameter_4,char parameter_5,char parameter_6,int uni_para);
float v_ip_to_string( short parameter_1,char parameter_2);
char v_ipv4_init( unsigned int parameter_1);
void v_ip_from_ipv4( double parameter_1,long parameter_2);
int v_packet_header_count( float parameter_1,int uni_para);
float v_packet_append_header( short parameter_1,long parameter_2,int parameter_3,int uni_para);
long v_ip_checksum_partial( char parameter_1,char parameter_2,char parameter_3);
short v_ip_checksum_fold( double parameter_1);
int v_ipv4_checksum(unsigned int parameter_2);
char v_ipv4_header_len( int parameter_1);
long v_parse_ipv4( long parameter_1,char parameter_2,short parameter_3,char parameter_4,int uni_para);
short v_parse_layer3_packet_by_proto( char parameter_1,float parameter_2,float parameter_3,unsigned int parameter_4,char parameter_5,int uni_para);
long v_parse_layer2_packet( long parameter_1,double parameter_2,char parameter_3,char parameter_4,int uni_para);
float v_packet_start( unsigned int parameter_1);
short v_packet_end( float parameter_1);
int v_parse_packet( unsigned int parameter_1,int parameter_2,short parameter_3,char parameter_4,int uni_para);
void v_packet_new( short parameter_1);
void v_test_parse_tcp_ipv4_packet();
long v_test_parse_icmpv6_packet()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_2;
	double_1 = double_2 * double_1;
	int_1 = int_1;
	v_packet_free(double_2);

	double_2 = double_1 + double_2;
	long_2 = long_1 + long_2;
	double_2 = double_3 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_packet_new(short_1);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	long_5 = long_3 * long_4;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	float_2 = float_1 * float_1;
	double_1 = double_4 * double_1;
	double_3 = double_4 * double_4;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	int_2 = int_1 * int_1;
	int_2 = v_parse_packet(unsigned_int_2,int_2,short_2,char_1,-1 );

	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	int_2 = int_3 + int_1;
	return long_1;
}
int v_test_parse_icmpv4_packet()
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	long long_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 * long_1;
	int_3 = int_1 * int_2;
	double_3 = double_1 + double_2;
	double_2 = double_2 * double_3;
	double_3 = double_4 + double_5;
	double_4 = double_6 + double_6;
	double_6 = double_7 * double_7;
	char_1 = char_2;
	long_2 = long_3 + long_2;
	float_1 = float_1 + float_2;
	short_1 = short_1 * short_2;
	v_packet_new(short_1);

	int_3 = int_1 + int_1;
	double_2 = double_3;
	int_1 = v_parse_packet(unsigned_int_2,int_1,short_2,char_3,-1 );

	v_packet_free(double_8);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_6;
	char_4 = char_2 * char_3;
	long_3 = long_4 * long_4;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	return int_2;
}
int v_test_parse_ipv4_gre_mpls_ipv4_tcp_packet()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	int int_3 = 1;
	long long_3 = 1;
	double double_5 = 1;
	long long_4 = 1;
	short short_3 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	short short_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	int int_7 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_8 = 1;
	short short_7 = 1;
	int int_9 = 1;
	int int_10 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 * int_1;
	double_1 = double_1 + double_1;
	double_2 = double_2 * double_2;
	double_4 = double_2 * double_3;
	long_2 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	long_2 = long_1 + long_1;
	char_2 = char_1 + char_1;
	char_1 = char_3;
	float_1 = float_2;
	char_4 = char_2 + char_3;
	int_2 = int_2 + int_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	long_3 = long_2 * long_1;
	v_packet_free(double_5);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	long_3 = long_4;
	int_2 = v_parse_packet(unsigned_int_2,int_2,short_3,char_1,-1 );

	char_7 = char_5 + char_6;
	short_2 = short_2;
	short_4 = short_1;
	int_5 = int_1 * int_4;
	v_packet_new(short_2);

	unsigned_int_4 = unsigned_int_3;
	int_6 = int_6 * int_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	double_5 = double_6;
	int_1 = int_6 + int_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	int_6 = int_7;
	long_4 = long_1;
	unsigned_int_2 = unsigned_int_2;
	int_1 = int_3;
	short_2 = short_5 + short_1;
	short_3 = short_6;
	int_3 = int_3;
	int_3 = int_7 + int_2;
	double_1 = double_2 * double_3;
	int_4 = int_8 + int_2;
	short_4 = short_2 * short_7;
	int_3 = int_1 + int_9;
	double_4 = double_2 * double_4;
	int_3 = int_10;
	int_7 = int_3;
	double_6 = double_4 + double_6;
	long_3 = long_2 * long_4;
	return int_3;
}
float v_test_parse_ipv4_gre_ipv4_tcp_packet()
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	double double_2 = 1;
	float float_2 = 1;
	short short_4 = 1;
	double double_3 = 1;
	char char_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	long long_6 = 1;
	float_1 = float_1;
	int_1 = v_parse_packet(unsigned_int_1,int_1,short_1,char_1,-1 );

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 * long_1;
	long_1 = long_2;
	long_2 = long_1;
	int_2 = int_1 * int_1;
	double_1 = double_1 + double_1;
	double_1 = double_1 * double_1;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_2;
	short_1 = short_2 + short_3;
	long_2 = long_3 + long_3;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	float_2 = float_1 * float_1;
	short_3 = short_4 + short_4;
	double_3 = double_1 * double_3;
	short_1 = short_1 * short_4;
	v_packet_free(double_2);

	char_2 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	double_1 = double_2 + double_4;
	int_1 = int_2 + int_1;
	short_4 = short_4;
	int_4 = int_3 + int_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
	unsigned_int_6 = unsigned_int_6;
	short_2 = short_2 + short_5;
	unsigned_int_7 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_7;
	unsigned_int_6 = unsigned_int_2;
	short_3 = short_4 * short_4;
	double_3 = double_4 + double_1;
	unsigned_int_1 = unsigned_int_8 * unsigned_int_8;
	v_packet_new(short_3);

	short_5 = short_1 * short_4;
	long_4 = long_3 + long_3;
	int_3 = int_4;
	long_4 = long_5 * long_3;
	int_2 = int_1 + int_4;
	short_3 = short_3 + short_6;
	short_7 = short_6 + short_3;
	double_4 = double_1 * double_1;
	long_6 = long_1 + long_5;
	return float_2;
}
float v_test_parse_udp_ipv6_packet(int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int_1 = v_parse_packet(unsigned_int_1,int_2,short_1,char_1,uni_para);

	char_1 = char_2 + char_3;
	int_2 = int_2;
	char_1 = char_2 + char_4;
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_2 + short_2;
	long_1 = long_1;
	short_1 = short_3;
	short_1 = short_2 * short_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_5;
	unsigned_int_2 = unsigned_int_4;
	int_1 = int_1;
	short_1 = short_4 * short_3;
	double_2 = double_1 * double_2;
	short_3 = short_3 + short_4;
	float_3 = float_1 + float_2;
	char_1 = char_2 + char_1;
	int_1 = int_1 * int_3;
	char_3 = char_3;
	return float_2;
}
int v_test_parse_udp_ipv4_packet()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	double double_4 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	char_1 = char_1;
	short_1 = short_1 + short_2;
	double_3 = double_1 + double_2;
	float_2 = float_1 * float_2;
	int_3 = v_parse_packet(unsigned_int_4,int_2,short_1,char_2,-1 );

	v_packet_free(double_1);

	double_2 = double_3 + double_4;
	int_2 = int_2 * int_3;
	v_packet_new(short_2);

	float_3 = float_2 * float_1;
	short_4 = short_3 + short_2;
	int_4 = int_1 * int_2;
	double_2 = double_5 + double_5;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_2;
	return int_2;
}
double v_test_parse_tcp_ipv6_packet()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_parse_packet(unsigned_int_1,int_1,short_1,char_1,-1 );

	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_3;
	char_1 = char_2 * char_1;
	float_4 = float_3 * float_4;
	double_2 = double_1 * double_1;
	double_2 = double_3 * double_3;
	double_2 = double_3 + double_3;
	char_3 = char_2 + char_1;
	double_3 = double_2 * double_4;
	double_5 = double_3 + double_2;
	int_2 = int_1 * int_2;
	double_2 = double_4 + double_1;
	char_2 = char_1 * char_1;
	double_6 = double_2 + double_1;
	v_packet_free(double_7);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_packet_new(short_2);

	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	double_7 = double_6 + double_2;
	float_2 = float_1;
	return double_5;
}
void v_packet_free( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short_2 = short_1 * short_2;
	double_1 = double_1 * double_1;
	char_1 = char_1 * char_2;
}
long v_close_memstream()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	return long_1;
}
void v_write_bytes( long parameter_1,long parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_2 = short_1 * short_2;
	double_2 = double_1 * double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "k!") > 0)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_1;
}
int v_mem_stream_grow( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 * long_2;
	int_1 = int_1 * int_1;
	char_1 = char_1 * char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "r") < 0)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "XZ") < 0)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "y") < 0)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	int_2 = int_2 * int_1;
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "_") < 0)
	{
	}
	float_3 = float_4;
	char_3 = char_1 * char_2;
	return int_3;
}
int v_write_memstream(float parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_1 = char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "/") < 0)
	{
	}
	int_1 = v_mem_stream_grow(float_1,int_2);

	long_1 = long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_write_bytes(long_3,long_1,int_3);

	int_3 = int_2 + int_1;
	double_2 = double_1 * double_2;
	return int_2;
}
unsigned int v_open_memstream( char parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double_3 = double_1 + double_2;
	int_1 = int_1 + int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	double_3 = double_4 + double_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, ".") < 0)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_2 = v_write_memstream(float_1,int_2);

		unsigned_int_2 = unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2 * int_2;
	long_1 = v_close_memstream();

	float_1 = float_1;
	int_1 = int_2;
	return unsigned_int_1;
}
void v_hex_dump( long parameter_1,int parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	float_3 = float_1 + float_2;
	char_1 = char_1;
	long_2 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		if(1)
		{
			char char_2 = 1;
			char controller_2[2];
			fgets(controller_2 ,2 ,stdin);
			if( strcmp( controller_2, "m") > 0)
			{
				double_2 = double_1 + double_2;
			}
			char_1 = char_2 * char_1;
		}
		double_2 = double_1;
	}
	int_3 = int_1 * int_2;
	int_5 = int_1 + int_4;
	unsigned_int_1 = v_open_memstream(char_1,long_2);

}
short v_parse_layer3_packet( int parameter_1,float parameter_2,short parameter_3,char parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_1421[2];
	fgets(controller4vul_1421 ,2 ,stdin);
	if( strcmp( controller4vul_1421, "4") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		long_1 = v_parse_ipv4(long_1,char_1,short_1,char_1,uni_para);

		double_2 = double_1 * double_1;
	}
	long_3 = long_2 * long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "S") < 0)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "D") < 0)
	{
	}
	int_1 = int_1 + int_1;
	return short_1;
}
short v_mpls_entry_stack( float parameter_1)
{
	short short_1 = 1;
	return short_1;
}
int v_parse_mpls( short parameter_1,int parameter_2,int parameter_3,char parameter_4,int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	short_1 = v_parse_layer3_packet(int_1,float_1,short_2,char_1,uni_para);

	short_2 = short_2 + short_2;
	int_1 = int_1;
	float_2 = float_2;
	return int_1;
}
long v_ipv6_init( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_1;
	return long_1;
}
void v_ip_from_ipv6( double parameter_1,long parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long_1 = v_ipv6_init(char_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_2;
}
char v_parse_ipv6( short parameter_1,short parameter_2,double parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_6 = 1;
	char char_7 = 1;
	int_3 = int_1 + int_2;
	int_3 = int_1;
	v_ip_from_ipv6(double_1,long_1);

	char_1 = char_1;
	double_3 = double_2 + double_3;
	double_3 = v_parse_layer4(int_3,int_2,int_1,int_1,char_1,char_2,-1 );

	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float_1 = v_packet_append_header(short_3,long_1,int_1,-1 );

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_3 = int_4 * int_3;
	}
	short_1 = short_2 + short_2;
	if(1)
	{
		float float_2 = 1;
		int_3 = int_5;
		float_2 = float_2 * float_1;
	}
	double_3 = double_3;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
		char_4 = char_3 + char_1;
	}
	char_1 = char_2 * char_5;
	int_3 = int_3 + int_4;
	int_1 = int_3;
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "A") < 0)
	{
		long long_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		int_5 = int_2 + int_3;
		long_2 = long_2 + long_2;
		float_1 = v_ip_to_string(short_3,char_6);

		int_4 = int_2 + int_5;
		int_1 = int_4 * int_4;
		double_3 = double_2 * double_2;
		double_5 = double_2 * double_4;
	}
	int_4 = int_5 + int_4;
	double_3 = double_6 * double_3;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "/$") > 0)
	{
		float float_3 = 1;
		float_3 = float_3;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_2 = unsigned_int_6 + unsigned_int_6;
	}
	return char_7;
}
float v_gre_len( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double_1 = double_1 + double_2;
	double_1 = double_2 + double_2;
	int_1 = int_1 + int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "|`") < 0)
	{
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "K") == 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "M") < 0)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	return float_1;
}
unsigned int v_parse_gre( long parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	float float_5 = 1;
	short short_1 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	int_2 = int_1 + int_1;
	int_2 = int_1 + int_2;
	float_2 = float_1 * float_1;
	int_1 = int_1 * int_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "5F") < 0)
	{
		double_1 = double_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "T") < 0)
	{
		char char_2 = 1;
		char_2 = char_1 * char_2;
		float_3 = float_2 * float_2;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
		long_1 = long_1 + long_1;
	}
	double_1 = double_1 + double_1;
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "?") < 0)
	{
		double_2 = double_3;
		double_2 = double_3;
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "*@") == 0)
	{
		float_4 = v_gre_len(unsigned_int_2);

		double_3 = double_3 + double_3;
		double_2 = double_2 * double_2;
	}
	char_4 = char_1 + char_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	int_3 = int_2 * int_1;
	char controller_6[3];
	fgets(controller_6 ,3 ,stdin);
	if( strcmp( controller_6, "s9") > 0)
	{
		char_1 = char_5;
		int_1 = int_3 * int_3;
	}
	float_5 = v_packet_append_header(short_1,long_1,int_2,-1 );

	short_1 = v_parse_layer3_packet_by_proto(char_4,float_6,float_3,unsigned_int_4,char_5,-1 );

	int_4 = int_1;
	short_3 = short_2 + short_1;
	long_2 = long_1 * long_1;
	return unsigned_int_4;
}
double v_parse_icmpv6( short parameter_1,long parameter_2,int parameter_3,int parameter_4,char parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_2 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long_1 = long_1 + long_2;
	char_1 = char_1;
	long_4 = long_3 + long_3;
	char_1 = char_2 + char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "`") < 0)
	{
		float float_1 = 1;
		float_2 = float_1 * float_2;
		long_1 = long_1 * long_2;
	}
	double_3 = double_1 * double_2;
	float_2 = v_packet_append_header(short_1,long_2,int_1,-1 );

	double_4 = double_1 * double_4;
	if(1)
	{
		int_1 = int_2 + int_2;
		unsigned_int_1 = unsigned_int_1;
	}
	double_6 = double_3 + double_5;
	short_2 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	int_2 = int_2 * int_1;
	return double_6;
}
float v_parse_icmpv4( unsigned int parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	short_1 = short_1 * short_1;
	double_1 = double_1;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
		int_1 = int_2;
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	char_2 = char_1 * char_1;
	if(1)
	{
		float_1 = float_2;
		double_1 = double_2 * double_2;
	}
	double_1 = double_1 * double_1;
	float_1 = v_packet_append_header(short_1,long_1,int_2,-1 );

	long_2 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
	double_2 = double_1 * double_3;
	double_4 = double_3 + double_3;
	return float_2;
}
char v_parse_udp( long parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double_2 = double_1 * double_1;
	double_3 = double_2;
	char_1 = char_1 * char_1;
	if(1)
	{
		double_1 = double_3 + double_3;
		short_1 = short_1 * short_1;
	}
	double_4 = double_3 * double_2;
	char_2 = char_1 + char_1;
	int_3 = int_1 + int_2;
	if(1)
	{
		double_5 = double_3 * double_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double double_6 = 1;
		char_3 = char_2 + char_1;
		float_1 = v_packet_append_header(short_1,long_1,int_2,-1 );

		double_5 = double_6;
	}
	if(1)
	{
		int_4 = int_2 * int_2;
		int_5 = int_3;
	}
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		char_3 = char_1 * char_2;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	}
	int_6 = int_5;
	int_2 = int_4 + int_5;
	double_8 = double_3 * double_7;
	char_2 = char_2 * char_1;
	char_1 = char_2 + char_3;
	return char_2;
}
float v_packet_tcp_header_len( int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_1;
	return float_1;
}
short v_parse_tcp( float parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4,char parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_2;
	double_1 = double_1 * double_2;
	char controller4vul_1424[2];
	fgets(controller4vul_1424 ,2 ,stdin);
	if( strcmp( controller4vul_1424, "U") < 0)
	{
		float float_3 = 1;
		float_1 = v_packet_append_header(short_1,long_1,int_1,uni_para);

		float_1 = float_2 * float_3;
		int_1 = int_2 * int_1;
	}
	long_4 = long_1 + long_3;
	int_1 = int_3 * int_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_4 = 1;
		char_3 = char_1 + char_2;
		int_2 = int_4 + int_3;
	}
	if(1)
	{
		float float_4 = 1;
		float_1 = float_2 + float_4;
		long_4 = long_1 * long_3;
	}
	short_3 = short_1 * short_2;
	if(1)
	{
		long long_5 = 1;
		double_2 = double_2 + double_2;
		long_5 = long_2 + long_2;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_2 * double_3;
	double_4 = double_2 + double_1;
	unsigned_int_4 = unsigned_int_2;
	double_3 = double_1 + double_1;
	return short_3;
}
double v_parse_layer4( int parameter_1,int parameter_2,int parameter_3,int parameter_4,char parameter_5,char parameter_6,int uni_para)
{
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char controller4vul_1423[3];
	fgets(controller4vul_1423 ,3 ,stdin);
	if( strcmp( controller4vul_1423, "d7") > 0)
	{
		short_1 = v_parse_tcp(float_1,unsigned_int_1,int_1,float_1,char_1,uni_para);

	}
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "vf") > 0)
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
	return double_1;
}
float v_ip_to_string( short parameter_1,char parameter_2)
{
	float float_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "{") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	return float_1;
}
char v_ipv4_init( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short_2 = short_1 * short_2;
	float_1 = float_1 * float_1;
	return char_1;
}
void v_ip_from_ipv4( double parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_3 = v_ipv4_init(unsigned_int_3);

}
int v_packet_header_count( float parameter_1,int uni_para)
{
	short short_1 = 1;
	double double_1 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller4vul_1426[3];
		fgets(controller4vul_1426 ,3 ,stdin);
		if( strcmp( controller4vul_1426, "h>") < 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			if(uni_para == 447)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			long_2 = long_1 * long_1;
		}
	}
	double_1 = double_1;
}
float v_packet_append_header( short parameter_1,long parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	long_2 = long_1 * long_1;
	double_3 = double_3 * double_1;
	char controller4vul_1425[3];
	fgets(controller4vul_1425 ,3 ,stdin);
	if( strcmp( controller4vul_1425, "n-") > 0)
	{
		int_1 = v_packet_header_count(float_1,uni_para);

	}
	char_3 = char_1 + char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
	}
	int_1 = int_2;
	long_3 = long_1;
	long_3 = long_4 + long_1;
	int_2 = int_3 + int_2;
	unsigned_int_3 = unsigned_int_1;
	double_3 = double_4 + double_3;
	return float_1;
}
long v_ip_checksum_partial( char parameter_1,char parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	float_1 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	double_1 = double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "##") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		short_1 = short_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "q}") < 0)
	{
		float float_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float_3 = float_3;
		long_2 = long_1 * long_1;
	}
	return long_3;
}
short v_ip_checksum_fold( double parameter_1)
{
	short short_1 = 1;
	return short_1;
}
int v_ipv4_checksum(unsigned int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	return int_1;
	short_1 = v_ip_checksum_fold(double_1);

	long_1 = v_ip_checksum_partial(char_1,char_2,char_2);

}
char v_ipv4_header_len( int parameter_1)
{
	char char_1 = 1;
	return char_1;
}
long v_parse_ipv4( long parameter_1,char parameter_2,short parameter_3,char parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_6 = 1;
	double double_5 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	int_1 = int_1 * int_1;
	int_2 = int_2;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_4 = short_3 * short_2;
	int_1 = int_3 + int_1;
	long_2 = long_1 + long_1;
	char controller4vul_1422[3];
	fgets(controller4vul_1422 ,3 ,stdin);
	if( strcmp( controller4vul_1422, "59") > 0)
	{
		double_1 = v_parse_layer4(int_2,int_3,int_2,int_1,char_1,char_1,uni_para);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		char_1 = char_2 + char_2;
	}
	if(1)
	{
		double_1 = double_2 * double_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	double_2 = double_3;
	if(1)
	{
		double_3 = double_2 * double_1;
		double_3 = double_3 + double_2;
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3 * long_1;
		int_1 = int_1 + int_4;
	}
	if(1)
	{
		int int_5 = 1;
		int_5 = int_3 + int_3;
		int_6 = int_1 + int_4;
	}
	if(1)
	{
		double double_4 = 1;
		char_2 = char_2 + char_1;
		double_2 = double_1 * double_4;
	}
	int_3 = int_2 * int_2;
	if(1)
	{
		double_3 = double_5 + double_2;
		int_7 = int_6;
	}
	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
		int int_8 = 1;
		int_8 = int_2 + int_6;
		short_2 = short_4 * short_2;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int_6 = int_7;
		short_1 = short_5 + short_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_6;
		double_6 = double_6 + double_2;
		unsigned_int_5 = unsigned_int_6;
		double_3 = double_5 * double_7;
	}
	short_1 = short_3 * short_6;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_7;
	unsigned_int_9 = unsigned_int_8 * unsigned_int_1;
	if(1)
	{
		short_5 = short_6 + short_3;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	return long_2;
}
short v_parse_layer3_packet_by_proto( char parameter_1,float parameter_2,float parameter_3,unsigned int parameter_4,char parameter_5,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	double double_5 = 1;
	long long_1 = 1;
	float_1 = float_1;
	char controller4vul_1419[3];
	fgets(controller4vul_1419 ,3 ,stdin);
	if( strcmp( controller4vul_1419, "]`") > 0)
	{
		double double_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int_3 = int_1 + int_2;
		char controller4vul_1420[3];
		fgets(controller4vul_1420 ,3 ,stdin);
		if( strcmp( controller4vul_1420, "||") > 0)
		{
			char char_2 = 1;
			int_3 = v_parse_mpls(short_1,int_1,int_1,char_1,uni_para);

			double_3 = double_1 * double_2;
			char_1 = char_2;
		}
		short_2 = short_3;
		if(1)
		{
		}
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "-") < 0)
		{
			double double_4 = 1;
			long long_2 = 1;
			double_5 = double_4 + double_2;
			long_2 = long_1 + long_2;
		}
	}
	if(1)
	{
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char_3 = char_3 + char_1;
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			double_3 = double_5 + double_5;
			long_4 = long_3 + long_1;
		}
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
		}
		if(1)
		{
			double double_6 = 1;
			int_3 = int_3 * int_2;
			double_6 = double_1 + double_5;
		}
	}
	if(1)
	{
	}
	char controller_8[3];
	fgets(controller_8 ,3 ,stdin);
	if( strcmp( controller_8, "1-") < 0)
	{
	}
	return short_1;
}
long v_parse_layer2_packet( long parameter_1,double parameter_2,char parameter_3,char parameter_4,int uni_para)
{
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	char_1 = char_1 + char_1;
	short_1 = short_1 + short_1;
	char controller4vul_1418[3];
	fgets(controller4vul_1418 ,3 ,stdin);
	if( strcmp( controller4vul_1418, "_K") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		short_1 = v_parse_layer3_packet_by_proto(char_2,float_1,float_2,unsigned_int_1,char_3,uni_para);

		long_1 = long_2;
		int_2 = int_1 + int_1;
	}
	short_3 = short_2 * short_2;
	int_1 = int_2 + int_1;
	int_2 = int_2 + int_2;
	return long_3;
}
float v_packet_start( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return float_1;
}
short v_packet_end( float parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return short_1;
	float_1 = v_packet_start(unsigned_int_1);

}
int v_parse_packet( unsigned int parameter_1,int parameter_2,short parameter_3,char parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_4 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 + double_3;
	int_2 = int_1 + int_1;
	char controller4vul_1417[2];
	fgets(controller4vul_1417 ,2 ,stdin);
	if( strcmp( controller4vul_1417, "k") > 0)
	{
		long_1 = v_parse_layer2_packet(long_1,double_2,char_2,char_3,uni_para);

		char_1 = char_3 + char_2;
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "f") < 0)
	{
		long long_3 = 1;
		long_3 = long_2 + long_3;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "rg") > 0)
	{
	}
	int_3 = int_4;
	long_2 = long_4 + long_1;
	short_1 = short_1 + short_2;
	char_2 = char_1 + char_4;
	double_3 = double_3 * double_1;
	return int_2;
}
void v_packet_new( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_3 = float_1 * float_2;
	int_2 = int_1 * int_1;
	double_2 = double_1 * double_1;
}
void v_test_parse_tcp_ipv4_packet()
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	v_packet_new(short_1);

	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_packet_free(double_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	int_1 = int_3 * int_1;
	long_1 = long_1 * long_2;
	double_2 = double_2 * double_2;
	int_2 = int_1 + int_4;
	double_1 = double_1 + double_3;
	int_1 = int_3 + int_2;
	int_3 = v_parse_packet(unsigned_int_2,int_3,short_1,char_1,-1 );

	double_2 = double_3 + double_3;
	short_3 = short_2 + short_1;
	double_3 = double_3;
	double_4 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	double_1 = double_2 * double_4;
	long_3 = long_3 * long_4;
	float_1 = float_1 * float_1;
	int_2 = int_3;
}
int main()
{
	int uni_para =447;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_2 = 1;
	float_1 = v_test_parse_udp_ipv6_packet(uni_para);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	short_1 = short_1 * short_1;
	short_2 = short_1 + short_2;
	char_3 = char_1 + char_2;
	int_1 = int_1;
	char_4 = char_4 + char_5;
	short_1 = short_2 + short_1;
	return int_2;
}

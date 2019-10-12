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

void v_catch_alarm_infintely();
long v_handle_signal_print_thread();
int v_run_iter_bw_infinitely( char parameter_1,int parameter_2);
void v_print_report_bw( char parameter_1,int parameter_2);
unsigned int v_ctx_notify_events();
char v_proc_get_cpu_mhz( int parameter_1);
int v_sample_get_cpu_mhz();
double v_get_cpu_mhz( int parameter_1);
int v_next_word_string( char parameter_1,char parameter_2,int parameter_3);
void v_get_n_word_string( char parameter_1,char parameter_2,int parameter_3,int parameter_4);
float v_compress_spaces( char parameter_1,char parameter_2);
double v_get_cpu_stats( double parameter_1,int parameter_2);
void v_catch_alarm( int parameter_1);
int v_run_iter_bw( double parameter_1,unsigned int parameter_2);
int v_perform_warm_up( float parameter_1,double parameter_2);
double v_increase_rem_addr( int parameter_1,int parameter_2,float parameter_3,char parameter_4,short parameter_5,int parameter_6,int parameter_7);
int v_increase_loc_addr( double parameter_1,int parameter_2,long parameter_3,char parameter_4,int parameter_5,int parameter_6,int parameter_7);
void v_ctx_set_send_reg_wqes( int parameter_1,unsigned int parameter_2,unsigned int parameter_3);
void v_ctx_set_send_exp_wqes( int parameter_1,int parameter_2,int parameter_3);
void v_ctx_set_send_wqes( double parameter_1,unsigned int parameter_2,double parameter_3);
unsigned int v_pp_free_mmap();
int v_destroy_ctx( char parameter_1,char parameter_2);
int v_ctx_close_connection( float parameter_1,int parameter_2,double parameter_3);
unsigned int v_calc_cpu_util( char parameter_1);
void v_print_full_bw_report( long parameter_1,unsigned int parameter_2,float parameter_3);
void v_xchg_bw_reports( short parameter_1,short parameter_2,double parameter_3,float parameter_4);
double v_ctx_modify_qp_to_rts( int parameter_1,char parameter_3,float parameter_4,unsigned int parameter_5);
float v_ctx_modify_qp_to_rtr( long parameter_1,short parameter_2,int parameter_3,int parameter_4,unsigned int parameter_5,int parameter_6);
int v_ctx_connect( short parameter_1,int parameter_2,char parameter_3,unsigned int parameter_4);
int v_ctx_check_gid_compatibility( int parameter_1,short parameter_2);
double v_ethernet_write_keys( float parameter_1,int parameter_2);
long v_ethernet_read_keys( float parameter_1,char parameter_2);
float v_rdma_write_keys( unsigned int parameter_1,short parameter_2);
long v_rdma_read_keys( short parameter_1,unsigned int parameter_2);
int v_ctx_hand_shake( unsigned int parameter_1,short parameter_2,short parameter_3);
void v_ctx_print_pingpong_data( float parameter_1,long parameter_2);
float v_transport_str( short parameter_1);
void v_ctx_print_test_info( float parameter_1);
short v_ctx_get_local_lid( int parameter_1,int parameter_2);
float v_ipv6_addr_v4mapped( double parameter_1);
unsigned int v_get_best_gid_index( char parameter_1,char parameter_2,int parameter_3,int parameter_4);
int v_set_up_connection( long parameter_1,long parameter_2,char parameter_3);
int v_destroy_rdma_resources( short parameter_1,char parameter_2);
int v_retry_rdma_connect( double parameter_1,int parameter_2);
unsigned int v_valid_mtu_size( int parameter_1);
long v_set_mtu( int parameter_1,unsigned int parameter_2,int parameter_3);
int v_set_eth_mtu( double parameter_1);
int v_check_mtu( float parameter_1,float parameter_2,long parameter_3);
void v_check_sys_data( double parameter_1,unsigned int parameter_2);
int v_ethernet_read_data( char parameter_1,char parameter_2,short parameter_3);
int v_ethernet_write_data( double parameter_1,char parameter_2,double parameter_3);
int v_ctx_xchg_data_ethernet( unsigned int parameter_1,int parameter_4);
int v_rdma_read_data(short parameter_2,int parameter_3);
int v_rdma_write_data(char parameter_2,int parameter_3);
int v_ctx_xchg_data_rdma( double parameter_1,int parameter_4);
int v_ctx_xchg_data( int parameter_1,int parameter_4);
void v_exchange_versions( long parameter_1,int parameter_2);
int v_ethernet_server_connect( float parameter_1);
unsigned int v_ethernet_client_connect( double parameter_1);
short v_create_ah_from_wc_recv( char parameter_1,double parameter_2);
short v_post_recv_to_get_ah( float parameter_1);
void v_alloc_ctx( long parameter_1,unsigned int parameter_2);
int v_rdma_server_connect( float parameter_1,char parameter_2,int uni_para);
char v_send_qp_num_for_ah( float parameter_1,short parameter_2);
void v_post_one_recv_wqe( int parameter_1);
int v_ctx_modify_qp_to_init( int parameter_1,char parameter_2,unsigned int parameter_3,int uni_para);
int v_ctx_modify_dc_qp_to_init( float parameter_1,short parameter_2);
int v_modify_qp_to_init( float parameter_1,double parameter_2,int parameter_3,int parameter_4,int uni_para);
char v_ctx_qp_create( long parameter_1,double parameter_2);
int v_create_reg_qp_main( char parameter_1,long parameter_2,int parameter_3,int parameter_4);
int v_create_exp_qp_main( float parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
int v_create_qp_main( long parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
int v_create_reg_cqs( double parameter_1,short parameter_2,int parameter_3,int parameter_4);
int v_create_cqs( short parameter_1,long parameter_2);
int v_alloc_hugepage_region( short parameter_1,int parameter_2);
short v_pp_init_mmap( short parameter_1,int parameter_2,int parameter_3,double parameter_4);
int v_create_single_mr( float parameter_1,unsigned int parameter_2,int parameter_3);
int v_create_mr( char parameter_1,long parameter_2);
int v_ctx_init( long parameter_1,long parameter_2,int uni_para);
int v_check_add_port( char parameter_1,int parameter_2,float parameter_3,float parameter_4,short parameter_5);
int v_rdma_client_connect( float parameter_1,unsigned int parameter_2);
int v_establish_connection( char parameter_1,int uni_para);
int v_create_rdma_resources( int parameter_1,long parameter_2);
int v_create_comm_struct( short parameter_1,int parameter_2);
int v_ctx_chk_pkey_index( int parameter_1,int parameter_2);
double v_ctx_set_out_reads( unsigned int parameter_1,int parameter_2);
unsigned int v_ib_dev_name( long parameter_1);
long v_ctx_set_max_inline( char parameter_1,char parameter_2);
long v_link_layer_str( double parameter_1);
double v_set_link_layer( unsigned int parameter_1,long parameter_2);
int v_check_link( short parameter_1,long parameter_2);
int v_verify_params_with_device_context( char parameter_1,char parameter_2);
double v_ctx_find_dev( double parameter_1);
void v_print_supported_ibv_rate_values();
void v_get_gbps_str_by_ibv_rate( char parameter_1,int parameter_2);
void v_flow_rules_force_dependecies( int parameter_1);
unsigned int v_force_dependecies( double parameter_1);
void v_set_raw_eth_parameters( int parameter_1);
void v_print_ethernet_vlan_header();
int v_parse_ip_from_str( char parameter_1,long parameter_2);
int v_parse_ip6_from_str( char parameter_1,long parameter_2);
double v_str_link_layer( char parameter_1);
float v_parse_ethertype_from_str( char parameter_1,int parameter_2);
int v_check_if_valid_udp_port( int parameter_1);
int v_parse_mac_from_str( char parameter_1,int parameter_2);
void v_usage_raw_ethernet( double parameter_1);
char v_usage( int parameter_1,double parameter_2,double parameter_3,int parameter_4);
double v_change_conn_type( int parameter_1,char parameter_2,short parameter_3);
char v_get_cache_line_size();
long v_etype_str( int parameter_1);
void v_print_ethernet_header();
float v_init_perftest_params( char parameter_1);
int v_parser( int parameter_1,char parameter_2,int parameter_3);
void v_catch_alarm_infintely()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short_3 = short_1 + short_2;
	int_1 = int_1 * int_2;
	short_4 = short_3 * short_2;
	v_print_report_bw(char_1,int_1);

	float_1 = float_1 + float_1;
}
long v_handle_signal_print_thread()
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_2 = double_3 + double_2;
		char_2 = char_1 + char_1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 + int_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			v_catch_alarm_infintely();

			short_2 = short_1 * short_1;
		}
	}
	return long_1;
}
int v_run_iter_bw_infinitely( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long_1 = v_handle_signal_print_thread();

	char_1 = char_1 + char_2;
	return int_1;
}
void v_print_report_bw( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	short short_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_6 = 1;
	long long_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	char_2 = char_1 + char_2;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_3 * char_4;
	char_4 = char_5 * char_3;
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	float_2 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
		double_1 = double_3 + double_2;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double_2 = double_2 + double_3;
				if(1)
				{
					unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
					double_3 = double_4 * double_2;
					unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
				}
			}
		}
	}
	short_3 = short_1 + short_2;
	if(1)
	{
		float_1 = float_2 + float_1;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	}
	double_2 = double_3 * double_5;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	short_4 = short_4 * short_1;
	double_6 = v_get_cpu_mhz(int_1);

	unsigned_int_6 = unsigned_int_4 * unsigned_int_4;
	int_2 = int_2;
	float_2 = float_1 + float_2;
	int_3 = int_1 * int_3;
	double_6 = double_2 + double_5;
	char_1 = char_2 + char_6;
	long_2 = long_3;
	double_5 = double_7 + double_6;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_7;
	double_4 = double_5;
	double_8 = double_3 * double_4;
	if(1)
	{
		float float_3 = 1;
		double double_9 = 1;
		short_3 = short_1 * short_3;
		float_2 = float_1 + float_3;
		double_4 = double_5 + double_9;
	}
	unsigned_int_7 = unsigned_int_7 * unsigned_int_6;
	unsigned_int_9 = unsigned_int_5 * unsigned_int_8;
	int_5 = int_4 * int_3;
	v_print_full_bw_report(long_3,unsigned_int_4,float_2);

	int_6 = int_3 * int_5;
	long_4 = long_1 + long_3;
	short_3 = short_5 * short_3;
	short_3 = short_2;
	double_4 = double_2 + double_5;
	short_6 = short_5 * short_6;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_8 + unsigned_int_7;
	}
	if(1)
	{
		short_1 = short_4;
	}
}
unsigned int v_ctx_notify_events()
{
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 * char_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	short_1 = short_1 + short_2;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_2 + short_3;
	}
	return unsigned_int_1;
}
char v_proc_get_cpu_mhz( int parameter_1)
{
	char char_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_1 = double_1 + double_1;
		double_3 = double_2 * double_1;
		int_2 = int_1 + int_1;
		double_3 = double_3 + double_3;
	}
	return char_1;
}
int v_sample_get_cpu_mhz()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int_3 = int_1 + int_2;
	int_2 = int_3;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return int_4;
}
double v_get_cpu_mhz( int parameter_1)
{
	int int_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	int_3 = v_sample_get_cpu_mhz();

	char_1 = v_proc_get_cpu_mhz(int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if(remainder_check(controller_3,100,1))
	{
		int int_4 = 1;
		int_4 = int_1;
	}
	if(1)
	{
	}
	double_1 = double_3 * double_2;
	if(1)
	{
	}
	return double_3;
}
int v_next_word_string( char parameter_1,char parameter_2,int parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char_1 = char_1 * char_1;
	double_1 = double_1 + double_1;
	double_2 = double_1;
	int_2 = int_1 + int_1;
	int_4 = int_2 * int_3;
	double_1 = double_3 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_4 + int_1;
	long_2 = long_1 * long_1;
	double_3 = double_2;
	double_4 = double_3 + double_2;
	double_4 = double_1;
	float_1 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_3;
	long_4 = long_3 * long_2;
	short_2 = short_1 + short_1;
	float_2 = float_2 + float_1;
	float_3 = float_1 * float_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	short_1 = short_3 * short_4;
	long_5 = long_3 * long_1;
	double_3 = double_2 * double_4;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	char_1 = char_2;
	int_2 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_6 = 1;
		long long_7 = 1;
		int int_6 = 1;
		int int_7 = 1;
		double double_8 = 1;
		double double_9 = 1;
		if(1)
		{
			short short_5 = 1;
			double_4 = double_5;
			short_5 = short_1 + short_1;
			if(1)
			{
				char_2 = char_1 + char_1;
				unsigned_int_2 = unsigned_int_5 + unsigned_int_3;
				unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
				int_1 = int_5 * int_2;
				if(1)
				{
					for(int looper_2=0; looper_2<1;looper_2++)
					{
						if(1)
						{
							long_1 = long_2;
						}
					}
				}
			}
			if(1)
			{
				char char_3 = 1;
				char_3 = char_2 + char_1;
				unsigned_int_2 = unsigned_int_6 * unsigned_int_2;
			}
		}
		int_3 = int_3;
		double_4 = double_5 + double_1;
		long_6 = long_3 + long_2;
		unsigned_int_4 = unsigned_int_4;
		unsigned_int_1 = unsigned_int_7 * unsigned_int_6;
		if(1)
		{
			long_1 = long_4 + long_5;
		}
		int_3 = int_4 * int_3;
		unsigned_int_4 = unsigned_int_7 + unsigned_int_6;
		if(1)
		{
			float_1 = float_1 + float_1;
			double_6 = double_4 * double_5;
			unsigned_int_7 = unsigned_int_2;
		}
		if(1)
		{
			short short_6 = 1;
			long_1 = long_6 * long_3;
			short_1 = short_6 + short_6;
			long_7 = long_1 + long_6;
			int_1 = int_6;
		}
		if(1)
		{
			int int_8 = 1;
			if(1)
			{
				unsigned int unsigned_int_8 = 1;
				unsigned int unsigned_int_9 = 1;
				unsigned_int_8 = unsigned_int_9;
			}
			if(1)
			{
				short short_7 = 1;
				short_7 = short_3 * short_3;
				int_7 = int_5 + int_6;
			}
			double_3 = double_6 + double_5;
			if(1)
			{
				int_6 = int_7 * int_8;
			}
			char controller_14[3];
			fgets(controller_14 ,3 ,stdin);
			if( strcmp( controller_14, "!Q") < 0)
			{
				double double_7 = 1;
				double_9 = double_7 * double_8;
			}
			int_1 = int_8 + int_5;
		}
		if(1)
		{
			int int_9 = 1;
			int int_10 = 1;
			int_3 = int_7 + int_9;
			int_1 = int_10 * int_9;
		}
		if(1)
		{
			double double_10 = 1;
			double_8 = double_3;
			long_4 = long_7 * long_3;
			double_6 = double_4 * double_5;
			double_4 = double_10 + double_9;
			double_2 = double_5 + double_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_5 + unsigned_int_5;
		}
	}
	return int_1;
}
void v_get_n_word_string( char parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = v_next_word_string(char_1,char_1,int_2);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
}
float v_compress_spaces( char parameter_1,char parameter_2)
{
	float float_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "+R") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	return float_1;
}
double v_get_cpu_stats( double parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char_2 = char_1 * char_1;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_2;
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int_1 = int_2;
			double_1 = double_1 + double_2;
			v_get_n_word_string(char_1,char_2,int_1,int_1);

			double_1 = double_2 + double_1;
			long_1 = long_2;
			long_3 = long_3 + long_1;
			float_1 = v_compress_spaces(char_1,char_1);

			char_4 = char_2 + char_3;
		}
	}
	return double_3;
}
void v_catch_alarm( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_1;
	char_1 = char_1 * char_1;
	char_3 = char_2 + char_1;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_2;
	int_1 = int_2 + int_1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3 * int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	}
	double_1 = double_3 * double_1;
	int_2 = int_4 * int_2;
	v_catch_alarm(int_1);

	short_2 = short_1 + short_1;
	double_2 = v_get_cpu_stats(double_2,int_2);

	long_5 = long_3 + long_4;
}
int v_run_iter_bw( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return int_1;
	v_catch_alarm(int_2);

	double_1 = v_get_cpu_mhz(int_3);

	int_4 = v_increase_loc_addr(double_1,int_1,long_1,char_1,int_2,int_1,int_2);

	double_1 = v_increase_rem_addr(int_3,int_1,float_1,char_1,short_1,int_4,int_3);

	unsigned_int_1 = v_ctx_notify_events();

}
int v_perform_warm_up( float parameter_1,double parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float_1 = float_1 * float_1;
	char_2 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 * int_2;
	return int_4;
}
double v_increase_rem_addr( int parameter_1,int parameter_2,float parameter_3,char parameter_4,short parameter_5,int parameter_6,int parameter_7)
{
	double double_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 * float_1;
		}
		if(1)
		{
			double_1 = double_1;
		}
	}
	return double_1;
}
int v_increase_loc_addr( double parameter_1,int parameter_2,long parameter_3,char parameter_4,int parameter_5,int parameter_6,int parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_1 = double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "BK") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	return int_1;
}
void v_ctx_set_send_reg_wqes( int parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_5 = 1;
	int int_3 = 1;
	long_3 = long_1 + long_2;
	char_3 = char_1 * char_2;
	char_1 = char_4 * char_4;
	if(1)
	{
		double_1 = v_increase_rem_addr(int_1,int_2,float_1,char_3,short_1,int_1,int_1);

		short_3 = short_1 + short_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int_1 = v_increase_loc_addr(double_1,int_2,long_2,char_5,int_3,int_2,int_1);

		int_4 = int_1 * int_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			if(1)
			{
				double_3 = double_2 * double_3;
			}
			if(1)
			{
				float float_2 = 1;
				float_1 = float_1 * float_2;
			}
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
		}
		if(1)
		{
			char_3 = char_4 * char_5;
		}
		if(1)
		{
			double_1 = double_1 + double_3;
			long_2 = long_3 + long_2;
			int_4 = int_1 + int_4;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
			}
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_4 = 1;
			long long_5 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_5 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_7 = 1;
			short short_4 = 1;
			long_5 = long_2 * long_4;
			double_4 = double_2 + double_2;
			if(1)
			{
				int_4 = int_3 + int_3;
				if(1)
				{
					int_3 = int_2 * int_1;
				}
			}
			unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
			unsigned_int_6 = unsigned_int_2 * unsigned_int_6;
			double_4 = double_1 + double_5;
			if(1)
			{
				float_3 = float_1 * float_1;
				double_4 = double_1 * double_5;
			}
			if(1)
			{
				int_3 = int_3 + int_2;
				unsigned_int_7 = unsigned_int_5 + unsigned_int_6;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_5 * unsigned_int_3;
			}
			if(1)
			{
				short_1 = short_3 * short_3;
			}
			if(1)
			{
				long long_6 = 1;
				long_6 = long_3 + long_6;
				char controller_16[2];
				fgets(controller_16 ,2 ,stdin);
				if( strcmp( controller_16, "[") < 0)
				{
					short_4 = short_1 + short_2;
					if(1)
					{
						int_2 = int_1 * int_2;
					}
				}
			}
			if(1)
			{
				unsigned_int_5 = unsigned_int_4 * unsigned_int_7;
				if(1)
				{
					double_1 = double_4 * double_3;
					if(1)
					{
						short short_5 = 1;
						short_5 = short_4 + short_2;
					}
				}
				if(1)
				{
					int_1 = int_4 + int_3;
				}
				if(1)
				{
					short_1 = short_2;
				}
			}
			if(1)
			{
				if(1)
				{
					unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
					if(1)
					{
						float float_4 = 1;
						double_3 = double_4 + double_2;
						float_3 = float_3 * float_4;
					}
					if(1)
					{
						int int_5 = 1;
						int_1 = int_1 + int_4;
						int_5 = int_5 * int_4;
					}
				}
			}
			if(1)
			{
				int_2 = int_3;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_7;
			}
		}
	}
}
void v_ctx_set_send_exp_wqes( int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
void v_ctx_set_send_wqes( double parameter_1,unsigned int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "8") > 0)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		v_ctx_set_send_exp_wqes(int_1,int_2,int_3);

		long_1 = long_1 * long_2;
	}
	v_ctx_set_send_reg_wqes(int_3,unsigned_int_1,unsigned_int_2);

}
unsigned int v_pp_free_mmap()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1;
	return unsigned_int_1;
}
int v_destroy_ctx( char parameter_1,char parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	char char_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_3 = 1;
	int int_4 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_6 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_6 = 1;
	char_1 = char_1 + char_1;
	double_2 = double_1 * double_1;
	double_2 = double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_3 = v_pp_free_mmap();

		short_2 = short_1 * short_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
		double_2 = double_3 * double_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		double double_5 = 1;
		int int_1 = 1;
		long long_2 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_7 = 1;
		float float_3 = 1;
		if(1)
		{
			if(1)
			{
				char_1 = char_1 + char_3;
				double_5 = double_4 * double_5;
			}
		}
		if(1)
		{
			if(1)
			{
				char char_4 = 1;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
				char_3 = char_4 * char_2;
			}
			if(1)
			{
			}
		}
		if(1)
		{
			if(1)
			{
				int_2 = int_1 + int_2;
				char_2 = char_3 * char_5;
			}
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					int_3 = int_3 * int_3;
					short_2 = short_1 + short_2;
				}
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
				unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
			}
		}
		if(1)
		{
			if(1)
			{
				long_2 = long_1 * long_2;
				double_5 = double_1 * double_1;
			}
		}
		if(1)
		{
			if(1)
			{
				long_2 = long_3 + long_1;
				int_1 = int_4 * int_2;
			}
			if(1)
			{
				char_5 = char_6 + char_3;
				double_3 = double_3 + double_2;
			}
		}
		if(1)
		{
			long long_6 = 1;
			long_6 = long_4 + long_5;
			double_2 = double_2 + double_3;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					unsigned int unsigned_int_6 = 1;
					double_5 = double_3 * double_1;
					unsigned_int_6 = unsigned_int_1 + unsigned_int_2;
				}
			}
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				long_7 = long_1 + long_5;
				unsigned_int_8 = unsigned_int_7 * unsigned_int_3;
			}
		}
		if(1)
		{
			long long_8 = 1;
			if(1)
			{
				double_5 = double_6;
				float_3 = float_2 * float_2;
			}
			short_2 = short_2 + short_1;
			long_7 = long_8 * long_4;
			long_3 = long_4 * long_3;
		}
		if(1)
		{
			float_4 = float_1 * float_2;
			int_1 = int_4;
		}
		if(1)
		{
			if(1)
			{
				short short_3 = 1;
				double_2 = double_6 + double_3;
				short_2 = short_3 + short_3;
			}
		}
		if(1)
		{
			if(1)
			{
				char char_7 = 1;
				char_7 = char_2;
				float_4 = float_3 + float_2;
			}
		}
		if(1)
		{
			short short_4 = 1;
			short_2 = short_1 + short_4;
		}
		if(1)
		{
			if(1)
			{
				float_4 = float_1 + float_4;
			}
			if(1)
			{
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					if(1)
					{
						unsigned_int_7 = unsigned_int_1 * unsigned_int_4;
					}
					if(1)
					{
						int_3 = int_3 + int_2;
					}
				}
			}
			double_4 = double_2 * double_4;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		int int_5 = 1;
		unsigned_int_10 = unsigned_int_8 * unsigned_int_9;
		char_6 = char_2 * char_5;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_7;
		unsigned_int_9 = unsigned_int_10 * unsigned_int_7;
		float_2 = float_1 + float_4;
		int_3 = int_5 + int_3;
	}
	if(1)
	{
		float float_5 = 1;
		long_3 = long_1 * long_1;
		unsigned_int_5 = unsigned_int_10 + unsigned_int_2;
		float_5 = float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_11 = 1;
		int_3 = int_4 + int_2;
		unsigned_int_1 = unsigned_int_11 * unsigned_int_4;
		double_2 = double_2 * double_6;
	}
	if(1)
	{
		unsigned int unsigned_int_12 = 1;
		unsigned_int_12 = unsigned_int_10 * unsigned_int_8;
		double_4 = double_3 + double_4;
		double_1 = double_1;
	}
	return int_6;
}
int v_ctx_close_connection( float parameter_1,int parameter_2,double parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			int_1 = v_ctx_hand_shake(unsigned_int_4,short_1,short_2);

			int_3 = int_2 * int_3;
		}
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	}
	return int_2;
}
unsigned int v_calc_cpu_util( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
	double_4 = double_3;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_2;
}
void v_print_full_bw_report( long parameter_1,unsigned int parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_6 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = v_calc_cpu_util(char_1);

	long_2 = long_1 * long_2;
	double_1 = double_1 + double_2;
	double_1 = double_2 + double_2;
	double_4 = double_3 + double_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		int int_5 = 1;
		char_3 = char_2 * char_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		double_4 = double_5 * double_1;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
		int_4 = int_2 * int_3;
		short_3 = short_1 * short_1;
		int_5 = int_5;
	}
	if(1)
	{
		if(1)
		{
			int int_6 = 1;
			int int_7 = 1;
			int_6 = int_7;
		}
		if(1)
		{
			int int_8 = 1;
			int_3 = int_8 + int_4;
		}
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, "v?") > 0)
		{
			double_3 = double_2 * double_1;
		}
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_4 = long_3 * long_2;
		}
	}
	if(1)
	{
		char char_4 = 1;
		char_4 = char_3 * char_3;
	}
	if(1)
	{
		double_2 = double_6 + double_5;
	}
	if(1)
	{
		double_2 = double_4;
	}
	if(1)
	{
		double_1 = double_6;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		float float_1 = 1;
		unsigned int unsigned_int_5 = 1;
		float_1 = float_1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_2;
	}
}
void v_xchg_bw_reports( short parameter_1,short parameter_2,double parameter_3,float parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_6 = 1;
	char_1 = char_1 + char_2;
	char_2 = char_3 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char_3 = char_4 + char_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	}
	double_2 = double_1 * double_1;
	float_1 = float_2;
	long_1 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	char_3 = char_1 * char_3;
	char_5 = char_3 + char_5;
	long_3 = long_2 * long_3;
	if(1)
	{
		float float_3 = 1;
		float_2 = float_3 + float_1;
		float_4 = float_3 + float_2;
	}
	double_1 = double_2;
	if(1)
	{
		char_5 = char_4 + char_3;
		float_2 = float_4;
	}
	if(1)
	{
		double_2 = double_2 * double_2;
		char_1 = char_1 + char_5;
	}
	if(1)
	{
		char_5 = char_5;
		short_1 = short_1;
	}
	if(1)
	{
		long long_4 = 1;
		long_2 = long_4 * long_1;
		int_1 = int_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
			unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			double_2 = double_2 * double_1;
			unsigned_int_4 = unsigned_int_6 * unsigned_int_7;
		}
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_2 = unsigned_int_5 * unsigned_int_7;
			unsigned_int_5 = unsigned_int_8 * unsigned_int_2;
		}
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			double_2 = double_1;
			short_3 = short_1 + short_2;
		}
	}
	double_3 = double_1 * double_2;
	if(1)
	{
		char_4 = char_4 * char_5;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
	}
	unsigned_int_3 = unsigned_int_7 + unsigned_int_4;
	int_2 = v_ctx_xchg_data(int_2,int_2);

	int_1 = int_3;
	int_2 = int_3 + int_3;
	int_4 = int_5;
	int_1 = int_2 * int_2;
	unsigned_int_9 = unsigned_int_9 * unsigned_int_4;
	int_6 = int_2 * int_6;
}
double v_ctx_modify_qp_to_rts( int parameter_1,char parameter_3,float parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	float float_4 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_2;
	short_2 = short_1 + short_1;
	int_3 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_1 * float_2;
	char_2 = char_1 * char_2;
	int_4 = int_4 + int_1;
	float_4 = float_1;
	return double_1;
}
float v_ctx_modify_qp_to_rtr( long parameter_1,short parameter_2,int parameter_3,int parameter_4,unsigned int parameter_5,int parameter_6)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_6 = 1;
	char_2 = char_1 + char_2;
	char_3 = char_1 * char_1;
	float_1 = float_1 + float_1;
	double_1 = double_1;
	int_1 = int_2;
	char_2 = char_3 + char_1;
	if(1)
	{
		double_2 = double_1 * double_2;
		int_4 = int_1 * int_3;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3 + double_1;
	}
	if(1)
	{
		int int_5 = 1;
		int_5 = int_3 + int_4;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_5 = 1;
		float float_4 = 1;
		short_3 = short_1 * short_2;
		double_4 = double_5;
		if(1)
		{
			short_4 = short_5;
		}
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			double double_6 = 1;
			short_5 = short_5 + short_3;
			float_3 = float_2 + float_1;
			char_2 = char_2 + char_4;
			float_4 = float_3 + float_2;
			double_6 = double_2 * double_4;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			double_1 = double_4 * double_1;
			float_4 = float_1;
			char_5 = char_3 + char_1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			if(1)
			{
				double double_7 = 1;
				double double_8 = 1;
				long long_2 = 1;
				double_7 = double_8;
				long_2 = long_1 * long_1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		int_2 = int_2 * int_4;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	}
	char_5 = char_4 + char_5;
	short_4 = short_3 + short_6;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1 + long_3;
	}
	return float_1;
}
int v_ctx_connect( short parameter_1,int parameter_2,char parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = v_ctx_modify_qp_to_rts(int_1,char_1,float_1,unsigned_int_1);

	int_2 = int_2 * int_3;
	char_2 = char_1 + char_2;
	long_1 = long_1;
	float_2 = v_ctx_modify_qp_to_rtr(long_2,short_1,int_1,int_2,unsigned_int_2,int_1);

	int_1 = int_2;
	float_2 = float_1 * float_1;
	return int_2;
}
int v_ctx_check_gid_compatibility( int parameter_1,short parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_1 = double_1;
	float_1 = v_ipv6_addr_v4mapped(double_2);

	double_1 = double_1 + double_1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	return int_1;
}
double v_ethernet_write_keys( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		double_2 = double_1 * double_2;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int_1 = int_2;
			int_2 = int_1 + int_3;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_1 = float_1 + float_2;
		float_3 = float_3 * float_1;
		if(1)
		{
			double_2 = double_1 + double_1;
			double_2 = double_1 + double_2;
		}
	}
	return double_2;
}
long v_ethernet_read_keys( float parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	if(1)
	{
		int_1 = int_1 * int_1;
		double_1 = double_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		long_1 = long_2;
		if(1)
		{
			double_2 = double_2 + double_3;
		}
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_2 = 1;
		double double_4 = 1;
		int int_3 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_6 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_6 = 1;
		int int_4 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		double_3 = double_3 * double_2;
		char_2 = char_1 * char_2;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
		if(1)
		{
			int_2 = int_1;
		}
		double_4 = double_3 * double_1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
		double_3 = double_2 * double_3;
		int_3 = int_1 + int_2;
		int_3 = int_2 + int_1;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_1;
		unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_6;
		long_1 = long_2;
		double_2 = double_5;
		char_1 = char_1;
		char_2 = char_1 + char_2;
		char_2 = char_1 * char_1;
		unsigned_int_2 = unsigned_int_7 + unsigned_int_2;
		double_6 = double_1;
		unsigned_int_6 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_6 = unsigned_int_6 + unsigned_int_4;
		double_5 = double_3 * double_5;
		double_1 = double_4 * double_1;
		char_2 = char_2 + char_3;
		char_5 = char_4 + char_3;
		unsigned_int_4 = unsigned_int_5 * unsigned_int_5;
		short_2 = short_1 + short_2;
		short_3 = short_2 + short_3;
		char_6 = char_4 + char_2;
		int_2 = int_1 * int_3;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_6;
		double_1 = double_4 + double_2;
		double_5 = double_5 + double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_2 = int_1 + int_4;
			long_1 = long_1 + long_2;
			unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
			int_4 = int_1 + int_2;
			int_4 = int_4 + int_4;
		}
		double_1 = double_7 + double_8;
		double_9 = double_6 * double_3;
		char_3 = char_5 * char_4;
		double_11 = double_3 + double_10;
		long_1 = long_2;
		unsigned_int_3 = unsigned_int_6;
		int_3 = int_4 + int_3;
		double_1 = double_3;
	}
	return long_1;
}
float v_rdma_write_keys( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	return float_1;
}
long v_rdma_read_keys( short parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char_1 = char_1 * char_1;
	v_post_one_recv_wqe(int_1);

	long_2 = long_1 * long_2;
	return long_3;
}
int v_ctx_hand_shake( unsigned int parameter_1,short parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	short short_5 = 1;
	int int_2 = 1;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		short short_4 = 1;
		long_1 = v_ethernet_read_keys(float_1,char_1);

		float_1 = float_2;
		short_3 = short_4;
	}
	char_3 = char_2 * char_1;
	if(1)
	{
		if(1)
		{
			float_1 = float_1 + float_3;
		}
		if(1)
		{
			float_3 = v_rdma_write_keys(unsigned_int_3,short_3);

			double_1 = v_ethernet_write_keys(float_2,int_1);

			char_1 = char_3 + char_2;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_2 = 1;
			long_2 = v_rdma_read_keys(short_5,unsigned_int_2);

			double_2 = double_1 + double_2;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1;
		}
	}
	return int_2;
}
void v_ctx_print_pingpong_data( float parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	int_3 = int_1 * int_2;
	double_3 = double_2 * double_3;
	int_2 = int_4 * int_4;
	if(1)
	{
		double_3 = double_4 * double_4;
	}
	if(1)
	{
		double_1 = double_4 * double_2;
	}
	int_5 = int_2 + int_4;
	double_5 = double_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	float_3 = float_2 * float_2;
	if(1)
	{
		double_2 = double_1 + double_4;
	}
}
float v_transport_str( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_2;
	short_1 = short_1 + short_1;
	return float_1;
}
void v_ctx_print_test_info( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	int_1 = int_2;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			char char_1 = 1;
			char char_3 = 1;
			char_3 = char_1 + char_2;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		int_1 = int_2 * int_1;
	}
	if(1)
	{
		float_3 = v_transport_str(short_1);

		double_2 = double_1 + double_2;
	}
	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	int_4 = int_1 + int_3;
	if(1)
	{
		float_4 = float_2 * float_1;
	}
	if(1)
	{
		int_4 = int_1 * int_4;
	}
	if(1)
	{
		int_3 = int_2 + int_2;
	}
	if(1)
	{
		float_5 = float_2 * float_4;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	char_4 = char_2 + char_2;
	if(1)
	{
		float_2 = float_5 * float_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_5 = double_3 * double_4;
	}
	if(1)
	{
		long_1 = v_link_layer_str(double_5);

		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_5;
	}
	int_2 = int_4;
	if(1)
	{
		double double_6 = 1;
		double_6 = double_6 * double_2;
	}
	short_3 = short_1 * short_2;
	if(1)
	{
		if(1)
		{
			int_4 = int_4 * int_4;
		}
		if(1)
		{
			float float_6 = 1;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			float_5 = float_6 * float_3;
			float_3 = float_5 + float_2;
			int_3 = int_2 + int_3;
		}
	}
	short_3 = short_4;
	int_2 = int_3;
}
short v_ctx_get_local_lid( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	return short_2;
}
float v_ipv6_addr_v4mapped( double parameter_1)
{
	float float_1 = 1;
	return float_1;
}
unsigned int v_get_best_gid_index( char parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 + double_2;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
		}
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1;
		long_2 = long_1 * long_2;
		if(1)
		{
			char char_1 = 1;
			float_1 = v_ipv6_addr_v4mapped(double_3);

			char_1 = char_1 + char_1;
		}
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_1 = int_2 * int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_3 = 1;
			short short_4 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			long_2 = long_2 + long_2;
			if(1)
			{
				short short_2 = 1;
				short_2 = short_1 * short_1;
			}
			unsigned_int_1 = unsigned_int_1;
			if(1)
			{
				double_1 = double_3 + double_1;
			}
			short_4 = short_3 + short_3;
			if(1)
			{
				short_4 = short_1 + short_1;
			}
		}
	}
	return unsigned_int_4;
}
int v_set_up_connection( long parameter_1,long parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	long_2 = long_1 * long_1;
	int_1 = int_1;
	long_2 = long_3 * long_4;
	int_2 = int_2;
	long_4 = long_4;
	int_2 = int_2 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long_3 = long_3 * long_4;
		short_1 = v_ctx_get_local_lid(int_3,int_3);

		int_4 = int_2 * int_4;
	}
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
		if(1)
		{
			short_3 = short_2 + short_2;
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
			if(1)
			{
				short short_4 = 1;
				short_3 = short_3 * short_4;
				if(1)
				{
				}
				if(1)
				{
				}
			}
		}
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_3 = 1;
		int int_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		if(1)
		{
			if(1)
			{
				int_4 = int_3;
				unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
			}
			if(1)
			{
				char char_2 = 1;
				char_2 = char_1 + char_2;
				double_3 = double_1 + double_2;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
			double_1 = double_4 * double_3;
		}
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		int_3 = int_5;
		float_3 = float_1 + float_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			unsigned_int_3 = v_get_best_gid_index(char_1,char_3,int_1,int_3);

			long_3 = long_2;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
		}
		if(1)
		{
			if(1)
			{
				char char_4 = 1;
				char char_5 = 1;
				char_5 = char_4 * char_1;
			}
			if(1)
			{
				short short_5 = 1;
				short_2 = short_1 + short_5;
			}
		}
		if(1)
		{
			float_1 = float_3 * float_2;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				double_4 = double_2 + double_4;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				if(1)
				{
					unsigned_int_2 = unsigned_int_3;
				}
			}
		}
	}
	return int_4;
}
int v_destroy_rdma_resources( short parameter_1,char parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_2 + short_1;
	}
	double_1 = double_1 * double_1;
	return int_1;
}
int v_retry_rdma_connect( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int_1 = v_rdma_client_connect(float_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_1 = v_create_rdma_resources(int_1,long_1);

	int_1 = v_destroy_rdma_resources(short_1,char_1);

	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		if(1)
		{
			int int_2 = 1;
			int_2 = int_1;
		}
		if(1)
		{
		}
		if(1)
		{
			double double_2 = 1;
			double_1 = double_1 + double_2;
		}
		long_2 = long_2 + long_1;
	}
	double_3 = double_1 + double_3;
	return int_3;
}
unsigned int v_valid_mtu_size( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
long v_set_mtu( int parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_4 = 1;
	double_2 = double_1 + double_1;
	long_1 = long_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		long long_2 = 1;
		char char_2 = 1;
		long_2 = long_1;
		char_3 = char_1 + char_2;
		if(1)
		{
			long long_3 = 1;
			long_2 = long_3 + long_1;
		}
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		char char_6 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_5 = 1;
		char char_7 = 1;
		int int_5 = 1;
		double double_6 = 1;
		double_3 = double_3 + double_4;
		float_2 = float_3;
		char_5 = char_3 + char_4;
		char_1 = char_6 + char_6;
		short_2 = short_1 * short_2;
		int_4 = int_3 * int_1;
		double_2 = double_5 * double_3;
		unsigned_int_1 = v_ib_dev_name(long_4);

		double_1 = double_2 + double_5;
		char_7 = char_3 + char_7;
		int_5 = int_5 * int_4;
		double_5 = double_6 * double_6;
		double_1 = double_6 + double_2;
		double_5 = double_4 * double_5;
		double_5 = double_6 + double_1;
		if(1)
		{
			int int_6 = 1;
			unsigned int unsigned_int_2 = 1;
			int_6 = int_2 + int_2;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
			short_2 = short_1 * short_2;
		}
	}
	return long_1;
}
int v_set_eth_mtu( double parameter_1)
{
	int int_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		short_2 = short_1 + short_1;
	}
	return int_1;
}
int v_check_mtu( float parameter_1,float parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int_2 = int_1 * int_2;
	int_1 = int_3 + int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_1;
	int_3 = v_ctx_xchg_data(int_2,int_2);

	long_1 = long_2;
	if(1)
	{
		if(1)
		{
			double_1 = double_1;
		}
	}
	if(1)
	{
		char_1 = char_1 * char_1;
		if(1)
		{
			if(1)
			{
				double double_2 = 1;
				double double_3 = 1;
				double_2 = double_2 + double_1;
				int_2 = v_set_eth_mtu(double_1);

				double_3 = double_1 * double_3;
				if(1)
				{
					int_4 = int_2 * int_2;
					long_2 = v_set_mtu(int_2,unsigned_int_2,int_4);

					int_1 = int_1;
				}
				unsigned_int_2 = v_valid_mtu_size(int_2);

				float_3 = float_1 + float_2;
				int_3 = int_3 * int_1;
			}
			if(1)
			{
				int_4 = int_4;
			}
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		if(1)
		{
			float_2 = float_2 + float_4;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		}
		char_1 = char_2 + char_3;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			float_1 = float_4 * float_1;
			float_4 = float_2 * float_3;
			unsigned_int_5 = unsigned_int_5 * unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
			int_5 = int_3 * int_2;
		}
	}
	return int_5;
}
void v_check_sys_data( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int_2 = int_1 * int_1;
	double_2 = double_1 + double_1;
	int_2 = v_ctx_xchg_data(int_1,int_3);

	char_3 = char_1 + char_2;
	long_3 = long_1 + long_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
			char_3 = char_1 * char_3;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
			short_3 = short_1 * short_2;
		}
	}
	unsigned_int_2 = unsigned_int_3;
	int_3 = int_4 * int_4;
	long_2 = long_4 + long_5;
	double_2 = double_2 * double_1;
	if(1)
	{
		long_2 = long_4;
	}
}
int v_ethernet_read_data( char parameter_1,char parameter_2,short parameter_3)
{
	int int_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	return int_1;
}
int v_ethernet_write_data( double parameter_1,char parameter_2,double parameter_3)
{
	int int_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	}
	return int_1;
}
int v_ctx_xchg_data_ethernet( unsigned int parameter_1,int parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int_1 = v_ethernet_write_data(double_1,char_1,double_2);

			int_2 = v_ethernet_read_data(char_1,char_2,short_1);

			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			char char_3 = 1;
			char_2 = char_3 + char_3;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_3 = 1;
			int_3 = int_2 * int_3;
		}
		if(1)
		{
			double double_3 = 1;
			double_2 = double_2 + double_3;
		}
	}
	return int_4;
}
int v_rdma_read_data(short parameter_2,int parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	long_1 = long_1 + long_1;
	char_1 = char_1 * char_1;
	if(1)
	{
		char_1 = char_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_2 + long_1;
	double_1 = double_1 + double_1;
	double_3 = double_2 + double_3;
	double_2 = double_2 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "V{") > 0)
		{
			double_4 = double_1 + double_1;
		}
	}
	double_5 = double_1 + double_4;
	return int_1;
	v_post_one_recv_wqe(int_1);

}
int v_rdma_write_data(char parameter_2,int parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	short_2 = short_1 + short_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	int_2 = int_1 + int_1;
	return int_3;
}
int v_ctx_xchg_data_rdma( double parameter_1,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			int_1 = v_rdma_read_data(short_1,int_1);

			int_1 = int_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	return int_1;
	int_2 = v_rdma_write_data(char_1,int_2);

}
int v_ctx_xchg_data( int parameter_1,int parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	if(1)
	{
		int_1 = v_ctx_xchg_data_rdma(double_1,int_2);

		long_2 = long_1 + long_1;
	}
	if(1)
	{
		long_1 = long_1 * long_2;
	}
	return int_2;
	int_3 = v_ctx_xchg_data_ethernet(unsigned_int_1,int_4);

}
void v_exchange_versions( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "q") < 0)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_2 = 1;
			double_2 = double_1 + double_1;
			int_2 = int_1 * int_1;
		}
	}
	int_1 = v_ctx_xchg_data(int_3,int_4);

}
int v_ethernet_server_connect( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	long long_3 = 1;
	int int_9 = 1;
	int_3 = int_1 + int_2;
	short_1 = short_1;
	int_4 = v_check_add_port(char_1,int_2,float_1,float_1,short_2);

	int_1 = int_5 + int_4;
	int_4 = int_4 * int_2;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_4 + int_3;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_3 * int_2;
	if(1)
	{
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float_1 = float_2 + float_3;
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int_2 = int_1;
			char_1 = char_2;
			if(1)
			{
				int_4 = int_2 * int_1;
			}
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
			char_4 = char_1 * char_3;
		}
	}
	short_1 = short_3 + short_2;
	if(1)
	{
		short_3 = short_2 + short_3;
	}
	int_4 = int_2 * int_6;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
	if(1)
	{
		int int_8 = 1;
		float_1 = float_1 * float_3;
		int_2 = int_1;
		int_8 = int_2 + int_7;
	}
	long_3 = long_1;
	int_1 = int_9 + int_7;
	return int_4;
}
unsigned int v_ethernet_client_connect( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_2;
	int_1 = int_1 * int_2;
	char_1 = char_1 * char_1;
	int_3 = int_3 + int_3;
	int_2 = v_check_add_port(char_1,int_2,float_3,float_4,short_1);

	char_1 = char_2 + char_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "X") < 0)
	{
		long_2 = long_1 + long_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double_1 = double_1;
		if(1)
		{
			long long_3 = 1;
			char controller_3[2];
			fgets(controller_3 ,2 ,stdin);
			if( strcmp( controller_3, "&") < 0)
			{
				short_1 = short_1 * short_1;
			}
			int_1 = int_1 + int_3;
			long_2 = long_3 * long_1;
		}
	}
	int_3 = int_3 + int_3;
	if(1)
	{
		int int_4 = 1;
		int_4 = int_1 + int_1;
	}
	long_1 = long_2;
	return unsigned_int_1;
}
short v_create_ah_from_wc_recv( char parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1;
	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int_4 = int_3;
		double_2 = double_1 * double_2;
	}
	int_3 = int_3;
	float_2 = float_1 * float_1;
	double_3 = double_2 + double_2;
	short_2 = short_1 + short_1;
	return short_2;
}
short v_post_recv_to_get_ah( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	short_2 = short_1 + short_1;
	short_3 = short_3 + short_3;
	char_2 = char_1 + char_1;
	short_3 = short_3 + short_3;
	double_1 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 * long_1;
	double_3 = double_1 + double_2;
	char_1 = char_1 + char_1;
	int_2 = int_1 + int_1;
	if(1)
	{
		double_3 = double_1 + double_3;
	}
	return short_4;
}
void v_alloc_ctx( long parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
}
int v_rdma_server_connect( float parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	long long_3 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	float_1 = float_1 + float_2;
	int_1 = int_1;
	double_3 = double_1 * double_2;
	float_1 = float_3;
	long_1 = long_2;
	char_2 = char_1 * char_1;
	double_3 = double_1 + double_3;
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	if(1)
	{
	}
	long_1 = long_2 * long_1;
	int_2 = int_1;
	if(1)
	{
		char_3 = char_3 * char_1;
	}
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		double_4 = double_2 * double_2;
	}
	if(1)
	{
		int_3 = int_3 * int_4;
	}
	double_1 = double_3 * double_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2;
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	char_3 = char_2 * char_2;
	if(1)
	{
		int_5 = int_3 + int_1;
	}
	int_4 = int_2 * int_6;
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		int int_7 = 1;
		float_5 = float_3 * float_4;
		int_5 = int_7;
	}
	if(1)
	{
		double_4 = double_2 * double_2;
	}
	int_9 = int_6 * int_8;
	int_4 = int_4 + int_3;
	double_4 = double_3 + double_3;
	char controller4vul_1695[3];
	fgets(controller4vul_1695 ,3 ,stdin);
	if( strcmp( controller4vul_1695, "g{") > 0)
	{
		char controller4vul_1696[2];
		fgets(controller4vul_1696 ,2 ,stdin);
		if( strcmp( controller4vul_1696, "&") > 0)
		{
			double double_5 = 1;
			int_1 = v_ctx_init(long_2,long_1,uni_para);

			double_2 = double_5;
		}
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				short short_3 = 1;
				short_1 = short_3 * short_3;
			}
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_4;
			}
		}
	}
	int_10 = int_8 + int_9;
	int_5 = int_4 + int_10;
	long_3 = long_2 + long_2;
	return int_5;
}
char v_send_qp_num_for_ah( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 + double_2;
	int_1 = int_1 * int_1;
	char_1 = char_1 + char_2;
	char_3 = char_1;
	int_2 = int_1 + int_2;
	float_2 = float_1 + float_1;
	int_1 = int_1;
	return char_2;
}
void v_post_one_recv_wqe( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	short_3 = short_1 * short_2;
	long_1 = long_2;
	short_4 = short_2;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_3;
	short_5 = short_3;
	unsigned_int_1 = unsigned_int_4;
	int_1 = int_2 + int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "zx") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
}
int v_ctx_modify_qp_to_init( int parameter_1,char parameter_2,unsigned int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_2;
	char_2 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	int_2 = int_1 + int_1;
	int_1 = int_1 + int_1;
	double_2 = double_1 * double_1;
	short_1 = short_2 * short_2;
	double_3 = double_2 * double_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	double_3 = double_1 + double_2;
	int_2 = int_1 * int_1;
	short_4 = short_3 + short_4;
	char controller4vul_1703[3];
	fgets(controller4vul_1703 ,3 ,stdin);
	if( strcmp( controller4vul_1703, "a<") > 0)
	{
		if(uni_para == 273)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		double_2 = double_2 * double_3;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		long long_1 = 1;
		if(1)
		{
			double_1 = double_2;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
			long_1 = long_1;
		}
		long_3 = long_2 + long_1;
	}
	if(1)
	{
		short_4 = short_4;
	}
	double_4 = double_1 * double_4;
	if(1)
	{
		int_3 = int_1;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_1;
	}
	if(1)
	{
		long long_4 = 1;
		long_4 = long_3 + long_2;
		int_3 = int_3 + int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		short short_5 = 1;
		float float_3 = 1;
		char char_3 = 1;
		char_2 = char_2;
		float_2 = float_1 + float_1;
		int_1 = int_2 * int_3;
		float_1 = float_2 + float_1;
		short_5 = short_5 * short_2;
		float_2 = float_3 * float_2;
		int_3 = int_1 + int_1;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		double double_5 = 1;
		double_5 = double_4 * double_3;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_6 + unsigned_int_5;
	}
	if(1)
	{
		char char_4 = 1;
		char_2 = char_4 * char_4;
	}
	if(1)
	{
		int_2 = int_2 * int_3;
	}
	int_1 = int_4 * int_3;
}
int v_ctx_modify_dc_qp_to_init( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_4 = double_3 * double_3;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
		}
	}
	return int_1;
}
int v_modify_qp_to_init( float parameter_1,double parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	}
	char controller4vul_1700[2];
	fgets(controller4vul_1700 ,2 ,stdin);
	if( strcmp( controller4vul_1700, "V") < 0)
	{
		char controller4vul_1701[3];
		fgets(controller4vul_1701 ,3 ,stdin);
		if( strcmp( controller4vul_1701, "S}") > 0)
		{
			char controller4vul_1702[2];
			fgets(controller4vul_1702 ,2 ,stdin);
			if( strcmp( controller4vul_1702, "C") < 0)
			{
				float float_1 = 1;
				float float_2 = 1;
				int_1 = v_ctx_modify_qp_to_init(int_2,char_1,unsigned_int_2,uni_para);

				float_2 = float_1 + float_1;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		}
	}
	return int_1;
}
char v_ctx_qp_create( long parameter_1,double parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	long_1 = long_1 * long_1;
	int_1 = int_1;
	int_1 = int_1 + int_2;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	double_3 = double_1 + double_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		float_2 = float_2 + float_2;
		char_1 = char_1 + char_1;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	}
	if(1)
	{
		double_3 = double_4 + double_4;
		float_1 = float_2;
		int_1 = int_3 + int_4;
	}
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
	double_3 = double_1 + double_4;
	double_3 = double_4 * double_2;
	double_1 = double_1 + double_4;
	unsigned_int_5 = unsigned_int_6;
	long_3 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	short_2 = short_1 + short_2;
	if(1)
	{
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			short short_5 = 1;
			short_5 = short_3 + short_4;
		}
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, ".O") > 0)
		{
			int_2 = int_1 * int_4;
		}
	}
	if(1)
	{
		float_2 = float_2;
	}
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		char_1 = char_2;
		float_2 = float_4 * float_5;
	}
	return char_2;
}
int v_create_reg_qp_main( char parameter_1,long parameter_2,int parameter_3,int parameter_4)
{
	int int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	return int_3;
	char_1 = v_ctx_qp_create(long_1,double_2);

}
int v_create_exp_qp_main( float parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_1;
	return int_1;
}
int v_create_qp_main( long parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_7 = 1;
	char_1 = char_2;
	int_1 = v_create_reg_qp_main(char_2,long_1,int_1,int_1);

	int_3 = int_2 + int_2;
	int_3 = v_create_exp_qp_main(float_1,unsigned_int_1,int_2,int_2);

	double_2 = double_1 * double_1;
	int_1 = int_3 + int_3;
	short_3 = short_1 + short_2;
	long_2 = long_1;
	double_2 = double_1 * double_1;
	int_1 = int_2 * int_3;
	int_1 = int_1 * int_3;
	float_1 = float_2 * float_2;
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		int_6 = int_4 * int_5;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "`") < 0)
	{
		int_3 = int_4;
	}
	return int_7;
}
int v_create_reg_cqs( double parameter_1,short parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_1 + char_2;
		}
	}
	return int_2;
}
int v_create_cqs( short parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	double_2 = double_1 * double_2;
	char_2 = char_1 * char_2;
	int_2 = int_1 * int_2;
	if(1)
	{
		double_2 = double_2 * double_1;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_2 + double_3;
	}
	if(1)
	{
		int_1 = int_1;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "7U") == 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_2 = char_3 + char_3;
	}
	return int_1;
	int_3 = v_create_reg_cqs(double_1,short_1,int_1,int_4);

}
int v_alloc_hugepage_region( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long_2 = long_1 * long_1;
	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_2;
	if(1)
	{
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	double_2 = double_2 * double_2;
	if(1)
	{
		char char_3 = 1;
		char_3 = char_3 + char_1;
	}
	if(1)
	{
		int_3 = int_2;
	}
	return int_3;
}
short v_pp_init_mmap( short parameter_1,int parameter_2,int parameter_3,double parameter_4)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	double_2 = double_1 * double_1;
	int_1 = int_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_1 = int_2 + int_3;
	}
	double_4 = double_1 + double_3;
	return short_1;
}
int v_create_single_mr( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	short_1 = v_pp_init_mmap(short_1,int_1,int_1,double_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_1;
	char_1 = char_1 + char_2;
	return int_1;
	int_1 = v_alloc_hugepage_region(short_1,int_2);

}
int v_create_mr( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	int_1 = int_1 + int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "L") < 0)
	{
		double double_1 = 1;
		double_2 = double_1 * double_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			}
		}
		if(1)
		{
			char char_1 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_3 = 1;
			int_2 = v_create_single_mr(float_1,unsigned_int_3,int_1);

			char_1 = char_1 + char_1;
			int_4 = int_2 + int_3;
			int_3 = int_3 * int_2;
			double_3 = double_2 + double_2;
		}
	}
	return int_5;
}
int v_ctx_init( long parameter_1,long parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	long_2 = long_1 + long_2;
	double_1 = double_1;
	double_2 = double_1 + double_1;
	double_3 = double_2 * double_3;
	char controller4vul_1697[2];
	fgets(controller4vul_1697 ,2 ,stdin);
	if( strcmp( controller4vul_1697, "7") > 0)
	{
		char controller4vul_1698[3];
		fgets(controller4vul_1698 ,3 ,stdin);
		if( strcmp( controller4vul_1698, "Wd") > 0)
		{
			char controller4vul_1699[2];
			fgets(controller4vul_1699 ,2 ,stdin);
			if( strcmp( controller4vul_1699, "z") < 0)
			{
				short short_4 = 1;
				int_1 = v_modify_qp_to_init(float_1,double_2,int_1,int_2,uni_para);

				short_1 = short_3 + short_4;
			}
		}
		int_2 = int_3;
	}
	if(1)
	{
		double_1 = double_1 * double_4;
	}
	if(1)
	{
		double_1 = double_5 + double_5;
		if(1)
		{
			int_4 = int_4;
		}
	}
	double_4 = double_5;
	if(1)
	{
		double_2 = double_2 * double_2;
	}
	if(1)
	{
		int_6 = int_5 + int_4;
		if(1)
		{
			short_3 = short_1;
		}
	}
	if(1)
	{
		int_7 = int_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		}
		if(1)
		{
			double_3 = double_4;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
		int_5 = int_8 * int_7;
		if(1)
		{
			int_5 = int_6;
		}
	}
	if(1)
	{
		double_2 = double_4 + double_2;
		int_5 = int_9 + int_3;
		if(1)
		{
			double_2 = double_5 + double_2;
			double_4 = double_5 + double_1;
		}
		if(1)
		{
			float float_2 = 1;
			double_5 = double_2 + double_3;
			float_2 = float_1 * float_1;
		}
		if(1)
		{
			double_3 = double_4;
			double_5 = double_2;
		}
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_8 = int_3 * int_1;
		}
		if(1)
		{
			short_1 = short_1 * short_3;
			if(1)
			{
				short short_5 = 1;
				char char_1 = 1;
				char char_2 = 1;
				short short_6 = 1;
				short_5 = short_3 * short_3;
				unsigned_int_4 = unsigned_int_4;
				int_10 = int_9;
				char_1 = char_2;
				short_6 = short_5 * short_1;
				if(1)
				{
					char_1 = char_1 + char_2;
				}
			}
		}
	}
	return int_10;
}
int v_check_add_port( char parameter_1,int parameter_2,float parameter_3,float parameter_4,short parameter_5)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char_1 = char_1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	return int_1;
}
int v_rdma_client_connect( float parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	int_1 = v_ctx_init(long_1,long_2,-1 );

	v_post_one_recv_wqe(int_2);

	double_1 = double_1;
	int_1 = v_check_add_port(char_1,int_1,float_1,float_2,short_1);

	int_3 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		if(1)
		{
			float float_4 = 1;
			char_2 = v_send_qp_num_for_ah(float_3,short_2);

			float_4 = float_2 + float_3;
			long_2 = long_1;
		}
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, ":N") < 0)
		{
			short short_3 = 1;
			short_1 = short_3 + short_2;
			double_2 = double_1 * double_1;
		}
		double_2 = double_2 * double_3;
	}
	return int_1;
}
int v_establish_connection( char parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_2;
	char controller4vul_1692[3];
	fgets(controller4vul_1692 ,3 ,stdin);
	if( strcmp( controller4vul_1692, "OI") > 0)
	{
		char controller4vul_1693[3];
		fgets(controller4vul_1693 ,3 ,stdin);
		if( strcmp( controller4vul_1693, "mF") < 0)
		{
			char controller4vul_1694[2];
			fgets(controller4vul_1694 ,2 ,stdin);
			if( strcmp( controller4vul_1694, "K") < 0)
			{
				long long_1 = 1;
				int_1 = v_rdma_server_connect(float_1,char_1,uni_para);

				long_1 = long_1 + long_1;
			}
		}
		if(1)
		{
			char controller_2[2];
			fgets(controller_2 ,2 ,stdin);
			if( strcmp( controller_2, "W") > 0)
			{
				float_1 = float_1 + float_1;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "6") > 0)
		{
			char char_2 = 1;
			char_1 = char_2 * char_2;
		}
	}
	return int_2;
}
int v_create_rdma_resources( int parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_2 = long_1 * long_2;
	int_1 = int_1 * int_1;
	int_2 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		long long_3 = 1;
		long_2 = long_2 + long_3;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	return int_1;
}
int v_create_comm_struct( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_6 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_7 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int_1 = int_1 * int_2;
	int_1 = int_3 * int_2;
	int_4 = int_3 + int_4;
	double_1 = double_2;
	double_2 = double_2 * double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_2 + int_4;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	int_1 = int_5 + int_2;
	float_1 = float_1 + float_1;
	long_1 = long_1 + long_1;
	unsigned_int_6 = unsigned_int_1;
	char_3 = char_1 * char_2;
	int_2 = v_create_rdma_resources(int_6,long_2);

	short_2 = short_1 * short_2;
	int_4 = int_7 + int_4;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_6;
	double_1 = double_3 * double_2;
	double_3 = double_1 + double_4;
	int_6 = int_8 * int_9;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		long long_3 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_9 = 1;
		unsigned int unsigned_int_10 = 1;
		int int_10 = 1;
		unsigned_int_8 = unsigned_int_7 + unsigned_int_5;
		char_2 = char_3 + char_2;
		short_1 = short_2 * short_1;
		int_1 = int_1 * int_3;
		int_9 = int_3 * int_8;
		char_1 = char_1 * char_2;
		long_3 = long_1 + long_1;
		unsigned_int_7 = unsigned_int_4 + unsigned_int_7;
		short_2 = short_2 + short_1;
		double_2 = double_5;
		unsigned_int_10 = unsigned_int_4 * unsigned_int_9;
		int_4 = int_10 * int_5;
		long_1 = long_1;
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 * float_2;
		}
	}
	return int_1;
}
int v_ctx_chk_pkey_index( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_1 * short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "L<") == 0)
	{
		int int_2 = 1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			long_1 = long_2;
			int_1 = int_2;
			int_3 = int_1 + int_3;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
		if(1)
		{
			int_5 = int_4 * int_2;
		}
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int_1 = int_4 * int_5;
		char_3 = char_1 * char_2;
	}
	return int_5;
}
double v_ctx_set_out_reads( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_2;
	double_4 = double_3 * double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "PX") < 0)
	{
		double double_5 = 1;
		double double_6 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_1 = double_5 * double_5;
		double_1 = double_2 * double_6;
		float_3 = float_1 + float_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	return double_3;
}
unsigned int v_ib_dev_name( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_7 = 1;
	int_1 = int_2;
	int_3 = int_3 * int_1;
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		int_4 = int_3;
		float_2 = float_3 + float_1;
		char_3 = char_1 + char_2;
		short_3 = short_1 * short_2;
		short_1 = short_4 + short_1;
		double_2 = double_1 * double_1;
		double_2 = double_2;
		short_3 = short_2 * short_2;
	}
	if(1)
	{
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_4 = 1;
		int int_9 = 1;
		long long_2 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_5 = 1;
		short short_5 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_8 = 1;
		int int_10 = 1;
		short short_6 = 1;
		float float_6 = 1;
		float float_7 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_9 = 1;
		unsigned int unsigned_int_10 = 1;
		float float_8 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_5 = 1;
		char char_5 = 1;
		short short_7 = 1;
		int_5 = int_3;
		double_2 = double_1 * double_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		short_4 = short_3;
		long_1 = long_1 + long_1;
		int_8 = int_6 + int_7;
		double_5 = double_3 + double_4;
		short_1 = short_1 * short_1;
		int_2 = int_5;
		float_4 = float_1 * float_2;
		int_9 = int_5 + int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		long_2 = long_1 + long_1;
		double_3 = double_6;
		int_1 = int_6 * int_1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		int_9 = int_8;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
		float_5 = float_3 + float_5;
		unsigned_int_4 = unsigned_int_1;
		short_3 = short_5 * short_1;
		int_3 = int_3 * int_2;
		long_2 = long_3;
		long_2 = long_1 + long_2;
		int_2 = int_6;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
		float_5 = float_1 + float_2;
		char_4 = char_3 * char_3;
		double_1 = double_4 * double_2;
		double_4 = double_3 + double_6;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_6;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
		unsigned_int_7 = unsigned_int_4 * unsigned_int_1;
		double_5 = double_4;
		unsigned_int_7 = unsigned_int_3 * unsigned_int_8;
		char_2 = char_2;
		int_4 = int_10 * int_6;
		double_2 = double_4;
		short_1 = short_2 * short_6;
		int_5 = int_1 * int_9;
		float_1 = float_3 * float_6;
		double_1 = double_2 * double_4;
		unsigned_int_1 = unsigned_int_7 + unsigned_int_5;
		int_8 = int_4 + int_4;
		unsigned_int_4 = unsigned_int_4;
		double_6 = double_1 + double_6;
		float_1 = float_6 + float_1;
		float_4 = float_7;
		long_4 = long_1 * long_3;
		int_5 = int_9 * int_5;
		unsigned_int_10 = unsigned_int_4 + unsigned_int_9;
		double_5 = double_2 * double_4;
		int_7 = int_5 + int_3;
		float_8 = float_6 + float_5;
		double_5 = double_7 + double_4;
		float_1 = float_3 * float_4;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_6;
		double_5 = double_1 * double_8;
		float_3 = float_5 + float_8;
		unsigned_int_8 = unsigned_int_8 * unsigned_int_1;
		double_4 = double_6 * double_8;
		char_3 = char_3 * char_3;
		char_2 = char_3 + char_1;
		unsigned_int_5 = unsigned_int_8 + unsigned_int_1;
		double_2 = double_6 * double_4;
		char_4 = char_2 + char_4;
		long_4 = long_2 + long_5;
		double_1 = double_7 * double_2;
		unsigned_int_8 = unsigned_int_10 * unsigned_int_10;
		float_1 = float_6 + float_6;
		char_2 = char_4 + char_4;
		char_5 = char_3 + char_4;
		unsigned_int_6 = unsigned_int_10 + unsigned_int_5;
		short_6 = short_2 * short_1;
		unsigned_int_9 = unsigned_int_7 * unsigned_int_10;
		int_8 = int_4 * int_2;
		int_10 = int_9 + int_5;
		unsigned_int_9 = unsigned_int_9 * unsigned_int_5;
		short_1 = short_4 * short_7;
	}
	return unsigned_int_7;
}
long v_ctx_set_max_inline( char parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float_1 = float_1 + float_2;
	if(1)
	{
		int int_3 = 1;
		if(1)
		{
			char char_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char_1 = char_1 * char_2;
			short_2 = short_1 * short_1;
		}
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_1 = double_1 + double_2;
			int_2 = int_2;
			unsigned_int_1 = v_ib_dev_name(long_1);

			int_2 = int_2 + int_1;
			double_3 = double_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			char char_3 = 1;
			char_2 = char_2 * char_3;
		}
	}
	return long_1;
}
long v_link_layer_str( double parameter_1)
{
	long long_1 = 1;
	return long_1;
}
double v_set_link_layer( unsigned int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		int int_4 = 1;
		long_1 = v_link_layer_str(double_1);

		int_3 = int_2 + int_4;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = long_2;
	}
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "!") < 0)
	{
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		short short_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short_1 = short_2 * short_1;
		char controller_6[3];
		fgets(controller_6 ,3 ,stdin);
		if( strcmp( controller_6, "!#") < 0)
		{
			double_3 = double_2 + double_1;
		}
		if(1)
		{
			double_3 = double_3 + double_1;
		}
		if(1)
		{
			double_1 = double_1;
		}
		if(1)
		{
			double_2 = double_3 + double_4;
		}
	}
	return double_4;
}
int v_check_link( short parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	char_3 = char_1 * char_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_1 * double_1;
		}
	}
	if(1)
	{
		if(1)
		{
			long_1 = long_1;
		}
	}
	int_1 = int_2;
	if(1)
	{
		int_1 = v_ctx_chk_pkey_index(int_1,int_3);

		double_1 = double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			double_2 = v_set_link_layer(unsigned_int_3,long_1);

			long_1 = v_ctx_set_max_inline(char_4,char_4);

			double_2 = double_1 * double_1;
		}
	}
	return int_2;
	double_2 = v_ctx_set_out_reads(unsigned_int_4,int_4);

}
int v_verify_params_with_device_context( char parameter_1,char parameter_2)
{
	int int_1 = 1;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int_1 = int_1 * int_1;
			double_1 = double_2;
		}
	}
	return int_1;
}
double v_ctx_find_dev( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double_1 = double_2;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		int_2 = int_2 * int_3;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 * int_3;
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 + float_1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				int_2 = int_1;
			}
		}
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_1 = double_3 + double_4;
		}
	}
	return double_1;
}
void v_print_supported_ibv_rate_values()
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
}
void v_get_gbps_str_by_ibv_rate( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_3 = 1;
			v_print_supported_ibv_rate_values();

			char_3 = char_1 + char_2;
		}
	}
	char_4 = char_2 + char_1;
	int_2 = int_1 + int_2;
}
void v_flow_rules_force_dependecies( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_3 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		float float_2 = 1;
		if(1)
		{
			int_3 = int_3 * int_3;
			double_1 = double_1 * double_2;
		}
		if(1)
		{
			double double_3 = 1;
			double_2 = double_1 * double_3;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				char_1 = char_1 * char_1;
				float_3 = float_1 + float_2;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			}
		}
		if(1)
		{
			char_1 = char_1;
			int_3 = int_2 + int_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			float_2 = float_2;
			short_1 = short_1 * short_2;
		}
	}
	if(1)
	{
		if(1)
		{
			float float_4 = 1;
			float float_5 = 1;
			float float_6 = 1;
			float_4 = float_3 * float_1;
			float_6 = float_5 + float_6;
		}
	}
}
unsigned int v_force_dependecies( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	short short_3 = 1;
	float float_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_6 = 1;
	float float_6 = 1;
	char char_4 = 1;
	short short_4 = 1;
	long long_5 = 1;
	int int_7 = 1;
	float float_7 = 1;
	float float_8 = 1;
	short short_5 = 1;
	short short_6 = 1;
	char char_5 = 1;
	double double_9 = 1;
	long long_6 = 1;
	long long_7 = 1;
	char char_6 = 1;
	char char_7 = 1;
	char char_8 = 1;
	char char_9 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_11 = 1;
	unsigned int unsigned_int_12 = 1;
	float float_9 = 1;
	int int_8 = 1;
	double double_10 = 1;
	int int_9 = 1;
	long long_8 = 1;
	short short_8 = 1;
	unsigned int unsigned_int_13 = 1;
	long long_9 = 1;
	int int_10 = 1;
	double double_11 = 1;
	float float_10 = 1;
	short short_9 = 1;
	double double_13 = 1;
	int int_11 = 1;
	char char_10 = 1;
	short short_10 = 1;
	double double_14 = 1;
	unsigned int unsigned_int_14 = 1;
	int int_12 = 1;
	char char_11 = 1;
	int int_14 = 1;
	float float_13 = 1;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			short_1 = short_1;
		}
		if(1)
		{
			if(1)
			{
				char_1 = char_1 * char_1;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_1 * int_1;
		}
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		int_1 = int_2 + int_1;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
	}
	char controller_12[3];
	fgets(controller_12 ,3 ,stdin);
	if( strcmp( controller_12, ")j") > 0)
	{
		int_2 = int_1;
		int_4 = int_3 * int_3;
		double_1 = double_2 + double_1;
	}
	if(1)
	{
		char_1 = char_2;
		if(1)
		{
			float_1 = float_1 + float_1;
			float_3 = float_2 + float_2;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_1;
			unsigned_int_4 = unsigned_int_7 + unsigned_int_4;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_7 + unsigned_int_6;
		}
	}
	if(1)
	{
		int_2 = int_5 * int_4;
		double_3 = double_1;
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_3 + unsigned_int_8;
		double_3 = double_4 + double_2;
		if(1)
		{
			int_2 = int_3 + int_5;
			short_2 = short_1 + short_2;
			char_1 = char_1 * char_1;
		}
		if(1)
		{
			v_get_gbps_str_by_ibv_rate(char_1,int_5);

			short_1 = short_1 + short_2;
			unsigned_int_8 = unsigned_int_9 + unsigned_int_2;
			int_2 = int_1 + int_1;
		}
		if(1)
		{
			long_1 = long_1 + long_1;
		}
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_3;
		double_5 = double_4 * double_3;
	}
	if(1)
	{
		if(1)
		{
			double_3 = double_5 * double_6;
			long_2 = long_3;
		}
		if(1)
		{
			char_3 = char_1 + char_1;
			double_5 = double_5 * double_1;
		}
		if(1)
		{
			double_3 = double_4 + double_6;
			long_2 = long_3 * long_4;
		}
		if(1)
		{
			double_6 = double_1 + double_2;
			float_4 = float_3 * float_1;
		}
		if(1)
		{
			long_1 = long_3 * long_2;
			short_1 = short_2 + short_3;
			float_5 = float_4 * float_2;
		}
		if(1)
		{
			double_4 = double_7 * double_8;
			double_2 = double_8;
			double_7 = double_5 + double_8;
		}
		if(1)
		{
			int_6 = int_3;
			int_6 = int_3 * int_5;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			float_2 = float_6 + float_3;
			long_4 = long_1 * long_1;
			int_5 = int_1 + int_6;
		}
		if(1)
		{
			char_3 = char_4 + char_3;
			short_4 = short_2 + short_4;
			double_5 = double_2;
		}
		if(1)
		{
			double_5 = double_4 * double_8;
			float_3 = float_3 + float_6;
			int_2 = int_3;
		}
		if(1)
		{
			long_2 = long_4 + long_5;
			double_7 = double_8;
		}
		if(1)
		{
			int_1 = int_7 * int_6;
			float_8 = float_7 + float_4;
			float_6 = float_3 + float_5;
		}
		if(1)
		{
			double_4 = double_8 + double_2;
			short_6 = short_5 * short_2;
		}
		char_5 = char_2 * char_2;
	}
	if(1)
	{
		double_9 = double_6;
	}
	if(1)
	{
		short_4 = short_5 * short_2;
		double_5 = double_8 * double_1;
		char_5 = char_1 + char_2;
	}
	if(1)
	{
		if(1)
		{
			char_3 = char_1 * char_3;
			unsigned_int_5 = unsigned_int_6 * unsigned_int_6;
			int_7 = int_7 * int_3;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
			long_7 = long_6 + long_5;
			char_7 = char_6 * char_3;
		}
		if(1)
		{
			unsigned_int_8 = unsigned_int_6 + unsigned_int_6;
			float_4 = float_4 + float_7;
			unsigned_int_6 = unsigned_int_8;
		}
		if(1)
		{
			char_9 = char_1 * char_8;
			unsigned_int_9 = unsigned_int_7 + unsigned_int_10;
			short_3 = short_6 + short_7;
		}
		unsigned_int_12 = unsigned_int_2 + unsigned_int_11;
	}
	if(1)
	{
		double_9 = double_5 * double_1;
		int_7 = int_6 * int_4;
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_5 * int_3;
		}
		if(1)
		{
			char_3 = char_6 * char_7;
			float_2 = float_9 + float_2;
		}
		if(1)
		{
			int_5 = int_6;
			int_2 = int_5 + int_8;
		}
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
		double_10 = double_4 * double_3;
		double_9 = double_7;
	}
	if(1)
	{
		long_5 = long_4;
	}
	if(1)
	{
		int_7 = int_9 * int_6;
		float_2 = float_8 + float_1;
		if(1)
		{
			double_2 = double_3 + double_1;
			long_4 = long_6 + long_8;
			short_1 = short_3 * short_8;
		}
		if(1)
		{
			int_9 = int_7 + int_4;
			long_6 = long_2 + long_2;
			unsigned_int_13 = unsigned_int_5 + unsigned_int_10;
		}
		if(1)
		{
			char_8 = char_5 * char_2;
			float_3 = float_2 * float_2;
			float_7 = float_9 + float_7;
		}
		if(1)
		{
			double_6 = double_6 + double_4;
			unsigned_int_5 = unsigned_int_12 * unsigned_int_9;
			long_6 = long_2 + long_2;
		}
	}
	if(1)
	{
		unsigned_int_9 = unsigned_int_5 + unsigned_int_3;
	}
	if(1)
	{
		if(1)
		{
			double_7 = double_1 * double_2;
			char_1 = char_3 * char_2;
			long_4 = long_8 * long_9;
		}
		int_10 = int_5 + int_3;
		long_7 = long_5;
	}
	if(1)
	{
		if(1)
		{
			long_8 = long_4 + long_3;
			long_5 = long_1 + long_9;
			double_2 = double_5 + double_3;
		}
	}
	if(1)
	{
		double_11 = double_4 * double_3;
		long_5 = long_7 * long_5;
		unsigned_int_8 = unsigned_int_8 * unsigned_int_8;
	}
	if(1)
	{
		float_10 = float_4 * float_4;
	}
	if(1)
	{
		if(1)
		{
			int_8 = int_9;
			short_9 = short_6 * short_4;
			unsigned_int_5 = unsigned_int_9 * unsigned_int_5;
		}
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_7 + double_8;
		}
		if(1)
		{
			unsigned_int_13 = unsigned_int_4 * unsigned_int_12;
		}
	}
	if(1)
	{
		short_2 = short_8;
		short_3 = short_6 * short_9;
		int_4 = int_7 + int_10;
	}
	if(1)
	{
		if(1)
		{
			double_8 = double_4 + double_8;
			int_3 = int_1 * int_5;
			double_10 = double_7 * double_3;
		}
	}
	if(1)
	{
		double double_12 = 1;
		if(1)
		{
			long_7 = long_2;
			char_9 = char_1 * char_2;
		}
		double_13 = double_11 + double_12;
		unsigned_int_7 = unsigned_int_12;
		int_2 = int_5 + int_4;
		char_4 = char_2 + char_1;
		unsigned_int_4 = unsigned_int_8;
		char_3 = char_1;
		int_11 = int_7 * int_4;
		unsigned_int_13 = unsigned_int_13 * unsigned_int_12;
		char_2 = char_8 * char_6;
		int_3 = int_1 * int_5;
		int_6 = int_4 + int_4;
		if(1)
		{
			char_1 = char_1 * char_10;
			int_5 = int_11 * int_11;
			if(1)
			{
				int_5 = int_2 + int_2;
				int_6 = int_6 * int_10;
				short_2 = short_2 * short_6;
			}
			short_6 = short_10 + short_8;
		}
	}
	if(1)
	{
		if(1)
		{
			int_9 = int_7;
			unsigned_int_2 = unsigned_int_4;
		}
		if(1)
		{
			float float_11 = 1;
			float_11 = float_3;
			unsigned_int_3 = unsigned_int_13 + unsigned_int_10;
		}
		if(1)
		{
			int_5 = int_4 + int_7;
			long_4 = long_6 * long_3;
		}
		float_6 = float_10 * float_8;
	}
	if(1)
	{
		if(1)
		{
			double_3 = double_5;
			double_4 = double_14 + double_7;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_14 * unsigned_int_4;
			int_7 = int_9;
		}
		if(1)
		{
			long_1 = long_7 * long_1;
			v_flow_rules_force_dependecies(int_6);

			short_9 = short_8 * short_7;
		}
		if(1)
		{
			int_4 = int_6;
			int_8 = int_11;
			float_2 = float_5 + float_10;
		}
	}
	if(1)
	{
		if(1)
		{
			long long_10 = 1;
			unsigned_int_11 = unsigned_int_5 + unsigned_int_5;
			long_7 = long_3 + long_10;
			unsigned_int_13 = unsigned_int_14 * unsigned_int_14;
		}
		if(1)
		{
			int int_13 = 1;
			unsigned_int_10 = unsigned_int_12 * unsigned_int_11;
			int_10 = int_12 * int_13;
			char_9 = char_6;
		}
	}
	if(1)
	{
		double_11 = double_5;
		long_7 = long_8 + long_1;
		unsigned_int_2 = unsigned_int_10;
	}
	if(1)
	{
		char_2 = char_7 + char_9;
	}
	if(1)
	{
		if(1)
		{
			char_3 = char_4 + char_11;
		}
		if(1)
		{
			if(1)
			{
				long_3 = long_4;
				int_10 = int_12 * int_5;
				char_9 = char_10 * char_5;
			}
		}
		if(1)
		{
			float float_12 = 1;
			short short_11 = 1;
			short_10 = short_5 * short_7;
			float_12 = float_8 + float_10;
			short_11 = short_9 + short_6;
		}
		if(1)
		{
			short short_12 = 1;
			short_1 = short_9 * short_12;
			int_14 = int_11 + int_3;
			float_6 = float_13 + float_6;
		}
		if(1)
		{
			long_6 = long_9 * long_1;
			unsigned_int_3 = unsigned_int_8 * unsigned_int_1;
			double_3 = double_4 + double_1;
		}
		if(1)
		{
			double_2 = double_9 + double_11;
		}
	}
	if(1)
	{
		char_1 = char_11 + char_1;
	}
	if(1)
	{
		int int_15 = 1;
		long_4 = long_6 + long_9;
		int_15 = int_14;
		unsigned_int_10 = unsigned_int_11 * unsigned_int_2;
	}
	if(1)
	{
		double_14 = double_13 * double_13;
		double_13 = double_3 + double_5;
	}
	if(1)
	{
		float_13 = float_4 + float_7;
		char_3 = char_9;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_5 = unsigned_int_1;
			unsigned_int_8 = unsigned_int_5 * unsigned_int_6;
		}
		if(1)
		{
			int_12 = int_9;
			unsigned_int_2 = unsigned_int_13 + unsigned_int_10;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_11 + unsigned_int_1;
			long_5 = long_8;
		}
		if(1)
		{
			unsigned_int_13 = unsigned_int_10;
			double_4 = double_4 * double_6;
		}
		if(1)
		{
			unsigned_int_11 = unsigned_int_4 * unsigned_int_3;
			float_6 = float_6;
		}
		if(1)
		{
			short_4 = short_6;
			unsigned_int_12 = unsigned_int_2 + unsigned_int_6;
		}
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 * unsigned_int_10;
		long_1 = long_9;
	}
	return unsigned_int_2;
}
void v_set_raw_eth_parameters( int parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_1 = long_1 + long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "1a") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		long_1 = long_2 + long_1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		short_1 = short_1 + short_2;
		int_2 = int_1 + int_1;
		int_1 = int_2 * int_3;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "v?") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_3 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_1 = double_1 * double_1;
			double_3 = double_1 + double_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
			double_3 = double_1 + double_4;
			short_1 = short_2 * short_3;
			double_4 = double_1 + double_1;
		}
		if(1)
		{
			short short_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			short_4 = short_3;
			double_4 = double_2 * double_2;
			double_4 = double_5 + double_6;
			double_6 = double_3 + double_4;
		}
	}
}
void v_print_ethernet_vlan_header()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "I") > 0)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	long_1 = long_1 * long_1;
	int_2 = int_1 + int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
	int_3 = int_3 + int_1;
	float_1 = float_1 * float_1;
	short_2 = short_1 * short_2;
	float_2 = float_2 + float_1;
	unsigned_int_3 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	float_1 = float_1 * float_1;
	long_1 = long_1 * long_1;
}
int v_parse_ip_from_str( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	return int_1;
}
int v_parse_ip6_from_str( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	return int_1;
}
double v_str_link_layer( char parameter_1)
{
	double double_1 = 1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "UU") > 0)
	{
	}
	if(1)
	{
	}
	return double_1;
}
float v_parse_ethertype_from_str( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "9") < 0)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	return float_1;
}
int v_check_if_valid_udp_port( int parameter_1)
{
	int int_1 = 1;
	return int_1;
}
int v_parse_mac_from_str( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	short short_3 = 1;
	int int_5 = 1;
	short_2 = short_1 + short_2;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_3 = 1;
		char char_2 = 1;
		double_1 = double_1 + double_1;
		int_3 = int_1 * int_2;
		char_2 = char_1 * char_2;
	}
	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	float_3 = float_3;
	float_3 = float_4 + float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		char_3 = char_3 * char_1;
	}
	int_2 = int_4;
	short_3 = short_3;
	int_2 = int_2 + int_4;
	return int_5;
}
void v_usage_raw_ethernet( double parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	long_1 = long_1 * long_2;
}
char v_usage( int parameter_1,double parameter_2,double parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	char char_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_8 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_3 = 1;
	double double_7 = 1;
	char char_5 = 1;
	double double_8 = 1;
	double double_9 = 1;
	long long_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_5 = 1;
	double double_10 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_10 = 1;
	char char_6 = 1;
	char char_7 = 1;
	char char_8 = 1;
	char char_9 = 1;
	float float_6 = 1;
	float float_7 = 1;
	double double_11 = 1;
	long long_6 = 1;
	long long_7 = 1;
	long long_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	short short_6 = 1;
	char char_10 = 1;
	unsigned int unsigned_int_11 = 1;
	long long_9 = 1;
	long long_10 = 1;
	long long_11 = 1;
	float float_8 = 1;
	float float_9 = 1;
	unsigned int unsigned_int_12 = 1;
	unsigned int unsigned_int_13 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int_1 = int_1;
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		int_1 = int_2 + int_2;
	}
	unsigned_int_2 = unsigned_int_3;
	long_1 = long_1;
	if(1)
	{
		long_1 = long_1;
		int_3 = int_3 + int_4;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
		double_3 = double_2 * double_3;
	}
	if(1)
	{
		char_3 = char_1 + char_2;
		double_3 = double_2;
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_3;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		}
		if(1)
		{
			double_3 = double_4 + double_3;
			float_2 = float_1 * float_2;
		}
		if(1)
		{
			short_2 = short_1 * short_2;
			int_4 = int_1 + int_5;
		}
	}
	if(1)
	{
		char_4 = char_4 + char_1;
		double_1 = double_3 * double_1;
	}
	short_3 = short_2 * short_2;
	long_1 = long_1 * long_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_7 = unsigned_int_4 + unsigned_int_6;
	if(1)
	{
		int_3 = int_5 * int_6;
		int_7 = int_1 + int_7;
		double_4 = double_4 * double_3;
		short_3 = short_4 + short_2;
	}
	unsigned_int_8 = unsigned_int_3;
	float_1 = float_1 + float_1;
	int_4 = int_8;
	short_3 = short_3 + short_2;
	if(1)
	{
		long_1 = long_1;
		double_4 = double_2 + double_5;
	}
	double_5 = double_2 * double_6;
	float_1 = float_1 + float_1;
	if(1)
	{
		int_4 = int_8;
		long_2 = long_1 + long_1;
	}
	unsigned_int_3 = unsigned_int_8 * unsigned_int_9;
	long_2 = long_1 * long_2;
	if(1)
	{
		long_2 = long_2 + long_3;
		double_5 = double_4;
	}
	if(1)
	{
		double_3 = double_7 * double_7;
		unsigned_int_4 = unsigned_int_9 + unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			double_4 = double_3 * double_4;
			char_5 = char_2;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_6 * unsigned_int_4;
			float_2 = float_2 * float_2;
		}
		if(1)
		{
			double_9 = double_8 * double_7;
			long_2 = long_3 + long_4;
		}
	}
	float_1 = float_2 * float_3;
	unsigned_int_4 = unsigned_int_8;
	if(1)
	{
		float_4 = float_2 + float_4;
		double_2 = double_3 * double_4;
	}
	if(1)
	{
		float_5 = float_2 * float_5;
		double_7 = double_8 + double_3;
	}
	if(1)
	{
		char_3 = char_1 + char_2;
		int_2 = int_8;
	}
	double_7 = double_9 * double_3;
	short_4 = short_3 * short_5;
	if(1)
	{
		unsigned_int_9 = unsigned_int_1 + unsigned_int_5;
	}
	if(1)
	{
		long_2 = long_2 + long_1;
		double_9 = double_6 * double_9;
	}
	if(1)
	{
		int_5 = int_2 + int_7;
		char_1 = char_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_6;
	}
	if(1)
	{
		double_5 = double_6 + double_10;
		long_5 = long_1 + long_1;
	}
	if(1)
	{
		unsigned_int_8 = unsigned_int_10 * unsigned_int_5;
		int_3 = int_1;
	}
	if(1)
	{
		char_6 = char_7;
		long_2 = long_2 * long_3;
		if(1)
		{
			float_5 = float_1 * float_3;
			char_5 = char_7 + char_2;
		}
		char_8 = char_8 + char_9;
		float_7 = float_6 * float_6;
	}
	double_4 = double_7 + double_11;
	long_8 = long_6 * long_7;
	if(1)
	{
		int_6 = int_7 + int_6;
		long_7 = long_6 * long_8;
	}
	double_7 = double_1 * double_9;
	unsigned_int_7 = unsigned_int_10 * unsigned_int_8;
	if(1)
	{
		unsigned_int_8 = unsigned_int_6;
		short_1 = short_5 + short_3;
	}
	if(1)
	{
		float_3 = float_5 + float_4;
		int_10 = int_5 + int_9;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_6 * unsigned_int_4;
		short_5 = short_3 * short_5;
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_9 * unsigned_int_9;
		short_6 = short_5 * short_5;
	}
	short_2 = short_2 * short_1;
	int_10 = int_1 + int_4;
	unsigned_int_4 = unsigned_int_8 * unsigned_int_9;
	if(1)
	{
		int_1 = int_3 * int_10;
		short_5 = short_6 * short_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_8;
		double_3 = double_6;
	}
	if(1)
	{
		int_3 = int_1 + int_6;
		char_2 = char_10 + char_6;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_11 + unsigned_int_5;
		long_10 = long_9 * long_8;
	}
	if(1)
	{
		long_9 = long_11 + long_9;
		double_10 = double_2 + double_9;
	}
	if(1)
	{
		int_4 = int_5 * int_5;
		int_9 = int_3 * int_9;
	}
	if(1)
	{
		int_4 = int_4 * int_6;
		char_1 = char_9 + char_2;
		double_11 = double_4 * double_4;
		short_5 = short_3 * short_1;
	}
	if(1)
	{
		double_1 = double_10;
		double_10 = double_3 + double_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_7;
	}
	long_5 = long_9 + long_11;
	float_9 = float_8 + float_7;
	char_4 = char_5 + char_3;
	short_2 = short_5;
	if(1)
	{
		char_5 = char_4 + char_8;
		double_1 = double_1;
		long_10 = long_10 + long_3;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_9 * unsigned_int_6;
		float_4 = float_5 * float_1;
		double_11 = double_3 * double_11;
		char_10 = char_9 + char_5;
		int_6 = int_6 + int_10;
		long_7 = long_8 + long_2;
		if(1)
		{
			double_8 = double_7 * double_1;
			int_3 = int_3;
		}
		double_6 = double_7;
		char_4 = char_2 * char_5;
		unsigned_int_13 = unsigned_int_2 * unsigned_int_12;
		long_3 = long_9 + long_11;
	}
	if(1)
	{
		int_4 = int_1 + int_9;
		char_10 = char_8 + char_2;
	}
	if(1)
	{
		long long_12 = 1;
		unsigned_int_10 = unsigned_int_1 * unsigned_int_7;
		double_2 = double_8 * double_1;
		long_2 = long_12 * long_10;
		unsigned_int_10 = unsigned_int_11;
		double_9 = double_6;
		unsigned_int_1 = unsigned_int_11 * unsigned_int_8;
		float_9 = float_9;
		unsigned_int_10 = unsigned_int_6 + unsigned_int_6;
		float_4 = float_5 + float_4;
		long_3 = long_3 + long_4;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		double_3 = double_2 * double_3;
	}
	if(1)
	{
		double double_12 = 1;
		double double_13 = 1;
		unsigned int unsigned_int_14 = 1;
		unsigned int unsigned_int_15 = 1;
		double_1 = double_6 + double_12;
		float_1 = float_8;
		unsigned_int_12 = unsigned_int_8 + unsigned_int_9;
		double_5 = double_7 + double_6;
		unsigned_int_6 = unsigned_int_8 + unsigned_int_3;
		unsigned_int_9 = unsigned_int_13;
		float_9 = float_2;
		long_3 = long_8;
		double_13 = double_8 + double_2;
		unsigned_int_3 = unsigned_int_6 + unsigned_int_14;
		char_7 = char_9 * char_10;
		unsigned_int_15 = unsigned_int_3 + unsigned_int_7;
		double_3 = double_5;
		char_6 = char_10 * char_8;
		short_1 = short_4 + short_2;
		double_5 = double_3 + double_3;
	}
	if(1)
	{
		float_3 = float_6 + float_4;
	}
	int_5 = int_5;
	unsigned_int_7 = unsigned_int_5 + unsigned_int_2;
	return char_1;
}
double v_change_conn_type( int parameter_1,char parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	int_1 = int_1 + int_2;
	return double_1;
}
char v_get_cache_line_size()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float_1 = float_1;
	}
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		float float_2 = 1;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "8e") > 0)
		{
			double double_2 = 1;
			double_2 = double_1 + double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		}
		char_2 = char_1 + char_1;
		float_1 = float_2 * float_2;
		char_2 = char_2 + char_2;
		if(1)
		{
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			double double_3 = 1;
			long_1 = long_1 + long_2;
			double_1 = double_3 * double_1;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	return char_2;
}
long v_etype_str( int parameter_1)
{
	long long_1 = 1;
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
}
void v_print_ethernet_header()
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double double_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short_2 = short_1 * short_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	long_1 = long_2 + long_2;
	float_1 = float_1 + float_1;
	int_3 = int_1 * int_2;
	char_2 = char_1 * char_1;
	int_3 = int_4 * int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_2 = v_etype_str(int_1);

	int_4 = int_1 * int_1;
	char_2 = char_3 * char_1;
	double_1 = double_1 + double_1;
	float_3 = float_2 + float_3;
}
float v_init_perftest_params( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_7 = 1;
	double double_6 = 1;
	float float_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	long long_4 = 1;
	char char_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_8 = 1;
	float float_8 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_8 = 1;
	char char_9 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_10 = 1;
	char char_11 = 1;
	double double_9 = 1;
	double double_10 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char char_12 = 1;
	char char_13 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	double_3 = double_1 + double_2;
	double_1 = double_4 * double_2;
	int_1 = int_2;
	float_1 = float_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	char_2 = char_1 + char_1;
	double_4 = double_3 * double_2;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
	int_1 = int_3 * int_4;
	char_2 = char_3;
	unsigned_int_4 = unsigned_int_4;
	int_3 = int_3 * int_3;
	char_1 = char_2;
	float_1 = float_1 * float_2;
	double_5 = double_3;
	long_2 = long_1 * long_1;
	float_3 = float_4;
	long_1 = long_2 + long_3;
	long_2 = long_1 + long_2;
	int_6 = int_1 * int_5;
	int_1 = int_1 * int_4;
	float_2 = float_4 + float_3;
	float_3 = float_2 + float_4;
	char_1 = char_2 + char_4;
	char_6 = char_4 + char_5;
	long_1 = long_2;
	char_1 = char_4;
	double_5 = double_2 * double_4;
	long_3 = long_1;
	char_5 = char_5 + char_3;
	int_1 = int_7;
	double_2 = double_1 + double_4;
	int_2 = int_2 + int_4;
	double_2 = double_4 * double_6;
	float_5 = float_1 * float_2;
	float_2 = float_3 * float_3;
	long_1 = long_2 + long_2;
	double_4 = double_1;
	int_1 = int_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	char_3 = char_3 * char_1;
	float_7 = float_6 + float_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	long_2 = long_4;
	double_4 = double_2;
	char_2 = char_7 * char_3;
	long_3 = long_4;
	short_2 = short_1 * short_2;
	float_2 = float_2;
	short_1 = short_3 + short_3;
	double_7 = double_1 * double_4;
	unsigned_int_4 = unsigned_int_6 + unsigned_int_4;
	char_6 = char_1 + char_7;
	double_7 = double_6 * double_8;
	short_3 = short_1 + short_3;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
	double_8 = double_4 + double_7;
	char_4 = v_get_cache_line_size();

	int_7 = int_6 + int_4;
	float_8 = float_8 * float_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_6;
	double_8 = double_3 + double_3;
	long_2 = long_2 * long_3;
	unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
	double_6 = double_1 + double_6;
	char_9 = char_4 * char_8;
	if(1)
	{
		double_7 = double_3 + double_4;
		unsigned_int_6 = unsigned_int_8 + unsigned_int_5;
		float_2 = float_2 * float_2;
	}
	if(1)
	{
		char_10 = char_3 * char_6;
		char_2 = char_4 * char_11;
	}
	double_10 = double_9 * double_6;
	unsigned_int_6 = unsigned_int_3;
	short_3 = short_2 + short_2;
	unsigned_int_7 = unsigned_int_8 + unsigned_int_6;
	int_3 = int_5 + int_1;
	char_8 = char_1 + char_11;
	double_4 = double_2;
	long_1 = long_2 * long_1;
	unsigned_int_2 = unsigned_int_8 * unsigned_int_5;
	long_1 = long_5 * long_4;
	v_print_ethernet_header();

	long_6 = long_4;
	double_10 = double_5;
	long_5 = long_3;
	char_10 = char_12 + char_13;
	double_5 = double_7;
	int_5 = int_5 + int_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_8 * unsigned_int_8;
	}
	short_4 = short_1 * short_3;
	int_4 = int_7 * int_6;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	float_1 = float_3 * float_6;
	char_4 = char_8 * char_2;
	short_5 = short_3 + short_3;
	int_4 = int_2 + int_3;
	unsigned_int_4 = unsigned_int_9 + unsigned_int_5;
	unsigned_int_10 = unsigned_int_10;
	double_6 = double_5 * double_6;
	char_10 = char_2 * char_5;
	int_4 = int_7 + int_6;
	return float_4;
}
int v_parser( int parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	char char_5 = 1;
	long long_1 = 1;
	char char_6 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	float_1 = v_init_perftest_params(char_1);

	double_1 = v_change_conn_type(int_2,char_2,short_1);

	char_3 = v_usage(int_1,double_1,double_1,int_2);

	v_usage_raw_ethernet(double_1);

	int_1 = v_parse_mac_from_str(char_1,int_3);

	int_4 = v_check_if_valid_udp_port(int_2);

	float_1 = v_parse_ethertype_from_str(char_4,int_5);

	double_2 = v_str_link_layer(char_5);

	int_5 = v_parse_ip6_from_str(char_2,long_1);

	int_3 = v_parse_ip_from_str(char_6,long_2);

	v_print_ethernet_vlan_header();

	v_set_raw_eth_parameters(int_4);

	unsigned_int_1 = v_force_dependecies(double_2);

}
int main()
{
	int uni_para =273;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_6 = 1;
	short short_7 = 1;
	int int_7 = 1;
	double double_8 = 1;
	long long_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_9 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_12 = 1;
	int int_9 = 1;
	char char_6 = 1;
	double double_13 = 1;
	float float_8 = 1;
	int int_10 = 1;
	float_1 = float_1;
	int_1 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1;
	int_3 = int_3 * int_2;
	int_2 = int_2 + int_4;
	char_2 = char_1 + char_2;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_4;
	float_1 = float_2 * float_1;
	char_1 = char_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_2 = unsigned_int_5;
	int_5 = int_2 + int_5;
	short_3 = short_1 * short_2;
	if(1)
	{
		if(1)
		{
			char_3 = char_2 * char_1;
		}
	}
	if(1)
	{
		double_1 = double_1;
	}
	unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
	if(1)
	{
	}
	float_3 = float_2 * float_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_6 * unsigned_int_3;
	}
	if(1)
	{
	}
	if(1)
	{
		short_5 = short_2 * short_4;
	}
	if(1)
	{
		char_2 = char_3;
	}
	if(1)
	{
		double_1 = double_2 + double_2;
		double_3 = double_3 * double_4;
		double_1 = double_4 + double_5;
	}
	if(1)
	{
		char_5 = char_3 + char_4;
	}
	unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
	int_3 = int_6 + int_2;
	if(1)
	{
		double_1 = double_3 + double_5;
	}
	long_1 = long_2 * long_3;
	double_1 = double_2 * double_1;
	unsigned_int_7 = unsigned_int_7 * unsigned_int_2;
	double_3 = double_4;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	char controller4vul_1689[3];
	fgets(controller4vul_1689 ,3 ,stdin);
	if( strcmp( controller4vul_1689, "km") > 0)
	{
		char controller4vul_1690[3];
		fgets(controller4vul_1690 ,3 ,stdin);
		if( strcmp( controller4vul_1690, "6v") < 0)
		{
			char controller4vul_1691[3];
			fgets(controller4vul_1691 ,3 ,stdin);
			if( strcmp( controller4vul_1691, "[<") > 0)
			{
				int_3 = v_establish_connection(char_2,uni_para);

				double_3 = double_5 * double_4;
			}
		}
		if(1)
		{
			if(1)
			{
				double_1 = double_1 * double_6;
			}
			if(1)
			{
				double_1 = double_3 + double_2;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			short_2 = short_3 * short_4;
		}
	}
	if(1)
	{
		double_6 = double_7 * double_7;
	}
	short_5 = short_6 * short_7;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_5 = int_7 + int_6;
	}
	double_5 = double_3 + double_8;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			int_6 = int_3 + int_1;
		}
		int_2 = int_2 * int_4;
	}
	if(1)
	{
		if(1)
		{
			long_4 = long_4 + long_4;
			float_5 = float_2 * float_4;
		}
	}
	if(1)
	{
		if(1)
		{
			char_2 = char_1 + char_4;
		}
	}
	if(1)
	{
		int_6 = int_2;
	}
	if(1)
	{
		if(1)
		{
			short_3 = short_6 * short_7;
			int_5 = int_6 * int_2;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_8;
			double_9 = double_1 * double_5;
		}
		short_1 = short_5 * short_2;
	}
	if(1)
	{
		if(1)
		{
			long_3 = long_2 * long_3;
		}
		float_5 = float_2 * float_4;
		short_6 = short_1 + short_4;
		if(1)
		{
			float float_6 = 1;
			float_6 = float_5 + float_5;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_7 + unsigned_int_6;
			}
			if(1)
			{
				int_8 = int_1 * int_8;
			}
		}
		if(1)
		{
			if(1)
			{
				short_4 = short_2 + short_2;
			}
			double_7 = double_3 + double_7;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_6 = unsigned_int_1 * unsigned_int_9;
		}
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double_1 = double_9 * double_10;
			unsigned_int_4 = unsigned_int_7 + unsigned_int_10;
			if(1)
			{
				if(1)
				{
					int_8 = int_7 * int_8;
				}
			}
			if(1)
			{
				if(1)
				{
					double double_11 = 1;
					double_12 = double_5 + double_11;
				}
			}
			if(1)
			{
			}
			if(1)
			{
				if(1)
				{
					unsigned_int_6 = unsigned_int_4 + unsigned_int_4;
				}
			}
			unsigned_int_9 = unsigned_int_8 * unsigned_int_9;
			if(1)
			{
				unsigned_int_7 = unsigned_int_7 + unsigned_int_5;
				double_7 = double_1 + double_8;
			}
		}
	}
	if(1)
	{
		char char_7 = 1;
		int_2 = int_4;
		if(1)
		{
			if(1)
			{
				char_3 = char_4;
			}
		}
		if(1)
		{
			if(1)
			{
				int_9 = int_4 + int_7;
			}
		}
		if(1)
		{
			short_3 = short_2 * short_3;
		}
		double_9 = double_4 * double_12;
		if(1)
		{
			long_4 = long_1 * long_4;
			char_7 = char_4 * char_6;
		}
		if(1)
		{
			unsigned_int_10 = unsigned_int_10 * unsigned_int_4;
			double_6 = double_10;
			float_2 = float_4 * float_5;
			double_2 = double_10 + double_10;
			unsigned_int_6 = unsigned_int_7 * unsigned_int_4;
			unsigned_int_2 = unsigned_int_7 + unsigned_int_9;
			unsigned_int_2 = unsigned_int_3;
			unsigned_int_2 = unsigned_int_8;
			int_7 = int_5;
			double_12 = double_13 * double_10;
			char_7 = char_3 + char_5;
			unsigned_int_7 = unsigned_int_6;
		}
	}
	if(1)
	{
		float float_7 = 1;
		float_7 = float_7 * float_7;
		if(1)
		{
			double_8 = double_10 * double_7;
		}
	}
	if(1)
	{
		if(1)
		{
			float_3 = float_8 * float_8;
		}
		if(1)
		{
			short_5 = short_3;
		}
	}
	if(1)
	{
		if(1)
		{
			double_3 = double_13 + double_12;
		}
		int_4 = int_10 + int_2;
	}
	if(1)
	{
		float float_9 = 1;
		float_8 = float_1 + float_9;
	}
	if(1)
	{
		int int_11 = 1;
		int_9 = int_11 * int_5;
	}
	if(1)
	{
		char_4 = char_6 + char_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_8 = unsigned_int_7 * unsigned_int_1;
		}
		short_1 = short_5;
	}
	return int_10;
}

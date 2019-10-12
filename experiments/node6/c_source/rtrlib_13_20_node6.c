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
void v_rtr_mgr_free( char parameter_1);
void v_rtr_mgr_stop( char parameter_1);
int v_pfx_table_elem_matches( unsigned int parameter_1,double parameter_2,int parameter_3);
void v_pfx_table_node2pfx_record( long parameter_1,char parameter_2,short parameter_3);
char v_trie_lookup( float parameter_1,double parameter_2,char parameter_3,short parameter_4);
void v_pfx_table_free_reason( unsigned int parameter_1,double parameter_2);
int v_pfx_table_validate_r( char parameter_1,short parameter_2,char parameter_3,short parameter_4,char parameter_5,char parameter_6,char parameter_7);
int v_pfx_table_validate( long parameter_1,int parameter_2,unsigned int parameter_3,short parameter_4,short parameter_5);
int v_rtr_mgr_validate( long parameter_1,double parameter_2,long parameter_3,float parameter_4,unsigned int parameter_5);
int v_lrtr_ipv6_str_to_addr( unsigned int parameter_1,double parameter_2);
int v_lrtr_ipv4_str_to_addr( unsigned int parameter_1,long parameter_2);
int v_lrtr_ip_str_to_addr( short parameter_1,int parameter_2);
char v_rtr_mgr_conf_in_sync();
unsigned int v_rtr_mgr_get_first_group( float parameter_1);
int v_rtr_mgr_start( short parameter_1);
void v_spki_table_free( float parameter_1);
int v_rtr_state_to_str( short parameter_1);
long v_status_fp( float parameter_1,char parameter_2,short parameter_3);
int v_rtr_mgr_config_cmp_tommy( short parameter_1,char parameter_2);
short v_tommy_list_set( int parameter_1,float parameter_2,long parameter_3);
int v_tommy_ctz_u32( short parameter_1);
int v_tommy_chain_splice( short parameter_1,short parameter_2,short parameter_3,float parameter_4);
char v_tommy_chain_merge( double parameter_1,long parameter_2,char parameter_3);
long v_tommy_chain_concat( double parameter_1,unsigned int parameter_2);
void v_tommy_chain_merge_degenerated( long parameter_1,int parameter_2,unsigned int parameter_3);
long v_tommy_chain_mergesort( short parameter_1,int parameter_2);
void v_tommy_list_sort( int parameter_1,int parameter_2);
void v_tr_close( double parameter_1);
int v_rtr_wait_for_sync();
short v_rtr_set_last_update( double parameter_1);
void v_tommy_hashlin_done( double parameter_1);
unsigned int v_tommy_list_foreach( unsigned int parameter_1,char parameter_2);
void v_spki_table_free_without_notify( short parameter_1);
void v_pfx_table_free( char parameter_1);
void v_pfx_table_free_without_notify( char parameter_1);
void v_spki_table_notify_diff( short parameter_1,short parameter_2,int parameter_3);
int v_pfx_table_notify_diff_cb( float parameter_1);
void v_pfx_table_notify_diff( double parameter_1,char parameter_2,float parameter_3);
void v_spki_table_swap( unsigned int parameter_1,double parameter_2);
void v_pfx_table_swap( int parameter_1,double parameter_2);
unsigned int v_rtr_undo_update_spki_table( char parameter_1,double parameter_2);
short v_tommy_hashlin_remove( short parameter_1,unsigned int parameter_2,float parameter_3,unsigned int parameter_4);
int v_spki_table_remove_entry( unsigned int parameter_1,double parameter_2);
short v_rtr_key_pdu_2_spki_record( float parameter_1,int parameter_2,float parameter_3,double parameter_4);
void v_rtr_update_spki_table( char parameter_1,short parameter_2,double parameter_3);
double v_rtr_undo_update_pfx_table( float parameter_1,short parameter_2);
int v_lrtr_ipv4_addr_to_str( int parameter_1,char parameter_2,char parameter_3);
int v_lrtr_ipv6_addr_to_str( double parameter_1,char parameter_2,float parameter_3);
int v_lrtr_ip_addr_to_str( unsigned int parameter_1,char parameter_2,long parameter_3);
int v_pfx_table_remove( long parameter_1,int parameter_2);
void v_rtr_prefix_pdu_2_pfx_record( int parameter_1,char parameter_2,unsigned int parameter_3,short parameter_4);
int v_rtr_update_pfx_table( int parameter_1,unsigned int parameter_2,float parameter_3);
unsigned int v_spki_table_notify_clients( short parameter_1,long parameter_2,int parameter_3);
double v_hashlin_grow_step( char parameter_1);
void v_tommy_list_insert_first( short parameter_1,long parameter_2);
char v_tommy_list_insert_tail_not_empty( double parameter_1,double parameter_2);
long v_tommy_list_insert_tail( short parameter_1,unsigned int parameter_2);
void v_tommy_hashlin_insert( int parameter_1,char parameter_2,float parameter_4);
long v_tommy_hashlin_bucket( int parameter_1,float parameter_2);
double v_tommy_hashlin_search( char parameter_1,long parameter_2,int parameter_3,int parameter_4);
long v_tommy_inthash_u32( int parameter_1);
double v_spki_record_to_key_entry( char parameter_1,double parameter_2);
int v_spki_table_add_entry( char parameter_1,short parameter_2);
double v_key_entry_to_spki_record( short parameter_1,unsigned int parameter_2);
int v_spki_table_copy_except_socket( unsigned int parameter_1,int parameter_2,float parameter_3);
void v_pfx_table_for_each_ipv6_record( float parameter_1,int parameter_2);
float v_add_child_node( int parameter_1,char parameter_2,int parameter_3);
short v_swap_nodes( double parameter_1,unsigned int parameter_2);
void v_trie_insert( float parameter_1,int parameter_2,char parameter_3);
int v_pfx_table_create_node( double parameter_1,unsigned int parameter_2);
int v_pfx_table_append_elem( double parameter_1,float parameter_2);
unsigned int v_pfx_table_find_elem( float parameter_1,char parameter_2,unsigned int parameter_3);
char v_trie_lookup_exact( unsigned int parameter_1,short parameter_2,unsigned int parameter_3,int parameter_4,float parameter_5);
short v_pfx_table_get_root( float parameter_1,double parameter_2);
int v_pfx_table_add( long parameter_1,short parameter_2);
unsigned int v_pfx_table_copy_cb( double parameter_1);
char v_pfx_table_for_each_rec( char parameter_1,char parameter_2);
void v_pfx_table_for_each_ipv4_record( int parameter_1,long parameter_2);
int v_pfx_table_copy_except_socket( float parameter_1,double parameter_2,double parameter_3);
void v_interval_send_error_pdu( float parameter_1,short parameter_3,char parameter_4,double parameter_5);
void v_apply_interval_value( unsigned int parameter_1,int parameter_2,long parameter_3);
int v_rtr_check_interval_option( short parameter_1,int parameter_2,char parameter_3,int parameter_4);
short v_rtr_store_router_key_pdu( long parameter_1,double parameter_2,float parameter_3,double parameter_4,double parameter_5,double parameter_6);
long v_rtr_store_prefix_pdu( short parameter_1,unsigned int parameter_2,int parameter_3,long parameter_5,char parameter_6);
int v_rtr_sync_receive_and_store_pdus( long parameter_1,int uni_para);
void v_rtr_send_error_pdu_from_host( int parameter_1,double parameter_2,short parameter_3,float parameter_4,short parameter_5,char parameter_6);
float v_rtr_handle_cache_response_pdu( unsigned int parameter_1,char parameter_2);
short v_rtr_handle_error_pdu( short parameter_1,long parameter_2);
void v_rtr_send_error_pdu( long parameter_1,char parameter_2,char parameter_3,double parameter_4,short parameter_5,float parameter_6);
int v_rtr_send_error_pdu_from_network( double parameter_1,char parameter_2,char parameter_3,double parameter_4,unsigned int parameter_5,unsigned int parameter_6);
char v_rtr_pdu_footer_to_host_byte_order();
double v_rtr_pdu_check_size( int parameter_1);
char v_rtr_pdu_header_to_host_byte_order();
int v_tr_recv( float parameter_1,short parameter_3,char parameter_4);
int v_tr_recv_all( double parameter_1,float parameter_2,unsigned int parameter_3,long parameter_4);
unsigned int v_rtr_receive_pdu( int parameter_1,long parameter_3,char parameter_4);
int v_rtr_sync( int parameter_1,int uni_para);
int v_rtr_send_reset_query( int parameter_1);
int v_tr_send( long parameter_1,short parameter_2,float parameter_3,long parameter_4);
int v_tr_send_all( char parameter_1,short parameter_2,unsigned int parameter_3,long parameter_4);
int v_lrtr_convert_short( unsigned int parameter_1,short parameter_2);
int v_rtr_pdu_convert_header_byte_order(int parameter_2);
void v_rtr_pdu_header_to_network_byte_order();
void v_lrtr_ipv6_addr_convert_byte_order( int parameter_1,long parameter_2,char parameter_3);
void v_lrtr_ipv4_addr_convert_byte_order( unsigned int parameter_1,long parameter_2,float parameter_3);
double v_lrtr_convert_long( double parameter_1,double parameter_2);
unsigned int v_rtr_get_pdu_type();
short v_rtr_pdu_convert_footer_byte_order(int parameter_2);
short v_rtr_pdu_footer_to_network_byte_order();
double v_rtr_pdu_to_network_byte_order();
void v_rtr_send_pdu( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3);
int v_rtr_send_serial_query( unsigned int parameter_1);
int v_tr_open( long parameter_1);
double v_tommy_list_tail( long parameter_1);
float v_tommy_list_empty( char parameter_1);
void v_tommy_list_concat( long parameter_1,int parameter_2);
long v_hashlin_shrink_step( int parameter_1);
float v_tommy_ilog2_u32( int parameter_1);
float v_tommy_hashlin_pos( char parameter_1,short parameter_2);
char v_tommy_hashlin_bucket_ptr( float parameter_1,long parameter_2);
short v_tommy_hashlin_remove_existing( unsigned int parameter_1,int parameter_2);
float v_tommy_list_remove_existing( float parameter_1,int parameter_2);
int v_spki_table_src_remove( long parameter_1,double parameter_2);
long v_lrtr_ipv4_get_bits( int parameter_1,unsigned int parameter_2,char parameter_3);
short v_lrtr_get_bits( short parameter_1,int parameter_2,char parameter_3);
int v_lrtr_ipv6_get_bits( double parameter_1,long parameter_2,char parameter_3);
long v_lrtr_ip_addr_get_bits( float parameter_1,unsigned int parameter_2,int parameter_3);
double v_lrtr_ip_addr_is_zero( double parameter_1);
void v_is_left_child( short parameter_1,int parameter_2);
short v_replace_node_data( int parameter_1,int parameter_2);
char v_deref_node( short parameter_1);
double v_trie_is_leaf();
char v_lrtr_ipv4_addr_equal( float parameter_1,double parameter_2);
long v_lrtr_ipv6_addr_equal( char parameter_1,unsigned int parameter_2);
short v_lrtr_ip_addr_equal( unsigned int parameter_1,short parameter_2);
int v_prefix_is_same( float parameter_1,float parameter_2,double parameter_3);
void v_trie_remove( float parameter_1,short parameter_2,long parameter_3,float parameter_4,int uni_para);
void v_pfx_table_notify_clients( char parameter_1,unsigned int parameter_2,unsigned int parameter_3);
float v_lrtr_realloc(char parameter_2);
int v_pfx_table_del_elem( long parameter_1,double parameter_2);
int v_pfx_table_remove_id( unsigned int parameter_1,double parameter_2,unsigned int parameter_3,unsigned int parameter_4,double parameter_5,int uni_para);
int v_pfx_table_src_remove( char parameter_1,unsigned int parameter_2,int uni_para);
int v_lrtr_get_monotonic_time( float parameter_1);
void v_rtr_purge_outdated_records( short parameter_1);
unsigned int v_sighandler( int parameter_1);
unsigned int v_install_sig_handler();
void v_rtr_fsm_start( float parameter_1,int uni_para);
int v_rtr_start( int parameter_1,int uni_para);
int v_rtr_mgr_start_sockets( short parameter_1,int uni_para);
short v_get_best_inactive_rtr_mgr_group( float parameter_1,double parameter_2);
short v_is_some_rtr_mgr_group_established( double parameter_1);
unsigned int v__rtr_mgr_cb_state_error( char parameter_1,int parameter_2,char parameter_3,int uni_para);
short v__rtr_mgr_cb_state_connecting( long parameter_1,char parameter_2,long parameter_3);
void v_rtr_change_socket_state( short parameter_1,int parameter_2);
void v_rtr_stop( char parameter_1);
double v_tommy_list_head( int parameter_1);
int v_rtr_mgr_close_less_preferable_groups( long parameter_1,char parameter_2,long parameter_3);
unsigned int v_rtr_mgr_config_status_is_synced();
int v__rtr_mgr_cb_state_established( char parameter_1,long parameter_2,short parameter_3);
unsigned int v_rtr_mgr_status_to_str( char parameter_1);
double v_set_status( char parameter_1,long parameter_2,float parameter_3,int parameter_4);
float v__rtr_mgr_cb_state_shutdown( float parameter_1,float parameter_2,long parameter_3);
long v_rtr_mgr_cb( float parameter_1,long parameter_2,int uni_para);
int v_rtr_check_interval_range( unsigned int parameter_1,unsigned int parameter_2,short parameter_3);
int v_rtr_init( char parameter_1,long parameter_2,long parameter_3,int parameter_4,short parameter_5,long parameter_6,double parameter_7,unsigned int parameter_8,long parameter_9);
int v_rtr_mgr_init_sockets( long parameter_1,int parameter_2,short parameter_3,int parameter_4,double parameter_5,double parameter_6,int uni_para);
long v_key_entry_cmp( long parameter_1,short parameter_2);
char v_tommy_list_init( long parameter_1);
void v_tommy_hashlin_init();
void v_spki_table_init( int parameter_1,int parameter_2);
void v_pfx_table_init( long parameter_1,unsigned int parameter_2);
int v_rtr_mgr_config_cmp( int parameter_1,float parameter_2);
int v_rtr_mgr_init( float parameter_1,int parameter_2,float parameter_3,float parameter_4,char parameter_5,float parameter_6,short parameter_7,unsigned int parameter_8,double parameter_9,int uni_para);
float v_tr_tcp_ident();
int v_tr_tcp_send( int parameter_1,double parameter_2,long parameter_3,long parameter_4);
int v_tr_tcp_recv( float parameter_1,short parameter_3,int parameter_4);
int v_tr_tcp_open();
void v_tr_tcp_free();
void v_tr_tcp_close();
int v_tr_tcp_init( float parameter_1,float parameter_2);
char v_lrtr_strdup();
long v_lrtr_malloc();
double v_tr_ssh_ident();
char v_tr_ssh_send( int parameter_1,double parameter_2,short parameter_3,unsigned int parameter_4);
int v_tr_ssh_recv_async( double parameter_1,char parameter_3);
int v_tr_ssh_recv( char parameter_1,char parameter_3,float parameter_4);
int v_tr_ssh_open();
void v_lrtr_free();
void v_tr_ssh_free( float parameter_1);
void v_tr_ssh_close();
int v_tr_ssh_init( float parameter_1,short parameter_2);
void v_tr_free( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_1;
}
void v_rtr_mgr_free( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	v_lrtr_free();

	v_tr_free(int_1);

	int_3 = int_1 * int_2;
	v_pfx_table_free(char_1);

	v_spki_table_free(float_1);

	double_1 = v_tommy_list_head(int_2);

}
void v_rtr_mgr_stop( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	if(1)
	{
		double_1 = v_tommy_list_head(int_2);

		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		int_2 = int_2 * int_2;
	}
	float_1 = float_2;
	v_rtr_stop(char_1);

	double_2 = double_2 * double_2;
}
int v_pfx_table_elem_matches( unsigned int parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return int_1;
}
void v_pfx_table_node2pfx_record( long parameter_1,char parameter_2,short parameter_3)
{
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
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, "JV") > 0)
		{
		}
		if(1)
		{
		}
	}
}
char v_trie_lookup( float parameter_1,double parameter_2,char parameter_3,short parameter_4)
{
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	return char_1;
	short_1 = v_lrtr_ip_addr_equal(unsigned_int_1,short_1);

	long_1 = v_lrtr_ip_addr_get_bits(float_1,unsigned_int_2,int_1);

	v_is_left_child(short_1,int_2);

}
void v_pfx_table_free_reason( unsigned int parameter_1,double parameter_2)
{
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	v_lrtr_free();

}
int v_pfx_table_validate_r( char parameter_1,short parameter_2,char parameter_3,short parameter_4,char parameter_5,char parameter_6,char parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	double_2 = double_1 * double_1;
	int_2 = int_1 * int_2;
	char_2 = char_1 * char_2;
	double_3 = v_lrtr_ip_addr_is_zero(double_2);

	short_2 = short_1 + short_1;
	double_4 = double_3 * double_4;
	int_3 = v_pfx_table_elem_matches(unsigned_int_1,double_3,int_4);

	int_5 = int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "!") > 0)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	char_3 = v_trie_lookup(float_1,double_1,char_2,short_1);

	double_2 = double_1;
	v_pfx_table_free_reason(unsigned_int_1,double_3);

	long_2 = long_1 + long_2;
	v_pfx_table_node2pfx_record(long_1,char_2,short_1);

	double_4 = double_4 + double_4;
	short_1 = v_pfx_table_get_root(float_2,double_4);

	float_3 = v_lrtr_realloc(char_2);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	long_3 = v_lrtr_ip_addr_get_bits(float_2,unsigned_int_4,int_5);

	char_4 = char_1 + char_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	int_4 = int_5;
	return int_4;
}
int v_pfx_table_validate( long parameter_1,int parameter_2,unsigned int parameter_3,short parameter_4,short parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	return int_1;
	int_2 = v_pfx_table_validate_r(char_1,short_1,char_1,short_2,char_2,char_3,char_2);

}
int v_rtr_mgr_validate( long parameter_1,double parameter_2,long parameter_3,float parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	return int_1;
	int_2 = v_pfx_table_validate(long_1,int_1,unsigned_int_1,short_1,short_2);

}
int v_lrtr_ipv6_str_to_addr( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	double_3 = double_2 + double_3;
	int_1 = v_lrtr_ipv4_str_to_addr(unsigned_int_1,long_1);

	char_2 = char_1 + char_1;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	short_1 = short_2;
	if(1)
	{
	}
	return int_3;
}
int v_lrtr_ipv4_str_to_addr( unsigned int parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short_2 = short_1 * short_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "I<") < 0)
	{
	}
	return int_1;
}
int v_lrtr_ip_str_to_addr( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	if(1)
	{
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_1 = v_lrtr_ipv4_str_to_addr(unsigned_int_1,long_1);

		int_1 = v_lrtr_ipv6_str_to_addr(unsigned_int_2,double_1);

		double_2 = double_2;
		float_1 = float_1 * float_2;
	}
	char_1 = char_1 + char_1;
	return int_2;
}
char v_rtr_mgr_conf_in_sync()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double_3 = double_1 * double_2;
	double_3 = v_tommy_list_head(int_1);

	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_4;
	double_5 = double_3;
	short_2 = short_1 * short_1;
	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	short_1 = short_1 + short_1;
	char_2 = char_1 * char_1;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	double_2 = double_6 * double_7;
	long_3 = long_1 + long_2;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_1 = short_3 + short_4;
		char_1 = char_1 + char_2;
	}
	char_3 = char_2 * char_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	char_4 = char_3 + char_3;
	return char_4;
}
unsigned int v_rtr_mgr_get_first_group( float parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_1;
	double_1 = v_tommy_list_head(int_2);

	long_2 = long_1 * long_1;
	return unsigned_int_1;
}
int v_rtr_mgr_start( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = v_rtr_mgr_get_first_group(float_1);

	int_1 = v_rtr_mgr_start_sockets(short_1,-1 );

	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	return int_1;
}
void v_spki_table_free( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = v_tommy_list_foreach(unsigned_int_2,char_1);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	double_1 = double_1;
	int_2 = int_1 + int_1;
	v_tommy_hashlin_done(double_2);

	int_2 = int_2 * int_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
}
int v_rtr_state_to_str( short parameter_1)
{
	int int_1 = 1;
	return int_1;
}
long v_status_fp( float parameter_1,char parameter_2,short parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int_1 = v_rtr_state_to_str(short_1);

	float_1 = float_1 * float_1;
	return long_1;
	unsigned_int_1 = v_rtr_mgr_status_to_str(char_1);

}
int v_rtr_mgr_config_cmp_tommy( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int_1 = v_rtr_mgr_config_cmp(int_1,float_1);

	int_1 = int_2 + int_1;
	double_1 = double_1 * double_1;
	return int_3;
}
short v_tommy_list_set( int parameter_1,float parameter_2,long parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char_1 = char_1 + char_1;
	int_1 = int_1 + int_1;
	int_2 = int_1 + int_1;
	return short_1;
}
int v_tommy_ctz_u32( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	double_1 = double_1 * double_2;
	char_1 = char_1 * char_1;
	int_1 = int_1 + int_1;
	int_1 = int_1 + int_2;
	long_1 = long_1 + long_1;
	int_4 = int_2 + int_3;
	int_4 = int_1 * int_5;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_2 + long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_5;
}
int v_tommy_chain_splice( short parameter_1,short parameter_2,short parameter_3,float parameter_4)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = float_1 + float_1;
	char_3 = char_1 + char_2;
	long_1 = long_1 + long_2;
	int_2 = int_1 + int_2;
	return int_2;
}
char v_tommy_chain_merge( double parameter_1,long parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	long long_2 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_6 = 1;
	double_1 = double_1 + double_2;
	double_3 = double_3 * double_1;
	double_3 = double_3 + double_1;
	if(1)
	{
		char_1 = char_2;
		char_3 = char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_7 = 1;
		long long_1 = 1;
		int int_2 = 1;
		long long_3 = 1;
		int int_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_9 = 1;
		short short_4 = 1;
		short short_5 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		float_2 = float_1 + float_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		double_2 = double_2 + double_2;
		double_5 = double_2 * double_4;
		short_2 = short_1 * short_2;
		int_1 = int_1 + int_1;
		double_4 = double_1 * double_2;
		short_1 = short_2 * short_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_6 = 1;
			double_6 = double_3 * double_4;
		}
		unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		double_5 = double_7 * double_5;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long_2 = long_1 + long_1;
		}
		char_2 = char_3;
		int_2 = int_2;
		long_2 = long_1 + long_3;
		int_3 = int_2 * int_3;
		char_1 = char_4 + char_4;
		int_1 = v_tommy_chain_splice(short_3,short_2,short_3,float_1);

		unsigned_int_5 = unsigned_int_5 * unsigned_int_1;
		double_9 = double_8 + double_3;
		short_4 = short_2 + short_3;
		int_1 = int_1 * int_2;
		short_5 = short_4 * short_1;
		long_2 = v_tommy_chain_concat(double_8,unsigned_int_6);

		char_2 = char_1 * char_4;
	}
	return char_3;
}
long v_tommy_chain_concat( double parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return long_1;
}
void v_tommy_chain_merge_degenerated( long parameter_1,int parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		char char_2 = 1;
		short_1 = short_2;
		char_1 = v_tommy_chain_merge(double_1,long_1,char_1);

		char_2 = char_1 + char_2;
	}
	if(1)
	{
		double_2 = double_2 * double_1;
		long_2 = long_1 + long_1;
	}
	long_2 = v_tommy_chain_concat(double_2,unsigned_int_1);

	double_2 = double_2 * double_3;
}
long v_tommy_chain_mergesort( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			v_tommy_chain_merge_degenerated(long_1,int_1,unsigned_int_3);

			int_3 = int_2 + int_3;
		}
	}
	return long_1;
	int_4 = v_tommy_ctz_u32(short_1);

}
void v_tommy_list_sort( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	long long_2 = 1;
	short short_2 = 1;
	int int_4 = 1;
	long_1 = long_1 * long_1;
	int_1 = int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "}A") > 0)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = v_tommy_list_head(int_1);

	float_1 = float_1 + float_1;
	short_1 = v_tommy_list_set(int_3,float_1,long_1);

	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_2 * double_2;
	float_1 = v_tommy_list_empty(char_2);

	long_2 = v_tommy_chain_mergesort(short_2,int_4);

}
void v_tr_close( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_2;
}
int v_rtr_wait_for_sync()
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 + double_1;
	short_2 = short_1 + short_1;
	double_2 = double_2;
	char_1 = char_1 + char_2;
	if(1)
	{
		short short_3 = 1;
		unsigned_int_1 = v_rtr_receive_pdu(int_1,long_1,char_1);

		short_3 = short_1 * short_2;
	}
	int_1 = v_lrtr_get_monotonic_time(float_1);

	unsigned_int_1 = v_rtr_get_pdu_type();

	float_1 = float_2 + float_2;
	short_2 = short_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
		}
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_2 * float_3;
	}
	return int_1;
}
short v_rtr_set_last_update( double parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_3 = 1;
	if(1)
	{
		short short_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int_1 = v_lrtr_get_monotonic_time(float_1);

		v_rtr_change_socket_state(short_1,int_1);

		short_3 = short_1 + short_2;
		float_3 = float_1 + float_2;
	}
	return short_3;
}
void v_tommy_hashlin_done( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_3 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
}
unsigned int v_tommy_list_foreach( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	long_1 = long_1 + long_1;
	char_1 = char_1 + char_2;
	char_1 = char_1 + char_2;
	long_2 = long_3;
	unsigned_int_2 = unsigned_int_2;
	short_2 = short_1 * short_2;
	float_2 = float_1 + float_1;
	char_1 = char_1 + char_3;
	short_1 = short_3 * short_1;
	int_2 = int_1 * int_1;
	int_3 = int_3;
	int_3 = int_2 + int_3;
	if(1)
	{
		double double_2 = 1;
		long long_4 = 1;
		if(1)
		{
			double_2 = double_1 + double_2;
		}
		if(1)
		{
			char char_4 = 1;
			char_2 = char_1 * char_4;
		}
		if(1)
		{
			long_3 = long_2 + long_4;
			float_1 = float_1;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		}
		if(1)
		{
			long long_5 = 1;
			long_4 = long_5 * long_5;
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_1 * double_2;
		}
		if(1)
		{
			int_3 = int_3;
		}
	}
	if(1)
	{
		int int_4 = 1;
		double_1 = v_tommy_list_head(int_1);

		int_4 = int_2 * int_1;
	}
	float_1 = float_2;
	return unsigned_int_1;
}
void v_spki_table_free_without_notify( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = v_tommy_list_foreach(unsigned_int_1,char_1);

	v_tommy_hashlin_done(double_1);

	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_1;
}
void v_pfx_table_free( char parameter_1)
{
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			short_3 = short_4;
			v_pfx_table_notify_clients(char_1,unsigned_int_1,unsigned_int_2);

			v_trie_remove(float_1,short_2,long_1,float_2,-1 );

			short_4 = short_3 * short_3;
		}
		if(1)
		{
			float float_3 = 1;
			v_lrtr_free();

			float_3 = float_1 * float_2;
		}
	}
}
void v_pfx_table_free_without_notify( char parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	v_pfx_table_free(char_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 * short_2;
}
void v_spki_table_notify_diff( short parameter_1,short parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	double_3 = double_1 * double_2;
	int_1 = int_2;
	unsigned_int_1 = v_spki_table_notify_clients(short_1,long_1,int_2);

	int_3 = int_3 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_2 = short_2 + short_1;
		if(1)
		{
			int_4 = v_spki_table_remove_entry(unsigned_int_2,double_4);

			double_5 = double_5;
			double_4 = double_1 * double_2;
			if(1)
			{
				double double_6 = 1;
				double_6 = double_5 + double_5;
			}
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_2 = int_2;
		if(1)
		{
			double double_7 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double_7 = double_3 * double_1;
			double_5 = v_key_entry_to_spki_record(short_2,unsigned_int_1);

			char_2 = char_1 + char_1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
	}
	double_4 = v_tommy_list_head(int_3);

	long_1 = long_1 * long_2;
}
int v_pfx_table_notify_diff_cb( float parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = v_pfx_table_remove(long_1,int_1);

	v_pfx_table_notify_clients(char_1,unsigned_int_1,unsigned_int_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
			long long_2 = 1;
			long_1 = long_2 * long_1;
		}
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 + int_2;
	}
	return int_1;
}
void v_pfx_table_notify_diff( double parameter_1,char parameter_2,float parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	float float_2 = 1;
	short short_4 = 1;
	v_pfx_table_for_each_ipv6_record(float_1,int_1);

	int_1 = int_1 + int_1;
	v_pfx_table_for_each_ipv4_record(int_1,long_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_2;
	int_1 = int_2 * int_3;
	double_2 = double_1 * double_1;
	short_2 = short_1 + short_1;
	short_2 = short_1 + short_3;
	int_1 = v_pfx_table_notify_diff_cb(float_1);

	double_2 = double_1 + double_3;
	float_1 = float_1 + float_2;
	short_4 = short_4 + short_3;
}
void v_spki_table_swap( unsigned int parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int_3 = int_1 + int_2;
	short_2 = short_1 + short_2;
	double_1 = double_1 + double_1;
	int_2 = int_3 * int_3;
	float_3 = float_1 + float_2;
	double_1 = double_1 * double_1;
	double_2 = double_3;
	double_2 = double_4 * double_4;
	double_3 = double_1 * double_1;
	long_3 = long_1 * long_2;
	short_2 = short_2 * short_1;
	long_4 = long_4 * long_2;
}
void v_pfx_table_swap( int parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 + int_2;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1;
	float_3 = float_1 + float_2;
	double_3 = double_2 * double_2;
	double_2 = double_1 * double_4;
	int_4 = int_3 + int_2;
	double_1 = double_2 + double_5;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	int_4 = int_5 * int_5;
	short_1 = short_2;
}
unsigned int v_rtr_undo_update_spki_table( char parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	long_2 = long_1 * long_1;
	unsigned_int_1 = v_rtr_get_pdu_type();

	short_1 = short_1 * short_2;
	int_1 = v_spki_table_add_entry(char_1,short_2);

	double_1 = double_2;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		long long_3 = 1;
		int_2 = v_spki_table_remove_entry(unsigned_int_2,double_3);

		long_1 = long_3 * long_1;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 + int_3;
	}
	return unsigned_int_1;
	short_2 = v_rtr_key_pdu_2_spki_record(float_1,int_3,float_2,double_4);

}
short v_tommy_hashlin_remove( short parameter_1,unsigned int parameter_2,float parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_5 = 1;
	int int_4 = 1;
	short short_1 = 1;
	int int_5 = 1;
	int_1 = int_2;
	double_1 = double_1 + double_1;
	int_1 = int_2 * int_2;
	float_1 = v_tommy_list_remove_existing(float_2,int_1);

	float_3 = float_3 + float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_2 * int_3;
	double_2 = double_2;
	int_3 = int_2;
	long_2 = long_1 + long_1;
	double_4 = double_3 + double_3;
	double_4 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	float_4 = float_2 * float_4;
	char_1 = char_2;
	char_1 = v_tommy_hashlin_bucket_ptr(float_5,long_1);

	unsigned_int_2 = unsigned_int_1;
	int_4 = int_2;
	return short_1;
	long_2 = v_hashlin_shrink_step(int_5);

}
int v_spki_table_remove_entry( unsigned int parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	double double_2 = 1;
	float float_4 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int_2 = int_1 + int_2;
	double_1 = v_tommy_hashlin_search(char_1,long_1,int_3,int_1);

	int_2 = int_2 + int_3;
	short_3 = short_1 + short_2;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_lrtr_free();

	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	short_4 = v_tommy_hashlin_remove(short_1,unsigned_int_4,float_1,unsigned_int_1);

	float_3 = float_2 * float_1;
	if(1)
	{
		int_3 = int_3;
	}
	if(1)
	{
		char_1 = char_2;
		if(1)
		{
			short short_5 = 1;
			double_1 = v_spki_record_to_key_entry(char_2,double_2);

			float_2 = v_tommy_list_remove_existing(float_4,int_3);

			short_5 = short_2 + short_2;
			short_4 = short_3;
			long_2 = v_tommy_inthash_u32(int_1);

			unsigned_int_1 = v_spki_table_notify_clients(short_1,long_2,int_3);

			long_2 = long_2 + long_2;
		}
	}
	float_2 = float_3 + float_2;
	return int_4;
}
short v_rtr_key_pdu_2_spki_record( float parameter_1,int parameter_2,float parameter_3,double parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double_3 = double_1 + double_2;
	float_2 = float_1 * float_2;
	double_1 = double_3 + double_2;
	int_2 = int_1 + int_1;
	int_1 = int_3 + int_1;
	return short_1;
}
void v_rtr_update_spki_table( char parameter_1,short parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_3 = 1;
	int_2 = int_1 * int_1;
	short_1 = short_1 + short_1;
	int_2 = int_2;
	short_1 = v_rtr_key_pdu_2_spki_record(float_1,int_3,float_2,double_1);

	int_2 = v_spki_table_remove_entry(unsigned_int_1,double_2);

	float_2 = float_2 * float_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_2 = v_spki_table_add_entry(char_1,short_2);

	double_3 = double_3 + double_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		int_1 = int_2 * int_4;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
		int_3 = int_1 * int_4;
		v_rtr_change_socket_state(short_3,int_3);

		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	}
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		char char_2 = 1;
		short_2 = short_2 + short_1;
		unsigned_int_3 = v_rtr_get_pdu_type();

		int_6 = int_5 * int_3;
		char_1 = char_2 + char_2;
	}
	if(1)
	{
		long long_1 = 1;
		double double_4 = 1;
		v_rtr_send_error_pdu_from_host(int_3,double_2,short_1,float_2,short_4,char_3);

		long_1 = long_1;
		double_4 = double_2 + double_1;
		short_3 = short_3 + short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		short short_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned_int_6 = unsigned_int_4;
		short_3 = short_5 * short_4;
		long_3 = long_2 + long_3;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
	}
}
double v_rtr_undo_update_pfx_table( float parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short_2 = short_1 * short_2;
	long_1 = long_1 * long_1;
	v_rtr_prefix_pdu_2_pfx_record(int_1,char_1,unsigned_int_1,short_3);

	double_2 = double_1 * double_1;
	char_3 = char_1 + char_2;
	short_3 = short_4 + short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "=") == 0)
	{
		int_2 = v_pfx_table_add(long_1,short_2);

		int_2 = int_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return double_1;
	unsigned_int_2 = v_rtr_get_pdu_type();

	int_3 = v_pfx_table_remove(long_1,int_3);

}
int v_lrtr_ipv4_addr_to_str( int parameter_1,char parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	return int_2;
}
int v_lrtr_ipv6_addr_to_str( double parameter_1,char parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	if(1)
	{
	}
	short_1 = short_2;
	double_1 = double_2;
	short_1 = short_2 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long_3 = long_1 + long_2;
		long_1 = long_4;
		if(1)
		{
			long_3 = long_1 * long_2;
		}
		if(1)
		{
			double double_3 = 1;
			if(1)
			{
				char char_1 = 1;
				char_1 = char_1 + char_1;
			}
			double_1 = double_3 * double_1;
			if(1)
			{
				float float_2 = 1;
				float float_3 = 1;
				float_3 = float_1 * float_2;
				unsigned_int_1 = unsigned_int_2;
			}
		}
	}
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		float_1 = float_4 + float_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			long long_5 = 1;
			int int_2 = 1;
			int int_3 = 1;
			long_5 = long_2 * long_2;
			int_3 = int_1 + int_2;
			if(1)
			{
				int int_4 = 1;
				int_4 = int_3 * int_1;
			}
		}
		if(1)
		{
			float float_5 = 1;
			float float_6 = 1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2;
			}
			float_6 = float_5 * float_4;
		}
	}
	double_5 = double_1 * double_4;
	return int_5;
}
int v_lrtr_ip_addr_to_str( unsigned int parameter_1,char parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	return int_1;
	int_2 = v_lrtr_ipv6_addr_to_str(double_1,char_1,float_1);

	int_2 = v_lrtr_ipv4_addr_to_str(int_1,char_2,char_2);

}
int v_pfx_table_remove( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_3 = 1;
	long_1 = long_1 + long_1;
	float_1 = float_1 + float_1;
	v_trie_remove(float_2,short_1,long_1,float_1,-1 );

	float_2 = float_1 * float_2;
	double_2 = double_1 * double_1;
	v_pfx_table_notify_clients(char_1,unsigned_int_1,unsigned_int_2);

	double_3 = double_3 * double_4;
	if(1)
	{
		char_2 = v_trie_lookup_exact(unsigned_int_1,short_1,unsigned_int_3,int_1,float_1);

		short_2 = short_2 * short_2;
	}
	char_1 = char_1 * char_3;
	double_4 = double_4 + double_2;
	if(1)
	{
		short_3 = short_4;
	}
	unsigned_int_2 = v_pfx_table_find_elem(float_2,char_1,unsigned_int_2);

	v_lrtr_free();

	float_2 = float_1 * float_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2 * int_2;
		short_2 = v_pfx_table_get_root(float_4,double_2);

		int_3 = v_pfx_table_del_elem(long_1,double_4);

		int_3 = int_1;
		if(1)
		{
			if(1)
			{
				float float_5 = 1;
				float_5 = float_2 + float_4;
			}
			if(1)
			{
				short_4 = short_4 + short_1;
			}
		}
		double_4 = double_4 + double_4;
		unsigned_int_2 = unsigned_int_2;
		short_2 = short_3 * short_2;
	}
	double_3 = double_2 * double_1;
	float_3 = float_4 + float_2;
	return int_1;
}
void v_rtr_prefix_pdu_2_pfx_record( int parameter_1,char parameter_2,unsigned int parameter_3,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "7i") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		long_1 = long_1 + long_1;
		float_2 = float_1 * float_2;
		short_2 = short_1 + short_2;
		long_3 = long_1 * long_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		short short_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short_1 = short_2 * short_2;
		short_2 = short_2 + short_3;
		float_4 = float_3 * float_3;
		int_2 = int_3 + int_3;
		float_2 = float_1 + float_4;
		double_2 = double_1 + double_1;
		double_2 = double_1 + double_1;
	}
}
int v_rtr_update_pfx_table( int parameter_1,unsigned int parameter_2,float parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	int int_5 = 1;
	double double_4 = 1;
	char char_3 = 1;
	int_1 = v_pfx_table_add(long_1,short_1);

	float_2 = float_1 + float_1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	v_rtr_send_error_pdu_from_host(int_1,double_3,short_2,float_2,short_2,char_1);

	int_3 = int_1 + int_2;
	v_rtr_prefix_pdu_2_pfx_record(int_2,char_2,unsigned_int_1,short_2);

	float_3 = float_1 + float_2;
	v_rtr_change_socket_state(short_3,int_4);

	short_2 = short_1 * short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "8V") < 0)
	{
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		short short_4 = 1;
		int_1 = v_pfx_table_remove(long_2,int_5);

		short_4 = short_2;
	}
	if(1)
	{
		char char_4 = 1;
		double_1 = double_4 * double_2;
		long_2 = long_2 + long_1;
		char_4 = char_2 + char_3;
	}
	if(1)
	{
		unsigned_int_2 = v_rtr_get_pdu_type();

		unsigned_int_4 = unsigned_int_3;
		double_1 = double_2 * double_1;
		double_1 = double_4;
		int_3 = v_lrtr_ip_addr_to_str(unsigned_int_4,char_3,long_2);

		long_2 = long_1 + long_2;
		double_4 = double_1 * double_3;
	}
	if(1)
	{
		float float_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float_2 = float_4 + float_2;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
		int_3 = int_3;
	}
	if(1)
	{
		int int_6 = 1;
		int int_7 = 1;
		int_1 = int_4 * int_1;
		int_2 = int_2 * int_6;
		float_2 = float_2 + float_3;
		int_7 = int_7;
	}
	return int_4;
}
unsigned int v_spki_table_notify_clients( short parameter_1,long parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "$") < 0)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	return unsigned_int_1;
}
double v_hashlin_grow_step( char parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char_1 = v_tommy_list_insert_tail_not_empty(double_1,double_1);

	int_2 = int_1 + int_2;
	return double_2;
	float_1 = v_tommy_hashlin_pos(char_1,short_1);

	v_tommy_list_insert_first(short_2,long_1);

}
void v_tommy_list_insert_first( short parameter_1,long parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_1;
	short_2 = short_1 * short_2;
	int_2 = int_1 * int_1;
}
char v_tommy_list_insert_tail_not_empty( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short_1 = short_1 * short_2;
	int_1 = int_1 * int_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2;
	return char_1;
}
long v_tommy_list_insert_tail( short parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
		char_1 = v_tommy_list_insert_tail_not_empty(double_1,double_2);

		int_2 = int_2 + int_1;
	}
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	double_1 = v_tommy_list_head(int_2);

	short_1 = short_1 * short_1;
	return long_1;
	v_tommy_list_insert_first(short_2,long_1);

}
void v_tommy_hashlin_insert( int parameter_1,char parameter_2,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double_1 = double_1 * double_2;
	double_1 = double_1 * double_1;
	long_1 = v_tommy_list_insert_tail(short_1,unsigned_int_1);

	char_1 = char_1 + char_1;
	char_2 = v_tommy_hashlin_bucket_ptr(float_1,long_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = v_hashlin_grow_step(char_3);

}
long v_tommy_hashlin_bucket( int parameter_1,float parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	return long_1;
	char_1 = v_tommy_hashlin_bucket_ptr(float_1,long_2);

}
double v_tommy_hashlin_search( char parameter_1,long parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int int_1 = 1;
				int_3 = int_1 * int_2;
			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				char_3 = char_1 + char_2;
			}
		}
	}
	if(1)
	{
		double double_1 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		double_1 = double_1 + double_1;
		int_2 = int_3 * int_3;
		long_1 = v_tommy_hashlin_bucket(int_2,float_1);

		int_3 = int_4 * int_5;
	}
	return double_2;
}
long v_tommy_inthash_u32( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_2;
	float_3 = float_1 + float_2;
	float_1 = float_2 * float_4;
	float_2 = float_1 * float_2;
	short_1 = short_2;
	int_1 = int_1 * int_1;
	int_1 = int_2;
	return long_1;
}
double v_spki_record_to_key_entry( char parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char_1 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	return double_1;
}
int v_spki_table_add_entry( char parameter_1,short parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	double_1 = v_spki_record_to_key_entry(char_1,double_1);

	v_lrtr_free();

	double_1 = double_1 + double_2;
	long_1 = v_lrtr_malloc();

	long_1 = v_tommy_list_insert_tail(short_1,unsigned_int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	long_1 = v_tommy_inthash_u32(int_1);

	unsigned_int_2 = v_spki_table_notify_clients(short_1,long_1,int_1);

	double_2 = double_3 + double_2;
	double_4 = double_2 + double_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		int_1 = int_1 * int_1;
		long_3 = long_2 * long_3;
	}
	v_tommy_hashlin_insert(int_1,char_1,float_1);

	unsigned_int_3 = unsigned_int_4;
	float_1 = float_2;
	double_2 = v_tommy_hashlin_search(char_1,long_1,int_2,int_2);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
	double_5 = double_1 * double_1;
	return int_2;
}
double v_key_entry_to_spki_record( short parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int_3 = int_1 + int_2;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_6 = int_4 + int_5;
	return double_1;
}
int v_spki_table_copy_except_socket( unsigned int parameter_1,int parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	return int_1;
	double_1 = v_tommy_list_head(int_2);

	double_1 = v_key_entry_to_spki_record(short_1,unsigned_int_1);

	int_1 = v_spki_table_add_entry(char_1,short_2);

}
void v_pfx_table_for_each_ipv6_record( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "i") > 0)
	{
	}
	char_1 = v_pfx_table_for_each_rec(char_2,char_3);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_4 = char_2 + char_2;
	char_4 = char_2 + char_4;
}
float v_add_child_node( int parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
		float float_1 = 1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	int_3 = int_1 + int_2;
	return float_2;
}
short v_swap_nodes( double parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 + short_2;
	char_2 = char_1 * char_2;
	int_2 = int_1 * int_2;
	int_2 = int_1 + int_1;
	float_1 = float_1 * float_1;
	float_3 = float_2 + float_3;
	short_2 = short_2;
	int_1 = int_1;
	return short_3;
}
void v_trie_insert( float parameter_1,int parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	if(1)
	{
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
	}
	short_1 = v_swap_nodes(double_1,unsigned_int_1);

	v_is_left_child(short_1,int_1);

	float_1 = v_add_child_node(int_1,char_2,int_2);

	double_2 = double_1 * double_2;
	v_trie_insert(float_2,int_3,char_1);

}
int v_pfx_table_create_node( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	double double_7 = 1;
	int_2 = int_1 + int_1;
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	v_lrtr_free();

	char_2 = char_1 * char_1;
	double_3 = double_1 + double_2;
	long_1 = v_lrtr_malloc();

	int_3 = v_pfx_table_append_elem(double_3,float_1);

	char_3 = char_2 * char_3;
	char_2 = char_2 + char_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
		double double_6 = 1;
		double_3 = double_4 * double_2;
		double_5 = double_6;
	}
	unsigned_int_1 = unsigned_int_1;
	double_5 = double_1 * double_5;
	long_1 = long_2;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_2 * float_1;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	double_4 = double_7;
	return int_1;
}
int v_pfx_table_append_elem( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "mO") > 0)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_1;
	float_1 = v_lrtr_realloc(char_1);

	char_2 = char_2 * char_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	double_4 = double_3 + double_1;
	return int_1;
}
unsigned int v_pfx_table_find_elem( float parameter_1,char parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				long_3 = long_1 + long_2;
			}
		}
	}
	return unsigned_int_1;
}
char v_trie_lookup_exact( unsigned int parameter_1,short parameter_2,unsigned int parameter_3,int parameter_4,float parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_2 = 1;
		long long_3 = 1;
		double double_1 = 1;
		v_is_left_child(short_1,int_1);

		long_1 = long_1 + long_2;
		short_1 = v_lrtr_ip_addr_equal(unsigned_int_1,short_1);

		short_2 = short_2 * short_1;
		long_1 = long_3 * long_2;
		double_1 = double_1;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int_1 = int_1 * int_1;
		int_1 = int_1;
		int_3 = int_2 * int_2;
		int_4 = int_3 + int_3;
	}
	return char_1;
}
short v_pfx_table_get_root( float parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float_1 = float_2;
	return short_1;
}
int v_pfx_table_add( long parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	int int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int_3 = int_1 + int_2;
	long_1 = long_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		char char_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short_1 = v_pfx_table_get_root(float_1,double_3);

		char_1 = char_1;
		double_2 = double_1 * double_4;
		if(1)
		{
			if(1)
			{
				double_4 = double_2 * double_1;
			}
			int_2 = int_2;
			unsigned_int_1 = unsigned_int_2;
			if(1)
			{
				double_5 = double_2 * double_5;
			}
		}
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			char_2 = v_trie_lookup_exact(unsigned_int_3,short_2,unsigned_int_1,int_2,float_2);

			unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
			}
			int_2 = v_pfx_table_create_node(double_6,unsigned_int_4);

			long_3 = long_1 + long_2;
			float_1 = float_2 * float_2;
			v_trie_insert(float_2,int_4,char_2);

			double_5 = double_4 * double_5;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_3 = 1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
		if(1)
		{
			float_4 = float_2 * float_3;
		}
		if(1)
		{
			int_1 = int_1;
		}
		if(1)
		{
			long long_4 = 1;
			long long_5 = 1;
			long_4 = long_5;
		}
		unsigned_int_5 = unsigned_int_6 + unsigned_int_2;
		unsigned_int_3 = v_pfx_table_find_elem(float_3,char_3,unsigned_int_3);

		int_1 = v_pfx_table_append_elem(double_1,float_4);

		v_pfx_table_notify_clients(char_4,unsigned_int_2,unsigned_int_2);

		short_2 = short_3 + short_2;
	}
	return int_1;
}
unsigned int v_pfx_table_copy_cb( double parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "J") < 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_1 + char_2;
		}
	}
	return unsigned_int_1;
	int_1 = v_pfx_table_add(long_1,short_1);

}
char v_pfx_table_for_each_rec( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1;
	char_2 = char_1 * char_1;
	double_1 = double_1 + double_1;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char_2 = char_2 * char_1;
		int_1 = int_2;
		int_4 = int_3 + int_3;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		short_2 = short_2 + short_1;
		int_2 = int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	return char_2;
}
void v_pfx_table_for_each_ipv4_record( int parameter_1,long parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	char_1 = v_pfx_table_for_each_rec(char_1,char_1);

	short_1 = short_1 * short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
	}
	char_2 = char_1 * char_1;
	short_1 = short_1 + short_1;
	float_1 = float_1 * float_1;
}
int v_pfx_table_copy_except_socket( float parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned_int_1 = v_pfx_table_copy_cb(double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
	}
	v_pfx_table_for_each_ipv4_record(int_1,long_1);

	v_pfx_table_for_each_ipv6_record(float_1,int_1);

	float_4 = float_2 * float_3;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "0") > 0)
	{
	}
	return int_1;
}
void v_interval_send_error_pdu( float parameter_1,short parameter_3,char parameter_4,double parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	char char_4 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_1 + char_2;
	v_rtr_send_error_pdu(long_1,char_1,char_4,double_1,short_1,float_1);

}
void v_apply_interval_value( unsigned int parameter_1,int parameter_2,long parameter_3)
{
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
}
int v_rtr_check_interval_option( short parameter_1,int parameter_2,char parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_9 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_3 * int_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	int_5 = int_2 + int_4;
	short_1 = short_2;
	double_2 = double_1 * double_1;
	double_2 = double_1 * double_2;
	int_6 = int_2 * int_6;
	int_1 = int_7 * int_8;
	char_2 = char_1 + char_2;
	v_apply_interval_value(unsigned_int_1,int_3,long_1);

	double_3 = double_1 + double_1;
	int_5 = v_rtr_check_interval_range(unsigned_int_2,unsigned_int_3,short_1);

	short_5 = short_3 * short_4;
	unsigned_int_3 = unsigned_int_3;
	int_3 = int_9 + int_2;
	int_5 = int_1;
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			char char_3 = 1;
			char_3 = char_1 + char_1;
		}
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_2 + long_1;
	}
	return int_9;
}
short v_rtr_store_router_key_pdu( long parameter_1,double parameter_2,float parameter_3,double parameter_4,double parameter_5,double parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	char char_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short short_4 = 1;
		v_rtr_send_error_pdu_from_host(int_1,double_1,short_1,float_1,short_1,char_1);

		double_1 = double_1 + double_1;
		v_rtr_change_socket_state(short_2,int_1);

		long_2 = long_1 + long_2;
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_1 = double_2;
			int_1 = int_1;
			unsigned_int_3 = v_rtr_get_pdu_type();

			float_2 = float_2 * float_1;
			double_2 = double_1 * double_3;
		}
		short_3 = short_4;
	}
	long_1 = long_3 * long_2;
	char_1 = char_1 * char_1;
	return short_3;
	float_2 = v_lrtr_realloc(char_2);

}
long v_rtr_store_prefix_pdu( short parameter_1,unsigned int parameter_2,int parameter_3,long parameter_5,char parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	double_3 = double_1 + double_2;
	v_rtr_send_error_pdu_from_host(int_1,double_2,short_1,float_1,short_2,char_1);

	int_1 = int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		float float_3 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_2 = v_lrtr_realloc(char_1);

		v_rtr_change_socket_state(short_1,int_1);

		float_3 = float_3;
		if(1)
		{
			char char_2 = 1;
			double double_5 = 1;
			double_2 = double_2 * double_4;
			unsigned_int_3 = v_rtr_get_pdu_type();

			char_1 = char_2 * char_1;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
			double_5 = double_5 + double_1;
		}
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		char char_3 = 1;
		double_4 = double_2 * double_3;
		char_3 = char_1 + char_3;
	}
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		char_4 = char_5;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	}
	int_4 = int_3 * int_2;
	return long_1;
}
int v_rtr_sync_receive_and_store_pdus( long parameter_1,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char controller4vul_1456[2];
	fgets(controller4vul_1456 ,2 ,stdin);
	if( strcmp( controller4vul_1456, "a") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = v_pfx_table_src_remove(char_1,unsigned_int_1,uni_para);

		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
		double_2 = double_1;
	}
	return int_2;
}
void v_rtr_send_error_pdu_from_host( int parameter_1,double parameter_2,short parameter_3,float parameter_4,short parameter_5,char parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_rtr_pdu_header_to_network_byte_order();

	double_1 = v_rtr_pdu_to_network_byte_order();

	double_1 = double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	if(1)
	{
	}
	v_rtr_send_error_pdu(long_1,char_1,char_1,double_1,short_1,float_1);

}
float v_rtr_handle_cache_response_pdu( unsigned int parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	v_rtr_send_error_pdu_from_host(int_1,double_1,short_1,float_1,short_1,char_1);

	short_3 = short_2 * short_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
			double_2 = double_1;
			short_2 = short_1;
			int_1 = int_2;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "T:") > 0)
		{
			double double_3 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double_3 = double_2 + double_1;
			char_2 = char_2 * char_3;
			int_2 = int_1 * int_1;
		}
	}
	return float_2;
	v_rtr_change_socket_state(short_2,int_3);

}
short v_rtr_handle_error_pdu( short parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_6 = 1;
	float float_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 * double_2;
	char_2 = char_1 * char_1;
	char_3 = char_2 + char_2;
	double_2 = double_2 + double_1;
	int_1 = int_1 * int_2;
	int_1 = int_2 * int_1;
	v_rtr_change_socket_state(short_1,int_2);

	short_1 = short_1 * short_2;
	long_1 = long_1;
	double_3 = double_1;
	char_4 = char_5;
	float_2 = float_1 + float_1;
	int_1 = int_1 + int_2;
	int_3 = int_2 + int_3;
	double_4 = double_2 + double_2;
	double_3 = double_3 + double_3;
	if(1)
	{
		char char_6 = 1;
		char char_7 = 1;
		char_2 = char_6 * char_6;
		int_5 = int_4 * int_2;
		char_7 = char_6 * char_5;
	}
	if(1)
	{
		char_3 = char_2;
		int_1 = int_4;
	}
	long_3 = long_1 + long_2;
	int_6 = int_5 * int_4;
	float_3 = float_2;
	double_5 = double_2 + double_4;
	float_1 = float_2 * float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		if(1)
		{
			int int_7 = 1;
			int_6 = int_7 + int_6;
		}
		if(1)
		{
			float float_4 = 1;
			float_1 = float_1 * float_3;
			float_3 = float_2 * float_2;
			float_4 = float_4;
			double_4 = double_3 + double_1;
		}
	}
	return short_1;
}
void v_rtr_send_error_pdu( long parameter_1,char parameter_2,char parameter_3,double parameter_4,short parameter_5,float parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_1;
	double_2 = double_2 * double_2;
	float_2 = float_1 + float_1;
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
	}
	double_5 = double_3 * double_4;
	double_2 = double_5 + double_3;
	unsigned_int_3 = v_rtr_get_pdu_type();

	v_rtr_send_pdu(unsigned_int_2,unsigned_int_4,unsigned_int_4);

	float_3 = float_3 + float_4;
	int_2 = int_1 * int_2;
	int_3 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	if(1)
	{
		double double_6 = 1;
		double_6 = double_5 + double_1;
	}
	int_3 = int_1 * int_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
}
int v_rtr_send_error_pdu_from_network( double parameter_1,char parameter_2,char parameter_3,double parameter_4,unsigned int parameter_5,unsigned int parameter_6)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	return int_1;
	v_rtr_send_error_pdu(long_1,char_1,char_2,double_1,short_1,float_1);

}
char v_rtr_pdu_footer_to_host_byte_order()
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long_1 = long_1 + long_2;
	return char_1;
	short_1 = v_rtr_pdu_convert_footer_byte_order(int_1);

}
double v_rtr_pdu_check_size( int parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_4 = 1;
	long long_4 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	double_2 = double_1 + double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3;
	}
	double_1 = double_1;
	if(1)
	{
		double_4 = double_1 + double_3;
	}
	double_2 = double_1 * double_2;
	if(1)
	{
		long_1 = long_3 * long_1;
	}
	int_2 = int_1 + int_1;
	if(1)
	{
		char_2 = char_1 * char_1;
	}
	char_2 = char_1 + char_3;
	char controller_6[3];
	fgets(controller_6 ,3 ,stdin);
	if( strcmp( controller_6, "/v") > 0)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	}
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_3 = float_1 * float_2;
	}
	double_1 = double_4 + double_4;
	short_1 = short_1;
	double_3 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		char_3 = char_1 + char_3;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	}
	int_1 = int_3 + int_2;
	double_2 = double_4;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2 * short_1;
		double_3 = double_4 + double_2;
	}
	int_2 = int_1 * int_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	int_1 = int_4 * int_1;
	if(1)
	{
		double_5 = double_2 * double_1;
		float_3 = float_3 + float_3;
	}
	if(1)
	{
		int int_5 = 1;
		unsigned_int_7 = unsigned_int_3;
		int_2 = int_5 * int_3;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	double_1 = double_5 + double_4;
	if(1)
	{
		int_2 = int_1 * int_3;
	}
	int_1 = int_4;
	if(1)
	{
		unsigned_int_7 = v_rtr_get_pdu_type();

		unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
	double_5 = double_2 + double_4;
	char_1 = char_4 + char_2;
	long_3 = long_3 + long_4;
	if(1)
	{
		double double_6 = 1;
		double_6 = double_5 * double_5;
	}
	return double_2;
}
char v_rtr_pdu_header_to_host_byte_order()
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_2;
	return char_1;
	int_1 = v_rtr_pdu_convert_header_byte_order(int_1);

}
int v_tr_recv( float parameter_1,short parameter_3,char parameter_4)
{
	int int_1 = 1;
	return int_1;
}
int v_tr_recv_all( double parameter_1,float parameter_2,unsigned int parameter_3,long parameter_4)
{
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v_tr_recv(float_1,short_1,char_1);

	float_1 = float_1 * float_2;
	short_4 = short_2 * short_3;
	int_2 = v_lrtr_get_monotonic_time(float_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_2;
}
unsigned int v_rtr_receive_pdu( int parameter_1,long parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_7 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	long long_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_8 = 1;
	double double_5 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int_2 = int_1 * int_2;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int_1 = int_3 + int_2;
	}
	if(1)
	{
		int_5 = int_3 * int_4;
	}
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1 * char_1;
	double_3 = double_1 * double_2;
	if(1)
	{
		int_2 = int_4 * int_5;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double_3 = double_3 + double_1;
		int_6 = v_rtr_send_error_pdu_from_network(double_3,char_2,char_3,double_2,unsigned_int_1,unsigned_int_2);

		int_5 = int_7 + int_1;
	}
	if(1)
	{
		if(1)
		{
			int_2 = v_tr_recv_all(double_1,float_1,unsigned_int_3,long_1);

			short_3 = short_1 + short_2;
			short_1 = short_1 + short_1;
		}
		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	}
	if(1)
	{
		long_4 = long_2 * long_3;
		double_4 = double_1;
	}
	long_5 = long_4;
	if(1)
	{
		if(1)
		{
		}
		char_4 = v_rtr_pdu_footer_to_host_byte_order();

		long_2 = long_4 * long_1;
		if(1)
		{
			unsigned_int_5 = unsigned_int_5 * unsigned_int_4;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_1;
		}
	}
	char_5 = char_3 * char_3;
	if(1)
	{
		long long_6 = 1;
		long_5 = long_3 * long_3;
		long_6 = long_4 * long_2;
	}
	float_3 = float_2 + float_2;
	if(1)
	{
		if(1)
		{
			long long_7 = 1;
			long long_8 = 1;
			long_2 = long_7 + long_8;
		}
	}
	if(1)
	{
		double_4 = double_2 * double_3;
	}
	if(1)
	{
		int_8 = int_4 * int_8;
	}
	if(1)
	{
		double_1 = v_rtr_pdu_check_size(int_8);

		int_2 = int_1 * int_7;
	}
	if(1)
	{
		double_1 = double_5 + double_5;
	}
	char controller_20[2];
	fgets(controller_20 ,2 ,stdin);
	if( strcmp( controller_20, "X") < 0)
	{
		int int_9 = 1;
		int_3 = int_9 * int_6;
		int_4 = int_5 + int_6;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_6;
	}
	if(1)
	{
		int int_10 = 1;
		short_1 = short_3 + short_2;
		v_rtr_change_socket_state(short_4,int_1);

		int_10 = int_10 + int_2;
		short_4 = short_3;
		char_5 = v_rtr_pdu_header_to_host_byte_order();

		double_4 = double_1 * double_5;
		char_2 = char_4;
	}
	if(1)
	{
		int int_11 = 1;
		short short_5 = 1;
		int_11 = int_4 + int_2;
		short_4 = short_3 + short_5;
	}
	if(1)
	{
		double double_6 = 1;
		double_3 = double_6 * double_4;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	}
	if(1)
	{
		long long_9 = 1;
		long long_10 = 1;
		float_2 = float_3;
		long_10 = long_2 + long_9;
	}
	char_5 = char_4 * char_1;
	return unsigned_int_7;
}
int v_rtr_sync( int parameter_1,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_6 = 1;
	long long_1 = 1;
	short_2 = short_1 + short_1;
	int_1 = int_1;
	int_1 = int_1 + int_2;
	short_3 = short_1 * short_3;
	char_1 = char_1 * char_1;
	int_4 = int_1 * int_3;
	int_2 = int_4 * int_5;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	int_1 = int_3 * int_3;
	float_1 = float_1 + float_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	char controller4vul_1454[3];
	fgets(controller4vul_1454 ,3 ,stdin);
	if( strcmp( controller4vul_1454, " c") < 0)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		char controller4vul_1455[3];
		fgets(controller4vul_1455 ,3 ,stdin);
		if( strcmp( controller4vul_1455, "Lm") < 0)
		{
			int_6 = v_rtr_sync_receive_and_store_pdus(long_1,uni_para);

			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
			}
		}
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				if(1)
				{
					int int_7 = 1;
					double double_1 = 1;
					double double_2 = 1;
					int_6 = int_5 + int_7;
					if(1)
					{
						double_2 = double_1 + double_2;
					}
					if(1)
					{
						float float_3 = 1;
						float_3 = float_3 * float_3;
					}
					if(1)
					{
						char char_2 = 1;
						if(1)
						{
							int_5 = int_7 + int_6;
						}
						char_1 = char_1 + char_2;
						double_2 = double_1;
					}
				}
			}
		}
	}
	return int_5;
}
int v_rtr_send_reset_query( int parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	v_rtr_change_socket_state(short_1,int_1);

	double_1 = double_1 * double_1;
	char_2 = char_1 * char_2;
	v_rtr_send_pdu(unsigned_int_1,unsigned_int_1,unsigned_int_1);

	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_2 + short_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 + long_2;
	}
	return int_1;
}
int v_tr_send( long parameter_1,short parameter_2,float parameter_3,long parameter_4)
{
	int int_1 = 1;
	return int_1;
}
int v_tr_send_all( char parameter_1,short parameter_2,unsigned int parameter_3,long parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = v_lrtr_get_monotonic_time(float_1);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	return int_3;
	int_1 = v_tr_send(long_1,short_1,float_2,long_1);

}
int v_lrtr_convert_short( unsigned int parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "E+") > 0)
	{
	}
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	return int_1;
}
int v_rtr_pdu_convert_header_byte_order(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int int_2 = 1;
		double_1 = v_lrtr_convert_long(double_2,double_2);

		int_2 = int_1 + int_1;
	}
	int_1 = v_lrtr_convert_short(unsigned_int_2,short_1);

	long_1 = long_1 + long_1;
	return int_1;
}
void v_rtr_pdu_header_to_network_byte_order()
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_2 = char_1 * char_2;
	int_1 = v_rtr_pdu_convert_header_byte_order(int_2);

}
void v_lrtr_ipv6_addr_convert_byte_order( int parameter_1,long parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		double_1 = v_lrtr_convert_long(double_1,double_2);

		float_1 = float_1 * float_2;
	}
}
void v_lrtr_ipv4_addr_convert_byte_order( unsigned int parameter_1,long parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_1 = v_lrtr_convert_long(double_2,double_1);

	int_1 = int_1;
}
double v_lrtr_convert_long( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return double_1;
}
unsigned int v_rtr_get_pdu_type()
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
short v_rtr_pdu_convert_footer_byte_order(int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_5 = 1;
	float float_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_5 = 1;
	double_1 = double_2;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_2 = v_rtr_get_pdu_type();

	float_3 = float_1 + float_2;
	double_1 = v_lrtr_convert_long(double_1,double_3);

	long_4 = long_1 + long_2;
	if(1)
	{
		short_2 = short_1 * short_1;
		long_5 = long_2;
	}
	if(1)
	{
		double double_4 = 1;
		double double_7 = 1;
		double_6 = double_4 * double_5;
		v_lrtr_ipv4_addr_convert_byte_order(unsigned_int_4,long_5,float_2);

		double_6 = double_1 + double_7;
	}
	double_1 = double_6 + double_5;
	float_3 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
	if(1)
	{
		float float_4 = 1;
		int_2 = int_1 + int_2;
		float_5 = float_3 + float_4;
		int_1 = int_1 * int_1;
		float_5 = float_2 * float_6;
	}
	if(1)
	{
		short_2 = short_2 + short_3;
	}
	short_1 = short_3 * short_2;
	float_6 = float_5 + float_1;
	short_4 = short_4 + short_1;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_2;
	v_lrtr_ipv6_addr_convert_byte_order(int_3,long_4,char_1);

	unsigned_int_7 = unsigned_int_7 * unsigned_int_5;
	long_3 = long_4 + long_3;
	int_3 = int_1 * int_4;
	int_2 = int_1 * int_4;
	int_1 = int_1 + int_4;
	unsigned_int_8 = unsigned_int_6 * unsigned_int_5;
	int_1 = int_5 + int_1;
	return short_2;
}
short v_rtr_pdu_footer_to_network_byte_order()
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short_1 = v_rtr_pdu_convert_footer_byte_order(int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return short_2;
}
double v_rtr_pdu_to_network_byte_order()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_1;
	double_2 = double_1 * double_1;
	return double_3;
	short_1 = v_rtr_pdu_footer_to_network_byte_order();

	v_rtr_pdu_header_to_network_byte_order();

}
void v_rtr_send_pdu( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double_1 = v_rtr_pdu_to_network_byte_order();

	int_1 = v_tr_send_all(char_1,short_1,unsigned_int_1,long_1);

	float_1 = float_1 * float_1;
	long_2 = long_2 * long_1;
	short_3 = short_2 + short_1;
	if(1)
	{
	}
	char_1 = char_2 * char_1;
	if(1)
	{
	}
	if(1)
	{
		short short_4 = 1;
		short_2 = short_4;
	}
	double_1 = double_2 + double_1;
}
int v_rtr_send_serial_query( unsigned int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_1 + double_1;
	short_2 = short_1 + short_2;
	v_rtr_send_pdu(unsigned_int_1,unsigned_int_2,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	v_rtr_change_socket_state(short_2,int_1);

	long_1 = long_1 + long_2;
	int_2 = int_1 + int_1;
	long_1 = long_2 * long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "ER") > 0)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	return int_3;
}
int v_tr_open( long parameter_1)
{
	int int_1 = 1;
	return int_1;
}
double v_tommy_list_tail( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = v_tommy_list_head(int_1);

	int_1 = int_1 + int_1;
	if(1)
	{
	}
	return double_1;
}
float v_tommy_list_empty( char parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	return float_1;
	double_1 = v_tommy_list_head(int_1);

}
void v_tommy_list_concat( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	int int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	float_1 = v_tommy_list_empty(char_1);

	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 + int_1;
	short_1 = short_1;
	if(1)
	{
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = v_tommy_list_tail(long_1);

		double_2 = double_1 * double_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	double_4 = double_3 * double_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	short_2 = short_1 + short_2;
	double_3 = v_tommy_list_head(int_2);

	short_1 = short_3 + short_1;
	int_2 = int_3;
}
long v_hashlin_shrink_step( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	long long_2 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "2") > 0)
	{
		if(1)
		{
		}
		int_1 = int_1 + int_1;
		int_1 = int_1;
		v_tommy_list_concat(long_1,int_1);

		int_1 = int_2;
		if(1)
		{
			double double_3 = 1;
			double_2 = double_3 + double_3;
		}
		if(1)
		{
			float float_2 = 1;
			float_1 = v_tommy_hashlin_pos(char_1,short_1);

			float_1 = float_2;
		}
	}
	int_1 = int_2 + int_1;
	if(1)
	{
	}
	float_3 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2 * double_4;
	int_3 = int_2 + int_2;
	return long_2;
}
float v_tommy_ilog2_u32( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double_3 = double_1 * double_2;
	return float_1;
}
float v_tommy_hashlin_pos( char parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short_2 = short_1 * short_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "#R") < 0)
	{
	}
	int_1 = int_1 + int_1;
	float_1 = v_tommy_ilog2_u32(int_1);

	int_3 = int_2 + int_3;
	return float_2;
}
char v_tommy_hashlin_bucket_ptr( float parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
		char char_2 = 1;
		float_1 = v_tommy_hashlin_pos(char_1,short_3);

		char_2 = char_1 * char_1;
		if(1)
		{
		}
	}
	int_2 = int_1 * int_1;
	return char_1;
}
short v_tommy_hashlin_remove_existing( unsigned int parameter_1,int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_3 = 1;
	long_1 = v_hashlin_shrink_step(int_1);

	double_1 = double_1 * double_2;
	float_1 = v_tommy_list_remove_existing(float_2,int_1);

	int_4 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return short_1;
	char_1 = v_tommy_hashlin_bucket_ptr(float_3,long_1);

}
float v_tommy_list_remove_existing( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double_1 = double_1;
	if(1)
	{
		double double_2 = 1;
		double_3 = double_2 * double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double_4 = v_tommy_list_head(int_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		double double_5 = 1;
		double_3 = double_5 * double_5;
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	return float_1;
}
int v_spki_table_src_remove( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = v_tommy_list_head(int_1);

	v_lrtr_free();

	long_1 = long_1 + long_2;
	double_1 = double_1 + double_1;
	double_2 = double_2 * double_3;
	int_1 = int_1 + int_2;
	return int_3;
	float_1 = v_tommy_list_remove_existing(float_1,int_3);

	short_1 = v_tommy_hashlin_remove_existing(unsigned_int_1,int_1);

}
long v_lrtr_ipv4_get_bits( int parameter_1,unsigned int parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	short_1 = v_lrtr_get_bits(short_2,int_1,char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	return long_1;
}
short v_lrtr_get_bits( short parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_1 + int_1;
	int_2 = int_2 * int_3;
	short_3 = short_1 + short_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 + long_2;
	}
	char_1 = char_1 * char_2;
	return short_2;
}
int v_lrtr_ipv6_get_bits( double parameter_1,long parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float_2 = float_1 * float_2;
	long_1 = long_2;
	double_3 = double_1 * double_2;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_1 = v_lrtr_get_bits(short_1,int_1,char_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		float_1 = float_1 + float_1;
		float_3 = float_1 + float_3;
		double_2 = double_2 * double_1;
		char_1 = char_2 * char_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		int_2 = int_1 * int_1;
		int_2 = int_1 * int_1;
		char_2 = char_1 * char_1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
		char_2 = char_3 * char_2;
	}
	if(1)
	{
		char char_6 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char_4 = char_2 + char_2;
		int_2 = int_2 * int_2;
		char_6 = char_4 + char_5;
		double_1 = double_4 * double_2;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		long long_3 = 1;
		float_3 = float_3 * float_2;
		long_1 = long_2 + long_2;
		long_3 = long_2 * long_1;
		char_4 = char_5 + char_2;
	}
	return int_1;
}
long v_lrtr_ip_addr_get_bits( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	char char_4 = 1;
	int_1 = v_lrtr_ipv6_get_bits(double_1,long_1,char_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		char_3 = char_1 + char_2;
		float_1 = float_1;
	}
	if(1)
	{
		float float_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float_2 = float_2;
		double_2 = double_3;
	}
	return long_2;
	long_1 = v_lrtr_ipv4_get_bits(int_1,unsigned_int_1,char_4);

}
double v_lrtr_ip_addr_is_zero( double parameter_1)
{
	double double_1 = 1;
	if(1)
	{
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "v ") > 0)
		{
		}
	}
	if(1)
	{
	}
	return double_1;
}
void v_is_left_child( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double_1 = v_lrtr_ip_addr_is_zero(double_2);

	long_1 = v_lrtr_ip_addr_get_bits(float_1,unsigned_int_1,int_1);

}
short v_replace_node_data( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_2;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return short_1;
}
char v_deref_node( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "i") == 0)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return char_1;
}
double v_trie_is_leaf()
{
	double double_1 = 1;
	return double_1;
}
char v_lrtr_ipv4_addr_equal( float parameter_1,double parameter_2)
{
	char char_1 = 1;
	if(1)
	{
	}
	return char_1;
}
long v_lrtr_ipv6_addr_equal( char parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	if(1)
	{
	}
	return long_1;
}
short v_lrtr_ip_addr_equal( unsigned int parameter_1,short parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
	long_1 = v_lrtr_ipv6_addr_equal(char_1,unsigned_int_1);

	char_1 = v_lrtr_ipv4_addr_equal(float_1,double_1);

}
int v_prefix_is_same( float parameter_1,float parameter_2,double parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	return int_1;
	short_1 = v_lrtr_ip_addr_equal(unsigned_int_1,short_2);

}
void v_trie_remove( float parameter_1,short parameter_2,long parameter_3,float parameter_4,int uni_para)
{
	char * vul_var;
	char controller4vul_1460[3];
	fgets(controller4vul_1460 ,3 ,stdin);
	if( strcmp( controller4vul_1460, "$O") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char_2 = char_1 + char_1;
		char controller4vul_1461[2];
		fgets(controller4vul_1461 ,2 ,stdin);
		if( strcmp( controller4vul_1461, "s") > 0)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			vul_var=(char*)malloc(20*sizeof(char));
			strcpy(vul_var, "CWE-761");
			if(uni_para == 447)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			short_3 = short_1 + short_2;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int_1 = int_2;
			double_3 = double_1 + double_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		double_4 = double_2 + double_1;
		double_2 = double_1 + double_4;
		double_4 = double_1 * double_5;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
	}
}
void v_pfx_table_notify_clients( char parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
}
float v_lrtr_realloc(char parameter_2)
{
	float float_1 = 1;
	return float_1;
}
int v_pfx_table_del_elem( long parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_1 * int_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float_1 = v_lrtr_realloc(char_1);

			double_2 = double_1 + double_1;
		}
	}
	double_1 = double_3;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		double double_4 = 1;
		float_4 = float_2 * float_3;
		v_lrtr_free();

		double_3 = double_2 + double_4;
	}
	long_2 = long_1 + long_1;
	if(1)
	{
		char char_2 = 1;
		long long_3 = 1;
		char_1 = char_2;
		long_2 = long_1 + long_3;
	}
	float_4 = float_4 + float_5;
	return int_3;
}
int v_pfx_table_remove_id( unsigned int parameter_1,double parameter_2,unsigned int parameter_3,unsigned int parameter_4,double parameter_5,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	char controller4vul_1459[2];
	fgets(controller4vul_1459 ,2 ,stdin);
	if( strcmp( controller4vul_1459, ")") > 0)
	{
		v_trie_remove(float_1,short_1,long_1,float_1,uni_para);

	}
	return int_2;
}
int v_pfx_table_src_remove( char parameter_1,unsigned int parameter_2,int uni_para)
{
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_1 = int_1 + int_1;
		short_2 = short_1 * short_1;
		char controller4vul_1457[2];
		fgets(controller4vul_1457 ,2 ,stdin);
		if( strcmp( controller4vul_1457, "v") < 0)
		{
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int_4 = int_2 + int_3;
			char controller4vul_1458[3];
			fgets(controller4vul_1458 ,3 ,stdin);
			if( strcmp( controller4vul_1458, "@t") > 0)
			{
				unsigned int unsigned_int_3 = 1;
				int_5 = v_pfx_table_remove_id(unsigned_int_1,double_1,unsigned_int_1,unsigned_int_2,double_2,uni_para);

				unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
			}
		}
		char_1 = char_1 * char_2;
	}
	return int_5;
}
int v_lrtr_get_monotonic_time( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long_2 = long_1 * long_1;
	return int_1;
}
void v_rtr_purge_outdated_records( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	char_2 = char_1 * char_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		int int_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			long long_3 = 1;
			long_3 = long_2 + long_2;
		}
		double_1 = double_1 + double_2;
		int_1 = v_lrtr_get_monotonic_time(float_1);

		int_1 = int_1 * int_2;
		int_2 = int_3 + int_4;
		double_2 = double_1;
		int_3 = v_spki_table_src_remove(long_2,double_3);

		int_2 = int_1 * int_3;
		double_2 = double_4 + double_4;
		int_5 = v_pfx_table_src_remove(char_1,unsigned_int_1,-1 );

		double_2 = double_1 * double_5;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
}
unsigned int v_sighandler( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short_3 = short_1 + short_2;
		float_2 = float_1 + float_1;
	}
	return unsigned_int_2;
}
unsigned int v_install_sig_handler()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	unsigned_int_1 = v_sighandler(int_1);

	char_2 = char_1 * char_2;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	char_2 = char_3 + char_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	int_2 = int_1 + int_2;
	return unsigned_int_3;
}
void v_rtr_fsm_start( float parameter_1,int uni_para)
{
	float float_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_1;
		if(1)
		{
			double_2 = double_1;
		}
	}
	char controller4vul_1451[2];
	fgets(controller4vul_1451 ,2 ,stdin);
	if( strcmp( controller4vul_1451, "G") < 0)
	{
		char controller4vul_1452[3];
		fgets(controller4vul_1452 ,3 ,stdin);
		if( strcmp( controller4vul_1452, "H<") < 0)
		{
			char controller4vul_1453[3];
			fgets(controller4vul_1453 ,3 ,stdin);
			if( strcmp( controller4vul_1453, "3s") > 0)
			{
				int_1 = v_rtr_sync(int_1,uni_para);

			}
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short_1 = short_2;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
		}
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
				if(1)
				{
					double double_3 = 1;
					double double_4 = 1;
					double_2 = double_3 * double_4;
				}
			}
		}
	}
}
int v_rtr_start( int parameter_1,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char controller4vul_1450[2];
	fgets(controller4vul_1450 ,2 ,stdin);
	if( strcmp( controller4vul_1450, "}") < 0)
	{
		v_rtr_fsm_start(float_1,uni_para);

	}
	int_3 = int_1 + int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "_W") > 0)
	{
	}
	return int_3;
}
int v_rtr_mgr_start_sockets( short parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller4vul_1449[3];
		fgets(controller4vul_1449 ,3 ,stdin);
		if( strcmp( controller4vul_1449, "EU") > 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int_1 = v_rtr_start(int_1,uni_para);

			long_3 = long_1 * long_2;
		}
	}
	int_4 = int_2 * int_3;
	return int_2;
}
short v_get_best_inactive_rtr_mgr_group( float parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = v_tommy_list_head(int_1);

	char_1 = char_2;
	return short_1;
}
short v_is_some_rtr_mgr_group_established( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	unsigned_int_2 = unsigned_int_3;
	long_1 = long_1;
	double_1 = v_tommy_list_head(int_1);

	double_1 = double_2 + double_3;
	return short_1;
}
unsigned int v__rtr_mgr_cb_state_error( char parameter_1,int parameter_2,char parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	char controller4vul_1447[2];
	fgets(controller4vul_1447 ,2 ,stdin);
	if( strcmp( controller4vul_1447, "`") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_2 = 1;
		float_1 = float_2;
		char controller4vul_1448[3];
		fgets(controller4vul_1448 ,3 ,stdin);
		if( strcmp( controller4vul_1448, "#F") > 0)
		{
			int_1 = v_rtr_mgr_start_sockets(short_1,uni_para);

			int_1 = int_1 * int_2;
		}
		if(1)
		{
			int int_3 = 1;
			int_2 = int_1 + int_3;
		}
	}
	return unsigned_int_2;
}
short v__rtr_mgr_cb_state_connecting( long parameter_1,char parameter_2,long parameter_3)
{
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	return short_2;
	double_1 = v_set_status(char_1,long_1,float_1,int_1);

}
void v_rtr_change_socket_state( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "hw") < 0)
	{
	}
	char_1 = char_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "NK") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
}
void v_rtr_stop( char parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_3 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_1;
	if(1)
	{
		short short_2 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v_rtr_change_socket_state(short_1,int_1);

		short_1 = short_1 * short_2;
		int_2 = int_1;
		int_1 = int_1 * int_2;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	short_3 = short_3 * short_3;
}
double v_tommy_list_head( int parameter_1)
{
	double double_1 = 1;
	return double_1;
}
int v_rtr_mgr_close_less_preferable_groups( long parameter_1,char parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = v_tommy_list_head(int_1);

	v_rtr_stop(char_1);

	unsigned_int_2 = unsigned_int_3;
	long_3 = long_1 + long_2;
	double_1 = v_set_status(char_1,long_3,float_1,int_2);

	short_2 = short_1 * short_1;
	double_2 = double_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	return int_3;
}
unsigned int v_rtr_mgr_config_status_is_synced()
{
	unsigned int unsigned_int_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "#l") < 0)
		{
		}
	}
	return unsigned_int_1;
}
int v__rtr_mgr_cb_state_established( char parameter_1,long parameter_2,short parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int_1 = v_rtr_mgr_close_less_preferable_groups(long_1,char_1,long_1);

	int_1 = int_2 + int_1;
	return int_3;
	unsigned_int_1 = v_rtr_mgr_config_status_is_synced();

	double_1 = v_set_status(char_2,long_1,float_1,int_3);

	double_1 = v_tommy_list_head(int_4);

}
unsigned int v_rtr_mgr_status_to_str( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double v_set_status( char parameter_1,long parameter_2,float parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = v_rtr_mgr_status_to_str(char_1);

	char_1 = char_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
	return double_1;
}
float v__rtr_mgr_cb_state_shutdown( float parameter_1,float parameter_2,long parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double_1 = v_set_status(char_1,long_1,float_1,int_1);

	long_2 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "(") < 0)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_1 = int_2 + int_1;
			int_3 = int_3 + int_3;
		}
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	return float_2;
}
long v_rtr_mgr_cb( float parameter_1,long parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char controller4vul_1446[2];
	fgets(controller4vul_1446 ,2 ,stdin);
	if( strcmp( controller4vul_1446, ",") < 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_1 = v__rtr_mgr_cb_state_error(char_1,int_1,char_2,uni_para);

		short_1 = short_1 + short_2;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	char_1 = char_2 * char_1;
	char_4 = char_1 * char_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	float_3 = float_1 * float_2;
	double_3 = double_1 * double_2;
	double_3 = double_2 + double_3;
	return long_2;
}
int v_rtr_check_interval_range( unsigned int parameter_1,unsigned int parameter_2,short parameter_3)
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
int v_rtr_init( char parameter_1,long parameter_2,long parameter_3,int parameter_4,short parameter_5,long parameter_6,double parameter_7,unsigned int parameter_8,long parameter_9)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_3 = 1;
	int int_9 = 1;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		int_3 = int_2 + int_2;
	}
	int_1 = int_1;
	int_2 = int_4;
	char_1 = char_1;
	char_1 = char_2;
	int_3 = int_4 * int_5;
	float_1 = float_1 * float_2;
	char_3 = char_1 + char_2;
	char_1 = char_2 + char_3;
	double_2 = double_1 + double_2;
	int_8 = int_6 * int_7;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_2 * float_1;
	double_1 = double_2 * double_2;
	long_2 = long_1 + long_2;
	int_6 = v_rtr_check_interval_range(unsigned_int_3,unsigned_int_2,short_1);

	long_2 = long_1 * long_3;
	long_1 = long_1 + long_1;
	int_7 = int_7 * int_4;
	return int_9;
}
int v_rtr_mgr_init_sockets( long parameter_1,int parameter_2,short parameter_3,int parameter_4,double parameter_5,double parameter_6,int uni_para)
{
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
		char controller4vul_1445[3];
		fgets(controller4vul_1445 ,3 ,stdin);
		if( strcmp( controller4vul_1445, "8y") > 0)
		{
			long_1 = v_rtr_mgr_cb(float_1,long_2,uni_para);

		}
	}
	return int_1;
}
long v_key_entry_cmp( long parameter_1,short parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double_1 = double_1;
	short_1 = short_1 + short_2;
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
}
char v_tommy_list_init( long parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_1;
	return char_1;
}
void v_tommy_hashlin_init()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_2;
	int_3 = int_1 + int_2;
	int_4 = int_2 * int_4;
	int_2 = int_1 * int_5;
	int_5 = int_2 + int_6;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	long_3 = long_1 * long_3;
}
void v_spki_table_init( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	float_1 = float_1 * float_2;
	short_1 = short_1 + short_2;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	v_tommy_hashlin_init();

	char_1 = v_tommy_list_init(long_1);

	double_1 = double_1 + double_1;
	long_2 = v_key_entry_cmp(long_1,short_3);

}
void v_pfx_table_init( long parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1;
	double_3 = double_2 + double_1;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_3;
}
int v_rtr_mgr_config_cmp( int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
int v_rtr_mgr_init( float parameter_1,int parameter_2,float parameter_3,float parameter_4,char parameter_5,float parameter_6,short parameter_7,unsigned int parameter_8,double parameter_9,int uni_para)
{
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	double double_2 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_3 = 1;
	float float_7 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	double double_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_8 = 1;
	char_1 = char_1 + char_1;
	long_1 = long_1 * long_1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	char_3 = char_2 + char_2;
	float_2 = float_1 + float_1;
	float_3 = float_1 + float_2;
	int_1 = int_1 * int_2;
	char controller4vul_1444[3];
	fgets(controller4vul_1444 ,3 ,stdin);
	if( strcmp( controller4vul_1444, ".(") < 0)
	{
		int_3 = v_rtr_mgr_init_sockets(long_2,int_4,short_1,int_4,double_1,double_2,uni_para);

		long_2 = long_2 + long_2;
	}
	double_2 = double_2;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	if(1)
	{
		float float_4 = 1;
		double_1 = double_2 + double_1;
		float_4 = float_3;
	}
	float_6 = float_5 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_1 * char_3;
		if(1)
		{
			short short_2 = 1;
			short_2 = short_1 + short_2;
			double_3 = double_1 + double_2;
		}
		if(1)
		{
			float_3 = float_2 + float_7;
			double_2 = double_2 + double_3;
		}
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3;
	}
	double_2 = double_4 + double_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		double_2 = double_3 + double_1;
	}
	char_1 = char_2 * char_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	int_4 = int_5 * int_3;
	double_3 = double_1 + double_4;
	int_1 = int_3 * int_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_8 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_5 = 1;
		float_1 = float_8 * float_7;
		if(1)
		{
			int_5 = int_3 * int_1;
		}
		char_1 = char_3;
		long_3 = long_3 + long_2;
		long_2 = long_4;
		if(1)
		{
			float_1 = float_5 * float_6;
		}
		long_2 = long_5;
		if(1)
		{
			char_2 = char_2 * char_4;
		}
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		double_2 = double_5 + double_4;
	}
	int_7 = int_6 * int_5;
	double_6 = double_4 + double_6;
	int_7 = int_4 + int_3;
	if(1)
	{
		double_2 = double_1 * double_6;
	}
	if(1)
	{
		double double_7 = 1;
		double_7 = double_2 * double_6;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_6;
	double_1 = double_6 * double_5;
	char_4 = char_1 * char_2;
	int_5 = int_4 + int_8;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_4;
	int_7 = int_8 + int_5;
	return int_3;
}
float v_tr_tcp_ident()
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	float_1 = float_1;
	double_3 = double_1 + double_2;
	int_1 = int_1;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	long_1 = v_lrtr_malloc();

	float_2 = float_1 * float_1;
	if(1)
	{
	}
	int_1 = int_2;
	return float_1;
}
int v_tr_tcp_send( int parameter_1,double parameter_2,long parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char_1 = char_2;
		if(1)
		{
			double double_1 = 1;
			double_2 = double_1 * double_1;
		}
		double_2 = double_3 * double_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		if(1)
		{
		}
		if(1)
		{
		}
		float_1 = float_2;
	}
	if(1)
	{
	}
	return int_2;
}
int v_tr_tcp_recv( float parameter_1,short parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long_2 = long_1 * long_1;
	short_2 = short_1 + short_2;
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		long long_3 = 1;
		double_1 = double_2;
		if(1)
		{
			int int_2 = 1;
			int_1 = int_1 + int_2;
		}
		long_2 = long_2 * long_3;
	}
	if(1)
	{
		double double_3 = 1;
		if(1)
		{
		}
		if(1)
		{
		}
		double_1 = double_3 * double_1;
	}
	if(1)
	{
	}
	return int_1;
}
int v_tr_tcp_open()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_3 = 1;
	double double_7 = 1;
	int int_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_3 = double_1 + double_2;
	short_2 = short_1 + short_2;
	v_tr_tcp_close();

	long_2 = long_1 * long_1;
	int_2 = int_1 + int_2;
	double_5 = double_4 * double_3;
	double_4 = double_6 + double_1;
	float_3 = float_1 * float_1;
	if(1)
	{
		float_2 = float_2;
	}
	if(1)
	{
		double_3 = double_5 * double_5;
		double_1 = double_1 + double_7;
	}
	if(1)
	{
		if(1)
		{
			int_1 = int_3 * int_2;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			double_3 = double_6 * double_4;
			int_4 = int_4 + int_5;
		}
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
		double_4 = double_2;
	}
	int_6 = int_3 + int_2;
	double_5 = double_5 + double_5;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_3 = double_3 + double_7;
	}
	if(1)
	{
		int_3 = int_2 * int_6;
	}
	return int_1;
}
void v_tr_tcp_free()
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	char char_2 = 1;
	short_1 = short_1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1;
	double_2 = double_1 + double_1;
	v_lrtr_free();

	long_3 = long_4 * long_3;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	double_1 = double_2 * double_2;
	char_2 = char_2;
}
void v_tr_tcp_close()
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	char_2 = char_1 + char_1;
	long_2 = long_1 * long_2;
}
int v_tr_tcp_init( float parameter_1,float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	double double_5 = 1;
	float float_3 = 1;
	int int_4 = 1;
	short_2 = short_1 + short_2;
	long_1 = long_1 * long_1;
	float_1 = float_2;
	v_tr_tcp_free();

	long_1 = long_1;
	char_1 = char_1;
	int_1 = v_tr_tcp_send(int_2,double_1,long_1,long_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_2 = v_lrtr_malloc();

	double_2 = double_1 * double_2;
	v_tr_tcp_close();

	float_1 = v_tr_tcp_ident();

	char_3 = char_2 * char_1;
	double_1 = double_3 + double_4;
	int_3 = v_tr_tcp_open();

	int_2 = int_1 * int_3;
	double_4 = double_4 * double_5;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		char_3 = v_lrtr_strdup();

		double_4 = double_2 * double_5;
	}
	int_2 = v_tr_tcp_recv(float_3,short_1,int_4);

	short_2 = short_2;
	return int_2;
}
char v_lrtr_strdup()
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float_2 = float_1 * float_2;
	long_1 = v_lrtr_malloc();

	float_3 = float_3 + float_4;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 * int_1;
	return char_1;
}
long v_lrtr_malloc()
{
	long long_1 = 1;
	return long_1;
}
double v_tr_ssh_ident()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	int_4 = int_3 + int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "AH") > 0)
	{
	}
	char_1 = char_2;
	long_1 = v_lrtr_malloc();

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	return double_1;
}
char v_tr_ssh_send( int parameter_1,double parameter_2,short parameter_3,unsigned int parameter_4)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long_1 = long_1 * long_1;
	short_2 = short_1 * short_1;
	return char_1;
}
int v_tr_ssh_recv_async( double parameter_1,char parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	char_1 = char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "4") < 0)
	{
		if(1)
		{
			int int_2 = 1;
			int_1 = int_2;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	return int_1;
}
int v_tr_ssh_recv( char parameter_1,char parameter_3,float parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	long_1 = long_2;
	char_1 = char_1 + char_1;
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
	int_2 = v_tr_ssh_recv_async(double_1,char_2);

}
int v_tr_ssh_open()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	char char_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 * char_2;
	double_3 = double_2 * double_3;
	if(1)
	{
		double_4 = double_2 * double_4;
		v_tr_ssh_close();

		int_2 = int_1 + int_1;
	}
	double_2 = double_1 + double_5;
	char_3 = char_3 + char_1;
	double_7 = double_6 + double_7;
	long_1 = long_1 + long_2;
	double_7 = double_3 * double_7;
	long_2 = long_2;
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		short_3 = short_2 + short_3;
	}
	if(1)
	{
		short short_4 = 1;
		short_4 = short_3;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_3 = int_4;
		char_3 = char_4 + char_1;
	}
	if(1)
	{
		int_5 = int_1 + int_1;
	}
	if(1)
	{
		double_5 = double_4 * double_5;
	}
	if(1)
	{
		char_4 = char_4 + char_1;
		double_6 = double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	}
	if(1)
	{
		int int_7 = 1;
		int_5 = int_6 * int_7;
	}
	if(1)
	{
		double double_8 = 1;
		int_6 = int_2 + int_6;
		double_5 = double_6 * double_8;
	}
	unsigned_int_3 = unsigned_int_1;
	float_1 = float_1 + float_2;
	return int_5;
}
void v_lrtr_free()
{
}
void v_tr_ssh_free( float parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	long_2 = long_1 + long_1;
	char_2 = char_1 * char_1;
	short_2 = short_1 + short_2;
	v_lrtr_free();

	int_1 = int_1;
	int_1 = int_1 + int_2;
	double_2 = double_1 * double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "N") > 0)
	{
		long_2 = long_2 * long_2;
	}
	char_2 = char_1 * char_1;
	char_1 = char_2 * char_2;
}
void v_tr_ssh_close()
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 + double_1;
		}
		int_2 = int_1 * int_2;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		long long_2 = 1;
		char_1 = char_2;
		long_2 = long_1 + long_1;
		char_1 = char_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
int v_tr_ssh_init( float parameter_1,short parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	char char_5 = 1;
	int int_6 = 1;
	short short_3 = 1;
	int_1 = v_tr_ssh_open();

	double_1 = double_1;
	double_1 = v_tr_ssh_ident();

	int_3 = int_2 + int_1;
	char_1 = v_lrtr_strdup();

	double_3 = double_1 * double_2;
	v_tr_ssh_free(float_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_4 + int_1;
	long_2 = long_1 * long_1;
	short_1 = short_1 + short_1;
	long_2 = v_lrtr_malloc();

	char_2 = char_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	int_2 = int_1 * int_2;
	char_1 = char_3 * char_4;
	float_2 = float_1 * float_2;
	double_4 = double_2 + double_2;
	double_1 = double_3 + double_5;
	if(1)
	{
		char_4 = char_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double double_6 = 1;
		double_2 = double_6;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2 + short_1;
	}
	if(1)
	{
		v_tr_ssh_close();

		float_1 = float_1 * float_1;
	}
	if(1)
	{
		int_5 = v_tr_ssh_recv(char_3,char_5,float_2);

		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	int_3 = int_3 + int_6;
	char_3 = char_5;
	return int_4;
	char_4 = v_tr_ssh_send(int_6,double_4,short_3,unsigned_int_3);

}
int main()
{
	int uni_para =447;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char_1 = char_1 + char_2;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	char controller4vul_1442[3];
	fgets(controller4vul_1442 ,3 ,stdin);
	if( strcmp( controller4vul_1442, "3_") > 0)
	{
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_2 = int_1 + int_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		double_2 = double_1 + double_1;
		char controller4vul_1443[3];
		fgets(controller4vul_1443 ,3 ,stdin);
		if( strcmp( controller4vul_1443, "9u") < 0)
		{
			int_1 = v_rtr_mgr_init(float_1,int_1,float_2,float_1,char_3,float_1,short_1,unsigned_int_3,double_3,uni_para);

			double_1 = double_1;
			int_3 = int_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double double_4 = 1;
				double_4 = double_3 * double_2;
			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double_3 = double_1 + double_2;
			}
		}
	}
	if(1)
	{
		int_4 = int_1 + int_3;
	}
	return int_4;
}

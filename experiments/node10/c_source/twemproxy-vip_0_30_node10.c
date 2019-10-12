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

float v_core_ctx_destroy( int parameter_1);
void v_core_stop();
char v_server_pool_old_deinit( short parameter_1,float parameter_2);
long v_stats_metric_reset( double parameter_1);
double v_stats_pool_reset( int parameter_1);
void v_stats_swap( int parameter_1);
short v_msg_from_rbe( int parameter_1);
unsigned int v_rbtree_min( long parameter_1);
unsigned int v_msg_tmo_min();
void v_core_timeout( short parameter_1);
float v_core_loop( long parameter_1);
float v_mbuf_free( float parameter_1);
void v_mbuf_deinit();
unsigned int v_msg_free( double parameter_1);
void v_msg_deinit();
double v_conn_free( double parameter_1);
void v_conn_deinit();
void v_proxy_adm_destroy( short parameter_1);
int v_event_wait( char parameter_1,int parameter_2);
double v_proxy_adm_start();
unsigned int v_proxy_adm_listen( double parameter_1,long parameter_2);
double v_proxy_adm_loop(double parameter_2);
void v_proxy_adm_unref( double parameter_1);
void v_proxy_adm_ref( double parameter_1);
void v_proxy_adm_close( unsigned int parameter_1,long parameter_2);
long v_proxy_adm_accept( double parameter_1,double parameter_2);
double v_proxy_adm_recv( double parameter_1,long parameter_2);
void v_proxy_adm_client_unref( unsigned int parameter_1);
void v_proxy_adm_client_ref( short parameter_1);
short v_proxy_adm_client_active( short parameter_1);
void v_conn_put_proxy_adm( unsigned int parameter_1);
void v_proxy_adm_client_close( int parameter_1,int parameter_2);
void v_rsp_send_done_proxy_adm( int parameter_1,short parameter_2,long parameter_3);
short v_rsp_send_next_proxy_adm( int parameter_1,long parameter_2);
void v_msg_send_proxy_adm( char parameter_1,int parameter_2);
double v_proxy_each_deinit_for_reload();
char v_conn_get_for_reload();
void v_array_swap( long parameter_1,short parameter_2);
long v_proxy_close_for_reload( unsigned int parameter_1,int parameter_2);
unsigned int v__conn_get_for_reload();
void v_conn_get_proxy_for_reload(int uni_para);
int v_proxy_init_for_reload( unsigned int parameter_1,int uni_para);
long v_server_pool_each_proxy_conn_new(int uni_para);
void v_conf_pool_each_compare();
short v_conf_two_check_diff( short parameter_1,unsigned int parameter_2);
float v_conf_begin_parse_from_string( long parameter_1,char parameter_2);
short v_conf_parse_from_string( float parameter_1,char parameter_2);
void v_conf_validate_structure_from_string( float parameter_1,short parameter_2);
int v_conf_validate_tokens_from_string( int parameter_1,unsigned int parameter_2);
float v_conf_yaml_init_from_string( int parameter_1,char parameter_2);
float v_conf_validate_document_from_string( float parameter_1,int parameter_2);
short v_conf_pre_validate_from_string( long parameter_1,int parameter_2);
double v_conf_create_from_string( unsigned int parameter_1);
long v_conf_reload( int parameter_1,short parameter_2,double parameter_3,short parameter_4,double parameter_5,int uni_para);
long v_proxy_adm_command_reload_conf( char parameter_1,char parameter_2,unsigned int parameter_3,long parameter_4,int uni_para);
char v_proxy_adm_command_find_keys( int parameter_1,int parameter_2,unsigned int parameter_3,unsigned int parameter_4);
unsigned int v_proxy_adm_command_find_key( float parameter_1,short parameter_2,short parameter_3,char parameter_4);
short v_msg_append_servers_info( long parameter_1,double parameter_2);
float v_proxy_adm_command_show_servers( double parameter_1,char parameter_2,long parameter_3,int parameter_4);
double v_proxy_adm_find_server_pool( int parameter_1,long parameter_2,short parameter_3,short parameter_4);
char v_proxy_adm_command_show_pool( long parameter_1,double parameter_2,double parameter_3,unsigned int parameter_4);
double v_proxy_adm_command_show_pools( float parameter_1,short parameter_2,long parameter_3,long parameter_4);
int v_dist_type_to_string( short parameter_1);
unsigned int v_hash_type_to_string( unsigned int parameter_1);
short v_msg_append_server_pool_info( long parameter_1,double parameter_2);
unsigned int v_get_server_pools( char parameter_1,double parameter_2);
short v_proxy_adm_command_show_conf( int parameter_1,int parameter_2,short parameter_3,char parameter_4,unsigned int parameter_5);
short v_msg_ensure_mbuf_proxy_adm( long parameter_1,long parameter_2);
void v_msg_append_proxy_adm( float parameter_1,float parameter_2,char parameter_3);
short v_proxy_adm_command_help( float parameter_1,char parameter_2,char parameter_3,char parameter_4);
void v_proxy_adm_make_response( unsigned int parameter_1,int parameter_2,char parameter_3,int uni_para);
long v_proxy_adm_req_filter( char parameter_1,double parameter_2,long parameter_3);
void v_req_recv_done_proxy_adm( float parameter_1,short parameter_2,long parameter_3,float parameter_4,int uni_para);
void v_req_put_proxy_adm( int parameter_1);
float v_req_recv_next_proxy_adm( int parameter_1,int parameter_2,char parameter_3);
char v_msg_repair_proxy_adm( unsigned int parameter_1,unsigned int parameter_2,short parameter_3);
void v_proxy_adm_parse_rsp( int parameter_1);
void v_mbuf_put_proxy_adm( unsigned int parameter_1);
void v_msg_put_proxy_adm( long parameter_1);
float v_msg_get_error_proxy_adm( short parameter_1);
char v_proxy_adm_arg2ormore( long parameter_1);
void v_proxy_adm_arg2or3( long parameter_1);
float v_proxy_adm_arg2();
char v_proxy_adm_arg1( long parameter_1);
void v_proxy_adm_parse_req( char parameter_1);
char v__msg_get_proxy_adm();
float v_msg_get_proxy_adm( char parameter_1,long parameter_2);
int v_mbuf_split_proxy_adm( unsigned int parameter_1,unsigned int parameter_2,float parameter_3);
unsigned int v_msg_parsed_proxy_adm( char parameter_1,float parameter_2,short parameter_3);
float v_msg_parse_proxy_adm( int parameter_1,unsigned int parameter_2,unsigned int parameter_3);
short v__mbuf_get_proxy_adm();
long v_mbuf_get_proxy_adm();
int v_msg_recv_chain_proxy_adm( int parameter_1,unsigned int parameter_2,float parameter_3);
float v_msg_recv_proxy_adm( unsigned int parameter_1,unsigned int parameter_2);
double v__conn_get_proxy_adm();
int v_conn_get_proxy_adm(int parameter_2,short parameter_3,int uni_para);
unsigned int v_proxy_adm_create( char parameter_1,char parameter_2,short parameter_3,int uni_para);
void v_proxy_deinit( long parameter_1);
char v_proxy_reuse();
float v_proxy_listen( short parameter_1,int parameter_2);
void v_proxy_unref( char parameter_1);
void v_proxy_ref( float parameter_1);
void v_proxy_close( int parameter_1,float parameter_2);
int v_nc_set_tcpkeepalive( int parameter_1,int parameter_2,int parameter_3,int parameter_4);
void v_conn_ncurr_cconn_proxy_adm();
char v_conn_ncurr_cconn();
unsigned int v_proxy_accept( unsigned int parameter_1,char parameter_2,int uni_para);
short v_proxy_recv( char parameter_1,float parameter_2,int uni_para);
char v_conn_get_proxy();
short v_proxy_each_init();
char v_proxy_init( float parameter_1);
void v_event_base_destroy( float parameter_1);
unsigned int v_server_each_disconnect();
void v_server_pool_each_disconnect();
void v_server_pool_disconnect();
void v_req_server_dequeue_omsgq( unsigned int parameter_1,long parameter_2,short parameter_3);
void v_req_server_enqueue_omsgq( float parameter_1,unsigned int parameter_2,short parameter_3);
void v_req_server_dequeue_imsgq( long parameter_1,unsigned int parameter_2,long parameter_3);
void v_rbtree_insert( float parameter_1,float parameter_2);
unsigned int v_nc_msec_now();
int v_server_timeout( unsigned int parameter_1);
void v_msg_tmo_insert( short parameter_1,unsigned int parameter_2);
void v_req_server_enqueue_imsgq( int parameter_1,char parameter_2,int parameter_3);
void v_server_unref();
void v_server_ref( double parameter_1);
void v_server_active();
void v_req_send_done( long parameter_1,float parameter_2,double parameter_3);
void v_server_connected( float parameter_1,int parameter_2);
unsigned int v_req_send_next( float parameter_1,long parameter_2);
char v_rsp_forward_stats( unsigned int parameter_1,int parameter_2,long parameter_3);
int v_string_prefix_of_fix_len_char( unsigned int parameter_1,char parameter_2,short parameter_3);
char v_conf_write_back_yaml( double parameter_1,int parameter_2,char parameter_3);
void v_server_ok( double parameter_1,char parameter_2);
float v_rsp_forward( long parameter_1,unsigned int parameter_2,short parameter_3);
double v_rsp_filter( int parameter_1,unsigned int parameter_2,short parameter_3);
void v_rsp_recv_done( float parameter_1,unsigned int parameter_2,unsigned int parameter_3,double parameter_4);
char v_rsp_get( long parameter_1,int uni_para);
long v_rsp_recv_next( float parameter_1,double parameter_2,char parameter_3,int uni_para);
void v_req_client_dequeue_omsgq( int parameter_1,int parameter_2,unsigned int parameter_3);
void v_req_client_enqueue_omsgq( char parameter_1,int parameter_2,char parameter_3);
short v_conn_need_auth(long parameter_2);
void v_client_unref( double parameter_1);
void v_client_ref( char parameter_1);
double v_client_active( unsigned int parameter_1);
char v_client_close_stats( int parameter_1,char parameter_2,char parameter_3,char parameter_4);
void v_client_close( short parameter_1,int parameter_2);
void v_rsp_send_done( short parameter_1,float parameter_2,double parameter_3);
float v_msg_get_error_other( short parameter_1,short parameter_2);
short v_msg_get_error( int parameter_1,char parameter_2);
double v_rsp_make_error( int parameter_1,char parameter_2,int parameter_3);
float v_req_error( unsigned int parameter_1,unsigned int parameter_2);
int v_event_del_out( double parameter_1,char parameter_2);
double v_rsp_send_next( short parameter_1,short parameter_2);
double v_conn_sendv( char parameter_1,double parameter_2,unsigned int parameter_3);
float v_array_set( int parameter_1,short parameter_3,int parameter_4);
int v_msg_send_chain( unsigned int parameter_1,float parameter_2,unsigned int parameter_3);
double v_msg_send( int parameter_1,int parameter_2);
float v_req_forward_stats( double parameter_1,float parameter_2,double parameter_3);
char v_server_pool_server( short parameter_1,char parameter_2,float parameter_3);
double v_server_pool_update( long parameter_1);
short v_server_pool_conn( long parameter_1,int parameter_2,short parameter_3,unsigned int parameter_4);
int v_event_add_conn( float parameter_1,short parameter_2);
int v_nc_set_tcpnodelay( int parameter_1);
int v_nc_set_nonblocking( int parameter_1);
float v_server_connect( float parameter_1,double parameter_2,unsigned int parameter_3);
double v_server_pool_conn_for_replace( float parameter_1,char parameter_2,char parameter_3);
void v_req_forward( unsigned int parameter_1,double parameter_2,float parameter_3);
double v_req_forward_error( unsigned int parameter_1,long parameter_2,float parameter_3);
short v_req_make_reply( float parameter_1,unsigned int parameter_2,float parameter_3);
int v_server_pname_compare( float parameter_1,long parameter_2);
double v_req_examine_replace_server( char parameter_1,long parameter_2,char parameter_3);
float v_req_filter( double parameter_1,float parameter_2,int parameter_3);
void v_req_recv_done( char parameter_1,double parameter_2,short parameter_3,float parameter_4);
double v_req_get( long parameter_1);
short v_req_recv_next( long parameter_1,char parameter_2,float parameter_3);
double v_msg_repair( unsigned int parameter_1,double parameter_2,long parameter_3);
long v_memcache_copy_bulk( short parameter_1,float parameter_2);
void v_memcache_post_coalesce( char parameter_1);
void v_memcache_pre_coalesce( long parameter_1);
int v_msg_prepend( short parameter_1,float parameter_2,double parameter_3);
short v_memcache_append_key( short parameter_1,double parameter_2,unsigned int parameter_3);
short v_memcache_fragment_retrieval( long parameter_1,int parameter_2,int parameter_3,double parameter_4);
float v_memcache_fragment( int parameter_1,long parameter_2,long parameter_3);
long v_memcache_add_auth_packet( float parameter_1,double parameter_2,int parameter_3);
void v_memcache_parse_rsp( long parameter_1);
unsigned int v_memcache_cas( unsigned int parameter_1);
void v_memcache_retrieval( float parameter_1);
long v_memcache_delete( long parameter_1);
double v_memcache_arithmetic( unsigned int parameter_1);
double v_memcache_storage();
void v_memcache_parse_req( long parameter_1);
void v_redis_post_coalesce_mset( float parameter_1);
void v_redis_post_coalesce_del( char parameter_1);
int v_redis_post_coalesce_mget( long parameter_1);
void v_redis_post_coalesce( double parameter_1);
void v_mbuf_rewind( float parameter_1);
void v_redis_pre_coalesce( double parameter_1);
int v_redis_valid_auth( long parameter_1,int parameter_2);
long v_redis_handle_auth_req( int parameter_1,short parameter_2,int uni_para);
long v_redis_reply( long parameter_1,int uni_para);
short v_msg_append( unsigned int parameter_1,long parameter_2,long parameter_3,int uni_para);
double v_mbuf_empty( float parameter_1);
void v_redis_copy_bulk( char parameter_1,int parameter_2);
double v_msg_ensure_mbuf( char parameter_1,unsigned int parameter_2);
float v_redis_append_key( unsigned int parameter_1,double parameter_2,float parameter_3);
short v_random_dispatch( float parameter_1,char parameter_2,unsigned int parameter_3);
int v_modula_dispatch( int parameter_1,float parameter_2,float parameter_3);
short v_ketama_dispatch( char parameter_1,float parameter_2,char parameter_3);
long v_server_pool_hash( long parameter_1,char parameter_2,long parameter_3);
long v_server_pool_idx( int parameter_1,unsigned int parameter_2,float parameter_3);
char v_msg_backend_idx( short parameter_1,short parameter_2,double parameter_3);
void v_msg_gen_frag_id();
long v_redis_fragment_argx( float parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4);
unsigned int v_redis_fragment( float parameter_1,short parameter_2,short parameter_3);
float v_msg_prepend_format( int parameter_1,short parameter_2,long parameter_3);
void v_redis_add_auth_packet( float parameter_1,float parameter_2,double parameter_3);
void v_redis_parse_rsp( unsigned int parameter_1);
char v_redis_argkvx( short parameter_1);
float v_redis_argx( float parameter_1);
double v_redis_argn( unsigned int parameter_1);
double v_redis_arg3();
long v_redis_arg2( short parameter_1);
int v_redis_arg1();
int v_redis_arg0( float parameter_1);
float v_mbuf_data_size();
short v_redis_argeval();
long v_redis_argz();
void v_redis_parse_req( short parameter_1);
void v_array_create( short parameter_1,double parameter_2);
long v__msg_get();
short v_msg_get( short parameter_1,double parameter_2,int parameter_3,int uni_para);
void v_mbuf_length( long parameter_1);
void v_mbuf_copy( int parameter_1,int parameter_2,char parameter_3);
float v_mbuf_split( short parameter_1,short parameter_2,float parameter_3);
char v_msg_parsed( long parameter_1,char parameter_2,char parameter_3);
void v_msg_empty( unsigned int parameter_1);
char v_msg_parse( float parameter_1,long parameter_2,unsigned int parameter_3);
unsigned int v_conn_recv( double parameter_1,short parameter_3);
short v_mbuf_size( long parameter_1);
void v_mbuf_insert( double parameter_1,unsigned int parameter_2);
long v__mbuf_get();
long v_mbuf_get();
double v_mbuf_full( double parameter_1);
char v_msg_recv_chain( float parameter_1,float parameter_2,double parameter_3);
short v_msg_recv( double parameter_1,unsigned int parameter_2);
short v__conn_get();
float v_conn_get(float parameter_2,double parameter_3,int uni_para);
short v_server_conn();
unsigned int v_server_each_preconnect();
short v_server_pool_each_preconnect();
short v_server_pool_preconnect( int parameter_1);
unsigned int v_core_send( unsigned int parameter_1,float parameter_2);
float v_core_recv( short parameter_1,unsigned int parameter_2);
char v_core_close( double parameter_1,int parameter_2);
int v_nc_get_soerror( int parameter_1);
char v_core_error( short parameter_1,long parameter_2);
void v_conn_close_for_replace_server( int parameter_1,int parameter_2);
int v_conn_to_ctx( long parameter_1);
void v_conn_put_for_reload( float parameter_1);
void v_server_pool_each_client_conn_reset();
long v_proxy_each_deinit();
int v_event_del_conn( float parameter_1,char parameter_2);
int v_event_add_out( long parameter_1,short parameter_2);
int v_req_done( double parameter_1,short parameter_2);
unsigned int v_rbtree_right_rotate( int parameter_1,unsigned int parameter_2,char parameter_3);
long v_rbtree_left_rotate( short parameter_1,long parameter_2,long parameter_3);
double v_rbtree_node_min( long parameter_1,char parameter_2);
void v_rbtree_delete( float parameter_1,unsigned int parameter_2);
void v_msg_tmo_delete( float parameter_1);
void v_server_close_for_replace_server( char parameter_1);
void v_array_destroy( int parameter_1);
void v_mbuf_put( long parameter_1);
void v_mbuf_remove( int parameter_1,long parameter_2);
void v_msg_put( double parameter_1);
void v_rsp_put( char parameter_1);
long v_msg_type_string( double parameter_1);
double v_nc_unresolve_addr( int parameter_1,float parameter_2);
int v_nc_unresolve_peer_desc( int parameter_1);
int v_log_loggable( int parameter_1);
char v_req_log( double parameter_1);
void v_req_put( long parameter_1);
void v_conn_put( int parameter_1);
double v_server_failure( double parameter_1,short parameter_2);
double v_server_close_stats( long parameter_1,int parameter_2,int parameter_3,short parameter_4,unsigned int parameter_5);
void v_server_close( double parameter_1,int parameter_2);
float v_server_pool_each_conn_old_close();
int v_server_pool_each_proxy_conn_reset();
float v_core_core(float parameter_2);
float v_event_base_create( int parameter_1,int parameter_2);
double v_stats_stop_aggregator( unsigned int parameter_1);
void v_stats_destroy( int parameter_1);
void v_stats_send_rsp();
int v_stats_aggregate_metric( long parameter_1,double parameter_2);
int v_stats_aggregate();
double v_stats_add_footer( float parameter_1);
unsigned int v_stats_end_nesting( float parameter_1);
long v_stats_copy_metric( float parameter_1,float parameter_2);
char v_stats_begin_nesting( long parameter_1,float parameter_2);
int v_conn_ncurr_conn_proxy_adm();
char v_conn_ncurr_conn();
void v_conn_ntotal_conn();
short v_stats_add_num( int parameter_1,char parameter_2,long parameter_3);
void v_stats_add_string( unsigned int parameter_1,int parameter_2,char parameter_3);
char v_stats_add_header( double parameter_1);
unsigned int v_stats_make_rsp( char parameter_1);
void v_stats_destroy_buf( double parameter_1);
double v_stats_recreate_buf( float parameter_1);
float v_stats_server_unmap( float parameter_1);
long v_stats_pool_unmap( long parameter_1);
long v_stats_recreate( char parameter_1,unsigned int parameter_2);
float v_stats_loop_callback();
void v_event_loop_stats( int parameter_1);
float v_stats_loop();
int v_nc_set_reuseaddr( int parameter_1);
int v_nc_resolve_inet( short parameter_1,int parameter_2,unsigned int parameter_3);
char v_nc_resolve_unix( long parameter_1,long parameter_2);
int v_nc_resolve( long parameter_1,int parameter_2,unsigned int parameter_3);
float v_stats_listen( int parameter_1);
long v_stats_start_aggregator( double parameter_1);
float v_stats_create_buf( short parameter_1);
float v_stats_metric_deinit( unsigned int parameter_1);
double v_stats_server_metric_init( double parameter_1);
float v_stats_server_init( double parameter_1,double parameter_2);
long v_stats_server_map( int parameter_1,double parameter_2);
float v_stats_metric_init( char parameter_1);
long v_stats_pool_metric_init( long parameter_1);
void v_stats_pool_init( short parameter_1,char parameter_2);
short v_stats_pool_map( double parameter_1,unsigned int parameter_2);
short v_stats_create( char parameter_1,char parameter_2,int parameter_3,char parameter_4,short parameter_5);
void v_core_calc_connections( char parameter_1);
float v_random_update( long parameter_1);
void v_modula_update( unsigned int parameter_1);
float v_ketama_item_cmp( short parameter_1,double parameter_2);
void v_md5_signature( long parameter_1,long parameter_2,int parameter_3);
float v_ketama_hash( int parameter_1,double parameter_2,float parameter_3);
float v_nc_usec_now();
void v_ketama_update( float parameter_1);
void v_server_pool_run( int parameter_1);
void v_server_pool_each_run();
unsigned int v_server_pool_each_calc_connections();
double v_server_pool_each_set_owner();
void v_server_pool_deinit( float parameter_1);
void v_server_each_set_owner();
void v_server_deinit( char parameter_1);
void v_conf_server_each_transform();
char v_server_init( short parameter_1,double parameter_2,char parameter_3);
void v_array_idx( long parameter_1);
float v_conf_pool_each_transform();
float v_array_each( long parameter_1);
long v_server_pool_init( char parameter_1,int parameter_2,int parameter_3);
double v_core_ctx_create( long parameter_1,int uni_para);
void v_conn_init();
void v_rbtree_node_init( unsigned int parameter_1);
void v_rbtree_init( short parameter_1,char parameter_2);
void v_msg_init();
void v_mbuf_init( double parameter_1);
unsigned int v_core_start(int uni_para);
float v_nc_run( float parameter_1,int uni_para);
int v__log_files_circular_deinit( float parameter_1);
int v__log_rotate_deinit( double parameter_1);
void v_log_deinit();
void v_nc_print_done();
void v_signal_deinit();
short v_nc_remove_pidfile();
double v_nc_post_run();
long v_nc_print_run( unsigned int parameter_1);
float v_nc_create_pidfile( float parameter_1);
float v_signal_init();
short v_nc_daemonize( int parameter_1);
void v__log_files_circular_info( float parameter_1);
float v__log_files_circular_insert( float parameter_1,float parameter_2);
int v__is_log_bak_file( float parameter_1,char parameter_2);
long v_log_files_circular_init( long parameter_1);
int v_log_rotate_init( short parameter_1);
int v_log_init( int parameter_1,char parameter_2);
short v_nc_pre_run( char parameter_1);
char v_conf_server_deinit( float parameter_1);
int v_conf_pool_deinit( short parameter_1);
void v_conf_destroy( double parameter_1);
long v_conf_dump( float parameter_1);
char v_conf_pool_name_cmp( short parameter_1,unsigned int parameter_2);
int v_conf_pool_listen_cmp( float parameter_1,int parameter_2);
char v_conf_server_name_cmp( int parameter_1,double parameter_2);
void v_array_sort( short parameter_1,unsigned int parameter_2);
long v_conf_validate_server( unsigned int parameter_1,long parameter_2);
long v_string_empty( double parameter_1);
int v_conf_validate_pool( float parameter_1,unsigned int parameter_2);
void v_conf_post_validate( float parameter_1);
unsigned int v_conf_end_parse( int parameter_1);
int v_string_compare( double parameter_1,long parameter_2);
char v_string_duplicate( int parameter_1,int parameter_2);
int v_conf_pool_init( long parameter_1,double parameter_2);
char v_array_get( float parameter_1,double parameter_2);
float v_array_top( short parameter_1);
double v_conf_handler( long parameter_1);
short v_array_null( float parameter_1);
long v_string_copy( short parameter_1,char parameter_2,double parameter_3);
char v_array_push( float parameter_1);
short v_conf_push_scalar( double parameter_1);
void v_string_init( int parameter_1);
void v_string_deinit( char parameter_1);
unsigned int v_array_pop( long parameter_1);
void v_conf_pop_scalar( short parameter_1);
char v_conf_parse_core( float parameter_1);
short v_conf_begin_parse( unsigned int parameter_1);
long v_array_n( short parameter_1);
void v_conf_parse( unsigned int parameter_1);
float v_conf_event_done( int parameter_1);
short v_conf_event_next( double parameter_1);
char v_conf_validate_structure( float parameter_1);
short v_conf_token_done( double parameter_1);
unsigned int v_conf_token_next();
short v_conf_validate_tokens( long parameter_1);
char v_conf_yaml_deinit( short parameter_1);
double v_conf_yaml_init( char parameter_1);
char v_conf_validate_document( short parameter_1);
unsigned int v_conf_pre_validate( int parameter_1);
void v_array_deinit( int parameter_1);
short v_array_init( short parameter_1,float parameter_2,char parameter_3);
unsigned int v_conf_open( char parameter_1);
long v_conf_create( char parameter_1);
short v_nc_test_conf( short parameter_1);
void v_stats_describe();
void v_nc_show_usage();
long v_set_log_file_count( char parameter_1);
float v_set_log_file_max_size( char parameter_1);
char v_nc_valid_port( int parameter_1);
unsigned int v_nc_get_options( int parameter_1,char parameter_2,double parameter_3);
char v_nc_set_default_options( long parameter_1);
float v_core_ctx_destroy( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	int_2 = int_1 * int_2;
	double_1 = double_1 * double_2;
	v_stats_destroy(int_3);

	v_proxy_adm_destroy(short_1);

	long_1 = long_1;
	v_server_pool_disconnect();

	v_string_deinit(char_1);

	long_2 = long_3;
	short_1 = short_1 + short_1;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		v_server_pool_deinit(float_1);

		long_4 = long_4 + long_4;
	}
	if(1)
	{
		long_2 = v_string_empty(double_1);

		long_4 = long_1 * long_1;
	}
	if(1)
	{
		v_conf_destroy(double_1);

		int_1 = int_1 * int_1;
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	v_proxy_deinit(long_3);

	short_3 = short_1 + short_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		if(1)
		{
			short short_4 = 1;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
			v_event_base_destroy(float_1);

			short_1 = short_4;
		}
		if(1)
		{
			short short_5 = 1;
			short_3 = short_2 * short_5;
		}
		if(1)
		{
			float_1 = float_2;
		}
		double_4 = double_3 * double_3;
	}
	return float_2;
}
void v_core_stop()
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	v_conn_deinit();

	short_2 = short_1 * short_2;
	v_mbuf_deinit();

	float_1 = v_core_ctx_destroy(int_1);

	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_msg_deinit();

	long_1 = long_3 * long_3;
}
char v_server_pool_old_deinit( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	float float_5 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_1;
	int_1 = int_1 * int_1;
	float_1 = float_2;
	long_1 = v_array_n(short_1);

	double_2 = double_1 + double_3;
	float_3 = float_4;
	int_2 = v_event_del_conn(float_4,char_1);

	int_3 = int_3;
	double_2 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_3 = int_2 + int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
			if(1)
			{
				int_1 = int_2 * int_2;
			}
			double_4 = double_3 * double_4;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_5 = 1;
			double_5 = double_3 * double_5;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				char_2 = v_array_get(float_5,double_4);

				float_3 = float_3 * float_1;
				if(1)
				{
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					char_2 = char_2 + char_2;
					if(1)
					{
						float float_6 = 1;
						float_3 = float_6 * float_4;
					}
					unsigned_int_4 = unsigned_int_5;
					int_3 = int_3 + int_1;
				}
				if(1)
				{
					float_5 = float_5 * float_3;
				}
			}
		}
	}
	if(1)
	{
	}
	return char_1;
}
long v_stats_metric_reset( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_5 = 1;
	double double_1 = 1;
	char_1 = char_1 * char_2;
	float_1 = float_1;
	float_2 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_2 = v_stats_metric_init(char_1);

		float_3 = float_3 + float_4;
		char_1 = char_2;
	}
	return long_1;
	long_2 = v_array_n(short_1);

	char_1 = v_array_get(float_5,double_1);

}
double v_stats_pool_reset( int parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	char_1 = v_array_get(float_1,double_1);

	float_2 = float_1;
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double_3 = double_3;
		int_1 = int_1;
		char_2 = char_1 * char_2;
		long_1 = v_array_n(short_1);

		char_3 = char_2 + char_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			long_2 = v_stats_metric_reset(double_3);

			char_4 = char_1 + char_1;
			int_2 = int_3;
		}
	}
	return double_1;
}
void v_stats_swap( int parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	if(1)
	{
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
			v_array_swap(long_1,short_1);

			double_1 = v_stats_pool_reset(int_1);

			float_2 = float_1 + float_2;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_1 * char_2;
		}
		float_1 = float_2 + float_1;
	}
	short_1 = short_2 + short_3;
	int_2 = int_1 + int_1;
	long_2 = long_1 + long_2;
	long_3 = long_1 + long_3;
}
short v_msg_from_rbe( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return short_1;
}
unsigned int v_rbtree_min( long parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = v_rbtree_node_min(long_1,char_1);

	long_1 = long_2 * long_3;
	long_2 = long_2;
	if(1)
	{
	}
	return unsigned_int_1;
}
unsigned int v_msg_tmo_min()
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	float_1 = float_2;
	if(1)
	{
	}
	return unsigned_int_1;
	unsigned_int_1 = v_rbtree_min(long_1);

	short_1 = v_msg_from_rbe(int_1);

}
void v_core_timeout( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = v_msg_tmo_min();

	v_msg_tmo_delete(float_1);

	v_conn_close_for_replace_server(int_1,int_2);

	double_2 = double_1 + double_1;
	unsigned_int_2 = v_nc_msec_now();

	char_1 = v_core_close(double_2,int_1);

}
float v_core_loop( long parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	float float_3 = 1;
	v_core_timeout(short_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	int_1 = v_event_wait(char_1,int_1);

	v_server_pool_each_client_conn_reset();

	float_2 = float_1;
	double_3 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
			int int_2 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int_1 = int_2;
			short_2 = short_1 + short_2;
			if(1)
			{
				long_1 = v_array_n(short_1);

				int_2 = int_2 + int_1;
				float_2 = v_array_each(long_2);

				unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			}
			if(1)
			{
				long long_3 = 1;
				long_1 = long_3 * long_1;
				unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
			}
			v_stats_swap(int_3);

			double_2 = double_1 + double_2;
			long_4 = long_4;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
			if(1)
			{
				int int_4 = 1;
				if(1)
				{
					double_2 = double_3 + double_1;
					int_2 = int_1 * int_4;
				}
				char_1 = v_server_pool_old_deinit(short_3,float_3);

				long_4 = v_stats_recreate(char_1,unsigned_int_1);

				int_4 = int_3 + int_1;
			}
		}
	}
	return float_1;
}
float v_mbuf_free( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_2;
	float_1 = float_1 * float_1;
	double_4 = double_3 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	return float_1;
}
void v_mbuf_deinit()
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = v_mbuf_free(float_2);

	long_1 = long_1;
	v_mbuf_remove(int_1,long_1);

	int_2 = int_1 * int_1;
}
unsigned int v_msg_free( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1;
	return unsigned_int_3;
}
void v_msg_deinit()
{
	double double_1 = 1;
	long long_1 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long long_3 = 1;
		double double_2 = 1;
		long_1 = long_2;
		long_3 = long_2 + long_1;
		double_1 = double_2 + double_1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 * float_1;
		}
	}
	long_4 = long_1 * long_1;
	if(1)
	{
		unsigned_int_1 = v_msg_free(double_1);

		double_1 = double_1 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_2;
			double_4 = double_3 * double_1;
			unsigned_int_3 = unsigned_int_1;
			int_2 = int_3;
		}
		int_3 = int_4;
	}
	double_1 = double_4 * double_3;
}
double v_conn_free( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char_2 = char_1 + char_2;
	double_1 = double_1 + double_1;
	return double_1;
}
void v_conn_deinit()
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		short short_3 = 1;
		int int_1 = 1;
		long long_1 = 1;
		short_3 = short_1 * short_2;
		int_1 = int_1 + int_1;
		long_1 = long_1 + long_1;
	}
	float_1 = float_2;
	double_1 = v_conn_free(double_2);

}
void v_proxy_adm_destroy( short parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_1 = short_1 + short_1;
		v_event_base_destroy(float_1);

		short_3 = short_1 * short_2;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_2 * char_3;
	}
	double_1 = double_1 * double_1;
}
int v_event_wait( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_5 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_4 = 1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1 * short_2;
	float_1 = float_1 + float_1;
	if(1)
	{
		double_3 = double_3;
	}
	int_1 = int_1 + int_1;
	int_1 = int_2 + int_3;
	int_4 = int_2 * int_4;
	char_1 = char_1 + char_2;
	double_1 = double_1 + double_4;
	int_3 = int_2 + int_2;
	float_1 = float_2 * float_3;
	double_3 = double_5 * double_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	int_4 = int_5 * int_3;
	if(1)
	{
		char_2 = char_2 + char_2;
		char_2 = char_2 + char_1;
	}
	long_3 = long_1 * long_2;
	float_3 = float_4 + float_2;
	if(1)
	{
		short short_4 = 1;
		char char_3 = 1;
		short_1 = short_4 * short_1;
		double_4 = double_1 + double_3;
		char_3 = char_2 * char_2;
		char_3 = char_2 * char_2;
	}
	if(1)
	{
		double double_6 = 1;
		double_4 = double_1 * double_6;
	}
	return int_1;
}
double v_proxy_adm_start()
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_1;
	long_2 = long_1 * long_2;
	double_2 = double_1 + double_1;
	double_3 = double_3 + double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = v_event_wait(char_1,int_2);

	double_2 = double_2 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char_2 = char_2 + char_2;
		if(1)
		{
		}
	}
	return double_1;
}
unsigned int v_proxy_adm_listen( double parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2;
	int_2 = int_1 * int_1;
	double_3 = double_1 + double_2;
	if(1)
	{
		int_2 = int_3 + int_2;
	}
	double_5 = double_3 * double_4;
	if(1)
	{
		char char_1 = 1;
		int_1 = v_event_add_conn(float_1,short_1);

		char_1 = char_1 * char_2;
	}
	int_4 = v_nc_set_nonblocking(int_1);

	double_3 = double_1 * double_3;
	if(1)
	{
		int_4 = int_1;
	}
	int_1 = int_3;
	if(1)
	{
		double double_6 = 1;
		char_3 = v_proxy_reuse();

		double_6 = double_2 * double_6;
	}
	double_1 = double_3;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2 + long_1;
	}
	double_3 = double_2 + double_4;
	if(1)
	{
		char char_4 = 1;
		char_4 = char_4 + char_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double_3 = double_4 + double_2;
	}
	return unsigned_int_3;
	int_1 = v_event_del_out(double_4,char_3);

}
double v_proxy_adm_loop(double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_5 = 1;
	char_2 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 * float_2;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_1;
	long_2 = long_1 + long_1;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 + int_1;
		short_1 = short_2 + short_2;
		unsigned_int_1 = unsigned_int_1;
		int_1 = v_event_del_conn(float_1,char_1);

		int_4 = int_2 + int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			double double_4 = 1;
			char char_3 = 1;
			if(1)
			{
				double double_3 = 1;
				float float_3 = 1;
				float float_4 = 1;
				int_1 = v_event_add_out(long_1,short_2);

				int_5 = int_6;
				double_4 = double_1 * double_3;
				int_4 = int_4 * int_5;
				int_5 = v_nc_get_soerror(int_7);

				double_5 = double_2 * double_5;
				float_2 = float_3 + float_4;
				unsigned_int_2 = unsigned_int_3;
				if(1)
				{
					int int_8 = 1;
					char char_4 = 1;
					int_3 = int_8;
					char_4 = char_3 * char_1;
				}
			}
			if(1)
			{
				double_1 = double_4 * double_1;
				char_3 = char_3;
			}
		}
	}
	if(1)
	{
		int_5 = int_6 + int_6;
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			int int_9 = 1;
			short_4 = short_3 * short_2;
			int_5 = int_9 + int_1;
		}
	}
	return double_5;
}
void v_proxy_adm_unref( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_1;
	double_2 = double_1 + double_1;
	short_2 = short_1 + short_2;
	double_4 = double_3 * double_1;
	long_2 = long_1 + long_2;
	long_1 = long_2 + long_2;
	double_5 = double_2 * double_2;
	float_3 = float_2 * float_3;
}
void v_proxy_adm_ref( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double_3 = double_1 * double_2;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_2;
	short_2 = short_1 + short_1;
	double_2 = double_3 * double_3;
	char_3 = char_1 * char_2;
	long_2 = long_1 + long_1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	short_4 = short_2 + short_3;
	int_1 = int_1 * int_1;
	double_2 = double_3 * double_3;
}
void v_proxy_adm_close( unsigned int parameter_1,long parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short_1 = short_1;
	double_1 = double_2;
	if(1)
	{
		double double_3 = 1;
		int_1 = int_1 * int_1;
		double_1 = double_3 + double_4;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2 + int_2;
	short_1 = short_2;
	char_1 = char_1 * char_1;
	long_2 = long_1 + long_1;
	v_conn_put_proxy_adm(unsigned_int_3);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		double_4 = double_2 * double_4;
	}
	short_1 = short_1 * short_3;
	int_1 = int_1 * int_2;
}
long v_proxy_adm_accept( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	float float_4 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int_2 = int_1 * int_1;
	long_3 = long_1 + long_2;
	float_2 = float_1 + float_1;
	char_1 = v_conn_ncurr_conn();

	short_1 = short_1 * short_1;
	double_1 = double_1 + double_1;
	float_3 = float_2 * float_1;
	long_3 = long_2;
	int_3 = v_nc_set_nonblocking(int_4);

	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "C") > 0)
		{
			short short_2 = 1;
			short short_4 = 1;
			if(1)
			{
				double double_3 = 1;
				double_3 = double_1 * double_2;
				float_3 = float_1 * float_2;
			}
			if(1)
			{
				short_1 = short_1 + short_2;
				double_4 = double_2 * double_4;
			}
			if(1)
			{
				float_3 = float_3 + float_1;
				float_1 = float_1;
			}
			int_5 = v_event_add_conn(float_4,short_3);

			short_2 = short_4 * short_4;
		}
		float_2 = float_1 * float_4;
	}
	if(1)
	{
		long long_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long_4 = long_3 + long_2;
		int_1 = v_nc_unresolve_peer_desc(int_1);

		unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
		if(1)
		{
			unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
		}
	}
	char_2 = char_1 * char_1;
	if(1)
	{
		char_2 = char_3 * char_2;
		int_5 = int_5 + int_4;
		if(1)
		{
			long_2 = long_3 + long_5;
		}
	}
	int_5 = v_conn_get_proxy_adm(int_3,short_1,-1 );

	double_6 = double_4 * double_5;
	if(1)
	{
		float float_5 = 1;
		int_2 = int_2 * int_2;
		float_5 = float_1 * float_5;
	}
	if(1)
	{
		char char_4 = 1;
		char_4 = char_3 + char_3;
		if(1)
		{
			int_5 = int_3 + int_4;
		}
	}
	char_2 = v_conn_ncurr_cconn();

	long_2 = long_5;
	if(1)
	{
		int int_6 = 1;
		v_conn_ncurr_cconn_proxy_adm();

		int_6 = int_1 + int_5;
		long_3 = long_1 * long_3;
	}
	int_1 = v_nc_set_tcpnodelay(int_5);

	long_2 = long_3 + long_3;
	return long_5;
}
double v_proxy_adm_recv( double parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	short_1 = short_2;
	long_1 = v_proxy_adm_accept(double_1,double_1);

	unsigned_int_1 = unsigned_int_1;
	return double_2;
}
void v_proxy_adm_client_unref( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_2 = double_1 * double_1;
	double_3 = double_1 + double_3;
	double_3 = double_1 + double_4;
	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_3;
	float_2 = float_2 + float_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	int_3 = int_1 + int_2;
}
void v_proxy_adm_client_ref( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	short_2 = short_1 + short_1;
	double_1 = double_1 * double_2;
	double_1 = double_2 * double_2;
	int_1 = int_1 * int_1;
	double_1 = double_1;
	short_1 = short_3 + short_4;
	int_2 = int_3;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
	double_4 = double_1 + double_3;
	int_4 = int_2 + int_3;
}
short v_proxy_adm_client_active( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1;
	int_2 = int_1 * int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	short_2 = short_1 * short_2;
	return short_2;
}
void v_conn_put_proxy_adm( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_1 + char_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
}
void v_proxy_adm_client_close( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_6 = 1;
	short short_3 = 1;
	float_3 = float_1 + float_2;
	v_conn_put_proxy_adm(unsigned_int_1);

	double_1 = double_1 + double_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3 + double_1;
		int_2 = int_1 + int_1;
	}
	long_1 = long_1 * long_1;
	if(1)
	{
		long_2 = long_2 * long_2;
		float_4 = float_1 + float_3;
		short_1 = short_2;
		float_2 = float_2 + float_2;
		int_2 = int_2 * int_3;
	}
	unsigned_int_2 = unsigned_int_3;
	int_3 = int_4 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		float float_5 = 1;
		char_2 = char_1 + char_1;
		long_3 = long_2 + long_2;
		if(1)
		{
			char char_3 = 1;
			float_5 = float_1 * float_2;
			char_4 = char_3 * char_2;
		}
		if(1)
		{
			float_5 = float_4 * float_2;
			float_1 = float_4;
			short_1 = short_2 + short_2;
			long_2 = long_1 * long_1;
		}
	}
	double_4 = double_2 * double_4;
	int_1 = int_5 * int_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		char char_5 = 1;
		char_1 = char_5 * char_1;
	}
	v_req_put(long_2);

	char_4 = char_2 * char_6;
	short_2 = short_3 * short_3;
}
void v_rsp_send_done_proxy_adm( int parameter_1,short parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_2;
	double_2 = double_3 + double_4;
	v_req_put_proxy_adm(int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
	float_2 = float_1 * float_1;
	char_2 = char_3 + char_2;
	int_2 = int_2 * int_2;
	int_3 = int_2;
	int_1 = int_1 + int_2;
	double_2 = double_3 * double_1;
}
short v_rsp_send_next_proxy_adm( int parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	float float_5 = 1;
	float_3 = float_1 * float_2;
	float_4 = float_3 + float_1;
	float_1 = v_req_error(unsigned_int_1,unsigned_int_1);

	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_1;
	short_2 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
			short short_3 = 1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			int_1 = v_event_del_out(double_1,char_1);

			short_2 = short_2 + short_3;
		}
		unsigned_int_2 = unsigned_int_4;
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1 + double_2;
		}
	}
	unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2 + char_1;
		int_2 = int_1 * int_3;
		double_3 = double_3 * double_3;
	}
	if(1)
	{
		double_3 = double_1 + double_3;
	}
	float_4 = float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_1;
	int_3 = v_req_done(double_3,short_4);

	int_1 = int_2 + int_3;
	double_1 = double_3 * double_1;
	float_5 = float_5 * float_5;
	return short_2;
}
void v_msg_send_proxy_adm( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_4 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	long_1 = long_1 + long_2;
	long_3 = long_1 * long_1;
	double_1 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		int int_1 = 1;
		int int_3 = 1;
		if(1)
		{
			if(1)
			{
				char char_4 = 1;
				int int_2 = 1;
				float_1 = float_1 + float_1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				if(1)
				{
					short_2 = short_1 + short_2;
				}
				if(1)
				{
					char_2 = char_1 + char_1;
				}
				char_1 = char_3 * char_4;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
				int_2 = int_1 + int_1;
			}
			if(1)
			{
				char char_5 = 1;
				char_5 = char_3 + char_3;
			}
			long_2 = long_3 * long_2;
		}
		if(1)
		{
			if(1)
			{
				short short_3 = 1;
				float float_3 = 1;
				short_3 = short_3 * short_4;
				short_4 = short_1 + short_2;
				if(1)
				{
					long_2 = long_2 + long_2;
				}
				if(1)
				{
					int_1 = int_3 + int_1;
				}
				unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
				float_3 = float_1 * float_2;
				short_1 = short_2 + short_5;
			}
			if(1)
			{
				unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
			}
			short_2 = short_5 + short_1;
		}
		if(1)
		{
			char_1 = char_2 + char_2;
			double_2 = double_2;
			int_5 = int_4 + int_4;
			int_5 = int_4 * int_3;
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				char char_6 = 1;
				if(1)
				{
					long_4 = long_3 * long_1;
				}
				if(1)
				{
					double double_3 = 1;
					long_1 = long_2 * long_1;
					double_1 = double_2 + double_3;
					unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
				}
				int_4 = v_msg_send_chain(unsigned_int_5,float_4,unsigned_int_7);

				char_3 = char_1 * char_6;
				unsigned_int_7 = unsigned_int_6 * unsigned_int_4;
				int_3 = int_6 * int_4;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			double double_4 = 1;
			if(1)
			{
				if(1)
				{
					double_1 = double_4 * double_2;
				}
				if(1)
				{
					double_4 = double_2 * double_1;
					float_1 = float_2 + float_2;
				}
			}
			if(1)
			{
				if(1)
				{
					unsigned_int_1 = unsigned_int_1 * unsigned_int_7;
				}
				if(1)
				{
					double double_5 = 1;
					short_4 = short_5 * short_2;
					double_5 = double_5 * double_4;
					unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
				}
			}
			if(1)
			{
				if(1)
				{
					long long_5 = 1;
					long long_6 = 1;
					unsigned_int_4 = unsigned_int_7 + unsigned_int_4;
					long_6 = long_5 + long_1;
					long_4 = long_1 * long_4;
				}
				if(1)
				{
					int int_7 = 1;
					char_3 = char_1 + char_2;
					int_6 = int_5 + int_7;
				}
			}
		}
	}
}
double v_proxy_each_deinit_for_reload()
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = v_proxy_close_for_reload(unsigned_int_1,int_1);

	double_1 = double_1;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
	return double_1;
}
char v_conn_get_for_reload()
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
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_4 = 1;
	char_1 = char_1 + char_2;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 * short_2;
	double_3 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_4 = int_1 + int_2;
	double_1 = double_2 + double_3;
	double_3 = double_2;
	double_2 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_2;
	long_3 = long_1 + long_2;
	char_3 = char_1 + char_2;
	unsigned_int_2 = v__conn_get_for_reload();

	float_1 = float_1;
	int_2 = int_3 * int_4;
	unsigned_int_1 = unsigned_int_3;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	int_1 = int_4 + int_2;
	int_4 = int_5 * int_6;
	return char_4;
}
void v_array_swap( long parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 + short_1;
	int_1 = int_2;
	int_2 = int_3 + int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
}
long v_proxy_close_for_reload( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float_2 = float_1 + float_1;
	double_1 = double_1 + double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		long_1 = long_1;
	}
	short_2 = short_1 + short_1;
	v_conn_put_for_reload(float_3);

	float_2 = float_1 * float_1;
	long_1 = long_2 + long_2;
	float_2 = float_2 * float_1;
	double_1 = double_2 * double_3;
	int_1 = int_1 * int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	short_4 = short_2 + short_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	return long_1;
}
unsigned int v__conn_get_for_reload()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int_1 = int_2;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	double_3 = double_2 + double_2;
	int_3 = int_1 * int_2;
	double_4 = double_4 * double_5;
	long_2 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 * double_3;
	int_3 = int_3 + int_4;
	int_1 = int_3 * int_2;
	short_2 = short_1 + short_1;
	float_1 = float_1 + float_2;
	long_3 = long_2 * long_2;
	int_4 = int_2 * int_2;
	long_1 = long_2 + long_2;
	long_1 = long_4 * long_3;
	double_4 = double_5 * double_6;
	long_4 = long_4;
	double_5 = double_7 + double_5;
	double_3 = double_5 + double_3;
	double_2 = double_3 * double_1;
	int_3 = int_5 * int_6;
	double_6 = double_6 + double_1;
	long_4 = long_5;
	double_6 = double_5 + double_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "yy") < 0)
	{
		int_1 = int_6;
	}
	short_1 = short_2;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_6;
	short_3 = short_1;
	return unsigned_int_7;
}
void v_conn_get_proxy_for_reload(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_5 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 + double_2;
	char controller4vul_2612[2];
	fgets(controller4vul_2612 ,2 ,stdin);
	if( strcmp( controller4vul_2612, "1") > 0)
	{
		short_1 = v_proxy_recv(char_1,float_1,uni_para);

	}
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_4 * double_4;
	char_3 = char_1 + char_2;
	double_1 = double_5;
	unsigned_int_3 = unsigned_int_4;
	double_3 = double_6 * double_3;
	char_2 = char_3;
	double_1 = double_4;
	int_4 = int_1 * int_3;
	double_1 = double_7 * double_5;
	double_4 = double_3 * double_8;
	double_8 = double_8 + double_3;
	int_2 = int_1 * int_5;
	float_1 = float_2 * float_1;
	short_2 = short_1 + short_1;
	double_3 = double_8 + double_2;
	short_1 = short_1 + short_3;
}
int v_proxy_init_for_reload( unsigned int parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	char char_4 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_2;
	float_1 = float_1 * float_1;
	char controller4vul_2611[3];
	fgets(controller4vul_2611 ,3 ,stdin);
	if( strcmp( controller4vul_2611, "5t") > 0)
	{
		v_conn_get_proxy_for_reload(uni_para);

	}
	float_2 = float_3;
	double_1 = double_1 * double_1;
	if(1)
	{
		char char_3 = 1;
		char_1 = char_3;
	}
	char_4 = char_1 + char_1;
	return int_1;
}
long v_server_pool_each_proxy_conn_new(int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	double_1 = double_1 * double_2;
	double_2 = double_2 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double_3 = double_3 * double_3;
		char controller4vul_2610[3];
		fgets(controller4vul_2610 ,3 ,stdin);
		if( strcmp( controller4vul_2610, "t7") < 0)
		{
			int_1 = v_proxy_init_for_reload(unsigned_int_3,uni_para);

		}
	}
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	return long_3;
}
void v_conf_pool_each_compare()
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_6 = 1;
	float float_2 = 1;
	double double_7 = 1;
	long long_3 = 1;
	char_1 = char_1 * char_1;
	char_2 = v_conf_pool_name_cmp(short_1,unsigned_int_1);

	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_2;
	int_4 = int_3 + int_2;
	int_2 = v_conf_pool_listen_cmp(float_1,int_4);

	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_3 = short_2 * short_2;
		if(1)
		{
			double double_4 = 1;
			double double_5 = 1;
			char_2 = char_2;
			double_5 = double_4 + double_1;
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
	char_4 = char_3 + char_3;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	char_2 = char_4 * char_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_5 = 1;
		int_2 = int_3 * int_2;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int_5 = int_2 + int_1;
			if(1)
			{
				char_4 = v_conf_server_name_cmp(int_1,double_6);

				short_2 = short_2;
				char_4 = v_array_get(float_2,double_7);

				int_3 = int_4;
			}
		}
		if(1)
		{
		}
		if(1)
		{
		}
		long_3 = v_array_n(short_3);

		int_4 = v_string_compare(double_1,long_1);

		int_3 = int_5 * int_5;
	}
	if(1)
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
		if(1)
		{
		}
	}
}
short v_conf_two_check_diff( short parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
	long_1 = v_array_n(short_1);

	float_1 = v_array_each(long_2);

	v_conf_pool_each_compare();

}
float v_conf_begin_parse_from_string( long parameter_1,char parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	if(1)
	{
		double double_2 = 1;
		float_1 = v_conf_yaml_init_from_string(int_1,char_1);

		float_2 = v_conf_event_done(int_2);

		double_1 = double_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		short_1 = v_conf_event_next(double_1);

		long_1 = long_2;
	}
	return float_3;
}
short v_conf_parse_from_string( float parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	char char_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	double_1 = double_1 * double_1;
	double_3 = double_2 + double_3;
	char_1 = v_conf_parse_core(float_1);

	int_2 = int_1 + int_2;
	long_1 = v_array_n(short_1);

	float_4 = float_2 * float_3;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	unsigned_int_1 = v_conf_end_parse(int_3);

	int_4 = int_1 * int_2;
	if(1)
	{
	}
	float_3 = v_conf_begin_parse_from_string(long_2,char_2);

	long_1 = long_2 * long_3;
	return short_2;
}
void v_conf_validate_structure_from_string( float parameter_1,short parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	float_1 = v_conf_yaml_init_from_string(int_1,char_1);

	short_1 = v_conf_event_next(double_1);

	float_1 = v_conf_event_done(int_2);

	char_1 = v_conf_yaml_deinit(short_1);

}
int v_conf_validate_tokens_from_string( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1;
	unsigned_int_1 = v_conf_token_next();

	float_1 = float_1 * float_2;
	int_1 = int_1;
	if(1)
	{
	}
	float_1 = v_conf_yaml_init_from_string(int_1,char_1);

	long_1 = long_1 + long_2;
	char_1 = v_conf_yaml_deinit(short_1);

	short_3 = short_1 + short_2;
	float_3 = float_3 * float_3;
	long_3 = long_3;
	short_1 = v_conf_token_done(double_1);

	int_3 = int_1 * int_2;
	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		int int_4 = 1;
		int_4 = int_3 * int_2;
	}
	return int_1;
}
float v_conf_yaml_init_from_string( int parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_2 = char_1 * char_1;
	float_3 = float_1 * float_2;
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		float_5 = float_4 + float_3;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, ")") > 0)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	long_2 = long_1 + long_2;
	double_2 = double_1 + double_1;
	return float_2;
}
float v_conf_validate_document_from_string( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char_1 = char_1 * char_1;
	float_1 = v_conf_yaml_init_from_string(int_1,char_2);

	double_1 = double_1;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	int_2 = int_1 + int_2;
	double_1 = double_1 + double_1;
	short_2 = short_1 + short_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		char char_3 = 1;
		char_2 = v_conf_yaml_deinit(short_3);

		char_2 = char_1 * char_3;
	}
	int_2 = int_2 + int_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_2 = double_3;
		double_2 = double_2 * double_1;
	}
	short_4 = short_3 * short_1;
	float_2 = float_2 + float_3;
	return float_4;
}
short v_conf_pre_validate_from_string( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_2 = double_1 * double_1;
	double_3 = double_1 * double_3;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	int_1 = v_conf_validate_tokens_from_string(int_2,unsigned_int_1);

	double_3 = double_1 * double_4;
	if(1)
	{
	}
	float_1 = v_conf_validate_document_from_string(float_2,int_1);

	short_1 = short_1;
	return short_1;
	v_conf_validate_structure_from_string(float_1,short_2);

}
double v_conf_create_from_string( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	long long_3 = 1;
	short short_5 = 1;
	short short_6 = 1;
	float float_3 = 1;
	int int_5 = 1;
	double double_4 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1;
	if(1)
	{
	}
	char_1 = char_2 + char_2;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	v_conf_post_validate(float_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short_3 = short_1;
		unsigned_int_2 = unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	char_3 = char_2 * char_1;
	char_4 = char_2 + char_1;
	double_3 = double_2 + double_2;
	short_2 = v_conf_pre_validate_from_string(long_1,int_1);

	int_1 = int_1 + int_1;
	long_1 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	v_array_deinit(int_1);

	short_1 = short_3;
	long_2 = v_conf_dump(float_2);

	v_conf_destroy(double_1);

	double_2 = double_3 * double_1;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_4;
	if(1)
	{
		int_2 = int_2 * int_2;
	}
	int_2 = int_3 + int_3;
	if(1)
	{
		long_1 = long_2 + long_1;
	}
	int_2 = int_4;
	if(1)
	{
		short_4 = v_conf_parse_from_string(float_1,char_1);

		int_2 = int_4 + int_2;
	}
	long_3 = long_1 + long_1;
	short_4 = short_5;
	short_6 = v_array_init(short_2,float_3,char_1);

	int_5 = int_4 + int_3;
	char_2 = char_3 + char_3;
	return double_4;
}
long v_conf_reload( int parameter_1,short parameter_2,double parameter_3,short parameter_4,double parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	int int_6 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_6 = 1;
	long long_7 = 1;
	long long_9 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_2;
	short_1 = short_2;
	int_3 = int_1 * int_2;
	long_2 = long_1 * long_1;
	int_3 = int_3 + int_4;
	if(1)
	{
		int_1 = int_3 + int_1;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
	}
	int_4 = int_2 * int_5;
	unsigned_int_2 = unsigned_int_3;
	float_1 = float_1 * float_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
		long_2 = long_2 + long_2;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		long_2 = long_3 * long_1;
	}
	if(1)
	{
		int_4 = int_6 + int_4;
	}
	if(1)
	{
		short_2 = short_2 * short_1;
	}
	if(1)
	{
		double_2 = double_2 + double_1;
		if(1)
		{
			double_2 = double_2 * double_1;
		}
		unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
	}
	int_3 = int_4;
	if(1)
	{
		double_1 = double_2 * double_3;
		long_5 = long_4 * long_5;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		int int_7 = 1;
		int_5 = int_7 * int_1;
		double_5 = double_4 + double_1;
	}
	if(1)
	{
		char_2 = char_3 * char_1;
		float_1 = float_1 + float_2;
	}
	long_3 = long_4 + long_2;
	char_4 = char_4;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
	if(1)
	{
		double_3 = double_5 * double_4;
		int_2 = int_1 * int_6;
		char_2 = char_4 + char_4;
	}
	long_6 = long_6 + long_7;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_8 = 1;
		double_2 = double_4 * double_1;
		long_9 = long_8 * long_6;
		double_1 = double_2 * double_5;
		float_2 = float_2 * float_1;
	}
	unsigned_int_5 = unsigned_int_3;
	double_3 = double_2 + double_5;
	double_6 = double_2 * double_1;
	unsigned_int_2 = unsigned_int_6 * unsigned_int_4;
	float_1 = float_2 + float_3;
	unsigned_int_4 = unsigned_int_7;
	char_1 = char_4;
	if(1)
	{
		double_6 = double_6 + double_6;
		double_7 = double_2 * double_6;
	}
	char_4 = char_4 + char_3;
	int_4 = int_5 * int_1;
	int_2 = int_6 * int_2;
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		char char_5 = 1;
		unsigned_int_9 = unsigned_int_6 + unsigned_int_8;
		unsigned_int_1 = unsigned_int_5;
		char_5 = char_3 * char_1;
		int_5 = int_1 + int_1;
	}
	int_3 = int_4 + int_2;
	unsigned_int_2 = unsigned_int_5;
	long_5 = long_9;
	if(1)
	{
		unsigned int unsigned_int_10 = 1;
		unsigned_int_10 = unsigned_int_3 * unsigned_int_8;
	}
	if(1)
	{
		if(1)
		{
			int_5 = int_3 * int_3;
		}
		short_2 = short_1 + short_1;
	}
	char controller4vul_2607[3];
	fgets(controller4vul_2607 ,3 ,stdin);
	if( strcmp( controller4vul_2607, "^X") > 0)
	{
		double double_8 = 1;
		double double_9 = 1;
		double_7 = double_5 * double_2;
		double_6 = double_8 * double_9;
		char controller4vul_2608[2];
		fgets(controller4vul_2608 ,2 ,stdin);
		if( strcmp( controller4vul_2608, "C") > 0)
		{
			char controller4vul_2609[2];
			fgets(controller4vul_2609 ,2 ,stdin);
			if( strcmp( controller4vul_2609, "_") > 0)
			{
				long_7 = v_server_pool_each_proxy_conn_new(uni_para);

				short_1 = short_2 * short_2;
			}
		}
		double_7 = double_2 + double_7;
		if(1)
		{
			if(1)
			{
				float float_4 = 1;
				float_2 = float_2 * float_4;
			}
		}
	}
	if(1)
	{
		double_1 = double_7 + double_1;
	}
	return long_9;
}
long v_proxy_adm_command_reload_conf( char parameter_1,char parameter_2,unsigned int parameter_3,long parameter_4,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	float float_4 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float_3 = float_1 + float_2;
	char_2 = char_1 + char_2;
	int_1 = int_1 * int_1;
	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_2 * int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	float_2 = float_1 * float_4;
	short_3 = short_2;
	double_1 = double_1 * double_2;
	long_2 = long_1 * long_2;
	double_2 = double_1 * double_1;
	int_2 = int_3 * int_3;
	char controller4vul_2606[2];
	fgets(controller4vul_2606 ,2 ,stdin);
	if( strcmp( controller4vul_2606, "<") < 0)
	{
		char char_3 = 1;
		long_2 = v_conf_reload(int_1,short_3,double_1,short_3,double_2,uni_para);

		char_3 = char_1 * char_3;
	}
	if(1)
	{
		short_3 = short_3;
	}
	return long_2;
}
char v_proxy_adm_command_find_keys( int parameter_1,int parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	float float_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	short short_3 = 1;
	float_3 = float_1 + float_2;
	v_msg_append_proxy_adm(float_2,float_1,char_1);

	char_1 = char_2 + char_1;
	int_1 = int_2;
	long_1 = v_server_pool_idx(int_1,unsigned_int_1,float_3);

	char_1 = char_2 + char_3;
	double_1 = double_1 * double_1;
	float_2 = float_1 + float_2;
	double_2 = double_1 * double_1;
	unsigned_int_2 = v_get_server_pools(char_3,double_1);

	unsigned_int_1 = unsigned_int_2;
	float_4 = float_3 * float_3;
	char_5 = char_4 + char_1;
	char_5 = char_5 + char_3;
	char_6 = v_array_get(float_1,double_1);

	float_2 = float_2 * float_5;
	float_4 = float_2 + float_1;
	double_2 = v_proxy_adm_find_server_pool(int_2,long_1,short_1,short_2);

	char_4 = char_4;
	short_1 = short_2 * short_2;
	int_1 = int_3 * int_1;
	double_2 = double_2 + double_1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
		}
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long_2 = v_array_n(short_3);

		char_3 = char_2 * char_1;
		double_1 = double_2 + double_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		if(1)
		{
			int_2 = int_1 + int_1;
		}
		long_2 = long_1 + long_1;
		if(1)
		{
		}
		char_6 = char_1 * char_2;
		if(1)
		{
		}
		unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
		if(1)
		{
			int_1 = int_1;
		}
	}
	return char_5;
}
unsigned int v_proxy_adm_command_find_key( float parameter_1,short parameter_2,short parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	short short_4 = 1;
	long long_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	float float_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1;
	double_1 = v_proxy_adm_find_server_pool(int_1,long_1,short_1,short_2);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	int_3 = int_1 * int_2;
	v_msg_append_proxy_adm(float_1,float_1,char_2);

	double_2 = double_1 * double_1;
	char_2 = char_3 * char_2;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
	char_1 = char_3 + char_2;
	int_2 = int_2;
	int_3 = int_1 * int_4;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
	long_1 = v_server_pool_idx(int_4,unsigned_int_2,float_1);

	float_1 = float_2 + float_1;
	short_3 = short_3 * short_1;
	short_1 = short_2;
	short_2 = short_1 * short_2;
	long_2 = v_array_n(short_4);

	long_3 = long_2 * long_1;
	char_4 = char_2 * char_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
		}
	}
	unsigned_int_8 = unsigned_int_2 + unsigned_int_7;
	char_4 = char_2 + char_1;
	char_1 = char_2 + char_4;
	unsigned_int_3 = v_get_server_pools(char_4,double_3);

	int_1 = int_4 + int_5;
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "?") < 0)
	{
		long_2 = long_3;
	}
	int_1 = int_6 + int_4;
	if(1)
	{
	}
	int_6 = int_7;
	if(1)
	{
	}
	int_5 = int_4 + int_8;
	if(1)
	{
		float_2 = float_2 * float_1;
	}
	return unsigned_int_7;
	char_4 = v_array_get(float_3,double_1);

}
short v_msg_append_servers_info( long parameter_1,double parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char_1 = v_array_get(float_1,double_1);

	int_2 = int_1 * int_1;
	v_msg_append_proxy_adm(float_2,float_2,char_1);

	int_1 = int_1 + int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_2;
	long_1 = long_1;
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		long_2 = v_array_n(short_2);

		int_3 = int_4 * int_2;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		if(1)
		{
		}
		long_3 = long_3 + long_2;
		if(1)
		{
		}
		long_3 = long_2 + long_3;
		if(1)
		{
		}
	}
	return short_3;
}
float v_proxy_adm_command_show_servers( double parameter_1,char parameter_2,long parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int_1 = int_1 * int_2;
	double_1 = double_1;
	double_2 = v_proxy_adm_find_server_pool(int_1,long_1,short_1,short_1);

	double_2 = double_1 * double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = v_get_server_pools(char_1,double_2);

	unsigned_int_3 = unsigned_int_1;
	float_1 = float_1 + float_1;
	int_3 = int_1 + int_1;
	long_1 = v_array_n(short_2);

	int_1 = int_3 + int_3;
	double_3 = double_1 * double_4;
	int_4 = int_3 + int_3;
	long_4 = long_2 * long_3;
	char_1 = v_array_get(float_1,double_3);

	int_3 = int_1 * int_5;
	int_6 = int_1 + int_6;
	int_3 = int_4;
	int_2 = int_1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
		}
	}
	short_3 = v_msg_append_servers_info(long_4,double_4);

	short_2 = short_4 * short_4;
	if(1)
	{
		short short_5 = 1;
		short_4 = short_5 + short_4;
	}
	return float_1;
}
double v_proxy_adm_find_server_pool( int parameter_1,long parameter_2,short parameter_3,short parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short_3 = short_1 * short_2;
	double_3 = double_1 + double_2;
	float_1 = float_1 * float_1;
	short_1 = short_3;
	long_1 = v_array_n(short_3);

	int_1 = v_string_compare(double_4,long_1);

	float_2 = float_2 * float_1;
	int_1 = int_2 * int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_1;
	float_2 = float_1;
	long_2 = long_1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_msg_append_proxy_adm(float_2,float_1,char_1);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			int int_4 = 1;
			int_4 = int_2 * int_1;
		}
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		int_3 = int_1;
		double_2 = double_1;
		if(1)
		{
			long long_3 = 1;
			long_4 = long_2 * long_3;
		}
		long_4 = long_5;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		}
	}
	return double_2;
	char_1 = v_array_get(float_2,double_4);

}
char v_proxy_adm_command_show_pool( long parameter_1,double parameter_2,double parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_5 = 1;
	long long_2 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int_1 = int_2;
	float_2 = float_1 + float_1;
	double_1 = v_proxy_adm_find_server_pool(int_3,long_1,short_1,short_1);

	double_1 = double_1 + double_1;
	unsigned_int_1 = v_get_server_pools(char_1,double_2);

	char_2 = char_1 * char_1;
	char_1 = char_3 * char_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_3 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 * double_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	char_2 = char_3 + char_5;
	short_1 = v_msg_append_server_pool_info(long_2,double_5);

	int_2 = int_4 + int_4;
	int_4 = int_3;
	long_1 = long_1 + long_2;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
		}
	}
	long_2 = v_array_n(short_1);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char_2 = v_array_get(float_1,double_1);

		int_4 = int_3 + int_3;
	}
	return char_5;
}
double v_proxy_adm_command_show_pools( float parameter_1,short parameter_2,long parameter_3,long parameter_4)
{
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	long_1 = v_array_n(short_1);

	unsigned_int_1 = v_get_server_pools(char_1,double_1);

	double_1 = double_2 * double_1;
	double_3 = double_4;
	float_1 = float_1;
	int_2 = int_1 + int_1;
	float_1 = float_1;
	v_msg_append_proxy_adm(float_2,float_3,char_2);

	double_5 = double_3 * double_4;
	double_1 = double_5 * double_6;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = v_array_get(float_2,double_7);

	char_1 = char_2 * char_2;
	short_2 = short_2 + short_1;
	short_1 = short_2 * short_3;
	int_3 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		double_3 = double_3;
		char_2 = char_1 * char_1;
		if(1)
		{
			long_1 = long_1 + long_1;
		}
		int_3 = int_1 * int_4;
		if(1)
		{
			int int_5 = 1;
			int int_6 = 1;
			int_6 = int_2 * int_5;
		}
	}
	return double_7;
}
int v_dist_type_to_string( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	return int_1;
}
unsigned int v_hash_type_to_string( unsigned int parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 + float_1;
	return unsigned_int_1;
}
short v_msg_append_server_pool_info( long parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	short short_1 = 1;
	double double_5 = 1;
	int int_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_8 = 1;
	int int_5 = 1;
	double double_9 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_11 = 1;
	char char_8 = 1;
	char char_9 = 1;
	float float_7 = 1;
	long long_7 = 1;
	float float_8 = 1;
	int int_9 = 1;
	double double_12 = 1;
	unsigned_int_1 = v_hash_type_to_string(unsigned_int_1);

	char_1 = char_1 + char_1;
	double_3 = double_1 * double_2;
	char_2 = char_1 * char_2;
	long_1 = long_1 + long_2;
	long_2 = long_2 * long_3;
	int_1 = int_1;
	double_3 = double_1;
	double_1 = double_4 + double_3;
	double_2 = double_1 + double_3;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	v_string_init(int_2);

	double_4 = double_1 + double_2;
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	v_msg_append_proxy_adm(float_1,float_1,char_3);

	short_1 = short_1;
	if(1)
	{
	}
	double_3 = double_5 * double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1;
	int_3 = int_2 + int_3;
	if(1)
	{
	}
	double_7 = double_5 * double_6;
	float_1 = float_2 + float_2;
	if(1)
	{
	}
	double_1 = double_3 * double_3;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	v_string_deinit(char_1);

	double_5 = double_3 * double_4;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
	}
	double_4 = double_2 * double_6;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	char_2 = char_4 + char_5;
	if(1)
	{
	}
	char_5 = char_2 * char_6;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	if(1)
	{
	}
	double_1 = double_3 + double_3;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_5 * double_2;
		int_1 = int_1 * int_1;
		if(1)
		{
		}
		int_2 = int_4;
		long_2 = long_1 * long_2;
		short_2 = short_1 * short_1;
		if(1)
		{
		}
		double_4 = double_5 + double_5;
		if(1)
		{
		}
	}
	if(1)
	{
		float_2 = float_2 + float_2;
		int_3 = int_4 + int_2;
		if(1)
		{
		}
		unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
		long_5 = long_4 + long_5;
		char_2 = char_5 * char_3;
		if(1)
		{
		}
		double_8 = double_6 + double_3;
		if(1)
		{
		}
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_4 + int_2;
	if(1)
	{
	}
	if(1)
	{
		int_5 = int_4 * int_3;
	}
	if(1)
	{
		char_5 = v_array_get(float_2,double_3);

		double_7 = double_8 * double_5;
	}
	double_9 = double_4 + double_2;
	long_4 = long_6;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
	}
	long_1 = v_array_n(short_2);

	int_4 = int_2 + int_4;
	int_2 = int_4 + int_1;
	if(1)
	{
	}
	if(1)
	{
		int_4 = int_3;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_6;
	}
	short_2 = short_3 * short_2;
	short_2 = short_4;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	if(1)
	{
	}
	int_2 = int_2 * int_5;
	int_1 = v_dist_type_to_string(short_3);

	char_3 = char_4 * char_1;
	if(1)
	{
	}
	float_2 = float_3 * float_1;
	double_6 = double_4 + double_10;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_7 + unsigned_int_5;
	if(1)
	{
	}
	double_4 = double_9 * double_9;
	float_3 = float_3 * float_1;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_7 + unsigned_int_7;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_8;
	float_5 = float_1 + float_4;
	if(1)
	{
	}
	unsigned_int_8 = unsigned_int_9 + unsigned_int_2;
	if(1)
	{
	}
	float_4 = float_6 + float_4;
	unsigned_int_10 = unsigned_int_7 + unsigned_int_9;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_9 = unsigned_int_4 + unsigned_int_2;
	}
	if(1)
	{
		short short_5 = 1;
		short_3 = short_4 + short_5;
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_9;
	int_4 = int_1;
	if(1)
	{
	}
	char_6 = char_1;
	if(1)
	{
	}
	if(1)
	{
		char char_7 = 1;
		short_4 = short_6 * short_4;
		char_1 = char_3 * char_7;
		if(1)
		{
		}
		double_6 = double_1;
		int_2 = int_5 + int_4;
		int_4 = int_6 + int_7;
		if(1)
		{
		}
		int_6 = int_5;
		if(1)
		{
		}
	}
	short_4 = short_4 + short_1;
	float_3 = float_5 * float_5;
	if(1)
	{
	}
	unsigned_int_7 = unsigned_int_6 + unsigned_int_2;
	double_2 = double_11 * double_2;
	double_1 = double_6 * double_10;
	if(1)
	{
	}
	int_2 = int_6 * int_5;
	if(1)
	{
	}
	if(1)
	{
		double_10 = double_4;
	}
	char_5 = char_1;
	if(1)
	{
	}
	if(1)
	{
		char_8 = char_5;
	}
	if(1)
	{
		double_6 = double_6 + double_10;
	}
	char_6 = char_9 * char_8;
	float_7 = float_4 * float_5;
	if(1)
	{
	}
	double_4 = double_8 + double_11;
	if(1)
	{
	}
	if(1)
	{
		char_1 = char_5 + char_8;
		unsigned_int_2 = unsigned_int_10 + unsigned_int_9;
		if(1)
		{
		}
		int_7 = int_5 + int_2;
		long_2 = long_2 * long_3;
		char_6 = char_8 * char_3;
		if(1)
		{
		}
		float_2 = float_2 * float_7;
		if(1)
		{
		}
	}
	if(1)
	{
		short short_7 = 1;
		double_7 = double_11;
		double_5 = double_4 + double_9;
		if(1)
		{
		}
		long_2 = long_7;
		short_6 = short_7;
		float_8 = float_2 * float_7;
		if(1)
		{
		}
		long_4 = long_6;
		if(1)
		{
		}
	}
	if(1)
	{
		int int_8 = 1;
		long long_8 = 1;
		int_6 = int_4 + int_2;
		int_9 = int_3 + int_8;
		if(1)
		{
		}
		float_4 = float_2 + float_6;
		int_2 = int_6;
		long_8 = long_4 * long_6;
		if(1)
		{
		}
		int_7 = int_6 * int_4;
		if(1)
		{
		}
	}
	double_1 = double_5;
	double_3 = double_3 * double_10;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	long_5 = long_1 + long_4;
	double_3 = double_10;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_10 = 1;
		int int_11 = 1;
		float_8 = float_5 + float_4;
		unsigned_int_10 = unsigned_int_8 * unsigned_int_6;
		if(1)
		{
		}
		int_11 = int_6 + int_10;
		if(1)
		{
		}
		long_1 = long_6 + long_7;
		if(1)
		{
		}
		double_6 = double_8 + double_11;
		if(1)
		{
		}
		int_9 = int_6 * int_6;
		if(1)
		{
		}
	}
	double_4 = double_12 * double_8;
	return short_1;
}
unsigned int v_get_server_pools( char parameter_1,double parameter_2)
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
short v_proxy_adm_command_show_conf( int parameter_1,int parameter_2,short parameter_3,char parameter_4,unsigned int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	double double_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_6 = 1;
	long_2 = long_1 + long_2;
	char_1 = v_array_get(float_1,double_1);

	float_3 = float_2 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 * char_1;
	double_4 = double_2 * double_3;
	char_2 = char_1 + char_1;
	double_4 = double_4 + double_5;
	short_1 = v_msg_append_server_pool_info(long_1,double_5);

	double_1 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_3;
	long_3 = long_2 + long_2;
	unsigned_int_1 = unsigned_int_3;
	long_5 = long_1 * long_4;
	char_1 = char_2 * char_1;
	float_3 = float_2 * float_3;
	long_6 = v_array_n(short_2);

	unsigned_int_4 = v_get_server_pools(char_2,double_1);

	unsigned_int_1 = unsigned_int_5 + unsigned_int_2;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_3 * char_2;
		char_1 = char_1;
		if(1)
		{
			int_1 = int_1 * int_1;
		}
		double_4 = double_1 + double_4;
		if(1)
		{
			char char_5 = 1;
			char_1 = char_5 + char_5;
		}
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_6 = 1;
		double double_7 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double_1 = double_5 + double_5;
		double_7 = double_6 + double_7;
		if(1)
		{
			float_3 = float_1 * float_1;
		}
		int_3 = int_1 + int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		}
	}
	return short_2;
	v_msg_append_proxy_adm(float_2,float_2,char_6);

}
short v_msg_ensure_mbuf_proxy_adm( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
		char char_1 = 1;
		int_1 = int_1 * int_1;
		if(1)
		{
		}
		short_1 = v_mbuf_size(long_1);

		char_1 = char_1 + char_1;
	}
	if(1)
	{
		int int_2 = 1;
		long_1 = v_mbuf_get_proxy_adm();

		int_1 = int_2 + int_1;
	}
	return short_1;
	v_mbuf_insert(double_4,unsigned_int_1);

}
void v_msg_append_proxy_adm( float parameter_1,float parameter_2,char parameter_3)
{
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float_1 = v_mbuf_data_size();

	short_1 = v_msg_ensure_mbuf_proxy_adm(long_1,long_2);

	v_mbuf_copy(int_1,int_2,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	short_1 = v_mbuf_size(long_3);

	char_1 = char_1 + char_2;
	float_1 = float_2 * float_1;
	float_2 = float_3 * float_1;
}
short v_proxy_adm_command_help( float parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	double double_5 = 1;
	short short_4 = 1;
	double double_6 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_9 = 1;
	long long_5 = 1;
	short short_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_11 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int_2 = int_1 * int_1;
	double_2 = double_1 + double_1;
	long_1 = long_1 * long_1;
	double_1 = double_1 * double_3;
	double_2 = double_2 + double_3;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_1 = int_1 * int_1;
	short_2 = short_1 + short_1;
	double_2 = double_4;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
		int_2 = int_2 + int_3;
	}
	int_2 = int_4 + int_3;
	int_4 = int_2;
	if(1)
	{
		short_1 = short_2 * short_3;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		short_3 = short_3 + short_3;
	}
	float_1 = float_1 + float_1;
	char_1 = char_1 + char_2;
	if(1)
	{
		long_1 = long_2 + long_1;
	}
	v_msg_append_proxy_adm(float_1,float_1,char_3);

	unsigned_int_3 = unsigned_int_5 + unsigned_int_1;
	if(1)
	{
		long_1 = long_3;
	}
	double_5 = double_2 * double_5;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
	if(1)
	{
		char_1 = char_3;
	}
	short_3 = short_3 + short_4;
	if(1)
	{
		double_5 = double_6 + double_4;
	}
	long_4 = long_3 + long_4;
	unsigned_int_4 = unsigned_int_6;
	if(1)
	{
		int_1 = int_1 * int_3;
	}
	unsigned_int_6 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
		double_7 = double_4 * double_4;
	}
	double_6 = double_6 + double_2;
	double_8 = double_1 * double_6;
	if(1)
	{
		double_3 = double_7;
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
		double_7 = double_5;
	}
	float_2 = float_1 + float_2;
	char_1 = char_4 * char_3;
	if(1)
	{
		long_3 = long_3;
	}
	unsigned_int_6 = unsigned_int_7 * unsigned_int_6;
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	short_3 = short_3;
	long_3 = long_4 * long_4;
	if(1)
	{
		double_6 = double_8 + double_9;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		long_5 = v_array_n(short_5);

		float_3 = float_3 * float_3;
	}
	long_4 = long_2 + long_1;
	unsigned_int_7 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		unsigned_int_8 = unsigned_int_3 + unsigned_int_5;
	}
	unsigned_int_4 = unsigned_int_7 * unsigned_int_9;
	if(1)
	{
		double_4 = double_1 + double_4;
	}
	if(1)
	{
		char char_5 = 1;
		char_5 = char_4 + char_2;
	}
	int_4 = int_2 + int_3;
	if(1)
	{
		int_4 = int_4 + int_3;
	}
	double_7 = double_9 * double_7;
	if(1)
	{
		int_4 = int_3 * int_2;
	}
	int_5 = int_4 * int_5;
	unsigned_int_9 = unsigned_int_9 * unsigned_int_7;
	if(1)
	{
		double_1 = double_4 * double_1;
	}
	double_1 = double_1 + double_2;
	if(1)
	{
		unsigned_int_5 = unsigned_int_6;
	}
	unsigned_int_8 = unsigned_int_6 + unsigned_int_10;
	short_6 = short_3 + short_5;
	if(1)
	{
		double double_10 = 1;
		double_10 = double_8 * double_7;
	}
	float_2 = float_3 * float_1;
	if(1)
	{
		unsigned_int_5 = unsigned_int_5 * unsigned_int_10;
	}
	unsigned_int_8 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_11 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short_2 = short_6;
	}
	float_5 = float_3 * float_4;
	if(1)
	{
		long_4 = long_5 * long_4;
	}
	return short_1;
}
void v_proxy_adm_make_response( unsigned int parameter_1,int parameter_2,char parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_3 = int_1 * int_2;
	char controller4vul_2605[2];
	fgets(controller4vul_2605 ,2 ,stdin);
	if( strcmp( controller4vul_2605, "W") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long_1 = v_proxy_adm_command_reload_conf(char_1,char_2,unsigned_int_1,long_1,uni_para);

		double_3 = double_1 + double_2;
	}
}
long v_proxy_adm_req_filter( char parameter_1,double parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float_2 = float_1 + float_1;
	if(1)
	{
		float float_3 = 1;
		int int_1 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		float_3 = float_4;
		int_1 = int_1;
	}
	if(1)
	{
		v_req_put_proxy_adm(int_2);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_1 = float_2 * float_4;
	}
	return long_1;
	v_msg_empty(unsigned_int_4);

}
void v_req_recv_done_proxy_adm( float parameter_1,short parameter_2,long parameter_3,float parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	double double_4 = 1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	short_1 = short_2;
	int_1 = int_2;
	long_1 = long_2;
	int_3 = int_2;
	double_1 = double_1 * double_1;
	int_4 = int_2 + int_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	int_1 = int_4 * int_4;
	long_3 = long_1 * long_1;
	float_2 = float_1 + float_1;
	char controller4vul_2604[3];
	fgets(controller4vul_2604 ,3 ,stdin);
	if( strcmp( controller4vul_2604, "6T") > 0)
	{
		v_proxy_adm_make_response(unsigned_int_4,int_3,char_1,uni_para);

	}
	double_1 = double_2 * double_3;
	if(1)
	{
	}
	short_2 = short_2;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
	int_3 = int_5;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
	double_4 = double_4 + double_4;
	if(1)
	{
		short_1 = short_2 * short_2;
	}
}
void v_req_put_proxy_adm( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
		short_1 = short_1 + short_1;
		double_2 = double_1 * double_1;
		double_3 = double_3 + double_2;
		v_msg_put_proxy_adm(long_1);

		int_2 = int_1 + int_2;
		long_1 = long_2 * long_2;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
}
float v_req_recv_next_proxy_adm( int parameter_1,int parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	char_3 = char_1 * char_2;
	float_1 = float_1 + float_2;
	if(1)
	{
		char_2 = char_3;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			double_1 = double_1 + double_2;
			v_req_put_proxy_adm(int_1);

			double_2 = double_2 + double_3;
			float_3 = v_msg_get_proxy_adm(char_1,long_1);

			unsigned_int_4 = unsigned_int_4;
			double_1 = double_1;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int int_2 = 1;
			short_3 = short_1 * short_2;
			int_1 = int_1 * int_2;
		}
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
	if(1)
	{
		char_4 = char_3 + char_4;
	}
	if(1)
	{
	}
	char_2 = char_4 + char_2;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_2 * long_3;
	}
	return float_3;
}
char v_msg_repair_proxy_adm( unsigned int parameter_1,unsigned int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 + double_1;
	short_1 = short_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "tp") < 0)
	{
	}
	float_2 = float_1 * float_1;
	short_2 = short_2 + short_1;
	return char_1;
	int_1 = v_mbuf_split_proxy_adm(unsigned_int_1,unsigned_int_1,float_1);

	v_mbuf_insert(double_3,unsigned_int_2);

}
void v_proxy_adm_parse_rsp( int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	double double_6 = 1;
	int int_7 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1 + double_1;
	int_2 = int_3;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int_1 = int_3 * int_4;
		int_1 = int_4 * int_1;
	}
	short_2 = short_1 * short_2;
	int_3 = int_5;
	char_1 = char_1 * char_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		long_3 = long_1 * long_2;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			short_2 = short_2 + short_2;
			double_2 = double_2 + double_2;
			char_1 = char_2 + char_2;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		if(1)
		{
			double_3 = double_1 + double_2;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	double_4 = double_2 * double_4;
	long_3 = long_2 + long_4;
	long_5 = long_2 * long_3;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		int_1 = int_6;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	}
	float_1 = float_1 * float_2;
	char_1 = char_2 + char_3;
	double_5 = double_1 * double_3;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_3;
	char_1 = char_2 * char_2;
	unsigned_int_4 = unsigned_int_5;
	float_2 = float_2 * float_1;
	char_2 = char_2 + char_4;
	unsigned_int_5 = unsigned_int_5;
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		long long_6 = 1;
		long_6 = long_3;
	}
	int_3 = int_5 + int_2;
	if(1)
	{
		double_5 = double_1;
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			v_mbuf_length(long_5);

			char_2 = char_1;
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				if(1)
				{
					int_3 = int_6 * int_5;
				}
				double_3 = double_2 * double_2;
				double_3 = double_5 * double_2;
			}
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3;
	}
	double_6 = double_4 * double_3;
	int_1 = int_5;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
	int_2 = int_5 + int_2;
	int_2 = int_7 + int_7;
	if(1)
	{
		int int_8 = 1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
		}
		if(1)
		{
			int_6 = int_8 + int_8;
		}
		int_7 = int_8 + int_6;
	}
}
void v_mbuf_put_proxy_adm( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_1 + float_2;
	short_1 = short_2;
	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_1;
}
void v_msg_put_proxy_adm( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 * short_1;
	int_1 = int_1 * int_2;
	v_mbuf_put_proxy_adm(unsigned_int_2);

	int_2 = int_3;
	long_3 = long_1 + long_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	}
	double_3 = double_1 * double_2;
	if(1)
	{
		double_4 = double_1 * double_1;
	}
	double_1 = double_1 + double_2;
	double_2 = double_1 * double_4;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_2;
	}
	v_array_destroy(int_1);

	float_2 = float_1 + float_1;
	char_3 = char_2 + char_2;
	int_5 = int_4 + int_4;
	int_5 = int_6 + int_6;
	v_mbuf_remove(int_4,long_3);

	float_3 = float_3;
}
float v_msg_get_error_proxy_adm( short parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1 * int_1;
	char_2 = char_1 * char_1;
	v_mbuf_insert(double_2,unsigned_int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_3 = v__msg_get_proxy_adm();

	double_3 = double_2 * double_1;
	unsigned_int_3 = unsigned_int_4;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "9}") < 0)
	{
	}
	short_1 = v_mbuf_size(long_1);

	short_3 = short_2 + short_2;
	int_1 = int_1 + int_1;
	if(1)
	{
		long_2 = v_mbuf_get_proxy_adm();

		v_msg_put_proxy_adm(long_3);

		double_1 = double_4 * double_3;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	double_4 = double_2 * double_4;
	int_3 = int_2 + int_3;
	double_2 = double_2 * double_1;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
	return float_1;
}
char v_proxy_adm_arg2ormore( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char_1 = char_2;
	return char_3;
}
void v_proxy_adm_arg2or3( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 + long_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 * int_2;
	}
	long_1 = long_2 * long_2;
	double_1 = double_2 * double_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	short_3 = short_1 * short_2;
	double_2 = double_3 * double_4;
	if(1)
	{
		short_1 = short_2;
	}
	float_2 = float_1;
}
float v_proxy_adm_arg2()
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	return float_1;
}
char v_proxy_adm_arg1( long parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = int_1;
	short_1 = short_1 * short_1;
	double_1 = double_2;
	float_1 = float_1 * float_1;
	double_1 = double_3 + double_3;
	char_3 = char_1 + char_2;
	return char_1;
}
void v_proxy_adm_parse_req( char parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	float_1 = v_msg_get_error_proxy_adm(short_1);

	long_1 = long_1 + long_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		float_2 = v_mbuf_data_size();

		char_1 = v_proxy_adm_arg1(long_1);

		float_3 = v_proxy_adm_arg2();

		v_proxy_adm_arg2or3(long_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	char_2 = v_array_push(float_3);

	long_1 = v_array_n(short_1);

	int_1 = int_1 + int_2;
	char_1 = v_proxy_adm_arg2ormore(long_2);

	v_mbuf_length(long_2);

}
char v__msg_get_proxy_adm()
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_6 = 1;
	long long_5 = 1;
	float float_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float_1 = float_2;
	if(1)
	{
		short short_1 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		char_2 = char_1 + char_1;
		short_1 = short_1 * short_2;
		v_rbtree_node_init(unsigned_int_3);

		double_1 = double_2;
		long_1 = long_1 * long_2;
	}
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	char_2 = char_1 + char_3;
	double_3 = double_1 + double_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_2;
	float_4 = float_2 + float_3;
	v_array_create(short_3,double_1);

	char_1 = char_4 * char_3;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_2;
	char_6 = char_5 + char_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
	double_4 = double_3 * double_1;
	double_5 = double_3 * double_4;
	short_5 = short_4 * short_4;
	double_1 = double_3 + double_5;
	long_4 = long_2 + long_3;
	short_6 = short_2;
	long_1 = long_2 + long_1;
	int_1 = int_1 * int_2;
	long_4 = long_2;
	double_4 = double_3 + double_6;
	long_4 = long_5;
	if(1)
	{
		unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	}
	double_3 = double_3;
	char_6 = char_3 * char_2;
	char_5 = char_4 + char_5;
	short_5 = short_6 * short_5;
	float_6 = float_5 + float_2;
	float_7 = float_2 + float_7;
	double_6 = double_2 + double_2;
	unsigned_int_6 = unsigned_int_6;
	double_1 = double_5;
	long_4 = long_5 * long_5;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_3 = double_5 * double_1;
	unsigned_int_7 = unsigned_int_8;
	float_2 = float_1 + float_1;
	long_3 = long_4 + long_6;
	float_1 = float_5 * float_7;
	long_1 = long_2;
	long_2 = long_2 + long_6;
	unsigned_int_10 = unsigned_int_6 + unsigned_int_9;
	short_6 = short_2 + short_2;
	int_2 = int_3 * int_4;
	unsigned_int_10 = unsigned_int_9 + unsigned_int_1;
	unsigned_int_7 = unsigned_int_4 * unsigned_int_8;
	double_5 = double_2 + double_5;
	return char_1;
}
float v_msg_get_proxy_adm( char parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char_2 = char_1 + char_1;
	char_3 = char_1 + char_1;
	short_1 = short_1;
	if(1)
	{
	}
	v_proxy_adm_parse_req(char_2);

	int_1 = v_log_loggable(int_1);

	int_2 = int_2 * int_2;
	float_1 = v_nc_usec_now();

	double_2 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_4;
	}
	if(1)
	{
		char_1 = v__msg_get_proxy_adm();

		double_2 = double_1 * double_2;
	}
	v_proxy_adm_parse_rsp(int_3);

	double_1 = double_2 * double_1;
	return float_1;
}
int v_mbuf_split_proxy_adm( unsigned int parameter_1,unsigned int parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_2;
	v_mbuf_copy(int_3,int_2,char_1);

	v_mbuf_length(long_1);

	char_1 = char_2 + char_1;
	int_2 = int_4 + int_4;
	long_1 = long_2 + long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float_4 = float_2 * float_3;
	}
	int_1 = int_4 + int_1;
	long_1 = long_2 + long_2;
	int_3 = int_2 * int_4;
	long_2 = v_mbuf_get_proxy_adm();

	int_1 = int_2 * int_4;
	return int_3;
}
unsigned int v_msg_parsed_proxy_adm( char parameter_1,float parameter_2,short parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double double_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	v_mbuf_insert(double_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	float_1 = v_msg_get_proxy_adm(char_1,long_1);

	double_2 = double_3;
	long_2 = long_1;
	if(1)
	{
		float_1 = float_2;
	}
	double_3 = double_2 + double_4;
	if(1)
	{
	}
	long_3 = long_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		v_mbuf_put_proxy_adm(unsigned_int_3);

		short_2 = short_1 * short_1;
	}
	int_1 = v_mbuf_split_proxy_adm(unsigned_int_2,unsigned_int_3,float_2);

	float_3 = float_3 * float_1;
	int_3 = int_2 * int_2;
	float_3 = float_2 + float_4;
	double_4 = double_4 + double_5;
	unsigned_int_2 = unsigned_int_3;
	return unsigned_int_2;
	v_mbuf_length(long_2);

}
float v_msg_parse_proxy_adm( int parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	unsigned_int_1 = v_msg_parsed_proxy_adm(char_1,float_1,short_1);

	short_2 = short_1 * short_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	double_1 = double_1 + double_1;
	double_2 = double_1;
	char_2 = v_msg_repair_proxy_adm(unsigned_int_4,unsigned_int_4,short_1);

	char_2 = char_2;
	double_3 = double_1 * double_3;
	unsigned_int_5 = unsigned_int_4;
	v_msg_empty(unsigned_int_3);

	unsigned_int_1 = unsigned_int_4;
	short_1 = short_2 + short_3;
	double_1 = double_1 + double_3;
	short_2 = short_4;
	float_2 = float_1 + float_1;
	double_2 = double_2 + double_1;
	return float_2;
}
short v__mbuf_get_proxy_adm()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_1;
	float_2 = float_1 * float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		int_3 = int_3 + int_4;
		float_2 = float_1 + float_1;
		float_1 = float_2 + float_1;
		int_5 = int_3 * int_5;
		long_2 = long_1 + long_1;
	}
	int_4 = int_2 + int_3;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	int_6 = int_6 + int_4;
	short_2 = short_1 * short_2;
	int_6 = int_4;
	return short_2;
}
long v_mbuf_get_proxy_adm()
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	short_2 = short_2 * short_1;
	unsigned_int_3 = unsigned_int_4;
	short_4 = short_3 + short_1;
	long_4 = long_2 + long_3;
	char_3 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
	short_1 = v__mbuf_get_proxy_adm();

	float_1 = float_1;
	return long_2;
}
int v_msg_recv_chain_proxy_adm( int parameter_1,unsigned int parameter_2,float parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_9 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_7 = 1;
	short short_4 = 1;
	v_mbuf_insert(double_1,unsigned_int_1);

	double_3 = double_2 * double_1;
	unsigned_int_1 = v_conn_recv(double_4,short_1);

	int_2 = int_1 + int_2;
	double_5 = double_4 * double_3;
	short_2 = short_3;
	long_1 = v_mbuf_get_proxy_adm();

	double_3 = double_3 * double_5;
	double_6 = double_3 * double_1;
	if(1)
	{
		double_8 = double_7 * double_4;
		if(1)
		{
		}
		float_1 = v_msg_parse_proxy_adm(int_3,unsigned_int_2,unsigned_int_2);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		int_1 = int_2 + int_4;
	}
	unsigned_int_3 = unsigned_int_3;
	double_3 = double_6;
	int_6 = int_4 + int_5;
	if(1)
	{
		if(1)
		{
		}
	}
	double_7 = v_mbuf_full(double_9);

	char_3 = char_1 * char_2;
	int_1 = int_7 + int_1;
	double_7 = double_2 + double_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_4 = 1;
		int int_8 = 1;
		char char_5 = 1;
		char_4 = char_4 + char_2;
		if(1)
		{
		}
		int_8 = int_7 * int_6;
		if(1)
		{
			double_3 = double_8 + double_6;
		}
		char_2 = char_3 + char_5;
	}
	return int_5;
	short_4 = v_mbuf_size(long_1);

}
float v_msg_recv_proxy_adm( unsigned int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = v_msg_recv_chain_proxy_adm(int_1,unsigned_int_1,float_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_1 + int_1;
	return float_1;
}
double v__conn_get_proxy_adm()
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_7 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	char char_4 = 1;
	long_1 = long_2;
	if(1)
	{
		double_2 = double_1 + double_1;
		float_2 = float_1 * float_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		if(1)
		{
		}
	}
	unsigned_int_1 = unsigned_int_5;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_6;
	long_2 = long_1 + long_3;
	double_3 = double_1 + double_2;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_4;
	float_1 = float_2 * float_2;
	float_2 = float_2 * float_3;
	long_3 = long_4 * long_1;
	int_1 = int_1 + int_4;
	int_3 = int_5 + int_6;
	int_6 = int_1 + int_3;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_6;
	unsigned_int_2 = unsigned_int_6 * unsigned_int_5;
	char_1 = char_1 + char_2;
	unsigned_int_5 = unsigned_int_4;
	double_1 = double_1 * double_1;
	int_7 = int_7 + int_1;
	char_3 = char_2 * char_2;
	short_2 = short_1 + short_2;
	int_2 = int_3 + int_7;
	short_2 = short_1 + short_2;
	if(1)
	{
		double double_5 = 1;
		double_5 = double_4 + double_5;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
	}
	char_1 = char_3;
	char_1 = char_4 * char_3;
	long_1 = long_3 * long_4;
	double_3 = double_3 * double_4;
	return double_1;
}
int v_conn_get_proxy_adm(int parameter_2,short parameter_3,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_11 = 1;
	char_2 = char_1 * char_1;
	int_1 = int_1 + int_1;
	char controller4vul_2603[2];
	fgets(controller4vul_2603 ,2 ,stdin);
	if( strcmp( controller4vul_2603, "#") < 0)
	{
		v_req_recv_done_proxy_adm(float_1,short_1,long_1,float_1,uni_para);

	}
	char_2 = char_1 * char_3;
	if(1)
	{
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_1;
		int_3 = int_1 * int_2;
		double_1 = double_2;
		float_1 = float_2 * float_2;
		int_1 = int_2 + int_2;
		double_3 = double_2 * double_1;
		int_3 = int_2 * int_4;
		int_2 = int_3 * int_5;
		int_5 = int_1 * int_2;
		int_4 = int_6 + int_3;
		int_5 = int_1 + int_5;
		int_1 = int_1 * int_6;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		float_1 = float_1 * float_1;
		char_3 = char_1;
		double_1 = double_3 + double_4;
	}
	if(1)
	{
		char char_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		int int_9 = 1;
		int int_10 = 1;
		char char_5 = 1;
		char char_6 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		char_3 = char_4 + char_3;
		double_2 = double_1;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
		char_4 = char_2;
		int_1 = int_2;
		unsigned_int_4 = unsigned_int_1;
		int_5 = int_4 * int_2;
		int_5 = int_7 * int_3;
		int_5 = int_7 + int_8;
		int_10 = int_9 * int_10;
		unsigned_int_3 = unsigned_int_6;
		int_4 = int_4 + int_6;
		char_6 = char_5 + char_2;
	}
	int_3 = int_4 * int_6;
	int_1 = int_11 * int_4;
	return int_1;
}
unsigned int v_proxy_adm_create( char parameter_1,char parameter_2,short parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	double double_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_2;
	char controller4vul_2602[3];
	fgets(controller4vul_2602 ,3 ,stdin);
	if( strcmp( controller4vul_2602, ",3") < 0)
	{
		int_1 = v_conn_get_proxy_adm(int_2,short_1,uni_para);

	}
	int_2 = int_3 * int_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	float_1 = float_1;
	double_2 = double_2 + double_3;
	float_2 = float_1 * float_2;
	short_3 = short_2 + short_2;
	int_1 = int_1 * int_1;
	long_2 = long_1 + long_1;
	if(1)
	{
		int_2 = int_3 + int_4;
	}
	float_2 = float_1 * float_1;
	int_3 = int_2 * int_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "@u") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	float_1 = float_2 + float_2;
	char_4 = char_3 + char_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	short_4 = short_4 + short_3;
	if(1)
	{
		short short_5 = 1;
		short_4 = short_5;
	}
	int_4 = int_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		double_3 = double_4 * double_3;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_3;
	}
	double_1 = double_4 * double_3;
	return unsigned_int_4;
}
void v_proxy_deinit( long parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = v_array_each(long_1);

	char_1 = char_1 + char_2;
	long_2 = v_array_n(short_1);

	long_1 = long_1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	long_1 = v_proxy_each_deinit();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
char v_proxy_reuse()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_5 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 * float_2;
	int_2 = int_1 * int_2;
	double_3 = double_1 + double_2;
	int_4 = int_2 * int_3;
	int_3 = int_1 + int_2;
	float_1 = float_2 + float_1;
	double_1 = double_1;
	short_1 = short_1 * short_1;
	short_1 = short_1;
	return char_1;
	int_3 = v_nc_set_reuseaddr(int_5);

}
float v_proxy_listen( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	int int_1 = 1;
	short short_4 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char_1 = char_1 * char_2;
	char_3 = char_3 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_1;
	if(1)
	{
		float_1 = float_3 * float_3;
	}
	short_2 = short_1 * short_1;
	if(1)
	{
		float_2 = float_2 * float_3;
	}
	short_3 = short_1;
	if(1)
	{
		char_2 = char_1 + char_2;
	}
	short_3 = short_3 * short_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	long_2 = long_1 * long_2;
	if(1)
	{
		char_3 = char_2;
	}
	char_4 = char_4 * char_4;
	if(1)
	{
		int_1 = v_event_add_conn(float_1,short_4);

		int_1 = v_event_del_out(double_1,char_1);

		short_2 = short_4;
	}
	char_4 = v_proxy_reuse();

	int_1 = v_nc_set_nonblocking(int_2);

	int_4 = int_2 + int_3;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	return float_2;
}
void v_proxy_unref( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_2;
	int_2 = int_3;
	int_2 = int_2 * int_3;
	char_1 = char_1 * char_1;
	char_2 = char_1 + char_1;
	int_3 = int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
void v_proxy_ref( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_1 + char_2;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	int_2 = int_1 * int_1;
	double_1 = double_3 * double_3;
	int_3 = int_2 * int_3;
	int_2 = int_4 * int_3;
}
void v_proxy_close( int parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_1 = double_1 + double_2;
		int_1 = int_1;
	}
	double_1 = double_3 * double_1;
	double_3 = double_3 * double_2;
	int_1 = int_2;
	v_conn_put(int_3);

	char_4 = char_3 + char_2;
	int_2 = int_2 * int_2;
	int_3 = int_1 + int_2;
	if(1)
	{
		double_2 = double_2 + double_2;
	}
	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
}
int v_nc_set_tcpkeepalive( int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	char_1 = char_1 + char_1;
	double_3 = double_1 + double_2;
	long_1 = long_1 * long_2;
	int_1 = int_2;
	int_1 = int_3 * int_1;
	short_1 = short_2;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_4;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			long_4 = long_1;
		}
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "^.") < 0)
	{
		double double_4 = 1;
		double_1 = double_4 + double_4;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 + float_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_5;
		unsigned_int_4 = unsigned_int_6;
		if(1)
		{
			int int_4 = 1;
			int_4 = int_1;
		}
	}
	return int_5;
}
void v_conn_ncurr_cconn_proxy_adm()
{
}
char v_conn_ncurr_cconn()
{
	char char_1 = 1;
	return char_1;
}
unsigned int v_proxy_accept( unsigned int parameter_1,char parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char_3 = char_1 * char_2;
	char controller4vul_2615[2];
	fgets(controller4vul_2615 ,2 ,stdin);
	if( strcmp( controller4vul_2615, "<") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float_1 = v_conn_get(float_2,double_1,uni_para);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	long_3 = long_1 * long_2;
	return unsigned_int_1;
}
short v_proxy_recv( char parameter_1,float parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	long long_4 = 1;
	float float_4 = 1;
	short_1 = short_2;
	double_1 = double_1 * double_2;
	long_1 = long_1 * long_2;
	int_1 = int_1 * int_2;
	double_2 = double_1 * double_1;
	double_3 = double_3 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_2;
	char controller4vul_2613[2];
	fgets(controller4vul_2613 ,2 ,stdin);
	if( strcmp( controller4vul_2613, "&") < 0)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_3 = 1;
			double_5 = double_4 + double_2;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
			char controller4vul_2614[3];
			fgets(controller4vul_2614 ,3 ,stdin);
			if( strcmp( controller4vul_2614, "(Q") < 0)
			{
				long long_3 = 1;
				unsigned_int_4 = v_proxy_accept(unsigned_int_2,char_1,uni_para);

				long_3 = long_3 * long_4;
			}
			float_2 = float_1;
		}
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_3 + float_4;
	}
	float_1 = float_4 * float_4;
	if(1)
	{
		double double_6 = 1;
		int int_3 = 1;
		long_4 = long_1 + long_1;
		double_6 = double_6;
		unsigned_int_1 = unsigned_int_2;
		int_1 = int_1 * int_3;
	}
	return short_2;
}
char v_conn_get_proxy()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	char char_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	double double_6 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_proxy_ref(float_1);

	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
	}
	short_2 = short_1 + short_2;
	int_2 = int_1 * int_1;
	char_3 = char_1 * char_2;
	double_3 = double_2 * double_1;
	char_4 = char_2 + char_2;
	short_2 = v__conn_get();

	unsigned_int_2 = unsigned_int_3;
	long_1 = long_2;
	short_2 = v_proxy_recv(char_4,float_2,-1 );

	char_5 = char_2 * char_1;
	double_1 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_4 * double_2;
	double_5 = double_5 + double_1;
	v_proxy_unref(char_2);

	short_1 = short_3;
	double_6 = double_6 + double_5;
	long_1 = long_3 + long_4;
	long_1 = long_1 * long_3;
	v_proxy_close(int_1,float_3);

	unsigned_int_2 = unsigned_int_1;
	float_2 = float_2 * float_4;
	return char_5;
}
short v_proxy_each_init()
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_2 = double_1 * double_1;
	float_1 = v_proxy_listen(short_1,int_1);

	int_2 = int_2 + int_2;
	int_3 = int_1 + int_1;
	long_1 = v_array_n(short_1);

	int_1 = int_4 * int_3;
	if(1)
	{
	}
	char_1 = v_conn_get_proxy();

	char_3 = char_2 * char_3;
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	double_2 = double_2;
	return short_1;
}
char v_proxy_init( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = v_proxy_each_init();

	int_3 = int_1 * int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ":") < 0)
	{
		long_1 = long_1 * long_2;
	}
	long_2 = v_array_n(short_1);

	float_1 = v_array_each(long_3);

	long_4 = long_2 * long_1;
	return char_1;
	v_proxy_deinit(long_1);

}
void v_event_base_destroy( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_3 = 1;
	short short_1 = 1;
	char_2 = char_1 + char_2;
	long_3 = long_1 * long_2;
	long_4 = long_2;
	char_3 = char_1 + char_2;
	short_1 = short_1;
}
unsigned int v_server_each_disconnect()
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "h") == 0)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	return unsigned_int_1;
}
void v_server_pool_each_disconnect()
{
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float_1 = v_array_each(long_1);

	unsigned_int_1 = v_server_each_disconnect();

	char_1 = char_1 + char_2;
	double_1 = double_1 * double_1;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
}
void v_server_pool_disconnect()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	v_server_pool_each_disconnect();

	unsigned_int_1 = unsigned_int_2;
	float_1 = v_array_each(long_1);

}
void v_req_server_dequeue_omsgq( unsigned int parameter_1,long parameter_2,short parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	v_msg_tmo_delete(float_1);

	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_1 * char_2;
	long_3 = long_1 + long_2;
	long_1 = long_1 + long_2;
	double_1 = double_2;
}
void v_req_server_enqueue_omsgq( float parameter_1,unsigned int parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_2 = float_1 + float_1;
	long_1 = long_1 + long_2;
	short_1 = short_1 * short_2;
	long_3 = long_2 + long_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void v_req_server_dequeue_imsgq( long parameter_1,unsigned int parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 + double_3;
	char_1 = char_1;
	int_1 = int_1 + int_2;
}
void v_rbtree_insert( float parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_4 = double_3 * double_1;
	long_1 = v_rbtree_left_rotate(short_1,long_1,long_1);

	int_1 = int_1;
	unsigned_int_3 = v_rbtree_right_rotate(int_2,unsigned_int_2,char_1);

	int_2 = int_3 + int_3;
}
unsigned int v_nc_msec_now()
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	return unsigned_int_1;
	float_1 = v_nc_usec_now();

}
int v_server_timeout( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_3 = double_1 * double_2;
	char_1 = char_1 * char_1;
	double_4 = double_3 + double_3;
	int_1 = int_1 + int_1;
	long_2 = long_1 * long_1;
	return int_1;
}
void v_msg_tmo_insert( short parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_2;
	unsigned_int_1 = v_nc_msec_now();

	short_1 = short_1 + short_2;
	float_4 = float_1 * float_3;
	if(1)
	{
	}
	int_2 = v_server_timeout(unsigned_int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_4 = int_3 * int_1;
	double_2 = double_1 * double_1;
	int_1 = int_2 + int_2;
	v_rbtree_insert(float_4,float_1);

	long_1 = long_1 * long_1;
}
void v_req_server_enqueue_imsgq( int parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_2 = 1;
	v_msg_tmo_insert(short_1,unsigned_int_1);

	int_3 = int_1 * int_2;
	int_4 = int_5;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	long_1 = long_2;
	int_1 = int_6 + int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
}
void v_server_unref()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1 + int_1;
	double_3 = double_1 * double_2;
	double_2 = double_1 + double_4;
	int_1 = int_2 + int_1;
	long_3 = long_1 + long_2;
	char_1 = char_1 * char_1;
	int_1 = int_2 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 + short_2;
}
void v_server_ref( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	short_2 = short_1 * short_1;
	double_1 = double_1 * double_1;
	double_3 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_5 = double_4 + double_1;
	char_3 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	float_2 = float_1 + float_1;
	char_1 = char_4 + char_2;
}
void v_server_active()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float_5 = float_3 * float_4;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	int_2 = int_1 * int_1;
}
void v_req_send_done( long parameter_1,float parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_3 * double_1;
	int_2 = int_1 * int_2;
	v_req_put(long_1);

	int_2 = int_3 + int_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		int int_4 = 1;
		int_3 = int_2 * int_4;
	}
}
void v_server_connected( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 + int_2;
	short_1 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	int_4 = int_1 + int_3;
	double_1 = double_2;
}
unsigned int v_req_send_next( float parameter_1,long parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int_1 = v_event_del_out(double_1,char_1);

	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_2 + int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	double_1 = double_1;
	if(1)
	{
		float_1 = float_1 + float_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
	}
	v_server_connected(float_1,int_3);

	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3;
		long_3 = long_3;
	}
	long_1 = long_3 * long_2;
	if(1)
	{
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_2 * double_1;
	}
	long_2 = long_1 * long_2;
	int_4 = int_1;
	return unsigned_int_1;
}
char v_rsp_forward_stats( unsigned int parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_2;
	short_2 = short_1 + short_1;
	long_1 = long_2;
	return char_1;
}
int v_string_prefix_of_fix_len_char( unsigned int parameter_1,char parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	double_1 = double_1;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double_2 = double_2 * double_3;
			char_3 = char_2 + char_1;
		}
	}
	return int_3;
}
char v_conf_write_back_yaml( double parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_2;
	double_1 = double_1 + double_1;
	float_2 = float_1 * float_1;
	int_1 = int_1;
	return char_1;
	int_2 = v_string_prefix_of_fix_len_char(unsigned_int_1,char_1,short_1);

}
void v_server_ok( double parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_2 = double_1 * double_2;
	double_3 = double_2;
	float_3 = float_1 * float_2;
	if(1)
	{
		float float_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float_4 = float_2;
		float_2 = float_2 * float_1;
		short_1 = short_1 + short_2;
	}
}
float v_rsp_forward( long parameter_1,unsigned int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_3 = 1;
	float float_5 = 1;
	int int_4 = 1;
	double_2 = double_1 + double_1;
	long_1 = v_string_copy(short_1,char_1,double_3);

	char_2 = v_rsp_forward_stats(unsigned_int_1,int_1,long_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	}
	v_string_deinit(char_2);

	long_3 = long_3;
	if(1)
	{
		short short_2 = 1;
		int_2 = v_nc_resolve(long_3,int_2,unsigned_int_4);

		int_3 = v_event_del_conn(float_1,char_1);

		double_3 = double_2 * double_2;
		short_2 = short_1 * short_2;
	}
	char_1 = v_array_get(float_2,double_1);

	double_5 = double_4 + double_2;
	int_3 = v_event_add_out(long_3,short_3);

	float_4 = float_1 + float_3;
	v_server_ok(double_2,char_1);

	long_4 = long_2 * long_3;
	double_7 = double_4 * double_6;
	char_3 = v_conf_write_back_yaml(double_1,int_3,char_2);

	float_5 = float_1;
	v_string_init(int_1);

	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	return float_5;
	int_4 = v_req_done(double_7,short_3);

}
double v_rsp_filter( int parameter_1,unsigned int parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
		v_rsp_put(char_1);

		double_3 = double_1 * double_2;
		double_3 = double_1;
	}
	char_1 = char_1 * char_1;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
		v_req_put(long_1);

		int_1 = int_1;
		short_1 = short_1 + short_1;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_1;
	}
	float_1 = float_1 + float_1;
	int_1 = int_2 + int_3;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "@N") < 0)
	{
		short short_2 = 1;
		unsigned int unsigned_int_7 = 1;
		char_1 = char_1;
		short_2 = short_2 * short_2;
		v_msg_empty(unsigned_int_5);

		unsigned_int_4 = unsigned_int_7 + unsigned_int_3;
		int_2 = int_2 * int_1;
		short_2 = short_2 * short_1;
	}
	return double_3;
}
void v_rsp_recv_done( float parameter_1,unsigned int parameter_2,unsigned int parameter_3,double parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	double_1 = v_rsp_filter(int_1,unsigned_int_1,short_1);

	char_1 = char_1 + char_2;
	short_3 = short_2 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		float_1 = v_rsp_forward(long_3,unsigned_int_3,short_4);

		char_5 = char_3 + char_4;
	}
	if(1)
	{
	}
	int_1 = int_1 * int_2;
}
char v_rsp_get( long parameter_1,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long_2 = long_1 + long_1;
	double_2 = double_1 * double_1;
	int_1 = int_1 * int_1;
	char controller4vul_2619[2];
	fgets(controller4vul_2619 ,2 ,stdin);
	if( strcmp( controller4vul_2619, "(") < 0)
	{
		long long_3 = 1;
		short_1 = v_msg_get(short_1,double_1,int_2,uni_para);

		long_3 = long_2;
	}
	return char_1;
}
long v_rsp_recv_next( float parameter_1,double parameter_2,char parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	char controller4vul_2617[2];
	fgets(controller4vul_2617 ,2 ,stdin);
	if( strcmp( controller4vul_2617, "N") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_5 = 1;
		double_2 = double_1 * double_2;
		char controller4vul_2618[3];
		fgets(controller4vul_2618 ,3 ,stdin);
		if( strcmp( controller4vul_2618, "N;") < 0)
		{
			double double_3 = 1;
			char char_2 = 1;
			char char_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char_1 = v_rsp_get(long_1,uni_para);

			double_5 = double_3 + double_4;
			double_2 = double_3 + double_4;
			char_3 = char_1 * char_2;
			short_2 = short_1 * short_1;
			char_2 = char_1;
		}
		double_4 = double_2 + double_6;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	}
	int_1 = int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	}
	if(1)
	{
	}
	double_4 = double_5;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_2 + int_2;
	}
	return long_2;
}
void v_req_client_dequeue_omsgq( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_2;
	long_1 = long_1 + long_1;
	char_1 = char_1 * char_1;
}
void v_req_client_enqueue_omsgq( char parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 + double_2;
	double_2 = double_3 * double_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
short v_conn_need_auth(long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	return short_1;
}
void v_client_unref( double parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 + short_2;
	int_1 = int_2;
	int_3 = int_2 + int_1;
	long_1 = long_1 * long_2;
	char_1 = char_1 + char_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	char_1 = char_1;
}
void v_client_ref( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_1;
	int_2 = int_1 + int_1;
	double_2 = double_2 * double_1;
	double_1 = double_3 + double_1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	int_3 = int_1 + int_2;
	int_1 = int_2 + int_3;
	char_1 = char_2;
}
double v_client_active( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long_2 = long_1 * long_1;
	int_3 = int_1 + int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "}g") == 0)
	{
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		float_2 = float_2 * float_1;
	}
	if(1)
	{
		int_1 = int_2 + int_3;
	}
	char_1 = char_2;
	return double_1;
}
char v_client_close_stats( int parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	return char_2;
}
void v_client_close( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	double double_5 = 1;
	long long_4 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_1;
	char_1 = char_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		char_2 = char_3;
		char_2 = v_client_close_stats(int_1,char_4,char_3,char_3);

		char_4 = char_1 + char_3;
	}
	long_1 = long_1 + long_2;
	if(1)
	{
		double double_2 = 1;
		long long_3 = 1;
		double_4 = double_2 + double_3;
		long_2 = long_2 + long_3;
		float_1 = float_1;
		double_2 = double_5 * double_1;
		long_4 = long_2 + long_2;
	}
	float_2 = float_1 * float_1;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		long long_5 = 1;
		int_3 = int_1 + int_2;
		long_1 = long_5 + long_6;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
			v_conn_put(int_2);

			v_req_put(long_6);

			short_2 = short_1;
		}
		if(1)
		{
			double double_6 = 1;
			float float_3 = 1;
			float float_4 = 1;
			int_3 = int_3 + int_2;
			double_4 = double_6 + double_1;
			int_2 = int_2 + int_1;
			float_2 = float_3 + float_4;
		}
	}
	int_2 = int_4 + int_5;
	double_5 = double_5 * double_4;
	long_4 = long_1 + long_4;
	if(1)
	{
		double double_7 = 1;
		double_7 = double_3 * double_4;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	float_5 = float_5 + float_2;
}
void v_rsp_send_done( short parameter_1,float parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	double_1 = double_1 * double_1;
	v_req_put(long_1);

	long_2 = long_2 * long_2;
	char_1 = char_2;
	char_3 = char_1 * char_3;
	long_2 = long_2 * long_1;
	float_3 = float_1 * float_2;
	int_3 = int_2;
	unsigned_int_2 = unsigned_int_3;
}
float v_msg_get_error_other( short parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	short short_4 = 1;
	long long_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int_2 = int_1 * int_1;
	short_1 = short_1 + short_2;
	v_msg_put(double_1);

	short_3 = short_1;
	int_2 = int_1;
	char_2 = char_1 + char_1;
	char_1 = char_3;
	long_1 = v_mbuf_get();

	char_3 = char_3;
	double_1 = double_1 + double_1;
	int_1 = int_3;
	long_2 = long_2 * long_3;
	long_3 = v__msg_get();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_3;
	char_3 = char_3 + char_3;
	if(1)
	{
	}
	v_mbuf_insert(double_1,unsigned_int_2);

	char_2 = char_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_2 = int_2 + int_2;
	}
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	int_4 = int_4 + int_3;
	short_4 = v_mbuf_size(long_4);

	double_3 = double_2 * double_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	return float_1;
}
short v_msg_get_error( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_2;
	short_1 = v_mbuf_size(long_3);

	long_4 = long_3 * long_4;
	char_2 = char_1 + char_1;
	double_1 = double_1 * double_2;
	double_1 = double_2 * double_3;
	if(1)
	{
	}
	v_msg_put(double_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_3 = v__msg_get();

	v_mbuf_insert(double_4,unsigned_int_2);

	int_1 = int_1;
	double_5 = double_3 + double_1;
	if(1)
	{
		char char_3 = 1;
		char_1 = char_1 + char_3;
	}
	float_2 = float_1 + float_2;
	long_3 = v_mbuf_get();

	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	double_3 = double_5 + double_1;
	double_4 = double_1 + double_5;
	long_6 = long_2 + long_5;
	return short_2;
}
double v_rsp_make_error( int parameter_1,char parameter_2,int parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	if(1)
	{
		float float_2 = 1;
		float_1 = v_req_error(unsigned_int_1,unsigned_int_2);

		v_rsp_put(char_1);

		float_1 = v_msg_get_error_other(short_1,short_2);

		float_2 = float_2 + float_2;
		if(1)
		{
		}
	}
	return double_1;
	v_req_put(long_1);

	short_1 = v_msg_get_error(int_1,char_1);

}
float v_req_error( unsigned int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_1 * long_2;
	double_2 = double_1 + double_2;
	if(1)
	{
		long_3 = long_2;
	}
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	long_3 = long_4 + long_5;
	if(1)
	{
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_1 = double_3;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			int_1 = int_1 * int_1;
		}
	}
	int_1 = int_2;
	double_2 = double_1 + double_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long long_6 = 1;
		long_6 = long_5 + long_3;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double_3 = double_1 + double_1;
		int_3 = v_req_done(double_2,short_1);

		long_3 = long_1 + long_4;
	}
	int_3 = int_4 + int_1;
	return float_2;
}
int v_event_del_out( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 + short_1;
		}
		if(1)
		{
		}
		double_2 = double_1 * double_2;
		unsigned_int_4 = unsigned_int_4;
		double_2 = double_2 + double_1;
		double_3 = double_3 + double_2;
		if(1)
		{
			char_2 = char_1 * char_1;
		}
		if(1)
		{
			double_2 = double_3 * double_3;
		}
		if(1)
		{
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		}
		if(1)
		{
			int_2 = int_3;
			long_2 = long_1 + long_2;
		}
		if(1)
		{
			long long_3 = 1;
			short short_2 = 1;
			int int_4 = 1;
			if(1)
			{
			}
			long_3 = long_2;
			short_2 = short_2;
			char_1 = char_1 + char_1;
			double_3 = double_4 + double_1;
			int_4 = int_1 + int_2;
		}
		if(1)
		{
			double double_5 = 1;
			if(1)
			{
			}
			double_1 = double_3 + double_2;
			double_3 = double_1 * double_3;
			double_4 = double_5 + double_1;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_3 = 1;
			char_2 = char_3;
		}
	}
	return int_3;
}
double v_rsp_send_next( short parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	char char_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	int int_4 = 1;
	double_1 = double_2;
	int_1 = v_req_done(double_2,short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = v_rsp_make_error(int_1,char_1,int_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
			int_1 = int_1 * int_3;
			long_1 = long_1 * long_2;
		}
		long_4 = long_3 * long_1;
		if(1)
		{
			int_2 = v_event_del_out(double_3,char_2);

			long_3 = long_2 * long_4;
		}
	}
	int_3 = int_1 * int_3;
	if(1)
	{
		double_4 = double_4;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		char_1 = char_3;
	}
	if(1)
	{
		char_3 = char_1;
	}
	char_4 = char_2 * char_4;
	if(1)
	{
		double double_5 = 1;
		double_4 = double_5 * double_1;
		if(1)
		{
			int_1 = int_2 * int_1;
		}
		double_5 = double_3 * double_3;
		float_1 = v_req_error(unsigned_int_1,unsigned_int_2);

		long_3 = long_4 * long_3;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int_1 = int_1 + int_2;
	int_4 = int_1 + int_1;
	return double_4;
}
double v_conn_sendv( char parameter_1,double parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_4 = 1;
	short short_1 = 1;
	int int_4 = 1;
	int_1 = int_1 + int_2;
	long_2 = long_1 * long_1;
	int_3 = int_2 + int_2;
	char_1 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double_2 = double_1 + double_1;
		double_3 = double_4;
		if(1)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			}
			char_2 = char_1 * char_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			float_1 = float_1 + float_2;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
		if(1)
		{
			long long_3 = 1;
			char char_3 = 1;
			long_3 = long_3 + long_4;
			char_3 = char_1 * char_2;
		}
		if(1)
		{
			double_1 = double_3 + double_3;
			double_4 = double_4 + double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
			long_4 = v_array_n(short_1);

			float_2 = float_1 + float_3;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
		}
	}
	int_4 = int_3 + int_3;
	return double_1;
}
float v_array_set( int parameter_1,short parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_1;
	int_2 = int_1 * int_2;
	int_2 = int_2 + int_3;
	return float_1;
}
int v_msg_send_chain( unsigned int parameter_1,float parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_4 = 1;
	char char_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_9 = 1;
	long long_2 = 1;
	int_2 = int_1 + int_2;
	double_2 = double_1 * double_2;
	short_2 = short_1 * short_1;
	double_2 = double_2 + double_2;
	double_2 = double_3 * double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2 * int_2;
	char_2 = char_1 * char_2;
	int_3 = int_2 + int_1;
	int_2 = int_4 + int_2;
	char_3 = char_2 * char_1;
	double_3 = double_3 * double_2;
	double_3 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		short short_3 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_3 = float_1 * float_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_6 = 1;
			float_3 = v_array_set(int_1,short_1,int_4);

			int_2 = int_2 + int_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1;
			}
			int_4 = int_4 * int_4;
			if(1)
			{
				short_2 = short_3 + short_4;
			}
			char_4 = char_4 * char_3;
			int_5 = int_2 * int_1;
			double_1 = double_3 + double_4;
			double_4 = v_conn_sendv(char_1,double_5,unsigned_int_1);

			int_8 = int_6 + int_7;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			long_1 = v_array_n(short_1);

			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		}
		unsigned_int_2 = unsigned_int_1;
		if(1)
		{
			short_3 = short_1;
		}
	}
	double_5 = double_4 * double_5;
	if(1)
	{
		char_1 = char_2 + char_3;
	}
	if(1)
	{
		int_9 = int_4 * int_9;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char_3 = char_2 + char_1;
		char_1 = char_3 * char_4;
		if(1)
		{
			float float_4 = 1;
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
			}
			float_4 = float_4 * float_3;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			char char_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			char_2 = char_5 * char_3;
			if(1)
			{
				int_2 = int_5 + int_3;
			}
			char_1 = char_5 + char_4;
			if(1)
			{
				double double_6 = 1;
				double_4 = double_2 * double_4;
				v_mbuf_length(long_2);

				unsigned_int_4 = unsigned_int_6 * unsigned_int_1;
				double_1 = double_1 * double_6;
				int_2 = int_8;
			}
			unsigned_int_6 = unsigned_int_1 * unsigned_int_7;
			int_1 = int_9;
		}
		if(1)
		{
			short short_5 = 1;
			short_5 = short_4 + short_1;
		}
	}
	double_4 = v_mbuf_empty(float_3);

	char_2 = v_array_push(float_2);

	float_3 = float_2 + float_2;
	if(1)
	{
	}
	int_5 = int_2 * int_3;
	return int_7;
}
double v_msg_send( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	char_1 = char_2;
	int_3 = int_1 * int_2;
	char_4 = char_3 * char_1;
	float_1 = float_2;
	if(1)
	{
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	double_1 = double_1 + double_2;
	double_2 = double_2 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_2;
	double_4 = double_3 + double_3;
	short_4 = short_2 + short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float float_4 = 1;
			float_1 = float_3 * float_4;
			float_4 = float_1 * float_3;
		}
		if(1)
		{
			double double_5 = 1;
			double_1 = double_5 * double_1;
			char_4 = char_4 * char_1;
			if(1)
			{
				int_1 = int_2 * int_4;
				if(1)
				{
					int_1 = int_4 + int_5;
				}
			}
			int_6 = v_msg_send_chain(unsigned_int_1,float_3,unsigned_int_2);

			long_1 = long_1;
			double_3 = double_2 * double_2;
		}
		if(1)
		{
			double_3 = double_2;
			double_2 = double_4 + double_3;
		}
	}
	if(1)
	{
		float_1 = float_3 * float_2;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	double_6 = double_6 + double_2;
	int_3 = int_5 + int_5;
	int_2 = int_1 + int_7;
	int_6 = int_4 * int_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_2 = 1;
		char char_5 = 1;
		short_1 = short_4 * short_4;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			short_2 = short_1 + short_1;
			if(1)
			{
				unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						short short_5 = 1;
						long_3 = long_2 * long_1;
						short_5 = short_1 + short_2;
						int_4 = int_1;
					}
				}
			}
			if(1)
			{
				short_2 = short_4 * short_1;
				double_6 = double_6 * double_6;
			}
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
		}
		char_1 = char_5;
		int_6 = int_5 + int_5;
		long_2 = long_3 + long_2;
	}
	int_5 = int_6 * int_4;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_6;
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		long_5 = long_3 * long_4;
	}
	return double_4;
}
float v_req_forward_stats( double parameter_1,float parameter_2,double parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	char_1 = char_1 + char_1;
	double_2 = double_1 + double_2;
	double_3 = double_3 * double_4;
	return float_1;
}
char v_server_pool_server( short parameter_1,char parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_4 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 * long_2;
	float_3 = float_1 * float_2;
	return char_1;
	long_2 = v_server_pool_idx(int_1,unsigned_int_1,float_3);

	char_1 = v_array_get(float_4,double_1);

}
double v_server_pool_update( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = v_nc_usec_now();

	double_1 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_2 * int_3;
		}
	}
	int_2 = int_3 + int_1;
	int_5 = int_1 * int_4;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	double_2 = double_1 * double_1;
	return double_1;
	v_server_pool_run(int_1);

}
short v_server_pool_conn( long parameter_1,int parameter_2,short parameter_3,unsigned int parameter_4)
{
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	double double_3 = 1;
	float float_2 = 1;
	short short_4 = 1;
	char_1 = v_server_pool_server(short_1,char_2,float_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = v_server_pool_update(long_1);

	int_3 = int_1 * int_2;
	short_1 = v_server_conn();

	v_server_close(double_2,int_4);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_2 + short_3;
	if(1)
	{
	}
	char_3 = char_2;
	if(1)
	{
	}
	double_3 = double_1;
	if(1)
	{
	}
	float_1 = v_server_connect(float_2,double_1,unsigned_int_2);

	double_2 = double_3 * double_2;
	if(1)
	{
		short_3 = short_1 + short_3;
	}
	return short_4;
}
int v_event_add_conn( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_2;
	double_3 = double_2 * double_3;
	long_2 = long_1 * long_1;
	char_1 = char_1 * char_2;
	return int_1;
}
int v_nc_set_tcpnodelay( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 * long_1;
	float_1 = float_1;
	return int_1;
}
int v_nc_set_nonblocking( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short_1 = short_1 + short_2;
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	return int_1;
}
float v_server_connect( float parameter_1,double parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_6 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_7 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	float float_3 = 1;
	short_3 = short_1 + short_2;
	short_1 = short_4 * short_2;
	if(1)
	{
	}
	char_2 = char_1 + char_2;
	short_1 = short_1 * short_4;
	if(1)
	{
		double_1 = double_1;
		int_3 = int_1 * int_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	int_2 = int_1 * int_2;
	if(1)
	{
		int_4 = int_1 * int_3;
		int_2 = int_4 + int_1;
	}
	if(1)
	{
		int int_5 = 1;
		int_2 = int_5 + int_2;
		if(1)
		{
			int_3 = v_nc_set_nonblocking(int_3);

			int_2 = int_5 * int_3;
		}
	}
	int_6 = int_1;
	if(1)
	{
		int_6 = int_4 + int_4;
		int_2 = int_3 + int_1;
	}
	int_6 = int_6 * int_3;
	int_6 = int_4 * int_3;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			double_2 = double_1 * double_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		}
		float_2 = float_1 * float_2;
		int_4 = v_nc_set_tcpnodelay(int_6);

		int_7 = v_event_add_conn(float_1,short_2);

		int_6 = int_3 * int_3;
	}
	char_3 = char_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	double_3 = double_1 * double_2;
	float_3 = float_2 + float_1;
	return float_2;
}
double v_server_pool_conn_for_replace( float parameter_1,char parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	float float_5 = 1;
	double double_7 = 1;
	long long_7 = 1;
	long long_8 = 1;
	float float_6 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_8 = 1;
	char char_7 = 1;
	char char_8 = 1;
	float float_7 = 1;
	short short_7 = 1;
	short short_8 = 1;
	short short_9 = 1;
	double double_9 = 1;
	int_2 = int_1 * int_2;
	float_3 = float_1 + float_2;
	v_string_init(int_1);

	double_2 = double_1 * double_1;
	int_4 = int_1 * int_3;
	char_2 = char_1 * char_1;
	float_1 = float_1;
	int_3 = int_2 * int_4;
	v_string_deinit(char_2);

	double_3 = double_2 * double_3;
	int_2 = int_1;
	short_3 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_2 * float_3;
	int_2 = int_2 * int_4;
	double_3 = double_4;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	double_5 = double_2 * double_2;
	float_2 = float_4 * float_3;
	long_1 = v_string_copy(short_1,char_2,double_1);

	double_1 = double_4 + double_5;
	double_4 = double_3 + double_1;
	double_4 = double_5 * double_4;
	long_3 = long_2 + long_3;
	double_5 = double_1 + double_5;
	double_1 = double_3 * double_2;
	float_3 = float_1 + float_3;
	char_1 = v_array_get(float_3,double_3);

	char_2 = char_3 + char_2;
	char_3 = char_4 * char_1;
	int_2 = int_2 + int_2;
	double_3 = double_5 * double_4;
	if(1)
	{
		short_4 = short_1 + short_2;
	}
	int_6 = int_5 * int_6;
	if(1)
	{
		long_3 = long_4;
	}
	unsigned_int_2 = unsigned_int_2;
	long_6 = long_5 * long_3;
	char_3 = char_2 + char_3;
	int_5 = v_nc_resolve(long_5,int_3,unsigned_int_3);

	double_4 = double_1 + double_1;
	char_4 = char_2;
	short_2 = short_1 * short_3;
	float_2 = float_4 + float_4;
	v_server_close(double_2,int_3);

	double_2 = double_6 + double_5;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	int_7 = int_6 + int_2;
	short_4 = short_4 * short_4;
	float_5 = float_1 * float_1;
	double_2 = double_4 * double_7;
	long_2 = long_6 * long_2;
	float_4 = float_5 * float_4;
	long_7 = long_8;
	float_6 = float_1 * float_4;
	int_2 = int_6 * int_1;
	char_6 = char_5 + char_5;
	long_8 = long_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3;
		if(1)
		{
			short short_5 = 1;
			short short_6 = 1;
			short_6 = short_3 + short_5;
		}
	}
	if(1)
	{
		char_5 = char_4;
	}
	float_5 = float_6;
	long_5 = long_3;
	double_3 = double_8 * double_7;
	float_2 = float_3 + float_1;
	int_5 = int_4;
	int_3 = int_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_5 = int_5 + int_4;
	}
	long_5 = v_string_empty(double_1);

	int_1 = int_6 * int_6;
	int_6 = int_7 * int_1;
	int_2 = int_8 * int_6;
	char_7 = char_8;
	float_7 = float_6 + float_2;
	int_6 = int_3 + int_6;
	if(1)
	{
	}
	double_4 = double_1 * double_3;
	if(1)
	{
		double_7 = double_2 + double_4;
	}
	if(1)
	{
		long_4 = long_2;
	}
	if(1)
	{
		int_3 = int_1 * int_1;
	}
	long_3 = long_5 * long_3;
	double_5 = double_3;
	short_7 = short_2 * short_1;
	float_2 = v_server_connect(float_4,double_2,unsigned_int_1);

	float_7 = float_4 * float_7;
	if(1)
	{
		short_8 = v_server_conn();

		float_1 = float_6 + float_2;
	}
	if(1)
	{
		int int_9 = 1;
		int_3 = int_9 * int_9;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_1;
	}
	if(1)
	{
		double_3 = double_7 + double_6;
	}
	float_5 = float_2;
	short_7 = short_1 + short_9;
	return double_9;
}
void v_req_forward( unsigned int parameter_1,double parameter_2,float parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	int int_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	long_1 = v_array_n(short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_1;
	v_mbuf_put(long_1);

	short_2 = v_server_pool_conn(long_2,int_1,short_1,unsigned_int_2);

	int_2 = v_event_add_out(long_2,short_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_3 = v_msg_append(unsigned_int_1,long_3,long_1,-1 );

	v_server_close(double_1,int_1);

	v_server_close_for_replace_server(char_1);

	float_1 = v_req_forward_stats(double_1,float_2,double_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = v_array_get(float_2,double_3);

	double_4 = v_server_pool_conn_for_replace(float_1,char_1,char_3);

	v_mbuf_remove(int_2,long_1);

	double_1 = v_req_forward_error(unsigned_int_1,long_2,float_2);

}
double v_req_forward_error( unsigned int parameter_1,long parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short_1 = short_1 * short_2;
	char_1 = char_1;
	v_req_put(long_1);

	int_2 = int_1 + int_2;
	short_2 = short_2 + short_2;
	int_2 = v_event_add_out(long_1,short_1);

	double_3 = double_1 * double_2;
	int_2 = v_req_done(double_2,short_2);

	double_3 = double_2 * double_1;
	if(1)
	{
		double double_4 = 1;
		double_4 = double_4;
	}
	if(1)
	{
		int_2 = int_1;
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 * long_2;
		}
	}
	return double_2;
}
short v_req_make_reply( float parameter_1,unsigned int parameter_2,float parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		char_2 = char_1 + char_2;
	}
	long_1 = long_1 * long_1;
	long_2 = long_1 + long_1;
	short_1 = v_msg_get(short_1,double_1,int_1,-1 );

	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	char_3 = char_3 * char_2;
	return short_1;
}
int v_server_pname_compare( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	double_2 = double_1 * double_2;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int_2 = int_1 * int_1;
			int_2 = int_3 + int_4;
		}
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return int_5;
}
double v_req_examine_replace_server( char parameter_1,long parameter_2,char parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	int int_5 = 1;
	short short_3 = 1;
	int int_6 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	char char_4 = 1;
	float float_2 = 1;
	double double_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_7 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	short short_5 = 1;
	double double_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_7 = 1;
	short short_6 = 1;
	int int_10 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_9 = 1;
	long long_8 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_6 = 1;
	float float_6 = 1;
	short short_7 = 1;
	double_1 = double_1 + double_1;
	int_3 = int_1 + int_2;
	long_2 = long_1 * long_1;
	short_1 = short_1;
	int_4 = int_1;
	short_2 = short_1 * short_1;
	int_1 = int_2 * int_5;
	short_1 = short_2 * short_3;
	int_6 = int_6 * int_5;
	long_1 = long_3 + long_2;
	char_2 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	long_2 = long_1 + long_1;
	if(1)
	{
		short_1 = v_req_make_reply(float_1,unsigned_int_3,float_1);

		char_3 = char_3 * char_1;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	}
	double_2 = double_2;
	int_1 = int_1;
	char_1 = char_4 + char_3;
	int_1 = int_1;
	int_2 = int_3;
	float_2 = float_1 + float_2;
	double_3 = double_1 * double_2;
	short_1 = short_2 * short_4;
	int_6 = int_1 * int_2;
	int_2 = int_5 + int_1;
	double_5 = double_2 + double_4;
	int_7 = int_2 + int_5;
	long_6 = long_4 * long_5;
	float_2 = float_2 + float_1;
	char_5 = char_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_2;
		int_3 = int_1;
	}
	double_2 = double_5 * double_5;
	if(1)
	{
		unsigned_int_6 = unsigned_int_1 * unsigned_int_1;
		double_3 = double_1 * double_6;
	}
	short_4 = short_2 * short_5;
	double_7 = double_4 + double_1;
	int_3 = int_6 * int_8;
	int_4 = int_3 * int_9;
	int_4 = int_2;
	char_4 = char_1 + char_2;
	double_2 = double_1 * double_8;
	unsigned_int_6 = unsigned_int_7;
	if(1)
	{
		long_7 = v_array_n(short_6);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		long_3 = long_5 * long_4;
	}
	int_2 = int_9 + int_10;
	float_3 = float_1 + float_1;
	char_2 = v_nc_valid_port(int_10);

	unsigned_int_8 = unsigned_int_8 * unsigned_int_4;
	if(1)
	{
		double_9 = double_2 + double_6;
	}
	double_8 = double_4 * double_8;
	if(1)
	{
		int_8 = v_event_add_out(long_1,short_4);

		char_3 = char_3;
		long_7 = long_8;
	}
	int_10 = int_6 + int_10;
	float_4 = float_4;
	char_4 = char_3;
	float_2 = float_4 * float_4;
	int_6 = int_6 + int_9;
	if(1)
	{
		double_9 = double_7 + double_9;
		float_5 = float_5 * float_3;
	}
	float_1 = float_3 * float_4;
	char_4 = char_6 + char_4;
	float_5 = float_6 + float_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_4 = long_2 + long_5;
		if(1)
		{
			char char_7 = 1;
			int_3 = int_4 * int_3;
			double_5 = double_7;
			char_7 = char_6 + char_6;
			unsigned_int_3 = unsigned_int_6 + unsigned_int_4;
		}
	}
	if(1)
	{
		float_4 = float_5 * float_1;
		int_10 = int_7 + int_2;
	}
	unsigned_int_7 = unsigned_int_8;
	int_5 = int_9 + int_10;
	if(1)
	{
		char_5 = v_array_get(float_1,double_1);

		short_1 = short_5 * short_5;
	}
	double_7 = double_8 * double_9;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	}
	short_3 = v_msg_append(unsigned_int_3,long_8,long_6,-1 );

	short_3 = short_3 * short_7;
	if(1)
	{
		int_8 = v_server_pname_compare(float_6,long_7);

		double_3 = double_8 + double_1;
	}
	return double_7;
}
float v_req_filter( double parameter_1,float parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_3 = 1;
		float_2 = float_1 + float_2;
		short_1 = short_1 * short_2;
		v_req_put(long_1);

		short_3 = short_1 + short_2;
	}
	if(1)
	{
		short short_4 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		v_msg_empty(unsigned_int_1);

		double_1 = v_req_examine_replace_server(char_1,long_1,char_2);

		short_4 = short_4 * short_2;
		double_2 = double_2;
		int_2 = int_1 * int_1;
		double_1 = double_1 + double_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "p") > 0)
	{
		long long_2 = 1;
		long_1 = long_2;
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
			}
		}
	}
	return float_3;
}
void v_req_recv_done( char parameter_1,double parameter_2,short parameter_3,float parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_4 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	long long_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	short_2 = short_1 + short_1;
	float_2 = float_1 + float_1;
	short_2 = v_req_make_reply(float_3,unsigned_int_1,float_1);

	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1;
	long_3 = long_1 * long_2;
	int_1 = int_1 * int_2;
	char_1 = char_1 * char_1;
	int_1 = int_2 * int_3;
	float_4 = v_req_filter(double_2,float_1,int_2);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_3 + int_1;
	double_2 = v_req_forward_error(unsigned_int_4,long_1,float_5);

	double_2 = double_2 * double_2;
	if(1)
	{
	}
	if(1)
	{
		char char_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		char_2 = char_2 + char_3;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		}
		double_3 = double_2 * double_3;
		if(1)
		{
			unsigned_int_4 = unsigned_int_5 * unsigned_int_6;
		}
		unsigned_int_8 = unsigned_int_5 * unsigned_int_7;
		if(1)
		{
			int_1 = int_1 + int_4;
		}
	}
	float_1 = float_5 + float_5;
	double_2 = double_3;
	int_4 = v_event_add_out(long_4,short_1);

	short_2 = short_2 * short_1;
	if(1)
	{
		if(1)
		{
			int_1 = int_5 + int_3;
		}
		if(1)
		{
			int_4 = int_2;
		}
		double_1 = double_2 + double_1;
	}
	if(1)
	{
		double_3 = double_1 * double_3;
	}
	short_1 = short_2 + short_1;
	if(1)
	{
		if(1)
		{
			v_req_forward(unsigned_int_6,double_1,float_2);

			int_2 = int_3;
		}
		int_5 = int_2 + int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_1;
		char_1 = char_2;
		long_4 = long_4 * long_4;
	}
	double_2 = double_4;
}
double v_req_get( long parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1 * long_1;
	float_1 = float_2;
	short_1 = v_msg_get(short_2,double_1,int_1,-1 );

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	return double_1;
}
short v_req_recv_next( long parameter_1,char parameter_2,float parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	v_req_put(long_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_2;
	if(1)
	{
		short short_1 = 1;
		int int_4 = 1;
		double double_3 = 1;
		short_1 = short_1 * short_2;
		if(1)
		{
			double double_2 = 1;
			int_2 = int_1 + int_1;
			int_3 = int_4;
			int_3 = int_4;
			double_2 = double_1 + double_2;
			double_3 = double_1 * double_1;
		}
		if(1)
		{
			double double_4 = 1;
			double_1 = v_req_get(long_1);

			double_3 = double_4 * double_1;
			int_3 = int_4;
		}
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		int_3 = int_1 * int_5;
	}
	if(1)
	{
	}
	int_2 = int_5 + int_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
	}
	return short_2;
}
double v_msg_repair( unsigned int parameter_1,double parameter_2,long parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	v_mbuf_insert(double_1,unsigned_int_1);

	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	char_2 = char_1 + char_1;
	short_3 = short_1 * short_2;
	return double_2;
	float_1 = v_mbuf_split(short_3,short_2,float_2);

}
long v_memcache_copy_bulk( short parameter_1,float parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	v_mbuf_length(long_1);

	int_1 = int_1 + int_1;
	double_3 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 * float_1;
	int_1 = int_2 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_1 * double_3;
		v_mbuf_remove(int_1,long_2);

		float_3 = float_1 + float_3;
	}
	char_2 = char_1 + char_2;
	if(1)
	{
	}
	v_mbuf_put(long_1);

	double_4 = double_5;
	short_1 = short_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			v_mbuf_copy(int_1,int_4,char_1);

			short_1 = short_1;
		}
		float_2 = float_3 * float_1;
	}
	short_1 = short_2 * short_3;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double_1 = double_2 + double_3;
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		double double_6 = 1;
		double_3 = double_6 * double_1;
	}
	char_1 = char_3 + char_2;
	long_4 = long_3 * long_3;
	int_2 = int_4;
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		if(1)
		{
			int_4 = int_1;
			char_2 = char_2 + char_2;
			short_2 = short_1 + short_3;
			char_2 = char_2 * char_3;
			int_1 = int_2;
		}
		if(1)
		{
			short short_4 = 1;
			int int_5 = 1;
			short short_5 = 1;
			short short_6 = 1;
			v_mbuf_insert(double_1,unsigned_int_2);

			short_4 = short_1;
			if(1)
			{
			}
			char_2 = char_3;
			int_5 = int_5 + int_3;
			int_4 = int_3 * int_5;
			short_4 = short_5 * short_6;
		}
	}
	long_1 = v_mbuf_get();

	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	double_3 = v_mbuf_empty(float_4);

	float_4 = float_2 * float_5;
	int_4 = int_2;
	return long_1;
}
void v_memcache_post_coalesce( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = v_array_n(short_1);

	char_1 = char_1 + char_2;
	double_1 = double_2;
	long_2 = long_3;
	short_2 = short_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		long_4 = v_memcache_copy_bulk(short_1,float_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		float_3 = float_2 + float_2;
		if(1)
		{
			short short_3 = 1;
			short_2 = short_2 * short_3;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			long_4 = long_4 * long_3;
		}
	}
	short_4 = v_msg_append(unsigned_int_2,long_4,long_3,-1 );

	int_3 = int_3 * int_4;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_3 * char_4;
	}
}
void v_memcache_pre_coalesce( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_2 * long_1;
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	short_1 = short_2 + short_2;
	v_mbuf_remove(int_1,long_2);

	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		long long_3 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_1;
		long_1 = long_3 * long_1;
		if(1)
		{
			int_1 = int_2 + int_2;
			short_1 = short_2 + short_1;
			double_4 = double_3 * double_2;
		}
		v_mbuf_length(long_2);

		double_2 = double_4 + double_4;
		long_3 = long_1 * long_1;
		char_2 = char_1;
	}
	double_5 = double_3 * double_2;
	double_1 = double_5 * double_4;
	short_4 = short_1 + short_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	int_2 = int_2 + int_2;
	v_mbuf_put(long_2);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
}
int v_msg_prepend( short parameter_1,float parameter_2,double parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = v_mbuf_get();

	long_1 = long_1 * long_1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_mbuf_copy(int_1,int_1,char_1);

	char_1 = char_1 * char_2;
	double_1 = double_1 * double_2;
	short_3 = v_mbuf_size(long_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	return int_1;
}
short v_memcache_append_key( short parameter_1,double parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	v_mbuf_copy(int_1,int_1,char_1);

	float_2 = float_1 + float_1;
	char_1 = v_array_push(float_1);

	long_1 = long_1 * long_2;
	double_1 = v_msg_ensure_mbuf(char_2,unsigned_int_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_2 * int_1;
	if(1)
	{
	}
	char_3 = char_1;
	int_3 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	double_3 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	char_1 = char_2 + char_2;
	return short_1;
}
short v_memcache_fragment_retrieval( long parameter_1,int parameter_2,int parameter_3,double parameter_4)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	long long_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_8 = 1;
	char_1 = v_msg_backend_idx(short_1,short_2,double_1);

	double_2 = double_1 * double_1;
	char_1 = char_1 * char_2;
	float_1 = float_2;
	short_2 = v_msg_append(unsigned_int_1,long_1,long_2,-1 );

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	char_1 = char_1 * char_2;
	long_2 = long_2;
	if(1)
	{
		long_3 = long_1 * long_2;
	}
	short_3 = short_3 * short_4;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_2 * int_3;
	}
	int_3 = v_msg_prepend(short_2,float_1,double_3);

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_4;
	double_2 = double_1 + double_4;
	long_4 = long_3 * long_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long_2 = v_array_n(short_1);

		double_1 = double_4 * double_5;
		int_1 = int_1 + int_2;
		long_4 = long_2 * long_4;
		if(1)
		{
			int_1 = int_3 + int_1;
			if(1)
			{
				int_2 = int_3 + int_2;
			}
		}
		double_1 = double_4 * double_3;
		char_3 = v_array_get(float_2,double_4);

		short_1 = short_4;
		short_1 = short_1 * short_2;
		if(1)
		{
			float_3 = float_2 + float_1;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_6 = 1;
		int_1 = int_1;
		if(1)
		{
			float_1 = float_2 * float_1;
		}
		if(1)
		{
			int_2 = int_3 * int_1;
		}
		if(1)
		{
			char_3 = char_2 + char_2;
		}
		if(1)
		{
			short_4 = v_msg_get(short_1,double_2,int_2,-1 );

			float_3 = float_1 + float_1;
		}
		v_msg_gen_frag_id();

		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			int int_4 = 1;
			int_4 = int_2 * int_2;
		}
		unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
		long_2 = long_1;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_7;
		double_3 = double_5 * double_4;
		double_2 = double_6 * double_3;
	}
	short_2 = v_memcache_append_key(short_1,double_4,unsigned_int_8);

	float_3 = float_3;
	return short_1;
}
float v_memcache_fragment( int parameter_1,long parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	return float_1;
	v_memcache_retrieval(float_2);

	short_1 = v_memcache_fragment_retrieval(long_1,int_1,int_2,double_1);

}
long v_memcache_add_auth_packet( float parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return long_1;
}
void v_memcache_parse_rsp( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int_3 = int_1 + int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "`") < 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	int_3 = int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	v_mbuf_length(long_2);

	float_3 = float_1 + float_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
}
unsigned int v_memcache_cas( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "My") > 0)
	{
	}
	return unsigned_int_1;
}
void v_memcache_retrieval( float parameter_1)
{
	char char_1 = 1;
	char_1 = char_1;
}
long v_memcache_delete( long parameter_1)
{
	long long_1 = 1;
	if(1)
	{
	}
	return long_1;
}
double v_memcache_arithmetic( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	short_3 = short_1 * short_2;
	return double_1;
}
double v_memcache_storage()
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	float_1 = float_1 * float_2;
	return double_1;
}
void v_memcache_parse_req( long parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	v_memcache_retrieval(float_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = v_array_push(float_2);

	v_mbuf_length(long_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	long_2 = long_1 * long_1;
	double_1 = v_memcache_storage();

	float_1 = float_2;
	double_2 = v_memcache_arithmetic(unsigned_int_2);

	int_2 = int_1 + int_1;
	unsigned_int_3 = v_memcache_cas(unsigned_int_1);

	long_1 = long_2 + long_1;
	long_1 = long_2 * long_1;
	short_1 = short_1 + short_1;
	long_3 = v_memcache_delete(long_4);

}
void v_redis_post_coalesce_mset( float parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float_1 = float_1 + float_1;
	float_1 = float_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_1 = double_1 + double_2;
		float_3 = float_1 * float_2;
	}
	short_1 = v_msg_append(unsigned_int_1,long_1,long_1,-1 );

}
void v_redis_post_coalesce_del( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 * char_2;
	long_1 = long_1;
	if(1)
	{
		int int_1 = 1;
		char_2 = char_1 * char_3;
		int_1 = int_1 + int_1;
	}
	float_1 = v_msg_prepend_format(int_2,short_1,long_2);

}
int v_redis_post_coalesce_mget( long parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	int int_4 = 1;
	v_redis_copy_bulk(char_1,int_1);

	int_3 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = v_msg_prepend_format(int_2,short_1,long_1);

	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_1;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		int_1 = int_2 * int_2;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_2 * float_1;
		}
		double_2 = double_1 + double_1;
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "I") < 0)
		{
			char_1 = char_1;
		}
	}
	return int_4;
	long_3 = v_array_n(short_1);

}
void v_redis_post_coalesce( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = v_redis_post_coalesce_mget(long_1);

	float_1 = float_1 * float_2;
	if(1)
	{
	}
	float_3 = float_1;
	v_redis_post_coalesce_del(char_1);

	v_redis_post_coalesce_mset(float_1);

}
void v_mbuf_rewind( float parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1;
	int_2 = int_1 * int_2;
}
void v_redis_pre_coalesce( double parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	short short_4 = 1;
	double double_7 = 1;
	char char_6 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long_1 = long_1 * long_1;
	float_1 = float_1;
	char_3 = char_1 + char_2;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	char_5 = char_4 * char_5;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_4 = double_2 + double_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	int_1 = int_1;
	char_3 = char_4;
	v_mbuf_length(long_2);

	int_2 = int_2;
	double_2 = double_2 * double_2;
	double_3 = double_2 + double_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_4 = double_5 + double_4;
	float_1 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	short_4 = short_3 * short_1;
	if(1)
	{
		double double_6 = 1;
		double_1 = double_5 + double_3;
		double_6 = double_1;
		double_1 = double_3 * double_7;
	}
	char_6 = char_2 + char_3;
	double_7 = double_7 * double_7;
	v_mbuf_rewind(float_1);

	char_6 = char_5 * char_3;
	short_2 = short_1 * short_3;
	int_1 = int_3 + int_3;
	unsigned_int_5 = unsigned_int_6;
}
int v_redis_valid_auth( long parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
		double double_1 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double_3 = double_1 * double_2;
		short_1 = short_1 * short_2;
		long_2 = long_1 * long_2;
		char_3 = v_array_get(float_1,double_2);

		long_2 = long_2 + long_3;
		long_4 = long_2 + long_3;
		double_1 = double_3 * double_2;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	return int_1;
}
long v_redis_handle_auth_req( int parameter_1,short parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = int_1 + int_2;
	char_1 = char_1 * char_1;
	double_1 = double_1 * double_1;
	int_1 = int_3 * int_2;
	char controller4vul_2623[2];
	fgets(controller4vul_2623 ,2 ,stdin);
	if( strcmp( controller4vul_2623, "m") < 0)
	{
		short_1 = v_msg_append(unsigned_int_1,long_1,long_2,uni_para);

	}
	if(1)
	{
		int int_4 = 1;
		int_3 = int_4 * int_3;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_2;
	}
	long_1 = long_1 * long_2;
	return long_3;
}
long v_redis_reply( long parameter_1,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	float_2 = float_1 * float_2;
	short_1 = short_1 + short_2;
	char controller4vul_2622[2];
	fgets(controller4vul_2622 ,2 ,stdin);
	if( strcmp( controller4vul_2622, "n") < 0)
	{
		long_1 = v_redis_handle_auth_req(int_1,short_1,uni_para);

	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return long_2;
}
short v_msg_append( unsigned int parameter_1,long parameter_2,long parameter_3,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char * vul_var;
	float_3 = float_1 + float_2;
	float_2 = float_3 + float_3;
	int_1 = int_1 * int_1;
	char controller4vul_2624[3];
	fgets(controller4vul_2624 ,3 ,stdin);
	if( strcmp( controller4vul_2624, "9D") > 0)
	{
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 949)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
	}
	int_1 = int_2 * int_1;
	char_1 = char_1 + char_1;
	double_3 = double_1 * double_2;
	double_5 = double_4 * double_2;
}
double v_mbuf_empty( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	char_3 = char_1 * char_2;
	return double_1;
}
void v_redis_copy_bulk( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_5 = 1;
	long long_4 = 1;
	float float_2 = 1;
	double double_4 = 1;
	float float_3 = 1;
	char char_3 = 1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 + long_2;
	char_1 = char_1 * char_1;
	short_1 = v_msg_append(unsigned_int_2,long_2,long_2,-1 );

	long_1 = long_1 * long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_2;
		short_1 = short_2;
	}
	v_mbuf_insert(double_1,unsigned_int_1);

	double_1 = double_1 * double_1;
	if(1)
	{
	}
	float_1 = float_1;
	short_2 = short_2 + short_3;
	short_1 = short_4 * short_1;
	if(1)
	{
		double_2 = double_2 + double_2;
		double_3 = double_1 * double_1;
	}
	if(1)
	{
		short_5 = short_4 + short_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char_1 = char_1;
		}
		v_mbuf_put(long_4);

		double_2 = double_1;
		v_mbuf_remove(int_1,long_1);

		short_3 = short_3 * short_1;
	}
	float_1 = float_2 + float_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			double_4 = v_mbuf_empty(float_2);

			double_4 = double_3 * double_4;
			float_3 = float_1 * float_2;
			if(1)
			{
				float float_4 = 1;
				float_2 = float_3 + float_4;
			}
			short_3 = short_3;
			v_mbuf_length(long_1);

			int_2 = int_1 * int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			int int_4 = 1;
			if(1)
			{
				double_4 = double_3;
				if(1)
				{
				}
			}
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
			int_4 = int_3 * int_2;
		}
	}
	if(1)
	{
		short_4 = short_5;
	}
	char_1 = char_3;
	float_3 = float_1 + float_1;
}
double v_msg_ensure_mbuf( char parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long_1 = v_mbuf_get();

		int_1 = int_1 * int_2;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "N") < 0)
		{
		}
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2 + long_1;
	}
	return double_1;
	short_1 = v_mbuf_size(long_1);

	v_mbuf_insert(double_2,unsigned_int_1);

}
float v_redis_append_key( unsigned int parameter_1,double parameter_2,float parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_2;
	int_1 = int_1 + int_2;
	int_3 = int_1 * int_2;
	int_2 = int_1 * int_4;
	char_3 = char_3 + char_1;
	char_4 = v_array_push(float_1);

	double_1 = double_1 * double_1;
	if(1)
	{
	}
	char_3 = char_1;
	int_3 = int_5;
	int_2 = int_2 + int_2;
	if(1)
	{
	}
	int_1 = int_3 * int_6;
	if(1)
	{
	}
	double_2 = double_1;
	float_2 = float_1 * float_2;
	long_1 = long_1 + long_1;
	char_3 = char_3;
	char_2 = char_2 * char_3;
	if(1)
	{
	}
	double_1 = v_msg_ensure_mbuf(char_4,unsigned_int_1);

	float_1 = float_1 * float_2;
	int_1 = int_5 * int_3;
	return float_1;
	v_mbuf_copy(int_5,int_3,char_4);

}
short v_random_dispatch( float parameter_1,char parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 * float_1;
	int_2 = int_1 + int_2;
	return short_1;
}
int v_modula_dispatch( int parameter_1,float parameter_2,float parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char_1 = char_1 + char_1;
	int_2 = int_1 * int_2;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return int_3;
}
short v_ketama_dispatch( char parameter_1,float parameter_2,char parameter_3)
{
	short short_1 = 1;
	return short_1;
}
long v_server_pool_hash( long parameter_1,char parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_2;
	double_2 = double_1 + double_3;
	if(1)
	{
	}
	if(1)
	{
	}
	return long_1;
	long_1 = v_array_n(short_1);

}
long v_server_pool_idx( int parameter_1,unsigned int parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_6 = 1;
	long long_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double_2 = double_1 + double_1;
	double_2 = double_1 * double_3;
	char_1 = char_1 + char_1;
	if(1)
	{
		short short_3 = 1;
		short_1 = v_ketama_dispatch(char_1,float_1,char_1);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		long_1 = v_array_n(short_2);

		long_1 = v_server_pool_hash(long_2,char_2,long_2);

		double_5 = double_4 + double_3;
		short_2 = short_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
			if(1)
			{
				int_1 = int_1 + int_1;
				double_1 = double_1 * double_2;
			}
		}
	}
	short_1 = v_random_dispatch(float_2,char_1,unsigned_int_4);

	int_1 = int_1 * int_2;
	int_1 = int_3 + int_2;
	long_2 = v_string_empty(double_4);

	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	double_6 = double_4 * double_2;
	double_5 = double_1 + double_1;
	int_2 = int_1 * int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	long_3 = long_3 + long_1;
	char_2 = char_1 + char_1;
	return long_1;
	int_2 = v_modula_dispatch(int_3,float_3,float_4);

}
char v_msg_backend_idx( short parameter_1,short parameter_2,double parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long_2 = long_1 * long_1;
	long_1 = v_server_pool_idx(int_1,unsigned_int_1,float_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return char_1;
}
void v_msg_gen_frag_id()
{
}
long v_redis_fragment_argx( float parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	short short_5 = 1;
	float float_7 = 1;
	short short_6 = 1;
	double double_5 = 1;
	char char_2 = 1;
	long long_5 = 1;
	char char_4 = 1;
	long long_6 = 1;
	long long_7 = 1;
	short short_8 = 1;
	int_1 = int_2;
	int_4 = int_1 * int_3;
	float_2 = float_1 + float_1;
	double_1 = double_2;
	double_2 = double_3 * double_2;
	int_3 = int_2 + int_2;
	if(1)
	{
	}
	char_1 = v_array_get(float_3,double_2);

	short_1 = short_1 * short_1;
	short_2 = short_2 + short_3;
	if(1)
	{
		v_msg_gen_frag_id();

		int_2 = int_3;
	}
	long_1 = long_1;
	double_4 = double_4 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_4 = 1;
			char_1 = v_msg_backend_idx(short_2,short_2,double_3);

			float_4 = v_redis_append_key(unsigned_int_1,double_2,float_5);

			short_3 = short_1 + short_4;
		}
		long_3 = long_2 + long_2;
	}
	float_5 = float_6 * float_6;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float float_8 = 1;
		short short_7 = 1;
		long_4 = v_array_n(short_5);

		double_2 = double_4 + double_2;
		int_1 = int_3 * int_2;
		int_3 = int_2 * int_2;
		if(1)
		{
			int_4 = int_3 + int_3;
			if(1)
			{
				double_3 = double_1 + double_2;
			}
		}
		float_8 = float_3 * float_7;
		short_6 = short_6 + short_7;
		int_4 = int_1 + int_3;
		if(1)
		{
			double_2 = double_5 + double_3;
		}
		if(1)
		{
			double_3 = double_2 * double_3;
		}
		if(1)
		{
			char char_3 = 1;
			char_2 = char_3;
			if(1)
			{
				float_1 = float_6 + float_3;
			}
			float_7 = v_msg_prepend_format(int_2,short_2,long_5);

			char_2 = char_3 + char_4;
			if(1)
			{
				v_redis_copy_bulk(char_4,int_3);

				long_4 = long_6 + long_7;
			}
			int_1 = int_2 + int_1;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short short_10 = 1;
		double double_6 = 1;
		char char_5 = 1;
		char char_6 = 1;
		unsigned int unsigned_int_5 = 1;
		long_6 = long_5 * long_7;
		if(1)
		{
			short_3 = short_6 * short_2;
		}
		if(1)
		{
			long_1 = long_2 * long_7;
		}
		if(1)
		{
			short_8 = v_msg_get(short_3,double_5,int_1,-1 );

			char_2 = char_4 + char_1;
		}
		if(1)
		{
			short short_9 = 1;
			short_5 = short_9 * short_2;
		}
		if(1)
		{
			double_1 = double_1 + double_4;
		}
		if(1)
		{
			int_3 = int_2;
		}
		short_5 = short_2 + short_10;
		double_4 = double_1 + double_6;
		char_6 = char_2 + char_5;
		short_3 = short_2;
		unsigned_int_5 = unsigned_int_4;
	}
	int_4 = int_3 * int_1;
	return long_3;
}
unsigned int v_redis_fragment( float parameter_1,short parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	return unsigned_int_1;
	long_1 = v_redis_fragment_argx(float_1,unsigned_int_2,unsigned_int_3,int_1);

}
float v_msg_prepend_format( int parameter_1,short parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	float float_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = int_1 + int_2;
	int_2 = int_2 + int_1;
	short_2 = short_1 + short_2;
	short_3 = v_mbuf_size(long_1);

	int_3 = int_3 + int_4;
	if(1)
	{
	}
	float_3 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_1;
	long_2 = v_mbuf_get();

	float_4 = float_1 * float_2;
	int_6 = int_1 + int_5;
	int_7 = int_7;
	char_3 = char_1 * char_2;
	return float_2;
}
void v_redis_add_auth_packet( float parameter_1,float parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = char_2;
	int_2 = int_1 + int_1;
	double_3 = double_1 * double_2;
	int_3 = int_1;
	float_1 = float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_3;
	if(1)
	{
		short_3 = short_1 * short_2;
	}
	int_1 = int_2;
	if(1)
	{
		float_2 = v_msg_prepend_format(int_3,short_2,long_1);

		v_msg_put(double_1);

		double_3 = double_4 + double_1;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	char_2 = char_2 * char_2;
	short_3 = v_msg_get(short_2,double_4,int_3,-1 );

	short_1 = short_3 * short_3;
}
void v_redis_parse_rsp( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_4 = 1;
	long long_5 = 1;
	double double_5 = 1;
	char char_4 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_7 = 1;
	long long_8 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_6 = 1;
	int_1 = int_2;
	char_2 = char_1 * char_2;
	int_3 = int_1 * int_1;
	int_5 = int_2 * int_4;
	float_1 = float_1 + float_1;
	float_1 = float_1 + float_2;
	int_1 = int_4;
	double_1 = double_1 + double_2;
	short_1 = short_1 + short_2;
	float_3 = float_1 + float_3;
	double_1 = double_1 + double_2;
	int_4 = int_4 * int_6;
	int_5 = int_2 * int_6;
	double_1 = double_1;
	int_4 = int_4 + int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_2 = 1;
			if(1)
			{
				char_3 = char_3 * char_3;
			}
			if(1)
			{
				long_1 = long_1 + long_1;
			}
			if(1)
			{
				long_2 = long_3;
			}
			if(1)
			{
				double_4 = double_3 + double_3;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
			}
			if(1)
			{
				short_2 = short_1 + short_2;
				long_1 = long_3 + long_2;
			}
		}
		if(1)
		{
			char_2 = char_3 + char_3;
		}
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
		long long_4 = 1;
		float float_5 = 1;
		short_3 = short_3 + short_4;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
		float_2 = float_4 + float_2;
		int_3 = int_6 + int_3;
		int_3 = int_3 + int_1;
		v_mbuf_length(long_3);

		long_3 = long_4 + long_5;
		float_5 = float_3 + float_2;
		double_4 = double_5 * double_4;
		char_2 = char_4 + char_3;
		char_4 = char_1 * char_4;
		int_7 = int_4 * int_2;
		int_7 = int_5 * int_2;
	}
	short_4 = short_3 * short_4;
	int_6 = int_8 * int_3;
	long_5 = long_6 * long_1;
	if(1)
	{
		int_7 = int_2 * int_2;
	}
	if(1)
	{
		int_7 = int_5;
	}
	int_4 = int_6 + int_7;
	unsigned_int_4 = unsigned_int_6 + unsigned_int_1;
	if(1)
	{
		unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
		int_3 = int_2 * int_5;
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
		int_4 = int_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_6;
	}
	short_1 = short_2 * short_3;
	int_7 = int_1 * int_1;
	int_7 = int_7 * int_5;
	float_4 = float_6 + float_1;
	short_4 = short_3;
	double_4 = double_2 + double_1;
	unsigned_int_7 = unsigned_int_1 + unsigned_int_7;
	long_6 = long_7 + long_8;
	char_1 = char_1;
	double_5 = double_3;
	char_1 = char_2 + char_4;
	unsigned_int_8 = unsigned_int_1 * unsigned_int_5;
	double_5 = double_1 + double_2;
	float_6 = float_3 * float_6;
	long_8 = long_1 * long_3;
	int_1 = int_3 * int_3;
	double_5 = double_5 * double_1;
	double_4 = double_4 * double_6;
}
char v_redis_argkvx( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_2;
	return char_1;
}
float v_redis_argx( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	double_3 = double_1 * double_2;
	int_1 = int_1 + int_1;
	double_2 = double_4 + double_1;
	return float_1;
}
double v_redis_argn( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return double_1;
}
double v_redis_arg3()
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short_1 = short_1 + short_2;
	return double_1;
}
long v_redis_arg2( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double_3 = double_1 + double_2;
	return long_1;
}
int v_redis_arg1()
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_2;
	return int_1;
}
int v_redis_arg0( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
float v_mbuf_data_size()
{
	float float_1 = 1;
	return float_1;
}
short v_redis_argeval()
{
	int int_1 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_1;
	return short_1;
}
long v_redis_argz()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return long_1;
}
void v_redis_parse_req( short parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_2 = 1;
	short_1 = v_redis_argeval();

	int_1 = v_redis_arg1();

	long_1 = v_redis_arg2(short_1);

	double_1 = v_redis_arg3();

	double_2 = v_redis_argn(unsigned_int_1);

	int_1 = int_2;
	long_2 = v_redis_argz();

	float_1 = v_mbuf_data_size();

	char_1 = v_array_push(float_2);

	int_2 = v_redis_arg0(float_3);

	float_3 = v_redis_argx(float_4);

	char_1 = v_redis_argkvx(short_2);

	v_mbuf_length(long_2);

}
void v_array_create( short parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float_1 = float_2;
	float_1 = float_2 + float_3;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	float_3 = float_1 + float_1;
	char_2 = char_1 * char_1;
}
long v__msg_get()
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_5 = 1;
	float float_6 = 1;
	long long_5 = 1;
	short_1 = short_1 * short_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		v_array_create(short_1,double_1);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_3;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
	if(1)
	{
	}
	if(1)
	{
		short_2 = short_3 + short_2;
	}
	double_3 = double_2 * double_2;
	int_1 = int_1 + int_1;
	float_1 = float_1 + float_1;
	float_3 = float_2 + float_2;
	char_1 = char_1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	long_1 = long_3;
	int_1 = int_1 + int_2;
	int_2 = int_2 + int_2;
	float_1 = float_3;
	short_3 = short_4;
	char_1 = char_1 * char_1;
	short_4 = short_5 + short_1;
	double_4 = double_4;
	float_1 = float_2;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_1;
	long_1 = long_1 * long_3;
	short_1 = short_6 * short_3;
	if(1)
	{
		unsigned_int_7 = unsigned_int_5;
	}
	int_1 = int_1 * int_1;
	int_2 = int_3 * int_3;
	unsigned_int_7 = unsigned_int_1 + unsigned_int_5;
	short_1 = short_5 + short_1;
	int_4 = int_2;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
	char_2 = char_1;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_1;
	char_1 = char_3 * char_3;
	char_4 = char_4;
	char_4 = char_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	double_3 = double_1 + double_2;
	double_2 = double_2 * double_5;
	double_1 = double_3;
	double_6 = double_6 * double_1;
	int_1 = int_2 * int_3;
	int_2 = int_2;
	float_4 = float_1 * float_2;
	int_3 = int_1 * int_3;
	long_2 = long_3 + long_2;
	v_rbtree_node_init(unsigned_int_1);

	long_2 = long_3 * long_4;
	unsigned_int_4 = unsigned_int_8 + unsigned_int_2;
	double_5 = double_4 + double_1;
	if(1)
	{
		short_4 = short_3 + short_4;
	}
	unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_9 = unsigned_int_9 * unsigned_int_7;
	float_6 = float_5 * float_1;
	if(1)
	{
		short_3 = short_5 * short_6;
	}
	char_1 = char_3 * char_4;
	return long_5;
}
short v_msg_get( short parameter_1,double parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	char_2 = char_1 + char_2;
	long_1 = long_1 + long_2;
	char controller4vul_2620[3];
	fgets(controller4vul_2620 ,3 ,stdin);
	if( strcmp( controller4vul_2620, "l+") < 0)
	{
		char char_3 = 1;
		char char_4 = 1;
		char controller4vul_2621[2];
		fgets(controller4vul_2621 ,2 ,stdin);
		if( strcmp( controller4vul_2621, "e") > 0)
		{
			long_1 = v_redis_reply(long_3,uni_para);

			unsigned_int_2 = unsigned_int_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
		char_3 = char_2 * char_3;
		char_2 = char_4 + char_2;
		unsigned_int_2 = unsigned_int_4;
		float_1 = float_1 + float_1;
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4;
		}
		if(1)
		{
			int int_1 = 1;
			int_1 = int_2;
		}
		float_2 = float_2 * float_3;
		short_2 = short_2 * short_2;
		float_1 = float_3 + float_1;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
	}
	int_3 = int_2 + int_3;
	return short_2;
}
void v_mbuf_length( long parameter_1)
{
	long long_1 = 1;
	long_1 = long_1 * long_1;
}
void v_mbuf_copy( int parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	short_1 = v_mbuf_size(long_1);

	double_3 = double_1 + double_2;
	double_4 = v_mbuf_full(double_2);

	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
float v_mbuf_split( short parameter_1,short parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 * double_2;
	v_mbuf_copy(int_1,int_2,char_1);

	int_2 = int_3 + int_3;
	float_2 = float_1 + float_1;
	float_2 = float_1 * float_1;
	double_1 = double_1 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "T9") > 0)
	{
	}
	if(1)
	{
		long_1 = v_mbuf_get();

		double_1 = double_2 * double_2;
	}
	float_1 = float_2;
	double_2 = double_1 * double_2;
	int_2 = int_3;
	double_4 = double_3 * double_4;
	return float_2;
	v_mbuf_length(long_2);

}
char v_msg_parsed( long parameter_1,char parameter_2,char parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	short_1 = v_msg_get(short_1,double_1,int_1,-1 );

	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	v_mbuf_length(long_1);

	double_1 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		v_mbuf_put(long_2);

		short_1 = short_1 + short_1;
	}
	long_2 = long_2 * long_2;
	float_1 = v_mbuf_split(short_2,short_1,float_1);

	int_3 = int_2 + int_3;
	double_2 = double_2 * double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	int_3 = int_3;
	return char_1;
	v_mbuf_insert(double_1,unsigned_int_2);

}
void v_msg_empty( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char_3 = char_1 + char_2;
}
char v_msg_parse( float parameter_1,long parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char char_3 = 1;
	char_1 = v_msg_parsed(long_1,char_1,char_1);

	double_2 = double_1 * double_1;
	if(1)
	{
		double_2 = double_2 * double_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1 * short_2;
	v_msg_empty(unsigned_int_1);

	char_1 = char_2 * char_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	int_2 = int_1 + int_1;
	double_2 = v_msg_repair(unsigned_int_2,double_3,long_1);

	int_1 = int_3 + int_3;
	short_3 = short_2 * short_3;
	int_4 = int_3;
	float_1 = float_1 * float_1;
	double_1 = double_2 * double_3;
	return char_3;
}
unsigned int v_conn_recv( double parameter_1,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1;
	double_2 = double_1 * double_2;
	double_4 = double_3 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
		if(1)
		{
			if(1)
			{
				double_2 = double_5 + double_4;
			}
			double_1 = double_6 + double_1;
		}
		if(1)
		{
			double double_7 = 1;
			short short_1 = 1;
			double_7 = double_1;
			short_1 = short_1 * short_1;
			double_5 = double_2 * double_3;
		}
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 * long_1;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
		}
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_2 + short_2;
			double_3 = double_6 + double_1;
		}
		if(1)
		{
			int int_1 = 1;
			double_5 = double_3 * double_1;
			int_1 = int_1;
			double_5 = double_3 * double_3;
		}
	}
	unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
	return unsigned_int_1;
}
short v_mbuf_size( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double_3 = double_1 + double_2;
	return short_1;
}
void v_mbuf_insert( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = int_2;
	char_3 = char_1 * char_2;
}
long v__mbuf_get()
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	double double_3 = 1;
	float_2 = float_1 + float_2;
	double_2 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_2 = 1;
		char char_1 = 1;
		short short_3 = 1;
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		short_2 = short_1 * short_1;
		long_1 = long_1 * long_2;
		char_1 = char_1 * char_1;
		short_3 = short_1 * short_1;
	}
	float_3 = float_2 * float_1;
	if(1)
	{
	}
	if(1)
	{
		long_1 = long_1;
	}
	long_4 = long_3 + long_3;
	int_1 = int_1;
	double_3 = double_1;
	return long_3;
}
long v_mbuf_get()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char_3 = char_1 * char_2;
	long_1 = long_1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	long_1 = long_2 + long_3;
	long_3 = long_1;
	long_2 = long_1;
	float_2 = float_1 + float_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_2;
	int_1 = int_1;
	long_1 = v__mbuf_get();

	short_3 = short_1 + short_2;
	return long_3;
}
double v_mbuf_full( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	char_3 = char_1 + char_2;
	return double_1;
}
char v_msg_recv_chain( float parameter_1,float parameter_2,double parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	long long_5 = 1;
	float float_1 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1;
	double_1 = double_1;
	char_2 = char_1 * char_2;
	double_2 = v_mbuf_full(double_3);

	double_3 = double_1 * double_3;
	char_3 = char_3 * char_3;
	char_2 = char_1 * char_2;
	if(1)
	{
		long long_2 = 1;
		short_1 = short_1 * short_1;
		if(1)
		{
		}
		long_1 = v_mbuf_get();

		short_1 = short_1 * short_1;
		long_1 = long_2;
	}
	int_2 = int_2;
	double_4 = double_1 + double_2;
	long_4 = long_3 + long_4;
	if(1)
	{
		if(1)
		{
		}
	}
	unsigned_int_1 = unsigned_int_1;
	v_mbuf_insert(double_1,unsigned_int_2);

	short_2 = v_mbuf_size(long_5);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = v_msg_parse(float_1,long_4,unsigned_int_1);

	long_5 = long_5 * long_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float_3 = float_1 + float_2;
		if(1)
		{
		}
		unsigned_int_3 = unsigned_int_4;
		if(1)
		{
			short short_3 = 1;
			unsigned_int_5 = v_conn_recv(double_3,short_1);

			short_1 = short_3 * short_2;
		}
		float_3 = float_4 * float_5;
	}
	return char_3;
}
short v_msg_recv( double parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char_1 = v_msg_recv_chain(float_1,float_2,double_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return short_1;
}
short v__conn_get()
{
	short short_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	float float_3 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	double double_7 = 1;
	short short_5 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
		long long_1 = 1;
		double double_2 = 1;
		long_1 = long_2;
		float_1 = float_2;
		double_1 = double_2;
		double_4 = double_1 + double_3;
	}
	if(1)
	{
		long_3 = long_2 + long_2;
		if(1)
		{
		}
	}
	short_2 = short_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_4 = long_3 + long_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	int_2 = int_1 * int_1;
	short_2 = short_3 + short_3;
	short_1 = short_2 + short_4;
	float_3 = float_2 + float_1;
	double_1 = double_5 * double_4;
	char_1 = char_1 + char_2;
	int_1 = int_2 * int_1;
	int_3 = int_2 * int_2;
	double_3 = double_3 + double_6;
	double_4 = double_1 * double_5;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	float_3 = float_1 + float_2;
	char_4 = char_3 * char_1;
	int_4 = int_3 + int_2;
	short_2 = short_1 + short_1;
	double_1 = double_3 + double_1;
	unsigned_int_1 = unsigned_int_4;
	double_7 = double_6 + double_3;
	if(1)
	{
		int_1 = int_2 + int_4;
	}
	if(1)
	{
		double_6 = double_7;
	}
	short_2 = short_5 + short_1;
	int_2 = int_3 * int_3;
	double_5 = double_5 + double_7;
	double_7 = double_7;
	return short_4;
}
float v_conn_get(float parameter_2,double parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_1 * double_2;
	long_2 = long_1 * long_1;
	char controller4vul_2616[3];
	fgets(controller4vul_2616 ,3 ,stdin);
	if( strcmp( controller4vul_2616, "/M") > 0)
	{
		long_3 = v_rsp_recv_next(float_1,double_1,char_1,uni_para);

	}
	long_1 = long_2 + long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		short short_2 = 1;
		int int_2 = 1;
		int int_5 = 1;
		long long_5 = 1;
		double double_5 = 1;
		char_1 = char_1 + char_1;
		short_1 = short_1 * short_2;
		short_3 = short_2 * short_1;
		int_1 = int_1 * int_2;
		double_3 = double_2;
		int_5 = int_3 * int_4;
		long_4 = long_5;
		int_6 = int_1 + int_6;
		unsigned_int_2 = unsigned_int_1;
		double_2 = double_2 + double_4;
		double_4 = double_5 * double_3;
		double_5 = double_4 + double_5;
		int_4 = int_1 + int_7;
		int_5 = int_3 + int_8;
		int_8 = int_8 * int_6;
		long_6 = long_6;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		float float_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned_int_2 = unsigned_int_3;
		int_7 = int_4 + int_1;
		int_7 = int_1 * int_3;
		int_1 = int_8 + int_1;
		unsigned_int_2 = unsigned_int_1;
		double_1 = double_3 + double_2;
		unsigned_int_4 = unsigned_int_4;
		int_3 = int_4 * int_7;
		float_1 = float_1 + float_1;
		float_1 = float_2;
		long_2 = long_6 + long_4;
		char_2 = char_2 * char_2;
		char_3 = char_2 * char_1;
		double_1 = double_4 * double_2;
		short_3 = short_1 + short_1;
		short_1 = short_1 + short_1;
	}
	unsigned_int_1 = unsigned_int_4;
	int_6 = int_6 * int_7;
	return float_1;
}
short v_server_conn()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = v_conn_get(float_1,double_1,-1 );

	double_2 = double_1 * double_1;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
	char_3 = char_1 + char_2;
	int_1 = int_1 * int_1;
	double_3 = double_4;
	return short_1;
}
unsigned int v_server_each_preconnect()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	int_2 = int_1 * int_2;
	int_2 = int_3 * int_2;
	double_1 = double_2;
	v_server_close(double_1,int_4);

	float_2 = float_1 * float_1;
	float_2 = float_3 * float_2;
	short_1 = v_server_conn();

	double_1 = double_3 * double_1;
	short_3 = short_1 * short_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		float float_5 = 1;
		float_2 = v_server_connect(float_4,double_2,unsigned_int_1);

		unsigned_int_1 = unsigned_int_1;
		float_5 = float_3 + float_3;
	}
	return unsigned_int_1;
}
short v_server_pool_each_preconnect()
{
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	float_1 = v_array_each(long_1);

	short_1 = short_2;
	unsigned_int_1 = v_server_each_preconnect();

	int_1 = int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
	}
	return short_3;
}
short v_server_pool_preconnect( int parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = v_server_pool_each_preconnect();

	float_1 = float_2;
	float_3 = v_array_each(long_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	return short_1;
}
unsigned int v_core_send( unsigned int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 * int_2;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	return unsigned_int_2;
}
float v_core_recv( short parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char_1 = char_2;
	short_1 = short_1 + short_2;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	return float_1;
}
char v_core_close( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short_1 = short_1 * short_2;
	char_1 = char_1 + char_1;
	short_2 = short_2 * short_3;
	if(1)
	{
		double_1 = v_nc_unresolve_addr(int_1,float_1);

		int_1 = int_2 * int_1;
		double_2 = double_1;
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_2 * double_3;
		int_1 = v_event_del_conn(float_2,char_1);

		int_2 = int_3;
	}
	double_5 = double_3 * double_3;
	int_1 = v_nc_unresolve_peer_desc(int_3);

	float_2 = float_1 * float_1;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	char_2 = char_1 + char_2;
	return char_3;
}
int v_nc_get_soerror( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float_1 = float_2;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_4 = float_3 + float_1;
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	return int_1;
}
char v_core_error( short parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	double_2 = double_1 * double_1;
	short_1 = short_1 * short_1;
	char_1 = v_core_close(double_2,int_1);

	float_1 = float_1 * float_2;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_nc_get_soerror(int_1);

	int_1 = int_1 * int_1;
	return char_4;
}
void v_conn_close_for_replace_server( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_5 = 1;
	short short_1 = 1;
	int int_6 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_4 = 1;
	int_1 = int_1 + int_2;
	int_2 = int_3;
	int_4 = int_3;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		char char_1 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_4 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_8 = 1;
		int int_9 = 1;
		int_5 = v_req_done(double_1,short_1);

		unsigned_int_1 = unsigned_int_2;
		double_2 = double_1 + double_2;
		int_3 = int_5 + int_2;
		int_6 = int_4 + int_5;
		int_3 = int_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		char_2 = char_1 + char_2;
		int_4 = v_event_add_out(long_1,short_1);

		int_4 = int_5 + int_3;
		if(1)
		{
			char_2 = char_2;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			int_5 = int_6 + int_6;
			v_req_put(long_1);

			short_3 = short_2 * short_1;
		}
		if(1)
		{
			double_3 = double_1 * double_2;
		}
		int_2 = int_2 + int_2;
		float_1 = float_2;
		v_conn_put(int_3);

		double_3 = double_4;
		int_3 = int_3 * int_1;
		if(1)
		{
			v_msg_tmo_delete(float_3);

			double_3 = double_3;
		}
		if(1)
		{
			char char_3 = 1;
			long long_2 = 1;
			long long_3 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			int_6 = v_event_del_conn(float_4,char_2);

			int_1 = int_2 * int_4;
			double_3 = double_1 * double_1;
			char_2 = char_2 * char_3;
			int_5 = int_6 * int_5;
			long_3 = long_1 * long_2;
			if(1)
			{
				int_7 = int_5 * int_5;
			}
		}
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		int_8 = int_1;
		unsigned_int_3 = unsigned_int_1;
		double_3 = double_1 + double_3;
		if(1)
		{
			float float_5 = 1;
			double_3 = double_1;
			int_8 = int_2;
			double_4 = double_3 * double_1;
			double_3 = double_1 * double_1;
			float_1 = float_5 + float_4;
		}
		double_4 = double_2 + double_2;
		if(1)
		{
			float_4 = float_1 + float_1;
		}
		v_rsp_put(char_4);

		short_1 = short_1;
		double_4 = double_1;
		double_4 = double_4 + double_1;
		int_7 = int_9 * int_8;
	}
}
int v_conn_to_ctx( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	int_1 = int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "N4") > 0)
	{
		int_2 = int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_3 = 1;
		float_1 = float_2;
		int_2 = int_2 + int_3;
	}
	return int_4;
}
void v_conn_put_for_reload( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 + char_1;
	long_1 = long_1 * long_2;
	long_2 = long_2;
	int_1 = int_2;
}
void v_server_pool_each_client_conn_reset()
{
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	long_1 = v_array_n(short_1);

	char_1 = v_array_get(float_1,double_1);

	int_1 = v_string_compare(double_2,long_1);

}
long v_proxy_each_deinit()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double_3 = double_1 + double_2;
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	return long_1;
}
int v_event_del_conn( float parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	float_3 = float_1 * float_2;
	return int_1;
}
int v_event_add_out( long parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	return int_1;
}
int v_req_done( double parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long_2 = long_1 + long_2;
	double_1 = double_1 + double_1;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	int_1 = int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
		}
	}
	int_2 = int_2;
	int_4 = int_2 + int_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short short_2 = 1;
		int int_5 = 1;
		short_2 = short_1 * short_2;
		int_3 = int_5 * int_3;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		char_1 = char_1 + char_2;
		double_1 = double_1;
	}
	double_3 = double_2 * double_2;
	char_1 = char_2 + char_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	return int_1;
}
unsigned int v_rbtree_right_rotate( int parameter_1,unsigned int parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_1;
	long_1 = long_1 + long_2;
	int_3 = int_1;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1 * long_1;
	}
	int_1 = int_3 + int_4;
	if(1)
	{
		long long_4 = 1;
		long_1 = long_1 + long_4;
	}
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	double_3 = double_2 + double_1;
	int_3 = int_5 + int_4;
	return unsigned_int_1;
}
long v_rbtree_left_rotate( short parameter_1,long parameter_2,long parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	long long_2 = 1;
	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	}
	float_2 = float_1 * float_1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	int_1 = int_3 + int_1;
	return long_2;
}
double v_rbtree_node_min( long parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	double double_4 = 1;
	float_2 = float_1 + float_1;
	double_1 = double_1;
	double_1 = double_1 + double_1;
	char_1 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	float_2 = float_1 + float_3;
	double_2 = double_2;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	char_2 = char_2 + char_1;
	float_3 = float_1 + float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_2 * char_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				int int_1 = 1;
				int int_2 = 1;
				int_2 = int_1 * int_2;
			}
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				unsigned int unsigned_int_4 = 1;
				double_2 = double_2;
				unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
				for(int looper_5=0; looper_5<1;looper_5++)
				{
					char char_3 = 1;
					char_2 = char_3;
				}
				unsigned_int_4 = unsigned_int_2;
			}
		}
	}
	double_3 = double_3 + double_3;
	long_3 = long_1 + long_1;
	return double_4;
}
void v_rbtree_delete( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_6 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 * double_1;
	double_1 = double_2 + double_1;
	double_3 = double_1 + double_3;
	short_1 = short_1;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int_1 = int_1;
		double_3 = double_4 * double_4;
		long_1 = v_rbtree_left_rotate(short_1,long_1,long_1);

		double_1 = double_5 * double_6;
		int_1 = int_2 * int_2;
	}
	if(1)
	{
		long long_2 = 1;
		double_6 = v_rbtree_node_min(long_1,char_1);

		long_1 = long_2 * long_2;
		v_rbtree_node_init(unsigned_int_1);

		unsigned_int_2 = v_rbtree_right_rotate(int_1,unsigned_int_1,char_1);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
}
void v_msg_tmo_delete( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_3 = char_1 * char_2;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	int_1 = int_1;
	int_1 = int_1 * int_1;
	v_rbtree_delete(float_1,unsigned_int_1);

}
void v_server_close_for_replace_server( char parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	v_string_deinit(char_1);

	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_1;
}
void v_array_destroy( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_3 = double_1 * double_2;
	double_2 = double_2 * double_1;
	v_array_deinit(int_1);

}
void v_mbuf_put( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_2 = short_1 + short_1;
	float_2 = float_1 * float_2;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_1;
}
void v_mbuf_remove( int parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1;
}
void v_msg_put( double parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	v_mbuf_remove(int_1,long_1);

	double_1 = double_1 + double_2;
	v_mbuf_put(long_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_server_close_for_replace_server(char_1);

	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	v_array_destroy(int_1);

}
void v_rsp_put( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_2 = int_1 + int_1;
	v_msg_put(double_1);

	short_1 = short_1 + short_2;
	double_3 = double_1 * double_2;
}
long v_msg_type_string( double parameter_1)
{
	long long_1 = 1;
	return long_1;
}
double v_nc_unresolve_addr( int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "`C") > 0)
	{
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	return double_1;
}
int v_nc_unresolve_peer_desc( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_2;
	int_1 = int_1 * int_1;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = v_nc_unresolve_addr(int_2,float_1);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	double_2 = double_3;
	unsigned_int_4 = unsigned_int_3;
	if(1)
	{
	}
	return int_2;
}
int v_log_loggable( int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	return int_1;
}
char v_req_log( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	float float_2 = 1;
	long long_3 = 1;
	int_1 = v_log_loggable(int_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = v_nc_usec_now();

	long_1 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	int_2 = v_nc_unresolve_peer_desc(int_1);

	char_1 = char_2;
	int_3 = int_3 + int_1;
	int_3 = int_3;
	long_1 = long_1 * long_1;
	double_1 = double_1;
	double_2 = double_2 * double_1;
	double_2 = double_1 + double_1;
	long_1 = v_array_n(short_3);

	short_3 = short_2 + short_3;
	long_1 = long_2 * long_1;
	if(1)
	{
		int int_4 = 1;
		char_1 = v_array_get(float_2,double_2);

		long_3 = v_msg_type_string(double_1);

		int_4 = int_2;
		if(1)
		{
		}
		int_1 = int_3;
	}
	return char_2;
}
void v_req_put( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 * int_2;
	v_msg_tmo_delete(float_1);

	v_msg_put(double_1);

	int_5 = int_2 + int_4;
	if(1)
	{
		int int_6 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		double_2 = double_1 * double_2;
		int_1 = int_3 * int_6;
		v_rsp_put(char_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		char_2 = v_req_log(double_2);

		char_2 = char_1 + char_3;
	}
	char_2 = char_4 + char_2;
	long_2 = long_1 * long_2;
}
void v_conn_put( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_1 + double_2;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2;
	int_4 = int_1 + int_4;
	short_1 = short_1 * short_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
}
double v_server_failure( double parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
	unsigned_int_7 = unsigned_int_4 * unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "*") > 0)
	{
	}
	char_3 = char_1 + char_2;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	short_1 = short_1;
	if(1)
	{
	}
	double_2 = double_3 * double_4;
	v_server_pool_run(int_1);

	short_2 = short_1 + short_1;
	int_3 = int_1 * int_2;
	float_1 = float_1 + float_1;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_7;
	float_2 = v_nc_usec_now();

	int_2 = int_2 + int_2;
	short_1 = short_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	return double_3;
}
double v_server_close_stats( long parameter_1,int parameter_2,int parameter_3,short parameter_4,unsigned int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	double_1 = double_1 + double_1;
	double_1 = double_1 * double_2;
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	return double_3;
}
void v_server_close( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	int int_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int_1 = v_event_add_out(long_1,short_1);

	double_2 = double_1 + double_1;
	double_1 = double_2 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		char_3 = char_1 + char_2;
		int_1 = v_req_done(double_1,short_2);

		int_2 = int_3;
		int_1 = int_3 * int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1 + double_1;
		int_2 = int_4 + int_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
			short_4 = short_2 * short_3;
		}
		if(1)
		{
			int int_5 = 1;
			int int_7 = 1;
			short_5 = short_2 * short_2;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_5;
			unsigned_int_6 = unsigned_int_1 + unsigned_int_2;
			v_rsp_put(char_1);

			long_2 = long_1;
			int_7 = int_5 * int_6;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1;
			}
			if(1)
			{
				int_2 = int_2 * int_7;
			}
			double_1 = v_server_failure(double_2,short_4);

			int_1 = int_4 * int_7;
		}
	}
	v_req_put(long_1);

	char_4 = char_3 + char_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_2 = char_4 * char_5;
		unsigned_int_8 = unsigned_int_6 + unsigned_int_7;
		if(1)
		{
			short short_7 = 1;
			short_6 = short_6 + short_7;
			double_1 = v_server_close_stats(long_2,int_6,int_3,short_5,unsigned_int_2);

			double_3 = double_2 + double_3;
		}
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			long_2 = long_1 * long_2;
			short_4 = short_6 * short_3;
			short_1 = short_1 + short_4;
			float_1 = float_2 + float_1;
			unsigned_int_4 = unsigned_int_7 * unsigned_int_1;
			if(1)
			{
				unsigned_int_8 = unsigned_int_6;
			}
			if(1)
			{
				unsigned_int_6 = unsigned_int_7;
			}
			float_4 = float_2 * float_3;
		}
	}
	double_2 = double_2 * double_4;
	long_4 = long_3 + long_4;
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		unsigned int unsigned_int_10 = 1;
		unsigned_int_5 = unsigned_int_7 + unsigned_int_3;
		long_4 = long_3 + long_2;
		char_3 = char_2 + char_5;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_9;
		unsigned_int_1 = unsigned_int_10 + unsigned_int_7;
	}
	v_conn_put(int_4);

	double_4 = double_3 + double_4;
	char_5 = char_5;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_8;
	int_1 = int_2 * int_4;
	if(1)
	{
		short_1 = short_1 * short_3;
	}
	int_3 = int_6 + int_2;
	short_4 = short_6 + short_3;
}
float v_server_pool_each_conn_old_close()
{
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	double double_3 = 1;
	long long_2 = 1;
	float float_4 = 1;
	long_1 = v_array_n(short_1);

	int_1 = int_1 * int_2;
	char_1 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v_server_close(double_1,int_1);

		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			float_1 = float_1 * float_2;
			int_3 = v_event_del_conn(float_1,char_1);

			double_2 = double_2 * double_2;
		}
	}
	char_3 = v_array_get(float_3,double_2);

	int_2 = v_string_compare(double_3,long_2);

	long_1 = v_proxy_each_deinit();

	float_3 = float_2 * float_2;
	return float_4;
}
int v_server_pool_each_proxy_conn_reset()
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	double double_2 = 1;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	int_3 = int_1 + int_2;
	char_1 = v_array_get(float_2,double_1);

	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long_1 = long_2;
		if(1)
		{
			char char_2 = 1;
			short short_3 = 1;
			long long_3 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_4 = 1;
			long_2 = v_array_n(short_1);

			char_2 = char_1 * char_1;
			short_2 = short_1 + short_3;
			long_3 = long_2 + long_1;
			char_1 = char_1 * char_3;
			int_3 = v_string_compare(double_2,long_2);

			char_2 = char_2 * char_1;
			unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
			short_1 = short_4 * short_1;
		}
	}
	return int_2;
}
float v_core_core(float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	short short_3 = 1;
	long long_4 = 1;
	char char_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 * double_2;
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			short short_2 = 1;
			short short_4 = 1;
			double double_5 = 1;
			char char_3 = 1;
			double double_6 = 1;
			long long_5 = 1;
			short_1 = short_1 + short_1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			int_1 = int_1 + int_1;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
			long_2 = long_1 + long_2;
			float_1 = v_server_pool_each_conn_old_close();

			int_3 = int_2 + int_3;
			short_1 = short_1 + short_1;
			double_3 = double_1;
			unsigned_int_1 = unsigned_int_4;
			if(1)
			{
				float_1 = v_core_recv(short_1,unsigned_int_3);

				double_3 = double_3 + double_1;
			}
			long_3 = long_1 * long_3;
			double_1 = double_4 * double_4;
			if(1)
			{
				long_2 = long_3 * long_3;
				v_server_pool_each_client_conn_reset();

				unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
			}
			if(1)
			{
				int_2 = int_1;
				long_2 = long_3 * long_1;
			}
			float_1 = v_array_each(long_3);

			int_2 = v_event_del_conn(float_2,char_1);

			int_4 = int_1 + int_4;
			unsigned_int_5 = v_core_send(unsigned_int_5,float_3);

			short_3 = short_2 + short_3;
			long_1 = long_4 + long_3;
			int_3 = int_4;
			char_1 = v_core_error(short_3,long_4);

			short_4 = short_1;
			int_4 = int_2 + int_1;
			int_2 = int_1 + int_2;
			if(1)
			{
				double_3 = double_5 * double_3;
			}
			char_1 = char_1 * char_1;
			unsigned_int_6 = unsigned_int_3;
			char_3 = char_2 * char_2;
			short_4 = short_1 * short_1;
			v_conn_close_for_replace_server(int_4,int_1);

			double_6 = double_5 + double_6;
			float_3 = float_4 + float_4;
			if(1)
			{
				unsigned_int_7 = unsigned_int_1 + unsigned_int_2;
			}
			unsigned_int_6 = unsigned_int_2 + unsigned_int_5;
			int_1 = v_conn_to_ctx(long_2);

			long_1 = long_5;
			v_conn_put_for_reload(float_4);

			long_2 = long_2;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
			unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
			unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
		}
		unsigned_int_5 = unsigned_int_7 * unsigned_int_6;
	}
	int_3 = v_server_pool_each_proxy_conn_reset();

	float_5 = float_3 * float_5;
	if(1)
	{
		if(1)
		{
			double_2 = double_7;
			if(1)
			{
				short short_5 = 1;
				short short_6 = 1;
				short_6 = short_5 + short_5;
			}
			if(1)
			{
				int_4 = int_3 + int_1;
			}
		}
		unsigned_int_3 = unsigned_int_4;
	}
	if(1)
	{
		float_2 = float_2 * float_3;
	}
	if(1)
	{
		double_7 = double_2 + double_7;
		if(1)
		{
			char_1 = char_1 + char_1;
		}
	}
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		char_5 = char_2 * char_4;
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_8 = unsigned_int_2 * unsigned_int_4;
		}
	}
	return float_3;
	char_1 = v_core_close(double_8,int_4);

}
float v_event_base_create( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_3 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_4 = 1;
		double double_3 = 1;
		short short_1 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		int_2 = int_1 + int_1;
		long_3 = long_1 * long_2;
		int_2 = int_3 + int_1;
		char_1 = char_1 * char_1;
		double_1 = double_1;
		double_2 = double_1 * double_1;
		long_4 = long_3 + long_3;
		float_1 = float_1 * float_1;
		double_3 = double_1 * double_3;
		short_1 = short_1 * short_1;
		int_5 = int_1 * int_4;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		int_5 = int_1;
		double_4 = double_4 + double_1;
		double_3 = double_1 + double_2;
		float_3 = float_2 + float_1;
		double_2 = double_4 * double_2;
		int_2 = int_1;
		float_2 = float_2;
		int_1 = int_1;
		int_3 = int_3 * int_5;
		float_3 = float_3 + float_4;
	}
	return float_1;
}
double v_stats_stop_aggregator( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	return double_1;
}
void v_stats_destroy( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 * double_2;
	float_1 = float_1 * float_1;
	int_1 = int_1 * int_1;
	int_3 = int_2 + int_1;
	v_stats_destroy_buf(double_2);

	short_1 = short_1 * short_1;
	double_1 = v_stats_stop_aggregator(unsigned_int_1);

	long_1 = v_stats_pool_unmap(long_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
void v_stats_send_rsp()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	long_2 = long_1 * long_2;
	int_1 = int_1 * int_1;
	double_2 = double_1 + double_2;
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = v_stats_make_rsp(char_1);

		int_3 = int_2 + int_1;
	}
	unsigned_int_1 = unsigned_int_3;
	char_1 = char_1 + char_2;
	if(1)
	{
		int_1 = int_2 * int_3;
		char_2 = char_1;
	}
	double_1 = double_2;
}
int v_stats_aggregate_metric( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		long long_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_3 = 1;
		char_2 = char_1 + char_1;
		float_1 = float_1;
		char_2 = v_array_get(float_1,double_1);

		long_2 = long_1 + long_1;
		float_2 = float_2 + float_3;
		char_1 = char_2 + char_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_1;
		if(1)
		{
			if(1)
			{
				double_2 = double_1 + double_1;
			}
			double_1 = double_1;
		}
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_1 = v_array_n(short_1);

			long_2 = long_3 * long_4;
		}
		short_3 = short_2 + short_2;
		char_1 = char_2 * char_3;
	}
	return int_1;
}
int v_stats_aggregate()
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	char_1 = char_1 + char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "{Q") > 0)
	{
		int_1 = v_stats_aggregate_metric(long_1,double_1);

		double_2 = double_2;
	}
	char_2 = v_array_get(float_1,double_2);

	double_2 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_1 = long_2 * long_1;
		double_2 = double_1 * double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			float float_2 = 1;
			float float_3 = 1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
			long_2 = v_array_n(short_1);

			short_2 = short_2 + short_3;
			short_1 = short_4;
			float_3 = float_2 + float_3;
		}
	}
	double_3 = double_2 + double_3;
	return int_2;
}
double v_stats_add_footer( float parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_2 + double_1;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	long_1 = long_1 + long_1;
	long_2 = long_2;
	long_4 = long_3 + long_2;
	return double_1;
}
unsigned int v_stats_end_nesting( float parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_3 = 1;
	double_1 = double_1 + double_1;
	int_2 = int_1 + int_1;
	int_1 = int_1 + int_3;
	long_3 = long_1 * long_2;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_1;
	int_4 = int_4 * int_1;
	char_2 = char_1 + char_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	char_2 = char_2 * char_1;
	int_6 = int_5 * int_4;
	int_6 = int_4;
	int_3 = int_1 * int_1;
	short_1 = short_2 * short_3;
	return unsigned_int_4;
}
long v_stats_copy_metric( float parameter_1,float parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	char_1 = v_array_get(float_1,double_1);

	short_2 = short_1 * short_1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		long_1 = v_array_n(short_2);

		short_1 = short_1 * short_2;
		short_1 = v_stats_add_num(int_1,char_2,long_2);

		double_3 = double_2 * double_3;
		if(1)
		{
		}
	}
	return long_2;
}
char v_stats_begin_nesting( long parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_2 = long_1 + long_2;
	int_3 = int_1 * int_2;
	char_2 = char_1 + char_2;
	char_1 = char_3 * char_2;
	float_3 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_4 * char_3;
	int_3 = int_2 * int_1;
	if(1)
	{
	}
	short_1 = short_2;
	return char_2;
}
int v_conn_ncurr_conn_proxy_adm()
{
	int int_1 = 1;
	return int_1;
}
char v_conn_ncurr_conn()
{
	char char_1 = 1;
	return char_1;
}
void v_conn_ntotal_conn()
{
}
short v_stats_add_num( int parameter_1,char parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_2;
	char_2 = char_1 * char_1;
	char_4 = char_3 * char_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	char_4 = char_3 * char_3;
	char_1 = char_5 * char_2;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_4;
	return short_1;
}
void v_stats_add_string( unsigned int parameter_1,int parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	short_2 = short_1 + short_1;
	int_1 = int_1 + int_2;
	double_1 = double_2;
	double_1 = double_3 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_3 * short_2;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_2 = int_2 * int_2;
}
char v_stats_add_header( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_4 = 1;
	long long_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_3 = 1;
	short short_5 = 1;
	short_3 = short_1 + short_2;
	double_1 = double_1 * double_1;
	long_2 = long_1 + long_1;
	v_stats_add_string(unsigned_int_1,int_1,char_1);

	short_1 = v_stats_add_num(int_2,char_2,long_2);

	char_1 = v_conn_ncurr_conn();

	double_2 = double_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	int_3 = int_1;
	float_1 = float_1 + float_1;
	long_1 = long_1 * long_3;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	double_2 = double_3 * double_2;
	if(1)
	{
	}
	long_4 = long_2 * long_1;
	if(1)
	{
	}
	int_2 = int_2 + int_2;
	if(1)
	{
	}
	int_3 = int_4 * int_1;
	if(1)
	{
	}
	float_2 = float_3;
	if(1)
	{
	}
	if(1)
	{
		long long_5 = 1;
		int_4 = v_conn_ncurr_conn_proxy_adm();

		long_5 = long_3 * long_5;
	}
	if(1)
	{
	}
	if(1)
	{
		short_2 = short_4 * short_4;
	}
	if(1)
	{
	}
	long_6 = long_4 + long_4;
	if(1)
	{
	}
	double_2 = double_3 + double_4;
	if(1)
	{
	}
	double_6 = double_5 + double_2;
	if(1)
	{
	}
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		v_conn_ntotal_conn();

		int_5 = int_6;
	}
	if(1)
	{
	}
	double_6 = double_6 * double_7;
	if(1)
	{
	}
	char_3 = char_3 * char_1;
	if(1)
	{
	}
	short_4 = short_5 * short_4;
	if(1)
	{
	}
	return char_2;
}
unsigned int v_stats_make_rsp( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	float float_6 = 1;
	short_1 = short_1 + short_2;
	float_1 = float_2;
	char_1 = v_stats_begin_nesting(long_1,float_1);

	double_2 = double_1 + double_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		unsigned_int_1 = v_stats_end_nesting(float_3);

		int_1 = int_1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		long_1 = v_stats_copy_metric(float_2,float_4);

		float_4 = float_2;
		if(1)
		{
		}
		char_1 = char_2 + char_2;
		if(1)
		{
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_5 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			float_5 = float_2 * float_1;
			char_2 = char_3;
			if(1)
			{
			}
			unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
			if(1)
			{
			}
			double_2 = double_2 * double_3;
			if(1)
			{
			}
		}
		long_2 = long_1;
		if(1)
		{
		}
	}
	long_3 = v_array_n(short_1);

	float_6 = float_4 * float_3;
	if(1)
	{
	}
	return unsigned_int_3;
	char_1 = v_stats_add_header(double_3);

	char_2 = v_array_get(float_1,double_1);

	double_2 = v_stats_add_footer(float_1);

}
void v_stats_destroy_buf( double parameter_1)
{
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char_2 = char_1 * char_1;
		long_3 = long_1 + long_2;
		long_3 = long_3 + long_3;
	}
}
double v_stats_recreate_buf( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	long long_5 = 1;
	char char_6 = 1;
	double double_5 = 1;
	short short_7 = 1;
	long long_7 = 1;
	float float_5 = 1;
	double double_6 = 1;
	float float_6 = 1;
	char_2 = char_1 * char_2;
	int_1 = int_1 + int_1;
	double_3 = double_1 * double_2;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	long_1 = long_1;
	long_1 = long_1 * long_1;
	float_1 = float_1 + float_2;
	long_3 = long_1 * long_2;
	double_1 = double_1 * double_2;
	long_1 = long_3 + long_4;
	char_4 = char_3 * char_2;
	char_4 = char_5 * char_2;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	unsigned_int_3 = unsigned_int_6 * unsigned_int_4;
	int_3 = int_3 * int_4;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_6;
	char_4 = char_1 + char_4;
	double_2 = double_1;
	char_2 = char_3 + char_3;
	char_1 = char_1 * char_2;
	int_2 = int_4 + int_3;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_4;
	short_1 = short_1 + short_1;
	short_3 = short_2 + short_1;
	int_3 = int_3 + int_2;
	if(1)
	{
		int_2 = int_4 + int_3;
	}
	double_3 = double_2 + double_3;
	short_5 = short_4 + short_2;
	if(1)
	{
		float_2 = float_1 + float_2;
	}
	double_2 = double_3 * double_1;
	short_2 = short_4 + short_1;
	char_1 = char_3 + char_1;
	float_3 = float_3 * float_3;
	float_1 = float_4 + float_3;
	int_3 = int_2 * int_1;
	int_2 = int_4 + int_4;
	float_3 = float_4 * float_3;
	double_1 = double_1 + double_3;
	double_2 = double_3 + double_2;
	short_5 = short_3 + short_1;
	if(1)
	{
		int_4 = int_5 + int_2;
	}
	long_1 = long_1;
	double_3 = double_2 * double_3;
	double_3 = double_2 * double_3;
	unsigned_int_5 = unsigned_int_2;
	double_3 = double_2 * double_3;
	v_stats_destroy_buf(double_2);

	double_3 = double_4 + double_2;
	float_1 = float_3 * float_2;
	double_1 = double_4 * double_1;
	long_5 = long_4 + long_4;
	long_4 = v_array_n(short_3);

	double_1 = double_2;
	char_6 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_6 = 1;
		int int_6 = 1;
		short_4 = short_1 + short_4;
		double_1 = double_5;
		short_4 = short_5 + short_6;
		short_2 = short_1 + short_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float_2 = float_2 * float_1;
			int_4 = int_3;
			short_2 = short_4 + short_7;
			int_6 = int_6 + int_1;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double_5 = double_4;
			int_2 = int_5 * int_3;
			float_2 = float_1 * float_3;
			double_3 = double_5 * double_5;
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				long long_6 = 1;
				unsigned_int_3 = v_stats_make_rsp(char_6);

				int_1 = int_4 + int_6;
				long_7 = long_6 + long_7;
				long_4 = long_4 * long_2;
				unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
			}
		}
	}
	int_1 = int_4 + int_1;
	char_3 = v_array_get(float_5,double_2);

	double_3 = double_3 + double_6;
	short_1 = short_7 + short_3;
	if(1)
	{
		int int_7 = 1;
		int_4 = int_7 * int_1;
	}
	long_7 = long_4 * long_3;
	double_3 = double_2 * double_6;
	float_6 = float_2 + float_1;
	return double_5;
}
float v_stats_server_unmap( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	short short_2 = 1;
	long long_3 = 1;
	int_3 = int_1 + int_2;
	float_1 = v_stats_metric_deinit(unsigned_int_1);

	v_array_deinit(int_3);

	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_3 + int_3;
		long_1 = v_array_n(short_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_2 = v_array_pop(long_2);

	short_2 = short_1 + short_1;
	long_3 = long_2 * long_3;
	return float_1;
}
long v_stats_pool_unmap( long parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	v_array_deinit(int_1);

	char_2 = char_1 * char_1;
	long_1 = v_array_n(short_1);

	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		double double_1 = 1;
		float_2 = float_1 + float_2;
		float_3 = v_stats_server_unmap(float_2);

		char_3 = char_1 + char_2;
		unsigned_int_1 = v_array_pop(long_1);

		float_1 = v_stats_metric_deinit(unsigned_int_2);

		double_1 = double_1;
	}
	int_3 = int_2 * int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	return long_2;
}
long v_stats_recreate( char parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	long long_4 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char_2 = char_1 * char_2;
	int_1 = int_1 + int_1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_4 = double_3 + double_1;
	int_2 = int_2 + int_1;
	int_2 = int_2 + int_2;
	int_3 = int_1;
	short_1 = v_stats_pool_map(double_2,unsigned_int_2);

	long_1 = v_array_n(short_1);

	double_2 = double_5 * double_4;
	float_3 = float_1 * float_2;
	double_5 = double_2;
	char_1 = char_2;
	double_7 = double_3 * double_6;
	long_3 = long_1 * long_2;
	long_2 = v_stats_pool_unmap(long_3);

	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	int_4 = int_1 * int_3;
	if(1)
	{
		long_3 = long_4 * long_3;
	}
	short_1 = short_2 + short_2;
	if(1)
	{
		char_3 = v_array_get(float_2,double_5);

		int_3 = int_3;
	}
	long_3 = long_1 * long_4;
	if(1)
	{
		int_2 = int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
		char_3 = char_1 + char_1;
		double_7 = double_3 + double_1;
		int_3 = int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_4 = 1;
			char char_5 = 1;
			short short_3 = 1;
			char_4 = char_1 * char_4;
			char_4 = char_5 * char_5;
			double_5 = double_3 * double_5;
			short_3 = short_3 * short_2;
			if(1)
			{
				short_2 = short_2 * short_1;
			}
			int_3 = int_3 + int_4;
		}
	}
	return long_1;
}
float v_stats_loop_callback()
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	float float_6 = 1;
	int int_6 = 1;
	int_2 = int_1 + int_1;
	short_2 = short_1 + short_1;
	float_3 = float_1 + float_2;
	long_1 = long_1 + long_2;
	double_3 = double_1 + double_2;
	if(1)
	{
		long_3 = long_2 * long_1;
	}
	v_stats_send_rsp();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		long long_4 = 1;
		long_4 = long_3;
	}
	long_1 = v_stats_recreate(char_1,unsigned_int_1);

	char_1 = char_2 * char_3;
	float_3 = float_4;
	if(1)
	{
		float_5 = float_1;
	}
	short_3 = short_1 + short_2;
	double_4 = v_stats_recreate_buf(float_5);

	int_1 = int_1 + int_2;
	int_2 = int_3;
	int_3 = int_4 + int_5;
	double_3 = double_5 + double_1;
	return float_6;
	int_6 = v_stats_aggregate();

}
void v_event_loop_stats( int parameter_1)
{
}
float v_stats_loop()
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float_1 = v_stats_loop_callback();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return float_1;
	v_event_loop_stats(int_1);

}
int v_nc_set_reuseaddr( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short_2 = short_1 * short_2;
	int_2 = int_1 * int_2;
	char_2 = char_1 * char_1;
	float_1 = float_1;
	return int_2;
}
int v_nc_resolve_inet( short parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_1 = double_1 * double_1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	float_2 = float_1 * float_1;
	double_3 = double_2 * double_1;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2;
	double_1 = double_1;
	char_1 = char_1;
	double_2 = double_3;
	double_1 = double_4 * double_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "|J") < 0)
	{
		char_1 = v_nc_valid_port(int_3);

		long_2 = long_1 * long_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	long_2 = long_2 + long_2;
	long_1 = long_2 + long_2;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_5 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
		double_5 = double_5;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
		float_2 = float_1 * float_2;
		unsigned_int_3 = unsigned_int_6 * unsigned_int_2;
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	int_4 = int_5;
	return int_5;
}
char v_nc_resolve_unix( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_1;
	float_1 = float_1 * float_1;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1;
	int_1 = int_1 * int_1;
	return char_1;
}
int v_nc_resolve( long parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "z") > 0)
	{
	}
	return int_1;
	char_1 = v_nc_resolve_unix(long_1,long_1);

	int_2 = v_nc_resolve_inet(short_1,int_3,unsigned_int_1);

}
float v_stats_listen( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	double_4 = double_1 + double_1;
	if(1)
	{
		double double_5 = 1;
		int_1 = v_nc_set_reuseaddr(int_2);

		double_2 = double_5 + double_2;
	}
	double_3 = double_6;
	if(1)
	{
		int_1 = int_2;
	}
	float_2 = float_1 * float_2;
	if(1)
	{
		double double_7 = 1;
		double double_8 = 1;
		double_4 = double_7 + double_8;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	return float_1;
	int_3 = v_nc_resolve(long_1,int_3,unsigned_int_3);

}
long v_stats_start_aggregator( double parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_1 = v_stats_loop();

	short_1 = short_1 + short_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	double_1 = double_2;
	if(1)
	{
		double double_3 = 1;
		double_1 = double_1 * double_3;
	}
	return long_1;
	float_2 = v_stats_listen(int_1);

}
float v_stats_create_buf( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	short short_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_2 = 1;
	short short_5 = 1;
	short short_6 = 1;
	char char_6 = 1;
	int int_5 = 1;
	short short_7 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	float float_8 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_6 = 1;
	short_3 = short_1 + short_2;
	int_1 = int_1;
	float_3 = float_1 * float_2;
	double_2 = double_1 * double_1;
	int_2 = int_1 + int_2;
	double_2 = double_1 + double_2;
	char_2 = char_1 + char_1;
	char_1 = char_2 + char_3;
	double_5 = double_3 + double_4;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_2 * char_2;
	int_4 = int_2 + int_3;
	long_1 = long_1 + long_1;
	short_2 = short_3 + short_4;
	char_4 = char_1 * char_2;
	float_1 = float_1;
	int_1 = int_2 * int_3;
	char_1 = char_2 * char_5;
	unsigned_int_1 = unsigned_int_1;
	double_5 = double_4 + double_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	float_2 = float_4 * float_5;
	long_2 = long_2 + long_2;
	unsigned_int_1 = unsigned_int_2;
	float_2 = float_4 + float_1;
	short_5 = short_3 + short_1;
	short_3 = short_6;
	double_2 = double_5;
	char_3 = char_6 * char_1;
	if(1)
	{
		float_2 = float_3 + float_1;
	}
	double_4 = double_2;
	int_1 = int_4 + int_5;
	if(1)
	{
		long_1 = v_array_n(short_7);

		char_5 = char_5;
	}
	double_5 = double_3 + double_4;
	long_3 = long_1 * long_3;
	long_3 = long_3 * long_1;
	float_4 = float_4 * float_5;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	double_3 = double_3 + double_2;
	short_1 = short_3 * short_7;
	double_2 = double_1 + double_4;
	long_2 = long_4 * long_2;
	long_3 = long_5 * long_4;
	if(1)
	{
		int_5 = int_2;
	}
	short_4 = short_1 * short_2;
	long_5 = long_3 * long_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	float_2 = float_6 * float_6;
	float_3 = float_2 + float_7;
	unsigned_int_3 = unsigned_int_2;
	double_3 = double_2 + double_1;
	float_8 = float_5 + float_5;
	double_3 = double_1 * double_4;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	short_4 = short_5 + short_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		int_4 = int_2 + int_2;
		float_6 = float_8 + float_1;
		int_2 = int_3 * int_1;
		int_5 = int_5 + int_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_3 = double_2 * double_5;
			double_6 = double_5 * double_2;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
			short_2 = short_4 * short_5;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned int unsigned_int_5 = 1;
			double_7 = double_3 + double_3;
			double_8 = double_2 * double_1;
			double_7 = double_4;
			unsigned_int_4 = unsigned_int_5 + unsigned_int_3;
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				short short_8 = 1;
				char_3 = char_6 + char_2;
				int_4 = int_4 + int_1;
				double_7 = double_2 + double_1;
				short_1 = short_6 + short_8;
			}
		}
	}
	double_8 = double_4;
	long_5 = long_6 + long_1;
	short_2 = short_7;
	if(1)
	{
		char_5 = v_array_get(float_2,double_8);

		double_8 = double_6 * double_1;
	}
	double_4 = double_7;
	double_3 = double_3 * double_6;
	return float_2;
}
float v_stats_metric_deinit( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double_1 = double_2;
	unsigned_int_1 = v_array_pop(long_1);

	short_1 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	long_2 = v_array_n(short_2);

	double_1 = double_3 * double_2;
	return float_1;
	v_array_deinit(int_1);

}
double v_stats_server_metric_init( double parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	double_1 = double_1 * double_1;
	float_1 = float_1;
	double_2 = double_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		short short_4 = 1;
		int int_1 = 1;
		short_1 = v_array_init(short_2,float_1,char_1);

		char_2 = v_array_push(float_1);

		short_4 = short_3 + short_2;
		float_2 = v_stats_metric_init(char_3);

		int_1 = int_1 + int_1;
		char_3 = char_1 + char_2;
	}
	return double_1;
}
float v_stats_server_init( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = v_array_null(float_1);

	long_1 = v_array_n(short_2);

	char_1 = char_1 + char_1;
	int_3 = int_1 * int_2;
	float_2 = float_2 + float_1;
	int_5 = int_4 + int_4;
	if(1)
	{
	}
	double_1 = v_stats_server_metric_init(double_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return float_1;
}
long v_stats_server_map( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	float_1 = float_1 * float_2;
	int_2 = int_1 * int_2;
	double_1 = double_1 * double_1;
	short_1 = v_array_init(short_1,float_2,char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = v_stats_server_init(double_1,double_2);

	double_2 = double_3 * double_3;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_2 = long_1 * long_1;
		long_3 = v_array_n(short_2);

		double_2 = double_1 + double_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		if(1)
		{
		}
	}
	char_1 = v_array_get(float_3,double_3);

	char_2 = v_array_push(float_2);

	int_1 = int_2 * int_1;
	return long_2;
}
float v_stats_metric_init( char parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char_1 = char_1;
	double_1 = double_1;
	short_1 = short_1 + short_1;
	int_2 = int_1 * int_2;
	int_3 = int_1 + int_1;
	int_5 = int_4 * int_5;
	double_2 = double_1 * double_1;
	return float_1;
}
long v_stats_pool_metric_init( long parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	float_1 = v_stats_metric_init(char_1);

	char_2 = char_2 + char_2;
	short_1 = v_array_init(short_2,float_2,char_3);

	int_3 = int_1 + int_2;
	short_1 = short_3 * short_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char_3 = char_4 + char_4;
		char_4 = v_array_push(float_2);

		double_1 = double_1 * double_1;
		double_1 = double_2 * double_3;
	}
	return long_1;
}
void v_stats_pool_init( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 * long_2;
	long_3 = v_stats_pool_metric_init(long_1);

	long_2 = v_stats_server_map(int_1,double_1);

	long_3 = v_array_n(short_1);

	unsigned_int_3 = unsigned_int_2;
	short_1 = v_array_null(float_1);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_2 * short_1;
	if(1)
	{
	}
	long_2 = long_3;
	if(1)
	{
		long long_4 = 1;
		long_2 = long_4 + long_2;
	}
	float_1 = v_stats_metric_deinit(unsigned_int_3);

	char_2 = char_1 + char_1;
}
short v_stats_pool_map( double parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_4 = 1;
	char char_4 = 1;
	double double_4 = 1;
	short_1 = v_array_init(short_2,float_1,char_1);

	char_3 = char_1 * char_2;
	short_1 = short_2 * short_2;
	v_stats_pool_init(short_2,char_3);

	long_1 = long_1;
	int_1 = int_1 * int_2;
	short_2 = short_2 * short_3;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_1 = 1;
		float_4 = float_2 * float_3;
		double_1 = double_1 * double_1;
		long_2 = v_array_n(short_1);

		char_3 = v_array_push(float_1);

		short_1 = short_1;
		if(1)
		{
		}
	}
	double_2 = double_3;
	return short_4;
	char_4 = v_array_get(float_1,double_4);

}
short v_stats_create( char parameter_1,char parameter_2,int parameter_3,char parameter_4,short parameter_5)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_3 = 1;
	double double_5 = 1;
	short short_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_5 = 1;
	float float_4 = 1;
	double double_6 = 1;
	short short_6 = 1;
	short short_7 = 1;
	int_1 = int_1 * int_1;
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2 + int_2;
	short_1 = v_stats_pool_map(double_1,unsigned_int_3);

	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	double_2 = double_1 + double_1;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_5;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
	int_1 = int_1 * int_1;
	short_3 = short_2 + short_3;
	int_1 = int_2 + int_3;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_6;
	long_2 = long_1 + long_1;
	double_2 = double_3 + double_4;
	float_2 = v_stats_create_buf(short_2);

	long_3 = long_1 * long_2;
	double_1 = double_1 + double_3;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
	int_3 = int_3 * int_1;
	long_2 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_6;
	char_2 = char_1 * char_2;
	char_3 = char_1 + char_2;
	if(1)
	{
		short_2 = short_1;
	}
	if(1)
	{
		char_5 = char_3 + char_4;
	}
	float_1 = float_2 * float_3;
	double_3 = double_3 + double_5;
	double_3 = double_5 + double_3;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	short_1 = short_1 * short_4;
	v_stats_destroy(int_4);

	long_1 = long_2 + long_2;
	unsigned_int_1 = unsigned_int_7;
	long_4 = long_4 * long_4;
	unsigned_int_5 = unsigned_int_8 * unsigned_int_3;
	short_2 = short_5 + short_3;
	if(1)
	{
		double double_7 = 1;
		short_3 = v_array_null(float_4);

		double_5 = double_6 * double_7;
	}
	short_5 = short_3 + short_6;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3;
	}
	short_3 = short_5 * short_4;
	if(1)
	{
		double_6 = double_4 + double_4;
	}
	unsigned_int_1 = unsigned_int_5 * unsigned_int_8;
	if(1)
	{
		float float_5 = 1;
		float_5 = float_3 + float_5;
	}
	long_2 = v_stats_start_aggregator(double_6);

	long_2 = long_2 + long_3;
	if(1)
	{
		int_3 = int_4;
	}
	if(1)
	{
		double double_8 = 1;
		double_6 = double_8 + double_1;
	}
	unsigned_int_2 = unsigned_int_6 * unsigned_int_6;
	short_2 = short_7 + short_1;
	char_4 = char_5 * char_3;
	return short_7;
}
void v_core_calc_connections( char parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_1;
	short_2 = short_1 * short_2;
	int_1 = int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	char_1 = char_1;
	int_3 = int_2 * int_1;
	float_1 = float_1;
}
float v_random_update( long parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	long long_6 = 1;
	short short_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_5 = 1;
	long_1 = v_array_n(short_1);

	double_1 = double_1;
	int_1 = int_1 + int_1;
	long_3 = long_2 + long_3;
	double_1 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_2 * int_3;
	float_1 = v_nc_usec_now();

	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	long_5 = long_4 * long_3;
	int_1 = int_1 * int_1;
	double_1 = double_2 * double_2;
	if(1)
	{
	}
	short_2 = short_2 * short_3;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	double_3 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = char_1 + char_2;
		if(1)
		{
			if(1)
			{
				char char_4 = 1;
				float_2 = float_2;
				char_4 = char_2 + char_3;
			}
			if(1)
			{
				long_3 = long_6 + long_6;
			}
		}
		if(1)
		{
			short_1 = short_4;
		}
	}
	float_2 = float_3 + float_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
		float_5 = float_4 * float_4;
	}
	long_2 = long_5 * long_6;
	unsigned_int_3 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		char_2 = char_1 * char_1;
		unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
		long_5 = long_1 * long_6;
		char_2 = char_1 + char_3;
		if(1)
		{
		}
		short_3 = short_3 + short_4;
		char_1 = v_array_get(float_4,double_2);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		float_1 = float_3 + float_3;
	}
	double_3 = double_3 + double_3;
	float_4 = float_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_6 = 1;
		float float_6 = 1;
		int_1 = int_1;
		if(1)
		{
			short_1 = short_3 * short_1;
		}
		unsigned_int_6 = unsigned_int_1;
		float_2 = float_3 * float_5;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		float_6 = float_5 * float_3;
	}
	int_6 = int_4 + int_5;
	char_5 = char_2 * char_5;
	return float_2;
}
void v_modula_update( unsigned int parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	float float_2 = 1;
	long long_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_2 = 1;
	float float_3 = 1;
	double double_7 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_2;
	float_1 = v_nc_usec_now();

	long_1 = long_2;
	double_3 = double_1 + double_2;
	double_3 = double_3;
	int_1 = int_1 + int_1;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1;
	long_1 = long_2;
	long_1 = long_1 + long_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	long_3 = long_2 + long_1;
	double_3 = double_3 * double_1;
	long_4 = long_1 + long_1;
	long_3 = long_4 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		double_2 = double_3 * double_1;
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				float_2 = float_1;
				unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
			}
			if(1)
			{
				int int_2 = 1;
				int int_3 = 1;
				int_3 = int_1 + int_2;
			}
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
		}
		long_1 = long_4 + long_5;
		if(1)
		{
			long_1 = long_3 * long_5;
		}
	}
	double_4 = double_3 + double_2;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_2;
		unsigned_int_7 = unsigned_int_3 * unsigned_int_1;
		double_5 = double_6;
	}
	double_4 = double_2 + double_5;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_7;
	char_2 = char_1 * char_2;
	if(1)
	{
		int int_4 = 1;
		short short_3 = 1;
		char_2 = v_array_get(float_2,double_2);

		int_4 = int_4 * int_1;
		long_5 = v_array_n(short_1);

		double_3 = double_4 * double_3;
		short_2 = short_3;
		long_2 = long_3 + long_1;
		if(1)
		{
		}
		float_3 = float_1 + float_2;
		double_7 = double_4 + double_4;
	}
	char_4 = char_1 + char_3;
	int_1 = int_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_7 = double_5;
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_8 = unsigned_int_3 * unsigned_int_2;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			short short_4 = 1;
			short short_5 = 1;
			short short_6 = 1;
			unsigned int unsigned_int_9 = 1;
			double double_8 = 1;
			short_6 = short_4 * short_5;
			unsigned_int_1 = unsigned_int_9;
			double_3 = double_8 + double_6;
			short_6 = short_5 + short_2;
		}
	}
	char_4 = char_4 + char_4;
	float_3 = float_1 + float_3;
}
float v_ketama_item_cmp( short parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return float_2;
}
void v_md5_signature( long parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		long long_3 = 1;
		long long_4 = 1;
		if(1)
		{
			long long_1 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			long_1 = long_1 * long_2;
		}
		float_1 = float_1 * float_1;
		long_2 = long_3 + long_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_1 = int_1 + int_1;
		}
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_5 = 1;
		long long_6 = 1;
		double_1 = double_2;
		double_2 = double_2 + double_3;
		long_2 = long_5 + long_6;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	float_4 = float_2 * float_3;
}
float v_ketama_hash( int parameter_1,double parameter_2,float parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	v_md5_signature(long_1,long_2,int_1);

	int_1 = int_2;
	short_1 = short_2;
	return float_1;
}
float v_nc_usec_now()
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char_2 = char_1 * char_1;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if(remainder_check(controller_1,100,2))
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	double_2 = double_1 * double_2;
	return float_1;
}
void v_ketama_update( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	char char_3 = 1;
	double double_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_6 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	double_2 = double_1 * double_1;
	double_3 = double_2 * double_1;
	double_3 = double_1 + double_2;
	char_1 = char_1 * char_1;
	float_1 = v_ketama_hash(int_1,double_2,float_1);

	int_2 = int_2 * int_1;
	long_2 = long_1 + long_1;
	double_4 = double_4 * double_3;
	int_2 = int_3 + int_1;
	float_3 = float_2 * float_1;
	long_3 = long_2;
	char_2 = char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_3 + int_1;
	int_3 = int_2 + int_4;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	char_1 = char_2 + char_2;
	short_2 = short_1;
	int_4 = int_4 + int_1;
	long_4 = long_2 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_3 = v_nc_usec_now();

		int_4 = int_4;
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_2;
				unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
			}
		}
		if(1)
		{
			char_2 = char_2;
		}
		long_4 = v_array_n(short_1);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
		if(1)
		{
			short_1 = short_2 * short_3;
		}
	}
	int_4 = int_1 * int_4;
	if(1)
	{
		char_3 = char_3;
	}
	char_1 = v_array_get(float_3,double_5);

	double_3 = double_3 + double_1;
	int_6 = int_5 * int_1;
	int_1 = int_6;
	if(1)
	{
		long long_5 = 1;
		short short_4 = 1;
		short short_5 = 1;
		double_3 = double_1;
		long_1 = long_5 * long_5;
		int_5 = int_1;
		short_3 = short_1;
		if(1)
		{
		}
		char_4 = char_5;
		short_5 = short_2 + short_4;
	}
	long_1 = long_6;
	double_5 = double_6 + double_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		long_2 = long_6 * long_4;
		int_1 = int_4 * int_2;
		if(1)
		{
			char_3 = char_2 * char_5;
		}
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
		double_5 = double_2;
		float_2 = float_1;
		double_6 = double_4 * double_2;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned int unsigned_int_5 = 1;
			char char_6 = 1;
			long long_7 = 1;
			unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
			double_2 = double_2 + double_4;
			char_6 = char_2 * char_3;
			long_6 = long_7 + long_3;
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				int int_7 = 1;
				int_6 = int_7;
				unsigned_int_2 = unsigned_int_6;
				char_3 = char_4;
			}
		}
		char_2 = char_3 * char_5;
	}
	float_4 = v_ketama_item_cmp(short_1,double_6);

	double_6 = double_6 + double_6;
	double_2 = double_4 + double_6;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		if(1)
		{
			char_4 = char_3 + char_2;
		}
		unsigned_int_6 = unsigned_int_2 * unsigned_int_1;
	}
	double_3 = double_4 + double_2;
}
void v_server_pool_run( int parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = v_array_n(short_1);

	v_modula_update(unsigned_int_1);

	float_1 = v_random_update(long_2);

	short_3 = short_1 + short_2;
	double_2 = double_1 + double_2;
	v_ketama_update(float_1);

}
void v_server_pool_each_run()
{
	int int_1 = 1;
	v_server_pool_run(int_1);

}
unsigned int v_server_pool_each_calc_connections()
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_2;
	short_2 = short_1 + short_2;
	char_2 = char_1 + char_1;
	long_1 = v_array_n(short_2);

	long_1 = long_1;
	return unsigned_int_1;
}
double v_server_pool_each_set_owner()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int_2 = int_1 * int_1;
	float_3 = float_1 + float_2;
	short_1 = short_1;
	return double_1;
}
void v_server_pool_deinit( float parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		int_2 = int_1 + int_2;
		v_server_deinit(char_1);

		double_3 = double_1 * double_2;
		unsigned_int_1 = v_array_pop(long_1);

		double_3 = double_2 + double_2;
		if(1)
		{
			double double_4 = 1;
			double_3 = double_2 + double_2;
			unsigned_int_3 = unsigned_int_2;
			double_4 = double_4 * double_5;
			int_2 = int_1;
		}
		long_1 = long_2;
		long_3 = v_array_n(short_1);

		double_3 = double_5 * double_5;
	}
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	v_array_deinit(int_3);

	unsigned_int_6 = unsigned_int_3 + unsigned_int_3;
}
void v_server_each_set_owner()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
}
void v_server_deinit( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	v_array_deinit(int_1);

	int_1 = int_2 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		int int_4 = 1;
		double_1 = double_1 + double_1;
		int_1 = int_2 + int_4;
		unsigned_int_1 = v_array_pop(long_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	long_2 = v_array_n(short_1);

	float_2 = float_1 * float_1;
}
void v_conf_server_each_transform()
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	short short_5 = 1;
	long long_5 = 1;
	double double_5 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_2;
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_array_idx(long_1);

	long_2 = long_2 * long_3;
	char_3 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_2;
	short_2 = short_1 + short_2;
	long_1 = long_3 * long_4;
	double_3 = double_2 * double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2 * short_1;
	double_4 = double_1 * double_3;
	double_1 = double_1 * double_4;
	short_4 = short_1 * short_3;
	int_3 = int_1 * int_2;
	double_3 = double_4;
	short_5 = short_4 + short_3;
	long_5 = long_3 * long_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	double_5 = double_4;
	char_1 = v_array_push(float_1);

}
char v_server_init( short parameter_1,double parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_server_deinit(char_1);

	double_2 = double_1 * double_2;
	v_server_each_set_owner();

	double_3 = double_3 + double_3;
	double_3 = double_3 * double_3;
	char_2 = char_2 + char_2;
	char_3 = char_3 + char_4;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long_1 = v_array_n(short_1);

		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = v_array_init(short_2,float_1,char_4);

	float_1 = v_array_each(long_1);

	unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2;
	}
	int_2 = int_1 + int_2;
	return char_5;
	v_conf_server_each_transform();

}
void v_array_idx( long parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_1 = long_1;
	int_1 = int_1 + int_1;
	float_1 = float_1 + float_1;
	int_1 = int_1 + int_1;
	double_2 = double_1 * double_1;
	double_2 = double_3;
	double_5 = double_2 * double_4;
	short_2 = short_1 * short_1;
}
float v_conf_pool_each_transform()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int int_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	char char_5 = 1;
	float float_2 = 1;
	char char_6 = 1;
	long long_5 = 1;
	double double_4 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_1;
	char_2 = char_1 * char_2;
	int_2 = int_2 + int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	short_2 = short_1 * short_1;
	int_3 = int_2 + int_2;
	short_1 = short_3 + short_1;
	char_2 = char_1;
	double_2 = double_2 + double_2;
	int_3 = int_4 + int_5;
	unsigned_int_4 = unsigned_int_4;
	short_4 = short_3 * short_3;
	double_2 = double_2 + double_1;
	long_3 = long_1 * long_2;
	double_2 = double_2;
	double_1 = double_2 + double_3;
	int_4 = int_6 + int_6;
	char_1 = char_3 * char_4;
	long_3 = long_4 * long_2;
	char_4 = v_array_push(float_1);

	long_3 = long_4 + long_3;
	long_1 = long_3 + long_1;
	short_3 = short_2 + short_3;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_2;
	short_3 = short_5;
	int_3 = int_2;
	long_1 = long_4 + long_2;
	short_3 = v_array_null(float_1);

	char_4 = char_5 + char_3;
	unsigned_int_2 = unsigned_int_6 + unsigned_int_2;
	float_2 = float_2;
	int_4 = int_4 * int_3;
	char_6 = v_server_init(short_4,double_1,char_1);

	long_3 = long_5 + long_2;
	double_4 = double_4 + double_1;
	int_5 = int_6 + int_3;
	int_3 = int_5 + int_5;
	if(1)
	{
		v_array_idx(long_1);

		unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	}
	float_1 = float_1 * float_2;
	float_2 = float_1 * float_2;
	float_1 = float_1 * float_1;
	int_1 = int_5 + int_1;
	if(1)
	{
	}
	int_2 = int_3 + int_4;
	return float_2;
}
float v_array_each( long parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		int int_2 = 1;
		float float_2 = 1;
		char_1 = v_array_get(float_1,double_1);

		short_2 = short_2 + short_2;
		int_1 = int_2 * int_2;
		float_1 = float_2 + float_2;
		if(1)
		{
		}
	}
	return float_3;
	long_1 = v_array_n(short_3);

}
long v_server_pool_init( char parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_6 = 1;
	float float_3 = 1;
	long long_4 = 1;
	char char_2 = 1;
	long_2 = long_1 + long_2;
	short_1 = short_2;
	float_1 = v_conf_pool_each_transform();

	short_2 = short_3 + short_1;
	double_1 = double_1;
	int_1 = int_2;
	int_1 = int_1 * int_3;
	if(1)
	{
	}
	long_3 = v_array_n(short_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_3 = v_server_pool_each_calc_connections();

		int_2 = int_1 * int_2;
	}
	v_server_pool_each_run();

	int_4 = int_1 + int_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		int int_5 = 1;
		short_2 = v_array_init(short_2,float_2,char_1);

		double_1 = v_server_pool_each_set_owner();

		int_4 = int_5 + int_1;
	}
	double_3 = double_2 * double_3;
	float_1 = v_array_each(long_1);

	int_3 = int_3 * int_6;
	if(1)
	{
		double double_4 = 1;
		double_4 = double_1 + double_3;
	}
	v_server_pool_deinit(float_3);

	long_4 = long_1 + long_3;
	if(1)
	{
		int int_7 = 1;
		int_7 = int_3;
	}
	char_2 = char_1;
	return long_3;
}
double v_core_ctx_create( long parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_2 = 1;
	double double_5 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	float float_4 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_8 = 1;
	long long_5 = 1;
	int int_9 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_10 = 1;
	float float_6 = 1;
	char char_6 = 1;
	int int_12 = 1;
	float float_7 = 1;
	double double_10 = 1;
	double_1 = double_1 * double_1;
	double_1 = double_2 * double_1;
	double_1 = double_2 + double_2;
	if(1)
	{
	}
	int_1 = int_1;
	float_2 = float_1 + float_1;
	long_1 = long_1 * long_1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_2 + int_1;
	int_3 = int_3 + int_1;
	int_3 = int_4 * int_1;
	float_1 = float_2 + float_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		int_1 = int_1 + int_3;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3;
	char_2 = char_1 + char_2;
	char_1 = char_3 * char_3;
	short_2 = short_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	short_3 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_4;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	char_1 = char_3 + char_3;
	char_4 = char_4 * char_1;
	char controller4vul_2599[3];
	fgets(controller4vul_2599 ,3 ,stdin);
	if( strcmp( controller4vul_2599, "0w") < 0)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
		if(1)
		{
			double_1 = double_2 + double_1;
		}
		int_4 = int_1 * int_5;
		char controller4vul_2600[2];
		fgets(controller4vul_2600 ,2 ,stdin);
		if( strcmp( controller4vul_2600, "(") < 0)
		{
			int_3 = int_2 * int_6;
			char controller4vul_2601[2];
			fgets(controller4vul_2601 ,2 ,stdin);
			if( strcmp( controller4vul_2601, "z") < 0)
			{
				unsigned_int_4 = v_proxy_adm_create(char_2,char_4,short_2,uni_para);

				if(1)
				{
					double_4 = double_3 + double_4;
					float_2 = float_2 * float_1;
				}
				short_5 = short_4 + short_2;
				int_1 = int_4 + int_1;
			}
		}
		if(1)
		{
			if(1)
			{
				short_4 = short_5;
				int_2 = int_5 + int_2;
			}
		}
	}
	if(1)
	{
		long_2 = long_1 * long_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		}
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				double_2 = double_3 * double_5;
				if(1)
				{
					float_3 = float_2 * float_3;
					double_2 = double_2 * double_1;
				}
				double_1 = double_3 + double_2;
				char_3 = char_3 * char_3;
				if(1)
				{
					if(1)
					{
						short_3 = short_4 + short_3;
						long_3 = long_3 + long_1;
					}
					long_2 = long_1 + long_4;
					double_1 = double_6 + double_4;
				}
				if(1)
				{
					short short_6 = 1;
					short_6 = short_2 * short_1;
				}
				unsigned_int_3 = unsigned_int_5;
			}
		}
		double_8 = double_7 * double_3;
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				double_8 = double_9 + double_6;
				float_4 = float_4 * float_4;
			}
			if(1)
			{
				int_5 = int_5 * int_2;
			}
			if(1)
			{
				int_6 = int_7 + int_5;
			}
			short_3 = short_3 + short_3;
		}
		float_2 = float_4 + float_1;
	}
	unsigned_int_4 = unsigned_int_6 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				int_2 = int_6 + int_8;
				long_2 = long_3 + long_1;
			}
			if(1)
			{
				long_4 = long_2 + long_5;
			}
			if(1)
			{
				int_4 = int_3 * int_4;
			}
			double_3 = double_9 + double_4;
		}
		int_4 = int_9 * int_6;
		float_5 = float_2 + float_2;
	}
	unsigned_int_3 = unsigned_int_7 * unsigned_int_3;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				int_10 = int_8 * int_4;
				unsigned_int_8 = unsigned_int_9;
			}
			if(1)
			{
				char_2 = char_3 * char_3;
			}
			if(1)
			{
				short_5 = short_7 * short_4;
			}
			unsigned_int_8 = unsigned_int_8 + unsigned_int_6;
		}
		short_5 = short_1 + short_1;
		double_3 = double_5 + double_7;
	}
	if(1)
	{
		unsigned_int_8 = unsigned_int_10 * unsigned_int_10;
	}
	int_8 = int_4;
	if(1)
	{
		if(1)
		{
			char char_5 = 1;
			if(1)
			{
				float_1 = float_3 * float_6;
				char_2 = char_5 * char_3;
			}
			if(1)
			{
				char_5 = char_2 * char_1;
			}
			if(1)
			{
				char_6 = char_5 * char_2;
			}
			unsigned_int_10 = unsigned_int_7 + unsigned_int_10;
		}
		float_5 = float_5 * float_5;
		short_2 = short_5 * short_7;
		double_5 = double_1 + double_5;
	}
	double_6 = double_8 * double_8;
	if(1)
	{
		long long_7 = 1;
		if(1)
		{
			if(1)
			{
				long long_6 = 1;
				double_4 = double_6 * double_7;
				long_5 = long_6 * long_2;
			}
			if(1)
			{
				double_6 = double_7;
			}
			if(1)
			{
				int int_11 = 1;
				int_12 = int_2 + int_11;
			}
			double_3 = double_6;
		}
		long_4 = long_7;
		float_7 = float_7 + float_4;
		float_6 = float_1 + float_7;
		unsigned_int_3 = unsigned_int_7;
		double_5 = double_1 * double_2;
	}
	double_9 = double_3 + double_5;
	if(1)
	{
		char char_7 = 1;
		char char_8 = 1;
		if(1)
		{
			if(1)
			{
				char_1 = char_4 + char_4;
				long_1 = long_3 * long_3;
			}
			if(1)
			{
				double_10 = double_10;
			}
			if(1)
			{
				unsigned_int_6 = unsigned_int_9 * unsigned_int_10;
			}
			int_3 = int_3 + int_8;
		}
		double_5 = double_4 + double_4;
		double_3 = double_6 + double_10;
		char_7 = char_6 + char_7;
		char_1 = char_7 * char_8;
		int_12 = int_4 + int_6;
	}
	if(1)
	{
		if(1)
		{
			double double_11 = 1;
			double_11 = double_4 + double_3;
			if(1)
			{
				if(1)
				{
					float float_8 = 1;
					if(1)
					{
						long_2 = long_4;
						long_5 = long_1 * long_5;
					}
					if(1)
					{
						int_3 = int_9 * int_3;
					}
					if(1)
					{
						double_9 = double_4;
					}
					float_1 = float_8 + float_6;
				}
				int_10 = int_10 + int_10;
				int_1 = int_2;
				float_4 = float_2 * float_3;
				double_6 = double_6 + double_11;
				double_1 = double_10 + double_5;
				int_6 = int_7 * int_5;
			}
		}
		float_1 = float_7 + float_3;
	}
	return double_4;
}
void v_conn_init()
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_1 = short_1 + short_1;
	int_2 = int_1 + int_2;
	long_1 = long_2;
}
void v_rbtree_node_init( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 * double_1;
	double_2 = double_1 + double_1;
}
void v_rbtree_init( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_1;
	char_2 = char_1 * char_1;
	v_rbtree_node_init(unsigned_int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
void v_msg_init()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double_2 = double_1 * double_2;
	double_3 = double_2;
	v_rbtree_init(short_1,char_1);

	int_1 = int_1 + int_1;
	short_2 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_2;
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "X") > 0)
	{
		char char_2 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	double_2 = double_4 + double_1;
}
void v_mbuf_init( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float_2 = float_1 + float_1;
	long_1 = long_1;
	if(1)
	{
		float_1 = float_2 + float_2;
	}
	int_2 = int_1 * int_1;
	char_1 = char_1 * char_2;
	int_4 = int_3 * int_4;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		float_2 = float_1 + float_2;
	}
	int_4 = int_4 + int_4;
}
unsigned int v_core_start(int uni_para)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float_1 = float_1 + float_1;
	double_1 = double_2;
	int_3 = int_1 + int_2;
	long_2 = long_1 * long_1;
	long_3 = long_2;
	char controller4vul_2598[3];
	fgets(controller4vul_2598 ,3 ,stdin);
	if( strcmp( controller4vul_2598, " =") < 0)
	{
		double_3 = v_core_ctx_create(long_4,uni_para);

		double_1 = double_1 * double_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	int_2 = int_4;
	return unsigned_int_5;
}
float v_nc_run( float parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_2;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
	char controller4vul_2597[3];
	fgets(controller4vul_2597 ,3 ,stdin);
	if( strcmp( controller4vul_2597, "Hq") > 0)
	{
		unsigned_int_1 = v_core_start(uni_para);

	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 + int_1;
		if(1)
		{
			double_1 = double_1;
		}
	}
	long_1 = long_1 + long_1;
	return float_1;
}
int v__log_files_circular_deinit( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	int_4 = int_3 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
	}
	unsigned_int_2 = unsigned_int_3;
	char_2 = char_1 + char_1;
	int_1 = int_4;
	return int_2;
}
int v__log_rotate_deinit( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	return int_1;
}
void v_log_deinit()
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	int_1 = int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int_2 = v__log_files_circular_deinit(float_2);

		unsigned_int_1 = unsigned_int_1;
	}
	long_2 = long_1 + long_1;
	int_1 = v__log_rotate_deinit(double_1);

}
void v_nc_print_done()
{
	char char_1 = 1;
	char_1 = char_1 + char_1;
}
void v_signal_deinit()
{
}
short v_nc_remove_pidfile()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	return short_1;
}
double v_nc_post_run()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	char_3 = char_1 + char_2;
	short_1 = v_nc_remove_pidfile();

	v_log_deinit();

	short_3 = short_2 * short_1;
	v_signal_deinit();

	long_1 = long_1;
	return double_1;
	v_nc_print_done();

}
long v_nc_print_run( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 + short_2;
	double_1 = double_1 * double_2;
	if(1)
	{
		short_2 = short_3 + short_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	float_3 = float_1 + float_2;
	return long_1;
}
float v_nc_create_pidfile( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_2;
	long_3 = long_1 + long_2;
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3 * double_3;
	}
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_3 = unsigned_int_2;
	char_2 = char_1 + char_1;
	if(1)
	{
		long long_4 = 1;
		long_2 = long_4;
	}
	int_1 = int_1 + int_2;
	return float_1;
}
float v_signal_init()
{
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		int_1 = int_1;
		double_1 = double_2;
		float_2 = float_1 * float_1;
		double_4 = double_1 + double_3;
		short_1 = short_1 * short_2;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
		if(1)
		{
			double_3 = double_2 * double_3;
		}
	}
	return float_2;
}
short v_nc_daemonize( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	long long_4 = 1;
	char char_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 + float_1;
	int_1 = int_1 + int_1;
	short_2 = short_1 + short_2;
	int_1 = int_1 * int_1;
	char_2 = char_1 + char_1;
	char_1 = char_2 * char_1;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "h") > 0)
	{
		long long_3 = 1;
		long_3 = long_2 * long_2;
	}
	int_3 = int_1 * int_2;
	float_2 = float_3;
	long_2 = long_1 * long_4;
	char_1 = char_3 + char_3;
	if(1)
	{
		int_2 = int_4 + int_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		}
	}
	long_1 = long_1 * long_5;
	double_4 = double_3 + double_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4;
	}
	double_2 = double_3 * double_5;
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
		unsigned_int_3 = unsigned_int_4;
	}
	double_6 = double_6 + double_1;
	if(1)
	{
		double double_7 = 1;
		double double_8 = 1;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
		double_7 = double_7 + double_8;
	}
	short_3 = short_1 + short_1;
	if(1)
	{
		char char_4 = 1;
		int_2 = int_3 * int_4;
		char_4 = char_3 * char_1;
	}
	if(1)
	{
		short short_4 = 1;
		short_1 = short_4 * short_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
		}
	}
	return short_2;
}
void v__log_files_circular_info( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1 * long_1;
	int_2 = int_1 * int_1;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_4 = int_2 * int_3;
		}
	}
}
float v__log_files_circular_insert( float parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_1 = 1;
	char char_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char_1 = char_2;
	if(1)
	{
	}
	char_4 = char_1 + char_3;
	char_3 = char_1 * char_5;
	int_1 = int_1 + int_1;
	if(1)
	{
		char_1 = char_5 + char_6;
		long_1 = long_1 * long_2;
		int_3 = int_2 * int_1;
	}
	if(1)
	{
		double double_5 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			double_2 = double_1 * double_2;
			if(1)
			{
				long_1 = long_1;
			}
			if(1)
			{
				for(int looper_2=0; looper_2<1;looper_2++)
				{
					double_3 = double_1 * double_1;
				}
				int_2 = int_1 * int_1;
				double_2 = double_1 + double_3;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			}
			if(1)
			{
				double_3 = double_4 + double_1;
			}
			if(1)
			{
				double_1 = double_2;
			}
			if(1)
			{
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					short_1 = short_1 * short_1;
				}
				double_4 = double_5 * double_1;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
				int_2 = int_1 * int_3;
			}
		}
		if(1)
		{
			long_1 = long_1 * long_2;
			double_1 = double_2 + double_5;
		}
	}
	if(1)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			float float_1 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float_2 = float_1 + float_1;
			if(1)
			{
				char_5 = char_4 * char_5;
			}
			if(1)
			{
				double double_6 = 1;
				for(int looper_5=0; looper_5<1;looper_5++)
				{
					long long_3 = 1;
					long_2 = long_1 + long_3;
				}
				char_5 = char_6 * char_5;
				double_6 = double_6 + double_1;
				float_4 = float_3 + float_1;
			}
			if(1)
			{
				short short_2 = 1;
				short_1 = short_2;
			}
			if(1)
			{
				for(int looper_6=0; looper_6<1;looper_6++)
				{
					double_1 = double_1 + double_2;
				}
				float_3 = float_1 * float_3;
				int_2 = int_2 * int_4;
				float_2 = float_2 * float_4;
			}
		}
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		int_4 = int_5 * int_1;
	}
	if(1)
	{
		int_1 = int_5;
	}
	return float_2;
}
int v__is_log_bak_file( float parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	float_1 = float_2 * float_2;
	long_1 = long_1;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
			}
		}
		if(1)
		{
			if(1)
			{
			}
		}
		if(1)
		{
			if(1)
			{
			}
		}
		if(1)
		{
			if(1)
			{
			}
		}
	}
	return int_1;
}
long v_log_files_circular_init( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	float float_3 = 1;
	double double_5 = 1;
	long long_1 = 1;
	double_3 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = v__is_log_bak_file(float_1,char_1);

	v__log_files_circular_info(float_2);

	int_1 = int_1 * int_1;
	double_2 = double_4 + double_4;
	float_2 = v__log_files_circular_insert(float_3,float_2);

	double_2 = double_3 + double_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		char_4 = char_2 * char_3;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		int_2 = int_2 * int_1;
	}
	return long_1;
}
int v_log_rotate_init( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	}
	float_3 = float_1 * float_2;
	return int_2;
}
int v_log_init( int parameter_1,char parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		float_3 = float_2 * float_1;
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_1 = int_1;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_1;
		}
		if(1)
		{
			double_1 = double_1;
		}
		int_2 = v_log_rotate_init(short_1);

		double_1 = double_2;
		float_2 = float_1 * float_3;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	return int_3;
	long_1 = v_log_files_circular_init(long_2);

}
short v_nc_pre_run( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char_1 = char_2;
	float_1 = v_signal_init();

	char_1 = char_3 * char_4;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_1 * int_1;
		if(1)
		{
		}
	}
	short_1 = v_nc_daemonize(int_1);

	float_1 = v_nc_create_pidfile(float_2);

	long_1 = v_nc_print_run(unsigned_int_1);

	long_1 = long_2;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		int_1 = v_log_init(int_1,char_5);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		if(1)
		{
		}
	}
	char_2 = char_6 * char_5;
	return short_1;
}
char v_conf_server_deinit( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long_2 = long_1 * long_1;
	v_string_deinit(char_1);

	int_2 = int_1 + int_2;
	short_1 = short_1 * short_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ";j") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	int_1 = int_1 * int_3;
	return char_1;
}
int v_conf_pool_deinit( short parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	int int_6 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	short short_2 = 1;
	char char_4 = 1;
	long long_5 = 1;
	char char_6 = 1;
	long long_6 = 1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1;
	long_1 = v_array_n(short_1);

	int_1 = int_2;
	long_2 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_1 * double_1;
	int_3 = int_3 + int_1;
	long_1 = long_2 + long_3;
	int_5 = int_4 + int_4;
	double_2 = double_1 + double_3;
	double_5 = double_4 + double_3;
	if(1)
	{
		char_2 = char_1 * char_1;
		if(1)
		{
			long_4 = long_1 + long_3;
			int_3 = int_6;
		}
		if(1)
		{
			int int_7 = 1;
			double_6 = double_6 + double_7;
			int_3 = int_7 + int_3;
		}
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
			char char_3 = 1;
			float_2 = float_1 + float_2;
			if(1)
			{
				long_1 = long_1 + long_4;
			}
			char_3 = char_2 + char_1;
			char controller_7[2];
			fgets(controller_7 ,2 ,stdin);
			if( strcmp( controller_7, "]") < 0)
			{
				short_1 = short_1 + short_2;
			}
			float_2 = float_1 + float_1;
		}
		if(1)
		{
			int_3 = int_2 * int_6;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		char char_5 = 1;
		short short_3 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_8 = 1;
		if(1)
		{
			v_string_deinit(char_4);

			char_5 = char_1 + char_5;
		}
		if(1)
		{
			v_array_deinit(int_2);

			short_3 = short_2;
		}
		if(1)
		{
			double_3 = double_6;
		}
		if(1)
		{
			short_1 = short_4 + short_4;
		}
		if(1)
		{
			short_3 = short_1;
			if(1)
			{
				float_1 = float_2;
				unsigned_int_5 = unsigned_int_2;
			}
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
		if(1)
		{
			short short_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned_int_2 = v_array_pop(long_5);

			char_5 = char_2 + char_1;
			short_1 = short_4 + short_5;
			unsigned_int_5 = unsigned_int_6 * unsigned_int_7;
			double_1 = double_5 + double_7;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char_6 = v_conf_server_deinit(float_2);

				unsigned_int_6 = unsigned_int_4 + unsigned_int_2;
			}
			double_8 = double_4;
			int_2 = int_5 + int_4;
		}
		if(1)
		{
			double double_9 = 1;
			double_9 = double_9 + double_8;
			double_9 = double_7;
		}
	}
	long_6 = long_4;
	int_5 = int_6 * int_1;
	return int_6;
}
void v_conf_destroy( double parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_5 = 1;
	int int_3 = 1;
	long_1 = v_array_n(short_1);

	short_4 = short_2 * short_3;
	double_1 = double_1 * double_2;
	if(1)
	{
		long_1 = long_1 * long_2;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	v_conf_pop_scalar(short_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_3 = v_array_pop(long_2);

		char_2 = char_1 * char_1;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	v_array_deinit(int_1);

	int_2 = v_conf_pool_deinit(short_5);

	int_3 = int_2 + int_2;
	if(1)
	{
		int_2 = int_2 * int_3;
		if(1)
		{
		}
		if(1)
		{
		}
	}
}
long v_conf_dump( float parameter_1)
{
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
	float float_3 = 1;
	char char_5 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_3 = 1;
	float_1 = float_2;
	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		char char_3 = 1;
		int int_4 = 1;
		double double_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		double_1 = double_2;
		int_3 = int_1 * int_3;
		char_2 = char_1 * char_3;
		int_4 = int_2 + int_4;
		double_1 = double_3;
		char_3 = char_4 + char_1;
		char_3 = char_2 + char_1;
		float_3 = float_1 + float_1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		char_2 = char_1 * char_5;
		int_4 = int_3;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
		long_1 = v_array_n(short_1);

		char_5 = v_array_get(float_3,double_1);

		short_3 = short_2 + short_2;
		float_3 = float_3 * float_1;
		unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
		long_2 = long_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_4 = 1;
			double_2 = double_2;
			float_3 = float_4 * float_4;
		}
	}
	return long_3;
}
char v_conf_pool_name_cmp( short parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int_1 = v_string_compare(double_1,long_1);

	short_2 = short_1 + short_1;
	return char_1;
}
int v_conf_pool_listen_cmp( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return int_1;
	int_1 = v_string_compare(double_1,long_1);

}
char v_conf_server_name_cmp( int parameter_1,double parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int_1 = v_string_compare(double_1,long_1);

	double_2 = double_2;
	return char_1;
}
void v_array_sort( short parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_3 = long_1 + long_2;
}
long v_conf_validate_server( unsigned int parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	short_3 = short_1 + short_2;
	char_3 = char_1 + char_2;
	double_1 = double_1 * double_2;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	int_4 = int_2 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_5 = 1;
		long long_2 = 1;
		long_1 = v_array_n(short_3);

		v_array_sort(short_4,unsigned_int_1);

		short_5 = short_2 * short_2;
		long_2 = long_2;
		double_2 = double_1 + double_3;
		if(1)
		{
			int int_5 = 1;
			int_1 = v_string_compare(double_2,long_1);

			double_3 = double_4 + double_3;
			int_5 = int_1 + int_2;
			char_1 = v_conf_server_name_cmp(int_1,double_4);

			char_1 = char_2 * char_1;
		}
	}
	if(1)
	{
	}
	return long_3;
	char_4 = v_array_get(float_1,double_3);

}
long v_string_empty( double parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_1 * int_1;
	long_1 = long_2;
	return long_1;
}
int v_conf_validate_pool( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_5 = 1;
	double_1 = double_2;
	double_4 = double_3 + double_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_3 = char_1 * char_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		char char_4 = 1;
		char_2 = char_4 + char_3;
	}
	long_1 = v_string_empty(double_1);

	float_2 = float_3 * float_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double_4 = double_2 * double_3;
	}
	if(1)
	{
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		double_2 = double_2 * double_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		double double_5 = 1;
		double_4 = double_5;
	}
	if(1)
	{
		int_3 = int_1 * int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			int_3 = int_2 + int_2;
		}
		if(1)
		{
			double double_6 = 1;
			double double_7 = 1;
			double_7 = double_6 * double_6;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_1;
		}
		if(1)
		{
			int int_4 = 1;
			int_4 = int_4 + int_1;
		}
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
	}
	long_2 = v_conf_validate_server(unsigned_int_2,long_2);

	double_2 = double_1 + double_1;
	return int_5;
}
void v_conf_post_validate( float parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	short short_2 = 1;
	char char_2 = 1;
	float float_4 = 1;
	int_1 = v_string_compare(double_1,long_1);

	double_4 = double_2 * double_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1;
	double_2 = double_4;
	int_1 = v_conf_pool_listen_cmp(float_1,int_2);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		double double_5 = 1;
		double_1 = double_5;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_2 + int_3;
		double_4 = double_1 * double_3;
		if(1)
		{
		}
	}
	char_1 = v_conf_pool_name_cmp(short_1,unsigned_int_3);

	float_2 = float_2 + float_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int_4 = int_2 * int_2;
		long_2 = long_1 * long_1;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
		if(1)
		{
			char char_3 = 1;
			v_array_sort(short_2,unsigned_int_1);

			char_3 = char_2 * char_2;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
			char_2 = char_2 + char_2;
		}
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char char_4 = 1;
		char char_5 = 1;
		int int_5 = 1;
		char_5 = char_4 + char_2;
		float_1 = float_2;
		int_1 = int_5 + int_3;
		if(1)
		{
			short short_3 = 1;
			double double_6 = 1;
			double double_7 = 1;
			char char_6 = 1;
			short_1 = short_3 + short_2;
			long_2 = v_array_n(short_2);

			double_6 = double_7;
			char_2 = v_array_get(float_4,double_4);

			char_6 = char_5 + char_4;
		}
	}
	if(1)
	{
	}
	int_1 = v_conf_validate_pool(float_1,unsigned_int_3);

}
unsigned int v_conf_end_parse( int parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_2 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char_1 = v_conf_yaml_deinit(short_1);

	short_1 = short_1;
	float_1 = v_conf_event_done(int_1);

	int_1 = int_2;
	int_1 = int_1 + int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2 + char_2;
	}
	double_2 = double_1 + double_1;
	double_2 = double_3 + double_4;
	int_2 = int_2 * int_3;
	if(1)
	{
		double_2 = double_4 + double_3;
	}
	if(1)
	{
		char char_5 = 1;
		char_5 = char_3 * char_4;
	}
	float_2 = float_1 + float_1;
	if(1)
	{
		short_1 = v_conf_event_next(double_3);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	}
	short_1 = short_1 + short_2;
	int_5 = int_4 + int_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	char_4 = char_4;
	if(1)
	{
		char char_6 = 1;
		char char_7 = 1;
		char_7 = char_3 + char_6;
	}
	long_1 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_4 = double_3;
	short_3 = short_3;
	return unsigned_int_5;
}
int v_string_compare( double parameter_1,long parameter_2)
{
	int int_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	return int_1;
}
char v_string_duplicate( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_3 = float_1 + float_2;
	float_5 = float_3 + float_4;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	float_3 = float_3 * float_3;
	int_3 = int_1 + int_2;
	return char_1;
}
int v_conf_pool_init( long parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	char char_4 = 1;
	double double_6 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_5 = 1;
	long_1 = long_1 + long_2;
	char_1 = char_2;
	int_2 = int_1 * int_1;
	char_3 = v_string_duplicate(int_3,int_3);

	double_2 = double_1 + double_2;
	double_3 = double_2 + double_3;
	float_1 = float_1 * float_1;
	int_4 = int_1 * int_1;
	float_2 = float_2 * float_3;
	v_string_init(int_2);

	float_2 = float_1;
	float_2 = float_4 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_1 + double_4;
	double_5 = double_3 * double_4;
	int_1 = int_4 + int_2;
	double_3 = double_4 * double_5;
	short_1 = v_array_init(short_1,float_1,char_4);

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_3;
	short_1 = short_1 + short_1;
	int_2 = int_3;
	double_6 = double_6 * double_4;
	short_2 = v_array_null(float_2);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		float_1 = float_2 + float_3;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	long_2 = long_1;
	double_4 = double_5 + double_5;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	double_6 = double_3;
	if(1)
	{
		long long_3 = 1;
		long_2 = long_3 * long_3;
	}
	v_string_deinit(char_5);

	unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	return int_2;
}
char v_array_get( float parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long_3 = long_1 + long_2;
	float_1 = float_2;
	int_1 = int_2;
	char_1 = char_1 * char_1;
	return char_1;
}
float v_array_top( short parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_1 = v_array_get(float_1,double_1);

	short_1 = short_2;
	return float_1;
}
double v_conf_handler( long parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_5 = 1;
	float float_2 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short_1 = short_1 * short_1;
	double_2 = double_1 + double_2;
	int_1 = int_1 * int_2;
	if(1)
	{
		double double_3 = 1;
		char char_1 = 1;
		double_3 = double_2 * double_1;
		int_3 = v_string_compare(double_4,long_1);

		char_1 = char_2;
	}
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	float_1 = v_array_top(short_1);

	int_4 = v_conf_pool_init(long_2,double_5);

	char_2 = v_array_get(float_2,double_5);

	short_1 = short_2 + short_2;
	float_2 = float_2 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int_1 = int_5 + int_5;
		if(1)
		{
			long_1 = long_2 + long_1;
		}
		char_4 = char_3 + char_3;
		if(1)
		{
			long_3 = v_array_n(short_1);

			double_4 = double_4 * double_1;
		}
	}
	long_4 = long_3 * long_2;
	return double_1;
}
short v_array_null( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_2 = double_1 + double_1;
	char_1 = char_1;
	int_3 = int_1 + int_2;
	short_2 = short_1 * short_2;
	return short_3;
}
long v_string_copy( short parameter_1,char parameter_2,double parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int_1 = int_1 * int_1;
	float_1 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_3 = int_2 + int_1;
	double_2 = double_1 + double_1;
	return long_1;
}
char v_array_push( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_2 = double_1 * double_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float_3 = float_1 * float_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
		}
		double_1 = double_1;
		long_1 = long_2;
	}
	char_1 = char_1;
	int_1 = int_2 * int_1;
	return char_2;
}
short v_conf_push_scalar( double parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	short short_2 = 1;
	char_1 = v_array_push(float_1);

	int_3 = int_1 * int_2;
	char_1 = char_1 + char_1;
	long_1 = long_1 + long_2;
	double_3 = double_1 * double_2;
	long_3 = v_string_copy(short_1,char_2,double_1);

	char_1 = char_2;
	unsigned_int_1 = v_array_pop(long_3);

	float_1 = float_1;
	if(1)
	{
		double double_4 = 1;
		if(1)
		{
		}
		v_string_init(int_1);

		double_4 = double_3 * double_1;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	float_1 = float_2 * float_1;
	int_2 = int_2 + int_1;
	if(1)
	{
		char char_3 = 1;
		char_3 = char_3 + char_1;
	}
	return short_2;
}
void v_string_init( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long_2 = long_1 + long_2;
	char_3 = char_1 + char_2;
}
void v_string_deinit( char parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double_1 = double_1;
		float_1 = float_2;
	}
	v_string_init(int_1);

}
unsigned int v_array_pop( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_1;
	int_1 = int_2 + int_3;
	short_2 = short_1 * short_2;
	float_2 = float_1 + float_1;
	return unsigned_int_1;
}
void v_conf_pop_scalar( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long_1 = long_2;
	int_2 = int_1 * int_2;
	long_3 = long_3 + long_1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = v_array_pop(long_1);

	v_string_deinit(char_1);

}
char v_conf_parse_core( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_3 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 * long_2;
	float_1 = float_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	double_2 = double_2 * double_3;
	v_string_init(int_1);

	short_3 = short_1 * short_2;
	double_3 = v_conf_handler(long_1);

	short_1 = short_2 + short_3;
	short_3 = v_conf_push_scalar(double_4);

	int_1 = int_1 + int_1;
	if(1)
	{
		short_2 = v_conf_event_next(double_4);

		char_2 = char_1 * char_1;
	}
	if(1)
	{
		short_3 = short_2;
	}
	short_4 = short_3 + short_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
	unsigned_int_2 = unsigned_int_6;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	float_2 = float_2 * float_2;
	v_conf_pop_scalar(short_2);

	char_2 = v_array_push(float_1);

	float_3 = v_conf_event_done(int_2);

	int_4 = int_3 + int_2;
	if(1)
	{
		char_3 = char_2 * char_3;
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_6;
				short_5 = v_array_null(float_3);

				int_4 = int_3 + int_4;
			}
			if(1)
			{
				int_1 = int_2;
				if(1)
				{
				}
				short_3 = short_1 * short_3;
			}
		}
		if(1)
		{
			char char_4 = 1;
			float float_4 = 1;
			char char_6 = 1;
			int int_5 = 1;
			int_2 = int_4 + int_3;
			if(1)
			{
				char char_5 = 1;
				char_5 = char_4 + char_2;
				double_4 = double_4 + double_3;
			}
			if(1)
			{
				float_1 = float_4 * float_4;
			}
			char_6 = char_4 * char_1;
			unsigned_int_1 = unsigned_int_6 * unsigned_int_2;
			int_4 = int_1 * int_5;
			unsigned_int_6 = unsigned_int_6 * unsigned_int_6;
			double_1 = double_3 * double_3;
			short_3 = short_5 + short_4;
			float_1 = float_1 + float_4;
		}
		if(1)
		{
			double double_5 = 1;
			double_5 = double_3 * double_4;
			int_3 = int_2 * int_2;
		}
		int_4 = int_3;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	}
	unsigned_int_1 = unsigned_int_7 * unsigned_int_1;
	long_2 = long_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_2;
		if(1)
		{
			long_3 = v_array_n(short_3);

			long_3 = long_3 * long_2;
			if(1)
			{
				unsigned_int_7 = unsigned_int_2 * unsigned_int_5;
			}
		}
		if(1)
		{
		}
	}
	return char_3;
}
short v_conf_begin_parse( unsigned int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double_1 = v_conf_yaml_init(char_1);

	float_1 = v_conf_event_done(int_1);

	int_1 = int_1 + int_1;
	short_1 = v_conf_event_next(double_2);

	char_3 = char_2 + char_1;
	float_2 = float_1 + float_1;
	double_4 = double_1 * double_3;
	long_2 = long_1 * long_1;
	return short_2;
}
long v_array_n( short parameter_1)
{
	long long_1 = 1;
	return long_1;
}
void v_conf_parse( unsigned int parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_2 = 1;
	short_1 = short_1 + short_1;
	long_1 = v_array_n(short_1);

	unsigned_int_1 = v_conf_end_parse(int_1);

	long_3 = long_2 * long_2;
	double_1 = double_2;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	double_3 = double_2 + double_2;
	short_1 = v_conf_begin_parse(unsigned_int_3);

	char_1 = v_conf_parse_core(float_2);

}
float v_conf_event_done( int parameter_1)
{
	float float_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		double_1 = double_1 + double_2;
	}
	return float_1;
}
short v_conf_event_next( double parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	float_1 = float_1 + float_1;
	char_1 = char_1 * char_1;
	long_2 = long_1 + long_1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	char_1 = char_2 * char_3;
	return short_1;
}
char v_conf_validate_structure( float parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_1 = 1;
	int int_3 = 1;
	short_1 = v_conf_event_next(double_1);

	char_1 = char_1 + char_2;
	double_1 = v_conf_yaml_init(char_1);

	int_2 = int_1 * int_2;
	char_3 = v_conf_yaml_deinit(short_1);

	char_5 = char_4 + char_4;
	return char_1;
	float_1 = v_conf_event_done(int_3);

}
short v_conf_token_done( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int_1 = int_2;
		int_1 = int_3 * int_4;
	}
	return short_1;
}
unsigned int v_conf_token_next()
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_2;
	float_3 = float_1 * float_2;
	double_3 = double_3 + double_1;
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		float_5 = float_3 + float_4;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return unsigned_int_3;
}
short v_conf_validate_tokens( long parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
	double_1 = v_conf_yaml_init(char_1);

	unsigned_int_1 = v_conf_token_next();

	short_2 = v_conf_token_done(double_1);

	char_2 = v_conf_yaml_deinit(short_1);

}
char v_conf_yaml_deinit( short parameter_1)
{
	char char_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_2 = int_1 + int_2;
		double_1 = double_1 * double_2;
	}
	return char_1;
}
double v_conf_yaml_init( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short_3 = short_1 + short_2;
	int_2 = int_1 * int_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 + int_2;
	}
	short_4 = short_1 + short_2;
	if(1)
	{
		long long_3 = 1;
		long_2 = long_1 + long_3;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_4 = short_4 * short_4;
	return double_1;
}
char v_conf_validate_document( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return char_1;
	double_1 = v_conf_yaml_init(char_2);

	char_1 = v_conf_yaml_deinit(short_1);

}
unsigned int v_conf_pre_validate( int parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char_1 = v_conf_validate_document(short_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = v_conf_validate_tokens(long_1);

	char_2 = v_conf_validate_structure(float_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "J") < 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	char_2 = char_2 * char_2;
	return unsigned_int_1;
}
void v_array_deinit( int parameter_1)
{
	int int_1 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
}
short v_array_init( short parameter_1,float parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	short_2 = short_1 * short_1;
	long_3 = long_1 + long_2;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	short_3 = short_1 + short_3;
	unsigned_int_1 = unsigned_int_1;
	return short_4;
}
unsigned int v_conf_open( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	short short_3 = 1;
	int int_5 = 1;
	char char_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1 + short_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		short_2 = short_1;
	}
	int_4 = int_4;
	if(1)
	{
		double double_3 = 1;
		short_1 = v_array_init(short_1,float_1,char_1);

		double_3 = double_1 + double_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double_4 = double_2 * double_2;
		char_2 = char_2;
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	if(1)
	{
		long_3 = long_2 * long_1;
		double_4 = double_4 + double_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_5;
	}
	long_3 = long_1 * long_4;
	unsigned_int_2 = unsigned_int_5;
	short_2 = short_3 + short_1;
	unsigned_int_3 = unsigned_int_2;
	int_4 = int_2 * int_5;
	char_2 = char_1 * char_3;
	v_array_deinit(int_1);

	float_1 = float_1 * float_2;
	long_3 = long_1 * long_2;
	int_1 = int_4;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_6;
	int_4 = int_5 + int_1;
	return unsigned_int_7;
}
long v_conf_create( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	char char_3 = 1;
	v_conf_parse(unsigned_int_1);

	char_1 = char_1 * char_2;
	v_conf_post_validate(float_1);

	int_1 = int_2;
	int_2 = int_3 * int_4;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	if(1)
	{
		int int_5 = 1;
		int_5 = int_2 * int_4;
	}
	short_1 = short_1 + short_2;
	if(1)
	{
		long_1 = v_conf_dump(float_1);

		long_2 = long_1 * long_1;
	}
	double_1 = double_1 + double_1;
	if(1)
	{
		char_2 = char_2 + char_1;
	}
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = v_conf_pre_validate(int_2);

	double_3 = double_2 + double_1;
	long_1 = long_3 * long_3;
	long_2 = long_3 * long_1;
	v_conf_destroy(double_1);

	double_2 = double_3 + double_3;
	return long_3;
	unsigned_int_2 = v_conf_open(char_3);

}
short v_nc_test_conf( short parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_1;
	long_1 = v_conf_create(char_1);

	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		v_conf_destroy(double_2);

		unsigned_int_1 = unsigned_int_2;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	return short_1;
}
void v_stats_describe()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_1 * int_2;
	}
	int_2 = int_3;
	float_3 = float_1 * float_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_5 = int_4 * int_1;
	}
}
void v_nc_show_usage()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	char_2 = char_1 * char_1;
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_2 + double_1;
	}
	if(1)
	{
		char char_3 = 1;
		char_1 = char_3 + char_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 * double_3;
	}
}
long v_set_log_file_count( char parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	float_1 = float_1 * float_1;
	int_1 = int_1;
	if(1)
	{
		char char_1 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 * short_1;
		}
	}
	long_1 = long_1 + long_1;
	if(1)
	{
		char char_4 = 1;
		char_2 = char_4 * char_4;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3;
	}
	short_3 = short_2 * short_2;
	return long_2;
}
float v_set_log_file_max_size( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1;
	short_3 = short_2 + short_2;
	unsigned_int_1 = unsigned_int_2;
	float_3 = float_1 * float_2;
	int_4 = int_2 * int_1;
	int_3 = int_1;
	int_4 = int_3 * int_5;
	double_2 = double_1 + double_2;
	int_2 = int_4;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			short short_4 = 1;
			char char_3 = 1;
			short_4 = short_2 + short_1;
			char_3 = char_1 * char_2;
		}
		if(1)
		{
			double_2 = double_3 + double_2;
			int_4 = int_4;
		}
		if(1)
		{
			double_2 = double_2;
			short_1 = short_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
			int_2 = int_4 + int_3;
		}
		if(1)
		{
			double_2 = double_2 + double_2;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_2;
		if(1)
		{
			short short_5 = 1;
			short short_6 = 1;
			unsigned int unsigned_int_5 = 1;
			short_1 = short_5 + short_6;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			unsigned_int_7 = unsigned_int_6 + unsigned_int_1;
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			double_2 = double_1;
		}
	}
	if(1)
	{
		int_5 = int_3 * int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_4 = 1;
		float_2 = float_4 * float_1;
		if(1)
		{
			double_1 = double_3;
		}
		if(1)
		{
			int_4 = int_3 + int_3;
		}
		if(1)
		{
			float_4 = float_3 * float_1;
		}
	}
	long_4 = long_2 + long_3;
	if(1)
	{
		int_5 = int_3 * int_5;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_7 * unsigned_int_1;
	}
	int_3 = int_2;
	return float_3;
}
char v_nc_valid_port( int parameter_1)
{
	char char_1 = 1;
	if(1)
	{
	}
	return char_1;
}
unsigned int v_nc_get_options( int parameter_1,char parameter_2,double parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short_1 = short_1 + short_2;
	char_2 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			int int_2 = 1;
			int int_3 = 1;
			long long_2 = 1;
			char_3 = v_nc_valid_port(int_1);

			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				long_1 = v_set_log_file_count(char_1);

				double_2 = double_1 * double_2;
			}
			int_3 = int_1 * int_2;
			float_1 = v_set_log_file_max_size(char_2);

			long_2 = long_1;
		}
	}
	return unsigned_int_1;
}
char v_nc_set_default_options( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double_2 = double_1 + double_1;
	short_1 = short_1;
	double_1 = double_3 * double_4;
	int_1 = int_1 + int_2;
	char_2 = char_1 * char_1;
	int_3 = int_1 + int_1;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1;
	if(1)
	{
		long_1 = long_1 * long_1;
		char_3 = char_1 * char_1;
	}
	long_1 = long_2 * long_1;
	double_3 = double_1;
	int_3 = int_1 * int_2;
	double_2 = double_3 * double_1;
	int_1 = int_4 + int_2;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	int_4 = int_1 * int_3;
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	long_3 = long_1 * long_1;
	if(1)
	{
		char_1 = char_1 + char_3;
	}
	int_3 = int_2;
	int_2 = int_2 * int_4;
	int_2 = int_5 * int_6;
	return char_2;
}
int main()
{
	int uni_para =949;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	int_2 = int_2 + int_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		char_3 = char_1 * char_2;
	}
	char controller4vul_2595[3];
	fgets(controller4vul_2595 ,3 ,stdin);
	if( strcmp( controller4vul_2595, "E(") > 0)
	{
		unsigned int unsigned_int_4 = 1;
		int_3 = int_1 * int_2;
		char controller4vul_2596[3];
		fgets(controller4vul_2596 ,3 ,stdin);
		if( strcmp( controller4vul_2596, "j3") < 0)
		{
			float_1 = v_nc_run(float_2,uni_para);

			double_3 = double_1 + double_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_2;
		}
		unsigned_int_1 = unsigned_int_3;
	}
	double_1 = double_1 * double_3;
	if(1)
	{
		double_2 = double_3 * double_4;
		double_3 = double_4;
	}
	double_4 = double_4 * double_5;
	double_2 = double_3 * double_5;
	double_6 = double_6 + double_6;
	return int_4;
}

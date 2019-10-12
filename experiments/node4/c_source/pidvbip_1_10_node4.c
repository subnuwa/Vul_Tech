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

void v_osd_clear_newchannel( char parameter_1);
void v_osd_update( double parameter_1,int parameter_2);
void v_save_snapshot();
void v_osd_show_audio_menu( double parameter_1,double parameter_2,int parameter_3);
void v_osd_alert( short parameter_1,char parameter_2);
int v_htsp_send_skip( unsigned int parameter_1,int parameter_2,int parameter_3);
void v_osd_show_newchannel( unsigned int parameter_1,int parameter_2);
void v_osd_clear( int parameter_1);
void v_osd_channellist_update_channels( float parameter_1,int parameter_2);
void v_osd_channellist_show_epg( unsigned int parameter_1,int parameter_2,int uni_para);
int v_channels_getcount();
void v_osd_channellist_display_channels( int parameter_1,int uni_para);
void v_osd_channellist_display( double parameter_1,int uni_para);
int v_channels_getnext( int parameter_1);
char v_find_channel( int parameter_1);
int v_channels_getprev( int parameter_1);
int v_channels_getlast();
int v_osd_channellist_selected_position( long parameter_1);
int v_osd_process_key( unsigned int parameter_1,int parameter_2,int uni_para);
long v_graphics_update_displayed_resource( double parameter_1,int parameter_2,char parameter_3,unsigned int parameter_4,long parameter_5);
void v_graphics_resource_text_dimensions_ext( unsigned int parameter_1,int parameter_2,double parameter_3,short parameter_4,int parameter_5,short parameter_6);
char v_render_paragraph( double parameter_1,double parameter_2,int parameter_3,short parameter_4,short parameter_5);
double v_osd_show_eventinfo( int parameter_1,float parameter_2,float parameter_3);
char v_osd_show_time( char parameter_1);
void v_draw_line( float parameter_1,double parameter_2,float parameter_3,double parameter_4,int parameter_5,double parameter_6);
void v_vgft_font_draw( unsigned int parameter_1,long parameter_2,char parameter_3,double parameter_4,short parameter_5,int parameter_6);
void v_line_extents( unsigned int parameter_1,short parameter_2,float parameter_3,char parameter_4,int parameter_5);
void v_vgft_get_text_extents( unsigned int parameter_1,double parameter_2,int parameter_3,long parameter_4,float parameter_5,float parameter_6,char parameter_7);
void v_float_from_26_6( double parameter_1);
short v_convert_contour( int parameter_1,int parameter_2,short parameter_3);
unsigned int v_convert_outline( unsigned int parameter_1,int parameter_2,double parameter_3,short parameter_4,short parameter_5);
float v_vgft_font_convert_glyphs( float parameter_1,short parameter_2,short parameter_3,unsigned int parameter_4);
void v_vgft_font_term( int parameter_1);
float v_vgft_font_load_mem( double parameter_1,long parameter_3);
float v_vgft_font_init();
short v_find_font( long parameter_1,long parameter_2);
void v_gx_priv_render_text( float parameter_1,int parameter_2,int parameter_3,long parameter_4,double parameter_5,int parameter_6,double parameter_7,float parameter_8,float parameter_9,int parameter_10,char parameter_11,int uni_para);
float v_graphics_resource_render_text_ext( double parameter_1,long parameter_2,short parameter_3,long parameter_4,long parameter_5,short parameter_6,unsigned int parameter_7,char parameter_8,short parameter_9,float parameter_10,int uni_para);
float v_osd_draw_window( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
int v_osd_show_channelname( short parameter_1,short parameter_2);
unsigned int v_utf8decode( char parameter_1,char parameter_2);
void v_event_dump();
int v_event_copy( char parameter_1,int parameter_2);
void v_channels_getnexteventid( int parameter_1,char parameter_2,int parameter_3);
void v_osd_show_info( int parameter_1,int parameter_2,int parameter_3);
int v_event_find_hd_version( int parameter_1,int parameter_2);
void v_channels_geteventid( int parameter_1,char parameter_2,int parameter_3);
int v_channels_gettype( int parameter_1);
char v_get_actual_channel( int parameter_1,int parameter_2);
int v_channels_getfirst();
int v_channels_getid( int parameter_1);
void v_codec_stop( unsigned int parameter_1);
float v_convert4( unsigned int parameter_1,float parameter_2,int parameter_3);
unsigned int v_map_acodec( char parameter_1);
double v_map_vcodec( long parameter_1);
unsigned int v_avplay_thread( char parameter_1);
void v_init_avplay( unsigned int parameter_1,double parameter_2);
int v_create_aac_codecdata( double parameter_1,int parameter_2,int parameter_3,int parameter_4);
unsigned int v_decode_packet_a52( float parameter_1,long parameter_2,short parameter_3);
int v_acodec_omx_thread( int parameter_1);
void v_acodec_omx_init( short parameter_1,unsigned int parameter_2);
float v_is_port_enabled( double parameter_1,int parameter_2);
double v_omx_show_state( int parameter_1,int parameter_2,int parameter_3,int parameter_4);
void v_omx_free_buffers( short parameter_1,int parameter_2);
short v_omx_flush_tunnel( float parameter_1,int parameter_2,long parameter_3,int parameter_4);
void v_omx_teardown_pipeline( short parameter_1);
float v_pts_to_omx( int parameter_1);
unsigned int v_get_next_buffer( long parameter_1);
int v_omx_get_free_buffer_count( unsigned int parameter_1);
void v_omx_alloc_buffers( float parameter_1,int parameter_2);
float v_omx_config_pcm( double parameter_1,int parameter_2,int parameter_3,int parameter_4,char parameter_5);
int v_omx_setup_pipeline( float parameter_1,int parameter_2,char parameter_3,int parameter_4);
void v_omx_set_source_region( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
float v_codec_queue_get_next_item( long parameter_1);
void v_omx_clock_set_speed( short parameter_1,int parameter_2);
char v_vcodec_omx_thread( short parameter_1);
void v_codec_queue_init( unsigned int parameter_1);
void v_vcodec_omx_init( long parameter_1,long parameter_2,char parameter_3);
void v_codec_resume( char parameter_1);
void v_codec_send_message( float parameter_1,int parameter_2);
void v_codec_pause( char parameter_1);
long v_do_pause( int parameter_1,int parameter_2);
void v_codec_flush_queue( double parameter_1);
void v_codec_queue_add_item( short parameter_1,short parameter_2,int parameter_3);
unsigned int v_audio_lang_priority( char parameter_1);
int v_htsp_parse_subscriptionStart( float parameter_1,unsigned int parameter_2);
void v_channels_gettvhid( int parameter_1,int parameter_2,int parameter_3);
unsigned int v_channels_getname( int parameter_1);
int v_channels_getlcn( int parameter_1);
double v_get_time();
void v_codec_set_pts( int parameter_1,short parameter_2);
void v_codec_queue_free_item( long parameter_1,char parameter_2);
long v_codec_stop0( unsigned int parameter_1,int parameter_2);
void v_codec_new_channel();
int v_msgqueue_get( char parameter_1,int parameter_2);
void v_channels_update( int parameter_1,int parameter_2,int parameter_3,char parameter_4,int parameter_5,char parameter_6,char parameter_7);
void v_channels_add( int parameter_1,int parameter_2,int parameter_3,char parameter_4,int parameter_5,int parameter_6,short parameter_7);
int v_htsp_get_list( long parameter_1,char parameter_2,int parameter_3,int parameter_4);
void v_event_free( short parameter_1);
long v___list_del( short parameter_1,long parameter_2);
unsigned int v_list_del( double parameter_1);
void v_event_delete( char parameter_1,int parameter_2);
long v___list_add( int parameter_1,long parameter_2,long parameter_3);
double v_list_add( unsigned int parameter_1,long parameter_2);
short v_list_empty( int parameter_1);
int v_htsp_get_int64( short parameter_1,char parameter_2,int parameter_3);
char v_event_free_items();
unsigned int v_event_get_nolock( int parameter_1,int parameter_2);
int v_htsp_get_uint( long parameter_1,char parameter_2,int parameter_3);
void v_process_event_message( char parameter_1,short parameter_2);
double v_process_message( char parameter_1,float parameter_2,char parameter_3);
int v_htsp_get_int( int parameter_1,char parameter_2,float parameter_3);
void v_hts_sha1_final( double parameter_1,short parameter_2);
void v_hts_sha1_update( double parameter_1,unsigned int parameter_2,int parameter_3);
void v_hts_sha1_init( char parameter_1);
int v_htsp_get_bin( long parameter_1,char parameter_2,short parameter_3,int parameter_4);
void v_htsp_get_string( int parameter_1,char parameter_2);
char v_get_uint32_be( int parameter_1);
int v_safe_recv( int parameter_1,double parameter_2,int parameter_3);
char v_do_htsp_recv_message( int parameter_1,short parameter_2);
int v_htsp_recv_message( float parameter_1,int parameter_2,double parameter_3,int parameter_4);
void v_htsp_destroy_message( short parameter_1);
int v_htsp_send_message( char parameter_1,int parameter_2,unsigned int parameter_3);
void v_put_uint32_be( char parameter_1,short parameter_2);
int v_htsp_create_message( long parameter_1,float parameter_2);
int v_htsp_login( int parameter_1,int parameter_2,char parameter_3,char parameter_4);
float v_get_ip( char parameter_1);
char v_create_tcp_socket();
int v_htsp_connect( double parameter_1,int parameter_2);
long v_htsp_receiver_thread( unsigned int parameter_1);
void v_htsp_init();
void v_omx_set_display_region( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
float v_dumpport( short parameter_1,int parameter_2);
int v_omx_send_command_and_wait1( short parameter_1,int parameter_2,short parameter_3,char parameter_4);
float v_omx_send_command_and_wait0( unsigned int parameter_1,long parameter_2,float parameter_3,unsigned int parameter_4);
char v_omx_send_command_and_wait( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4);
unsigned int v_omx_disable_all_ports( double parameter_1);
char v_omx_fill_buffer_done( unsigned int parameter_1,char parameter_2,long parameter_3);
int v_omx_empty_buffer_done( unsigned int parameter_1,short parameter_2,long parameter_3);
char v_omx_event_handler( char parameter_1,double parameter_2,short parameter_3,double parameter_4,char parameter_5,long parameter_6);
long v_omx_init_component( float parameter_1,unsigned int parameter_2,char parameter_3);
double v_omx_setup_camera_pipeline( double parameter_1);
int v_graphics_update_end();
double v_auto_size( long parameter_1,float parameter_2);
float v_graphics_update_start();
int v_transform( int parameter_1,short parameter_2);
void v_graphics_display_resource( int parameter_1,long parameter_2,long parameter_3,char parameter_4,short parameter_5,double parameter_6,double parameter_7,float parameter_8,float parameter_9);
int v_graphics_resource_fill( double parameter_1,short parameter_2,unsigned int parameter_3,long parameter_4,float parameter_5,double parameter_6);
void v_gx_priv_destroy_native_window();
void v_gx_priv_flush( int parameter_1);
void v_gx_priv_finish_native_window( double parameter_1);
void v_gx_priv_colour_to_paint( unsigned int parameter_1,short parameter_2,int uni_para);
char v_gx_priv_resource_fill( double parameter_1,char parameter_2,unsigned int parameter_3,unsigned int parameter_4,float parameter_5,char parameter_6);
char v_gx_priv_release_screen();
int v_gx_priv_create_native_window( short parameter_1,short parameter_2,float parameter_3,char parameter_4,short parameter_5);
short v_gx_create_window( unsigned int parameter_1,float parameter_2,short parameter_3,int parameter_4,unsigned int parameter_5);
void v_gx_priv_open_screen( unsigned int parameter_1,short parameter_2);
int v_graphics_get_display_size( long parameter_1,short parameter_2,int parameter_3);
void v_gx_priv_restore( int parameter_1);
void v_vgft_term();
int v_vgft_init();
int v_gx_priv_font_init( char parameter_1,int parameter_2);
short v_gx_egl_attrib_colours( float parameter_1,short parameter_2);
float v_create_context( double parameter_1,long parameter_2,float parameter_3);
void v_gx_priv_init();
unsigned int v_gx_priv_initialise();
void v_gx_priv_save( double parameter_1,unsigned int parameter_2);
int v_gx_graphics_init( long parameter_1,int parameter_2);
void v_osd_init( float parameter_1);
char v_get_input_key( int parameter_1);
double v_input_thread();
void v_input_init();
void v_reset_stdin();
void v_events_init();
void v_channels_init();
int v_mpeg2_codec_enabled();
short v_send_deck_status( int parameter_1);
long v_send_cec_version( double parameter_1);
long v_send_osd_name( long parameter_1,unsigned int parameter_2);
unsigned int v_vc_cec_report_physicalAddress( int parameter_1);
void v_SetStreamPath( short parameter_1);
unsigned int v_give_device_vendor_id();
float v_give_device_power_status( int parameter_1);
void v_msgqueue_add( long parameter_1,int parameter_2);
char v_cec_callback(char parameter_2,int parameter_3,int parameter_4,char parameter_5,int parameter_6);
long v_tv_service_callback(long parameter_2,float parameter_3,unsigned int parameter_4);
int v_cec_thread();
int v_cec_init( long parameter_1);
void v_usage();
float v_resolve_callback( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,long parameter_4,long parameter_5,int parameter_6,long parameter_7,short parameter_8,double parameter_9,double parameter_10,char parameter_11,short parameter_12,short parameter_13);
float v_browse_callback( float parameter_1,float parameter_2,int parameter_3,char parameter_4,long parameter_5,short parameter_6,short parameter_7,short parameter_8);
short v_client_callback( char parameter_1,float parameter_2,short parameter_3);
int v_avahi_discover_tvh( short parameter_1);
void v_dump_settings();
unsigned int v_parse_config( char parameter_1,int parameter_2);
float v_show_usage( int parameter_1,unsigned int parameter_2,int parameter_3);
long v_show_error( char parameter_1,float parameter_2,unsigned int parameter_3);
short v_cmdline_opt_find( float parameter_1,int parameter_2,double parameter_3,int parameter_4);
void v_parse_args( int parameter_1,char parameter_2);
void v_msgqueue_init( float parameter_1);
void v_osd_clear_newchannel( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_5 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int_2 = int_1 + int_1;
	double_3 = double_1 + double_2;
	long_1 = long_1;
	int_3 = int_1 + int_3;
	int_2 = v_graphics_resource_fill(double_4,short_1,unsigned_int_1,long_1,float_1,double_3);

	double_5 = double_1 + double_1;
	long_1 = v_graphics_update_displayed_resource(double_5,int_3,char_1,unsigned_int_1,long_2);

}
void v_osd_update( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "f") < 0)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	v_osd_show_info(int_1,int_1,int_2);

	int_2 = int_2;
	double_2 = double_1 + double_1;
	v_osd_channellist_show_epg(unsigned_int_1,int_2,-1 );

	double_1 = double_2 * double_1;
	int_4 = int_1 * int_3;
	char_1 = char_1;
	if(1)
	{
		long long_1 = 1;
		char char_2 = 1;
		long_3 = long_1 * long_2;
		v_osd_update(double_2,int_1);

		double_1 = v_get_time();

		v_osd_clear(int_4);

		char_2 = char_1 + char_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_5 = 1;
		float_2 = float_1 + float_2;
		int_1 = int_2 * int_5;
	}
	v_channels_geteventid(int_2,char_1,int_1);

	char_3 = v_osd_show_time(char_4);

	unsigned_int_4 = unsigned_int_1;
	char_3 = char_3 + char_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		short short_1 = 1;
		long_3 = v_graphics_update_displayed_resource(double_3,int_2,char_1,unsigned_int_4,long_2);

		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
		short_1 = short_1 + short_1;
	}
	unsigned_int_6 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		int_3 = int_3 * int_3;
	}
}
void v_save_snapshot()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_7 = 1;
	int_1 = int_1 + int_2;
	double_2 = double_1 * double_2;
	char_2 = char_1 + char_2;
	double_3 = double_1 + double_1;
	int_3 = int_2 * int_1;
	float_3 = float_1 + float_2;
	char_1 = char_2 * char_1;
	int_3 = int_2 + int_1;
	double_2 = double_1 + double_2;
	int_4 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2;
	double_5 = double_4 * double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	short_4 = short_3 + short_1;
	int_1 = int_5 + int_6;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	double_5 = double_6;
	float_1 = float_4 * float_5;
	int_5 = v_transform(int_5,short_5);

	int_2 = int_5 + int_2;
	int_6 = int_4;
	long_3 = long_1 * long_2;
	if(1)
	{
		float float_6 = 1;
		float_3 = float_6 * float_1;
	}
	char_3 = char_1 * char_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_5;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
	char_1 = char_3;
	long_3 = long_2 + long_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
	char_2 = char_2 + char_1;
	double_7 = double_6 * double_6;
	double_6 = double_4;
	float_5 = float_3 * float_5;
	unsigned_int_4 = unsigned_int_4;
}
void v_osd_show_audio_menu( double parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2;
			}
			char_1 = char_1 * char_2;
		}
	}
}
void v_osd_alert( short parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	double_1 = double_2;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_2 * int_1;
	float_1 = v_graphics_resource_render_text_ext(double_1,long_1,short_1,long_1,long_1,short_2,unsigned_int_3,char_1,short_1,float_2,-1 );

	int_5 = int_4 * int_2;
	int_3 = int_6;
	double_1 = double_2;
	int_5 = int_4 * int_1;
	if(1)
	{
		char char_2 = 1;
		short short_3 = 1;
		int_5 = v_graphics_resource_fill(double_2,short_1,unsigned_int_3,long_1,float_3,double_1);

		char_1 = char_2 + char_1;
		int_6 = int_3 * int_6;
		float_1 = v_osd_draw_window(int_1,int_3,int_3,int_5,int_5);

		short_4 = short_3 * short_3;
		float_3 = float_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		long_2 = v_graphics_update_displayed_resource(double_3,int_2,char_1,unsigned_int_1,long_3);

		long_1 = long_1 * long_2;
		v_graphics_resource_text_dimensions_ext(unsigned_int_2,int_2,double_2,short_4,int_3,short_1);

		int_6 = int_1 * int_6;
	}
	int_4 = int_5;
	double_1 = double_1 + double_2;
}
int v_htsp_send_skip( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char_2 = char_1 + char_1;
	int_1 = v_htsp_create_message(long_1,float_1);

	double_1 = double_2;
	short_1 = short_1 + short_1;
	short_2 = short_2 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = v_htsp_send_message(char_2,int_1,unsigned_int_1);

	int_1 = int_1 + int_1;
	return int_2;
	v_htsp_destroy_message(short_2);

}
void v_osd_show_newchannel( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 * int_3;
	}
	char_2 = char_1 + char_1;
	v_osd_clear(int_4);

	double_2 = double_1 * double_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "@") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		int_1 = int_2 + int_5;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			long long_2 = 1;
			long_3 = long_1 + long_2;
			char controller_4[3];
			fgets(controller_4 ,3 ,stdin);
			if(remainder_check(controller_4,100,2))
			{
				int_1 = int_1 + int_5;
			}
		}
	}
	long_4 = v_graphics_update_displayed_resource(double_1,int_1,char_1,unsigned_int_1,long_4);

	char_1 = char_1;
	long_3 = long_1 * long_4;
	int_5 = v_osd_show_channelname(short_1,short_2);

	long_6 = long_5 + long_6;
	double_1 = double_2;
	int_5 = int_2 * int_2;
}
void v_osd_clear( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_graphics_resource_fill(double_1,short_1,unsigned_int_1,long_1,float_1,double_1);

	short_2 = short_2 + short_2;
	long_2 = v_graphics_update_displayed_resource(double_1,int_1,char_1,unsigned_int_2,long_3);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	long_1 = long_2 * long_3;
	short_5 = short_3 * short_4;
	float_2 = float_2 + float_1;
	double_1 = double_1;
}
void v_osd_channellist_update_channels( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	char char_3 = 1;
	char char_5 = 1;
	float_1 = float_1 + float_1;
	float_2 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	double_1 = double_1 * double_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	short_1 = short_2;
	v_osd_channellist_show_epg(unsigned_int_2,int_1,-1 );

	short_1 = short_1 + short_1;
	float_3 = v_graphics_resource_render_text_ext(double_1,long_1,short_2,long_2,long_2,short_2,unsigned_int_1,char_1,short_3,float_4,-1 );

	int_2 = int_1 + int_2;
	long_2 = long_2 + long_1;
	long_4 = long_3 + long_4;
	double_1 = double_1 * double_1;
	int_1 = int_2 + int_2;
	if(1)
	{
		int int_3 = 1;
		short short_4 = 1;
		int_3 = int_4;
		long_2 = v_graphics_update_displayed_resource(double_1,int_4,char_1,unsigned_int_3,long_4);

		char_2 = char_1;
		unsigned_int_5 = v_utf8decode(char_2,char_1);

		int_4 = int_2 * int_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
		int_5 = v_channels_getlcn(int_4);

		int_2 = int_5 + int_4;
		float_4 = float_4;
		long_4 = long_4 * long_1;
		short_4 = short_4;
	}
	if(1)
	{
		float float_5 = 1;
		float float_6 = 1;
		char char_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float_5 = float_5 + float_6;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
		float_3 = float_6 * float_2;
		float_1 = float_5 + float_6;
		float_5 = float_2 * float_2;
		double_1 = double_1 * double_1;
		char_4 = char_1 * char_3;
		double_3 = double_2 + double_1;
	}
	long_3 = long_4 + long_2;
	char_3 = char_5 + char_5;
	unsigned_int_3 = v_channels_getname(int_2);

}
void v_osd_channellist_show_epg( unsigned int parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	short short_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	short short_4 = 1;
	double double_6 = 1;
	short short_5 = 1;
	double double_7 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3;
	char_1 = char_1;
	double_1 = double_1 + double_2;
	short_2 = short_1 * short_2;
	float_1 = float_1;
	double_1 = double_3 + double_3;
	int_2 = int_2 + int_3;
	double_5 = double_3 * double_4;
	char controller4vul_886[2];
	fgets(controller4vul_886 ,2 ,stdin);
	if( strcmp( controller4vul_886, "^") > 0)
	{
		float_1 = v_graphics_resource_render_text_ext(double_5,long_1,short_2,long_1,long_1,short_3,unsigned_int_2,char_2,short_1,float_1,uni_para);

	}
	double_2 = double_2 + double_1;
	float_1 = float_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		int_1 = int_1 + int_3;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
		int_1 = int_3 + int_2;
	}
	float_2 = float_2 * float_1;
	double_5 = double_2;
	short_3 = short_1 + short_4;
	if(1)
	{
	}
	short_3 = short_1 * short_4;
	short_3 = short_4 * short_4;
	if(1)
	{
		int_2 = int_2 * int_2;
		double_6 = double_2 * double_1;
	}
	double_3 = double_4 + double_3;
	short_5 = short_5 * short_2;
	int_1 = int_1 + int_2;
	double_3 = double_2 + double_4;
	double_7 = double_6;
}
int v_channels_getcount()
{
	int int_1 = 1;
	return int_1;
}
void v_osd_channellist_display_channels( int parameter_1,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_4 = 1;
	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1;
	double_2 = double_1 * double_2;
	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	long_3 = long_3 * long_1;
	float_4 = float_3 * float_1;
	double_1 = double_1 * double_2;
	short_1 = short_1;
	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
	int_1 = int_1 + int_1;
	long_1 = long_2 + long_1;
	short_2 = short_2 + short_3;
	long_4 = long_3 + long_1;
	char controller4vul_883[3];
	fgets(controller4vul_883 ,3 ,stdin);
	if( strcmp( controller4vul_883, "BM") > 0)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		float_2 = float_3 * float_4;
		long_1 = long_1 + long_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			double double_4 = 1;
			if(1)
			{
				short short_4 = 1;
				double_3 = double_1 + double_3;
				short_1 = short_2;
				short_2 = short_4 * short_3;
				char_1 = char_1 * char_1;
			}
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				double_3 = double_2 + double_1;
				short_1 = short_3 + short_1;
				unsigned_int_1 = unsigned_int_6;
			}
			double_1 = double_2 * double_4;
			char_1 = char_1 + char_1;
			double_2 = double_3 + double_3;
			double_3 = double_4;
			short_3 = short_1 + short_1;
			float_1 = float_2;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
			char controller4vul_884[2];
			fgets(controller4vul_884 ,2 ,stdin);
			if( strcmp( controller4vul_884, "K") < 0)
			{
				char char_3 = 1;
				char controller4vul_885[3];
				fgets(controller4vul_885 ,3 ,stdin);
				if( strcmp( controller4vul_885, "ul") < 0)
				{
					v_osd_channellist_show_epg(unsigned_int_4,int_1,uni_para);

				}
				char_1 = char_3;
			}
		}
		unsigned_int_9 = unsigned_int_7 + unsigned_int_8;
	}
}
void v_osd_channellist_display( double parameter_1,int uni_para)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	v_osd_channellist_display_channels(int_1,uni_para);

	long_2 = long_1 * long_1;
	int_3 = int_2 * int_3;
	float_1 = float_1;
	double_1 = double_1 * double_1;
	float_1 = float_2 + float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	float_2 = float_2 + float_2;
}
int v_channels_getnext( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			char_1 = v_find_channel(int_1);

			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_2;
		}
	}
	return int_2;
	int_3 = v_channels_getfirst();

}
char v_find_channel( int parameter_1)
{
	char char_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	return char_1;
}
int v_channels_getprev( int parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int_1 = v_channels_getfirst();

	char_2 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	char_2 = v_find_channel(int_2);

}
int v_channels_getlast()
{
	int int_1 = 1;
	return int_1;
	int_1 = v_channels_getprev(int_1);

	int_1 = v_channels_getfirst();

}
int v_osd_channellist_selected_position( long parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	int_1 = v_channels_getlast();

}
int v_osd_process_key( unsigned int parameter_1,int parameter_2,int uni_para)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char_1 = char_1;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	char controller4vul_881[2];
	fgets(controller4vul_881 ,2 ,stdin);
	if( strcmp( controller4vul_881, ",") < 0)
	{
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_3 = 1;
		long long_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_6 = 1;
		float float_4 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_7 = 1;
		char controller4vul_882[2];
		fgets(controller4vul_882 ,2 ,stdin);
		if( strcmp( controller4vul_882, "#") > 0)
		{
			v_osd_channellist_display(double_1,uni_para);

			long_1 = long_1 * long_1;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
			float_1 = float_1 + float_1;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
			short_2 = short_1 + short_1;
			double_1 = double_2 * double_1;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
		if(1)
		{
			double double_4 = 1;
			double_2 = double_1;
			if(1)
			{
				long_2 = long_1 * long_1;
			}
			unsigned_int_2 = unsigned_int_6 + unsigned_int_6;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double_4 = double_3 * double_1;
			}
			double_4 = double_1;
		}
		if(1)
		{
			long_3 = long_3;
			double_3 = double_2 + double_2;
			float_2 = float_1 * float_2;
		}
		float_2 = float_3 + float_1;
		char_3 = char_1 * char_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_1 = int_1 + int_2;
			if(1)
			{
				double double_5 = 1;
				double_3 = double_5 + double_6;
			}
		}
		long_3 = long_2 * long_1;
		float_4 = float_2 * float_2;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_5;
		double_7 = double_3;
		if(1)
		{
			int_1 = int_2;
		}
		unsigned_int_2 = unsigned_int_4;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int_1 = int_1;
		}
		int_1 = int_2 * int_2;
		char_3 = char_2;
		double_6 = double_6 * double_3;
		unsigned_int_2 = unsigned_int_7 + unsigned_int_3;
		int_3 = int_2 * int_2;
		int_2 = int_3 * int_3;
	}
	return int_3;
}
long v_graphics_update_displayed_resource( double parameter_1,int parameter_2,char parameter_3,unsigned int parameter_4,long parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	v_gx_priv_flush(int_1);

	v_gx_priv_restore(int_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	v_gx_priv_save(double_1,unsigned_int_3);

	short_1 = short_1 * short_1;
	short_2 = short_1 * short_2;
	return long_1;
}
void v_graphics_resource_text_dimensions_ext( unsigned int parameter_1,int parameter_2,double parameter_3,short parameter_4,int parameter_5,short parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int_2 = int_1 * int_2;
	int_2 = int_2 + int_1;
	v_vgft_get_text_extents(unsigned_int_1,double_1,int_2,long_1,float_1,float_2,char_1);

	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_gx_priv_restore(int_3);

	int_3 = int_3 * int_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3;
	}
	short_1 = v_find_font(long_1,long_2);

	float_2 = float_2 * float_2;
	int_3 = int_2 + int_4;
	long_3 = long_2 * long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	int_6 = int_5 + int_6;
	v_gx_priv_save(double_1,unsigned_int_1);

}
char v_render_paragraph( double parameter_1,double parameter_2,int parameter_3,short parameter_4,short parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	short_3 = short_1 * short_2;
	int_3 = int_1 + int_2;
	v_graphics_resource_text_dimensions_ext(unsigned_int_1,int_3,double_1,short_4,int_2,short_2);

	long_1 = long_1;
	double_1 = double_1;
	return char_1;
	float_1 = v_graphics_resource_render_text_ext(double_1,long_2,short_1,long_2,long_3,short_5,unsigned_int_2,char_1,short_2,float_2,-1 );

}
double v_osd_show_eventinfo( int parameter_1,float parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_5 = 1;
	long long_4 = 1;
	short short_5 = 1;
	int int_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_1;
	int_3 = int_1 * int_2;
	float_1 = float_1;
	long_2 = long_1 + long_2;
	long_1 = long_3 * long_3;
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	char_1 = v_render_paragraph(double_2,double_2,int_4,short_1,short_2);

	short_2 = short_2 + short_3;
	unsigned_int_1 = v_utf8decode(char_2,char_3);

	short_3 = short_4;
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		double_2 = double_2 * double_3;
		float_2 = v_osd_draw_window(int_2,int_3,int_4,int_1,int_5);

		float_1 = v_graphics_resource_render_text_ext(double_1,long_1,short_1,long_4,long_1,short_5,unsigned_int_2,char_1,short_5,float_2,-1 );

		int_5 = int_4 + int_6;
		int_4 = int_2;
		float_3 = float_3 * float_4;
	}
	float_3 = float_4 + float_2;
	long_1 = long_4 + long_2;
	if(1)
	{
		long long_5 = 1;
		if(1)
		{
			long_2 = long_5 + long_2;
		}
		if(1)
		{
			short_3 = short_4;
		}
		if(1)
		{
			long_1 = long_5 * long_3;
		}
		double_2 = double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char_3 = char_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
		unsigned_int_2 = unsigned_int_5;
		char_3 = char_3 * char_2;
	}
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_3 = double_4 * double_1;
		int_2 = int_5 * int_5;
		int_4 = int_5 + int_3;
		int_3 = int_4 + int_6;
		double_3 = double_5 * double_6;
		if(1)
		{
			int int_7 = 1;
			int_5 = int_2 + int_2;
			char_3 = char_1 + char_2;
			int_7 = int_1 + int_6;
			int_5 = int_2;
		}
	}
	return double_3;
}
char v_osd_show_time( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int_2 = int_1 * int_1;
	int_2 = int_1 * int_2;
	float_1 = v_osd_draw_window(int_1,int_1,int_1,int_2,int_3);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_1;
	char_2 = char_1 * char_1;
	float_1 = v_graphics_resource_render_text_ext(double_1,long_1,short_1,long_1,long_1,short_3,unsigned_int_1,char_2,short_3,float_1,-1 );

	int_4 = int_3 + int_3;
	double_1 = double_1;
	char_2 = char_2 + char_1;
	int_3 = int_3 + int_4;
	char_1 = char_2 * char_3;
	float_4 = float_2 * float_3;
	char_1 = char_3;
	return char_1;
}
void v_draw_line( float parameter_1,double parameter_2,float parameter_3,double parameter_4,int parameter_5,double parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_5 = 1;
	char char_3 = 1;
	long long_5 = 1;
	double double_6 = 1;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	double_2 = double_3 * double_3;
	char_1 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		double double_4 = 1;
		v_float_from_26_6(double_1);

		long_2 = long_1 * long_1;
		if(1)
		{
		}
		double_4 = double_2 + double_4;
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			long long_3 = 1;
			long long_4 = 1;
			int_4 = int_3 + int_2;
			if(1)
			{
				double_2 = double_5 + double_4;
			}
			char_2 = char_1;
			long_4 = long_3 * long_3;
		}
		double_4 = double_4 + double_5;
	}
	char_3 = char_2 * char_2;
	long_5 = long_5 * long_1;
	double_6 = double_5 * double_3;
}
void v_vgft_font_draw( unsigned int parameter_1,long parameter_2,char parameter_3,double parameter_4,short parameter_5,int parameter_6)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	int int_3 = 1;
	float_1 = float_1;
	int_1 = int_2;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
		if(1)
		{
			double_3 = double_1 * double_2;
			double_3 = double_1 * double_3;
			v_float_from_26_6(double_2);

			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			int int_4 = 1;
			v_draw_line(float_2,double_1,float_1,double_3,int_3,double_3);

			int_4 = int_1 + int_3;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
}
void v_line_extents( unsigned int parameter_1,short parameter_2,float parameter_3,char parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_1 * char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "}") > 0)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 * int_2;
		if(1)
		{
		}
		if(1)
		{
			double double_2 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			double_2 = double_1 + double_2;
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				short_3 = short_1 + short_2;
			}
			char_4 = char_4;
			unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
		}
		char_3 = char_2 + char_3;
		int_2 = int_2 * int_2;
	}
	v_float_from_26_6(double_1);

}
void v_vgft_get_text_extents( unsigned int parameter_1,double parameter_2,int parameter_3,long parameter_4,float parameter_5,float parameter_6,char parameter_7)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2 + int_3;
	int_3 = int_2;
	long_1 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char_2 = char_1 * char_1;
		if(1)
		{
			int int_5 = 1;
			float float_2 = 1;
			float float_3 = 1;
			v_line_extents(unsigned_int_3,short_1,float_1,char_2,int_4);

			int_5 = int_1 + int_2;
			float_3 = float_2 + float_1;
			float_1 = float_3;
			if(1)
			{
				char_1 = char_3 + char_3;
			}
		}
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_2 = long_3 + long_4;
		}
		double_2 = double_1 * double_1;
	}
	char_3 = char_4 * char_5;
	v_float_from_26_6(double_3);

	double_5 = double_4 * double_4;
}
void v_float_from_26_6( double parameter_1)
{
}
short v_convert_contour( int parameter_1,int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	int int_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	short short_4 = 1;
	int int_11 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		double double_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double_1 = double_1 + double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			int_3 = int_1 + int_2;
			double_3 = double_1 * double_2;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			unsigned_int_5 = unsigned_int_6 * unsigned_int_1;
			unsigned_int_7 = unsigned_int_5;
		}
		if(1)
		{
			if(1)
			{
				double_4 = double_2 * double_3;
				int_2 = int_3 + int_4;
				int_5 = int_2 * int_5;
			}
			if(1)
			{
				if(1)
				{
					int_6 = int_3 + int_2;
					short_2 = short_1 * short_1;
					unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
				}
				if(1)
				{
					double_1 = double_3 + double_2;
					short_2 = short_3 * short_1;
					short_3 = short_2;
				}
			}
		}
		if(1)
		{
			if(1)
			{
				double double_5 = 1;
				double_5 = double_4;
			}
			if(1)
			{
				if(1)
				{
					int int_7 = 1;
					unsigned int unsigned_int_8 = 1;
					unsigned int unsigned_int_9 = 1;
					unsigned int unsigned_int_10 = 1;
					int_7 = int_5 * int_4;
					unsigned_int_1 = unsigned_int_5 * unsigned_int_6;
					double_4 = double_4 * double_3;
					unsigned_int_9 = unsigned_int_8 * unsigned_int_3;
					int_8 = int_8 * int_4;
					unsigned_int_1 = unsigned_int_10 * unsigned_int_10;
					short_1 = short_1;
					unsigned_int_1 = unsigned_int_1 * unsigned_int_9;
				}
			}
		}
		double_2 = double_3;
		int_10 = int_8 * int_9;
		unsigned_int_11 = unsigned_int_4;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char_1 = char_1 + char_1;
		if(1)
		{
			double_2 = double_1 + double_4;
			unsigned_int_11 = unsigned_int_6 + unsigned_int_7;
			v_float_from_26_6(double_1);

			long_2 = long_1 + long_1;
		}
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_3 = long_2 * long_1;
			long_4 = long_2;
			short_2 = short_4 * short_3;
		}
		int_10 = int_6 + int_1;
		int_9 = int_1 + int_8;
	}
	int_11 = int_6 * int_3;
	return short_4;
}
unsigned int v_convert_outline( unsigned int parameter_1,int parameter_2,double parameter_3,short parameter_4,short parameter_5)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	short_1 = v_convert_contour(int_1,int_2,short_2);

	int_1 = int_3 + int_4;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		long_2 = long_1 * long_1;
		long_3 = long_1 * long_2;
	}
	int_5 = int_2 + int_1;
	unsigned_int_5 = unsigned_int_4;
	short_3 = short_2 + short_1;
	return unsigned_int_1;
}
float v_vgft_font_convert_glyphs( float parameter_1,short parameter_2,short parameter_3,unsigned int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		short_2 = short_1 * short_2;
		unsigned_int_1 = v_convert_outline(unsigned_int_2,int_1,double_1,short_2,short_1);

		v_float_from_26_6(double_1);

		double_3 = double_2 * double_3;
	}
	return float_1;
}
void v_vgft_font_term( int parameter_1)
{
	double double_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "!|") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_2;
	}
	double_1 = double_1 + double_1;
}
float v_vgft_font_load_mem( double parameter_1,long parameter_3)
{
	float float_1 = 1;
	if(1)
	{
	}
	return float_1;
}
float v_vgft_font_init()
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	return float_1;
}
short v_find_font( long parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	float float_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	v_vgft_font_term(int_1);

	int_1 = int_2 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	double_2 = double_3 * double_4;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	double_2 = double_4 * double_5;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	float_1 = v_vgft_font_convert_glyphs(float_1,short_1,short_2,unsigned_int_2);

	float_2 = float_1;
	if(1)
	{
		long long_1 = 1;
		char_3 = char_1 * char_1;
		long_1 = long_1 + long_2;
		int_3 = int_2 + int_2;
	}
	int_1 = int_4 * int_1;
	if(1)
	{
		short_2 = short_3 + short_1;
		char_1 = char_1 + char_3;
		double_2 = double_1 + double_1;
	}
	float_3 = v_vgft_font_init();

	int_1 = int_3;
	float_1 = v_vgft_font_load_mem(double_1,long_2);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	return short_3;
}
void v_gx_priv_render_text( float parameter_1,int parameter_2,int parameter_3,long parameter_4,double parameter_5,int parameter_6,double parameter_7,float parameter_8,float parameter_9,int parameter_10,char parameter_11,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_6 = 1;
	short short_7 = 1;
	int int_4 = 1;
	short short_8 = 1;
	double double_5 = 1;
	short short_9 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1 * short_2;
	float_1 = float_2;
	int_1 = int_2 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_3;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
	}
	short_4 = short_2 * short_3;
	float_1 = float_1 * float_3;
	double_1 = double_2;
	if(1)
	{
		double_2 = double_1 + double_3;
		float_3 = float_3;
	}
	if(1)
	{
		int_2 = int_3;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_2;
	}
	char controller4vul_887[2];
	fgets(controller4vul_887 ,2 ,stdin);
	if( strcmp( controller4vul_887, "6") < 0)
	{
		short short_5 = 1;
		short_1 = short_3 * short_5;
		unsigned_int_5 = unsigned_int_4;
		short_2 = short_5 + short_1;
		short_7 = short_4 + short_6;
		double_1 = double_3 + double_2;
		int_4 = int_3;
		char controller4vul_888[3];
		fgets(controller4vul_888 ,3 ,stdin);
		if( strcmp( controller4vul_888, "5d") < 0)
		{
			v_gx_priv_colour_to_paint(unsigned_int_1,short_1,uni_para);

			double_2 = double_2 * double_3;
			short_1 = short_8 * short_4;
			if(1)
			{
				double double_4 = 1;
				double_4 = double_3 * double_3;
				double_2 = double_3 + double_2;
			}
		}
	}
	int_2 = int_3;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_3 = unsigned_int_6;
		int_3 = int_4 + int_3;
	}
	int_1 = int_3 * int_4;
	double_2 = double_5 * double_5;
	float_2 = float_1;
	double_5 = double_1 * double_2;
	short_6 = short_7 + short_8;
	short_9 = short_6 * short_4;
	long_2 = long_1 * long_2;
	long_3 = long_3 * long_2;
	long_2 = long_2;
}
float v_graphics_resource_render_text_ext( double parameter_1,long parameter_2,short parameter_3,long parameter_4,long parameter_5,short parameter_6,unsigned int parameter_7,char parameter_8,short parameter_9,float parameter_10,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	v_gx_priv_render_text(float_1,int_1,int_2,long_1,double_1,int_2,double_2,float_1,float_2,int_2,char_1,uni_para);

	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return float_1;
}
float v_osd_draw_window( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 + int_1;
	long_2 = long_1 + long_2;
	float_1 = float_1 * float_1;
	int_1 = v_graphics_resource_fill(double_1,short_1,unsigned_int_1,long_3,float_1,double_2);

	char_1 = char_1 + char_2;
	return float_2;
}
int v_osd_show_channelname( short parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	long long_4 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	long_3 = long_1 + long_2;
	float_1 = v_osd_draw_window(int_1,int_2,int_3,int_4,int_4);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_4 + int_2;
	double_3 = double_1 * double_2;
	float_1 = v_graphics_resource_render_text_ext(double_4,long_2,short_1,long_3,long_4,short_2,unsigned_int_2,char_1,short_1,float_1,-1 );

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	int_5 = int_5;
	int_1 = int_1 + int_4;
	double_5 = double_2;
	double_7 = double_6 * double_1;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	return int_2;
}
unsigned int v_utf8decode( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_1;
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	return unsigned_int_3;
}
void v_event_dump()
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	double double_3 = 1;
	char char_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char_1 = char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "r_") < 0)
	{
		unsigned int unsigned_int_3 = 1;
		double_1 = double_1 * double_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	long_1 = long_2;
	double_1 = double_1 + double_2;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	char_1 = char_2 * char_3;
	float_1 = float_1 * float_1;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
	char_2 = char_4 * char_4;
	double_1 = double_3;
	double_2 = double_3 * double_3;
	char_3 = char_4 + char_5;
	double_3 = double_3 + double_3;
	double_3 = double_1;
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	double_3 = double_4 * double_5;
}
int v_event_copy( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_3 = v_event_get_nolock(int_3,int_4);

	long_1 = long_1 + long_1;
	if(1)
	{
		int int_5 = 1;
		int_4 = int_5 + int_4;
	}
	float_1 = float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int_3 = int_3;
	}
	if(1)
	{
		long_2 = long_2;
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	long_3 = long_1 + long_2;
	return int_1;
}
void v_channels_getnexteventid( int parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int_3 = int_1 * int_2;
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		float_2 = float_2 * float_1;
	}
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_3;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3 * double_2;
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_4 + float_1;
	}
}
void v_osd_show_info( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	int int_7 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_8 = 1;
	float float_3 = 1;
	long long_3 = 1;
	char char_3 = 1;
	double_1 = v_get_time();

	float_2 = float_1 + float_1;
	v_channels_getnexteventid(int_1,char_1,int_2);

	int_2 = int_2 * int_3;
	int_2 = int_1;
	int_4 = int_1 * int_2;
	v_channels_geteventid(int_1,char_1,int_3);

	int_3 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_5 = int_3 * int_4;
	v_event_dump();

	int_2 = int_3 * int_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_event_free(short_1);

	long_1 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	int_6 = int_1 + int_3;
	int_2 = int_4 + int_2;
	int_3 = v_event_copy(char_1,int_1);

	long_1 = v_graphics_update_displayed_resource(double_2,int_3,char_2,unsigned_int_5,long_2);

	short_2 = short_1 + short_2;
	int_1 = int_1 * int_4;
	unsigned_int_5 = v_channels_getname(int_7);

	double_4 = double_2 + double_3;
	double_2 = double_5 + double_2;
	double_7 = double_5 + double_6;
	double_8 = double_4 * double_5;
	double_4 = double_1 + double_9;
	double_8 = v_osd_show_eventinfo(int_8,float_3,float_1);

	double_6 = double_8 * double_4;
	long_2 = long_3 + long_3;
	int_6 = v_channels_getlcn(int_1);

	int_1 = int_6 + int_8;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	}
	int_1 = v_osd_show_channelname(short_2,short_1);

	char_3 = v_osd_show_time(char_1);

	int_2 = int_3 * int_4;
	double_5 = double_2 * double_5;
	unsigned_int_5 = v_utf8decode(char_1,char_2);

}
int v_event_find_hd_version( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	int int_5 = 1;
	long long_2 = 1;
	int int_6 = 1;
	char_2 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 * int_2;
	double_2 = double_1 * double_1;
	int_4 = int_2 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
			long_1 = long_1;
			char controller_2[2];
			fgets(controller_2 ,2 ,stdin);
			if( strcmp( controller_2, "D") == 0)
			{
				short short_1 = 1;
				unsigned_int_2 = v_event_get_nolock(int_4,int_3);

				short_1 = short_1 * short_1;
			}
		}
	}
	int_5 = v_channels_gettype(int_2);

	long_2 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	return int_6;
}
void v_channels_geteventid( int parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1 * short_1;
	double_1 = double_1 * double_2;
}
int v_channels_gettype( int parameter_1)
{
	int int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "_") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = double_2;
		unsigned_int_1 = unsigned_int_2;
	}
	return int_1;
}
char v_get_actual_channel( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	v_channels_geteventid(int_1,char_1,int_2);

	double_1 = double_1 + double_2;
	int_2 = v_event_find_hd_version(int_3,int_1);

	unsigned_int_1 = v_channels_getname(int_3);

	int_4 = int_2 + int_2;
	if(1)
	{
		double_2 = double_1 + double_2;
		int_5 = v_channels_getlcn(int_1);

		double_1 = double_2 + double_2;
		int_4 = v_channels_gettype(int_1);

		int_5 = int_1 + int_5;
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char_1 = char_2 * char_3;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		}
	}
	return char_4;
}
int v_channels_getfirst()
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_1 + int_1;
	return int_2;
}
int v_channels_getid( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_3 = 1;
	float float_5 = 1;
	double double_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_8 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_3 = float_1 + float_2;
	char_1 = char_2;
	long_1 = long_1;
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		int_1 = int_1 + int_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_5;
		double_1 = double_1;
	}
	if(1)
	{
		int_1 = int_2 + int_3;
		int_1 = int_2 + int_2;
	}
	long_3 = long_2 + long_2;
	double_1 = double_2;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_6 + unsigned_int_7;
	long_3 = long_1 + long_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		double double_4 = 1;
		long long_5 = 1;
		char char_6 = 1;
		float float_6 = 1;
		float float_7 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_11 = 1;
		double double_5 = 1;
		char_1 = char_3 + char_2;
		double_1 = double_1 * double_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_4 = 1;
			char char_4 = 1;
			int int_4 = 1;
			int int_7 = 1;
			short_1 = short_1 + short_2;
			double_4 = double_2 * double_3;
			if(1)
			{
				int int_5 = 1;
				if(1)
				{
					if(1)
					{
						float_4 = float_1 * float_2;
						char_1 = char_3;
						if(1)
						{
							char_3 = char_1 * char_4;
							if(1)
							{
								unsigned_int_7 = unsigned_int_5 * unsigned_int_1;
							}
							if(1)
							{
								char char_5 = 1;
								char_3 = char_4 + char_5;
							}
							if(1)
							{
								short_2 = short_2;
							}
						}
						if(1)
						{
							int_4 = int_3 + int_4;
							if(1)
							{
								int_2 = int_2 * int_2;
							}
							if(1)
							{
								unsigned int unsigned_int_8 = 1;
								unsigned_int_7 = unsigned_int_8 * unsigned_int_4;
							}
							if(1)
							{
								int_5 = int_3 + int_5;
							}
						}
					}
				}
				if(1)
				{
					double_4 = double_2 * double_2;
					if(1)
					{
						int_5 = int_4 * int_3;
						if(1)
						{
							double_2 = double_4 + double_3;
						}
						if(1)
						{
							int_3 = int_6 * int_5;
						}
						if(1)
						{
							int_5 = int_3;
						}
					}
				}
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						char_1 = char_4 + char_2;
						long_1 = long_5;
						if(1)
						{
							unsigned int unsigned_int_9 = 1;
							int_7 = int_3 * int_6;
							if(1)
							{
								unsigned_int_10 = unsigned_int_9 * unsigned_int_10;
							}
							if(1)
							{
								unsigned_int_3 = unsigned_int_3 + unsigned_int_9;
							}
							if(1)
							{
								float_4 = float_2 * float_3;
							}
						}
						if(1)
						{
							long_1 = long_2 + long_5;
							if(1)
							{
								long_1 = long_3 * long_1;
							}
							if(1)
							{
								unsigned_int_5 = unsigned_int_10;
							}
							if(1)
							{
								unsigned_int_3 = unsigned_int_1 + unsigned_int_7;
							}
						}
					}
				}
				if(1)
				{
					char_3 = char_6 + char_6;
					if(1)
					{
						int_1 = int_4 * int_1;
						if(1)
						{
							long_1 = long_3;
						}
						if(1)
						{
							short_3 = short_2 + short_3;
						}
						if(1)
						{
							long_4 = long_1 + long_2;
						}
					}
				}
			}
			int_4 = int_7 + int_7;
			if(1)
			{
				char char_7 = 1;
				float_6 = float_5 + float_1;
				char_4 = char_2 + char_7;
			}
		}
		float_7 = float_6 + float_7;
		char_2 = char_6 + char_3;
		float_1 = float_2 * float_3;
		long_2 = long_6 + long_5;
		unsigned_int_5 = unsigned_int_11 + unsigned_int_7;
		double_1 = double_2 + double_3;
		double_2 = double_4 + double_1;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
		double_1 = double_2;
		unsigned_int_7 = unsigned_int_6;
		double_5 = double_1 * double_1;
		double_2 = double_1 * double_3;
		double_1 = double_5 + double_3;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			double_6 = double_3;
		}
		if(1)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				float_3 = float_3 + float_1;
			}
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				float_5 = float_3 * float_3;
			}
		}
		if(1)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				int_6 = int_1 * int_6;
			}
		}
	}
	double_3 = double_3 + double_1;
	short_5 = short_1 + short_4;
	if(1)
	{
		unsigned_int_1 = unsigned_int_10;
		short_1 = short_3 * short_2;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
		double_6 = double_3;
	}
	if(1)
	{
		double double_7 = 1;
		double_7 = double_6 * double_2;
		double_1 = double_2 * double_1;
	}
	return int_8;
}
void v_codec_stop( unsigned int parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = v_codec_stop0(unsigned_int_1,int_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
}
float v_convert4( unsigned int parameter_1,float parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "wd") < 0)
	{
	}
	char_2 = char_1 + char_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "b") < 0)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	return float_1;
}
unsigned int v_map_acodec( char parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_2;
	int_3 = int_2 * int_1;
	return unsigned_int_2;
}
double v_map_vcodec( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_1;
	return double_1;
}
unsigned int v_avplay_thread( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = v_map_acodec(char_1);

	int_2 = int_2 + int_2;
	long_2 = long_1 + long_1;
	v_codec_queue_add_item(short_1,short_2,int_3);

	unsigned_int_1 = unsigned_int_2;
	int_3 = v_msgqueue_get(char_1,int_2);

	short_1 = short_3 + short_1;
	double_1 = v_map_vcodec(long_3);

	float_2 = float_1 * float_1;
	double_2 = double_2 * double_2;
	v_codec_new_channel();

	float_1 = v_convert4(unsigned_int_3,float_1,int_1);

	v_codec_stop(unsigned_int_4);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
	float_1 = float_2;
	return unsigned_int_3;
}
void v_init_avplay( unsigned int parameter_1,double parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	v_msgqueue_init(float_1);

	double_2 = double_1 * double_2;
	double_2 = double_3 + double_1;
	int_1 = int_1 + int_2;
	int_1 = int_2;
	double_3 = double_4;
	int_2 = int_1 + int_1;
	short_2 = short_1 + short_1;
	unsigned_int_1 = v_avplay_thread(char_1);

	char_1 = char_1 + char_2;
}
int v_create_aac_codecdata( double parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char_2 = char_1 + char_1;
	char_2 = char_2 + char_1;
	short_1 = short_2;
	int_2 = int_1 + int_1;
	int_2 = int_3 * int_2;
	double_1 = double_1;
	return int_3;
}
unsigned int v_decode_packet_a52( float parameter_1,long parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	short_1 = short_2;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	float_1 = float_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	if(1)
	{
		int_3 = int_4 * int_3;
	}
	double_1 = double_1 + double_1;
	char_1 = char_1 * char_1;
	float_1 = float_2;
	double_2 = double_2 * double_2;
	double_2 = double_1;
	float_3 = float_1 * float_2;
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	long_1 = long_1 + long_1;
	short_2 = short_2 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		int int_6 = 1;
		if(1)
		{
			int int_5 = 1;
			int_5 = int_2 * int_3;
		}
		double_3 = double_1;
		int_6 = int_4 * int_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_2 = 1;
			long long_3 = 1;
			long long_4 = 1;
			long_2 = long_1;
			long_4 = long_3 + long_1;
		}
	}
	return unsigned_int_4;
}
int v_acodec_omx_thread( int parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	v_codec_queue_free_item(long_1,char_1);

	unsigned_int_1 = v_decode_packet_a52(float_1,long_2,short_1);

	char_2 = char_1 + char_1;
	return int_1;
	float_1 = v_codec_queue_get_next_item(long_2);

	unsigned_int_1 = v_get_next_buffer(long_2);

	float_2 = v_pts_to_omx(int_1);

	int_2 = v_create_aac_codecdata(double_1,int_1,int_1,int_3);

	v_codec_set_pts(int_1,short_2);

}
void v_acodec_omx_init( short parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_4 = 1;
	char_1 = char_1 + char_2;
	int_1 = v_acodec_omx_thread(int_1);

	char_3 = char_2;
	double_2 = double_1 * double_2;
	float_2 = float_1 * float_1;
	char_2 = char_3;
	v_codec_queue_init(unsigned_int_1);

	char_3 = char_1 * char_4;
}
float v_is_port_enabled( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double_2 = double_1 * double_1;
	double_1 = double_1 + double_2;
	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 + int_2;
	short_2 = short_1 * short_2;
	return float_1;
}
double v_omx_show_state( int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	long long_3 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_8 = 1;
	short_2 = short_1 * short_2;
	short_1 = short_1;
	double_2 = double_1 + double_1;
	short_1 = short_3 * short_3;
	long_2 = long_1 * long_1;
	double_1 = double_3 * double_4;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_3;
	double_4 = double_5;
	long_2 = long_3 + long_3;
	double_6 = double_4 * double_4;
	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_3 * double_3;
	int_1 = int_2;
	if(1)
	{
		int int_4 = 1;
		long_1 = long_2 + long_2;
		int_2 = int_1 + int_4;
		double_3 = double_6;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		long_3 = long_2 * long_2;
		double_2 = double_3 + double_6;
	}
	if(1)
	{
		int int_5 = 1;
		double double_7 = 1;
		int_3 = int_5;
		short_1 = short_2 + short_3;
		double_3 = double_7 + double_7;
	}
	return double_8;
}
void v_omx_free_buffers( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 + int_1;
	short_3 = short_1 * short_2;
	double_1 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_6 = 1;
		int_2 = int_2 * int_2;
		int_5 = int_3 + int_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			long long_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			if(1)
			{
				long_1 = long_2;
			}
			float_2 = float_1 * float_1;
			long_3 = long_2 + long_1;
			long_4 = long_3 * long_2;
			if(1)
			{
				short_1 = short_1 * short_2;
				if(1)
				{
					if(1)
					{
						double_2 = double_3;
					}
					if(1)
					{
						unsigned int unsigned_int_2 = 1;
						unsigned int unsigned_int_3 = 1;
						unsigned int unsigned_int_4 = 1;
						unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
						unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
					}
				}
				if(1)
				{
					if(1)
					{
						int_4 = int_4 * int_4;
					}
					if(1)
					{
						double_5 = double_1 * double_4;
						long_1 = long_4 * long_1;
					}
				}
				if(1)
				{
					double_1 = double_1 * double_4;
				}
			}
			if(1)
			{
				char_1 = char_1 + char_1;
			}
			if(1)
			{
				char char_3 = 1;
				unsigned int unsigned_int_5 = 1;
				char_3 = char_2 * char_3;
				if(1)
				{
					short_3 = short_3 * short_1;
				}
				unsigned_int_5 = unsigned_int_5 * unsigned_int_1;
			}
			double_2 = double_3 * double_2;
			if(1)
			{
				int_4 = int_2 * int_2;
			}
			if(1)
			{
				long_4 = long_4 + long_4;
			}
			char_1 = char_2 + char_1;
		}
		short_4 = short_3 * short_1;
		float_2 = float_3 + float_1;
		float_4 = float_4 + float_3;
		double_5 = double_2 * double_2;
		double_4 = double_6 + double_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int_5 = int_4 * int_4;
		}
		double_6 = double_2 * double_1;
		short_4 = short_3 + short_4;
		float_2 = float_1 + float_3;
		short_1 = short_2 + short_3;
		double_5 = double_5;
		double_2 = double_5 * double_3;
	}
}
short v_omx_flush_tunnel( float parameter_1,int parameter_2,long parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_1;
	char_2 = char_3 * char_4;
	return short_1;
	char_3 = v_omx_send_command_and_wait(short_1,unsigned_int_1,unsigned_int_2,int_1);

}
void v_omx_teardown_pipeline( short parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char_1 = v_omx_send_command_and_wait(short_1,unsigned_int_1,unsigned_int_1,int_1);

	double_1 = v_omx_show_state(int_1,int_1,int_1,int_2);

	float_1 = v_is_port_enabled(double_1,int_2);

	double_2 = double_3;
	short_1 = v_omx_flush_tunnel(float_1,int_3,long_1,int_1);

	float_2 = v_omx_send_command_and_wait0(unsigned_int_1,long_2,float_3,unsigned_int_2);

	v_omx_free_buffers(short_2,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_1 = v_get_next_buffer(long_1);

	int_4 = v_omx_send_command_and_wait1(short_2,int_3,short_1,char_2);

	float_2 = v_dumpport(short_1,int_1);

}
float v_pts_to_omx( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	double_2 = double_1 + double_2;
	double_2 = double_1 * double_3;
	short_1 = short_1 * short_1;
	float_1 = float_2;
	double_3 = double_1 + double_4;
	double_5 = double_1 * double_3;
	long_2 = long_1 * long_1;
	float_2 = float_3 * float_4;
	int_1 = int_1 + int_1;
	double_2 = double_5 + double_1;
	long_2 = long_1 * long_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		long_5 = long_4 * long_5;
		long_3 = long_1 + long_6;
	}
	char_2 = char_1 * char_1;
	int_1 = int_2 + int_3;
	int_2 = int_4 * int_5;
	short_2 = short_1;
	int_4 = int_5 * int_4;
	return float_2;
}
unsigned int v_get_next_buffer( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 + int_1;
	short_2 = short_1 * short_1;
	double_1 = double_1 * double_1;
	long_3 = long_1 * long_2;
	long_4 = long_3 * long_2;
	int_2 = int_1;
	short_2 = short_3 * short_1;
	int_3 = int_3 * int_1;
	int_3 = int_3 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_4 = long_2 + long_3;
	return unsigned_int_1;
}
int v_omx_get_free_buffer_count( unsigned int parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	return int_1;
}
void v_omx_alloc_buffers( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_4 = 1;
	double double_3 = 1;
	int_1 = int_2;
	int_3 = int_3;
	double_2 = double_1 + double_2;
	long_1 = long_1;
	int_3 = int_4 * int_4;
	double_2 = double_3 * double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char_3 = char_1 + char_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		double_4 = double_2 + double_2;
		double_5 = double_2 * double_4;
		float_1 = float_1 * float_2;
	}
	long_1 = long_1 + long_1;
}
float v_omx_config_pcm( double parameter_1,int parameter_2,int parameter_3,int parameter_4,char parameter_5)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	double double_7 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_3 = 1;
	char char_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	double double_8 = 1;
	float float_5 = 1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_1 * double_2;
	char_2 = char_1 * char_1;
	short_2 = short_1 + short_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_3;
	int_1 = int_3 * int_2;
	int_3 = int_1 * int_3;
	double_3 = double_3 * double_4;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_2 = double_3 * double_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	double_6 = double_1 + double_5;
	int_3 = int_2 + int_2;
	double_5 = double_2 * double_3;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	int_4 = int_1 + int_2;
	double_7 = double_4 + double_1;
	double_2 = double_7;
	float_1 = float_2;
	char_4 = char_3 + char_4;
	float_2 = float_2 * float_3;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	float_3 = float_1 + float_3;
	char_5 = char_1 * char_4;
	long_1 = long_2;
	double_3 = double_4 + double_1;
	double_5 = double_4;
	long_4 = long_2 + long_3;
	float_1 = float_4 * float_3;
	int_3 = int_2 + int_3;
	float_4 = float_3;
	double_8 = double_5 + double_4;
	return float_5;
}
int v_omx_setup_pipeline( float parameter_1,int parameter_2,char parameter_3,int parameter_4)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_4 = 1;
	char char_4 = 1;
	float float_5 = 1;
	int int_6 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_10 = 1;
	char char_5 = 1;
	char char_6 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_11 = 1;
	double double_12 = 1;
	char char_7 = 1;
	float float_6 = 1;
	long long_6 = 1;
	int int_7 = 1;
	short short_5 = 1;
	char char_8 = 1;
	float float_7 = 1;
	int int_8 = 1;
	char char_9 = 1;
	long_1 = long_1 + long_1;
	int_2 = int_1 * int_2;
	long_3 = long_1 + long_2;
	int_1 = int_1 + int_1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		char_1 = char_1 * char_2;
		int_2 = int_2;
	}
	double_1 = double_3 + double_4;
	double_5 = double_5 + double_3;
	if(1)
	{
		double double_7 = 1;
		long_2 = long_3 * long_2;
		unsigned_int_2 = unsigned_int_1;
		double_4 = double_1 + double_2;
		float_1 = float_1 + float_2;
		unsigned_int_2 = unsigned_int_2;
		long_3 = long_3 * long_1;
		long_3 = v_omx_init_component(float_2,unsigned_int_3,char_1);

		double_7 = double_6 * double_7;
		char_2 = char_1 + char_1;
		short_1 = short_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "rT") > 0)
	{
		int_1 = int_2 + int_3;
	}
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	int_5 = int_2 * int_4;
	char_3 = char_1;
	char_2 = v_omx_send_command_and_wait(short_2,unsigned_int_2,unsigned_int_5,int_4);

	float_2 = float_3 * float_4;
	double_6 = double_3 + double_4;
	short_2 = short_2 + short_1;
	short_4 = short_1 * short_3;
	long_1 = long_2 + long_4;
	char_1 = char_2 + char_4;
	long_3 = long_1 + long_3;
	short_2 = short_3 + short_1;
	double_2 = double_6 * double_2;
	v_omx_alloc_buffers(float_5,int_1);

	char_4 = char_2;
	int_6 = int_2 + int_2;
	double_2 = double_8 * double_4;
	int_5 = int_2 + int_6;
	double_9 = double_5 * double_1;
	long_4 = long_1 + long_3;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
	double_10 = double_10 * double_9;
	char_2 = char_1 + char_5;
	float_3 = v_omx_config_pcm(double_2,int_4,int_3,int_6,char_6);

	long_2 = long_1 * long_5;
	double_6 = double_9 + double_1;
	unsigned_int_7 = unsigned_int_5 + unsigned_int_7;
	double_12 = double_9 + double_11;
	float_1 = float_3 + float_4;
	int_3 = int_4 * int_1;
	char_3 = char_2 + char_7;
	float_1 = float_6 + float_5;
	long_6 = long_4;
	int_6 = int_1 + int_2;
	short_3 = short_4 + short_4;
	long_1 = long_4;
	int_6 = int_3 * int_1;
	int_4 = int_7 * int_7;
	double_8 = double_8 * double_4;
	int_4 = int_2 * int_5;
	double_2 = double_6 + double_9;
	double_9 = double_6 + double_4;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "p5") < 0)
	{
		double_10 = double_12 + double_6;
		double_5 = double_8 * double_11;
		float_3 = float_5 * float_4;
		short_1 = short_3 + short_4;
	}
	float_5 = v_omx_send_command_and_wait0(unsigned_int_2,long_1,float_1,unsigned_int_7);

	short_2 = short_1 * short_5;
	unsigned_int_7 = unsigned_int_6 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
	char_8 = char_3;
	unsigned_int_2 = unsigned_int_3;
	double_10 = double_11 * double_4;
	float_7 = float_3 + float_3;
	return int_8;
	int_8 = v_omx_send_command_and_wait1(short_1,int_3,short_2,char_9);

}
void v_omx_set_source_region( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int_1 = int_1 + int_1;
	int_1 = int_2 + int_2;
	float_2 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1;
	char_2 = char_1 + char_1;
	float_1 = float_2 + float_2;
	float_5 = float_3 + float_4;
	unsigned_int_2 = unsigned_int_2;
}
float v_codec_queue_get_next_item( long parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_3 = double_1 * double_2;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "S") > 0)
		{
		}
		if(1)
		{
			double_3 = double_2 + double_3;
		}
		double_2 = double_2 * double_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "}") < 0)
		{
		}
	}
	return float_1;
}
void v_omx_clock_set_speed( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short_1 = short_1;
	int_2 = int_1 + int_2;
	double_2 = double_1 + double_1;
	int_2 = int_3;
}
char v_vcodec_omx_thread( short parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	return char_1;
	v_omx_clock_set_speed(short_1,int_1);

	float_1 = v_codec_queue_get_next_item(long_1);

	v_codec_queue_free_item(long_1,char_1);

	v_omx_set_display_region(float_2,int_1,int_1,int_1,int_2);

	v_omx_set_source_region(long_2,int_2,int_2,int_1,int_1);

	int_1 = v_omx_setup_pipeline(float_3,int_3,char_2,int_3);

	int_2 = v_omx_get_free_buffer_count(unsigned_int_1);

	unsigned_int_1 = v_get_next_buffer(long_2);

	float_3 = v_pts_to_omx(int_1);

	char_1 = v_omx_send_command_and_wait(short_1,unsigned_int_1,unsigned_int_2,int_3);

	double_1 = v_get_time();

	v_omx_teardown_pipeline(short_2);

}
void v_codec_queue_init( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 * int_2;
	double_2 = double_1 * double_1;
	double_3 = double_2 + double_3;
	float_2 = float_1 + float_1;
	long_1 = long_1 * long_2;
	long_3 = long_2 * long_2;
	double_3 = double_4 * double_3;
	float_3 = float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
}
void v_vcodec_omx_init( long parameter_1,long parameter_2,char parameter_3)
{
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	char_1 = v_vcodec_omx_thread(short_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 * long_2;
	long_2 = long_3 * long_1;
	int_1 = int_1 + int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	v_codec_queue_init(unsigned_int_5);

	short_1 = short_1 * short_2;
	int_1 = int_1 + int_1;
}
void v_codec_resume( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_2;
}
void v_codec_send_message( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float_1 = float_2;
	if(1)
	{
		char_2 = char_1 + char_2;
		double_1 = double_1 * double_2;
	}
	int_1 = int_2;
	int_2 = int_1 * int_3;
	double_1 = double_2 + double_1;
	if(1)
	{
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char_2 = char_2 + char_2;
		long_1 = long_1 + long_1;
		short_1 = short_1 + short_2;
		int_2 = int_3 + int_2;
		long_1 = long_2 * long_3;
	}
	if(1)
	{
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double_3 = double_3 * double_1;
		unsigned_int_1 = unsigned_int_1;
		int_1 = int_1 * int_2;
		char_4 = char_3 * char_3;
	}
	char_2 = char_1 + char_1;
	float_3 = float_3;
}
void v_codec_pause( char parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_codec_send_message(float_1,int_1);

	int_2 = int_1 + int_1;
}
long v_do_pause( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	if(1)
	{
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "`e") > 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long_2 = long_1 * long_1;
			double_1 = double_2;
			v_codec_resume(char_1);

			unsigned_int_1 = unsigned_int_2;
			long_2 = long_3 * long_1;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			char_1 = char_2 + char_2;
			char_4 = char_1 * char_3;
			v_codec_pause(char_1);

			char_1 = char_4 + char_1;
			long_2 = long_1 * long_3;
		}
	}
	return long_1;
}
void v_codec_flush_queue( double parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	char_1 = char_1 + char_1;
	long_2 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		v_codec_queue_free_item(long_3,char_2);

		char_3 = char_2 + char_1;
	}
}
void v_codec_queue_add_item( short parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	long long_1 = 1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	int_1 = int_1 + int_2;
	if(1)
	{
		int int_3 = 1;
		double_2 = double_1 + double_1;
		int_4 = int_2 * int_3;
	}
	float_1 = float_1 * float_1;
	double_2 = double_2 * double_1;
	long_1 = long_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		if(1)
		{
			char char_1 = 1;
			double_1 = double_2 * double_2;
			unsigned_int_1 = unsigned_int_3;
			double_3 = double_2;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
			char_1 = char_1 + char_1;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_5 = 1;
			short_1 = short_2;
			long_3 = long_2 + long_1;
			double_1 = double_2 + double_3;
			int_5 = int_5 + int_1;
		}
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		float float_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float_2 = float_1 * float_1;
		double_5 = double_2 + double_4;
	}
	int_4 = int_1 + int_2;
}
unsigned int v_audio_lang_priority( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
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
	return unsigned_int_1;
}
int v_htsp_parse_subscriptionStart( float parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "a") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		int_1 = v_htsp_get_int(int_1,char_1,float_1);

		double_2 = double_1 + double_1;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	return int_1;
	int_2 = v_htsp_get_list(long_1,char_2,int_1,int_2);

	char_1 = v_get_uint32_be(int_3);

	v_htsp_get_string(int_4,char_1);

	unsigned_int_1 = v_audio_lang_priority(char_1);

}
void v_channels_gettvhid( int parameter_1,int parameter_2,int parameter_3)
{
}
unsigned int v_channels_getname( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
int v_channels_getlcn( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		double_2 = double_1 * double_1;
		int_2 = int_1 + int_2;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
	short_1 = short_1 * short_2;
	double_1 = double_1;
	unsigned_int_6 = unsigned_int_6;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	char_1 = char_1;
	double_1 = double_2 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short_1 = short_3 * short_2;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "X") > 0)
		{
			if(1)
			{
				float_1 = float_1 + float_2;
			}
			if(1)
			{
				float float_4 = 1;
				unsigned int unsigned_int_7 = 1;
				if(1)
				{
					float_2 = float_3 + float_4;
					short_1 = short_3 + short_2;
				}
				unsigned_int_3 = unsigned_int_3 * unsigned_int_7;
				float_4 = float_3;
				float_1 = float_1;
				double_2 = double_2;
				unsigned_int_3 = unsigned_int_1;
				unsigned_int_7 = unsigned_int_4 * unsigned_int_2;
			}
		}
		double_1 = double_3;
		if(1)
		{
			float float_5 = 1;
			float_1 = float_3 * float_5;
		}
		if(1)
		{
			double double_4 = 1;
			float_2 = float_2 + float_1;
			double_3 = double_4;
			char_1 = char_1;
		}
		int_2 = int_2 + int_1;
		char_3 = char_1 * char_2;
	}
	int_3 = int_3 + int_2;
	return int_1;
}
double v_get_time()
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char_2 = char_1 + char_1;
	double_1 = double_1 * double_1;
	int_3 = int_1 + int_2;
	int_3 = int_4 * int_4;
	short_2 = short_1 * short_2;
	return double_2;
}
void v_codec_set_pts( int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	int_2 = int_1 * int_2;
}
void v_codec_queue_free_item( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int_1 = int_1 * int_2;
		unsigned_int_1 = unsigned_int_2;
	}
	unsigned_int_2 = unsigned_int_3;
}
long v_codec_stop0( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	int_2 = int_1 + int_1;
	float_1 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char_3 = char_3 * char_1;
		double_2 = double_1 + double_2;
		short_1 = short_1 + short_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		int_1 = int_2 + int_1;
		int_3 = int_3 * int_2;
		v_codec_set_pts(int_2,short_2);

		double_4 = double_3 + double_2;
	}
	return long_1;
	v_codec_queue_free_item(long_2,char_2);

}
void v_codec_new_channel()
{
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int_1 = int_1 * int_1;
	long_1 = v_codec_stop0(unsigned_int_1,int_2);

}
int v_msgqueue_get( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int_1 = int_1;
	long_1 = long_2;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_2 + int_1;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	float_1 = float_2;
	if(1)
	{
		short_2 = short_1;
	}
	int_2 = int_2 * int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	long_1 = long_2 + long_1;
	unsigned_int_5 = unsigned_int_1;
	if(1)
	{
		float float_4 = 1;
		float_4 = float_1 + float_2;
	}
	long_1 = long_1 + long_2;
	short_1 = short_3 + short_4;
	if(1)
	{
		short_1 = short_3 * short_3;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 * int_3;
	}
	double_1 = double_1 * double_2;
	double_1 = double_2 + double_1;
	float_6 = float_3 + float_5;
	return int_2;
}
void v_channels_update( int parameter_1,int parameter_2,int parameter_3,char parameter_4,int parameter_5,char parameter_6,char parameter_7)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	float_2 = float_1 + float_1;
	char_1 = char_2;
	char_3 = char_3 * char_1;
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		char_3 = char_4 + char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float_2 = float_1 * float_2;
		int_2 = int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char_2 = char_1 * char_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		int_3 = int_2 + int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_1 = 1;
			double_1 = double_1 * double_1;
			short_1 = short_1 + short_2;
			char_4 = char_2 * char_1;
		}
		int_4 = int_3 * int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char_2 = char_2;
		}
		int_3 = int_1 + int_1;
		double_3 = double_2 + double_2;
		char_4 = char_4 * char_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		float float_3 = 1;
		unsigned int unsigned_int_4 = 1;
		v_channels_add(int_3,int_5,int_6,char_1,int_4,int_5,short_2);

		int_2 = int_1;
		if(1)
		{
			float_1 = float_2 * float_3;
			unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
			double_3 = double_3 * double_1;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double_4 = double_3 * double_4;
			}
		}
		if(1)
		{
			double_1 = double_2 * double_3;
		}
		float_2 = float_3 + float_1;
		unsigned_int_1 = unsigned_int_4;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_7 = 1;
		long_2 = long_1 + long_1;
		int_6 = int_7 + int_5;
		long_2 = long_2 * long_2;
		double_1 = double_2 + double_4;
	}
	if(1)
	{
		double double_5 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double_2 = double_2 * double_5;
		float_5 = float_4 + float_2;
		char_3 = char_1;
	}
}
void v_channels_add( int parameter_1,int parameter_2,int parameter_3,char parameter_4,int parameter_5,int parameter_6,short parameter_7)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_2;
}
int v_htsp_get_list( long parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	float_3 = float_1 * float_2;
	int_1 = int_1 + int_1;
	double_1 = double_1 * double_2;
	char_2 = char_1 * char_1;
	char_4 = char_1 + char_3;
	short_2 = short_1 * short_1;
	return int_1;
	char_1 = v_get_uint32_be(int_2);

}
void v_event_free( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	float_2 = float_1 * float_2;
	char_1 = v_event_free_items();

}
long v___list_del( short parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float_1 = float_1 + float_2;
	double_1 = double_1 * double_1;
	return long_1;
}
unsigned int v_list_del( double parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = v___list_del(short_1,long_2);

	long_4 = long_3 * long_4;
	short_2 = short_1 * short_2;
	float_1 = float_2;
	return unsigned_int_1;
}
void v_event_delete( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	unsigned_int_1 = v_list_del(double_1);

	unsigned_int_1 = unsigned_int_2;
	short_2 = short_1 + short_2;
	if(1)
	{
		double_1 = double_2;
		int_1 = int_2;
	}
	v_event_free(short_3);

	double_2 = double_1 * double_1;
	unsigned_int_1 = v_event_get_nolock(int_1,int_2);

}
long v___list_add( int parameter_1,long parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double_1 = double_2;
	int_1 = int_2;
	float_1 = float_2;
	float_3 = float_1 * float_1;
	return long_1;
}
double v_list_add( unsigned int parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_3 = 1;
	long_2 = long_1 + long_1;
	return double_1;
	long_2 = v___list_add(int_1,long_1,long_3);

}
short v_list_empty( int parameter_1)
{
	short short_1 = 1;
	return short_1;
}
int v_htsp_get_int64( short parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1;
	char_1 = v_get_uint32_be(int_1);

	int_3 = int_2 + int_1;
	int_4 = int_3 * int_3;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2 + long_1;
		if(1)
		{
			double_2 = double_1 + double_2;
		}
	}
	if(1)
	{
		double double_3 = 1;
		if(1)
		{
			long long_4 = 1;
			long_4 = long_2 * long_1;
		}
		double_2 = double_1 * double_3;
		if(1)
		{
			double_2 = double_3 * double_2;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			char_1 = char_1 * char_1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	return int_1;
}
char v_event_free_items()
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	if(1)
	{
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		char char_3 = 1;
		char_2 = char_2 * char_3;
	}
	return char_1;
}
unsigned int v_event_get_nolock( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short_3 = short_1 + short_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
int v_htsp_get_uint( long parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	return int_1;
	int_2 = v_htsp_get_int(int_3,char_1,float_1);

}
void v_process_event_message( char parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	char char_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_7 = 1;
	float float_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int_2 = int_1 * int_1;
	double_2 = double_1 * double_1;
	char_1 = v_event_free_items();

	double_1 = double_2 + double_2;
	int_2 = int_3 + int_1;
	int_3 = v_htsp_get_uint(long_1,char_1,int_3);

	short_2 = short_1 * short_1;
	double_3 = double_3;
	if(1)
	{
		float float_1 = 1;
		float_2 = float_1 * float_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "k") < 0)
	{
		char char_3 = 1;
		v_htsp_get_string(int_4,char_2);

		char_2 = char_1 * char_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
		int_4 = int_3 * int_1;
		char_1 = char_4 * char_1;
		if(1)
		{
			short_2 = short_2 + short_1;
		}
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, " :") > 0)
	{
		short_1 = v_list_empty(int_5);

		double_4 = v_list_add(unsigned_int_2,long_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		int_6 = v_htsp_get_int64(short_1,char_1,int_4);

		float_2 = float_2 * float_2;
		if(1)
		{
			char_5 = char_4 + char_1;
		}
	}
	float_2 = float_3 * float_4;
	char_5 = char_1 * char_6;
	int_4 = int_3 + int_4;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	unsigned_int_5 = v_event_get_nolock(int_7,int_4);

	float_4 = float_5 * float_5;
	short_3 = short_3;
	float_3 = float_3 + float_5;
	unsigned_int_5 = unsigned_int_6;
	unsigned_int_3 = unsigned_int_4;
	double_2 = double_5 * double_6;
	double_4 = double_5 * double_1;
	short_2 = short_4 * short_2;
	unsigned_int_3 = unsigned_int_6 * unsigned_int_5;
	long_2 = long_2 + long_1;
	short_2 = short_2 + short_3;
	if(1)
	{
		float float_6 = 1;
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_1 = unsigned_int_3;
			unsigned_int_1 = unsigned_int_7 + unsigned_int_8;
		}
		if(1)
		{
			char char_7 = 1;
			char_7 = char_1 * char_7;
		}
		float_2 = float_5 + float_6;
		short_2 = short_1 + short_4;
		if(1)
		{
			double double_7 = 1;
			double double_8 = 1;
			double_8 = double_7 * double_2;
		}
	}
	unsigned_int_7 = unsigned_int_7 * unsigned_int_3;
}
double v_process_message( char parameter_1,float parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	int int_5 = 1;
	char char_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	char char_4 = 1;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		double_3 = double_1 * double_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			int_1 = int_1 * int_1;
		}
	}
	if(1)
	{
		float float_1 = 1;
		long long_3 = 1;
		float float_3 = 1;
		v_channels_add(int_2,int_3,int_1,char_1,int_1,int_1,short_1);

		short_1 = short_1 * short_1;
		int_1 = v_htsp_get_list(long_1,char_1,int_3,int_4);

		float_1 = float_1;
		long_1 = long_2 + long_3;
		int_5 = v_htsp_get_int(int_1,char_2,float_2);

		float_3 = float_1 + float_2;
		v_event_delete(char_1,int_4);

		int_1 = int_5 * int_1;
		if(1)
		{
			double double_4 = 1;
			if(1)
			{
				short_1 = short_1;
			}
			if(1)
			{
				int_1 = int_4 * int_2;
			}
			if(1)
			{
				double_2 = double_2 + double_2;
			}
			double_1 = double_3 + double_4;
			if(1)
			{
				double_2 = double_3 * double_3;
			}
			if(1)
			{
				double double_5 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				int_3 = int_1 + int_5;
				char_2 = char_2 + char_2;
				if(1)
				{
					double_1 = double_2 + double_5;
				}
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
				int_3 = int_5 + int_2;
				short_1 = short_1 * short_1;
				char_2 = char_1 + char_2;
				char_1 = char_1 + char_1;
				unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
				long_2 = long_1 + long_2;
				if(1)
				{
					long long_4 = 1;
					long_2 = long_4 + long_3;
				}
				if(1)
				{
					if(1)
					{
						char_1 = char_2 + char_3;
					}
					if(1)
					{
						int_3 = v_htsp_get_uint(long_2,char_1,int_2);

						float_1 = float_4;
					}
					if(1)
					{
						double_1 = double_5 + double_4;
					}
					if(1)
					{
						v_channels_update(int_1,int_2,int_2,char_4,int_5,char_2,char_1);

						double_3 = double_4 * double_5;
						v_htsp_get_string(int_5,char_2);

						unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
					}
					int_2 = int_1 + int_1;
				}
			}
			if(1)
			{
				long long_5 = 1;
				long long_6 = 1;
				long_6 = long_5 + long_1;
			}
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_4 = unsigned_int_4;
			}
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
	char controller_24[2];
	fgets(controller_24 ,2 ,stdin);
	if( strcmp( controller_24, "v") > 0)
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
		float float_5 = 1;
		v_process_event_message(char_3,short_1);

		float_4 = float_4 * float_5;
	}
	return double_3;
}
int v_htsp_get_int( int parameter_1,char parameter_2,float parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char_1 = v_get_uint32_be(int_1);

	short_1 = short_1;
	int_2 = int_2 * int_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_1;
	}
	int_2 = int_1 + int_2;
	if(1)
	{
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_1 = char_2 * char_2;
		unsigned_int_3 = unsigned_int_3;
	}
	long_1 = long_1 * long_1;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	double_2 = double_2 * double_3;
	return int_3;
}
void v_hts_sha1_final( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	v_hts_sha1_update(double_1,unsigned_int_1,int_1);

	double_2 = double_1 + double_1;
	double_3 = double_2 + double_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
}
void v_hts_sha1_update( double parameter_1,unsigned int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = v_transform(int_1,short_1);

		int_3 = int_2 + int_3;
	}
	if(1)
	{
		double_2 = double_2 + double_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_1 * double_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int_3 = int_4 + int_3;
	}
}
void v_hts_sha1_init( char parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = int_1;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_2 * int_3;
	double_1 = double_1 + double_1;
	long_3 = long_1 + long_2;
}
int v_htsp_get_bin( long parameter_1,char parameter_2,short parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_2 = double_1 * double_1;
	double_2 = double_1 * double_2;
	double_1 = double_2 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_1 = v_get_uint32_be(int_2);

	int_2 = int_2 * int_2;
	return int_3;
}
void v_htsp_get_string( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, ".") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "xM") > 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			double double_4 = 1;
			long_2 = long_1 * long_1;
			int_1 = int_2;
			double_1 = double_4;
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 + char_2;
		}
		int_2 = int_2 + int_2;
		double_5 = double_3 * double_1;
		if(1)
		{
			float float_2 = 1;
			float_1 = float_2 + float_2;
		}
	}
	char_2 = v_get_uint32_be(int_3);

}
char v_get_uint32_be( int parameter_1)
{
	char char_1 = 1;
	return char_1;
}
int v_safe_recv( int parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		char_2 = char_1 + char_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		short_3 = short_1 + short_2;
		short_4 = short_5;
	}
	return int_1;
}
char v_do_htsp_recv_message( int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	int_1 = int_1;
	int_2 = int_1 + int_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		int_2 = v_safe_recv(int_2,double_2,int_2);

		char_1 = v_get_uint32_be(int_3);

		double_4 = double_2 + double_3;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	int_2 = int_1 * int_4;
	long_2 = long_1 + long_1;
	return char_1;
}
int v_htsp_recv_message( float parameter_1,int parameter_2,double parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	float_3 = float_1 * float_2;
	char_2 = char_1 * char_2;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		char_3 = v_do_htsp_recv_message(int_1,short_1);

		int_3 = int_1 + int_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
			double_3 = double_1 * double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double_3 = double_2 + double_1;
				if(1)
				{
					int int_4 = 1;
					int_1 = int_4 + int_4;
				}
			}
		}
		if(1)
		{
		}
	}
	if(1)
	{
		double_3 = double_1 * double_1;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				int_2 = int_3;
			}
		}
	}
	return int_3;
}
void v_htsp_destroy_message( short parameter_1)
{
	long long_1 = 1;
	long_1 = long_1 + long_1;
}
int v_htsp_send_message( char parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int_1 = int_1;
	double_1 = double_1 * double_1;
	long_2 = long_1 * long_1;
	return int_2;
}
void v_put_uint32_be( char parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 + double_2;
	double_1 = double_2 * double_2;
	float_2 = float_1 * float_2;
}
int v_htsp_create_message( long parameter_1,float parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_1 = 1;
		v_put_uint32_be(char_1,short_1);

		double_2 = double_1 + double_1;
		float_3 = float_1 + float_2;
		long_1 = long_1 + long_1;
	}
	return int_1;
}
int v_htsp_login( int parameter_1,int parameter_2,char parameter_3,char parameter_4)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	double double_2 = 1;
	float float_3 = 1;
	int int_6 = 1;
	long long_5 = 1;
	float float_4 = 1;
	char char_4 = 1;
	short short_3 = 1;
	int int_7 = 1;
	int_1 = v_htsp_get_int(int_1,char_1,float_1);

	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1;
	v_hts_sha1_update(double_1,unsigned_int_2,int_1);

	int_2 = int_1 + int_2;
	int_4 = int_1 * int_3;
	short_1 = short_2;
	v_htsp_get_string(int_4,char_1);

	char_3 = char_2 * char_2;
	if(1)
	{
		int_4 = int_3 + int_3;
	}
	int_1 = v_htsp_get_bin(long_3,char_3,short_2,int_4);

	float_1 = float_2 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		int_3 = v_htsp_send_message(char_3,int_5,unsigned_int_1);

		double_2 = double_2 * double_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	float_3 = float_3;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_5 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		long_3 = long_1;
		double_2 = double_2 + double_2;
		v_hts_sha1_final(double_2,short_1);

		double_4 = double_3 * double_1;
		double_4 = double_4 * double_2;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
			long long_4 = 1;
			long_2 = long_1 + long_4;
		}
		int_6 = v_htsp_create_message(long_5,float_4);

		float_4 = float_4;
		v_hts_sha1_init(char_4);

		int_2 = int_6 + int_4;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
		if(1)
		{
			short_2 = short_2 + short_3;
		}
		if(1)
		{
			short short_4 = 1;
			double double_5 = 1;
			short_4 = short_4 * short_1;
			double_3 = double_5 + double_1;
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				unsigned_int_6 = unsigned_int_5 + unsigned_int_1;
			}
			char_4 = char_1;
		}
		short_1 = short_2 + short_5;
		float_2 = float_1 * float_3;
	}
	return int_3;
	v_htsp_destroy_message(short_3);

	int_2 = v_htsp_recv_message(float_3,int_7,double_1,int_1);

}
float v_get_ip( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double_1 = double_1 + double_1;
	double_1 = double_2 * double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char_2 = char_1 + char_1;
		long_2 = long_1 * long_1;
	}
	return float_1;
}
char v_create_tcp_socket()
{
	int int_1 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_1 = int_2 * int_2;
		double_3 = double_1 * double_2;
	}
	return char_1;
}
int v_htsp_connect( double parameter_1,int parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	float_1 = v_get_ip(char_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	char_2 = v_create_tcp_socket();

	char_1 = char_1 + char_3;
	if(1)
	{
		int int_4 = 1;
		int_3 = int_4;
	}
	short_1 = short_1 + short_2;
	short_3 = short_3;
	short_1 = short_1 * short_1;
	short_6 = short_4 * short_5;
	if(1)
	{
		short short_7 = 1;
		char char_4 = 1;
		short_7 = short_1;
		char_3 = char_4 * char_1;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	float_1 = float_1 + float_1;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_2 + long_2;
	}
	return int_3;
}
long v_htsp_receiver_thread( unsigned int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	int int_6 = 1;
	float float_5 = 1;
	int_1 = v_htsp_connect(double_1,int_1);

	int_2 = v_htsp_create_message(long_1,float_1);

	v_codec_new_channel();

	int_1 = v_htsp_get_bin(long_1,char_1,short_1,int_3);

	v_codec_queue_add_item(short_1,short_2,int_1);

	int_3 = int_2 * int_4;
	int_5 = v_htsp_send_message(char_2,int_4,unsigned_int_1);

	v_msgqueue_add(long_1,int_3);

	int_2 = v_msgqueue_get(char_3,int_2);

	int_1 = v_htsp_parse_subscriptionStart(float_2,unsigned_int_2);

	int_3 = v_htsp_get_int64(short_3,char_1,int_3);

	v_codec_flush_queue(double_2);

	float_2 = float_3 + float_4;
	return long_2;
	int_1 = v_htsp_login(int_4,int_2,char_2,char_2);

	v_htsp_destroy_message(short_2);

	int_1 = v_htsp_recv_message(float_3,int_1,double_1,int_4);

	v_htsp_get_string(int_2,char_2);

	double_2 = v_process_message(char_1,float_2,char_3);

	double_1 = v_get_time();

	int_2 = v_channels_getlcn(int_1);

	unsigned_int_1 = v_channels_getname(int_2);

	v_channels_gettvhid(int_1,int_5,int_5);

	int_6 = v_htsp_get_int(int_3,char_2,float_5);

	long_1 = v_do_pause(int_2,int_4);

}
void v_htsp_init()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_2;
	int_2 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_1;
}
void v_omx_set_display_region( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 + double_1;
	int_1 = int_1 * int_1;
	int_3 = int_2 + int_2;
	double_4 = double_1 * double_3;
	double_2 = double_3 + double_3;
	int_3 = int_4 * int_1;
	int_2 = int_1 * int_3;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_5 * double_2;
	float_1 = float_1 * float_2;
	int_2 = int_2 + int_4;
}
float v_dumpport( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_6 = 1;
	float float_4 = 1;
	double_2 = double_1 * double_2;
	int_3 = int_1 * int_2;
	int_1 = int_2;
	short_2 = short_1 * short_1;
	char_1 = char_1;
	float_1 = float_1 * float_1;
	int_2 = int_3 * int_4;
	int_5 = int_2 + int_5;
	float_3 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_4 = char_2 + char_3;
	int_1 = int_1;
	int_3 = int_6 + int_1;
	return float_4;
}
int v_omx_send_command_and_wait1( short parameter_1,int parameter_2,short parameter_3,char parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float_1 = float_1 + float_2;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	float_1 = float_2 + float_3;
	if(1)
	{
	}
	char_1 = char_2;
	short_2 = short_1 + short_1;
	return int_1;
}
float v_omx_send_command_and_wait0( unsigned int parameter_1,long parameter_2,float parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_5 = 1;
	int_1 = int_2;
	int_2 = int_1 + int_1;
	float_3 = float_1 * float_2;
	int_4 = int_3 + int_3;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1 * long_1;
	int_5 = int_1 + int_2;
	return float_1;
}
char v_omx_send_command_and_wait( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char_2 = char_1 + char_2;
	float_1 = v_omx_send_command_and_wait0(unsigned_int_1,long_1,float_2,unsigned_int_1);

	int_1 = v_omx_send_command_and_wait1(short_1,int_1,short_2,char_3);

	char_3 = char_1;
	return char_1;
}
unsigned int v_omx_disable_all_ports( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int_2 = int_1 + int_1;
	char_1 = v_omx_send_command_and_wait(short_1,unsigned_int_1,unsigned_int_2,int_3);

	int_2 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_4;
	float_2 = float_1 * float_2;
	int_3 = int_4 + int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 + double_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
			}
		}
	}
	return unsigned_int_6;
}
char v_omx_fill_buffer_done( unsigned int parameter_1,char parameter_2,long parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long_1 = long_1 * long_2;
	return char_1;
}
int v_omx_empty_buffer_done( unsigned int parameter_1,short parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_1 * int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "S/") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_2 = double_1 + double_2;
		int_1 = int_1 + int_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	}
	return int_2;
}
char v_omx_event_handler( char parameter_1,double parameter_2,short parameter_3,double parameter_4,char parameter_5,long parameter_6)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_1 + long_2;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_1;
	long_3 = long_1 + long_4;
	long_4 = long_3 + long_2;
	float_2 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	int_2 = int_2 * int_1;
	double_4 = double_2 + double_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	double_2 = double_4 * double_1;
	char_1 = char_2 * char_1;
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		double_5 = double_3 + double_2;
		double_6 = double_4 * double_1;
		double_7 = double_3;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	int_2 = int_2;
	char_1 = char_1 * char_2;
	float_2 = float_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	int_1 = int_2;
	int_2 = int_1 + int_2;
	double_1 = double_2;
	return char_3;
}
long v_omx_init_component( float parameter_1,unsigned int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = double_2;
	unsigned_int_1 = v_omx_disable_all_ports(double_2);

	double_3 = double_2;
	float_2 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1;
	char_1 = v_omx_event_handler(char_1,double_1,short_1,double_4,char_2,long_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_2 * short_2;
	int_1 = int_1 + int_1;
	char_1 = v_omx_fill_buffer_done(unsigned_int_2,char_2,long_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	short_1 = short_2 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	float_3 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	int_1 = int_1 + int_2;
	int_2 = v_omx_empty_buffer_done(unsigned_int_5,short_1,long_1);

	double_6 = double_5 * double_4;
	return long_2;
}
double v_omx_setup_camera_pipeline( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double_2 = double_1 * double_1;
	int_3 = int_1 * int_2;
	float_1 = float_1 * float_1;
	char_1 = v_omx_send_command_and_wait(short_1,unsigned_int_1,unsigned_int_1,int_1);

	v_omx_set_display_region(float_1,int_4,int_2,int_1,int_3);

	int_4 = int_1 + int_1;
	long_1 = long_1 * long_2;
	return double_2;
	long_3 = v_omx_init_component(float_2,unsigned_int_2,char_2);

	float_1 = v_dumpport(short_2,int_1);

}
int v_graphics_update_end()
{
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	short_2 = short_1 * short_2;
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			short short_3 = 1;
			float_3 = float_1 * float_2;
			short_3 = short_1 * short_1;
			if(1)
			{
				int int_1 = 1;
				int_1 = int_1 + int_2;
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
					short_3 = short_2;
				}
			}
		}
	}
	return int_2;
}
double v_auto_size( long parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	long_3 = long_1 + long_2;
	return double_1;
}
float v_graphics_update_start()
{
	float float_1 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "e") > 0)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			char_3 = char_1 * char_1;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	return float_1;
}
int v_transform( int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return int_1;
}
void v_graphics_display_resource( int parameter_1,long parameter_2,long parameter_3,char parameter_4,short parameter_5,double parameter_6,double parameter_7,float parameter_8,float parameter_9)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_4 = 1;
	short short_5 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_7 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_2 = long_1 + long_1;
	int_1 = v_graphics_update_end();

	int_3 = int_2 * int_2;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
	v_gx_priv_flush(int_2);

	int_2 = int_3 + int_3;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	float_3 = float_1 + float_2;
	long_3 = long_2 + long_3;
	char_3 = char_1 + char_2;
	float_3 = float_2 + float_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		char char_4 = 1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_1;
		double_1 = double_2;
		unsigned_int_3 = unsigned_int_2;
		double_4 = double_3 + double_2;
		double_5 = double_3 + double_1;
		long_4 = long_2 * long_2;
		if(1)
		{
			float float_4 = 1;
			char char_5 = 1;
			char char_6 = 1;
			float_4 = float_3 + float_1;
			char_6 = char_4 * char_5;
			unsigned_int_1 = unsigned_int_3;
		}
		if(1)
		{
			double double_6 = 1;
			char_4 = char_3 + char_4;
			double_6 = double_3;
			char_2 = char_1;
			v_gx_priv_open_screen(unsigned_int_6,short_4);

			long_1 = long_4 * long_4;
			long_2 = long_1 * long_1;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_5 * unsigned_int_7;
		}
		short_1 = short_2 * short_2;
		float_1 = float_1 + float_3;
		int_3 = v_transform(int_4,short_5);

		float_2 = v_graphics_update_start();

		unsigned_int_6 = unsigned_int_7;
		int_2 = int_2 + int_1;
		double_2 = double_2 + double_4;
	}
	if(1)
	{
		float float_5 = 1;
		double_4 = v_auto_size(long_4,float_3);

		unsigned_int_7 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
		float_2 = float_2 + float_5;
		long_3 = long_1 * long_4;
	}
	long_3 = long_5 * long_6;
	double_7 = double_1 * double_7;
}
int v_graphics_resource_fill( double parameter_1,short parameter_2,unsigned int parameter_3,long parameter_4,float parameter_5,double parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_2;
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = v_gx_priv_resource_fill(double_2,char_1,unsigned_int_2,unsigned_int_1,float_1,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	v_gx_priv_restore(int_1);

	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	return int_1;
	v_gx_priv_save(double_2,unsigned_int_1);

}
void v_gx_priv_destroy_native_window()
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short_2 = short_1 + short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "q") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		double_3 = double_1 + double_2;
		float_1 = float_1;
		char_1 = char_1;
	}
	char_1 = v_gx_priv_release_screen();

	short_2 = short_2;
}
void v_gx_priv_flush( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_1 = double_1 * double_2;
	short_2 = short_1 * short_1;
	short_1 = short_3 * short_1;
}
void v_gx_priv_finish_native_window( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
}
void v_gx_priv_colour_to_paint( unsigned int parameter_1,short parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	if(uni_para == 495)
	{
		vul_var = vul_var + 1;
	}
	free(vul_var);
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	char_2 = char_1 + char_2;
}
char v_gx_priv_resource_fill( double parameter_1,char parameter_2,unsigned int parameter_3,unsigned int parameter_4,float parameter_5,char parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	v_gx_priv_colour_to_paint(unsigned_int_2,short_1,-1 );

	float_2 = float_1 + float_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long_2 = long_1 * long_1;
		char_1 = char_2;
	}
	return char_3;
}
char v_gx_priv_release_screen()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 * int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "?2") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		double_1 = double_1 + double_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	double_2 = double_1 * double_2;
	return char_1;
}
int v_gx_priv_create_native_window( short parameter_1,short parameter_2,float parameter_3,char parameter_4,short parameter_5)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	int_1 = int_1 * int_1;
	int_1 = int_1 * int_1;
	char_1 = char_1 * char_1;
	double_1 = double_1 + double_1;
	float_1 = float_1 * float_1;
	short_2 = short_1 * short_2;
	long_2 = long_1 + long_2;
	if(1)
	{
		char char_2 = 1;
		char_1 = v_gx_priv_release_screen();

		short_1 = short_2 + short_1;
		char_2 = char_1;
	}
	double_3 = double_2 + double_2;
	if(1)
	{
		double_3 = double_1 + double_3;
		short_2 = short_2 * short_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_3 + double_2;
	unsigned_int_3 = unsigned_int_1;
	double_4 = double_3 + double_4;
	int_3 = int_2 * int_2;
	int_2 = int_1 * int_4;
	double_3 = double_1 + double_1;
	double_6 = double_5 + double_1;
	int_3 = int_4 + int_5;
	unsigned_int_3 = unsigned_int_3;
	char_3 = char_3;
	if(1)
	{
		double double_7 = 1;
		int_2 = int_5 * int_5;
		v_gx_priv_open_screen(unsigned_int_2,short_2);

		double_1 = double_1 + double_7;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	unsigned_int_5 = unsigned_int_5 * unsigned_int_4;
	long_3 = long_1 * long_2;
	return int_1;
}
short v_gx_create_window( unsigned int parameter_1,float parameter_2,short parameter_3,int parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	short short_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_4 = 1;
	double double_8 = 1;
	double double_9 = 1;
	long long_5 = 1;
	char char_5 = 1;
	short short_4 = 1;
	double double_10 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_12 = 1;
	float float_5 = 1;
	double_2 = double_1 * double_1;
	double_1 = double_3 * double_1;
	char_1 = v_gx_priv_resource_fill(double_3,char_2,unsigned_int_1,unsigned_int_1,float_1,char_2);

	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	long_1 = long_2;
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	v_gx_priv_destroy_native_window();

	int_1 = int_1 + int_1;
	if(1)
	{
		int_1 = v_gx_priv_create_native_window(short_1,short_2,float_2,char_3,short_1);

		double_5 = double_1 * double_4;
	}
	int_2 = int_2 + int_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
		unsigned_int_6 = unsigned_int_4;
		long_3 = long_3;
	}
	short_3 = short_3 * short_3;
	double_7 = double_5 * double_6;
	int_4 = int_3 + int_1;
	float_3 = float_3 * float_3;
	if(1)
	{
		long long_4 = 1;
		float_3 = float_2 + float_4;
		v_gx_priv_flush(int_2);

		char_4 = char_2 * char_4;
		long_3 = long_4;
	}
	double_9 = double_8 * double_3;
	long_2 = long_3 * long_5;
	float_2 = float_1;
	char_3 = char_5;
	short_1 = short_1 + short_4;
	double_10 = double_1;
	char_2 = char_3 + char_1;
	char_6 = char_1 + char_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_6 = unsigned_int_7 + unsigned_int_2;
	v_gx_priv_finish_native_window(double_5);

	v_gx_priv_restore(int_5);

	int_5 = int_4 * int_5;
	double_6 = double_4;
	double_6 = double_11 + double_11;
	unsigned_int_8 = unsigned_int_2 * unsigned_int_6;
	v_gx_priv_save(double_11,unsigned_int_8);

	double_12 = double_8;
	unsigned_int_3 = unsigned_int_3;
	float_4 = float_1 * float_5;
	return short_3;
}
void v_gx_priv_open_screen( unsigned int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 * char_2;
	if(1)
	{
		char char_4 = 1;
		double double_2 = 1;
		char_1 = char_4 + char_3;
		short_2 = short_1 * short_1;
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 * int_1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
			int_2 = int_1 * int_1;
		}
		unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
		double_4 = double_3 * double_1;
		short_2 = short_1;
	}
	int_2 = int_3 * int_2;
}
int v_graphics_get_display_size( long parameter_1,short parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	double_1 = double_1 + double_1;
	double_3 = double_2 + double_1;
	long_3 = long_1 + long_2;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		if(1)
		{
			int int_2 = 1;
			int_1 = int_1 + int_2;
		}
		double_3 = double_2 * double_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			short_3 = short_1 * short_2;
			float_2 = float_1 + float_1;
			float_1 = float_3 * float_4;
		}
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			v_gx_priv_open_screen(unsigned_int_2,short_4);

			int_1 = int_3 * int_4;
		}
	}
	return int_1;
}
void v_gx_priv_restore( int parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	short short_3 = 1;
	char_1 = char_1 + char_1;
	short_2 = short_1 * short_2;
	long_1 = long_1 + long_1;
	double_2 = double_1 + double_1;
	char_3 = char_2 + char_3;
	double_1 = double_3 * double_1;
	double_3 = double_1 + double_1;
	short_3 = short_2 + short_3;
	if(1)
	{
		char char_4 = 1;
		char_4 = char_1 + char_2;
	}
	short_1 = short_3 * short_2;
}
void v_vgft_term()
{
	float float_1 = 1;
	float_1 = float_1;
}
int v_vgft_init()
{
	int int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "qo") > 0)
	{
	}
	if(1)
	{
	}
	return int_1;
}
int v_gx_priv_font_init( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	short_2 = short_1 * short_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ",x") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_2 = 1;
		long_1 = long_1 + long_2;
		int_1 = v_vgft_init();

		int_4 = int_2 + int_3;
	}
	char_2 = char_1 * char_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
		int_4 = int_3 * int_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v_vgft_term();

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	return int_5;
}
short v_gx_egl_attrib_colours( float parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	int_2 = int_1 * int_1;
	short_1 = short_2;
	float_2 = float_1 + float_1;
	short_3 = short_4;
	double_1 = double_1 + double_1;
	double_2 = double_3;
	int_2 = int_2 * int_2;
	double_1 = double_1;
	short_3 = short_1;
	float_3 = float_3 * float_1;
	long_2 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_4 = 1;
		short short_5 = 1;
		float_1 = float_3 + float_4;
		short_5 = short_4 * short_2;
	}
	return short_1;
}
float v_create_context( double parameter_1,long parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 + char_2;
	long_1 = long_2;
	char_5 = char_2 * char_4;
	double_3 = double_1 * double_2;
	char_1 = char_4 + char_3;
	unsigned_int_2 = unsigned_int_2;
	short_1 = short_1 * short_1;
	long_4 = long_2 * long_3;
	short_1 = v_gx_egl_attrib_colours(float_1,short_2);

	char_2 = char_3 * char_3;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	short_3 = short_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	float_2 = float_1 * float_2;
	char_5 = char_4;
	short_1 = short_3 + short_2;
	return float_3;
}
void v_gx_priv_init()
{
	long long_1 = 1;
	long_1 = long_1 * long_1;
}
unsigned int v_gx_priv_initialise()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_5 = 1;
	long long_5 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	float float_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	long_3 = long_1 * long_2;
	int_2 = int_1 + int_2;
	int_3 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_4;
	double_2 = double_1 + double_2;
	int_2 = int_1 * int_2;
	int_2 = int_4 + int_3;
	long_1 = long_4 * long_4;
	int_2 = int_3;
	double_3 = double_3 * double_3;
	if(1)
	{
		double_4 = double_3 + double_4;
		float_1 = float_1 * float_1;
		short_1 = short_1;
	}
	double_1 = double_1 + double_5;
	if(1)
	{
		short short_2 = 1;
		float_1 = v_create_context(double_3,long_5,float_2);

		short_1 = short_2 * short_2;
		short_2 = short_2 + short_2;
		int_2 = int_4 * int_2;
	}
	char_1 = char_2;
	v_gx_priv_init();

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	float_1 = float_1 * float_2;
	int_4 = int_1;
	char_1 = char_3 + char_2;
	float_3 = float_3;
	double_4 = double_6 * double_4;
	if(1)
	{
		int_2 = int_3 * int_3;
	}
	double_3 = double_4 * double_5;
	int_4 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
			long_5 = long_3;
		}
	}
	double_5 = double_5 + double_7;
	return unsigned_int_6;
}
void v_gx_priv_save( double parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2;
	char_1 = char_1 * char_1;
	char_1 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	double_4 = double_3 * double_1;
	int_1 = int_1 * int_1;
	long_2 = long_1 * long_1;
	double_2 = double_3 + double_2;
	int_3 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
		float float_1 = 1;
		short short_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		float_1 = float_1 + float_1;
		short_2 = short_3 + short_1;
		int_5 = int_3 + int_4;
		char_1 = char_1 + char_2;
	}
}
int v_gx_graphics_init( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	unsigned_int_1 = v_gx_priv_initialise();

	float_1 = float_1 * float_1;
	double_2 = double_1 * double_2;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		v_gx_priv_save(double_2,unsigned_int_1);

		v_gx_priv_restore(int_2);

		long_1 = long_2;
	}
	int_1 = int_1 + int_1;
	return int_1;
	int_3 = v_gx_priv_font_init(char_1,int_4);

}
void v_osd_init( float parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	short short_3 = 1;
	long long_4 = 1;
	short short_4 = 1;
	char char_4 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	long long_5 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = v_gx_graphics_init(long_1,int_1);

	v_graphics_display_resource(int_1,long_1,long_1,char_1,short_1,double_1,double_1,float_1,float_1);

	char_1 = char_1 * char_1;
	short_1 = short_2 * short_2;
	long_2 = long_2;
	long_3 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_1;
	int_2 = int_1 + int_2;
	double_3 = double_3;
	long_1 = long_1;
	char_2 = char_2 * char_3;
	short_1 = v_gx_create_window(unsigned_int_3,float_2,short_1,int_2,unsigned_int_1);

	short_2 = short_3 + short_1;
	int_2 = v_graphics_get_display_size(long_4,short_4,int_1);

	int_2 = v_graphics_resource_fill(double_2,short_2,unsigned_int_2,long_2,float_2,double_3);

	char_1 = char_2 * char_4;
	int_3 = int_2 + int_2;
	float_4 = float_3 + float_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	int_4 = int_2 + int_4;
	long_1 = long_5 * long_5;
	char_4 = char_5 * char_2;
	unsigned_int_4 = unsigned_int_5;
}
char v_get_input_key( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				long long_4 = 1;
				long_1 = long_2;
				long_4 = long_1 + long_3;
			}
		}
	}
	return char_1;
}
double v_input_thread()
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	v_msgqueue_add(long_1,int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_1;
	char_1 = v_get_input_key(int_2);

	short_1 = short_1 + short_1;
	long_1 = long_2 + long_2;
	return double_1;
}
void v_input_init()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_2;
	int_1 = int_1;
	double_1 = v_input_thread();

}
void v_reset_stdin()
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
}
void v_events_init()
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float_1 = float_1 * float_2;
	short_2 = short_1 * short_1;
}
void v_channels_init()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_3 = double_1 + double_2;
	int_2 = int_1 + int_2;
}
int v_mpeg2_codec_enabled()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "5") < 0)
	{
	}
	return int_2;
}
short v_send_deck_status( int parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short_1 = short_1;
	char_3 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	return short_2;
}
long v_send_cec_version( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	long_1 = long_2 * long_4;
	return long_3;
}
long v_send_osd_name( long parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = double_1;
	double_1 = double_1;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	double_2 = double_2 + double_3;
	int_1 = int_1 * int_1;
	double_4 = double_5;
	return long_1;
}
unsigned int v_vc_cec_report_physicalAddress( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_2 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 + long_2;
	long_4 = long_3 + long_1;
	double_1 = double_1 * double_2;
	double_2 = double_2 + double_2;
	return unsigned_int_2;
}
void v_SetStreamPath( short parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_1;
	if(1)
	{
	}
	float_3 = float_1 + float_2;
}
unsigned int v_give_device_vendor_id()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_3 = char_1 * char_2;
	double_3 = double_1 * double_2;
	short_1 = short_1 * short_1;
	long_1 = long_1 + long_2;
	float_2 = float_1 + float_2;
	long_2 = long_1;
	return unsigned_int_1;
}
float v_give_device_power_status( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char_2 = char_1 * char_1;
	long_1 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_2;
	return float_1;
}
void v_msgqueue_add( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1;
		}
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	unsigned_int_1 = unsigned_int_2;
}
char v_cec_callback(char parameter_2,int parameter_3,int parameter_4,char parameter_5,int parameter_6)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	return char_1;
	v_msgqueue_add(long_1,int_1);

	float_1 = v_give_device_power_status(int_2);

	unsigned_int_1 = v_give_device_vendor_id();

	v_SetStreamPath(short_1);

	unsigned_int_2 = v_vc_cec_report_physicalAddress(int_3);

	long_2 = v_send_osd_name(long_1,unsigned_int_3);

	long_2 = v_send_cec_version(double_1);

	short_1 = v_send_deck_status(int_3);

}
long v_tv_service_callback(long parameter_2,float parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	double_1 = double_1 + double_2;
	float_1 = float_1 * float_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	return long_3;
}
int v_cec_thread()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short_3 = short_1 * short_2;
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
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	char controller_18[3];
	fgets(controller_18 ,3 ,stdin);
	if( strcmp( controller_18, "3[") == 0)
	{
	}
	long_1 = v_tv_service_callback(long_1,float_1,unsigned_int_1);

	char_1 = v_cec_callback(char_2,int_1,int_2,char_2,int_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return int_3;
}
int v_cec_init( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_2;
	int_2 = v_cec_thread();

	double_2 = double_1 + double_1;
	return int_2;
}
void v_usage()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 + int_1;
	double_2 = double_1 * double_1;
}
float v_resolve_callback( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,long parameter_4,long parameter_5,int parameter_6,long parameter_7,short parameter_8,double parameter_9,double parameter_10,char parameter_11,short parameter_12,short parameter_13)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short_2 = short_1 + short_2;
	long_1 = long_1 + long_1;
	int_1 = int_2;
	int_1 = int_2 + int_2;
	double_2 = double_1 * double_2;
	char_2 = char_1 + char_1;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_2 = 1;
		int_5 = int_3 + int_4;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_2 = double_3 * double_3;
	}
	double_2 = double_2;
	double_3 = double_1 * double_2;
	double_3 = double_3;
	unsigned_int_1 = unsigned_int_3;
	return float_1;
}
float v_browse_callback( float parameter_1,float parameter_2,int parameter_3,char parameter_4,long parameter_5,short parameter_6,short parameter_7,short parameter_8)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_3 = 1;
	long long_2 = 1;
	int int_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	long long_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	int_1 = int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	char_1 = char_1 * char_2;
	if(1)
	{
		long_1 = long_1;
	}
	double_1 = double_1 + double_2;
	double_3 = double_1 + double_2;
	float_1 = float_1;
	float_1 = v_resolve_callback(char_3,unsigned_int_2,unsigned_int_2,long_2,long_1,int_2,long_3,short_1,double_4,double_4,char_3,short_2,short_1);

	double_1 = double_2 + double_4;
	long_3 = long_4 + long_1;
	long_1 = long_2;
	long_1 = long_3 * long_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	return float_1;
}
short v_client_callback( char parameter_1,float parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short_1 = short_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		char_2 = char_1 + char_2;
		float_1 = float_1 + float_1;
	}
	return short_1;
}
int v_avahi_discover_tvh( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_4 = 1;
	long long_5 = 1;
	short short_2 = 1;
	int int_6 = 1;
	int_1 = int_1 + int_2;
	char_2 = char_1 + char_2;
	int_2 = int_2;
	long_3 = long_1 * long_2;
	if(1)
	{
		float_1 = float_1;
		int_3 = int_2 * int_3;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		float_3 = float_2 + float_1;
	}
	long_3 = long_4 * long_4;
	int_2 = int_3 * int_3;
	if(1)
	{
		char char_3 = 1;
		char_2 = char_2 + char_3;
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_5 = int_4 * int_2;
	}
	if(1)
	{
		double double_3 = 1;
		short_1 = v_client_callback(char_1,float_4,short_1);

		double_3 = double_1 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_5 = 1;
		unsigned_int_6 = unsigned_int_2 + unsigned_int_5;
		double_1 = double_2 + double_2;
		float_2 = v_browse_callback(float_3,float_2,int_3,char_4,long_5,short_1,short_2,short_1);

		float_2 = float_5 + float_2;
	}
	return int_6;
}
void v_dump_settings()
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_2;
	long_1 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_1 = 1;
			double double_3 = 1;
			float float_1 = 1;
			double double_4 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				double double_2 = 1;
				double_3 = double_1 + double_2;
				if(1)
				{
					float_1 = float_1;
				}
				if(1)
				{
					short_2 = short_1;
				}
			}
			if(1)
			{
				float_1 = float_1;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_1;
			}
			double_1 = double_4 * double_3;
		}
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
}
unsigned int v_parse_config( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_1 = v_cmdline_opt_find(float_1,int_1,double_1,int_2);

		long_1 = v_show_error(char_1,float_2,unsigned_int_1);

		short_3 = short_2 + short_2;
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
float v_show_usage( int parameter_1,unsigned int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_2;
	double_1 = double_1 * double_1;
	float_1 = float_1 + float_1;
	float_2 = float_2 + float_2;
	return float_1;
}
long v_show_error( char parameter_1,float parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1 * double_1;
	float_3 = float_1 * float_2;
	double_1 = double_2 * double_2;
	double_3 = double_1 + double_2;
	long_1 = long_1 * long_2;
	return long_1;
}
short v_cmdline_opt_find( float parameter_1,int parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_1 = double_1;
	double_2 = double_2;
	return short_1;
}
void v_parse_args( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_3 = 1;
			if(1)
			{
				int_2 = int_1 + int_1;
			}
			if(1)
			{
				short_1 = v_cmdline_opt_find(float_1,int_1,double_1,int_1);

				int_2 = int_1 * int_3;
			}
			int_1 = int_3 * int_2;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		long long_4 = 1;
		unsigned_int_2 = v_parse_config(char_1,int_2);

		long_2 = long_1 * long_1;
		if(1)
		{
			short_1 = short_1 + short_1;
		}
		if(1)
		{
			double_1 = double_1 * double_1;
		}
		if(1)
		{
			long long_3 = 1;
			long_3 = long_4;
		}
		if(1)
		{
			long_2 = v_show_error(char_2,float_1,unsigned_int_2);

			int_1 = int_1 * int_1;
		}
		if(1)
		{
			float_1 = float_1;
		}
		float_1 = v_show_usage(int_4,unsigned_int_1,int_5);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			long long_5 = 1;
			long_5 = long_4 + long_2;
		}
	}
	short_1 = short_1 * short_2;
}
void v_msgqueue_init( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_2;
	char_3 = char_1 * char_2;
	double_1 = double_3 * double_1;
	int_1 = int_1 * int_1;
}
int main()
{
	int uni_para =495;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		short short_3 = 1;
		short_2 = short_1 * short_2;
		int_3 = int_1 * int_2;
		short_3 = short_3 * short_1;
	}
	char controller4vul_879[2];
	fgets(controller4vul_879 ,2 ,stdin);
	if( strcmp( controller4vul_879, "z") > 0)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char controller4vul_880[3];
			fgets(controller4vul_880 ,3 ,stdin);
			if( strcmp( controller4vul_880, "{s") > 0)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				int_4 = v_osd_process_key(unsigned_int_1,int_2,uni_para);

				double_3 = double_1 * double_2;
			}
		}
	}
	return int_3;
}

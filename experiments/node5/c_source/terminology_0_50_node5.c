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

short v__termpty_shutdown();
void v_termpty_text_scroll_rev_test( double parameter_1,char parameter_2);
double v__handle_esc_dcs( long parameter_1,float parameter_2,float parameter_3);
int v__handle_op_a( float parameter_1,int parameter_2,char parameter_3);
int v__termpty_ext_handle( int parameter_1,double parameter_2,int parameter_3);
int v__handle_esc_terminology( long parameter_1,float parameter_2,long parameter_3);
long v__handle_xterm_777_command( float parameter_1,char parameter_2,int parameter_3);
char v__smart_calculate_226( unsigned int parameter_1);
float v__smart_size( long parameter_1,int parameter_2,int parameter_3,double parameter_4);
void v_colors_term_init( int parameter_1,short parameter_2,unsigned int parameter_3);
void v_termio_config_update( long parameter_1);
void v__font_size_set( float parameter_1,int parameter_2);
void v_termio_font_size_set( int parameter_1,int parameter_2);
unsigned int v__handle_xterm_50_command( unsigned int parameter_1,char parameter_2,int parameter_3);
unsigned int v__eina_unicode_to_hex( char parameter_1);
short v__xterm_parse_color( char parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4,int parameter_5);
unsigned int v__xterm_arg_get( int parameter_1);
void v__handle_esc_xterm( float parameter_1,unsigned int parameter_2,float parameter_3);
void v_termpty_cells_set_content( double parameter_1,double parameter_2,float parameter_3,int parameter_4);
long v__handle_esc_csi_decera( float parameter_1,long parameter_2);
void v_termpty_cells_att_fill_preserve_colors( double parameter_1,short parameter_2,long parameter_3,int parameter_4);
short v__clean_up_rect_coordinates( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
double v__handle_esc_csi_decfra( char parameter_1,double parameter_2);
long v__handle_esc_csi_decslrm( float parameter_1,long parameter_2);
double v__handle_esc_csi_decstbm( long parameter_1,double parameter_2);
int v__handle_esc_csi_decscusr( short parameter_1,short parameter_2);
float v__handle_esc_csi_dsr( int parameter_1,int parameter_2);
short v__handle_esc_csi_truecolor_cmyk( float parameter_1,short parameter_2);
short v__handle_esc_csi_truecolor_cmy( short parameter_1,int parameter_2);
double v__approximate_truecolor_rgb( double parameter_1,int parameter_2,int parameter_3,int parameter_4);
void v__csi_truecolor_arg_get( double parameter_1);
double v__handle_esc_csi_truecolor_rgb( unsigned int parameter_1,int parameter_2);
float v__handle_esc_csi_color_set( unsigned int parameter_1,double parameter_2);
void v_termpty_cursor_copy( short parameter_1,short parameter_2);
void v__switch_to_alternative_screen( char parameter_1,int parameter_2);
char v__move_cursor_to_origin();
double v__pty_size();
short v__limit_coord( long parameter_1);
char v__check_screen_info( long parameter_1,float parameter_2);
void v__termpty_line_rewrap( short parameter_1,double parameter_2,int parameter_3,double parameter_4,double parameter_5);
int v__backlog_remove_latest_nolock( float parameter_1);
float v_termpty_save_extract();
unsigned int v__termpty_line_is_empty( unsigned int parameter_1,float parameter_2);
void v_termpty_screen_swap( char parameter_1);
void v_termpty_resize( short parameter_1,int parameter_2,int parameter_3);
char v_termio_win_get( double parameter_1);
short v__handle_esc_csi_reset_mode( long parameter_1,char parameter_2,unsigned int parameter_3);
float v__handle_esc_csi_cursor_pos_set( double parameter_1,unsigned int parameter_2,unsigned int parameter_3);
void v_termpty_text_scroll_rev( long parameter_1,short parameter_2);
void v_termpty_clear_line( int parameter_1,short parameter_2,int parameter_3);
void v_termpty_clear_screen( short parameter_1,unsigned int parameter_2);
void v_termpty_cell_codepoint_att_fill( int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,int parameter_5);
int v__termpty_charset_trans( int parameter_1,char parameter_2);
void v_termio_content_change( float parameter_1,float parameter_2,unsigned int parameter_3,int parameter_4);
void v_termpty_text_append( long parameter_1,short parameter_2,int parameter_3,int uni_para);
float v__csi_arg_get( unsigned int parameter_1);
char v__handle_esc_csi( short parameter_1,char parameter_2,long parameter_3);
void v__safechar( unsigned int parameter_1);
unsigned int v__handle_esc( unsigned int parameter_1,char parameter_2,long parameter_3);
void v_termpty_cell_fill( int parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4);
void v_termpty_cells_fill( float parameter_1,char parameter_2,float parameter_3,int parameter_4);
void v_termpty_cells_clear( float parameter_1,float parameter_2,int parameter_3);
float v__tooltip_del(long parameter_2);
short v__tooltip_content(int parameter_2,int parameter_3);
void v_MD5Final( int parameter_1,int parameter_2);
void v_MD5Transform( float parameter_1,double parameter_2);
void v_byteReverse( double parameter_1,unsigned int parameter_2);
void v_MD5Update( char parameter_1,char parameter_2,char parameter_3);
void v_MD5Init( int parameter_1);
void v_gravatar_tooltip( long parameter_1,float parameter_2,char parameter_3);
long v__cb_link_drag_done(int parameter_2);
void v__cb_link_drag_accept(short parameter_2,float parameter_3);
short v__cb_link_drag_move(char parameter_2,long parameter_3,double parameter_4,char parameter_5);
char v__cb_link_icon_new(char parameter_2,long parameter_3,int parameter_4);
long v__cb_link_move(int parameter_2,char parameter_3);
float v__cb_link_up_delay();
short v__cb_link_up(double parameter_2,char parameter_3);
void v_term_focus( float parameter_1);
unsigned int v__term_is_focused( short parameter_1);
void v_term_unfocus( long parameter_1);
double v__cb_ctxp_del(float parameter_2,float parameter_3);
float v__cb_ctxp_dismissed(char parameter_2);
float v__cb_ctxp_link_copy(float parameter_2,int uni_para);
int v__screen_visual_bounds( unsigned int parameter_1);
float v__draw_cell( double parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4);
int v__draw_line( int parameter_1,long parameter_2,long parameter_3,int parameter_4,long parameter_5);
long v_termpty_backlog_length( unsigned int parameter_1);
unsigned int v_termio_pty_get( char parameter_1);
double v_termio_textgrid_get( short parameter_1);
short v_miniview_colors_get( char parameter_1,double parameter_2);
void v__deferred_renderer();
long v__queue_render( int parameter_1);
void v_miniview_redraw( unsigned int parameter_1);
unsigned int v__block_obj_del( float parameter_1);
int v__termpty_is_dblwidth_slow_get( long parameter_1,int parameter_2);
long v__termpty_is_dblwidth_get( float parameter_1,int parameter_2);
short v_term_preedit_str_get( unsigned int parameter_1);
int v_media_get( short parameter_1);
long v__smart_media_clicked(double parameter_2);
long v_media_control_get( char parameter_1);
double v__smart_media_stop(char parameter_2);
float v__smart_media_pause(double parameter_2);
double v__smart_media_play(long parameter_2);
unsigned int v__smart_media_del(long parameter_2,short parameter_3);
void v_media_visualize_set( int parameter_1,int parameter_2);
void v_media_mute_set( double parameter_1,long parameter_2);
void v_media_volume_set( short parameter_1,double parameter_2);
double v__cb_media_vol(long parameter_2,int parameter_3,short parameter_4);
float v__cb_media_pos(unsigned int parameter_2,short parameter_3,short parameter_4);
float v__cb_media_pos_drag_stop(char parameter_2,long parameter_3,double parameter_4);
void v__cb_media_pos_drag_start(double parameter_2,char parameter_3,long parameter_4);
void v_media_stop( short parameter_1);
int v__cb_media_stop(long parameter_2,long parameter_3,double parameter_4);
long v__cb_media_pause(float parameter_2,float parameter_3,short parameter_4);
void v_media_play_set( unsigned int parameter_1,unsigned int parameter_2);
void v__cb_media_play(float parameter_2,float parameter_3,long parameter_4);
void v_media_position_set( double parameter_1,double parameter_2);
float v__cb_mov_ref(double parameter_2);
unsigned int v__cb_mov_progress(long parameter_2);
unsigned int v__cb_mov_restart();
float v__cb_mov_decode_stop(char parameter_2);
char v__cb_mov_len_change(char parameter_2);
short v__cb_mov_frame_resize(int parameter_2);
unsigned int v__cb_mov_frame_decode(long parameter_2);
long v__type_mov_init( int parameter_1);
short v__cb_edje_preloaded(char parameter_2,float parameter_3,int parameter_4);
float v__type_edje_init();
int v__type_scale_init();
unsigned int v__cb_img_frame();
short v__type_img_anim_handle();
long v__cb_img_preloaded(double parameter_2,unsigned int parameter_3);
int v__type_img_init( double parameter_1);
unsigned int v__url_compl_cb(int parameter_2,int uni_para);
unsigned int v__url_prog_cb(int parameter_2);
short v__type_thumb_calc( unsigned int parameter_1,short parameter_2,short parameter_3,long parameter_4,unsigned int parameter_5);
short v__type_mov_calc( float parameter_1,char parameter_2,short parameter_3,int parameter_4,float parameter_5);
long v__type_edje_calc( int parameter_1,int parameter_2,double parameter_3,short parameter_4,float parameter_5);
float v__type_img_calc( char parameter_1,int parameter_2,char parameter_3,int parameter_4,unsigned int parameter_5);
char v__cb_scale_preloaded(float parameter_2,char parameter_3);
unsigned int v__type_scale_calc( short parameter_1,float parameter_2,long parameter_3,short parameter_4,int parameter_5,int uni_para);
char v__unsmooth_timeout(int uni_para);
double v__smooth_handler( short parameter_1,int uni_para);
int v__smart_calculate( int parameter_1,int uni_para);
short v__smart_move( double parameter_1,int parameter_2,unsigned int parameter_3);
void v__smart_resize( float parameter_1,float parameter_2,char parameter_3);
float v__smart_del( float parameter_1);
int v__smart_add( short parameter_1);
float v__smart_init();
char v_media_add( char parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4,int parameter_5,int uni_para);
char v__block_media_activate( unsigned int parameter_1,int parameter_2,int uni_para);
int v__block_edje_message_cb(int parameter_2,short parameter_3,int parameter_4);
void v_termpty_write( float parameter_1,int parameter_2,int parameter_3);
int v__block_edje_signal_cb(short parameter_2,int parameter_3,long parameter_4);
void v_termpty_block_chid_update( double parameter_1,unsigned int parameter_2);
short v__block_edje_cmds( float parameter_1,int parameter_2,long parameter_3,float parameter_4);
void v_homedir_get( char parameter_1,double parameter_2);
double v__block_edje_activate( double parameter_1,double parameter_2);
unsigned int v__block_activate( char parameter_1,int parameter_2,int uni_para);
long v_termpty_block_get( int parameter_1,int parameter_2);
int v_termpty_block_id_get( unsigned int parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( int parameter_1,int parameter_2);
unsigned int v__smart_apply( unsigned int parameter_1,int uni_para);
unsigned int v__smart_cb_change(int uni_para);
long v__smart_update_queue( double parameter_1,char parameter_2,int uni_para);
unsigned int v__lost_selection_reset_job();
unsigned int v__lost_selection(unsigned int parameter_2,int uni_para);
void v__take_selection_text( short parameter_1,int parameter_2,long parameter_3,int uni_para);
char v__cb_ctxp_link_content_copy(float parameter_2);
void v_ty_sb_free( double parameter_1);
char v_ty_sb_steal_buf( long parameter_1);
int v_codepoint_to_utf8( int parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( unsigned int parameter_1);
int v_ty_sb_add( short parameter_1,char parameter_2,float parameter_3);
short v__termpty_cellrow_from_beacon_get( int parameter_1,int parameter_2,int parameter_3);
int v_termpty_cellrow_get( long parameter_1,int parameter_2,float parameter_3);
float v_termio_selection_get( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,long parameter_6,int parameter_7);
char v__cb_ctxp_link_open(float parameter_2);
double v__should_inline( char parameter_1);
short v_link_is_email( float parameter_1);
void v_link_is_protocol( char parameter_1);
double v_link_is_url( long parameter_1);
double v__activate_link( double parameter_1,char parameter_2);
void v__cb_ctxp_link_preview(int parameter_2);
short v__is_fmt( double parameter_1,unsigned int parameter_2);
int v_media_src_type_get( float parameter_1);
char v__mouse_in_selection( long parameter_1,int parameter_2,int parameter_3);
unsigned int v__smart_xy_to_cursor( int parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5);
short v__cb_link_down(int parameter_2,long parameter_3,int uni_para);
short v_main_term_popup_exists( short parameter_1);
void v__update_link( int parameter_1,double parameter_2,long parameter_3,char parameter_4,int uni_para);
long v__remove_links( float parameter_1,char parameter_2,int uni_para);
int v__sel_set( int parameter_1,double parameter_2);
int v_termio_scroll_get( char parameter_1);
void v_miniview_position_offset( char parameter_1,int parameter_2,unsigned int parameter_3);
void v_term_miniview_get();
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
double v_termpty_save_new( char parameter_1,int parameter_2);
short v_termpty_save_expand( long parameter_1,float parameter_2,long parameter_3);
void v__termpty_cell_is_empty( float parameter_1);
int v_termpty_line_length( double parameter_1,char parameter_2);
double v_verify_beacon( char parameter_1,int parameter_2);
void v_termpty_text_save_top( double parameter_1,long parameter_2,long parameter_3);
void v_termpty_text_scroll( char parameter_1,float parameter_2,int uni_para);
void v_termpty_text_scroll_test( short parameter_1,unsigned int parameter_2,int uni_para);
int v__cursor_to_start_of_line( short parameter_1);
char v__tab_forward( double parameter_1,int parameter_2);
long v__handle_cursor_control( unsigned int parameter_1,char parameter_2);
int v_termpty_handle_seq( char parameter_1,float parameter_2,double parameter_3,int uni_para);
void v_termpty_handle_buf( unsigned int parameter_1,long parameter_2,int parameter_3,int uni_para);
void v_theme_reload( unsigned int parameter_1);
float v_theme_reload_cb(int parameter_2,int parameter_3,short parameter_4);
void v_theme_auto_reload_enable( long parameter_1);
float v__cursor_shape_to_group_name();
char v_config_theme_path_default_get( float parameter_1);
void v_theme_path_get();
void v_config_theme_path_get( unsigned int parameter_1);
long v_theme_apply( unsigned int parameter_1,double parameter_2,unsigned int parameter_3);
void v_termio_set_cursor_shape( char parameter_1,long parameter_2);
void v_termpty_clear_tabs_on_screen( char parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( int parameter_1,unsigned int parameter_2);
long v__ts_free();
void v_termpty_save_free( int parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( double parameter_1);
void v_termpty_reset_att( int parameter_1);
unsigned int v_termio_config_get();
void v_termpty_reset_state( long parameter_1);
void v_termpty_resize_tabs( double parameter_1,int parameter_2,int parameter_3);
short v__termpty_init( long parameter_1);
int v__add_default_keys( char parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,float parameter_3,float parameter_4,double parameter_5,short parameter_6);
float v_config_new();
short v__termpty_shutdown()
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	return short_1;
}
void v_termpty_text_scroll_rev_test( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
		long long_2 = 1;
		v_termpty_text_scroll_rev(long_1,short_1);

		long_1 = long_1 + long_2;
	}
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_1 = double_1 + double_1;
		char_2 = char_1 + char_2;
		float_1 = float_1 + float_2;
	}
}
double v__handle_esc_dcs( long parameter_1,float parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int int_4 = 1;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					long long_1 = 1;
					long long_2 = 1;
					long_2 = long_1 * long_1;
				}
				if(1)
				{
					char char_1 = 1;
					char char_2 = 1;
					char char_3 = 1;
					char_3 = char_1 * char_2;
				}
			}
		}
		if(1)
		{
			v__safechar(unsigned_int_1);

			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		}
		if(1)
		{
			int int_3 = 1;
			v_termpty_write(float_1,int_1,int_2);

			int_1 = int_3;
		}
		if(1)
		{
		}
		if(1)
		{
			int_1 = int_4 + int_1;
		}
		if(1)
		{
			int int_5 = 1;
			int_5 = int_4 + int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		}
	}
	return double_1;
}
int v__handle_op_a( float parameter_1,int parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_2;
	long_1 = long_1;
	return int_1;
}
int v__termpty_ext_handle( int parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = v__handle_op_a(float_1,int_2,char_1);

	long_3 = long_1 * long_2;
	return int_2;
}
int v__handle_esc_terminology( long parameter_1,float parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	unsigned_int_1 = v_termio_config_get();

	char_1 = char_2;
	return int_1;
	int_2 = v__termpty_ext_handle(int_3,double_1,int_4);

}
long v__handle_xterm_777_command( float parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	short_1 = short_1 * short_2;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		int int_1 = 1;
		int_3 = int_1 + int_2;
	}
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 * float_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	}
	short_3 = short_3 + short_3;
	unsigned_int_1 = unsigned_int_4;
	int_2 = int_2 + int_3;
	double_1 = double_1;
	int_5 = int_4 + int_4;
	return long_1;
}
char v__smart_calculate_226( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	long_3 = long_1 * long_2;
	long_3 = long_1 * long_2;
	int_3 = int_2 + int_1;
	float_1 = float_2;
	short_1 = short_1 + short_1;
	double_1 = double_1;
	double_3 = double_1 + double_2;
	int_1 = int_3 + int_1;
	return char_1;
}
float v__smart_size( long parameter_1,int parameter_2,int parameter_3,double parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_4 = 1;
	char char_2 = 1;
	float float_2 = 1;
	int_1 = v__sel_set(int_1,double_1);

	long_2 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_3 = 1;
		int_2 = int_2;
		double_2 = double_2 + double_3;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	int_1 = int_2 * int_1;
	double_2 = double_2 + double_1;
	unsigned_int_1 = v__smart_apply(unsigned_int_2,-1 );

	int_3 = int_1 + int_1;
	v_termpty_resize(short_1,int_4,int_2);

	char_1 = v__smart_calculate_226(unsigned_int_3);

	short_2 = short_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		double double_4 = 1;
		double_2 = double_4 + double_4;
	}
	float_1 = float_1 * float_1;
	int_2 = int_4;
	float_1 = float_1 * float_1;
	int_1 = int_5 + int_6;
	short_4 = short_2 + short_1;
	char_1 = char_2 * char_1;
	return float_2;
}
void v_colors_term_init( int parameter_1,short parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	int int_6 = 1;
	int_2 = int_1 + int_2;
	int_1 = int_3 * int_3;
	double_2 = double_1 + double_1;
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		int_3 = int_3 + int_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			float float_3 = 1;
			double_2 = double_2 + double_2;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			float_4 = float_2 * float_3;
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			short short_2 = 1;
			short_2 = short_1 + short_2;
			if(1)
			{
				float float_5 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
				float_5 = float_1 * float_2;
				int_4 = int_2;
				unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
				int_1 = int_2 + int_3;
			}
		}
		long_1 = long_1;
		int_3 = int_2 + int_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			char_1 = char_2 * char_1;
			if(1)
			{
				int int_5 = 1;
				int_5 = int_3;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
			if(1)
			{
				int_6 = int_3;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long_2 = long_3;
		if(1)
		{
			short short_3 = 1;
			double double_3 = 1;
			int_6 = int_3 + int_6;
			short_1 = short_1 + short_3;
			float_4 = float_2 + float_2;
			float_4 = float_2 + float_4;
			double_3 = double_1 * double_1;
		}
		long_5 = long_4 * long_1;
	}
}
void v_termio_config_update( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_7 = 1;
	char char_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	char char_3 = 1;
	double double_8 = 1;
	double double_9 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_6 = 1;
	int int_4 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_1;
	double_5 = double_3 * double_4;
	double_2 = double_4 + double_1;
	if(1)
	{
		double_2 = double_3 * double_6;
	}
	long_1 = long_1 * long_1;
	if(1)
	{
		char char_1 = 1;
		float_1 = v__smart_size(long_2,int_1,int_1,double_7);

		char_1 = char_2;
		long_1 = long_3;
	}
	if(1)
	{
		double_3 = double_3 + double_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_7 = double_6;
	v_termpty_backlog_size_set(int_1,unsigned_int_1);

	long_2 = long_4 + long_5;
	v_termio_set_cursor_shape(char_2,long_3);

	int_3 = int_1 * int_2;
	float_2 = float_2 + float_2;
	char_2 = char_3 + char_3;
	double_1 = double_8 + double_9;
	int_1 = int_2 * int_1;
	v_colors_term_init(int_1,short_1,unsigned_int_3);

	long_6 = long_3 + long_3;
	if(1)
	{
		double_9 = double_8 * double_5;
	}
	if(1)
	{
		int_2 = int_2 + int_2;
	}
	int_4 = int_2 + int_2;
	long_7 = long_7;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
	int_2 = int_3;
	float_3 = float_3 + float_4;
}
void v__font_size_set( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	v_termio_config_update(long_1);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		short short_2 = 1;
		char char_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short_2 = short_1 * short_2;
		char_1 = char_1;
		long_1 = long_1 + long_2;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
		int_3 = int_4;
		double_2 = double_1 + double_2;
	}
}
void v_termio_font_size_set( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	v__font_size_set(float_1,int_1);

	float_3 = float_2 + float_2;
}
unsigned int v__handle_xterm_50_command( unsigned int parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	v_termio_font_size_set(int_1,int_1);

	long_1 = long_1 + long_2;
	return unsigned_int_1;
}
unsigned int v__eina_unicode_to_hex( char parameter_1)
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
	return unsigned_int_1;
}
short v__xterm_parse_color( char parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int_2 = int_1 * int_2;
	short_1 = short_1 + short_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	unsigned_int_1 = v__eina_unicode_to_hex(char_1);

	long_3 = long_1 * long_2;
	long_5 = long_4 + long_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_2 = int_3 * int_2;
		if(1)
		{
			char_1 = char_1 + char_1;
		}
		int_3 = int_1;
		unsigned_int_2 = unsigned_int_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		}
		unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
		char_2 = char_2 * char_2;
		if(1)
		{
			short_2 = short_1 + short_2;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
		double_2 = double_1 * double_2;
		if(1)
		{
			int_2 = int_1 + int_3;
		}
		short_1 = short_2 + short_2;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
		if(1)
		{
			unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
		}
		long_2 = long_4 * long_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_1 * int_1;
		if(1)
		{
			char_2 = char_2;
		}
		int_2 = int_3 + int_4;
		unsigned_int_3 = unsigned_int_3;
		if(1)
		{
			short_2 = short_1 * short_2;
		}
		unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
		unsigned_int_5 = unsigned_int_5;
		if(1)
		{
			long long_6 = 1;
			long_4 = long_3 + long_6;
		}
		long_4 = long_1;
	}
	if(1)
	{
		int int_5 = 1;
		int_5 = int_2 + int_3;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	return short_2;
}
unsigned int v__xterm_arg_get( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double_1 = double_1 * double_2;
	short_1 = short_1 + short_2;
	long_2 = long_1 + long_1;
	double_2 = double_1 * double_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2;
	int_1 = int_3 + int_3;
	double_3 = double_2 + double_2;
	int_4 = int_4 + int_4;
	double_3 = double_2 + double_3;
	char_3 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	long_2 = long_1 * long_3;
	unsigned_int_2 = unsigned_int_4;
	double_4 = double_4 * double_1;
	double_3 = double_4;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
	int_5 = int_3 + int_3;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
	char_5 = char_1 + char_4;
	return unsigned_int_6;
}
void v__handle_esc_xterm( float parameter_1,unsigned int parameter_2,float parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	long_1 = v__handle_xterm_777_command(float_1,char_1,int_1);

	double_2 = double_1 + double_2;
	v_termpty_write(float_1,int_2,int_2);

	short_1 = v__xterm_parse_color(char_1,unsigned_int_1,float_1,char_2,int_2);

	int_1 = int_2 + int_2;
	unsigned_int_3 = v__handle_xterm_50_command(unsigned_int_3,char_3,int_1);

	int_1 = int_3 * int_4;
	if(1)
	{
		double_2 = double_3 + double_2;
	}
	unsigned_int_3 = v__xterm_arg_get(int_4);

	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	double_1 = double_2 * double_3;
	short_1 = short_1 + short_1;
	if(1)
	{
		double_4 = v_termio_textgrid_get(short_1);

		float_1 = float_2 * float_1;
	}
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	}
	float_1 = float_2 * float_3;
	double_3 = double_1 * double_2;
	float_1 = float_2 + float_3;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		int_4 = int_1 * int_3;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
		char_3 = char_1 + char_2;
		unsigned_int_3 = unsigned_int_4;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		float float_4 = 1;
		float_1 = float_4 * float_5;
	}
	unsigned_int_4 = v_termio_config_get();

	unsigned_int_2 = unsigned_int_6 * unsigned_int_6;
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	}
	if(1)
	{
		double_2 = double_4 + double_4;
	}
	if(1)
	{
		double_3 = double_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		float_1 = float_5 * float_5;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_3 * long_1;
	}
	int_1 = int_2;
	unsigned_int_6 = unsigned_int_5;
}
void v_termpty_cells_set_content( double parameter_1,double parameter_2,float parameter_3,int parameter_4)
{
	double double_1 = 1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_1 = int_1 * int_2;
		int_3 = int_2;
	}
}
long v__handle_esc_csi_decera( float parameter_1,long parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 * int_1;
	char_2 = char_1 * char_2;
	int_2 = int_1;
	int_2 = int_2 * int_3;
	long_1 = long_1 + long_1;
	char_3 = char_3 * char_4;
	if(1)
	{
	}
	float_1 = v__csi_arg_get(unsigned_int_1);

	long_2 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_1;
		short_1 = v__clean_up_rect_coordinates(short_1,int_4,int_4,int_1,int_2);

		double_1 = double_1 * double_1;
	}
	return long_2;
	v_termpty_cells_set_content(double_2,double_1,float_1,int_4);

}
void v_termpty_cells_att_fill_preserve_colors( double parameter_1,short parameter_2,long parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_2 = char_1 + char_1;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long_1 = long_1;
		float_3 = float_1 + float_2;
		int_4 = int_3 + int_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			long_2 = long_1 * long_2;
			short_2 = short_1 + short_1;
			int_2 = int_1 * int_5;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
			double_1 = double_1 + double_2;
		}
	}
}
short v__clean_up_rect_coordinates( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_1 + char_2;
	int_3 = int_1 * int_2;
	int_2 = int_2 + int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	short_1 = short_1 + short_1;
	if(1)
	{
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		float_2 = float_1 * float_2;
		if(1)
		{
			double_1 = double_2;
		}
	}
	if(1)
	{
		double_1 = double_2 * double_1;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		long_3 = long_2 * long_3;
		if(1)
		{
			char_1 = char_1 + char_2;
		}
	}
	short_2 = short_3;
	char controller_10[2];
	fgets(controller_10 ,2 ,stdin);
	if( strcmp( controller_10, "*") > 0)
	{
		long long_4 = 1;
		long_3 = long_4 * long_2;
	}
	if(1)
	{
	}
	int_2 = int_3 * int_2;
	int_1 = int_4 * int_2;
	unsigned_int_2 = unsigned_int_4;
	int_5 = int_6;
	return short_2;
}
double v__handle_esc_csi_decfra( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	v_termpty_cells_att_fill_preserve_colors(double_1,short_1,long_1,int_1);

	int_1 = int_2 * int_1;
	short_4 = short_2 * short_3;
	short_3 = short_3;
	short_1 = v__clean_up_rect_coordinates(short_5,int_2,int_1,int_3,int_1);

	int_3 = int_4 + int_5;
	unsigned_int_1 = unsigned_int_2;
	float_1 = v__csi_arg_get(unsigned_int_3);

	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = int_4 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	return double_2;
}
long v__handle_esc_csi_decslrm( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double_1 = double_2;
	float_1 = v__csi_arg_get(unsigned_int_1);

	char_1 = v__move_cursor_to_origin();

	char_4 = char_2 * char_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	if(1)
	{
		char_3 = char_1 * char_1;
	}
	long_1 = long_4 + long_5;
	float_2 = float_3;
	short_3 = short_2 + short_2;
	double_1 = double_1 * double_3;
	float_2 = float_3;
	return long_4;
}
double v__handle_esc_csi_decstbm( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double_1 = double_1 * double_2;
	double_3 = double_3;
	double_2 = double_1 * double_3;
	int_1 = int_1 * int_1;
	char_3 = char_1 * char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "|") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_4 = unsigned_int_5;
	}
	short_1 = short_1 * short_1;
	float_2 = float_1 * float_2;
	long_2 = long_1 + long_2;
	short_1 = short_2 + short_2;
	float_1 = v__csi_arg_get(unsigned_int_4);

	char_3 = v__move_cursor_to_origin();

	char_2 = char_2 + char_3;
	return double_4;
}
int v__handle_esc_csi_decscusr( short parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_4 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_5 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 * int_2;
	short_3 = short_1 + short_2;
	double_2 = double_1 * double_1;
	float_1 = float_1 + float_1;
	short_1 = short_3 * short_4;
	int_3 = int_3 * int_1;
	double_2 = double_2 + double_2;
	double_2 = double_2 + double_2;
	double_1 = double_1 + double_1;
	v_termio_set_cursor_shape(char_1,long_1);

	long_2 = long_1;
	short_2 = short_5 * short_2;
	double_1 = double_2 + double_1;
	char_2 = char_1 * char_1;
	float_1 = v__csi_arg_get(unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	return int_3;
}
float v__handle_esc_csi_dsr( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short_2 = short_1 * short_2;
		double_1 = double_2;
		short_4 = short_3 + short_3;
		int_1 = int_1 + int_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		int_3 = int_1 * int_2;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		unsigned_int_3 = unsigned_int_2;
		unsigned_int_3 = unsigned_int_4;
		float_1 = v__csi_arg_get(unsigned_int_3);

		double_2 = double_1 * double_1;
		double_3 = double_3 * double_2;
		v_termpty_write(float_2,int_1,int_4);

		double_3 = double_4 * double_1;
		double_1 = double_1 * double_3;
	}
	return float_1;
}
short v__handle_esc_csi_truecolor_cmyk( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	v__csi_truecolor_arg_get(double_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_1;
	float_1 = float_1 + float_2;
	short_1 = short_1 + short_1;
	char_3 = char_3 * char_4;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	float_2 = float_1 + float_2;
	double_2 = double_1 + double_1;
	double_2 = v__approximate_truecolor_rgb(double_1,int_1,int_2,int_2);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	return short_1;
}
short v__handle_esc_csi_truecolor_cmy( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double_1 = v__approximate_truecolor_rgb(double_2,int_1,int_1,int_2);

	int_2 = int_1 + int_3;
	short_1 = short_1 * short_1;
	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	float_1 = float_1 + float_1;
	v__csi_truecolor_arg_get(double_3);

	char_1 = char_1 + char_1;
	return short_1;
}
double v__approximate_truecolor_rgb( double parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_3 = int_1 + int_2;
	double_1 = v_termio_textgrid_get(short_1);

	double_3 = double_2 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_1 = double_3 * double_1;
		}
		if(1)
		{
			double_3 = double_3 + double_3;
			if(1)
			{
				short short_2 = 1;
				short short_3 = 1;
				short_3 = short_2 + short_2;
			}
		}
	}
	return double_2;
}
void v__csi_truecolor_arg_get( double parameter_1)
{
}
double v__handle_esc_csi_truecolor_rgb( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float_1 = float_1 + float_1;
	double_1 = v__approximate_truecolor_rgb(double_1,int_1,int_2,int_3);

	double_3 = double_2 * double_3;
	int_2 = int_1 * int_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_4 = double_2 * double_2;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float_3 = float_1 * float_2;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
		v__csi_truecolor_arg_get(double_5);

		short_1 = short_1 + short_2;
	}
	if(1)
	{
	}
	return double_4;
}
float v__handle_esc_csi_color_set( unsigned int parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = v__handle_esc_csi_truecolor_cmy(short_2,int_1);

	double_2 = double_1 + double_1;
	v_termpty_reset_att(int_2);

	float_3 = float_1 + float_2;
	return float_4;
	float_4 = v__csi_arg_get(unsigned_int_1);

	double_1 = v__handle_esc_csi_truecolor_rgb(unsigned_int_1,int_1);

	short_2 = v__handle_esc_csi_truecolor_cmyk(float_2,short_1);

}
void v_termpty_cursor_copy( short parameter_1,short parameter_2)
{
	float float_2 = 1;
	if(1)
	{
		float float_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float_1 = float_1 * float_2;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		int_2 = int_1 * int_1;
		char_3 = char_1 * char_2;
		float_2 = float_2 * float_2;
	}
}
void v__switch_to_alternative_screen( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	v_termpty_screen_swap(char_1);

}
char v__move_cursor_to_origin()
{
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = double_1 + double_2;
		char_1 = char_1 * char_2;
		double_2 = double_3 + double_1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		short_2 = short_1 * short_2;
		char_1 = char_3 + char_4;
	}
	return char_2;
}
double v__pty_size()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	double_1 = double_1 * double_1;
	int_1 = int_4;
	if(1)
	{
		int_3 = int_3;
	}
	return double_1;
}
short v__limit_coord( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 * short_2;
	long_2 = long_1 * long_2;
	return short_2;
}
char v__check_screen_info( long parameter_1,float parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	if(1)
	{
		double double_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double_1 = double_1 * double_2;
		v_termpty_cells_clear(float_1,float_2,int_1);

		long_2 = long_1 * long_1;
		unsigned_int_1 = unsigned_int_1;
		double_2 = double_2 + double_2;
		v_termpty_text_save_top(double_1,long_3,long_2);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		short_3 = short_1 + short_2;
	}
	return char_1;
}
void v__termpty_line_rewrap( short parameter_1,double parameter_2,int parameter_3,double parameter_4,double parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = double_1 + double_2;
	int_2 = int_1 * int_1;
	char_1 = v__check_screen_info(long_1,float_1);

	double_4 = double_3 * double_2;
}
int v__backlog_remove_latest_nolock( float parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	if(1)
	{
		int int_3 = 1;
		double_1 = v_verify_beacon(char_1,int_1);

		int_2 = int_2 * int_3;
	}
	if(1)
	{
		double_3 = double_1 + double_1;
	}
	int_1 = int_4;
	int_5 = int_1 * int_1;
	double_1 = double_3 * double_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_2;
	v_termpty_save_free(int_2);

}
float v_termpty_save_extract()
{
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double_1 = double_1 * double_1;
			double_2 = double_1;
			int_1 = int_1;
			float_3 = float_1 + float_2;
			double_2 = double_2;
			if(1)
			{
			}
			int_2 = int_1 * int_1;
			int_3 = int_1 + int_2;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_2 = unsigned_int_3;
			}
		}
	}
	return float_1;
}
unsigned int v__termpty_line_is_empty( unsigned int parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_3 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		v__termpty_cell_is_empty(float_1);

		int_3 = int_1 * int_2;
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
void v_termpty_screen_swap( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_2;
	long_2 = long_1 + long_1;
	int_1 = int_2;
	double_3 = double_2;
	long_1 = long_3 + long_1;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_4 = unsigned_int_6;
	}
}
void v_termpty_resize( short parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	short short_5 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	char char_2 = 1;
	int int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_6 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_6 = 1;
	short short_8 = 1;
	double double_5 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_1;
	int_1 = int_1 + int_1;
	short_4 = short_2 + short_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "S") > 0)
	{
	}
	long_1 = long_1;
	if(1)
	{
		int_3 = int_1 * int_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	long_1 = long_1 * long_2;
	if(1)
	{
		short_4 = short_5 * short_2;
	}
	int_3 = v_termpty_line_length(double_1,char_1);

	double_2 = double_1 * double_2;
	int_4 = int_2;
	if(1)
	{
		char_1 = char_2;
	}
	short_5 = short_3 * short_5;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	v_termpty_resize_tabs(double_2,int_3,int_5);

	long_2 = long_2 * long_2;
	char_4 = char_2 * char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		v_termpty_backlog_lock();

		float_2 = float_1 + float_2;
		if(1)
		{
			char char_5 = 1;
			int_4 = int_1 + int_2;
			char_1 = char_4 * char_5;
		}
	}
	double_1 = double_1 + double_1;
	if(1)
	{
		unsigned_int_1 = v__termpty_line_is_empty(unsigned_int_4,float_3);

		unsigned_int_4 = unsigned_int_3;
	}
	double_1 = double_1 * double_1;
	if(1)
	{
		float float_4 = 1;
		double_3 = double_1 + double_2;
		short_5 = v__limit_coord(long_1);

		float_4 = float_1 + float_1;
		double_1 = double_3 * double_1;
		if(1)
		{
			short short_6 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			double_4 = double_4 * double_3;
			int_1 = int_6;
			long_4 = long_1 + long_3;
			float_4 = float_4 * float_4;
			if(1)
			{
				unsigned_int_2 = unsigned_int_2;
			}
			int_3 = int_5;
			short_2 = short_4;
			short_7 = short_6 * short_6;
			short_4 = short_7 * short_7;
			v_termpty_screen_swap(char_2);

			unsigned_int_5 = unsigned_int_5;
			double_3 = double_2 * double_4;
			unsigned_int_6 = unsigned_int_7;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_7 = 1;
		v_termpty_backlog_unlock();

		char_3 = char_2 + char_4;
		short_7 = short_7 * short_2;
		short_1 = short_7 + short_1;
		int_7 = int_4 * int_5;
	}
	double_3 = double_3;
	double_1 = double_3 + double_4;
	int_3 = int_4;
	double_4 = double_1 + double_1;
	int_1 = v__backlog_remove_latest_nolock(float_3);

	long_4 = long_3 + long_4;
	double_2 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	char_6 = char_1 * char_1;
	if(1)
	{
		float_3 = v_termpty_save_extract();

		double_2 = double_4 + double_3;
	}
	double_3 = double_3;
	unsigned_int_1 = unsigned_int_7 + unsigned_int_1;
	v__termpty_line_rewrap(short_8,double_5,int_6,double_2,double_4);

	unsigned_int_1 = unsigned_int_4;
	char_6 = char_3 * char_3;
	double_3 = double_4 * double_2;
	double_5 = v_verify_beacon(char_3,int_1);

	int_5 = int_4 * int_5;
	double_3 = v__pty_size();

	float_3 = float_1 * float_3;
	long_6 = long_5 * long_5;
}
char v_termio_win_get( double parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_2;
	return char_1;
}
short v__handle_esc_csi_reset_mode( long parameter_1,char parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_3 = 1;
	char_1 = v_termio_win_get(double_1);

	v_termpty_cursor_copy(short_1,short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_termpty_resize(short_2,int_1,int_2);

	char_2 = v__move_cursor_to_origin();

	double_1 = double_1 * double_1;
	float_1 = v__csi_arg_get(unsigned_int_2);

	v__switch_to_alternative_screen(char_3,int_3);

	unsigned_int_2 = unsigned_int_1;
	return short_1;
	v_termpty_reset_state(long_1);

	v_termpty_clear_screen(short_3,unsigned_int_1);

}
float v__handle_esc_csi_cursor_pos_set( double parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	double double_4 = 1;
	short_1 = short_1 + short_1;
	float_1 = v__csi_arg_get(unsigned_int_1);

	int_2 = int_1 + int_2;
	double_1 = double_1 + double_1;
	char_2 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	char_2 = char_1 * char_1;
	if(1)
	{
		float_3 = float_1 + float_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2 * short_2;
		if(1)
		{
			float_2 = float_1 + float_3;
		}
	}
	if(1)
	{
		char_4 = char_3 + char_2;
	}
	int_1 = int_2 + int_3;
	char_3 = char_1 * char_3;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_4 = double_2 * double_3;
	}
	if(1)
	{
		double_4 = double_1 + double_4;
		if(1)
		{
			int_1 = int_3;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	}
	char_3 = char_4 + char_3;
	return float_2;
}
void v_termpty_text_scroll_rev( long parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_5 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
		int_1 = int_2;
	}
	v_termpty_cells_clear(float_1,float_1,int_2);

	short_1 = short_1 * short_1;
	int_3 = int_3 + int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "k!") > 0)
		{
			float float_3 = 1;
			float float_4 = 1;
			float_4 = float_2 + float_3;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		}
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 + int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_1 + double_1;
			int_3 = int_4;
			double_1 = double_1 * double_2;
		}
		if(1)
		{
			short short_2 = 1;
			short_2 = short_1 * short_1;
		}
	}
	v_termio_scroll(float_2,int_5,int_5,int_1,-1 );

}
void v_termpty_clear_line( int parameter_1,short parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	char_2 = char_1 * char_1;
	v_termio_content_change(float_1,float_1,unsigned_int_1,int_1);

	double_3 = double_1 * double_2;
	long_2 = long_1 * long_2;
	int_3 = int_2 + int_3;
	int_2 = int_1;
	char_2 = char_2 * char_2;
	float_1 = float_1 * float_1;
	double_3 = double_4 * double_1;
	double_2 = double_3 * double_5;
	float_3 = float_2 * float_2;
	double_4 = double_6;
	double_7 = double_1 * double_3;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_3 * char_2;
	}
	v_termpty_cells_clear(float_4,float_5,int_2);

	float_1 = float_6 + float_3;
	int_3 = int_1 + int_3;
}
void v_termpty_clear_screen( short parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	if(1)
	{
		v_termpty_cells_clear(float_1,float_2,int_1);

		int_1 = int_2 * int_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	double_3 = double_1 * double_2;
	v_termpty_clear_line(int_2,short_1,int_1);

	char_2 = char_1 * char_1;
	v_termio_content_change(float_3,float_1,unsigned_int_1,int_1);

	long_2 = long_1 + long_2;
	char_2 = char_3 * char_4;
}
void v_termpty_cell_codepoint_att_fill( int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,int parameter_5)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_1 + int_1;
	float_2 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_2 = double_1 * double_2;
		char_2 = char_1 * char_1;
	}
}
int v__termpty_charset_trans( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	char_1 = char_2;
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_3 = int_1 * int_2;
		}
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			short_4 = short_2 * short_3;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 + double_1;
		}
		if(1)
		{
			int_3 = int_3 * int_3;
		}
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1;
		}
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 * float_1;
		}
	}
	return int_3;
}
void v_termio_content_change( float parameter_1,float parameter_2,unsigned int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_8 = 1;
	double double_6 = 1;
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_1 + short_2;
	double_1 = double_1 * double_1;
	long_1 = v__remove_links(float_1,char_1,-1 );

	int_1 = int_1 * int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double_2 = double_1 * double_1;
		unsigned_int_3 = unsigned_int_1;
		long_2 = long_2 + long_3;
		unsigned_int_2 = unsigned_int_4;
		int_2 = int_1 + int_1;
		int_2 = v__sel_set(int_3,double_3);

		int_2 = int_2 + int_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_3 = 1;
			float float_4 = 1;
			double_2 = double_2 + double_4;
			if(1)
			{
				int_2 = int_3 + int_1;
				double_3 = double_1 + double_3;
			}
			float_4 = float_3 + float_1;
			float_2 = float_4;
		}
	}
	if(1)
	{
	}
	double_2 = double_4 * double_5;
	int_4 = int_3 * int_5;
	short_3 = short_3;
	double_4 = double_1;
	if(1)
	{
		float float_5 = 1;
		float float_6 = 1;
		float_5 = float_6;
		int_5 = int_3 * int_6;
	}
	if(1)
	{
		int int_7 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
		int_5 = int_1 + int_7;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_2 = 1;
			char char_3 = 1;
			short short_4 = 1;
			int_8 = int_6 * int_5;
			if(1)
			{
				double_3 = double_6;
				unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
			}
			char_2 = char_2 + char_3;
			short_4 = short_4 + short_4;
		}
	}
	if(1)
	{
		short short_5 = 1;
		double_3 = double_2 * double_3;
		short_1 = short_3 * short_5;
		int_8 = int_5 + int_8;
		int_4 = int_2;
		double_6 = double_4 + double_3;
		if(1)
		{
			float float_7 = 1;
			float_7 = float_1;
		}
	}
}
void v_termpty_text_append( long parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double_1 = double_1;
	int_2 = int_1 * int_1;
	int_1 = int_2 * int_3;
	long_1 = long_1 + long_1;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	char_3 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		float float_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		short short_4 = 1;
		short short_5 = 1;
		int_5 = int_4 * int_5;
		if(1)
		{
			short short_1 = 1;
			char char_4 = 1;
			int_5 = int_2 + int_2;
			int_4 = int_6 + int_7;
			float_1 = float_1 + float_1;
			short_1 = short_1 + short_2;
			char_4 = char_2 + char_2;
			double_3 = double_2 * double_3;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
			}
		}
		double_3 = double_3 + double_1;
		if(1)
		{
			int_7 = int_5 * int_4;
		}
		char controller4vul_1373[2];
		fgets(controller4vul_1373 ,2 ,stdin);
		if( strcmp( controller4vul_1373, "<") > 0)
		{
			char controller4vul_1374[2];
			fgets(controller4vul_1374 ,2 ,stdin);
			if( strcmp( controller4vul_1374, "T") > 0)
			{
				v_termpty_text_scroll_test(short_3,unsigned_int_2,uni_para);

				unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			}
			unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
		}
		double_4 = double_3 * double_2;
		if(1)
		{
			short_4 = short_2 * short_2;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		}
		short_3 = short_5 + short_3;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			long_1 = long_1 * long_1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			float float_2 = 1;
			unsigned_int_6 = unsigned_int_6;
			float_1 = float_2 + float_1;
			if(1)
			{
				int_4 = int_6 + int_6;
			}
			if(1)
			{
				int_4 = int_7 * int_4;
			}
			if(1)
			{
				short_4 = short_3 + short_5;
				char_2 = char_1 * char_1;
			}
		}
		if(1)
		{
			double double_5 = 1;
			double double_6 = 1;
			double_2 = double_5 + double_1;
			double_3 = double_6 * double_6;
			if(1)
			{
				double_6 = double_5 * double_1;
			}
			double_4 = double_5 * double_5;
			if(1)
			{
				unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
				int_2 = int_5 * int_5;
			}
			double_2 = double_5 * double_1;
		}
	}
}
float v__csi_arg_get( unsigned int parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_1;
	float_1 = float_1 + float_2;
	float_1 = float_2 * float_2;
	double_2 = double_1 * double_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_1 * double_3;
	}
	return float_2;
}
char v__handle_esc_csi( short parameter_1,char parameter_2,long parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	short short_3 = 1;
	float_1 = v__csi_arg_get(unsigned_int_1);

	v_termpty_text_append(long_1,short_1,int_1,-1 );

	v_termpty_text_scroll(char_1,float_2,-1 );

	float_3 = v__handle_esc_csi_dsr(int_2,int_3);

	double_1 = v__handle_esc_csi_decfra(char_2,double_2);

	unsigned_int_2 = unsigned_int_2;
	v__safechar(unsigned_int_1);

	char_3 = v__tab_forward(double_2,int_1);

	v_termpty_clear_backlog(double_1);

	v_termpty_clear_line(int_2,short_1,int_3);

	v_termpty_text_scroll_rev(long_1,short_2);

	v_termpty_write(float_1,int_4,int_2);

	short_2 = v__handle_esc_csi_reset_mode(long_1,char_1,unsigned_int_2);

	v_termpty_reset_state(long_2);

	double_3 = v__handle_esc_csi_decstbm(long_3,double_4);

	v_termpty_cursor_copy(short_2,short_1);

	long_2 = v__handle_esc_csi_decera(float_3,long_4);

	double_4 = double_2 * double_1;
	return char_2;
	long_1 = v__handle_cursor_control(unsigned_int_1,char_1);

	v_termpty_clear_screen(short_1,unsigned_int_3);

	float_3 = v__handle_esc_csi_cursor_pos_set(double_3,unsigned_int_4,unsigned_int_4);

	v_termpty_clear_tabs_on_screen(char_4);

	float_2 = v__handle_esc_csi_color_set(unsigned_int_5,double_5);

	int_3 = v__handle_esc_csi_decscusr(short_3,short_1);

	long_4 = v__handle_esc_csi_decslrm(float_2,long_3);

}
void v__safechar( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	double_2 = double_1 * double_1;
}
unsigned int v__handle_esc( unsigned int parameter_1,char parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	char char_5 = 1;
	double double_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char char_6 = 1;
	double double_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_3 = 1;
	char char_9 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	long_1 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	char_2 = char_1 * char_2;
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_3;
	double_3 = double_1 * double_2;
	char_3 = char_2 * char_2;
	v_termpty_text_scroll_test(short_1,unsigned_int_2,-1 );

	v_termpty_cursor_copy(short_1,short_2);

	long_4 = long_2 * long_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	int_2 = v__handle_esc_terminology(long_1,float_1,long_4);

	unsigned_int_4 = unsigned_int_3;
	v_termpty_reset_state(long_1);

	char_1 = char_1 + char_4;
	v_termpty_clear_screen(short_2,unsigned_int_5);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	double_4 = double_1;
	char_5 = char_2 * char_3;
	double_2 = double_5 + double_4;
	float_2 = float_1 + float_1;
	double_5 = v__handle_esc_dcs(long_4,float_3,float_1);

	int_3 = int_1 + int_2;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_7;
	double_4 = double_3;
	if(1)
	{
		unsigned_int_9 = unsigned_int_4 + unsigned_int_8;
	}
	if(1)
	{
	}
	long_3 = long_2 + long_2;
	char_4 = char_5 * char_4;
	int_3 = int_1;
	if(1)
	{
	}
	long_6 = long_4 + long_5;
	v_termpty_text_scroll_rev_test(double_3,char_6);

	long_1 = long_5;
	if(1)
	{
	}
	double_5 = double_5 + double_6;
	v_termpty_cell_codepoint_att_fill(int_4,int_2,int_5,unsigned_int_9,int_2);

	char_2 = char_7 + char_6;
	if(1)
	{
	}
	float_2 = float_2 + float_3;
	unsigned_int_7 = unsigned_int_8 * unsigned_int_10;
	if(1)
	{
	}
	double_3 = double_4 * double_5;
	double_5 = double_3 + double_5;
	if(1)
	{
	}
	if(1)
	{
		long_3 = long_2 + long_3;
		double_6 = double_6 + double_2;
		float_2 = float_3;
		short_1 = short_3;
		double_3 = double_2 * double_2;
		if(1)
		{
			double double_7 = 1;
			double_1 = double_7 + double_4;
		}
		long_1 = long_2 * long_2;
		int_2 = int_2 * int_2;
		if(1)
		{
			int int_6 = 1;
			char char_8 = 1;
			int_3 = int_6 + int_6;
			char_7 = char_2;
			char_3 = char_8 * char_4;
		}
	}
	if(1)
	{
	}
	char_6 = v__handle_esc_csi(short_3,char_9,long_1);

	float_5 = float_3 + float_4;
	v__safechar(unsigned_int_6);

	v__handle_esc_xterm(float_1,unsigned_int_10,float_3);

	long_6 = long_1 + long_6;
	short_1 = short_3 + short_1;
	long_5 = long_5 * long_6;
	float_3 = float_2 + float_3;
	return unsigned_int_8;
}
void v_termpty_cell_fill( int parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 * char_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char_3 = char_2 * char_2;
			unsigned_int_1 = unsigned_int_2;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_1 = 1;
			int int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int_2 = int_1 * int_1;
			short_2 = short_1 * short_2;
		}
	}
}
void v_termpty_cells_fill( float parameter_1,char parameter_2,float parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_termpty_cell_fill(int_1,unsigned_int_4,float_1,int_2);

	char_1 = char_1;
	float_2 = float_2 * float_1;
	int_2 = int_2 * int_3;
	short_1 = short_1;
}
void v_termpty_cells_clear( float parameter_1,float parameter_2,int parameter_3)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_termpty_cells_fill(float_1,char_1,float_1,int_1);

	int_1 = int_2 * int_1;
}
float v__tooltip_del(long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_2;
	return float_1;
}
short v__tooltip_content(int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long_1 = long_1 * long_2;
	char_1 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 * double_2;
	return short_1;
	char_3 = v_media_add(char_2,unsigned_int_1,float_1,int_1,int_1,-1 );

}
void v_MD5Final( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	int_2 = int_1 * int_1;
	float_1 = float_1 * float_2;
	double_1 = double_1 * double_2;
	double_3 = double_3 + double_3;
	int_1 = int_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		double_1 = double_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		float_2 = float_2 + float_1;
		char_4 = char_2 + char_3;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "|") == 0)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	v_MD5Transform(float_3,double_2);

	int_4 = int_3 * int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	char_1 = char_4 * char_4;
	short_1 = short_1 + short_1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	float_4 = float_3;
	v_byteReverse(double_1,unsigned_int_1);

}
void v_MD5Transform( float parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	float float_7 = 1;
	float float_8 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_6 = 1;
	long long_7 = 1;
	int int_6 = 1;
	long long_8 = 1;
	long long_9 = 1;
	int int_7 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_8 = 1;
	double double_9 = 1;
	short short_5 = 1;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	char_1 = char_2 + char_1;
	float_1 = float_1;
	float_1 = float_1 + float_1;
	float_2 = float_3;
	float_3 = float_3 + float_4;
	short_2 = short_2 + short_2;
	double_2 = double_1 + double_2;
	long_1 = long_1 * long_1;
	float_4 = float_3 + float_4;
	long_2 = long_2;
	char_2 = char_2 + char_3;
	long_4 = long_3 + long_2;
	long_3 = long_3 + long_5;
	double_1 = double_1 + double_1;
	float_6 = float_3 * float_5;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	char_4 = char_4;
	double_4 = double_3 * double_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	short_1 = short_3 * short_2;
	float_6 = float_2 + float_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_2;
	double_3 = double_3;
	double_3 = double_1 * double_4;
	int_3 = int_1 * int_2;
	double_3 = double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	double_4 = double_5 * double_1;
	char_3 = char_2 + char_4;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_5;
	short_1 = short_3 * short_4;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_5;
	float_7 = float_2 + float_6;
	float_8 = float_3 + float_1;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
	double_6 = double_3;
	double_7 = double_4 * double_1;
	double_6 = double_6 * double_1;
	int_1 = int_1 * int_2;
	double_2 = double_5 + double_2;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_7;
	double_3 = double_3 + double_1;
	float_6 = float_6 + float_1;
	int_2 = int_4 + int_5;
	long_4 = long_5 + long_6;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_7;
	long_6 = long_6 * long_7;
	int_6 = int_4 * int_1;
	int_2 = int_2 + int_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_6;
	double_5 = double_2;
	long_8 = long_6 * long_6;
	double_1 = double_2 + double_2;
	long_9 = long_6 * long_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	int_4 = int_1 + int_7;
	char_1 = char_5;
	char_6 = char_4 + char_5;
	double_6 = double_8 + double_9;
	long_4 = long_4 + long_7;
	double_4 = double_2 + double_5;
	int_3 = int_3;
	char_6 = char_1 * char_1;
	int_3 = int_4 + int_3;
	short_2 = short_5 * short_3;
	short_3 = short_2 + short_1;
	double_8 = double_8 * double_9;
}
void v_byteReverse( double parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
}
void v_MD5Update( char parameter_1,char parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_3 = 1;
	float float_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int_3 = int_1 + int_2;
	int_2 = int_2 + int_4;
	long_2 = long_1 * long_1;
	long_4 = long_2 + long_3;
	double_1 = double_1 + double_1;
	v_byteReverse(double_2,unsigned_int_1);

	v_MD5Transform(float_1,double_2);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1;
	short_2 = short_1 * short_2;
	char_1 = char_2;
	double_3 = double_2 + double_1;
	char_2 = char_1 + char_1;
	int_2 = int_5 * int_4;
	double_3 = double_3 + double_3;
	int_6 = int_3;
	char_3 = char_3 * char_1;
	float_2 = float_1;
	short_2 = short_1 * short_3;
	short_3 = short_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	double_4 = double_3 * double_2;
	double_4 = double_3 + double_1;
}
void v_MD5Init( int parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = float_1 * float_1;
	long_3 = long_1 + long_2;
	int_1 = int_2;
	int_3 = int_3 + int_1;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void v_gravatar_tooltip( long parameter_1,float parameter_2,char parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	long long_2 = 1;
	int int_8 = 1;
	int int_9 = 1;
	double double_4 = 1;
	double_1 = double_1 * double_1;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1;
	v_MD5Final(int_1,int_2);

	int_4 = int_2 + int_3;
	long_1 = long_1;
	if(1)
	{
	}
	v_MD5Init(int_5);

	double_1 = double_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	short_1 = v__tooltip_content(int_1,int_4);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	v_MD5Update(char_1,char_2,char_2);

	long_1 = long_1 * long_1;
	int_7 = int_3 + int_6;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double_3 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
	int_6 = int_7 * int_4;
	float_1 = v__tooltip_del(long_2);

	unsigned_int_1 = unsigned_int_4;
	int_8 = int_8 + int_9;
	double_4 = double_1 + double_1;
}
long v__cb_link_drag_done(int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float_1 = float_2;
	float_3 = float_2;
	int_3 = int_1 + int_2;
	int_2 = int_2 + int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	int_4 = int_2 + int_3;
	return long_1;
}
void v__cb_link_drag_accept(short parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_1;
	double_1 = double_1 * double_1;
}
short v__cb_link_drag_move(char parameter_2,long parameter_3,double parameter_4,char parameter_5)
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_2;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_1 * double_2;
		}
	}
	return short_1;
}
char v__cb_link_icon_new(char parameter_2,long parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float_1 = float_1 * float_1;
	float_2 = float_2;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 + double_2;
	float_2 = float_1 * float_1;
	short_2 = short_1 * short_1;
	return char_1;
}
long v__cb_link_move(int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	double_1 = double_1 * double_2;
	double_1 = double_1 + double_1;
	float_1 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	v__cb_link_drag_accept(short_1,float_2);

	int_2 = int_1 * int_1;
	double_1 = double_1 * double_2;
	if(1)
	{
		double double_3 = 1;
		float float_3 = 1;
		double double_4 = 1;
		long_1 = v__cb_link_drag_done(int_2);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		double_1 = double_3 * double_3;
		int_2 = int_1 + int_1;
		if(1)
		{
			int int_3 = 1;
			int_1 = int_1 * int_3;
		}
		if(1)
		{
			long long_3 = 1;
			short_1 = v__cb_link_drag_move(char_1,long_2,double_1,char_2);

			long_2 = long_3 * long_3;
		}
		char_1 = v__cb_link_icon_new(char_3,long_2,int_4);

		float_1 = float_3 + float_3;
		double_2 = double_4 + double_2;
	}
	return long_2;
}
float v__cb_link_up_delay()
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	short_1 = short_1 * short_1;
	int_2 = int_1 * int_1;
	double_1 = v__activate_link(double_2,char_1);

	int_4 = int_1 * int_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "o*") > 0)
	{
		int int_5 = 1;
		int int_6 = 1;
		int_1 = int_5 + int_6;
	}
	int_2 = int_1 * int_2;
	return float_1;
}
short v__cb_link_up(double parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double_2 = double_1 + double_2;
	double_2 = double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_4 = 1;
		int_2 = int_1 + int_1;
		int_1 = int_1 + int_3;
		float_1 = v__cb_link_up_delay();

		double_2 = double_2 * double_2;
		short_2 = short_1 * short_2;
		if(1)
		{
			if(1)
			{
				unsigned_int_3 = unsigned_int_2;
			}
			char controller_4[3];
			fgets(controller_4 ,3 ,stdin);
			if(remainder_check(controller_4,100,2))
			{
				short short_3 = 1;
				short_3 = short_1 + short_3;
			}
		}
		short_2 = short_4 * short_2;
	}
	return short_2;
}
void v_term_focus( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	unsigned_int_1 = v__term_is_focused(short_1);

	double_1 = double_1 * double_1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	short_3 = short_2 + short_1;
	float_1 = float_1 * float_2;
	double_2 = double_2;
}
unsigned int v__term_is_focused( short parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	return unsigned_int_1;
}
void v_term_unfocus( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long_1 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "u$") < 0)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 + int_2;
	short_1 = short_1 + short_2;
	unsigned_int_4 = v__term_is_focused(short_1);

}
double v__cb_ctxp_del(float parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	v_term_unfocus(long_1);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_1 * double_1;
	long_2 = long_2;
	v_term_focus(float_1);

	double_2 = double_1;
	return double_3;
}
float v__cb_ctxp_dismissed(char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 * short_2;
	char_2 = char_1 * char_1;
	return float_1;
}
float v__cb_ctxp_link_copy(float parameter_2,int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	v__take_selection_text(short_1,int_1,long_1,uni_para);

	char_2 = char_1 + char_1;
	char_1 = char_1 * char_3;
	double_3 = double_1 * double_2;
	int_2 = int_1 * int_1;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_2 * long_2;
	return float_1;
}
int v__screen_visual_bounds( unsigned int parameter_1)
{
	short short_2 = 1;
	int int_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short_3 = short_1 * short_2;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		short short_4 = 1;
		unsigned int unsigned_int_1 = 1;
		short_2 = short_4 + short_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return int_1;
}
float v__draw_cell( double parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	char_1 = char_1 * char_2;
	char_2 = char_2;
	if(1)
	{
		float_1 = float_1 + float_2;
	}
	int_2 = int_1 * int_1;
	float_2 = float_1 + float_1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		float_2 = float_2;
	}
	if(1)
	{
		if(1)
		{
			char_2 = char_2 + char_2;
		}
		if(1)
		{
			float float_3 = 1;
			float_3 = float_1;
		}
	}
	if(1)
	{
		int int_5 = 1;
		int_4 = int_5;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int_1 = int_2 * int_1;
		unsigned_int_5 = unsigned_int_5;
		float_2 = float_1 + float_2;
		unsigned_int_3 = unsigned_int_1;
		unsigned_int_2 = unsigned_int_6 + unsigned_int_4;
		int_3 = int_4 + int_6;
		int_3 = int_2;
	}
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		int_3 = int_3 * int_6;
	}
	if(1)
	{
		char_2 = char_1;
	}
	if(1)
	{
		short_1 = short_2 * short_2;
	}
	if(1)
	{
		if(1)
		{
			short_2 = short_2 * short_1;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_1 + double_2;
		}
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_2 + char_2;
	}
	return float_4;
}
int v__draw_line( int parameter_1,long parameter_2,long parameter_3,int parameter_4,long parameter_5)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1 + double_1;
	}
	return int_1;
	float_1 = v__draw_cell(double_2,unsigned_int_1,int_2,unsigned_int_1);

}
long v_termpty_backlog_length( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_1 = 1;
	double_2 = double_1 + double_2;
	int_3 = int_1 * int_2;
	short_1 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_2 * short_2;
	int_2 = int_2 * int_3;
	float_3 = float_1 + float_2;
	char_2 = char_1 * char_1;
	short_2 = short_2;
	char_2 = char_3;
	char_2 = char_2 + char_2;
	char_3 = char_2;
	char_1 = char_3 + char_1;
	if(1)
	{
		double_2 = double_2 + double_2;
	}
	double_1 = double_3 + double_2;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_3 + short_1;
	}
	double_1 = double_3 + double_3;
	if(1)
	{
		double_3 = v_verify_beacon(char_4,int_2);

		int_1 = int_1;
	}
	int_5 = int_4 + int_5;
	if(1)
	{
		int_4 = int_5;
	}
	int_3 = int_1 + int_3;
	if(1)
	{
		char_2 = char_2 + char_4;
	}
	int_2 = int_2 + int_5;
	int_6 = int_3 * int_6;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
	float_5 = float_3 * float_4;
	char_2 = char_2 * char_1;
	return long_1;
}
unsigned int v_termio_pty_get( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 + char_2;
	double_1 = double_1 + double_2;
	return unsigned_int_1;
}
double v_termio_textgrid_get( short parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short_1 = short_1 * short_1;
	long_1 = long_1 * long_1;
	return double_1;
}
short v_miniview_colors_get( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	double_1 = double_1 + double_2;
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 * long_2;
		double_1 = double_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_1 = 1;
		long long_3 = 1;
		char_1 = char_1 + char_1;
		long_3 = long_3 * long_3;
	}
	return short_1;
	double_3 = v_termio_textgrid_get(short_2);

}
void v__deferred_renderer()
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_3 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	int int_6 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_5 = 1;
	float float_3 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_5 = 1;
	char char_7 = 1;
	double double_6 = 1;
	double double_8 = 1;
	int int_9 = 1;
	char_1 = char_1 + char_1;
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	int_3 = v__screen_visual_bounds(unsigned_int_3);

	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	int_2 = int_3 + int_3;
	int_2 = int_3 + int_1;
	double_1 = double_2;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	if(1)
	{
		int int_4 = 1;
		int_1 = int_4;
	}
	unsigned_int_1 = unsigned_int_6 * unsigned_int_3;
	char_4 = char_2 * char_3;
	long_2 = long_2 * long_3;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_5;
	if(1)
	{
	}
	long_2 = long_3 * long_2;
	int_3 = int_5 * int_2;
	double_4 = double_3 + double_2;
	unsigned_int_1 = unsigned_int_7 + unsigned_int_1;
	double_2 = double_3 + double_2;
	unsigned_int_3 = unsigned_int_3;
	unsigned_int_4 = v_termio_pty_get(char_3);

	long_4 = v_termpty_backlog_length(unsigned_int_7);

	int_1 = v__draw_line(int_6,long_4,long_5,int_5,long_5);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_8;
	if(1)
	{
		short_1 = v_miniview_colors_get(char_3,double_1);

		double_1 = double_2 * double_4;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = long_1 * long_1;
		if(1)
		{
			int_3 = int_3 * int_3;
		}
		double_3 = double_3 + double_1;
	}
	int_2 = int_1 + int_6;
	float_1 = float_2;
	char_3 = char_2 + char_5;
	if(1)
	{
		long_2 = long_1 + long_5;
	}
	if(1)
	{
		int_6 = v_termpty_cellrow_get(long_3,int_3,float_3);

		unsigned_int_4 = unsigned_int_7 * unsigned_int_8;
	}
	int_3 = int_6;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_8;
	if(1)
	{
		char char_6 = 1;
		char_6 = char_4 * char_2;
		int_8 = int_1 + int_7;
		if(1)
		{
			float_1 = float_1;
			float_2 = float_3 * float_1;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_3 = unsigned_int_4 + unsigned_int_8;
				double_3 = double_1 + double_5;
				int_7 = int_3 * int_3;
				int_7 = v_termio_scroll_get(char_7);

				double_4 = double_3 + double_4;
			}
			if(1)
			{
				double_5 = double_4 * double_4;
				double_6 = double_2;
			}
		}
	}
	if(1)
	{
		double double_7 = 1;
		double_6 = double_7 + double_5;
	}
	double_8 = double_6 * double_4;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_8;
	double_1 = double_8 + double_6;
	int_1 = int_9 + int_8;
}
long v__queue_render( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	v__deferred_renderer();

	unsigned_int_1 = unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "_Y") == 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	return long_1;
}
void v_miniview_redraw( unsigned int parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	long_1 = v__queue_render(int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
}
unsigned int v__block_obj_del( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "[") > 0)
	{
	}
	double_2 = double_1 * double_2;
	unsigned_int_1 = v__smart_media_del(long_1,short_1);

	long_4 = long_2 * long_3;
	double_4 = double_3 * double_1;
	return unsigned_int_1;
}
int v__termpty_is_dblwidth_slow_get( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
		}
	}
	return int_1;
}
long v__termpty_is_dblwidth_get( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return long_1;
	int_1 = v__termpty_is_dblwidth_slow_get(long_1,int_1);

}
short v_term_preedit_str_get( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	char_1 = char_2;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
	}
	return short_1;
}
int v_media_get( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	return int_1;
}
long v__smart_media_clicked(double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_5 = 1;
	long long_1 = 1;
	short_3 = short_1 * short_2;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	int_1 = v_media_get(short_1);

	short_1 = short_2;
	if(1)
	{
		if(1)
		{
			int int_2 = 1;
			int int_4 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int_4 = int_2 + int_3;
			unsigned_int_1 = v_termio_config_get();

			double_3 = double_1 + double_2;
			if(1)
			{
				short short_6 = 1;
				if(1)
				{
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					double_2 = double_2 + double_1;
					unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
					if(1)
					{
						unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
					}
					if(1)
					{
						short short_4 = 1;
						unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
						short_4 = short_3;
						if(1)
						{
							double double_4 = 1;
							short short_5 = 1;
							double_2 = double_2 * double_4;
							double_3 = double_2 * double_1;
							int_3 = v_media_src_type_get(float_1);

							short_4 = short_5;
						}
					}
				}
				short_3 = short_6 + short_2;
			}
		}
	}
	int_3 = int_5 * int_1;
	return long_1;
}
long v_media_control_get( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	return long_1;
}
double v__smart_media_stop(char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	int_1 = int_2;
	return double_1;
}
float v__smart_media_pause(double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long_1 = long_1 + long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "+") < 0)
	{
	}
	int_2 = int_1 + int_2;
	return float_1;
}
double v__smart_media_play(long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	return double_3;
}
unsigned int v__smart_media_del(long parameter_2,short parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	return unsigned_int_1;
}
void v_media_visualize_set( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 * int_1;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
}
void v_media_mute_set( double parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
}
void v_media_volume_set( short parameter_1,double parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	short_1 = short_2;
	int_2 = int_1 * int_1;
}
double v__cb_media_vol(long parameter_2,int parameter_3,short parameter_4)
{
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	short_1 = short_1 * short_1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	v_media_volume_set(short_1,double_1);

	float_1 = float_1;
	double_2 = double_1 * double_2;
	return double_1;
}
float v__cb_media_pos(unsigned int parameter_2,short parameter_3,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	v_media_position_set(double_1,double_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return float_1;
}
float v__cb_media_pos_drag_stop(char parameter_2,long parameter_3,double parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	int_1 = int_1 + int_2;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_2 * int_2;
	int_3 = int_3;
	int_2 = int_2 + int_1;
	double_2 = double_1 + double_2;
	return float_3;
}
void v__cb_media_pos_drag_start(double parameter_2,char parameter_3,long parameter_4)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float_1 = float_1 * float_1;
	short_1 = short_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	float_1 = float_2;
	char_2 = char_1 + char_1;
	v_media_position_set(double_2,double_2);

}
void v_media_stop( short parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	double_1 = double_1;
	double_2 = double_1 * double_1;
}
int v__cb_media_stop(long parameter_2,long parameter_3,double parameter_4)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	v_media_stop(short_1);

	unsigned_int_1 = unsigned_int_1;
	return int_1;
}
long v__cb_media_pause(float parameter_2,float parameter_3,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	v_media_play_set(unsigned_int_1,unsigned_int_1);

	int_2 = int_1 * int_1;
	return long_1;
}
void v_media_play_set( unsigned int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	char_1 = char_1;
	if(1)
	{
		long long_1 = 1;
		long long_3 = 1;
		long_2 = long_1 * long_1;
		long_3 = long_1 + long_3;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "S[") < 0)
	{
		long long_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long_4 = long_2;
		double_1 = double_1 * double_2;
	}
}
void v__cb_media_play(float parameter_2,float parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 + double_1;
	v_media_play_set(unsigned_int_1,unsigned_int_1);

}
void v_media_position_set( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	int_1 = int_1;
	int_3 = int_2 * int_2;
}
float v__cb_mov_ref(double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	float_1 = float_1;
	return float_2;
}
unsigned int v__cb_mov_progress(long parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	return unsigned_int_1;
}
unsigned int v__cb_mov_restart()
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 * char_2;
	double_1 = double_2;
	return unsigned_int_2;
}
float v__cb_mov_decode_stop(char parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	unsigned_int_1 = v__cb_mov_restart();

	char_2 = char_1 + char_2;
	double_2 = double_1 + double_1;
	return float_1;
}
char v__cb_mov_len_change(char parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	return char_1;
}
short v__cb_mov_frame_resize(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long_2 = long_1 + long_1;
	short_1 = v__type_mov_calc(float_1,char_1,short_1,int_1,float_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_2 + short_3;
	return short_4;
}
unsigned int v__cb_mov_frame_decode(long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_3 = int_1 * int_2;
	double_1 = double_1 * double_2;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	int_1 = int_2 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_3 * double_3;
	double_3 = double_3 + double_1;
	if(1)
	{
	}
	double_3 = double_3 + double_2;
	long_2 = long_1 + long_2;
	short_1 = v__type_mov_calc(float_1,char_1,short_1,int_4,float_1);

	double_4 = double_5;
	int_2 = int_1;
	return unsigned_int_1;
}
long v__type_mov_init( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	long long_4 = 1;
	short short_3 = 1;
	long long_5 = 1;
	int int_4 = 1;
	double double_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	short short_7 = 1;
	short short_8 = 1;
	double double_8 = 1;
	char char_2 = 1;
	float float_4 = 1;
	double double_9 = 1;
	int int_5 = 1;
	char char_3 = 1;
	int int_6 = 1;
	double double_10 = 1;
	double double_11 = 1;
	int_2 = int_1 + int_1;
	long_1 = v_theme_apply(unsigned_int_1,double_1,unsigned_int_1);

	double_1 = double_1 * double_1;
	int_2 = int_1 + int_1;
	float_1 = v__cb_media_pos(unsigned_int_1,short_1,short_1);

	double_1 = double_2 + double_2;
	float_1 = float_2 * float_2;
	double_3 = double_3 * double_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = v__cb_mov_frame_decode(long_2);

	int_3 = v__cb_media_stop(long_3,long_1,double_2);

	unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		long_4 = v__cb_media_pause(float_1,float_2,short_3);

		long_1 = long_1 + long_5;
		int_3 = int_4 * int_4;
		double_4 = double_1;
	}
	short_4 = short_5;
	long_5 = long_6 + long_3;
	int_4 = int_2 + int_4;
	double_6 = double_5 * double_1;
	short_6 = v__cb_mov_frame_resize(int_1);

	unsigned_int_3 = v__cb_mov_progress(long_3);

	int_4 = int_1 + int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_5 = unsigned_int_2;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, " ") < 0)
	{
		double_5 = double_2;
	}
	if(1)
	{
		double_5 = double_5 + double_4;
	}
	float_3 = v__cb_mov_decode_stop(char_1);

	int_3 = int_4 * int_3;
	v_media_play_set(unsigned_int_2,unsigned_int_4);

	unsigned_int_4 = unsigned_int_6;
	double_7 = v__cb_media_vol(long_2,int_1,short_7);

	long_1 = long_4 * long_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	short_4 = short_4 * short_8;
	v_media_position_set(double_7,double_8);

	double_1 = double_6;
	short_2 = short_5 + short_3;
	v__cb_media_pos_drag_start(double_7,char_2,long_3);

	float_1 = float_2 * float_2;
	float_1 = float_1 + float_2;
	float_4 = v__cb_mov_ref(double_5);

	double_8 = double_9 + double_2;
	int_2 = int_1;
	v__cb_media_play(float_3,float_4,long_1);

	unsigned_int_4 = unsigned_int_5 + unsigned_int_6;
	int_5 = int_5;
	int_4 = int_5 * int_3;
	char_2 = v__cb_mov_len_change(char_3);

	double_7 = double_8 + double_2;
	int_6 = int_3;
	float_2 = v__cb_media_pos_drag_stop(char_1,long_6,double_9);

	v_media_visualize_set(int_2,int_5);

	double_11 = double_10 * double_4;
	if(1)
	{
		int_4 = int_1 + int_2;
	}
	if(1)
	{
		double_3 = double_6 * double_11;
	}
	return long_4;
	v_media_mute_set(double_6,long_5);

}
short v__cb_edje_preloaded(char parameter_2,float parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	long_1 = long_2;
	char_2 = char_1 + char_1;
	return short_1;
}
float v__type_edje_init()
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	long_2 = long_1 + long_1;
	char_1 = char_1 * char_2;
	int_1 = int_1 * int_1;
	long_1 = long_2 * long_1;
	v_theme_auto_reload_enable(long_1);

	int_1 = int_1 * int_1;
	float_1 = float_1 + float_1;
	short_1 = v__cb_edje_preloaded(char_1,float_1,int_2);

	short_3 = short_2 + short_2;
	int_1 = int_2 + int_1;
	int_3 = int_3 * int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "g") < 0)
		{
			int int_5 = 1;
			unsigned int unsigned_int_1 = 1;
			int_5 = int_3 + int_3;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			char_1 = char_2 + char_1;
		}
	}
	return float_2;
}
int v__type_scale_init()
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_2;
	double_2 = double_1 + double_1;
	char_1 = v__cb_scale_preloaded(float_1,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	long_3 = long_1 * long_2;
	short_3 = short_1 * short_2;
	double_3 = double_1 * double_2;
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_4 = unsigned_int_5;
	int_2 = int_2 + int_1;
	return int_1;
}
unsigned int v__cb_img_frame()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long_1 = long_1 + long_2;
	int_2 = int_1 + int_1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		short short_2 = 1;
		int int_3 = 1;
		short_1 = short_1 + short_2;
		if(1)
		{
			int_2 = int_3 * int_2;
		}
		int_1 = int_2;
		int_1 = int_3 * int_2;
		if(1)
		{
			if(1)
			{
				char char_4 = 1;
				char_4 = char_2 * char_2;
			}
		}
	}
	double_1 = double_1 * double_3;
	long_4 = long_3 + long_3;
	short_1 = short_1;
	return unsigned_int_1;
}
short v__type_img_anim_handle()
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double_2 = double_1 + double_2;
	float_1 = float_1 * float_1;
	double_1 = double_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	long_1 = long_2;
	return short_2;
	unsigned_int_4 = v__cb_img_frame();

}
long v__cb_img_preloaded(double parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	float_5 = float_2 * float_4;
	unsigned_int_1 = unsigned_int_1;
	return long_1;
}
int v__type_img_init( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	long long_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_3 = 1;
	int_1 = int_2;
	float_1 = float_1 * float_1;
	long_3 = long_1 + long_2;
	double_2 = double_1 + double_2;
	float_1 = float_2 * float_1;
	long_4 = long_1 + long_2;
	float_1 = float_2 * float_2;
	char_3 = char_1 * char_2;
	long_5 = v__cb_img_preloaded(double_3,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	double_4 = double_1 * double_3;
	short_1 = v__type_img_anim_handle();

	char_4 = char_5;
	char_4 = char_1 + char_3;
	return int_3;
}
unsigned int v__url_compl_cb(int parameter_2,int uni_para)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	char char_4 = 1;
	int int_2 = 1;
	float_1 = float_1 * float_1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1;
	char controller4vul_1405[2];
	fgets(controller4vul_1405 ,2 ,stdin);
	if( strcmp( controller4vul_1405, "y") < 0)
	{
		int_1 = v__smart_calculate(int_1,uni_para);

	}
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	int_1 = int_1;
	int_1 = int_1;
	char_1 = char_2;
	float_1 = float_1 + float_1;
	long_1 = long_1 + long_1;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1;
	short_3 = short_3 + short_1;
	char_3 = char_1 * char_2;
	double_3 = double_1 + double_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	short_4 = short_3 * short_2;
	long_3 = long_1 * long_2;
	float_1 = float_1 + float_2;
	short_2 = short_4 + short_3;
	float_2 = float_2;
	char_4 = char_2 * char_3;
	int_2 = int_1 + int_2;
	return unsigned_int_3;
}
unsigned int v__url_prog_cb(int parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_1;
	char_2 = char_1 * char_1;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		double double_1 = 1;
		short short_1 = 1;
		long_1 = long_1 * long_1;
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_2 = long_3;
		}
		double_1 = double_1 * double_1;
		short_1 = short_1 + short_1;
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int_2 = int_2 + int_1;
			int_1 = int_2 * int_2;
			int_4 = int_3 * int_2;
			int_1 = int_3 + int_4;
		}
	}
	return unsigned_int_1;
}
short v__type_thumb_calc( unsigned int parameter_1,short parameter_2,short parameter_3,long parameter_4,unsigned int parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	short short_1 = 1;
	float_1 = float_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		float_2 = float_2 + float_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		long_3 = long_1 * long_2;
		long_6 = long_4 + long_5;
		long_6 = long_4;
		if(1)
		{
			long long_7 = 1;
			char char_2 = 1;
			long_7 = long_6;
			char_1 = char_1 + char_2;
			if(1)
			{
				long_2 = long_1 + long_2;
			}
		}
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			unsigned_int_2 = unsigned_int_2;
			char_1 = char_3 + char_4;
		}
		unsigned_int_3 = unsigned_int_2;
		int_1 = int_1 * int_2;
		long_4 = long_3 + long_5;
		int_3 = int_2 * int_2;
	}
	int_3 = int_2 + int_3;
	float_2 = float_3 * float_1;
	return short_1;
}
short v__type_mov_calc( float parameter_1,char parameter_2,short parameter_3,int parameter_4,float parameter_5)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_3 = float_1 + float_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		char char_4 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		short short_3 = 1;
		double_2 = double_3;
		char_1 = char_1 + char_2;
		double_4 = double_2 * double_1;
		if(1)
		{
			char char_3 = 1;
			char char_5 = 1;
			char_5 = char_3 + char_4;
		}
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, "CP") < 0)
		{
			int_5 = int_1 + int_4;
		}
		if(1)
		{
			double double_5 = 1;
			double_1 = double_1 + double_5;
			double_5 = double_2 * double_1;
			if(1)
			{
				double_3 = double_5 * double_3;
				unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
				if(1)
				{
					short short_2 = 1;
					short_2 = short_1 + short_1;
				}
			}
		}
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_4 = long_3 * long_3;
			unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
			if(1)
			{
				int_5 = int_6 * int_1;
				unsigned_int_1 = unsigned_int_2;
				if(1)
				{
					double double_6 = 1;
					double_6 = double_1;
				}
			}
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
			int_6 = int_2 * int_6;
		}
		char_1 = char_1 + char_4;
		int_7 = int_7 + int_3;
		short_1 = short_3 + short_3;
		int_3 = int_4 + int_7;
	}
	float_6 = float_4 * float_5;
	float_1 = float_1 * float_3;
	return short_1;
}
long v__type_edje_calc( int parameter_1,int parameter_2,double parameter_3,short parameter_4,float parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return long_1;
}
float v__type_img_calc( char parameter_1,int parameter_2,char parameter_3,int parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	double double_6 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "eW") < 0)
	{
		short short_1 = 1;
		short_2 = short_1 + short_1;
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		short short_5 = 1;
		long_1 = long_1 * long_2;
		if(1)
		{
			float float_2 = 1;
			int_2 = int_2 * int_3;
			float_1 = float_2;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				short short_3 = 1;
				short short_4 = 1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
				short_2 = short_3 + short_4;
				if(1)
				{
					double_3 = double_2 + double_1;
				}
			}
		}
		if(1)
		{
			char char_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char_1 = char_2;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				double_2 = double_4 + double_1;
				unsigned_int_4 = unsigned_int_5;
				if(1)
				{
					long_1 = long_1 * long_1;
				}
			}
			if(1)
			{
				int int_4 = 1;
				int_1 = int_4 + int_4;
				double_5 = double_2 * double_1;
			}
		}
		if(1)
		{
			char char_3 = 1;
			char_1 = char_3 + char_3;
			double_2 = double_3 + double_1;
		}
		double_5 = double_4 + double_4;
		short_5 = short_5 * short_5;
		unsigned_int_2 = unsigned_int_4;
		int_1 = int_3 + int_2;
	}
	long_2 = long_1 + long_3;
	double_6 = double_2 * double_3;
	return float_1;
}
char v__cb_scale_preloaded(float parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_1 * int_3;
		int_2 = int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_3 = int_2;
		double_1 = double_1 * double_2;
		int_2 = int_4 + int_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_2;
	}
	return char_1;
}
unsigned int v__type_scale_calc( short parameter_1,float parameter_2,long parameter_3,short parameter_4,int parameter_5,int uni_para)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	double double_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_6 = 1;
	char char_5 = 1;
	short short_4 = 1;
	char char_6 = 1;
	char char_7 = 1;
	double double_7 = 1;
	char * vul_var;
	short_1 = short_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1 * double_1;
		double_2 = double_1 * double_1;
	}
	char controller4vul_1413[2];
	fgets(controller4vul_1413 ,2 ,stdin);
	if( strcmp( controller4vul_1413, "z") > 0)
	{
		char char_3 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		double_1 = double_2 * double_2;
		char controller4vul_1414[2];
		fgets(controller4vul_1414 ,2 ,stdin);
		if( strcmp( controller4vul_1414, "w") > 0)
		{
			vul_var=(char*)malloc(20*sizeof(char));
			strcpy(vul_var, "CWE-761");
			char_3 = char_1 * char_2;
			unsigned_int_4 = unsigned_int_2;
			char controller4vul_1415[3];
			fgets(controller4vul_1415 ,3 ,stdin);
			if( strcmp( controller4vul_1415, "h.") < 0)
			{
				unsigned_int_5 = unsigned_int_1;
				float_1 = float_1 * float_2;
				char controller4vul_1416[2];
				fgets(controller4vul_1416 ,2 ,stdin);
				if( strcmp( controller4vul_1416, "8") > 0)
				{
					if(uni_para == 893)
					{
						vul_var = vul_var + 1;
					}
					free(vul_var);
					int_1 = int_1 * int_2;
				}
			}
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_6;
			char_1 = char_4 * char_3;
			if(1)
			{
				double double_3 = 1;
				double double_5 = 1;
				double_5 = double_3 * double_4;
				short_3 = short_2 + short_3;
				if(1)
				{
					unsigned_int_5 = unsigned_int_7 + unsigned_int_4;
				}
			}
		}
		if(1)
		{
			int_4 = int_3 + int_1;
			double_1 = double_6 + double_2;
		}
		unsigned_int_8 = unsigned_int_2 * unsigned_int_4;
		char_5 = char_2 + char_2;
		unsigned_int_9 = unsigned_int_8 + unsigned_int_7;
		short_4 = short_2 + short_3;
	}
	if(1)
	{
		unsigned int unsigned_int_10 = 1;
		int int_5 = 1;
		unsigned_int_10 = unsigned_int_7 + unsigned_int_6;
		char_5 = char_2 + char_6;
		double_4 = double_1 * double_4;
		if(1)
		{
			unsigned_int_5 = unsigned_int_5;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 * long_2;
		}
		if(1)
		{
			int int_6 = 1;
			char_1 = char_7 + char_5;
			unsigned_int_5 = unsigned_int_7;
			int_6 = int_4 * int_5;
			int_3 = int_4 * int_4;
			short_4 = short_2 + short_2;
			int_2 = int_3 * int_5;
			int_2 = int_1 * int_3;
			float_2 = float_1 + float_1;
			int_1 = int_5 * int_3;
		}
		int_5 = int_4 * int_2;
		unsigned_int_7 = unsigned_int_5 * unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_2 + unsigned_int_4;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	char_7 = char_7;
	char_4 = char_6 * char_1;
	double_7 = double_2 * double_6;
}
char v__unsmooth_timeout(int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	double_4 = double_2 * double_2;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_1411[3];
	fgets(controller4vul_1411 ,3 ,stdin);
	if( strcmp( controller4vul_1411, "+,") > 0)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
		char controller4vul_1412[2];
		fgets(controller4vul_1412 ,2 ,stdin);
		if( strcmp( controller4vul_1412, "L") > 0)
		{
			unsigned_int_3 = v__type_scale_calc(short_1,float_1,long_1,short_2,int_1,uni_para);

			unsigned_int_3 = unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		}
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	return char_1;
}
double v__smooth_handler( short parameter_1,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	short_1 = short_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	char controller4vul_1407[3];
	fgets(controller4vul_1407 ,3 ,stdin);
	if( strcmp( controller4vul_1407, "Jm") > 0)
	{
		char controller4vul_1408[3];
		fgets(controller4vul_1408 ,3 ,stdin);
		if( strcmp( controller4vul_1408, "[l") < 0)
		{
			double double_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double_1 = double_1 * double_1;
			short_2 = short_2 + short_1;
			char controller4vul_1409[3];
			fgets(controller4vul_1409 ,3 ,stdin);
			if( strcmp( controller4vul_1409, "A^") < 0)
			{
				double double_2 = 1;
				double double_3 = 1;
				double_1 = double_2 + double_3;
				char controller4vul_1410[2];
				fgets(controller4vul_1410 ,2 ,stdin);
				if( strcmp( controller4vul_1410, "S") > 0)
				{
					int int_2 = 1;
					int int_3 = 1;
					char_1 = v__unsmooth_timeout(uni_para);

					int_3 = int_1 + int_2;
				}
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
			}
			unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		}
	}
	if(1)
	{
		long long_3 = 1;
		if(1)
		{
			int_1 = int_1;
		}
		long_3 = long_3 * long_1;
	}
	return double_4;
}
int v__smart_calculate( int parameter_1,int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	double_1 = double_1 + double_1;
	float_1 = float_1 * float_2;
	char controller4vul_1406[2];
	fgets(controller4vul_1406 ,2 ,stdin);
	if( strcmp( controller4vul_1406, "*") > 0)
	{
		double_1 = v__smooth_handler(short_1,uni_para);

	}
	float_3 = float_2 * float_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "6c") > 0)
	{
		float_2 = float_1 + float_1;
	}
	int_3 = int_1 + int_2;
	unsigned_int_4 = unsigned_int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	long_3 = long_1 + long_2;
	int_3 = int_3 + int_1;
	short_1 = short_1 + short_1;
	int_4 = int_1 + int_4;
	double_2 = double_2;
	int_2 = int_4;
	double_3 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	int_5 = int_5 * int_2;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
	int_6 = int_4 + int_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char_3 = char_1 * char_2;
		char_2 = char_4 * char_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4;
		int_3 = int_3 * int_2;
	}
	return int_1;
}
short v__smart_move( double parameter_1,int parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_1 = long_1 * long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "=") < 0)
	{
	}
	short_2 = short_1 + short_1;
	return short_2;
}
void v__smart_resize( float parameter_1,float parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_2 = double_1 * double_1;
	int_1 = int_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "x7") < 0)
	{
	}
	double_4 = double_2 * double_3;
	long_2 = long_1 * long_2;
}
float v__smart_del( float parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	float float_3 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		int_1 = int_2 * int_2;
		int_1 = int_1 * int_1;
		int_3 = int_2 * int_1;
	}
	int_3 = int_1 * int_4;
	int_1 = int_2 + int_2;
	int_1 = int_1 + int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
			double_1 = double_1 + double_2;
		}
		char_3 = char_1 * char_2;
	}
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		double double_4 = 1;
		double_1 = double_4 + double_2;
	}
	char controller_13[2];
	fgets(controller_13 ,2 ,stdin);
	if( strcmp( controller_13, "k") < 0)
	{
		long_3 = long_3;
	}
	if(1)
	{
		char char_4 = 1;
		char_4 = char_4 + char_3;
	}
	if(1)
	{
		double_2 = double_3 + double_1;
	}
	if(1)
	{
		float_1 = float_2 + float_2;
	}
	if(1)
	{
		int_1 = int_3 * int_4;
	}
	if(1)
	{
		long_1 = long_3 + long_2;
	}
	double_2 = double_5 + double_3;
	unsigned_int_1 = unsigned_int_2;
	return float_3;
}
int v__smart_add( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
	int_1 = int_1 + int_1;
	double_1 = double_1;
	char_2 = char_1 + char_1;
	short_2 = short_1 * short_2;
	int_1 = int_1 * int_1;
	int_2 = int_2 * int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	int_1 = int_2;
	return int_2;
}
float v__smart_init()
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_2 = 1;
	int_1 = v__smart_add(short_1);

	float_1 = float_1;
	short_3 = short_2 + short_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = v__smart_move(double_1,int_1,unsigned_int_3);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	short_2 = short_1 + short_2;
	float_2 = v__smart_del(float_3);

	double_1 = double_1 * double_1;
	int_1 = v__smart_calculate(int_1,-1 );

	char_1 = char_2;
	v__smart_resize(float_1,float_1,char_2);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	char_4 = char_1 + char_3;
	double_1 = double_2 * double_1;
	return float_2;
}
char v_media_add( char parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4,int parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int int_5 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_6 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_7 = 1;
	double double_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	short short_6 = 1;
	int int_10 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		double_2 = double_2 * double_1;
	}
	float_1 = float_1 * float_1;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	double_3 = double_3 + double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	short_1 = short_2 * short_1;
	double_4 = double_1 + double_3;
	int_1 = int_1 + int_1;
	char controller4vul_1399[3];
	fgets(controller4vul_1399 ,3 ,stdin);
	if( strcmp( controller4vul_1399, "|,") < 0)
	{
		char controller4vul_1400[2];
		fgets(controller4vul_1400 ,2 ,stdin);
		if( strcmp( controller4vul_1400, "6") < 0)
		{
			int int_3 = 1;
			char char_2 = 1;
			float float_2 = 1;
			long long_3 = 1;
			int_1 = int_2;
			int_3 = int_3 + int_3;
			if(1)
			{
				int_2 = int_4;
				char_2 = char_1 + char_2;
				int_2 = int_1 + int_5;
			}
			if(1)
			{
				short_2 = short_1 * short_3;
				unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
				char_4 = char_3 + char_3;
			}
			if(1)
			{
				float float_3 = 1;
				float_3 = float_2 * float_1;
			}
			if(1)
			{
				int_1 = int_5 * int_5;
			}
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
			}
			if(1)
			{
				short_3 = short_4 + short_3;
			}
			if(1)
			{
				long_3 = long_3 + long_1;
			}
			if(1)
			{
				unsigned_int_7 = unsigned_int_1 * unsigned_int_6;
				short_3 = short_1 + short_4;
				short_3 = short_1 + short_4;
				double_5 = double_5 * double_4;
				double_2 = double_1 + double_6;
				long_3 = long_2 + long_3;
				int_6 = int_1;
			}
			char controller4vul_1401[3];
			fgets(controller4vul_1401 ,3 ,stdin);
			if( strcmp( controller4vul_1401, "SZ") < 0)
			{
				int_1 = int_3 + int_2;
				short_3 = short_4 + short_1;
				int_5 = int_5 * int_2;
				char controller4vul_1402[2];
				fgets(controller4vul_1402 ,2 ,stdin);
				if( strcmp( controller4vul_1402, "{") > 0)
				{
					unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
					if(1)
					{
						char_2 = char_2 + char_1;
						double_1 = double_5 * double_4;
					}
					char controller4vul_1403[3];
					fgets(controller4vul_1403 ,3 ,stdin);
					if( strcmp( controller4vul_1403, "^N") < 0)
					{
						double_3 = double_1 + double_6;
						char controller4vul_1404[3];
						fgets(controller4vul_1404 ,3 ,stdin);
						if( strcmp( controller4vul_1404, "ds") > 0)
						{
							unsigned_int_3 = v__url_compl_cb(int_1,uni_para);

							unsigned_int_2 = unsigned_int_7 + unsigned_int_6;
							double_1 = double_3 + double_4;
							short_3 = short_3 + short_3;
						}
						if(1)
						{
							long long_4 = 1;
							float float_5 = 1;
							short_4 = short_3 * short_1;
							unsigned_int_1 = unsigned_int_3 * unsigned_int_6;
							int_5 = int_5 + int_5;
							long_4 = long_3 + long_4;
							long_2 = long_2 + long_3;
							float_2 = float_4 * float_2;
							float_5 = float_4;
							unsigned_int_5 = unsigned_int_2 * unsigned_int_8;
							int_3 = int_2;
						}
					}
				}
				if(1)
				{
					char_4 = char_2 + char_2;
				}
			}
		}
		if(1)
		{
			char_3 = char_4;
		}
	}
	if(1)
	{
		if(1)
		{
			double_6 = double_4 + double_4;
			int_6 = int_6 * int_5;
		}
	}
	if(1)
	{
		float float_6 = 1;
		unsigned int unsigned_int_9 = 1;
		double double_8 = 1;
		short short_5 = 1;
		if(1)
		{
			double_1 = double_1 * double_5;
			float_4 = float_6;
		}
		unsigned_int_6 = unsigned_int_9 * unsigned_int_5;
		if(1)
		{
			double_5 = double_6 * double_1;
			unsigned_int_7 = unsigned_int_8 * unsigned_int_7;
		}
		int_2 = int_7 + int_1;
		if(1)
		{
			double_2 = double_7;
			double_2 = double_7 + double_5;
		}
		double_7 = double_7;
		if(1)
		{
			float float_7 = 1;
			float_4 = float_7 + float_6;
			char_1 = char_3 * char_1;
		}
		double_4 = double_8;
		short_2 = short_5 + short_4;
	}
	unsigned_int_6 = unsigned_int_1 * unsigned_int_7;
	int_5 = int_8;
	double_2 = double_7 * double_7;
	int_4 = int_1 * int_1;
	int_8 = int_9 * int_6;
	short_6 = short_3;
	int_7 = int_10;
	int_10 = int_8 + int_6;
	if(1)
	{
		double_2 = double_4 * double_2;
	}
	return char_4;
}
char v__block_media_activate( unsigned int parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	short short_6 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_4 = 1;
	int int_8 = 1;
	char char_3 = 1;
	int int_9 = 1;
	char char_4 = 1;
	long long_2 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	char controller4vul_1398[3];
	fgets(controller4vul_1398 ,3 ,stdin);
	if( strcmp( controller4vul_1398, "Jl") > 0)
	{
		char_1 = v_media_add(char_2,unsigned_int_3,float_1,int_1,int_1,uni_para);

		short_2 = short_1 + short_1;
	}
	if(1)
	{
		short_4 = short_2 + short_3;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		short short_5 = 1;
		short_6 = short_2 + short_5;
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2 * int_3;
	}
	float_2 = float_2 * float_1;
	int_6 = int_4 + int_5;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	int_7 = int_3 + int_4;
	double_1 = double_4 * double_1;
	int_7 = int_3 * int_8;
	char_3 = char_2 + char_1;
	int_1 = int_8 * int_9;
	float_1 = float_1 * float_2;
	char_4 = char_1 + char_2;
	if(1)
	{
		long_2 = long_1 * long_2;
		short_3 = short_2 * short_4;
	}
	short_6 = short_3 * short_1;
	char_6 = char_3 * char_5;
	int_8 = int_4;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2 + long_2;
	}
	return char_7;
}
int v__block_edje_message_cb(int parameter_2,short parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_7 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	float float_8 = 1;
	unsigned int unsigned_int_11 = 1;
	double double_6 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_8 = 1;
	double double_7 = 1;
	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1;
	long_2 = long_2 * long_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	}
	int_1 = int_2;
	if(1)
	{
	}
	float_1 = float_1;
	double_2 = double_1 + double_1;
	long_1 = long_2 + long_1;
	float_2 = float_1 * float_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	double_3 = double_3 + double_1;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_1;
	double_3 = double_1 + double_1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_6;
	double_2 = double_3 + double_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	int_3 = int_3 + int_1;
	float_4 = float_2 + float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_3 = char_3 * char_4;
		float_6 = float_1 + float_5;
	}
	int_4 = int_1 + int_2;
	int_5 = int_2;
	short_1 = short_1 * short_2;
	unsigned_int_7 = unsigned_int_4;
	double_3 = double_3 + double_4;
	double_5 = double_2 * double_5;
	float_3 = float_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_1 = int_4 * int_3;
		double_4 = double_2 + double_1;
		int_6 = int_3 * int_3;
	}
	int_2 = int_5;
	int_5 = int_5 + int_3;
	v_termpty_write(float_4,int_3,int_4);

	short_4 = short_1 + short_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	float_5 = float_7;
	long_2 = long_1 + long_2;
	long_1 = long_1 * long_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short_4 = short_4 * short_2;
		long_3 = long_3 + long_1;
		unsigned_int_9 = unsigned_int_4 * unsigned_int_8;
	}
	unsigned_int_10 = unsigned_int_5 + unsigned_int_7;
	unsigned_int_10 = unsigned_int_3 * unsigned_int_6;
	long_3 = long_2;
	unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
	float_1 = float_8 + float_1;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_10;
	float_4 = float_6 + float_8;
	short_3 = short_4 * short_3;
	unsigned_int_11 = unsigned_int_9 + unsigned_int_10;
	char_3 = char_4 * char_2;
	double_6 = double_2 * double_5;
	unsigned_int_8 = unsigned_int_2 + unsigned_int_6;
	int_6 = int_3 + int_2;
	float_3 = float_6 * float_4;
	short_3 = short_3 + short_3;
	short_6 = short_5 + short_1;
	char_2 = char_4;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int int_7 = 1;
		float_6 = float_3 * float_1;
		int_5 = int_7 * int_8;
		double_1 = double_3 + double_2;
	}
	double_4 = double_6 * double_7;
	unsigned_int_4 = unsigned_int_8 * unsigned_int_4;
	short_1 = short_6 + short_6;
	float_1 = float_3 + float_2;
	char_1 = char_3 + char_1;
	int_2 = int_5 * int_8;
	int_4 = int_1 + int_8;
	int_2 = int_8 + int_1;
	float_1 = float_1 * float_4;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		long_2 = long_3 + long_2;
		char_1 = char_4 * char_4;
		int_3 = int_5 * int_1;
	}
	long_1 = long_3 * long_3;
	unsigned_int_10 = unsigned_int_5;
	int_1 = int_3 + int_8;
	return int_2;
}
void v_termpty_write( float parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = double_2;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
}
int v__block_edje_signal_cb(short parameter_2,int parameter_3,long parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_1;
	char_1 = char_2;
	long_1 = long_1 + long_2;
	short_2 = short_1 * short_2;
	char_3 = char_3 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	long_2 = long_3;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double_2 = double_1 * double_1;
		double_3 = double_4;
		float_3 = float_1 * float_2;
		v_termpty_write(float_1,int_2,int_3);

		int_4 = int_2 * int_2;
		int_4 = int_4 + int_1;
		double_3 = double_4 + double_4;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		short short_3 = 1;
		double double_5 = 1;
		short_3 = short_2 * short_1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		double_5 = double_3 + double_5;
	}
	return int_3;
}
void v_termpty_block_chid_update( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
	}
	int_2 = int_1 + int_1;
}
short v__block_edje_cmds( float parameter_1,int parameter_2,long parameter_3,float parameter_4)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	v_termpty_block_chid_update(double_1,unsigned_int_1);

	int_1 = v__block_edje_signal_cb(short_1,int_2,long_1);

	float_1 = float_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
	int_2 = v__block_edje_message_cb(int_3,short_2,int_1);

}
void v_homedir_get( char parameter_1,double parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	float_1 = float_1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
		int_1 = int_1 * int_1;
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1;
		}
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
}
double v__block_edje_activate( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char_1 = v_config_theme_path_default_get(float_1);

	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		int_1 = int_2 * int_1;
	}
	if(1)
	{
		float float_2 = 1;
		short_2 = v__block_edje_cmds(float_1,int_2,long_2,float_1);

		float_2 = float_1 * float_2;
		if(1)
		{
			float float_3 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			float_3 = float_1 * float_1;
		}
		if(1)
		{
			long long_3 = 1;
			long_2 = long_1 * long_3;
			int_1 = int_1 + int_1;
		}
	}
	char_3 = char_2 + char_2;
	double_1 = double_1 * double_2;
	v_homedir_get(char_4,double_3);

	double_3 = double_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	}
	return double_2;
}
unsigned int v__block_activate( char parameter_1,int parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char_3 = char_1 + char_2;
	long_3 = long_1 * long_2;
	char controller4vul_1397[3];
	fgets(controller4vul_1397 ,3 ,stdin);
	if( strcmp( controller4vul_1397, "vq") > 0)
	{
		char_4 = v__block_media_activate(unsigned_int_1,int_1,uni_para);

	}
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
		long_3 = long_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_2;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		long long_4 = 1;
		long_4 = long_1 * long_2;
	}
	return unsigned_int_4;
}
long v_termpty_block_get( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, " ") > 0)
	{
	}
	return long_1;
}
int v_termpty_block_id_get( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long_1 = long_1;
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	double_1 = double_2;
	short_1 = short_2;
	return int_1;
}
void v_termpty_backscroll_adjust( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	double_1 = v_verify_beacon(char_1,int_1);

	float_1 = float_1 * float_2;
	double_1 = double_2 + double_1;
}
unsigned int v__smart_apply( unsigned int parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	long long_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_7 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_5 = 1;
	double double_3 = 1;
	int int_7 = 1;
	long long_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_7 = 1;
	char char_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_6 = 1;
	float float_7 = 1;
	double double_9 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_8 = 1;
	long long_8 = 1;
	int int_9 = 1;
	short short_8 = 1;
	long long_9 = 1;
	long long_10 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	char char_9 = 1;
	int int_11 = 1;
	double double_10 = 1;
	char char_10 = 1;
	unsigned int unsigned_int_13 = 1;
	unsigned int unsigned_int_14 = 1;
	short short_9 = 1;
	long long_11 = 1;
	long long_12 = 1;
	float float_8 = 1;
	int_1 = int_1 * int_1;
	int_2 = int_2 + int_2;
	short_3 = short_1 * short_2;
	double_1 = double_1 + double_1;
	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1;
	double_2 = double_1 * double_2;
	long_4 = long_2 * long_3;
	long_1 = long_4 + long_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	double_1 = double_2 * double_2;
	short_6 = short_4 * short_5;
	long_4 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		int_3 = int_3 * int_4;
		short_7 = short_5 + short_5;
		char_1 = char_1;
		if(1)
		{
			int_2 = int_1 * int_4;
		}
		float_1 = float_1 + float_1;
		if(1)
		{
			long_2 = long_3 + long_4;
		}
		long_3 = long_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						int_1 = int_5 + int_6;
					}
					long_3 = long_5 + long_3;
				}
				double_3 = double_1 + double_3;
				if(1)
				{
					int_7 = int_5;
				}
				if(1)
				{
					long_4 = long_6 + long_3;
				}
				long_4 = long_5;
				double_5 = double_4 * double_2;
				char_3 = char_2 * char_3;
				double_3 = double_4 + double_3;
				double_2 = double_6 + double_4;
				char_3 = char_2 + char_1;
			}
			char controller4vul_1393[2];
			fgets(controller4vul_1393 ,2 ,stdin);
			if( strcmp( controller4vul_1393, "^") < 0)
			{
				float float_2 = 1;
				float float_3 = 1;
				short_7 = short_2;
				short_3 = short_7 + short_2;
				if(1)
				{
					if(1)
					{
						double_5 = double_2 * double_4;
					}
					double_7 = double_2 + double_4;
					short_5 = short_7 + short_7;
					int_4 = int_3 + int_4;
					int_3 = int_2;
					double_1 = double_6 + double_8;
					int_2 = int_7 + int_6;
					char_2 = char_2;
					unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
					char_4 = char_1 + char_1;
					unsigned_int_6 = unsigned_int_3 * unsigned_int_3;
					unsigned_int_7 = unsigned_int_5;
					unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
					if(1)
					{
						long_4 = long_7 * long_1;
						char_4 = char_2 * char_5;
						unsigned_int_6 = unsigned_int_1 + unsigned_int_2;
						double_2 = double_2 * double_3;
						float_4 = float_2 + float_3;
					}
				}
				char controller4vul_1394[2];
				fgets(controller4vul_1394 ,2 ,stdin);
				if( strcmp( controller4vul_1394, ":") < 0)
				{
					char controller4vul_1395[2];
					fgets(controller4vul_1395 ,2 ,stdin);
					if( strcmp( controller4vul_1395, "#") < 0)
					{
						char controller4vul_1396[3];
						fgets(controller4vul_1396 ,3 ,stdin);
						if( strcmp( controller4vul_1396, "YK") < 0)
						{
							unsigned_int_1 = v__block_activate(char_1,int_1,uni_para);

							unsigned_int_7 = unsigned_int_3 * unsigned_int_3;
						}
						int_6 = int_3 + int_7;
					}
					float_3 = float_2 * float_3;
					if(1)
					{
						double_7 = double_4 + double_6;
					}
					if(1)
					{
						double_8 = double_2 * double_5;
					}
					float_4 = float_5 * float_4;
					double_3 = double_8 * double_1;
					unsigned_int_8 = unsigned_int_8 + unsigned_int_6;
					float_5 = float_6 + float_3;
					long_4 = long_3 * long_1;
					unsigned_int_4 = unsigned_int_6 * unsigned_int_3;
					if(1)
					{
						float_4 = float_6;
					}
				}
				if(1)
				{
					int int_8 = 1;
					int int_10 = 1;
					float_2 = float_2 + float_7;
					int_2 = int_5;
					double_5 = double_4 * double_9;
					int_1 = int_2 + int_5;
					int_8 = int_5 + int_4;
					double_8 = double_3 + double_9;
					if(1)
					{
						unsigned_int_2 = unsigned_int_7 + unsigned_int_7;
						char_7 = char_6 + char_4;
					}
					if(1)
					{
						unsigned_int_9 = unsigned_int_9;
						int_3 = int_3 + int_7;
					}
					if(1)
					{
						unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
					}
					if(1)
					{
						if(1)
						{
							long_1 = long_2;
						}
						if(1)
						{
							short_5 = short_5 * short_4;
						}
					}
					if(1)
					{
						short_1 = short_6 + short_5;
					}
					if(1)
					{
						unsigned_int_7 = unsigned_int_4;
					}
					if(1)
					{
						int_3 = int_6 * int_4;
						short_6 = short_1 + short_4;
						long_4 = long_7 * long_4;
						double_3 = double_9 + double_6;
						double_3 = double_4 * double_2;
						char_1 = char_3 + char_8;
						unsigned_int_5 = unsigned_int_4 * unsigned_int_9;
					}
					if(1)
					{
						long_3 = long_6 * long_8;
					}
					if(1)
					{
						unsigned_int_7 = unsigned_int_1;
					}
					if(1)
					{
						if(1)
						{
							int_8 = int_4 * int_9;
						}
						long_4 = long_2 * long_3;
					}
					float_4 = float_5 * float_6;
					double_1 = double_4 * double_7;
					short_8 = short_6 * short_5;
					int_8 = int_6 * int_6;
					if(1)
					{
						int_1 = int_9 * int_2;
						double_6 = double_9;
					}
					if(1)
					{
						long_10 = long_7 * long_9;
						unsigned_int_9 = unsigned_int_10 * unsigned_int_1;
					}
					unsigned_int_9 = unsigned_int_4 * unsigned_int_1;
					int_5 = int_5 + int_10;
					char_6 = char_3 * char_3;
					unsigned_int_2 = unsigned_int_9 + unsigned_int_7;
					if(1)
					{
						unsigned_int_11 = unsigned_int_1 + unsigned_int_11;
					}
				}
			}
		}
		short_5 = short_1 * short_7;
		if(1)
		{
			char_6 = char_1;
		}
	}
	char_5 = char_3 + char_9;
	if(1)
	{
		int_11 = int_1;
		long_3 = long_1 * long_1;
		unsigned_int_8 = unsigned_int_1 + unsigned_int_9;
		int_6 = int_2 + int_3;
		double_9 = double_1 + double_2;
		long_8 = long_3 * long_6;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				unsigned int unsigned_int_12 = 1;
				float_4 = float_5 + float_6;
				double_9 = double_2 * double_1;
				int_5 = int_6 + int_9;
				if(1)
				{
					double_2 = double_6 * double_10;
				}
				char_4 = char_3;
				if(1)
				{
					if(1)
					{
						char_8 = char_8 * char_3;
						char_4 = char_7 + char_1;
						float_4 = float_1 + float_7;
					}
				}
				if(1)
				{
					unsigned_int_5 = unsigned_int_10;
					double_9 = double_2;
				}
				int_1 = int_4 * int_5;
				double_5 = double_6 * double_1;
				long_2 = long_10;
				float_4 = float_6 * float_6;
				char_7 = char_10 + char_1;
				double_5 = double_6 * double_8;
				unsigned_int_9 = unsigned_int_2 + unsigned_int_12;
				char_3 = char_2 + char_3;
				double_8 = double_10 + double_7;
				unsigned_int_13 = unsigned_int_1 * unsigned_int_3;
				int_7 = int_9;
				if(1)
				{
					int int_12 = 1;
					int_11 = int_7 + int_12;
					double_7 = double_8 + double_10;
					unsigned_int_2 = unsigned_int_12;
					double_5 = double_7;
					unsigned_int_5 = unsigned_int_4;
					float_4 = float_4 + float_7;
					unsigned_int_8 = unsigned_int_4 * unsigned_int_1;
					int_5 = int_4 + int_6;
					double_9 = double_1 + double_4;
					int_4 = int_5 + int_9;
				}
				unsigned_int_3 = unsigned_int_1 + unsigned_int_6;
				if(1)
				{
					if(1)
					{
						double_9 = double_5 * double_1;
						unsigned_int_14 = unsigned_int_12 * unsigned_int_2;
					}
				}
			}
			double_4 = double_9 * double_6;
		}
		short_1 = short_6 + short_1;
		short_7 = short_1 + short_8;
	}
	double_7 = double_10 + double_9;
	if(1)
	{
		double double_11 = 1;
		unsigned_int_6 = unsigned_int_11 * unsigned_int_2;
		double_8 = double_11 * double_5;
		long_7 = long_2 * long_1;
	}
	if(1)
	{
		char_1 = char_8 * char_6;
	}
	if(1)
	{
		double_3 = double_2 + double_3;
	}
	short_4 = short_9 * short_5;
	double_5 = double_9 + double_10;
	long_7 = long_11 + long_12;
	if(1)
	{
		double double_12 = 1;
		int int_13 = 1;
		unsigned_int_14 = unsigned_int_9;
		double_5 = double_2 * double_5;
		unsigned_int_6 = unsigned_int_7 + unsigned_int_9;
		char_3 = char_6 + char_5;
		unsigned_int_9 = unsigned_int_9 + unsigned_int_11;
		double_7 = double_12 + double_3;
		if(1)
		{
			long_10 = long_9 * long_12;
			short_6 = short_4 + short_9;
		}
		char_6 = char_10 + char_9;
		unsigned_int_13 = unsigned_int_1 + unsigned_int_6;
		int_6 = int_13 + int_11;
		long_6 = long_2 + long_5;
		double_5 = double_4 * double_8;
		float_6 = float_4 * float_7;
		unsigned_int_8 = unsigned_int_9 + unsigned_int_13;
		double_1 = double_10 + double_8;
		if(1)
		{
			char_1 = char_4 * char_4;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_13 = unsigned_int_5 * unsigned_int_2;
			}
			if(1)
			{
				double double_13 = 1;
				double_10 = double_12 * double_13;
			}
			if(1)
			{
				long long_13 = 1;
				long_4 = long_13 * long_5;
			}
			if(1)
			{
				double_1 = double_2 * double_9;
			}
			if(1)
			{
				long long_14 = 1;
				long_5 = long_1 + long_14;
			}
		}
		char_4 = char_8 * char_10;
	}
	if(1)
	{
		short short_10 = 1;
		short_6 = short_9 * short_10;
	}
	if(1)
	{
		long_11 = long_5 + long_9;
	}
	float_1 = float_7 * float_8;
	return unsigned_int_7;
}
unsigned int v__smart_cb_change(int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = v__smart_apply(unsigned_int_2,uni_para);

	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	int_2 = int_2;
	return unsigned_int_4;
}
long v__smart_update_queue( double parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char controller4vul_1392[3];
	fgets(controller4vul_1392 ,3 ,stdin);
	if( strcmp( controller4vul_1392, "o}") > 0)
	{
		unsigned_int_1 = v__smart_cb_change(uni_para);

	}
	double_2 = double_1 + double_1;
	return long_1;
}
unsigned int v__lost_selection_reset_job()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int int_2 = 1;
		char char_1 = 1;
		int_1 = int_1 * int_2;
		unsigned_int_1 = v__lost_selection(unsigned_int_1,-1 );

		char_1 = char_1;
	}
	return unsigned_int_3;
}
unsigned int v__lost_selection(unsigned int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_1 + int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	char controller4vul_1389[2];
	fgets(controller4vul_1389 ,2 ,stdin);
	if( strcmp( controller4vul_1389, "f") < 0)
	{
		char controller4vul_1390[3];
		fgets(controller4vul_1390 ,3 ,stdin);
		if( strcmp( controller4vul_1390, "B:") < 0)
		{
			char char_2 = 1;
			char_2 = char_1 * char_2;
			char controller4vul_1391[2];
			fgets(controller4vul_1391 ,2 ,stdin);
			if( strcmp( controller4vul_1391, "j") > 0)
			{
				char char_3 = 1;
				long_1 = v__smart_update_queue(double_3,char_1,uni_para);

				char_1 = char_3 + char_2;
			}
			unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		}
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		long long_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1 * float_2;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		}
		float_1 = float_3 + float_4;
		long_2 = long_1;
		short_3 = short_3;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	}
	return unsigned_int_4;
}
void v__take_selection_text( short parameter_1,int parameter_2,long parameter_3,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	float_1 = float_1;
	int_1 = int_2;
	int_4 = int_2 + int_3;
	long_2 = long_1 * long_2;
	float_3 = float_1 + float_2;
	int_2 = int_2 + int_1;
	char_2 = char_1 * char_1;
	int_3 = int_2 + int_1;
	short_2 = short_1 * short_1;
	char controller4vul_1388[3];
	fgets(controller4vul_1388 ,3 ,stdin);
	if( strcmp( controller4vul_1388, ":Y") < 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = v__lost_selection(unsigned_int_2,uni_para);

		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	}
	long_3 = long_2;
}
char v__cb_ctxp_link_content_copy(float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	double_2 = double_1 * double_2;
	int_1 = int_1 * int_1;
	double_4 = double_1 + double_3;
	double_5 = double_1 + double_1;
	int_3 = int_1 + int_2;
	int_2 = int_2 + int_2;
	v__take_selection_text(short_1,int_2,long_1,-1 );

	float_3 = float_1 + float_2;
	short_1 = short_1 * short_2;
	float_1 = v_termio_selection_get(short_1,int_4,int_4,int_2,int_4,long_2,int_2);

	long_2 = long_3 + long_2;
	return char_1;
}
void v_ty_sb_free( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short_2 = short_1 + short_1;
	int_2 = int_1 * int_2;
	double_1 = double_1;
}
char v_ty_sb_steal_buf( long parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	long_1 = long_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_2 = 1;
			short_2 = short_1 * short_1;
		}
		short_1 = short_3;
	}
	char_1 = char_1 * char_1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_3 * short_1;
	double_1 = double_1 + double_2;
	return char_2;
}
int v_codepoint_to_utf8( int parameter_1,char parameter_2)
{
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 * short_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		char_1 = char_2;
		unsigned_int_1 = unsigned_int_1;
		short_3 = short_4;
	}
	if(1)
	{
		double double_2 = 1;
		int_1 = int_1 + int_2;
		double_2 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		float_1 = float_1;
	}
	if(1)
	{
		double double_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		double_3 = double_1;
		unsigned_int_1 = unsigned_int_1;
		double_3 = double_3 * double_1;
		int_1 = int_3 + int_3;
	}
	if(1)
	{
		short_3 = short_4 + short_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		char_3 = char_2 + char_1;
		short_4 = short_3;
		char_2 = char_3;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float_1 = float_1 * float_1;
		int_3 = int_4 * int_4;
		char_2 = char_3 * char_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		int_3 = int_4 * int_1;
		long_1 = long_2;
		char_1 = char_4 * char_4;
	}
	if(1)
	{
		char char_5 = 1;
		char_4 = char_5;
	}
	return int_2;
}
void v_ty_sb_spaces_rtrim( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1 + double_2;
	double_1 = double_2 * double_1;
	float_2 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double_2 = double_1 * double_1;
		double_1 = double_2 * double_2;
		int_1 = int_1 + int_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	}
}
int v_ty_sb_add( short parameter_1,char parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short_1 = short_2 * short_3;
		double_3 = double_1 + double_2;
		int_2 = int_1 * int_1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "y") > 0)
		{
		}
		float_1 = float_1 + float_1;
		char_1 = char_1 + char_2;
	}
	float_3 = float_1 * float_2;
	short_3 = short_3 + short_4;
	double_4 = double_1 * double_1;
	return int_2;
}
short v__termpty_cellrow_from_beacon_get( int parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long long_5 = 1;
	double double_4 = 1;
	short short_2 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	long_1 = long_1 * long_2;
	int_2 = int_1 * int_1;
	int_1 = int_3 * int_1;
	int_2 = int_3;
	double_1 = v_verify_beacon(char_1,int_3);

	char_3 = char_1 * char_2;
	if(1)
	{
		char char_4 = 1;
		char_2 = char_4 + char_1;
	}
	long_4 = long_3 + long_2;
	if(1)
	{
		long_1 = long_4 * long_1;
		int_2 = int_1 + int_2;
	}
	double_3 = double_2 * double_2;
	short_1 = short_1 + short_1;
	long_5 = long_5;
	double_4 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long_2 = long_5 * long_3;
		double_2 = double_4;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		unsigned_int_1 = unsigned_int_2;
		int_4 = int_5;
		short_1 = short_1 * short_1;
	}
	short_1 = short_1;
	return short_2;
}
int v_termpty_cellrow_get( long parameter_1,int parameter_2,float parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
		}
		short_1 = v__termpty_cellrow_from_beacon_get(int_1,int_2,int_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
	}
	return int_3;
}
float v_termio_selection_get( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,long parameter_6,int parameter_7)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			short short_2 = 1;
			short_2 = short_1 * short_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						char_1 = char_1 * char_2;
					}
					if(1)
					{
						unsigned int unsigned_int_3 = 1;
						unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
					}
				}
				if(1)
				{
					v_termpty_backlog_lock();

					v_termpty_backlog_unlock();

					unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
				}
			}
		}
		if(1)
		{
			double double_1 = 1;
			double double_3 = 1;
			v_ty_sb_spaces_rtrim(unsigned_int_5);

			double_1 = double_1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					unsigned int unsigned_int_6 = 1;
					char_3 = v_ty_sb_steal_buf(long_1);

					unsigned_int_1 = unsigned_int_6;
				}
				if(1)
				{
					unsigned_int_2 = unsigned_int_4;
				}
				if(1)
				{
					int_2 = v_codepoint_to_utf8(int_3,char_2);

					v_ty_sb_free(double_2);

					int_4 = int_3 + int_3;
				}
				if(1)
				{
					float float_1 = 1;
					float_2 = float_1 + float_1;
				}
				if(1)
				{
					int int_5 = 1;
					int_3 = v_ty_sb_add(short_1,char_3,float_3);

					int_4 = int_1 + int_5;
				}
			}
			double_1 = double_3 + double_1;
		}
		if(1)
		{
			char_1 = char_3 + char_2;
		}
	}
	return float_2;
	int_4 = v_termpty_cellrow_get(long_2,int_4,float_3);

}
char v__cb_ctxp_link_open(float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short_2 = short_1 * short_1;
	double_1 = v__activate_link(double_2,char_1);

	double_3 = double_3 + double_2;
	double_3 = double_2;
	long_2 = long_1 + long_2;
	double_2 = double_1 * double_2;
	int_1 = int_1 + int_1;
	return char_2;
}
double v__should_inline( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_2;
	int_1 = int_2 + int_2;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	int_1 = int_2 + int_3;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "1") > 0)
	{
	}
	return double_1;
	unsigned_int_1 = v_termio_config_get();

}
short v_link_is_email( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
}
void v_link_is_protocol( char parameter_1)
{
}
double v_link_is_url( long parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	return double_1;
	v_link_is_protocol(char_1);

}
double v__activate_link( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	double double_6 = 1;
	long long_4 = 1;
	int int_8 = 1;
	int_1 = int_1 * int_1;
	double_2 = double_1 + double_1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2 + double_2;
	double_2 = double_2 + double_2;
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
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			int_1 = v_media_src_type_get(float_1);

			int_2 = int_3;
		}
	}
	if(1)
	{
		int_2 = int_3 + int_2;
	}
	if(1)
	{
		int_1 = int_2 + int_3;
	}
	if(1)
	{
		long long_1 = 1;
		int_3 = int_4 * int_2;
		long_2 = long_1 + long_2;
	}
	double_2 = double_3 + double_2;
	if(1)
	{
	}
	if(1)
	{
		short_1 = v_link_is_email(float_2);

		double_2 = double_1 * double_3;
		double_4 = double_4 * double_4;
		if(1)
		{
			long_3 = long_3 + long_3;
		}
		if(1)
		{
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
		double_3 = v__should_inline(char_1);

		int_4 = int_5 * int_2;
		if(1)
		{
			float_2 = float_1;
			int_5 = int_4 + int_5;
		}
	}
	if(1)
	{
		double double_5 = 1;
		double_1 = double_5 + double_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
			int_2 = int_4 + int_1;
			if(1)
			{
				if(1)
				{
					long_3 = long_3 + long_2;
					int_6 = int_5 + int_3;
				}
				if(1)
				{
					short_2 = short_2 * short_1;
					unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
				}
			}
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				if(1)
				{
					if(1)
					{
						double_1 = double_3 + double_4;
					}
				}
				if(1)
				{
					if(1)
					{
						double_2 = double_4;
					}
				}
				if(1)
				{
					if(1)
					{
						int_2 = int_1 + int_1;
					}
				}
				unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
				double_3 = double_1 + double_1;
			}
		}
	}
	if(1)
	{
		int_7 = int_3 + int_4;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		if(1)
		{
			int_4 = int_3 * int_4;
			if(1)
			{
				double_6 = v_link_is_url(long_2);

				long_2 = long_2 * long_4;
				short_2 = short_1;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						short_1 = short_2 + short_2;
					}
				}
				if(1)
				{
					if(1)
					{
						short short_3 = 1;
						short short_4 = 1;
						short_4 = short_2 * short_3;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned_int_4 = unsigned_int_3;
					}
				}
				unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
				int_3 = int_4 + int_2;
			}
		}
	}
	if(1)
	{
		int_7 = int_5;
	}
	int_8 = int_7 + int_6;
	if(1)
	{
		long long_5 = 1;
		long_5 = long_4 + long_3;
	}
	return double_4;
}
void v__cb_ctxp_link_preview(int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double_2 = double_1 * double_2;
	double_3 = double_1 + double_2;
	double_3 = v__activate_link(double_4,char_1);

	double_2 = double_1 * double_5;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_3 + int_1;
}
short v__is_fmt( double parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
			short short_2 = 1;
			short_1 = short_1 + short_2;
		}
		if(1)
		{
		}
	}
	return short_1;
}
int v_media_src_type_get( float parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		short_1 = v__is_fmt(double_1,unsigned_int_2);

		long_2 = long_1 + long_2;
	}
	return int_1;
}
char v__mouse_in_selection( long parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	short_1 = short_2;
	float_1 = float_1 + float_1;
	double_1 = double_1 + double_2;
	float_4 = float_2 + float_3;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int_4 = int_2 * int_3;
		short_4 = short_3 * short_2;
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
		if(1)
		{
		}
	}
	return char_1;
}
unsigned int v__smart_xy_to_cursor( int parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_5 = 1;
	long_1 = long_1;
	char_3 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	double_1 = double_1 * double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "_x") < 0)
	{
		char char_4 = 1;
		char_2 = char_4 + char_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	}
	return unsigned_int_5;
}
short v__cb_link_down(int parameter_2,long parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	long_1 = long_1 + long_2;
	float_1 = float_1 * float_1;
	char_1 = char_1 * char_1;
	if(1)
	{
		short short_1 = 1;
		long_3 = long_1 * long_2;
		short_1 = short_1 * short_2;
		short_1 = short_3 * short_3;
	}
	char controller4vul_1385[3];
	fgets(controller4vul_1385 ,3 ,stdin);
	if( strcmp( controller4vul_1385, "8+") < 0)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		double double_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int_1 = int_1 + int_1;
		long_3 = long_2;
		double_1 = double_2;
		char_2 = char_1 * char_2;
		char controller4vul_1386[2];
		fgets(controller4vul_1386 ,2 ,stdin);
		if( strcmp( controller4vul_1386, "r") > 0)
		{
			short short_4 = 1;
			short_3 = short_2 + short_4;
			char_1 = char_1 * char_1;
			char controller4vul_1387[2];
			fgets(controller4vul_1387 ,2 ,stdin);
			if( strcmp( controller4vul_1387, "_") > 0)
			{
				float_1 = v__cb_ctxp_link_copy(float_2,uni_para);

			}
		}
		double_2 = double_3;
		float_1 = float_2 + float_2;
		if(1)
		{
			long_3 = long_4 + long_3;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			}
		}
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		long_3 = long_4;
		if(1)
		{
			int_1 = int_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2;
			float_1 = float_2 * float_2;
		}
		if(1)
		{
			char char_3 = 1;
			char_3 = char_1 + char_2;
		}
		double_5 = double_4 + double_3;
		int_2 = int_2 + int_1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
		int_2 = int_2 + int_1;
		short_3 = short_2 * short_2;
	}
	return short_2;
}
short v_main_term_popup_exists( short parameter_1)
{
	short short_1 = 1;
	return short_1;
}
void v__update_link( int parameter_1,double parameter_2,long parameter_3,char parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_1;
	double_1 = double_1;
	double_2 = double_2 * double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	char_1 = char_1 + char_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
	}
	short_1 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_7 = 1;
		long_2 = long_1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
		double_2 = double_1;
		char controller4vul_1383[3];
		fgets(controller4vul_1383 ,3 ,stdin);
		if( strcmp( controller4vul_1383, "73") > 0)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_1;
			char controller4vul_1384[3];
			fgets(controller4vul_1384 ,3 ,stdin);
			if( strcmp( controller4vul_1384, "6]") > 0)
			{
				double double_3 = 1;
				short_3 = v__cb_link_down(int_1,long_3,uni_para);

				double_2 = double_1 * double_3;
			}
			if(1)
			{
				int_2 = int_2 + int_2;
			}
		}
		if(1)
		{
			double_5 = double_1 * double_4;
			int_1 = int_2;
		}
		if(1)
		{
			int int_3 = 1;
			int_2 = int_2 + int_2;
			int_3 = int_3 * int_1;
		}
		int_5 = int_4 * int_1;
		int_6 = int_6 * int_5;
		double_2 = double_4 * double_5;
		unsigned_int_1 = unsigned_int_6;
		long_4 = long_2 * long_4;
		unsigned_int_1 = unsigned_int_7 + unsigned_int_6;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 + float_2;
		}
	}
}
long v__remove_links( float parameter_1,char parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_1 * int_1;
	char controller4vul_1382[3];
	fgets(controller4vul_1382 ,3 ,stdin);
	if( strcmp( controller4vul_1382, "/i") < 0)
	{
		long long_2 = 1;
		v__update_link(int_2,double_1,long_1,char_1,uni_para);

		long_2 = long_1 * long_2;
		long_2 = long_2 * long_2;
	}
	long_4 = long_1 + long_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 + double_2;
	double_4 = double_3 + double_1;
	float_1 = float_1 * float_2;
	double_1 = double_2 * double_2;
	return long_4;
}
int v__sel_set( int parameter_1,double parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "{x") < 0)
	{
		double_1 = double_1 * double_1;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "6") < 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short_2 = short_1 * short_1;
		double_3 = double_1 * double_2;
		double_4 = double_3 * double_1;
	}
	return int_1;
}
int v_termio_scroll_get( char parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int_1 = int_1 + int_1;
	short_2 = short_1 * short_2;
	return int_2;
}
void v_miniview_position_offset( char parameter_1,int parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	int_1 = v_termio_scroll_get(char_1);

	long_2 = long_1 * long_1;
	double_1 = double_2;
	if(1)
	{
		double_3 = double_1 + double_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double_2 = double_3 * double_3;
		float_2 = float_1 * float_1;
		if(1)
		{
			short_1 = short_1;
			short_1 = short_1 * short_2;
			short_2 = short_2 * short_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			double_2 = double_2;
			short_1 = short_1 + short_1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		}
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "3t") > 0)
	{
		if(1)
		{
			short_1 = short_2;
			double_3 = double_2 * double_2;
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
			}
			if(1)
			{
				int int_3 = 1;
				int int_4 = 1;
				int_1 = int_3 * int_4;
			}
		}
	}
}
void v_term_miniview_get()
{
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "{ ") < 0)
	{
	}
}
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char_1 = char_1 + char_1;
	short_1 = short_1 + short_2;
	char_1 = char_1 * char_1;
	if(1)
	{
		double double_1 = 1;
		short_2 = short_1 * short_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		double_1 = double_1 * double_2;
	}
	int_2 = int_1 * int_2;
	char controller4vul_1379[2];
	fgets(controller4vul_1379 ,2 ,stdin);
	if( strcmp( controller4vul_1379, "7") < 0)
	{
		double double_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long long_2 = 1;
		double double_5 = 1;
		double double_7 = 1;
		double_2 = double_3 + double_4;
		int_4 = int_3 * int_4;
		long_1 = long_2;
		if(1)
		{
			int int_5 = 1;
			int_5 = int_4 + int_5;
		}
		char controller4vul_1380[3];
		fgets(controller4vul_1380 ,3 ,stdin);
		if( strcmp( controller4vul_1380, "n$") > 0)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_6 = 1;
			double_5 = double_2 * double_4;
			unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
			int_4 = int_6 * int_1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_6;
			double_3 = double_6;
			char controller4vul_1381[3];
			fgets(controller4vul_1381 ,3 ,stdin);
			if( strcmp( controller4vul_1381, "9.") > 0)
			{
				double double_8 = 1;
				long_1 = v__remove_links(float_1,char_2,uni_para);

				double_8 = double_5 + double_7;
			}
		}
		if(1)
		{
			int int_7 = 1;
			int_1 = int_7;
		}
		if(1)
		{
			double double_9 = 1;
			char char_3 = 1;
			char char_4 = 1;
			double_7 = double_9;
			char_2 = char_3 + char_4;
			double_7 = double_4 * double_5;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_10 = 1;
			double_4 = double_10 + double_10;
		}
	}
}
double v_termpty_save_new( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char_1 = char_2;
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	v_termpty_save_free(int_1);

	long_1 = long_2;
	return double_1;
}
short v_termpty_save_expand( long parameter_1,float parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char_2 = char_1 * char_1;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	char_2 = char_3 + char_2;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return short_1;
}
void v__termpty_cell_is_empty( float parameter_1)
{
	if(1)
	{
	}
}
int v_termpty_line_length( double parameter_1,char parameter_2)
{
	short short_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float_2 = float_1 * float_1;
		if(1)
		{
		}
	}
	return int_1;
	v__termpty_cell_is_empty(float_2);

}
double v_verify_beacon( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	return double_1;
}
void v_termpty_text_save_top( double parameter_1,long parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_3 = 1;
	long long_3 = 1;
	float float_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	v_termpty_backlog_unlock();

	float_2 = float_1 * float_2;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	short_2 = short_1 + short_2;
	double_2 = double_1 + double_2;
	int_1 = int_1;
	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		char char_2 = 1;
		double_2 = v_verify_beacon(char_1,int_1);

		char_1 = char_2;
		if(1)
		{
			float_2 = float_2 * float_1;
		}
		if(1)
		{
			char char_3 = 1;
			char char_5 = 1;
			char_5 = char_3 + char_4;
			short_1 = short_2 * short_1;
			double_2 = double_3 * double_3;
			int_2 = v_termpty_line_length(double_3,char_4);

			double_1 = double_4 * double_5;
		}
	}
	double_4 = double_2 + double_6;
	double_5 = double_6 * double_5;
	if(1)
	{
	}
	short_3 = v_termpty_save_expand(long_3,float_3,long_4);

	float_2 = float_1 + float_2;
	int_1 = int_2 * int_2;
	if(1)
	{
		v_termpty_backlog_lock();

		int_2 = int_1 + int_2;
	}
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	double_2 = v_termpty_save_new(char_1,int_3);

	double_1 = double_5 + double_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double_5 = double_2 + double_3;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	}
	int_3 = int_3 * int_3;
}
void v_termpty_text_scroll( char parameter_1,float parameter_2,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1;
	char_2 = char_1 * char_1;
	if(1)
	{
		int_2 = int_2 + int_2;
	}
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	unsigned_int_1 = unsigned_int_2;
	long_2 = long_1 + long_1;
	char controller4vul_1377[2];
	fgets(controller4vul_1377 ,2 ,stdin);
	if( strcmp( controller4vul_1377, "X") > 0)
	{
		double_1 = double_1 * double_1;
		char controller4vul_1378[2];
		fgets(controller4vul_1378 ,2 ,stdin);
		if( strcmp( controller4vul_1378, "y") < 0)
		{
			v_termio_scroll(float_1,int_4,int_3,int_4,uni_para);

			char_2 = char_1 * char_3;
		}
		int_4 = int_3 + int_2;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		}
	}
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
		char_3 = char_3;
		if(1)
		{
			short_1 = short_1 * short_1;
		}
		unsigned_int_5 = unsigned_int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_2 = 1;
			short_2 = short_1 * short_2;
			unsigned_int_4 = unsigned_int_5 + unsigned_int_3;
			int_1 = int_5 * int_1;
		}
		if(1)
		{
			int int_6 = 1;
			int_5 = int_6 * int_5;
		}
	}
}
void v_termpty_text_scroll_test( short parameter_1,unsigned int parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_2 = float_1 * float_2;
	char controller4vul_1375[2];
	fgets(controller4vul_1375 ,2 ,stdin);
	if( strcmp( controller4vul_1375, "h") < 0)
	{
		int_1 = int_1 * int_1;
		char controller4vul_1376[3];
		fgets(controller4vul_1376 ,3 ,stdin);
		if( strcmp( controller4vul_1376, "AS") < 0)
		{
			char char_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			v_termpty_text_scroll(char_1,float_1,uni_para);

			char_1 = char_2 * char_1;
			long_1 = long_2;
			double_2 = double_1 * double_2;
		}
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_2 = int_1 * int_2;
		double_1 = double_2;
		int_3 = int_2 * int_2;
	}
}
int v__cursor_to_start_of_line( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	char_3 = char_1 + char_2;
	return int_1;
}
char v__tab_forward( double parameter_1,int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
long v__handle_cursor_control( unsigned int parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	double_1 = double_1 * double_1;
	int_1 = v__cursor_to_start_of_line(short_1);

	int_4 = int_2 * int_3;
	double_1 = double_2;
	double_3 = double_2 * double_2;
	short_1 = short_1;
	double_3 = double_1;
	long_1 = long_1 + long_1;
	int_4 = int_2;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		v_termpty_text_scroll_test(short_1,unsigned_int_1,-1 );

		double_5 = double_4 * double_1;
	}
	long_1 = long_2 + long_1;
	char_1 = char_1 * char_1;
	float_4 = float_3 + float_1;
	if(1)
	{
		short short_2 = 1;
		float float_5 = 1;
		float float_6 = 1;
		char_2 = v__tab_forward(double_1,int_2);

		short_1 = short_1 * short_2;
		float_6 = float_5 * float_5;
		float_5 = float_2 + float_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	return long_3;
}
int v_termpty_handle_seq( char parameter_1,float parameter_2,double parameter_3,int uni_para)
{
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_1;
	char controller4vul_1372[3];
	fgets(controller4vul_1372 ,3 ,stdin);
	if( strcmp( controller4vul_1372, "Cb") < 0)
	{
		int int_2 = 1;
		v_termpty_text_append(long_1,short_1,int_1,uni_para);

		int_1 = int_2 + int_1;
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "d") > 0)
	{
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	return int_1;
}
void v_termpty_handle_buf( unsigned int parameter_1,long parameter_2,int parameter_3,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float_2 = float_1 + float_2;
	float_4 = float_3 * float_2;
	int_2 = int_1 + int_1;
	char_2 = char_1 * char_2;
	char controller4vul_1371[3];
	fgets(controller4vul_1371 ,3 ,stdin);
	if( strcmp( controller4vul_1371, "uS") < 0)
	{
		int_3 = v_termpty_handle_seq(char_1,float_2,double_1,uni_para);

		float_3 = float_3;
	}
	if(1)
	{
		int int_4 = 1;
		int_1 = int_4 + int_3;
	}
	if(1)
	{
		int int_5 = 1;
		int_5 = int_3 * int_5;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	int_3 = int_1;
}
void v_theme_reload( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1 * long_2;
	float_1 = float_1;
	long_2 = long_3 + long_3;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
}
float v_theme_reload_cb(int parameter_2,int parameter_3,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_1;
	v_theme_reload(unsigned_int_3);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
	short_1 = short_2;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_4 = unsigned_int_6;
	}
	return float_1;
}
void v_theme_auto_reload_enable( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double_3 = double_1 + double_2;
	float_1 = v_theme_reload_cb(int_1,int_2,short_1);

}
float v__cursor_shape_to_group_name()
{
	float float_1 = 1;
	return float_1;
}
char v_config_theme_path_default_get( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_2;
	int_3 = int_3;
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	double_1 = double_1;
	return char_1;
}
void v_theme_path_get()
{
}
void v_config_theme_path_get( unsigned int parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_1;
	v_theme_path_get();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
}
long v_theme_apply( unsigned int parameter_1,double parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_2;
	v_config_theme_path_get(unsigned_int_1);

	double_2 = double_3 + double_2;
	int_2 = int_1 + int_1;
	double_2 = double_2 + double_1;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	int_1 = int_3 * int_4;
	if(1)
	{
	}
	double_5 = double_2 + double_4;
	short_2 = short_1 * short_1;
	return long_1;
	char_1 = v_config_theme_path_default_get(float_1);

}
void v_termio_set_cursor_shape( char parameter_1,long parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	char_1 = char_1;
	float_1 = float_1 * float_1;
	int_1 = int_1 * int_2;
	float_2 = float_1 * float_1;
	float_3 = float_3 + float_1;
	float_3 = float_4 * float_3;
	float_4 = v__cursor_shape_to_group_name();

	int_3 = int_1 + int_3;
	short_2 = short_1 * short_2;
	int_1 = int_1 + int_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_2 = char_3;
		}
		if(1)
		{
			long_1 = v_theme_apply(unsigned_int_1,double_1,unsigned_int_2);

			v_theme_auto_reload_enable(long_2);

			int_1 = int_2 * int_1;
		}
	}
}
void v_termpty_clear_tabs_on_screen( char parameter_1)
{
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	if(1)
	{
		float float_1 = 1;
		double double_4 = 1;
		float_1 = float_1 * float_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_1 = int_2;
		}
		double_1 = double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	unsigned_int_3 = unsigned_int_4;
	v_termpty_save_free(int_3);

	int_3 = int_3 * int_1;
	int_2 = int_1 * int_1;
	v_termpty_backlog_lock();

	v_termpty_backlog_unlock();

}
long v__ts_free()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_2;
	return long_1;
}
void v_termpty_save_free( int parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		long long_2 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			long_1 = long_1 * long_1;
		}
		long_1 = long_1 + long_2;
	}
	long_1 = v__ts_free();

	int_2 = int_1 * int_2;
	char_2 = char_1 + char_1;
	double_2 = double_1 * double_1;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_5 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int_3 = int_1 + int_2;
	int_1 = int_4;
	v_termpty_backlog_size_set(int_4,unsigned_int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_termpty_backlog_unlock();

	double_1 = double_1 + double_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long_2 = long_1 + long_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			double_3 = double_2 * double_3;
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		float_2 = float_1 + float_1;
	}
	double_2 = double_2 + double_2;
	v_termpty_save_free(int_5);

	char_1 = char_1 + char_1;
	char_1 = char_1 + char_1;
	v_termpty_backlog_lock();

	short_2 = short_1 + short_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
}
void v_termpty_reset_att( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short_1 = short_1 + short_2;
	double_1 = double_1;
	short_2 = short_1 + short_1;
	double_2 = double_2 * double_3;
	short_3 = short_2 + short_3;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_4 + double_3;
	int_1 = int_2;
	double_5 = double_4 + double_3;
	int_2 = int_3 + int_3;
	long_1 = long_1;
	char_3 = char_1 * char_2;
	int_2 = int_3 + int_4;
	int_4 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_5 * int_6;
	int_2 = int_5 + int_6;
	short_1 = short_3 + short_1;
	double_2 = double_4 * double_1;
	char_1 = char_1 + char_2;
	int_7 = int_2 + int_3;
}
unsigned int v_termio_config_get()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	return unsigned_int_4;
}
void v_termpty_reset_state( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	short short_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	float float_2 = 1;
	int int_8 = 1;
	char_1 = char_1 + char_1;
	v_termpty_clear_tabs_on_screen(char_2);

	int_2 = int_1 + int_1;
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_2;
	float_1 = float_1;
	char_4 = char_1 + char_3;
	double_3 = double_2;
	double_1 = double_1 * double_2;
	double_4 = double_2 + double_4;
	char_4 = char_4 + char_2;
	double_3 = double_2 + double_4;
	unsigned_int_1 = v_termio_config_get();

	v_termpty_clear_backlog(double_4);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	long_2 = long_1 * long_1;
	char_2 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	v_termio_set_cursor_shape(char_3,long_3);

	int_2 = int_1;
	short_3 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_5 + double_4;
	double_5 = double_5 + double_3;
	short_1 = short_3 + short_4;
	int_2 = int_4 * int_5;
	double_1 = double_5 + double_4;
	double_4 = double_6;
	float_1 = float_1 + float_1;
	double_2 = double_4 + double_2;
	unsigned_int_4 = unsigned_int_6 + unsigned_int_2;
	short_4 = short_5 * short_2;
	double_6 = double_4 + double_2;
	char_4 = char_5 + char_3;
	unsigned_int_7 = unsigned_int_1 + unsigned_int_6;
	double_2 = double_2 * double_2;
	long_4 = long_3 + long_1;
	unsigned_int_7 = unsigned_int_1;
	float_2 = float_2 + float_1;
	unsigned_int_3 = unsigned_int_7 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_7 = 1;
		double_2 = double_2 + double_7;
	}
	if(1)
	{
		int int_6 = 1;
		int int_7 = 1;
		int_7 = int_6 * int_7;
	}
	v_termpty_reset_att(int_8);

}
void v_termpty_resize_tabs( double parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_4 = 1;
	short_2 = short_1 + short_1;
	short_3 = short_3 + short_1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	if(1)
	{
	}
	if(1)
	{
		double double_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double_1 = double_1 + double_2;
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "F") > 0)
		{
			double double_3 = 1;
			double_3 = double_2 + double_2;
		}
		if(1)
		{
			int_1 = int_1 * int_2;
		}
		int_4 = int_3 * int_2;
	}
	double_4 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
}
short v__termpty_init( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char_1 = char_2;
	v_termpty_reset_state(long_1);

	float_1 = float_1 + float_1;
	short_1 = short_2;
	int_1 = int_1 * int_2;
	double_3 = double_1 * double_2;
	int_2 = int_3 + int_4;
	int_4 = int_5 * int_4;
	short_3 = short_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_2;
	unsigned_int_3 = unsigned_int_2;
	double_4 = double_1 + double_1;
	long_3 = long_2 * long_2;
	char_1 = char_3 + char_2;
	return short_2;
	v_termpty_resize_tabs(double_2,int_2,int_5);

}
int v__add_default_keys( char parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	float float_3 = 1;
	long long_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_5 = 1;
	long long_4 = 1;
	int int_6 = 1;
	float float_5 = 1;
	float float_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_5 = 1;
	short short_5 = 1;
	long_1 = long_1;
	char_2 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_2;
	int_1 = int_1 * int_1;
	float_1 = float_1 * float_1;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	int_3 = int_2 + int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	double_2 = double_1 * double_1;
	long_2 = long_2 * long_1;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_1;
	double_1 = double_3;
	float_1 = float_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_2 = double_2 + double_3;
	long_3 = long_2 * long_2;
	long_2 = long_1 * long_2;
	char_2 = char_1 * char_3;
	int_1 = int_2 * int_1;
	double_4 = double_2 + double_4;
	float_4 = float_4 + float_4;
	int_4 = int_3 + int_3;
	double_1 = double_3;
	unsigned_int_3 = unsigned_int_3;
	int_1 = int_3 + int_2;
	int_3 = int_3 + int_1;
	unsigned_int_7 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_7 * unsigned_int_8;
	int_1 = int_5;
	int_4 = int_5 + int_2;
	long_3 = long_4 * long_1;
	char_2 = char_3 * char_3;
	int_2 = int_2 + int_6;
	unsigned_int_4 = unsigned_int_2;
	unsigned_int_6 = unsigned_int_7 * unsigned_int_4;
	double_3 = double_3 * double_3;
	float_2 = float_5 * float_6;
	char_5 = char_1 + char_4;
	short_1 = short_2;
	short_3 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_8 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_7 * unsigned_int_1;
	float_5 = float_3 + float_5;
	short_2 = short_3 * short_4;
	double_4 = double_4 * double_1;
	long_1 = long_5;
	short_5 = short_4 + short_2;
	float_2 = float_3 + float_3;
	return int_3;
}
void v_colors_standard_get( int parameter_1,int parameter_2,float parameter_3,float parameter_4,double parameter_5,short parameter_6)
{
	double double_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	if(1)
	{
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_2 = 1;
		double_3 = double_1 * double_2;
		short_2 = short_1 * short_2;
		short_3 = short_2 * short_1;
		float_2 = float_1 * float_2;
		char_1 = char_1 + char_2;
		long_2 = long_1 + long_2;
		double_1 = double_3 + double_1;
	}
	char_4 = char_3 * char_4;
	long_3 = long_1 * long_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_4 = double_1 * double_3;
}
float v_config_new()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_4 = 1;
	char char_3 = 1;
	float float_6 = 1;
	int int_5 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int int_2 = 1;
		long long_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		long long_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_3 = 1;
		long long_3 = 1;
		short short_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_5 = 1;
		double double_5 = 1;
		char char_4 = 1;
		long long_4 = 1;
		double double_6 = 1;
		float float_7 = 1;
		double double_7 = 1;
		int int_6 = 1;
		int_2 = int_1 * int_2;
		long_1 = long_1 + long_1;
		double_3 = double_2 * double_1;
		double_1 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		int_1 = int_1 + int_3;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		double_4 = double_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		long_2 = long_1;
		short_1 = short_1 * short_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
		int_2 = int_2 + int_1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
		int_4 = int_4 * int_4;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
		int_4 = int_2 + int_2;
		float_3 = float_1 + float_2;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
		short_3 = short_1 + short_3;
		float_1 = float_4 + float_4;
		long_1 = long_3 + long_2;
		short_2 = short_3 * short_4;
		char_3 = char_1 * char_2;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
		float_5 = float_6;
		float_5 = float_4 * float_2;
		char_3 = char_3 + char_3;
		int_3 = int_2 * int_2;
		double_4 = double_3 + double_5;
		char_4 = char_4 * char_3;
		int_4 = v__add_default_keys(char_3);

		int_1 = int_2;
		int_5 = int_1 + int_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_5;
		long_1 = long_4 * long_3;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		short_3 = short_2;
		double_2 = double_1 * double_6;
		short_2 = short_2 * short_1;
		float_7 = float_1;
		double_2 = double_3 * double_2;
		double_1 = double_5;
		double_4 = double_7 + double_4;
		v_colors_standard_get(int_5,int_1,float_6,float_1,double_4,short_2);

		unsigned_int_2 = unsigned_int_5 + unsigned_int_3;
		int_4 = int_4 + int_3;
		unsigned_int_4 = unsigned_int_3;
		int_3 = int_4 + int_1;
		int_4 = int_4 + int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float float_8 = 1;
				double double_8 = 1;
				short short_5 = 1;
				char char_5 = 1;
				unsigned int unsigned_int_6 = 1;
				float_5 = float_3 + float_8;
				double_7 = double_6 + double_4;
				double_8 = double_4 * double_6;
				short_5 = short_5 + short_2;
				char_3 = char_5 + char_1;
				unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
			}
		}
		int_6 = int_2 + int_5;
		double_4 = double_7 + double_7;
	}
	return float_4;
}
int main()
{
	int uni_para =893;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	long long_5 = 1;
	double double_5 = 1;
	char char_3 = 1;
	double double_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	double_2 = double_1 * double_1;
	float_3 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_4;
	int_3 = int_1 * int_2;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	char_1 = char_1 + char_2;
	long_3 = long_2 * long_3;
	double_2 = double_4;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
		long long_4 = 1;
		long_4 = long_3 + long_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3;
	}
	unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
	if(1)
	{
	}
	float_6 = float_4 + float_5;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_5 = long_1 + long_5;
	char controller4vul_1367[3];
	fgets(controller4vul_1367 ,3 ,stdin);
	if( strcmp( controller4vul_1367, "(.") < 0)
	{
		long long_6 = 1;
		short short_3 = 1;
		if(1)
		{
			double_1 = double_1 + double_5;
		}
		if(1)
		{
			double_2 = double_1 * double_1;
		}
		if(1)
		{
			long_6 = long_6 * long_1;
		}
		short_1 = short_2 + short_3;
		if(1)
		{
			char_3 = char_1;
		}
		char_3 = char_1;
		if(1)
		{
			int int_4 = 1;
			int_3 = int_1 * int_4;
		}
		double_4 = double_6 + double_5;
		if(1)
		{
			char_1 = char_2;
		}
		double_2 = double_3 + double_4;
		if(1)
		{
			short_1 = short_2;
		}
		if(1)
		{
			short short_4 = 1;
			short short_5 = 1;
			short_4 = short_4 * short_5;
		}
		int_1 = int_1 + int_3;
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
		}
		int_2 = int_3 * int_2;
		if(1)
		{
			int_2 = int_1;
		}
		char controller4vul_1368[2];
		fgets(controller4vul_1368 ,2 ,stdin);
		if( strcmp( controller4vul_1368, "P") > 0)
		{
			short short_6 = 1;
			short short_7 = 1;
			short_6 = short_7;
			char controller4vul_1369[2];
			fgets(controller4vul_1369 ,2 ,stdin);
			if( strcmp( controller4vul_1369, "`") > 0)
			{
				double double_7 = 1;
				int int_5 = 1;
				int int_6 = 1;
				float float_7 = 1;
				double_7 = double_4 + double_7;
				int_3 = int_5 + int_6;
				char controller4vul_1370[2];
				fgets(controller4vul_1370 ,2 ,stdin);
				if( strcmp( controller4vul_1370, "W") < 0)
				{
					v_termpty_handle_buf(unsigned_int_6,long_3,int_2,uni_para);

					char_2 = char_3 * char_2;
				}
				if(1)
				{
					long_5 = long_1 + long_6;
				}
				if(1)
				{
					float_7 = float_7 + float_1;
				}
				if(1)
				{
					double_4 = double_2 * double_7;
				}
				if(1)
				{
					int_5 = int_5 * int_7;
				}
				if(1)
				{
					double_5 = double_2 + double_3;
				}
				if(1)
				{
					long_5 = long_1 + long_6;
				}
				if(1)
				{
					double_3 = double_4;
				}
				if(1)
				{
					long long_7 = 1;
					long_6 = long_7 * long_2;
				}
				if(1)
				{
					int_3 = int_5 + int_8;
				}
				if(1)
				{
					double_4 = double_3 * double_1;
				}
				if(1)
				{
					float_1 = float_7 * float_3;
				}
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
			}
		}
	}
	if(1)
	{
		float float_8 = 1;
		float_8 = float_2 + float_4;
	}
	if(1)
	{
		double_2 = double_4 * double_4;
	}
	if(1)
	{
		int_7 = int_1 + int_8;
	}
	if(1)
	{
		int_8 = int_2 * int_7;
		if(1)
		{
			double_4 = double_4 + double_5;
		}
	}
	int_7 = int_9 + int_8;
	int_8 = int_3;
	char_3 = char_3 * char_3;
	int_10 = int_8;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_7;
		double_6 = double_4 * double_3;
	}
	return int_3;
}

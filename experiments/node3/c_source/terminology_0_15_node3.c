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

double v__termpty_shutdown( int parameter_1);
void v_termpty_text_scroll_rev_test( int parameter_1,double parameter_2);
float v__handle_esc_dcs( long parameter_1,short parameter_2,char parameter_3);
double v__handle_op_a( unsigned int parameter_1,float parameter_2,double parameter_3);
double v__termpty_ext_handle( double parameter_1,long parameter_2,int parameter_3);
int v__handle_esc_terminology( float parameter_1,char parameter_2,int parameter_3);
void v__handle_xterm_777_command( float parameter_1,char parameter_2,int parameter_3);
long v__smart_calculate_226( double parameter_1);
int v__smart_size( long parameter_1,int parameter_2,int parameter_3,double parameter_4);
void v_colors_term_init( unsigned int parameter_1,unsigned int parameter_2,short parameter_3);
void v_termio_config_update( unsigned int parameter_1);
int v__font_size_set( long parameter_1,int parameter_2);
void v_termio_font_size_set( unsigned int parameter_1,int parameter_2);
short v__handle_xterm_50_command( short parameter_1,char parameter_2,int parameter_3);
long v__eina_unicode_to_hex( unsigned int parameter_1);
unsigned int v__xterm_parse_color( int parameter_1,char parameter_2,double parameter_3,double parameter_4,int parameter_5);
void v__xterm_arg_get( short parameter_1);
unsigned int v__handle_esc_xterm( int parameter_1,int parameter_2,long parameter_3);
void v_termpty_cells_set_content( double parameter_1,long parameter_2,int parameter_3,int parameter_4);
void v__handle_esc_csi_decera( int parameter_1,long parameter_2);
void v_termpty_cells_att_fill_preserve_colors( char parameter_1,float parameter_2,char parameter_3,int parameter_4);
short v__clean_up_rect_coordinates( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
short v__handle_esc_csi_decfra( long parameter_1,short parameter_2);
unsigned int v__handle_esc_csi_decslrm( char parameter_1,int parameter_2);
unsigned int v__handle_esc_csi_decstbm( int parameter_1,int parameter_2);
unsigned int v__handle_esc_csi_decscusr( float parameter_1,short parameter_2);
double v__handle_esc_csi_dsr( float parameter_1,unsigned int parameter_2);
int v__handle_esc_csi_truecolor_cmyk( char parameter_1,int parameter_2);
double v__handle_esc_csi_truecolor_cmy( long parameter_1,int parameter_2);
void v__approximate_truecolor_rgb( double parameter_1,int parameter_2,int parameter_3,int parameter_4);
long v__csi_truecolor_arg_get( unsigned int parameter_1);
float v__handle_esc_csi_truecolor_rgb( double parameter_1,unsigned int parameter_2);
short v__handle_esc_csi_color_set( short parameter_1,char parameter_2);
void v_termpty_cursor_copy( unsigned int parameter_1,unsigned int parameter_2);
int v__switch_to_alternative_screen( char parameter_1,int parameter_2);
char v__move_cursor_to_origin( short parameter_1);
double v__pty_size( double parameter_1);
float v__limit_coord( short parameter_1);
short v__check_screen_info( unsigned int parameter_1,short parameter_2);
float v__termpty_line_rewrap( float parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,float parameter_5);
long v__backlog_remove_latest_nolock( int parameter_1);
void v_termpty_save_extract( short parameter_1);
float v__termpty_line_is_empty( long parameter_1,int parameter_2);
void v_termpty_screen_swap( double parameter_1);
void v_termpty_resize( double parameter_1,int parameter_2,int parameter_3);
unsigned int v_termio_win_get( unsigned int parameter_1);
char v__handle_esc_csi_reset_mode( int parameter_1,short parameter_2,unsigned int parameter_3);
unsigned int v__handle_esc_csi_cursor_pos_set( short parameter_1,double parameter_2,int parameter_3);
void v_termpty_text_scroll_rev( long parameter_1,char parameter_2);
void v_termpty_clear_line( int parameter_1,short parameter_2,int parameter_3);
void v_termpty_clear_screen( unsigned int parameter_1,long parameter_2);
void v_termpty_cell_codepoint_att_fill( short parameter_1,unsigned int parameter_2,double parameter_3,char parameter_4,int parameter_5);
void v__termpty_charset_trans( int parameter_1,char parameter_2);
void v_termio_content_change( float parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
void v_termpty_text_append( char parameter_1,float parameter_2,int parameter_3);
void v__csi_arg_get( short parameter_1);
long v__handle_esc_csi( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,int uni_para);
long v__safechar( double parameter_1);
char v__handle_esc( long parameter_1,int parameter_2,char parameter_3,int uni_para);
void v_termpty_cell_fill( double parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4);
void v_termpty_cells_fill( unsigned int parameter_1,unsigned int parameter_2,short parameter_3,int parameter_4);
void v_termpty_cells_clear( short parameter_1,int parameter_2,int parameter_3);
void v__tooltip_del(short parameter_2);
float v__tooltip_content(unsigned int parameter_2,int parameter_3);
void v_MD5Final( unsigned int parameter_1,int parameter_2);
void v_MD5Transform( short parameter_1,long parameter_2);
void v_byteReverse( long parameter_1,short parameter_2);
void v_MD5Update( char parameter_1,float parameter_2,double parameter_3);
void v_MD5Init( long parameter_1);
void v_gravatar_tooltip( int parameter_1,double parameter_2,char parameter_3);
double v__cb_link_drag_done(short parameter_2);
double v__cb_link_drag_accept(unsigned int parameter_2,char parameter_3);
long v__cb_link_drag_move(char parameter_2,int parameter_3,int parameter_4,int parameter_5);
unsigned int v__cb_link_icon_new(char parameter_2,unsigned int parameter_3,short parameter_4);
int v__cb_link_move(int parameter_2,unsigned int parameter_3);
unsigned int v__cb_link_up_delay();
void v__cb_link_up(unsigned int parameter_2,char parameter_3);
void v_term_focus( char parameter_1);
void v__term_is_focused( double parameter_1);
void v_term_unfocus( int parameter_1);
char v__cb_ctxp_del(int parameter_2,short parameter_3);
unsigned int v__cb_ctxp_dismissed(short parameter_2);
unsigned int v__cb_ctxp_link_copy(unsigned int parameter_2);
int v__screen_visual_bounds( float parameter_1);
char v__draw_cell( int parameter_1,long parameter_2,long parameter_3,short parameter_4);
int v__draw_line( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4,double parameter_5);
double v_termpty_backlog_length( double parameter_1);
char v_termio_pty_get( long parameter_1);
char v_termio_textgrid_get( long parameter_1);
void v_miniview_colors_get( double parameter_1,char parameter_2);
unsigned int v__deferred_renderer();
short v__queue_render();
void v_miniview_redraw( short parameter_1);
unsigned int v__block_obj_del( char parameter_1);
long v__termpty_is_dblwidth_slow_get( unsigned int parameter_1,int parameter_2);
double v__termpty_is_dblwidth_get( char parameter_1,int parameter_2);
void v_term_preedit_str_get( float parameter_1);
float v_media_get( int parameter_1);
long v__smart_media_clicked(long parameter_2);
long v_media_control_get( int parameter_1);
double v__smart_media_stop(char parameter_2);
short v__smart_media_pause(short parameter_2);
double v__smart_media_play(int parameter_2);
long v__smart_media_del(unsigned int parameter_2,char parameter_3);
void v_media_visualize_set( unsigned int parameter_1,short parameter_2);
void v_media_mute_set( double parameter_1,float parameter_2);
void v_media_volume_set( float parameter_1,double parameter_2);
unsigned int v__cb_media_vol(short parameter_2,char parameter_3,char parameter_4);
void v__cb_media_pos(float parameter_2,float parameter_3,long parameter_4);
unsigned int v__cb_media_pos_drag_stop(long parameter_2,short parameter_3,double parameter_4);
int v__cb_media_pos_drag_start(double parameter_2,int parameter_3,char parameter_4);
void v_media_stop( short parameter_1);
unsigned int v__cb_media_stop(int parameter_2,unsigned int parameter_3,char parameter_4);
double v__cb_media_pause(float parameter_2,float parameter_3,long parameter_4);
void v_media_play_set( unsigned int parameter_1,double parameter_2);
unsigned int v__cb_media_play(double parameter_2,long parameter_3,float parameter_4);
void v_media_position_set( float parameter_1,double parameter_2);
void v__cb_mov_ref(double parameter_2);
char v__cb_mov_progress(int parameter_2);
short v__cb_mov_restart();
int v__cb_mov_decode_stop(unsigned int parameter_2);
short v__cb_mov_len_change(short parameter_2);
char v__cb_mov_frame_resize(double parameter_2);
int v__cb_mov_frame_decode(int parameter_2);
short v__type_mov_init( long parameter_1);
int v__cb_edje_preloaded(float parameter_2,int parameter_3,double parameter_4);
long v__type_edje_init( double parameter_1);
short v__type_scale_init( long parameter_1);
long v__cb_img_frame();
long v__type_img_anim_handle();
short v__cb_img_preloaded(float parameter_2,unsigned int parameter_3);
double v__type_img_init( char parameter_1);
char v__url_compl_cb(int parameter_2);
long v__url_prog_cb(int parameter_2);
long v__type_thumb_calc( long parameter_1,float parameter_2,short parameter_3,short parameter_4,short parameter_5);
char v__type_mov_calc( short parameter_1,short parameter_2,long parameter_3,short parameter_4,char parameter_5);
int v__type_edje_calc( short parameter_1,float parameter_2,long parameter_3,short parameter_4,short parameter_5);
int v__type_img_calc( char parameter_1,char parameter_2,int parameter_3,short parameter_4,int parameter_5);
short v__cb_scale_preloaded(unsigned int parameter_2,short parameter_3);
float v__type_scale_calc( int parameter_1,long parameter_2,double parameter_3,short parameter_4,int parameter_5);
char v__unsmooth_timeout();
short v__smooth_handler( char parameter_1);
unsigned int v__smart_calculate( float parameter_1);
float v__smart_move( double parameter_1,char parameter_2,float parameter_3);
short v__smart_resize( float parameter_1,short parameter_2,double parameter_3);
char v__smart_del( double parameter_1);
void v__smart_add( char parameter_1);
int v__smart_init();
void v_media_add( long parameter_1,long parameter_2,char parameter_3,int parameter_4,float parameter_5);
float v__block_media_activate( short parameter_1,short parameter_2);
long v__block_edje_message_cb(float parameter_2,float parameter_3,int parameter_4);
void v_termpty_write( short parameter_1,long parameter_2,int parameter_3);
unsigned int v__block_edje_signal_cb(float parameter_2,unsigned int parameter_3,double parameter_4);
void v_termpty_block_chid_update( unsigned int parameter_1,long parameter_2);
char v__block_edje_cmds( int parameter_1,char parameter_2,char parameter_3,long parameter_4);
short v_homedir_get( char parameter_1,long parameter_2);
unsigned int v__block_edje_activate( float parameter_1,long parameter_2);
char v__block_activate( char parameter_1,short parameter_2);
char v_termpty_block_get( short parameter_1,int parameter_2);
int v_termpty_block_id_get( float parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( char parameter_1,int parameter_2);
long v__smart_apply( long parameter_1);
void v__smart_cb_change();
float v__smart_update_queue( char parameter_1,unsigned int parameter_2);
unsigned int v__lost_selection_reset_job();
double v__lost_selection(int parameter_2);
unsigned int v__take_selection_text( unsigned int parameter_1,double parameter_2,short parameter_3);
long v__cb_ctxp_link_content_copy(short parameter_2);
void v_ty_sb_free();
double v_ty_sb_steal_buf( float parameter_1);
int v_codepoint_to_utf8( long parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( short parameter_1);
int v_ty_sb_add( char parameter_1,int parameter_2,char parameter_3);
double v__termpty_cellrow_from_beacon_get( int parameter_1,int parameter_2,float parameter_3);
void v_termpty_cellrow_get( int parameter_1,int parameter_2,int parameter_3);
char v_termio_selection_get( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,float parameter_6,double parameter_7);
float v__cb_ctxp_link_open(short parameter_2,int uni_para);
float v__should_inline( long parameter_1);
long v_link_is_email( long parameter_1);
float v_link_is_protocol( unsigned int parameter_1);
char v_link_is_url( float parameter_1);
void v__activate_link( unsigned int parameter_1,long parameter_2,int uni_para);
int v__cb_ctxp_link_preview(long parameter_2);
double v__is_fmt( short parameter_1,char parameter_2);
short v_media_src_type_get( short parameter_1,int uni_para);
double v__mouse_in_selection( unsigned int parameter_1,int parameter_2,int parameter_3);
double v__smart_xy_to_cursor( unsigned int parameter_1,int parameter_2,char parameter_3,int parameter_4,int parameter_5);
short v__cb_link_down(float parameter_2,short parameter_3,int uni_para);
char v_main_term_popup_exists( char parameter_1);
long v__update_link( short parameter_1,int parameter_2,char parameter_3,int parameter_4,int uni_para);
void v__remove_links( char parameter_1,double parameter_2,int uni_para);
void v__sel_set( char parameter_1,float parameter_2);
int v_termio_scroll_get();
void v_miniview_position_offset( int parameter_1,int parameter_2,unsigned int parameter_3);
long v_term_miniview_get( int parameter_1);
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
int v_termpty_save_new( short parameter_1,int parameter_2);
int v_termpty_save_expand( long parameter_1,char parameter_2,double parameter_3);
double v__termpty_cell_is_empty( long parameter_1);
double v_termpty_line_length( unsigned int parameter_1,double parameter_2);
long v_verify_beacon( double parameter_1,int parameter_2);
void v_termpty_text_save_top( int parameter_1,short parameter_2,char parameter_3);
void v_termpty_text_scroll( char parameter_1,double parameter_2,int uni_para);
void v_termpty_text_scroll_test( unsigned int parameter_1,unsigned int parameter_2,int uni_para);
long v__cursor_to_start_of_line( char parameter_1);
short v__tab_forward( int parameter_1,int parameter_2);
float v__handle_cursor_control( long parameter_1,double parameter_2,int uni_para);
int v_termpty_handle_seq( unsigned int parameter_1,char parameter_2,int parameter_3,int uni_para);
void v_termpty_handle_buf( long parameter_1,float parameter_2,int parameter_3,int uni_para);
void v_theme_reload( float parameter_1);
short v_theme_reload_cb(char parameter_2,short parameter_3,unsigned int parameter_4);
void v_theme_auto_reload_enable( double parameter_1);
double v__cursor_shape_to_group_name( char parameter_1);
int v_config_theme_path_default_get( double parameter_1);
double v_theme_path_get();
char v_config_theme_path_get( double parameter_1);
short v_theme_apply( int parameter_1,long parameter_2,int parameter_3);
void v_termio_set_cursor_shape( float parameter_1,double parameter_2);
void v_termpty_clear_tabs_on_screen( float parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( char parameter_1,double parameter_2);
int v__ts_free();
void v_termpty_save_free( double parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( double parameter_1);
void v_termpty_reset_att( float parameter_1);
float v_termio_config_get( long parameter_1);
void v_termpty_reset_state( double parameter_1);
void v_termpty_resize_tabs( float parameter_1,int parameter_2,int parameter_3);
long v__termpty_init( long parameter_1);
float v__add_default_keys( short parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,int parameter_3,float parameter_4,float parameter_5,float parameter_6);
long v_config_new();
double v__termpty_shutdown( int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	int_1 = int_1;
	return double_1;
}
void v_termpty_text_scroll_rev_test( int parameter_1,double parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
		double double_1 = 1;
		v_termpty_text_scroll_rev(long_1,char_1);

		double_1 = double_1;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double_3 = double_2 + double_3;
		char_1 = char_2 + char_3;
		long_4 = long_2 * long_3;
	}
}
float v__handle_esc_dcs( long parameter_1,short parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	short short_4 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				if(1)
				{
					long_1 = long_1;
				}
				if(1)
				{
					int_1 = int_1 + int_1;
				}
			}
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			double_1 = double_1 + double_2;
		}
		if(1)
		{
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
		}
	}
	if(1)
	{
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 * float_2;
		}
	}
	return float_1;
	long_2 = v__safechar(double_3);

	v_termpty_write(short_4,long_1,int_1);

}
double v__handle_op_a( unsigned int parameter_1,float parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_3 = int_1 + int_2;
	double_2 = double_1 * double_1;
	return double_3;
}
double v__termpty_ext_handle( double parameter_1,long parameter_2,int parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double_1 = v__handle_op_a(unsigned_int_1,float_1,double_1);

	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1;
	return double_2;
}
int v__handle_esc_terminology( float parameter_1,char parameter_2,int parameter_3)
{
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float_1 = v_termio_config_get(long_1);

	double_1 = v__termpty_ext_handle(double_1,long_2,int_1);

	double_2 = double_3;
	return int_1;
}
void v__handle_xterm_777_command( float parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_4 = long_3 * long_1;
	short_2 = short_1 + short_1;
	if(1)
	{
		int_4 = int_2 * int_4;
	}
	int_5 = int_4 * int_1;
	int_3 = int_3 + int_2;
	double_1 = double_2;
	double_1 = double_3 + double_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
}
long v__smart_calculate_226( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_1;
	double_3 = double_2 + double_2;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_2;
	char_1 = char_1 * char_2;
	float_3 = float_1 * float_1;
	double_2 = double_1;
	float_2 = float_1;
	return long_1;
}
int v__smart_size( long parameter_1,int parameter_2,int parameter_3,double parameter_4)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_5 = 1;
	int_1 = int_1 * int_1;
	char_2 = char_1 * char_2;
	if(1)
	{
		long_1 = long_1 + long_2;
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	float_2 = float_1 * float_1;
	double_3 = double_1 * double_2;
	double_4 = double_4 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_3 = v__smart_calculate_226(double_3);

	int_4 = int_3 + int_3;
	char_1 = char_3 * char_1;
	if(1)
	{
		float float_3 = 1;
		float_2 = float_3 * float_1;
	}
	v__sel_set(char_4,float_2);

	float_5 = float_4 + float_5;
	double_4 = double_1 + double_2;
	int_2 = int_3 + int_1;
	long_3 = long_3 + long_1;
	long_3 = v__smart_apply(long_2);

	double_4 = double_3 + double_3;
	int_4 = int_5 * int_6;
	return int_5;
	v_termpty_resize(double_5,int_1,int_1);

}
void v_colors_term_init( unsigned int parameter_1,unsigned int parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_2;
	double_4 = double_2 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double_5 = double_1 * double_4;
		if(1)
		{
			long long_1 = 1;
			double double_6 = 1;
			int_2 = int_1 + int_1;
			long_1 = long_1 * long_1;
			double_6 = double_1 + double_1;
			int_1 = int_3 + int_1;
		}
		if(1)
		{
			int_4 = int_2 + int_3;
			if(1)
			{
				int int_5 = 1;
				int_4 = int_5 + int_3;
				int_4 = int_1 + int_4;
				int_5 = int_5 + int_2;
				double_7 = double_1 + double_7;
				float_1 = float_2;
			}
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		float_2 = float_1 * float_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			int_3 = int_3 + int_2;
			char controller_5[3];
			fgets(controller_5 ,3 ,stdin);
			if( strcmp( controller_5, "*i") < 0)
			{
				double_1 = double_7 + double_2;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			char_2 = char_1 + char_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		float float_3 = 1;
		float float_4 = 1;
		int_4 = int_3 + int_2;
		char controller_8[3];
		fgets(controller_8 ,3 ,stdin);
		if( strcmp( controller_8, ",V") < 0)
		{
			int int_6 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int_2 = int_6 * int_3;
			float_1 = float_2 * float_2;
			char_2 = char_2 + char_1;
			double_7 = double_3;
			long_2 = long_2 * long_3;
		}
		float_3 = float_4;
	}
}
void v_termio_config_update( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	long long_7 = 1;
	int int_6 = 1;
	float float_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_8 = 1;
	int_3 = int_1 + int_2;
	float_1 = float_1;
	int_2 = v__smart_size(long_1,int_1,int_1,double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_2;
	if(1)
	{
		double_1 = double_2 + double_2;
	}
	int_2 = int_2 + int_4;
	if(1)
	{
		double double_3 = 1;
		long long_2 = 1;
		double_3 = double_3 * double_2;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		v_termio_set_cursor_shape(float_1,double_1);

		long_4 = long_3 + long_1;
	}
	char_3 = char_1 + char_2;
	v_termpty_backlog_size_set(char_2,double_1);

	long_6 = long_5 * long_6;
	v_colors_term_init(unsigned_int_1,unsigned_int_2,short_1);

	double_5 = double_4 * double_2;
	unsigned_int_3 = unsigned_int_1;
	char_1 = char_3 * char_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	int_5 = int_1 + int_3;
	int_2 = int_1 * int_3;
	long_1 = long_3 + long_7;
	if(1)
	{
		int_4 = int_3 + int_2;
	}
	if(1)
	{
		short_1 = short_1;
	}
	float_2 = float_2 * float_2;
	int_6 = int_4 + int_3;
	float_2 = float_3;
	char_3 = char_4 + char_5;
	long_1 = long_8 * long_4;
}
int v__font_size_set( long parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char_2 = char_1 * char_2;
	v_termio_config_update(unsigned_int_1);

	int_1 = int_1;
	short_3 = short_1 * short_2;
	char_1 = char_3 * char_4;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		short_5 = short_3 + short_4;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		float float_3 = 1;
		char char_5 = 1;
		long_1 = long_1;
		float_2 = float_1 + float_1;
		double_1 = double_1 + double_1;
		float_3 = float_2 * float_1;
		char_1 = char_5 * char_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return int_2;
}
void v_termio_font_size_set( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = v__font_size_set(long_1,int_2);

	float_2 = float_1 * float_1;
}
short v__handle_xterm_50_command( short parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	v_termio_font_size_set(unsigned_int_1,int_1);

	float_2 = float_1 + float_2;
	return short_1;
}
long v__eina_unicode_to_hex( unsigned int parameter_1)
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
unsigned int v__xterm_parse_color( int parameter_1,char parameter_2,double parameter_3,double parameter_4,int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_7 = 1;
	short_1 = short_1 + short_2;
	int_2 = int_1 + int_1;
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	short_2 = short_1;
	double_3 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_3 = 1;
		long_1 = v__eina_unicode_to_hex(unsigned_int_1);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			long_1 = long_1 + long_1;
		}
		long_2 = long_3;
		double_1 = double_2 + double_4;
		if(1)
		{
			short_3 = short_1 * short_3;
		}
		long_3 = long_2;
		int_2 = int_2 + int_2;
		if(1)
		{
			float_1 = float_1;
		}
		long_3 = long_1 + long_1;
		float_2 = float_1 + float_2;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		}
		short_2 = short_2 + short_2;
		float_1 = float_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
		}
		double_4 = double_3 * double_1;
		short_2 = short_2;
		if(1)
		{
			short_3 = short_1 * short_1;
		}
		float_2 = float_2 + float_3;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		double double_5 = 1;
		double double_6 = 1;
		float float_4 = 1;
		short_3 = short_3 + short_3;
		if(1)
		{
			char char_2 = 1;
			char_1 = char_2 + char_1;
		}
		long_1 = long_3;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
		if(1)
		{
			int_2 = int_2 + int_3;
		}
		double_6 = double_5 + double_2;
		unsigned_int_6 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			short_3 = short_3;
		}
		float_1 = float_4 * float_2;
	}
	if(1)
	{
		int_3 = int_2 * int_3;
	}
	short_1 = short_3 + short_2;
	return unsigned_int_7;
}
void v__xterm_arg_get( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double_2 = double_1 + double_1;
	char_3 = char_1 + char_2;
	short_1 = short_1 * short_2;
	long_1 = long_1;
	int_2 = int_1 + int_2;
	short_2 = short_3 * short_3;
	double_4 = double_3 * double_2;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 * float_2;
	int_3 = int_2 + int_2;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_3;
	short_4 = short_3 * short_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	float_4 = float_1 + float_3;
	int_1 = int_3 + int_2;
	double_2 = double_4 * double_4;
	float_5 = float_1 + float_3;
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_4;
}
unsigned int v__handle_esc_xterm( int parameter_1,int parameter_2,long parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double double_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_4 = 1;
	float float_2 = 1;
	short_1 = v__handle_xterm_50_command(short_1,char_1,int_1);

	short_2 = short_2 * short_2;
	int_1 = int_2 * int_1;
	long_2 = long_1 + long_2;
	float_1 = v_termio_config_get(long_2);

	char_1 = char_2;
	double_1 = double_2;
	char_1 = v_termio_textgrid_get(long_2);

	int_3 = int_2 * int_2;
	if(1)
	{
		v_termpty_write(short_1,long_3,int_3);

		int_3 = int_3 * int_1;
	}
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_4 = double_3 * double_2;
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	unsigned_int_3 = v__xterm_parse_color(int_1,char_3,double_5,double_2,int_3);

	double_3 = double_4 + double_4;
	if(1)
	{
		short_3 = short_2 + short_1;
	}
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	long_2 = long_3;
	double_3 = double_5;
	v__xterm_arg_get(short_3);

	int_2 = int_3;
	if(1)
	{
		long_3 = long_3 * long_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		short_2 = short_1 + short_1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
	}
	if(1)
	{
		short_3 = short_3 + short_3;
	}
	if(1)
	{
		v__handle_xterm_777_command(float_1,char_1,int_4);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	}
	unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
	long_4 = long_4 * long_5;
	if(1)
	{
		char_3 = char_4 + char_1;
	}
	char controller_9[2];
	fgets(controller_9 ,2 ,stdin);
	if( strcmp( controller_9, "a") > 0)
	{
		float_1 = float_2 * float_1;
	}
	if(1)
	{
		char char_5 = 1;
		char_4 = char_4 * char_4;
		char_2 = char_1 + char_5;
	}
	if(1)
	{
		float_2 = float_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_1 = int_4 * int_4;
	int_4 = int_2 + int_2;
	return unsigned_int_5;
}
void v_termpty_cells_set_content( double parameter_1,long parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float_2 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		int_2 = int_1 * int_1;
	}
}
void v__handle_esc_csi_decera( int parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 + int_2;
	long_2 = long_1 * long_1;
	float_4 = float_3 + float_3;
	int_4 = int_3;
	if(1)
	{
	}
	long_3 = long_3 * long_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		v__csi_arg_get(short_1);

		v_termpty_cells_set_content(double_1,long_1,int_2,int_1);

		char_1 = char_1 * char_2;
	}
	short_2 = v__clean_up_rect_coordinates(unsigned_int_3,int_4,int_3,int_5,int_3);

}
void v_termpty_cells_att_fill_preserve_colors( char parameter_1,float parameter_2,char parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char_2 = char_1 * char_1;
	char_4 = char_3 + char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_5 = 1;
		int int_3 = 1;
		int_2 = int_1 + int_2;
		char_3 = char_1 * char_5;
		int_1 = int_3;
		if(1)
		{
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			short_1 = short_1 + short_1;
			int_1 = int_3 * int_3;
			int_1 = int_1 * int_3;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			int_1 = int_2 + int_4;
			float_2 = float_1 + float_2;
		}
	}
}
short v__clean_up_rect_coordinates( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	int int_5 = 1;
	float_1 = float_2;
	char_3 = char_1 * char_2;
	int_3 = int_1 + int_2;
	double_1 = double_1 * double_2;
	short_2 = short_1 + short_1;
	float_1 = float_3 * float_2;
	if(1)
	{
		int_1 = int_4;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_3 + float_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		}
	}
	if(1)
	{
		double_3 = double_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_2 + short_3;
	}
	if(1)
	{
		char_1 = char_3 * char_2;
		if(1)
		{
			double_1 = double_1 + double_1;
		}
	}
	unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
	if(1)
	{
		char_3 = char_1 * char_3;
	}
	if(1)
	{
	}
	double_4 = double_1 + double_3;
	int_2 = int_4 * int_3;
	int_2 = int_2 + int_4;
	int_4 = int_5 + int_3;
	return short_2;
}
short v__handle_esc_csi_decfra( long parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char_1 = char_1 + char_1;
	v_termpty_cells_att_fill_preserve_colors(char_2,float_1,char_3,int_1);

	long_1 = long_1 + long_1;
	int_2 = int_1;
	short_1 = v__clean_up_rect_coordinates(unsigned_int_1,int_3,int_4,int_2,int_2);

	double_1 = double_1 * double_1;
	int_4 = int_1 + int_3;
	double_1 = double_2 + double_2;
	short_3 = short_2 + short_3;
	if(1)
	{
	}
	if(1)
	{
	}
	v__csi_arg_get(short_2);

	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		int_3 = int_2 + int_1;
	}
	return short_2;
}
unsigned int v__handle_esc_csi_decslrm( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_7 = 1;
	double_2 = double_1 + double_1;
	long_2 = long_1 + long_2;
	char_2 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long_2 = long_1;
	}
	int_2 = int_1 * int_2;
	if(1)
	{
		v__csi_arg_get(short_1);

		char_2 = v__move_cursor_to_origin(short_1);

		unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	}
	if(1)
	{
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	int_2 = int_3;
	double_4 = double_3 + double_2;
	double_5 = double_5 * double_5;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_4;
	float_2 = float_1 + float_2;
	return unsigned_int_7;
}
unsigned int v__handle_esc_csi_decstbm( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	int_1 = int_1 * int_2;
	float_2 = float_1 + float_1;
	char_1 = v__move_cursor_to_origin(short_1);

	long_1 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_3 = long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "8u") > 0)
	{
		unsigned int unsigned_int_4 = 1;
		v__csi_arg_get(short_1);

		unsigned_int_4 = unsigned_int_1;
	}
	if(1)
	{
		int_2 = int_3 * int_1;
	}
	float_2 = float_2 + float_3;
	float_4 = float_2;
	int_3 = int_1 + int_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
	short_1 = short_2;
	return unsigned_int_3;
}
unsigned int v__handle_esc_csi_decscusr( float parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_3 = 1;
	short_2 = short_1 + short_1;
	float_1 = float_2;
	v_termio_set_cursor_shape(float_2,double_1);

	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 + long_1;
	double_2 = double_2;
	int_2 = int_1;
	int_2 = int_2 * int_1;
	int_1 = int_2 + int_1;
	double_1 = double_1 + double_2;
	int_3 = int_2 + int_1;
	int_4 = int_1 * int_4;
	long_2 = long_2 * long_2;
	int_1 = int_1;
	double_3 = double_2 * double_1;
	return unsigned_int_2;
	v__csi_arg_get(short_2);

}
double v__handle_esc_csi_dsr( float parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	char_1 = char_2;
	float_3 = float_1 * float_2;
	if(1)
	{
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		long long_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		v_termpty_write(short_1,long_1,int_1);

		long_1 = long_2;
		unsigned_int_1 = unsigned_int_1;
		double_1 = double_1 + double_2;
		v__csi_arg_get(short_1);

		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		short_3 = short_1 * short_2;
		float_3 = float_3 * float_2;
		double_3 = double_3 * double_4;
	}
	if(1)
	{
		char char_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		short short_4 = 1;
		char_3 = char_3 * char_1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		long_4 = long_1 * long_3;
		int_1 = int_1 + int_1;
		short_4 = short_4 + short_3;
	}
	return double_2;
}
int v__handle_esc_csi_truecolor_cmyk( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_4 = 1;
	int int_4 = 1;
	long_3 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_1;
	long_1 = v__csi_truecolor_arg_get(unsigned_int_1);

	int_2 = int_3 + int_3;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	double_3 = double_2 + double_4;
	double_1 = double_1;
	double_5 = double_2;
	long_4 = long_4 + long_3;
	double_1 = double_3 * double_5;
	v__approximate_truecolor_rgb(double_2,int_4,int_3,int_1);

	double_2 = double_4 + double_3;
	return int_2;
}
double v__handle_esc_csi_truecolor_cmy( long parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	short_1 = short_1 + short_2;
	long_1 = v__csi_truecolor_arg_get(unsigned_int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v__approximate_truecolor_rgb(double_1,int_1,int_1,int_2);

	double_1 = double_1 * double_2;
	double_2 = double_2;
	if(1)
	{
	}
	short_3 = short_1 * short_3;
	double_3 = double_3;
	int_3 = int_3 + int_1;
	return double_4;
}
void v__approximate_truecolor_rgb( double parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char_1 = v_termio_textgrid_get(long_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_1 = double_2 + double_3;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 + float_2;
			char controller_3[2];
			fgets(controller_3 ,2 ,stdin);
			if( strcmp( controller_3, "o") > 0)
			{
				long long_2 = 1;
				long_2 = long_1 * long_2;
			}
		}
	}
}
long v__csi_truecolor_arg_get( unsigned int parameter_1)
{
	long long_1 = 1;
	return long_1;
}
float v__handle_esc_csi_truecolor_rgb( double parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long_1 = v__csi_truecolor_arg_get(unsigned_int_1);

	v__approximate_truecolor_rgb(double_1,int_1,int_1,int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_2;
	short_1 = short_1 * short_1;
	double_1 = double_2 * double_2;
	short_1 = short_2 * short_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		unsigned_int_1 = unsigned_int_3;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		long_3 = long_2 * long_1;
	}
	if(1)
	{
	}
	return float_1;
}
short v__handle_esc_csi_color_set( short parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_3 = char_1 * char_2;
	v__csi_arg_get(short_1);

	double_1 = v__handle_esc_csi_truecolor_cmy(long_1,int_1);

	char_1 = char_2 * char_2;
	return short_2;
	v_termpty_reset_att(float_1);

	float_1 = v__handle_esc_csi_truecolor_rgb(double_1,unsigned_int_1);

	int_1 = v__handle_esc_csi_truecolor_cmyk(char_3,int_1);

}
void v_termpty_cursor_copy( unsigned int parameter_1,unsigned int parameter_2)
{
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short_2 = short_1 * short_1;
		int_1 = int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		float_1 = float_1 * float_2;
		double_2 = double_1 + double_2;
		double_4 = double_3 + double_1;
	}
}
int v__switch_to_alternative_screen( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		v_termpty_screen_swap(double_1);

		unsigned_int_1 = unsigned_int_1;
	}
	return int_1;
}
char v__move_cursor_to_origin( short parameter_1)
{
	char char_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "D") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		double_2 = double_1 + double_2;
		double_2 = double_3 + double_4;
		long_2 = long_1 * long_2;
		int_1 = int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_2 = int_2;
	}
	return char_1;
}
double v__pty_size( double parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	double_1 = double_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	return double_2;
}
float v__limit_coord( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	int_4 = int_3 + int_1;
	double_1 = double_1 + double_3;
	double_5 = double_4 * double_2;
	double_6 = double_4 * double_3;
	return float_1;
}
short v__check_screen_info( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_5 = 1;
	short short_3 = 1;
	char char_2 = 1;
	short short_4 = 1;
	int int_6 = 1;
	if(1)
	{
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		double double_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		float float_1 = 1;
		int_2 = int_1 * int_2;
		short_2 = short_1 + short_2;
		char_1 = char_1;
		double_1 = double_1 + double_1;
		int_5 = int_3 + int_4;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		v_termpty_text_save_top(int_1,short_3,char_2);

		v_termpty_cells_clear(short_4,int_5,int_6);

		float_1 = float_1;
	}
	return short_3;
}
float v__termpty_line_rewrap( float parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,float parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = v__check_screen_info(unsigned_int_1,short_1);

	long_3 = long_1 + long_2;
	return float_1;
}
long v__backlog_remove_latest_nolock( int parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	v_termpty_save_free(double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	float_3 = float_1 + float_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2;
	}
	long_1 = long_1 * long_1;
	float_2 = float_4 + float_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	long_1 = v_verify_beacon(double_1,int_3);

	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	return long_2;
}
void v_termpty_save_extract( short parameter_1)
{
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int_1 = int_1;
			short_1 = short_1 * short_2;
			int_1 = int_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			double_2 = double_1 * double_2;
			if(1)
			{
			}
			long_2 = long_1 + long_1;
			double_2 = double_1;
			char_1 = char_1 + char_2;
			if(1)
			{
				double_1 = double_1 + double_1;
			}
		}
	}
}
float v__termpty_line_is_empty( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long long_3 = 1;
		double_1 = v__termpty_cell_is_empty(long_1);

		long_1 = long_2 * long_3;
		if(1)
		{
		}
	}
	return float_1;
}
void v_termpty_screen_swap( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 + double_1;
	double_3 = double_3 + double_3;
	double_4 = double_1 * double_4;
	double_2 = double_2 + double_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	char_2 = char_1 * char_1;
	unsigned_int_4 = unsigned_int_5;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
}
void v_termpty_resize( double parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	int int_5 = 1;
	float float_4 = 1;
	int int_6 = 1;
	float float_5 = 1;
	short short_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_4 = 1;
	double double_5 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_7 = 1;
	short short_8 = 1;
	short short_9 = 1;
	short short_10 = 1;
	double double_6 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_7 = 1;
	double_2 = double_1 + double_2;
	double_2 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	long_1 = v__backlog_remove_latest_nolock(int_1);

	long_2 = v_verify_beacon(double_2,int_1);

	long_3 = long_1 * long_2;
	if(1)
	{
		double_3 = double_4;
		v_termpty_resize_tabs(float_1,int_1,int_2);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	int_3 = int_2 * int_3;
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	char_3 = char_1 + char_2;
	float_2 = v__termpty_line_is_empty(long_2,int_4);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	float_1 = float_3 * float_2;
	int_1 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_4 + double_2;
		if(1)
		{
			int int_7 = 1;
			int_5 = int_3 + int_5;
			float_1 = v__termpty_line_rewrap(float_4,unsigned_int_2,int_3,int_6,float_3);

			float_5 = v__limit_coord(short_3);

			int_7 = int_5;
		}
	}
	char_5 = char_4 + char_4;
	if(1)
	{
		char_4 = char_2 + char_5;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		long long_4 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		long_3 = long_4;
		short_1 = short_1 * short_1;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			v_termpty_save_extract(short_4);

			double_4 = double_4;
			unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
			double_1 = double_1 + double_3;
			float_4 = float_5 + float_4;
			if(1)
			{
				int_6 = int_1;
			}
			double_5 = double_4 * double_1;
			int_1 = int_4 * int_3;
			short_2 = short_1 + short_5;
			double_2 = double_2 + double_1;
			int_2 = int_2 + int_2;
			double_5 = v__pty_size(double_1);

			double_4 = double_2;
			float_5 = float_4 * float_4;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_3 = short_1 + short_6;
		v_termpty_screen_swap(double_4);

		float_5 = float_1 * float_2;
		double_1 = double_1;
		unsigned_int_6 = unsigned_int_6 + unsigned_int_6;
	}
	float_2 = float_1 + float_2;
	short_7 = short_6 + short_2;
	char_3 = char_5;
	short_7 = short_3;
	int_2 = int_5 + int_5;
	short_5 = short_8 * short_9;
	short_5 = short_10;
	double_5 = v_termpty_line_length(unsigned_int_4,double_6);

	unsigned_int_6 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		short_9 = short_4 * short_1;
	}
	char_6 = char_2 * char_4;
	double_3 = double_1 * double_2;
	char_7 = char_3 + char_5;
	int_5 = int_6 * int_3;
	char_7 = char_4 + char_1;
	unsigned_int_6 = unsigned_int_7 * unsigned_int_1;
	char_4 = char_3 + char_6;
	v_termpty_backlog_lock();

	unsigned_int_3 = unsigned_int_4;
	v_termpty_backlog_unlock();

}
unsigned int v_termio_win_get( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_1;
	long_2 = long_1 * long_2;
	return unsigned_int_1;
}
char v__handle_esc_csi_reset_mode( int parameter_1,short parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	v__csi_arg_get(short_1);

	v_termpty_reset_state(double_1);

	v_termpty_cursor_copy(unsigned_int_1,unsigned_int_2);

	float_2 = float_1 + float_1;
	v_termpty_clear_screen(unsigned_int_3,long_1);

	char_1 = v__move_cursor_to_origin(short_2);

	int_1 = v__switch_to_alternative_screen(char_2,int_2);

	char_1 = char_1 + char_1;
	unsigned_int_1 = v_termio_win_get(unsigned_int_1);

	double_1 = double_2;
	return char_3;
	v_termpty_resize(double_2,int_3,int_2);

}
unsigned int v__handle_esc_csi_cursor_pos_set( short parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_1 = 1;
	char char_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 + double_2;
	double_4 = double_2 * double_2;
	float_3 = float_1 * float_2;
	char_1 = char_2;
	double_5 = double_5 * double_6;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
	}
	if(1)
	{
		int_1 = int_1 * int_1;
		if(1)
		{
			int_1 = int_1;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	int_3 = int_2 + int_3;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_6 + unsigned_int_4;
	}
	if(1)
	{
		int_2 = int_3 + int_1;
		if(1)
		{
			float float_4 = 1;
			float float_5 = 1;
			float_5 = float_4 * float_2;
		}
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_1 * int_3;
	}
	v__csi_arg_get(short_1);

	char_3 = char_3 * char_2;
	return unsigned_int_1;
}
void v_termpty_text_scroll_rev( long parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char_3 = char_1 * char_2;
	float_1 = float_2;
	if(1)
	{
		short short_2 = 1;
		char_2 = char_3 * char_1;
		v_termpty_cells_clear(short_1,int_1,int_2);

		short_2 = short_1 + short_1;
	}
	float_1 = float_2 * float_2;
	float_2 = float_3;
	if(1)
	{
		char char_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		v_termio_scroll(float_3,int_1,int_1,int_2,-1 );

		char_4 = char_3 + char_4;
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			short_3 = short_4;
		}
		long_2 = long_1 + long_1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_4 = 1;
			long long_3 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
			float_1 = float_1 + float_1;
			long_3 = long_3 * long_3;
		}
		if(1)
		{
			float_1 = float_3 + float_2;
		}
	}
}
void v_termpty_clear_line( int parameter_1,short parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_6 = 1;
	short_2 = short_1 + short_2;
	double_1 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1;
	int_3 = int_1 + int_2;
	char_1 = char_1 + char_1;
	int_3 = int_2 + int_2;
	int_2 = int_1;
	unsigned_int_4 = unsigned_int_2;
	short_2 = short_2 + short_1;
	unsigned_int_2 = unsigned_int_5;
	double_2 = double_1;
	if(1)
	{
		char_1 = char_2 * char_1;
	}
	v_termio_content_change(float_1,unsigned_int_1,int_1,int_3);

	unsigned_int_5 = unsigned_int_1 + unsigned_int_6;
	v_termpty_cells_clear(short_2,int_3,int_1);

	char_1 = char_2;
}
void v_termpty_clear_screen( unsigned int parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	if(1)
	{
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 * int_2;
	}
	short_1 = short_2;
	char_2 = char_1 + char_2;
	v_termio_content_change(float_1,unsigned_int_1,int_3,int_2);

	v_termpty_cells_clear(short_2,int_3,int_2);

	double_3 = double_1 + double_2;
	short_2 = short_1 * short_2;
	v_termpty_clear_line(int_4,short_2,int_4);

}
void v_termpty_cell_codepoint_att_fill( short parameter_1,unsigned int parameter_2,double parameter_3,char parameter_4,int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_2 = long_1 * long_1;
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		double_1 = double_2 * double_2;
		int_1 = int_2;
	}
}
void v__termpty_charset_trans( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_1 + long_2;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_1 + short_2;
		}
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_4 = int_2 * int_3;
		}
	}
}
void v_termio_content_change( float parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	double double_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	char_2 = char_1 + char_1;
	short_1 = short_2;
	short_3 = short_2 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		float float_2 = 1;
		double double_1 = 1;
		int_1 = int_2;
		int_2 = int_1 * int_2;
		float_2 = float_1 + float_2;
		int_2 = int_3 + int_2;
		double_2 = double_1 + double_1;
		long_3 = long_1 * long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_3 = 1;
			float float_4 = 1;
			double double_5 = 1;
			v__remove_links(char_3,double_3,-1 );

			float_2 = float_1 * float_2;
			if(1)
			{
				long long_5 = 1;
				float_1 = float_1 + float_3;
				long_5 = long_1 + long_4;
			}
			float_4 = float_3 * float_3;
			double_3 = double_4 + double_5;
		}
	}
	if(1)
	{
	}
	v__sel_set(char_3,float_1);

	int_2 = int_3 * int_3;
	double_4 = double_4 * double_2;
	short_1 = short_3;
	int_1 = int_1 * int_1;
	if(1)
	{
		long long_6 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
		long_6 = long_2 + long_3;
	}
	if(1)
	{
		short short_4 = 1;
		short_3 = short_4 + short_3;
		long_2 = long_2 + long_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_5 = 1;
			short_4 = short_5 * short_2;
			if(1)
			{
				int_2 = int_1 + int_3;
				char_2 = char_4 + char_1;
			}
			unsigned_int_3 = unsigned_int_1 + unsigned_int_5;
			long_1 = long_3;
		}
	}
	if(1)
	{
		float float_5 = 1;
		float_1 = float_5 + float_1;
		int_2 = int_1;
		int_2 = int_3 + int_2;
		unsigned_int_4 = unsigned_int_3;
		char_4 = char_3;
		if(1)
		{
			char_3 = char_4 * char_3;
		}
	}
}
void v_termpty_text_append( char parameter_1,float parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	short short_5 = 1;
	char char_4 = 1;
	int int_6 = 1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1 * float_2;
	long_1 = long_1 + long_2;
	long_1 = long_2 * long_2;
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	short_3 = short_1 + short_2;
	int_1 = int_2 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		char char_1 = 1;
		int int_5 = 1;
		double double_5 = 1;
		float float_3 = 1;
		double_2 = double_1 + double_2;
		if(1)
		{
			float_1 = float_1 * float_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			v_termpty_text_scroll_test(unsigned_int_1,unsigned_int_1,-1 );

			double_3 = double_2 * double_2;
			int_4 = int_2 * int_3;
			char_1 = char_1;
			int_2 = int_3 + int_2;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				short short_4 = 1;
				short_3 = short_2 * short_4;
			}
		}
		char_3 = char_1 * char_2;
		if(1)
		{
			int_3 = int_3 + int_3;
		}
		if(1)
		{
			if(1)
			{
				double_4 = double_2 + double_1;
			}
			long_1 = long_2;
		}
		int_5 = int_1 + int_2;
		if(1)
		{
			int_1 = int_1 * int_2;
			unsigned_int_2 = unsigned_int_1;
		}
		float_2 = float_2 * float_2;
		if(1)
		{
			double_5 = double_2 * double_4;
			int_2 = int_5;
		}
		if(1)
		{
			long long_3 = 1;
			v__termpty_charset_trans(int_3,char_2);

			float_2 = float_3;
			long_3 = long_2 + long_3;
			if(1)
			{
				double_4 = double_2 + double_3;
			}
			if(1)
			{
				v_termpty_cell_codepoint_att_fill(short_5,unsigned_int_2,double_4,char_3,int_2);

				int_2 = int_5;
			}
			if(1)
			{
				double_3 = v__termpty_is_dblwidth_get(char_4,int_2);

				int_3 = int_3 * int_4;
				double_3 = double_5 + double_5;
			}
		}
		if(1)
		{
			long long_4 = 1;
			char char_5 = 1;
			char char_6 = 1;
			v_termio_content_change(float_2,unsigned_int_2,int_6,int_6);

			long_1 = long_2 + long_4;
			char_3 = char_5 + char_3;
			if(1)
			{
				float float_4 = 1;
				float_3 = float_4;
			}
			char_1 = char_1 * char_3;
			if(1)
			{
				char_2 = char_2;
				int_2 = int_3;
			}
			char_6 = char_4;
		}
	}
}
void v__csi_arg_get( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_2 = short_1 + short_1;
	double_1 = double_1 + double_1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 * long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "=p") == 0)
	{
		short_2 = short_2 * short_1;
	}
}
long v__handle_esc_csi( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,int uni_para)
{
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = v__handle_cursor_control(long_1,double_1,uni_para);

	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return long_1;
}
long v__safechar( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = double_2;
	float_2 = float_1 * float_2;
	return long_1;
}
char v__handle_esc( long parameter_1,int parameter_2,char parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_6 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_5 = 1;
	long long_4 = 1;
	double double_9 = 1;
	double double_10 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_625[2];
	fgets(controller4vul_625 ,2 ,stdin);
	if( strcmp( controller4vul_625, "d") < 0)
	{
		long_1 = v__handle_esc_csi(short_1,unsigned_int_2,unsigned_int_1,uni_para);

	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
	}
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	float_2 = float_1 + float_2;
	double_2 = double_4 * double_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
	float_3 = float_3 + float_4;
	short_2 = short_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	char_3 = char_1 + char_2;
	short_3 = short_1 + short_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
	unsigned_int_4 = unsigned_int_3;
	long_1 = long_1 * long_1;
	double_4 = double_5 * double_4;
	int_1 = int_2;
	double_5 = double_6 + double_7;
	double_3 = double_3 + double_3;
	int_2 = int_2 + int_1;
	if(1)
	{
		float_5 = float_4 * float_1;
	}
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_3;
	int_2 = int_3 * int_2;
	if(1)
	{
	}
	short_3 = short_3 * short_4;
	double_3 = double_5 + double_3;
	if(1)
	{
	}
	double_5 = double_3 * double_7;
	unsigned_int_7 = unsigned_int_7 + unsigned_int_6;
	if(1)
	{
	}
	float_1 = float_6 + float_6;
	double_5 = double_6 + double_6;
	if(1)
	{
	}
	double_4 = double_6 + double_3;
	int_2 = int_2 + int_3;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		long long_2 = 1;
		double double_8 = 1;
		unsigned_int_8 = unsigned_int_5 * unsigned_int_5;
		float_4 = float_1 + float_1;
		long_2 = long_2 * long_3;
		unsigned_int_9 = unsigned_int_1 * unsigned_int_4;
		double_2 = double_5 + double_2;
		if(1)
		{
			double_2 = double_2 * double_8;
		}
		unsigned_int_4 = unsigned_int_8 * unsigned_int_2;
		double_7 = double_5;
		if(1)
		{
			double_8 = double_3;
			unsigned_int_4 = unsigned_int_1;
			int_3 = int_3;
		}
	}
	if(1)
	{
	}
	float_5 = float_6 * float_1;
	short_5 = short_5 * short_1;
	long_4 = long_3 * long_1;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_9;
	double_10 = double_1 + double_9;
	return char_3;
}
void v_termpty_cell_fill( double parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double_1 = double_1 + double_2;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		}
	}
}
void v_termpty_cells_fill( unsigned int parameter_1,unsigned int parameter_2,short parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	char_2 = char_1 + char_1;
	double_2 = double_1 * double_2;
	int_3 = int_1 * int_2;
	long_2 = long_1 * long_1;
	v_termpty_cell_fill(double_1,unsigned_int_1,unsigned_int_2,int_1);

	int_1 = int_2 * int_4;
}
void v_termpty_cells_clear( short parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_termpty_cells_fill(unsigned_int_4,unsigned_int_4,short_1,int_1);

}
void v__tooltip_del(short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_1;
	long_1 = long_1;
	short_1 = short_1 + short_1;
}
float v__tooltip_content(unsigned int parameter_2,int parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	long long_4 = 1;
	int int_2 = 1;
	v_media_add(long_1,long_1,char_1,int_1,float_1);

	long_3 = long_1 + long_2;
	char_2 = char_1 * char_1;
	long_4 = long_1;
	int_2 = int_2;
	return float_1;
}
void v_MD5Final( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	double_2 = double_1 * double_1;
	int_3 = int_1 + int_2;
	int_2 = int_1 * int_4;
	v_byteReverse(long_1,short_1);

	int_2 = int_3;
	short_1 = short_2 + short_3;
	double_1 = double_3 + double_2;
	if(1)
	{
		double_3 = double_1;
		long_2 = long_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		double_3 = double_3 + double_4;
	}
	if(1)
	{
		v_MD5Transform(short_2,long_1);

		double_1 = double_4 + double_3;
	}
	short_2 = short_2 * short_1;
	long_2 = long_1 + long_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	int_1 = int_2 + int_4;
	int_1 = int_4 * int_2;
	double_2 = double_1 * double_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
}
void v_MD5Transform( short parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_7 = 1;
	long long_3 = 1;
	double double_7 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_8 = 1;
	float float_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_8 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	char char_6 = 1;
	short short_6 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_12 = 1;
	unsigned int unsigned_int_13 = 1;
	char_1 = char_1 * char_2;
	float_2 = float_1 * float_1;
	int_3 = int_1 * int_2;
	double_2 = double_1 * double_1;
	double_1 = double_1;
	double_3 = double_1 * double_1;
	float_4 = float_1 + float_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_5 = int_4 + int_3;
	double_2 = double_2 * double_4;
	short_1 = short_1 * short_2;
	double_2 = double_1 + double_2;
	int_2 = int_1 * int_3;
	int_3 = int_1 * int_6;
	int_6 = int_1;
	int_4 = int_1 * int_2;
	double_4 = double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_1;
	char_2 = char_2 + char_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
	long_2 = long_1 * long_1;
	short_1 = short_3 + short_2;
	int_1 = int_5;
	double_6 = double_5 + double_4;
	int_3 = int_7 * int_3;
	float_3 = float_1 * float_1;
	long_2 = long_3;
	double_6 = double_4 * double_2;
	double_7 = double_1 * double_2;
	long_1 = long_2 * long_2;
	double_2 = double_4 * double_6;
	double_5 = double_6 * double_2;
	char_2 = char_2;
	char_4 = char_4 * char_2;
	char_1 = char_1 * char_4;
	double_3 = double_3 * double_5;
	unsigned_int_6 = unsigned_int_7;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	short_1 = short_2 + short_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_6 + unsigned_int_8;
	int_3 = int_6 * int_2;
	double_2 = double_5;
	double_8 = double_2 * double_6;
	int_4 = int_2 + int_4;
	int_3 = int_5 * int_7;
	float_4 = float_1 * float_5;
	int_7 = int_4;
	short_4 = short_2 * short_4;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_7;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_6;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_8;
	short_5 = short_1 + short_4;
	double_4 = double_9 * double_3;
	double_8 = double_4 * double_3;
	unsigned_int_1 = unsigned_int_9 + unsigned_int_4;
	float_4 = float_3;
	double_8 = double_3 * double_3;
	int_1 = int_6;
	int_8 = int_8 + int_1;
	double_9 = double_8 * double_1;
	double_8 = double_4 + double_4;
	unsigned_int_2 = unsigned_int_5;
	char_2 = char_5 + char_5;
	unsigned_int_8 = unsigned_int_10 + unsigned_int_11;
	long_1 = long_3 * long_2;
	char_6 = char_2 * char_1;
	short_7 = short_5 + short_6;
	unsigned_int_12 = unsigned_int_1 * unsigned_int_5;
	unsigned_int_1 = unsigned_int_13 * unsigned_int_11;
	unsigned_int_9 = unsigned_int_7 + unsigned_int_7;
}
void v_byteReverse( long parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void v_MD5Update( char parameter_1,float parameter_2,double parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	short short_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	long_1 = long_1 + long_1;
	int_2 = int_1 + int_1;
	char_1 = char_1 * char_2;
	int_1 = int_2;
	int_2 = int_2 + int_3;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_3 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_3;
	v_byteReverse(long_2,short_2);

	float_4 = float_3 * float_1;
	unsigned_int_2 = unsigned_int_3;
	long_1 = long_2 * long_2;
	unsigned_int_2 = unsigned_int_4;
	long_2 = long_1;
	long_2 = long_1;
	int_2 = int_3;
	v_MD5Transform(short_3,long_2);

	double_3 = double_1 * double_2;
	int_1 = int_1 + int_4;
	int_4 = int_4 + int_2;
	short_1 = short_1 * short_1;
}
void v_MD5Init( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	char_3 = char_1 + char_2;
	short_1 = short_2;
	long_1 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_3 + long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
}
void v_gravatar_tooltip( int parameter_1,double parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_5 = 1;
	double double_5 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	long_1 = long_1 + long_1;
	float_1 = float_1;
	long_1 = long_1 + long_1;
	double_4 = double_3 + double_2;
	char_1 = char_1;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	v_MD5Update(char_1,float_2,double_3);

	int_3 = int_1 * int_4;
	float_3 = v__tooltip_content(unsigned_int_2,int_4);

	float_1 = float_2 * float_2;
	v__tooltip_del(short_1);

	unsigned_int_2 = unsigned_int_1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_5 * int_5;
		double_2 = double_1 * double_5;
	}
	int_2 = int_3 * int_1;
	short_2 = short_1 * short_2;
	v_MD5Init(long_1);

	double_5 = double_1 * double_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	v_MD5Final(unsigned_int_1,int_5);

}
double v__cb_link_drag_done(short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double_3 = double_1 * double_2;
	short_3 = short_1 + short_2;
	long_3 = long_1 + long_2;
	int_1 = int_1 * int_2;
	if(1)
	{
		long long_4 = 1;
		long_2 = long_4;
	}
	double_4 = double_2 + double_1;
	return double_3;
}
double v__cb_link_drag_accept(unsigned int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	return double_1;
}
long v__cb_link_drag_move(char parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float_1 = float_1;
	long_1 = long_1 + long_2;
	long_3 = long_1 + long_1;
	double_2 = double_1 * double_2;
	char_2 = char_1 * char_1;
	if(1)
	{
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "**") < 0)
		{
			double double_3 = 1;
			double_3 = double_3 * double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	return long_2;
}
unsigned int v__cb_link_icon_new(char parameter_2,unsigned int parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_1;
	int_3 = int_2 * int_2;
	double_1 = double_1 * double_1;
	double_1 = double_2 + double_3;
	long_2 = long_1 + long_1;
	short_1 = short_1 * short_1;
	long_2 = long_1 * long_2;
	return unsigned_int_1;
}
int v__cb_link_move(int parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	short short_2 = 1;
	char_2 = char_1 * char_1;
	long_1 = v__cb_link_drag_move(char_1,int_1,int_1,int_1);

	double_2 = double_1 + double_1;
	int_1 = int_2;
	double_2 = double_3 * double_1;
	if(1)
	{
	}
	short_1 = short_1;
	double_1 = v__cb_link_drag_accept(unsigned_int_1,char_1);

	float_2 = float_1 * float_2;
	if(1)
	{
		char char_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_3 = char_1 + char_1;
		char_2 = char_1;
		unsigned_int_1 = v__cb_link_icon_new(char_4,unsigned_int_1,short_2);

		double_3 = v__cb_link_drag_done(short_1);

		short_1 = short_3 + short_4;
		if(1)
		{
			int int_3 = 1;
			int_3 = int_2 + int_1;
		}
		if(1)
		{
			char char_5 = 1;
			char char_6 = 1;
			char_6 = char_5 + char_2;
		}
		unsigned_int_2 = unsigned_int_3;
		short_2 = short_1 + short_1;
	}
	return int_2;
}
unsigned int v__cb_link_up_delay()
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	v__activate_link(unsigned_int_1,long_1,-1 );

	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	long_3 = long_2 + long_2;
	double_1 = double_1 * double_2;
	if(1)
	{
		long_2 = long_1 * long_2;
	}
	int_1 = int_1 * int_1;
	return unsigned_int_3;
}
void v__cb_link_up(unsigned int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = v__cb_link_up_delay();

	double_1 = double_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "/d") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_3 = 1;
		short_1 = short_1 + short_2;
		double_3 = double_1 * double_2;
		double_3 = double_4 * double_3;
		double_3 = double_1 + double_1;
		if(1)
		{
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_2 = char_1 + char_1;
			}
			char controller_4[2];
			fgets(controller_4 ,2 ,stdin);
			if( strcmp( controller_4, "!") > 0)
			{
				long long_1 = 1;
				long_1 = long_1;
			}
		}
		short_3 = short_3 * short_3;
	}
}
void v_term_focus( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "a") > 0)
	{
	}
	char_1 = char_2;
	short_2 = short_1 * short_2;
	v__term_is_focused(double_1);

	short_1 = short_3 + short_3;
}
void v__term_is_focused( double parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_1 = char_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
}
void v_term_unfocus( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_1;
	long_1 = long_1;
	if(1)
	{
	}
	double_1 = double_2;
	int_1 = int_2 * int_3;
	v__term_is_focused(double_3);

	unsigned_int_1 = unsigned_int_1;
}
char v__cb_ctxp_del(int parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_4 = 1;
	double double_1 = 1;
	char_3 = char_1 + char_2;
	short_2 = short_1 * short_1;
	v_term_unfocus(int_1);

	short_4 = short_1 * short_3;
	v_term_focus(char_4);

	double_1 = double_1 * double_1;
	int_1 = int_1 + int_1;
	return char_2;
}
unsigned int v__cb_ctxp_dismissed(short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	short_1 = short_1 + short_2;
	double_3 = double_1 + double_2;
	return unsigned_int_1;
}
unsigned int v__cb_ctxp_link_copy(unsigned int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = char_1;
	double_3 = double_1 + double_2;
	double_4 = double_1 + double_2;
	unsigned_int_1 = v__take_selection_text(unsigned_int_2,double_2,short_1);

	long_2 = long_1 * long_1;
	int_1 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return unsigned_int_3;
}
int v__screen_visual_bounds( float parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_2 = 1;
		char_3 = char_1 * char_2;
		double_1 = double_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		short_2 = short_1 + short_1;
		double_1 = double_3 * double_3;
	}
	return int_1;
}
char v__draw_cell( int parameter_1,long parameter_2,long parameter_3,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	double_3 = double_1 * double_2;
	char_1 = char_1 + char_2;
	float_1 = float_1;
	int_1 = int_1 + int_1;
	if(1)
	{
		char char_3 = 1;
		char_1 = char_3 * char_2;
	}
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		double_2 = double_3 + double_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		}
		if(1)
		{
			int_1 = int_3 * int_2;
		}
	}
	if(1)
	{
		double double_4 = 1;
		double_5 = double_4 * double_3;
	}
	if(1)
	{
		double_5 = double_1;
	}
	if(1)
	{
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_5 = 1;
		int_1 = int_4 * int_3;
		long_1 = long_1;
		int_3 = int_3;
		long_2 = long_2 * long_1;
		int_5 = int_1 * int_3;
		int_4 = int_2 + int_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4;
	}
	if(1)
	{
		double_6 = double_5 * double_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		if(1)
		{
			double double_7 = 1;
			double_7 = double_6 + double_3;
		}
		if(1)
		{
			int_1 = int_1 * int_2;
		}
	}
	if(1)
	{
		double_6 = double_3 + double_6;
	}
	return char_1;
}
int v__draw_line( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4,double parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_1 + int_1;
	}
	return int_1;
	char_1 = v__draw_cell(int_2,long_1,long_1,short_1);

}
double v_termpty_backlog_length( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	char_2 = char_1 * char_2;
	int_1 = int_2;
	float_1 = float_1;
	long_1 = v_verify_beacon(double_1,int_1);

	int_3 = int_2 * int_1;
	float_1 = float_1 * float_1;
	int_1 = int_3 * int_3;
	double_1 = double_1;
	double_2 = double_1 + double_1;
	double_2 = double_2 * double_1;
	int_2 = int_3 + int_1;
	char_4 = char_2 + char_3;
	long_2 = long_1;
	float_2 = float_1 * float_1;
	if(1)
	{
		short_1 = short_2;
	}
	short_1 = short_3;
	if(1)
	{
		double_2 = double_2 * double_2;
	}
	long_1 = long_2 + long_3;
	if(1)
	{
		char_1 = char_4 + char_1;
	}
	float_3 = float_3 + float_4;
	if(1)
	{
		int int_4 = 1;
		int_3 = int_1 + int_4;
	}
	short_2 = short_3 * short_1;
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		int_5 = int_5 * int_6;
	}
	double_3 = double_2 * double_1;
	short_3 = short_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1;
	short_2 = short_4 + short_3;
	char_2 = char_4;
	return double_2;
}
char v_termio_pty_get( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double_1 = double_1 * double_2;
	int_3 = int_1 + int_2;
	return char_1;
}
char v_termio_textgrid_get( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short_1 = short_2;
	long_1 = long_1 + long_1;
	return char_1;
}
void v_miniview_colors_get( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_1;
	char_1 = v_termio_textgrid_get(long_1);

	int_2 = int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		double_1 = double_1;
		short_2 = short_1 * short_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_4 = 1;
		double double_2 = 1;
		int_1 = int_2 * int_4;
		double_2 = double_1;
	}
}
unsigned int v__deferred_renderer()
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_6 = 1;
	char char_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_6 = 1;
	int int_7 = 1;
	double_1 = v_termpty_backlog_length(double_2);

	short_1 = short_2;
	short_3 = short_1 + short_3;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_4 * short_4;
	double_3 = double_1 + double_1;
	int_2 = v__draw_line(unsigned_int_3,unsigned_int_4,unsigned_int_4,int_1,double_1);

	short_3 = short_2;
	unsigned_int_5 = unsigned_int_1;
	int_2 = int_3 * int_3;
	if(1)
	{
	}
	if(1)
	{
		float_1 = float_1 + float_2;
	}
	int_3 = int_1 + int_3;
	v_termpty_cellrow_get(int_1,int_2,int_2);

	int_1 = int_1 + int_3;
	char_2 = char_1 * char_1;
	unsigned_int_4 = unsigned_int_6 + unsigned_int_4;
	if(1)
	{
	}
	short_1 = short_5;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	double_2 = double_4 + double_1;
	double_5 = double_3 + double_5;
	short_5 = short_6 * short_3;
	char_3 = char_1 + char_2;
	int_4 = v__screen_visual_bounds(float_3);

	int_2 = int_3 * int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 + unsigned_int_7;
	}
	if(1)
	{
		int_4 = int_5 * int_6;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = long_1 * long_2;
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_7 = unsigned_int_8;
		}
		float_5 = float_4 * float_3;
	}
	long_1 = long_3 + long_4;
	long_5 = long_2 * long_1;
	float_1 = float_2 + float_3;
	if(1)
	{
		float_4 = float_2 + float_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_7;
	}
	unsigned_int_6 = unsigned_int_9 + unsigned_int_4;
	long_5 = long_4 * long_2;
	if(1)
	{
		float float_6 = 1;
		float_5 = float_6 * float_6;
		v_miniview_colors_get(double_1,char_2);

		char_3 = v_termio_pty_get(long_6);

		short_5 = short_5 * short_3;
		if(1)
		{
			unsigned_int_7 = unsigned_int_2 + unsigned_int_4;
			float_3 = float_5;
		}
		if(1)
		{
			if(1)
			{
				char char_4 = 1;
				double double_6 = 1;
				double double_7 = 1;
				char_4 = char_1 + char_3;
				int_3 = v_termio_scroll_get();

				int_4 = int_7 + int_5;
				double_4 = double_6 * double_7;
				int_6 = int_5;
			}
			if(1)
			{
				int_5 = int_6 + int_2;
				float_2 = float_3 + float_1;
			}
		}
	}
	if(1)
	{
		unsigned_int_9 = unsigned_int_4 * unsigned_int_4;
	}
	int_1 = int_7 * int_5;
	unsigned_int_7 = unsigned_int_9 + unsigned_int_9;
	short_5 = short_5 * short_5;
	int_1 = int_4;
	return unsigned_int_9;
}
short v__queue_render()
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
		short short_1 = 1;
		unsigned_int_1 = v__deferred_renderer();

		short_1 = short_1;
	}
	return short_2;
}
void v_miniview_redraw( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int_1 = int_2;
	if(1)
	{
	}
	double_1 = double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = v__queue_render();

}
unsigned int v__block_obj_del( char parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	long_1 = v__smart_media_del(unsigned_int_1,char_1);

	int_1 = int_1 * int_2;
	long_2 = long_2 * long_2;
	double_2 = double_1 + double_1;
	return unsigned_int_2;
}
long v__termpty_is_dblwidth_slow_get( unsigned int parameter_1,int parameter_2)
{
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
		}
	}
	return long_1;
}
double v__termpty_is_dblwidth_get( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
	long_1 = v__termpty_is_dblwidth_slow_get(unsigned_int_1,int_1);

}
void v_term_preedit_str_get( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 + int_1;
	char_2 = char_1 * char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "E6") < 0)
	{
	}
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
}
float v_media_get( int parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	short_1 = short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "T") > 0)
	{
	}
	return float_1;
}
long v__smart_media_clicked(long parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_1 = short_1 + short_1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			float_1 = v_termio_config_get(long_1);

			char_3 = char_1 * char_2;
			long_1 = long_2 * long_1;
			if(1)
			{
				if(1)
				{
					char char_4 = 1;
					char char_5 = 1;
					char char_6 = 1;
					double double_4 = 1;
					float_1 = v_media_get(int_2);

					char_4 = char_1;
					char_4 = char_5 + char_6;
					if(1)
					{
						double_1 = double_4 * double_1;
					}
					if(1)
					{
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						long long_3 = 1;
						unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
						long_3 = long_1 * long_1;
						if(1)
						{
							char char_7 = 1;
							short_1 = v_media_src_type_get(short_1,-1 );

							int_2 = int_3 * int_2;
							char_4 = char_1 * char_7;
							double_1 = double_3 + double_4;
						}
					}
				}
				float_1 = float_1;
			}
		}
	}
	int_3 = int_3 + int_3;
	return long_2;
}
long v_media_control_get( int parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	return long_1;
}
double v__smart_media_stop(char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	short_3 = short_1 + short_2;
	return double_1;
}
short v__smart_media_pause(short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	return short_2;
}
double v__smart_media_play(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "k5") < 0)
	{
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	return double_1;
}
long v__smart_media_del(unsigned int parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char_1 = char_1 * char_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	return long_1;
}
void v_media_visualize_set( unsigned int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_2;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_2;
	}
}
void v_media_mute_set( double parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		int_1 = int_2;
	}
}
void v_media_volume_set( float parameter_1,double parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	char_2 = char_1 * char_2;
}
unsigned int v__cb_media_vol(short parameter_2,char parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	int_2 = int_1 * int_1;
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	double_2 = double_1 + double_2;
	return unsigned_int_1;
	v_media_volume_set(float_2,double_2);

}
void v__cb_media_pos(float parameter_2,float parameter_3,long parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ",#") > 0)
	{
	}
	int_1 = int_2 * int_3;
	float_1 = float_2;
	v_media_position_set(float_2,double_1);

}
unsigned int v__cb_media_pos_drag_stop(long parameter_2,short parameter_3,double parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "B5") < 0)
	{
	}
	float_1 = float_1;
	double_2 = double_1 * double_2;
	short_1 = short_1 + short_2;
	double_3 = double_2 * double_3;
	float_1 = float_2 * float_1;
	return unsigned_int_1;
}
int v__cb_media_pos_drag_start(double parameter_2,int parameter_3,char parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_7 = 1;
	long_2 = long_1 * long_1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	int_4 = int_2 * int_1;
	int_6 = int_2 * int_5;
	v_media_position_set(float_1,double_1);

	int_6 = int_1;
	return int_7;
}
void v_media_stop( short parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	double_2 = double_2 * double_2;
}
unsigned int v__cb_media_stop(int parameter_2,unsigned int parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int_3 = int_1 * int_2;
	return unsigned_int_1;
	v_media_stop(short_1);

}
double v__cb_media_pause(float parameter_2,float parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	v_media_play_set(unsigned_int_1,double_1);

	int_1 = int_1 * int_1;
	return double_2;
}
void v_media_play_set( unsigned int parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	if(1)
	{
		double double_3 = 1;
		int_2 = int_1 * int_2;
		double_1 = double_3 * double_3;
	}
	if(1)
	{
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_1 = long_1 + long_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
}
unsigned int v__cb_media_play(double parameter_2,long parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_media_play_set(unsigned_int_1,double_1);

	char_1 = char_1 + char_1;
	return unsigned_int_2;
}
void v_media_position_set( float parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_2 = short_1 * short_1;
	double_3 = double_1 + double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "q") > 0)
	{
	}
	char_2 = char_1 + char_2;
	int_3 = int_1 + int_2;
}
void v__cb_mov_ref(double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
}
char v__cb_mov_progress(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	return char_1;
}
short v__cb_mov_restart()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	char_2 = char_1 + char_1;
	long_1 = long_1 * long_1;
	return short_1;
}
int v__cb_mov_decode_stop(unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2;
	}
	double_1 = double_2;
	short_1 = v__cb_mov_restart();

	double_3 = double_3 * double_3;
	return int_1;
}
short v__cb_mov_len_change(short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	return short_1;
}
char v__cb_mov_frame_resize(double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_2 = float_1 + float_2;
	double_1 = double_1 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "j?") > 0)
	{
	}
	double_1 = double_3 * double_3;
	char_1 = v__type_mov_calc(short_1,short_1,long_1,short_2,char_2);

	int_2 = int_1 * int_1;
	return char_1;
}
int v__cb_mov_frame_decode(int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	long long_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float_2 = float_1 + float_2;
	double_1 = double_1 * double_1;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	long_1 = long_2;
	char_1 = v__type_mov_calc(short_1,short_3,long_3,short_3,char_1);

	char_3 = char_2 * char_1;
	char_1 = char_4 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1;
	double_1 = double_1;
	return int_1;
}
short v__type_mov_init( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_4 = 1;
	float float_4 = 1;
	short short_5 = 1;
	float float_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_6 = 1;
	short short_7 = 1;
	double double_5 = 1;
	long long_4 = 1;
	float float_6 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	v_media_position_set(float_1,double_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_2;
	int_2 = int_2 * int_3;
	double_1 = double_1 * double_1;
	int_2 = int_2 + int_4;
	char_1 = v__cb_mov_progress(int_1);

	int_4 = int_3 * int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		long_2 = long_1 + long_1;
		short_1 = short_2;
		float_3 = float_2 + float_3;
	}
	int_4 = int_2 * int_4;
	v_media_visualize_set(unsigned_int_1,short_3);

	long_3 = long_1 + long_3;
	char_1 = v__cb_mov_frame_resize(double_1);

	unsigned_int_4 = v__cb_media_stop(int_1,unsigned_int_4,char_2);

	unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	float_1 = float_2 + float_2;
	double_3 = double_2 + double_3;
	int_2 = int_4 + int_3;
	short_4 = short_2 * short_4;
	if(1)
	{
		unsigned_int_4 = v__cb_media_play(double_3,long_3,float_4);

		unsigned_int_3 = v__cb_media_vol(short_5,char_1,char_1);

		int_4 = int_2 + int_1;
	}
	if(1)
	{
		v__cb_mov_ref(double_2);

		short_2 = v_theme_apply(int_4,long_2,int_4);

		float_4 = float_5 + float_1;
	}
	double_3 = double_2 * double_4;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
	int_5 = v__cb_mov_frame_decode(int_6);

	v_media_play_set(unsigned_int_1,double_4);

	int_6 = int_3 * int_3;
	short_5 = short_6 + short_7;
	int_1 = v__cb_media_pos_drag_start(double_5,int_4,char_1);

	long_2 = long_4 * long_2;
	float_6 = float_4;
	double_2 = double_5 * double_3;
	double_7 = double_6 + double_4;
	unsigned_int_3 = v__cb_media_pos_drag_stop(long_2,short_6,double_7);

	v_media_mute_set(double_7,float_5);

	char_2 = char_1;
	double_2 = v__cb_media_pause(float_1,float_3,long_2);

	unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
	unsigned_int_7 = unsigned_int_5 * unsigned_int_4;
	int_6 = v__cb_mov_decode_stop(unsigned_int_8);

	unsigned_int_5 = unsigned_int_5 + unsigned_int_7;
	long_3 = long_3 + long_4;
	v__cb_media_pos(float_6,float_6,long_4);

	int_2 = int_2 * int_6;
	short_1 = v__cb_mov_len_change(short_1);

	char_3 = char_1 * char_3;
	float_6 = float_5 * float_1;
	if(1)
	{
		short short_8 = 1;
		short_8 = short_2 + short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		unsigned int unsigned_int_10 = 1;
		unsigned_int_9 = unsigned_int_10;
	}
	return short_3;
}
int v__cb_edje_preloaded(float parameter_2,int parameter_3,double parameter_4)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	int_1 = int_2;
	return int_2;
}
long v__type_edje_init( double parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int_1 = v__cb_edje_preloaded(float_1,int_2,double_1);

	double_1 = double_2 * double_1;
	short_2 = short_1 + short_1;
	int_2 = int_1 * int_3;
	int_4 = int_4 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_2 * int_4;
	float_1 = float_1 * float_2;
	short_3 = short_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_3 = 1;
			int int_5 = 1;
			v_theme_auto_reload_enable(double_2);

			double_1 = double_2 + double_2;
			double_3 = double_1 * double_1;
			int_4 = int_5 * int_5;
		}
	}
	return long_1;
}
short v__type_scale_init( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	long_1 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	short_1 = v__cb_scale_preloaded(unsigned_int_3,short_1);

	long_3 = long_4;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	int_1 = int_1 + int_1;
	long_5 = long_4 + long_2;
	float_2 = float_1 * float_1;
	char_2 = char_1 * char_1;
	float_2 = float_1;
	short_1 = short_1 + short_1;
	float_1 = float_1;
	return short_2;
}
long v__cb_img_frame()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	long long_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_2;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	long_3 = long_2 * long_1;
	float_2 = float_1 + float_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double_2 = double_1 * double_1;
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			float_4 = float_3 * float_1;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			if(1)
			{
				long_3 = long_1 + long_2;
			}
		}
	}
	short_2 = short_1 + short_1;
	double_2 = double_1 + double_3;
	double_3 = double_3;
	return long_4;
}
long v__type_img_anim_handle()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = v__cb_img_frame();

	char_3 = char_1 + char_2;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	int_2 = int_1;
	char_2 = char_4;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	double_2 = double_1 + double_2;
	return long_2;
}
short v__cb_img_preloaded(float parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = double_1 * double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "X5") == 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1;
	return short_2;
}
double v__type_img_init( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	short_1 = v__cb_img_preloaded(float_1,unsigned_int_3);

	double_3 = double_1 * double_2;
	int_2 = int_2;
	short_4 = short_2 + short_3;
	long_2 = long_1 * long_1;
	double_2 = double_4;
	long_3 = v__type_img_anim_handle();

	double_2 = double_4 * double_2;
	double_3 = double_3 * double_3;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	return double_3;
}
char v__url_compl_cb(int parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	long long_3 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_4 = 1;
	short short_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	double double_6 = 1;
	double_1 = v__type_img_init(char_1);

	int_2 = int_1 * int_1;
	int_4 = int_3 * int_2;
	unsigned_int_1 = v__smart_calculate(float_1);

	long_1 = long_2;
	if(1)
	{
	}
	if(1)
	{
	}
	char_3 = char_2 + char_2;
	short_1 = short_1 * short_1;
	long_3 = v__type_edje_init(double_2);

	float_2 = float_3;
	char_1 = char_4;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = v__type_scale_init(long_4);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_5 + int_4;
	double_3 = double_2 * double_2;
	double_4 = double_1 * double_2;
	long_3 = long_1;
	double_3 = double_5 * double_5;
	unsigned_int_3 = unsigned_int_2;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	char_2 = char_3 + char_1;
	int_1 = int_3 + int_5;
	short_3 = v__type_mov_init(long_4);

	double_4 = double_2 * double_3;
	double_6 = double_1 + double_6;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	return char_2;
}
long v__url_prog_cb(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long_2 = long_1 * long_1;
	int_1 = int_1 + int_2;
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_1 = long_1 + long_1;
		if(1)
		{
			long long_3 = 1;
			long_3 = long_1;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		int_1 = int_2 * int_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double_1 = double_1 * double_1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
			char_2 = char_1 + char_1;
			char_2 = char_2;
		}
	}
	return long_1;
}
long v__type_thumb_calc( long parameter_1,float parameter_2,short parameter_3,short parameter_4,short parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1 + double_2;
		int_4 = int_3 + int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float_3 = float_1 * float_2;
		char_1 = char_1;
		float_4 = float_2 * float_2;
		if(1)
		{
			int_3 = int_3 + int_4;
			float_1 = float_3 * float_3;
			if(1)
			{
				double_3 = double_1 * double_2;
			}
		}
		if(1)
		{
			double double_4 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			double_3 = double_4 * double_3;
		}
		unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		double_1 = double_3 + double_3;
		double_1 = double_2;
	}
	char_2 = char_1 * char_1;
	double_1 = double_1 + double_3;
	return long_1;
}
char v__type_mov_calc( short parameter_1,short parameter_2,long parameter_3,short parameter_4,char parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	double double_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	float_2 = float_1 + float_2;
	short_2 = short_1 + short_1;
	long_1 = long_1;
	if(1)
	{
		char_1 = char_1;
		char_2 = char_1;
	}
	if(1)
	{
		float float_3 = 1;
		short short_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_4 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		short short_6 = 1;
		float_3 = float_3 * float_1;
		short_3 = short_2 + short_1;
		float_1 = float_4 + float_4;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			short_5 = short_4 * short_2;
		}
		if(1)
		{
			long_1 = long_1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
			if(1)
			{
				short_4 = short_1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
				if(1)
				{
					float float_5 = 1;
					float_5 = float_4 * float_3;
				}
			}
		}
		if(1)
		{
			int int_1 = 1;
			float_1 = float_1;
			int_1 = int_1 * int_1;
			if(1)
			{
				int int_2 = 1;
				char_1 = char_2 * char_3;
				int_3 = int_2 + int_1;
				if(1)
				{
					unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
				}
			}
		}
		if(1)
		{
			double double_1 = 1;
			long_1 = long_2 + long_2;
			double_1 = double_1 + double_1;
		}
		unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
		int_4 = int_3 + int_3;
		char_2 = char_1 * char_3;
		short_6 = short_4 * short_5;
	}
	double_2 = double_2;
	long_1 = long_3 * long_2;
	return char_1;
}
int v__type_edje_calc( short parameter_1,float parameter_2,long parameter_3,short parameter_4,short parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_4;
	return int_1;
}
int v__type_img_calc( char parameter_1,char parameter_2,int parameter_3,short parameter_4,int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_6 = 1;
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		long long_2 = 1;
		char char_2 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_5 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			long_2 = long_1 + long_1;
			int_2 = int_1 * int_1;
			if(1)
			{
				char char_1 = 1;
				char char_3 = 1;
				char_3 = char_1 * char_2;
				char_4 = char_4 + char_2;
				if(1)
				{
					int_3 = int_1 + int_1;
				}
			}
		}
		if(1)
		{
			char_2 = char_4;
			short_2 = short_1 * short_1;
			if(1)
			{
				int_1 = int_2 + int_3;
				int_1 = int_1 + int_2;
				if(1)
				{
					long long_3 = 1;
					long_3 = long_1;
				}
			}
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned_int_1 = unsigned_int_1;
				unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
			}
		}
		if(1)
		{
			long long_4 = 1;
			float float_1 = 1;
			long_1 = long_4 + long_1;
			float_1 = float_1 + float_1;
		}
		short_1 = short_1;
		double_2 = double_1 * double_2;
		unsigned_int_4 = unsigned_int_6 * unsigned_int_3;
		long_5 = long_2 * long_1;
	}
	long_1 = long_6 + long_1;
	int_2 = int_3 * int_2;
	return int_1;
}
short v__cb_scale_preloaded(unsigned int parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_3 = 1;
		float_2 = float_1 * float_2;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		int int_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		int_2 = int_3 * int_1;
		float_2 = float_3 * float_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		double_4 = double_4 + double_2;
	}
	return short_1;
}
float v__type_scale_calc( int parameter_1,long parameter_2,double parameter_3,short parameter_4,int parameter_5)
{
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	float float_5 = 1;
	float float_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_5 = 1;
	float float_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_8 = 1;
	float float_9 = 1;
	float_1 = float_1 + float_1;
	int_1 = int_1;
	if(1)
	{
	}
	if(1)
	{
		float_4 = float_2 * float_3;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_6 = 1;
		int int_7 = 1;
		double double_2 = 1;
		int_3 = int_1 * int_2;
		if(1)
		{
			int int_5 = 1;
			int_3 = int_4 + int_5;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
				double_1 = double_1 + double_1;
				if(1)
				{
					float_2 = float_2 * float_5;
				}
			}
		}
		if(1)
		{
			float_6 = float_2 * float_1;
			char_3 = char_1 + char_1;
			char controller_8[2];
			fgets(controller_8 ,2 ,stdin);
			if( strcmp( controller_8, "T") > 0)
			{
				char char_4 = 1;
				long_1 = long_1 * long_2;
				char_1 = char_4 * char_5;
				if(1)
				{
					float_7 = float_5 + float_7;
				}
			}
		}
		if(1)
		{
			char char_6 = 1;
			char_2 = char_6 * char_1;
			float_1 = float_6;
		}
		int_1 = int_6 * int_2;
		short_1 = v__cb_scale_preloaded(unsigned_int_2,short_2);

		int_7 = int_1;
		double_3 = double_2 * double_3;
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		char char_7 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char_7 = char_2 * char_3;
		double_3 = double_4 * double_3;
		double_4 = double_1 + double_3;
		if(1)
		{
			float_4 = float_8 + float_7;
		}
		if(1)
		{
			int int_8 = 1;
			int_4 = int_8;
		}
		if(1)
		{
			double double_5 = 1;
			char char_8 = 1;
			short short_3 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			double_5 = double_5 * double_3;
			unsigned_int_4 = unsigned_int_2;
			char_5 = char_2 + char_8;
			long_1 = long_2 + long_2;
			unsigned_int_4 = unsigned_int_3;
			short_3 = short_3;
			float_7 = float_5;
			short_1 = short_2;
		}
		float_4 = float_5 * float_3;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		short short_4 = 1;
		short_4 = short_2;
		float_8 = float_6 + float_2;
	}
	short_2 = short_2 * short_1;
	float_2 = float_9 + float_9;
	return float_9;
}
char v__unsmooth_timeout()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_3 = double_4;
	float_1 = v__type_scale_calc(int_1,long_1,double_3,short_1,int_1);

	int_2 = int_2 + int_2;
	long_1 = long_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_3 = char_1 * char_2;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1;
		}
		if(1)
		{
			int_2 = int_1 + int_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3;
	}
	return char_3;
}
short v__smooth_handler( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	short short_2 = 1;
	double_2 = double_1 + double_1;
	double_1 = double_2 * double_1;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			int int_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long_2 = long_1 + long_1;
			int_4 = int_3 + int_1;
			if(1)
			{
				int_4 = int_4 * int_2;
				if(1)
				{
					float_1 = float_1 * float_2;
				}
			}
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
			}
			if(1)
			{
				double double_3 = 1;
				double_4 = double_2 * double_3;
			}
			float_1 = float_2 + float_2;
		}
	}
	if(1)
	{
		short short_1 = 1;
		if(1)
		{
			char_1 = v__unsmooth_timeout();

			double_4 = double_4 * double_2;
		}
		short_1 = short_2;
	}
	return short_2;
}
unsigned int v__smart_calculate( float parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	char char_4 = 1;
	long_1 = v__type_thumb_calc(long_1,float_1,short_1,short_2,short_1);

	float_2 = float_2 + float_3;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		int_1 = v__type_edje_calc(short_3,float_2,long_1,short_2,short_1);

		short_1 = short_2 + short_1;
	}
	int_2 = int_2 + int_2;
	short_2 = short_1 + short_3;
	int_1 = int_3;
	short_3 = short_4 + short_5;
	float_3 = float_3;
	int_3 = int_2 + int_1;
	int_3 = v__type_img_calc(char_1,char_2,int_1,short_1,int_3);

	float_1 = v__type_scale_calc(int_1,long_2,double_1,short_3,int_1);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	float_4 = float_3;
	char_1 = char_3;
	int_4 = int_4 * int_3;
	int_3 = int_3 * int_5;
	int_4 = int_1 + int_3;
	short_6 = short_7;
	long_1 = long_2 + long_2;
	char_4 = char_1 + char_1;
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3 * double_2;
		short_4 = v__smooth_handler(char_3);

		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	}
	if(1)
	{
		double_1 = double_2 + double_1;
		long_2 = long_2 * long_2;
	}
	return unsigned_int_3;
	char_4 = v__type_mov_calc(short_2,short_6,long_1,short_5,char_2);

}
float v__smart_move( double parameter_1,char parameter_2,float parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	int_1 = int_1;
	return float_1;
}
short v__smart_resize( float parameter_1,short parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int_1 = int_1;
	int_1 = int_2 * int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	int_3 = int_2 + int_2;
	return short_1;
}
char v__smart_del( double parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_2 + float_2;
	}
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		char_1 = char_1;
		unsigned_int_1 = unsigned_int_1;
		long_1 = long_1 + long_2;
	}
	long_4 = long_2 + long_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		if(1)
		{
			double_2 = double_1 * double_2;
		}
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		int_3 = int_3 * int_1;
	}
	if(1)
	{
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		double double_4 = 1;
		double_1 = double_2 + double_4;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4;
	}
	if(1)
	{
		int_3 = int_3 + int_3;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_2 = short_3;
	}
	if(1)
	{
		int_1 = int_3 * int_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_1 * float_1;
	}
	if(1)
	{
		int_3 = int_2;
	}
	int_4 = int_3 + int_3;
	double_1 = double_5 + double_3;
	return char_2;
}
void v__smart_add( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long_1 = long_1;
	long_3 = long_2 * long_3;
	int_2 = int_1 + int_2;
	double_1 = double_1 * double_1;
	int_2 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 * int_2;
	int_3 = int_1 + int_3;
	long_1 = long_1;
	int_4 = int_2 + int_2;
}
int v__smart_init()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_6 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = v__smart_resize(float_1,short_2,double_1);

	int_1 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_4;
	float_3 = float_2 * float_2;
	float_2 = float_4;
	unsigned_int_4 = v__smart_calculate(float_5);

	double_2 = double_1 * double_1;
	v__smart_add(char_1);

	char_2 = v__smart_del(double_3);

	char_1 = char_3 * char_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	int_1 = int_1;
	float_6 = v__smart_move(double_4,char_2,float_3);

	short_3 = short_1;
	return int_2;
}
void v_media_add( long parameter_1,long parameter_2,char parameter_3,int parameter_4,float parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_9 = 1;
	float float_4 = 1;
	double double_6 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_8 = 1;
	int int_10 = 1;
	char char_7 = 1;
	char char_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_12 = 1;
	long long_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_2;
	int_1 = int_1 + int_1;
	int_2 = int_3;
	int_3 = v__smart_init();

	int_1 = int_3 * int_1;
	if(1)
	{
		char_3 = char_2 + char_3;
	}
	if(1)
	{
		short_1 = short_2;
	}
	char_1 = char_2 + char_2;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	short_1 = short_3 + short_3;
	int_2 = int_3;
	char_3 = char_3 * char_4;
	double_1 = double_2 * double_3;
	int_3 = int_2 + int_1;
	if(1)
	{
		int int_8 = 1;
		if(1)
		{
			char char_5 = 1;
			int int_4 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_5 = 1;
			float float_2 = 1;
			short_3 = short_3 + short_1;
			double_1 = double_2 * double_4;
			if(1)
			{
				short_1 = v_theme_apply(int_1,long_1,int_1);

				char_5 = char_1 + char_2;
				int_3 = int_3 + int_4;
				char_4 = char_2 * char_4;
			}
			if(1)
			{
				double_3 = double_5 * double_4;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
				char_4 = char_3;
			}
			if(1)
			{
				long_1 = v__url_prog_cb(int_5);

				double_2 = double_1 * double_3;
			}
			if(1)
			{
				int_3 = int_5 + int_6;
			}
			if(1)
			{
				int_7 = int_3;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
			}
			if(1)
			{
				long long_2 = 1;
				long_1 = long_2 * long_3;
			}
			if(1)
			{
				int_4 = int_1 * int_6;
				unsigned_int_7 = unsigned_int_6 * unsigned_int_4;
				float_3 = float_1 + float_2;
				short_3 = short_1 + short_3;
				int_3 = int_4;
				unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_8;
			}
			if(1)
			{
				char char_6 = 1;
				int_7 = int_5 + int_2;
				char_6 = char_5 + char_2;
				int_5 = int_3 * int_4;
				if(1)
				{
					int_8 = int_2;
					if(1)
					{
						short_1 = short_2 * short_2;
						unsigned_int_7 = unsigned_int_2 + unsigned_int_6;
					}
					if(1)
					{
						int_9 = int_2 + int_6;
						if(1)
						{
							short short_4 = 1;
							short_3 = short_2 * short_4;
							float_2 = float_3 + float_1;
							unsigned_int_8 = unsigned_int_8 + unsigned_int_3;
						}
						if(1)
						{
							unsigned int unsigned_int_9 = 1;
							double double_7 = 1;
							double_4 = double_2 + double_5;
							float_4 = float_2;
							double_4 = double_2;
							double_6 = double_6 * double_5;
							int_5 = int_9 * int_8;
							float_5 = float_4;
							unsigned_int_7 = unsigned_int_1 + unsigned_int_9;
							double_2 = double_7 + double_1;
							double_4 = double_6;
						}
					}
				}
				if(1)
				{
					char_3 = v_link_is_url(float_1);

					unsigned_int_8 = unsigned_int_8 * unsigned_int_10;
				}
			}
		}
		if(1)
		{
			int_8 = int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_11 = 1;
			unsigned_int_3 = unsigned_int_11;
			unsigned_int_8 = unsigned_int_2 + unsigned_int_8;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_8 = unsigned_int_4;
			int_2 = int_9;
		}
		float_1 = float_4 * float_4;
		if(1)
		{
			int_7 = int_1 * int_2;
			char_4 = char_1 * char_2;
		}
		double_5 = double_8;
		if(1)
		{
			char_2 = v__url_compl_cb(int_10);

			char_1 = char_7 * char_7;
			double_8 = double_2 + double_6;
		}
		unsigned_int_3 = unsigned_int_6;
		if(1)
		{
			unsigned_int_10 = unsigned_int_4 * unsigned_int_3;
			double_3 = double_1;
		}
		unsigned_int_2 = unsigned_int_6 + unsigned_int_7;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	}
	float_5 = float_5 * float_3;
	long_1 = long_3;
	double_4 = v__is_fmt(short_1,char_3);

	char_1 = char_7 + char_8;
	double_4 = double_8 + double_3;
	float_1 = float_3 * float_3;
	double_3 = double_9;
	unsigned_int_4 = unsigned_int_8 * unsigned_int_12;
	long_4 = long_3 + long_4;
	if(1)
	{
		double_5 = double_8 + double_5;
	}
}
float v__block_media_activate( short parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_6 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	long_1 = long_1 * long_2;
	double_2 = double_1 + double_2;
	double_3 = v__smart_media_play(int_1);

	long_3 = long_2 * long_3;
	short_3 = short_1 * short_2;
	int_1 = int_1 + int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		long_1 = v_media_control_get(int_2);

		long_4 = v__smart_media_clicked(long_4);

		double_2 = double_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short_3 = short_2 + short_4;
	}
	if(1)
	{
		char_1 = char_1;
	}
	if(1)
	{
		long_4 = long_4 + long_4;
	}
	float_3 = float_1 * float_2;
	char_3 = char_1 + char_2;
	if(1)
	{
		double double_5 = 1;
		double_3 = double_5 + double_5;
	}
	double_6 = v__smart_media_stop(char_2);

	double_1 = double_2 + double_3;
	v_media_add(long_4,long_1,char_1,int_3,float_2);

	short_2 = short_4 + short_4;
	long_4 = v__smart_media_del(unsigned_int_3,char_4);

	long_2 = long_2 * long_2;
	char_5 = char_3;
	int_4 = int_2 * int_1;
	short_3 = short_2 + short_2;
	short_1 = v__smart_media_pause(short_3);

	char_3 = char_3 + char_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		short_3 = v_media_src_type_get(short_1,-1 );

		unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
		int_1 = int_4 + int_4;
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	double_1 = double_1 + double_4;
	char_4 = char_5 + char_3;
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		int_6 = int_4 * int_5;
	}
	return float_4;
	v_media_play_set(unsigned_int_3,double_3);

}
long v__block_edje_message_cb(float parameter_2,float parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_4 = 1;
	short short_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_8 = 1;
	long long_7 = 1;
	long long_8 = 1;
	char char_5 = 1;
	int int_6 = 1;
	char char_6 = 1;
	int int_7 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_8 = 1;
	long long_9 = 1;
	char_2 = char_1 * char_1;
	float_2 = float_1 * float_2;
	char_1 = char_3 + char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	int_4 = int_2 + int_3;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if(remainder_check(controller_2,100,2))
	{
		int_2 = int_1;
	}
	long_1 = long_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	int_4 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	double_1 = double_1 + double_1;
	double_4 = double_2 * double_3;
	double_2 = double_1 + double_1;
	short_2 = short_1 * short_1;
	float_3 = float_1 * float_1;
	int_4 = int_4 * int_1;
	double_3 = double_1 + double_3;
	double_1 = double_2 * double_4;
	long_4 = long_2 * long_3;
	int_4 = int_1 * int_4;
	short_2 = short_2;
	char_1 = char_2 * char_4;
	short_2 = short_3;
	double_1 = double_3 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_3 = int_3 + int_3;
		int_2 = int_1;
	}
	long_1 = long_5 * long_5;
	int_2 = int_3;
	v_termpty_write(short_1,long_4,int_2);

	long_4 = long_4 * long_6;
	short_2 = short_1 * short_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_7;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_6 = double_3 * double_5;
		int_3 = int_5 * int_2;
		double_1 = double_3 * double_6;
	}
	double_1 = double_3 + double_2;
	double_4 = double_5 * double_1;
	double_5 = double_4 * double_4;
	int_5 = int_5;
	int_4 = int_3;
	char_4 = char_1 + char_2;
	double_3 = double_7 + double_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int_4 = int_3 * int_5;
		char_2 = char_1 + char_3;
		unsigned_int_9 = unsigned_int_5 * unsigned_int_8;
	}
	long_4 = long_2 * long_5;
	double_6 = double_8;
	double_6 = double_1;
	int_5 = int_1 + int_2;
	long_7 = long_8;
	double_6 = double_2 + double_5;
	long_3 = long_8;
	char_4 = char_5 + char_2;
	int_4 = int_3;
	double_1 = double_3 * double_8;
	int_6 = int_2 * int_2;
	char_6 = char_4 + char_2;
	int_1 = int_4;
	double_4 = double_3 * double_6;
	int_4 = int_1 + int_3;
	long_2 = long_3 + long_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double_6 = double_8;
		float_2 = float_2 + float_1;
		float_1 = float_3;
	}
	short_1 = short_1 * short_4;
	char_3 = char_4;
	short_4 = short_1 + short_4;
	int_1 = int_7 * int_5;
	unsigned_int_1 = unsigned_int_8 + unsigned_int_3;
	short_3 = short_1;
	char_1 = char_1 + char_2;
	short_2 = short_5 * short_6;
	int_5 = int_8 + int_5;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		double double_9 = 1;
		int_3 = int_4 * int_6;
		unsigned_int_9 = unsigned_int_3 + unsigned_int_9;
		double_1 = double_9 + double_4;
	}
	int_5 = int_1 + int_6;
	double_1 = double_2;
	int_2 = int_1 * int_1;
	return long_9;
}
void v_termpty_write( short parameter_1,long parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short_2 = short_1 * short_1;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
		double double_4 = 1;
		double_1 = double_1 * double_4;
	}
}
unsigned int v__block_edje_signal_cb(float parameter_2,unsigned int parameter_3,double parameter_4)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_1 + float_1;
	double_2 = double_1 + double_2;
	double_4 = double_1 * double_3;
	float_4 = float_2 * float_3;
	short_1 = short_1 * short_1;
	float_3 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
		short_3 = short_2 + short_3;
	}
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_5 = 1;
		char_4 = char_3 + char_2;
		float_6 = float_2 + float_5;
		double_2 = double_3 + double_2;
		v_termpty_write(short_2,long_1,int_1);

		short_4 = short_4 * short_3;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		short_1 = short_1 * short_5;
		long_2 = long_2 + long_2;
		float_1 = float_3 + float_2;
	}
	if(1)
	{
		long long_3 = 1;
		int int_2 = 1;
		long_3 = long_1 * long_2;
		float_4 = float_1 + float_4;
		int_1 = int_2 * int_2;
	}
	return unsigned_int_3;
}
void v_termpty_block_chid_update( unsigned int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
char v__block_edje_cmds( int parameter_1,char parameter_2,char parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = v__block_edje_signal_cb(float_1,unsigned_int_2,double_1);

	long_1 = v__block_edje_message_cb(float_2,float_1,int_1);

	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	return char_1;
	v_termpty_block_chid_update(unsigned_int_2,long_2);

}
short v_homedir_get( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double_1 = double_2;
		long_2 = long_1 * long_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		}
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "2f") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	return short_1;
}
unsigned int v__block_edje_activate( float parameter_1,long parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_2 = 1;
	char char_2 = 1;
	long long_6 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	char_1 = v__block_edje_cmds(int_1,char_1,char_1,long_1);

	long_1 = long_1 + long_1;
	long_2 = long_2 + long_1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		long_1 = long_3 + long_3;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
		if(1)
		{
			double_1 = double_1 * double_1;
			short_1 = short_1 + short_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
			long_2 = long_3 * long_4;
		}
	}
	long_5 = long_4 * long_4;
	short_2 = v_homedir_get(char_2,long_1);

	long_6 = long_6 + long_5;
	double_2 = double_1 * double_1;
	double_3 = double_2 + double_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	}
	return unsigned_int_4;
	int_2 = v_config_theme_path_default_get(double_2);

}
char v__block_activate( char parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = v__block_edje_activate(float_1,long_1);

	int_1 = int_1 * int_1;
	double_1 = double_2;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		float float_3 = 1;
		float_4 = float_3 * float_3;
	}
	short_1 = short_1 + short_1;
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "D") < 0)
	{
		float_4 = v__block_media_activate(short_2,short_2);

		int_1 = int_1 + int_1;
	}
	return char_1;
}
char v_termpty_block_get( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "f;") < 0)
	{
	}
	return char_1;
}
int v_termpty_block_id_get( float parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1;
	int_2 = int_2 + int_3;
	float_1 = float_1 * float_1;
	return int_2;
}
void v_termpty_backscroll_adjust( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "6") < 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	long_1 = v_verify_beacon(double_1,int_3);

}
long v__smart_apply( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_8 = 1;
	int int_9 = 1;
	char char_2 = 1;
	int int_10 = 1;
	float float_3 = 1;
	double double_9 = 1;
	long long_3 = 1;
	int int_11 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_3 = 1;
	float float_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	char char_5 = 1;
	float float_5 = 1;
	double double_11 = 1;
	char char_6 = 1;
	double double_12 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_7 = 1;
	float float_7 = 1;
	int int_12 = 1;
	short short_10 = 1;
	long long_6 = 1;
	int int_13 = 1;
	int int_14 = 1;
	int int_15 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	short_2 = short_1 * short_2;
	int_1 = int_1 + int_1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	v_term_preedit_str_get(float_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	double_2 = double_1 + double_2;
	double_2 = double_4 * double_5;
	int_3 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	double_2 = double_6 + double_2;
	double_3 = double_2 * double_7;
	unsigned_int_7 = unsigned_int_7;
	float_1 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_8 = 1;
		int_1 = int_3 + int_1;
		int_2 = int_4;
		double_5 = double_4 * double_4;
		int_2 = int_4 * int_5;
		if(1)
		{
			unsigned_int_2 = unsigned_int_6 + unsigned_int_7;
		}
		double_8 = double_2 + double_3;
		if(1)
		{
			long_1 = long_1 * long_1;
		}
		int_4 = int_6 + int_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						float_2 = float_2;
					}
					int_3 = int_2 + int_7;
				}
				unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
				if(1)
				{
					unsigned_int_2 = unsigned_int_6 + unsigned_int_4;
				}
				if(1)
				{
					long_2 = long_1;
				}
				double_4 = v__termpty_is_dblwidth_get(char_1,int_6);

				unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
				int_6 = int_8 + int_1;
				int_7 = int_9;
				int_3 = int_6 + int_6;
				unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
				char_1 = char_1 + char_2;
			}
			if(1)
			{
				long long_5 = 1;
				double double_10 = 1;
				long_2 = long_2 * long_2;
				long_2 = long_1;
				if(1)
				{
					if(1)
					{
						double_5 = double_1 * double_5;
					}
					char_2 = char_2;
					int_1 = int_10 + int_5;
					v_miniview_redraw(short_1);

					float_2 = float_3 + float_2;
					double_6 = double_1 * double_9;
					v_termpty_backlog_lock();

					long_2 = long_1 * long_3;
					unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
					unsigned_int_3 = v__block_obj_del(char_2);

					int_11 = int_6 * int_2;
					long_4 = long_4 * long_4;
					unsigned_int_2 = unsigned_int_2 * unsigned_int_8;
					double_8 = double_3 + double_1;
					float_2 = float_1 * float_2;
					double_3 = double_4 + double_3;
					if(1)
					{
						int_10 = int_6 * int_6;
						long_1 = long_5 * long_1;
						char_2 = v__block_activate(char_1,short_3);

						unsigned_int_3 = unsigned_int_7 * unsigned_int_7;
						short_2 = short_1 + short_1;
						int_2 = int_5 + int_2;
					}
				}
				if(1)
				{
					if(1)
					{
						if(1)
						{
							float_2 = float_2 * float_4;
						}
						int_8 = int_1 * int_11;
					}
					char_3 = char_1 * char_2;
					if(1)
					{
						int_4 = int_7 + int_4;
					}
					if(1)
					{
						v_termpty_cellrow_get(int_7,int_6,int_6);

						double_6 = double_8 + double_6;
					}
					char_1 = char_1 * char_2;
					unsigned_int_6 = unsigned_int_5 * unsigned_int_6;
					int_1 = int_10 + int_5;
					double_1 = double_2 * double_5;
					double_10 = double_2 * double_6;
					long_3 = v_term_miniview_get(int_3);

					char_2 = char_1 + char_4;
					if(1)
					{
						short_2 = short_4 * short_1;
					}
				}
				if(1)
				{
					short_2 = short_2;
					short_4 = short_5 + short_6;
					int_7 = int_10 + int_11;
					char_5 = char_5 * char_4;
					long_2 = long_4 * long_4;
					double_3 = double_3 + double_2;
					if(1)
					{
						double_8 = double_10;
						int_5 = int_8 + int_11;
					}
					if(1)
					{
						int_1 = int_2 * int_1;
						double_3 = double_3;
					}
					if(1)
					{
						long_1 = long_1 + long_4;
					}
					if(1)
					{
						if(1)
						{
							int_9 = int_8 * int_10;
						}
						if(1)
						{
							unsigned_int_2 = unsigned_int_4;
						}
					}
					if(1)
					{
						double_1 = double_5 * double_10;
					}
					if(1)
					{
						int_10 = int_3 + int_2;
					}
					if(1)
					{
						int_3 = int_6 * int_3;
						unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
						double_5 = double_3 + double_6;
						v_termpty_backscroll_adjust(char_3,int_3);

						long_1 = long_1;
						double_4 = double_2 * double_1;
						double_4 = double_10 + double_3;
						unsigned_int_8 = unsigned_int_4 * unsigned_int_4;
					}
					if(1)
					{
						short_4 = short_3;
					}
					if(1)
					{
						float_5 = float_3 + float_1;
					}
					if(1)
					{
						if(1)
						{
							double_1 = double_3;
						}
						char_3 = char_5 + char_2;
					}
					double_2 = double_9 + double_10;
					long_3 = long_5;
					unsigned_int_6 = unsigned_int_6;
					float_2 = float_4;
					if(1)
					{
						char_5 = char_3 * char_1;
						unsigned_int_2 = unsigned_int_6 * unsigned_int_5;
					}
					if(1)
					{
						short_1 = short_6 * short_2;
						double_11 = double_1 + double_4;
					}
					int_9 = int_11 + int_10;
					v_termpty_backlog_unlock();

					double_7 = double_9 * double_8;
					char_6 = char_3 + char_5;
					long_2 = long_5 + long_2;
					if(1)
					{
						int_5 = int_9;
					}
				}
			}
		}
		double_5 = double_4 + double_5;
		if(1)
		{
			double_8 = double_8 * double_9;
		}
	}
	char_2 = char_1;
	if(1)
	{
		char char_7 = 1;
		char_3 = char_2 * char_1;
		double_7 = double_12;
		unsigned_int_4 = unsigned_int_7 * unsigned_int_8;
		unsigned_int_8 = unsigned_int_2 + unsigned_int_8;
		char_2 = char_7 * char_3;
		int_6 = int_11 * int_6;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				short short_8 = 1;
				short short_9 = 1;
				short_4 = short_6 + short_2;
				char_6 = v_termpty_block_get(short_1,int_1);

				short_5 = short_5 * short_6;
				unsigned_int_4 = unsigned_int_2 + unsigned_int_9;
				if(1)
				{
					double_1 = double_5;
				}
				short_2 = short_6 + short_2;
				if(1)
				{
					if(1)
					{
						char_4 = char_6 * char_1;
						float_4 = float_2 + float_3;
						int_5 = int_5 + int_11;
					}
				}
				if(1)
				{
					float float_6 = 1;
					float_4 = float_4 * float_6;
					int_5 = int_1 * int_4;
				}
				int_5 = int_9 * int_1;
				short_7 = short_4 + short_3;
				float_4 = float_3 + float_7;
				short_2 = short_1 * short_8;
				unsigned_int_2 = unsigned_int_6;
				int_12 = int_3 * int_1;
				short_8 = short_9 + short_4;
				char_3 = char_2 + char_3;
				unsigned_int_2 = unsigned_int_1;
				double_7 = double_1 * double_1;
				double_11 = double_12 + double_11;
				if(1)
				{
					short_10 = short_6 * short_7;
					int_9 = int_5;
					unsigned_int_7 = unsigned_int_6 * unsigned_int_5;
					unsigned_int_4 = unsigned_int_4 * unsigned_int_7;
					long_4 = long_6 * long_1;
					char_5 = char_6 + char_6;
					unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
					int_11 = int_1 * int_4;
					int_6 = int_12 * int_13;
					float_1 = float_7 * float_3;
				}
				int_14 = int_5;
				if(1)
				{
					if(1)
					{
						double_9 = double_6 + double_5;
						int_13 = int_7 * int_5;
					}
				}
			}
			short_10 = short_4 + short_5;
		}
		float_1 = float_5 + float_7;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_6;
	}
	int_3 = int_8 * int_4;
	if(1)
	{
		long long_7 = 1;
		long long_8 = 1;
		long long_9 = 1;
		int_13 = int_11 * int_13;
		long_1 = long_2 * long_7;
		long_6 = long_8 + long_9;
	}
	if(1)
	{
		long_4 = long_1 + long_4;
	}
	if(1)
	{
		double_9 = double_9 + double_7;
	}
	double_3 = double_1 * double_1;
	int_15 = v_termpty_block_id_get(float_7,int_4,int_13);

	double_1 = double_3 + double_12;
	unsigned_int_11 = unsigned_int_2 + unsigned_int_10;
	if(1)
	{
		double double_13 = 1;
		double double_14 = 1;
		unsigned int unsigned_int_12 = 1;
		unsigned int unsigned_int_13 = 1;
		unsigned int unsigned_int_14 = 1;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
		double_14 = double_13 + double_12;
		int_15 = int_8 * int_9;
		int_14 = int_11 + int_6;
		char_4 = char_1 * char_1;
		unsigned_int_12 = unsigned_int_4;
		if(1)
		{
			float_7 = float_1 + float_3;
			unsigned_int_13 = unsigned_int_9 * unsigned_int_12;
		}
		float_1 = float_1 * float_4;
		int_10 = int_13 * int_5;
		unsigned_int_5 = unsigned_int_10;
		int_8 = int_9 + int_13;
		unsigned_int_2 = unsigned_int_4;
		char_2 = char_3 + char_6;
		int_13 = int_12 + int_4;
		unsigned_int_6 = unsigned_int_14 * unsigned_int_13;
		if(1)
		{
			unsigned int unsigned_int_15 = 1;
			unsigned_int_15 = unsigned_int_4 * unsigned_int_6;
		}
		if(1)
		{
			if(1)
			{
				int_12 = int_15 + int_2;
			}
			if(1)
			{
				unsigned int unsigned_int_16 = 1;
				unsigned_int_16 = unsigned_int_8 * unsigned_int_11;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_6;
			}
			if(1)
			{
				short_1 = short_1 + short_6;
			}
			if(1)
			{
				short_6 = short_5 * short_10;
			}
		}
		int_4 = int_8 + int_9;
	}
	if(1)
	{
		int_8 = int_12 + int_8;
	}
	if(1)
	{
		char char_8 = 1;
		char char_9 = 1;
		char_9 = char_1 * char_8;
	}
	short_7 = short_5 + short_1;
	return long_2;
}
void v__smart_cb_change()
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short_1 = short_1;
	int_3 = int_1 + int_2;
	double_1 = double_1 * double_1;
	long_2 = long_1 + long_2;
	long_2 = v__smart_apply(long_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_2 + short_3;
}
float v__smart_update_queue( char parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	v__smart_cb_change();

	int_1 = int_1 * int_2;
	return float_1;
}
unsigned int v__lost_selection_reset_job()
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 + float_1;
	double_3 = double_1 * double_2;
	float_3 = float_2 * float_1;
	if(1)
	{
		double_2 = double_3 * double_3;
		double_4 = v__lost_selection(int_1);

		float_2 = float_1 * float_3;
	}
	return unsigned_int_1;
}
double v__lost_selection(int parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = v__smart_update_queue(char_1,unsigned_int_1);

	long_2 = long_1 * long_1;
	double_1 = double_1 * double_1;
	int_1 = int_1 + int_1;
	long_3 = long_2 * long_1;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2 * int_3;
	}
	if(1)
	{
		char char_2 = 1;
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1 * double_1;
			if(1)
			{
				short short_1 = 1;
				short_2 = short_1 + short_1;
			}
			v__sel_set(char_1,float_1);

			double_1 = double_1 * double_1;
		}
		char_1 = char_2 + char_2;
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		long long_4 = 1;
		int int_6 = 1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			short short_3 = 1;
			unsigned_int_2 = unsigned_int_1;
			short_2 = short_3 + short_3;
		}
		int_5 = int_4 * int_5;
		unsigned_int_3 = v__lost_selection_reset_job();

		long_2 = long_2 * long_3;
		long_4 = long_2 + long_1;
		int_3 = int_4 * int_6;
	}
	return double_1;
}
unsigned int v__take_selection_text( unsigned int parameter_1,double parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double_3 = double_1 * double_2;
	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = v__lost_selection(int_1);

	char_2 = char_1 * char_2;
	float_1 = float_1;
	int_3 = int_2 + int_2;
	long_2 = long_1 + long_2;
	short_1 = short_1 * short_1;
	double_3 = double_1 + double_3;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_4 * double_4;
	}
	long_1 = long_1 + long_2;
	return unsigned_int_2;
}
long v__cb_ctxp_link_content_copy(short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	short_2 = short_1 * short_1;
	char_3 = char_1 * char_2;
	long_1 = long_1 + long_1;
	double_2 = double_1 * double_2;
	double_3 = double_3 + double_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_4 = v_termio_selection_get(float_1,int_1,int_1,int_2,int_3,float_1,double_3);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	long_2 = long_1 + long_1;
	unsigned_int_3 = v__take_selection_text(unsigned_int_1,double_4,short_1);

	double_4 = double_2;
	return long_1;
}
void v_ty_sb_free()
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float_2 = float_1 * float_2;
	double_1 = double_1 + double_1;
	int_1 = int_1 * int_1;
}
double v_ty_sb_steal_buf( float parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long_1 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char_2 = char_1 * char_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_2 = 1;
			int_2 = int_1 * int_1;
		}
		float_2 = float_1 + float_1;
	}
	long_3 = long_2 + long_3;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	unsigned_int_3 = unsigned_int_1;
	int_1 = int_1 * int_1;
	short_2 = short_1 + short_1;
	return double_1;
}
int v_codepoint_to_utf8( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	int int_6 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		short_1 = short_1 + short_2;
	}
	if(1)
	{
		short short_4 = 1;
		double_1 = double_1 + double_2;
		float_1 = float_1;
		short_3 = short_3 * short_4;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2 * double_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		float_1 = float_1 * float_1;
		double_2 = double_2;
	}
	if(1)
	{
		short short_5 = 1;
		int int_1 = 1;
		short_5 = short_3 + short_3;
		long_2 = long_1 * long_1;
		int_2 = int_1 + int_1;
		int_2 = int_2 * int_3;
		int_3 = int_2;
	}
	if(1)
	{
		double double_4 = 1;
		long long_3 = 1;
		float_3 = float_2 * float_2;
		float_2 = float_3 + float_2;
		double_1 = double_2 + double_2;
		int_2 = int_3 + int_4;
		double_2 = double_4;
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		float_3 = float_1 * float_4;
		float_1 = float_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		char_2 = char_1 + char_1;
		unsigned_int_1 = unsigned_int_3;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
		int_5 = int_4 + int_3;
	}
	if(1)
	{
		float_1 = float_4 * float_2;
	}
	return int_6;
}
void v_ty_sb_spaces_rtrim( short parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_2 * int_2;
	long_1 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		double_3 = double_1 + double_2;
		int_4 = int_2 * int_2;
		short_1 = short_1 + short_2;
		float_1 = float_1;
	}
}
int v_ty_sb_add( char parameter_1,int parameter_2,char parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	char_1 = char_1;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_1 = char_2 * char_3;
		short_2 = short_1 * short_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "W") > 0)
		{
		}
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		int_1 = int_1 * int_2;
	}
	float_2 = float_1 + float_2;
	short_3 = short_3;
	int_1 = int_2 + int_3;
	return int_2;
}
double v__termpty_cellrow_from_beacon_get( int parameter_1,int parameter_2,float parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 + int_2;
	int_2 = int_2 + int_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		char char_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char_3 = char_3 + char_1;
		short_2 = short_1 + short_2;
	}
	float_1 = float_1 * float_2;
	char_2 = char_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	double_2 = double_1 * double_1;
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int_2 = int_4 * int_4;
		char_5 = char_4 * char_5;
		float_2 = float_1;
		long_2 = v_verify_beacon(double_2,int_4);

		int_6 = int_5 * int_5;
		int_6 = int_6 + int_2;
		float_2 = float_1 * float_2;
		double_1 = double_1 * double_1;
	}
	unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
	return double_1;
}
void v_termpty_cellrow_get( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "t!") > 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
		}
		double_1 = v__termpty_cellrow_from_beacon_get(int_1,int_2,float_1);

		char_2 = char_1 + char_2;
	}
	if(1)
	{
	}
}
char v_termio_selection_get( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,float parameter_6,double parameter_7)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	char char_2 = 1;
	v_termpty_cellrow_get(int_1,int_2,int_2);

	int_2 = v_codepoint_to_utf8(long_1,char_1);

	short_1 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			double_1 = double_1 + double_1;
			float_1 = float_1 * float_2;
		}
		if(1)
		{
			short_2 = short_1 + short_2;
		}
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						double_1 = double_2 + double_2;
					}
					if(1)
					{
						unsigned int unsigned_int_1 = 1;
						unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
					}
				}
				if(1)
				{
					v_termpty_backlog_unlock();

					double_1 = v_ty_sb_steal_buf(float_1);

					int_3 = int_3 * int_1;
				}
			}
		}
		if(1)
		{
			int_2 = v_ty_sb_add(char_1,int_4,char_1);

			double_2 = double_1 + double_1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float float_3 = 1;
				if(1)
				{
					unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
				}
				if(1)
				{
					v_ty_sb_free();

					float_3 = float_2 + float_2;
				}
				if(1)
				{
					float float_4 = 1;
					float_3 = float_4 * float_4;
				}
				if(1)
				{
					int_3 = int_1 * int_4;
				}
				if(1)
				{
					double double_3 = 1;
					v_termpty_backlog_lock();

					double_2 = double_3 * double_2;
				}
			}
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
		}
	}
	return char_2;
	v_ty_sb_spaces_rtrim(short_2);

}
float v__cb_ctxp_link_open(short parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	v__activate_link(unsigned_int_1,long_1,uni_para);

	short_1 = short_2;
	double_3 = double_1 * double_2;
	short_3 = short_3 + short_3;
	int_1 = int_1 * int_1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	return float_1;
}
float v__should_inline( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = v_termio_config_get(long_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	int_1 = int_1;
	long_3 = long_2 + long_1;
	if(1)
	{
	}
	return float_1;
}
long v_link_is_email( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return long_1;
}
float v_link_is_protocol( unsigned int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
char v_link_is_url( float parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	return char_1;
	float_1 = v_link_is_protocol(unsigned_int_1);

}
void v__activate_link( unsigned int parameter_1,long parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	float float_1 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int_3 = int_1 * int_2;
	int_4 = int_2 * int_1;
	long_2 = long_1 + long_1;
	int_5 = int_1 * int_3;
	float_1 = float_1;
	float_1 = float_1 * float_1;
	int_7 = int_5 + int_6;
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	char controller4vul_634[3];
	fgets(controller4vul_634 ,3 ,stdin);
	if( strcmp( controller4vul_634, "fI") < 0)
	{
		char controller4vul_635[2];
		fgets(controller4vul_635 ,2 ,stdin);
		if( strcmp( controller4vul_635, "c") < 0)
		{
			short_1 = v_media_src_type_get(short_2,uni_para);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		}
	}
	if(1)
	{
		int_6 = int_7 * int_7;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		float float_3 = 1;
		float_2 = float_3;
		unsigned_int_2 = unsigned_int_1;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		char_2 = char_1 + char_1;
		unsigned_int_2 = unsigned_int_2;
		if(1)
		{
			float float_4 = 1;
			float float_5 = 1;
			float_2 = float_4 + float_5;
		}
		if(1)
		{
			double_3 = double_1 + double_2;
		}
		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			double_1 = double_2 * double_1;
			char_1 = char_2 + char_2;
		}
	}
	if(1)
	{
		long_3 = long_1 + long_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			long_3 = long_1 * long_4;
			if(1)
			{
				if(1)
				{
					int_7 = int_4 * int_6;
					int_4 = int_2 + int_6;
				}
				if(1)
				{
					unsigned int unsigned_int_5 = 1;
					unsigned int unsigned_int_6 = 1;
					unsigned int unsigned_int_7 = 1;
					unsigned_int_7 = unsigned_int_5 + unsigned_int_6;
					double_4 = double_2 * double_1;
				}
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						double double_5 = 1;
						double_5 = double_2 * double_4;
					}
				}
				if(1)
				{
					if(1)
					{
						char_2 = char_3;
					}
				}
				if(1)
				{
					if(1)
					{
						short_2 = short_1;
					}
				}
				long_1 = long_3 * long_4;
				int_7 = int_1 * int_5;
			}
		}
	}
	if(1)
	{
		char char_4 = 1;
		unsigned_int_8 = unsigned_int_1 * unsigned_int_1;
		char_4 = char_3 + char_4;
		if(1)
		{
			long_1 = long_3 * long_4;
			if(1)
			{
				double_3 = double_4;
				double_2 = double_3 * double_1;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						char_1 = char_5;
					}
				}
				if(1)
				{
					if(1)
					{
						char_5 = char_2 + char_3;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned int unsigned_int_9 = 1;
						unsigned_int_9 = unsigned_int_9 + unsigned_int_2;
					}
				}
				long_4 = long_1 + long_4;
				short_1 = short_1;
			}
		}
	}
	if(1)
	{
		int int_8 = 1;
		int_1 = int_8 * int_4;
	}
	char_5 = char_6;
	if(1)
	{
		unsigned_int_8 = unsigned_int_1 + unsigned_int_4;
	}
}
int v__cb_ctxp_link_preview(long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	char char_5 = 1;
	int int_1 = 1;
	char_1 = char_2;
	v__activate_link(unsigned_int_1,long_1,-1 );

	float_2 = float_1 + float_2;
	double_1 = double_2;
	char_4 = char_3 * char_1;
	long_1 = long_2;
	char_2 = char_5 + char_1;
	return int_1;
}
double v__is_fmt( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1 + double_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
		}
	}
	return double_1;
}
short v_media_src_type_get( short parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char * vul_var;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_636[2];
	fgets(controller4vul_636 ,2 ,stdin);
	if( strcmp( controller4vul_636, "J") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 387)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	double_1 = double_2;
}
double v__mouse_in_selection( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	short_3 = short_1 * short_2;
	if(1)
	{
	}
	long_3 = long_1 + long_2;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_4 = double_4;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_5 = 1;
		int_2 = int_1 + int_2;
		double_1 = double_5;
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
	return double_4;
}
double v__smart_xy_to_cursor( unsigned int parameter_1,int parameter_2,char parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double_1 = double_1;
	double_2 = double_1 + double_2;
	short_1 = short_1 + short_2;
	int_1 = int_1 * int_1;
	int_4 = int_2 * int_3;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "L") > 0)
	{
		int_2 = int_3 + int_1;
	}
	return double_4;
}
short v__cb_link_down(float parameter_2,short parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_2;
	double_3 = double_3 * double_2;
	int_2 = int_1 * int_1;
	if(1)
	{
		float float_1 = 1;
		float_2 = float_1 + float_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_2 = int_2 * int_3;
	}
	char controller4vul_631[2];
	fgets(controller4vul_631 ,2 ,stdin);
	if( strcmp( controller4vul_631, ",") > 0)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_4 = 1;
		int int_6 = 1;
		double double_5 = 1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
		long_1 = long_2;
		char controller4vul_632[3];
		fgets(controller4vul_632 ,3 ,stdin);
		if( strcmp( controller4vul_632, "_F") > 0)
		{
			unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
			char controller4vul_633[2];
			fgets(controller4vul_633 ,2 ,stdin);
			if( strcmp( controller4vul_633, ";") < 0)
			{
				float_2 = v__cb_ctxp_link_open(short_1,uni_para);

			}
		}
		unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
		int_4 = int_3 + int_3;
		if(1)
		{
			int_5 = int_4 * int_2;
			if(1)
			{
				int_4 = int_5;
			}
		}
		long_4 = long_3 * long_1;
		double_3 = double_2 * double_4;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_6;
		}
		if(1)
		{
			float float_3 = 1;
			float_3 = float_3;
			unsigned_int_1 = unsigned_int_2;
		}
		if(1)
		{
			short short_2 = 1;
			short_1 = short_1 * short_2;
		}
		int_2 = int_2;
		int_6 = int_5 * int_4;
		short_1 = short_1;
		long_2 = long_1 + long_4;
		double_5 = double_2 + double_5;
	}
	return short_1;
}
char v_main_term_popup_exists( char parameter_1)
{
	char char_1 = 1;
	return char_1;
}
long v__update_link( short parameter_1,int parameter_2,char parameter_3,int parameter_4,int uni_para)
{
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short_1 = v__cb_link_down(float_1,short_1,uni_para);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_5;
	int_2 = int_1 * int_2;
	float_3 = float_1 + float_2;
	int_2 = int_2 + int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = float_3 + float_3;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		double_1 = double_1 * double_1;
		unsigned_int_6 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		char_1 = char_2;
	}
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_5 = 1;
		double_1 = double_2 * double_3;
		double_1 = double_3;
		int_3 = int_2 * int_3;
		if(1)
		{
			unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
			if(1)
			{
				int_4 = int_3 * int_2;
			}
			if(1)
			{
				short short_2 = 1;
				short_2 = short_1 + short_2;
			}
		}
		if(1)
		{
			int int_5 = 1;
			double double_4 = 1;
			int_5 = int_5 * int_1;
			double_4 = double_4;
		}
		if(1)
		{
			int int_6 = 1;
			char char_3 = 1;
			int_1 = int_6 * int_2;
			char_2 = char_3 + char_2;
		}
		int_3 = int_4 + int_3;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_7;
		char_2 = char_1 + char_2;
		int_2 = int_3;
		double_5 = double_3 + double_5;
		if(1)
		{
			double double_6 = 1;
			double_2 = double_1 + double_6;
		}
	}
	return long_1;
}
void v__remove_links( char parameter_1,double parameter_2,int uni_para)
{
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	long_1 = v__update_link(short_1,int_1,char_1,int_2,uni_para);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		int int_4 = 1;
		double_2 = double_1 + double_1;
		int_4 = int_1 + int_3;
	}
	float_1 = float_1 * float_1;
	float_2 = float_1;
	float_3 = float_2 * float_2;
	double_4 = double_3 + double_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	int_5 = int_5 + int_3;
}
void v__sel_set( char parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	char_1 = char_1 * char_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_3 = int_1 + int_2;
		short_2 = short_1 * short_2;
		float_1 = float_2;
	}
}
int v_termio_scroll_get()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int_3 = int_1 * int_2;
	double_3 = double_1 * double_2;
	return int_4;
}
void v_miniview_position_offset( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double_1 = double_1;
	int_2 = int_1 + int_2;
	int_1 = int_1 * int_1;
	int_3 = v_termio_scroll_get();

	double_2 = double_1 * double_2;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2 + double_2;
	}
	if(1)
	{
		int int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_4 = int_2 + int_2;
		float_1 = float_2;
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			double double_5 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			float_4 = float_3 + float_4;
			double_5 = double_2 * double_4;
		}
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "n,") < 0)
		{
			char char_1 = 1;
			unsigned int unsigned_int_3 = 1;
			int_1 = int_1 * int_2;
			char_1 = char_1 + char_1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_6 = 1;
			short_3 = short_1 * short_2;
			double_4 = double_6;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_1;
			}
		}
	}
}
long v_term_miniview_get( int parameter_1)
{
	long long_1 = 1;
	if(1)
	{
	}
	return long_1;
}
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_5 = 1;
	char_2 = char_1 * char_1;
	double_2 = double_1 + double_1;
	char_2 = char_2;
	char controller4vul_629[2];
	fgets(controller4vul_629 ,2 ,stdin);
	if( strcmp( controller4vul_629, "G") < 0)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		char controller4vul_630[2];
		fgets(controller4vul_630 ,2 ,stdin);
		if( strcmp( controller4vul_630, "r") > 0)
		{
			v__remove_links(char_2,double_3,uni_para);

			int_1 = int_1;
		}
		double_3 = double_2 + double_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_4 = 1;
		int int_4 = 1;
		int int_5 = 1;
		char_1 = char_2;
		int_3 = int_1 + int_2;
		float_2 = float_1 + float_1;
		if(1)
		{
			double_2 = double_1 * double_4;
		}
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_3 = 1;
			int_4 = int_2;
			float_3 = float_4;
			int_4 = int_5 * int_1;
			double_5 = double_4 + double_1;
			unsigned_int_1 = unsigned_int_3;
			if(1)
			{
				int_2 = int_5 + int_4;
			}
		}
		if(1)
		{
			double_1 = double_2 + double_4;
		}
		if(1)
		{
			short short_1 = 1;
			int_3 = int_4 + int_1;
			short_1 = short_1;
			int_5 = int_5;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_6 = 1;
			double_5 = double_6 + double_3;
		}
	}
}
int v_termpty_save_new( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_1;
	short_1 = short_1;
	if(1)
	{
	}
	v_termpty_save_free(double_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_2 * short_1;
	return int_1;
}
int v_termpty_save_expand( long parameter_1,char parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_2 = double_1 * double_1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	int_3 = int_2 * int_2;
	int_4 = int_2 * int_1;
	int_1 = int_4 + int_1;
	return int_4;
}
double v__termpty_cell_is_empty( long parameter_1)
{
	double double_1 = 1;
	if(1)
	{
	}
	return double_1;
}
double v_termpty_line_length( unsigned int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_1 = v__termpty_cell_is_empty(long_1);

		float_3 = float_1 + float_2;
		if(1)
		{
		}
	}
	return double_1;
}
long v_verify_beacon( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
void v_termpty_text_save_top( int parameter_1,short parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_1 = 1;
	long long_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = double_2;
	long_1 = long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "=i") < 0)
	{
	}
	char_1 = char_2;
	double_3 = double_2 * double_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_5 = int_4 + int_2;
	}
	if(1)
	{
		v_termpty_backlog_lock();

		int_6 = int_4 * int_6;
		if(1)
		{
			int_3 = v_termpty_save_expand(long_1,char_1,double_1);

			long_2 = long_2 + long_1;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			int_3 = int_2 * int_3;
			float_1 = float_1 + float_2;
			unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
			unsigned_int_6 = unsigned_int_3 * unsigned_int_3;
		}
	}
	char_1 = char_1 * char_3;
	unsigned_int_6 = unsigned_int_2;
	if(1)
	{
	}
	double_3 = v_termpty_line_length(unsigned_int_2,double_3);

	unsigned_int_2 = unsigned_int_7 * unsigned_int_1;
	int_6 = int_1 * int_3;
	if(1)
	{
		int_5 = v_termpty_save_new(short_1,int_6);

		long_3 = long_2 * long_2;
	}
	int_4 = int_4 + int_4;
	v_termpty_backlog_unlock();

	float_5 = float_3 + float_4;
	int_1 = int_3 * int_6;
	if(1)
	{
		double_2 = double_3;
		unsigned_int_7 = unsigned_int_3 * unsigned_int_6;
	}
	double_1 = double_4 + double_4;
	long_3 = v_verify_beacon(double_5,int_2);

}
void v_termpty_text_scroll( char parameter_1,double parameter_2,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	v_termio_scroll(float_1,int_1,int_1,int_1,uni_para);

	int_1 = int_1;
	short_1 = short_1 * short_2;
	double_1 = double_1 * double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	long_1 = long_2;
	double_2 = double_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
		if(1)
		{
			long long_3 = 1;
			long_2 = long_1 + long_3;
		}
		short_2 = short_2 * short_1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
		}
	}
	if(1)
	{
		float float_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		float_2 = float_1 + float_1;
		int_4 = int_2 * int_3;
		if(1)
		{
			double double_3 = 1;
			double_1 = double_3 + double_1;
		}
		double_1 = double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_6 = 1;
			long_1 = long_1;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_6;
			unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
		}
		if(1)
		{
			short short_3 = 1;
			short_2 = short_3;
		}
	}
}
void v_termpty_text_scroll_test( unsigned int parameter_1,unsigned int parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int_1 = int_1 * int_1;
	char controller4vul_627[3];
	fgets(controller4vul_627 ,3 ,stdin);
	if( strcmp( controller4vul_627, "<S") < 0)
	{
		int_2 = int_1 + int_1;
		char controller4vul_628[3];
		fgets(controller4vul_628 ,3 ,stdin);
		if( strcmp( controller4vul_628, "D ") < 0)
		{
			unsigned int unsigned_int_1 = 1;
			double double_2 = 1;
			v_termpty_text_scroll(char_1,double_1,uni_para);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			int_1 = int_3 * int_2;
			double_2 = double_2 * double_3;
		}
	}
	if(1)
	{
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		int_4 = int_3 * int_2;
		long_1 = long_1 + long_2;
		double_4 = double_3 * double_1;
	}
}
long v__cursor_to_start_of_line( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_1 = long_1 + long_1;
	return long_2;
}
short v__tab_forward( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	return short_1;
}
float v__handle_cursor_control( long parameter_1,double parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	int int_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	char controller4vul_626[3];
	fgets(controller4vul_626 ,3 ,stdin);
	if( strcmp( controller4vul_626, ")O") > 0)
	{
		v_termpty_text_scroll_test(unsigned_int_1,unsigned_int_2,uni_para);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	short_1 = short_1 * short_2;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	char_3 = char_1 + char_2;
	int_2 = int_1 * int_2;
	char_1 = char_1 + char_4;
	int_1 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	float_2 = float_1 + float_1;
	char_3 = char_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
		float float_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_4 = 1;
		float_1 = float_3 * float_3;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
		int_4 = int_3 + int_3;
	}
	double_3 = double_2 * double_3;
	return float_2;
}
int v_termpty_handle_seq( unsigned int parameter_1,char parameter_2,int parameter_3,int uni_para)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char_1 = v__handle_esc(long_1,int_1,char_1,uni_para);

	float_3 = float_1 + float_2;
	if(1)
	{
		double double_1 = 1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		double_2 = double_3 + double_3;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	return int_1;
}
void v_termpty_handle_buf( long parameter_1,float parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int_1 = v_termpty_handle_seq(unsigned_int_1,char_1,int_2,uni_para);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_1;
	double_4 = double_2 * double_3;
	double_2 = double_4 + double_3;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		double double_5 = 1;
		double_2 = double_5 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_1 + int_3;
	}
	double_2 = double_4;
}
void v_theme_reload( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
}
short v_theme_reload_cb(char parameter_2,short parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int_1 = int_1 * int_2;
	long_1 = long_2;
	short_3 = short_1 + short_2;
	v_theme_reload(float_1);

	int_1 = int_1 + int_1;
	int_3 = int_2 * int_1;
	float_3 = float_2 + float_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return short_2;
}
void v_theme_auto_reload_enable( double parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 + float_1;
	short_1 = v_theme_reload_cb(char_1,short_1,unsigned_int_1);

}
double v__cursor_shape_to_group_name( char parameter_1)
{
	double double_1 = 1;
	return double_1;
}
int v_config_theme_path_default_get( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_2;
	return int_3;
}
double v_theme_path_get()
{
	double double_1 = 1;
	return double_1;
}
char v_config_theme_path_get( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long_3 = long_1 + long_2;
	double_1 = v_theme_path_get();

	short_1 = short_1 * short_1;
	if(1)
	{
	}
	return char_1;
}
short v_theme_apply( int parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int_1 = v_config_theme_path_default_get(double_1);

	unsigned_int_1 = unsigned_int_1;
	char_1 = v_config_theme_path_get(double_1);

	long_3 = long_1 + long_2;
	long_3 = long_1 + long_2;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	float_2 = float_3;
	return short_1;
}
void v_termio_set_cursor_shape( float parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	short_1 = short_1 + short_1;
	short_2 = short_1 + short_1;
	int_2 = int_1 * int_1;
	float_1 = float_2;
	int_3 = int_3 * int_4;
	int_5 = int_4 * int_3;
	float_2 = float_1 + float_1;
	double_1 = double_1;
	short_2 = short_1 + short_1;
	if(1)
	{
		int int_6 = 1;
		int int_7 = 1;
		int_7 = int_2 * int_6;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_2;
		}
		if(1)
		{
			v_theme_auto_reload_enable(double_2);

			int_7 = int_2 + int_7;
		}
	}
	short_1 = v_theme_apply(int_4,long_3,int_5);

	double_1 = v__cursor_shape_to_group_name(char_1);

}
void v_termpty_clear_tabs_on_screen( float parameter_1)
{
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( char parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	if(1)
	{
		int int_3 = 1;
		v_termpty_backlog_lock();

		int_1 = int_1 + int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			v_termpty_save_free(double_1);

			v_termpty_backlog_unlock();

			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		int_1 = int_1 * int_3;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_2 + double_3;
	}
	if(1)
	{
		int int_4 = 1;
		int_1 = int_1 * int_4;
	}
	int_1 = int_1 * int_2;
	long_4 = long_2 * long_3;
	char_1 = char_1;
}
int v__ts_free()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long_1 = long_1 + long_2;
	return int_1;
}
void v_termpty_save_free( double parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
			short short_1 = 1;
			int_1 = v__ts_free();

			short_1 = short_1 * short_1;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 + float_2;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	int_1 = int_2;
	int_2 = int_3 + int_1;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( double parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_4 = 1;
	double double_4 = 1;
	int_1 = int_1 + int_1;
	v_termpty_save_free(double_1);

	short_1 = short_1 + short_1;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_2 = 1;
		char char_3 = 1;
		double_1 = double_2 + double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			double_1 = double_3;
		}
		v_termpty_backlog_lock();

		int_1 = int_1 * int_1;
		char_2 = char_3 + char_1;
	}
	v_termpty_backlog_unlock();

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	short_2 = short_1;
	short_1 = short_1 + short_1;
	float_1 = float_1 * float_1;
	float_1 = float_1 * float_1;
	v_termpty_backlog_size_set(char_4,double_4);

}
void v_termpty_reset_att( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_6 = 1;
	float float_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	long_3 = long_1 * long_2;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	double_2 = double_1 * double_1;
	int_1 = int_1 * int_1;
	int_3 = int_1 * int_2;
	double_2 = double_2 * double_3;
	int_5 = int_4 * int_2;
	double_1 = double_3 * double_1;
	char_1 = char_1 * char_1;
	short_3 = short_1 + short_2;
	char_3 = char_2 + char_3;
	int_3 = int_4 + int_1;
	int_6 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int_1 = int_1 + int_3;
	float_2 = float_1;
	char_3 = char_3 * char_2;
	char_4 = char_2 + char_4;
	char_5 = char_1;
}
float v_termio_config_get( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long_1 = long_1 + long_2;
	float_1 = float_2;
	return float_3;
}
void v_termpty_reset_state( double parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_3 = 1;
	int int_4 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	float float_6 = 1;
	float_1 = float_1 * float_1;
	short_3 = short_1 + short_2;
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	short_3 = short_1 + short_1;
	double_1 = double_1;
	long_1 = long_2;
	int_1 = int_1;
	float_1 = float_2;
	double_4 = double_2 * double_3;
	double_1 = double_4 * double_4;
	short_5 = short_3 * short_4;
	double_2 = double_4 * double_2;
	float_2 = float_1 + float_3;
	v_termpty_clear_tabs_on_screen(float_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_5 = double_5 + double_6;
	int_1 = int_1 + int_2;
	float_3 = v_termio_config_get(long_2);

	int_3 = int_1 * int_1;
	float_3 = float_2 * float_2;
	double_5 = double_6 + double_4;
	char_2 = char_1 * char_1;
	double_2 = double_5 + double_2;
	float_3 = float_4 * float_5;
	char_3 = char_1 * char_2;
	double_6 = double_3 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_4 = int_4;
	double_7 = double_1 + double_7;
	float_4 = float_2 * float_2;
	double_3 = double_4;
	short_3 = short_5 * short_4;
	v_termpty_clear_backlog(double_1);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	short_4 = short_1;
	float_4 = float_3 * float_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	int_1 = int_5 + int_1;
	double_2 = double_4 * double_7;
	v_termpty_reset_att(float_6);

	unsigned_int_2 = unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_termio_set_cursor_shape(float_4,double_4);

		float_4 = float_6;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	}
}
void v_termpty_resize_tabs( float parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	long_3 = long_1 + long_2;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		double_1 = double_1 + double_2;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
		if(1)
		{
			int int_2 = 1;
			int_3 = int_1 + int_2;
		}
		int_3 = int_3 + int_1;
	}
	float_1 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_4 = unsigned_int_4;
	}
}
long v__termpty_init( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_2 = short_1 + short_2;
	double_3 = double_1 * double_2;
	v_termpty_resize_tabs(float_1,int_1,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_2 * short_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	double_2 = double_2 + double_2;
	int_3 = int_2 + int_2;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_3;
	int_3 = int_3 * int_2;
	int_4 = int_1;
	double_2 = double_4 * double_5;
	double_4 = double_3 + double_2;
	long_1 = long_1 * long_2;
	return long_2;
	v_termpty_reset_state(double_4);

}
float v__add_default_keys( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_5 = 1;
	float float_4 = 1;
	short short_7 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_5 = 1;
	int_1 = int_1 * int_2;
	double_1 = double_1 + double_1;
	short_1 = short_1;
	int_2 = int_2 + int_1;
	float_3 = float_1 + float_2;
	int_1 = int_1 * int_2;
	char_2 = char_1 * char_2;
	short_1 = short_1 + short_1;
	float_3 = float_3 + float_2;
	double_2 = double_1 + double_2;
	short_2 = short_3;
	int_3 = int_2 * int_2;
	int_2 = int_1 * int_4;
	short_2 = short_4 + short_3;
	int_2 = int_4;
	long_2 = long_1 * long_1;
	double_1 = double_1 + double_2;
	char_2 = char_1 * char_2;
	int_2 = int_1 + int_3;
	double_3 = double_3 * double_3;
	int_5 = int_3 * int_1;
	double_4 = double_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 + double_1;
	int_2 = int_5 * int_1;
	double_2 = double_3;
	char_1 = char_2;
	short_1 = short_2 + short_3;
	long_2 = long_3;
	short_6 = short_5 + short_6;
	int_2 = int_4 + int_3;
	double_5 = double_3 + double_2;
	double_3 = double_4 + double_3;
	float_4 = float_2;
	int_5 = int_4 * int_1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_2 + int_4;
	short_1 = short_4 + short_4;
	short_7 = short_3 + short_4;
	double_7 = double_3 + double_6;
	char_2 = char_2 * char_2;
	double_7 = double_8;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	long_2 = long_2;
	long_2 = long_1 + long_3;
	short_7 = short_1 + short_5;
	unsigned_int_2 = unsigned_int_1;
	float_4 = float_3 + float_5;
	double_3 = double_5 * double_3;
	char_2 = char_2 + char_1;
	short_1 = short_6;
	return float_3;
}
void v_colors_standard_get( int parameter_1,int parameter_2,int parameter_3,float parameter_4,float parameter_5,float parameter_6)
{
	int int_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int_2 = int_1 * int_2;
		int_3 = int_2 * int_3;
		int_1 = int_3 + int_4;
		long_1 = long_1 * long_1;
		double_1 = double_1;
		char_2 = char_1 + char_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	double_1 = double_1 * double_1;
	int_1 = int_1 + int_4;
	long_1 = long_1 * long_2;
	short_1 = short_1 + short_2;
}
long v_config_new()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_2 = 1;
	float float_6 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_2 = 1;
		char char_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_5 = 1;
		int int_6 = 1;
		float float_5 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_8 = 1;
		int int_7 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_9 = 1;
		short short_1 = 1;
		short short_3 = 1;
		long long_5 = 1;
		double double_8 = 1;
		char char_4 = 1;
		char char_5 = 1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		double_3 = double_1 * double_2;
		long_3 = long_1 + long_2;
		int_3 = int_1 * int_2;
		double_3 = double_1 * double_3;
		float_3 = float_1 + float_2;
		char_1 = char_1;
		int_2 = int_1 * int_1;
		int_1 = int_1 * int_2;
		double_2 = double_4 + double_5;
		double_1 = double_3 * double_2;
		int_2 = int_1 * int_4;
		double_3 = double_2 + double_3;
		float_3 = float_2 + float_4;
		v_colors_standard_get(int_3,int_1,int_2,float_3,float_4,float_1);

		char_1 = char_2;
		char_2 = char_2 * char_3;
		double_3 = double_6;
		unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
		double_2 = double_2;
		double_2 = double_3;
		unsigned_int_2 = unsigned_int_7 * unsigned_int_5;
		int_6 = int_5 + int_6;
		float_4 = float_5 * float_4;
		double_2 = double_2 + double_2;
		unsigned_int_7 = unsigned_int_4 + unsigned_int_2;
		double_2 = double_7 + double_1;
		unsigned_int_4 = unsigned_int_8 + unsigned_int_1;
		char_1 = char_3;
		int_5 = int_5;
		int_7 = int_7 * int_5;
		int_3 = int_1 + int_5;
		long_4 = long_2;
		unsigned_int_9 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_3 = unsigned_int_8;
		float_5 = float_5;
		short_1 = short_2;
		short_3 = short_2;
		int_6 = int_7 + int_6;
		char_1 = char_3;
		int_1 = int_2 * int_4;
		long_1 = long_5 + long_2;
		float_6 = float_5 * float_3;
		long_1 = long_4 * long_1;
		unsigned_int_8 = unsigned_int_7 * unsigned_int_4;
		double_2 = double_7 + double_8;
		float_6 = v__add_default_keys(short_2);

		unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
		unsigned_int_8 = unsigned_int_6;
		char_5 = char_2 + char_4;
		unsigned_int_2 = unsigned_int_8 + unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				short short_4 = 1;
				short short_5 = 1;
				short short_6 = 1;
				unsigned int unsigned_int_10 = 1;
				unsigned_int_6 = unsigned_int_9 + unsigned_int_6;
				short_4 = short_4 + short_5;
				long_5 = long_1 * long_4;
				short_4 = short_2 + short_6;
				unsigned_int_10 = unsigned_int_2 * unsigned_int_2;
				long_3 = long_4;
			}
		}
		double_7 = double_4 * double_4;
		double_7 = double_6 * double_6;
	}
	return long_1;
}
int main()
{
	int uni_para =387;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_5 = 1;
	int int_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_7 = 1;
	short short_8 = 1;
	double_1 = double_2;
	float_1 = float_1 + float_2;
	int_2 = int_1 * int_1;
	float_3 = float_3 + float_1;
	int_1 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_2;
	char_1 = char_2;
	if(1)
	{
	}
	float_3 = float_3 * float_3;
	short_1 = short_1 + short_2;
	float_3 = float_2 * float_2;
	int_1 = int_3;
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	}
	int_4 = int_5;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_5;
	short_3 = short_2;
	int_4 = int_1 + int_5;
	char controller4vul_622[2];
	fgets(controller4vul_622 ,2 ,stdin);
	if( strcmp( controller4vul_622, "?") < 0)
	{
		long long_3 = 1;
		unsigned int unsigned_int_6 = 1;
		char char_3 = 1;
		short short_4 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_8 = 1;
		if(1)
		{
			long_3 = long_2;
		}
		if(1)
		{
			double_2 = double_1;
		}
		if(1)
		{
			double_4 = double_2 * double_3;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_6;
		if(1)
		{
			char_2 = char_3 + char_3;
		}
		short_3 = short_2 * short_4;
		if(1)
		{
			short_5 = short_5;
		}
		int_2 = int_6;
		if(1)
		{
			char_4 = char_1 + char_3;
		}
		char_2 = char_1 + char_2;
		if(1)
		{
			short short_6 = 1;
			short_4 = short_4 + short_6;
		}
		if(1)
		{
			int_2 = int_1;
		}
		int_2 = int_2 * int_5;
		if(1)
		{
			double_1 = double_5 + double_6;
		}
		unsigned_int_3 = unsigned_int_7 + unsigned_int_8;
		if(1)
		{
			int_2 = int_5 + int_4;
		}
		char controller4vul_623[2];
		fgets(controller4vul_623 ,2 ,stdin);
		if( strcmp( controller4vul_623, ",") < 0)
		{
			char char_5 = 1;
			char char_6 = 1;
			char_6 = char_4 + char_5;
			char controller4vul_624[3];
			fgets(controller4vul_624 ,3 ,stdin);
			if( strcmp( controller4vul_624, "LW") > 0)
			{
				long long_4 = 1;
				long long_5 = 1;
				v_termpty_handle_buf(long_1,float_1,int_6,uni_para);

				float_2 = float_3;
				long_5 = long_4 * long_5;
				if(1)
				{
					char_6 = char_5 * char_2;
				}
				if(1)
				{
					double_3 = double_2;
				}
				if(1)
				{
					double_2 = double_2 * double_5;
				}
				if(1)
				{
					short short_7 = 1;
					short_7 = short_2 + short_3;
				}
				if(1)
				{
					unsigned_int_8 = unsigned_int_3 * unsigned_int_1;
				}
				if(1)
				{
					char_4 = char_1 + char_3;
				}
				if(1)
				{
					unsigned_int_4 = unsigned_int_8 * unsigned_int_9;
				}
				if(1)
				{
					int_3 = int_3;
				}
				if(1)
				{
					int_2 = int_5 * int_5;
				}
				if(1)
				{
					double_2 = double_4 + double_6;
				}
				if(1)
				{
					long_3 = long_2 * long_1;
				}
				if(1)
				{
					int_2 = int_4 + int_2;
				}
			}
			if(1)
			{
				int_4 = int_1 + int_4;
			}
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_9;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	}
	if(1)
	{
		int_7 = int_5;
	}
	if(1)
	{
		int_7 = int_4 * int_6;
		if(1)
		{
			float float_4 = 1;
			float_1 = float_4 + float_1;
		}
	}
	unsigned_int_9 = unsigned_int_7 + unsigned_int_2;
	short_5 = short_8;
	double_6 = double_4 + double_3;
	double_1 = double_5;
	if(1)
	{
		short short_9 = 1;
		int_4 = int_2 + int_5;
		short_2 = short_9 * short_5;
	}
	return int_4;
}

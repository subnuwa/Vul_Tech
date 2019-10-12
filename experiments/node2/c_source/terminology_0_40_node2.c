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

short v__termpty_shutdown( short parameter_1);
void v_termpty_text_scroll_rev_test( char parameter_1,float parameter_2);
short v__handle_esc_dcs( long parameter_1,long parameter_2,unsigned int parameter_3);
double v__handle_op_a( long parameter_1,int parameter_2,int parameter_3);
void v__termpty_ext_handle( short parameter_1,float parameter_2,long parameter_3);
int v__handle_esc_terminology( char parameter_1,unsigned int parameter_2,double parameter_3);
char v__handle_xterm_777_command( short parameter_1,char parameter_2,int parameter_3);
char v__smart_calculate_226( char parameter_1);
float v__smart_size( float parameter_1,int parameter_2,int parameter_3,short parameter_4);
void v_colors_term_init( char parameter_1,double parameter_2,long parameter_3);
void v_termio_config_update( short parameter_1);
short v__font_size_set( float parameter_1,int parameter_2);
void v_termio_font_size_set( short parameter_1,int parameter_2);
int v__handle_xterm_50_command( char parameter_1,char parameter_2,int parameter_3);
void v__eina_unicode_to_hex( unsigned int parameter_1);
unsigned int v__xterm_parse_color( double parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4,int parameter_5);
int v__xterm_arg_get( short parameter_1);
char v__handle_esc_xterm( unsigned int parameter_1,unsigned int parameter_2,char parameter_3);
void v_termpty_cells_set_content( unsigned int parameter_1,char parameter_2,float parameter_3,int parameter_4);
char v__handle_esc_csi_decera( char parameter_1,short parameter_2);
void v_termpty_cells_att_fill_preserve_colors( int parameter_1,int parameter_2,char parameter_3,int parameter_4);
float v__clean_up_rect_coordinates( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
void v__handle_esc_csi_decfra( short parameter_1,unsigned int parameter_2);
unsigned int v__handle_esc_csi_decslrm( float parameter_1,long parameter_2);
int v__handle_esc_csi_decstbm( double parameter_1,double parameter_2);
long v__handle_esc_csi_decscusr( unsigned int parameter_1,unsigned int parameter_2);
short v__handle_esc_csi_dsr( unsigned int parameter_1,int parameter_2);
int v__handle_esc_csi_truecolor_cmyk( int parameter_1,float parameter_2);
long v__handle_esc_csi_truecolor_cmy( float parameter_1,double parameter_2);
double v__approximate_truecolor_rgb( short parameter_1,int parameter_2,int parameter_3,int parameter_4);
int v__csi_truecolor_arg_get( double parameter_1);
unsigned int v__handle_esc_csi_truecolor_rgb( char parameter_1,short parameter_2);
unsigned int v__handle_esc_csi_color_set( double parameter_1,int parameter_2);
void v_termpty_cursor_copy( int parameter_1,unsigned int parameter_2);
void v__switch_to_alternative_screen( int parameter_1,int parameter_2);
long v__move_cursor_to_origin( float parameter_1);
unsigned int v__pty_size( char parameter_1);
short v__limit_coord( double parameter_1);
unsigned int v__check_screen_info( short parameter_1,short parameter_2);
unsigned int v__termpty_line_rewrap( long parameter_1,char parameter_2,int parameter_3,short parameter_4,double parameter_5);
char v__backlog_remove_latest_nolock( unsigned int parameter_1);
long v_termpty_save_extract( short parameter_1);
float v__termpty_line_is_empty( int parameter_1,float parameter_2);
void v_termpty_screen_swap( long parameter_1);
void v_termpty_resize( float parameter_1,int parameter_2,int parameter_3);
float v_termio_win_get();
float v__handle_esc_csi_reset_mode( double parameter_1,double parameter_2,short parameter_3);
float v__handle_esc_csi_cursor_pos_set( int parameter_1,long parameter_2,char parameter_3);
void v_termpty_text_scroll_rev( short parameter_1,unsigned int parameter_2,int uni_para);
void v_termpty_clear_line( long parameter_1,double parameter_2,int parameter_3);
void v_termpty_clear_screen( unsigned int parameter_1,long parameter_2);
void v_termpty_cell_codepoint_att_fill( char parameter_1,short parameter_2,float parameter_3,unsigned int parameter_4,int parameter_5);
unsigned int v__termpty_charset_trans( double parameter_1,unsigned int parameter_2);
void v_termio_content_change( double parameter_1,double parameter_2,double parameter_3,int parameter_4);
void v_termpty_text_append( long parameter_1,double parameter_2,int parameter_3);
short v__csi_arg_get();
void v__handle_esc_csi( float parameter_1,int parameter_2,unsigned int parameter_3,int uni_para);
char v__safechar( long parameter_1);
unsigned int v__handle_esc( int parameter_1,unsigned int parameter_2,double parameter_3,int uni_para);
void v_termpty_cell_fill( short parameter_1,double parameter_2,double parameter_3,int parameter_4);
void v_termpty_cells_fill( short parameter_1,float parameter_2,char parameter_3,int parameter_4);
void v_termpty_cells_clear( long parameter_1,float parameter_2,int parameter_3);
short v__tooltip_del(double parameter_2);
short v__tooltip_content(unsigned int parameter_2,float parameter_3);
void v_MD5Final( double parameter_1,long parameter_2);
void v_MD5Transform( long parameter_1,char parameter_2);
void v_byteReverse( unsigned int parameter_1,short parameter_2);
void v_MD5Update( unsigned int parameter_1,int parameter_2,float parameter_3);
void v_MD5Init( float parameter_1);
void v_gravatar_tooltip( float parameter_1,int parameter_2,char parameter_3);
double v__cb_link_drag_done(short parameter_2);
float v__cb_link_drag_accept(float parameter_2,short parameter_3);
char v__cb_link_drag_move(long parameter_2,float parameter_3,long parameter_4,unsigned int parameter_5);
int v__cb_link_icon_new(unsigned int parameter_2,float parameter_3,short parameter_4);
unsigned int v__cb_link_move(long parameter_2,long parameter_3);
int v__cb_link_up_delay();
char v__cb_link_up(long parameter_2,double parameter_3);
void v_term_focus( int parameter_1);
double v__term_is_focused( unsigned int parameter_1);
void v_term_unfocus( unsigned int parameter_1);
char v__cb_ctxp_del(char parameter_2,char parameter_3);
long v__cb_ctxp_dismissed(long parameter_2);
short v__cb_ctxp_link_copy(unsigned int parameter_2);
char v__screen_visual_bounds( float parameter_1);
int v__draw_cell( long parameter_1,double parameter_2,int parameter_3,char parameter_4);
short v__draw_line( long parameter_1,char parameter_2,char parameter_3,int parameter_4,int parameter_5);
unsigned int v_termpty_backlog_length( long parameter_1);
double v_termio_pty_get();
double v_termio_textgrid_get( float parameter_1);
short v_miniview_colors_get( int parameter_1,char parameter_2);
float v__deferred_renderer();
int v__queue_render( double parameter_1);
void v_miniview_redraw( float parameter_1);
float v__block_obj_del( short parameter_1);
short v__termpty_is_dblwidth_slow_get( short parameter_1,int parameter_2);
long v__termpty_is_dblwidth_get( int parameter_1,int parameter_2);
double v_term_preedit_str_get( short parameter_1);
void v_media_get( double parameter_1);
short v__smart_media_clicked(int parameter_2);
int v_media_control_get( long parameter_1);
long v__smart_media_stop(int parameter_2);
int v__smart_media_pause(double parameter_2);
int v__smart_media_play(float parameter_2);
unsigned int v__smart_media_del(unsigned int parameter_2,float parameter_3);
void v_media_visualize_set( long parameter_1,float parameter_2);
void v_media_mute_set( unsigned int parameter_1,float parameter_2);
void v_media_volume_set( unsigned int parameter_1,double parameter_2);
short v__cb_media_vol(float parameter_2,float parameter_3,long parameter_4);
int v__cb_media_pos(char parameter_2,unsigned int parameter_3,double parameter_4);
float v__cb_media_pos_drag_stop(double parameter_2,short parameter_3,double parameter_4);
short v__cb_media_pos_drag_start(short parameter_2,short parameter_3,unsigned int parameter_4);
void v_media_stop( short parameter_1);
short v__cb_media_stop(float parameter_2,float parameter_3,int parameter_4);
float v__cb_media_pause(long parameter_2,long parameter_3,char parameter_4);
void v_media_play_set( float parameter_1,short parameter_2);
double v__cb_media_play(short parameter_2,short parameter_3,long parameter_4);
void v_media_position_set( unsigned int parameter_1,double parameter_2);
int v__cb_mov_ref(int parameter_2);
double v__cb_mov_progress(long parameter_2);
unsigned int v__cb_mov_restart();
double v__cb_mov_decode_stop(unsigned int parameter_2);
double v__cb_mov_len_change(long parameter_2);
char v__cb_mov_frame_resize(short parameter_2);
double v__cb_mov_frame_decode(unsigned int parameter_2);
short v__type_mov_init( short parameter_1);
void v__cb_edje_preloaded(unsigned int parameter_2,long parameter_3,float parameter_4);
unsigned int v__type_edje_init( float parameter_1);
float v__type_scale_init( short parameter_1);
void v__cb_img_frame();
char v__type_img_anim_handle();
int v__cb_img_preloaded(char parameter_2,float parameter_3);
char v__type_img_init( char parameter_1);
void v__url_compl_cb(int parameter_2);
unsigned int v__url_prog_cb(int parameter_2);
float v__type_thumb_calc( float parameter_1,float parameter_2,double parameter_3,long parameter_4,int parameter_5,int uni_para);
long v__type_mov_calc( long parameter_1,int parameter_2,double parameter_3,short parameter_4,char parameter_5);
unsigned int v__type_edje_calc( char parameter_1,long parameter_2,short parameter_3,int parameter_4,char parameter_5);
float v__type_img_calc( char parameter_1,double parameter_2,float parameter_3,float parameter_4,double parameter_5);
char v__cb_scale_preloaded(double parameter_2,float parameter_3);
int v__type_scale_calc( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4,double parameter_5);
void v__unsmooth_timeout();
long v__smooth_handler( unsigned int parameter_1);
long v__smart_calculate( char parameter_1,int uni_para);
long v__smart_move( long parameter_1,short parameter_2,float parameter_3);
short v__smart_resize( float parameter_1,char parameter_2,char parameter_3);
int v__smart_del( double parameter_1);
float v__smart_add( char parameter_1);
char v__smart_init(int uni_para);
unsigned int v_media_add( double parameter_1,char parameter_2,char parameter_3,int parameter_4,char parameter_5,int uni_para);
double v__block_media_activate( double parameter_1,short parameter_2,int uni_para);
short v__block_edje_message_cb(double parameter_2,float parameter_3,int parameter_4);
void v_termpty_write( short parameter_1,long parameter_2,int parameter_3);
double v__block_edje_signal_cb(char parameter_2,long parameter_3,int parameter_4);
void v_termpty_block_chid_update( unsigned int parameter_1,short parameter_2);
double v__block_edje_cmds( float parameter_1,unsigned int parameter_2,char parameter_3,short parameter_4);
long v_homedir_get( char parameter_1,float parameter_2);
double v__block_edje_activate( double parameter_1,char parameter_2);
float v__block_activate( double parameter_1,float parameter_2,int uni_para);
unsigned int v_termpty_block_get( float parameter_1,int parameter_2);
int v_termpty_block_id_get( double parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( short parameter_1,int parameter_2);
float v__smart_apply( int parameter_1,int uni_para);
short v__smart_cb_change(int uni_para);
void v__smart_update_queue( long parameter_1,float parameter_2,int uni_para);
float v__lost_selection_reset_job();
float v__lost_selection(int parameter_2,int uni_para);
unsigned int v__take_selection_text( long parameter_1,float parameter_2,char parameter_3,int uni_para);
float v__cb_ctxp_link_content_copy(long parameter_2,int uni_para);
void v_ty_sb_free( float parameter_1);
char v_ty_sb_steal_buf();
int v_codepoint_to_utf8( double parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( unsigned int parameter_1);
int v_ty_sb_add( long parameter_1,char parameter_2,char parameter_3);
double v__termpty_cellrow_from_beacon_get( int parameter_1,int parameter_2,long parameter_3);
long v_termpty_cellrow_get( unsigned int parameter_1,int parameter_2,int parameter_3);
int v_termio_selection_get( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7);
long v__cb_ctxp_link_open(float parameter_2);
unsigned int v__should_inline( short parameter_1);
void v_link_is_email( double parameter_1);
short v_link_is_protocol( float parameter_1);
char v_link_is_url( long parameter_1);
short v__activate_link( float parameter_1,char parameter_2);
char v__cb_ctxp_link_preview(double parameter_2);
void v__is_fmt( long parameter_1,char parameter_2);
char v_media_src_type_get( unsigned int parameter_1);
unsigned int v__mouse_in_selection( int parameter_1,int parameter_2,int parameter_3);
int v__smart_xy_to_cursor( double parameter_1,short parameter_2,float parameter_3,int parameter_4,int parameter_5);
int v__cb_link_down(short parameter_2,long parameter_3,int uni_para);
void v_main_term_popup_exists( short parameter_1);
long v__update_link( long parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,int uni_para);
long v__remove_links( long parameter_1,char parameter_2,int uni_para);
char v__sel_set( unsigned int parameter_1,int parameter_2);
int v_termio_scroll_get( unsigned int parameter_1);
void v_miniview_position_offset( float parameter_1,int parameter_2,int parameter_3);
int v_term_miniview_get( short parameter_1);
void v_termio_scroll( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
void v_termpty_save_new( short parameter_1,int parameter_2);
double v_termpty_save_expand( long parameter_1,unsigned int parameter_2,int parameter_3);
double v__termpty_cell_is_empty( char parameter_1);
float v_termpty_line_length( char parameter_1,char parameter_2);
short v_verify_beacon( float parameter_1,int parameter_2);
void v_termpty_text_save_top( char parameter_1,unsigned int parameter_2,short parameter_3);
void v_termpty_text_scroll( float parameter_1,char parameter_2);
void v_termpty_text_scroll_test( short parameter_1,double parameter_2);
short v__cursor_to_start_of_line();
unsigned int v__tab_forward( int parameter_1,int parameter_2);
int v__handle_cursor_control( float parameter_1,short parameter_2);
int v_termpty_handle_seq( long parameter_1,int parameter_2,char parameter_3,int uni_para);
void v_termpty_handle_buf( unsigned int parameter_1,float parameter_2,int parameter_3,int uni_para);
void v_theme_reload( unsigned int parameter_1);
long v_theme_reload_cb(short parameter_2,char parameter_3,float parameter_4);
void v_theme_auto_reload_enable( int parameter_1);
unsigned int v__cursor_shape_to_group_name( int parameter_1);
float v_config_theme_path_default_get( float parameter_1);
unsigned int v_theme_path_get();
float v_config_theme_path_get( float parameter_1);
float v_theme_apply( float parameter_1,float parameter_2,unsigned int parameter_3);
void v_termio_set_cursor_shape( int parameter_1,double parameter_2);
void v_termpty_clear_tabs_on_screen( long parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( short parameter_1,int parameter_2);
int v__ts_free();
void v_termpty_save_free( char parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( short parameter_1);
void v_termpty_reset_att( double parameter_1);
short v_termio_config_get( int parameter_1);
void v_termpty_reset_state( short parameter_1);
void v_termpty_resize_tabs( unsigned int parameter_1,int parameter_2,int parameter_3);
unsigned int v__termpty_init( unsigned int parameter_1);
short v__add_default_keys();
void v_colors_standard_get( int parameter_1,int parameter_2,float parameter_3,int parameter_4,short parameter_5,long parameter_6);
double v_config_new();
short v__termpty_shutdown( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_1;
	return short_1;
}
void v_termpty_text_scroll_rev_test( char parameter_1,float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float_2 = float_1 + float_1;
	if(1)
	{
		v_termpty_text_scroll_rev(short_1,unsigned_int_1,-1 );

		double_1 = double_1 + double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_1 = char_2;
		double_1 = double_1 + double_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
}
short v__handle_esc_dcs( long parameter_1,long parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_4 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
		short short_3 = 1;
		int int_1 = 1;
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
					double double_2 = 1;
					double_1 = double_2 + double_1;
				}
			}
		}
		if(1)
		{
			short short_2 = 1;
			short_3 = short_1 * short_2;
		}
		if(1)
		{
			int_2 = int_1 + int_1;
		}
		if(1)
		{
		}
		if(1)
		{
			int int_3 = 1;
			char_1 = v__safechar(long_1);

			v_termpty_write(short_1,long_1,int_2);

			int_1 = int_3;
		}
		if(1)
		{
			short_1 = short_1 * short_3;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			int_5 = int_4 + int_4;
		}
	}
	return short_4;
}
double v__handle_op_a( long parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_2;
	int_2 = int_3 * int_3;
	return double_1;
}
void v__termpty_ext_handle( short parameter_1,float parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char_1 = char_1 * char_2;
	double_1 = v__handle_op_a(long_1,int_1,int_1);

	double_2 = double_2 + double_3;
}
int v__handle_esc_terminology( char parameter_1,unsigned int parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	return int_3;
	short_1 = v_termio_config_get(int_1);

	v__termpty_ext_handle(short_2,float_1,long_1);

}
char v__handle_xterm_777_command( short parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		double_1 = double_2 * double_1;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	float_3 = float_1 + float_2;
	double_4 = double_1 * double_3;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	}
	float_1 = float_1;
	float_3 = float_4 + float_1;
	unsigned_int_3 = unsigned_int_6 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_1;
	char_3 = char_1 + char_2;
	return char_1;
}
char v__smart_calculate_226( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float_1 = float_1 + float_2;
	long_1 = long_1 + long_1;
	int_2 = int_1 * int_1;
	char_2 = char_1 * char_1;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_3 = float_1;
	int_2 = int_3 * int_3;
	long_3 = long_2 * long_3;
	return char_2;
}
float v__smart_size( float parameter_1,int parameter_2,int parameter_3,short parameter_4)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	char_1 = char_1 * char_1;
	int_2 = int_1 + int_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_3 * long_3;
	int_2 = int_2 + int_1;
	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	int_2 = int_1 * int_3;
	v_termpty_resize(float_1,int_1,int_4);

	short_2 = short_1 + short_1;
	char_2 = v__sel_set(unsigned_int_1,int_1);

	float_1 = v__smart_apply(int_3,-1 );

	long_1 = long_2 * long_2;
	int_5 = int_1 + int_4;
	int_3 = int_3 + int_4;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	return float_2;
	char_1 = v__smart_calculate_226(char_2);

}
void v_colors_term_init( char parameter_1,double parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_3 = int_1 + int_2;
	int_3 = int_2 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		int int_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_2 = double_1 + double_1;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_1 + char_2;
			double_1 = double_1 + double_3;
			float_1 = float_1 * float_1;
			float_1 = float_1 * float_1;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_3 = long_1 + long_2;
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				double_3 = double_3 + double_3;
				short_1 = short_1 + short_1;
				float_1 = float_2 * float_2;
				short_2 = short_2;
				short_1 = short_2 * short_1;
			}
		}
		int_4 = int_4 + int_4;
		double_5 = double_4 * double_5;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			long long_4 = 1;
			long_4 = long_3 * long_4;
			if(1)
			{
				float_2 = float_2 + float_2;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int int_5 = 1;
		int_5 = int_2;
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			int int_6 = 1;
			int int_7 = 1;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
			char_4 = char_3 + char_4;
			int_7 = int_1 + int_6;
			int_6 = int_6 + int_3;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
}
void v_termio_config_update( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_1 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	float float_4 = 1;
	char char_4 = 1;
	double double_6 = 1;
	float float_5 = 1;
	int_2 = int_1 * int_1;
	char_1 = char_1 * char_2;
	char_3 = char_3 * char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char_1 = char_1;
	}
	int_2 = int_2 * int_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "1") < 0)
	{
		v_termpty_backlog_size_set(short_1,int_3);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		double_1 = double_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	}
	v_termio_set_cursor_shape(int_4,double_2);

	float_1 = v__smart_size(float_1,int_4,int_2,short_1);

	char_3 = char_2 * char_3;
	int_4 = int_1 * int_5;
	float_1 = float_1 + float_2;
	float_3 = float_3 * float_2;
	unsigned_int_3 = unsigned_int_5;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_3 + double_4;
	long_3 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		double_5 = double_4 + double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_4;
	}
	float_3 = float_4 * float_1;
	unsigned_int_2 = unsigned_int_5;
	v_colors_term_init(char_4,double_6,long_2);

	float_5 = float_1 + float_2;
	double_3 = double_5;
	int_1 = int_1 + int_4;
}
short v__font_size_set( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_termio_config_update(short_3);

	int_2 = int_1 + int_1;
	short_2 = short_1 * short_2;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int_5 = int_3 + int_4;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		float_3 = float_2 + float_2;
		double_1 = double_1;
		float_1 = float_3;
		double_4 = double_2 + double_3;
	}
	return short_3;
}
void v_termio_font_size_set( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = v__font_size_set(float_1,int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
}
int v__handle_xterm_50_command( char parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v_termio_font_size_set(short_1,int_1);

	int_2 = int_1 * int_2;
	return int_3;
}
void v__eina_unicode_to_hex( unsigned int parameter_1)
{
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "@") < 0)
	{
	}
	if(1)
	{
	}
}
unsigned int v__xterm_parse_color( double parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_6 = 1;
	float float_2 = 1;
	short short_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1 + int_2;
	long_1 = long_1 * long_1;
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	double_3 = double_3 + double_2;
	double_5 = double_2 * double_4;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_3 = double_3 * double_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		long_3 = long_1 * long_2;
		int_1 = int_3 * int_2;
		if(1)
		{
			short_1 = short_1;
		}
		int_2 = int_2 + int_3;
		long_3 = long_2;
		if(1)
		{
			char_1 = char_1 * char_2;
		}
		double_6 = double_3 * double_3;
		float_2 = float_1 * float_1;
		if(1)
		{
			short_2 = short_1 * short_2;
		}
		float_3 = float_2 * float_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3;
		}
		double_4 = double_7;
		long_3 = long_4 * long_3;
		if(1)
		{
			int int_4 = 1;
			int_4 = int_2 + int_1;
		}
		float_2 = float_2 * float_1;
	}
	if(1)
	{
		char char_3 = 1;
		short short_4 = 1;
		char char_4 = 1;
		char_3 = char_1 * char_2;
		if(1)
		{
			short short_3 = 1;
			short_3 = short_2 + short_2;
		}
		float_2 = float_2 + float_3;
		long_3 = long_1 + long_4;
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		}
		short_1 = short_1 * short_4;
		double_3 = double_6;
		if(1)
		{
			int_3 = int_2 + int_2;
		}
		v__eina_unicode_to_hex(unsigned_int_5);

		char_2 = char_2 + char_4;
	}
	if(1)
	{
		double_3 = double_6 * double_3;
	}
	double_7 = double_4 + double_1;
	return unsigned_int_4;
}
int v__xterm_arg_get( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	int int_6 = 1;
	char char_4 = 1;
	short short_3 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_1 = int_1 * int_2;
	int_3 = int_4;
	short_1 = short_1 * short_2;
	float_1 = float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1;
	char_2 = char_1 + char_2;
	unsigned_int_4 = unsigned_int_1;
	char_1 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_2;
	int_5 = int_4 * int_2;
	char_3 = char_1 + char_1;
	int_6 = int_1;
	int_5 = int_1 + int_1;
	char_4 = char_4 * char_4;
	short_3 = short_2 * short_1;
	int_8 = int_4 * int_7;
	long_1 = long_1;
	double_4 = double_2 + double_3;
	double_5 = double_2;
	double_2 = double_4 * double_5;
	double_5 = double_3 * double_2;
	return int_3;
}
char v__handle_esc_xterm( unsigned int parameter_1,unsigned int parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	long long_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	char char_6 = 1;
	int int_7 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_9 = 1;
	short short_5 = 1;
	char char_10 = 1;
	long_1 = long_1 + long_2;
	double_1 = double_1;
	double_2 = v_termio_textgrid_get(float_1);

	double_2 = double_3 + double_1;
	double_2 = double_2;
	int_1 = v__handle_xterm_50_command(char_1,char_1,int_2);

	char_2 = char_2 * char_3;
	int_3 = int_1;
	if(1)
	{
		long_3 = long_1 * long_2;
	}
	float_4 = float_2 + float_3;
	int_2 = int_1 + int_3;
	char_5 = char_3 + char_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	v_termpty_write(short_1,long_2,int_2);

	float_5 = float_4 + float_2;
	if(1)
	{
		unsigned_int_2 = v__xterm_parse_color(double_2,unsigned_int_3,long_3,int_3,int_4);

		int_1 = int_3 + int_1;
	}
	int_6 = int_3 + int_5;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_2 = v_termio_config_get(int_5);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	double_2 = double_3 * double_2;
	double_1 = double_4 + double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
	}
	if(1)
	{
		char_2 = char_1 + char_1;
		int_4 = int_6 + int_6;
		short_3 = short_2 + short_1;
	}
	if(1)
	{
		int_1 = int_6 + int_4;
	}
	if(1)
	{
		float float_6 = 1;
		float_6 = float_4 + float_2;
	}
	long_1 = long_2 * long_2;
	short_3 = short_2 * short_2;
	if(1)
	{
		char_6 = char_1 + char_1;
	}
	if(1)
	{
		int_3 = int_4 + int_6;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
		int_7 = v__xterm_arg_get(short_1);

		double_3 = double_2 + double_3;
	}
	if(1)
	{
		short short_4 = 1;
		short_4 = short_2 + short_3;
	}
	if(1)
	{
		char char_7 = 1;
		char char_8 = 1;
		char_3 = char_7 * char_8;
	}
	long_4 = long_3 * long_2;
	long_4 = long_3 + long_5;
	return char_9;
	char_6 = v__handle_xterm_777_command(short_5,char_10,int_7);

}
void v_termpty_cells_set_content( unsigned int parameter_1,char parameter_2,float parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_2 = double_1 + double_1;
		char_2 = char_1 * char_1;
	}
}
char v__handle_esc_csi_decera( char parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	int int_5 = 1;
	double_2 = double_1 + double_1;
	float_1 = v__clean_up_rect_coordinates(unsigned_int_1,int_1,int_2,int_2,int_2);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_1 + double_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	long_1 = long_1;
	short_1 = v__csi_arg_get();

	int_4 = int_2 + int_3;
	if(1)
	{
	}
	short_2 = short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_2 * double_3;
		short_2 = short_3;
	}
	return char_1;
	v_termpty_cells_set_content(unsigned_int_1,char_2,float_2,int_5);

}
void v_termpty_cells_att_fill_preserve_colors( int parameter_1,int parameter_2,char parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		long long_1 = 1;
		double_2 = double_1 * double_3;
		long_1 = long_1;
		double_2 = double_1 * double_3;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_2 = 1;
			char_1 = char_2;
			int_1 = int_2;
			unsigned_int_2 = unsigned_int_2;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
			long_2 = long_1 + long_2;
			double_1 = double_1 * double_3;
		}
	}
}
float v__clean_up_rect_coordinates( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 + char_1;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_3;
	int_1 = int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_4 = unsigned_int_5 * unsigned_int_2;
	}
	if(1)
	{
		int_2 = int_2 * int_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_3 = short_1 * short_2;
		if(1)
		{
			int_1 = int_1;
		}
	}
	if(1)
	{
		short short_4 = 1;
		short_4 = short_3 + short_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_3 = long_1 + long_2;
	}
	char controller_8[2];
	fgets(controller_8 ,2 ,stdin);
	if( strcmp( controller_8, "t") < 0)
	{
		double_1 = double_1 * double_1;
		if(1)
		{
			float_1 = float_1;
		}
	}
	char_2 = char_2 + char_2;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	if(1)
	{
	}
	int_3 = int_2;
	unsigned_int_3 = unsigned_int_2;
	long_3 = long_4;
	int_4 = int_4 + int_2;
	return float_1;
}
void v__handle_esc_csi_decfra( short parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	char char_4 = 1;
	short short_2 = 1;
	int int_5 = 1;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = v__clean_up_rect_coordinates(unsigned_int_1,int_1,int_1,int_2,int_3);

	int_1 = int_2 + int_4;
	char_3 = char_1 * char_2;
	short_1 = short_1 + short_1;
	int_1 = int_2 * int_4;
	char_4 = char_3 + char_3;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, ")") < 0)
	{
	}
	short_2 = v__csi_arg_get();

	int_1 = int_2 + int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		v_termpty_cells_att_fill_preserve_colors(int_5,int_5,char_1,int_2);

		long_2 = long_1 * long_1;
	}
}
unsigned int v__handle_esc_csi_decslrm( float parameter_1,long parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_5 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	long_3 = long_1 * long_2;
	if(1)
	{
		long long_4 = 1;
		long_1 = long_4 + long_3;
	}
	short_1 = v__csi_arg_get();

	short_1 = short_2 * short_2;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		long_3 = long_3 * long_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3;
	}
	long_3 = v__move_cursor_to_origin(float_1);

	int_3 = int_2 + int_1;
	char_1 = char_2;
	char_3 = char_2 + char_1;
	double_1 = double_1 * double_2;
	long_5 = long_2;
	return unsigned_int_3;
}
int v__handle_esc_csi_decstbm( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_5 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 * char_1;
	double_3 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	char_4 = char_3 + char_3;
	if(1)
	{
		long_1 = v__move_cursor_to_origin(float_1);

		int_1 = int_1 + int_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	char_5 = char_1;
	char_2 = char_1 + char_1;
	short_1 = v__csi_arg_get();

	int_3 = int_2 * int_3;
	short_2 = short_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	return int_1;
}
long v__handle_esc_csi_decscusr( unsigned int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_6 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double_1 = double_1;
	int_1 = int_1 * int_1;
	v_termio_set_cursor_shape(int_2,double_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_3 + int_3;
	char_2 = char_1 * char_2;
	double_1 = double_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	long_1 = long_1 * long_1;
	int_3 = int_4 + int_5;
	double_2 = double_2 * double_1;
	double_2 = double_1;
	float_2 = float_1 * float_1;
	int_1 = int_6;
	short_1 = v__csi_arg_get();

	int_1 = int_5 + int_6;
	double_1 = double_2 + double_3;
	return long_1;
}
short v__handle_esc_csi_dsr( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_6 = 1;
	int_1 = int_1 * int_1;
	int_3 = int_2 * int_2;
	if(1)
	{
		long long_1 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		short_2 = short_1 * short_1;
		short_1 = short_1;
		short_1 = v__csi_arg_get();

		short_4 = short_2 * short_3;
		v_termpty_write(short_5,long_2,int_1);

		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		double_1 = double_2;
		short_4 = short_6 + short_1;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_7 = 1;
		short short_8 = 1;
		double_3 = double_1 * double_2;
		double_3 = double_3 + double_4;
		double_4 = double_2;
		double_3 = double_5 + double_5;
		short_7 = short_6 * short_2;
		short_7 = short_8 * short_8;
	}
	return short_4;
}
int v__handle_esc_csi_truecolor_cmyk( int parameter_1,float parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_6 = 1;
	short_1 = short_1 * short_1;
	long_1 = long_1 * long_1;
	int_1 = v__csi_truecolor_arg_get(double_1);

	int_1 = int_2 + int_3;
	long_1 = long_1 + long_1;
	int_4 = int_3;
	if(1)
	{
	}
	double_1 = double_1;
	double_2 = double_2;
	int_1 = int_1 + int_5;
	short_2 = short_3;
	double_4 = double_3 + double_2;
	double_1 = v__approximate_truecolor_rgb(short_1,int_6,int_4,int_2);

	int_5 = int_4;
	return int_6;
}
long v__handle_esc_csi_truecolor_cmy( float parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 + double_1;
	int_1 = int_1 * int_1;
	int_2 = v__csi_truecolor_arg_get(double_3);

	long_2 = long_1 * long_2;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	long_2 = long_1 * long_1;
	double_2 = v__approximate_truecolor_rgb(short_1,int_3,int_1,int_3);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return long_2;
}
double v__approximate_truecolor_rgb( short parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				double_2 = v_termio_textgrid_get(float_1);

				int_2 = int_1 * int_1;
			}
		}
	}
	return double_1;
}
int v__csi_truecolor_arg_get( double parameter_1)
{
	int int_1 = 1;
	return int_1;
}
unsigned int v__handle_esc_csi_truecolor_rgb( char parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = v__approximate_truecolor_rgb(short_1,int_1,int_1,int_1);

	int_3 = int_2 * int_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	float_1 = float_1 * float_2;
	long_2 = long_1 + long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "^y") < 0)
	{
		long long_3 = 1;
		int int_4 = 1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
		int_3 = v__csi_truecolor_arg_get(double_2);

		long_3 = long_2 + long_3;
		int_1 = int_4;
	}
	if(1)
	{
	}
	return unsigned_int_2;
}
unsigned int v__handle_esc_csi_color_set( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	long_1 = v__handle_esc_csi_truecolor_cmy(float_1,double_1);

	int_1 = v__handle_esc_csi_truecolor_cmyk(int_1,float_2);

	long_3 = long_2 * long_3;
	long_3 = long_1 + long_3;
	return unsigned_int_1;
	short_1 = v__csi_arg_get();

	v_termpty_reset_att(double_1);

	unsigned_int_2 = v__handle_esc_csi_truecolor_rgb(char_1,short_2);

}
void v_termpty_cursor_copy( int parameter_1,unsigned int parameter_2)
{
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_1 = short_1 + short_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_1 = int_1 * int_2;
		float_1 = float_1;
		long_1 = long_2;
		double_2 = double_1 * double_1;
	}
}
void v__switch_to_alternative_screen( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	if(1)
	{
		float float_1 = 1;
		v_termpty_screen_swap(long_1);

		float_1 = float_1;
	}
}
long v__move_cursor_to_origin( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_3 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_1 = unsigned_int_2;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_1 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
		long_1 = long_1;
	}
	return long_2;
}
unsigned int v__pty_size( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long_3 = long_1 + long_2;
	int_2 = int_1 * int_1;
	int_3 = int_3 + int_2;
	long_1 = long_2 * long_4;
	int_4 = int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	return unsigned_int_1;
}
short v__limit_coord( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	char_2 = char_1 * char_2;
	double_1 = double_1 + double_2;
	short_1 = short_1 + short_2;
	short_3 = short_2 * short_3;
	double_3 = double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	return short_1;
}
unsigned int v__check_screen_info( short parameter_1,short parameter_2)
{
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char_3 = char_1 * char_2;
		char_2 = char_4 * char_2;
		unsigned_int_1 = unsigned_int_2;
		v_termpty_text_save_top(char_4,unsigned_int_3,short_1);

		double_2 = double_1 + double_1;
		double_2 = double_2;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "3") > 0)
		{
			double_1 = double_2 + double_2;
		}
		v_termpty_cells_clear(long_1,float_1,int_1);

		double_3 = double_2;
	}
	return unsigned_int_3;
}
unsigned int v__termpty_line_rewrap( long parameter_1,char parameter_2,int parameter_3,short parameter_4,double parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1;
	long_1 = long_1 * long_2;
	unsigned_int_1 = v__check_screen_info(short_1,short_2);

	double_1 = double_1 + double_2;
	return unsigned_int_1;
}
char v__backlog_remove_latest_nolock( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	short_1 = v_verify_beacon(float_1,int_1);

	float_1 = float_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		float_3 = float_3 + float_2;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	long_3 = long_1 + long_2;
	int_4 = int_2 * int_3;
	v_termpty_save_free(char_1);

	float_2 = float_1 + float_3;
	return char_1;
}
long v_termpty_save_extract( short parameter_1)
{
	long long_1 = 1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "$") > 0)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_4 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double_1 = double_1;
			double_3 = double_2 + double_3;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			int_1 = int_2;
			short_3 = short_1 * short_2;
			if(1)
			{
			}
			double_3 = double_4;
			int_4 = int_1 + int_3;
			int_3 = int_3 + int_4;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_2 = char_1 + char_1;
			}
		}
	}
	return long_1;
}
float v__termpty_line_is_empty( int parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char_2 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
		if(1)
		{
		}
	}
	return float_1;
	double_1 = v__termpty_cell_is_empty(char_3);

}
void v_termpty_screen_swap( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_2;
	double_2 = double_1 + double_1;
	double_3 = double_1 + double_2;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1;
	double_3 = double_4;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "v") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
}
void v_termpty_resize( float parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_2 = 1;
	short short_4 = 1;
	long long_4 = 1;
	float float_3 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_11 = 1;
	int int_5 = 1;
	char char_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_6 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_12 = 1;
	double_2 = double_1 + double_1;
	float_1 = float_1;
	long_1 = long_1 + long_2;
	double_2 = double_2;
	if(1)
	{
	}
	double_2 = double_1 * double_3;
	if(1)
	{
		int_1 = int_2;
		long_2 = long_2 * long_3;
	}
	unsigned_int_1 = v__pty_size(char_1);

	double_1 = double_1;
	if(1)
	{
		double_1 = double_4 + double_2;
	}
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double_6 = double_5 * double_4;
	}
	double_2 = double_1 * double_7;
	float_1 = float_1 + float_2;
	short_1 = short_4 * short_2;
	long_4 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_3 = float_1 * float_1;
		if(1)
		{
			double_9 = double_3 * double_8;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
	}
	int_1 = int_2 + int_3;
	if(1)
	{
		int_3 = int_3 + int_4;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_10 = 1;
		double_10 = double_5 + double_9;
		char_1 = char_1 + char_1;
		double_11 = double_7 + double_6;
		if(1)
		{
			short short_5 = 1;
			char char_3 = 1;
			short_5 = short_4 * short_5;
			float_3 = v__termpty_line_is_empty(int_5,float_1);

			double_5 = double_8 * double_4;
			double_11 = double_2;
			char_2 = v__backlog_remove_latest_nolock(unsigned_int_3);

			short_1 = v_verify_beacon(float_4,int_2);

			float_4 = float_5 + float_3;
			if(1)
			{
				double_4 = double_6 + double_2;
			}
			double_9 = double_3 * double_10;
			int_1 = int_5 * int_2;
			v_termpty_resize_tabs(unsigned_int_1,int_1,int_6);

			double_10 = double_3 * double_5;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
			float_2 = v_termpty_line_length(char_2,char_2);

			double_8 = double_7 + double_4;
			int_4 = int_5 + int_2;
			char_2 = char_2 + char_3;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_6 = 1;
		char_4 = char_1 * char_2;
		char_4 = char_4 * char_2;
		int_1 = int_3 * int_3;
		v_termpty_backlog_lock();

		short_3 = short_6 * short_2;
	}
	float_5 = float_4;
	double_2 = double_8;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_6 * int_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_4 = v__termpty_line_rewrap(long_5,char_4,int_6,short_4,double_11);

	long_3 = long_3;
	float_4 = float_6 + float_4;
	short_3 = v__limit_coord(double_5);

	unsigned_int_7 = unsigned_int_5 + unsigned_int_6;
	if(1)
	{
		v_termpty_screen_swap(long_3);

		int_3 = int_6 + int_4;
	}
	unsigned_int_3 = unsigned_int_7;
	int_4 = int_1;
	int_7 = int_4 * int_2;
	long_1 = v_termpty_save_extract(short_2);

	v_termpty_backlog_unlock();

	unsigned_int_8 = unsigned_int_5 * unsigned_int_2;
	double_12 = double_4;
	float_2 = float_3 * float_4;
	int_5 = int_5 + int_3;
	int_7 = int_2 * int_6;
}
float v_termio_win_get()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_1;
	int_1 = int_2;
	return float_1;
}
float v__handle_esc_csi_reset_mode( double parameter_1,double parameter_2,short parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float_1 = v_termio_win_get();

	v__switch_to_alternative_screen(int_1,int_2);

	v_termpty_cursor_copy(int_2,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	v_termpty_resize(float_1,int_1,int_1);

	long_1 = long_1 * long_1;
	short_1 = v__csi_arg_get();

	v_termpty_clear_screen(unsigned_int_1,long_2);

	long_2 = v__move_cursor_to_origin(float_2);

	short_3 = short_2 * short_1;
	return float_2;
	v_termpty_reset_state(short_3);

}
float v__handle_esc_csi_cursor_pos_set( int parameter_1,long parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_3 = double_1 * double_2;
	int_2 = int_1 * int_1;
	double_3 = double_2 + double_3;
	double_3 = double_1 + double_2;
	char_1 = char_1 * char_1;
	float_2 = float_1 * float_2;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		short_1 = v__csi_arg_get();

		int_4 = int_2 * int_3;
	}
	if(1)
	{
		short_2 = short_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
	}
	if(1)
	{
		double double_5 = 1;
		double_5 = double_4 + double_5;
	}
	short_2 = short_2 * short_3;
	float_1 = float_1 + float_1;
	if(1)
	{
		double_4 = double_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			float_5 = float_3 + float_4;
		}
	}
	if(1)
	{
		double double_6 = 1;
		double_3 = double_6 * double_3;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	return float_1;
}
void v_termpty_text_scroll_rev( short parameter_1,unsigned int parameter_2,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double_1 = double_1 * double_1;
	int_2 = int_1 * int_1;
	if(1)
	{
		long_2 = long_1 + long_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	long_2 = long_2 + long_1;
	int_2 = int_2 * int_2;
	char controller4vul_399[2];
	fgets(controller4vul_399 ,2 ,stdin);
	if( strcmp( controller4vul_399, "=") < 0)
	{
		int int_3 = 1;
		int_1 = int_2 * int_3;
		char controller4vul_400[2];
		fgets(controller4vul_400 ,2 ,stdin);
		if( strcmp( controller4vul_400, "2") < 0)
		{
			v_termio_scroll(double_2,int_4,int_5,int_6,uni_para);

			double_2 = double_2 * double_2;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			int_1 = int_4 + int_5;
		}
	}
	if(1)
	{
		char char_1 = 1;
		short short_1 = 1;
		char_1 = char_1 + char_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double_3 = double_2 * double_3;
			short_3 = short_1 * short_2;
			int_2 = int_6 * int_1;
		}
		if(1)
		{
			short short_4 = 1;
			short_4 = short_1 * short_4;
		}
	}
}
void v_termpty_clear_line( long parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int_1 = int_2;
	float_1 = float_1 + float_1;
	char_1 = char_1 * char_1;
	double_1 = double_2;
	int_1 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_1 + long_2;
	v_termpty_cells_clear(long_3,float_1,int_3);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	short_2 = short_1 * short_1;
	long_1 = long_1 + long_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1;
	if(1)
	{
		double_1 = double_3;
	}
	int_3 = int_4 + int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	v_termio_content_change(double_2,double_3,double_1,int_5);

}
void v_termpty_clear_screen( unsigned int parameter_1,long parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	if(1)
	{
		double double_3 = 1;
		v_termpty_clear_line(long_1,double_1,int_1);

		double_3 = double_2 * double_2;
	}
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	long_2 = long_1 * long_1;
	float_1 = float_1 * float_2;
	int_1 = int_2 + int_1;
	v_termpty_cells_clear(long_3,float_3,int_2);

	unsigned_int_1 = unsigned_int_2;
	v_termio_content_change(double_2,double_4,double_1,int_1);

}
void v_termpty_cell_codepoint_att_fill( char parameter_1,short parameter_2,float parameter_3,unsigned int parameter_4,int parameter_5)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		int_2 = int_1 * int_1;
	}
}
unsigned int v__termpty_charset_trans( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_3 + int_4;
	if(1)
	{
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "E") > 0)
		{
			int int_5 = 1;
			int_5 = int_1 * int_5;
		}
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 + short_1;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_2;
		}
		if(1)
		{
			int_2 = int_2 * int_2;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_2;
		}
	}
	return unsigned_int_2;
}
void v_termio_content_change( double parameter_1,double parameter_2,double parameter_3,int parameter_4)
{
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	short_1 = short_1 + short_1;
	long_1 = v__remove_links(long_1,char_1,-1 );

	double_2 = double_1 + double_1;
	int_1 = int_1 * int_2;
	float_2 = float_1 * float_2;
	int_2 = int_1 * int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ",") > 0)
	{
		float float_3 = 1;
		float_3 = float_1 * float_1;
		int_2 = int_2;
		double_1 = double_2 * double_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		short_1 = short_2;
		double_2 = double_1 + double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_1 = int_3 + int_2;
			if(1)
			{
				float float_4 = 1;
				float float_5 = 1;
				float_5 = float_2 * float_4;
				char_2 = char_1 + char_1;
			}
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			char_2 = char_1 + char_3;
		}
	}
	if(1)
	{
	}
	int_3 = int_3 * int_2;
	double_2 = double_3 + double_1;
	int_5 = int_4 + int_2;
	char_1 = char_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		char_2 = v__sel_set(unsigned_int_2,int_3);

		int_2 = int_3 + int_1;
		unsigned_int_4 = unsigned_int_1;
	}
	if(1)
	{
		int_1 = int_6 * int_2;
		double_1 = double_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_5 = int_2 * int_5;
			if(1)
			{
				unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
				int_3 = int_3 * int_3;
			}
			short_2 = short_1 * short_2;
			double_4 = double_1 * double_2;
		}
	}
	if(1)
	{
		char char_4 = 1;
		double double_5 = 1;
		char_4 = char_3 * char_3;
		double_3 = double_1 + double_4;
		double_2 = double_5;
		int_4 = int_5 + int_6;
		int_6 = int_3 + int_5;
		if(1)
		{
			char char_5 = 1;
			char_5 = char_5;
		}
	}
}
void v_termpty_text_append( long parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_5 = 1;
	short short_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_9 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 * long_1;
	float_2 = float_1 + float_1;
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	int_1 = int_1 * int_2;
	int_2 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		float float_3 = 1;
		char char_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_6 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		long_1 = v__termpty_is_dblwidth_get(int_1,int_3);

		double_4 = double_2 * double_3;
		if(1)
		{
			v_termpty_cell_codepoint_att_fill(char_1,short_1,float_2,unsigned_int_2,int_2);

			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
			float_2 = float_1 + float_3;
			int_2 = int_1 * int_3;
			char_2 = char_2 * char_2;
			int_5 = int_1 + int_4;
			unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int_6 = int_3 + int_1;
			}
		}
		long_3 = long_1 * long_2;
		if(1)
		{
			char_1 = char_2;
		}
		if(1)
		{
			if(1)
			{
				float_5 = float_4 + float_4;
			}
			double_1 = double_4 * double_2;
		}
		int_2 = int_3;
		if(1)
		{
			int int_7 = 1;
			short_3 = short_2 * short_2;
			int_7 = int_4 + int_5;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
		if(1)
		{
			unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
			int_5 = int_1 * int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_7 = unsigned_int_5 * unsigned_int_2;
			int_2 = int_6 + int_3;
			if(1)
			{
				unsigned int unsigned_int_8 = 1;
				unsigned_int_8 = unsigned_int_3 * unsigned_int_5;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
			}
			if(1)
			{
				long long_4 = 1;
				double_1 = double_4 * double_3;
				v_termpty_text_scroll_test(short_2,double_3);

				long_4 = long_3 * long_4;
			}
		}
		if(1)
		{
			char char_3 = 1;
			long long_5 = 1;
			float_1 = float_5 + float_4;
			double_4 = double_4 * double_4;
			if(1)
			{
				unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
			}
			char_3 = char_2 * char_2;
			if(1)
			{
				short short_4 = 1;
				float_1 = float_3;
				v_termio_content_change(double_3,double_5,double_1,int_5);

				short_4 = short_3 + short_2;
			}
			long_2 = long_5 * long_1;
		}
	}
	unsigned_int_9 = v__termpty_charset_trans(double_2,unsigned_int_9);

}
short v__csi_arg_get()
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	float_1 = float_1 * float_2;
	int_1 = int_1 + int_2;
	long_3 = long_1 + long_2;
	double_1 = double_1 * double_1;
	int_4 = int_2 * int_3;
	if(1)
	{
		int int_5 = 1;
		int_3 = int_3 + int_5;
	}
	return short_1;
}
void v__handle_esc_csi( float parameter_1,int parameter_2,unsigned int parameter_3,int uni_para)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	v_termpty_text_scroll_rev(short_1,unsigned_int_1,uni_para);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
}
char v__safechar( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_2;
	float_1 = float_1 + float_2;
	return char_1;
}
unsigned int v__handle_esc( int parameter_1,unsigned int parameter_2,double parameter_3,int uni_para)
{
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	char char_5 = 1;
	long long_2 = 1;
	int int_4 = 1;
	float float_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_6 = 1;
	long long_3 = 1;
	float float_6 = 1;
	float float_7 = 1;
	long long_4 = 1;
	short short_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_7 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	long_1 = long_1;
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	float_1 = float_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	int_1 = int_3 * int_1;
	float_3 = float_2 + float_2;
	int_1 = int_2;
	double_2 = double_1 + double_2;
	float_2 = float_2 * float_1;
	char_1 = char_1 * char_1;
	char_3 = char_2 * char_2;
	char_4 = char_3;
	int_2 = int_3;
	long_1 = long_1 + long_1;
	short_2 = short_1 * short_3;
	char_1 = char_5 * char_4;
	char_1 = char_3;
	long_2 = long_1 * long_1;
	int_3 = int_1 + int_4;
	float_2 = float_1 * float_4;
	int_2 = int_5 + int_5;
	float_1 = float_2 + float_3;
	long_2 = long_1 * long_2;
	if(1)
	{
		float float_5 = 1;
		float_5 = float_3 + float_5;
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	double_1 = double_2 * double_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
	}
	char_1 = char_4 + char_6;
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
	}
	short_3 = short_1 * short_1;
	long_3 = long_2;
	if(1)
	{
	}
	float_7 = float_6 * float_7;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	long_4 = long_3;
	if(1)
	{
	}
	char controller4vul_397[2];
	fgets(controller4vul_397 ,2 ,stdin);
	if( strcmp( controller4vul_397, "o") > 0)
	{
		long long_5 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		short_1 = short_2 + short_4;
		long_5 = long_1 + long_1;
		long_5 = long_1;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
		char controller4vul_398[3];
		fgets(controller4vul_398 ,3 ,stdin);
		if( strcmp( controller4vul_398, "96") < 0)
		{
			v__handle_esc_csi(float_3,int_6,unsigned_int_5,uni_para);

			double_2 = double_2 + double_2;
		}
		double_3 = double_1 * double_3;
		double_2 = double_1 * double_3;
		if(1)
		{
			double double_4 = 1;
			double double_5 = 1;
			short short_5 = 1;
			double_4 = double_5;
			short_3 = short_4 + short_5;
			unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
		}
	}
	if(1)
	{
	}
	unsigned_int_6 = unsigned_int_6;
	short_4 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_5;
	char_5 = char_1 * char_6;
	int_7 = int_6;
	return unsigned_int_6;
}
void v_termpty_cell_fill( short parameter_1,double parameter_2,double parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_1 = 1;
			int int_2 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			int_2 = int_1 * int_2;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_3 = 1;
			unsigned int unsigned_int_2 = 1;
			long_3 = long_1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
	}
}
void v_termpty_cells_fill( short parameter_1,float parameter_2,char parameter_3,int parameter_4)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1;
	v_termpty_cell_fill(short_1,double_2,double_3,int_1);

	long_1 = long_2;
}
void v_termpty_cells_clear( long parameter_1,float parameter_2,int parameter_3)
{
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char_1 = char_1 + char_1;
	v_termpty_cells_fill(short_1,float_1,char_1,int_1);

}
short v__tooltip_del(double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_2;
	double_4 = double_1 + double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
short v__tooltip_content(unsigned int parameter_2,float parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_1;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	return short_1;
	unsigned_int_4 = v_media_add(double_2,char_1,char_1,int_1,char_2,-1 );

}
void v_MD5Final( double parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	double_1 = double_1 + double_2;
	int_2 = int_1 * int_2;
	char_1 = char_1 * char_2;
	float_1 = float_1 + float_1;
	int_1 = int_3 * int_4;
	short_1 = short_2;
	if(1)
	{
		double_3 = double_3 * double_4;
		short_1 = short_1 + short_2;
		long_1 = long_1 + long_1;
		v_byteReverse(unsigned_int_1,short_1);

		v_MD5Transform(long_1,char_3);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_2 + short_2;
	}
	double_7 = double_5 * double_6;
	float_1 = float_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	long_1 = long_1 * long_1;
	double_3 = double_2 * double_2;
	long_2 = long_2;
	double_6 = double_4 * double_2;
}
void v_MD5Transform( long parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_3 = 1;
	double double_7 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_8 = 1;
	int int_7 = 1;
	int int_8 = 1;
	float float_3 = 1;
	int int_9 = 1;
	int int_10 = 1;
	long long_6 = 1;
	float float_4 = 1;
	double double_9 = 1;
	double double_10 = 1;
	int int_11 = 1;
	float float_5 = 1;
	int int_12 = 1;
	double double_11 = 1;
	char_2 = char_1 + char_1;
	double_1 = double_1 * double_2;
	double_3 = double_3 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 + short_1;
	char_3 = char_2 * char_1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_2;
	short_1 = short_1 + short_1;
	int_3 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	int_1 = int_3 * int_4;
	long_1 = long_1;
	char_1 = char_1 * char_3;
	int_4 = int_3 * int_3;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	double_5 = double_4 + double_3;
	int_5 = int_1 * int_2;
	int_1 = int_1 * int_2;
	short_4 = short_1 * short_3;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
	double_2 = double_2 + double_6;
	long_2 = long_1 * long_1;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_7;
	int_5 = int_5 * int_4;
	long_2 = long_2 * long_3;
	char_2 = char_1 * char_2;
	double_7 = double_6 * double_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_6;
	int_5 = int_5;
	long_4 = long_5;
	double_7 = double_7;
	unsigned_int_2 = unsigned_int_5;
	int_6 = int_2 * int_2;
	float_1 = float_2 + float_1;
	char_5 = char_1 * char_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	char_4 = char_4 * char_3;
	short_6 = short_1 + short_5;
	double_7 = double_8 + double_6;
	double_6 = double_5 * double_4;
	int_5 = int_7;
	float_1 = float_1 * float_1;
	double_1 = double_4 + double_8;
	int_1 = int_8;
	int_2 = int_3 + int_7;
	int_7 = int_7 + int_6;
	float_1 = float_2 * float_3;
	int_4 = int_2 * int_5;
	int_2 = int_2 * int_5;
	int_7 = int_8;
	char_2 = char_1 + char_1;
	int_10 = int_9 * int_8;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
	long_6 = long_4;
	float_4 = float_4 * float_4;
	double_10 = double_9 + double_9;
	int_11 = int_10;
	int_4 = int_6 + int_5;
	float_2 = float_5;
	double_2 = double_1 * double_7;
	long_2 = long_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	long_1 = long_2 * long_1;
	int_12 = int_7 + int_2;
	int_12 = int_10 + int_6;
	double_11 = double_10;
	short_6 = short_2 * short_4;
}
void v_byteReverse( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_2;
}
void v_MD5Update( unsigned int parameter_1,int parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	short short_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_8 = 1;
	short short_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int_1 = int_1 + int_2;
	char_1 = char_1 + char_1;
	int_2 = int_3 * int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_4 = int_3 + int_4;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	short_3 = short_1 + short_2;
	int_6 = int_5 + int_1;
	int_7 = int_5;
	int_3 = int_2 + int_7;
	v_byteReverse(unsigned_int_2,short_4);

	unsigned_int_4 = unsigned_int_2;
	v_MD5Transform(long_1,char_1);

	short_5 = short_1 + short_2;
	double_2 = double_1 + double_1;
	int_1 = int_3 + int_2;
	double_1 = double_1 * double_1;
	int_5 = int_7 * int_7;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	int_2 = int_6 * int_8;
	short_5 = short_3 * short_6;
	double_4 = double_2 + double_3;
}
void v_MD5Init( float parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int_1 = int_1 + int_1;
	short_1 = short_2;
	double_3 = double_1 * double_2;
	short_3 = short_2 * short_1;
	double_2 = double_4 + double_1;
	int_1 = int_1 * int_2;
}
void v_gravatar_tooltip( float parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1;
	v_MD5Init(float_1);

	double_1 = double_2 + double_1;
	char_3 = char_1 * char_2;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	short_3 = short_3 * short_3;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "FX") > 0)
	{
	}
	double_1 = double_2 + double_3;
	short_1 = v__tooltip_content(unsigned_int_2,float_1);

	short_1 = v__tooltip_del(double_1);

	double_1 = double_1 + double_2;
	short_2 = short_4 * short_4;
	double_3 = double_2 + double_3;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_4 = 1;
		char_4 = char_2 * char_4;
		unsigned_int_3 = unsigned_int_2;
	}
	float_1 = float_1 * float_2;
	short_6 = short_2 + short_5;
	v_MD5Update(unsigned_int_4,int_1,float_3);

	v_MD5Final(double_2,long_1);

	long_3 = long_2 * long_1;
	short_1 = short_2 * short_6;
}
double v__cb_link_drag_done(short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	float_1 = float_2;
	double_1 = double_1;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2 * float_3;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	return double_2;
}
float v__cb_link_drag_accept(float parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return float_1;
}
char v__cb_link_drag_move(long parameter_2,float parameter_3,long parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int_1 = int_2;
	float_1 = float_1 + float_2;
	float_1 = float_2 * float_1;
	int_2 = int_3 + int_2;
	double_3 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_2;
		}
		if(1)
		{
			double_2 = double_2;
		}
	}
	return char_1;
}
int v__cb_link_icon_new(unsigned int parameter_2,float parameter_3,short parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float_1 = float_1 * float_2;
	float_3 = float_2 + float_3;
	short_2 = short_1 * short_1;
	int_3 = int_1 + int_2;
	short_2 = short_3 + short_1;
	int_1 = int_2 + int_2;
	short_2 = short_4 + short_2;
	return int_1;
}
unsigned int v__cb_link_move(long parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	char_2 = char_1 * char_1;
	int_1 = int_1 + int_2;
	long_2 = long_1 * long_1;
	double_1 = v__cb_link_drag_done(short_1);

	float_1 = float_2;
	if(1)
	{
	}
	int_1 = int_3 * int_4;
	char_3 = v__cb_link_drag_move(long_1,float_2,long_3,unsigned_int_1);

	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		short short_2 = 1;
		float_1 = v__cb_link_drag_accept(float_2,short_1);

		int_1 = int_1 * int_3;
		float_2 = float_1 + float_2;
		unsigned_int_4 = unsigned_int_2;
		if(1)
		{
			int int_5 = 1;
			int_2 = int_5 * int_5;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
		}
		char_2 = char_1;
		short_1 = short_2;
	}
	return unsigned_int_2;
	int_3 = v__cb_link_icon_new(unsigned_int_4,float_2,short_3);

}
int v__cb_link_up_delay()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	double_3 = double_2 * double_2;
	return int_1;
	short_1 = v__activate_link(float_1,char_1);

}
char v__cb_link_up(long parameter_2,double parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short_2 = short_1 * short_2;
	double_1 = double_1 + double_1;
	float_2 = float_1 + float_2;
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		float_4 = float_3 * float_1;
		unsigned_int_1 = unsigned_int_2;
		float_3 = float_2 * float_1;
		double_1 = double_1 + double_2;
		if(1)
		{
			if(1)
			{
				int_1 = int_1;
			}
			if(1)
			{
				short short_3 = 1;
				short short_4 = 1;
				short_1 = short_3 + short_4;
			}
		}
		int_1 = v__cb_link_up_delay();

		float_4 = float_1 + float_3;
	}
	return char_1;
}
void v_term_focus( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	long_3 = long_2 * long_1;
	double_1 = v__term_is_focused(unsigned_int_2);

	double_2 = double_1 + double_2;
}
double v__term_is_focused( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return double_1;
}
void v_term_unfocus( unsigned int parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = v__term_is_focused(unsigned_int_1);

	int_1 = int_1;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	long_1 = long_1;
	int_3 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
}
char v__cb_ctxp_del(char parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	double_2 = double_1 * double_2;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 * int_2;
	v_term_unfocus(unsigned_int_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return char_1;
	v_term_focus(int_2);

}
long v__cb_ctxp_dismissed(long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 + int_1;
	int_3 = int_2;
	double_1 = double_1;
	return long_1;
}
short v__cb_ctxp_link_copy(unsigned int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_2;
	short_1 = short_1 * short_2;
	unsigned_int_3 = v__take_selection_text(long_1,float_1,char_1,-1 );

	short_2 = short_3 * short_4;
	int_2 = int_1 * int_1;
	float_3 = float_2 * float_1;
	return short_1;
}
char v__screen_visual_bounds( float parameter_1)
{
	char char_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned_int_1 = unsigned_int_2;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int_1 = int_2;
		long_3 = long_1 * long_2;
	}
	return char_1;
}
int v__draw_cell( long parameter_1,double parameter_2,int parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	long long_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_2;
	int_2 = int_3 * int_1;
	double_1 = double_1 * double_1;
	float_1 = float_1 + float_2;
	if(1)
	{
		int_1 = int_2 * int_3;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	long_1 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_3 * double_2;
		}
		char controller_5[2];
		fgets(controller_5 ,2 ,stdin);
		if( strcmp( controller_5, "&") < 0)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
		}
	}
	if(1)
	{
		long_1 = long_2 + long_2;
	}
	if(1)
	{
		double_4 = double_1 + double_3;
	}
	if(1)
	{
		double double_5 = 1;
		float float_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
		int_2 = int_1 * int_3;
		double_1 = double_4 * double_5;
		long_3 = long_1 + long_1;
		double_7 = double_6 * double_2;
		float_1 = float_3;
		int_5 = int_4 * int_2;
	}
	if(1)
	{
		char_1 = char_2;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_2 + short_3;
	}
	if(1)
	{
		short short_5 = 1;
		short short_6 = 1;
		short_5 = short_5 * short_6;
	}
	if(1)
	{
		long_3 = long_1;
	}
	if(1)
	{
		if(1)
		{
			char char_3 = 1;
			char_3 = char_1 * char_2;
		}
		if(1)
		{
			double_1 = double_6 + double_7;
		}
	}
	if(1)
	{
		double double_8 = 1;
		double_6 = double_4 + double_8;
	}
	return int_3;
}
short v__draw_line( long parameter_1,char parameter_2,char parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int_1 = v__draw_cell(long_1,double_1,int_2,char_1);

	double_2 = double_2 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_2 * int_1;
	}
	return short_1;
}
unsigned int v_termpty_backlog_length( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_4 = 1;
	long long_3 = 1;
	double double_5 = 1;
	int int_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int_3 = int_1 * int_2;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = v_verify_beacon(float_1,int_3);

	int_1 = int_3;
	float_1 = float_1 + float_1;
	double_3 = double_1 * double_2;
	int_4 = int_1 + int_2;
	float_3 = float_1 + float_2;
	short_2 = short_1 + short_1;
	char_2 = char_1 + char_1;
	double_2 = double_2 + double_4;
	double_2 = double_1 + double_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		char_2 = char_2 + char_3;
	}
	char_3 = char_4 + char_2;
	if(1)
	{
		float_4 = float_4 * float_4;
	}
	long_3 = long_1 + long_3;
	if(1)
	{
		double_3 = double_3;
	}
	double_1 = double_2 * double_5;
	if(1)
	{
		int int_5 = 1;
		int_3 = int_5 + int_1;
	}
	double_1 = double_5 + double_4;
	if(1)
	{
		double_1 = double_5 * double_3;
	}
	double_1 = double_4 * double_3;
	int_3 = int_6 * int_3;
	double_4 = double_1;
	short_3 = short_3 + short_4;
	short_4 = short_1 * short_1;
	float_2 = float_4 + float_4;
	return unsigned_int_1;
}
double v_termio_pty_get()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return double_1;
}
double v_termio_textgrid_get( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long_1 = long_2;
	short_2 = short_1 * short_1;
	return double_1;
}
short v_miniview_colors_get( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double_1 = v_termio_textgrid_get(float_1);

	double_2 = double_1;
	long_3 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_2 = double_3 * double_3;
		int_1 = int_1 + int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	return short_1;
}
float v__deferred_renderer()
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	double double_5 = 1;
	char char_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	short short_5 = 1;
	int int_4 = 1;
	float float_3 = 1;
	long_1 = long_1 * long_2;
	double_1 = double_1 * double_1;
	long_3 = long_2 + long_3;
	double_2 = double_1;
	int_1 = v_termio_scroll_get(unsigned_int_1);

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2 * int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	}
	double_3 = v_termio_pty_get();

	long_2 = v_termpty_cellrow_get(unsigned_int_2,int_2,int_2);

	int_2 = int_1 + int_2;
	double_4 = double_2 + double_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	int_2 = int_1;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	char_2 = char_1 + char_2;
	short_1 = short_1 * short_1;
	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_2;
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		short_2 = short_2 + short_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_5;
		if(1)
		{
			char_5 = char_3 * char_4;
		}
		long_3 = long_3 + long_1;
	}
	float_1 = float_1 * float_2;
	long_1 = long_4;
	double_2 = double_5 * double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		long long_5 = 1;
		long_5 = long_1 + long_3;
	}
	short_2 = v_miniview_colors_get(int_2,char_6);

	short_3 = short_3 + short_4;
	int_3 = int_2 + int_2;
	if(1)
	{
		int_2 = int_1 + int_2;
		unsigned_int_3 = v_termpty_backlog_length(long_2);

		int_3 = int_3 + int_1;
		if(1)
		{
			double_5 = double_1 * double_1;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
		}
		if(1)
		{
			if(1)
			{
				short_1 = short_5 + short_2;
				long_2 = long_4 * long_3;
				double_4 = double_2;
				int_3 = int_1 + int_4;
			}
			if(1)
			{
				int_2 = int_3 * int_1;
				char_4 = char_2 * char_2;
			}
		}
	}
	if(1)
	{
		char_4 = v__screen_visual_bounds(float_2);

		char_5 = char_1 + char_6;
	}
	int_1 = int_3 + int_4;
	short_4 = v__draw_line(long_1,char_3,char_3,int_2,int_2);

	int_3 = int_1 + int_3;
	short_3 = short_5 * short_2;
	char_5 = char_2;
	return float_3;
}
int v__queue_render( double parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float_1 = v__deferred_renderer();

	double_2 = double_1 * double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
		double_2 = double_1 * double_1;
	}
	return int_1;
}
void v_miniview_redraw( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	double_1 = double_1;
	if(1)
	{
	}
	int_1 = v__queue_render(double_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
float v__block_obj_del( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	int_2 = int_1 * int_1;
	long_2 = long_1;
	return float_1;
	unsigned_int_1 = v__smart_media_del(unsigned_int_2,float_1);

}
short v__termpty_is_dblwidth_slow_get( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
		}
	}
	return short_1;
}
long v__termpty_is_dblwidth_get( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "?3") < 0)
	{
	}
	if(1)
	{
	}
	return long_1;
	short_1 = v__termpty_is_dblwidth_slow_get(short_2,int_1);

}
double v_term_preedit_str_get( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1 * short_2;
	if(1)
	{
	}
	return double_1;
}
void v_media_get( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float_2 = float_1 * float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "F") == 0)
	{
	}
}
short v__smart_media_clicked(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	if(1)
	{
		if(1)
		{
			double double_2 = 1;
			double double_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			char_1 = v_media_src_type_get(unsigned_int_3);

			double_4 = double_2 + double_3;
			float_2 = float_1 + float_1;
			if(1)
			{
				int int_2 = 1;
				if(1)
				{
					char char_2 = 1;
					char_2 = char_1 * char_1;
					v_media_get(double_3);

					long_2 = long_2 * long_3;
					if(1)
					{
						short short_1 = 1;
						short short_2 = 1;
						short_2 = short_1 + short_2;
					}
					if(1)
					{
						float float_3 = 1;
						unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
						float_3 = float_2 * float_2;
						if(1)
						{
							double double_5 = 1;
							double double_6 = 1;
							double double_7 = 1;
							short_3 = v_termio_config_get(int_1);

							unsigned_int_5 = unsigned_int_5 * unsigned_int_4;
							double_5 = double_1 + double_1;
							double_7 = double_6 + double_1;
						}
					}
				}
				int_2 = int_1;
			}
		}
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	return short_3;
}
int v_media_control_get( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	return int_1;
}
long v__smart_media_stop(int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	return long_1;
}
int v__smart_media_pause(double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	return int_1;
}
int v__smart_media_play(float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	return int_1;
}
unsigned int v__smart_media_del(unsigned int parameter_2,float parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	return unsigned_int_1;
}
void v_media_visualize_set( long parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_2;
		}
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1;
		}
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
}
void v_media_mute_set( unsigned int parameter_1,float parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		char_2 = char_4 + char_5;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_2 + double_2;
	}
}
void v_media_volume_set( unsigned int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	int_1 = int_1 * int_2;
}
short v__cb_media_vol(float parameter_2,float parameter_3,long parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float_2 = float_1 + float_2;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	v_media_volume_set(unsigned_int_1,double_1);

	double_1 = double_1;
	return short_1;
}
int v__cb_media_pos(char parameter_2,unsigned int parameter_3,double parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int_1 = int_1 + int_2;
	v_media_position_set(unsigned_int_1,double_1);

	int_2 = int_3 * int_3;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_2 + double_3;
	return int_4;
}
float v__cb_media_pos_drag_stop(double parameter_2,short parameter_3,double parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char_1 = char_1 * char_2;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	char_1 = char_1 * char_3;
	char_4 = char_2;
	int_1 = int_1;
	char_1 = char_1 + char_2;
	return float_1;
}
short v__cb_media_pos_drag_start(short parameter_2,short parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	v_media_position_set(unsigned_int_1,double_1);

	char_3 = char_1 * char_2;
	char_3 = char_1 * char_3;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	float_3 = float_1 + float_2;
	double_2 = double_2 * double_3;
	return short_1;
}
void v_media_stop( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	float_1 = float_1;
	char_1 = char_2;
}
short v__cb_media_stop(float parameter_2,float parameter_3,int parameter_4)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	v_media_stop(short_1);

	long_1 = long_1 * long_2;
	return short_2;
}
float v__cb_media_pause(long parameter_2,long parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return float_1;
	v_media_play_set(float_2,short_1);

}
void v_media_play_set( float parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		int_3 = int_2 * int_3;
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_2 = double_1 * double_1;
		char_1 = char_1 * char_2;
	}
}
double v__cb_media_play(short parameter_2,short parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double_1 = double_2;
	return double_1;
	v_media_play_set(float_1,short_1);

}
void v_media_position_set( unsigned int parameter_1,double parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1 * short_1;
	double_2 = double_1 * double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "_T") < 0)
	{
	}
	short_1 = short_2 * short_3;
	int_2 = int_1 * int_1;
}
int v__cb_mov_ref(int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	return int_1;
}
double v__cb_mov_progress(long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	int_3 = int_1;
	return double_1;
}
unsigned int v__cb_mov_restart()
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	return unsigned_int_3;
}
double v__cb_mov_decode_stop(unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_2 = v__cb_mov_restart();

		float_1 = float_1 + float_2;
	}
	int_3 = int_1 * int_2;
	int_2 = int_3 + int_1;
	return double_1;
}
double v__cb_mov_len_change(long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	return double_1;
}
char v__cb_mov_frame_resize(short parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double_1 = double_1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	long_1 = v__type_mov_calc(long_2,int_1,double_2,short_1,char_1);

	char_3 = char_2 * char_3;
	return char_4;
}
double v__cb_mov_frame_decode(unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	double_3 = double_1 + double_2;
	int_1 = int_1 * int_2;
	double_4 = double_1 * double_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	float_1 = float_1 + float_2;
	long_1 = long_1 + long_1;
	long_1 = v__type_mov_calc(long_2,int_3,double_2,short_1,char_1);

	long_3 = long_3 * long_4;
	if(1)
	{
	}
	char_2 = char_2;
	double_3 = double_3 * double_3;
	char_1 = char_2 * char_3;
	float_3 = float_1;
	return double_3;
}
short v__type_mov_init( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_7 = 1;
	short short_6 = 1;
	int int_5 = 1;
	short short_7 = 1;
	long long_6 = 1;
	long long_7 = 1;
	char_2 = char_1 * char_2;
	float_1 = v_theme_apply(float_2,float_2,unsigned_int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_media_position_set(unsigned_int_4,double_1);

	long_1 = long_1 + long_2;
	float_3 = v__cb_media_pos_drag_stop(double_2,short_1,double_2);

	long_1 = long_2 + long_1;
	double_2 = double_3 * double_1;
	long_3 = long_1 * long_2;
	short_1 = v__cb_media_stop(float_4,float_2,int_1);

	double_3 = double_2 * double_1;
	unsigned_int_5 = unsigned_int_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		double_4 = double_2 + double_2;
		v_media_mute_set(unsigned_int_6,float_4);

		char_2 = char_2;
		v_media_visualize_set(long_3,float_2);

		short_2 = short_1;
	}
	unsigned_int_5 = unsigned_int_7;
	int_2 = v__cb_mov_ref(int_2);

	float_4 = v__cb_media_pause(long_2,long_3,char_3);

	double_5 = double_2 + double_4;
	long_2 = long_1 * long_3;
	char_2 = char_2 + char_2;
	int_3 = int_2 + int_1;
	int_2 = int_3 + int_3;
	int_4 = int_3 * int_3;
	if(1)
	{
		short_4 = short_3 + short_1;
	}
	if(1)
	{
		int_3 = v__cb_media_pos(char_4,unsigned_int_7,double_4);

		char_4 = char_2 + char_5;
	}
	double_3 = v__cb_mov_frame_decode(unsigned_int_6);

	short_4 = v__cb_media_pos_drag_start(short_5,short_3,unsigned_int_5);

	double_7 = double_6 * double_7;
	char_6 = v__cb_mov_frame_resize(short_2);

	float_4 = float_3 + float_2;
	v_media_play_set(float_1,short_3);

	double_6 = double_6;
	double_4 = v__cb_mov_progress(long_3);

	long_5 = long_3 + long_4;
	int_2 = int_4 + int_3;
	float_1 = float_2 + float_2;
	char_2 = char_7 + char_1;
	short_6 = v__cb_media_vol(float_1,float_1,long_3);

	int_5 = int_4 * int_2;
	int_1 = int_4 + int_2;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_5;
	char_5 = char_4 + char_5;
	double_5 = v__cb_mov_len_change(long_3);

	double_7 = v__cb_media_play(short_2,short_4,long_2);

	double_6 = double_2 * double_2;
	double_4 = v__cb_mov_decode_stop(unsigned_int_3);

	short_7 = short_1 + short_4;
	short_6 = short_3 * short_2;
	long_7 = long_6 + long_1;
	int_1 = int_3 * int_1;
	long_3 = long_4 + long_3;
	if(1)
	{
		float_2 = float_3 + float_2;
	}
	if(1)
	{
		double_2 = double_3;
	}
	return short_6;
}
void v__cb_edje_preloaded(unsigned int parameter_2,long parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	long_4 = long_3 * long_3;
}
unsigned int v__type_edje_init( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 + int_2;
	v_theme_auto_reload_enable(int_3);

	float_1 = float_1;
	short_2 = short_1 * short_1;
	short_1 = short_1 * short_3;
	float_2 = float_2 * float_1;
	char_1 = char_1 * char_1;
	double_1 = double_1;
	char_2 = char_1 + char_2;
	int_3 = int_3 + int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_2 = 1;
			double_3 = double_2 + double_1;
			double_2 = double_3 * double_4;
			v__cb_edje_preloaded(unsigned_int_1,long_1,float_1);

			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		}
	}
	return unsigned_int_3;
}
float v__type_scale_init( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	short short_5 = 1;
	long long_2 = 1;
	char char_4 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short_2 = short_1 * short_1;
	short_3 = short_4;
	int_2 = int_1 + int_2;
	char_3 = char_1 * char_2;
	long_1 = long_1 * long_1;
	short_2 = short_5 + short_4;
	long_1 = long_2;
	char_4 = v__cb_scale_preloaded(double_1,float_1);

	short_1 = short_5 + short_3;
	char_1 = char_3 + char_3;
	long_2 = long_3 + long_4;
	long_1 = long_1 + long_4;
	int_2 = int_2 + int_3;
	return float_2;
}
void v__cb_img_frame()
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_2;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	double_1 = double_3 * double_4;
	if(1)
	{
		double_3 = double_1 + double_3;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 + float_2;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_2;
		if(1)
		{
			if(1)
			{
				int int_1 = 1;
				int_1 = int_1 + int_1;
			}
		}
	}
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	short_4 = short_1 + short_3;
}
char v__type_img_anim_handle()
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double_2 = double_1 * double_1;
	long_1 = long_1;
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	float_2 = float_1 + float_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "LG") < 0)
	{
	}
	double_2 = double_1 * double_1;
	v__cb_img_frame();

	double_2 = double_1;
	return char_1;
}
int v__cb_img_preloaded(char parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	return int_1;
}
char v__type_img_init( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short_3 = short_1 + short_2;
	int_1 = v__cb_img_preloaded(char_1,float_1);

	float_1 = float_2 + float_2;
	char_1 = char_2 * char_1;
	int_3 = int_1 + int_2;
	short_1 = short_1 + short_1;
	char_3 = v__type_img_anim_handle();

	int_4 = int_3 * int_3;
	int_3 = int_1 * int_1;
	int_2 = int_4;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	return char_3;
}
void v__url_compl_cb(int parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_1 = double_1;
	float_1 = v__type_scale_init(short_1);

	double_1 = double_1 + double_2;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
	}
	long_3 = long_4 + long_3;
	int_1 = int_1 * int_1;
	char_1 = v__type_img_init(char_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_2 + short_1;
	long_1 = long_4 + long_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
	int_3 = int_2 * int_2;
	unsigned_int_3 = v__type_edje_init(float_1);

	double_2 = double_3 * double_1;
	int_3 = int_2;
	long_4 = v__smart_calculate(char_1,-1 );

	char_1 = char_1 + char_2;
	float_1 = float_1 * float_1;
	float_3 = float_2 * float_3;
	double_2 = double_4 * double_4;
	char_1 = char_2 + char_2;
	double_4 = double_3;
	int_1 = int_3 * int_1;
	int_2 = int_3 + int_1;
	short_3 = v__type_mov_init(short_1);

	int_5 = int_3 * int_4;
}
unsigned int v__url_prog_cb(int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 + int_1;
	int_2 = int_1 + int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_1 = double_1 * double_1;
		if(1)
		{
			double double_3 = 1;
			double_3 = double_1 + double_2;
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		double_5 = double_2 + double_4;
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, "yh") > 0)
		{
			float float_1 = 1;
			float float_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_4 = 1;
			float_2 = float_1 + float_2;
			char_2 = char_1 * char_2;
			int_2 = int_3 * int_4;
			double_4 = double_4 + double_1;
		}
	}
	return unsigned_int_1;
}
float v__type_thumb_calc( float parameter_1,float parameter_2,double parameter_3,long parameter_4,int parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char * vul_var;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	}
	char controller4vul_428[2];
	fgets(controller4vul_428 ,2 ,stdin);
	if( strcmp( controller4vul_428, "4") < 0)
	{
		char char_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char_1 = char_1;
		int_1 = int_1;
		double_3 = double_1 * double_2;
		char controller4vul_429[2];
		fgets(controller4vul_429 ,2 ,stdin);
		if( strcmp( controller4vul_429, "L") > 0)
		{
			long long_1 = 1;
			double_4 = double_4 + double_1;
			long_1 = long_1;
			char controller4vul_430[3];
			fgets(controller4vul_430 ,3 ,stdin);
			if( strcmp( controller4vul_430, "mz") > 0)
			{
				unsigned int unsigned_int_6 = 1;
				vul_var=(char*)malloc(20*sizeof(char));
				strcpy(vul_var, "CWE-761");
				if(uni_para == 480)
				{
					vul_var = vul_var + 1;
				}
				free(vul_var);
				unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
			}
		}
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "8`") < 0)
		{
			long long_2 = 1;
			long_2 = long_2 * long_2;
			long_2 = long_2;
		}
		int_2 = int_1 * int_1;
		short_2 = short_1 + short_2;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	}
	double_3 = double_4 * double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
}
long v__type_mov_calc( long parameter_1,int parameter_2,double parameter_3,short parameter_4,char parameter_5)
{
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_4 = 1;
	long long_4 = 1;
	int int_6 = 1;
	long_1 = long_1;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	char_2 = char_1 + char_1;
	int_1 = int_1 + int_1;
	if(1)
	{
		char_2 = char_2 + char_1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_5 = 1;
		int int_5 = 1;
		long long_6 = 1;
		double_1 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_2 * int_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			double_3 = double_3 + double_4;
		}
		if(1)
		{
			short short_2 = 1;
			short_1 = short_2 + short_2;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				float float_3 = 1;
				int_3 = int_4 + int_1;
				float_1 = float_3 * float_2;
				if(1)
				{
					long long_2 = 1;
					long_1 = long_2 + long_1;
				}
			}
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			short short_3 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			short_3 = short_3 + short_3;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
				double_4 = double_5 + double_5;
				if(1)
				{
					double_6 = double_3 * double_6;
				}
			}
		}
		if(1)
		{
			long long_3 = 1;
			int_3 = int_4;
			long_3 = long_1 + long_1;
		}
		long_5 = long_4 + long_5;
		int_5 = int_3 + int_1;
		double_6 = double_5;
		long_6 = long_6 * long_6;
	}
	int_6 = int_2 * int_4;
	float_1 = float_2 * float_1;
	return long_4;
}
unsigned int v__type_edje_calc( char parameter_1,long parameter_2,short parameter_3,int parameter_4,char parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	char_1 = char_2;
	return unsigned_int_1;
}
float v__type_img_calc( char parameter_1,double parameter_2,float parameter_3,float parameter_4,double parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		int_3 = int_1 * int_2;
		int_2 = int_1;
	}
	if(1)
	{
		int int_4 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		double double_4 = 1;
		char char_2 = 1;
		double double_6 = 1;
		int_4 = int_1 + int_3;
		if(1)
		{
			char_1 = char_1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			if(1)
			{
				short_1 = short_1 * short_1;
				unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
				if(1)
				{
					double double_3 = 1;
					double_3 = double_1 + double_1;
				}
			}
		}
		if(1)
		{
			int int_5 = 1;
			long long_1 = 1;
			int_4 = int_4 + int_3;
			int_3 = int_5 * int_3;
			if(1)
			{
				double double_5 = 1;
				long_1 = long_1 + long_1;
				double_5 = double_1 + double_4;
				if(1)
				{
					char_2 = char_2 + char_1;
				}
			}
			if(1)
			{
				short short_2 = 1;
				long_1 = long_1 + long_1;
				short_2 = short_1;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
			double_2 = double_4 * double_2;
		}
		float_1 = float_1 * float_2;
		float_3 = float_1 + float_2;
		double_6 = double_6 + double_2;
		char_2 = char_2 + char_1;
	}
	float_3 = float_2 * float_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	return float_1;
}
char v__cb_scale_preloaded(double parameter_2,float parameter_3)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long_1 = long_1;
	if(1)
	{
	}
	if(1)
	{
		float_2 = float_1 * float_2;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		float float_3 = 1;
		int int_2 = 1;
		double double_1 = 1;
		int int_3 = 1;
		float_2 = float_3 * float_1;
		int_1 = int_2 + int_1;
		double_1 = double_1 * double_1;
		int_2 = int_3;
		float_3 = float_1 + float_3;
	}
	return char_1;
}
int v__type_scale_calc( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4,double parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_7 = 1;
	short short_4 = 1;
	float_3 = float_1 + float_2;
	short_3 = short_1 * short_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		long long_2 = 1;
		char_3 = v__cb_scale_preloaded(double_1,float_1);

		int_2 = int_1 * int_1;
		if(1)
		{
			char_3 = char_3;
			double_1 = double_1 + double_1;
			if(1)
			{
				int_4 = int_3 * int_4;
				double_2 = double_2 + double_2;
				if(1)
				{
					double_1 = double_3 * double_1;
				}
			}
		}
		if(1)
		{
			int int_5 = 1;
			int_1 = int_1 + int_4;
			int_1 = int_5 + int_4;
			if(1)
			{
				float_3 = float_1 + float_2;
				unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
				if(1)
				{
					double_2 = double_3 + double_3;
				}
			}
		}
		if(1)
		{
			double double_4 = 1;
			double_4 = double_1 * double_2;
			char_2 = char_3;
		}
		long_2 = long_1 * long_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		int_4 = int_1 + int_4;
		long_3 = long_3 * long_1;
	}
	if(1)
	{
		long long_4 = 1;
		int_1 = int_4 + int_6;
		int_2 = int_1 + int_4;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
		if(1)
		{
			unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
			float float_4 = 1;
			float_4 = float_3 * float_3;
		}
		if(1)
		{
			char char_4 = 1;
			unsigned int unsigned_int_6 = 1;
			short_3 = short_3 + short_2;
			short_3 = short_2 * short_3;
			int_4 = int_7 * int_2;
			int_3 = int_6;
			char_1 = char_4 * char_4;
			char_2 = char_3 * char_4;
			unsigned_int_5 = unsigned_int_6 + unsigned_int_4;
			char_1 = char_4 + char_3;
			unsigned_int_5 = unsigned_int_4;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		long_3 = long_1 * long_4;
	}
	if(1)
	{
		int_3 = int_4 + int_1;
		int_4 = int_1 + int_6;
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	short_4 = short_2 + short_4;
	return int_7;
}
void v__unsmooth_timeout()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float_3 = float_1 + float_2;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	double_1 = double_2;
	long_2 = long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int_1 = v__type_scale_calc(char_1,unsigned_int_1,unsigned_int_3,int_1,double_1);

		short_2 = short_1 + short_1;
		if(1)
		{
			int int_2 = 1;
			int_1 = int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		}
	}
	if(1)
	{
		float_3 = float_3 + float_1;
	}
}
long v__smooth_handler( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	char_3 = char_1 * char_2;
	short_1 = short_2;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	if(1)
	{
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		if(1)
		{
			float float_4 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float_4 = float_2 + float_3;
			double_1 = double_1 * double_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
				if(1)
				{
					int int_1 = 1;
					int int_2 = 1;
					int_1 = int_2;
				}
			}
			if(1)
			{
				long long_2 = 1;
				v__unsmooth_timeout();

				long_2 = long_2 + long_2;
			}
			if(1)
			{
				short_2 = short_2;
			}
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			float_3 = float_3 + float_1;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	return long_3;
}
long v__smart_calculate( char parameter_1,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_7 = 1;
	long long_4 = 1;
	short short_3 = 1;
	double_1 = double_1;
	int_2 = int_1 * int_1;
	char controller4vul_427[2];
	fgets(controller4vul_427 ,2 ,stdin);
	if( strcmp( controller4vul_427, "M") > 0)
	{
		float_1 = v__type_thumb_calc(float_2,float_3,double_2,long_1,int_3,uni_para);

	}
	double_2 = double_3 * double_1;
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		int_3 = int_4 + int_4;
	}
	long_3 = long_2 + long_2;
	short_2 = short_1 * short_1;
	int_5 = int_2;
	int_5 = int_2 * int_5;
	int_3 = int_3 * int_5;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_1;
	int_3 = int_3 + int_5;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_6 = int_6 + int_4;
	int_2 = int_2 + int_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	int_7 = int_7 + int_6;
	long_4 = long_4;
	if(1)
	{
		short short_4 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		short_3 = short_4;
	}
	if(1)
	{
		short short_5 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
		short_5 = short_3 + short_2;
	}
	return long_1;
}
long v__smart_move( long parameter_1,short parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	return long_1;
}
short v__smart_resize( float parameter_1,char parameter_2,char parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float_1 = float_1 + float_1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	float_3 = float_2 * float_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "=") > 0)
	{
	}
	double_1 = double_1 * double_1;
	int_1 = int_1;
	return short_1;
}
int v__smart_del( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		long_3 = long_4 + long_2;
		double_2 = double_1 * double_1;
		long_1 = long_1 * long_2;
	}
	double_3 = double_1 * double_2;
	double_2 = double_2;
	int_4 = int_3 * int_2;
	if(1)
	{
		if(1)
		{
			double_3 = double_2 * double_3;
		}
		double_3 = double_4;
	}
	if(1)
	{
		float float_1 = 1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		float_3 = float_2 * float_3;
	}
	if(1)
	{
		double_5 = double_4 + double_4;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		long_2 = long_3 + long_1;
	}
	if(1)
	{
		int_4 = int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	if(1)
	{
		int_4 = int_5;
	}
	if(1)
	{
		float float_4 = 1;
		float_2 = float_4 + float_3;
	}
	if(1)
	{
		int_4 = int_1;
	}
	if(1)
	{
		double_1 = double_5 + double_3;
	}
	if(1)
	{
		long_1 = long_2 + long_4;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_5 + int_3;
	return int_5;
}
float v__smart_add( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = short_1 * short_2;
	float_3 = float_1 * float_2;
	int_3 = int_1 + int_2;
	int_6 = int_4 + int_5;
	double_1 = double_1 * double_1;
	double_3 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_3;
	double_2 = double_3 + double_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return float_3;
}
char v__smart_init(int uni_para)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long_1 = v__smart_calculate(char_1,uni_para);

	int_3 = int_1 + int_2;
	float_2 = float_1 * float_1;
	long_2 = long_1 + long_1;
	char_1 = char_1 + char_1;
	int_2 = int_4 + int_5;
	int_4 = int_1 * int_1;
	int_4 = int_6 * int_1;
	float_1 = float_2 * float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	return char_1;
}
unsigned int v_media_add( double parameter_1,char parameter_2,char parameter_3,int parameter_4,char parameter_5,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	int int_7 = 1;
	char char_4 = 1;
	double double_4 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	unsigned int unsigned_int_12 = 1;
	double_2 = double_1 * double_1;
	int_2 = int_1 * int_2;
	int_4 = int_3 * int_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		char_2 = char_2 + char_2;
	}
	float_3 = float_1 * float_2;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_2;
	short_2 = short_1 + short_1;
	int_4 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_2;
	char controller4vul_421[2];
	fgets(controller4vul_421 ,2 ,stdin);
	if( strcmp( controller4vul_421, "W") > 0)
	{
		char controller4vul_422[3];
		fgets(controller4vul_422 ,3 ,stdin);
		if( strcmp( controller4vul_422, "K1") > 0)
		{
			long long_2 = 1;
			char char_3 = 1;
			double_2 = double_2;
			long_1 = long_2 * long_1;
			if(1)
			{
				unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
				char_3 = char_3 + char_2;
				double_2 = double_3 + double_1;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
				long_3 = long_3 * long_1;
				unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
			}
			if(1)
			{
				int_4 = int_3 * int_3;
			}
			if(1)
			{
				double_2 = double_1 + double_2;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
			}
			if(1)
			{
				int_4 = int_3 * int_2;
			}
			if(1)
			{
				short short_3 = 1;
				int_4 = int_2 + int_2;
				short_3 = short_1 * short_3;
				unsigned_int_3 = unsigned_int_1;
				float_3 = float_2 + float_2;
				unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
				short_2 = short_1 * short_2;
				unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
			}
			char controller4vul_423[2];
			fgets(controller4vul_423 ,2 ,stdin);
			if( strcmp( controller4vul_423, "!") < 0)
			{
				int int_6 = 1;
				int_3 = int_2 + int_5;
				int_7 = int_6 + int_4;
				long_3 = long_3;
				char controller4vul_424[2];
				fgets(controller4vul_424 ,2 ,stdin);
				if( strcmp( controller4vul_424, "w") > 0)
				{
					int_7 = int_5 * int_2;
					if(1)
					{
						unsigned_int_5 = unsigned_int_6 * unsigned_int_5;
						char_3 = char_4 + char_3;
					}
					char controller4vul_425[3];
					fgets(controller4vul_425 ,3 ,stdin);
					if( strcmp( controller4vul_425, "2>") > 0)
					{
						double_1 = double_4;
						char controller4vul_426[3];
						fgets(controller4vul_426 ,3 ,stdin);
						if( strcmp( controller4vul_426, "*a") > 0)
						{
							char_1 = v__smart_init(uni_para);

							char_3 = char_1;
							double_2 = double_3 * double_4;
							int_8 = int_1 + int_7;
						}
						if(1)
						{
							unsigned_int_5 = unsigned_int_5;
							unsigned_int_6 = unsigned_int_2;
							unsigned_int_7 = unsigned_int_2 * unsigned_int_4;
							int_3 = int_1 * int_1;
							long_1 = long_1 + long_4;
							long_1 = long_2 * long_3;
							double_2 = double_3 + double_5;
							short_1 = short_2 * short_2;
							char_1 = char_1 * char_2;
						}
					}
				}
				if(1)
				{
					double_5 = double_4 * double_6;
				}
			}
		}
		if(1)
		{
			int_3 = int_7;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_4 = 1;
			short short_5 = 1;
			short_2 = short_4 + short_5;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		long long_6 = 1;
		if(1)
		{
			double double_7 = 1;
			unsigned_int_8 = unsigned_int_4 * unsigned_int_7;
			double_4 = double_1 * double_7;
		}
		double_6 = double_6 + double_2;
		if(1)
		{
			long_1 = long_3 * long_4;
			double_3 = double_5 * double_1;
		}
		char_4 = char_1;
		if(1)
		{
			float_4 = float_3 + float_1;
			int_4 = int_4;
		}
		unsigned_int_2 = unsigned_int_9 * unsigned_int_8;
		if(1)
		{
			long long_5 = 1;
			unsigned_int_3 = unsigned_int_10 + unsigned_int_8;
			long_5 = long_4;
		}
		int_1 = int_1 + int_4;
		long_4 = long_6 * long_6;
	}
	float_4 = float_3 * float_3;
	int_5 = int_3 * int_4;
	unsigned_int_4 = unsigned_int_10 + unsigned_int_5;
	unsigned_int_2 = unsigned_int_7 + unsigned_int_6;
	unsigned_int_8 = unsigned_int_8 + unsigned_int_2;
	unsigned_int_10 = unsigned_int_11 * unsigned_int_10;
	float_4 = float_1 * float_4;
	double_1 = double_5;
	if(1)
	{
		int_8 = int_7 * int_7;
	}
	return unsigned_int_12;
}
double v__block_media_activate( double parameter_1,short parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	int_1 = int_1 + int_2;
	double_2 = double_1 * double_1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_3 * int_3;
	char controller4vul_420[3];
	fgets(controller4vul_420 ,3 ,stdin);
	if( strcmp( controller4vul_420, ":+") < 0)
	{
		unsigned_int_1 = v_media_add(double_3,char_1,char_1,int_2,char_2,uni_para);

		long_1 = long_1 * long_2;
	}
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_1 = int_2 * int_4;
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		short_1 = short_1 + short_3;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_6 = int_2 * int_5;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	}
	unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
	short_4 = short_3 + short_1;
	double_4 = double_3 * double_3;
	long_1 = long_1;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
	short_2 = short_4 + short_1;
	short_1 = short_2 + short_2;
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		unsigned_int_5 = unsigned_int_2;
		float_3 = float_3 + float_4;
	}
	long_3 = long_1 + long_2;
	double_3 = double_2;
	double_4 = double_3 + double_1;
	if(1)
	{
		int int_7 = 1;
		int_7 = int_5 + int_3;
	}
	return double_3;
}
short v__block_edje_message_cb(double parameter_2,float parameter_3,int parameter_4)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	short short_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_7 = 1;
	short short_6 = 1;
	double double_5 = 1;
	long long_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_6 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_9 = 1;
	double_1 = double_1;
	short_2 = short_1 * short_1;
	double_2 = double_2;
	char_1 = char_1 + char_1;
	int_1 = int_1 + int_1;
	short_4 = short_3 * short_2;
	if(1)
	{
	}
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	float_1 = float_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	int_1 = int_1 * int_2;
	long_1 = long_1 * long_1;
	char_1 = char_2;
	int_4 = int_1 * int_3;
	char_4 = char_1 + char_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	double_1 = double_2 * double_2;
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	char_5 = char_3 * char_1;
	float_3 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_5;
	double_3 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_1 * double_4;
		long_2 = long_1 * long_1;
	}
	long_3 = long_2 * long_3;
	short_1 = short_4 + short_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_4 = int_5;
	double_2 = double_2 + double_1;
	double_3 = double_4 + double_4;
	int_5 = int_3 * int_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_4 = 1;
		double_2 = double_2 * double_4;
		double_1 = double_2 + double_1;
		float_4 = float_2 + float_1;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_5 = short_2;
	char_1 = char_4 * char_4;
	long_4 = long_4 * long_2;
	int_4 = int_2 * int_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_2 = unsigned_int_6 * unsigned_int_2;
		unsigned_int_6 = unsigned_int_4;
		v_termpty_write(short_4,long_3,int_4);

		int_6 = int_5 + int_1;
	}
	short_2 = short_3 * short_1;
	char_6 = char_4;
	unsigned_int_7 = unsigned_int_1 * unsigned_int_6;
	char_7 = char_6 + char_3;
	short_3 = short_6;
	double_3 = double_4 + double_2;
	double_3 = double_3 * double_2;
	double_5 = double_1 * double_1;
	float_1 = float_2;
	long_5 = long_2 + long_4;
	double_7 = double_6 + double_5;
	int_7 = int_7 + int_7;
	char_6 = char_4 * char_5;
	unsigned_int_2 = unsigned_int_8 + unsigned_int_5;
	long_6 = long_4;
	int_8 = int_5 * int_7;
	int_7 = int_7 + int_7;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int_8 = int_8 * int_4;
		double_2 = double_3;
		unsigned_int_2 = unsigned_int_3;
	}
	int_1 = int_1 + int_8;
	int_6 = int_1 + int_8;
	int_9 = int_3 * int_5;
	int_9 = int_6 + int_8;
	int_7 = int_5 + int_10;
	float_1 = float_2 + float_2;
	double_2 = double_7 * double_6;
	double_9 = double_3 * double_8;
	double_8 = double_8 * double_4;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		short short_7 = 1;
		int int_11 = 1;
		int_10 = int_1;
		short_7 = short_3 * short_6;
		int_3 = int_11;
	}
	char_5 = char_4 + char_3;
	unsigned_int_9 = unsigned_int_2 + unsigned_int_9;
	long_4 = long_3 * long_4;
	return short_6;
}
void v_termpty_write( short parameter_1,long parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1;
	double_2 = double_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
}
double v__block_edje_signal_cb(char parameter_2,long parameter_3,int parameter_4)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char_1 = char_1 * char_1;
	int_2 = int_1 * int_2;
	short_1 = short_1 + short_1;
	int_2 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_3 = short_2 + short_2;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	float_2 = float_2;
	if(1)
	{
	}
	if(1)
	{
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_4 = 1;
		int_2 = int_3 * int_3;
		char_3 = char_1 * char_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
		short_3 = short_3 * short_2;
		v_termpty_write(short_4,long_1,int_2);

		double_3 = double_1 * double_2;
		double_4 = double_2 + double_1;
		double_4 = double_1 * double_2;
	}
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "W") < 0)
	{
		long long_2 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		long_2 = long_1 + long_1;
		char_3 = char_2 * char_3;
	}
	return double_3;
}
void v_termpty_block_chid_update( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
	}
	double_2 = double_1 * double_2;
}
double v__block_edje_cmds( float parameter_1,unsigned int parameter_2,char parameter_3,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	v_termpty_block_chid_update(unsigned_int_1,short_1);

	short_2 = v__block_edje_message_cb(double_1,float_1,int_1);

	double_1 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
	double_1 = v__block_edje_signal_cb(char_1,long_1,int_1);

}
long v_homedir_get( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		double_1 = double_2;
		if(1)
		{
			long long_1 = 1;
			long_2 = long_1 * long_1;
		}
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	return long_2;
}
double v__block_edje_activate( double parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	long_1 = v_homedir_get(char_1,float_1);

	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		char_2 = char_2;
	}
	if(1)
	{
		char_2 = char_1 + char_3;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 * int_2;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			double_1 = v__block_edje_cmds(float_1,unsigned_int_4,char_3,short_1);

			long_2 = long_2;
			unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
		}
		if(1)
		{
			float_3 = float_1 * float_2;
			char_2 = char_1;
		}
	}
	float_4 = v_config_theme_path_default_get(float_4);

	long_4 = long_3 + long_2;
	unsigned_int_6 = unsigned_int_6;
	unsigned_int_2 = unsigned_int_3;
	double_3 = double_2 + double_3;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	char controller_8[3];
	fgets(controller_8 ,3 ,stdin);
	if( strcmp( controller_8, "*g") < 0)
	{
		float float_5 = 1;
		float_5 = float_2 * float_3;
	}
	return double_3;
}
float v__block_activate( double parameter_1,float parameter_2,int uni_para)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char_1 = char_1;
	int_1 = int_2;
	char controller4vul_419[3];
	fgets(controller4vul_419 ,3 ,stdin);
	if( strcmp( controller4vul_419, "4i") < 0)
	{
		double_1 = v__block_media_activate(double_1,short_1,uni_para);

	}
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	if(1)
	{
		int_3 = int_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_2 * short_2;
	}
	long_1 = long_1 + long_2;
	if(1)
	{
		int_2 = int_1 + int_3;
	}
	return float_1;
}
unsigned int v_termpty_block_get( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	return unsigned_int_1;
}
int v_termpty_block_id_get( double parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	int_2 = int_1 + int_1;
	int_2 = int_2 + int_3;
	return int_4;
}
void v_termpty_backscroll_adjust( short parameter_1,int parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	float_1 = float_1;
	long_2 = long_1 * long_1;
	short_1 = v_verify_beacon(float_2,int_1);

}
float v__smart_apply( int parameter_1,int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	long long_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_6 = 1;
	int int_7 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_7 = 1;
	double double_9 = 1;
	int int_8 = 1;
	short short_3 = 1;
	double double_10 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_6 = 1;
	float float_7 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_11 = 1;
	double double_12 = 1;
	short short_6 = 1;
	short short_7 = 1;
	long long_8 = 1;
	long long_9 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	int int_10 = 1;
	int int_11 = 1;
	float float_8 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_12 = 1;
	unsigned int unsigned_int_13 = 1;
	unsigned int unsigned_int_14 = 1;
	int int_12 = 1;
	int_1 = int_1 + int_1;
	short_1 = short_1;
	int_2 = int_2 * int_2;
	long_2 = long_1 * long_1;
	float_2 = float_1 + float_1;
	int_2 = int_1 * int_3;
	double_1 = double_1;
	double_2 = double_3;
	unsigned_int_1 = unsigned_int_1;
	int_4 = int_4;
	double_4 = double_2;
	double_2 = double_5 * double_3;
	double_2 = double_3 * double_2;
	int_3 = int_1 + int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_2;
		double_6 = double_5;
		float_1 = float_1 + float_3;
		int_3 = int_1;
		if(1)
		{
			long_1 = long_3 + long_4;
		}
		float_2 = float_3 + float_3;
		if(1)
		{
			double_4 = double_4 * double_5;
		}
		double_6 = double_1 + double_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						int_2 = int_1 + int_5;
					}
					long_1 = long_2;
				}
				char_3 = char_1 * char_2;
				if(1)
				{
					unsigned_int_2 = unsigned_int_2;
				}
				if(1)
				{
					double_1 = double_3 * double_4;
				}
				long_4 = long_4;
				unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
				int_6 = int_6;
				double_4 = double_6 + double_3;
				long_5 = long_5 * long_5;
				double_7 = double_8;
			}
			char controller4vul_415[2];
			fgets(controller4vul_415 ,2 ,stdin);
			if( strcmp( controller4vul_415, "J") > 0)
			{
				unsigned int unsigned_int_6 = 1;
				float_4 = float_4 + float_3;
				float_3 = float_2;
				if(1)
				{
					if(1)
					{
						char_1 = char_4 * char_5;
					}
					long_4 = long_1 * long_5;
					int_3 = int_2;
					long_2 = long_1 * long_6;
					char_5 = char_1;
					unsigned_int_1 = unsigned_int_4;
					int_6 = int_4 + int_4;
					char_4 = char_3 * char_1;
					long_6 = long_6 + long_4;
					unsigned_int_1 = unsigned_int_2;
					float_3 = float_1 + float_3;
					int_7 = int_2 * int_6;
					short_2 = short_1 * short_1;
					if(1)
					{
						double_4 = double_3 + double_6;
						short_2 = short_1;
						unsigned_int_5 = unsigned_int_6;
						long_3 = long_7 + long_4;
						unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
					}
				}
				char controller4vul_416[2];
				fgets(controller4vul_416 ,2 ,stdin);
				if( strcmp( controller4vul_416, "Z") < 0)
				{
					char controller4vul_417[2];
					fgets(controller4vul_417 ,2 ,stdin);
					if( strcmp( controller4vul_417, "X") < 0)
					{
						char controller4vul_418[3];
						fgets(controller4vul_418 ,3 ,stdin);
						if( strcmp( controller4vul_418, ")A") < 0)
						{
							float_3 = v__block_activate(double_9,float_2,uni_para);

							short_2 = short_2 * short_1;
						}
						int_8 = int_7 * int_3;
					}
					int_3 = int_1 * int_7;
					if(1)
					{
						short_3 = short_3 * short_1;
					}
					if(1)
					{
						double_6 = double_10 + double_4;
					}
					char_3 = char_4 + char_1;
					long_2 = long_2 * long_2;
					unsigned_int_6 = unsigned_int_6 * unsigned_int_1;
					float_5 = float_1 + float_2;
					unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
					float_4 = float_5 + float_5;
					if(1)
					{
						char_1 = char_1 + char_1;
					}
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_7 + unsigned_int_8;
					double_3 = double_2 * double_10;
					unsigned_int_7 = unsigned_int_4 * unsigned_int_2;
					float_1 = float_5 + float_2;
					int_8 = int_4 + int_4;
					short_3 = short_2 * short_3;
					if(1)
					{
						int_9 = int_1 + int_5;
						unsigned_int_6 = unsigned_int_9 * unsigned_int_6;
					}
					if(1)
					{
						float_4 = float_1 + float_4;
						char_5 = char_2 + char_4;
					}
					if(1)
					{
						long_6 = long_5 + long_2;
					}
					if(1)
					{
						if(1)
						{
							float_4 = float_3 * float_3;
						}
						if(1)
						{
							double_10 = double_3 + double_2;
						}
					}
					if(1)
					{
						char_5 = char_2 + char_5;
					}
					if(1)
					{
						float_7 = float_1 * float_6;
					}
					if(1)
					{
						short_3 = short_4 + short_5;
						double_3 = double_11 * double_9;
						unsigned_int_6 = unsigned_int_4 * unsigned_int_4;
						double_6 = double_8 * double_8;
						int_6 = int_7 + int_8;
						long_5 = long_4 * long_7;
						long_3 = long_2 * long_5;
					}
					if(1)
					{
						long_7 = long_4 * long_2;
					}
					if(1)
					{
						unsigned_int_7 = unsigned_int_2 + unsigned_int_8;
					}
					if(1)
					{
						if(1)
						{
							long_4 = long_1 * long_4;
						}
						int_2 = int_9 * int_5;
					}
					unsigned_int_3 = unsigned_int_9;
					float_4 = float_7;
					double_12 = double_5 + double_10;
					int_2 = int_2 * int_1;
					if(1)
					{
						double_2 = double_1 + double_9;
						short_1 = short_4 * short_6;
					}
					if(1)
					{
						double_3 = double_1 + double_11;
						float_5 = float_3 * float_7;
					}
					unsigned_int_9 = unsigned_int_7 + unsigned_int_9;
					unsigned_int_2 = unsigned_int_7 * unsigned_int_8;
					long_5 = long_7 + long_6;
					short_1 = short_5;
					if(1)
					{
						double_7 = double_10;
					}
				}
			}
		}
		int_5 = int_9 * int_9;
		if(1)
		{
			short_7 = short_4 + short_5;
		}
	}
	long_9 = long_8 + long_7;
	if(1)
	{
		long_9 = long_8 + long_5;
		unsigned_int_10 = unsigned_int_8;
		long_5 = long_7;
		char_4 = char_4 * char_3;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_11;
		float_6 = float_1 * float_7;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double double_13 = 1;
				long long_10 = 1;
				double_9 = double_9 * double_3;
				int_10 = int_6;
				double_7 = double_3;
				if(1)
				{
					double_13 = double_7 + double_11;
				}
				int_1 = int_10 * int_6;
				if(1)
				{
					if(1)
					{
						short_6 = short_2 + short_4;
						short_4 = short_1 * short_1;
						long_1 = long_3;
					}
				}
				if(1)
				{
					long_9 = long_3 + long_7;
					int_3 = int_7;
				}
				double_1 = double_6 + double_4;
				short_4 = short_7 + short_7;
				long_1 = long_3;
				short_5 = short_4;
				short_5 = short_1;
				char_5 = char_5 * char_5;
				long_6 = long_10 * long_8;
				int_11 = int_7 + int_4;
				unsigned_int_4 = unsigned_int_10 + unsigned_int_5;
				float_8 = float_3 + float_7;
				unsigned_int_2 = unsigned_int_9 + unsigned_int_10;
				if(1)
				{
					char char_7 = 1;
					double_1 = double_3 * double_9;
					long_8 = long_4 + long_6;
					unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
					int_5 = int_11 + int_8;
					int_7 = int_9 + int_3;
					char_7 = char_5 + char_6;
					unsigned_int_1 = unsigned_int_12;
					char_7 = char_2 * char_4;
					long_10 = long_9 + long_3;
					double_13 = double_11 * double_6;
				}
				long_3 = long_4;
				if(1)
				{
					if(1)
					{
						float float_9 = 1;
						float_9 = float_1 + float_3;
						long_2 = long_5;
					}
				}
			}
			int_11 = int_10 + int_2;
		}
		unsigned_int_13 = unsigned_int_13 * unsigned_int_14;
		unsigned_int_3 = unsigned_int_11 * unsigned_int_3;
	}
	short_5 = short_6 + short_7;
	if(1)
	{
		int_11 = int_3 * int_3;
		int_12 = int_1;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_7;
	}
	if(1)
	{
		int_1 = int_8 + int_9;
	}
	if(1)
	{
		float_6 = float_5 * float_2;
	}
	unsigned_int_4 = unsigned_int_12 + unsigned_int_8;
	int_10 = int_12 * int_11;
	char_5 = char_1;
	if(1)
	{
		int int_13 = 1;
		char char_8 = 1;
		char char_9 = 1;
		float_1 = float_6;
		double_1 = double_6;
		double_6 = double_10 * double_12;
		double_1 = double_7;
		unsigned_int_9 = unsigned_int_4 + unsigned_int_7;
		short_3 = short_3;
		if(1)
		{
			int_5 = int_8 + int_9;
			int_7 = int_4;
		}
		short_5 = short_3 + short_4;
		float_8 = float_8 + float_4;
		int_13 = int_7;
		unsigned_int_13 = unsigned_int_7;
		double_9 = double_5;
		int_2 = int_13 + int_7;
		short_1 = short_6;
		unsigned_int_2 = unsigned_int_14 * unsigned_int_8;
		if(1)
		{
			char_3 = char_4 + char_6;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_14 = unsigned_int_13 * unsigned_int_12;
			}
			if(1)
			{
				double_8 = double_2 * double_6;
			}
			if(1)
			{
				double_7 = double_1;
			}
			if(1)
			{
				unsigned_int_14 = unsigned_int_7 + unsigned_int_14;
			}
			if(1)
			{
				double_5 = double_11;
			}
		}
		char_9 = char_8 * char_4;
	}
	if(1)
	{
		int_6 = int_4;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_10 + unsigned_int_2;
	}
	unsigned_int_7 = unsigned_int_11 * unsigned_int_12;
	return float_7;
}
short v__smart_cb_change(int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float_1 = v__smart_apply(int_1,uni_para);

	int_4 = int_2 * int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 * long_2;
	int_3 = int_4;
	long_2 = long_2;
	char_2 = char_1 * char_2;
	return short_1;
}
void v__smart_update_queue( long parameter_1,float parameter_2,int uni_para)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char controller4vul_414[3];
	fgets(controller4vul_414 ,3 ,stdin);
	if( strcmp( controller4vul_414, "Ud") > 0)
	{
		short_1 = v__smart_cb_change(uni_para);

	}
	float_2 = float_1 + float_2;
}
float v__lost_selection_reset_job()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_2;
	float_1 = v__lost_selection(int_1,-1 );

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
		float_1 = float_1 * float_1;
	}
	return float_2;
}
float v__lost_selection(int parameter_2,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 * int_1;
	float_2 = float_1 + float_2;
	long_3 = long_1 + long_2;
	long_1 = long_4 * long_3;
	if(1)
	{
		int_2 = int_2 + int_2;
	}
	char controller4vul_411[3];
	fgets(controller4vul_411 ,3 ,stdin);
	if( strcmp( controller4vul_411, "RQ") < 0)
	{
		double double_3 = 1;
		char controller4vul_412[2];
		fgets(controller4vul_412 ,2 ,stdin);
		if( strcmp( controller4vul_412, "x") > 0)
		{
			int_4 = int_3 + int_1;
			char controller4vul_413[3];
			fgets(controller4vul_413 ,3 ,stdin);
			if( strcmp( controller4vul_413, "(#") > 0)
			{
				v__smart_update_queue(long_1,float_2,uni_para);

				int_3 = int_1 * int_4;
			}
			double_1 = double_1;
		}
		double_3 = double_2 * double_1;
	}
	if(1)
	{
		double double_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1;
			double_2 = double_4 * double_4;
		}
		int_5 = int_4 * int_1;
		int_2 = int_4 * int_2;
		double_4 = double_2 * double_1;
		int_6 = int_2 * int_3;
	}
	return float_1;
}
unsigned int v__take_selection_text( long parameter_1,float parameter_2,char parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double_1 = double_2;
	short_1 = short_1 * short_1;
	short_3 = short_2 * short_2;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	short_4 = short_4;
	double_1 = double_3 + double_1;
	char controller4vul_410[2];
	fgets(controller4vul_410 ,2 ,stdin);
	if( strcmp( controller4vul_410, "n") < 0)
	{
		double double_4 = 1;
		float_1 = v__lost_selection(int_1,uni_para);

		double_2 = double_4 + double_4;
	}
	int_1 = int_1 + int_1;
	return unsigned_int_5;
}
float v__cb_ctxp_link_content_copy(long parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = v__take_selection_text(long_1,float_1,char_1,uni_para);

	char_2 = char_1 * char_2;
	int_2 = int_1 + int_2;
	double_1 = double_1 * double_2;
	int_3 = int_3 * int_4;
	int_4 = int_4 + int_3;
	char_3 = char_3 + char_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	long_2 = long_1 + long_2;
	short_1 = short_1 + short_1;
	return float_1;
}
void v_ty_sb_free( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1;
}
char v_ty_sb_steal_buf()
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_1;
	float_1 = float_1 * float_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_2 = double_2 + double_2;
		}
		int_1 = int_1 + int_1;
	}
	double_3 = double_1 + double_2;
	double_5 = double_4 * double_4;
	int_2 = int_1 + int_2;
	double_3 = double_1 * double_1;
	short_1 = short_1 + short_2;
	return char_1;
}
int v_codepoint_to_utf8( double parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	char char_3 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	short short_3 = 1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		int int_2 = 1;
		double_2 = double_1 + double_1;
		int_1 = int_1 + int_2;
		double_1 = double_2 * double_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
		short_1 = short_1 + short_1;
		double_1 = double_2 * double_3;
	}
	if(1)
	{
		long long_2 = 1;
		char_1 = char_1 * char_2;
		short_2 = short_2 * short_2;
		double_4 = double_4 + double_1;
		long_2 = long_1 + long_2;
		char_3 = char_3 * char_1;
	}
	if(1)
	{
		double double_5 = 1;
		long long_3 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
		double_4 = double_1 * double_5;
		long_3 = long_1 + long_3;
		int_3 = int_1 + int_3;
		float_1 = float_1 + float_2;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		double double_6 = 1;
		int_4 = int_3 + int_1;
		char_2 = char_2 * char_3;
		double_3 = double_6;
		float_2 = float_2 * float_1;
		short_3 = short_1;
		char_1 = char_3 + char_1;
		short_1 = short_2 * short_2;
	}
	if(1)
	{
		short_3 = short_2 * short_2;
	}
	return int_4;
}
void v_ty_sb_spaces_rtrim( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	double_2 = double_1 * double_1;
	int_2 = int_1 * int_1;
	long_3 = long_1 + long_2;
	int_3 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		long long_4 = 1;
		short_1 = short_1;
		int_3 = int_2 + int_1;
		double_1 = double_2 + double_1;
		long_4 = long_1 * long_3;
	}
}
int v_ty_sb_add( long parameter_1,char parameter_2,char parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_1 = char_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		double_2 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_2;
		long_3 = long_1 * long_2;
		if(1)
		{
		}
		long_2 = long_2 + long_3;
		double_2 = double_3;
	}
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_2;
	return int_1;
}
double v__termpty_cellrow_from_beacon_get( int parameter_1,int parameter_2,long parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short_1 = short_1 * short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "l") > 0)
	{
	}
	short_2 = v_verify_beacon(float_1,int_1);

	short_1 = short_3 + short_4;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_3;
	double_4 = double_3 * double_2;
	if(1)
	{
		float_2 = float_1 * float_1;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		int_2 = int_2 * int_2;
	}
	int_3 = int_1 + int_2;
	double_5 = double_1 * double_3;
	int_5 = int_4 + int_4;
	int_3 = int_1 * int_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_5 = 1;
		long long_3 = 1;
		long long_4 = 1;
		char_2 = char_1 + char_1;
		double_4 = double_4 + double_1;
		short_1 = short_1 * short_2;
		long_1 = long_2;
		short_5 = short_4 + short_1;
		long_2 = long_2 + long_3;
		long_4 = long_4 + long_1;
	}
	double_2 = double_2 * double_3;
	return double_4;
}
long v_termpty_cellrow_get( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
		}
		double_1 = v__termpty_cellrow_from_beacon_get(int_1,int_1,long_1);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
	}
	return long_1;
}
int v_termio_selection_get( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	char char_2 = 1;
	v_termpty_backlog_unlock();

	char_1 = v_ty_sb_steal_buf();

	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			int_3 = int_2 * int_3;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			double double_1 = 1;
			int_2 = v_ty_sb_add(long_1,char_1,char_1);

			double_1 = double_1 * double_1;
		}
		if(1)
		{
			v_termpty_backlog_lock();

			unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						long long_2 = 1;
						long_3 = long_1 + long_2;
					}
					if(1)
					{
						int_3 = int_3 * int_2;
					}
				}
				if(1)
				{
					int_2 = int_1 + int_3;
				}
			}
		}
		if(1)
		{
			int int_7 = 1;
			v_ty_sb_spaces_rtrim(unsigned_int_3);

			v_ty_sb_free(float_1);

			int_2 = int_4 + int_4;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					int int_5 = 1;
					int_5 = int_4;
				}
				if(1)
				{
					unsigned int unsigned_int_5 = 1;
					long_3 = v_termpty_cellrow_get(unsigned_int_2,int_3,int_2);

					int_4 = v_codepoint_to_utf8(double_2,char_2);

					unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
				}
				if(1)
				{
					int int_6 = 1;
					int_2 = int_6 + int_7;
				}
				if(1)
				{
					unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
				}
				if(1)
				{
					char char_3 = 1;
					char_1 = char_3 * char_1;
				}
			}
			int_4 = int_3 * int_7;
		}
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 * short_1;
		}
	}
	return int_2;
}
long v__cb_ctxp_link_open(float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	long long_1 = 1;
	short_1 = short_1 + short_1;
	short_2 = v__activate_link(float_1,char_1);

	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_3 + double_4;
	short_3 = short_1 + short_1;
	float_1 = float_1 + float_1;
	return long_1;
}
unsigned int v__should_inline( short parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_1;
	double_1 = double_1 + double_1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	short_1 = v_termio_config_get(int_2);

	long_2 = long_1 + long_1;
	if(1)
	{
	}
	return unsigned_int_1;
}
void v_link_is_email( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
	}
}
short v_link_is_protocol( float parameter_1)
{
	short short_1 = 1;
	return short_1;
}
char v_link_is_url( long parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	return char_1;
	short_1 = v_link_is_protocol(float_1);

}
short v__activate_link( float parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_2 = 1;
	float_3 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_4 = float_1 * float_4;
	double_2 = double_1 + double_1;
	char_2 = char_1 + char_1;
	double_2 = double_1 * double_1;
	double_1 = double_1 * double_3;
	char_3 = v_link_is_url(long_1);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
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
			int_1 = int_1;
		}
		if(1)
		{
			double_5 = double_3 + double_4;
		}
	}
	if(1)
	{
		char char_4 = 1;
		char_2 = char_4 + char_3;
	}
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		char char_5 = 1;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		char_6 = char_5 + char_6;
	}
	double_1 = double_2 * double_4;
	if(1)
	{
	}
	if(1)
	{
		int int_6 = 1;
		int_2 = int_4;
		double_2 = double_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		}
		if(1)
		{
			v_link_is_email(double_2);

			int_5 = int_2 * int_3;
		}
		int_6 = int_5 * int_5;
		if(1)
		{
			short short_1 = 1;
			int_5 = int_5 * int_6;
			short_2 = short_1 + short_1;
		}
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_2 * short_2;
		char_1 = v_media_src_type_get(unsigned_int_4);

		int_5 = int_1 * int_4;
		if(1)
		{
			char char_7 = 1;
			unsigned_int_6 = v__should_inline(short_4);

			int_5 = int_3 + int_5;
			if(1)
			{
				if(1)
				{
					int_1 = int_5 * int_4;
					char_7 = char_3 + char_6;
				}
				if(1)
				{
					char char_8 = 1;
					double_1 = double_4 + double_2;
					char_6 = char_3 * char_8;
				}
			}
			char controller_20[3];
			fgets(controller_20 ,3 ,stdin);
			if( strcmp( controller_20, "qD") > 0)
			{
				if(1)
				{
					if(1)
					{
						double_6 = double_5 * double_6;
					}
				}
				if(1)
				{
					if(1)
					{
						double_2 = double_4 + double_1;
					}
				}
				if(1)
				{
					if(1)
					{
						double_1 = double_1 + double_4;
					}
				}
				unsigned_int_1 = unsigned_int_7 * unsigned_int_3;
				char_6 = char_7 * char_7;
			}
		}
	}
	if(1)
	{
		float_3 = float_2 + float_2;
		unsigned_int_6 = unsigned_int_7 * unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned int unsigned_int_9 = 1;
			unsigned_int_1 = unsigned_int_8 + unsigned_int_9;
			if(1)
			{
				double double_7 = 1;
				double_7 = double_6 * double_4;
				long_1 = long_1 * long_1;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						float float_5 = 1;
						float_5 = float_2 * float_5;
					}
				}
				if(1)
				{
					if(1)
					{
						long_2 = long_1 + long_2;
					}
				}
				if(1)
				{
					if(1)
					{
						long long_3 = 1;
						long_3 = long_2 * long_2;
					}
				}
				double_2 = double_6;
				unsigned_int_4 = unsigned_int_9 + unsigned_int_1;
			}
		}
	}
	if(1)
	{
		long long_4 = 1;
		long_1 = long_2 * long_4;
	}
	char_1 = char_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_4;
	}
	return short_4;
}
char v__cb_ctxp_link_preview(double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	int_3 = int_1 * int_2;
	double_3 = double_2 + double_2;
	float_2 = float_1 * float_1;
	return char_1;
	short_1 = v__activate_link(float_3,char_2);

}
void v__is_fmt( long parameter_1,char parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1 + float_2;
		}
		if(1)
		{
		}
	}
}
char v_media_src_type_get( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_3 * short_3;
	}
	if(1)
	{
		double double_1 = 1;
		v__is_fmt(long_1,char_1);

		double_1 = double_1 + double_1;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "h") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		short_1 = short_2;
	}
	return char_1;
}
unsigned int v__mouse_in_selection( int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	double_3 = double_1 * double_2;
	long_2 = long_1 + long_2;
	char_2 = char_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		double_5 = double_2 * double_4;
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
	return unsigned_int_3;
}
int v__smart_xy_to_cursor( double parameter_1,short parameter_2,float parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_5 = 1;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	char_1 = char_1 * char_2;
	int_3 = int_1 + int_3;
	if(1)
	{
		int_1 = int_3 + int_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_4;
	}
	if(1)
	{
		int int_4 = 1;
		int_5 = int_4 + int_1;
	}
	return int_5;
}
int v__cb_link_down(short parameter_2,long parameter_3,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float_2 = float_1 * float_2;
	char_2 = char_1 * char_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		float_1 = float_1;
	}
	char controller4vul_407[2];
	fgets(controller4vul_407 ,2 ,stdin);
	if( strcmp( controller4vul_407, "N") > 0)
	{
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_3 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double_2 = double_1;
		short_1 = short_1 + short_2;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
		char controller4vul_408[2];
		fgets(controller4vul_408 ,2 ,stdin);
		if( strcmp( controller4vul_408, "#") < 0)
		{
			char char_3 = 1;
			unsigned_int_2 = unsigned_int_3;
			char_3 = char_2 + char_2;
			char controller4vul_409[2];
			fgets(controller4vul_409 ,2 ,stdin);
			if( strcmp( controller4vul_409, "x") > 0)
			{
				float_2 = v__cb_ctxp_link_content_copy(long_1,uni_para);

			}
		}
		short_2 = short_3;
		double_3 = double_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
			if(1)
			{
				char char_4 = 1;
				char_4 = char_4 * char_2;
			}
		}
		int_3 = int_1 * int_2;
		long_1 = long_1;
		if(1)
		{
			short_1 = short_2 + short_3;
		}
		if(1)
		{
			int int_4 = 1;
			int_4 = int_1 * int_3;
			double_2 = double_2 * double_3;
		}
		if(1)
		{
			int_3 = int_2 + int_3;
		}
		double_2 = double_3 + double_1;
		int_3 = int_2 * int_1;
		short_4 = short_4;
		float_3 = float_3 + float_4;
		int_1 = int_1 + int_1;
	}
	return int_3;
}
void v_main_term_popup_exists( short parameter_1)
{
}
long v__update_link( long parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	long long_2 = 1;
	int_1 = int_1 * int_2;
	long_1 = long_1 * long_1;
	double_1 = double_1 * double_1;
	double_3 = double_2 + double_3;
	double_3 = double_2 * double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	int_3 = int_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		double_2 = double_4 * double_4;
	}
	if(1)
	{
	}
	double_5 = double_4 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		float float_1 = 1;
		char char_3 = 1;
		float float_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		int_2 = int_2 * int_1;
		int_3 = int_1;
		char_2 = char_1 + char_1;
		char controller4vul_405[2];
		fgets(controller4vul_405 ,2 ,stdin);
		if( strcmp( controller4vul_405, "[") < 0)
		{
			double_7 = double_4 * double_6;
			char controller4vul_406[2];
			fgets(controller4vul_406 ,2 ,stdin);
			if( strcmp( controller4vul_406, "s") < 0)
			{
				float float_2 = 1;
				int_2 = v__cb_link_down(short_3,long_1,uni_para);

				float_1 = float_1 * float_2;
			}
			if(1)
			{
				long_2 = long_2;
			}
		}
		if(1)
		{
			double double_8 = 1;
			double_8 = double_7 * double_3;
			int_3 = int_1 + int_1;
		}
		if(1)
		{
			int int_4 = 1;
			int_4 = int_1 * int_2;
			char_1 = char_2 + char_2;
		}
		char_2 = char_1;
		char_1 = char_3;
		double_6 = double_6 + double_5;
		float_1 = float_1 * float_3;
		short_2 = short_4 * short_4;
		short_3 = short_3 + short_5;
		if(1)
		{
			float_1 = float_1 + float_3;
		}
	}
	return long_2;
}
long v__remove_links( long parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_2 = 1;
	double_3 = double_1 * double_2;
	char controller4vul_404[2];
	fgets(controller4vul_404 ,2 ,stdin);
	if( strcmp( controller4vul_404, "l") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		long_1 = v__update_link(long_2,unsigned_int_1,int_1,double_2,uni_para);

		float_2 = float_1 * float_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	short_2 = short_1 + short_2;
	char_2 = char_1 + char_1;
	long_3 = long_1 * long_3;
	char_5 = char_3 + char_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_2 + int_2;
	return long_1;
}
char v__sel_set( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "@") > 0)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		float float_1 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		float_1 = float_1 * float_1;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	}
	return char_1;
}
int v_termio_scroll_get( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	return int_1;
}
void v_miniview_position_offset( float parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float_3 = float_1 * float_2;
	float_2 = float_2 * float_4;
	float_5 = float_1 * float_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		long long_1 = 1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		long_1 = long_1 * long_1;
		if(1)
		{
			char char_1 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_2 = 1;
			char_1 = char_1 + char_1;
			unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
			short_1 = short_2 + short_1;
		}
		if(1)
		{
			double double_1 = 1;
			float_3 = float_4 + float_1;
			double_2 = double_1 * double_2;
			int_1 = v_termio_scroll_get(unsigned_int_2);

			double_4 = double_1 * double_3;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_5 = 1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
			double_4 = double_4 * double_5;
			if(1)
			{
				double double_6 = 1;
				double_6 = double_3;
			}
			if(1)
			{
				double_3 = double_2;
			}
		}
	}
}
int v_term_miniview_get( short parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	return int_1;
}
void v_termio_scroll( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_2 = 1;
	int_1 = int_2;
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		long_1 = long_1 + long_2;
	}
	float_2 = float_1 * float_2;
	char controller4vul_401[2];
	fgets(controller4vul_401 ,2 ,stdin);
	if( strcmp( controller4vul_401, "q") < 0)
	{
		int int_3 = 1;
		int int_4 = 1;
		long long_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		int_4 = int_3 + int_1;
		long_2 = long_2 + long_3;
		double_4 = double_2 * double_3;
		if(1)
		{
			char_1 = char_1;
		}
		char controller4vul_402[2];
		fgets(controller4vul_402 ,2 ,stdin);
		if( strcmp( controller4vul_402, ")") < 0)
		{
			int int_5 = 1;
			short_2 = short_1 * short_1;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
			double_3 = double_4;
			int_5 = int_3 * int_2;
			double_4 = double_5;
			char controller4vul_403[3];
			fgets(controller4vul_403 ,3 ,stdin);
			if( strcmp( controller4vul_403, "cC") < 0)
			{
				long_4 = v__remove_links(long_5,char_2,uni_para);

				char_1 = char_2 + char_2;
			}
		}
		if(1)
		{
			short short_3 = 1;
			short_1 = short_2 + short_3;
		}
		if(1)
		{
			double double_6 = 1;
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			double_1 = double_6 * double_5;
			char_3 = char_3 + char_3;
			char_5 = char_4 * char_1;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
		}
	}
}
void v_termpty_save_new( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = long_1;
	v_termpty_save_free(char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	short_2 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
}
double v_termpty_save_expand( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double_2 = double_1 + double_2;
	double_3 = double_1 * double_1;
	if(1)
	{
	}
	double_2 = double_1 + double_3;
	int_3 = int_1 + int_2;
	char_2 = char_1 * char_2;
	return double_4;
}
double v__termpty_cell_is_empty( char parameter_1)
{
	double double_1 = 1;
	if(1)
	{
	}
	return double_1;
}
float v_termpty_line_length( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = v__termpty_cell_is_empty(char_1);

	float_1 = float_1 * float_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
		if(1)
		{
		}
	}
	return float_1;
}
short v_verify_beacon( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	return short_1;
}
void v_termpty_text_save_top( char parameter_1,unsigned int parameter_2,short parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_2;
	if(1)
	{
	}
	long_1 = long_1 * long_2;
	char_2 = char_1 * char_1;
	float_1 = float_1 + float_1;
	float_1 = v_termpty_line_length(char_3,char_1);

	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		short_1 = v_verify_beacon(float_2,int_2);

		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		float_3 = float_2;
		if(1)
		{
			v_termpty_backlog_unlock();

			unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
			v_termpty_backlog_lock();

			double_1 = double_1 * double_2;
			int_1 = int_3 * int_2;
			unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
		}
	}
	double_2 = v_termpty_save_expand(long_2,unsigned_int_1,int_1);

	short_2 = short_1 + short_1;
	int_4 = int_3;
	if(1)
	{
	}
	double_4 = double_1 * double_3;
	float_1 = float_3 + float_2;
	if(1)
	{
		v_termpty_save_new(short_3,int_3);

		float_2 = float_3;
	}
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	char_1 = char_3 * char_3;
	if(1)
	{
		char char_4 = 1;
		double double_5 = 1;
		char_4 = char_2 * char_4;
		double_5 = double_3 * double_2;
	}
	double_3 = double_4 * double_1;
}
void v_termpty_text_scroll( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_3 = 1;
	short_1 = short_1 + short_2;
	v_termpty_text_save_top(char_1,unsigned_int_1,short_2);

	short_2 = short_2 * short_1;
	double_2 = double_1 * double_2;
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	unsigned_int_2 = unsigned_int_2;
	long_3 = long_2 * long_2;
	if(1)
	{
		long long_4 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			char_2 = char_1 * char_1;
		}
		v_termio_scroll(double_3,int_1,int_3,int_2,-1 );

		v_termpty_cells_clear(long_1,float_1,int_2);

		long_4 = long_3 + long_4;
		if(1)
		{
			char_3 = char_3 + char_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double_1 = double_2 * double_3;
		char_1 = char_3 * char_2;
		if(1)
		{
			short_1 = short_2 * short_2;
		}
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_6 = 1;
			double_5 = double_3 + double_4;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
			double_6 = double_5 + double_4;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_2 = unsigned_int_5;
		}
	}
}
void v_termpty_text_scroll_test( short parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	int_1 = int_2;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_1 * int_3;
		if(1)
		{
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			short_1 = short_1 + short_1;
			v_termpty_text_scroll(float_1,char_1);

			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			double_3 = double_1 + double_2;
		}
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		float float_2 = 1;
		short_2 = short_2 + short_3;
		float_2 = float_1 * float_1;
		double_3 = double_1;
	}
}
short v__cursor_to_start_of_line()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	char_3 = char_1 * char_2;
	return short_1;
}
unsigned int v__tab_forward( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
int v__handle_cursor_control( float parameter_1,short parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
	}
	short_1 = v__cursor_to_start_of_line();

	int_2 = int_1 * int_2;
	v_termpty_text_scroll_test(short_1,double_1);

	long_1 = long_1;
	double_1 = double_2 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = v__tab_forward(int_3,int_3);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	char_2 = char_1 * char_1;
	double_3 = double_2 * double_3;
	char_3 = char_1 + char_2;
	if(1)
	{
		double_2 = double_2 + double_2;
	}
	double_4 = double_2;
	int_6 = int_4 + int_5;
	short_1 = short_1 + short_2;
	if(1)
	{
		int int_7 = 1;
		double double_5 = 1;
		int_5 = int_7 * int_5;
		int_2 = int_2 + int_3;
		double_3 = double_5 * double_5;
	}
	short_4 = short_3 + short_2;
	return int_5;
}
int v_termpty_handle_seq( long parameter_1,int parameter_2,char parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_2;
	char controller4vul_396[3];
	fgets(controller4vul_396 ,3 ,stdin);
	if( strcmp( controller4vul_396, "=)") < 0)
	{
		long long_1 = 1;
		unsigned_int_1 = v__handle_esc(int_1,unsigned_int_1,double_1,uni_para);

		long_1 = long_1;
	}
	if(1)
	{
		double_2 = double_2 * double_2;
	}
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	return int_2;
}
void v_termpty_handle_buf( unsigned int parameter_1,float parameter_2,int parameter_3,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_5 = 1;
	double double_3 = 1;
	char_2 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_4;
	double_2 = double_1 + double_1;
	char controller4vul_395[3];
	fgets(controller4vul_395 ,3 ,stdin);
	if( strcmp( controller4vul_395, "Z<") > 0)
	{
		int int_3 = 1;
		int_1 = v_termpty_handle_seq(long_1,int_2,char_5,uni_para);

		int_3 = int_1;
	}
	if(1)
	{
		double_3 = double_3 + double_3;
	}
	if(1)
	{
		double_3 = double_3 + double_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	unsigned_int_2 = unsigned_int_2;
}
void v_theme_reload( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_3 = double_1 * double_2;
	char_2 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
}
long v_theme_reload_cb(short parameter_2,char parameter_3,float parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	char_2 = char_1 + char_1;
	v_theme_reload(unsigned_int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_1;
	float_1 = float_1 * float_1;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	}
	return long_2;
}
void v_theme_auto_reload_enable( int parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short_1 = short_1 * short_1;
	long_1 = v_theme_reload_cb(short_1,char_1,float_1);

}
unsigned int v__cursor_shape_to_group_name( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
float v_config_theme_path_default_get( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	char_1 = char_2;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	return float_1;
}
unsigned int v_theme_path_get()
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
float v_config_theme_path_get( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = v_theme_path_get();

	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	return float_1;
}
float v_theme_apply( float parameter_1,float parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float_1 = float_1;
	int_2 = int_1 * int_2;
	double_1 = double_1 + double_1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	int_2 = int_2 * int_1;
	float_1 = v_config_theme_path_default_get(float_2);

	float_2 = float_3 * float_3;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	float_3 = v_config_theme_path_get(float_1);

	int_4 = int_3 * int_4;
	return float_1;
}
void v_termio_set_cursor_shape( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float_1 = v_theme_apply(float_1,float_1,unsigned_int_1);

	unsigned_int_2 = unsigned_int_3;
	long_1 = long_1 + long_1;
	char_1 = char_1 * char_1;
	v_theme_auto_reload_enable(int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	int_2 = int_2 + int_1;
	unsigned_int_2 = unsigned_int_1;
	short_1 = short_1 * short_2;
	float_2 = float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 * int_2;
		if(1)
		{
			unsigned_int_2 = v__cursor_shape_to_group_name(int_2);

			int_1 = int_2 * int_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		}
	}
}
void v_termpty_clear_tabs_on_screen( long parameter_1)
{
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	if(1)
	{
	}
	char_3 = char_1 * char_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		int_2 = int_1 + int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_3 = 1;
			v_termpty_backlog_lock();

			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		long_2 = long_1 * long_1;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "j") < 0)
	{
		unsigned int unsigned_int_4 = 1;
		v_termpty_backlog_unlock();

		unsigned_int_4 = unsigned_int_5;
	}
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "a") == 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	short_1 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
	long_2 = long_3 + long_3;
	v_termpty_save_free(char_2);

}
int v__ts_free()
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	return int_1;
}
void v_termpty_save_free( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "s") > 0)
	{
		int int_3 = 1;
		if(1)
		{
			short short_1 = 1;
			int_1 = v__ts_free();

			short_1 = short_1;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_2;
		}
		int_3 = int_1 + int_2;
	}
	short_3 = short_2 * short_2;
	int_1 = int_2 + int_4;
	double_2 = double_1 * double_2;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_5 = 1;
	double_3 = double_1 + double_2;
	long_3 = long_1 + long_2;
	float_2 = float_1 * float_2;
	float_2 = float_2 + float_1;
	if(1)
	{
		long long_4 = 1;
		double double_4 = 1;
		v_termpty_save_free(char_1);

		double_2 = double_2 * double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float_2 = float_1;
		}
		long_4 = long_4 * long_2;
		v_termpty_backlog_lock();

		double_3 = double_4 * double_3;
	}
	char_2 = char_1 + char_1;
	char_1 = char_1 + char_3;
	v_termpty_backlog_size_set(short_1,int_1);

	int_1 = int_2 + int_3;
	int_2 = int_3 + int_4;
	long_5 = long_3 + long_5;
	v_termpty_backlog_unlock();

}
void v_termpty_reset_att( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_4 = 1;
	float float_3 = 1;
	double double_5 = 1;
	short short_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_3 = 1;
	long_2 = long_1 * long_1;
	double_2 = double_1 * double_1;
	double_2 = double_2 * double_3;
	char_1 = char_1 * char_2;
	char_2 = char_3 * char_2;
	short_2 = short_1 + short_1;
	double_1 = double_1;
	int_2 = int_1 + int_2;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_2 * char_2;
	float_2 = float_1;
	double_4 = double_2 * double_3;
	float_1 = float_3;
	double_2 = double_1 * double_5;
	short_3 = short_2 + short_1;
	double_6 = double_5;
	double_3 = double_1;
	short_3 = short_1 + short_1;
	double_7 = double_4 + double_1;
	int_2 = int_3 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
short v_termio_config_get( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_2;
	return short_1;
}
void v_termpty_reset_state( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long long_7 = 1;
	long long_8 = 1;
	int int_4 = 1;
	float float_3 = 1;
	long long_9 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	char char_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double_2 = double_1 * double_2;
	float_2 = float_1 * float_2;
	if(1)
	{
		v_termpty_clear_backlog(short_1);

		int_1 = int_2;
	}
	double_3 = double_3 * double_2;
	v_termpty_reset_att(double_2);

	long_3 = long_1 * long_2;
	double_1 = double_2 * double_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_3 = long_3 + long_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	double_5 = double_4 + double_1;
	short_2 = short_2 + short_3;
	short_2 = short_4 * short_2;
	int_1 = int_1 * int_1;
	long_4 = long_2 * long_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	long_1 = long_5 * long_6;
	char_1 = char_1 + char_1;
	v_termio_set_cursor_shape(int_1,double_4);

	short_4 = short_3 * short_2;
	int_3 = int_1 * int_3;
	long_8 = long_1 + long_7;
	short_1 = v_termio_config_get(int_2);

	int_1 = int_4 + int_4;
	float_2 = float_3 * float_1;
	long_9 = long_7 * long_9;
	int_2 = int_1 + int_1;
	long_4 = long_9 + long_4;
	double_6 = double_1 * double_5;
	double_6 = double_2 + double_4;
	double_2 = double_7 * double_7;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	int_2 = int_5 + int_4;
	char_2 = char_2;
	int_1 = int_1;
	float_1 = float_3 * float_3;
	short_2 = short_3 * short_4;
	int_3 = int_1 + int_6;
	float_1 = float_1 + float_2;
	int_6 = int_7 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = short_4 * short_3;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, ".") > 0)
	{
		v_termpty_clear_tabs_on_screen(long_5);

		short_1 = short_1 * short_2;
	}
}
void v_termpty_resize_tabs( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_2;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	char_2 = char_2 + char_1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 * int_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 * float_2;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_1;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_4 = int_2 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		char_3 = char_2 + char_1;
	}
}
unsigned int v__termpty_init( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	v_termpty_reset_state(short_1);

	short_2 = short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_1;
	double_1 = double_2;
	float_1 = float_1 * float_1;
	int_1 = int_1 * int_2;
	int_2 = int_1 * int_2;
	double_3 = double_1 + double_3;
	double_2 = double_3 * double_4;
	float_2 = float_1 + float_2;
	float_2 = float_3 * float_4;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int_3 = int_1 + int_2;
	return unsigned_int_1;
	v_termpty_resize_tabs(unsigned_int_3,int_2,int_3);

}
short v__add_default_keys()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	short short_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	float float_3 = 1;
	int int_6 = 1;
	short short_4 = 1;
	int int_7 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	long_1 = long_1 + long_2;
	char_1 = char_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	short_2 = short_1 + short_2;
	long_3 = long_1 * long_2;
	long_1 = long_4;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_1 + int_1;
	double_2 = double_1 + double_1;
	int_2 = int_1 * int_1;
	char_2 = char_3;
	long_4 = long_2 * long_2;
	int_3 = int_2 * int_1;
	short_1 = short_2 + short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	short_3 = short_3 * short_3;
	int_3 = int_1 * int_1;
	char_1 = char_3 * char_1;
	short_3 = short_2 + short_3;
	long_4 = long_5 * long_6;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	double_1 = double_3 * double_4;
	long_5 = long_6 * long_1;
	char_4 = char_3 * char_3;
	float_2 = float_1 + float_1;
	char_1 = char_1 * char_1;
	unsigned_int_4 = unsigned_int_1;
	short_2 = short_1 * short_3;
	double_2 = double_2 * double_1;
	double_2 = double_5 * double_5;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_4;
	int_5 = int_4 + int_5;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_1;
	short_1 = short_1 + short_2;
	char_6 = char_5 * char_6;
	int_1 = int_3 + int_4;
	float_3 = float_3 * float_3;
	long_6 = long_3 * long_4;
	int_6 = int_4 + int_5;
	long_2 = long_6 * long_4;
	short_3 = short_4 * short_2;
	char_2 = char_3;
	unsigned_int_2 = unsigned_int_1;
	int_7 = int_7 + int_5;
	float_2 = float_3 * float_3;
	short_1 = short_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	return short_2;
}
void v_colors_standard_get( int parameter_1,int parameter_2,float parameter_3,int parameter_4,short parameter_5,long parameter_6)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		long_1 = long_1 + long_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_4;
		double_2 = double_1 * double_1;
		short_1 = short_1 + short_2;
		unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	int_2 = int_1 * int_2;
	short_1 = short_1 * short_3;
	long_1 = long_1 * long_1;
	double_2 = double_1 + double_1;
}
double v_config_new()
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double double_6 = 1;
	short short_4 = 1;
	float float_2 = 1;
	long long_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_3 = 1;
		char char_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_9 = 1;
		double double_7 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_10 = 1;
		double double_8 = 1;
		double_2 = double_1 + double_2;
		long_1 = long_1 + long_2;
		int_1 = int_1 + int_2;
		short_2 = v__add_default_keys();

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		char_1 = char_1 + char_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		short_3 = short_3 * short_2;
		char_2 = char_3 + char_1;
		int_2 = int_1;
		double_3 = double_1;
		char_2 = char_1 + char_1;
		double_5 = double_4 * double_1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		double_3 = double_4 * double_2;
		double_6 = double_3 * double_6;
		char_3 = char_1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
		unsigned_int_6 = unsigned_int_5;
		unsigned_int_6 = unsigned_int_6;
		short_4 = short_4;
		float_2 = float_1 * float_2;
		double_2 = double_1 + double_4;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_7;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_8;
		unsigned_int_1 = unsigned_int_8 + unsigned_int_2;
		short_2 = short_1 * short_3;
		int_4 = int_1 + int_3;
		double_5 = double_5 * double_4;
		unsigned_int_9 = unsigned_int_7;
		float_1 = float_1 + float_1;
		long_2 = long_1 + long_2;
		double_6 = double_6 + double_7;
		unsigned_int_7 = unsigned_int_7;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_8;
		float_1 = float_1 * float_1;
		unsigned_int_6 = unsigned_int_7 * unsigned_int_4;
		double_5 = double_4 * double_4;
		short_2 = short_2 * short_1;
		char_1 = char_1 + char_2;
		float_3 = float_3 * float_1;
		float_1 = float_4 * float_1;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_9;
		unsigned_int_3 = unsigned_int_10 + unsigned_int_8;
		int_3 = int_4 * int_2;
		unsigned_int_8 = unsigned_int_9 * unsigned_int_10;
		unsigned_int_8 = unsigned_int_8 + unsigned_int_8;
		int_3 = int_2;
		long_3 = long_2;
		unsigned_int_6 = unsigned_int_7 * unsigned_int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float float_5 = 1;
				short short_5 = 1;
				int int_5 = 1;
				unsigned_int_9 = unsigned_int_3 + unsigned_int_9;
				short_2 = short_2 + short_2;
				float_5 = float_2 + float_3;
				short_5 = short_1 + short_2;
				double_3 = double_8 * double_3;
				int_3 = int_1 + int_5;
			}
		}
		v_colors_standard_get(int_6,int_2,float_2,int_7,short_4,long_3);

		double_1 = double_8 + double_2;
		int_7 = int_2 * int_4;
	}
	return double_6;
}
int main()
{
	int uni_para =480;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_4 = 1;
	char char_5 = 1;
	double double_7 = 1;
	int int_9 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_2;
	double_1 = double_2;
	float_2 = float_1 + float_2;
	char_2 = char_1 * char_2;
	long_1 = long_1;
	int_4 = int_5;
	float_2 = float_2 + float_1;
	if(1)
	{
	}
	double_3 = double_1;
	float_1 = float_2 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_3 * char_2;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		int_6 = int_3 + int_1;
	}
	int_7 = int_6 * int_1;
	if(1)
	{
	}
	int_1 = int_7 + int_1;
	unsigned_int_2 = unsigned_int_3;
	short_1 = short_1 + short_2;
	char controller4vul_391[3];
	fgets(controller4vul_391 ,3 ,stdin);
	if( strcmp( controller4vul_391, "lI") > 0)
	{
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
			double_3 = double_4 * double_3;
		}
		if(1)
		{
			short_1 = short_2;
		}
		if(1)
		{
			short_1 = short_2 + short_1;
		}
		int_7 = int_1 + int_3;
		if(1)
		{
			unsigned_int_4 = unsigned_int_3;
		}
		long_3 = long_1 + long_2;
		if(1)
		{
			short short_3 = 1;
			short_3 = short_2 + short_3;
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
			int_6 = int_6 * int_4;
		}
		short_4 = short_2 * short_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
		}
		if(1)
		{
			double_2 = double_3 * double_4;
		}
		unsigned_int_5 = unsigned_int_4;
		if(1)
		{
			double_1 = double_4 * double_1;
		}
		double_2 = double_1 + double_3;
		if(1)
		{
			int_6 = int_3 + int_5;
		}
		char controller4vul_392[2];
		fgets(controller4vul_392 ,2 ,stdin);
		if( strcmp( controller4vul_392, "8") < 0)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			char controller4vul_393[3];
			fgets(controller4vul_393 ,3 ,stdin);
			if( strcmp( controller4vul_393, "h)") < 0)
			{
				short_2 = short_2 + short_2;
				int_1 = int_6 * int_7;
				char controller4vul_394[2];
				fgets(controller4vul_394 ,2 ,stdin);
				if( strcmp( controller4vul_394, "j") > 0)
				{
					v_termpty_handle_buf(unsigned_int_1,float_1,int_1,uni_para);

					double_2 = double_4;
				}
				if(1)
				{
					char_1 = char_3 + char_1;
				}
				if(1)
				{
					char char_4 = 1;
					char_4 = char_2 + char_2;
				}
				if(1)
				{
					long_3 = long_3 * long_3;
				}
				if(1)
				{
					int_4 = int_4 + int_4;
				}
				if(1)
				{
					double_1 = double_1 + double_1;
				}
				if(1)
				{
					long_1 = long_1;
				}
				if(1)
				{
					int_2 = int_4;
				}
				if(1)
				{
					unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
				}
				if(1)
				{
					double_3 = double_3;
				}
				if(1)
				{
					double_2 = double_2 + double_4;
				}
				if(1)
				{
					long_2 = long_2 + long_3;
				}
			}
			if(1)
			{
				float float_3 = 1;
				float_3 = float_1;
			}
		}
	}
	if(1)
	{
		float float_4 = 1;
		float_1 = float_4 + float_4;
	}
	if(1)
	{
		int_2 = int_6 * int_2;
	}
	if(1)
	{
		char_5 = char_5 + char_2;
	}
	if(1)
	{
		char_5 = char_1;
		if(1)
		{
			double double_5 = 1;
			double double_6 = 1;
			double_6 = double_2 + double_5;
		}
	}
	double_2 = double_7;
	double_3 = double_1;
	long_1 = long_3 + long_2;
	short_1 = short_4 * short_1;
	if(1)
	{
		int int_8 = 1;
		int_7 = int_7 * int_3;
		int_5 = int_6 * int_8;
	}
	return int_9;
}

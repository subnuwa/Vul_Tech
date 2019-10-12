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

void v__termpty_shutdown( float parameter_1);
void v_termpty_text_scroll_rev_test( long parameter_1,long parameter_2);
int v__handle_esc_dcs( int parameter_1,short parameter_2,char parameter_3);
double v__handle_op_a( long parameter_1,float parameter_2,float parameter_3);
double v__termpty_ext_handle( char parameter_1,long parameter_2,unsigned int parameter_3);
float v__handle_esc_terminology( int parameter_1,int parameter_2,short parameter_3);
double v__handle_xterm_777_command( short parameter_1,char parameter_2,int parameter_3);
double v__smart_calculate_226( char parameter_1);
float v__smart_size( double parameter_1,int parameter_2,int parameter_3,char parameter_4);
void v_colors_term_init( double parameter_1,double parameter_2,long parameter_3);
void v_termio_config_update( unsigned int parameter_1);
char v__font_size_set( short parameter_1,int parameter_2);
void v_termio_font_size_set( int parameter_1,int parameter_2);
unsigned int v__handle_xterm_50_command( float parameter_1,char parameter_2,int parameter_3);
short v__eina_unicode_to_hex( unsigned int parameter_1);
void v__xterm_parse_color( float parameter_1,double parameter_2,short parameter_3,int parameter_4,int parameter_5);
short v__xterm_arg_get( short parameter_1);
char v__handle_esc_xterm( float parameter_1,char parameter_2,int parameter_3);
void v_termpty_cells_set_content( int parameter_1,double parameter_2,float parameter_3,int parameter_4);
double v__handle_esc_csi_decera( float parameter_1,short parameter_2);
void v_termpty_cells_att_fill_preserve_colors( char parameter_1,long parameter_2,float parameter_3,int parameter_4);
short v__clean_up_rect_coordinates( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
double v__handle_esc_csi_decfra( float parameter_1,double parameter_2);
unsigned int v__handle_esc_csi_decslrm( unsigned int parameter_1,int parameter_2);
long v__handle_esc_csi_decstbm( int parameter_1,float parameter_2);
long v__handle_esc_csi_decscusr( long parameter_1,unsigned int parameter_2);
int v__handle_esc_csi_dsr( float parameter_1,unsigned int parameter_2);
unsigned int v__handle_esc_csi_truecolor_cmyk( short parameter_1,short parameter_2);
int v__handle_esc_csi_truecolor_cmy( unsigned int parameter_1,char parameter_2);
void v__approximate_truecolor_rgb( int parameter_1,int parameter_2,int parameter_3,int parameter_4);
unsigned int v__csi_truecolor_arg_get( int parameter_1);
double v__handle_esc_csi_truecolor_rgb( int parameter_1,short parameter_2);
float v__handle_esc_csi_color_set( double parameter_1,float parameter_2);
void v_termpty_cursor_copy( unsigned int parameter_1,short parameter_2);
void v__switch_to_alternative_screen( double parameter_1,int parameter_2);
short v__move_cursor_to_origin( long parameter_1);
double v__pty_size( int parameter_1);
void v__limit_coord( float parameter_1);
double v__check_screen_info( int parameter_1,int parameter_2);
unsigned int v__termpty_line_rewrap( char parameter_1,double parameter_2,int parameter_3,char parameter_4,long parameter_5);
int v__backlog_remove_latest_nolock( char parameter_1);
unsigned int v_termpty_save_extract( char parameter_1);
char v__termpty_line_is_empty( char parameter_1,float parameter_2);
void v_termpty_screen_swap( unsigned int parameter_1);
void v_termpty_resize( int parameter_1,int parameter_2,int parameter_3);
float v_termio_win_get( int parameter_1);
void v__handle_esc_csi_reset_mode( int parameter_1,char parameter_2,float parameter_3);
void v__handle_esc_csi_cursor_pos_set( int parameter_1,double parameter_2,char parameter_3);
void v_termpty_text_scroll_rev( float parameter_1,char parameter_2);
void v_termpty_clear_line( double parameter_1,float parameter_2,int parameter_3);
void v_termpty_clear_screen( long parameter_1,unsigned int parameter_2);
void v_termpty_cell_codepoint_att_fill( unsigned int parameter_1,long parameter_2,short parameter_3,float parameter_4,int parameter_5);
void v__termpty_charset_trans( unsigned int parameter_1,float parameter_2);
void v_termio_content_change( char parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4);
void v_termpty_text_append( unsigned int parameter_1,float parameter_2,int parameter_3);
float v__csi_arg_get( long parameter_1);
char v__handle_esc_csi( unsigned int parameter_1,short parameter_2,int parameter_3,int uni_para);
unsigned int v__safechar( unsigned int parameter_1);
double v__handle_esc( long parameter_1,long parameter_2,unsigned int parameter_3,int uni_para);
void v_termpty_cell_fill( float parameter_1,char parameter_2,unsigned int parameter_3,int parameter_4);
void v_termpty_cells_fill( char parameter_1,unsigned int parameter_2,short parameter_3,int parameter_4);
void v_termpty_cells_clear( int parameter_1,unsigned int parameter_2,int parameter_3);
double v__tooltip_del(short parameter_2);
double v__tooltip_content(char parameter_2,int parameter_3);
void v_MD5Final( double parameter_1,int parameter_2);
void v_MD5Transform( double parameter_1,double parameter_2);
void v_byteReverse( float parameter_1,unsigned int parameter_2);
void v_MD5Update( int parameter_1,char parameter_2,unsigned int parameter_3);
void v_MD5Init();
void v_gravatar_tooltip( short parameter_1,double parameter_2,char parameter_3);
void v__cb_link_drag_done(double parameter_2);
float v__cb_link_drag_accept(short parameter_2,long parameter_3);
long v__cb_link_drag_move(unsigned int parameter_2,char parameter_3,char parameter_4,double parameter_5);
unsigned int v__cb_link_icon_new(int parameter_2,char parameter_3,float parameter_4);
int v__cb_link_move(unsigned int parameter_2,int parameter_3);
double v__cb_link_up_delay();
short v__cb_link_up(int parameter_2,int parameter_3);
void v_term_focus( double parameter_1);
short v__term_is_focused( short parameter_1);
void v_term_unfocus( double parameter_1);
short v__cb_ctxp_del(short parameter_2,char parameter_3);
char v__cb_ctxp_dismissed(long parameter_2);
int v__cb_ctxp_link_copy(unsigned int parameter_2);
char v__screen_visual_bounds();
double v__draw_cell( char parameter_1,char parameter_2,char parameter_3,long parameter_4);
unsigned int v__draw_line( int parameter_1,char parameter_2,float parameter_3,int parameter_4,float parameter_5);
float v_termpty_backlog_length( float parameter_1);
float v_termio_pty_get( long parameter_1);
int v_termio_textgrid_get( unsigned int parameter_1);
char v_miniview_colors_get( double parameter_1,char parameter_2);
float v__deferred_renderer();
unsigned int v__queue_render( long parameter_1);
void v_miniview_redraw( short parameter_1);
unsigned int v__block_obj_del( short parameter_1);
short v__termpty_is_dblwidth_slow_get( unsigned int parameter_1,int parameter_2);
unsigned int v__termpty_is_dblwidth_get( double parameter_1,int parameter_2);
short v_term_preedit_str_get( short parameter_1);
short v_media_get( char parameter_1);
short v__smart_media_clicked(float parameter_2);
unsigned int v_media_control_get( unsigned int parameter_1);
long v__smart_media_stop(unsigned int parameter_2);
long v__smart_media_pause(char parameter_2);
unsigned int v__smart_media_play(long parameter_2);
unsigned int v__smart_media_del(char parameter_2,float parameter_3);
void v_media_visualize_set( unsigned int parameter_1,float parameter_2);
void v_media_mute_set( short parameter_1,short parameter_2);
void v_media_volume_set( int parameter_1,double parameter_2);
void v__cb_media_vol(int parameter_2,short parameter_3,int parameter_4);
void v__cb_media_pos(int parameter_2,unsigned int parameter_3,unsigned int parameter_4);
double v__cb_media_pos_drag_stop(short parameter_2,unsigned int parameter_3,long parameter_4);
int v__cb_media_pos_drag_start(unsigned int parameter_2,short parameter_3,long parameter_4);
void v_media_stop( int parameter_1);
double v__cb_media_stop(unsigned int parameter_2,double parameter_3,float parameter_4);
long v__cb_media_pause(int parameter_2,long parameter_3,long parameter_4);
void v_media_play_set( char parameter_1,int parameter_2);
long v__cb_media_play(char parameter_2,char parameter_3,float parameter_4);
void v_media_position_set( double parameter_1,double parameter_2);
int v__cb_mov_ref(double parameter_2);
unsigned int v__cb_mov_progress(char parameter_2);
void v__cb_mov_restart();
short v__cb_mov_decode_stop(long parameter_2);
char v__cb_mov_len_change(int parameter_2);
char v__cb_mov_frame_resize(float parameter_2);
unsigned int v__cb_mov_frame_decode(double parameter_2);
char v__type_mov_init( float parameter_1);
unsigned int v__cb_edje_preloaded(char parameter_2,unsigned int parameter_3,float parameter_4);
unsigned int v__type_edje_init( long parameter_1);
long v__type_scale_init( long parameter_1);
unsigned int v__cb_img_frame();
int v__type_img_anim_handle( char parameter_1);
void v__cb_img_preloaded(short parameter_2,char parameter_3);
int v__type_img_init( unsigned int parameter_1);
int v__url_compl_cb(int parameter_2,int uni_para);
unsigned int v__url_prog_cb(int parameter_2);
short v__type_thumb_calc( unsigned int parameter_1,char parameter_2,float parameter_3,int parameter_4,float parameter_5);
char v__type_mov_calc( unsigned int parameter_1,short parameter_2,short parameter_3,short parameter_4,char parameter_5);
void v__type_edje_calc( int parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4,float parameter_5);
int v__type_img_calc( unsigned int parameter_1,float parameter_2,char parameter_3,long parameter_4,long parameter_5);
float v__cb_scale_preloaded(double parameter_2,unsigned int parameter_3);
float v__type_scale_calc( double parameter_1,unsigned int parameter_2,char parameter_3,char parameter_4,int parameter_5,int uni_para);
double v__unsmooth_timeout(int uni_para);
float v__smooth_handler( float parameter_1,int uni_para);
char v__smart_calculate( short parameter_1,int uni_para);
short v__smart_move( unsigned int parameter_1,unsigned int parameter_2,long parameter_3);
unsigned int v__smart_resize( double parameter_1,float parameter_2,float parameter_3);
unsigned int v__smart_del( unsigned int parameter_1);
double v__smart_add( short parameter_1);
void v__smart_init();
double v_media_add( double parameter_1,float parameter_2,int parameter_3,int parameter_4,long parameter_5,int uni_para);
int v__block_media_activate( long parameter_1,unsigned int parameter_2,int uni_para);
void v__block_edje_message_cb(long parameter_2,unsigned int parameter_3,int parameter_4);
void v_termpty_write( int parameter_1,double parameter_2,int parameter_3);
double v__block_edje_signal_cb(char parameter_2,float parameter_3,char parameter_4);
void v_termpty_block_chid_update( unsigned int parameter_1,float parameter_2);
short v__block_edje_cmds( int parameter_1,short parameter_2,unsigned int parameter_3,double parameter_4);
int v_homedir_get( char parameter_1,long parameter_2);
short v__block_edje_activate( short parameter_1,short parameter_2);
unsigned int v__block_activate( char parameter_1,long parameter_2,int uni_para);
unsigned int v_termpty_block_get( int parameter_1,int parameter_2);
int v_termpty_block_id_get( long parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( double parameter_1,int parameter_2);
void v__smart_apply( short parameter_1,int uni_para);
unsigned int v__smart_cb_change(int uni_para);
short v__smart_update_queue( unsigned int parameter_1,float parameter_2,int uni_para);
char v__lost_selection_reset_job();
unsigned int v__lost_selection(int parameter_2,int uni_para);
short v__take_selection_text( unsigned int parameter_1,long parameter_2,short parameter_3,int uni_para);
short v__cb_ctxp_link_content_copy(unsigned int parameter_2,int uni_para);
void v_ty_sb_free( short parameter_1);
int v_ty_sb_steal_buf( long parameter_1);
int v_codepoint_to_utf8( char parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( int parameter_1);
int v_ty_sb_add( int parameter_1,unsigned int parameter_2,char parameter_3);
double v__termpty_cellrow_from_beacon_get( char parameter_1,int parameter_2,unsigned int parameter_3);
double v_termpty_cellrow_get( float parameter_1,int parameter_2,unsigned int parameter_3);
void v_termio_selection_get( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,short parameter_7);
double v__cb_ctxp_link_open(unsigned int parameter_2);
short v__should_inline();
unsigned int v_link_is_email( short parameter_1);
int v_link_is_protocol();
int v_link_is_url( unsigned int parameter_1);
double v__activate_link( double parameter_1,long parameter_2);
unsigned int v__cb_ctxp_link_preview(long parameter_2);
long v__is_fmt( long parameter_1,unsigned int parameter_2);
float v_media_src_type_get( long parameter_1);
double v__mouse_in_selection( float parameter_1,int parameter_2,int parameter_3);
unsigned int v__smart_xy_to_cursor( double parameter_1,float parameter_2,int parameter_3,int parameter_4,int parameter_5);
void v__cb_link_down(float parameter_2,long parameter_3,int uni_para);
void v_main_term_popup_exists( double parameter_1);
char v__update_link( double parameter_1,long parameter_2,long parameter_3,float parameter_4,int uni_para);
void v__remove_links( char parameter_1,long parameter_2,int uni_para);
float v__sel_set( short parameter_1,unsigned int parameter_2);
int v_termio_scroll_get( short parameter_1);
void v_miniview_position_offset( int parameter_1,int parameter_2,int parameter_3);
float v_term_miniview_get( double parameter_1);
void v_termio_scroll( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
void v_termpty_save_new( float parameter_1,int parameter_2);
int v_termpty_save_expand( long parameter_1,short parameter_2,long parameter_3);
short v__termpty_cell_is_empty( short parameter_1);
void v_termpty_line_length( long parameter_1,short parameter_2);
void v_verify_beacon( unsigned int parameter_1,int parameter_2);
void v_termpty_text_save_top( float parameter_1,int parameter_2,long parameter_3);
void v_termpty_text_scroll( double parameter_1,char parameter_2,int uni_para);
void v_termpty_text_scroll_test( char parameter_1,unsigned int parameter_2,int uni_para);
float v__cursor_to_start_of_line( int parameter_1);
unsigned int v__tab_forward( short parameter_1,int parameter_2);
short v__handle_cursor_control( unsigned int parameter_1,char parameter_2,int uni_para);
int v_termpty_handle_seq( double parameter_1,double parameter_2,short parameter_3,int uni_para);
void v_termpty_handle_buf( int parameter_1,short parameter_2,int parameter_3,int uni_para);
void v_theme_reload( double parameter_1);
float v_theme_reload_cb(float parameter_2,short parameter_3,double parameter_4);
void v_theme_auto_reload_enable( long parameter_1);
unsigned int v__cursor_shape_to_group_name( unsigned int parameter_1);
unsigned int v_config_theme_path_default_get( short parameter_1);
long v_theme_path_get();
short v_config_theme_path_get( int parameter_1);
float v_theme_apply( long parameter_1,char parameter_2,unsigned int parameter_3);
void v_termio_set_cursor_shape( long parameter_1,long parameter_2);
void v_termpty_clear_tabs_on_screen( char parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( long parameter_1,short parameter_2);
float v__ts_free();
void v_termpty_save_free( unsigned int parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( float parameter_1);
void v_termpty_reset_att( char parameter_1);
unsigned int v_termio_config_get( unsigned int parameter_1);
void v_termpty_reset_state( long parameter_1);
void v_termpty_resize_tabs( short parameter_1,int parameter_2,int parameter_3);
long v__termpty_init( double parameter_1);
double v__add_default_keys( double parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,float parameter_3,long parameter_4,int parameter_5,int parameter_6);
long v_config_new();
void v__termpty_shutdown( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_1;
}
void v_termpty_text_scroll_rev_test( long parameter_1,long parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	v_termpty_text_scroll_rev(float_1,char_1);

	long_1 = long_1 * long_2;
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short_2 = short_1 * short_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_3 = double_1 + double_2;
	}
}
int v__handle_esc_dcs( int parameter_1,short parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_1 = v__safechar(unsigned_int_2);

	float_3 = float_1 * float_2;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				if(1)
				{
					char_1 = char_1;
				}
				if(1)
				{
					int int_1 = 1;
					int_2 = int_1 + int_2;
				}
			}
		}
		if(1)
		{
			char_1 = char_2 + char_1;
		}
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 + double_2;
		}
		if(1)
		{
		}
		if(1)
		{
			char_1 = char_2 + char_3;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_1 * short_2;
		}
	}
	if(1)
	{
		if(1)
		{
			char_2 = char_3 * char_1;
		}
	}
	return int_3;
	v_termpty_write(int_4,double_2,int_2);

}
double v__handle_op_a( long parameter_1,float parameter_2,float parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1;
	return double_2;
}
double v__termpty_ext_handle( char parameter_1,long parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double_1 = double_1 + double_1;
	char_1 = char_1;
	return double_2;
	double_3 = v__handle_op_a(long_1,float_1,float_1);

}
float v__handle_esc_terminology( int parameter_1,int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = v_termio_config_get(unsigned_int_1);

	double_1 = double_1 * double_1;
	return float_1;
	double_2 = v__termpty_ext_handle(char_1,long_1,unsigned_int_1);

}
double v__handle_xterm_777_command( short parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	int_3 = int_1 * int_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_4;
	if(1)
	{
		int_1 = int_1;
	}
	int_1 = int_3;
	double_1 = double_1 + double_1;
	double_1 = double_2;
	char_2 = char_1 + char_1;
	double_3 = double_1 + double_2;
	return double_2;
}
double v__smart_calculate_226( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_1 + int_1;
	short_1 = short_1 * short_1;
	int_2 = int_2 + int_1;
	char_1 = char_1 + char_1;
	return double_1;
}
float v__smart_size( double parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short_2 = short_1 + short_2;
	short_4 = short_2 + short_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	char_1 = char_2;
	double_1 = double_2;
	double_3 = v__smart_calculate_226(char_3);

	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		double_1 = double_3 * double_1;
	}
	v__smart_apply(short_3,-1 );

	short_2 = short_3;
	short_4 = short_1;
	float_1 = v__sel_set(short_1,unsigned_int_1);

	double_1 = double_4;
	char_1 = char_1 * char_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	v_termpty_resize(int_3,int_4,int_5);

	long_3 = long_2 * long_2;
	return float_1;
}
void v_colors_term_init( double parameter_1,double parameter_2,long parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short short_5 = 1;
	double double_3 = 1;
	float float_2 = 1;
	int int_7 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_2;
	int_2 = int_3;
	int_3 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		double double_2 = 1;
		int int_6 = 1;
		double_1 = double_1 * double_1;
		if(1)
		{
			short short_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double_1 = double_1;
			short_2 = short_1 + short_1;
			long_1 = long_1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			short_1 = short_1;
			if(1)
			{
				int int_5 = 1;
				short short_3 = 1;
				short short_4 = 1;
				float float_1 = 1;
				long_2 = long_1 + long_1;
				int_2 = int_4 * int_5;
				short_5 = short_3 * short_4;
				float_1 = float_1 + float_1;
				long_2 = long_2 * long_2;
			}
		}
		double_3 = double_1 + double_2;
		int_6 = int_1 * int_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			float_2 = float_2 * float_2;
			if(1)
			{
				int_4 = int_3 * int_7;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
			if(1)
			{
				short short_6 = 1;
				short_5 = short_6 + short_6;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		long long_3 = 1;
		double_1 = double_1 + double_1;
		if(1)
		{
			int int_8 = 1;
			float float_3 = 1;
			double double_4 = 1;
			int_7 = int_8 + int_3;
			long_1 = long_2;
			float_2 = float_3;
			double_4 = double_4 * double_3;
			double_4 = double_3 + double_3;
		}
		long_1 = long_3 + long_3;
	}
}
void v_termio_config_update( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	double_1 = double_1 * double_2;
	short_2 = short_1 + short_1;
	v_colors_term_init(double_1,double_1,long_1);

	v_termio_set_cursor_shape(long_1,long_1);

	long_2 = long_2;
	double_4 = double_3 + double_2;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short_1 = short_2 + short_1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		int_1 = int_2;
	}
	double_2 = double_2 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	float_1 = v__smart_size(double_3,int_3,int_1,char_1);

	int_3 = int_3 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	short_3 = short_1;
	double_2 = double_4 * double_3;
	double_2 = double_5 + double_2;
	long_2 = long_1 * long_1;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_2 * float_1;
	}
	if(1)
	{
		int_4 = int_3 * int_3;
	}
	v_termpty_backlog_size_set(long_1,short_1);

	unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
	int_1 = int_2 * int_4;
	double_5 = double_2;
	char_1 = char_1;
	unsigned_int_4 = unsigned_int_5;
}
char v__font_size_set( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1 * short_1;
	long_2 = long_1 + long_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_3 = int_4;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_5 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_3 = 1;
		v_termio_config_update(unsigned_int_2);

		long_1 = long_2 * long_1;
		char_3 = char_1 * char_2;
		int_5 = int_1 * int_3;
		int_6 = int_3 * int_6;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_3;
	}
	return char_4;
}
void v_termio_font_size_set( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = v__font_size_set(short_1,int_1);

	int_2 = int_2 * int_2;
}
unsigned int v__handle_xterm_50_command( float parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_2;
	v_termio_font_size_set(int_1,int_1);

}
short v__eina_unicode_to_hex( unsigned int parameter_1)
{
	short short_1 = 1;
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
}
void v__xterm_parse_color( float parameter_1,double parameter_2,short parameter_3,int parameter_4,int parameter_5)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_6 = 1;
	int int_6 = 1;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	float_1 = float_3 + float_1;
	int_1 = int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		int int_4 = 1;
		char char_4 = 1;
		char char_5 = 1;
		char_1 = char_1 + char_2;
		if(1)
		{
			char char_3 = 1;
			char_2 = char_3;
		}
		double_1 = double_1 * double_1;
		double_2 = double_2 * double_1;
		if(1)
		{
			int int_3 = 1;
			int_2 = int_3;
		}
		short_1 = short_2;
		int_2 = int_1 + int_4;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		}
		char_4 = char_2 + char_4;
		short_4 = short_3 + short_1;
		if(1)
		{
			float float_4 = 1;
			float_4 = float_3;
		}
		char_1 = char_5;
		int_5 = int_1 * int_5;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
		if(1)
		{
			long_1 = long_1 + long_1;
		}
		int_4 = int_5 + int_5;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		double double_3 = 1;
		short short_5 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
		if(1)
		{
			unsigned_int_5 = unsigned_int_6 + unsigned_int_2;
		}
		double_1 = double_3;
		short_3 = short_5 + short_4;
		if(1)
		{
			unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
		}
		short_2 = short_3 * short_1;
		long_1 = long_1 * long_1;
		if(1)
		{
			short_6 = v__eina_unicode_to_hex(unsigned_int_2);

			unsigned_int_6 = unsigned_int_1 + unsigned_int_4;
		}
		double_4 = double_4 + double_5;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
	}
	int_2 = int_6 * int_5;
}
short v__xterm_arg_get( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	short short_2 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 * char_2;
	short_1 = short_1 + short_1;
	double_1 = double_1 + double_1;
	long_2 = long_1 + long_2;
	double_1 = double_2 * double_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	long_4 = long_2 * long_3;
	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	long_2 = long_1;
	long_3 = long_3 * long_2;
	double_3 = double_1 + double_3;
	short_2 = short_1 + short_2;
	long_6 = long_2 * long_5;
	unsigned_int_3 = unsigned_int_1;
	int_1 = int_2;
	double_4 = double_3 + double_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
	float_2 = float_1 + float_3;
	return short_1;
}
char v__handle_esc_xterm( float parameter_1,char parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_5 = 1;
	double double_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_3 = 1;
	long long_5 = 1;
	float_2 = float_1 * float_1;
	short_1 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = v__handle_xterm_50_command(float_2,char_1,int_1);

	float_3 = float_1 + float_3;
	int_3 = int_1 + int_2;
	long_1 = long_1 * long_1;
	if(1)
	{
		char_2 = char_1 * char_2;
	}
	int_4 = int_3 + int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_5 = float_2 + float_4;
	if(1)
	{
		v_termpty_write(int_5,double_1,int_2);

		double_1 = v__handle_xterm_777_command(short_2,char_2,int_4);

		char_1 = char_3 + char_3;
	}
	int_2 = int_2 * int_6;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3;
	}
	long_4 = long_2 * long_3;
	float_2 = float_3 + float_6;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
	double_1 = double_2 + double_1;
	int_1 = int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_6 * unsigned_int_1;
	}
	if(1)
	{
		float_3 = float_2 * float_2;
		float_6 = float_4 + float_4;
		double_3 = double_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_6 * unsigned_int_3;
	}
	int_4 = v_termio_textgrid_get(unsigned_int_6);

	int_6 = int_3;
	double_4 = double_4 * double_1;
	if(1)
	{
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	}
	if(1)
	{
		unsigned_int_3 = v_termio_config_get(unsigned_int_1);

		v__xterm_parse_color(float_4,double_3,short_2,int_2,int_2);

		unsigned_int_8 = unsigned_int_7 + unsigned_int_1;
	}
	if(1)
	{
		int int_7 = 1;
		unsigned_int_7 = unsigned_int_4 * unsigned_int_9;
		short_1 = v__xterm_arg_get(short_3);

		int_7 = int_6 * int_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_9 * unsigned_int_8;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	unsigned_int_4 = unsigned_int_6 * unsigned_int_7;
	long_4 = long_5;
	return char_3;
}
void v_termpty_cells_set_content( int parameter_1,double parameter_2,float parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float_3 = float_1 + float_2;
		double_2 = double_1 * double_1;
	}
}
double v__handle_esc_csi_decera( float parameter_1,short parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	double double_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	short short_1 = 1;
	int_1 = int_1;
	float_1 = v__csi_arg_get(long_1);

	int_2 = int_2 + int_3;
	v_termpty_cells_set_content(int_3,double_1,float_2,int_2);

	int_4 = int_4 * int_1;
	double_2 = double_1 + double_1;
	float_1 = float_2 * float_3;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	int_4 = int_4 * int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		short_1 = v__clean_up_rect_coordinates(short_1,int_2,int_4,int_4,int_2);

		float_2 = float_1;
		long_2 = long_2;
	}
	return double_1;
}
void v_termpty_cells_att_fill_preserve_colors( char parameter_1,long parameter_2,float parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		char_2 = char_1 * char_1;
		char_1 = char_2 * char_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_4 = 1;
			long_2 = long_2 * long_2;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			double_3 = double_1 + double_2;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
			double_4 = double_4 + double_3;
		}
	}
}
short v__clean_up_rect_coordinates( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_3 = char_1 * char_2;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_1;
	long_2 = long_1;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_2 * short_1;
	}
	double_1 = double_1 * double_1;
	long_3 = long_3 + long_1;
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		int_1 = int_2 + int_2;
		if(1)
		{
			int_2 = int_3 * int_2;
		}
	}
	if(1)
	{
		int int_4 = 1;
		int_2 = int_2 * int_4;
	}
	if(1)
	{
		char char_4 = 1;
		char_1 = char_4 + char_3;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_1;
		if(1)
		{
			int int_5 = 1;
			int int_6 = 1;
			int_6 = int_2 + int_5;
		}
	}
	int_3 = int_3 * int_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2;
	long_2 = long_3 + long_2;
	float_2 = float_1 + float_2;
	return short_4;
}
double v__handle_esc_csi_decfra( float parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_2;
	float_1 = v__csi_arg_get(long_1);

	int_3 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_1;
	short_1 = v__clean_up_rect_coordinates(short_1,int_4,int_2,int_2,int_2);

	long_2 = long_3;
	double_1 = double_1 + double_1;
	v_termpty_cells_att_fill_preserve_colors(char_1,long_1,float_2,int_5);

	int_2 = int_6 * int_6;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_7 = 1;
		int_7 = int_4;
		char_2 = char_2 + char_1;
	}
	return double_1;
}
unsigned int v__handle_esc_csi_decslrm( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_2 = int_1 + int_2;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		short_1 = short_2 * short_2;
	}
	float_3 = v__csi_arg_get(long_1);

	double_1 = double_1 * double_1;
	if(1)
	{
		int_2 = int_2 * int_1;
	}
	if(1)
	{
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	short_1 = short_2 + short_3;
	double_1 = double_1 + double_1;
	long_2 = long_2 * long_1;
	short_1 = short_4 * short_4;
	short_1 = v__move_cursor_to_origin(long_2);

	char_1 = char_2;
	return unsigned_int_3;
}
long v__handle_esc_csi_decstbm( int parameter_1,float parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	float_1 = v__csi_arg_get(long_1);

	float_2 = float_1;
	float_1 = float_1 * float_2;
	long_2 = long_1 * long_1;
	int_2 = int_1 * int_2;
	double_3 = double_1 + double_2;
	if(1)
	{
		int_2 = int_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "e}") < 0)
	{
		double double_4 = 1;
		double_3 = double_4 + double_4;
	}
	float_2 = float_2 * float_3;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	short_1 = v__move_cursor_to_origin(long_1);

	short_3 = short_2 * short_2;
	int_2 = int_2 * int_2;
	return long_3;
}
long v__handle_esc_csi_decscusr( long parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	int_1 = int_1 + int_2;
	int_2 = int_2 * int_1;
	float_1 = v__csi_arg_get(long_1);

	double_1 = double_2;
	float_1 = float_1 + float_2;
	v_termio_set_cursor_shape(long_2,long_3);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	char_4 = char_1 + char_3;
	double_4 = double_1 * double_3;
	double_3 = double_5 + double_4;
	int_3 = int_1;
	short_1 = short_1 + short_2;
	return long_2;
}
int v__handle_esc_csi_dsr( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	double double_4 = 1;
	int int_5 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		long long_4 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		long_4 = long_1 + long_3;
		double_3 = double_1 * double_2;
		int_1 = int_1 * int_1;
		int_4 = int_2 * int_3;
		double_1 = double_1 * double_1;
		double_1 = double_3 + double_1;
	}
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_6 = 1;
		float_1 = float_1 + float_1;
		double_6 = double_4 * double_5;
		v_termpty_write(int_5,double_4,int_3);

		float_2 = float_1 * float_1;
		short_3 = short_1 * short_2;
		short_3 = short_1 * short_3;
		int_4 = int_6;
	}
	return int_4;
	float_1 = v__csi_arg_get(long_3);

}
unsigned int v__handle_esc_csi_truecolor_cmyk( short parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_5 = 1;
	unsigned_int_1 = v__csi_truecolor_arg_get(int_1);

	int_1 = int_1 + int_2;
	int_3 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1;
	char_4 = char_2 + char_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Ml") < 0)
	{
	}
	float_2 = float_1 + float_2;
	int_3 = int_3 + int_2;
	float_2 = float_3 * float_4;
	long_2 = long_1 * long_1;
	v__approximate_truecolor_rgb(int_1,int_1,int_3,int_4);

	double_2 = double_1 * double_2;
	int_5 = int_3 + int_3;
	return unsigned_int_1;
}
int v__handle_esc_csi_truecolor_cmy( unsigned int parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	v__approximate_truecolor_rgb(int_1,int_1,int_2,int_3);

	float_1 = float_2;
	int_1 = int_3;
	char_1 = char_1 + char_2;
	double_1 = double_1;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	unsigned_int_1 = v__csi_truecolor_arg_get(int_3);

	long_1 = long_1 + long_2;
	int_1 = int_3 + int_3;
	return int_2;
}
void v__approximate_truecolor_rgb( int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short_3 = short_1 + short_2;
	float_2 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				int_1 = v_termio_textgrid_get(unsigned_int_1);

				unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
			}
		}
	}
}
unsigned int v__csi_truecolor_arg_get( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double v__handle_esc_csi_truecolor_rgb( int parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	int int_5 = 1;
	char_2 = char_1 + char_2;
	int_1 = int_1 + int_1;
	int_1 = int_2 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v__approximate_truecolor_rgb(int_2,int_2,int_2,int_3);

	unsigned_int_4 = unsigned_int_5;
	if(1)
	{
		int int_4 = 1;
		double_1 = double_1 + double_1;
		int_2 = int_2 * int_1;
		int_4 = int_3 * int_1;
	}
	if(1)
	{
	}
	return double_1;
	unsigned_int_2 = v__csi_truecolor_arg_get(int_5);

}
float v__handle_esc_csi_color_set( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_5 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double_1 = v__handle_esc_csi_truecolor_rgb(int_1,short_1);

	unsigned_int_1 = v__handle_esc_csi_truecolor_cmyk(short_2,short_1);

	double_4 = double_2 * double_3;
	float_1 = v__csi_arg_get(long_1);

	double_1 = double_1 + double_5;
	return float_2;
	v_termpty_reset_att(char_1);

	int_1 = v__handle_esc_csi_truecolor_cmy(unsigned_int_1,char_1);

}
void v_termpty_cursor_copy( unsigned int parameter_1,short parameter_2)
{
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float_2 = float_1 * float_2;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short_2 = short_1 + short_1;
		int_2 = int_1 + int_2;
		int_3 = int_2 * int_1;
		int_4 = int_1 + int_4;
	}
}
void v__switch_to_alternative_screen( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		char char_1 = 1;
		v_termpty_screen_swap(unsigned_int_1);

		char_1 = char_1 * char_1;
	}
}
short v__move_cursor_to_origin( long parameter_1)
{
	short short_2 = 1;
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = double_1 * double_1;
		char_1 = char_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, " ") == 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_3 = 1;
		int_2 = int_1 * int_2;
		short_3 = short_1 * short_2;
	}
	return short_2;
}
double v__pty_size( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	char_1 = char_1 * char_2;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	return double_3;
}
void v__limit_coord( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_3;
	double_1 = double_1 + double_2;
	int_2 = int_3 * int_3;
	short_1 = short_1 * short_1;
}
double v__check_screen_info( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char_2 = char_1 * char_2;
		int_3 = int_1 * int_2;
		v_termpty_text_save_top(float_1,int_1,long_1);

		short_2 = short_1 * short_1;
		short_2 = short_3 + short_2;
		short_1 = short_3 + short_1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if(remainder_check(controller_2,100,2))
		{
			char char_3 = 1;
			v_termpty_cells_clear(int_1,unsigned_int_1,int_2);

			char_3 = char_1 + char_1;
		}
		short_4 = short_1 * short_2;
	}
	return double_1;
}
unsigned int v__termpty_line_rewrap( char parameter_1,double parameter_2,int parameter_3,char parameter_4,long parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int_1 = int_1;
	int_3 = int_2 + int_2;
	short_2 = short_1 + short_1;
	return unsigned_int_1;
	double_1 = v__check_screen_info(int_3,int_2);

}
int v__backlog_remove_latest_nolock( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		int_1 = int_1;
	}
	v_verify_beacon(unsigned_int_3,int_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
	float_1 = float_1;
	long_3 = long_1 * long_2;
	v_termpty_save_free(unsigned_int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	return int_1;
}
unsigned int v_termpty_save_extract( char parameter_1)
{
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			char char_3 = 1;
			int_3 = int_1 + int_2;
			double_1 = double_2;
			char_1 = char_1 + char_2;
			long_2 = long_1 + long_1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
			}
			short_2 = short_1 + short_1;
			short_4 = short_3 + short_2;
			char_2 = char_3 * char_1;
			if(1)
			{
				int_1 = int_2 * int_3;
			}
		}
	}
	return unsigned_int_2;
}
char v__termpty_line_is_empty( char parameter_1,float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float_2 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_1 = v__termpty_cell_is_empty(short_2);

		short_4 = short_3 + short_2;
		if(1)
		{
		}
	}
	return char_1;
}
void v_termpty_screen_swap( unsigned int parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_2 + float_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	int_1 = int_1;
	int_2 = int_2 + int_3;
	int_4 = int_1 * int_3;
	long_2 = long_1 + long_1;
	int_4 = int_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
	}
}
void v_termpty_resize( int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	int int_4 = 1;
	char char_5 = 1;
	float float_4 = 1;
	int int_5 = 1;
	long long_7 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_6 = 1;
	int int_8 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_6 = 1;
	long long_8 = 1;
	double double_7 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2;
	float_2 = float_1 * float_1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		char_2 = char_1 + char_1;
		float_3 = float_1 * float_3;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		v__limit_coord(float_1);

		double_2 = double_3;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	double_2 = double_2 + double_4;
	if(1)
	{
		char_4 = char_3 + char_2;
	}
	int_2 = int_1 + int_2;
	long_2 = long_1;
	short_1 = short_1 + short_2;
	long_1 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_4 = char_3 * char_1;
		if(1)
		{
			int_3 = int_3 * int_1;
			double_2 = double_4 * double_2;
		}
	}
	long_4 = long_3 * long_1;
	if(1)
	{
		short_3 = short_3 + short_3;
	}
	double_3 = double_1 * double_4;
	if(1)
	{
		long long_5 = 1;
		int_4 = int_3;
		char_5 = char_3 + char_3;
		v_termpty_backlog_lock();

		long_2 = long_2 + long_5;
		if(1)
		{
			long long_6 = 1;
			float_1 = float_3 + float_4;
			int_3 = int_2 * int_5;
			v_termpty_line_length(long_4,short_2);

			float_3 = float_2;
			long_7 = long_6 * long_4;
			if(1)
			{
				int_5 = int_1 + int_4;
			}
			v_termpty_resize_tabs(short_4,int_2,int_1);

			unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
			unsigned_int_5 = unsigned_int_3;
			double_4 = double_4 + double_4;
			double_5 = v__pty_size(int_6);

			int_2 = int_2 + int_3;
			long_7 = long_7 * long_7;
			unsigned_int_1 = v_termpty_save_extract(char_4);

			char_4 = char_5 * char_3;
			int_5 = int_5 * int_7;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long_2 = long_3;
		short_1 = short_4 + short_2;
		short_1 = short_3 * short_5;
		v_termpty_screen_swap(unsigned_int_1);

		char_3 = v__termpty_line_is_empty(char_3,float_4);

		unsigned_int_6 = v__termpty_line_rewrap(char_6,double_5,int_1,char_2,long_2);

		int_8 = int_5 + int_6;
	}
	unsigned_int_5 = unsigned_int_6 + unsigned_int_4;
	int_1 = int_4 + int_9;
	char_2 = char_3 + char_5;
	int_7 = v__backlog_remove_latest_nolock(char_3);

	v_verify_beacon(unsigned_int_4,int_2);

	unsigned_int_7 = unsigned_int_1 * unsigned_int_1;
	int_5 = int_4 * int_1;
	int_8 = int_5;
	unsigned_int_9 = unsigned_int_4 * unsigned_int_8;
	v_termpty_backlog_unlock();

	double_6 = double_2 + double_5;
	if(1)
	{
		short_3 = short_5 + short_1;
	}
	int_5 = int_4 + int_7;
	long_2 = long_7 + long_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	long_2 = long_8 + long_8;
	unsigned_int_4 = unsigned_int_8 + unsigned_int_7;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_7;
	double_2 = double_1 * double_4;
	double_7 = double_2 + double_3;
}
float v_termio_win_get( int parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return float_1;
}
void v__handle_esc_csi_reset_mode( int parameter_1,char parameter_2,float parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	float_1 = v_termio_win_get(int_1);

	v_termpty_resize(int_2,int_2,int_3);

	v_termpty_reset_state(long_1);

	float_1 = float_1 + float_1;
	v_termpty_clear_screen(long_1,unsigned_int_1);

	v_termpty_cursor_copy(unsigned_int_2,short_1);

	double_1 = double_1 + double_2;
	float_1 = v__csi_arg_get(long_2);

	float_2 = float_3;
	short_1 = v__move_cursor_to_origin(long_3);

	v__switch_to_alternative_screen(double_2,int_1);

}
void v__handle_esc_csi_cursor_pos_set( int parameter_1,double parameter_2,char parameter_3)
{
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char_1 = char_1;
	float_1 = v__csi_arg_get(long_1);

	char_1 = char_2 * char_2;
	float_1 = float_1;
	long_4 = long_2 * long_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_2;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		long_4 = long_1 + long_4;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		}
	}
	if(1)
	{
		long long_5 = 1;
		long_2 = long_5 * long_4;
	}
	int_2 = int_3;
	double_4 = double_3 * double_2;
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_3;
		}
	}
	if(1)
	{
		double_3 = double_2 + double_2;
	}
	int_2 = int_4 + int_5;
}
void v_termpty_text_scroll_rev( float parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		float_1 = float_1 + float_1;
		long_1 = long_1 + long_2;
	}
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_2 = int_2 + int_2;
		if(1)
		{
			int_2 = int_2 + int_1;
		}
		double_3 = double_1 * double_2;
		if(1)
		{
			char_1 = char_1 + char_2;
		}
	}
	if(1)
	{
		v_termio_scroll(char_2,int_2,int_3,int_2,-1 );

		unsigned_int_1 = unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_2 = 1;
			char_1 = char_1 + char_2;
			v_termpty_cells_clear(int_4,unsigned_int_3,int_2);

			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
			float_2 = float_1 * float_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
		}
	}
}
void v_termpty_clear_line( double parameter_1,float parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	short_1 = short_2;
	v_termio_content_change(char_1,int_1,unsigned_int_1,int_2);

	long_1 = long_2;
	int_2 = int_1 + int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	char_3 = char_2 * char_2;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
	v_termpty_cells_clear(int_3,unsigned_int_2,int_1);

	unsigned_int_3 = unsigned_int_4 + unsigned_int_6;
	double_3 = double_1 * double_2;
	float_2 = float_1 + float_1;
	int_4 = int_2 + int_3;
	double_4 = double_2;
	int_4 = int_4 * int_4;
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_4 = float_3 * float_1;
	}
	int_5 = int_4 * int_1;
	double_4 = double_3 + double_5;
}
void v_termpty_clear_screen( long parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "Yu") < 0)
	{
		double double_1 = 1;
		double_1 = double_1 + double_2;
	}
	v_termpty_cells_clear(int_2,unsigned_int_1,int_3);

	unsigned_int_2 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_1;
	v_termpty_clear_line(double_2,float_1,int_4);

	unsigned_int_1 = unsigned_int_3;
	float_1 = float_2 * float_3;
	v_termio_content_change(char_1,int_1,unsigned_int_2,int_1);

}
void v_termpty_cell_codepoint_att_fill( unsigned int parameter_1,long parameter_2,short parameter_3,float parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_1 = double_2;
	short_1 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double_1 = double_1 + double_1;
		int_3 = int_1 + int_2;
	}
}
void v__termpty_charset_trans( unsigned int parameter_1,float parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	int_1 = int_1;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	short_1 = short_1 + short_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 * float_1;
		}
		if(1)
		{
			int int_2 = 1;
			int_2 = int_2 * int_2;
		}
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			short_2 = short_2 + short_3;
		}
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 + double_1;
		}
	}
}
void v_termio_content_change( char parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_6 = 1;
	int_2 = int_1 * int_1;
	char_1 = char_1;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short_2 = short_1 + short_2;
		short_2 = short_3 * short_3;
		float_2 = v__sel_set(short_3,unsigned_int_2);

		char_3 = char_2 + char_3;
		double_2 = double_1 * double_2;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long_3 = long_1 + long_2;
			if(1)
			{
				double_2 = double_2 + double_3;
				int_2 = int_3 * int_1;
			}
			double_2 = double_2 + double_3;
			int_1 = int_3 * int_3;
		}
	}
	if(1)
	{
	}
	float_1 = float_2 + float_1;
	double_2 = double_2;
	int_3 = int_4 + int_3;
	long_5 = long_3 * long_4;
	if(1)
	{
		int int_5 = 1;
		v__remove_links(char_2,long_1,-1 );

		int_6 = int_4 * int_5;
		long_1 = long_4 * long_5;
	}
	if(1)
	{
		int_1 = int_6 + int_6;
		float_2 = float_1 * float_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_3 = 1;
			int int_7 = 1;
			float_3 = float_1 * float_2;
			if(1)
			{
				char char_4 = 1;
				char_2 = char_3 + char_4;
				int_3 = int_4 * int_2;
			}
			double_1 = double_3 * double_1;
			int_2 = int_6 + int_7;
		}
	}
	if(1)
	{
		double double_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double_4 = double_3 + double_1;
		unsigned_int_7 = unsigned_int_1 + unsigned_int_6;
		double_1 = double_4;
		long_3 = long_2 + long_5;
		unsigned_int_6 = unsigned_int_7 + unsigned_int_3;
		if(1)
		{
			int_6 = int_2 * int_6;
		}
	}
}
void v_termpty_text_append( unsigned int parameter_1,float parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	char char_3 = 1;
	short short_1 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long_2 = long_1 + long_1;
	double_1 = double_1 * double_1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_3 = double_3 + double_4;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	v_termio_content_change(char_1,int_1,unsigned_int_4,int_1);

	char_1 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		float float_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_5 = 1;
		double double_5 = 1;
		short short_3 = 1;
		int int_6 = 1;
		double_4 = double_4;
		if(1)
		{
			float float_2 = 1;
			char char_2 = 1;
			float_2 = float_1 * float_2;
			long_3 = long_2;
			double_1 = double_3 + double_4;
			float_1 = float_2 + float_3;
			char_3 = char_2 + char_2;
			unsigned_int_2 = v__termpty_is_dblwidth_get(double_2,int_1);

			int_3 = int_2 * int_2;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				v_termpty_cell_codepoint_att_fill(unsigned_int_1,long_1,short_1,float_1,int_1);

				short_2 = short_2 + short_2;
			}
		}
		v__termpty_charset_trans(unsigned_int_4,float_4);

		unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_6 * unsigned_int_7;
		}
		if(1)
		{
			if(1)
			{
				int int_4 = 1;
				int_4 = int_3 * int_1;
			}
			int_1 = int_5 + int_1;
		}
		double_5 = double_5 + double_1;
		if(1)
		{
			v_termpty_text_scroll_test(char_3,unsigned_int_6,-1 );

			unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
			short_3 = short_1 + short_2;
		}
		int_1 = int_5;
		if(1)
		{
			long long_4 = 1;
			int_6 = int_5 * int_6;
			long_4 = long_4 * long_3;
		}
		if(1)
		{
			long_1 = long_1;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
			if(1)
			{
				unsigned_int_1 = unsigned_int_6;
			}
			if(1)
			{
				double double_6 = 1;
				double_5 = double_6;
			}
			if(1)
			{
				double double_7 = 1;
				unsigned_int_7 = unsigned_int_5;
				double_1 = double_4 * double_7;
			}
		}
		if(1)
		{
			short short_4 = 1;
			int_3 = int_6 + int_3;
			short_2 = short_1 * short_4;
			if(1)
			{
				short_1 = short_3 * short_1;
			}
			double_5 = double_5 * double_4;
			if(1)
			{
				float_3 = float_4 + float_1;
				int_2 = int_6;
			}
			short_3 = short_3 * short_1;
		}
	}
}
float v__csi_arg_get( long parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char_1 = char_1 * char_1;
	double_2 = double_1 * double_1;
	short_2 = short_1 * short_2;
	int_2 = int_1 * int_1;
	char_1 = char_1 * char_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "PI") > 0)
	{
		short_1 = short_2 * short_2;
	}
	return float_1;
}
char v__handle_esc_csi( unsigned int parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short_1 = v__handle_cursor_control(unsigned_int_1,char_1,uni_para);

	double_3 = double_1 + double_2;
	char_2 = char_2 * char_1;
	return char_3;
}
unsigned int v__safechar( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	int_1 = int_3 + int_1;
	return unsigned_int_1;
}
double v__handle_esc( long parameter_1,long parameter_2,unsigned int parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_6 = 1;
	char char_5 = 1;
	short short_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_3 * long_4;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	short_4 = short_2 * short_3;
	if(1)
	{
	}
	long_3 = long_3 + long_2;
	double_4 = double_3 * double_1;
	long_1 = long_5 * long_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_2;
	int_3 = int_4;
	float_2 = float_1 + float_1;
	int_3 = int_4;
	long_2 = long_4 + long_4;
	char_2 = char_1 * char_1;
	double_2 = double_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	short_4 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	float_3 = float_1 * float_3;
	double_3 = double_4;
	unsigned_int_3 = unsigned_int_7 * unsigned_int_4;
	int_4 = int_5;
	int_5 = int_6 + int_6;
	if(1)
	{
		int_5 = int_6 + int_7;
	}
	if(1)
	{
	}
	double_5 = double_2 + double_2;
	int_3 = int_3;
	unsigned_int_1 = unsigned_int_5;
	if(1)
	{
	}
	int_6 = int_2 * int_5;
	int_1 = int_4 + int_2;
	if(1)
	{
	}
	int_2 = int_5 * int_3;
	double_4 = double_5;
	if(1)
	{
	}
	int_1 = int_6 + int_3;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_4;
	double_5 = double_3 * double_1;
	if(1)
	{
	}
	char controller4vul_1635[2];
	fgets(controller4vul_1635 ,2 ,stdin);
	if( strcmp( controller4vul_1635, "y") < 0)
	{
		int int_8 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_9 = 1;
		int_7 = int_1;
		short_3 = short_1 + short_1;
		int_8 = int_4 + int_4;
		int_8 = int_3 * int_5;
		long_5 = long_4;
		char controller4vul_1636[2];
		fgets(controller4vul_1636 ,2 ,stdin);
		if( strcmp( controller4vul_1636, "t") > 0)
		{
			char_1 = v__handle_esc_csi(unsigned_int_8,short_1,int_7,uni_para);

			char_3 = char_1 * char_3;
		}
		unsigned_int_1 = unsigned_int_9 + unsigned_int_4;
		double_5 = double_5 + double_3;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "D") > 0)
		{
			long long_6 = 1;
			char char_4 = 1;
			double_6 = double_2 + double_4;
			long_6 = long_2;
			char_1 = char_4 + char_3;
		}
	}
	if(1)
	{
	}
	double_3 = double_3 + double_6;
	char_5 = char_2 + char_2;
	unsigned_int_6 = unsigned_int_8 * unsigned_int_8;
	short_3 = short_5;
	double_8 = double_7 * double_5;
	return double_4;
}
void v_termpty_cell_fill( float parameter_1,char parameter_2,unsigned int parameter_3,int parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_1 = 1;
			char char_2 = 1;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
			char_2 = char_1 * char_2;
		}
	}
}
void v_termpty_cells_fill( char parameter_1,unsigned int parameter_2,short parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	v_termpty_cell_fill(float_1,char_1,unsigned_int_3,int_1);

	int_1 = int_2 * int_1;
	long_2 = long_1 * long_2;
	long_1 = long_3 + long_3;
}
void v_termpty_cells_clear( int parameter_1,unsigned int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_1;
	v_termpty_cells_fill(char_3,unsigned_int_1,short_1,int_1);

}
double v__tooltip_del(short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double_2 = double_1 * double_1;
	int_1 = int_1;
	int_1 = int_1;
	return double_3;
}
double v__tooltip_content(char parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_1 * double_1;
	float_1 = float_1;
	double_2 = double_2 * double_2;
	return double_2;
	double_1 = v_media_add(double_1,float_2,int_1,int_2,long_1,-1 );

}
void v_MD5Final( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double_2 = double_1 + double_1;
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 + short_1;
	long_1 = long_1 + long_2;
	double_4 = double_3 * double_3;
	if(1)
	{
		v_MD5Transform(double_5,double_2);

		long_3 = long_1 * long_2;
		double_3 = double_1 * double_1;
		double_3 = double_3 * double_4;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		long_3 = long_3 * long_2;
	}
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1;
	double_6 = double_4;
	v_byteReverse(float_2,unsigned_int_3);

	unsigned_int_2 = unsigned_int_4;
}
void v_MD5Transform( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_4 = 1;
	long long_1 = 1;
	double double_5 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	int int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_7 = 1;
	double double_8 = 1;
	char char_5 = 1;
	char char_6 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_9 = 1;
	long long_5 = 1;
	long long_6 = 1;
	long long_7 = 1;
	float float_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2;
	double_1 = double_1;
	double_1 = double_1 * double_2;
	int_2 = int_1 + int_2;
	int_2 = int_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	int_2 = int_1 + int_1;
	char_3 = char_1 + char_2;
	int_2 = int_1;
	double_3 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_2;
	double_4 = double_4;
	short_1 = short_3 * short_3;
	float_3 = float_1 + float_2;
	float_5 = float_1 + float_4;
	short_3 = short_4;
	double_4 = double_1 * double_1;
	long_1 = long_1;
	int_2 = int_1 + int_2;
	char_1 = char_2 + char_3;
	char_2 = char_2 + char_3;
	short_4 = short_4 * short_2;
	double_5 = double_1 * double_4;
	unsigned_int_3 = unsigned_int_3;
	short_1 = short_3 * short_5;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	double_2 = double_5 + double_2;
	int_4 = int_1 * int_3;
	double_5 = double_4 + double_1;
	long_2 = long_1 + long_1;
	int_4 = int_5 * int_3;
	double_5 = double_6;
	float_5 = float_4 * float_3;
	int_3 = int_5 + int_4;
	double_1 = double_6 + double_7;
	int_5 = int_2 + int_1;
	int_5 = int_5;
	char_2 = char_2 * char_3;
	short_5 = short_6 + short_4;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	char_2 = char_4 * char_1;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_3;
	int_2 = int_6 * int_2;
	double_3 = double_6;
	int_4 = int_3;
	int_8 = int_4 * int_7;
	long_2 = long_2 * long_2;
	short_6 = short_7 + short_6;
	double_6 = double_8 * double_8;
	double_6 = double_2 + double_1;
	double_1 = double_5 + double_6;
	short_7 = short_7;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	char_2 = char_5 + char_3;
	char_6 = char_2 + char_2;
	int_5 = int_1 + int_4;
	short_3 = short_3 * short_2;
	short_3 = short_1;
	double_4 = double_4 * double_3;
	long_3 = long_3 + long_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	int_9 = int_5;
	double_8 = double_8;
	char_6 = char_1;
	double_3 = double_7 + double_4;
	long_4 = long_3 * long_2;
	long_7 = long_5 + long_6;
	float_3 = float_6 + float_1;
	int_3 = int_8 * int_9;
}
void v_byteReverse( float parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_1 * int_2;
}
void v_MD5Update( int parameter_1,char parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	v_MD5Transform(double_1,double_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	long_1 = long_1 * long_2;
	double_3 = double_1 * double_3;
	int_2 = int_1 + int_1;
	int_3 = int_3 + int_1;
	long_2 = long_1 + long_2;
	char_1 = char_1 + char_1;
	v_byteReverse(float_1,unsigned_int_1);

	int_1 = int_1 + int_2;
	int_1 = int_4 * int_1;
	int_2 = int_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	long_1 = long_2 * long_1;
	long_2 = long_2;
	short_1 = short_1;
	short_2 = short_1 * short_1;
	long_1 = long_1 * long_2;
	int_3 = int_3 + int_4;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	float_1 = float_1;
	float_2 = float_1 * float_2;
}
void v_MD5Init()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_1 * int_2;
	float_1 = float_1;
	long_1 = long_2;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_1 * char_2;
}
void v_gravatar_tooltip( short parameter_1,double parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	float float_3 = 1;
	char char_5 = 1;
	char_3 = char_1 + char_2;
	long_2 = long_1 * long_2;
	double_2 = double_1 * double_1;
	long_2 = long_1;
	v_MD5Final(double_1,int_1);

	float_1 = float_1 + float_2;
	double_1 = double_1 * double_1;
	double_3 = double_1 * double_1;
	if(1)
	{
	}
	double_4 = double_3 + double_1;
	if(1)
	{
	}
	double_5 = double_1 * double_3;
	double_4 = v__tooltip_del(short_1);

	double_4 = double_5;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_MD5Init();

	double_3 = v__tooltip_content(char_4,int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_2 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		double_2 = double_1 + double_4;
		long_3 = long_2 + long_1;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	int_1 = int_2 + int_2;
	float_3 = float_2;
	v_MD5Update(int_1,char_5,unsigned_int_1);

}
void v__cb_link_drag_done(double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 + int_2;
	short_1 = short_1 + short_1;
	char_1 = char_1;
	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
}
float v__cb_link_drag_accept(short parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char_2 = char_1 * char_1;
	int_2 = int_1 * int_2;
	int_1 = int_2 + int_3;
	return float_1;
}
long v__cb_link_drag_move(unsigned int parameter_2,char parameter_3,char parameter_4,double parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		}
		if(1)
		{
			int int_2 = 1;
			int_1 = int_2 * int_1;
		}
	}
	return long_2;
}
unsigned int v__cb_link_icon_new(int parameter_2,char parameter_3,float parameter_4)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1;
	short_1 = short_2;
	short_2 = short_2 * short_1;
	short_5 = short_3 * short_4;
	double_1 = double_1 + double_2;
	double_1 = double_2 * double_2;
	short_5 = short_2 * short_1;
	return unsigned_int_1;
}
int v__cb_link_move(unsigned int parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	float float_3 = 1;
	char char_5 = 1;
	char char_6 = 1;
	float_2 = float_1 + float_1;
	int_1 = int_2;
	short_1 = short_1 + short_2;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	float_2 = v__cb_link_drag_accept(short_3,long_1);

	int_1 = int_1 + int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_4 = 1;
		double_1 = double_1 + double_2;
		float_1 = float_1 + float_1;
		v__cb_link_drag_done(double_3);

		char_2 = char_1 + char_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_3;
		}
		if(1)
		{
			int_1 = int_3 * int_2;
		}
		unsigned_int_4 = v__cb_link_icon_new(int_3,char_3,float_3);

		char_4 = char_1 * char_2;
		double_1 = double_2 * double_1;
	}
	return int_3;
	long_1 = v__cb_link_drag_move(unsigned_int_1,char_5,char_6,double_3);

}
double v__cb_link_up_delay()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_2;
	int_2 = int_1 + int_1;
	short_1 = short_1 + short_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return double_3;
	double_2 = v__activate_link(double_2,long_1);

}
short v__cb_link_up(int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 + char_1;
	short_1 = short_2;
	if(1)
	{
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = int_1 + int_1;
		short_1 = short_2;
		float_3 = float_1 + float_2;
		double_1 = double_1;
		if(1)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
			if(1)
			{
				double double_2 = 1;
				double double_3 = 1;
				double_3 = double_2 + double_2;
			}
		}
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	return short_1;
	double_4 = v__cb_link_up_delay();

}
void v_term_focus( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_2;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	char_2 = char_1 + char_2;
	short_1 = v__term_is_focused(short_1);

	int_2 = int_1 + int_1;
}
short v__term_is_focused( short parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	int_1 = int_2;
	return short_1;
}
void v_term_unfocus( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short_1 = v__term_is_focused(short_2);

	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "Y") > 0)
	{
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	int_3 = int_1 * int_2;
	char_1 = char_2;
}
short v__cb_ctxp_del(short parameter_2,char parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_term_unfocus(double_1);

	short_1 = short_1;
	int_1 = int_1;
	long_1 = long_1 + long_2;
	int_2 = int_1 + int_1;
	v_term_focus(double_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return short_1;
}
char v__cb_ctxp_dismissed(long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	long_3 = long_1 * long_2;
	long_2 = long_2 * long_3;
	double_2 = double_1 * double_1;
	return char_1;
}
int v__cb_ctxp_link_copy(unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = v__take_selection_text(unsigned_int_2,long_1,short_2,-1 );

	short_3 = short_2;
	float_1 = float_1;
	short_4 = short_2 + short_4;
	short_5 = short_1;
	double_3 = double_1 * double_3;
	return int_1;
}
char v__screen_visual_bounds()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		short_3 = short_1 + short_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		long_2 = long_1 * long_2;
	}
	return char_1;
}
double v__draw_cell( char parameter_1,char parameter_2,char parameter_3,long parameter_4)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char_1 = char_1 * char_1;
	int_1 = int_1;
	int_3 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	}
	double_3 = double_1 + double_2;
	long_1 = long_1;
	unsigned_int_4 = unsigned_int_3;
	double_1 = double_4 + double_3;
	if(1)
	{
		double_3 = double_2 + double_1;
	}
	if(1)
	{
		if(1)
		{
			double_4 = double_5;
		}
		if(1)
		{
			char_1 = char_1 + char_1;
		}
	}
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_5 = 1;
		double_6 = double_4 + double_4;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
		double_6 = double_2;
		unsigned_int_1 = unsigned_int_2;
		long_3 = long_1 + long_2;
		long_5 = long_2 * long_4;
		unsigned_int_5 = unsigned_int_4;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 * int_1;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_2 + char_2;
	}
	if(1)
	{
		long_3 = long_2 + long_3;
	}
	if(1)
	{
		if(1)
		{
			double double_7 = 1;
			double_7 = double_6 + double_5;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_1;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	}
	return double_3;
}
unsigned int v__draw_line( int parameter_1,char parameter_2,float parameter_3,int parameter_4,float parameter_5)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = v__draw_cell(char_1,char_2,char_2,long_1);

	short_2 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	return unsigned_int_1;
}
float v_termpty_backlog_length( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = double_2;
	char_1 = char_1;
	int_1 = int_1 * int_1;
	long_2 = long_1 * long_1;
	short_2 = short_1 + short_2;
	float_3 = float_1 + float_2;
	long_4 = long_3 * long_3;
	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_3 * double_1;
	int_2 = int_2 * int_1;
	char_3 = char_1 + char_2;
	short_2 = short_1;
	if(1)
	{
		char char_4 = 1;
		char_4 = char_1 + char_4;
	}
	int_1 = int_3 * int_1;
	if(1)
	{
		short_2 = short_2 * short_2;
	}
	double_2 = double_1 + double_1;
	if(1)
	{
		short short_3 = 1;
		short_2 = short_2 + short_3;
	}
	char_2 = char_2 * char_2;
	if(1)
	{
		double_3 = double_2;
	}
	int_4 = int_1;
	if(1)
	{
		double_3 = double_1 * double_3;
	}
	double_2 = double_2 * double_1;
	int_3 = int_5 + int_3;
	v_verify_beacon(unsigned_int_2,int_2);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	long_3 = long_5 + long_3;
	long_5 = long_2 + long_1;
	double_3 = double_4 + double_5;
	return float_3;
}
float v_termio_pty_get( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int_3 = int_1 + int_2;
	long_1 = long_1 + long_1;
	return float_1;
}
int v_termio_textgrid_get( unsigned int parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float_1 = float_1;
	short_1 = short_1 * short_1;
	return int_1;
}
char v_miniview_colors_get( double parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_2;
	int_2 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		short short_1 = 1;
		long_1 = long_1;
		short_1 = short_1 * short_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_3 = 1;
		double_1 = double_1 + double_1;
		int_3 = int_1 + int_3;
	}
	return char_1;
	int_1 = v_termio_textgrid_get(unsigned_int_1);

}
float v__deferred_renderer()
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	int int_4 = 1;
	double double_8 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	char char_4 = 1;
	float float_6 = 1;
	char char_5 = 1;
	char char_7 = 1;
	float float_7 = 1;
	char char_8 = 1;
	char_1 = v__screen_visual_bounds();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	double_1 = double_1;
	double_3 = double_1 * double_2;
	double_3 = double_1 * double_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_1;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	float_2 = float_1 * float_2;
	float_1 = v_termpty_backlog_length(float_1);

	double_2 = double_1 + double_4;
	double_5 = double_4 + double_4;
	if(1)
	{
	}
	long_1 = long_2;
	double_7 = double_6 * double_7;
	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_4 = double_4;
	double_5 = double_3 * double_7;
	short_2 = short_1 + short_2;
	if(1)
	{
		int_2 = int_1 * int_3;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_3 * unsigned_int_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_2 = float_2 * float_3;
		if(1)
		{
			char_1 = char_1 * char_2;
		}
		short_2 = short_1 + short_2;
	}
	double_7 = double_2 + double_5;
	int_1 = int_4;
	double_8 = v_termpty_cellrow_get(float_4,int_3,unsigned_int_7);

	long_4 = long_2 * long_4;
	if(1)
	{
		int_4 = int_2 + int_5;
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_2 = unsigned_int_8 * unsigned_int_5;
	}
	int_2 = int_2 * int_2;
	int_3 = int_1 * int_3;
	if(1)
	{
		long long_5 = 1;
		char char_3 = 1;
		long_5 = long_4;
		float_2 = v_termio_pty_get(long_1);

		short_2 = short_3 + short_1;
		if(1)
		{
			float float_5 = 1;
			float_5 = float_1 + float_3;
			char_2 = char_3 + char_1;
		}
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_9 = 1;
				char char_6 = 1;
				int_5 = v_termio_scroll_get(short_3);

				long_2 = long_1;
				unsigned_int_4 = v__draw_line(int_5,char_4,float_6,int_1,float_3);

				unsigned_int_9 = unsigned_int_9 + unsigned_int_6;
				char_6 = char_5 * char_3;
				double_1 = double_8;
			}
			if(1)
			{
				double_7 = double_3 * double_1;
				int_3 = int_5;
			}
		}
	}
	if(1)
	{
		double_6 = double_5 + double_4;
	}
	double_7 = double_2 * double_5;
	char_5 = char_7 + char_2;
	float_7 = float_2 + float_4;
	char_2 = v_miniview_colors_get(double_7,char_8);

	double_8 = double_6 + double_1;
	return float_3;
}
unsigned int v__queue_render( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ")") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		float_1 = v__deferred_renderer();

		char_2 = char_1 * char_1;
	}
	return unsigned_int_1;
}
void v_miniview_redraw( short parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char_1 = char_1;
	if(1)
	{
	}
	int_1 = int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = v__queue_render(long_1);

}
unsigned int v__block_obj_del( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	unsigned_int_1 = v__smart_media_del(char_1,float_1);

	short_2 = short_1 + short_1;
	double_1 = double_2;
	int_2 = int_1 + int_2;
	return unsigned_int_2;
}
short v__termpty_is_dblwidth_slow_get( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "[") < 0)
		{
		}
	}
	return short_1;
}
unsigned int v__termpty_is_dblwidth_get( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
	short_1 = v__termpty_is_dblwidth_slow_get(unsigned_int_1,int_1);

}
short v_term_preedit_str_get( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	float_3 = float_2 * float_1;
	if(1)
	{
	}
	return short_1;
}
short v_media_get( char parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	float_1 = float_1;
	if(1)
	{
	}
	return short_1;
}
short v__smart_media_clicked(float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long_2 = long_1 * long_2;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			short_3 = short_1 + short_2;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					unsigned_int_2 = v_termio_config_get(unsigned_int_1);

					double_1 = double_1 * double_2;
					short_1 = short_2 + short_1;
					if(1)
					{
						double double_3 = 1;
						double_1 = double_3 + double_1;
					}
					if(1)
					{
						long long_3 = 1;
						double_2 = double_1 + double_1;
						long_3 = long_2;
						if(1)
						{
							unsigned int unsigned_int_3 = 1;
							int int_1 = 1;
							int int_2 = 1;
							float float_2 = 1;
							float_1 = v_media_src_type_get(long_4);

							unsigned_int_1 = unsigned_int_3;
							int_2 = int_1 * int_2;
							float_2 = float_2 * float_2;
						}
					}
				}
				unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
			}
		}
	}
	short_3 = v_media_get(char_2);

	long_4 = long_4 * long_5;
	return short_3;
}
unsigned int v_media_control_get( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	return unsigned_int_2;
}
long v__smart_media_stop(unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	return long_1;
}
long v__smart_media_pause(char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "O") > 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return long_1;
}
unsigned int v__smart_media_play(long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	return unsigned_int_1;
}
unsigned int v__smart_media_del(char parameter_2,float parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 + short_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	return unsigned_int_1;
}
void v_media_visualize_set( unsigned int parameter_1,float parameter_2)
{
	float float_1 = 1;
	int int_2 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		if(1)
		{
			int_1 = int_1;
		}
		if(1)
		{
			int_1 = int_2 * int_2;
		}
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "/&") < 0)
	{
		int int_3 = 1;
		int_2 = int_3;
	}
}
void v_media_mute_set( short parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	long_3 = long_4;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
}
void v_media_volume_set( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	long_1 = long_1 * long_2;
	long_3 = long_1;
}
void v__cb_media_vol(int parameter_2,short parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_2;
	if(1)
	{
	}
	v_media_volume_set(int_1,double_1);

	int_1 = int_2 + int_1;
	float_2 = float_2 * float_2;
}
void v__cb_media_pos(int parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	v_media_position_set(double_1,double_2);

	char_1 = char_1 * char_1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	char_3 = char_1 * char_2;
}
double v__cb_media_pos_drag_stop(short parameter_2,unsigned int parameter_3,long parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char_2 = char_1 + char_2;
	short_3 = short_1 * short_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_3 + char_2;
	long_2 = long_1 * long_1;
	double_1 = double_2;
	char_1 = char_2;
	return double_3;
}
int v__cb_media_pos_drag_start(unsigned int parameter_2,short parameter_3,long parameter_4)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	v_media_position_set(double_1,double_1);

	short_1 = short_1 * short_1;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	double_1 = double_1;
	int_1 = int_1 * int_1;
	double_3 = double_1 * double_2;
	return int_2;
}
void v_media_stop( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	int_2 = int_2 * int_1;
	long_1 = long_1;
}
double v__cb_media_stop(unsigned int parameter_2,double parameter_3,float parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char_1 = char_1;
	return double_1;
	v_media_stop(int_1);

}
long v__cb_media_pause(int parameter_2,long parameter_3,long parameter_4)
{
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	v_media_play_set(char_1,int_1);

	double_1 = double_1 + double_1;
	return long_1;
}
void v_media_play_set( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1;
		double_2 = double_2 + double_1;
	}
	if(1)
	{
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		long_1 = long_1 * long_1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	}
}
long v__cb_media_play(char parameter_2,char parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return long_1;
	v_media_play_set(char_1,int_1);

}
void v_media_position_set( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int_1 = int_2;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	char_1 = char_1 * char_1;
}
int v__cb_mov_ref(double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
unsigned int v__cb_mov_progress(char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	return unsigned_int_3;
}
void v__cb_mov_restart()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	double_2 = double_1 * double_1;
	double_4 = double_3 * double_3;
}
short v__cb_mov_decode_stop(long parameter_2)
{
	short short_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 + int_2;
	}
	v__cb_mov_restart();

	double_1 = double_1;
	int_4 = int_2 * int_3;
	return short_1;
}
char v__cb_mov_len_change(int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short_1 = short_1 * short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "`K") < 0)
	{
	}
	return char_1;
}
char v__cb_mov_frame_resize(float parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	float_3 = float_1 * float_2;
	int_1 = int_2 * int_1;
	return char_1;
	char_2 = v__type_mov_calc(unsigned_int_1,short_1,short_1,short_1,char_1);

}
unsigned int v__cb_mov_frame_decode(double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int int_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	char_1 = char_1 * char_2;
	char_2 = v__type_mov_calc(unsigned_int_2,short_1,short_1,short_2,char_1);

	int_1 = int_1 + int_1;
	double_3 = double_1 + double_2;
	char_3 = char_3;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	short_3 = short_2 * short_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	long_2 = long_1 + long_1;
	return unsigned_int_3;
}
char v__type_mov_init( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	long long_4 = 1;
	char char_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_6 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	double double_7 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_8 = 1;
	long long_5 = 1;
	int int_8 = 1;
	double double_9 = 1;
	double_1 = double_1 * double_2;
	double_1 = double_2 * double_3;
	v__cb_media_pos(int_1,unsigned_int_1,unsigned_int_2);

	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_1;
	char_1 = v__cb_mov_frame_resize(float_1);

	long_1 = long_3;
	double_4 = double_4 * double_4;
	float_3 = float_2 + float_1;
	if(1)
	{
		float_2 = float_4 + float_5;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		int_2 = int_3 + int_2;
		long_2 = v__cb_media_pause(int_1,long_2,long_2);

		v__cb_media_vol(int_4,short_1,int_3);

		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	}
	float_1 = float_5 * float_1;
	unsigned_int_2 = v__cb_mov_progress(char_2);

	double_1 = v__cb_media_stop(unsigned_int_4,double_4,float_2);

	double_3 = double_3 + double_5;
	long_4 = v__cb_media_play(char_2,char_2,float_4);

	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	v_media_play_set(char_3,int_3);

	int_3 = int_5 + int_3;
	int_4 = v__cb_media_pos_drag_start(unsigned_int_5,short_1,long_2);

	unsigned_int_2 = unsigned_int_1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_4;
	if(1)
	{
		unsigned_int_2 = v__cb_mov_frame_decode(double_3);

		unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
	}
	if(1)
	{
		double_5 = double_2 * double_4;
	}
	char_2 = char_1;
	char_1 = v__cb_mov_len_change(int_1);

	float_3 = v_theme_apply(long_3,char_2,unsigned_int_3);

	float_1 = float_3 + float_3;
	unsigned_int_5 = unsigned_int_2;
	int_3 = int_1;
	double_6 = v__cb_media_pos_drag_stop(short_4,unsigned_int_4,long_1);

	unsigned_int_6 = unsigned_int_3 + unsigned_int_1;
	v_media_mute_set(short_5,short_3);

	double_1 = double_7 * double_6;
	v_media_visualize_set(unsigned_int_6,float_4);

	int_1 = int_3;
	long_3 = long_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_2 + double_2;
	short_5 = v__cb_mov_decode_stop(long_2);

	double_6 = double_4;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_3;
	int_7 = int_5 + int_6;
	v_media_position_set(double_7,double_8);

	double_8 = double_4 + double_2;
	long_2 = long_5 * long_1;
	char_3 = char_2 * char_1;
	long_5 = long_3 + long_3;
	if(1)
	{
		float float_6 = 1;
		float_6 = float_5;
	}
	if(1)
	{
		long long_6 = 1;
		long_1 = long_6;
	}
	return char_1;
	int_8 = v__cb_mov_ref(double_9);

}
unsigned int v__cb_edje_preloaded(char parameter_2,unsigned int parameter_3,float parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "3") < 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 + double_2;
	return unsigned_int_2;
}
unsigned int v__type_edje_init( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_2;
	int_3 = int_1 + int_1;
	double_2 = double_3 + double_2;
	unsigned_int_1 = v__cb_edje_preloaded(char_1,unsigned_int_1,float_1);

	v_theme_auto_reload_enable(long_1);

	int_1 = int_1 * int_3;
	int_4 = int_2 + int_4;
	int_5 = int_5 * int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "8") < 0)
		{
			unsigned int unsigned_int_4 = 1;
			long long_2 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
			long_1 = long_2;
			char_3 = char_2 * char_1;
		}
	}
	return unsigned_int_1;
}
long v__type_scale_init( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_1;
	short_3 = short_1 * short_2;
	int_3 = int_2 + int_3;
	float_1 = float_1;
	int_3 = int_1;
	short_3 = short_2 + short_2;
	float_2 = v__cb_scale_preloaded(double_1,unsigned_int_1);

	int_3 = int_2 + int_1;
	int_3 = int_3 + int_3;
	float_4 = float_2 * float_3;
	int_5 = int_1 * int_4;
	int_3 = int_1 * int_6;
	int_3 = int_3;
	return long_1;
}
unsigned int v__cb_img_frame()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	long_1 = long_1 * long_1;
	if(1)
	{
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long_3 = long_2 * long_3;
		if(1)
		{
			int int_1 = 1;
			int_2 = int_1 + int_1;
		}
		char_1 = char_1 + char_1;
		unsigned_int_2 = unsigned_int_3;
		if(1)
		{
			if(1)
			{
				int_3 = int_2 * int_3;
			}
		}
	}
	float_3 = float_1 * float_2;
	int_3 = int_3 * int_2;
	char_3 = char_1 * char_2;
	return unsigned_int_4;
}
int v__type_img_anim_handle( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	int int_1 = 1;
	short_1 = short_2;
	double_2 = double_1 * double_2;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	double_3 = double_1 * double_3;
	short_3 = short_2 + short_2;
	if(1)
	{
	}
	unsigned_int_1 = v__cb_img_frame();

	double_2 = double_3;
	float_3 = float_1 + float_2;
	return int_1;
}
void v__cb_img_preloaded(short parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	double_1 = double_2;
	int_2 = int_1 * int_1;
}
int v__type_img_init( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long_1 = long_2;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = v__type_img_anim_handle(char_1);

	double_2 = double_1;
	short_2 = short_1 + short_1;
	long_4 = long_3 + long_3;
	int_1 = int_1 + int_2;
	short_2 = short_3;
	v__cb_img_preloaded(short_2,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_4 = double_3 + double_1;
	float_3 = float_1 * float_2;
	char_1 = char_2 * char_3;
	return int_1;
}
int v__url_compl_cb(int parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_2 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	int int_4 = 1;
	short short_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int_2 = int_1 * int_1;
	float_1 = float_1;
	double_1 = double_1 + double_1;
	char controller4vul_1667[3];
	fgets(controller4vul_1667 ,3 ,stdin);
	if( strcmp( controller4vul_1667, "oq") > 0)
	{
		char_1 = v__smart_calculate(short_1,uni_para);

	}
	if(1)
	{
	}
	int_2 = int_2 + int_1;
	int_3 = int_3 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_1;
	float_1 = float_1 * float_1;
	char_2 = char_2 + char_3;
	long_4 = long_3 * long_1;
	int_2 = int_2 * int_3;
	short_2 = short_1 + short_1;
	double_1 = double_1 * double_2;
	short_4 = short_3 + short_1;
	float_2 = float_2;
	int_1 = int_4 + int_3;
	char_3 = char_3 * char_2;
	short_3 = short_5 * short_5;
	float_4 = float_3 + float_3;
	unsigned_int_3 = unsigned_int_3;
	short_6 = short_3 * short_3;
	int_6 = int_1 * int_5;
	return int_3;
}
unsigned int v__url_prog_cb(int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 + int_1;
	char_1 = char_1;
	int_1 = int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float_2 = float_1 * float_1;
		if(1)
		{
			short_1 = short_1 * short_2;
		}
		double_2 = double_1 + double_1;
		short_1 = short_2 * short_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			double_3 = double_4;
			int_1 = int_4;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
		}
	}
	return unsigned_int_2;
}
short v__type_thumb_calc( unsigned int parameter_1,char parameter_2,float parameter_3,int parameter_4,float parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float_1 = float_2;
	if(1)
	{
	}
	if(1)
	{
		char_1 = char_2;
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		float float_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		char_1 = char_2;
		double_2 = double_1 + double_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			int int_2 = 1;
			double_1 = double_2;
			int_1 = int_2;
			if(1)
			{
				int_2 = int_2;
			}
		}
		if(1)
		{
			double double_3 = 1;
			int int_3 = 1;
			double_3 = double_3 + double_2;
			int_3 = int_1 * int_1;
		}
		char_3 = char_2 + char_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		float_3 = float_3 + float_1;
		int_5 = int_4 + int_1;
	}
	char_1 = char_3;
	char_4 = char_1 + char_2;
	return short_1;
}
char v__type_mov_calc( unsigned int parameter_1,short parameter_2,short parameter_3,short parameter_4,char parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	float float_6 = 1;
	float float_7 = 1;
	short short_3 = 1;
	char char_3 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	int_3 = int_2 + int_2;
	float_2 = float_1 + float_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		int int_4 = 1;
		double double_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		float_3 = float_3 * float_4;
		double_2 = double_1 * double_1;
		int_4 = int_1 + int_2;
		if(1)
		{
			float float_5 = 1;
			float_3 = float_5 * float_2;
		}
		if(1)
		{
			double_3 = double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
			short_1 = short_1;
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
				unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
				if(1)
				{
					unsigned int unsigned_int_6 = 1;
					unsigned_int_6 = unsigned_int_5 + unsigned_int_5;
				}
			}
		}
		if(1)
		{
			int_1 = int_2 * int_3;
			int_2 = int_1 + int_2;
			if(1)
			{
				int int_5 = 1;
				int int_6 = 1;
				long long_3 = 1;
				int_6 = int_5 * int_6;
				long_2 = long_2 * long_3;
				if(1)
				{
					short_1 = short_2;
				}
			}
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
			float_2 = float_6 + float_4;
		}
		long_2 = long_1 + long_4;
		short_2 = short_1 + short_1;
		unsigned_int_8 = unsigned_int_4 * unsigned_int_7;
		double_3 = double_3 * double_2;
	}
	float_7 = float_6 + float_6;
	short_3 = short_3 * short_2;
	return char_3;
}
void v__type_edje_calc( int parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4,float parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	char_1 = char_1 * char_1;
}
int v__type_img_calc( unsigned int parameter_1,float parameter_2,char parameter_3,long parameter_4,long parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_4 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		float float_2 = 1;
		double_1 = double_1 + double_1;
		float_1 = float_1 + float_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "O") > 0)
	{
		float float_3 = 1;
		float float_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_7 = 1;
		short short_4 = 1;
		long long_1 = 1;
		float_4 = float_3 * float_4;
		if(1)
		{
			int_3 = int_2 * int_3;
			char_2 = char_1 + char_1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				char char_3 = 1;
				unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
				char_3 = char_3 * char_3;
				if(1)
				{
					short_2 = short_1 * short_2;
				}
			}
		}
		if(1)
		{
			float_1 = float_4 + float_1;
			double_1 = double_1 * double_1;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				char char_4 = 1;
				unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
				char_2 = char_4;
				if(1)
				{
					unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
				}
			}
			if(1)
			{
				short short_3 = 1;
				short_3 = short_2 * short_3;
				int_2 = int_1 + int_1;
			}
		}
		if(1)
		{
			char char_5 = 1;
			unsigned int unsigned_int_6 = 1;
			char_1 = char_5;
			unsigned_int_6 = unsigned_int_5;
		}
		int_1 = int_3 + int_1;
		unsigned_int_2 = unsigned_int_7 * unsigned_int_3;
		short_4 = short_4 * short_1;
		long_1 = long_1;
	}
	unsigned_int_8 = unsigned_int_3 + unsigned_int_8;
	int_1 = int_4 * int_3;
	return int_2;
}
float v__cb_scale_preloaded(double parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		int int_2 = 1;
		float_3 = float_1 + float_2;
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_5 = 1;
		int_4 = int_1 * int_3;
		char_1 = char_1 * char_2;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		short_1 = short_2;
		int_5 = int_5 * int_5;
	}
	return float_1;
}
float v__type_scale_calc( double parameter_1,unsigned int parameter_2,char parameter_3,char parameter_4,int parameter_5,int uni_para)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_5 = 1;
	char * vul_var;
	char_1 = char_1 + char_1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1 + double_2;
		int_3 = int_1 * int_2;
	}
	char controller4vul_1675[3];
	fgets(controller4vul_1675 ,3 ,stdin);
	if( strcmp( controller4vul_1675, "<Q") > 0)
	{
		double double_3 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char controller4vul_1676[2];
		fgets(controller4vul_1676 ,2 ,stdin);
		if( strcmp( controller4vul_1676, "V") > 0)
		{
			strcpy(vul_var, "CWE-761");
			double_3 = double_2 + double_3;
			char_1 = char_1 * char_1;
			char controller4vul_1677[2];
			fgets(controller4vul_1677 ,2 ,stdin);
			if( strcmp( controller4vul_1677, "v") < 0)
			{
				int int_4 = 1;
				int_5 = int_4 + int_4;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
				char controller4vul_1678[3];
				fgets(controller4vul_1678 ,3 ,stdin);
				if( strcmp( controller4vul_1678, "Kz") < 0)
				{
					if(uni_para == 447)
					{
						vul_var = vul_var + 1;
					}
					free(vul_var);
					float_1 = float_1 * float_2;
				}
			}
		}
		if(1)
		{
			long_1 = long_1 * long_2;
			double_3 = double_1 * double_3;
			if(1)
			{
				double_1 = double_1 + double_1;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
				if(1)
				{
					short_1 = short_1 + short_1;
				}
			}
		}
		if(1)
		{
			char_2 = char_2;
			int_3 = int_3 + int_3;
		}
		unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
		unsigned_int_4 = unsigned_int_4;
		long_2 = long_1 + long_1;
		long_4 = long_2 + long_3;
	}
	if(1)
	{
		long long_5 = 1;
		short short_2 = 1;
		float float_3 = 1;
		short short_3 = 1;
		long_1 = long_3;
		long_5 = long_3 * long_2;
		short_1 = short_1 * short_1;
		if(1)
		{
			int_2 = int_3 + int_5;
		}
		if(1)
		{
			char_2 = char_2;
		}
		if(1)
		{
			long long_6 = 1;
			long_5 = long_2 + long_4;
			float_1 = float_1 + float_1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
			short_1 = short_1 * short_2;
			int_1 = int_1;
			long_5 = long_5 + long_5;
			float_2 = float_2 + float_3;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
			long_6 = long_3 + long_1;
		}
		short_3 = short_2 + short_1;
		float_3 = float_4 * float_4;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		float_2 = float_2 * float_4;
		unsigned_int_2 = unsigned_int_6;
	}
	char_1 = char_3 * char_2;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_7;
	float_5 = float_5 * float_5;
}
double v__unsmooth_timeout(int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	double_3 = double_4 + double_2;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	char controller4vul_1673[3];
	fgets(controller4vul_1673 ,3 ,stdin);
	if( strcmp( controller4vul_1673, "L$") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
		char controller4vul_1674[2];
		fgets(controller4vul_1674 ,2 ,stdin);
		if( strcmp( controller4vul_1674, "/") > 0)
		{
			int int_2 = 1;
			int int_3 = 1;
			float_1 = v__type_scale_calc(double_1,unsigned_int_1,char_1,char_1,int_1,uni_para);

			int_3 = int_2 + int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "#") < 0)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	return double_2;
}
float v__smooth_handler( float parameter_1,int uni_para)
{
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	float float_4 = 1;
	double_1 = double_1 * double_1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	float_3 = float_1 + float_2;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	char controller4vul_1669[2];
	fgets(controller4vul_1669 ,2 ,stdin);
	if( strcmp( controller4vul_1669, "S") < 0)
	{
		char controller4vul_1670[3];
		fgets(controller4vul_1670 ,3 ,stdin);
		if( strcmp( controller4vul_1670, "<4") > 0)
		{
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double_3 = double_2 * double_2;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			char controller4vul_1671[2];
			fgets(controller4vul_1671 ,2 ,stdin);
			if( strcmp( controller4vul_1671, "f") > 0)
			{
				double double_4 = 1;
				double_4 = double_1 + double_1;
				char controller4vul_1672[3];
				fgets(controller4vul_1672 ,3 ,stdin);
				if( strcmp( controller4vul_1672, ";Y") > 0)
				{
					char char_1 = 1;
					char char_2 = 1;
					double_3 = v__unsmooth_timeout(uni_para);

					char_2 = char_1 * char_2;
				}
			}
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long_2 = long_1 + long_1;
			}
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				int_2 = int_1 * int_2;
			}
			short_3 = short_1 + short_2;
		}
	}
	if(1)
	{
		short short_4 = 1;
		if(1)
		{
			float_1 = float_3 * float_3;
		}
		short_1 = short_4;
	}
	return float_4;
}
char v__smart_calculate( short parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	double double_6 = 1;
	int int_6 = 1;
	char char_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double_3 = double_1 + double_2;
	double_5 = double_4 * double_5;
	char controller4vul_1668[2];
	fgets(controller4vul_1668 ,2 ,stdin);
	if( strcmp( controller4vul_1668, "<") < 0)
	{
		float_1 = v__smooth_handler(float_1,uni_para);

	}
	double_1 = double_2 * double_4;
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		int_2 = int_1 + int_3;
	}
	double_3 = double_2 + double_5;
	double_3 = double_2 + double_5;
	float_3 = float_2 + float_3;
	int_4 = int_4 + int_5;
	double_4 = double_1 * double_3;
	short_1 = short_1 * short_1;
	int_2 = int_2 * int_4;
	float_3 = float_3;
	double_6 = double_2 + double_4;
	int_1 = int_5 + int_6;
	char_1 = char_1 + char_1;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_6 + double_5;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_2 + char_2;
		double_3 = double_5 * double_2;
	}
	if(1)
	{
		int int_7 = 1;
		int int_8 = 1;
		int_2 = int_4 + int_7;
		int_7 = int_8 + int_3;
	}
	return char_3;
}
short v__smart_move( unsigned int parameter_1,unsigned int parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	return short_1;
}
unsigned int v__smart_resize( double parameter_1,float parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 * double_2;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	char_4 = char_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_1;
}
unsigned int v__smart_del( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_6 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		long long_1 = 1;
		short_2 = short_1 + short_1;
		long_1 = long_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	double_1 = double_2 * double_1;
	int_3 = int_1 + int_2;
	double_2 = double_1 * double_3;
	if(1)
	{
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	}
	if(1)
	{
		int_2 = int_4 * int_4;
	}
	if(1)
	{
		double double_4 = 1;
		double_3 = double_3 + double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		short_5 = short_3 + short_4;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_1 = unsigned_int_7 + unsigned_int_4;
	}
	if(1)
	{
		int_1 = int_1 + int_4;
	}
	if(1)
	{
		short_1 = short_2 + short_2;
	}
	if(1)
	{
		double_1 = double_2 + double_2;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_2 + char_1;
	}
	unsigned_int_8 = unsigned_int_4 + unsigned_int_4;
	short_6 = short_1 + short_6;
	return unsigned_int_1;
}
double v__smart_add( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1 * int_1;
	int_1 = int_2 * int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	float_1 = float_1 + float_1;
	int_3 = int_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	double_2 = double_1 * double_2;
	short_1 = short_1 * short_2;
	return double_2;
}
void v__smart_init()
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	short_1 = v__smart_move(unsigned_int_1,unsigned_int_2,long_1);

	char_2 = char_1 + char_2;
	short_2 = short_1 * short_2;
	unsigned_int_1 = v__smart_del(unsigned_int_3);

	unsigned_int_3 = v__smart_resize(double_1,float_1,float_1);

	long_2 = long_2 * long_2;
	char_1 = char_2;
	int_1 = int_1 * int_1;
	double_2 = v__smart_add(short_1);

	short_4 = short_3 + short_2;
	long_3 = long_1 * long_3;
	char_1 = char_1 * char_1;
	int_2 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_1;
	char_3 = v__smart_calculate(short_4,-1 );

}
double v_media_add( double parameter_1,float parameter_2,int parameter_3,int parameter_4,long parameter_5,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_11 = 1;
	int int_6 = 1;
	char char_5 = 1;
	float_1 = float_1 * float_2;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	char_2 = char_1 * char_2;
	if(1)
	{
		float_2 = float_3 * float_2;
	}
	if(1)
	{
		int_2 = int_3 + int_3;
	}
	char_4 = char_1 + char_3;
	double_1 = double_1;
	if(1)
	{
	}
	double_1 = double_1;
	double_1 = double_2 + double_3;
	long_3 = long_3 * long_1;
	double_3 = double_3 * double_1;
	double_4 = double_5;
	char controller4vul_1662[2];
	fgets(controller4vul_1662 ,2 ,stdin);
	if( strcmp( controller4vul_1662, "T") < 0)
	{
		char controller4vul_1663[2];
		fgets(controller4vul_1663 ,2 ,stdin);
		if( strcmp( controller4vul_1663, "#") > 0)
		{
			double_6 = double_2 + double_4;
			int_4 = int_3;
			if(1)
			{
				int_1 = int_1;
				short_3 = short_1 + short_2;
				int_2 = int_3;
			}
			if(1)
			{
				int_1 = int_3 * int_1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
			}
			if(1)
			{
				int_2 = int_1 * int_4;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
			}
			if(1)
			{
				double_6 = double_6 + double_4;
			}
			if(1)
			{
				int_4 = int_1 + int_4;
			}
			if(1)
			{
				int_1 = int_4 + int_5;
			}
			if(1)
			{
				long long_4 = 1;
				long_4 = long_4 + long_2;
				double_1 = double_5 + double_1;
				char_1 = char_3 * char_4;
				double_7 = double_5;
				unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
				unsigned_int_6 = unsigned_int_6 * unsigned_int_6;
				double_4 = double_5;
			}
			char controller4vul_1664[2];
			fgets(controller4vul_1664 ,2 ,stdin);
			if( strcmp( controller4vul_1664, "*") < 0)
			{
				unsigned int unsigned_int_7 = 1;
				unsigned_int_7 = unsigned_int_5 * unsigned_int_7;
				unsigned_int_5 = unsigned_int_2 + unsigned_int_7;
				unsigned_int_8 = unsigned_int_4 + unsigned_int_7;
				char controller4vul_1665[2];
				fgets(controller4vul_1665 ,2 ,stdin);
				if( strcmp( controller4vul_1665, "A") < 0)
				{
					int_3 = int_3 + int_2;
					char controller4vul_1666[2];
					fgets(controller4vul_1666 ,2 ,stdin);
					if( strcmp( controller4vul_1666, "A") < 0)
					{
						int_5 = v__url_compl_cb(int_4,uni_para);

						unsigned_int_9 = unsigned_int_8 + unsigned_int_3;
						unsigned_int_6 = unsigned_int_10 * unsigned_int_5;
					}
					if(1)
					{
						double_2 = double_2 + double_5;
						if(1)
						{
							short_1 = short_4 + short_1;
							double_4 = double_3 + double_6;
							double_1 = double_4 + double_7;
						}
						if(1)
						{
							unsigned_int_11 = unsigned_int_4 + unsigned_int_2;
							unsigned_int_3 = unsigned_int_5 * unsigned_int_10;
							unsigned_int_11 = unsigned_int_3 + unsigned_int_1;
							long_3 = long_2 * long_3;
							float_1 = float_3;
							double_6 = double_4 + double_6;
							float_1 = float_3 * float_3;
							double_4 = double_7 + double_4;
							unsigned_int_7 = unsigned_int_6 + unsigned_int_7;
						}
					}
				}
				if(1)
				{
					unsigned_int_5 = unsigned_int_11 * unsigned_int_2;
				}
			}
		}
		if(1)
		{
			float float_4 = 1;
			float float_5 = 1;
			float_4 = float_5;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_10 = unsigned_int_2 + unsigned_int_9;
			unsigned_int_11 = unsigned_int_4 + unsigned_int_5;
		}
	}
	if(1)
	{
		double double_8 = 1;
		double double_9 = 1;
		if(1)
		{
			int_2 = int_2 * int_4;
			int_1 = int_4 + int_2;
		}
		int_4 = int_5;
		if(1)
		{
			double_6 = double_7 * double_8;
			unsigned_int_11 = unsigned_int_2;
		}
		unsigned_int_6 = unsigned_int_8 + unsigned_int_4;
		if(1)
		{
			short_2 = short_3 * short_1;
			double_6 = double_1 * double_8;
		}
		short_2 = short_4 + short_1;
		if(1)
		{
			char_1 = char_3 + char_3;
			double_2 = double_2 * double_4;
		}
		double_4 = double_9 + double_9;
		int_4 = int_2 + int_3;
	}
	int_1 = int_3 + int_1;
	int_3 = int_5 + int_4;
	int_6 = int_3 * int_5;
	char_5 = char_5 + char_5;
	int_6 = int_3 + int_6;
	double_5 = double_3;
	int_5 = int_1;
	int_2 = int_6 * int_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 * unsigned_int_10;
	}
	return double_4;
}
int v__block_media_activate( long parameter_1,unsigned int parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	char char_2 = 1;
	int int_4 = 1;
	char char_3 = 1;
	double double_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	int_2 = int_1 + int_1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_2;
	short_2 = short_1 + short_1;
	double_1 = double_1 * double_3;
	char controller4vul_1661[3];
	fgets(controller4vul_1661 ,3 ,stdin);
	if( strcmp( controller4vul_1661, "d+") > 0)
	{
		double_1 = v_media_add(double_2,float_1,int_3,int_1,long_1,uni_para);

		double_4 = double_1 * double_2;
	}
	if(1)
	{
		int_2 = int_3 * int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		int_4 = int_3;
	}
	if(1)
	{
		int_3 = int_2 * int_4;
	}
	if(1)
	{
		char char_4 = 1;
		char_4 = char_3 + char_2;
	}
	double_2 = double_5 * double_5;
	char_5 = char_5;
	if(1)
	{
		double_4 = double_5 * double_3;
	}
	char_6 = char_6 + char_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_1 + double_4;
	char_2 = char_7;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		int int_5 = 1;
		int_5 = int_2 * int_5;
		double_5 = double_4 * double_4;
	}
	double_4 = double_5 * double_4;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	double_5 = double_6;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	return int_1;
}
void v__block_edje_message_cb(long parameter_2,unsigned int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_3 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	unsigned int unsigned_int_12 = 1;
	unsigned int unsigned_int_13 = 1;
	double double_6 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_14 = 1;
	long long_6 = 1;
	long long_7 = 1;
	char char_7 = 1;
	float float_7 = 1;
	short short_7 = 1;
	short short_8 = 1;
	double double_7 = 1;
	float float_8 = 1;
	float_2 = float_1 + float_1;
	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1;
	short_3 = short_2 + short_1;
	float_1 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
		float_1 = float_1 * float_3;
	}
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 * double_2;
	int_1 = int_2;
	long_1 = long_3 + long_3;
	long_1 = long_1 + long_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_6;
	double_1 = double_2;
	short_4 = short_1 * short_1;
	char_3 = char_2 * char_3;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	float_5 = float_4 * float_4;
	int_3 = int_3 * int_2;
	long_1 = long_5;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
		float_3 = float_3 + float_3;
	}
	long_2 = long_2 + long_5;
	unsigned_int_1 = unsigned_int_7 * unsigned_int_4;
	char_4 = char_3 * char_3;
	float_1 = float_1 + float_3;
	double_2 = double_2 * double_2;
	unsigned_int_6 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_7 + unsigned_int_8;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_4 = short_2 * short_3;
		char_4 = char_5 + char_2;
		double_3 = double_2 * double_2;
	}
	long_1 = long_3 * long_5;
	double_5 = double_4 + double_1;
	int_3 = int_3 + int_4;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
	unsigned_int_9 = unsigned_int_3 * unsigned_int_8;
	int_3 = int_1 + int_2;
	long_2 = long_1 + long_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char char_6 = 1;
		float_5 = float_6 * float_1;
		char_3 = char_6;
		unsigned_int_10 = unsigned_int_10;
	}
	float_3 = float_4 * float_2;
	double_1 = double_3 + double_2;
	unsigned_int_12 = unsigned_int_3 * unsigned_int_11;
	double_1 = double_3 * double_3;
	unsigned_int_1 = unsigned_int_10 + unsigned_int_13;
	unsigned_int_8 = unsigned_int_5 + unsigned_int_5;
	double_6 = double_1 * double_5;
	unsigned_int_10 = unsigned_int_6 * unsigned_int_1;
	double_3 = double_2 + double_4;
	short_2 = short_2;
	unsigned_int_1 = unsigned_int_10 * unsigned_int_1;
	short_6 = short_2 * short_5;
	unsigned_int_14 = unsigned_int_12;
	int_1 = int_2 * int_4;
	short_4 = short_3 + short_4;
	long_6 = long_5 + long_3;
	long_7 = long_4 + long_7;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short_2 = short_4 * short_2;
		char_3 = char_5 + char_4;
		unsigned_int_11 = unsigned_int_14 * unsigned_int_13;
	}
	char_3 = char_2 + char_7;
	float_1 = float_3 * float_7;
	short_5 = short_3;
	char_1 = char_4 + char_4;
	unsigned_int_11 = unsigned_int_3;
	short_7 = short_7 * short_5;
	int_3 = int_3 * int_1;
	long_7 = long_2 * long_3;
	short_8 = short_1 * short_4;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		int int_5 = 1;
		int_4 = int_4 + int_5;
		float_3 = float_2;
		v_termpty_write(int_4,double_7,int_1);

		unsigned_int_3 = unsigned_int_2;
	}
	unsigned_int_13 = unsigned_int_8 + unsigned_int_12;
	unsigned_int_13 = unsigned_int_3 + unsigned_int_2;
	float_6 = float_3 + float_8;
}
void v_termpty_write( int parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ":]") < 0)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
}
double v__block_edje_signal_cb(char parameter_2,float parameter_3,char parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_5 = 1;
	float_2 = float_1 * float_2;
	long_1 = long_1 * long_2;
	double_1 = double_2;
	float_3 = float_2 * float_1;
	double_2 = double_2;
	double_3 = double_2 + double_3;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		v_termpty_write(int_1,double_4,int_2);

		unsigned_int_1 = unsigned_int_2;
	}
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		double_4 = double_3 * double_4;
		double_4 = double_2 + double_3;
		long_1 = long_2 + long_2;
		long_3 = long_1;
		double_5 = double_5 * double_4;
		double_2 = double_3 * double_2;
		long_2 = long_3 + long_4;
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		double_1 = double_4 + double_3;
		double_5 = double_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return double_4;
}
void v_termpty_block_chid_update( unsigned int parameter_1,float parameter_2)
{
	double double_1 = 1;
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
	}
	double_1 = double_1;
}
short v__block_edje_cmds( int parameter_1,short parameter_2,unsigned int parameter_3,double parameter_4)
{
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
	v_termpty_block_chid_update(unsigned_int_1,float_1);

	double_1 = v__block_edje_signal_cb(char_1,float_1,char_2);

	v__block_edje_message_cb(long_1,unsigned_int_1,int_1);

}
int v_homedir_get( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		int_1 = int_1 + int_1;
		double_1 = double_1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "^") < 0)
		{
			int_2 = int_1 * int_2;
		}
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	return int_2;
}
short v__block_edje_activate( short parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	double double_6 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_2;
	short_1 = v__block_edje_cmds(int_1,short_2,unsigned_int_1,double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	double_2 = double_3;
	if(1)
	{
		long long_1 = 1;
		long_3 = long_1 + long_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "9") > 0)
	{
		unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
		if(1)
		{
			long long_4 = 1;
			long_4 = long_3 + long_2;
			unsigned_int_4 = v_config_theme_path_default_get(short_3);

			double_5 = double_4 * double_3;
		}
		char controller_6[2];
		fgets(controller_6 ,2 ,stdin);
		if( strcmp( controller_6, "8") < 0)
		{
			float float_1 = 1;
			float_1 = float_1 * float_2;
			double_6 = double_4 + double_2;
		}
	}
	double_1 = double_4;
	float_2 = float_2 + float_2;
	long_2 = long_3 + long_3;
	double_5 = double_3;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 + int_1;
	}
	if(1)
	{
		double_2 = double_1 + double_6;
	}
	return short_3;
	int_1 = v_homedir_get(char_1,long_3);

}
unsigned int v__block_activate( char parameter_1,long parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_1660[2];
	fgets(controller4vul_1660 ,2 ,stdin);
	if( strcmp( controller4vul_1660, "3") < 0)
	{
		int_1 = v__block_media_activate(long_1,unsigned_int_3,uni_para);

	}
	int_3 = int_2 + int_2;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	double_2 = double_3 + double_1;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	return unsigned_int_4;
}
unsigned int v_termpty_block_get( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	return unsigned_int_1;
}
int v_termpty_block_id_get( long parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int_1 = int_2;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	char_1 = char_1 + char_1;
	int_5 = int_3 + int_4;
	return int_1;
}
void v_termpty_backscroll_adjust( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	if(1)
	{
	}
	short_3 = short_1 + short_2;
	v_verify_beacon(unsigned_int_1,int_1);

	float_3 = float_1 * float_2;
}
void v__smart_apply( short parameter_1,int uni_para)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_6 = 1;
	short short_6 = 1;
	short short_7 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_5 = 1;
	double double_10 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	short short_8 = 1;
	int int_7 = 1;
	long long_8 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_5 = 1;
	double double_11 = 1;
	short short_9 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_12 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_11 = 1;
	long long_9 = 1;
	float float_6 = 1;
	short_1 = short_1 + short_1;
	char_3 = char_1 * char_2;
	char_3 = char_2 + char_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	float_2 = float_1 + float_1;
	int_2 = int_1 + int_1;
	int_2 = int_2;
	long_2 = long_1 + long_1;
	double_1 = double_1 + double_2;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		double double_3 = 1;
		char_3 = char_2 + char_4;
		int_3 = int_2 + int_2;
		unsigned_int_3 = unsigned_int_2;
		double_3 = double_1 + double_2;
		if(1)
		{
			double_3 = double_4 * double_5;
		}
		long_1 = long_3 * long_3;
		if(1)
		{
			short_3 = short_2 + short_1;
		}
		int_4 = int_2 + int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						long_3 = long_1 * long_2;
					}
					int_1 = int_4 + int_4;
				}
				short_1 = short_3 + short_3;
				if(1)
				{
					int_5 = int_5 * int_3;
				}
				if(1)
				{
					long_2 = long_3 * long_3;
				}
				float_4 = float_3 + float_1;
				int_4 = int_1 * int_3;
				short_5 = short_4 + short_1;
				int_3 = int_2 * int_2;
				short_2 = short_5 * short_1;
				double_5 = double_1 * double_2;
			}
			char controller4vul_1656[2];
			fgets(controller4vul_1656 ,2 ,stdin);
			if( strcmp( controller4vul_1656, "J") < 0)
			{
				double double_9 = 1;
				double_6 = double_4 + double_1;
				long_2 = long_3 * long_3;
				if(1)
				{
					if(1)
					{
						short_1 = short_6 + short_7;
					}
					unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
					long_4 = long_4 * long_1;
					unsigned_int_2 = unsigned_int_6 + unsigned_int_1;
					double_4 = double_4 + double_2;
					float_3 = float_3 + float_1;
					int_2 = int_2 * int_1;
					char_3 = char_1;
					char_4 = char_2 + char_3;
					long_4 = long_2 * long_4;
					double_3 = double_7 * double_4;
					double_2 = double_1;
					double_7 = double_8 + double_8;
					if(1)
					{
						unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
						short_1 = short_1 + short_3;
						long_3 = long_1 * long_1;
						int_1 = int_2 + int_5;
						unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
					}
				}
				char controller4vul_1657[2];
				fgets(controller4vul_1657 ,2 ,stdin);
				if( strcmp( controller4vul_1657, ".") < 0)
				{
					char controller4vul_1658[3];
					fgets(controller4vul_1658 ,3 ,stdin);
					if( strcmp( controller4vul_1658, ")!") < 0)
					{
						char controller4vul_1659[2];
						fgets(controller4vul_1659 ,2 ,stdin);
						if( strcmp( controller4vul_1659, "o") < 0)
						{
							unsigned_int_5 = v__block_activate(char_1,long_5,uni_para);

							unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
						}
						double_3 = double_1 * double_5;
					}
					unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
					if(1)
					{
						double_2 = double_4;
					}
					if(1)
					{
						int_3 = int_5 + int_1;
					}
					double_9 = double_6 * double_3;
					float_4 = float_2 * float_1;
					long_5 = long_1 + long_5;
					double_5 = double_4 * double_2;
					double_2 = double_10 + double_6;
					double_10 = double_6;
					if(1)
					{
						float_2 = float_4 + float_1;
					}
				}
				if(1)
				{
					long_2 = long_6 * long_2;
					unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
					int_1 = int_4 * int_4;
					double_7 = double_3 + double_8;
					unsigned_int_7 = unsigned_int_1 + unsigned_int_5;
					double_9 = double_3 + double_3;
					if(1)
					{
						double_10 = double_10 * double_5;
						float_2 = float_2 + float_3;
					}
					if(1)
					{
						int_5 = int_5;
						char_2 = char_4 + char_3;
					}
					if(1)
					{
						unsigned_int_5 = unsigned_int_5;
					}
					if(1)
					{
						if(1)
						{
							double_3 = double_7 * double_6;
						}
						if(1)
						{
							unsigned_int_2 = unsigned_int_3;
						}
					}
					if(1)
					{
						int_2 = int_5 + int_2;
					}
					if(1)
					{
						unsigned_int_5 = unsigned_int_1;
					}
					if(1)
					{
						long long_7 = 1;
						short_3 = short_2 + short_5;
						int_3 = int_4;
						int_6 = int_1 + int_4;
						short_3 = short_8;
						int_6 = int_7 + int_2;
						short_6 = short_4 * short_8;
						long_8 = long_1 * long_7;
					}
					if(1)
					{
						int_7 = int_6 + int_6;
					}
					if(1)
					{
						unsigned_int_5 = unsigned_int_8;
					}
					if(1)
					{
						if(1)
						{
							float_1 = float_2 + float_4;
						}
						float_4 = float_5 + float_3;
					}
					double_11 = double_9 * double_11;
					short_8 = short_6;
					short_9 = short_4 + short_5;
					int_5 = int_7 * int_4;
					if(1)
					{
						int_4 = int_8 * int_5;
						int_6 = int_9;
					}
					if(1)
					{
						double_10 = double_3;
						int_6 = int_7 + int_10;
					}
					unsigned_int_8 = unsigned_int_9;
					double_8 = double_2 + double_9;
					unsigned_int_4 = unsigned_int_5 * unsigned_int_6;
					unsigned_int_1 = unsigned_int_7;
					if(1)
					{
						double_3 = double_12 + double_3;
					}
				}
			}
		}
		unsigned_int_3 = unsigned_int_1;
		if(1)
		{
			float_3 = float_5 + float_3;
		}
	}
	long_2 = long_1 + long_3;
	if(1)
	{
		double double_13 = 1;
		int_6 = int_8 * int_1;
		short_9 = short_6 * short_7;
		long_1 = long_8 + long_8;
		double_11 = double_13 * double_4;
		short_5 = short_8;
		short_4 = short_4 + short_9;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				int_10 = int_2 + int_6;
				unsigned_int_9 = unsigned_int_1 + unsigned_int_3;
				char_3 = char_1 * char_2;
				if(1)
				{
					int_6 = int_1 * int_9;
				}
				double_2 = double_7 * double_5;
				if(1)
				{
					if(1)
					{
						short_3 = short_5 * short_1;
						float_3 = float_5;
						unsigned_int_4 = unsigned_int_9 * unsigned_int_1;
					}
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_5 + unsigned_int_9;
					unsigned_int_8 = unsigned_int_10 * unsigned_int_9;
				}
				double_4 = double_13;
				float_1 = float_2 * float_4;
				float_1 = float_1 * float_2;
				long_5 = long_6;
				unsigned_int_7 = unsigned_int_6;
				char_3 = char_3 + char_4;
				int_4 = int_8 + int_11;
				short_5 = short_3;
				int_1 = int_5 + int_11;
				unsigned_int_1 = unsigned_int_8 * unsigned_int_2;
				unsigned_int_5 = unsigned_int_5 * unsigned_int_8;
				if(1)
				{
					double double_14 = 1;
					long_9 = long_4 + long_4;
					double_1 = double_8 + double_1;
					int_5 = int_7;
					float_3 = float_2 * float_6;
					unsigned_int_9 = unsigned_int_1;
					unsigned_int_10 = unsigned_int_1 + unsigned_int_3;
					float_3 = float_1 * float_2;
					double_5 = double_5 + double_14;
					int_2 = int_2 + int_9;
					char_3 = char_1;
				}
				unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
				if(1)
				{
					if(1)
					{
						double_8 = double_7 + double_11;
						short_1 = short_4 * short_9;
					}
				}
			}
			unsigned_int_10 = unsigned_int_1 * unsigned_int_1;
		}
		unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
		unsigned_int_2 = unsigned_int_4;
	}
	int_10 = int_2 + int_2;
	if(1)
	{
		char char_5 = 1;
		float_2 = float_3 * float_2;
		float_3 = float_6 * float_5;
		char_5 = char_4 + char_4;
	}
	if(1)
	{
		short_4 = short_9 * short_9;
	}
	if(1)
	{
		double_11 = double_2;
	}
	int_4 = int_9 * int_8;
	unsigned_int_4 = unsigned_int_8 + unsigned_int_5;
	double_11 = double_7 + double_6;
	if(1)
	{
		float float_7 = 1;
		short short_10 = 1;
		float float_8 = 1;
		float_4 = float_7;
		int_5 = int_1 + int_10;
		short_5 = short_10;
		unsigned_int_6 = unsigned_int_2 + unsigned_int_3;
		float_8 = float_2 * float_2;
		unsigned_int_4 = unsigned_int_7;
		if(1)
		{
			int_2 = int_5;
			double_10 = double_2 + double_7;
		}
		unsigned_int_3 = unsigned_int_2 + unsigned_int_10;
		short_3 = short_5;
		short_2 = short_4 + short_10;
		double_6 = double_12 + double_8;
		int_11 = int_6 + int_6;
		float_3 = float_2;
		unsigned_int_2 = unsigned_int_10 * unsigned_int_10;
		double_5 = double_5 + double_7;
		if(1)
		{
			unsigned_int_10 = unsigned_int_1 * unsigned_int_5;
		}
		if(1)
		{
			if(1)
			{
				float float_9 = 1;
				float_9 = float_6 + float_8;
			}
			if(1)
			{
				char char_6 = 1;
				char char_7 = 1;
				char_7 = char_6 * char_2;
			}
			if(1)
			{
				float_3 = float_7 * float_4;
			}
			if(1)
			{
				short_2 = short_7 * short_1;
			}
			if(1)
			{
				unsigned int unsigned_int_11 = 1;
				unsigned_int_9 = unsigned_int_11 * unsigned_int_9;
			}
		}
		unsigned_int_6 = unsigned_int_9;
	}
	if(1)
	{
		long_9 = long_5;
	}
	if(1)
	{
		double_10 = double_1;
	}
	int_11 = int_9 + int_4;
}
unsigned int v__smart_cb_change(int uni_para)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	v__smart_apply(short_1,uni_para);

	double_2 = double_1 * double_1;
	double_3 = double_1 + double_3;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_2;
	float_1 = float_2;
	return unsigned_int_2;
}
short v__smart_update_queue( unsigned int parameter_1,float parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char controller4vul_1655[2];
	fgets(controller4vul_1655 ,2 ,stdin);
	if( strcmp( controller4vul_1655, "N") < 0)
	{
		unsigned_int_1 = v__smart_cb_change(uni_para);

	}
	int_1 = int_1 * int_1;
	return short_1;
}
char v__lost_selection_reset_job()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1;
	int_2 = int_3;
	char_1 = char_1 + char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ",>") == 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		long_2 = long_1 * long_1;
		unsigned_int_1 = v__lost_selection(int_1,-1 );

		double_1 = double_1;
	}
	return char_1;
}
unsigned int v__lost_selection(int parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_1 + double_2;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	char controller4vul_1652[3];
	fgets(controller4vul_1652 ,3 ,stdin);
	if( strcmp( controller4vul_1652, "41") < 0)
	{
		double double_3 = 1;
		double double_4 = 1;
		char controller4vul_1653[3];
		fgets(controller4vul_1653 ,3 ,stdin);
		if( strcmp( controller4vul_1653, "Cv") < 0)
		{
			float_2 = float_1 + float_1;
			char controller4vul_1654[3];
			fgets(controller4vul_1654 ,3 ,stdin);
			if( strcmp( controller4vul_1654, "de") < 0)
			{
				short_1 = v__smart_update_queue(unsigned_int_3,float_1,uni_para);

				double_3 = double_1 * double_1;
			}
			double_1 = double_1;
		}
		double_3 = double_4 + double_4;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			char_2 = char_1 + char_2;
			int_4 = int_3 + int_1;
		}
		char_2 = char_1 + char_1;
		short_3 = short_1 * short_2;
		float_2 = float_2 + float_2;
		float_4 = float_3 * float_2;
	}
	return unsigned_int_2;
}
short v__take_selection_text( unsigned int parameter_1,long parameter_2,short parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short_1 = short_2;
	double_1 = double_1 * double_2;
	long_1 = long_1 * long_1;
	float_1 = float_2;
	int_1 = int_2;
	long_1 = long_1 + long_2;
	double_1 = double_1 + double_3;
	double_4 = double_1 + double_1;
	int_3 = int_2 * int_3;
	char controller4vul_1651[2];
	fgets(controller4vul_1651 ,2 ,stdin);
	if( strcmp( controller4vul_1651, "}") > 0)
	{
		unsigned_int_1 = v__lost_selection(int_2,uni_para);

		char_1 = char_1 * char_2;
	}
	char_2 = char_1 * char_3;
	return short_3;
}
short v__cb_ctxp_link_content_copy(unsigned int parameter_2,int uni_para)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	short_1 = v__take_selection_text(unsigned_int_1,long_1,short_2,uni_para);

	float_1 = float_1 + float_2;
	double_2 = double_1 * double_2;
	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_1 * int_2;
	short_2 = short_3 * short_3;
	long_2 = long_2 * long_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	int_2 = int_2 + int_3;
	return short_3;
}
void v_ty_sb_free( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	long_1 = long_1 * long_2;
}
int v_ty_sb_steal_buf( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_5 = 1;
	float_1 = float_1 + float_2;
	int_1 = int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char_3 = char_1 + char_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			double_1 = double_1 + double_2;
		}
		int_4 = int_2 * int_3;
	}
	double_4 = double_3 + double_2;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_2 * long_1;
	short_1 = short_1 + short_1;
	return int_5;
}
int v_codepoint_to_utf8( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_4 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double_1 = double_1 + double_1;
		char_3 = char_1 + char_2;
		float_1 = float_2;
	}
	if(1)
	{
		char_3 = char_2 + char_4;
		char_1 = char_2;
		double_2 = double_2 * double_3;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		long_1 = long_1 + long_1;
		char_2 = char_1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		long_1 = long_1;
		double_3 = double_3 + double_2;
	}
	if(1)
	{
		short short_3 = 1;
		int int_1 = 1;
		long long_2 = 1;
		short_2 = short_1 + short_2;
		short_3 = short_3;
		int_1 = int_1;
		long_1 = long_1 * long_2;
		long_2 = long_3 * long_2;
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_4 = 1;
		int_3 = int_2 + int_2;
		char_3 = char_2 + char_4;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
		int_4 = int_3;
		int_2 = int_2 + int_4;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		long_4 = long_3;
	}
	if(1)
	{
		double_2 = double_3 + double_3;
	}
	return int_4;
}
void v_ty_sb_spaces_rtrim( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float_2 = float_1 + float_2;
	double_3 = double_1 * double_2;
	short_1 = short_1 * short_2;
	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		long_3 = long_1 * long_2;
		unsigned_int_1 = unsigned_int_1;
	}
}
int v_ty_sb_add( int parameter_1,unsigned int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		int_1 = int_1;
		char_2 = char_1 + char_2;
		if(1)
		{
		}
		int_2 = int_1;
		int_2 = int_2;
	}
	int_3 = int_3 * int_4;
	int_4 = int_3 * int_4;
	short_2 = short_1 * short_2;
	return int_1;
}
double v__termpty_cellrow_from_beacon_get( char parameter_1,int parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	float_1 = float_1;
	char_2 = char_2 * char_2;
	double_1 = double_1;
	float_1 = float_2 + float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	short_1 = short_2;
	if(1)
	{
		float float_4 = 1;
		char char_3 = 1;
		float_4 = float_3 + float_4;
		char_3 = char_1 + char_2;
	}
	int_2 = int_1;
	float_2 = float_1 * float_3;
	long_1 = long_2;
	short_3 = short_3;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		int_3 = int_2 * int_2;
		v_verify_beacon(unsigned_int_2,int_4);

		double_2 = double_1 * double_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		char_4 = char_2 + char_2;
		int_3 = int_4 + int_3;
		int_2 = int_3 * int_3;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	}
	long_1 = long_2 + long_2;
	return double_2;
}
double v_termpty_cellrow_get( float parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
		}
		double_1 = v__termpty_cellrow_from_beacon_get(char_1,int_1,unsigned_int_1);

		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
	}
	return double_1;
}
void v_termio_selection_get( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,short parameter_7)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	v_ty_sb_free(short_1);

	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
			double_1 = double_1;
			double_1 = v_termpty_cellrow_get(float_1,int_2,unsigned_int_1);

			long_3 = long_1 + long_2;
		}
		if(1)
		{
			long_2 = long_1 + long_3;
		}
		if(1)
		{
			v_termpty_backlog_unlock();

			double_1 = double_1;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						float float_2 = 1;
						float float_3 = 1;
						float float_4 = 1;
						int_3 = v_ty_sb_steal_buf(long_3);

						float_4 = float_2 * float_3;
					}
					if(1)
					{
						long_2 = long_3 * long_1;
					}
				}
				if(1)
				{
					int_3 = v_codepoint_to_utf8(char_1,char_2);

					unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				}
			}
		}
		if(1)
		{
			double double_2 = 1;
			short short_2 = 1;
			double_1 = double_2 * double_1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					char char_3 = 1;
					char_3 = char_1 + char_2;
				}
				if(1)
				{
					unsigned int unsigned_int_3 = 1;
					v_termpty_backlog_lock();

					unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
				}
				if(1)
				{
					short_1 = short_1;
				}
				if(1)
				{
					double double_3 = 1;
					v_ty_sb_spaces_rtrim(int_4);

					double_3 = double_3;
				}
				if(1)
				{
					long long_4 = 1;
					long_4 = long_4 * long_2;
				}
			}
			short_2 = short_1 * short_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			int_5 = v_ty_sb_add(int_3,unsigned_int_2,char_2);

			unsigned_int_4 = unsigned_int_2;
		}
	}
}
double v__cb_ctxp_link_open(unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double_1 = double_1 * double_2;
	double_1 = v__activate_link(double_3,long_1);

	float_1 = float_1 + float_1;
	double_3 = double_2 * double_3;
	double_3 = double_2 + double_3;
	short_2 = short_1 * short_1;
	double_3 = double_4;
	return double_2;
}
short v__should_inline()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_2;
	int_1 = int_2;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	int_4 = int_1 * int_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	return short_1;
	unsigned_int_3 = v_termio_config_get(unsigned_int_4);

}
unsigned int v_link_is_email( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_2;
}
int v_link_is_protocol()
{
	int int_1 = 1;
	return int_1;
}
int v_link_is_url( unsigned int parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	return int_1;
	int_1 = v_link_is_protocol();

}
double v__activate_link( double parameter_1,long parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	int int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	char char_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_7 = 1;
	char_1 = char_1 * char_1;
	int_1 = int_1 + int_1;
	long_1 = long_2;
	double_2 = double_1 + double_1;
	char_2 = char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_3 = long_1 * long_3;
	double_2 = double_2 * double_1;
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
			char_2 = char_1 * char_1;
		}
		if(1)
		{
			int_1 = int_2;
		}
	}
	if(1)
	{
		char char_4 = 1;
		char_3 = char_3 * char_4;
	}
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		double_1 = double_2;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	}
	int_2 = int_2 + int_2;
	if(1)
	{
	}
	if(1)
	{
		long long_4 = 1;
		unsigned_int_4 = v_link_is_email(short_1);

		int_3 = int_3 + int_1;
		short_2 = short_1 + short_1;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
		}
		if(1)
		{
			long_3 = long_1 + long_2;
		}
		int_1 = v_link_is_url(unsigned_int_3);

		long_4 = long_2 + long_4;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			float_1 = v_media_src_type_get(long_3);

			short_2 = short_1 + short_3;
			unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
		}
	}
	if(1)
	{
		float_1 = float_1 + float_1;
		char_3 = char_5;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_2 = double_1 + double_3;
			if(1)
			{
				if(1)
				{
					short_2 = short_2;
					float_1 = float_1 + float_1;
				}
				if(1)
				{
					float float_2 = 1;
					float float_3 = 1;
					float_3 = float_1 * float_2;
					double_4 = double_4;
				}
			}
			if(1)
			{
				float float_5 = 1;
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
						double_5 = double_4 * double_4;
					}
				}
				if(1)
				{
					if(1)
					{
						float float_4 = 1;
						float_4 = float_1 + float_4;
					}
				}
				char_5 = char_2;
				float_5 = float_1 + float_5;
			}
		}
	}
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		double_2 = double_2;
		short_5 = short_1 * short_4;
		if(1)
		{
			int_3 = int_3;
			if(1)
			{
				int int_4 = 1;
				int_3 = int_2 + int_1;
				int_4 = int_2 * int_3;
			}
			if(1)
			{
				long long_5 = 1;
				long long_6 = 1;
				if(1)
				{
					if(1)
					{
						unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
					}
				}
				if(1)
				{
					if(1)
					{
						double_1 = double_2 * double_5;
					}
				}
				if(1)
				{
					if(1)
					{
						char char_6 = 1;
						char_6 = char_1 + char_6;
					}
				}
				char_3 = char_5 + char_3;
				long_2 = long_5 * long_6;
			}
		}
	}
	if(1)
	{
		double double_6 = 1;
		double double_7 = 1;
		double_7 = double_6 * double_6;
	}
	unsigned_int_7 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		short_3 = v__should_inline();

		int_3 = int_2 + int_1;
	}
	return double_5;
}
unsigned int v__cb_ctxp_link_preview(long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_3 = float_1 + float_2;
	char_3 = char_1 * char_2;
	double_1 = double_1 * double_1;
	int_2 = int_1 * int_2;
	double_1 = v__activate_link(double_1,long_1);

	long_1 = long_2 + long_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_2;
}
long v__is_fmt( long parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short_2 = short_1 + short_2;
	char_1 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
		if(1)
		{
			double double_3 = 1;
			double_3 = double_2 * double_3;
		}
		if(1)
		{
		}
	}
	return long_1;
}
float v_media_src_type_get( long parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	long_1 = v__is_fmt(long_1,unsigned_int_1);

	double_3 = double_1 + double_2;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_2 * long_2;
	}
	return float_2;
}
double v__mouse_in_selection( float parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	short_1 = short_1 + short_2;
	short_3 = short_2 * short_1;
	long_2 = long_1 * long_2;
	int_2 = int_1 + int_2;
	if(1)
	{
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_3 = long_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
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
	return double_1;
}
unsigned int v__smart_xy_to_cursor( double parameter_1,float parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = long_1 + long_2;
	int_1 = int_1 + int_1;
	short_1 = short_1 * short_2;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_1 = short_3 * short_4;
	}
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 + int_3;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3 + double_1;
	}
	return unsigned_int_3;
}
void v__cb_link_down(float parameter_2,long parameter_3,int uni_para)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float_1 = float_1 * float_1;
	char_3 = char_1 * char_2;
	char_3 = char_4 + char_4;
	if(1)
	{
		int_1 = int_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		short_3 = short_1 + short_2;
	}
	char controller4vul_1648[2];
	fgets(controller4vul_1648 ,2 ,stdin);
	if( strcmp( controller4vul_1648, "D") > 0)
	{
		float float_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		float float_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int_2 = int_2 * int_1;
		float_1 = float_2 * float_2;
		float_3 = float_1 + float_2;
		double_2 = double_1 + double_2;
		char controller4vul_1649[2];
		fgets(controller4vul_1649 ,2 ,stdin);
		if( strcmp( controller4vul_1649, "G") < 0)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
			long_1 = long_1 * long_1;
			char controller4vul_1650[3];
			fgets(controller4vul_1650 ,3 ,stdin);
			if( strcmp( controller4vul_1650, "HP") < 0)
			{
				short_3 = v__cb_ctxp_link_content_copy(unsigned_int_1,uni_para);

			}
		}
		float_5 = float_4 * float_5;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		if(1)
		{
			double double_3 = 1;
			double_2 = double_3 + double_4;
			if(1)
			{
				long_1 = long_1 * long_1;
			}
		}
		float_5 = float_2 * float_3;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
			int_3 = int_1 + int_1;
			short_3 = short_2 + short_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_3;
		}
		double_4 = double_1;
		int_5 = int_4 + int_4;
		long_1 = long_2 + long_3;
		int_3 = int_5 + int_4;
		float_5 = float_4 + float_3;
	}
}
void v_main_term_popup_exists( double parameter_1)
{
}
char v__update_link( double parameter_1,long parameter_2,long parameter_3,float parameter_4,int uni_para)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_5 = 1;
	float float_1 = 1;
	long long_3 = 1;
	char char_7 = 1;
	double_1 = double_1;
	long_2 = long_1 * long_2;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_4 = char_1 * char_3;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	if(1)
	{
		int_1 = int_1 + int_1;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		char_3 = char_3 + char_4;
	}
	if(1)
	{
	}
	char_5 = char_4 * char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int_3 = int_2 * int_1;
		int_3 = int_1 * int_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		char controller4vul_1646[2];
		fgets(controller4vul_1646 ,2 ,stdin);
		if( strcmp( controller4vul_1646, "_") > 0)
		{
			char char_6 = 1;
			char_6 = char_4 * char_3;
			char controller4vul_1647[3];
			fgets(controller4vul_1647 ,3 ,stdin);
			if( strcmp( controller4vul_1647, "6m") > 0)
			{
				double double_3 = 1;
				v__cb_link_down(float_1,long_3,uni_para);

				double_3 = double_2 * double_3;
			}
			if(1)
			{
				double double_4 = 1;
				double_4 = double_2 * double_1;
			}
		}
		if(1)
		{
			int_1 = int_3;
			unsigned_int_3 = unsigned_int_1;
		}
		if(1)
		{
			double_2 = double_2 + double_2;
			unsigned_int_3 = unsigned_int_3;
		}
		long_3 = long_1;
		double_1 = double_1 + double_2;
		long_2 = long_1 + long_3;
		int_1 = int_1 + int_1;
		double_1 = double_1 + double_1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		if(1)
		{
			long long_4 = 1;
			long_2 = long_2 * long_4;
		}
	}
	return char_7;
}
void v__remove_links( char parameter_1,long parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char_1 = char_1 + char_1;
	char controller4vul_1645[3];
	fgets(controller4vul_1645 ,3 ,stdin);
	if( strcmp( controller4vul_1645, "u>") > 0)
	{
		double double_2 = 1;
		char_2 = v__update_link(double_1,long_1,long_1,float_1,uni_para);

		double_1 = double_2 + double_1;
		int_1 = int_1 * int_1;
	}
	double_3 = double_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	float_2 = float_2 + float_1;
	short_1 = short_1 * short_1;
	int_2 = int_1 + int_1;
}
float v__sel_set( short parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long_3 = long_2 + long_3;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		short_3 = short_1 + short_2;
	}
	return float_1;
}
int v_termio_scroll_get( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	float_3 = float_1 * float_2;
	long_3 = long_1 * long_2;
	return int_1;
}
void v_miniview_position_offset( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 * double_1;
	char_2 = char_1 + char_1;
	long_2 = long_1 * long_2;
	short_1 = short_1;
	if(1)
	{
		long_2 = long_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		short short_2 = 1;
		float_1 = float_2;
		short_2 = short_2 + short_3;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			short_4 = short_3 + short_4;
			short_5 = short_4;
			double_4 = double_3 * double_2;
		}
		if(1)
		{
			long long_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long_1 = long_3 * long_3;
			double_2 = double_5 * double_6;
			int_1 = v_termio_scroll_get(short_3);

			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_3 = 1;
			unsigned int unsigned_int_3 = 1;
			char_3 = char_3 + char_2;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			if(1)
			{
				long long_4 = 1;
				long long_5 = 1;
				long_1 = long_4 * long_5;
			}
			if(1)
			{
				short_5 = short_4 + short_5;
			}
		}
	}
}
float v_term_miniview_get( double parameter_1)
{
	float float_1 = 1;
	if(1)
	{
	}
	return float_1;
}
void v_termio_scroll( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_4 = 1;
	long_2 = long_1 * long_1;
	int_1 = int_1 + int_2;
	double_1 = double_2;
	if(1)
	{
		int_2 = int_3 + int_1;
		if(1)
		{
			double double_3 = 1;
			double_2 = double_3 * double_4;
		}
		int_4 = int_4 + int_2;
	}
	short_2 = short_1 * short_2;
	char controller4vul_1642[2];
	fgets(controller4vul_1642 ,2 ,stdin);
	if( strcmp( controller4vul_1642, "w") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		long long_3 = 1;
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_1;
		int_3 = int_1 * int_2;
		long_1 = long_1 + long_3;
		if(1)
		{
			double_1 = double_1 + double_1;
		}
		char controller4vul_1643[3];
		fgets(controller4vul_1643 ,3 ,stdin);
		if( strcmp( controller4vul_1643, "uO") > 0)
		{
			unsigned int unsigned_int_2 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double_5 = double_4 * double_1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			char_1 = char_1 + char_2;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
			char_2 = char_1 * char_2;
			char controller4vul_1644[3];
			fgets(controller4vul_1644 ,3 ,stdin);
			if( strcmp( controller4vul_1644, "So") > 0)
			{
				v__remove_links(char_1,long_4,uni_para);

				int_4 = int_1;
			}
		}
		if(1)
		{
			double_5 = double_5 * double_2;
		}
		if(1)
		{
			short short_3 = 1;
			int int_5 = 1;
			int int_6 = 1;
			short_3 = short_2 + short_3;
			short_1 = short_1 * short_2;
			int_6 = int_5 * int_4;
		}
	}
	if(1)
	{
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "B") > 0)
		{
			short short_4 = 1;
			short short_5 = 1;
			short_1 = short_4 + short_5;
		}
	}
}
void v_termpty_save_new( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float_2 = float_1 + float_2;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_termpty_save_free(unsigned_int_1);

	char_1 = char_1 + char_2;
}
int v_termpty_save_expand( long parameter_1,short parameter_2,long parameter_3)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	int int_1 = 1;
	char_1 = char_1 * char_1;
	float_2 = float_1 * float_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "I") < 0)
	{
	}
	char_2 = char_2 + char_3;
	float_2 = float_2 + float_1;
	float_3 = float_2 * float_3;
	return int_1;
}
short v__termpty_cell_is_empty( short parameter_1)
{
	short short_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ";") > 0)
	{
	}
	return short_1;
}
void v_termpty_line_length( long parameter_1,short parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = v__termpty_cell_is_empty(short_1);

	int_2 = int_1 + int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
		if(1)
		{
		}
	}
}
void v_verify_beacon( unsigned int parameter_1,int parameter_2)
{
}
void v_termpty_text_save_top( float parameter_1,int parameter_2,long parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	double_1 = double_1 * double_1;
	v_termpty_backlog_lock();

	long_1 = long_1 + long_2;
	if(1)
	{
	}
	char_1 = char_2;
	long_1 = long_3 + long_2;
	short_2 = short_1 * short_2;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_termpty_backlog_unlock();

		int_1 = int_1 * int_1;
	}
	if(1)
	{
		int_1 = v_termpty_save_expand(long_2,short_3,long_2);

		long_2 = long_1 * long_2;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1 + float_1;
		}
		if(1)
		{
			float float_3 = 1;
			double double_4 = 1;
			float_3 = float_1;
			short_1 = short_2 + short_2;
			double_4 = double_2 + double_3;
			double_2 = double_1;
		}
	}
	v_termpty_line_length(long_3,short_1);

	int_1 = int_1 * int_1;
	double_2 = double_5;
	if(1)
	{
	}
	double_1 = double_6 + double_7;
	double_3 = double_3;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	v_termpty_save_new(float_1,int_4);

	unsigned_int_1 = unsigned_int_1;
	double_7 = double_6 * double_5;
	long_1 = long_2 + long_1;
	if(1)
	{
		short_3 = short_2 * short_1;
		int_4 = int_2 * int_4;
	}
	long_2 = long_3;
	v_verify_beacon(unsigned_int_1,int_5);

}
void v_termpty_text_scroll( double parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	float_1 = float_1 + float_1;
	long_1 = long_1 * long_2;
	char controller4vul_1640[2];
	fgets(controller4vul_1640 ,2 ,stdin);
	if( strcmp( controller4vul_1640, "V") < 0)
	{
		double_2 = double_2 + double_2;
		char controller4vul_1641[3];
		fgets(controller4vul_1641 ,3 ,stdin);
		if( strcmp( controller4vul_1641, "ec") < 0)
		{
			v_termio_scroll(char_1,int_1,int_1,int_2,uni_para);

			short_1 = short_1 + short_1;
		}
		int_3 = int_1 * int_3;
		if(1)
		{
			double double_3 = 1;
			double_2 = double_3 * double_2;
		}
	}
	if(1)
	{
		short short_2 = 1;
		long long_3 = 1;
		short short_3 = 1;
		short_2 = short_1 + short_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
		}
		long_2 = long_3 * long_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_2 = 1;
			int int_4 = 1;
			char_2 = char_1 * char_2;
			int_3 = int_4 * int_3;
			short_2 = short_3;
		}
		if(1)
		{
			short short_4 = 1;
			short_3 = short_4 * short_3;
		}
	}
}
void v_termpty_text_scroll_test( char parameter_1,unsigned int parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_2;
	char controller4vul_1638[3];
	fgets(controller4vul_1638 ,3 ,stdin);
	if( strcmp( controller4vul_1638, "TY") > 0)
	{
		int_1 = int_1 * int_2;
		char controller4vul_1639[2];
		fgets(controller4vul_1639 ,2 ,stdin);
		if( strcmp( controller4vul_1639, "Y") < 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			v_termpty_text_scroll(double_1,char_1,uni_para);

			char_2 = char_2 * char_1;
			long_2 = long_1 * long_1;
			int_2 = int_1 + int_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char_2 = char_2 + char_1;
		char_1 = char_2 * char_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
}
float v__cursor_to_start_of_line( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_2;
	return float_1;
}
unsigned int v__tab_forward( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
short v__handle_cursor_control( unsigned int parameter_1,char parameter_2,int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_5 = 1;
	char controller4vul_1637[2];
	fgets(controller4vul_1637 ,2 ,stdin);
	if( strcmp( controller4vul_1637, "J") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		v_termpty_text_scroll_test(char_1,unsigned_int_1,uni_para);

		unsigned_int_2 = unsigned_int_1;
	}
	long_1 = long_1;
	double_1 = double_2;
	short_2 = short_1 * short_1;
	char_2 = char_1 * char_2;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	short_3 = short_1 * short_3;
	int_1 = int_1 * int_1;
	if(1)
	{
		short short_4 = 1;
		short_4 = short_1 + short_4;
	}
	int_2 = int_1 + int_1;
	long_2 = long_1 * long_2;
	int_2 = int_2 * int_3;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char_3 = char_3 + char_4;
		float_3 = float_1 + float_2;
		float_3 = float_1 * float_3;
	}
	short_5 = short_5 + short_3;
	return short_1;
}
int v_termpty_handle_seq( double parameter_1,double parameter_2,short parameter_3,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int_1 = int_1 + int_1;
	char controller4vul_1634[2];
	fgets(controller4vul_1634 ,2 ,stdin);
	if( strcmp( controller4vul_1634, "E") < 0)
	{
		char char_1 = 1;
		double_1 = v__handle_esc(long_1,long_2,unsigned_int_1,uni_para);

		char_1 = char_1 * char_1;
	}
	if(1)
	{
		double_2 = double_1 + double_1;
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
		double double_3 = 1;
		double_3 = double_2 * double_2;
	}
	return int_2;
}
void v_termpty_handle_buf( int parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_1 + float_2;
	char controller4vul_1633[3];
	fgets(controller4vul_1633 ,3 ,stdin);
	if( strcmp( controller4vul_1633, "&j") < 0)
	{
		double double_2 = 1;
		int_1 = v_termpty_handle_seq(double_1,double_1,short_1,uni_para);

		double_2 = double_2 * double_2;
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_3 + float_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1;
	}
	unsigned_int_3 = unsigned_int_1;
}
void v_theme_reload( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = float_2;
	double_3 = double_1 * double_2;
	long_1 = long_1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
}
float v_theme_reload_cb(float parameter_2,short parameter_3,double parameter_4)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_1;
	double_1 = double_1 * double_1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_theme_reload(double_1);

	double_1 = double_1 * double_2;
	long_1 = long_1 + long_2;
	if(1)
	{
		double_1 = double_2;
	}
	return float_1;
}
void v_theme_auto_reload_enable( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	float_1 = v_theme_reload_cb(float_2,short_1,double_1);

	short_2 = short_2 + short_2;
}
unsigned int v__cursor_shape_to_group_name( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
unsigned int v_config_theme_path_default_get( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_2 = float_1 + float_1;
	long_1 = long_1 + long_2;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	return unsigned_int_1;
}
long v_theme_path_get()
{
	long long_1 = 1;
	return long_1;
}
short v_config_theme_path_get( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	return short_1;
	long_1 = v_theme_path_get();

}
float v_theme_apply( long parameter_1,char parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	float_3 = float_1 + float_2;
	float_1 = float_3 + float_2;
	short_1 = short_1 + short_1;
	unsigned_int_1 = v_config_theme_path_default_get(short_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	long_2 = long_1 * long_2;
	int_3 = int_2 + int_3;
	return float_4;
	short_2 = v_config_theme_path_get(int_4);

}
void v_termio_set_cursor_shape( long parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_2;
	short_1 = short_1;
	float_3 = v_theme_apply(long_1,char_1,unsigned_int_3);

	char_2 = char_1 + char_1;
	int_5 = int_3 + int_4;
	double_2 = double_1 * double_2;
	char_3 = char_1 * char_1;
	if(1)
	{
		unsigned_int_2 = v__cursor_shape_to_group_name(unsigned_int_1);

		char_1 = char_2;
		if(1)
		{
			short_1 = short_1 * short_1;
		}
		if(1)
		{
			int int_6 = 1;
			int_6 = int_6 + int_6;
		}
	}
	v_theme_auto_reload_enable(long_1);

}
void v_termpty_clear_tabs_on_screen( char parameter_1)
{
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "}") > 0)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( long parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			v_termpty_save_free(unsigned_int_2);

			double_2 = double_2;
		}
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_3 + double_3;
	}
	v_termpty_backlog_unlock();

	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_termpty_backlog_lock();

	float_2 = float_1 + float_1;
}
float v__ts_free()
{
	double double_1 = 1;
	float float_1 = 1;
	double_1 = double_1;
	return float_1;
}
void v_termpty_save_free( unsigned int parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "U+") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			short_1 = short_1 * short_1;
		}
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "&") < 0)
		{
			short_2 = short_1 + short_2;
		}
		float_1 = v__ts_free();

		short_2 = short_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 * int_2;
	long_2 = long_1 + long_2;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	double_2 = double_1 + double_2;
	char_2 = char_1 * char_1;
	int_1 = int_1 * int_1;
	v_termpty_backlog_size_set(long_1,short_1);

	double_4 = double_3 + double_1;
	if(1)
	{
		v_termpty_backlog_lock();

		long_1 = long_2 + long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_2 = 1;
			int_2 = int_2 + int_1;
		}
		double_4 = double_4 * double_1;
		long_2 = long_1 * long_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	char_4 = char_3 + char_3;
	long_2 = long_2 * long_1;
	v_termpty_save_free(unsigned_int_4);

	v_termpty_backlog_unlock();

	short_2 = short_1 * short_2;
}
void v_termpty_reset_att( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_2;
	double_1 = double_1 * double_2;
	int_2 = int_1 + int_1;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	double_1 = double_3 * double_3;
	long_1 = long_1;
	double_3 = double_4 + double_4;
	double_2 = double_2 + double_2;
	double_2 = double_2;
	int_1 = int_1;
	char_1 = char_1 + char_2;
	long_1 = long_2 * long_3;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	int_3 = int_3;
	float_1 = float_3;
	long_1 = long_3 + long_1;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	char_3 = char_1 * char_2;
}
unsigned int v_termio_config_get( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 + char_2;
	long_2 = long_1 + long_1;
	return unsigned_int_1;
}
void v_termpty_reset_state( long parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	int int_4 = 1;
	long long_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long_1 = long_1 + long_1;
	double_2 = double_1 * double_2;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_2;
	}
	long_1 = long_2 + long_2;
	int_3 = int_1 * int_2;
	unsigned_int_1 = v_termio_config_get(unsigned_int_1);

	v_termpty_clear_tabs_on_screen(char_1);

	long_1 = long_3;
	double_4 = double_3 + double_4;
	short_1 = short_1 * short_2;
	v_termio_set_cursor_shape(long_1,long_1);

	int_3 = int_2;
	double_1 = double_2 * double_2;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_5;
	unsigned_int_1 = unsigned_int_1;
	char_3 = char_2 + char_1;
	short_3 = short_1 * short_3;
	char_2 = char_1;
	char_1 = char_2 * char_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	char_4 = char_2 + char_5;
	short_1 = short_1;
	short_2 = short_1 * short_1;
	int_2 = int_2;
	double_3 = double_2 + double_4;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	v_termpty_clear_backlog(float_2);

	int_4 = int_1 + int_4;
	short_3 = short_2;
	int_1 = int_2 * int_1;
	long_3 = long_4 * long_3;
	int_3 = int_1;
	short_2 = short_2 * short_4;
	char_1 = char_4 + char_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	long_5 = long_3 + long_2;
	double_4 = double_6 + double_7;
	v_termpty_reset_att(char_4);

	long_1 = long_3;
	int_6 = int_5 + int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_4 = float_3 + float_2;
	}
	if(1)
	{
		double double_8 = 1;
		double_6 = double_8 + double_3;
	}
}
void v_termpty_resize_tabs( short parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_2;
	double_1 = double_2 + double_2;
	double_2 = double_3 + double_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "6Y") < 0)
	{
	}
	long_2 = long_1 + long_2;
	double_6 = double_4 * double_5;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char_1 = char_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			int_1 = int_2;
		}
		short_2 = short_1 * short_2;
	}
	int_2 = int_2 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = long_2;
	}
}
long v__termpty_init( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	int int_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	short_2 = short_1 + short_1;
	int_1 = int_2;
	int_3 = int_1 * int_3;
	v_termpty_resize_tabs(short_2,int_2,int_1);

	int_1 = int_3 + int_4;
	double_1 = double_1 * double_1;
	float_2 = float_1 + float_1;
	long_2 = long_1 + long_1;
	int_2 = int_2 * int_3;
	float_2 = float_1 * float_2;
	double_1 = double_1 + double_2;
	int_5 = int_1 * int_2;
	v_termpty_reset_state(long_3);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_2 + double_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	return long_4;
}
double v__add_default_keys( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_5 = 1;
	long long_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_9 = 1;
	char char_6 = 1;
	char char_7 = 1;
	char char_8 = 1;
	float float_4 = 1;
	double double_10 = 1;
	int int_6 = 1;
	double_1 = double_1 + double_2;
	double_3 = double_1 + double_2;
	double_1 = double_3 * double_4;
	double_5 = double_2 + double_4;
	int_1 = int_1 * int_1;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_2;
	char_3 = char_2 * char_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	int_2 = int_1 * int_2;
	unsigned_int_4 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_4;
	char_3 = char_3 + char_4;
	int_4 = int_3 * int_1;
	long_1 = long_2 * long_3;
	short_1 = short_1;
	double_6 = double_3 * double_5;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	char_4 = char_4 + char_3;
	char_5 = char_4 + char_3;
	long_4 = long_2 * long_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_2 + int_5;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_4;
	double_8 = double_7 * double_1;
	int_3 = int_1 * int_2;
	float_3 = float_2 * float_3;
	char_2 = char_5 * char_3;
	long_7 = long_5 + long_6;
	long_5 = long_6;
	float_2 = float_3 + float_2;
	unsigned_int_7 = unsigned_int_1 * unsigned_int_5;
	double_7 = double_9 + double_5;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
	char_2 = char_2 * char_6;
	short_1 = short_1 * short_1;
	char_8 = char_7 * char_2;
	long_1 = long_6 * long_1;
	double_1 = double_2;
	float_3 = float_4 + float_4;
	double_10 = double_4 * double_1;
	double_9 = double_1 * double_10;
	int_4 = int_6 * int_1;
	char_3 = char_1 * char_3;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_4;
	return double_4;
}
void v_colors_standard_get( int parameter_1,int parameter_2,float parameter_3,long parameter_4,int parameter_5,int parameter_6)
{
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	if(1)
	{
		float float_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float_1 = float_1 * float_1;
		long_2 = long_1 + long_1;
		float_1 = float_2 * float_3;
		short_2 = short_1 * short_1;
		double_1 = double_1 * double_1;
		int_2 = int_1 * int_2;
		double_1 = double_2 + double_3;
	}
	char_2 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_2 * int_2;
	char_4 = char_3 * char_3;
}
long v_config_new()
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	long long_4 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "T") > 0)
	{
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		long long_3 = 1;
		int int_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_6 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_7 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_8 = 1;
		long long_5 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_9 = 1;
		long long_6 = 1;
		long long_7 = 1;
		long_2 = long_1 * long_1;
		char_2 = char_1 * char_2;
		double_2 = double_2 + double_3;
		short_2 = short_1 * short_1;
		double_3 = double_1 + double_4;
		long_3 = long_1;
		double_1 = double_1 + double_2;
		int_2 = int_1 * int_1;
		int_3 = int_1 + int_1;
		float_2 = float_1 * float_1;
		float_3 = float_1 * float_1;
		double_1 = v__add_default_keys(double_1);

		int_1 = int_4;
		float_2 = float_2 + float_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		int_3 = int_4 + int_4;
		float_2 = float_2 * float_3;
		float_1 = float_2 + float_3;
		double_4 = double_5 + double_4;
		v_colors_standard_get(int_4,int_3,float_1,long_1,int_4,int_1);

		short_3 = short_1 + short_2;
		int_3 = int_4;
		double_2 = double_1 * double_4;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
		long_2 = long_2 * long_4;
		int_6 = int_3 + int_5;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_6;
		short_1 = short_2 * short_1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
		char_4 = char_2 * char_3;
		double_5 = double_3 * double_1;
		int_5 = int_7 * int_5;
		long_1 = long_4;
		int_7 = int_4 + int_7;
		unsigned_int_2 = unsigned_int_1;
		long_3 = long_1 + long_1;
		char_2 = char_1 + char_1;
		double_7 = double_6 * double_3;
		long_2 = long_3 * long_3;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_6;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		int_7 = int_8 + int_6;
		long_3 = long_2 * long_5;
		char_5 = char_4 * char_2;
		int_4 = int_1 + int_6;
		unsigned_int_5 = unsigned_int_6 * unsigned_int_7;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
		int_7 = int_7 + int_6;
		int_6 = int_5 + int_9;
		long_5 = long_1 * long_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int int_10 = 1;
				unsigned int unsigned_int_8 = 1;
				unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
				int_10 = int_8 + int_6;
				unsigned_int_8 = unsigned_int_6 * unsigned_int_8;
				short_2 = short_1 * short_1;
				int_5 = int_7 * int_9;
				unsigned_int_8 = unsigned_int_4 * unsigned_int_8;
			}
		}
		long_7 = long_1 * long_6;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	}
	return long_4;
}
int main()
{
	int uni_para =447;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_5 = 1;
	short short_2 = 1;
	int int_6 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_11 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_1;
	int_2 = int_2;
	int_2 = int_3 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2;
	long_3 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
	}
	double_1 = double_2;
	char_1 = char_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	int_1 = int_2 * int_2;
	if(1)
	{
		char_1 = char_2 * char_3;
	}
	if(1)
	{
		float_2 = float_3;
	}
	int_1 = int_2;
	if(1)
	{
	}
	short_1 = short_1;
	float_2 = float_2;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
	char controller4vul_1629[3];
	fgets(controller4vul_1629 ,3 ,stdin);
	if( strcmp( controller4vul_1629, "=9") > 0)
	{
		long long_4 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_7 = 1;
		float float_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		char char_4 = 1;
		if(1)
		{
			long_4 = long_1;
		}
		if(1)
		{
			int_1 = int_2 * int_3;
		}
		if(1)
		{
			double_3 = double_2 * double_3;
		}
		unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_7 * unsigned_int_5;
		}
		float_4 = float_2 + float_2;
		if(1)
		{
			double_2 = double_2 + double_2;
		}
		float_1 = float_1;
		if(1)
		{
			long_3 = long_5 + long_6;
		}
		int_2 = int_1 + int_4;
		if(1)
		{
			int_2 = int_4 * int_3;
		}
		if(1)
		{
			char_4 = char_3 * char_3;
		}
		double_1 = double_1 * double_4;
		if(1)
		{
			double_3 = double_3 + double_2;
		}
		char_3 = char_2 * char_4;
		if(1)
		{
			unsigned_int_6 = unsigned_int_6 * unsigned_int_8;
		}
		char controller4vul_1630[2];
		fgets(controller4vul_1630 ,2 ,stdin);
		if( strcmp( controller4vul_1630, "B") < 0)
		{
			int_4 = int_3 * int_2;
			char controller4vul_1631[2];
			fgets(controller4vul_1631 ,2 ,stdin);
			if( strcmp( controller4vul_1631, "E") < 0)
			{
				long long_7 = 1;
				double double_5 = 1;
				long_2 = long_7 * long_1;
				unsigned_int_4 = unsigned_int_7 + unsigned_int_7;
				char controller4vul_1632[3];
				fgets(controller4vul_1632 ,3 ,stdin);
				if( strcmp( controller4vul_1632, "@_") > 0)
				{
					v_termpty_handle_buf(int_5,short_2,int_4,uni_para);

					long_4 = long_3 + long_1;
				}
				if(1)
				{
					int_3 = int_1 * int_4;
				}
				if(1)
				{
					float_2 = float_2 * float_3;
				}
				if(1)
				{
					double_4 = double_3 + double_5;
				}
				if(1)
				{
					unsigned_int_7 = unsigned_int_3 * unsigned_int_3;
				}
				if(1)
				{
					int_6 = int_1 * int_3;
				}
				if(1)
				{
					double_2 = double_3 * double_1;
				}
				if(1)
				{
					char_1 = char_3 * char_1;
				}
				if(1)
				{
					unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
				}
				if(1)
				{
					int_2 = int_6;
				}
				if(1)
				{
					double_1 = double_5 + double_4;
				}
				if(1)
				{
					long_5 = long_6;
				}
			}
			if(1)
			{
				double_1 = double_6;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		unsigned_int_10 = unsigned_int_9 * unsigned_int_3;
	}
	if(1)
	{
		double_6 = double_7 * double_6;
	}
	if(1)
	{
		int_3 = int_6 * int_2;
	}
	if(1)
	{
		unsigned_int_8 = unsigned_int_5 + unsigned_int_3;
		if(1)
		{
			float float_5 = 1;
			float float_6 = 1;
			float_6 = float_3 * float_5;
		}
	}
	unsigned_int_11 = unsigned_int_4 * unsigned_int_3;
	int_1 = int_5 * int_3;
	double_6 = double_4 * double_2;
	unsigned_int_6 = unsigned_int_8;
	if(1)
	{
		unsigned int unsigned_int_12 = 1;
		unsigned_int_12 = unsigned_int_10 + unsigned_int_10;
		double_6 = double_7 + double_7;
	}
	return int_4;
}

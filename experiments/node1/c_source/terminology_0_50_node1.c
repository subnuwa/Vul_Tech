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

short v__termpty_shutdown( float parameter_1);
void v_termpty_text_scroll_rev_test( double parameter_1,int parameter_2);
unsigned int v__handle_esc_dcs( float parameter_1,short parameter_2,long parameter_3);
void v__handle_op_a( short parameter_1,unsigned int parameter_2,short parameter_3);
char v__termpty_ext_handle( int parameter_1,int parameter_2,int parameter_3);
char v__handle_esc_terminology( double parameter_1,char parameter_2,long parameter_3);
int v__handle_xterm_777_command( int parameter_1,char parameter_2,int parameter_3);
short v__smart_calculate_226( float parameter_1);
char v__smart_size( long parameter_1,int parameter_2,int parameter_3,long parameter_4);
void v_colors_term_init( int parameter_1,float parameter_2,short parameter_3);
void v_termio_config_update();
short v__font_size_set( short parameter_1,int parameter_2);
void v_termio_font_size_set( double parameter_1,int parameter_2);
short v__handle_xterm_50_command( short parameter_1,char parameter_2,int parameter_3);
unsigned int v__eina_unicode_to_hex( double parameter_1);
short v__xterm_parse_color( char parameter_1,int parameter_2,unsigned int parameter_3,char parameter_4,int parameter_5);
int v__xterm_arg_get( long parameter_1);
char v__handle_esc_xterm( short parameter_1,short parameter_2,long parameter_3);
void v_termpty_cells_set_content( short parameter_1,long parameter_2,double parameter_3,int parameter_4);
double v__handle_esc_csi_decera( double parameter_1,double parameter_2);
void v_termpty_cells_att_fill_preserve_colors( unsigned int parameter_1,char parameter_2,short parameter_3,int parameter_4);
float v__clean_up_rect_coordinates( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
int v__handle_esc_csi_decfra( double parameter_1,short parameter_2);
long v__handle_esc_csi_decslrm( char parameter_1,int parameter_2);
double v__handle_esc_csi_decstbm( short parameter_1,double parameter_2);
unsigned int v__handle_esc_csi_decscusr( long parameter_1,int parameter_2);
short v__handle_esc_csi_dsr( short parameter_1,long parameter_2);
void v__handle_esc_csi_truecolor_cmyk( short parameter_1,short parameter_2);
unsigned int v__handle_esc_csi_truecolor_cmy( short parameter_1,short parameter_2);
unsigned int v__approximate_truecolor_rgb( int parameter_1,int parameter_2,int parameter_3,int parameter_4);
int v__csi_truecolor_arg_get( double parameter_1);
long v__handle_esc_csi_truecolor_rgb( double parameter_1,float parameter_2);
int v__handle_esc_csi_color_set( float parameter_1,float parameter_2);
void v_termpty_cursor_copy( unsigned int parameter_1,short parameter_2);
void v__switch_to_alternative_screen( unsigned int parameter_1,int parameter_2);
long v__move_cursor_to_origin( double parameter_1);
char v__pty_size( int parameter_1);
void v__limit_coord( double parameter_1);
char v__check_screen_info( unsigned int parameter_1,int parameter_2);
unsigned int v__termpty_line_rewrap( short parameter_1,short parameter_2,int parameter_3,int parameter_4,long parameter_5);
unsigned int v__backlog_remove_latest_nolock( int parameter_1);
void v_termpty_save_extract( long parameter_1);
unsigned int v__termpty_line_is_empty( long parameter_1,int parameter_2);
void v_termpty_screen_swap( unsigned int parameter_1);
void v_termpty_resize( short parameter_1,int parameter_2,int parameter_3);
char v_termio_win_get( unsigned int parameter_1);
char v__handle_esc_csi_reset_mode( char parameter_1,short parameter_2,double parameter_3);
void v__handle_esc_csi_cursor_pos_set( double parameter_1,short parameter_2,short parameter_3);
void v_termpty_text_scroll_rev( short parameter_1,double parameter_2);
void v_termpty_clear_line( double parameter_1,char parameter_2,int parameter_3);
void v_termpty_clear_screen( short parameter_1,double parameter_2);
void v_termpty_cell_codepoint_att_fill( char parameter_1,float parameter_2,int parameter_3,char parameter_4,int parameter_5);
unsigned int v__termpty_charset_trans( float parameter_1,long parameter_2);
void v_termio_content_change( char parameter_1,short parameter_2,double parameter_3,int parameter_4);
void v_termpty_text_append( int parameter_1,short parameter_2,int parameter_3);
float v__csi_arg_get( short parameter_1);
short v__handle_esc_csi( double parameter_1,float parameter_2,double parameter_3,int uni_para);
void v__safechar( int parameter_1);
void v__handle_esc( long parameter_1,short parameter_2,char parameter_3,int uni_para);
void v_termpty_cell_fill( float parameter_1,int parameter_2,long parameter_3,int parameter_4);
void v_termpty_cells_fill( double parameter_1,long parameter_2,char parameter_3,int parameter_4);
void v_termpty_cells_clear( unsigned int parameter_1,short parameter_2,int parameter_3);
double v__tooltip_del(int parameter_2);
unsigned int v__tooltip_content(long parameter_2,int parameter_3);
void v_MD5Final( char parameter_1,double parameter_2);
void v_MD5Transform( char parameter_1,float parameter_2);
void v_byteReverse( int parameter_1,int parameter_2);
void v_MD5Update( short parameter_1,long parameter_2,double parameter_3);
void v_MD5Init( unsigned int parameter_1);
void v_gravatar_tooltip( short parameter_1,unsigned int parameter_2,char parameter_3);
double v__cb_link_drag_done(float parameter_2);
double v__cb_link_drag_accept(double parameter_2,float parameter_3);
char v__cb_link_drag_move(short parameter_2,float parameter_3,char parameter_4,char parameter_5);
float v__cb_link_icon_new(short parameter_2,short parameter_3,int parameter_4);
float v__cb_link_move(char parameter_2,int parameter_3);
double v__cb_link_up_delay();
short v__cb_link_up(unsigned int parameter_2,double parameter_3);
void v_term_focus( int parameter_1);
int v__term_is_focused( int parameter_1);
void v_term_unfocus( int parameter_1);
float v__cb_ctxp_del(float parameter_2,double parameter_3);
long v__cb_ctxp_dismissed(int parameter_2);
char v__cb_ctxp_link_copy(unsigned int parameter_2);
float v__screen_visual_bounds( int parameter_1);
long v__draw_cell( long parameter_1,double parameter_2,short parameter_3,long parameter_4);
char v__draw_line( unsigned int parameter_1,char parameter_2,float parameter_3,int parameter_4,char parameter_5);
long v_termpty_backlog_length( double parameter_1);
float v_termio_pty_get();
int v_termio_textgrid_get( float parameter_1);
char v_miniview_colors_get( char parameter_1,char parameter_2);
short v__deferred_renderer();
int v__queue_render( unsigned int parameter_1);
void v_miniview_redraw( double parameter_1);
unsigned int v__block_obj_del();
int v__termpty_is_dblwidth_slow_get( long parameter_1,int parameter_2);
int v__termpty_is_dblwidth_get( short parameter_1,int parameter_2);
double v_term_preedit_str_get( char parameter_1);
long v_media_get( long parameter_1);
int v__smart_media_clicked(double parameter_2);
unsigned int v_media_control_get( unsigned int parameter_1);
long v__smart_media_stop(char parameter_2);
void v__smart_media_pause(long parameter_2);
double v__smart_media_play(int parameter_2);
void v__smart_media_del(long parameter_2,unsigned int parameter_3);
void v_media_visualize_set( short parameter_1,double parameter_2);
void v_media_mute_set( double parameter_1,char parameter_2);
void v_media_volume_set( unsigned int parameter_1,double parameter_2);
short v__cb_media_vol(float parameter_2,int parameter_3,char parameter_4);
float v__cb_media_pos(int parameter_2,int parameter_3,unsigned int parameter_4);
unsigned int v__cb_media_pos_drag_stop(char parameter_2,int parameter_3,char parameter_4);
float v__cb_media_pos_drag_start(double parameter_2,double parameter_3,double parameter_4);
void v_media_stop( unsigned int parameter_1);
void v__cb_media_stop(short parameter_2,float parameter_3,long parameter_4);
double v__cb_media_pause(float parameter_2,short parameter_3,short parameter_4);
void v_media_play_set( float parameter_1,int parameter_2);
void v__cb_media_play(double parameter_2,char parameter_3,int parameter_4);
void v_media_position_set( long parameter_1,double parameter_2);
char v__cb_mov_ref(float parameter_2);
void v__cb_mov_progress(unsigned int parameter_2);
double v__cb_mov_restart();
char v__cb_mov_decode_stop(char parameter_2);
unsigned int v__cb_mov_len_change(long parameter_2);
float v__cb_mov_frame_resize(float parameter_2);
char v__cb_mov_frame_decode(double parameter_2);
void v__type_mov_init();
float v__cb_edje_preloaded(long parameter_2,long parameter_3,unsigned int parameter_4);
char v__type_edje_init( float parameter_1);
float v__type_scale_init( double parameter_1);
float v__cb_img_frame();
unsigned int v__type_img_anim_handle( unsigned int parameter_1);
long v__cb_img_preloaded(long parameter_2,long parameter_3);
float v__type_img_init( float parameter_1);
long v__url_compl_cb(int parameter_2);
char v__url_prog_cb(int parameter_2);
double v__type_thumb_calc( char parameter_1,char parameter_2,int parameter_3,long parameter_4,char parameter_5);
short v__type_mov_calc( char parameter_1,long parameter_2,short parameter_3,float parameter_4,long parameter_5);
long v__type_edje_calc( double parameter_1,long parameter_2,unsigned int parameter_3,unsigned int parameter_4,float parameter_5);
unsigned int v__type_img_calc( int parameter_1,double parameter_2,unsigned int parameter_3,short parameter_4,short parameter_5);
double v__cb_scale_preloaded(short parameter_2,long parameter_3);
long v__type_scale_calc( short parameter_1,long parameter_2,short parameter_3,float parameter_4,char parameter_5,int uni_para);
double v__unsmooth_timeout(int uni_para);
double v__smooth_handler(int uni_para);
float v__smart_calculate( unsigned int parameter_1,int uni_para);
unsigned int v__smart_move( float parameter_1,long parameter_2,unsigned int parameter_3);
double v__smart_resize( long parameter_1,double parameter_2,char parameter_3);
void v__smart_del();
short v__smart_add( char parameter_1);
char v__smart_init(int uni_para);
double v_media_add( int parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4,float parameter_5,int uni_para);
short v__block_media_activate( double parameter_1,int parameter_2,int uni_para);
float v__block_edje_message_cb(char parameter_2,float parameter_3,int parameter_4);
void v_termpty_write( char parameter_1,short parameter_2,int parameter_3);
double v__block_edje_signal_cb(unsigned int parameter_2,double parameter_3,long parameter_4);
void v_termpty_block_chid_update( short parameter_1,double parameter_2);
char v__block_edje_cmds( long parameter_1,long parameter_2,short parameter_3,short parameter_4);
char v_homedir_get( char parameter_1,long parameter_2);
double v__block_edje_activate( double parameter_1,short parameter_2);
char v__block_activate( unsigned int parameter_1,char parameter_2,int uni_para);
long v_termpty_block_get( char parameter_1,int parameter_2);
int v_termpty_block_id_get( int parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( char parameter_1,int parameter_2);
char v__smart_apply( short parameter_1,int uni_para);
void v__smart_cb_change(int uni_para);
int v__smart_update_queue( float parameter_1,long parameter_2,int uni_para);
long v__lost_selection_reset_job();
void v__lost_selection(int parameter_2,int uni_para);
double v__take_selection_text( unsigned int parameter_1,double parameter_2,int parameter_3,int uni_para);
long v__cb_ctxp_link_content_copy(long parameter_2,int uni_para);
void v_ty_sb_free( float parameter_1);
double v_ty_sb_steal_buf( float parameter_1);
int v_codepoint_to_utf8( short parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim();
int v_ty_sb_add( unsigned int parameter_1,long parameter_2,unsigned int parameter_3);
double v__termpty_cellrow_from_beacon_get( char parameter_1,int parameter_2,unsigned int parameter_3);
float v_termpty_cellrow_get( short parameter_1,int parameter_2,long parameter_3);
void v_termio_selection_get( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,long parameter_7);
short v__cb_ctxp_link_open(double parameter_2);
int v__should_inline( long parameter_1);
float v_link_is_email();
char v_link_is_protocol( short parameter_1);
unsigned int v_link_is_url( long parameter_1);
float v__activate_link( unsigned int parameter_1,char parameter_2);
long v__cb_ctxp_link_preview(double parameter_2);
void v__is_fmt( long parameter_1,unsigned int parameter_2);
double v_media_src_type_get( short parameter_1);
float v__mouse_in_selection( long parameter_1,int parameter_2,int parameter_3);
long v__smart_xy_to_cursor( double parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5);
float v__cb_link_down(char parameter_2,float parameter_3,int uni_para);
long v_main_term_popup_exists( long parameter_1);
double v__update_link( unsigned int parameter_1,char parameter_2,double parameter_3,float parameter_4,int uni_para);
long v__remove_links( int parameter_1,short parameter_2,int uni_para);
long v__sel_set( int parameter_1,char parameter_2);
int v_termio_scroll_get( unsigned int parameter_1);
void v_miniview_position_offset( short parameter_1,int parameter_2,int parameter_3);
unsigned int v_term_miniview_get();
void v_termio_scroll( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
short v_termpty_save_new( char parameter_1,int parameter_2);
char v_termpty_save_expand( char parameter_1,char parameter_2,unsigned int parameter_3);
long v__termpty_cell_is_empty();
unsigned int v_termpty_line_length( int parameter_1,long parameter_2);
short v_verify_beacon( char parameter_1,int parameter_2);
void v_termpty_text_save_top( double parameter_1,char parameter_2,unsigned int parameter_3);
void v_termpty_text_scroll( long parameter_1,char parameter_2,int uni_para);
void v_termpty_text_scroll_test( char parameter_1,int parameter_2,int uni_para);
short v__cursor_to_start_of_line( int parameter_1);
char v__tab_forward( int parameter_1,int parameter_2);
double v__handle_cursor_control( unsigned int parameter_1,double parameter_2,int uni_para);
int v_termpty_handle_seq( short parameter_1,float parameter_2,int parameter_3,int uni_para);
void v_termpty_handle_buf( float parameter_1,float parameter_2,int parameter_3,int uni_para);
void v_theme_reload();
short v_theme_reload_cb(unsigned int parameter_2,short parameter_3,char parameter_4);
void v_theme_auto_reload_enable( unsigned int parameter_1);
short v__cursor_shape_to_group_name( short parameter_1);
double v_config_theme_path_default_get( double parameter_1);
long v_theme_path_get();
unsigned int v_config_theme_path_get( int parameter_1);
unsigned int v_theme_apply( double parameter_1,unsigned int parameter_2,double parameter_3);
void v_termio_set_cursor_shape( unsigned int parameter_1,char parameter_2);
void v_termpty_clear_tabs_on_screen( long parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( int parameter_1,short parameter_2);
unsigned int v__ts_free();
void v_termpty_save_free( short parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( unsigned int parameter_1);
void v_termpty_reset_att( unsigned int parameter_1);
unsigned int v_termio_config_get( double parameter_1);
void v_termpty_reset_state();
void v_termpty_resize_tabs( unsigned int parameter_1,int parameter_2,int parameter_3);
unsigned int v__termpty_init( long parameter_1);
char v__add_default_keys( double parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,char parameter_3,float parameter_4,unsigned int parameter_5,char parameter_6);
void v_config_new();
short v__termpty_shutdown( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_1;
	return short_1;
}
void v_termpty_text_scroll_rev_test( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long_1 = long_1 + long_2;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		v_termpty_text_scroll_rev(short_1,double_1);

		double_3 = double_2 * double_1;
	}
	if(1)
	{
		long long_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long_3 = long_1 + long_2;
		int_2 = int_1 * int_2;
		int_1 = int_1 * int_1;
	}
}
unsigned int v__handle_esc_dcs( float parameter_1,short parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					v__safechar(int_1);

					int_3 = int_1 * int_2;
				}
				if(1)
				{
					int int_5 = 1;
					int_5 = int_4 * int_5;
				}
			}
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			v_termpty_write(char_1,short_1,int_4);

			unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
		}
		if(1)
		{
			int_2 = int_1 + int_4;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_6 = 1;
			int_3 = int_6 + int_2;
		}
	}
	return unsigned_int_5;
}
void v__handle_op_a( short parameter_1,unsigned int parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_1 + float_1;
	float_2 = float_2;
}
char v__termpty_ext_handle( int parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_2;
	long_1 = long_1 + long_1;
	return char_1;
	v__handle_op_a(short_1,unsigned_int_1,short_1);

}
char v__handle_esc_terminology( double parameter_1,char parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = v_termio_config_get(double_1);

	char_1 = v__termpty_ext_handle(int_1,int_1,int_1);

	double_1 = double_2 * double_2;
	return char_1;
}
int v__handle_xterm_777_command( int parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
		double_3 = double_1 + double_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	double_4 = double_3;
	float_1 = float_1 * float_2;
	int_3 = int_1 + int_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	float_3 = float_2;
	char_1 = char_1;
	double_1 = double_3 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_5 = double_3 * double_1;
	return int_2;
}
short v__smart_calculate_226( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char_3 = char_1 + char_2;
	int_2 = int_1 + int_2;
	short_1 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
	double_1 = double_1 * double_1;
	double_1 = double_2;
	int_1 = int_2 + int_2;
	short_1 = short_2 * short_3;
	return short_4;
}
char v__smart_size( long parameter_1,int parameter_2,int parameter_3,long parameter_4)
{
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	short short_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_4 = 1;
	short_1 = v__smart_calculate_226(float_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		short_2 = short_1;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	short_2 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	float_3 = float_3;
	int_1 = int_2;
	float_1 = float_4 * float_5;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_2;
	}
	char_1 = char_1 + char_1;
	char_1 = v__smart_apply(short_1,-1 );

	double_2 = double_2 + double_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	int_3 = int_2;
	long_1 = v__sel_set(int_1,char_1);

	short_3 = short_4;
	v_termpty_resize(short_5,int_4,int_4);

	int_1 = int_2 * int_2;
	return char_1;
}
void v_colors_term_init( int parameter_1,float parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_5 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1;
	long_3 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		char char_1 = 1;
		int_2 = int_1 + int_1;
		if(1)
		{
			short short_2 = 1;
			float float_1 = 1;
			long_3 = long_3 + long_2;
			short_2 = short_1 * short_1;
			int_1 = int_1 * int_3;
			float_1 = float_1;
		}
		if(1)
		{
			double_1 = double_1 * double_1;
			if(1)
			{
				short short_3 = 1;
				int int_4 = 1;
				short_1 = short_3 * short_3;
				int_1 = int_4 * int_2;
				int_3 = int_5;
				char_1 = char_1 * char_2;
				double_1 = double_1 * double_2;
			}
		}
		long_1 = long_1;
		char_2 = char_1 + char_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			int_5 = int_6;
			if(1)
			{
				int_2 = int_3;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			char_2 = char_2 * char_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int_3 = int_6 * int_3;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			long_2 = long_2 * long_2;
			double_2 = double_2 + double_2;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
			int_1 = int_3 * int_6;
		}
		double_2 = double_1;
	}
}
void v_termio_config_update()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	float float_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_5 = 1;
	float float_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v_termpty_backlog_size_set(int_1,short_1);

	double_2 = double_1 + double_1;
	double_2 = double_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	int_3 = int_2 + int_2;
	if(1)
	{
		long_2 = long_1 + long_1;
		char_1 = char_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1;
	}
	double_3 = double_4 + double_3;
	unsigned_int_3 = unsigned_int_2;
	float_1 = float_3;
	char_1 = v__smart_size(long_3,int_1,int_4,long_3);

	char_1 = char_2;
	float_4 = float_3 * float_1;
	long_2 = long_4 + long_5;
	double_2 = double_4 * double_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	int_4 = int_5 * int_5;
	if(1)
	{
		v_colors_term_init(int_1,float_4,short_1);

		int_2 = int_5 * int_2;
	}
	if(1)
	{
		v_termio_set_cursor_shape(unsigned_int_2,char_1);

		long_1 = long_1 + long_4;
	}
	long_4 = long_3 + long_1;
	int_4 = int_4 * int_1;
	int_2 = int_2 * int_3;
	float_4 = float_5 + float_5;
	int_4 = int_2 * int_1;
}
short v__font_size_set( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1 + int_2;
	int_2 = int_1;
	char_2 = char_1 + char_1;
	long_3 = long_1 + long_2;
	if(1)
	{
		v_termio_config_update();

		short_2 = short_1 + short_2;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		short short_3 = 1;
		int int_5 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_4 = int_3 * int_4;
		short_3 = short_2 * short_2;
		int_2 = int_4 * int_5;
		long_2 = long_2 + long_3;
		long_2 = long_2 + long_4;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return short_1;
}
void v_termio_font_size_set( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short_1 = v__font_size_set(short_2,int_1);

	long_3 = long_1 + long_2;
}
short v__handle_xterm_50_command( short parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	v_termio_font_size_set(double_1,int_1);

	char_1 = char_1 * char_1;
	return short_1;
}
unsigned int v__eina_unicode_to_hex( double parameter_1)
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
short v__xterm_parse_color( char parameter_1,int parameter_2,unsigned int parameter_3,char parameter_4,int parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float_1 = float_2;
	int_1 = int_2;
	if(1)
	{
		char_3 = char_1 * char_2;
	}
	double_1 = double_1 * double_2;
	short_2 = short_1 * short_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double_3 = double_1;
		if(1)
		{
			int_1 = int_1 + int_1;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		double_3 = double_3 * double_3;
		if(1)
		{
			double_3 = double_2 + double_3;
		}
		double_1 = double_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
		if(1)
		{
			float_2 = float_1 + float_1;
		}
		double_2 = double_4;
		short_2 = short_3 + short_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3;
		}
		int_3 = int_4;
		unsigned_int_4 = v__eina_unicode_to_hex(double_4);

		unsigned_int_2 = unsigned_int_5 * unsigned_int_5;
		if(1)
		{
			double double_5 = 1;
			double_5 = double_5 + double_5;
		}
		char_3 = char_1 + char_1;
		unsigned_int_7 = unsigned_int_6 + unsigned_int_7;
		if(1)
		{
			short_3 = short_1;
		}
		unsigned_int_7 = unsigned_int_1 + unsigned_int_5;
	}
	if(1)
	{
		float float_3 = 1;
		unsigned int unsigned_int_8 = 1;
		double_2 = double_4 + double_4;
		if(1)
		{
			float_2 = float_2 + float_3;
		}
		double_2 = double_4 + double_1;
		short_1 = short_2 * short_3;
		if(1)
		{
			short_1 = short_3;
		}
		unsigned_int_5 = unsigned_int_7 + unsigned_int_6;
		unsigned_int_8 = unsigned_int_7 * unsigned_int_8;
		if(1)
		{
			float_2 = float_1 * float_3;
		}
		char_3 = char_2 + char_2;
	}
	if(1)
	{
		double_4 = double_4 + double_3;
	}
	short_2 = short_2 * short_3;
	return short_1;
}
int v__xterm_arg_get( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	char_2 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_2;
	char_2 = char_1 * char_3;
	float_1 = float_1;
	double_1 = double_1 * double_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	double_2 = double_1 + double_1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	float_3 = float_3;
	int_1 = int_1 + int_1;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	int_2 = int_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_6;
	double_4 = double_2 * double_3;
	unsigned_int_2 = unsigned_int_1;
	double_2 = double_1 * double_3;
	float_1 = float_3 * float_1;
	long_2 = long_1 * long_2;
	double_2 = double_5 * double_1;
	return int_1;
}
char v__handle_esc_xterm( short parameter_1,short parameter_2,long parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	float float_3 = 1;
	long long_1 = 1;
	short short_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	double double_6 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	char char_6 = 1;
	int_1 = int_1 * int_1;
	char_2 = char_1 + char_2;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2 * int_1;
	int_3 = int_3 * int_3;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	short_1 = v__xterm_parse_color(char_2,int_2,unsigned_int_2,char_2,int_4);

	short_2 = v__handle_xterm_50_command(short_3,char_2,int_2);

	char_2 = char_2 * char_1;
	double_1 = double_2 * double_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		int_3 = int_1;
	}
	double_1 = double_1 + double_3;
	if(1)
	{
		int_5 = v_termio_textgrid_get(float_3);

		int_2 = int_5 * int_5;
	}
	short_3 = short_2 + short_3;
	long_1 = long_1;
	int_3 = int_1 * int_1;
	long_1 = long_1;
	short_3 = short_4 * short_3;
	if(1)
	{
		int_5 = int_2 * int_2;
	}
	if(1)
	{
		long long_2 = 1;
		double double_4 = 1;
		double_1 = double_1 * double_3;
		long_2 = long_2 + long_2;
		double_5 = double_4 + double_2;
	}
	if(1)
	{
		short_1 = short_3 * short_3;
	}
	if(1)
	{
		char char_3 = 1;
		char_2 = char_3 * char_2;
	}
	float_3 = float_2 * float_1;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1 * long_1;
	}
	if(1)
	{
		float float_4 = 1;
		float_2 = float_4 + float_1;
	}
	if(1)
	{
		int_1 = v__handle_xterm_777_command(int_5,char_4,int_2);

		double_2 = double_2 + double_2;
		double_6 = double_3 * double_1;
	}
	if(1)
	{
		v_termpty_write(char_5,short_1,int_4);

		short_2 = short_4 * short_3;
	}
	if(1)
	{
		unsigned_int_6 = v_termio_config_get(double_7);

		int_5 = int_2 + int_4;
	}
	int_5 = v__xterm_arg_get(long_1);

	double_7 = double_3 + double_8;
	double_8 = double_6 * double_5;
	return char_6;
}
void v_termpty_cells_set_content( short parameter_1,long parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		long long_1 = 1;
		double_3 = double_3 + double_1;
		long_1 = long_1;
	}
}
double v__handle_esc_csi_decera( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 * double_1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	long_1 = long_2 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		v_termpty_cells_set_content(short_3,long_1,double_2,int_1);

		int_2 = int_1 * int_1;
	}
	return double_1;
	float_1 = v__csi_arg_get(short_3);

	float_2 = v__clean_up_rect_coordinates(unsigned_int_2,int_2,int_1,int_1,int_2);

}
void v_termpty_cells_att_fill_preserve_colors( unsigned int parameter_1,char parameter_2,short parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		short_1 = short_1;
		unsigned_int_1 = unsigned_int_1;
		int_2 = int_3;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "-") > 0)
		{
			int int_4 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double_1 = double_1 * double_1;
			int_3 = int_1 * int_4;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
			char_1 = char_1 + char_1;
			int_1 = int_1;
			unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		}
	}
}
float v__clean_up_rect_coordinates( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short_1 = short_1 + short_1;
	int_1 = int_1 + int_2;
	char_2 = char_1 + char_2;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 * short_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	float_1 = float_1;
	double_1 = double_1 + double_1;
	if(1)
	{
		short_1 = short_2 * short_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	}
	if(1)
	{
		int int_3 = 1;
		int_2 = int_1 * int_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
		}
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2 + double_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
		if(1)
		{
			long_2 = long_2 + long_1;
		}
	}
	int_5 = int_1 * int_4;
	if(1)
	{
		short short_4 = 1;
		short_3 = short_4 * short_1;
	}
	if(1)
	{
	}
	long_2 = long_3 * long_1;
	char_1 = char_3 + char_2;
	short_3 = short_1 * short_3;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_2;
	return float_1;
}
int v__handle_esc_csi_decfra( double parameter_1,short parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float_1 = v__csi_arg_get(short_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = v__clean_up_rect_coordinates(unsigned_int_2,int_1,int_2,int_1,int_1);

	int_1 = int_3 * int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 + char_1;
	v_termpty_cells_att_fill_preserve_colors(unsigned_int_1,char_2,short_2,int_4);

	int_6 = int_5 * int_1;
	char_4 = char_1 * char_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = int_2 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_5 = 1;
		double_2 = double_1 * double_1;
		char_3 = char_1 * char_5;
	}
	return int_4;
}
long v__handle_esc_csi_decslrm( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_2;
	int_3 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	int_3 = int_3;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		long_1 = v__move_cursor_to_origin(double_1);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	}
	int_3 = int_4 * int_4;
	double_1 = double_2 + double_3;
	long_1 = long_2 + long_3;
	short_1 = short_1 + short_1;
	float_1 = v__csi_arg_get(short_2);

	char_1 = char_1;
	return long_3;
}
double v__handle_esc_csi_decstbm( short parameter_1,double parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	int_1 = int_1 * int_1;
	long_1 = long_1 + long_1;
	long_1 = long_2 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3 + long_3;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		long_1 = v__move_cursor_to_origin(double_1);

		int_3 = int_2 * int_2;
	}
	float_1 = v__csi_arg_get(short_1);

	char_1 = char_2;
	char_1 = char_2 * char_1;
	float_2 = float_2 + float_3;
	int_1 = int_1;
	float_3 = float_2;
	return double_2;
}
unsigned int v__handle_esc_csi_decscusr( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	v_termio_set_cursor_shape(unsigned_int_1,char_1);

	int_2 = int_1 + int_1;
	int_2 = int_3 + int_2;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_2;
	float_1 = v__csi_arg_get(short_1);

	short_1 = short_1 * short_1;
	long_2 = long_1 * long_2;
	int_3 = int_1 + int_3;
	float_3 = float_2 + float_1;
	long_4 = long_1 + long_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	short_3 = short_2 * short_3;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	char_3 = char_2 * char_2;
	double_1 = double_1;
	char_4 = char_3 * char_1;
	return unsigned_int_1;
}
short v__handle_esc_csi_dsr( short parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		float_3 = float_2 * float_1;
	}
	if(1)
	{
		long long_2 = 1;
		double double_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		short_2 = short_1 + short_1;
		long_2 = long_1 + long_1;
		v_termpty_write(char_1,short_1,int_1);

		double_1 = double_1 + double_1;
		short_2 = short_2 + short_1;
		char_1 = char_2 * char_1;
		float_3 = v__csi_arg_get(short_2);

		int_1 = int_2 + int_1;
		int_1 = int_3 * int_2;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		short short_3 = 1;
		char char_3 = 1;
		long long_3 = 1;
		int int_4 = 1;
		double_3 = double_2 * double_2;
		short_3 = short_3 * short_1;
		char_3 = char_1 + char_3;
		long_1 = long_3 * long_3;
		int_1 = int_3;
		int_3 = int_4;
	}
	return short_1;
}
void v__handle_esc_csi_truecolor_cmyk( short parameter_1,short parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_2;
	long_1 = long_1;
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	int_1 = v__csi_truecolor_arg_get(double_2);

	double_2 = double_2 * double_2;
	short_1 = short_2;
	char_2 = char_3;
	int_3 = int_2 * int_2;
	long_2 = long_3;
	unsigned_int_1 = v__approximate_truecolor_rgb(int_4,int_1,int_2,int_1);

	int_2 = int_1 * int_4;
}
unsigned int v__handle_esc_csi_truecolor_cmy( short parameter_1,short parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = v__csi_truecolor_arg_get(double_1);

	double_4 = double_2 + double_3;
	float_2 = float_1 + float_1;
	short_1 = short_2;
	unsigned_int_1 = v__approximate_truecolor_rgb(int_2,int_1,int_1,int_3);

	double_2 = double_4 + double_2;
	if(1)
	{
	}
	short_3 = short_3 * short_4;
	char_2 = char_1 + char_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	return unsigned_int_3;
}
unsigned int v__approximate_truecolor_rgb( int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_3 = long_1 + long_2;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float_1 = float_1 * float_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			int_1 = v_termio_textgrid_get(float_1);

			unsigned_int_1 = unsigned_int_1;
			if(1)
			{
				float float_2 = 1;
				float_2 = float_2 * float_1;
			}
		}
	}
	return unsigned_int_2;
}
int v__csi_truecolor_arg_get( double parameter_1)
{
	int int_1 = 1;
	return int_1;
}
long v__handle_esc_csi_truecolor_rgb( double parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	int_1 = int_2;
	int_2 = int_1 * int_2;
	char_1 = char_1 + char_2;
	int_3 = int_3 + int_3;
	double_1 = double_1 * double_2;
	if(1)
	{
		long long_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned_int_1 = v__approximate_truecolor_rgb(int_3,int_1,int_1,int_3);

		char_2 = char_1 + char_1;
		long_2 = long_1 + long_2;
		char_4 = char_3 + char_4;
	}
	if(1)
	{
	}
	return long_2;
	int_4 = v__csi_truecolor_arg_get(double_3);

}
int v__handle_esc_csi_color_set( float parameter_1,float parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	v__handle_esc_csi_truecolor_cmyk(short_1,short_1);

	char_1 = char_1 * char_1;
	float_1 = v__csi_arg_get(short_2);

	v_termpty_reset_att(unsigned_int_1);

	long_1 = v__handle_esc_csi_truecolor_rgb(double_1,float_2);

	unsigned_int_2 = unsigned_int_1;
	return int_1;
	unsigned_int_2 = v__handle_esc_csi_truecolor_cmy(short_1,short_3);

}
void v_termpty_cursor_copy( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		char char_1 = 1;
		double double_3 = 1;
		char_1 = char_1 * char_1;
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		float float_1 = 1;
		double double_4 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float_1 = float_1 + float_1;
		double_2 = double_1 + double_4;
		short_1 = short_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
}
void v__switch_to_alternative_screen( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "K2") > 0)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	v_termpty_screen_swap(unsigned_int_1);

}
long v__move_cursor_to_origin( double parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1 * int_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_2 = int_1 + int_2;
		double_3 = double_1 + double_2;
	}
	return long_1;
}
char v__pty_size( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	double_1 = double_1 * double_2;
	char_1 = char_2;
	char_1 = char_2 + char_1;
	int_3 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	return char_3;
}
void v__limit_coord( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 * int_2;
	int_4 = int_4 * int_5;
	char_2 = char_1 + char_1;
	char_1 = char_2;
	float_1 = float_1 * float_2;
	char_3 = char_2 + char_1;
	float_4 = float_3 * float_3;
}
char v__check_screen_info( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		double_2 = double_1 * double_2;
		short_1 = short_1 + short_1;
		float_1 = float_1 * float_2;
		v_termpty_cells_clear(unsigned_int_1,short_2,int_1);

		short_4 = short_3 * short_1;
		short_5 = short_5 * short_1;
		if(1)
		{
			int int_2 = 1;
			int_2 = int_1 * int_1;
		}
		v_termpty_text_save_top(double_3,char_1,unsigned_int_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return char_1;
}
unsigned int v__termpty_line_rewrap( short parameter_1,short parameter_2,int parameter_3,int parameter_4,long parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char_3 = char_1 * char_2;
	long_2 = long_1 + long_2;
	char_1 = v__check_screen_info(unsigned_int_1,int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_4;
}
unsigned int v__backlog_remove_latest_nolock( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_2;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	if(1)
	{
		short_1 = v_verify_beacon(char_1,int_3);

		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	v_termpty_save_free(short_2);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int_4 = int_3;
	double_2 = double_1 * double_2;
	int_2 = int_2;
	return unsigned_int_3;
}
void v_termpty_save_extract( long parameter_1)
{
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_4 = 1;
			long_1 = long_1 + long_1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			double_1 = double_1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			if(1)
			{
			}
			int_1 = int_1 + int_2;
			char_2 = char_1 * char_2;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
			if(1)
			{
				char char_3 = 1;
				char_3 = char_2;
			}
		}
	}
}
unsigned int v__termpty_line_is_empty( long parameter_1,int parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char char_3 = 1;
		long_1 = v__termpty_cell_is_empty();

		char_2 = char_2 + char_3;
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
void v_termpty_screen_swap( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	long_3 = long_1 + long_2;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 + int_2;
	double_2 = double_1 * double_2;
	float_1 = float_2 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_3 + double_3;
	double_1 = double_2;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
}
void v_termpty_resize( short parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_4 = 1;
	short short_1 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	char char_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_6 = 1;
	float float_6 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_7 = 1;
	short short_5 = 1;
	short short_6 = 1;
	char char_8 = 1;
	double_2 = double_1 + double_1;
	long_2 = long_1 + long_1;
	char_2 = char_1 + char_1;
	double_3 = double_1 + double_1;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	if(1)
	{
		long_3 = long_4;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	double_2 = double_2 + double_3;
	if(1)
	{
		int_3 = int_1 * int_2;
	}
	int_4 = int_4 * int_4;
	v_termpty_save_extract(long_1);

	float_2 = float_1;
	if(1)
	{
		char_3 = char_2 + char_1;
	}
	int_4 = int_1 * int_5;
	long_1 = long_3 * long_2;
	float_4 = float_2 + float_3;
	char_2 = char_4 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		short_2 = short_1 + short_2;
		if(1)
		{
			int_6 = int_3 * int_3;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
	}
	unsigned_int_2 = v_termpty_line_length(int_6,long_4);

	int_8 = int_5 + int_7;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	if(1)
	{
		double_4 = double_2 + double_3;
		int_3 = int_6 + int_7;
		int_2 = int_8;
		if(1)
		{
			long long_5 = 1;
			float float_5 = 1;
			char_4 = char_5 * char_5;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
			float_2 = float_1 * float_3;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
			if(1)
			{
				long_4 = long_3 * long_4;
			}
			long_5 = long_3 + long_5;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
			double_5 = double_3 * double_4;
			long_5 = long_5 + long_5;
			double_6 = double_5 * double_5;
			long_5 = long_2 + long_2;
			float_5 = float_2 * float_3;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_7 = 1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
		v__limit_coord(double_1);

		char_4 = char_6;
		double_7 = double_5 * double_7;
		short_3 = short_4;
	}
	unsigned_int_4 = v__termpty_line_is_empty(long_2,int_6);

	unsigned_int_6 = unsigned_int_2 * unsigned_int_2;
	short_4 = short_4 + short_3;
	long_6 = long_6 + long_3;
	float_6 = float_4 * float_2;
	double_4 = double_5 * double_2;
	short_4 = v_verify_beacon(char_3,int_5);

	int_9 = int_9 * int_7;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	v_termpty_screen_swap(unsigned_int_3);

	v_termpty_backlog_unlock();

	unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
	if(1)
	{
		int_9 = int_8 * int_3;
	}
	unsigned_int_7 = unsigned_int_2 * unsigned_int_7;
	unsigned_int_7 = v__backlog_remove_latest_nolock(int_2);

	char_7 = char_6 + char_5;
	unsigned_int_7 = v__termpty_line_rewrap(short_4,short_5,int_3,int_7,long_6);

	double_6 = double_4 + double_4;
	char_2 = v__pty_size(int_9);

	int_5 = int_9 * int_2;
	int_3 = int_2;
	v_termpty_backlog_lock();

	v_termpty_resize_tabs(unsigned_int_1,int_9,int_5);

	short_6 = short_5 + short_4;
	short_4 = short_5 * short_1;
	char_2 = char_2 + char_8;
}
char v_termio_win_get( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char_1 = char_2;
	double_1 = double_1 + double_1;
	return char_3;
}
char v__handle_esc_csi_reset_mode( char parameter_1,short parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	v__switch_to_alternative_screen(unsigned_int_1,int_1);

	short_3 = short_1 * short_2;
	char_1 = v_termio_win_get(unsigned_int_1);

	v_termpty_clear_screen(short_1,double_1);

	unsigned_int_2 = unsigned_int_1;
	v_termpty_resize(short_4,int_1,int_2);

	v_termpty_reset_state();

	long_1 = v__move_cursor_to_origin(double_1);

	unsigned_int_2 = unsigned_int_3;
	return char_2;
	float_1 = v__csi_arg_get(short_2);

	v_termpty_cursor_copy(unsigned_int_1,short_2);

}
void v__handle_esc_csi_cursor_pos_set( double parameter_1,short parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int_3 = int_1 + int_2;
	short_1 = short_1 + short_1;
	float_1 = v__csi_arg_get(short_1);

	long_2 = long_1 + long_2;
	int_3 = int_2;
	char_1 = char_1 * char_2;
	short_1 = short_1 + short_2;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_2 * long_3;
	}
	if(1)
	{
		double_1 = double_2;
		if(1)
		{
			long_2 = long_1 * long_2;
		}
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2;
	}
	double_2 = double_1 * double_1;
	int_4 = int_4 + int_3;
	if(1)
	{
		short_2 = short_2 * short_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1 * float_1;
		}
	}
	if(1)
	{
		int_2 = int_4 + int_2;
	}
	int_3 = int_1 + int_1;
}
void v_termpty_text_scroll_rev( short parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		char char_3 = 1;
		v_termpty_cells_clear(unsigned_int_2,short_1,int_1);

		long_1 = long_1 * long_1;
		char_3 = char_1 + char_2;
	}
	long_2 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
		}
		v_termio_scroll(int_1,int_1,int_1,int_1,-1 );

		int_1 = int_1 * int_2;
		if(1)
		{
			char_5 = char_1 + char_4;
		}
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			double double_4 = 1;
			int int_3 = 1;
			double_4 = double_1 * double_3;
			int_1 = int_3 + int_3;
			char_2 = char_4 + char_5;
		}
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			int_5 = int_4 + int_2;
		}
	}
}
void v_termpty_clear_line( double parameter_1,char parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float_3 = float_1 + float_2;
	v_termio_content_change(char_1,short_1,double_1,int_1);

	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	short_4 = short_2 * short_3;
	v_termpty_cells_clear(unsigned_int_2,short_2,int_2);

	int_1 = int_1 + int_2;
	short_4 = short_3 * short_5;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
		double_2 = double_2 + double_2;
	}
	long_1 = long_1 * long_2;
	int_3 = int_3;
}
void v_termpty_clear_screen( short parameter_1,double parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		v_termpty_clear_line(double_1,char_1,int_1);

		float_1 = float_1 + float_1;
	}
	v_termpty_cells_clear(unsigned_int_1,short_1,int_2);

	float_3 = float_2 + float_1;
	v_termio_content_change(char_1,short_2,double_1,int_2);

	int_3 = int_3 * int_1;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2;
}
void v_termpty_cell_codepoint_att_fill( char parameter_1,float parameter_2,int parameter_3,char parameter_4,int parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	float_1 = float_1 * float_2;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		double_2 = double_1 + double_1;
	}
}
unsigned int v__termpty_charset_trans( float parameter_1,long parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	int_1 = int_1;
	if(1)
	{
	}
	short_1 = short_2;
	int_2 = int_1 * int_1;
	if(1)
	{
		if(1)
		{
			char_1 = char_1 + char_1;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			short_2 = short_3 * short_4;
		}
		if(1)
		{
			short short_5 = 1;
			short short_6 = 1;
			short_6 = short_5 + short_6;
		}
		if(1)
		{
			char_1 = char_1 + char_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
	}
	return unsigned_int_3;
}
void v_termio_content_change( char parameter_1,short parameter_2,double parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	short short_3 = 1;
	char_1 = char_1 * char_1;
	char_1 = char_2;
	char_3 = char_2 + char_3;
	double_2 = double_1 * double_2;
	int_3 = int_1 + int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char_2 = char_3 * char_1;
		double_3 = double_1;
		short_1 = short_1 + short_1;
		float_2 = float_1 + float_1;
		int_1 = int_1 * int_3;
		double_1 = double_2 + double_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_3 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
				unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
				unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
			}
			float_3 = float_3;
			short_2 = short_2;
		}
	}
	if(1)
	{
	}
	long_1 = v__sel_set(int_2,char_1);

	int_3 = int_4 + int_3;
	long_2 = long_3;
	char_3 = char_2;
	long_2 = long_1 + long_2;
	if(1)
	{
		int_3 = int_3;
		short_2 = short_2 * short_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_4 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_5 = 1;
			double_3 = double_2 + double_1;
			if(1)
			{
				char char_4 = 1;
				char char_5 = 1;
				unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
				char_3 = char_4 * char_5;
			}
			double_6 = double_5 + double_3;
			unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
		}
	}
	if(1)
	{
		double double_7 = 1;
		int int_5 = 1;
		double_7 = double_4 * double_4;
		int_5 = int_3 * int_2;
		double_4 = double_1 * double_5;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		int_2 = int_3 + int_1;
		if(1)
		{
			long_1 = v__remove_links(int_4,short_3,-1 );

			char_2 = char_3 + char_1;
		}
	}
}
void v_termpty_text_append( int parameter_1,short parameter_2,int parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	short short_3 = 1;
	int_1 = v__termpty_is_dblwidth_get(short_1,int_1);

	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1 * short_1;
	double_3 = double_2 + double_2;
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	unsigned_int_2 = v__termpty_charset_trans(float_1,long_1);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	long_1 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_3 = 1;
		double double_6 = 1;
		short_2 = short_1 * short_1;
		if(1)
		{
			v_termpty_cell_codepoint_att_fill(char_1,float_1,int_2,char_1,int_1);

			unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
			int_4 = int_2 * int_3;
			double_1 = double_2 + double_1;
			int_4 = int_3 * int_4;
			int_4 = int_1 * int_5;
			char_1 = char_1 + char_1;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char_1 = char_1 * char_2;
			}
		}
		int_3 = int_2 * int_5;
		if(1)
		{
			long_2 = long_2 + long_2;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 * unsigned_int_5;
			}
			v_termio_content_change(char_2,short_3,double_1,int_3);

			char_2 = char_2 + char_2;
		}
		char_2 = char_2;
		if(1)
		{
			v_termpty_text_scroll_test(char_1,int_3,-1 );

			double_4 = double_5;
			long_3 = long_3 + long_2;
		}
		int_2 = int_1 + int_4;
		if(1)
		{
			long long_4 = 1;
			long_4 = long_3 + long_3;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
		}
		if(1)
		{
			long_3 = long_3 * long_2;
			double_5 = double_2;
			if(1)
			{
				long long_5 = 1;
				long long_6 = 1;
				long_6 = long_5 * long_2;
			}
			if(1)
			{
				double_6 = double_5 * double_5;
			}
			if(1)
			{
				int int_6 = 1;
				char char_3 = 1;
				int_3 = int_6 * int_2;
				char_1 = char_2 + char_3;
			}
		}
		if(1)
		{
			int int_7 = 1;
			int int_8 = 1;
			unsigned int unsigned_int_6 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int_5 = int_7 + int_8;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
			if(1)
			{
				double_1 = double_6 + double_4;
			}
			unsigned_int_5 = unsigned_int_3 * unsigned_int_6;
			if(1)
			{
				short short_4 = 1;
				unsigned_int_4 = unsigned_int_6 * unsigned_int_6;
				short_3 = short_4 * short_1;
			}
			float_3 = float_1 * float_2;
		}
	}
}
float v__csi_arg_get( short parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = long_1 * long_1;
	int_2 = int_1 * int_1;
	float_2 = float_1 + float_2;
	double_3 = double_1 * double_2;
	int_2 = int_1 * int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	return float_1;
}
short v__handle_esc_csi( double parameter_1,float parameter_2,double parameter_3,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double_1 = v__handle_cursor_control(unsigned_int_1,double_2,uni_para);

	char_2 = char_1 + char_1;
	double_2 = double_2 * double_2;
	return short_1;
}
void v__safechar( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	short_1 = short_2;
}
void v__handle_esc( long parameter_1,short parameter_2,char parameter_3,int uni_para)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_4 = 1;
	double double_4 = 1;
	int int_4 = 1;
	float float_4 = 1;
	long long_6 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_1;
	if(1)
	{
	}
	long_5 = long_4 + long_4;
	if(1)
	{
	}
	char_3 = char_2 + char_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2;
	int_3 = int_1 * int_2;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_3;
	long_5 = long_5 + long_5;
	float_3 = float_1 + float_2;
	char_2 = char_2 + char_2;
	long_4 = long_1 + long_3;
	double_1 = double_2;
	double_1 = double_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	double_3 = double_3 * double_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	short_2 = short_1 * short_2;
	char_4 = char_3 + char_1;
	double_4 = double_3 * double_1;
	double_3 = double_2 * double_4;
	char_4 = char_1 * char_1;
	float_1 = float_1;
	if(1)
	{
		char char_5 = 1;
		char_2 = char_5 + char_3;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	int_2 = int_4 + int_2;
	if(1)
	{
	}
	float_4 = float_3 + float_1;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
	if(1)
	{
	}
	long_6 = long_5 * long_4;
	double_1 = double_3 + double_4;
	if(1)
	{
	}
	double_2 = double_2 * double_4;
	short_3 = short_3 * short_1;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
	double_2 = double_2;
	if(1)
	{
	}
	char controller4vul_212[3];
	fgets(controller4vul_212 ,3 ,stdin);
	if( strcmp( controller4vul_212, "d6") > 0)
	{
		unsigned int unsigned_int_7 = 1;
		float_3 = float_3 + float_3;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_7;
		double_4 = double_1 * double_2;
		double_4 = double_3 + double_5;
		float_1 = float_2 * float_4;
		char controller4vul_213[2];
		fgets(controller4vul_213 ,2 ,stdin);
		if( strcmp( controller4vul_213, "Z") > 0)
		{
			short_1 = v__handle_esc_csi(double_2,float_1,double_2,uni_para);

			double_6 = double_1 + double_4;
		}
		float_3 = float_3 * float_2;
		int_2 = int_1 + int_5;
		if(1)
		{
			long_2 = long_6 * long_3;
			double_6 = double_5 * double_6;
			long_3 = long_2;
		}
	}
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
	double_5 = double_6;
	int_5 = int_6 + int_6;
	long_1 = long_1 * long_3;
	float_3 = float_4 * float_2;
}
void v_termpty_cell_fill( float parameter_1,int parameter_2,long parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	float_1 = float_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_1 = 1;
			double_1 = double_1 * double_1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			int_2 = int_1 * int_1;
			double_1 = double_2 + double_1;
		}
	}
}
void v_termpty_cells_fill( double parameter_1,long parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_1;
	short_1 = short_1 + short_2;
	float_3 = float_1 * float_2;
	char_2 = char_1 + char_1;
	v_termpty_cell_fill(float_1,int_1,long_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
void v_termpty_cells_clear( unsigned int parameter_1,short parameter_2,int parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	v_termpty_cells_fill(double_1,long_1,char_1,int_1);

	char_2 = char_2;
}
double v__tooltip_del(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	char_3 = char_1 + char_2;
	return double_1;
}
unsigned int v__tooltip_content(long parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_1;
	double_1 = v_media_add(int_1,unsigned_int_1,float_1,int_2,float_3,-1 );

	double_3 = double_2 + double_3;
	long_1 = long_1 * long_2;
	return unsigned_int_1;
}
void v_MD5Final( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1;
	double_2 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_4;
	v_MD5Transform(char_1,float_1);

	double_2 = double_3 + double_4;
	if(1)
	{
		long long_1 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long_1 = long_1;
		double_2 = double_2 + double_2;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
		short_3 = short_1 * short_2;
	}
	if(1)
	{
		float_1 = float_1 + float_2;
	}
	int_3 = int_1 + int_1;
	v_byteReverse(int_1,int_1);

	int_1 = int_4;
	short_4 = short_1;
	float_4 = float_2 + float_3;
	unsigned_int_1 = unsigned_int_7 + unsigned_int_3;
	double_5 = double_2 + double_2;
	double_6 = double_3 * double_4;
}
void v_MD5Transform( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	short short_4 = 1;
	int int_7 = 1;
	long long_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_8 = 1;
	int int_9 = 1;
	long long_4 = 1;
	int int_10 = 1;
	int int_11 = 1;
	long long_5 = 1;
	double double_6 = 1;
	char char_7 = 1;
	long long_6 = 1;
	int int_12 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1;
	int_2 = int_1 + int_1;
	double_4 = double_3 + double_4;
	double_4 = double_4 * double_5;
	float_3 = float_1 + float_2;
	int_2 = int_2 + int_1;
	int_1 = int_2 + int_2;
	char_1 = char_1 * char_2;
	char_3 = char_1 + char_2;
	float_1 = float_3 + float_3;
	char_1 = char_2 * char_1;
	char_2 = char_3 + char_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	int_4 = int_1 * int_3;
	short_2 = short_1 + short_1;
	long_1 = long_1;
	short_3 = short_3;
	unsigned_int_5 = unsigned_int_3;
	int_2 = int_5 * int_6;
	short_2 = short_2 + short_3;
	int_1 = int_3 + int_2;
	long_2 = long_1 * long_1;
	long_1 = long_1;
	short_3 = short_4;
	int_1 = int_5 + int_7;
	short_3 = short_4 * short_2;
	long_2 = long_3;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
	char_4 = char_1 + char_4;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	short_3 = short_2;
	char_4 = char_4 * char_5;
	long_3 = long_1 + long_2;
	long_3 = long_3 + long_2;
	int_5 = int_3 * int_7;
	char_1 = char_3 * char_5;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_5;
	char_1 = char_4 + char_6;
	char_5 = char_2 + char_5;
	short_1 = short_2 + short_4;
	char_6 = char_3 + char_2;
	int_7 = int_2 + int_5;
	char_6 = char_3 + char_2;
	int_8 = int_8 * int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	int_6 = int_9;
	int_5 = int_7 * int_7;
	double_1 = double_5;
	long_2 = long_4 * long_1;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
	long_2 = long_1 + long_2;
	int_10 = int_2 * int_3;
	int_9 = int_11 + int_10;
	float_3 = float_2 * float_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	long_3 = long_5;
	double_4 = double_2 + double_6;
	float_2 = float_2 * float_2;
	unsigned_int_4 = unsigned_int_1;
	float_2 = float_1 * float_1;
	short_2 = short_3;
	char_7 = char_2 + char_6;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	int_10 = int_6 * int_9;
	long_6 = long_4 * long_5;
	int_11 = int_11 + int_11;
	double_5 = double_6;
	int_12 = int_12 * int_5;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1;
	double_6 = double_6 * double_3;
}
void v_byteReverse( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double_1 = double_1;
}
void v_MD5Update( short parameter_1,long parameter_2,double parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_2;
	char_1 = char_1 + char_2;
	int_1 = int_1 * int_1;
	v_MD5Transform(char_2,float_1);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	int_2 = int_2;
	long_1 = long_1 * long_2;
	v_byteReverse(int_2,int_3);

	char_3 = char_1 + char_1;
	char_1 = char_1 + char_1;
	int_5 = int_2 + int_4;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_5;
	unsigned_int_2 = unsigned_int_1;
	float_1 = float_1;
	char_5 = char_3 + char_4;
	short_3 = short_1 + short_2;
	int_2 = int_4 * int_5;
	int_4 = int_2 * int_5;
	double_2 = double_1 + double_1;
	long_3 = long_1 * long_2;
}
void v_MD5Init( unsigned int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int_1 = int_1;
	int_1 = int_1;
	int_1 = int_1 * int_1;
	double_1 = double_1 + double_2;
	char_2 = char_1 * char_1;
	double_4 = double_3 + double_1;
}
void v_gravatar_tooltip( short parameter_1,unsigned int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_5 = 1;
	int int_2 = 1;
	short short_6 = 1;
	double_1 = double_1 + double_2;
	short_2 = short_1 * short_2;
	double_2 = double_2 * double_3;
	short_1 = short_2;
	double_2 = v__tooltip_del(int_1);

	short_3 = short_1;
	v_MD5Update(short_4,long_1,double_3);

	float_1 = float_1 * float_1;
	v_MD5Final(char_1,double_2);

	float_1 = float_2 + float_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "&X") > 0)
	{
	}
	double_1 = double_2 + double_2;
	if(1)
	{
	}
	float_2 = float_2 + float_1;
	v_MD5Init(unsigned_int_1);

	long_2 = long_2 + long_1;
	double_3 = double_4 + double_5;
	double_6 = double_7;
	short_1 = short_1 + short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = v__tooltip_content(long_1,int_1);

		char_2 = char_2 + char_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	short_4 = short_2 * short_5;
	short_4 = short_1 + short_3;
	int_2 = int_1 * int_2;
	short_6 = short_6 * short_2;
}
double v__cb_link_drag_done(float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1;
	double_3 = double_1 + double_2;
	float_1 = float_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "||") < 0)
	{
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_2 * short_3;
	}
	int_1 = int_1 * int_1;
	return double_4;
}
double v__cb_link_drag_accept(double parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double_2 = double_1 * double_1;
	int_1 = int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return double_3;
}
char v__cb_link_drag_move(short parameter_2,float parameter_3,char parameter_4,char parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_1 + char_2;
	double_1 = double_1 + double_1;
	char_2 = char_1 + char_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		if(1)
		{
			char char_5 = 1;
			char_4 = char_5 + char_1;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_4;
		}
	}
	return char_6;
}
float v__cb_link_icon_new(short parameter_2,short parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	char_3 = char_1 * char_2;
	int_1 = int_1;
	int_1 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 + long_1;
	long_3 = long_1 * long_3;
	char_3 = char_1 * char_2;
	return float_1;
}
float v__cb_link_move(char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	float float_4 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_2;
	char_1 = v__cb_link_drag_move(short_1,float_3,char_2,char_2);

	double_1 = double_1;
	float_3 = v__cb_link_icon_new(short_1,short_2,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	double_2 = v__cb_link_drag_done(float_4);

	int_1 = int_1 * int_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = int_1 * int_1;
		double_2 = double_1;
		int_2 = int_1 + int_2;
		if(1)
		{
			float_2 = float_1;
		}
		if(1)
		{
			int int_3 = 1;
			int_1 = int_3 + int_3;
		}
		double_4 = double_1 * double_3;
		double_3 = v__cb_link_drag_accept(double_4,float_4);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	return float_2;
}
double v__cb_link_up_delay()
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char_2 = char_1 + char_2;
	float_1 = v__activate_link(unsigned_int_1,char_1);

	double_1 = double_1 * double_2;
	char_4 = char_2 + char_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "<Y") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	double_2 = double_3 + double_4;
	return double_2;
}
short v__cb_link_up(unsigned int parameter_2,double parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	long_1 = long_1 * long_1;
	double_1 = v__cb_link_up_delay();

	int_2 = int_1 + int_1;
	float_1 = float_2;
	if(1)
	{
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short short_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_2 = double_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		short_3 = short_1 * short_2;
		double_1 = double_3 + double_3;
		if(1)
		{
			char controller_3[2];
			fgets(controller_3 ,2 ,stdin);
			if( strcmp( controller_3, "D") > 0)
			{
				int_2 = int_2 + int_2;
			}
			if(1)
			{
				int int_3 = 1;
				int_3 = int_1;
			}
		}
		double_3 = double_4 * double_3;
	}
	return short_2;
}
void v_term_focus( int parameter_1)
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
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = v__term_is_focused(int_2);

	char_1 = char_1 * char_1;
	if(1)
	{
	}
	char_3 = char_2 * char_3;
	long_1 = long_1 + long_1;
	long_3 = long_2 * long_1;
}
int v__term_is_focused( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	short_3 = short_1 + short_2;
	return int_1;
}
void v_term_unfocus( int parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 + double_1;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	char_2 = char_1 + char_1;
	int_1 = v__term_is_focused(int_2);

	float_1 = float_2;
}
float v__cb_ctxp_del(float parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_term_unfocus(int_1);

	double_2 = double_1 * double_1;
	v_term_focus(int_1);

	float_1 = float_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	float_3 = float_4;
	return float_5;
}
long v__cb_ctxp_dismissed(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_1 = long_2;
	float_1 = float_1;
	double_1 = double_2;
	int_2 = int_1 * int_1;
	return long_2;
}
char v__cb_ctxp_link_copy(unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	short_3 = short_1 * short_2;
	int_2 = int_1 * int_1;
	long_2 = long_1 + long_2;
	char_3 = char_1 * char_2;
	int_1 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_1;
	double_1 = v__take_selection_text(unsigned_int_1,double_2,int_4,-1 );

	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	return char_4;
}
float v__screen_visual_bounds( int parameter_1)
{
	float float_2 = 1;
	if(1)
	{
		int int_1 = 1;
		char char_1 = 1;
		int_1 = int_1 + int_1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float_2 = float_1 + float_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return float_2;
}
long v__draw_cell( long parameter_1,double parameter_2,short parameter_3,long parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	long long_6 = 1;
	double double_5 = 1;
	int int_3 = 1;
	short short_2 = 1;
	float_2 = float_1 * float_1;
	double_2 = double_1 + double_1;
	float_2 = float_3 * float_4;
	double_3 = double_3 * double_3;
	if(1)
	{
		int_1 = int_1;
	}
	short_1 = short_1 * short_1;
	char_2 = char_1 * char_1;
	float_4 = float_2 + float_1;
	double_1 = double_2 + double_4;
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
		if(1)
		{
			long long_2 = 1;
			long_3 = long_2 + long_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
	}
	if(1)
	{
		double_3 = double_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		char char_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		char_2 = char_3 * char_2;
		long_4 = long_3 * long_3;
		int_2 = int_2 + int_2;
		char_2 = char_1 + char_1;
		long_6 = long_5 + long_3;
		double_3 = double_5;
		int_1 = int_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		short_2 = short_2 * short_2;
	}
	if(1)
	{
		double_5 = double_3 * double_5;
	}
	if(1)
	{
		int int_4 = 1;
		int_3 = int_2 + int_4;
	}
	if(1)
	{
		if(1)
		{
			int_1 = int_2 + int_1;
		}
		if(1)
		{
			short short_3 = 1;
			short_1 = short_2 + short_3;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2;
	}
	return long_6;
}
char v__draw_line( unsigned int parameter_1,char parameter_2,float parameter_3,int parameter_4,char parameter_5)
{
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long_1 = v__draw_cell(long_1,double_1,short_1,long_2);

	double_2 = double_2 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double_2 = double_3;
	}
	return char_1;
}
long v_termpty_backlog_length( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_5 = 1;
	double double_5 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long_1 = long_2;
	double_1 = double_1 + double_1;
	double_1 = double_1 + double_2;
	double_2 = double_2 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2 * double_2;
	int_2 = int_1 + int_2;
	float_2 = float_1 * float_1;
	double_3 = double_3 + double_4;
	char_1 = char_1 * char_1;
	char_3 = char_2 * char_3;
	unsigned_int_2 = unsigned_int_3;
	short_1 = short_1 + short_2;
	if(1)
	{
		float float_4 = 1;
		float_2 = float_3 * float_4;
	}
	float_3 = float_5;
	if(1)
	{
		short_2 = short_2 * short_1;
	}
	double_5 = double_3 * double_2;
	if(1)
	{
		char_2 = char_4 * char_3;
	}
	double_5 = double_4 + double_1;
	if(1)
	{
		double double_6 = 1;
		double_4 = double_6 + double_5;
	}
	int_2 = int_3;
	if(1)
	{
		short_2 = v_verify_beacon(char_4,int_4);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	char_4 = char_2 + char_2;
	int_5 = int_2 + int_4;
	float_2 = float_1 * float_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_4;
	long_1 = long_1 + long_2;
	return long_2;
}
float v_termio_pty_get()
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return float_1;
}
int v_termio_textgrid_get( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_2 = float_1 * float_2;
	int_1 = int_1 * int_2;
	return int_1;
}
char v_miniview_colors_get( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_4 = 1;
		char_3 = char_1 * char_2;
		char_4 = char_2 + char_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_5 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		int_1 = v_termio_textgrid_get(float_1);

		char_5 = char_5 + char_3;
	}
	return char_2;
}
short v__deferred_renderer()
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int int_4 = 1;
	long long_1 = 1;
	char char_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	char char_5 = 1;
	float float_4 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	short short_3 = 1;
	int int_7 = 1;
	long long_3 = 1;
	float float_5 = 1;
	double double_6 = 1;
	int int_9 = 1;
	char_1 = char_1;
	int_1 = v_termio_scroll_get(unsigned_int_1);

	double_1 = double_1 + double_2;
	double_1 = double_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2;
	int_2 = int_1 * int_1;
	char_3 = char_2 + char_2;
	int_1 = int_3 + int_3;
	float_1 = float_1;
	if(1)
	{
	}
	if(1)
	{
		float_1 = float_2;
	}
	int_1 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	short_2 = short_1 + short_2;
	short_1 = short_2;
	if(1)
	{
	}
	double_1 = double_3 * double_4;
	double_2 = double_4 * double_3;
	int_1 = int_2 * int_4;
	short_2 = short_1 + short_1;
	long_1 = long_1;
	char_3 = char_2 * char_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_5 = int_3 * int_1;
	}
	if(1)
	{
		char_4 = char_1 * char_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_3 = v__draw_line(unsigned_int_1,char_2,float_3,int_4,char_5);

		double_4 = double_3;
		if(1)
		{
			short_2 = short_1;
		}
		float_4 = float_3 + float_4;
	}
	char_4 = v_miniview_colors_get(char_4,char_6);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_4 * double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_6;
	}
	char controller_8[3];
	fgets(controller_8 ,3 ,stdin);
	if( strcmp( controller_8, "eo") > 0)
	{
		int_6 = int_5 * int_4;
	}
	char_5 = char_5 * char_1;
	float_1 = v_termio_pty_get();

	long_1 = long_1 + long_2;
	if(1)
	{
		short_1 = short_2 * short_3;
		char_2 = char_5;
		if(1)
		{
			int_4 = int_7 + int_5;
			long_3 = long_3 + long_3;
		}
		if(1)
		{
			if(1)
			{
				double double_5 = 1;
				char char_7 = 1;
				float_1 = float_2 * float_1;
				double_5 = double_5 + double_2;
				char_1 = char_7 + char_4;
				float_2 = float_1;
			}
			if(1)
			{
				int int_8 = 1;
				long long_4 = 1;
				int_3 = int_8 * int_3;
				long_3 = long_4 * long_2;
			}
		}
	}
	if(1)
	{
		short_3 = short_3 * short_3;
	}
	float_4 = v__screen_visual_bounds(int_2);

	float_5 = float_4;
	long_2 = v_termpty_backlog_length(double_1);

	double_3 = double_3 + double_6;
	int_7 = int_6 * int_9;
	float_5 = v_termpty_cellrow_get(short_2,int_3,long_3);

	char_5 = char_6 + char_4;
	return short_2;
}
int v__queue_render( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	float_3 = float_1 * float_2;
	if(1)
	{
		int int_1 = 1;
		short_1 = v__deferred_renderer();

		int_1 = int_1;
	}
	return int_2;
}
void v_miniview_redraw( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	int_2 = v__queue_render(unsigned_int_1);

	short_1 = short_1 + short_2;
}
unsigned int v__block_obj_del()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	double_4 = double_3 * double_2;
	long_2 = long_1 * long_2;
	return unsigned_int_1;
	v__smart_media_del(long_1,unsigned_int_1);

}
int v__termpty_is_dblwidth_slow_get( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "P") > 0)
		{
		}
	}
	return int_1;
}
int v__termpty_is_dblwidth_get( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	int_1 = v__termpty_is_dblwidth_slow_get(long_1,int_1);

}
double v_term_preedit_str_get( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float_2 = float_1 + float_2;
	float_3 = float_1 + float_1;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	return double_1;
}
long v_media_get( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	return long_1;
}
int v__smart_media_clicked(double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_6 = 1;
	short short_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned_int_1 = v_termio_config_get(double_1);

	char_1 = char_1 + char_2;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			double double_4 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			double_4 = double_2 + double_3;
			if(1)
			{
				char char_3 = 1;
				char char_4 = 1;
				if(1)
				{
					int int_3 = 1;
					int int_4 = 1;
					int int_5 = 1;
					int_2 = int_2 + int_3;
					int_4 = int_4 * int_4;
					if(1)
					{
						long_1 = v_media_get(long_1);

						int_6 = int_5 + int_5;
					}
					if(1)
					{
						double_2 = double_4;
						double_3 = v_media_src_type_get(short_1);

						int_4 = int_1 * int_2;
						if(1)
						{
							int int_7 = 1;
							short short_2 = 1;
							short short_3 = 1;
							double double_5 = 1;
							int_6 = int_5 + int_7;
							short_3 = short_2 + short_2;
							double_3 = double_3 + double_5;
						}
					}
				}
				char_4 = char_3 * char_3;
			}
		}
	}
	short_5 = short_4 * short_4;
	return int_6;
}
unsigned int v_media_control_get( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	return unsigned_int_1;
}
long v__smart_media_stop(char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	return long_1;
}
void v__smart_media_pause(long parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
}
double v__smart_media_play(int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	short_1 = short_1 * short_2;
	return double_1;
}
void v__smart_media_del(long parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
}
void v_media_visualize_set( short parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 + int_2;
		}
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
}
void v_media_mute_set( double parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
}
void v_media_volume_set( unsigned int parameter_1,double parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char_1 = char_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	char_1 = char_2 * char_1;
}
short v__cb_media_vol(float parameter_2,int parameter_3,char parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 * char_1;
	double_1 = double_2;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	short_1 = short_1;
	return short_1;
	v_media_volume_set(unsigned_int_1,double_1);

}
float v__cb_media_pos(int parameter_2,int parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_1;
	int_1 = int_1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	v_media_position_set(long_1,double_1);

	double_1 = double_2;
	return float_1;
}
unsigned int v__cb_media_pos_drag_stop(char parameter_2,int parameter_3,char parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = long_1 * long_1;
	long_1 = long_2 * long_1;
	if(1)
	{
	}
	int_1 = int_1;
	short_1 = short_1 + short_1;
	int_2 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_2 + int_2;
	return unsigned_int_1;
}
float v__cb_media_pos_drag_start(double parameter_2,double parameter_3,double parameter_4)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_1;
	v_media_position_set(long_1,double_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_2 * long_2;
	long_3 = long_1 + long_3;
	short_1 = short_1 * short_1;
	return float_1;
}
void v_media_stop( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_2;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	char_1 = char_1 * char_2;
}
void v__cb_media_stop(short parameter_2,float parameter_3,long parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_2;
	v_media_stop(unsigned_int_1);

}
double v__cb_media_pause(float parameter_2,short parameter_3,short parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long_2 = long_1 * long_1;
	return double_1;
	v_media_play_set(float_1,int_1);

}
void v_media_play_set( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_3 + int_2;
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
		double_1 = double_2 * double_2;
	}
}
void v__cb_media_play(double parameter_2,char parameter_3,int parameter_4)
{
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	v_media_play_set(float_1,int_1);

	float_1 = float_2;
}
void v_media_position_set( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = double_1 + double_1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	float_3 = float_1 * float_2;
}
char v__cb_mov_ref(float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double_3 = double_1 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "N/") < 0)
	{
	}
	int_2 = int_1 + int_2;
	return char_1;
}
void v__cb_mov_progress(unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Wi") < 0)
	{
	}
	int_1 = int_1 + int_1;
}
double v__cb_mov_restart()
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	float_3 = float_1 * float_2;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return double_3;
}
char v__cb_mov_decode_stop(char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
		double_2 = v__cb_mov_restart();

		char_1 = char_2;
	}
	char_1 = char_3 + char_3;
	double_3 = double_3 + double_3;
	return char_2;
}
unsigned int v__cb_mov_len_change(long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	return unsigned_int_1;
}
float v__cb_mov_frame_resize(float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_2 = 1;
	int_2 = int_1 + int_1;
	short_1 = v__type_mov_calc(char_1,long_1,short_1,float_1,long_2);

	char_3 = char_2 * char_1;
	if(1)
	{
	}
	int_2 = int_2 * int_1;
	long_3 = long_2 * long_1;
	return float_2;
}
char v__cb_mov_frame_decode(double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	float_3 = float_2 + float_1;
	short_1 = v__type_mov_calc(char_1,long_2,short_1,float_2,long_3);

	double_1 = double_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	char_1 = char_2 + char_3;
	unsigned_int_4 = unsigned_int_2;
	int_1 = int_1;
	char_3 = char_3 * char_1;
	return char_1;
}
void v__type_mov_init()
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	double double_5 = 1;
	float float_3 = 1;
	double double_6 = 1;
	float float_4 = 1;
	short short_3 = 1;
	int int_5 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_7 = 1;
	char char_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_5 = 1;
	short short_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	long long_6 = 1;
	long long_7 = 1;
	float float_8 = 1;
	short short_8 = 1;
	char char_5 = 1;
	int_1 = int_1;
	char_1 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_4 = v__cb_mov_len_change(long_1);

	int_2 = int_1 * int_1;
	float_1 = v__cb_media_pos(int_3,int_4,unsigned_int_4);

	unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
	char_3 = v__cb_mov_ref(float_2);

	double_1 = v__cb_media_pause(float_1,short_1,short_1);

	double_2 = double_2 + double_3;
	double_2 = double_3 * double_4;
	if(1)
	{
		char_1 = v__cb_mov_decode_stop(char_1);

		short_1 = short_1 + short_2;
	}
	if(1)
	{
		char_2 = v__cb_mov_frame_decode(double_5);

		float_2 = float_3;
		double_2 = double_3;
		double_3 = double_2 + double_2;
	}
	double_6 = double_6;
	float_1 = float_1 + float_1;
	float_3 = float_3 + float_4;
	short_3 = short_3;
	int_2 = int_1 * int_5;
	v_media_play_set(float_5,int_5);

	v_media_visualize_set(short_1,double_2);

	double_4 = double_4 + double_1;
	float_6 = v__cb_media_pos_drag_start(double_2,double_2,double_3);

	unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		v__cb_media_play(double_3,char_1,int_2);

		int_1 = int_3 * int_5;
	}
	float_4 = float_5 * float_5;
	v__cb_media_stop(short_1,float_7,long_1);

	v_media_mute_set(double_6,char_1);

	float_3 = float_3;
	char_2 = char_2 * char_4;
	int_3 = int_2 + int_4;
	float_6 = float_7 * float_5;
	long_3 = long_1 * long_2;
	float_5 = v__cb_mov_frame_resize(float_5);

	short_3 = short_3 + short_4;
	unsigned_int_7 = unsigned_int_7 + unsigned_int_1;
	v_media_position_set(long_4,double_7);

	int_3 = int_2 + int_2;
	v__cb_mov_progress(unsigned_int_8);

	long_5 = long_2 * long_2;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
	short_4 = short_5 + short_2;
	short_6 = short_5 * short_3;
	short_6 = short_7;
	long_6 = long_5 * long_1;
	unsigned_int_3 = v__cb_media_pos_drag_stop(char_3,int_4,char_3);

	long_7 = long_5 * long_1;
	float_1 = float_6 * float_8;
	if(1)
	{
		short_8 = v__cb_media_vol(float_4,int_4,char_5);

		double_2 = double_6 * double_2;
	}
	char controller_6[3];
	fgets(controller_6 ,3 ,stdin);
	if( strcmp( controller_6, "jS") < 0)
	{
		long_5 = long_3 * long_5;
	}
	unsigned_int_7 = v_theme_apply(double_3,unsigned_int_1,double_4);

}
float v__cb_edje_preloaded(long parameter_2,long parameter_3,unsigned int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	char_3 = char_3 * char_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return float_1;
}
char v__type_edje_init( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	int_3 = int_1 * int_2;
	double_2 = double_1 + double_2;
	long_2 = long_1 + long_1;
	double_3 = double_3;
	float_1 = float_1;
	int_5 = int_3 + int_4;
	v_theme_auto_reload_enable(unsigned_int_1);

	double_3 = double_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_2 * float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float float_4 = 1;
			float float_5 = 1;
			short short_1 = 1;
			short short_2 = 1;
			float_1 = v__cb_edje_preloaded(long_2,long_1,unsigned_int_1);

			float_5 = float_4 * float_5;
			short_1 = short_1 + short_1;
			short_2 = short_1 * short_1;
		}
	}
	return char_1;
}
float v__type_scale_init( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	float float_1 = 1;
	long_1 = long_1 + long_2;
	char_3 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1;
	double_1 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	double_1 = v__cb_scale_preloaded(short_1,long_1);

	int_1 = int_1 * int_2;
	char_2 = char_4 * char_2;
	int_5 = int_3 * int_4;
	int_4 = int_3;
	char_6 = char_2 + char_5;
	return float_1;
}
float v__cb_img_frame()
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2 + int_3;
	if(1)
	{
		long_1 = long_1 + long_2;
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			int_5 = int_4 + int_3;
		}
		long_1 = long_2 * long_1;
		char_1 = char_1 * char_1;
		if(1)
		{
			if(1)
			{
				long long_3 = 1;
				long_3 = long_2 + long_2;
			}
		}
	}
	short_1 = short_2;
	long_2 = long_2 + long_1;
	float_1 = float_1;
	return float_1;
}
unsigned int v__type_img_anim_handle( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double_2 = double_1 + double_1;
	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	int_2 = int_2;
	if(1)
	{
	}
	float_3 = v__cb_img_frame();

	float_4 = float_1 * float_2;
	float_5 = float_2 + float_5;
	return unsigned_int_1;
}
long v__cb_img_preloaded(long parameter_2,long parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	int_2 = int_1 + int_1;
	return long_1;
}
float v__type_img_init( float parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_1;
	long_1 = v__cb_img_preloaded(long_2,long_3);

	int_1 = int_2 * int_2;
	int_3 = int_1;
	int_1 = int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	char_1 = char_1 + char_1;
	int_3 = int_2 * int_3;
	unsigned_int_3 = v__type_img_anim_handle(unsigned_int_2);

	short_1 = short_1 + short_2;
	char_2 = char_2 + char_1;
	short_4 = short_3 * short_2;
	double_3 = double_2 * double_2;
	return float_1;
}
long v__url_compl_cb(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_7 = 1;
	float float_2 = 1;
	long_1 = long_2;
	double_2 = double_1 * double_1;
	char_1 = char_2;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "o?") > 0)
	{
	}
	long_1 = long_1 * long_1;
	char_1 = v__type_edje_init(float_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	double_3 = double_2 * double_3;
	float_1 = v__smart_calculate(unsigned_int_2,-1 );

	char_4 = char_2 * char_3;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	double_2 = double_3;
	float_1 = v__type_scale_init(double_3);

	v__type_mov_init();

	unsigned_int_1 = unsigned_int_5 + unsigned_int_4;
	double_2 = double_2;
	long_2 = long_1 * long_3;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
	long_1 = long_3;
	long_3 = long_4;
	float_1 = float_1;
	char_1 = char_5 * char_6;
	long_6 = long_5 * long_4;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	double_3 = double_1 * double_1;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
	return long_7;
	float_1 = v__type_img_init(float_2);

}
char v__url_prog_cb(int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	float_2 = float_1 + float_1;
	char_1 = char_2;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		int_1 = int_1 * int_2;
		if(1)
		{
			char_2 = char_1 * char_2;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_3 = int_2 + int_2;
		if(1)
		{
			short short_3 = 1;
			unsigned int unsigned_int_2 = 1;
			short_3 = short_2 + short_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			int_2 = int_2;
			short_1 = short_1;
		}
	}
	return char_3;
}
double v__type_thumb_calc( char parameter_1,char parameter_2,int parameter_3,long parameter_4,char parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	float float_4 = 1;
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	if(1)
	{
		char_1 = char_1 + char_1;
		float_1 = float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_2 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_3 = int_1 + int_2;
		int_2 = int_1 + int_2;
		if(1)
		{
			double_1 = double_1;
			float_1 = float_3;
			if(1)
			{
				double_1 = double_1 * double_2;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
			unsigned_int_6 = unsigned_int_5 + unsigned_int_1;
		}
		char_2 = char_1 * char_1;
		long_2 = long_1 * long_2;
		double_4 = double_1 + double_3;
		double_2 = double_3 + double_2;
	}
	float_3 = float_4 + float_4;
	double_1 = double_3;
	return double_1;
}
short v__type_mov_calc( char parameter_1,long parameter_2,short parameter_3,float parameter_4,long parameter_5)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_4 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	short_3 = short_1 + short_2;
	int_1 = int_1 + int_1;
	double_1 = double_1 + double_1;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 * char_1;
		short_1 = short_1 + short_2;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		int int_4 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float_3 = float_1 + float_2;
		double_2 = double_3;
		double_3 = double_3 + double_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			int_2 = int_1 + int_1;
		}
		if(1)
		{
			int_2 = int_1;
			short_1 = short_2 + short_4;
			if(1)
			{
				float float_4 = 1;
				short_1 = short_3 + short_2;
				float_4 = float_1 * float_1;
				if(1)
				{
					int int_3 = 1;
					int_4 = int_3 + int_4;
				}
			}
		}
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 + long_1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
			if(1)
			{
				int_4 = int_1 * int_4;
				long_1 = long_1;
				if(1)
				{
					long_1 = long_2;
				}
			}
		}
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			long_2 = long_2 * long_2;
			char_4 = char_3 + char_1;
		}
		unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
		double_1 = double_3 * double_3;
		double_1 = double_2 + double_3;
		unsigned_int_1 = unsigned_int_5;
	}
	short_5 = short_1 + short_1;
	double_4 = double_1 + double_2;
	return short_4;
}
long v__type_edje_calc( double parameter_1,long parameter_2,unsigned int parameter_3,unsigned int parameter_4,float parameter_5)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return long_1;
}
unsigned int v__type_img_calc( int parameter_1,double parameter_2,unsigned int parameter_3,short parameter_4,short parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int_2 = int_1 + int_1;
		double_1 = double_2;
	}
	if(1)
	{
		int int_3 = 1;
		short short_1 = 1;
		float float_3 = 1;
		float float_5 = 1;
		char char_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		char char_3 = 1;
		double double_5 = 1;
		long long_3 = 1;
		int_2 = int_2 * int_3;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			short_2 = short_1 * short_1;
			float_3 = float_1 * float_2;
			if(1)
			{
				float float_4 = 1;
				int_2 = int_1 + int_1;
				float_1 = float_1 * float_4;
				if(1)
				{
					float_5 = float_5 * float_2;
				}
			}
		}
		if(1)
		{
			char char_2 = 1;
			float_5 = float_3;
			char_1 = char_1 + char_1;
			char controller_8[2];
			fgets(controller_8 ,2 ,stdin);
			if( strcmp( controller_8, "?") > 0)
			{
				char_1 = char_2;
				double_4 = double_3 * double_4;
				if(1)
				{
					long_1 = long_1 + long_1;
				}
			}
			if(1)
			{
				char_1 = char_2 + char_2;
				short_2 = short_3 + short_1;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
			short_1 = short_2 * short_3;
		}
		char_1 = char_1 + char_3;
		double_4 = double_5 * double_5;
		long_3 = long_2 * long_1;
		double_3 = double_3 * double_4;
	}
	long_2 = long_4 * long_2;
	short_3 = short_3 * short_2;
	return unsigned_int_3;
}
double v__cb_scale_preloaded(short parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		float_2 = float_1 * float_1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		double_4 = double_3 * double_2;
		int_1 = int_1 * int_2;
		double_1 = double_2 + double_4;
		long_2 = long_2;
	}
	return double_1;
}
long v__type_scale_calc( short parameter_1,long parameter_2,short parameter_3,float parameter_4,char parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_6 = 1;
	short short_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	float float_3 = 1;
	char * vul_var;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
		short_1 = short_1 * short_2;
		int_3 = int_4 + int_5;
	}
	char controller4vul_252[3];
	fgets(controller4vul_252 ,3 ,stdin);
	if( strcmp( controller4vul_252, "!,") < 0)
	{
		long long_1 = 1;
		short_2 = short_3 + short_4;
		char controller4vul_253[3];
		fgets(controller4vul_253 ,3 ,stdin);
		if( strcmp( controller4vul_253, "L_") > 0)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			double_1 = double_1 * double_1;
			char controller4vul_254[2];
			fgets(controller4vul_254 ,2 ,stdin);
			if( strcmp( controller4vul_254, "7") > 0)
			{
				float_1 = float_2;
				double_3 = double_2 * double_2;
				char controller4vul_255[2];
				fgets(controller4vul_255 ,2 ,stdin);
				if( strcmp( controller4vul_255, "H") > 0)
				{
					vul_var=(char*)malloc(20*sizeof(char));
					strcpy(vul_var, "CWE-761");
					if(uni_para == 997)
					{
						vul_var = vul_var + 1;
					}
					free(vul_var);
					unsigned_int_1 = unsigned_int_2;
				}
			}
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
			int_6 = int_5 * int_4;
			if(1)
			{
				short_3 = short_2 * short_1;
				short_4 = short_5 + short_3;
				if(1)
				{
					unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
				}
			}
		}
		if(1)
		{
			short_5 = short_5 + short_3;
			int_2 = int_1 + int_2;
		}
		char_1 = char_1 + char_2;
		long_3 = long_1 * long_2;
		double_2 = double_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	}
	if(1)
	{
		double double_4 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
		double_4 = double_2 + double_3;
		double_4 = double_4 + double_2;
		if(1)
		{
			long long_4 = 1;
			long_4 = long_3 + long_3;
		}
		if(1)
		{
			double_1 = double_1 * double_2;
		}
		if(1)
		{
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double_1 = double_1;
			double_2 = double_5 * double_5;
			short_5 = short_3 + short_5;
			float_2 = float_1 * float_2;
			float_2 = float_2 * float_1;
			long_2 = long_2;
			double_7 = double_2 * double_6;
			int_6 = int_4 * int_1;
			double_5 = double_5;
		}
		short_2 = short_6 * short_1;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_7;
		short_4 = short_3;
	}
	char_3 = char_1 + char_2;
	float_1 = float_3 + float_3;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
}
double v__unsmooth_timeout(int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	long long_4 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	double double_1 = 1;
	char_1 = char_2;
	int_1 = int_1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	long_2 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_250[2];
	fgets(controller4vul_250 ,2 ,stdin);
	if( strcmp( controller4vul_250, "k") < 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		char controller4vul_251[2];
		fgets(controller4vul_251 ,2 ,stdin);
		if( strcmp( controller4vul_251, "j") > 0)
		{
			float float_2 = 1;
			long_3 = v__type_scale_calc(short_1,long_4,short_2,float_1,char_3,uni_para);

			float_1 = float_1 * float_2;
		}
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			short_2 = short_3 * short_4;
		}
	}
	if(1)
	{
		int_2 = int_2 + int_2;
	}
	return double_1;
}
double v__smooth_handler(int uni_para)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1 * short_1;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	if(1)
	{
		int_2 = int_2;
	}
	char controller4vul_246[2];
	fgets(controller4vul_246 ,2 ,stdin);
	if( strcmp( controller4vul_246, "}") > 0)
	{
		char controller4vul_247[2];
		fgets(controller4vul_247 ,2 ,stdin);
		if( strcmp( controller4vul_247, "d") > 0)
		{
			int int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int_3 = int_2 * int_2;
			short_3 = short_1 + short_2;
			char controller4vul_248[2];
			fgets(controller4vul_248 ,2 ,stdin);
			if( strcmp( controller4vul_248, "l") < 0)
			{
				int int_4 = 1;
				int_4 = int_1;
				char controller4vul_249[2];
				fgets(controller4vul_249 ,2 ,stdin);
				if( strcmp( controller4vul_249, "9") > 0)
				{
					short short_4 = 1;
					double_1 = v__unsmooth_timeout(uni_para);

					short_2 = short_4 * short_4;
				}
			}
			if(1)
			{
				char_1 = char_1;
			}
			if(1)
			{
				long_2 = long_2 * long_1;
			}
			char_2 = char_1 + char_2;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		if(1)
		{
			short_3 = short_2;
		}
		float_2 = float_1 * float_1;
	}
	return double_2;
}
float v__smart_calculate( unsigned int parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_7 = 1;
	int_1 = int_2;
	long_1 = long_1 * long_1;
	char controller4vul_245[3];
	fgets(controller4vul_245 ,3 ,stdin);
	if( strcmp( controller4vul_245, "Nx") < 0)
	{
		double_1 = v__smooth_handler(uni_para);

	}
	short_1 = short_1 * short_1;
	if(1)
	{
		int_3 = int_2 + int_3;
	}
	if(1)
	{
		int_5 = int_2 + int_4;
	}
	char_3 = char_1 + char_2;
	int_6 = int_4 + int_5;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
	long_1 = long_1 + long_1;
	float_2 = float_1 + float_1;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_5 + int_7;
	double_2 = double_1;
	int_5 = int_4 * int_7;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
	}
	if(1)
	{
		int_3 = int_1 * int_3;
		char_2 = char_3 + char_1;
	}
	return float_1;
}
unsigned int v__smart_move( float parameter_1,long parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "T") > 0)
	{
	}
	int_1 = int_2 * int_1;
	return unsigned_int_1;
}
double v__smart_resize( long parameter_1,double parameter_2,char parameter_3)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_4 = 1;
	float_1 = float_1 + float_1;
	long_3 = long_1 + long_2;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	long_4 = long_1 + long_1;
	return double_1;
}
void v__smart_del()
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	int int_1 = 1;
	short short_3 = 1;
	int int_6 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		float float_2 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		char char_2 = 1;
		double_1 = double_1 * double_2;
		char_2 = char_1 + char_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	short_1 = short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2 * long_1;
	if(1)
	{
		long long_3 = 1;
		if(1)
		{
			short_1 = short_2;
		}
		long_3 = long_4;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1;
	}
	if(1)
	{
		long_4 = long_5;
	}
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3 + double_3;
	}
	if(1)
	{
		float float_4 = 1;
		float_1 = float_4 + float_3;
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	}
	if(1)
	{
		short_3 = short_3;
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_2;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int_5 = int_3 * int_4;
	}
	if(1)
	{
		long_5 = long_4 * long_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 * char_3;
	}
	if(1)
	{
		short short_4 = 1;
		short_4 = short_1 + short_3;
	}
	int_1 = int_6;
	short_2 = short_3;
}
short v__smart_add( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	short_1 = short_1 + short_1;
	short_3 = short_1 + short_2;
	char_2 = char_1 * char_1;
	int_3 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	double_2 = double_1 * double_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	float_1 = float_2;
	int_2 = int_3 * int_4;
	return short_3;
}
char v__smart_init(int uni_para)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	float_1 = v__smart_calculate(unsigned_int_1,uni_para);

	float_2 = float_1 * float_1;
	long_2 = long_1 + long_1;
	double_3 = double_1 + double_2;
	int_2 = int_1 + int_2;
	int_2 = int_2 + int_1;
	long_2 = long_2 + long_3;
	short_2 = short_1 + short_2;
	double_4 = double_3 * double_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	float_2 = float_2;
	char_1 = char_1 * char_1;
	return char_1;
}
double v_media_add( int parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4,float parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_10 = 1;
	char char_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_11 = 1;
	double double_7 = 1;
	int int_9 = 1;
	int int_10 = 1;
	double double_8 = 1;
	int int_11 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_12 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	double_3 = double_1 + double_2;
	long_2 = long_1 + long_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	float_4 = float_3 * float_4;
	long_3 = long_3 + long_1;
	if(1)
	{
	}
	long_1 = long_1 * long_4;
	int_2 = int_1 * int_1;
	int_4 = int_2 + int_3;
	int_1 = int_5;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	char controller4vul_239[2];
	fgets(controller4vul_239 ,2 ,stdin);
	if( strcmp( controller4vul_239, "l") > 0)
	{
		char controller4vul_240[2];
		fgets(controller4vul_240 ,2 ,stdin);
		if( strcmp( controller4vul_240, ")") > 0)
		{
			double double_4 = 1;
			unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
			if(1)
			{
				long long_5 = 1;
				float_2 = float_3;
				long_5 = long_4 * long_1;
				double_2 = double_4 + double_2;
			}
			if(1)
			{
				long long_6 = 1;
				unsigned_int_6 = unsigned_int_6 + unsigned_int_7;
				long_3 = long_6 * long_1;
				double_3 = double_1 + double_5;
			}
			if(1)
			{
				unsigned_int_8 = unsigned_int_2;
			}
			if(1)
			{
				double_1 = double_3 * double_5;
			}
			if(1)
			{
				long_4 = long_1;
			}
			if(1)
			{
				long_4 = long_3;
			}
			if(1)
			{
				unsigned_int_5 = unsigned_int_8 * unsigned_int_6;
			}
			if(1)
			{
				double_5 = double_4 + double_5;
				unsigned_int_9 = unsigned_int_2;
				double_2 = double_4 * double_1;
				double_5 = double_4 * double_1;
				short_1 = short_2 * short_2;
				int_6 = int_6;
				unsigned_int_8 = unsigned_int_6 + unsigned_int_7;
			}
			char controller4vul_241[3];
			fgets(controller4vul_241 ,3 ,stdin);
			if( strcmp( controller4vul_241, "lk") < 0)
			{
				short short_3 = 1;
				short_2 = short_3 + short_2;
				unsigned_int_1 = unsigned_int_9 * unsigned_int_9;
				int_1 = int_5 + int_3;
				char controller4vul_242[2];
				fgets(controller4vul_242 ,2 ,stdin);
				if( strcmp( controller4vul_242, "}") < 0)
				{
					int int_7 = 1;
					unsigned_int_10 = unsigned_int_7 + unsigned_int_3;
					if(1)
					{
						int_7 = int_6;
						int_6 = int_6;
					}
					char controller4vul_243[3];
					fgets(controller4vul_243 ,3 ,stdin);
					if( strcmp( controller4vul_243, "<:") > 0)
					{
						int int_8 = 1;
						int_6 = int_2 * int_3;
						char controller4vul_244[2];
						fgets(controller4vul_244 ,2 ,stdin);
						if( strcmp( controller4vul_244, "`") > 0)
						{
							char_2 = v__smart_init(uni_para);

							int_8 = int_7 + int_4;
							unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
							int_6 = int_6 * int_3;
						}
						if(1)
						{
							short short_4 = 1;
							double_5 = double_4 + double_6;
							short_4 = short_1;
							int_8 = int_7 * int_5;
							unsigned_int_7 = unsigned_int_1 * unsigned_int_9;
							double_5 = double_5 + double_2;
							unsigned_int_11 = unsigned_int_1 * unsigned_int_7;
							double_7 = double_1 + double_1;
							int_8 = int_8 + int_9;
							int_1 = int_9 * int_10;
						}
					}
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_7 + unsigned_int_4;
				}
			}
		}
		if(1)
		{
			float float_5 = 1;
			float_5 = float_1 + float_2;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_5 = 1;
			short_5 = short_5;
			double_7 = double_8 * double_5;
		}
	}
	if(1)
	{
		short short_6 = 1;
		long long_7 = 1;
		long long_8 = 1;
		long long_9 = 1;
		if(1)
		{
			double_3 = double_8 + double_7;
			double_3 = double_5 + double_5;
		}
		short_1 = short_6 * short_1;
		if(1)
		{
			double_1 = double_7;
			double_3 = double_5 * double_5;
		}
		int_6 = int_1;
		if(1)
		{
			char_2 = char_2;
			unsigned_int_7 = unsigned_int_3 + unsigned_int_4;
		}
		unsigned_int_11 = unsigned_int_6;
		if(1)
		{
			unsigned_int_10 = unsigned_int_4 + unsigned_int_4;
			unsigned_int_9 = unsigned_int_6 + unsigned_int_1;
		}
		long_9 = long_7 * long_8;
		int_4 = int_3 + int_11;
	}
	double_3 = double_9 * double_6;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
	unsigned_int_4 = unsigned_int_12 * unsigned_int_10;
	int_10 = int_3 * int_11;
	unsigned_int_12 = unsigned_int_5;
	unsigned_int_8 = unsigned_int_4 + unsigned_int_3;
	int_3 = int_6 + int_4;
	int_4 = int_9 * int_3;
	char controller_11[2];
	fgets(controller_11 ,2 ,stdin);
	if( strcmp( controller_11, ":") > 0)
	{
		double_8 = double_8 * double_3;
	}
	return double_1;
}
short v__block_media_activate( double parameter_1,int parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long_1 = long_1 + long_2;
	short_1 = short_1 + short_2;
	short_4 = short_3 * short_1;
	int_1 = int_1;
	double_1 = double_1 + double_2;
	char controller4vul_238[2];
	fgets(controller4vul_238 ,2 ,stdin);
	if( strcmp( controller4vul_238, "^") > 0)
	{
		double_3 = v_media_add(int_1,unsigned_int_1,float_1,int_1,float_1,uni_para);

		double_3 = double_4 * double_5;
	}
	if(1)
	{
		double_1 = double_4 * double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_5;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "TG") < 0)
	{
		short_1 = short_5;
	}
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	short_1 = short_1 * short_5;
	double_3 = double_5 + double_4;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_2 = float_2 * float_3;
	}
	char_2 = char_1 * char_1;
	double_4 = double_2 * double_4;
	int_3 = int_2 * int_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	char_4 = char_1 + char_3;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_6;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1;
		short_1 = short_1 + short_4;
	}
	double_3 = double_2 + double_5;
	short_3 = short_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_7;
	if(1)
	{
		int_2 = int_3 + int_2;
	}
	return short_2;
}
float v__block_edje_message_cb(char parameter_2,float parameter_3,int parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	int int_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_7 = 1;
	short short_8 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_6 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_6 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_9 = 1;
	short short_9 = 1;
	unsigned int unsigned_int_11 = 1;
	unsigned int unsigned_int_12 = 1;
	char char_5 = 1;
	int int_10 = 1;
	int int_11 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2 + int_1;
	short_1 = short_1;
	int_2 = int_3 * int_3;
	double_1 = double_2;
	if(1)
	{
	}
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	int_2 = int_4 * int_4;
	int_5 = int_3 + int_4;
	short_1 = short_1 * short_2;
	int_1 = int_2 + int_1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_3;
	short_1 = short_1 + short_3;
	long_3 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	double_2 = double_2 + double_1;
	int_1 = int_2 + int_5;
	short_1 = short_2 + short_3;
	float_1 = float_2 + float_2;
	int_5 = int_3 * int_2;
	short_4 = short_3 + short_2;
	long_1 = long_4 + long_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_5 = 1;
		short_4 = short_3 * short_5;
		long_4 = long_2 + long_5;
	}
	short_7 = short_1 * short_6;
	int_6 = int_4 * int_2;
	int_6 = int_1;
	double_4 = double_2 + double_3;
	short_6 = short_7 + short_6;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_5;
	double_3 = double_1 + double_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_6 = int_6;
		double_4 = double_4 + double_1;
		int_1 = int_2 + int_2;
	}
	short_6 = short_3;
	long_1 = long_4 + long_3;
	int_5 = int_7 + int_6;
	short_8 = short_4 + short_1;
	unsigned_int_6 = unsigned_int_6;
	unsigned_int_4 = unsigned_int_6;
	float_3 = float_1 * float_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_8 = unsigned_int_7 * unsigned_int_3;
		long_2 = long_6 + long_5;
		long_4 = long_1 * long_1;
	}
	double_3 = double_1 * double_5;
	unsigned_int_7 = unsigned_int_3;
	char_1 = char_1;
	char_3 = char_2 + char_3;
	double_5 = double_1 * double_1;
	short_3 = short_7 * short_8;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_9;
	char_1 = char_3 * char_2;
	char_2 = char_1 * char_1;
	short_8 = short_1 + short_6;
	char_2 = char_3 + char_4;
	long_6 = long_2 + long_4;
	float_2 = float_4 + float_5;
	float_5 = float_1 * float_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_7;
	int_2 = int_6 * int_2;
	char_4 = char_4;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double_3 = double_3 + double_6;
		long_6 = long_6 * long_5;
		int_5 = int_3 * int_2;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_8;
	int_5 = int_3 + int_1;
	double_2 = double_3 * double_6;
	int_8 = int_6 * int_2;
	int_4 = int_2;
	unsigned_int_10 = unsigned_int_9 * unsigned_int_8;
	v_termpty_write(char_2,short_3,int_9);

	short_9 = short_7 * short_4;
	unsigned_int_12 = unsigned_int_11 * unsigned_int_11;
	unsigned_int_12 = unsigned_int_7 + unsigned_int_9;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		long long_7 = 1;
		unsigned_int_4 = unsigned_int_9 + unsigned_int_8;
		float_4 = float_2;
		long_3 = long_1 + long_7;
	}
	long_2 = long_2;
	char_5 = char_2 + char_3;
	int_10 = int_11;
	return float_1;
}
void v_termpty_write( char parameter_1,short parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_3 = int_1 + int_2;
	int_2 = int_4;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "U.") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
}
double v__block_edje_signal_cb(unsigned int parameter_2,double parameter_3,long parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_4 = 1;
	float_2 = float_1 + float_1;
	int_3 = int_1 + int_2;
	int_1 = int_1;
	double_2 = double_1 + double_2;
	long_2 = long_1 * long_1;
	long_1 = long_2 + long_3;
	if(1)
	{
	}
	if(1)
	{
		int int_5 = 1;
		int_5 = int_4 * int_5;
	}
	double_3 = double_2 + double_2;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short_2 = short_1 * short_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_2 = unsigned_int_3;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		v_termpty_write(char_1,short_2,int_4);

		short_2 = short_1 + short_1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		short short_3 = 1;
		float_2 = float_1 * float_2;
		double_3 = double_2;
		short_2 = short_3 * short_3;
	}
	return double_4;
}
void v_termpty_block_chid_update( short parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
}
char v__block_edje_cmds( long parameter_1,long parameter_2,short parameter_3,short parameter_4)
{
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	v_termpty_block_chid_update(short_1,double_1);

	short_2 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return char_1;
	double_1 = v__block_edje_signal_cb(unsigned_int_1,double_1,long_1);

	float_1 = v__block_edje_message_cb(char_1,float_2,int_1);

}
char v_homedir_get( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short_2 = short_1 * short_1;
		long_2 = long_1 * long_2;
		if(1)
		{
			double_1 = double_1;
		}
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2;
	}
	return char_1;
}
double v__block_edje_activate( double parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	long long_6 = 1;
	long long_7 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_1 = v_homedir_get(char_2,long_1);

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	long_4 = long_2 * long_3;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		double_2 = double_2 + double_1;
	}
	if(1)
	{
		long long_5 = 1;
		long_5 = long_1 + long_1;
		if(1)
		{
			char char_3 = 1;
			int int_1 = 1;
			char_3 = char_3;
			int_3 = int_1 + int_2;
		}
		char controller_6[2];
		fgets(controller_6 ,2 ,stdin);
		if( strcmp( controller_6, "6") == 0)
		{
			float float_2 = 1;
			float_2 = float_1 + float_1;
			double_2 = double_3 + double_2;
		}
	}
	long_7 = long_4 + long_6;
	long_6 = long_4 * long_1;
	double_1 = double_1 + double_2;
	int_3 = int_3 * int_3;
	if(1)
	{
		double_2 = v_config_theme_path_default_get(double_1);

		char_4 = v__block_edje_cmds(long_2,long_7,short_1,short_2);

		double_1 = double_3 + double_3;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 * int_3;
	}
	return double_3;
}
char v__block_activate( unsigned int parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_2 = double_1 * double_1;
	long_1 = long_1;
	char controller4vul_237[2];
	fgets(controller4vul_237 ,2 ,stdin);
	if( strcmp( controller4vul_237, "d") > 0)
	{
		short_1 = v__block_media_activate(double_3,int_1,uni_para);

	}
	int_1 = int_2 + int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	short_3 = short_2 * short_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	return char_1;
}
long v_termpty_block_get( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	if(1)
	{
	}
	return long_1;
}
int v_termpty_block_id_get( int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	return int_2;
}
void v_termpty_backscroll_adjust( char parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = v_verify_beacon(char_1,int_1);

}
char v__smart_apply( short parameter_1,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_7 = 1;
	short short_4 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_3 = 1;
	double double_9 = 1;
	char char_6 = 1;
	short short_5 = 1;
	double double_10 = 1;
	float float_4 = 1;
	short short_6 = 1;
	int int_7 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_11 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_8 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_11 = 1;
	short short_7 = 1;
	short short_8 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_12 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_13 = 1;
	char char_9 = 1;
	char char_10 = 1;
	char char_11 = 1;
	double double_12 = 1;
	char char_12 = 1;
	char char_13 = 1;
	int int_10 = 1;
	int int_11 = 1;
	short short_9 = 1;
	short short_10 = 1;
	float float_7 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_15 = 1;
	int int_12 = 1;
	long long_6 = 1;
	double double_13 = 1;
	double double_14 = 1;
	int int_13 = 1;
	float float_8 = 1;
	double double_16 = 1;
	short short_12 = 1;
	int int_14 = 1;
	long long_7 = 1;
	short_2 = short_1 + short_1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_1;
	short_3 = short_1 + short_2;
	double_6 = double_4 + double_5;
	int_3 = int_1 * int_3;
	long_2 = long_1 * long_2;
	short_2 = short_1 * short_1;
	char_1 = char_1 + char_2;
	double_7 = double_4 + double_2;
	short_4 = short_1;
	double_5 = double_3 * double_8;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_1 = float_2;
		int_1 = int_3 + int_3;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		short_1 = short_3 + short_2;
		if(1)
		{
			float_1 = float_1 + float_2;
		}
		int_3 = int_1 + int_4;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		}
		int_4 = int_5 * int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_4 = 1;
			if(1)
			{
				if(1)
				{
					if(1)
					{
						float_2 = float_2;
					}
					unsigned_int_1 = unsigned_int_1;
				}
				double_7 = double_7 + double_4;
				if(1)
				{
					int_4 = int_6 * int_5;
				}
				if(1)
				{
					char_4 = char_1 + char_3;
				}
				unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
				unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
				char_5 = char_3 * char_1;
				unsigned_int_7 = unsigned_int_6 * unsigned_int_3;
				float_1 = float_2 + float_2;
				float_1 = float_3 + float_2;
			}
			char controller4vul_233[2];
			fgets(controller4vul_233 ,2 ,stdin);
			if( strcmp( controller4vul_233, "9") < 0)
			{
				double_9 = double_6 * double_8;
				char_4 = char_6 + char_6;
				if(1)
				{
					if(1)
					{
						unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
					}
					short_4 = short_1 + short_5;
					double_5 = double_4 + double_10;
					float_4 = float_1 + float_1;
					double_10 = double_8 * double_8;
					char_2 = char_4 + char_2;
					short_2 = short_1 * short_6;
					int_6 = int_4 * int_7;
					char_4 = char_3 * char_1;
					long_3 = long_4;
					double_10 = double_4 + double_11;
					char_7 = char_3;
					unsigned_int_1 = unsigned_int_5 * unsigned_int_6;
					if(1)
					{
						unsigned_int_8 = unsigned_int_7;
						unsigned_int_8 = unsigned_int_6 + unsigned_int_9;
						char_6 = char_1;
						unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
						int_5 = int_3;
					}
				}
				char controller4vul_234[3];
				fgets(controller4vul_234 ,3 ,stdin);
				if( strcmp( controller4vul_234, ").") < 0)
				{
					char controller4vul_235[3];
					fgets(controller4vul_235 ,3 ,stdin);
					if( strcmp( controller4vul_235, "LJ") > 0)
					{
						char controller4vul_236[2];
						fgets(controller4vul_236 ,2 ,stdin);
						if( strcmp( controller4vul_236, "Z") > 0)
						{
							char_6 = v__block_activate(unsigned_int_7,char_3,uni_para);

							unsigned_int_10 = unsigned_int_3;
						}
						int_3 = int_4 * int_8;
					}
					float_5 = float_3 + float_4;
					if(1)
					{
						unsigned_int_3 = unsigned_int_10 + unsigned_int_11;
					}
					if(1)
					{
						unsigned_int_3 = unsigned_int_9 + unsigned_int_11;
					}
					int_5 = int_1;
					char_1 = char_6;
					short_8 = short_2 * short_7;
					char_1 = char_1 * char_5;
					unsigned_int_2 = unsigned_int_5;
					long_3 = long_2 + long_4;
					if(1)
					{
						char_8 = char_3 * char_7;
					}
				}
				if(1)
				{
					unsigned int unsigned_int_14 = 1;
					float float_6 = 1;
					unsigned_int_12 = unsigned_int_8;
					int_9 = int_9 + int_1;
					int_3 = int_3 * int_2;
					unsigned_int_14 = unsigned_int_6 * unsigned_int_13;
					char_11 = char_9 + char_10;
					double_3 = double_9 + double_9;
					if(1)
					{
						double_3 = double_12 * double_6;
						unsigned_int_10 = unsigned_int_12 + unsigned_int_5;
					}
					if(1)
					{
						char_6 = char_12 + char_11;
						short_8 = short_1 + short_4;
					}
					if(1)
					{
						double_11 = double_4 * double_9;
					}
					if(1)
					{
						if(1)
						{
							float_2 = float_5;
						}
						if(1)
						{
							double_6 = double_6 * double_6;
						}
					}
					if(1)
					{
						unsigned_int_1 = unsigned_int_5 * unsigned_int_8;
					}
					if(1)
					{
						double_12 = double_8 * double_3;
					}
					if(1)
					{
						char_8 = char_13 + char_7;
						int_7 = int_9 * int_2;
						double_3 = double_2 + double_3;
						int_4 = int_10;
						short_6 = short_7 + short_6;
						int_10 = int_5 * int_11;
						short_8 = short_9;
					}
					if(1)
					{
						unsigned_int_7 = unsigned_int_3;
					}
					if(1)
					{
						unsigned_int_1 = unsigned_int_8;
					}
					if(1)
					{
						if(1)
						{
							short_9 = short_5;
						}
						unsigned_int_1 = unsigned_int_7 * unsigned_int_11;
					}
					int_1 = int_4 * int_4;
					short_10 = short_3;
					float_4 = float_6 * float_5;
					unsigned_int_10 = unsigned_int_12 * unsigned_int_10;
					if(1)
					{
						float_5 = float_1 + float_5;
						int_3 = int_4 * int_9;
					}
					if(1)
					{
						float_6 = float_5 + float_5;
						unsigned_int_12 = unsigned_int_2 * unsigned_int_4;
					}
					int_10 = int_11 + int_11;
					double_5 = double_11;
					float_2 = float_5 + float_3;
					float_7 = float_1 + float_1;
					if(1)
					{
						double_10 = double_6 * double_8;
					}
				}
			}
		}
		long_4 = long_5;
		if(1)
		{
			unsigned_int_15 = unsigned_int_8;
		}
	}
	short_9 = short_3 * short_4;
	if(1)
	{
		int_8 = int_3 * int_12;
		unsigned_int_6 = unsigned_int_7 + unsigned_int_1;
		int_6 = int_2 + int_11;
		long_3 = long_3;
		int_11 = int_4;
		long_6 = long_4 + long_5;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				short short_11 = 1;
				char char_14 = 1;
				double_9 = double_3 + double_13;
				double_12 = double_7 + double_8;
				short_3 = short_5 + short_1;
				if(1)
				{
					int_2 = int_12 + int_9;
				}
				short_6 = short_6 + short_5;
				if(1)
				{
					if(1)
					{
						char_10 = char_4;
						char_6 = char_3;
						char_5 = char_9 + char_3;
					}
				}
				if(1)
				{
					short_11 = short_7 + short_5;
					unsigned_int_2 = unsigned_int_1;
				}
				short_10 = short_6;
				double_14 = double_8;
				double_12 = double_14 * double_8;
				unsigned_int_10 = unsigned_int_13 * unsigned_int_11;
				char_3 = char_11 * char_8;
				unsigned_int_12 = unsigned_int_5 + unsigned_int_9;
				char_9 = char_5;
				char_12 = char_5 * char_12;
				double_13 = double_1 + double_2;
				char_11 = char_9 * char_5;
				char_14 = char_6 + char_12;
				if(1)
				{
					double double_15 = 1;
					double_10 = double_14 + double_12;
					double_11 = double_6 + double_2;
					int_5 = int_4 + int_13;
					float_7 = float_1 * float_5;
					int_1 = int_6 * int_2;
					int_12 = int_12 + int_5;
					float_8 = float_4 + float_3;
					short_11 = short_7 * short_7;
					double_15 = double_4;
					float_5 = float_8 + float_4;
				}
				int_12 = int_5 * int_1;
				if(1)
				{
					if(1)
					{
						char_2 = char_8 + char_6;
						double_6 = double_10 * double_1;
					}
				}
			}
			long_2 = long_3 + long_5;
		}
		double_16 = double_5;
		char_11 = char_5 + char_13;
	}
	double_2 = double_3 * double_8;
	if(1)
	{
		unsigned_int_8 = unsigned_int_9 + unsigned_int_13;
		double_2 = double_16 * double_4;
		short_12 = short_2 + short_9;
	}
	if(1)
	{
		short_9 = short_3 + short_12;
	}
	if(1)
	{
		int_13 = int_1 * int_9;
	}
	double_14 = double_8 * double_6;
	int_12 = int_14;
	char_12 = char_7 + char_6;
	if(1)
	{
		short short_13 = 1;
		double double_17 = 1;
		unsigned int unsigned_int_16 = 1;
		int_6 = int_3 * int_1;
		long_1 = long_6;
		float_4 = float_8;
		short_13 = short_2 * short_8;
		double_17 = double_6 * double_5;
		float_4 = float_3;
		if(1)
		{
			long_7 = long_6 + long_4;
			int_1 = int_1 * int_2;
		}
		short_7 = short_12 + short_1;
		double_2 = double_3;
		float_3 = float_4 * float_5;
		long_5 = long_5 + long_6;
		short_8 = short_1 + short_3;
		unsigned_int_16 = unsigned_int_10;
		short_9 = short_1 + short_13;
		int_13 = int_7 + int_4;
		if(1)
		{
			int_10 = int_8 * int_13;
		}
		if(1)
		{
			if(1)
			{
				float_1 = float_5;
			}
			if(1)
			{
				unsigned_int_16 = unsigned_int_2 + unsigned_int_5;
			}
			if(1)
			{
				short_13 = short_13 + short_10;
			}
			if(1)
			{
				float_1 = float_7 * float_2;
			}
			if(1)
			{
				char_13 = char_8 * char_12;
			}
		}
		unsigned_int_8 = unsigned_int_15 * unsigned_int_11;
	}
	if(1)
	{
		double_10 = double_2 + double_13;
	}
	if(1)
	{
		int_1 = int_1 * int_5;
	}
	long_1 = long_7;
	return char_8;
}
void v__smart_cb_change(int uni_para)
{
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char_1 = v__smart_apply(short_1,uni_para);

	double_1 = double_1;
	char_3 = char_1 + char_2;
	float_1 = float_1 + float_1;
	double_1 = double_1 + double_2;
	int_3 = int_1 * int_2;
	int_4 = int_4 * int_1;
}
int v__smart_update_queue( float parameter_1,long parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	char controller4vul_232[3];
	fgets(controller4vul_232 ,3 ,stdin);
	if( strcmp( controller4vul_232, "t=") < 0)
	{
		v__smart_cb_change(uni_para);

	}
	int_2 = int_1 * int_2;
	return int_1;
}
long v__lost_selection_reset_job()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	v__lost_selection(int_1,-1 );

	int_2 = int_2;
	long_1 = long_1 + long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "}e") > 0)
	{
		char char_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char_1 = char_1;
		short_2 = short_1 + short_2;
	}
	return long_1;
}
void v__lost_selection(int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double_1 = double_1;
	double_2 = double_2;
	double_2 = double_3 * double_1;
	float_1 = float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	char controller4vul_229[3];
	fgets(controller4vul_229 ,3 ,stdin);
	if( strcmp( controller4vul_229, "JG") < 0)
	{
		float float_3 = 1;
		char controller4vul_230[2];
		fgets(controller4vul_230 ,2 ,stdin);
		if( strcmp( controller4vul_230, "Z") < 0)
		{
			short short_2 = 1;
			double_3 = double_4;
			char controller4vul_231[2];
			fgets(controller4vul_231 ,2 ,stdin);
			if( strcmp( controller4vul_231, " ") > 0)
			{
				short short_1 = 1;
				int_1 = v__smart_update_queue(float_2,long_1,uni_para);

				short_1 = short_1 * short_1;
			}
			short_4 = short_2 + short_3;
		}
		float_1 = float_2 * float_3;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		char char_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		if(1)
		{
			short short_5 = 1;
			short_5 = short_4 * short_3;
			double_1 = double_4;
		}
		long_3 = long_2 * long_2;
		char_1 = char_1;
		long_2 = long_2 + long_3;
		int_3 = int_2 * int_2;
	}
}
double v__take_selection_text( unsigned int parameter_1,double parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_3 = 1;
	int_3 = int_1 * int_2;
	double_1 = double_1;
	int_4 = int_1 * int_3;
	char_2 = char_1 * char_2;
	int_2 = int_5 * int_5;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_2 + double_3;
	double_1 = double_4 * double_1;
	float_2 = float_1 * float_2;
	char controller4vul_228[3];
	fgets(controller4vul_228 ,3 ,stdin);
	if( strcmp( controller4vul_228, "5d") < 0)
	{
		short short_2 = 1;
		v__lost_selection(int_5,uni_para);

		short_2 = short_1 + short_1;
	}
	short_1 = short_3 + short_3;
	return double_2;
}
long v__cb_ctxp_link_content_copy(long parameter_2,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	double_1 = v__take_selection_text(unsigned_int_1,double_2,int_1,uni_para);

	float_1 = float_1;
	int_1 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	short_1 = short_1 * short_1;
	double_1 = double_3;
	double_3 = double_2 * double_2;
	unsigned_int_5 = unsigned_int_2;
	return long_1;
}
void v_ty_sb_free( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_1;
	char_1 = char_2;
	char_1 = char_1 + char_1;
}
double v_ty_sb_steal_buf( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long_3 = long_1 + long_2;
	int_2 = int_1 * int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		int_2 = int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_3 = 1;
			int_3 = int_1 * int_3;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_4 = unsigned_int_4;
	unsigned_int_4 = unsigned_int_2;
	short_2 = short_1 * short_2;
	double_2 = double_1 + double_1;
	double_3 = double_1 * double_1;
	return double_4;
}
int v_codepoint_to_utf8( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
		int_3 = int_2 + int_2;
		int_3 = int_4 * int_4;
	}
	if(1)
	{
		int_1 = int_2;
		int_2 = int_3 + int_1;
		int_5 = int_4 + int_5;
		double_1 = double_2 * double_2;
	}
	if(1)
	{
		short_1 = short_1 * short_2;
		float_2 = float_1 * float_1;
		short_2 = short_1 + short_2;
		double_3 = double_2 * double_1;
		double_4 = double_4 + double_5;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short_1 = short_2 * short_1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		char_3 = char_1 * char_2;
		double_5 = double_2 * double_3;
		double_3 = double_2 * double_2;
		float_2 = float_2 * float_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_3 = 1;
		long_3 = long_1 + long_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
		float_2 = float_2 + float_3;
		long_3 = long_1 * long_2;
		double_4 = double_1 + double_5;
	}
	if(1)
	{
		int int_6 = 1;
		int_6 = int_4 + int_5;
	}
	return int_2;
}
void v_ty_sb_spaces_rtrim()
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 * float_2;
	char_3 = char_1 + char_2;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		float float_4 = 1;
		float float_5 = 1;
		unsigned_int_1 = unsigned_int_2;
		float_1 = float_3;
		double_1 = double_1;
		float_5 = float_2 + float_4;
	}
}
int v_ty_sb_add( unsigned int parameter_1,long parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double_1 = double_1 * double_2;
		char_1 = char_2;
		char_3 = char_1 + char_3;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "z#") < 0)
		{
		}
		long_2 = long_1 * long_2;
		char_3 = char_3 * char_3;
	}
	short_2 = short_1 * short_1;
	float_1 = float_2;
	float_2 = float_1;
	return int_1;
}
double v__termpty_cellrow_from_beacon_get( char parameter_1,int parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short_1 = v_verify_beacon(char_1,int_1);

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	int_2 = int_1 + int_2;
	int_2 = int_2;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_6;
	}
	double_1 = double_1 + double_2;
	if(1)
	{
		long long_2 = 1;
		unsigned_int_3 = unsigned_int_3;
		long_2 = long_1 + long_1;
	}
	int_1 = int_2 * int_3;
	float_2 = float_1 * float_1;
	unsigned_int_4 = unsigned_int_2;
	double_3 = double_3 * double_1;
	if(1)
	{
		int int_4 = 1;
		char char_2 = 1;
		short short_2 = 1;
		int int_5 = 1;
		double double_4 = 1;
		long long_3 = 1;
		short short_3 = 1;
		int_2 = int_4 * int_1;
		char_1 = char_2 * char_1;
		short_1 = short_2 + short_2;
		int_2 = int_5 * int_5;
		double_4 = double_4 * double_3;
		long_1 = long_3 * long_3;
		short_3 = short_1 + short_3;
	}
	float_4 = float_1 + float_3;
	return double_1;
}
float v_termpty_cellrow_get( short parameter_1,int parameter_2,long parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
		}
		double_1 = v__termpty_cellrow_from_beacon_get(char_1,int_1,unsigned_int_1);

		long_1 = long_1 + long_2;
	}
	if(1)
	{
	}
	return float_1;
}
void v_termio_selection_get( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,long parameter_7)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	char char_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	float float_3 = 1;
	long_2 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		if(1)
		{
			long long_3 = 1;
			long_2 = long_1 * long_3;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			v_termpty_backlog_unlock();

			int_1 = int_2;
		}
		if(1)
		{
			int_2 = v_ty_sb_add(unsigned_int_2,long_4,unsigned_int_2);

			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						char char_1 = 1;
						char char_2 = 1;
						char_3 = char_1 * char_2;
					}
					if(1)
					{
						int_3 = int_1 + int_1;
					}
				}
				if(1)
				{
					double_1 = double_1;
				}
			}
		}
		if(1)
		{
			int_2 = v_codepoint_to_utf8(short_1,char_3);

			int_3 = int_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned int unsigned_int_4 = 1;
				if(1)
				{
					int int_4 = 1;
					int_1 = int_1 + int_4;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
				}
				if(1)
				{
					int int_5 = 1;
					v_termpty_backlog_lock();

					v_ty_sb_spaces_rtrim();

					int_3 = int_5;
				}
				if(1)
				{
					double_2 = v_ty_sb_steal_buf(float_1);

					double_2 = double_1 * double_1;
				}
				if(1)
				{
					v_ty_sb_free(float_2);

					unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
				}
			}
			long_2 = long_2;
		}
		if(1)
		{
			short_2 = short_1 + short_1;
		}
	}
	float_3 = v_termpty_cellrow_get(short_2,int_3,long_2);

}
short v__cb_ctxp_link_open(double parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double_1 = double_1;
	float_1 = v__activate_link(unsigned_int_1,char_1);

	float_3 = float_1 * float_2;
	char_1 = char_1 + char_1;
	char_1 = char_1 * char_2;
	int_2 = int_1 * int_2;
	char_1 = char_1 * char_1;
	return short_1;
}
int v__should_inline( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = v_termio_config_get(double_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	short_2 = short_1 + short_2;
	short_1 = short_2 + short_3;
	if(1)
	{
	}
	float_2 = float_1 + float_1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	return int_1;
}
float v_link_is_email()
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
}
char v_link_is_protocol( short parameter_1)
{
	char char_1 = 1;
	return char_1;
}
unsigned int v_link_is_url( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	return unsigned_int_1;
	char_1 = v_link_is_protocol(short_1);

}
float v__activate_link( unsigned int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double double_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_7 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_3;
	short_3 = short_1 * short_2;
	int_3 = int_1 * int_2;
	int_4 = v__should_inline(long_1);

	float_2 = float_1 * float_1;
	long_4 = long_2 * long_3;
	float_3 = float_2 + float_2;
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
			short_4 = short_2 * short_2;
		}
	}
	if(1)
	{
		int_1 = int_1 + int_3;
	}
	if(1)
	{
		long_1 = long_1 * long_3;
	}
	if(1)
	{
		char char_4 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		char_3 = char_4;
	}
	double_1 = double_2 + double_1;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_4 + int_1;
		short_2 = short_4 * short_3;
		if(1)
		{
			double double_4 = 1;
			double_4 = double_4 * double_2;
		}
		if(1)
		{
			double_5 = double_1 + double_1;
		}
		unsigned_int_1 = v_link_is_url(long_5);

		int_4 = int_4 * int_3;
		char controller_14[2];
		fgets(controller_14 ,2 ,stdin);
		if( strcmp( controller_14, ">") < 0)
		{
			char_2 = char_2 + char_2;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		}
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
		double_5 = double_1 + double_6;
		if(1)
		{
			long_4 = long_5 + long_1;
			if(1)
			{
				if(1)
				{
					unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
					unsigned_int_3 = unsigned_int_6 * unsigned_int_3;
				}
				if(1)
				{
					double_1 = v_media_src_type_get(short_1);

					unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
					unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
				}
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						int_2 = int_1 * int_1;
					}
				}
				if(1)
				{
					if(1)
					{
						double_6 = double_2 * double_6;
					}
				}
				if(1)
				{
					if(1)
					{
						int_3 = int_4 * int_2;
					}
				}
				double_5 = double_5;
				unsigned_int_6 = unsigned_int_4 * unsigned_int_6;
			}
		}
	}
	if(1)
	{
		char_1 = char_2 + char_5;
		int_3 = int_1 * int_3;
		if(1)
		{
			short short_5 = 1;
			short_5 = short_4 * short_5;
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
				unsigned_int_4 = unsigned_int_6 * unsigned_int_5;
			}
			if(1)
			{
				char char_6 = 1;
				if(1)
				{
					if(1)
					{
						double_5 = double_3 + double_6;
					}
				}
				if(1)
				{
					if(1)
					{
						double double_7 = 1;
						float_1 = v_link_is_email();

						double_7 = double_2 + double_1;
					}
				}
				if(1)
				{
					if(1)
					{
						double double_8 = 1;
						double double_9 = 1;
						double_9 = double_8 + double_6;
					}
				}
				int_4 = int_2 + int_4;
				char_2 = char_6 + char_3;
			}
		}
	}
	if(1)
	{
		char_5 = char_5 * char_5;
	}
	unsigned_int_1 = unsigned_int_7 + unsigned_int_5;
	if(1)
	{
		int_2 = int_1;
	}
	return float_2;
}
long v__cb_ctxp_link_preview(double parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float_1 = float_1 + float_1;
	double_3 = double_1 + double_2;
	int_1 = int_1;
	long_2 = long_1 + long_2;
	int_1 = int_1 * int_1;
	long_2 = long_3 * long_4;
	return long_3;
	float_2 = v__activate_link(unsigned_int_1,char_1);

}
void v__is_fmt( long parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1 + int_1;
	short_1 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int_1 = int_2 + int_1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_2;
		}
		if(1)
		{
		}
	}
}
double v_media_src_type_get( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char_1 = char_2;
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		v__is_fmt(long_1,unsigned_int_1);

		int_1 = int_1 + int_2;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "DI") > 0)
	{
		char char_3 = 1;
		char_2 = char_1 * char_3;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	return double_1;
}
float v__mouse_in_selection( long parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float_1 = float_1 + float_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, " ") < 0)
	{
	}
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_3 * double_2;
	long_3 = long_1 + long_2;
	if(1)
	{
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		float_3 = float_3;
		unsigned_int_1 = unsigned_int_2;
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
	return float_2;
}
long v__smart_xy_to_cursor( double parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double_2 = double_1 * double_2;
	int_1 = int_1 + int_2;
	long_1 = long_1 + long_2;
	float_1 = float_1;
	int_3 = int_1 * int_3;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	return long_2;
}
float v__cb_link_down(char parameter_2,float parameter_3,int uni_para)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_5 = 1;
	long long_6 = 1;
	float float_4 = 1;
	float_1 = float_1 + float_1;
	short_3 = short_1 + short_2;
	char_2 = char_1 + char_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		long_1 = long_1 + long_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	char controller4vul_225[3];
	fgets(controller4vul_225 ,3 ,stdin);
	if( strcmp( controller4vul_225, "RN") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		char char_3 = 1;
		int int_1 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_6 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		double double_4 = 1;
		float float_3 = 1;
		int int_7 = 1;
		double_2 = double_1 * double_2;
		double_2 = double_1 * double_1;
		long_1 = long_3 * long_4;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		char controller4vul_226[3];
		fgets(controller4vul_226 ,3 ,stdin);
		if( strcmp( controller4vul_226, "{e") < 0)
		{
			float float_2 = 1;
			float_2 = float_1 + float_1;
			long_3 = long_5 + long_1;
			char controller4vul_227[2];
			fgets(controller4vul_227 ,2 ,stdin);
			if( strcmp( controller4vul_227, "v") < 0)
			{
				long_6 = v__cb_ctxp_link_content_copy(long_5,uni_para);

			}
		}
		short_4 = short_4 * short_5;
		char_2 = char_2 + char_3;
		if(1)
		{
			long long_7 = 1;
			long_6 = long_2 * long_7;
			if(1)
			{
				int int_2 = 1;
				int_3 = int_1 + int_2;
			}
		}
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		short_6 = short_5;
		if(1)
		{
			int_4 = int_4 + int_5;
		}
		if(1)
		{
			double double_3 = 1;
			long_2 = long_1 + long_5;
			double_3 = double_2 + double_3;
		}
		if(1)
		{
			long_1 = long_1;
		}
		int_4 = int_1 + int_6;
		double_4 = double_1 + double_2;
		int_4 = int_4 * int_3;
		float_1 = float_3 + float_3;
		int_7 = int_4 * int_5;
	}
	return float_4;
}
long v_main_term_popup_exists( long parameter_1)
{
	long long_1 = 1;
	return long_1;
}
double v__update_link( unsigned int parameter_1,char parameter_2,double parameter_3,float parameter_4,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	short_2 = short_1 * short_2;
	char_2 = char_1 * char_1;
	double_1 = double_1 * double_2;
	short_1 = short_3 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	if(1)
	{
		double_2 = double_1 + double_2;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		short_3 = short_2;
	}
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_4 = 1;
		long long_5 = 1;
		int_2 = int_3;
		float_2 = float_1 * float_1;
		double_1 = double_2 + double_3;
		char controller4vul_223[3];
		fgets(controller4vul_223 ,3 ,stdin);
		if( strcmp( controller4vul_223, ",m") > 0)
		{
			int_1 = int_3 + int_3;
			char controller4vul_224[3];
			fgets(controller4vul_224 ,3 ,stdin);
			if( strcmp( controller4vul_224, "l=") > 0)
			{
				float_1 = v__cb_link_down(char_3,float_2,uni_para);

				unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			}
			if(1)
			{
				int_3 = int_3 + int_2;
			}
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
			double_1 = double_2 + double_2;
		}
		if(1)
		{
			float_2 = float_3;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		}
		float_3 = float_3 * float_4;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
		long_2 = long_4 * long_1;
		float_2 = float_2 + float_1;
		long_5 = long_2 * long_4;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		if(1)
		{
			float_4 = float_2 + float_1;
		}
	}
	return double_1;
}
long v__remove_links( int parameter_1,short parameter_2,int uni_para)
{
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	long_1 = long_1 + long_1;
	char controller4vul_222[2];
	fgets(controller4vul_222 ,2 ,stdin);
	if( strcmp( controller4vul_222, "6") > 0)
	{
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		double_1 = v__update_link(unsigned_int_1,char_1,double_2,float_1,uni_para);

		double_4 = double_3 * double_3;
		int_1 = int_2;
	}
	float_2 = float_2 * float_3;
	short_1 = short_2;
	long_1 = long_2 * long_3;
	int_2 = int_3;
	short_1 = short_2 * short_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	return long_4;
}
long v__sel_set( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_1 = int_2 * int_3;
		char_2 = char_1 * char_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	return long_1;
}
int v_termio_scroll_get( unsigned int parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_1;
	long_2 = long_1 + long_1;
	return int_1;
}
void v_miniview_position_offset( short parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	int_2 = int_1 * int_2;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1 + char_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_6 = 1;
		double_1 = double_1 * double_1;
		char_1 = char_2 * char_1;
		if(1)
		{
			int int_3 = 1;
			int int_5 = 1;
			short_2 = short_1 * short_2;
			int_3 = int_4;
			int_5 = int_5 + int_6;
		}
		if(1)
		{
			double double_2 = 1;
			short short_3 = 1;
			int_6 = int_6 + int_2;
			double_2 = double_1 + double_2;
			int_4 = v_termio_scroll_get(unsigned_int_2);

			short_1 = short_3 * short_2;
		}
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double_1 = double_1 + double_1;
			float_3 = float_1 + float_2;
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long_1 = long_1 * long_2;
			}
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
			}
		}
	}
}
unsigned int v_term_miniview_get()
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	return unsigned_int_1;
}
void v_termio_scroll( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	long long_6 = 1;
	double_2 = double_1 + double_1;
	double_1 = double_2 + double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long_2 = long_1 * long_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		}
		int_1 = int_2;
	}
	short_2 = short_1 + short_1;
	char controller4vul_219[3];
	fgets(controller4vul_219 ,3 ,stdin);
	if( strcmp( controller4vul_219, "{i") > 0)
	{
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_2 = 1;
		int_1 = int_2 * int_1;
		long_5 = long_3 + long_4;
		long_3 = long_4 + long_1;
		if(1)
		{
			float_1 = float_1 * float_1;
		}
		char controller4vul_220[3];
		fgets(controller4vul_220 ,3 ,stdin);
		if( strcmp( controller4vul_220, "_R") > 0)
		{
			int int_3 = 1;
			int int_4 = 1;
			double_2 = double_4 * double_1;
			long_4 = long_2 + long_1;
			int_1 = int_3 * int_1;
			char_2 = char_1 * char_1;
			int_4 = int_3;
			char controller4vul_221[2];
			fgets(controller4vul_221 ,2 ,stdin);
			if( strcmp( controller4vul_221, ".") > 0)
			{
				short short_3 = 1;
				short short_4 = 1;
				long_6 = v__remove_links(int_2,short_1,uni_para);

				short_3 = short_3 * short_4;
			}
		}
		if(1)
		{
			float_2 = float_1 * float_1;
		}
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			float_1 = float_2 + float_2;
			char_1 = char_2 + char_1;
			char_4 = char_2 * char_3;
		}
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_4;
		}
	}
}
short v_termpty_save_new( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short_1 = short_1 + short_2;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	v_termpty_save_free(short_3);

	short_4 = short_1 * short_4;
	return short_2;
}
char v_termpty_save_expand( char parameter_1,char parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long_1 = long_1 + long_1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	float_1 = float_2;
	char_3 = char_1 * char_2;
	return char_4;
}
long v__termpty_cell_is_empty()
{
	long long_1 = 1;
	if(1)
	{
	}
	return long_1;
}
unsigned int v_termpty_line_length( int parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		long_2 = v__termpty_cell_is_empty();

		char_1 = char_1 * char_2;
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
short v_verify_beacon( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	return short_1;
}
void v_termpty_text_save_top( double parameter_1,char parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int_2 = int_1 + int_1;
	short_1 = v_termpty_save_new(char_1,int_1);

	int_1 = int_2 + int_3;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	v_termpty_backlog_unlock();

	int_1 = int_2;
	short_2 = v_verify_beacon(char_2,int_1);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	int_3 = int_4 + int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		v_termpty_backlog_lock();

		long_1 = long_1 * long_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			long long_2 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_4 = v_termpty_line_length(int_2,long_1);

			char_1 = v_termpty_save_expand(char_2,char_3,unsigned_int_4);

			long_2 = long_2 + long_1;
			unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
			unsigned_int_3 = unsigned_int_2;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
		}
	}
	double_2 = double_1 * double_1;
	unsigned_int_7 = unsigned_int_6 * unsigned_int_6;
	if(1)
	{
	}
	double_1 = double_2 * double_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_8;
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3;
	}
	char_5 = char_1 + char_4;
	float_3 = float_1 * float_2;
	int_3 = int_3 * int_6;
	if(1)
	{
		short short_3 = 1;
		int_1 = int_3 + int_4;
		short_3 = short_1 + short_2;
	}
	int_7 = int_6;
}
void v_termpty_text_scroll( long parameter_1,char parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	float_4 = float_3 * float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_217[2];
	fgets(controller4vul_217 ,2 ,stdin);
	if( strcmp( controller4vul_217, "4") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		long_2 = long_1 * long_2;
		char controller4vul_218[3];
		fgets(controller4vul_218 ,3 ,stdin);
		if( strcmp( controller4vul_218, "ZK") > 0)
		{
			v_termio_scroll(int_2,int_2,int_2,int_3,uni_para);

			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		}
		float_6 = float_5 + float_2;
		if(1)
		{
			unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
		int_2 = int_2 * int_2;
		if(1)
		{
			double double_3 = 1;
			double_3 = double_3 + double_1;
		}
		unsigned_int_3 = unsigned_int_6;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_3 = 1;
			long long_3 = 1;
			short_2 = short_3 + short_3;
			long_3 = long_3 * long_3;
			short_1 = short_3;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_5;
		}
	}
}
void v_termpty_text_scroll_test( char parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_215[3];
	fgets(controller4vul_215 ,3 ,stdin);
	if( strcmp( controller4vul_215, "]F") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
		char controller4vul_216[3];
		fgets(controller4vul_216 ,3 ,stdin);
		if( strcmp( controller4vul_216, "!.") < 0)
		{
			long long_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			v_termpty_text_scroll(long_1,char_3,uni_para);

			short_2 = short_1 + short_1;
			long_1 = long_2;
			float_1 = float_1 * float_2;
		}
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Z ") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double_1 = double_1 + double_2;
		short_2 = short_1 + short_1;
		int_1 = int_1 + int_1;
	}
}
short v__cursor_to_start_of_line( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_2;
	return short_1;
}
char v__tab_forward( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
double v__handle_cursor_control( unsigned int parameter_1,double parameter_2,int uni_para)
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	double double_4 = 1;
	char controller4vul_214[2];
	fgets(controller4vul_214 ,2 ,stdin);
	if( strcmp( controller4vul_214, "*") < 0)
	{
		v_termpty_text_scroll_test(char_1,int_1,uni_para);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	char_1 = char_1 * char_1;
	char_2 = char_3;
	int_3 = int_2 * int_1;
	float_1 = float_1 + float_2;
	int_4 = int_3 * int_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	double_2 = double_3 + double_1;
	short_2 = short_1 * short_2;
	int_5 = int_2 + int_3;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
		int_5 = int_5 + int_1;
		short_1 = short_2;
	}
	int_4 = int_3 * int_1;
	return double_4;
}
int v_termpty_handle_seq( short parameter_1,float parameter_2,int parameter_3,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float_2 = float_1 * float_2;
	char controller4vul_211[2];
	fgets(controller4vul_211 ,2 ,stdin);
	if( strcmp( controller4vul_211, "N") < 0)
	{
		int int_2 = 1;
		int int_3 = 1;
		v__handle_esc(long_1,short_1,char_1,uni_para);

		int_3 = int_1 + int_2;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	return int_1;
}
void v_termpty_handle_buf( float parameter_1,float parameter_2,int parameter_3,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	long long_4 = 1;
	short short_3 = 1;
	float_2 = float_1 * float_1;
	double_3 = double_1 + double_2;
	long_2 = long_1 * long_2;
	short_2 = short_1 * short_1;
	char controller4vul_210[3];
	fgets(controller4vul_210 ,3 ,stdin);
	if( strcmp( controller4vul_210, "}V") < 0)
	{
		long long_3 = 1;
		int_1 = v_termpty_handle_seq(short_1,float_3,int_2,uni_para);

		long_4 = long_3 * long_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		long_4 = long_2;
	}
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		float_5 = float_2 * float_4;
	}
	short_2 = short_1 * short_3;
}
void v_theme_reload()
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long_1 = long_2;
	double_1 = double_1 * double_1;
	double_3 = double_1 + double_2;
	int_1 = int_1;
	if(1)
	{
	}
}
short v_theme_reload_cb(unsigned int parameter_2,short parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	v_theme_reload();

	double_1 = double_2;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_1 + short_2;
	int_1 = int_1;
	int_2 = int_2 * int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "V{") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	return short_1;
}
void v_theme_auto_reload_enable( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	char_1 = char_1 * char_2;
	short_1 = v_theme_reload_cb(unsigned_int_1,short_2,char_2);

}
short v__cursor_shape_to_group_name( short parameter_1)
{
	short short_1 = 1;
	return short_1;
}
double v_config_theme_path_default_get( double parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double_1 = double_1 + double_1;
	short_2 = short_1 + short_1;
	long_1 = long_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "z") == 0)
	{
	}
	int_2 = int_1 + int_2;
	return double_2;
}
long v_theme_path_get()
{
	long long_1 = 1;
	return long_1;
}
unsigned int v_config_theme_path_get( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_2 = float_1 * float_1;
	long_1 = v_theme_path_get();

	double_1 = double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "`[") < 0)
	{
	}
	return unsigned_int_1;
}
unsigned int v_theme_apply( double parameter_1,unsigned int parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = char_1 + char_2;
	double_2 = double_1 + double_2;
	double_2 = double_3 * double_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "D") < 0)
	{
	}
	char_1 = char_3;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	unsigned_int_2 = v_config_theme_path_get(int_2);

	double_2 = v_config_theme_path_default_get(double_2);

	int_1 = int_1 + int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	return unsigned_int_3;
}
void v_termio_set_cursor_shape( unsigned int parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int_1 = int_1 * int_2;
	int_1 = int_1 + int_3;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	long_4 = long_2 + long_3;
	unsigned_int_2 = v_theme_apply(double_1,unsigned_int_2,double_1);

	double_4 = double_2 * double_3;
	v_theme_auto_reload_enable(unsigned_int_2);

	short_3 = short_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "7G") > 0)
	{
		double_4 = double_3;
		if(1)
		{
			double double_5 = 1;
			short_3 = v__cursor_shape_to_group_name(short_4);

			double_5 = double_3 * double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
	}
}
void v_termpty_clear_tabs_on_screen( long parameter_1)
{
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	if(1)
	{
		long long_1 = 1;
		v_termpty_save_free(short_1);

		double_1 = double_1 + double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			v_termpty_backlog_lock();

			short_2 = short_2 * short_2;
		}
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_2 + short_1;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		v_termpty_backlog_unlock();

		long_2 = long_2 + long_3;
	}
	double_1 = double_2 + double_1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_3 * int_2;
}
unsigned int v__ts_free()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_1;
	return unsigned_int_1;
}
void v_termpty_save_free( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 + int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
		long_1 = long_1 + long_1;
	}
	short_2 = short_1 * short_1;
	long_1 = long_2;
	unsigned_int_1 = v__ts_free();

	float_1 = float_2;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( unsigned int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_1;
	double_1 = double_1;
	v_termpty_backlog_unlock();

	char_1 = char_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		char char_2 = 1;
		short short_2 = 1;
		char char_4 = 1;
		char char_5 = 1;
		v_termpty_save_free(short_1);

		long_2 = long_1 + long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_3 = 1;
			v_termpty_backlog_size_set(int_1,short_1);

			char_3 = char_2 + char_2;
		}
		short_2 = short_1 * short_1;
		char_2 = char_4 * char_5;
	}
	double_1 = double_1 * double_1;
	v_termpty_backlog_lock();

	float_1 = float_2 * float_3;
	double_1 = double_2;
	double_1 = double_1 + double_3;
	int_2 = int_2 + int_2;
}
void v_termpty_reset_att( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long_1 = long_2;
	short_3 = short_1 * short_2;
	long_2 = long_3;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 * int_2;
	int_3 = int_4;
	int_4 = int_2 + int_4;
	float_1 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	float_1 = float_3 * float_1;
	short_1 = short_4;
	int_4 = int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_2;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	short_1 = short_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	float_4 = float_2;
	double_2 = double_4;
	int_4 = int_5 * int_3;
	unsigned_int_3 = unsigned_int_4;
}
unsigned int v_termio_config_get( double parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1;
	long_3 = long_1 * long_2;
	return unsigned_int_1;
}
void v_termpty_reset_state()
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_4 = 1;
	char char_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_6 = 1;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1 + long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if(remainder_check(controller_1,100,2))
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	float_2 = float_1 + float_2;
	int_1 = int_2;
	v_termpty_clear_tabs_on_screen(long_1);

	int_1 = int_3 * int_2;
	int_3 = int_2 + int_3;
	float_1 = float_2;
	int_1 = int_1 + int_3;
	double_1 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_2;
	long_1 = long_1 * long_2;
	float_2 = float_1 * float_2;
	char_2 = char_1 * char_2;
	float_2 = float_3 + float_2;
	double_1 = double_3 * double_3;
	int_1 = int_4 + int_5;
	unsigned_int_3 = v_termio_config_get(double_1);

	double_3 = double_4 + double_4;
	v_termio_set_cursor_shape(unsigned_int_4,char_2);

	double_1 = double_4;
	short_3 = short_1 + short_2;
	long_2 = long_3;
	float_4 = float_2 * float_4;
	double_6 = double_5 + double_1;
	int_5 = int_1;
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_2;
	long_3 = long_4 * long_2;
	char_1 = char_1 + char_3;
	double_3 = double_4 * double_1;
	double_4 = double_4 * double_5;
	long_4 = long_4 * long_2;
	int_4 = int_2;
	v_termpty_clear_backlog(unsigned_int_4);

	int_5 = int_2;
	double_4 = double_2 * double_1;
	long_3 = long_1;
	short_5 = short_4 * short_2;
	int_6 = int_3 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_5 = double_5 * double_4;
	}
	if(1)
	{
		double double_7 = 1;
		v_termpty_reset_att(unsigned_int_4);

		double_7 = double_3;
	}
}
void v_termpty_resize_tabs( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	float_3 = float_1 * float_2;
	char_2 = char_1 * char_2;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			short short_2 = 1;
			short_2 = short_2 + short_1;
		}
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1;
		}
		double_4 = double_3 + double_1;
	}
	char_3 = char_3 + char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_1;
	}
}
unsigned int v__termpty_init( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	char char_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	v_termpty_resize_tabs(unsigned_int_1,int_1,int_2);

	char_1 = char_2;
	char_2 = char_3 + char_4;
	short_1 = short_1;
	char_4 = char_5 * char_1;
	double_3 = double_1 * double_2;
	int_1 = int_2 * int_2;
	float_1 = float_1 * float_2;
	int_3 = int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_3 = double_2 * double_2;
	float_1 = float_2;
	v_termpty_reset_state();

	short_3 = short_2 + short_2;
	int_4 = int_1;
	short_4 = short_2 * short_1;
	return unsigned_int_3;
}
char v__add_default_keys( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_5 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	char char_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	short short_4 = 1;
	int int_8 = 1;
	int int_9 = 1;
	double double_6 = 1;
	char char_5 = 1;
	float_2 = float_1 * float_1;
	float_2 = float_3 * float_4;
	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2;
	double_1 = double_1 * double_1;
	int_2 = int_1 + int_1;
	float_3 = float_1 * float_2;
	float_5 = float_4 * float_4;
	float_2 = float_2 + float_5;
	int_2 = int_3 * int_3;
	double_2 = double_2 + double_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	double_5 = double_4 + double_4;
	char_1 = char_1 + char_2;
	char_2 = char_1;
	unsigned_int_2 = unsigned_int_1;
	double_5 = double_5 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	int_3 = int_3 * int_2;
	float_3 = float_1 + float_4;
	int_4 = int_3 * int_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	short_1 = short_1 * short_3;
	char_2 = char_1 * char_3;
	long_2 = long_2 * long_2;
	int_4 = int_5 * int_3;
	long_1 = long_1 * long_1;
	double_5 = double_3 * double_3;
	int_4 = int_5 * int_6;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
	char_3 = char_4;
	int_1 = int_2 * int_3;
	unsigned_int_6 = unsigned_int_2;
	unsigned_int_7 = unsigned_int_3 * unsigned_int_7;
	double_2 = double_5;
	int_1 = int_4;
	int_2 = int_5 * int_7;
	char_4 = char_2 + char_1;
	short_4 = short_3 * short_4;
	float_2 = float_4 * float_5;
	double_4 = double_4 * double_5;
	int_3 = int_4 * int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_6;
	int_3 = int_6 + int_8;
	int_7 = int_5 + int_9;
	unsigned_int_7 = unsigned_int_4 * unsigned_int_3;
	short_3 = short_3 + short_4;
	double_2 = double_6;
	double_2 = double_5;
	char_2 = char_5 * char_5;
	return char_5;
}
void v_colors_standard_get( int parameter_1,int parameter_2,char parameter_3,float parameter_4,unsigned int parameter_5,char parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short_1 = short_1 + short_2;
		double_1 = double_1 + double_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_1 * double_1;
		char_1 = char_1 + char_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		short_2 = short_2;
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	int_2 = int_1 * int_2;
	float_1 = float_1 + float_1;
	float_4 = float_2 + float_3;
}
void v_config_new()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_10 = 1;
	char char_7 = 1;
	int_3 = int_1 + int_2;
	float_1 = float_1 * float_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_4 = 1;
		char char_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		int int_4 = 1;
		int int_5 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_9 = 1;
		char char_6 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_11 = 1;
		double_2 = double_1 + double_2;
		int_1 = int_3 + int_2;
		char_3 = char_1 * char_2;
		double_2 = double_2 + double_3;
		long_2 = long_1 * long_1;
		char_4 = char_4 + char_5;
		short_2 = short_1 + short_1;
		short_2 = short_2 * short_2;
		char_5 = char_1;
		double_3 = double_4 + double_4;
		long_2 = long_1 + long_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		float_1 = float_3;
		long_1 = long_3 + long_2;
		long_5 = long_4 + long_5;
		double_2 = double_2 * double_1;
		int_2 = int_1 + int_4;
		int_4 = int_5 * int_3;
		float_1 = float_3 * float_4;
		long_3 = long_1 * long_4;
		unsigned_int_2 = unsigned_int_3;
		double_2 = double_4;
		short_2 = short_1;
		long_3 = long_5;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		long_1 = long_4 + long_3;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char_1 = v__add_default_keys(double_4);

		int_6 = int_3 + int_2;
		int_5 = int_4 + int_7;
		int_8 = int_3 + int_4;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
		char_2 = char_5 + char_4;
		int_9 = int_4;
		short_1 = short_2 * short_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		char_5 = char_6 * char_2;
		int_9 = int_9 + int_4;
		int_6 = int_9 * int_8;
		double_3 = double_2 + double_2;
		double_4 = double_2 + double_4;
		int_4 = int_5 + int_2;
		double_5 = double_4 * double_3;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
		unsigned_int_6 = unsigned_int_7;
		unsigned_int_6 = unsigned_int_6 + unsigned_int_3;
		v_colors_standard_get(int_10,int_3,char_3,float_2,unsigned_int_7,char_7);

		int_4 = int_11 * int_3;
		int_6 = int_9 + int_2;
		long_5 = long_1 + long_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				short short_3 = 1;
				int_6 = int_6 + int_10;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_7;
				short_2 = short_2 * short_3;
				unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
				unsigned_int_2 = unsigned_int_3 * unsigned_int_6;
			}
		}
		unsigned_int_5 = unsigned_int_3 * unsigned_int_7;
		float_2 = float_4 * float_3;
	}
}
int main()
{
	int uni_para =997;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_7 = 1;
	double double_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_5 = 1;
	double double_8 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1 + int_2;
	int_4 = int_3 * int_3;
	long_1 = long_1 + long_2;
	int_6 = int_4 + int_5;
	unsigned_int_1 = unsigned_int_2;
	long_2 = long_1 * long_3;
	short_1 = short_2;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	long_2 = long_3 * long_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		double_2 = double_2 + double_2;
	}
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	int_6 = int_5 * int_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	double_1 = double_2 * double_3;
	char controller4vul_206[3];
	fgets(controller4vul_206 ,3 ,stdin);
	if( strcmp( controller4vul_206, "vU") > 0)
	{
		short short_3 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_4 = 1;
		short short_4 = 1;
		double double_4 = 1;
		short short_5 = 1;
		short short_6 = 1;
		if(1)
		{
			short_1 = short_3 * short_3;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_5 + unsigned_int_5;
		}
		if(1)
		{
			double_2 = double_2 * double_1;
		}
		char_1 = char_1 + char_1;
		if(1)
		{
			int_7 = int_4 * int_5;
		}
		long_1 = long_3 + long_4;
		if(1)
		{
			float float_3 = 1;
			float_3 = float_3 + float_1;
		}
		unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
		if(1)
		{
			short_3 = short_1 + short_4;
		}
		double_1 = double_3 * double_2;
		if(1)
		{
			double_2 = double_3 + double_4;
		}
		if(1)
		{
			long_2 = long_4 + long_3;
		}
		short_4 = short_2 * short_1;
		if(1)
		{
			unsigned_int_6 = unsigned_int_1 + unsigned_int_4;
		}
		short_6 = short_5 + short_4;
		if(1)
		{
			int int_8 = 1;
			int_5 = int_7 + int_8;
		}
		char controller4vul_207[3];
		fgets(controller4vul_207 ,3 ,stdin);
		if( strcmp( controller4vul_207, "]c") < 0)
		{
			double_5 = double_4 * double_3;
			char controller4vul_208[2];
			fgets(controller4vul_208 ,2 ,stdin);
			if( strcmp( controller4vul_208, "4") > 0)
			{
				int int_9 = 1;
				int_9 = int_5 + int_3;
				double_2 = double_3;
				char controller4vul_209[2];
				fgets(controller4vul_209 ,2 ,stdin);
				if( strcmp( controller4vul_209, ";") > 0)
				{
					v_termpty_handle_buf(float_2,float_4,int_7,uni_para);

					char_2 = char_3 * char_1;
				}
				if(1)
				{
					unsigned_int_5 = unsigned_int_4;
				}
				if(1)
				{
					unsigned_int_6 = unsigned_int_3 + unsigned_int_7;
				}
				if(1)
				{
					int_2 = int_7 + int_3;
				}
				if(1)
				{
					unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
				}
				if(1)
				{
					double_2 = double_5 + double_5;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
				}
				if(1)
				{
					double double_6 = 1;
					double_3 = double_6 * double_4;
				}
				if(1)
				{
					int_7 = int_4;
				}
				if(1)
				{
					int_4 = int_3 + int_6;
				}
				if(1)
				{
					long_2 = long_4;
				}
				if(1)
				{
					long_5 = long_4 + long_2;
				}
			}
			if(1)
			{
				double_3 = double_5 * double_1;
			}
		}
	}
	if(1)
	{
		double double_7 = 1;
		double_5 = double_7 + double_7;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_6;
	}
	if(1)
	{
		int int_10 = 1;
		int_3 = int_10 + int_7;
	}
	if(1)
	{
		double_1 = double_8 + double_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_7;
		}
	}
	int_4 = int_1 + int_4;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_7;
	long_5 = long_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	if(1)
	{
		char_3 = char_2 + char_2;
		double_8 = double_8 + double_5;
	}
	return int_2;
}

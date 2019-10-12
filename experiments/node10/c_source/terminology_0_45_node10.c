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

void v__termpty_shutdown( long parameter_1);
void v_termpty_text_scroll_rev_test( long parameter_1,long parameter_2);
float v__handle_esc_dcs( int parameter_1,unsigned int parameter_2,long parameter_3);
short v__handle_op_a( double parameter_1,float parameter_2,unsigned int parameter_3);
void v__termpty_ext_handle( long parameter_1,double parameter_2,char parameter_3);
long v__handle_esc_terminology( float parameter_1,float parameter_2,unsigned int parameter_3);
unsigned int v__handle_xterm_777_command( short parameter_1,char parameter_2,int parameter_3);
double v__smart_calculate_226( long parameter_1);
float v__smart_size( short parameter_1,int parameter_2,int parameter_3,char parameter_4);
void v_colors_term_init( long parameter_1,char parameter_2,long parameter_3);
void v_termio_config_update( long parameter_1);
float v__font_size_set( int parameter_1,int parameter_2);
void v_termio_font_size_set( float parameter_1,int parameter_2);
long v__handle_xterm_50_command( float parameter_1,char parameter_2,int parameter_3);
float v__eina_unicode_to_hex( short parameter_1);
int v__xterm_parse_color( long parameter_1,double parameter_2,float parameter_3,char parameter_4,int parameter_5);
unsigned int v__xterm_arg_get( short parameter_1);
void v__handle_esc_xterm( short parameter_1,short parameter_2,long parameter_3);
void v_termpty_cells_set_content( short parameter_1,int parameter_2,double parameter_3,int parameter_4);
long v__handle_esc_csi_decera( float parameter_1,double parameter_2);
void v_termpty_cells_att_fill_preserve_colors( short parameter_1,long parameter_2,short parameter_3,int parameter_4);
void v__clean_up_rect_coordinates( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
short v__handle_esc_csi_decfra( short parameter_1,short parameter_2);
void v__handle_esc_csi_decslrm( int parameter_1,double parameter_2);
short v__handle_esc_csi_decstbm( double parameter_1,int parameter_2);
long v__handle_esc_csi_decscusr( short parameter_1,unsigned int parameter_2);
double v__handle_esc_csi_dsr( char parameter_1,short parameter_2);
unsigned int v__handle_esc_csi_truecolor_cmyk( unsigned int parameter_1,char parameter_2);
unsigned int v__handle_esc_csi_truecolor_cmy( int parameter_1,int parameter_2);
float v__approximate_truecolor_rgb( short parameter_1,int parameter_2,int parameter_3,int parameter_4);
long v__csi_truecolor_arg_get( double parameter_1);
float v__handle_esc_csi_truecolor_rgb( float parameter_1,unsigned int parameter_2);
double v__handle_esc_csi_color_set( float parameter_1,char parameter_2);
void v_termpty_cursor_copy( unsigned int parameter_1,float parameter_2);
char v__switch_to_alternative_screen( short parameter_1,int parameter_2);
char v__move_cursor_to_origin( unsigned int parameter_1);
short v__pty_size( long parameter_1);
float v__limit_coord();
double v__check_screen_info( unsigned int parameter_1,long parameter_2);
int v__termpty_line_rewrap( short parameter_1,unsigned int parameter_2,int parameter_3,short parameter_4,float parameter_5);
float v__backlog_remove_latest_nolock( unsigned int parameter_1);
void v_termpty_save_extract( long parameter_1);
int v__termpty_line_is_empty( int parameter_1,unsigned int parameter_2);
void v_termpty_screen_swap( char parameter_1);
void v_termpty_resize( float parameter_1,int parameter_2,int parameter_3);
double v_termio_win_get( char parameter_1);
long v__handle_esc_csi_reset_mode( unsigned int parameter_1,short parameter_2,short parameter_3);
char v__handle_esc_csi_cursor_pos_set( double parameter_1,unsigned int parameter_2,long parameter_3);
void v_termpty_text_scroll_rev( unsigned int parameter_1,short parameter_2);
void v_termpty_clear_line( int parameter_1,double parameter_2,int parameter_3);
void v_termpty_clear_screen( int parameter_1,char parameter_2);
void v_termpty_cell_codepoint_att_fill( unsigned int parameter_1,short parameter_2,short parameter_3,long parameter_4,int parameter_5);
short v__termpty_charset_trans( short parameter_1,float parameter_2);
void v_termio_content_change( short parameter_1,char parameter_2,short parameter_3,int parameter_4);
void v_termpty_text_append( double parameter_1,short parameter_2,int parameter_3,int uni_para);
float v__csi_arg_get( float parameter_1);
float v__handle_esc_csi( long parameter_1,double parameter_2,float parameter_3);
void v__safechar( float parameter_1);
float v__handle_esc( short parameter_1,long parameter_2,char parameter_3);
void v_termpty_cell_fill( float parameter_1,float parameter_2,short parameter_3,int parameter_4);
void v_termpty_cells_fill( long parameter_1,float parameter_2,int parameter_3,int parameter_4);
void v_termpty_cells_clear( int parameter_1,long parameter_2,int parameter_3);
float v__tooltip_del(short parameter_2);
short v__tooltip_content(int parameter_2,int parameter_3);
void v_MD5Final( int parameter_1,double parameter_2);
void v_MD5Transform( double parameter_1,char parameter_2);
void v_byteReverse( long parameter_1,unsigned int parameter_2);
void v_MD5Update( double parameter_1,unsigned int parameter_2,char parameter_3);
void v_MD5Init( int parameter_1);
void v_gravatar_tooltip( unsigned int parameter_1,long parameter_2,char parameter_3);
unsigned int v__cb_link_drag_done(double parameter_2);
unsigned int v__cb_link_drag_accept(int parameter_2,short parameter_3);
float v__cb_link_drag_move(double parameter_2,int parameter_3,double parameter_4,float parameter_5);
float v__cb_link_icon_new(float parameter_2,long parameter_3,int parameter_4);
int v__cb_link_move(float parameter_2,int parameter_3);
long v__cb_link_up_delay();
float v__cb_link_up(unsigned int parameter_2,char parameter_3);
void v_term_focus( char parameter_1);
unsigned int v__term_is_focused( long parameter_1);
void v_term_unfocus( double parameter_1);
short v__cb_ctxp_del(char parameter_2,long parameter_3);
long v__cb_ctxp_dismissed(int parameter_2);
long v__cb_ctxp_link_copy(unsigned int parameter_2);
unsigned int v__screen_visual_bounds( float parameter_1);
void v__draw_cell( short parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4);
short v__draw_line( unsigned int parameter_1,char parameter_2,char parameter_3,int parameter_4,short parameter_5);
double v_termpty_backlog_length( long parameter_1);
void v_termio_pty_get();
double v_termio_textgrid_get( char parameter_1);
int v_miniview_colors_get( char parameter_1,float parameter_2);
double v__deferred_renderer();
int v__queue_render( int parameter_1);
void v_miniview_redraw( double parameter_1);
long v__block_obj_del( long parameter_1);
long v__termpty_is_dblwidth_slow_get( long parameter_1,int parameter_2);
unsigned int v__termpty_is_dblwidth_get( float parameter_1,int parameter_2);
void v_term_preedit_str_get( double parameter_1);
int v_media_get( double parameter_1);
long v__smart_media_clicked(long parameter_2);
double v_media_control_get();
short v__smart_media_stop(double parameter_2);
unsigned int v__smart_media_pause(char parameter_2);
char v__smart_media_play(char parameter_2);
char v__smart_media_del(long parameter_2,unsigned int parameter_3);
void v_media_visualize_set( float parameter_1,float parameter_2);
void v_media_mute_set( double parameter_1,char parameter_2);
void v_media_volume_set( int parameter_1,double parameter_2);
double v__cb_media_vol(int parameter_2,double parameter_3,float parameter_4);
char v__cb_media_pos(short parameter_2,short parameter_3,char parameter_4);
double v__cb_media_pos_drag_stop(double parameter_2,long parameter_3,char parameter_4);
short v__cb_media_pos_drag_start(short parameter_2,unsigned int parameter_3,int parameter_4);
void v_media_stop( double parameter_1);
long v__cb_media_stop(double parameter_2,short parameter_3,char parameter_4);
double v__cb_media_pause(unsigned int parameter_2,int parameter_3,char parameter_4);
void v_media_play_set( float parameter_1,char parameter_2);
unsigned int v__cb_media_play(double parameter_2,long parameter_3,long parameter_4);
void v_media_position_set( unsigned int parameter_1,double parameter_2);
char v__cb_mov_ref(int parameter_2);
float v__cb_mov_progress(int parameter_2);
float v__cb_mov_restart();
short v__cb_mov_decode_stop(int parameter_2);
void v__cb_mov_len_change(long parameter_2);
int v__cb_mov_frame_resize(short parameter_2);
long v__cb_mov_frame_decode(int parameter_2);
double v__type_mov_init( double parameter_1);
void v__cb_edje_preloaded(char parameter_2,double parameter_3,int parameter_4);
int v__type_edje_init( float parameter_1);
long v__type_scale_init();
unsigned int v__cb_img_frame();
float v__type_img_anim_handle( long parameter_1);
unsigned int v__cb_img_preloaded(double parameter_2,double parameter_3);
double v__type_img_init( short parameter_1);
void v__url_compl_cb(int parameter_2,int uni_para);
short v__url_prog_cb(int parameter_2);
unsigned int v__type_thumb_calc( float parameter_1,double parameter_2,double parameter_3,unsigned int parameter_4,long parameter_5);
void v__type_mov_calc( short parameter_1,int parameter_2,short parameter_3,char parameter_4,short parameter_5);
void v__type_edje_calc( unsigned int parameter_1,long parameter_2,char parameter_3,long parameter_4,int parameter_5);
char v__type_img_calc( int parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4,float parameter_5);
float v__cb_scale_preloaded(long parameter_2,short parameter_3,int uni_para);
void v__type_scale_calc( double parameter_1,char parameter_2,short parameter_3,char parameter_4,char parameter_5,int uni_para);
short v__unsmooth_timeout();
void v__smooth_handler( double parameter_1);
double v__smart_calculate( unsigned int parameter_1,int uni_para);
long v__smart_move( int parameter_1,long parameter_2,unsigned int parameter_3);
long v__smart_resize( long parameter_1,char parameter_2,short parameter_3);
char v__smart_del();
float v__smart_add( unsigned int parameter_1);
void v__smart_init();
short v_media_add( int parameter_1,float parameter_2,int parameter_3,int parameter_4,int parameter_5,int uni_para);
unsigned int v__block_media_activate( long parameter_1,int parameter_2,int uni_para);
int v__block_edje_message_cb(int parameter_2,float parameter_3,int parameter_4);
void v_termpty_write( double parameter_1,long parameter_2,int parameter_3);
short v__block_edje_signal_cb(long parameter_2,long parameter_3,char parameter_4);
void v_termpty_block_chid_update( char parameter_1,float parameter_2);
unsigned int v__block_edje_cmds( double parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4);
int v_homedir_get( char parameter_1,int parameter_2);
float v__block_edje_activate( char parameter_1,long parameter_2);
char v__block_activate( char parameter_1,long parameter_2,int uni_para);
void v_termpty_block_get( short parameter_1,int parameter_2);
int v_termpty_block_id_get( unsigned int parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( short parameter_1,int parameter_2);
short v__smart_apply( double parameter_1,int uni_para);
int v__smart_cb_change(int uni_para);
int v__smart_update_queue( double parameter_1,char parameter_2,int uni_para);
long v__lost_selection_reset_job();
char v__lost_selection(short parameter_2,int uni_para);
double v__take_selection_text( short parameter_1,double parameter_2,int parameter_3,int uni_para);
char v__cb_ctxp_link_content_copy(short parameter_2,int uni_para);
void v_ty_sb_free( float parameter_1);
short v_ty_sb_steal_buf( int parameter_1);
int v_codepoint_to_utf8( double parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( unsigned int parameter_1);
int v_ty_sb_add( float parameter_1,float parameter_2,double parameter_3);
long v__termpty_cellrow_from_beacon_get( int parameter_1,int parameter_2,short parameter_3);
void v_termpty_cellrow_get( int parameter_1,int parameter_2,double parameter_3);
int v_termio_selection_get( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,double parameter_6,long parameter_7);
double v__cb_ctxp_link_open(char parameter_2);
float v__should_inline( unsigned int parameter_1);
short v_link_is_email( int parameter_1);
float v_link_is_protocol( int parameter_1);
void v_link_is_url( int parameter_1);
short v__activate_link( short parameter_1,float parameter_2);
int v__cb_ctxp_link_preview(long parameter_2);
void v__is_fmt( int parameter_1,double parameter_2);
double v_media_src_type_get( float parameter_1);
int v__mouse_in_selection( double parameter_1,int parameter_2,int parameter_3);
float v__smart_xy_to_cursor( int parameter_1,float parameter_2,char parameter_3,int parameter_4,int parameter_5);
double v__cb_link_down(long parameter_2,char parameter_3,int uni_para);
short v_main_term_popup_exists( char parameter_1);
float v__update_link( long parameter_1,float parameter_2,long parameter_3,char parameter_4,int uni_para);
short v__remove_links( int parameter_1,double parameter_2,int uni_para);
short v__sel_set( long parameter_1,char parameter_2);
int v_termio_scroll_get( short parameter_1);
void v_miniview_position_offset( unsigned int parameter_1,int parameter_2,unsigned int parameter_3);
char v_term_miniview_get( unsigned int parameter_1);
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
int v_termpty_save_new( float parameter_1,int parameter_2);
int v_termpty_save_expand( float parameter_1,int parameter_2,int parameter_3);
double v__termpty_cell_is_empty();
double v_termpty_line_length( short parameter_1,unsigned int parameter_2);
long v_verify_beacon( int parameter_1,int parameter_2);
void v_termpty_text_save_top( float parameter_1,unsigned int parameter_2,short parameter_3);
void v_termpty_text_scroll( int parameter_1,int parameter_2,int uni_para);
void v_termpty_text_scroll_test( long parameter_1,long parameter_2,int uni_para);
float v__cursor_to_start_of_line( long parameter_1);
void v__tab_forward( char parameter_1,int parameter_2);
char v__handle_cursor_control( double parameter_1,float parameter_2);
int v_termpty_handle_seq( int parameter_1,int parameter_2,short parameter_3,int uni_para);
void v_termpty_handle_buf( int parameter_1,short parameter_2,int parameter_3,int uni_para);
void v_theme_reload( float parameter_1);
double v_theme_reload_cb(float parameter_2,double parameter_3,double parameter_4);
void v_theme_auto_reload_enable( short parameter_1);
void v__cursor_shape_to_group_name( unsigned int parameter_1);
double v_config_theme_path_default_get( int parameter_1);
long v_theme_path_get();
int v_config_theme_path_get();
double v_theme_apply( float parameter_1,unsigned int parameter_2,float parameter_3);
void v_termio_set_cursor_shape( unsigned int parameter_1,char parameter_2);
void v_termpty_clear_tabs_on_screen( double parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( int parameter_1,unsigned int parameter_2);
unsigned int v__ts_free();
void v_termpty_save_free( long parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( unsigned int parameter_1);
void v_termpty_reset_att();
float v_termio_config_get();
void v_termpty_reset_state( short parameter_1);
void v_termpty_resize_tabs( float parameter_1,int parameter_2,int parameter_3);
double v__termpty_init( short parameter_1);
char v__add_default_keys( long parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,long parameter_3,char parameter_4,char parameter_5,double parameter_6);
double v_config_new();
void v__termpty_shutdown( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_2;
}
void v_termpty_text_scroll_rev_test( long parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	v_termpty_text_scroll_rev(unsigned_int_1,short_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_1;
		char_2 = char_1 + char_1;
		unsigned_int_2 = unsigned_int_1;
	}
}
float v__handle_esc_dcs( int parameter_1,unsigned int parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					char char_1 = 1;
					char_1 = char_1 + char_1;
				}
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
				}
			}
		}
		if(1)
		{
			float float_2 = 1;
			v_termpty_write(double_1,long_1,int_2);

			float_2 = float_1 * float_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
		}
		if(1)
		{
		}
		if(1)
		{
			int_1 = int_1 + int_3;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			v__safechar(float_1);

			short_3 = short_1 + short_2;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			int_3 = int_4 + int_5;
		}
	}
	return float_1;
}
short v__handle_op_a( double parameter_1,float parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
void v__termpty_ext_handle( long parameter_1,double parameter_2,char parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = v__handle_op_a(double_1,float_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
}
long v__handle_esc_terminology( float parameter_1,float parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	float_1 = v_termio_config_get();

	v__termpty_ext_handle(long_1,double_1,char_1);

	double_2 = double_1 * double_2;
	return long_1;
}
unsigned int v__handle_xterm_777_command( short parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_2 + double_3;
	}
	short_2 = short_1;
	if(1)
	{
	}
	double_4 = double_1 + double_4;
	int_1 = int_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	int_1 = int_1 + int_2;
	double_2 = double_4 + double_1;
	int_2 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_3 = short_1 + short_2;
	return unsigned_int_1;
}
double v__smart_calculate_226( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_2 = double_1 + double_2;
	long_2 = long_1 * long_1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	short_2 = short_1 * short_1;
	double_3 = double_1 * double_2;
	double_2 = double_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	return double_1;
}
float v__smart_size( short parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	int int_5 = 1;
	char_1 = char_1 * char_1;
	double_3 = double_1 + double_2;
	if(1)
	{
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char_2 = char_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	long_1 = long_1 + long_1;
	double_1 = double_4 * double_5;
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	short_3 = v__sel_set(long_1,char_1);

	short_2 = short_1 * short_2;
	double_5 = v__smart_calculate_226(long_2);

	int_2 = int_1 * int_1;
	if(1)
	{
		float_1 = float_2;
	}
	double_4 = double_6 * double_4;
	v_termpty_resize(float_2,int_3,int_4);

	float_3 = float_1 + float_1;
	short_2 = short_2 * short_3;
	short_1 = v__smart_apply(double_6,-1 );

	int_3 = int_5 * int_5;
	double_5 = double_4 + double_3;
	int_2 = int_1 + int_2;
	return float_2;
}
void v_colors_term_init( long parameter_1,char parameter_2,long parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	int_1 = int_1 * int_1;
	long_1 = long_2;
	int_1 = int_1 * int_2;
	char_2 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		char char_4 = 1;
		long long_3 = 1;
		char char_6 = 1;
		int_3 = int_3;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			char_1 = char_2 * char_3;
			int_1 = int_1 + int_4;
			int_1 = int_3 + int_3;
			short_3 = short_1 + short_2;
		}
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 * double_2;
			if(1)
			{
				double double_5 = 1;
				char char_5 = 1;
				double_3 = double_2 * double_2;
				double_4 = double_4 * double_5;
				char_3 = char_4 + char_5;
				int_3 = int_3;
				int_5 = int_2 + int_2;
			}
		}
		long_2 = long_3;
		char_6 = char_6 * char_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			double_3 = double_6 * double_2;
			if(1)
			{
				int_3 = int_1;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int int_6 = 1;
		double_3 = double_3 * double_3;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			long long_4 = 1;
			long_1 = long_2;
			float_2 = float_1 + float_2;
			int_1 = int_5 + int_4;
			double_4 = double_4 + double_6;
			long_2 = long_4 + long_2;
		}
		int_6 = int_1;
	}
}
void v_termio_config_update( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	char char_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	float float_5 = 1;
	float float_6 = 1;
	long long_4 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_3 = 1;
	char_3 = char_1 + char_2;
	v_colors_term_init(long_1,char_4,long_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	int_1 = int_1 * int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	}
	v_termpty_backlog_size_set(int_2,unsigned_int_3);

	int_2 = int_2 + int_2;
	if(1)
	{
		float float_2 = 1;
		long_2 = long_3 * long_2;
		float_1 = v__smart_size(short_1,int_1,int_1,char_3);

		float_1 = float_1 * float_2;
	}
	if(1)
	{
		long_2 = long_3 + long_2;
	}
	float_4 = float_3 * float_3;
	double_1 = double_1 + double_1;
	float_6 = float_4 + float_5;
	long_3 = long_2 * long_4;
	v_termio_set_cursor_shape(unsigned_int_3,char_1);

	unsigned_int_2 = unsigned_int_1;
	double_2 = double_2;
	double_1 = double_1;
	short_2 = short_2 * short_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		float_4 = float_5 + float_4;
	}
	if(1)
	{
		long_1 = long_3 * long_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_1 = double_3;
	int_2 = int_3 + int_3;
	double_2 = double_3;
	float_5 = float_5;
}
float v__font_size_set( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	v_termio_config_update(long_1);

	float_1 = float_2;
	double_1 = double_1 * double_2;
	double_3 = double_2 + double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		int int_1 = 1;
		double double_4 = 1;
		long long_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int_1 = int_1;
		double_4 = double_4 + double_3;
		long_1 = long_1 + long_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		int_3 = int_2 + int_2;
		char_3 = char_1 + char_2;
	}
	return float_1;
}
void v_termio_font_size_set( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_2 = long_1 * long_2;
	float_1 = v__font_size_set(int_1,int_2);

}
long v__handle_xterm_50_command( float parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	return long_1;
	v_termio_font_size_set(float_1,int_1);

}
float v__eina_unicode_to_hex( short parameter_1)
{
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
}
int v__xterm_parse_color( long parameter_1,double parameter_2,float parameter_3,char parameter_4,int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	char char_4 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char char_5 = 1;
	float float_6 = 1;
	short short_1 = 1;
	int int_9 = 1;
	char_2 = char_1 + char_2;
	int_1 = int_1 + int_2;
	if(1)
	{
		int_2 = int_3 + int_2;
	}
	int_2 = int_4 + int_3;
	double_1 = double_2;
	if(1)
	{
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_3 = 1;
		long long_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		int_4 = int_3 + int_2;
		if(1)
		{
			int_6 = int_5 * int_5;
		}
		double_1 = double_1 * double_3;
		float_2 = float_1 + float_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		int_5 = int_5 + int_4;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		}
		float_3 = float_2 + float_1;
		char_3 = char_4;
		if(1)
		{
			int_4 = int_7 * int_8;
		}
		double_1 = double_2;
		long_1 = long_1 * long_1;
		if(1)
		{
			float float_4 = 1;
			float float_5 = 1;
			float_3 = float_4 + float_5;
		}
		double_5 = double_4 * double_4;
		char_1 = char_5;
		if(1)
		{
			long long_3 = 1;
			long_3 = long_2 * long_1;
		}
		long_2 = long_2 + long_2;
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int_5 = int_2;
		if(1)
		{
			double_3 = double_2;
		}
		int_2 = int_8 + int_7;
		char_5 = char_5 * char_4;
		if(1)
		{
			float float_7 = 1;
			float_6 = v__eina_unicode_to_hex(short_1);

			float_3 = float_7 * float_1;
		}
		long_5 = long_4 * long_4;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_5;
		}
		int_8 = int_3 * int_6;
	}
	if(1)
	{
		float float_8 = 1;
		float_8 = float_1 * float_6;
	}
	int_9 = int_9 * int_1;
	return int_6;
}
unsigned int v__xterm_arg_get( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_5 = 1;
	double double_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	short_3 = short_1 + short_2;
	char_2 = char_1 * char_2;
	float_3 = float_1 * float_2;
	int_2 = int_1 + int_1;
	int_2 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	long_1 = long_1 * long_2;
	int_2 = int_1 + int_4;
	int_5 = int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	short_2 = short_2 + short_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	long_3 = long_3;
	float_2 = float_3 * float_4;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	char_4 = char_3 + char_2;
	double_2 = double_1 * double_2;
	char_5 = char_3 * char_2;
	double_2 = double_3 * double_2;
	long_6 = long_4 * long_5;
	return unsigned_int_2;
}
void v__handle_esc_xterm( short parameter_1,short parameter_2,long parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	float float_6 = 1;
	double double_7 = 1;
	char_1 = char_1;
	v_termpty_write(double_1,long_1,int_1);

	int_3 = int_2 + int_3;
	double_1 = double_2;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	if(1)
	{
		float_2 = float_1 + float_2;
	}
	int_1 = int_3 + int_2;
	float_2 = float_2 + float_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		short_3 = short_2 * short_2;
	}
	int_1 = int_3 * int_4;
	if(1)
	{
		double_3 = v_termio_textgrid_get(char_2);

		unsigned_int_3 = v__handle_xterm_777_command(short_2,char_1,int_3);

		float_1 = float_3 + float_4;
	}
	double_4 = double_2 * double_1;
	unsigned_int_4 = unsigned_int_2;
	unsigned_int_4 = v__xterm_arg_get(short_3);

	char_1 = char_1 + char_3;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
		char_1 = char_3 * char_2;
	}
	if(1)
	{
		float_4 = float_2 + float_5;
		double_2 = double_5 + double_2;
		unsigned_int_7 = unsigned_int_6;
	}
	char controller_6[2];
	fgets(controller_6 ,2 ,stdin);
	if( strcmp( controller_6, "L") > 0)
	{
		int_2 = int_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	int_5 = int_1 * int_1;
	int_5 = int_3;
	if(1)
	{
		double_3 = double_4 * double_4;
	}
	if(1)
	{
		float_5 = v_termio_config_get();

		unsigned_int_4 = unsigned_int_7 * unsigned_int_2;
	}
	if(1)
	{
		int_4 = int_4 + int_1;
		int_5 = v__xterm_parse_color(long_1,double_4,float_3,char_1,int_2);

		long_1 = v__handle_xterm_50_command(float_3,char_1,int_5);

		float_5 = float_6 + float_4;
	}
	if(1)
	{
		double double_6 = 1;
		double_5 = double_6;
	}
	if(1)
	{
		int_5 = int_2 * int_1;
	}
	double_7 = double_4 * double_4;
	float_6 = float_3 * float_1;
}
void v_termpty_cells_set_content( short parameter_1,int parameter_2,double parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_2 = int_1 + int_1;
		double_2 = double_1 + double_2;
	}
}
long v__handle_esc_csi_decera( float parameter_1,double parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	float_1 = v__csi_arg_get(float_1);

	double_2 = double_1 * double_1;
	double_3 = double_3 + double_1;
	v_termpty_cells_set_content(short_1,int_1,double_4,int_1);

	float_1 = float_1;
	double_2 = double_1 + double_5;
	int_2 = int_2 + int_2;
	long_3 = long_1 + long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "g6") > 0)
	{
	}
	double_4 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		double double_6 = 1;
		float_1 = float_1 + float_2;
		double_6 = double_6 * double_1;
	}
	return long_4;
	v__clean_up_rect_coordinates(long_1,int_1,int_3,int_2,int_1);

}
void v_termpty_cells_att_fill_preserve_colors( short parameter_1,long parameter_2,short parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 + int_2;
	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		double_1 = double_2;
		short_2 = short_3 + short_1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_4 = 1;
			long_2 = long_1 * long_1;
			double_4 = double_3 * double_3;
			double_4 = double_1;
			float_1 = float_1 * float_1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
			short_2 = short_3 * short_2;
		}
	}
}
void v__clean_up_rect_coordinates( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	long_1 = long_1 + long_1;
	int_1 = int_1 * int_1;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	int_2 = int_3;
	long_5 = long_3 + long_4;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		double_2 = double_2;
		if(1)
		{
			int_2 = int_1;
		}
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
	}
	if(1)
	{
		int_1 = int_2 * int_1;
		if(1)
		{
			int int_4 = 1;
			int_4 = int_2;
		}
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
		int int_5 = 1;
		int_1 = int_1 * int_5;
	}
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	char_2 = char_1 * char_2;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_3;
	float_4 = float_1 * float_3;
}
short v__handle_esc_csi_decfra( short parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_1;
	float_2 = float_1 + float_1;
	float_2 = v__csi_arg_get(float_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_termpty_cells_att_fill_preserve_colors(short_1,long_1,short_2,int_3);

	short_3 = short_2 + short_1;
	int_4 = int_4 + int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_4;
	}
	return short_4;
	v__clean_up_rect_coordinates(long_1,int_2,int_2,int_3,int_5);

}
void v__handle_esc_csi_decslrm( int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	float_1 = v__csi_arg_get(float_1);

	char_1 = v__move_cursor_to_origin(unsigned_int_3);

	float_1 = float_2 * float_3;
	long_1 = long_1 + long_2;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	if(1)
	{
		int_2 = int_2 + int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	if(1)
	{
		float float_4 = 1;
		float_2 = float_4 + float_2;
	}
	unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
	float_1 = float_1 * float_3;
	short_2 = short_1 * short_1;
	int_4 = int_3 * int_4;
	char_1 = char_1;
}
short v__handle_esc_csi_decstbm( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_5 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_1;
	int_1 = int_1 + int_1;
	long_2 = long_1 * long_2;
	long_1 = long_3 + long_4;
	char_1 = v__move_cursor_to_origin(unsigned_int_1);

	float_1 = float_1;
	if(1)
	{
		long_3 = long_2 * long_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	long_3 = long_1 * long_4;
	double_1 = double_1;
	long_5 = long_3 * long_2;
	double_2 = double_1 + double_1;
	float_2 = v__csi_arg_get(float_3);

	char_1 = char_1 + char_2;
	return short_1;
}
long v__handle_esc_csi_decscusr( short parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_2 = 1;
	int int_7 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_2;
	float_1 = float_1 + float_1;
	int_2 = int_4 + int_3;
	int_6 = int_3 * int_5;
	float_1 = float_1 * float_2;
	float_2 = v__csi_arg_get(float_1);

	int_4 = int_2 + int_7;
	v_termio_set_cursor_shape(unsigned_int_2,char_1);

	char_1 = char_1 + char_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	float_1 = float_2 + float_2;
	long_1 = long_1;
	long_3 = long_2 * long_2;
	double_3 = double_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	return long_1;
}
double v__handle_esc_csi_dsr( char parameter_1,short parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long_1 = long_1 * long_1;
	double_1 = double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "Q") < 0)
	{
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char_1 = char_2;
		int_2 = int_1 * int_1;
		unsigned_int_1 = unsigned_int_1;
		int_3 = int_3 * int_1;
		float_1 = v__csi_arg_get(float_1);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		double_3 = double_1 * double_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	}
	if(1)
	{
		short short_1 = 1;
		double double_4 = 1;
		double_3 = double_3 * double_1;
		long_1 = long_2 * long_1;
		int_1 = int_3 * int_1;
		short_1 = short_1 + short_1;
		v_termpty_write(double_3,long_2,int_3);

		double_4 = double_4;
		int_2 = int_1 * int_3;
	}
	return double_2;
}
unsigned int v__handle_esc_csi_truecolor_cmyk( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	double_2 = double_1 + double_1;
	double_2 = double_1 * double_3;
	int_2 = int_2;
	if(1)
	{
	}
	float_1 = v__approximate_truecolor_rgb(short_1,int_1,int_2,int_2);

	char_1 = char_1 * char_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	long_2 = long_1 * long_1;
	short_2 = short_1 * short_2;
	int_3 = int_2 + int_1;
	long_2 = v__csi_truecolor_arg_get(double_1);

	float_2 = float_2 * float_3;
	return unsigned_int_3;
}
unsigned int v__handle_esc_csi_truecolor_cmy( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = v__approximate_truecolor_rgb(short_1,int_1,int_1,int_2);

	short_2 = short_1 * short_1;
	short_2 = short_2 + short_2;
	long_1 = v__csi_truecolor_arg_get(double_1);

	double_3 = double_2 + double_1;
	int_3 = int_2 * int_1;
	if(1)
	{
	}
	int_2 = int_1 + int_3;
	double_1 = double_1 + double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_2;
}
float v__approximate_truecolor_rgb( short parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float_1 = float_1 * float_1;
	double_1 = v_termio_textgrid_get(char_1);

	int_3 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_2 = 1;
			char_1 = char_2 + char_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				float_2 = float_2;
			}
		}
	}
	return float_2;
}
long v__csi_truecolor_arg_get( double parameter_1)
{
	long long_1 = 1;
	return long_1;
}
float v__handle_esc_csi_truecolor_rgb( float parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float_2 = float_1 + float_2;
	double_1 = double_1 * double_2;
	float_3 = v__approximate_truecolor_rgb(short_1,int_1,int_2,int_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_4 = double_3 + double_2;
	long_1 = v__csi_truecolor_arg_get(double_3);

	float_3 = float_4 + float_4;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "CQ") > 0)
	{
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2;
		int_5 = int_4 + int_4;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
	}
	return float_5;
}
double v__handle_esc_csi_color_set( float parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	v_termpty_reset_att();

	unsigned_int_1 = v__handle_esc_csi_truecolor_cmy(int_1,int_2);

	int_4 = int_3 * int_2;
	float_1 = v__handle_esc_csi_truecolor_rgb(float_1,unsigned_int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return double_1;
	float_1 = v__csi_arg_get(float_1);

	unsigned_int_1 = v__handle_esc_csi_truecolor_cmyk(unsigned_int_2,char_1);

}
void v_termpty_cursor_copy( unsigned int parameter_1,float parameter_2)
{
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_3 = int_1 * int_2;
		double_2 = double_1 * double_1;
		char_2 = char_1 * char_1;
		int_3 = int_3 * int_3;
	}
}
char v__switch_to_alternative_screen( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	return char_1;
	v_termpty_screen_swap(char_1);

}
char v__move_cursor_to_origin( unsigned int parameter_1)
{
	short short_1 = 1;
	char char_3 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long_2 = long_1 * long_1;
		float_1 = float_1;
		char_1 = char_1 * char_2;
		short_1 = short_1;
	}
	if(1)
	{
		int int_1 = 1;
		short short_2 = 1;
		int_1 = int_1 * int_1;
		short_1 = short_2;
	}
	return char_3;
}
short v__pty_size( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short_1 = short_1;
	}
	return short_1;
}
float v__limit_coord()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 + int_2;
	char_1 = char_1 * char_1;
	long_2 = long_1 + long_1;
	char_4 = char_2 * char_3;
	float_2 = float_1 + float_1;
	char_6 = char_5 * char_4;
	int_2 = int_3 * int_4;
	return float_2;
}
double v__check_screen_info( unsigned int parameter_1,long parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_3 = double_1 * double_2;
		int_3 = int_1 * int_2;
		short_1 = short_1 + short_2;
		char_2 = char_1 * char_1;
		int_1 = int_2 + int_4;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			v_termpty_cells_clear(int_1,long_1,int_4);

			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		v_termpty_text_save_top(float_1,unsigned_int_2,short_1);

		int_1 = int_1 * int_1;
	}
	return double_1;
}
int v__termpty_line_rewrap( short parameter_1,unsigned int parameter_2,int parameter_3,short parameter_4,float parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = v__check_screen_info(unsigned_int_1,long_1);

	int_1 = int_1 + int_1;
	double_1 = double_1 * double_1;
	float_2 = float_1 * float_1;
	return int_1;
}
float v__backlog_remove_latest_nolock( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	float_2 = float_1 * float_1;
	double_1 = double_1 + double_3;
	v_termpty_save_free(long_1);

	char_2 = char_1 * char_2;
	float_1 = float_1;
	return float_2;
	long_2 = v_verify_beacon(int_1,int_2);

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
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			long long_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_5 = 1;
			long long_6 = 1;
			unsigned int unsigned_int_3 = 1;
			char_3 = char_1 + char_2;
			unsigned_int_1 = unsigned_int_1;
			long_1 = long_1 * long_2;
			long_4 = long_2 * long_3;
			float_3 = float_1 * float_2;
			if(1)
			{
			}
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			long_5 = long_6;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			if(1)
			{
				float float_4 = 1;
				float float_5 = 1;
				float_4 = float_5;
			}
		}
	}
}
int v__termpty_line_is_empty( int parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_1 = v__termpty_cell_is_empty();

		double_4 = double_2 * double_3;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "J]") < 0)
		{
		}
	}
	return int_1;
}
void v_termpty_screen_swap( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_2;
	double_3 = double_2 + double_1;
	int_3 = int_1 + int_2;
	long_1 = long_1 + long_1;
	double_3 = double_2 * double_3;
	short_1 = short_1 * short_1;
	int_2 = int_1 * int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 * float_1;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2 * float_2;
	}
}
void v_termpty_resize( float parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	short short_2 = 1;
	double double_7 = 1;
	short short_3 = 1;
	int int_6 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_4 = 1;
	float float_5 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_9 = 1;
	short short_5 = 1;
	double double_8 = 1;
	long_1 = v_verify_beacon(int_1,int_1);

	short_1 = short_1;
	short_1 = short_1;
	int_1 = int_1 + int_2;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	long_2 = long_2 + long_3;
	if(1)
	{
		int_1 = v__termpty_line_is_empty(int_3,unsigned_int_1);

		float_1 = float_2;
		short_1 = short_1 + short_1;
	}
	double_4 = double_1;
	if(1)
	{
		float_1 = v__backlog_remove_latest_nolock(unsigned_int_1);

		char_1 = char_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	v_termpty_backlog_lock();

	double_5 = double_3;
	if(1)
	{
		double_2 = double_4;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_2 + long_1;
	long_5 = long_3 + long_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_4 = int_2 + int_3;
		if(1)
		{
			double_1 = double_2 + double_5;
			int_2 = int_5 * int_2;
		}
	}
	double_1 = double_3 + double_6;
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	double_7 = double_2 * double_5;
	if(1)
	{
		short_2 = short_1 + short_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		int_4 = int_1 + int_3;
		if(1)
		{
			char char_2 = 1;
			int int_7 = 1;
			short_3 = short_1 + short_1;
			double_4 = double_3 + double_5;
			int_6 = int_6 + int_4;
			long_5 = long_2 * long_3;
			if(1)
			{
				double_5 = double_6 + double_4;
			}
			char_2 = char_1 * char_2;
			double_7 = double_1 * double_6;
			int_7 = int_2 * int_1;
			v_termpty_screen_swap(char_3);

			double_2 = double_1 * double_3;
			double_4 = double_1 * double_4;
			float_4 = float_3 + float_3;
			float_2 = float_2 * float_2;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float_2 = float_2 + float_4;
		double_6 = v_termpty_line_length(short_3,unsigned_int_3);

		short_2 = short_4 * short_3;
		double_4 = double_3 * double_3;
		short_4 = v__pty_size(long_5);

		float_5 = float_1 * float_2;
	}
	int_2 = int_8 * int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	int_4 = int_4 + int_8;
	float_1 = float_6 * float_6;
	int_1 = v__termpty_line_rewrap(short_4,unsigned_int_2,int_4,short_3,float_3);

	unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
	float_6 = v__limit_coord();

	int_5 = int_2 + int_9;
	unsigned_int_2 = unsigned_int_5;
	v_termpty_resize_tabs(float_5,int_1,int_6);

	short_1 = short_2 * short_1;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	}
	short_2 = short_3;
	v_termpty_save_extract(long_3);

	short_4 = short_3 + short_5;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	v_termpty_backlog_unlock();

	int_8 = int_5;
	double_3 = double_5 + double_6;
	double_6 = double_5;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
	double_6 = double_2 + double_8;
}
double v_termio_win_get( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_2 = double_1 * double_2;
	short_1 = short_2;
	return double_2;
}
long v__handle_esc_csi_reset_mode( unsigned int parameter_1,short parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1;
	char_2 = v__switch_to_alternative_screen(short_1,int_1);

	char_1 = char_3 + char_2;
	float_1 = v__csi_arg_get(float_1);

	v_termpty_clear_screen(int_2,char_2);

	v_termpty_cursor_copy(unsigned_int_1,float_1);

	int_4 = int_1 * int_3;
	return long_1;
	double_1 = v_termio_win_get(char_4);

	v_termpty_resize(float_1,int_4,int_4);

	v_termpty_reset_state(short_1);

	char_4 = v__move_cursor_to_origin(unsigned_int_2);

}
char v__handle_esc_csi_cursor_pos_set( double parameter_1,unsigned int parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	char char_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_2 = double_1 * double_1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_1;
	float_1 = v__csi_arg_get(float_1);

	unsigned_int_1 = unsigned_int_2;
	int_2 = int_3 * int_2;
	if(1)
	{
		int int_5 = 1;
		int_5 = int_4 + int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 + short_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "&u") > 0)
	{
		char_1 = char_2;
	}
	int_7 = int_6 * int_6;
	float_1 = float_1 * float_1;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_3 + short_2;
	}
	if(1)
	{
		int_4 = int_1;
		if(1)
		{
			int_6 = int_3;
		}
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	double_5 = double_3 + double_4;
	return char_2;
}
void v_termpty_text_scroll_rev( unsigned int parameter_1,short parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	long long_1 = 1;
	v_termio_scroll(float_1,int_1,int_2,int_1,-1 );

	float_2 = float_1 * float_1;
	float_2 = float_3 + float_4;
	if(1)
	{
		double double_3 = 1;
		double_1 = double_1 + double_1;
		double_2 = double_3;
	}
	int_4 = int_1 * int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_5 = 1;
		unsigned_int_2 = unsigned_int_4;
		if(1)
		{
			int_1 = int_2;
		}
		int_2 = int_3 * int_5;
		if(1)
		{
			double_2 = double_2 * double_2;
		}
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_6 = 1;
			double_2 = double_1 + double_2;
			int_1 = int_6 + int_2;
			int_6 = int_4 + int_6;
		}
		if(1)
		{
			v_termpty_cells_clear(int_7,long_1,int_7);

			unsigned_int_4 = unsigned_int_2;
		}
	}
}
void v_termpty_clear_line( int parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1;
	v_termpty_cells_clear(int_1,long_1,int_1);

	int_2 = int_1 + int_1;
	double_1 = double_1 + double_2;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	double_4 = double_1 * double_3;
	short_3 = short_2 * short_3;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	double_6 = double_1 + double_5;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	double_7 = double_2 + double_3;
	v_termio_content_change(short_3,char_1,short_1,int_3);

	int_3 = int_1 * int_3;
}
void v_termpty_clear_screen( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		v_termpty_clear_line(int_1,double_1,int_1);

		v_termpty_cells_clear(int_2,long_1,int_3);

		float_1 = float_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "-;") > 0)
	{
		double double_2 = 1;
		double_2 = double_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_termio_content_change(short_2,char_1,short_3,int_3);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
}
void v_termpty_cell_codepoint_att_fill( unsigned int parameter_1,short parameter_2,short parameter_3,long parameter_4,int parameter_5)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = float_1;
	int_2 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long_2 = long_1 * long_2;
		int_3 = int_3 + int_4;
	}
}
short v__termpty_charset_trans( short parameter_1,float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	if(1)
	{
	}
	short_1 = short_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_1 * char_2;
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 + float_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_3 = 1;
			short_4 = short_1 + short_3;
		}
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 * double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
		}
		if(1)
		{
			short_2 = short_4 * short_1;
		}
	}
	return short_4;
}
void v_termio_content_change( short parameter_1,char parameter_2,short parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1 * int_2;
	int_2 = int_2 + int_3;
	short_2 = short_1 + short_1;
	char_2 = char_1 + char_2;
	double_1 = double_1;
	if(1)
	{
		short_1 = short_1 + short_1;
		short_1 = short_2;
		float_1 = float_1;
		short_2 = short_3 + short_1;
		float_3 = float_2 + float_3;
		double_1 = double_2 * double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_4 = 1;
			char_2 = char_1;
			if(1)
			{
				char_3 = char_1 + char_2;
				char_5 = char_4 + char_4;
			}
			short_4 = short_3 + short_1;
			double_3 = double_2 + double_3;
		}
	}
	if(1)
	{
	}
	long_1 = long_2;
	long_4 = long_3 + long_4;
	int_4 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char char_6 = 1;
		char_4 = char_6 + char_5;
		char_1 = char_4 + char_3;
	}
	if(1)
	{
		int int_5 = 1;
		unsigned int unsigned_int_3 = 1;
		int_2 = int_5 + int_1;
		short_3 = v__remove_links(int_1,double_4,-1 );

		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_4 = 1;
			float float_6 = 1;
			short_2 = v__sel_set(long_1,char_2);

			float_4 = float_1 + float_1;
			if(1)
			{
				float_4 = float_5 + float_1;
				unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
			}
			float_6 = float_6 + float_1;
			float_3 = float_2 * float_6;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
		float_5 = float_5 * float_5;
		unsigned_int_2 = unsigned_int_7 + unsigned_int_4;
		double_3 = double_2 * double_4;
		if(1)
		{
			unsigned_int_7 = unsigned_int_7 * unsigned_int_6;
		}
	}
}
void v_termpty_text_append( double parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int_1 = int_1 * int_2;
	int_3 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int_2 = int_4 + int_4;
	}
	int_2 = int_5 * int_4;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_3 = 1;
		int int_7 = 1;
		short_1 = short_2;
		if(1)
		{
			short short_3 = 1;
			char char_1 = 1;
			short_4 = short_3 * short_3;
			char_3 = char_1 + char_2;
			float_2 = float_1 * float_2;
			double_2 = double_1 + double_2;
			double_2 = double_3;
			long_1 = long_2;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			}
		}
		int_4 = int_3 + int_3;
		if(1)
		{
			double_1 = double_3 * double_2;
		}
		char controller4vul_2706[2];
		fgets(controller4vul_2706 ,2 ,stdin);
		if( strcmp( controller4vul_2706, "*") > 0)
		{
			char controller4vul_2707[3];
			fgets(controller4vul_2707 ,3 ,stdin);
			if( strcmp( controller4vul_2707, "3&") > 0)
			{
				v_termpty_text_scroll_test(long_1,long_1,uni_para);

				double_4 = double_2 * double_1;
			}
			unsigned_int_1 = unsigned_int_1;
		}
		short_1 = short_1 * short_1;
		if(1)
		{
			double_4 = double_2 * double_1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		}
		unsigned_int_3 = unsigned_int_4;
		if(1)
		{
			char char_4 = 1;
			char_2 = char_4 + char_3;
			long_3 = long_2 + long_1;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
			float_1 = float_3 + float_2;
			if(1)
			{
				int int_6 = 1;
				int_4 = int_4 + int_6;
			}
			if(1)
			{
				int_2 = int_4 + int_7;
			}
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				short_1 = short_4 + short_4;
				unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
			}
		}
		if(1)
		{
			float float_4 = 1;
			int int_8 = 1;
			int int_9 = 1;
			int int_10 = 1;
			double double_5 = 1;
			float_3 = float_4 * float_1;
			int_10 = int_8 + int_9;
			if(1)
			{
				long_1 = long_2 + long_3;
			}
			unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
			if(1)
			{
				unsigned int unsigned_int_7 = 1;
				unsigned_int_2 = unsigned_int_7 + unsigned_int_5;
				int_7 = int_8 + int_7;
			}
			double_4 = double_5 + double_1;
		}
	}
}
float v__csi_arg_get( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1 * char_1;
	double_1 = double_1 * double_2;
	double_1 = double_3 + double_3;
	char_2 = char_1 + char_1;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_1 = double_4 + double_5;
	}
	return float_1;
}
float v__handle_esc_csi( long parameter_1,double parameter_2,float parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int int_6 = 1;
	long long_3 = 1;
	float float_4 = 1;
	v__tab_forward(char_1,int_1);

	char_1 = v__handle_esc_csi_cursor_pos_set(double_1,unsigned_int_1,long_1);

	double_1 = v__handle_esc_csi_color_set(float_1,char_1);

	double_2 = v__handle_esc_csi_dsr(char_1,short_1);

	v_termpty_reset_state(short_1);

	char_2 = char_2 * char_2;
	char_2 = v__handle_cursor_control(double_3,float_2);

	v__safechar(float_2);

	v_termpty_clear_screen(int_2,char_2);

	v_termpty_clear_backlog(unsigned_int_1);

	v_termpty_clear_line(int_2,double_1,int_3);

	v_termpty_write(double_1,long_2,int_4);

	v_termpty_clear_tabs_on_screen(double_1);

	short_2 = v__handle_esc_csi_decstbm(double_3,int_5);

	v_termpty_cursor_copy(unsigned_int_2,float_2);

	short_2 = v__handle_esc_csi_decfra(short_1,short_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	return float_1;
	float_2 = v__csi_arg_get(float_3);

	v_termpty_text_append(double_3,short_1,int_5,-1 );

	v_termpty_text_scroll(int_1,int_4,-1 );

	v_termpty_text_scroll_rev(unsigned_int_3,short_1);

	long_1 = v__handle_esc_csi_reset_mode(unsigned_int_1,short_2,short_2);

	long_1 = v__handle_esc_csi_decscusr(short_1,unsigned_int_2);

	v__handle_esc_csi_decslrm(int_6,double_3);

	long_3 = v__handle_esc_csi_decera(float_4,double_2);

}
void v__safechar( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	double_1 = double_1 * double_1;
}
float v__handle_esc( short parameter_1,long parameter_2,char parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_6 = 1;
	char char_1 = 1;
	long long_2 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_7 = 1;
	float float_7 = 1;
	float float_8 = 1;
	float float_9 = 1;
	int int_8 = 1;
	long long_3 = 1;
	char char_2 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_6 = 1;
	long long_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_7 = 1;
	float float_10 = 1;
	double double_8 = 1;
	float float_11 = 1;
	short short_5 = 1;
	float_1 = v__handle_esc_dcs(int_1,unsigned_int_1,long_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	int_4 = int_2 * int_3;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	float_3 = float_3 * float_2;
	float_3 = float_4 * float_5;
	int_2 = int_3 + int_4;
	double_1 = double_2 + double_2;
	int_1 = int_5 + int_5;
	v_termpty_cursor_copy(unsigned_int_6,float_4);

	double_3 = double_1 * double_1;
	int_4 = int_1 + int_4;
	double_1 = double_4;
	v_termpty_clear_screen(int_6,char_1);

	int_3 = int_5 + int_3;
	float_1 = float_2;
	long_2 = long_1 + long_1;
	double_1 = double_3 * double_1;
	long_2 = v__handle_esc_terminology(float_2,float_6,unsigned_int_7);

	unsigned_int_9 = unsigned_int_6 * unsigned_int_8;
	int_7 = int_4;
	float_5 = float_5 * float_7;
	v__safechar(float_5);

	float_9 = float_8 + float_7;
	double_4 = double_3 + double_1;
	int_8 = int_1 * int_2;
	long_1 = long_3 + long_2;
	if(1)
	{
		char_1 = char_2;
	}
	if(1)
	{
	}
	double_5 = double_4 + double_5;
	v_termpty_text_scroll_test(long_2,long_3,-1 );

	double_2 = double_3 * double_1;
	float_7 = float_5 + float_6;
	if(1)
	{
	}
	v_termpty_cell_codepoint_att_fill(unsigned_int_7,short_1,short_2,long_3,int_8);

	double_6 = double_1 * double_5;
	float_3 = float_1 * float_5;
	if(1)
	{
	}
	long_4 = long_3;
	short_2 = short_3 + short_3;
	if(1)
	{
	}
	int_1 = int_8 + int_1;
	int_6 = int_6 * int_6;
	if(1)
	{
	}
	v_termpty_text_scroll_rev_test(long_4,long_2);

	short_3 = short_2 * short_2;
	float_7 = float_7;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_10 = 1;
		char char_3 = 1;
		unsigned_int_10 = unsigned_int_2;
		short_4 = short_1 * short_3;
		short_2 = short_4 + short_4;
		char_3 = char_2 * char_2;
		int_1 = int_4 + int_2;
		if(1)
		{
			short_4 = short_3 + short_4;
		}
		double_7 = double_5 + double_6;
		char_1 = char_3 * char_3;
		if(1)
		{
			int_6 = int_8 * int_4;
			float_4 = v__handle_esc_csi(long_1,double_5,float_10);

			float_7 = float_7 + float_4;
			int_3 = int_1 * int_8;
		}
	}
	if(1)
	{
	}
	double_1 = double_6;
	double_8 = double_7 * double_8;
	v_termpty_reset_state(short_4);

	long_1 = long_1 + long_3;
	unsigned_int_4 = unsigned_int_1;
	short_1 = short_1 * short_1;
	return float_11;
	v__handle_esc_xterm(short_5,short_3,long_1);

}
void v_termpty_cell_fill( float parameter_1,float parameter_2,short parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char_2 = char_1 * char_1;
			int_1 = int_1 + int_2;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_1 = 1;
			char char_3 = 1;
			char char_4 = 1;
			float_1 = float_1;
			char_4 = char_3 * char_3;
		}
	}
}
void v_termpty_cells_fill( long parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_2;
	v_termpty_cell_fill(float_1,float_2,short_1,int_1);

	unsigned_int_1 = unsigned_int_2;
	char_2 = char_1 + char_1;
	int_1 = int_2 + int_3;
	char_1 = char_1 * char_1;
}
void v_termpty_cells_clear( int parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_2;
	v_termpty_cells_fill(long_1,float_1,int_1,int_3);

}
float v__tooltip_del(short parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_1;
	double_2 = double_1 + double_2;
	double_1 = double_3 * double_4;
	return float_1;
}
short v__tooltip_content(int parameter_2,int parameter_3)
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char_1 = char_1 + char_1;
	short_1 = v_media_add(int_1,float_1,int_2,int_1,int_2,-1 );

	double_2 = double_1 + double_1;
	long_2 = long_1 + long_2;
	int_3 = int_2 + int_1;
	return short_1;
}
void v_MD5Final( int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	long long_4 = 1;
	double_1 = double_1 + double_2;
	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1;
	int_1 = int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		double double_3 = 1;
		char char_1 = 1;
		double_2 = double_3;
		int_3 = int_2 * int_1;
		char_2 = char_1 * char_1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_1;
	}
	int_1 = int_2;
	v_MD5Transform(double_5,char_2);

	int_2 = int_1 + int_3;
	float_1 = float_1 + float_2;
	int_3 = int_2;
	v_byteReverse(long_1,unsigned_int_2);

	long_1 = long_1 + long_2;
	long_4 = long_3 + long_3;
	long_4 = long_3 * long_4;
}
void v_MD5Transform( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double double_11 = 1;
	float float_5 = 1;
	short short_6 = 1;
	float float_6 = 1;
	float float_7 = 1;
	int_1 = int_1 + int_2;
	float_1 = float_1 + float_1;
	double_3 = double_1 * double_2;
	int_1 = int_2;
	float_2 = float_1 * float_1;
	char_1 = char_1 + char_1;
	float_2 = float_3;
	int_4 = int_2 * int_3;
	double_3 = double_4 + double_4;
	int_2 = int_3;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	double_3 = double_3 * double_1;
	short_2 = short_1;
	unsigned_int_2 = unsigned_int_1;
	long_2 = long_1 + long_1;
	char_1 = char_2;
	short_3 = short_2 + short_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	double_2 = double_2 + double_5;
	int_6 = int_4 + int_5;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	short_4 = short_3 * short_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	double_5 = double_1 + double_5;
	long_1 = long_1 * long_1;
	long_2 = long_2 * long_2;
	short_5 = short_5 + short_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_7 = unsigned_int_1 * unsigned_int_6;
	int_5 = int_4 * int_5;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	int_3 = int_7 + int_8;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	double_3 = double_3 * double_5;
	double_5 = double_4 + double_4;
	double_2 = double_6;
	double_5 = double_1 * double_6;
	double_7 = double_5;
	double_3 = double_6;
	float_4 = float_3 + float_3;
	long_3 = long_4;
	float_1 = float_2 + float_4;
	int_7 = int_3 + int_8;
	unsigned_int_1 = unsigned_int_8 + unsigned_int_2;
	double_3 = double_8 * double_6;
	long_1 = long_4 * long_4;
	double_9 = double_7 + double_4;
	double_5 = double_9 * double_8;
	double_4 = double_9;
	int_5 = int_4 * int_8;
	double_1 = double_10 * double_5;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_4;
	double_4 = double_3 + double_5;
	double_11 = double_6;
	float_5 = float_4;
	long_1 = long_4 + long_3;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_6;
	unsigned_int_7 = unsigned_int_7 + unsigned_int_3;
	float_4 = float_5 + float_2;
	short_6 = short_2;
	double_6 = double_4 * double_10;
	float_3 = float_5 * float_2;
	double_8 = double_2;
	int_8 = int_5 + int_5;
	unsigned_int_6 = unsigned_int_1;
	float_3 = float_2;
	float_6 = float_2 + float_5;
	float_4 = float_6 + float_7;
}
void v_byteReverse( long parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long_3 = long_1 * long_2;
}
void v_MD5Update( double parameter_1,unsigned int parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	char char_2 = 1;
	short short_3 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1;
	double_2 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_1;
	float_2 = float_1 * float_2;
	v_byteReverse(long_1,unsigned_int_2);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	double_4 = double_2 * double_3;
	short_2 = short_1 * short_1;
	long_4 = long_2 * long_3;
	float_1 = float_3 + float_4;
	unsigned_int_1 = unsigned_int_1;
	v_MD5Transform(double_3,char_1);

	unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
	int_3 = int_2;
	int_3 = int_2 + int_3;
	char_1 = char_2 + char_1;
	double_3 = double_3;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	char_1 = char_1 * char_2;
	double_1 = double_2 * double_3;
	short_1 = short_1 * short_3;
}
void v_MD5Init( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_1;
	float_3 = float_1 + float_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	double_2 = double_1 + double_1;
}
void v_gravatar_tooltip( unsigned int parameter_1,long parameter_2,char parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	long long_2 = 1;
	char char_5 = 1;
	int int_5 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1;
	short_1 = v__tooltip_content(int_1,int_1);

	double_3 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	char_1 = char_1 * char_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
	}
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	char_1 = char_2;
	double_4 = double_3;
	int_3 = int_2 * int_3;
	float_3 = v__tooltip_del(short_2);

	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	char_3 = char_3 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_3 * double_2;
		char_3 = char_1 + char_3;
	}
	int_4 = int_2;
	float_4 = float_1 * float_4;
	v_MD5Update(double_5,unsigned_int_5,char_4);

	v_MD5Final(int_2,double_3);

	long_2 = long_1 * long_1;
	char_4 = char_2 + char_5;
	v_MD5Init(int_5);

}
unsigned int v__cb_link_drag_done(double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1 + long_1;
	long_2 = long_2 + long_2;
	double_1 = double_2;
	char_3 = char_1 + char_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	char_2 = char_3 * char_1;
	return unsigned_int_1;
}
unsigned int v__cb_link_drag_accept(int parameter_2,short parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1 + double_2;
	int_3 = int_2 * int_2;
	return unsigned_int_1;
}
float v__cb_link_drag_move(double parameter_2,int parameter_3,double parameter_4,float parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_1;
	double_3 = double_1 * double_2;
	double_4 = double_1 * double_3;
	short_1 = short_1 * short_1;
	float_1 = float_2;
	if(1)
	{
		if(1)
		{
			double double_5 = 1;
			double_5 = double_1 * double_3;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 + int_2;
		}
	}
	return float_1;
}
float v__cb_link_icon_new(float parameter_2,long parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float_2 = float_1 * float_1;
	char_1 = char_1;
	long_1 = long_2;
	float_2 = float_3;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_3 + int_3;
	return float_2;
}
int v__cb_link_move(float parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	short short_4 = 1;
	char_1 = char_2;
	float_3 = float_1 + float_2;
	short_2 = short_1 * short_2;
	float_4 = v__cb_link_drag_move(double_1,int_1,double_1,float_1);

	short_3 = short_3;
	if(1)
	{
	}
	int_1 = int_2 + int_3;
	double_3 = double_2 + double_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "&") == 0)
	{
		int int_5 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float_1 = v__cb_link_icon_new(float_1,long_1,int_1);

		int_2 = int_4 * int_5;
		unsigned_int_1 = v__cb_link_drag_done(double_4);

		char_2 = char_1 + char_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			double double_5 = 1;
			double_5 = double_4 + double_2;
		}
		if(1)
		{
			int int_6 = 1;
			unsigned_int_1 = v__cb_link_drag_accept(int_4,short_4);

			int_6 = int_3;
		}
		short_3 = short_1 + short_4;
		float_3 = float_1 + float_4;
	}
	return int_3;
}
long v__cb_link_up_delay()
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short_1 = v__activate_link(short_2,float_1);

	int_1 = int_1 * int_1;
	double_2 = double_1 + double_1;
	double_4 = double_3 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "22") < 0)
	{
		double double_5 = 1;
		double_5 = double_3;
	}
	float_1 = float_2;
	return long_1;
}
float v__cb_link_up(unsigned int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double_1 = double_2;
	long_2 = long_1 + long_1;
	char_1 = char_1 + char_2;
	if(1)
	{
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char_2 = char_3 * char_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		long_3 = long_2;
		int_2 = int_1 * int_1;
		if(1)
		{
			if(1)
			{
				int int_3 = 1;
				long_1 = v__cb_link_up_delay();

				int_1 = int_3 * int_2;
			}
			if(1)
			{
				double_1 = double_2 * double_1;
			}
		}
		short_1 = short_1 * short_2;
	}
	return float_1;
}
void v_term_focus( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned_int_1 = v__term_is_focused(long_1);

	int_1 = int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	long_4 = long_2 * long_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
unsigned int v__term_is_focused( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	char_2 = char_3 + char_2;
	return unsigned_int_1;
}
void v_term_unfocus( double parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "q3") > 0)
	{
	}
	int_1 = int_2;
	short_1 = short_2;
	unsigned_int_2 = v__term_is_focused(long_1);

	short_1 = short_1 + short_1;
}
short v__cb_ctxp_del(char parameter_2,long parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	v_term_unfocus(double_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_2 * double_3;
	int_1 = int_1 * int_2;
	char_1 = char_1 * char_2;
	v_term_focus(char_2);

	unsigned_int_2 = unsigned_int_1;
	return short_1;
}
long v__cb_ctxp_dismissed(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
	int_3 = int_1 + int_2;
	double_3 = double_4;
	return long_1;
}
long v__cb_ctxp_link_copy(unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	double_3 = double_1 + double_2;
	short_2 = short_1 + short_1;
	int_2 = int_1 + int_1;
	char_1 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	double_3 = v__take_selection_text(short_3,double_1,int_3,-1 );

	char_2 = char_2 * char_3;
	return long_1;
}
unsigned int v__screen_visual_bounds( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char_2 = char_1 + char_1;
		long_1 = long_1 + long_2;
	}
	return unsigned_int_1;
}
void v__draw_cell( short parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	char_2 = char_1 * char_1;
	short_2 = short_1 * short_1;
	char_1 = char_1 + char_3;
	double_3 = double_1 * double_2;
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 * long_2;
	}
	char_2 = char_2 + char_1;
	float_3 = float_1 + float_2;
	char_2 = char_3 + char_2;
	long_3 = long_3 * long_2;
	if(1)
	{
		float_3 = float_3 * float_3;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			short_4 = short_2 + short_3;
		}
	}
	if(1)
	{
		double_2 = double_3 + double_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		char char_5 = 1;
		int int_4 = 1;
		char_2 = char_3 + char_4;
		int_3 = int_1 * int_2;
		char_5 = char_1;
		int_4 = int_4 + int_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		int int_5 = 1;
		int_6 = int_5 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		char_3 = char_1 + char_4;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
	}
	if(1)
	{
		if(1)
		{
			short short_5 = 1;
			short_2 = short_1 + short_5;
		}
		if(1)
		{
			int_6 = int_1 + int_3;
		}
	}
	if(1)
	{
		char_1 = char_2;
	}
}
short v__draw_line( unsigned int parameter_1,char parameter_2,char parameter_3,int parameter_4,short parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		v__draw_cell(short_1,long_1,unsigned_int_1,char_1);

		short_2 = short_2 + short_3;
	}
	return short_3;
}
double v_termpty_backlog_length( long parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	int int_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float_1 = float_1 + float_1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
	int_4 = int_2 * int_3;
	int_2 = int_1;
	double_3 = double_2 * double_2;
	int_1 = int_1 * int_3;
	double_4 = double_1 + double_4;
	char_2 = char_1 * char_2;
	int_3 = int_4 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	double_1 = double_5 + double_1;
	if(1)
	{
		int_5 = int_2 + int_5;
	}
	long_2 = long_1 + long_2;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_1 * long_3;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		int_1 = int_4;
	}
	char_1 = char_1;
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 + short_2;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		double_2 = double_5;
	}
	short_3 = short_2 + short_2;
	int_1 = int_2 + int_6;
	int_1 = int_5 * int_2;
	long_2 = v_verify_beacon(int_2,int_4);

	float_2 = float_1 * float_2;
	short_3 = short_2 + short_2;
	float_3 = float_2 * float_1;
	return double_1;
}
void v_termio_pty_get()
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_1 * int_1;
	long_1 = long_2;
}
double v_termio_textgrid_get( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	float_2 = float_1 + float_1;
	float_2 = float_3 * float_1;
	return double_1;
}
int v_miniview_colors_get( char parameter_1,float parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int_1 = int_1;
	char_2 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double_2 = double_1 + double_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	}
	return int_2;
	double_3 = v_termio_textgrid_get(char_2);

}
double v__deferred_renderer()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	int int_6 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_4 = 1;
	double double_7 = 1;
	char char_6 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	double double_9 = 1;
	char char_7 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_2;
	long_3 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_2;
	int_1 = int_1 + int_1;
	double_5 = double_3 * double_4;
	long_2 = long_3;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_2 * int_1;
	}
	int_3 = int_1 + int_3;
	int_3 = v_termio_scroll_get(short_1);

	double_3 = double_1 + double_1;
	unsigned_int_4 = unsigned_int_5;
	double_2 = double_1 * double_3;
	if(1)
	{
	}
	char_1 = char_1;
	char_1 = char_1 * char_1;
	double_5 = v_termpty_backlog_length(long_3);

	char_2 = char_1 + char_1;
	int_5 = int_4 + int_1;
	short_2 = short_2;
	int_4 = int_6;
	double_5 = double_1;
	if(1)
	{
		char_1 = char_1 + char_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_6 + unsigned_int_5;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
		if(1)
		{
			short_3 = v__draw_line(unsigned_int_2,char_2,char_3,int_1,short_1);

			unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		}
		short_3 = short_2 * short_3;
	}
	int_3 = int_2 + int_2;
	double_2 = double_4 + double_6;
	double_2 = double_1 * double_2;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4;
	}
	if(1)
	{
		short short_4 = 1;
		short_4 = short_2 * short_4;
	}
	float_1 = float_2;
	int_5 = v_miniview_colors_get(char_3,float_3);

	unsigned_int_6 = unsigned_int_1 * unsigned_int_6;
	if(1)
	{
		char char_5 = 1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
		char_5 = char_4 + char_4;
		if(1)
		{
			double_7 = double_4 * double_5;
			int_6 = int_2;
		}
		if(1)
		{
			if(1)
			{
				double double_8 = 1;
				double_1 = double_3 * double_3;
				char_5 = char_5 * char_6;
				double_3 = double_7 * double_3;
				v_termio_pty_get();

				double_6 = double_8 + double_7;
			}
			if(1)
			{
				unsigned_int_3 = v__screen_visual_bounds(float_4);

				int_3 = int_4 * int_6;
				unsigned_int_1 = unsigned_int_2 * unsigned_int_7;
			}
		}
	}
	if(1)
	{
		v_termpty_cellrow_get(int_2,int_3,double_7);

		int_4 = int_7 + int_7;
	}
	double_9 = double_5;
	char_7 = char_6 * char_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_7;
	int_7 = int_3 * int_5;
	return double_1;
}
int v__queue_render( int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double_1 = v__deferred_renderer();

	char_2 = char_1 + char_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_2 * double_2;
	}
	return int_1;
}
void v_miniview_redraw( double parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	int_1 = v__queue_render(int_1);

}
long v__block_obj_del( long parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	if(1)
	{
	}
	char_1 = v__smart_media_del(long_1,unsigned_int_1);

	float_3 = float_1 + float_2;
	double_1 = double_1;
	long_1 = long_2;
	return long_3;
}
long v__termpty_is_dblwidth_slow_get( long parameter_1,int parameter_2)
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
unsigned int v__termpty_is_dblwidth_get( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
	long_1 = v__termpty_is_dblwidth_slow_get(long_1,int_1);

}
void v_term_preedit_str_get( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int_2 = int_1 + int_1;
	int_1 = int_2 + int_1;
	if(1)
	{
	}
	int_4 = int_2 * int_3;
	int_5 = int_3;
	if(1)
	{
	}
}
int v_media_get( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	return int_1;
}
long v__smart_media_clicked(long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_3 = 1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	char_3 = char_4;
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			char_2 = char_2;
			float_1 = float_1 + float_2;
			if(1)
			{
				if(1)
				{
					unsigned int unsigned_int_4 = 1;
					double_1 = v_media_src_type_get(float_2);

					float_2 = v_termio_config_get();

					unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
					unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
					if(1)
					{
						double double_3 = 1;
						double_3 = double_2 + double_3;
					}
					if(1)
					{
						long long_1 = 1;
						long long_2 = 1;
						long_2 = long_1 * long_2;
						unsigned_int_4 = unsigned_int_4;
						if(1)
						{
							int int_1 = 1;
							float float_3 = 1;
							unsigned int unsigned_int_5 = 1;
							int_1 = int_1;
							float_2 = float_1 * float_3;
							unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
						}
					}
				}
				double_1 = double_2 * double_1;
			}
		}
	}
	int_2 = v_media_get(double_2);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	return long_3;
}
double v_media_control_get()
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	return double_2;
}
short v__smart_media_stop(double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	int_3 = int_3 + int_3;
	return short_1;
}
unsigned int v__smart_media_pause(char parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	return unsigned_int_1;
}
char v__smart_media_play(char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	short_1 = short_1 * short_1;
	return char_1;
}
char v__smart_media_del(long parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float_2 = float_1 + float_1;
	if(1)
	{
		char_1 = char_1;
	}
	return char_1;
}
void v_media_visualize_set( float parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_1 + char_2;
		}
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "X") > 0)
		{
			double double_1 = 1;
			double_1 = double_1 + double_1;
		}
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_2 + double_2;
	}
}
void v_media_mute_set( double parameter_1,char parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	double_1 = double_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
}
void v_media_volume_set( int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	short_1 = short_1;
}
double v__cb_media_vol(int parameter_2,double parameter_3,float parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	v_media_volume_set(int_1,double_1);

	double_1 = double_1;
	float_1 = float_1 + float_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	return double_2;
}
char v__cb_media_pos(short parameter_2,short parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	v_media_position_set(unsigned_int_1,double_1);

	unsigned_int_1 = unsigned_int_1;
	long_3 = long_1 * long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
	}
	int_1 = int_1;
	float_1 = float_2;
	return char_1;
}
double v__cb_media_pos_drag_stop(double parameter_2,long parameter_3,char parameter_4)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short_1 = short_1 * short_1;
	short_1 = short_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	double_1 = double_1 * double_1;
	int_1 = int_3 * int_4;
	double_2 = double_1;
	float_1 = float_1 * float_1;
	return double_1;
}
short v__cb_media_pos_drag_start(short parameter_2,unsigned int parameter_3,int parameter_4)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	float_1 = float_1;
	v_media_position_set(unsigned_int_1,double_1);

	float_2 = float_2 * float_3;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	short_1 = short_1 * short_1;
	double_2 = double_2 + double_2;
	return short_2;
}
void v_media_stop( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	double_1 = double_2;
	int_4 = int_2 * int_3;
}
long v__cb_media_stop(double parameter_2,short parameter_3,char parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char_1 = char_1 + char_2;
	return long_1;
	v_media_stop(double_1);

}
double v__cb_media_pause(unsigned int parameter_2,int parameter_3,char parameter_4)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	v_media_play_set(float_1,char_1);

	int_1 = int_1 + int_1;
	return double_1;
}
void v_media_play_set( float parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_2 = int_1 * int_2;
		int_2 = int_3 + int_3;
	}
}
unsigned int v__cb_media_play(double parameter_2,long parameter_3,long parameter_4)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short_1 = short_1;
	return unsigned_int_1;
	v_media_play_set(float_1,char_1);

}
void v_media_position_set( unsigned int parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	long_1 = long_1 + long_1;
	long_3 = long_2 * long_1;
	if(1)
	{
	}
	long_5 = long_3 + long_4;
	long_6 = long_2;
}
char v__cb_mov_ref(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	return char_1;
}
float v__cb_mov_progress(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	return float_1;
}
float v__cb_mov_restart()
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_2 = char_1 + char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "b") < 0)
	{
	}
	int_2 = int_1 * int_2;
	int_3 = int_3 + int_4;
	float_1 = float_2;
	return float_1;
}
short v__cb_mov_decode_stop(int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float_1 = v__cb_mov_restart();

	int_2 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	return short_1;
}
void v__cb_mov_len_change(long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_2;
	if(1)
	{
	}
}
int v__cb_mov_frame_resize(short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_6 = 1;
	char char_1 = 1;
	int_3 = int_1 + int_2;
	int_5 = int_4 * int_1;
	if(1)
	{
	}
	double_1 = double_2;
	short_1 = short_2;
	return int_6;
	v__type_mov_calc(short_1,int_1,short_1,char_1,short_2);

}
long v__cb_mov_frame_decode(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_4;
	short_2 = short_1 * short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "O4") > 0)
	{
	}
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_3 = int_2 * int_3;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_1 * double_1;
	v__type_mov_calc(short_3,int_4,short_4,char_1,short_2);

	int_3 = int_2 * int_3;
	float_1 = float_1;
	return long_1;
}
double v__type_mov_init( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_5 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_6 = 1;
	float float_3 = 1;
	long long_4 = 1;
	char char_2 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	long long_7 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_3 = 1;
	int int_8 = 1;
	char char_4 = 1;
	double_2 = double_1 * double_2;
	double_4 = double_3 + double_2;
	int_1 = int_1 * int_1;
	int_1 = int_2;
	long_1 = v__cb_media_stop(double_5,short_1,char_1);

	int_2 = int_3;
	int_3 = int_1 + int_3;
	long_3 = long_1 * long_2;
	int_5 = int_1 + int_4;
	if(1)
	{
		short_3 = short_1 * short_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "@g") > 0)
	{
		long_3 = long_3 + long_1;
		long_2 = v__cb_mov_frame_decode(int_4);

		short_1 = v__cb_mov_decode_stop(int_3);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		v__cb_mov_len_change(long_1);

		float_1 = float_2;
	}
	unsigned_int_1 = unsigned_int_1;
	short_4 = v__cb_media_pos_drag_start(short_1,unsigned_int_2,int_5);

	double_2 = double_6 + double_3;
	double_5 = double_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	double_7 = v__cb_media_vol(int_1,double_6,float_1);

	double_6 = double_3 * double_8;
	v_media_play_set(float_1,char_1);

	int_1 = int_5 + int_6;
	short_2 = short_4 + short_1;
	if(1)
	{
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		float_3 = float_2;
	}
	char_1 = char_1 * char_1;
	int_6 = int_4 + int_5;
	long_4 = long_2 + long_2;
	char_2 = v__cb_mov_ref(int_7);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	long_7 = long_5 * long_6;
	float_3 = float_4 + float_5;
	float_1 = float_2 * float_1;
	int_3 = int_3 * int_5;
	double_2 = v_theme_apply(float_5,unsigned_int_4,float_5);

	double_6 = double_5 + double_7;
	char_3 = char_1 + char_3;
	int_8 = int_8;
	float_2 = v__cb_mov_progress(int_4);

	double_5 = v__cb_media_pause(unsigned_int_1,int_1,char_4);

	double_6 = v__cb_media_pos_drag_stop(double_6,long_5,char_3);

	int_3 = int_8 * int_5;
	char_3 = v__cb_media_pos(short_3,short_2,char_1);

	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	int_6 = int_3 * int_8;
	int_3 = v__cb_mov_frame_resize(short_3);

	v_media_position_set(unsigned_int_1,double_6);

	double_5 = double_7 * double_5;
	unsigned_int_1 = v__cb_media_play(double_8,long_3,long_6);

	v_media_mute_set(double_5,char_3);

	v_media_visualize_set(float_5,float_1);

	double_7 = double_5 + double_2;
	long_5 = long_6 + long_5;
	if(1)
	{
		int int_9 = 1;
		int_7 = int_3 * int_9;
	}
	if(1)
	{
		double_1 = double_7;
	}
	return double_8;
}
void v__cb_edje_preloaded(char parameter_2,double parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_2 = char_1 * char_2;
	if(1)
	{
	}
	short_3 = short_1 + short_2;
	double_2 = double_1 + double_2;
}
int v__type_edje_init( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int_1 = int_1 * int_2;
	v_theme_auto_reload_enable(short_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v__cb_edje_preloaded(char_1,double_1,int_3);

	float_2 = float_1 + float_2;
	float_4 = float_3 * float_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	int_2 = int_3 + int_3;
	int_3 = int_2 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_2 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double_2 = double_2 * double_2;
			short_3 = short_2 + short_2;
			double_2 = double_1 + double_2;
		}
	}
	return int_4;
}
long v__type_scale_init()
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_4 = 1;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2;
	short_3 = short_1 * short_2;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 + char_2;
	short_1 = short_3 + short_1;
	double_1 = double_3 * double_1;
	long_1 = long_1 + long_1;
	int_2 = int_1 * int_2;
	int_3 = int_3 + int_1;
	int_4 = int_3;
	return long_2;
	float_1 = v__cb_scale_preloaded(long_2,short_4,-1 );

}
unsigned int v__cb_img_frame()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	long_1 = long_1 * long_2;
	long_2 = long_2 * long_1;
	if(1)
	{
		double double_2 = 1;
		int int_1 = 1;
		double_2 = double_1 + double_2;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		}
		int_1 = int_1;
		float_1 = float_1 * float_1;
		if(1)
		{
			if(1)
			{
				short short_3 = 1;
				short_3 = short_1 + short_2;
			}
		}
	}
	double_1 = double_1 + double_3;
	float_1 = float_2 + float_2;
	long_3 = long_3 + long_4;
	return unsigned_int_1;
}
float v__type_img_anim_handle( long parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char_1 = char_1 + char_1;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	unsigned_int_2 = v__cb_img_frame();

	double_1 = double_1;
	double_3 = double_2 + double_2;
	return float_2;
}
unsigned int v__cb_img_preloaded(double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "i") < 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	float_1 = float_1;
	return unsigned_int_2;
}
double v__type_img_init( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	float float_1 = 1;
	short_1 = short_2;
	unsigned_int_1 = v__cb_img_preloaded(double_1,double_2);

	short_1 = short_1 + short_2;
	double_4 = double_2 + double_3;
	short_2 = short_2 * short_1;
	double_4 = double_3 + double_5;
	double_2 = double_4;
	double_1 = double_5 * double_6;
	long_2 = long_1 * long_1;
	double_1 = double_2 * double_4;
	char_1 = char_1;
	double_6 = double_1 + double_4;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	return double_7;
	float_1 = v__type_img_anim_handle(long_1);

}
void v__url_compl_cb(int parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short_2 = short_1 * short_1;
	double_2 = double_1 + double_2;
	float_1 = float_2;
	char controller4vul_2738[3];
	fgets(controller4vul_2738 ,3 ,stdin);
	if( strcmp( controller4vul_2738, "Ml") > 0)
	{
		double_2 = v__smart_calculate(unsigned_int_1,uni_para);

	}
	if(1)
	{
	}
	double_1 = double_1;
	long_1 = long_1 * long_1;
	int_3 = int_1 * int_2;
	int_4 = int_1;
	char_3 = char_1 + char_2;
	int_1 = int_3 + int_5;
	char_2 = char_3 * char_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_5 + int_1;
	long_2 = long_2 + long_3;
	short_1 = short_1;
	char_2 = char_4;
	int_3 = int_3 * int_1;
	double_3 = double_3 + double_3;
	double_3 = double_4 + double_3;
	short_1 = short_2 + short_2;
	double_2 = double_2 * double_4;
	double_1 = double_5 + double_1;
}
short v__url_prog_cb(int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	char_2 = char_1 * char_2;
	int_1 = int_1 + int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_1 = int_1 + int_3;
		if(1)
		{
			double double_2 = 1;
			double_1 = double_2 * double_1;
		}
		float_1 = float_1 + float_2;
		int_2 = int_1 + int_3;
		if(1)
		{
			char char_3 = 1;
			double double_3 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char_1 = char_2 + char_3;
			double_1 = double_3;
			short_1 = short_1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
	}
	return short_2;
}
unsigned int v__type_thumb_calc( float parameter_1,double parameter_2,double parameter_3,unsigned int parameter_4,long parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	long_1 = long_2;
	if(1)
	{
	}
	if(1)
	{
		short_1 = short_1 * short_1;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_4 = 1;
		long_2 = long_2 * long_1;
		double_2 = double_1 + double_1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			long long_3 = 1;
			long_1 = long_3 * long_3;
			short_1 = short_2 * short_2;
			if(1)
			{
				float float_2 = 1;
				float_1 = float_2;
			}
		}
		if(1)
		{
			short short_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short_3 = short_2 * short_2;
			unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
		}
		double_3 = double_1 + double_1;
		short_1 = short_2 + short_1;
		float_1 = float_3 * float_4;
		double_4 = double_4;
	}
	unsigned_int_6 = unsigned_int_7;
	long_2 = long_4 + long_4;
	return unsigned_int_5;
}
void v__type_mov_calc( short parameter_1,int parameter_2,short parameter_3,char parameter_4,short parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_5 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	int_2 = int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short_1 = short_1 + short_2;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		float float_4 = 1;
		double double_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		float_2 = float_1 * float_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		short_3 = short_3 + short_3;
		if(1)
		{
			float float_3 = 1;
			float_4 = float_1 * float_3;
		}
		if(1)
		{
			double_1 = double_2;
		}
		if(1)
		{
			double_3 = double_2 + double_2;
			double_2 = double_1 * double_1;
			if(1)
			{
				double_3 = double_3 + double_2;
				short_1 = short_3 * short_1;
				if(1)
				{
					unsigned int unsigned_int_3 = 1;
					unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
				}
			}
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
			int_3 = int_2 * int_3;
			if(1)
			{
				long long_1 = 1;
				double_3 = double_3 * double_3;
				long_1 = long_1 + long_1;
				if(1)
				{
					char_1 = char_1 * char_2;
				}
			}
		}
		if(1)
		{
			short short_4 = 1;
			short_4 = short_2;
			float_1 = float_1;
		}
		double_2 = double_3 * double_4;
		long_4 = long_2 + long_3;
		float_2 = float_4 + float_1;
		char_1 = char_2;
	}
	float_2 = float_1 + float_1;
	double_5 = double_5 * double_2;
}
void v__type_edje_calc( unsigned int parameter_1,long parameter_2,char parameter_3,long parameter_4,int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	char_1 = char_1;
}
char v__type_img_calc( int parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4,float parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	short short_4 = 1;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double_3 = double_1 * double_2;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		short short_1 = 1;
		float float_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		short_1 = short_1 + short_1;
		if(1)
		{
			float_1 = float_1 + float_1;
			short_1 = short_1 * short_2;
			if(1)
			{
				double_4 = double_1 + double_2;
				double_2 = double_1 * double_2;
				if(1)
				{
					double_3 = double_2 + double_3;
				}
			}
		}
		if(1)
		{
			short short_3 = 1;
			short_3 = short_1 * short_2;
			double_2 = double_4 * double_5;
			if(1)
			{
				short_3 = short_1 + short_4;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				if(1)
				{
					short_3 = short_1 + short_2;
				}
			}
			if(1)
			{
				short short_5 = 1;
				unsigned int unsigned_int_3 = 1;
				short_2 = short_3 * short_5;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
			}
		}
		if(1)
		{
			char char_3 = 1;
			char_1 = char_3;
			double_5 = double_5 + double_4;
		}
		double_1 = double_4;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
		float_2 = float_1 * float_1;
		char_1 = char_1 + char_2;
	}
	short_4 = short_4;
	double_1 = double_5;
	return char_2;
}
float v__cb_scale_preloaded(long parameter_2,short parameter_3,int uni_para)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char * vul_var;
	short_1 = short_1 * short_1;
	char controller4vul_2744[3];
	fgets(controller4vul_2744 ,3 ,stdin);
	if( strcmp( controller4vul_2744, "]w") > 0)
	{
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 949)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int_1 = int_1 * int_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		char_3 = char_1 * char_2;
		long_1 = long_1 + long_2;
		unsigned_int_3 = unsigned_int_3;
	}
	char_2 = char_2 + char_1;
}
void v__type_scale_calc( double parameter_1,char parameter_2,short parameter_3,char parameter_4,char parameter_5,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_5 = 1;
	float float_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_6 = 1;
	long long_3 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		char_1 = char_1 + char_1;
		int_2 = int_3;
	}
	char controller4vul_2740[2];
	fgets(controller4vul_2740 ,2 ,stdin);
	if( strcmp( controller4vul_2740, "i") > 0)
	{
		char char_2 = 1;
		char char_3 = 1;
		short short_2 = 1;
		int_2 = int_3 * int_2;
		char controller4vul_2741[2];
		fgets(controller4vul_2741 ,2 ,stdin);
		if( strcmp( controller4vul_2741, "P") > 0)
		{
			unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
			int_3 = int_1 + int_4;
			char controller4vul_2742[2];
			fgets(controller4vul_2742 ,2 ,stdin);
			if( strcmp( controller4vul_2742, "}") > 0)
			{
				char_1 = char_1 * char_1;
				unsigned_int_6 = unsigned_int_1 * unsigned_int_3;
				char controller4vul_2743[2];
				fgets(controller4vul_2743 ,2 ,stdin);
				if( strcmp( controller4vul_2743, "(") < 0)
				{
					float_1 = v__cb_scale_preloaded(long_1,short_1,uni_para);

					char_2 = char_2 * char_1;
				}
			}
		}
		if(1)
		{
			unsigned_int_7 = unsigned_int_3 + unsigned_int_7;
			unsigned_int_8 = unsigned_int_5 + unsigned_int_5;
			if(1)
			{
				int_5 = int_5;
				char_1 = char_2;
				if(1)
				{
					float_2 = float_1;
				}
			}
		}
		if(1)
		{
			long_1 = long_2 * long_2;
			unsigned_int_3 = unsigned_int_3;
		}
		unsigned_int_4 = unsigned_int_8 + unsigned_int_8;
		char_2 = char_3 * char_2;
		unsigned_int_6 = unsigned_int_8 * unsigned_int_1;
		short_2 = short_2 * short_1;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		int int_8 = 1;
		int int_9 = 1;
		unsigned int unsigned_int_11 = 1;
		unsigned_int_3 = unsigned_int_4;
		unsigned_int_8 = unsigned_int_5 + unsigned_int_7;
		double_3 = double_1 + double_2;
		if(1)
		{
			double_2 = double_2 + double_4;
		}
		if(1)
		{
			unsigned int unsigned_int_9 = 1;
			unsigned_int_9 = unsigned_int_2 * unsigned_int_5;
		}
		if(1)
		{
			char char_4 = 1;
			char char_5 = 1;
			int int_7 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_10 = 1;
			float float_3 = 1;
			double_3 = double_1;
			int_6 = int_4 + int_6;
			double_2 = double_2 * double_4;
			char_5 = char_4 * char_1;
			long_2 = long_3 * long_2;
			int_6 = int_7 * int_8;
			short_3 = short_1 + short_3;
			unsigned_int_10 = unsigned_int_6 + unsigned_int_5;
			float_3 = float_2 * float_2;
		}
		int_8 = int_9 * int_5;
		unsigned_int_11 = unsigned_int_8 + unsigned_int_7;
	}
	if(1)
	{
		double double_5 = 1;
		double_2 = double_1 * double_5;
		unsigned_int_5 = unsigned_int_6 * unsigned_int_8;
	}
	int_6 = int_5 + int_6;
	long_3 = long_2 + long_3;
}
short v__unsmooth_timeout()
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	float_1 = float_2;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_3 + double_2;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		v__type_scale_calc(double_4,char_1,short_1,char_1,char_2,-1 );

		unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
		}
		if(1)
		{
			double double_5 = 1;
			double_4 = double_5 * double_4;
		}
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 * char_1;
	}
	return short_2;
}
void v__smooth_handler( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	if(1)
	{
		int int_3 = 1;
		int_5 = int_3 * int_4;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			unsigned_int_2 = unsigned_int_3;
			if(1)
			{
				int_5 = int_5 * int_5;
				if(1)
				{
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					short_1 = v__unsmooth_timeout();

					unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
				}
			}
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long_1 = long_1 * long_2;
			}
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float_1 = float_2;
			}
			double_1 = double_1;
		}
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		if(1)
		{
			int int_6 = 1;
			int_5 = int_6 + int_4;
		}
		double_3 = double_2 + double_2;
	}
}
double v__smart_calculate( unsigned int parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_1;
	char controller4vul_2739[2];
	fgets(controller4vul_2739 ,2 ,stdin);
	if( strcmp( controller4vul_2739, "J") > 0)
	{
		v__type_scale_calc(double_1,char_1,short_1,char_2,char_2,uni_para);

	}
	char_2 = char_2;
	if(1)
	{
		int_3 = int_2 * int_2;
	}
	if(1)
	{
		double_1 = double_2;
	}
	int_1 = int_2 + int_1;
	int_4 = int_4 * int_1;
	long_1 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	char_3 = char_1 * char_3;
	double_3 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_4;
	double_2 = double_1 * double_1;
	long_1 = long_2 * long_1;
	int_1 = int_2 + int_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	float_2 = float_1 + float_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_5 * int_1;
	int_5 = int_2 * int_5;
	if(1)
	{
		int int_6 = 1;
		int int_7 = 1;
		int_7 = int_6 + int_2;
		int_3 = int_2;
	}
	if(1)
	{
		double double_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double_3 = double_2 + double_4;
		float_4 = float_1 * float_3;
	}
	return double_2;
}
long v__smart_move( int parameter_1,long parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	return long_1;
}
long v__smart_resize( long parameter_1,char parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	int_1 = int_2 * int_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "3") == 0)
	{
	}
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	int_1 = int_4 * int_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return long_1;
}
char v__smart_del()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	char char_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		short short_1 = 1;
		char char_1 = 1;
		short_2 = short_1 + short_1;
		char_3 = char_1 + char_2;
		double_1 = double_2;
	}
	int_1 = int_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	long_2 = long_1 + long_1;
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		}
		int_4 = int_4 + int_3;
	}
	if(1)
	{
		double_1 = double_2 * double_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3;
	}
	if(1)
	{
		char char_4 = 1;
		char_2 = char_4 * char_3;
	}
	if(1)
	{
		int_2 = int_4;
	}
	if(1)
	{
		int_2 = int_5 + int_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_2 = short_2 + short_3;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_3 = long_4;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	char controller_14[2];
	fgets(controller_14 ,2 ,stdin);
	if( strcmp( controller_14, "s") > 0)
	{
		short short_4 = 1;
		short_4 = short_4 * short_4;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4;
	}
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float_5 = float_3 + float_4;
	}
	int_5 = int_2;
	double_1 = double_4;
	return char_5;
}
float v__smart_add( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	int_3 = int_1 + int_2;
	long_2 = long_1 * long_2;
	int_1 = int_1 + int_2;
	short_3 = short_1 * short_2;
	double_2 = double_1 + double_2;
	float_2 = float_1 * float_1;
	double_2 = double_3 + double_3;
	char_2 = char_1 + char_2;
	int_3 = int_3 + int_3;
	char_3 = char_3 * char_1;
	return float_3;
}
void v__smart_init()
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_6 = 1;
	char char_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float_2 = float_1 * float_1;
	int_2 = int_1 + int_1;
	double_3 = double_1 + double_2;
	double_2 = double_4 + double_4;
	int_3 = int_2 + int_3;
	float_2 = v__smart_add(unsigned_int_1);

	int_1 = int_3 + int_4;
	double_5 = double_4 * double_2;
	float_3 = float_1;
	long_1 = v__smart_resize(long_2,char_1,short_1);

	double_2 = double_5 * double_6;
	char_2 = v__smart_del();

	int_1 = int_1;
	double_4 = double_1 * double_4;
	long_2 = v__smart_move(int_1,long_3,unsigned_int_2);

	double_2 = v__smart_calculate_226(unsigned_int_1);

}
short v_media_add( int parameter_1,float parameter_2,int parameter_3,int parameter_4,int parameter_5,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_5 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	int int_8 = 1;
	char char_4 = 1;
	int int_9 = 1;
	char char_6 = 1;
	int int_10 = 1;
	float float_7 = 1;
	int int_11 = 1;
	short short_9 = 1;
	short short_10 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_8 = 1;
	long long_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_2;
	int_2 = int_3 * int_4;
	float_2 = float_1 * float_1;
	if(1)
	{
		double_2 = double_3;
	}
	if(1)
	{
		int_4 = int_1 * int_4;
	}
	long_1 = long_1;
	int_5 = int_2 + int_2;
	if(1)
	{
	}
	double_4 = double_2 * double_2;
	char_2 = char_1 * char_1;
	int_1 = int_4 * int_2;
	int_4 = int_5 + int_6;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	char controller4vul_2732[2];
	fgets(controller4vul_2732 ,2 ,stdin);
	if( strcmp( controller4vul_2732, "@") > 0)
	{
		char controller4vul_2733[3];
		fgets(controller4vul_2733 ,3 ,stdin);
		if( strcmp( controller4vul_2733, "ng") > 0)
		{
			float float_3 = 1;
			float float_4 = 1;
			short short_3 = 1;
			float_1 = float_3 + float_4;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
			if(1)
			{
				short_3 = short_1 * short_2;
				long_1 = long_1;
				unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
			}
			if(1)
			{
				char char_3 = 1;
				char_2 = char_2 + char_3;
				char_2 = char_1 * char_1;
				short_4 = short_1 * short_2;
			}
			if(1)
			{
				float_3 = float_5 + float_4;
			}
			if(1)
			{
				float_5 = float_6 * float_5;
			}
			if(1)
			{
				short_5 = short_4 + short_1;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
			}
			if(1)
			{
				short short_7 = 1;
				short_1 = short_6 + short_7;
			}
			if(1)
			{
				int_6 = int_3 * int_7;
				unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
				unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
				int_7 = int_6;
				unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
				long_1 = long_1 + long_1;
				long_2 = long_1 * long_1;
			}
			char controller4vul_2734[2];
			fgets(controller4vul_2734 ,2 ,stdin);
			if( strcmp( controller4vul_2734, "o") < 0)
			{
				short short_8 = 1;
				short_2 = short_8 + short_6;
				float_3 = float_5 + float_4;
				int_8 = int_8 + int_1;
				char controller4vul_2735[2];
				fgets(controller4vul_2735 ,2 ,stdin);
				if( strcmp( controller4vul_2735, "7") > 0)
				{
					float_2 = float_4;
					if(1)
					{
						double_4 = double_4;
						unsigned_int_3 = unsigned_int_1;
					}
					char controller4vul_2736[2];
					fgets(controller4vul_2736 ,2 ,stdin);
					if( strcmp( controller4vul_2736, ";") > 0)
					{
						char_2 = char_1 + char_4;
						char controller4vul_2737[3];
						fgets(controller4vul_2737 ,3 ,stdin);
						if( strcmp( controller4vul_2737, ")N") < 0)
						{
							v__url_compl_cb(int_6,uni_para);

							int_2 = int_7;
							int_6 = int_2 + int_7;
							float_5 = float_3;
						}
						if(1)
						{
							char char_5 = 1;
							double_2 = double_1;
							int_9 = int_7 * int_6;
							unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
							char_1 = char_5 * char_6;
							int_7 = int_7 + int_8;
							double_3 = double_1 * double_2;
							short_3 = short_4 + short_8;
							int_5 = int_7 + int_10;
							int_3 = int_7;
						}
					}
				}
				if(1)
				{
					float_7 = float_6;
				}
			}
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		}
	}
	if(1)
	{
		if(1)
		{
			int_8 = int_8 * int_10;
			long_2 = long_2 * long_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_5 = 1;
		if(1)
		{
			char char_7 = 1;
			char_2 = char_2 + char_6;
			char_7 = char_7 + char_1;
		}
		int_11 = int_5 * int_6;
		if(1)
		{
			int_5 = int_11 * int_9;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
		}
		float_6 = float_1 * float_2;
		if(1)
		{
			int_9 = int_1;
			char_2 = char_2 + char_4;
		}
		unsigned_int_1 = unsigned_int_6 * unsigned_int_7;
		if(1)
		{
			short_9 = short_9 * short_5;
			short_2 = short_10 + short_4;
		}
		unsigned_int_8 = unsigned_int_7 * unsigned_int_8;
		double_5 = double_3 + double_2;
	}
	float_6 = float_8;
	int_1 = int_4 + int_6;
	long_1 = long_3;
	short_9 = short_10 * short_1;
	int_11 = int_7 * int_2;
	float_7 = float_5;
	unsigned_int_5 = unsigned_int_8 + unsigned_int_8;
	double_7 = double_3 + double_6;
	if(1)
	{
		long_3 = long_2 * long_2;
	}
	return short_6;
}
unsigned int v__block_media_activate( long parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	int int_7 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	float_1 = float_1 * float_2;
	float_1 = float_1 * float_3;
	char controller4vul_2731[2];
	fgets(controller4vul_2731 ,2 ,stdin);
	if( strcmp( controller4vul_2731, "T") < 0)
	{
		short_1 = v_media_add(int_1,float_2,int_1,int_2,int_1,uni_para);

		double_3 = double_1 + double_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4;
	}
	if(1)
	{
		float_3 = float_2 + float_3;
	}
	if(1)
	{
		int_3 = int_4;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
	}
	unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
	long_1 = long_3 + long_4;
	if(1)
	{
		int_4 = int_5 + int_3;
	}
	int_6 = int_2 * int_6;
	short_2 = short_3;
	short_3 = short_4 + short_1;
	int_6 = int_1;
	double_4 = double_3 * double_3;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
		double_6 = double_5 + double_3;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
	int_7 = int_4;
	int_2 = int_5 * int_4;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_4;
	}
	return unsigned_int_3;
}
int v__block_edje_message_cb(int parameter_2,float parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	double double_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_4 = 1;
	double double_7 = 1;
	long long_6 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	long long_8 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	int int_5 = 1;
	float float_5 = 1;
	float float_6 = 1;
	short short_5 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_10 = 1;
	float float_7 = 1;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_2;
	float_2 = float_1 * float_2;
	int_1 = int_1;
	if(1)
	{
	}
	if(1)
	{
		double_3 = double_1 * double_1;
	}
	int_2 = int_2 * int_2;
	if(1)
	{
	}
	int_1 = int_2 * int_2;
	float_3 = float_2 + float_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	int_1 = int_1 + int_1;
	char_1 = char_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	int_2 = int_1;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	char_1 = char_2 + char_3;
	double_3 = double_4 + double_3;
	double_3 = double_2 * double_1;
	v_termpty_write(double_5,long_1,int_3);

	double_2 = double_1 * double_1;
	double_4 = double_6 * double_4;
	short_3 = short_3 + short_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_2 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_1 + double_1;
		char_1 = char_3 * char_3;
	}
	long_5 = long_3 * long_4;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	float_4 = float_1 + float_3;
	float_1 = float_2 + float_1;
	double_7 = double_3;
	long_7 = long_6 * long_6;
	double_2 = double_6 + double_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_1;
	}
	int_1 = int_1 * int_3;
	long_3 = long_7;
	float_1 = float_4 * float_4;
	int_3 = int_4 + int_3;
	short_3 = short_3 + short_2;
	long_3 = long_8 * long_5;
	int_2 = int_2 + int_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float_3 = float_2 + float_4;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_6;
	}
	int_4 = int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	char_3 = char_4 * char_3;
	int_4 = int_4 + int_4;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_3;
	long_6 = long_4 + long_2;
	int_2 = int_4;
	int_3 = int_5 * int_3;
	float_1 = float_5 + float_6;
	short_2 = short_5;
	int_1 = int_4;
	double_6 = double_8 + double_5;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_7;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	short_6 = short_1 + short_5;
	unsigned_int_8 = unsigned_int_5;
	double_6 = double_4 * double_6;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned int unsigned_int_9 = 1;
		unsigned_int_5 = unsigned_int_9 + unsigned_int_9;
		int_2 = int_1;
		double_6 = double_7 + double_1;
	}
	long_3 = long_6 + long_1;
	float_2 = float_2;
	unsigned_int_8 = unsigned_int_6 * unsigned_int_5;
	char_1 = char_3 * char_3;
	int_7 = int_6 * int_1;
	unsigned_int_2 = unsigned_int_6 * unsigned_int_10;
	int_6 = int_5 * int_7;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
	int_4 = int_1;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		char char_5 = 1;
		char_5 = char_1 * char_1;
		double_7 = double_5 * double_3;
		int_1 = int_3 + int_5;
	}
	long_2 = long_5 * long_6;
	float_7 = float_3;
	float_7 = float_4 + float_4;
	return int_6;
}
void v_termpty_write( double parameter_1,long parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_2;
	int_1 = int_1;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_2;
	}
}
short v__block_edje_signal_cb(long parameter_2,long parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	short_1 = short_1 + short_2;
	int_2 = int_1 * int_2;
	long_1 = long_2;
	long_3 = long_3;
	if(1)
	{
	}
	if(1)
	{
		short short_3 = 1;
		short_4 = short_1 * short_3;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_6 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_2;
		double_1 = double_2;
		int_4 = int_2 + int_3;
		long_3 = long_3;
		double_3 = double_4;
		double_3 = double_1;
		v_termpty_write(double_5,long_1,int_5);

		double_3 = double_6 * double_6;
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_6 = 1;
		long_3 = long_4 + long_5;
		unsigned_int_2 = unsigned_int_5;
		unsigned_int_2 = unsigned_int_6 * unsigned_int_1;
	}
	return short_4;
}
void v_termpty_block_chid_update( char parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "C ") < 0)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	if(1)
	{
	}
	long_1 = long_1 * long_2;
}
unsigned int v__block_edje_cmds( double parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
	v_termpty_block_chid_update(char_4,float_1);

	short_1 = v__block_edje_signal_cb(long_1,long_1,char_3);

	int_1 = v__block_edje_message_cb(int_1,float_2,int_1);

}
int v_homedir_get( char parameter_1,int parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
		double_1 = double_1 + double_1;
		double_2 = double_2 * double_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
	}
	if(1)
	{
		double_1 = double_2 + double_2;
	}
	return int_1;
}
float v__block_edje_activate( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		short_1 = short_1 + short_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			int_1 = int_1;
			double_1 = v_config_theme_path_default_get(int_1);

			long_2 = long_1 + long_2;
		}
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_2 = v__block_edje_cmds(double_1,unsigned_int_5,int_2,float_1);

			unsigned_int_3 = unsigned_int_6 * unsigned_int_7;
			short_2 = short_1;
		}
	}
	double_2 = double_1 * double_1;
	int_1 = v_homedir_get(char_2,int_2);

	double_2 = double_1;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_4;
	double_2 = double_2 + double_1;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_2 + short_1;
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	return float_3;
}
char v__block_activate( char parameter_1,long parameter_2,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int_1 = int_1 * int_1;
	char_2 = char_1 * char_1;
	char controller4vul_2730[3];
	fgets(controller4vul_2730 ,3 ,stdin);
	if( strcmp( controller4vul_2730, "@#") > 0)
	{
		unsigned_int_1 = v__block_media_activate(long_1,int_1,uni_para);

	}
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	int_2 = int_2 * int_1;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_3 + int_2;
	}
	return char_3;
}
void v_termpty_block_get( short parameter_1,int parameter_2)
{
	if(1)
	{
	}
}
int v_termpty_block_id_get( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	char_3 = char_1 * char_2;
	int_2 = int_1 + int_1;
	int_2 = int_2 * int_2;
	return int_3;
}
void v_termpty_backscroll_adjust( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	long_1 = v_verify_beacon(int_1,int_2);

	short_1 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
}
short v__smart_apply( double parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_4 = 1;
	double double_3 = 1;
	long long_5 = 1;
	int int_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_6 = 1;
	short short_6 = 1;
	float float_6 = 1;
	int int_8 = 1;
	int int_9 = 1;
	short short_7 = 1;
	int int_10 = 1;
	long long_7 = 1;
	double double_8 = 1;
	int int_11 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_8 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_8 = 1;
	float float_8 = 1;
	char char_6 = 1;
	float float_9 = 1;
	float float_10 = 1;
	int int_12 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_10 = 1;
	char_2 = char_1 + char_1;
	char_3 = char_3 * char_4;
	int_3 = int_1 + int_2;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_1 + long_2;
	int_4 = int_3 + int_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	double_1 = double_1 * double_2;
	long_2 = long_3 * long_2;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	int_4 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_4 + long_1;
		int_3 = int_4 + int_4;
		double_3 = double_1 * double_2;
		long_3 = long_2 * long_3;
		if(1)
		{
			long_1 = long_5;
		}
		int_3 = int_4 + int_5;
		if(1)
		{
			int_2 = int_2 * int_3;
		}
		float_2 = float_1 * float_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
					}
					int_1 = int_4 + int_2;
				}
				double_4 = double_2 * double_4;
				if(1)
				{
					unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
				}
				if(1)
				{
					double_3 = double_1 + double_1;
				}
				short_1 = short_1;
				unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
				int_1 = int_1;
				float_3 = float_2 + float_3;
				double_4 = double_4 + double_4;
				long_3 = long_4;
			}
			char controller4vul_2726[3];
			fgets(controller4vul_2726 ,3 ,stdin);
			if( strcmp( controller4vul_2726, "E0") < 0)
			{
				short short_2 = 1;
				short short_5 = 1;
				float_4 = float_2;
				int_1 = int_2 + int_5;
				if(1)
				{
					if(1)
					{
						short_3 = short_1 * short_2;
					}
					unsigned_int_4 = unsigned_int_1;
					int_5 = int_3;
					float_4 = float_2 + float_3;
					short_3 = short_2 + short_2;
					float_4 = float_3 + float_5;
					double_1 = double_4 * double_5;
					short_3 = short_1 * short_1;
					unsigned_int_1 = unsigned_int_5;
					double_4 = double_3;
					int_4 = int_5 * int_2;
					int_3 = int_4 + int_6;
					int_4 = int_1 * int_7;
					if(1)
					{
						long_4 = long_3 * long_2;
						int_3 = int_4;
						short_5 = short_4 * short_5;
						char_5 = char_2 * char_5;
						int_6 = int_2 * int_4;
					}
				}
				char controller4vul_2727[2];
				fgets(controller4vul_2727 ,2 ,stdin);
				if( strcmp( controller4vul_2727, "3") < 0)
				{
					char controller4vul_2728[2];
					fgets(controller4vul_2728 ,2 ,stdin);
					if( strcmp( controller4vul_2728, "d") > 0)
					{
						char controller4vul_2729[3];
						fgets(controller4vul_2729 ,3 ,stdin);
						if( strcmp( controller4vul_2729, "^p") > 0)
						{
							char_3 = v__block_activate(char_2,long_5,uni_para);

							double_4 = double_5 * double_4;
						}
						float_5 = float_5 + float_1;
					}
					unsigned_int_2 = unsigned_int_4;
					if(1)
					{
						unsigned_int_6 = unsigned_int_6 + unsigned_int_1;
					}
					if(1)
					{
						char_2 = char_3 * char_2;
					}
					int_3 = int_3 * int_3;
					float_2 = float_5 * float_1;
					double_1 = double_4 + double_6;
					unsigned_int_5 = unsigned_int_5;
					long_4 = long_5 * long_1;
					float_2 = float_1 + float_5;
					if(1)
					{
						int_5 = int_7 + int_2;
					}
				}
				if(1)
				{
					double_7 = double_4 + double_1;
					float_4 = float_5 * float_5;
					char_1 = char_1 * char_1;
					long_4 = long_6;
					double_4 = double_1 * double_5;
					char_5 = char_2 + char_3;
					if(1)
					{
						unsigned_int_6 = unsigned_int_2 + unsigned_int_1;
						unsigned_int_5 = unsigned_int_3 * unsigned_int_6;
					}
					if(1)
					{
						unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
						int_6 = int_6;
					}
					if(1)
					{
						short_6 = short_2;
					}
					if(1)
					{
						if(1)
						{
							float_5 = float_2 * float_6;
						}
						if(1)
						{
							unsigned_int_4 = unsigned_int_3 + unsigned_int_6;
						}
					}
					if(1)
					{
						char_3 = char_1;
					}
					if(1)
					{
						int_5 = int_6 + int_6;
					}
					if(1)
					{
						int_6 = int_1 + int_1;
						int_5 = int_5 * int_3;
						char_4 = char_3 * char_3;
						char_2 = char_2;
						int_8 = int_9;
						int_9 = int_3 * int_9;
						short_6 = short_4 * short_1;
					}
					if(1)
					{
						short_7 = short_1 * short_2;
					}
					if(1)
					{
						int_10 = int_10 + int_10;
					}
					if(1)
					{
						if(1)
						{
							double_3 = double_6;
						}
						int_6 = int_7 + int_3;
					}
					long_7 = long_4 * long_1;
					double_8 = double_7 * double_3;
					float_4 = float_2 * float_5;
					unsigned_int_6 = unsigned_int_2;
					if(1)
					{
						short_5 = short_7 * short_7;
						int_11 = int_7 * int_9;
					}
					if(1)
					{
						double_6 = double_6;
						float_7 = float_6;
					}
					unsigned_int_6 = unsigned_int_6;
					double_4 = double_6 + double_5;
					unsigned_int_3 = unsigned_int_5;
					int_8 = int_4;
					if(1)
					{
						char_4 = char_2 + char_5;
					}
				}
			}
		}
		double_7 = double_1;
		if(1)
		{
			short_1 = short_4;
		}
	}
	unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
	if(1)
	{
		long long_9 = 1;
		int_4 = int_7 * int_10;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		long_9 = long_1 * long_8;
		int_2 = int_2 * int_6;
		unsigned_int_4 = unsigned_int_7 * unsigned_int_3;
		int_9 = int_4 * int_8;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				unsigned_int_7 = unsigned_int_2 + unsigned_int_4;
				unsigned_int_5 = unsigned_int_4 + unsigned_int_8;
				short_7 = short_4 * short_8;
				if(1)
				{
					float_8 = float_3 + float_4;
				}
				int_9 = int_4;
				if(1)
				{
					if(1)
					{
						int_4 = int_2;
						int_6 = int_7;
						char_2 = char_6 + char_3;
					}
				}
				if(1)
				{
					unsigned_int_8 = unsigned_int_5;
					double_3 = double_1 * double_6;
				}
				float_10 = float_9 + float_6;
				double_4 = double_6 + double_6;
				short_7 = short_3 + short_4;
				int_3 = int_6 + int_8;
				float_1 = float_5 + float_2;
				unsigned_int_3 = unsigned_int_8;
				short_4 = short_6 * short_3;
				double_2 = double_8;
				int_12 = int_10 + int_9;
				char_4 = char_2 * char_3;
				int_1 = int_7 + int_1;
				if(1)
				{
					long_7 = long_7;
					double_7 = double_2;
					double_5 = double_4 + double_7;
					int_5 = int_3 * int_5;
					unsigned_int_9 = unsigned_int_5 + unsigned_int_2;
					float_7 = float_4 + float_9;
					double_8 = double_8 * double_4;
					int_7 = int_9 * int_12;
					int_10 = int_8 + int_6;
					double_3 = double_1;
				}
				float_5 = float_4 * float_2;
				if(1)
				{
					if(1)
					{
						int_4 = int_11 * int_11;
						unsigned_int_2 = unsigned_int_7;
					}
				}
			}
			unsigned_int_6 = unsigned_int_1 + unsigned_int_4;
		}
		unsigned_int_8 = unsigned_int_4;
		long_10 = long_6 * long_3;
	}
	double_3 = double_8;
	if(1)
	{
		unsigned_int_5 = unsigned_int_3 + unsigned_int_7;
		int_12 = int_1;
		float_2 = float_6 + float_8;
	}
	if(1)
	{
		char_3 = char_1 * char_3;
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_1;
	}
	double_2 = double_4 * double_8;
	long_3 = long_3 + long_8;
	char_6 = char_2;
	if(1)
	{
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		short short_9 = 1;
		int int_13 = 1;
		int int_14 = 1;
		float_6 = float_8 + float_4;
		int_11 = int_6;
		long_1 = long_7;
		double_10 = double_7 + double_9;
		long_4 = long_5;
		double_2 = double_4 + double_11;
		if(1)
		{
			unsigned_int_8 = unsigned_int_4 + unsigned_int_8;
			long_6 = long_2 + long_7;
		}
		char_5 = char_1 * char_5;
		float_3 = float_8 + float_10;
		short_9 = short_8;
		int_13 = int_13 + int_13;
		unsigned_int_8 = unsigned_int_9 + unsigned_int_9;
		int_2 = int_11 + int_3;
		char_1 = char_4 * char_6;
		float_9 = float_3 + float_8;
		if(1)
		{
			float float_11 = 1;
			float float_12 = 1;
			float_3 = float_11 * float_12;
		}
		if(1)
		{
			if(1)
			{
				long_8 = long_3 * long_8;
			}
			if(1)
			{
				double_3 = double_11;
			}
			if(1)
			{
				long_1 = long_7 * long_7;
			}
			if(1)
			{
				unsigned_int_5 = unsigned_int_8 * unsigned_int_2;
			}
			if(1)
			{
				double_3 = double_1 * double_2;
			}
		}
		int_10 = int_14 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_10 = 1;
		unsigned_int_10 = unsigned_int_9 * unsigned_int_1;
	}
	if(1)
	{
		long_10 = long_1 + long_1;
	}
	unsigned_int_3 = unsigned_int_5 * unsigned_int_9;
	return short_6;
}
int v__smart_cb_change(int uni_para)
{
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short_1 = v__smart_apply(double_1,uni_para);

	short_1 = short_1 * short_1;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_1;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	return int_1;
}
int v__smart_update_queue( double parameter_1,char parameter_2,int uni_para)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char controller4vul_2725[2];
	fgets(controller4vul_2725 ,2 ,stdin);
	if( strcmp( controller4vul_2725, "P") < 0)
	{
		int_1 = v__smart_cb_change(uni_para);

	}
	long_3 = long_1 * long_2;
	return int_1;
}
long v__lost_selection_reset_job()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	float_1 = float_1 * float_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Ln") < 0)
	{
		unsigned int unsigned_int_5 = 1;
		short short_1 = 1;
		unsigned_int_1 = unsigned_int_5;
		short_1 = short_2;
	}
	return long_1;
	char_1 = v__lost_selection(short_2,-1 );

}
char v__lost_selection(short parameter_2,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_4 = 1;
	char char_2 = 1;
	double_1 = double_1 * double_1;
	int_2 = int_1 + int_2;
	long_2 = long_1 + long_2;
	char_1 = char_1 * char_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	char controller4vul_2722[2];
	fgets(controller4vul_2722 ,2 ,stdin);
	if( strcmp( controller4vul_2722, "k") < 0)
	{
		char controller4vul_2723[2];
		fgets(controller4vul_2723 ,2 ,stdin);
		if( strcmp( controller4vul_2723, "r") > 0)
		{
			int int_3 = 1;
			long long_3 = 1;
			long long_4 = 1;
			int_2 = int_3 + int_2;
			char controller4vul_2724[2];
			fgets(controller4vul_2724 ,2 ,stdin);
			if( strcmp( controller4vul_2724, "<") < 0)
			{
				int_4 = v__smart_update_queue(double_1,char_2,uni_para);

				int_4 = int_2;
			}
			long_4 = long_1 + long_3;
		}
		double_1 = double_1;
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "9x") > 0)
	{
		float float_1 = 1;
		char char_3 = 1;
		double double_2 = 1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_2;
			int_4 = int_4;
		}
		float_1 = float_1 * float_1;
		char_3 = char_3;
		double_2 = double_2 + double_1;
		double_2 = double_2 + double_2;
	}
	return char_1;
}
double v__take_selection_text( short parameter_1,double parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_2;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_3;
	char_2 = char_1 + char_1;
	char_1 = char_2 + char_2;
	int_3 = int_1 + int_1;
	int_1 = int_2 + int_3;
	short_1 = short_1 * short_2;
	char controller4vul_2721[3];
	fgets(controller4vul_2721 ,3 ,stdin);
	if( strcmp( controller4vul_2721, " I") < 0)
	{
		char_1 = v__lost_selection(short_3,uni_para);

		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	}
	float_2 = float_1 + float_1;
	return double_3;
}
char v__cb_ctxp_link_content_copy(short parameter_2,int uni_para)
{
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double_1 = v__take_selection_text(short_1,double_2,int_1,uni_para);

	double_2 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1 + short_1;
	float_1 = float_1 * float_1;
	double_1 = double_4;
	char_1 = char_1;
	short_1 = short_1 + short_2;
	char_2 = char_2 * char_1;
	int_1 = int_2 + int_1;
	return char_1;
}
void v_ty_sb_free( float parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_1 = short_1;
	long_1 = long_1;
	float_2 = float_1 + float_1;
}
short v_ty_sb_steal_buf( int parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	float float_4 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char_2 = char_1 + char_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short_1 = short_1 + short_1;
		}
		double_2 = double_1 + double_1;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	float_1 = float_1 * float_2;
	float_3 = float_1 + float_1;
	int_1 = int_1 * int_1;
	float_2 = float_4 + float_1;
	return short_1;
}
int v_codepoint_to_utf8( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	if(1)
	{
		float float_1 = 1;
		int_2 = int_1 * int_2;
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		double_2 = double_1 * double_1;
		double_3 = double_3 * double_3;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int int_4 = 1;
		double_4 = double_2 + double_2;
		char_1 = char_1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		int_4 = int_1 * int_3;
	}
	if(1)
	{
		double_5 = double_1 + double_5;
		int_2 = int_3 * int_1;
		int_1 = int_1;
		char_3 = char_1 * char_2;
		int_5 = int_1 * int_5;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		int_1 = int_3 * int_1;
		double_1 = double_3 + double_2;
		char_1 = char_2 * char_2;
		char_2 = char_3 + char_1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
		char_1 = char_3 * char_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double_2 = double_3 + double_3;
		double_1 = double_4 + double_4;
		short_2 = short_1 * short_1;
		double_6 = double_5 * double_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		double_7 = double_8;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		int_5 = int_5 + int_2;
	}
	return int_2;
}
void v_ty_sb_spaces_rtrim( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short_1 = short_2;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char_1 = char_1 * char_1;
		double_1 = double_1 + double_2;
		char_1 = char_2 * char_1;
		short_4 = short_3 * short_1;
	}
}
int v_ty_sb_add( float parameter_1,float parameter_2,double parameter_3)
{
	float float_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float_1 = float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "<B") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		short short_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char_1 = char_1 + char_1;
		short_1 = short_2;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "O") > 0)
		{
		}
		double_1 = double_1 + double_1;
		float_1 = float_1 * float_1;
	}
	short_2 = short_2 + short_2;
	double_3 = double_2 + double_1;
	long_2 = long_1 * long_1;
	return int_1;
}
long v__termpty_cellrow_from_beacon_get( int parameter_1,int parameter_2,short parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_1 = 1;
	double double_4 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	double double_7 = 1;
	long_1 = v_verify_beacon(int_1,int_2);

	int_4 = int_3 + int_2;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	double_3 = double_1 + double_2;
	int_5 = int_3 * int_4;
	int_6 = int_6;
	char_1 = char_1 * char_1;
	if(1)
	{
		double_3 = double_1 * double_4;
	}
	int_4 = int_7 * int_4;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_2;
		double_3 = double_1 + double_5;
	}
	unsigned_int_1 = unsigned_int_3;
	char_3 = char_1 * char_2;
	int_4 = int_5 * int_2;
	float_2 = float_1 + float_1;
	if(1)
	{
		short short_3 = 1;
		long long_2 = 1;
		double double_6 = 1;
		long long_4 = 1;
		char_2 = char_2 * char_2;
		float_2 = float_1 * float_1;
		short_1 = short_2 * short_3;
		long_3 = long_2 * long_2;
		double_4 = double_6 + double_2;
		short_2 = short_1 + short_2;
		long_1 = long_4 * long_4;
	}
	double_3 = double_4 * double_7;
	return long_3;
}
void v_termpty_cellrow_get( int parameter_1,int parameter_2,double parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "/") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
		}
		char_1 = char_1 * char_2;
	}
	if(1)
	{
	}
	long_1 = v__termpty_cellrow_from_beacon_get(int_1,int_2,short_1);

}
int v_termio_selection_get( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,double parameter_6,long parameter_7)
{
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	int int_3 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_5 = 1;
	double double_3 = 1;
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_4 = 1;
		if(1)
		{
			v_ty_sb_free(float_1);

			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			v_termpty_backlog_lock();

			v_termpty_backlog_unlock();

			int_2 = int_1 * int_2;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
		if(1)
		{
			v_ty_sb_spaces_rtrim(unsigned_int_4);

			short_2 = short_1 * short_1;
		}
		if(1)
		{
			if(1)
			{
				char controller_6[3];
				fgets(controller_6 ,3 ,stdin);
				if( strcmp( controller_6, ":f") > 0)
				{
					if(1)
					{
						int_2 = v_codepoint_to_utf8(double_1,char_3);

						unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
					}
					if(1)
					{
						int_3 = v_ty_sb_add(float_2,float_2,double_2);

						unsigned_int_2 = unsigned_int_3 * unsigned_int_6;
					}
				}
				if(1)
				{
					float float_3 = 1;
					float_3 = float_4;
				}
			}
		}
		if(1)
		{
			int int_4 = 1;
			int_4 = int_4 * int_4;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					short_2 = v_ty_sb_steal_buf(int_3);

					unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
				}
				if(1)
				{
					unsigned_int_3 = unsigned_int_2;
				}
				if(1)
				{
					v_termpty_cellrow_get(int_5,int_1,double_3);

					double_2 = double_2 * double_3;
				}
				if(1)
				{
					double_1 = double_2 * double_2;
				}
				if(1)
				{
					int int_6 = 1;
					int_3 = int_6 + int_1;
				}
			}
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			float_4 = float_2 + float_2;
		}
	}
	return int_1;
}
double v__cb_ctxp_link_open(char parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	short_1 = short_1;
	char_3 = char_1 * char_2;
	short_1 = v__activate_link(short_1,float_1);

	unsigned_int_1 = unsigned_int_2;
	char_1 = char_3 * char_2;
	short_3 = short_1 * short_2;
	char_2 = char_2 * char_2;
	return double_1;
}
float v__should_inline( unsigned int parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_1 = short_1;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "&") < 0)
	{
	}
	double_1 = double_1 * double_1;
	float_1 = v_termio_config_get();

	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
	}
	return float_2;
}
short v_link_is_email( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
}
float v_link_is_protocol( int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
void v_link_is_url( int parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	float_1 = v_link_is_protocol(int_1);

}
short v__activate_link( short parameter_1,float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_6 = 1;
	int int_5 = 1;
	char char_4 = 1;
	short short_7 = 1;
	short_1 = short_1 * short_2;
	long_1 = long_2;
	short_2 = short_3 + short_3;
	short_4 = short_2 + short_2;
	long_1 = long_3;
	char_1 = char_1 + char_2;
	int_1 = int_2;
	short_2 = v_link_is_email(int_2);

	int_1 = int_3;
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
			long_1 = long_2 * long_4;
		}
		if(1)
		{
			float_1 = float_1 + float_2;
		}
	}
	if(1)
	{
		char_1 = char_2 + char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		float_1 = float_2 + float_2;
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
	if(1)
	{
	}
	if(1)
	{
		short short_5 = 1;
		double_2 = double_1 + double_1;
		short_5 = short_4 * short_2;
		if(1)
		{
			double_3 = double_2;
		}
		if(1)
		{
			int_4 = int_4;
		}
		double_5 = double_4 + double_5;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_2 * char_1;
			long_4 = long_1 * long_2;
		}
	}
	if(1)
	{
		double double_7 = 1;
		double_7 = double_6 * double_6;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
		if(1)
		{
			double_6 = double_2;
			if(1)
			{
				if(1)
				{
					short_4 = short_6;
					short_2 = short_1 + short_4;
				}
				if(1)
				{
					double_7 = double_1;
					int_1 = int_4 + int_5;
				}
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						v_link_is_url(int_1);

						char_2 = char_4;
					}
				}
				if(1)
				{
					if(1)
					{
						float_2 = v__should_inline(unsigned_int_1);

						unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
					}
				}
				if(1)
				{
					if(1)
					{
						double double_8 = 1;
						double_8 = double_6;
					}
				}
				double_6 = double_1 * double_5;
				int_5 = int_3 + int_3;
			}
		}
	}
	if(1)
	{
		int int_6 = 1;
		int_4 = int_3 * int_1;
		int_3 = int_6 * int_2;
		if(1)
		{
			char char_5 = 1;
			char_4 = char_2 * char_1;
			if(1)
			{
				double_6 = double_1;
				char_5 = char_1 * char_4;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						short_1 = short_6 * short_4;
					}
				}
				if(1)
				{
					if(1)
					{
						int_3 = int_5 + int_4;
					}
				}
				if(1)
				{
					if(1)
					{
						char char_6 = 1;
						char_5 = char_4 + char_6;
					}
				}
				double_4 = double_3 + double_5;
				int_3 = int_1;
			}
		}
	}
	if(1)
	{
		int int_7 = 1;
		int_5 = int_2 + int_7;
	}
	double_5 = double_6 + double_3;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		double_3 = v_media_src_type_get(float_2);

		unsigned_int_1 = unsigned_int_6;
	}
	return short_7;
}
int v__cb_ctxp_link_preview(long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 + long_2;
	short_1 = v__activate_link(short_2,float_1);

	int_1 = int_1 + int_1;
	float_2 = float_2 + float_1;
	short_2 = short_2 + short_2;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
void v__is_fmt( int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 * float_1;
		}
		if(1)
		{
		}
	}
}
double v_media_src_type_get( float parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
		int int_2 = 1;
		v__is_fmt(int_1,double_1);

		int_2 = int_1 + int_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2 + double_3;
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	return double_2;
}
int v__mouse_in_selection( double parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	float_2 = float_1 + float_2;
	int_1 = int_2;
	char_1 = char_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		int int_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		int_3 = int_1 * int_2;
		float_4 = float_1 * float_3;
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
	return int_1;
}
float v__smart_xy_to_cursor( int parameter_1,float parameter_2,char parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
	short_1 = short_1 + short_2;
	float_1 = float_1;
	char_2 = char_1 + char_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2 * double_2;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "Be") < 0)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_2 + double_4;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	return float_1;
}
double v__cb_link_down(long parameter_2,char parameter_3,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	char_2 = char_1 * char_2;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
		int_3 = int_1 * int_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	char controller4vul_2718[2];
	fgets(controller4vul_2718 ,2 ,stdin);
	if( strcmp( controller4vul_2718, "{") < 0)
	{
		int int_4 = 1;
		char char_3 = 1;
		int int_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_6 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_4 = int_3 + int_2;
		char_2 = char_3;
		long_1 = long_1 * long_1;
		char_1 = char_3;
		char controller4vul_2719[2];
		fgets(controller4vul_2719 ,2 ,stdin);
		if( strcmp( controller4vul_2719, "5") > 0)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
			char controller4vul_2720[2];
			fgets(controller4vul_2720 ,2 ,stdin);
			if( strcmp( controller4vul_2720, "6") > 0)
			{
				char_4 = v__cb_ctxp_link_content_copy(short_1,uni_para);

			}
		}
		int_5 = int_3 * int_4;
		int_3 = int_5;
		if(1)
		{
			int_4 = int_5 * int_5;
			if(1)
			{
				double_1 = double_3 * double_3;
			}
		}
		double_1 = double_4 * double_3;
		int_6 = int_3 * int_1;
		if(1)
		{
			double double_5 = 1;
			double double_6 = 1;
			double_6 = double_3 + double_5;
		}
		if(1)
		{
			char char_5 = 1;
			char_5 = char_3 * char_3;
			char_5 = char_2 + char_2;
		}
		if(1)
		{
			int_7 = int_5 * int_3;
		}
		unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
		int_7 = int_2 + int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		float_1 = float_1 * float_2;
		int_7 = int_7;
	}
	return double_2;
}
short v_main_term_popup_exists( char parameter_1)
{
	short short_1 = 1;
	return short_1;
}
float v__update_link( long parameter_1,float parameter_2,long parameter_3,char parameter_4,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	char_2 = char_1 * char_1;
	int_1 = int_2;
	long_3 = long_1 + long_2;
	float_1 = float_1 + float_1;
	int_4 = int_3 + int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	long_2 = long_3;
	if(1)
	{
		short short_2 = 1;
		char_3 = char_2 + char_2;
		short_1 = short_2;
	}
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
	}
	short_1 = short_1 * short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_4 = 1;
		int int_5 = 1;
		double double_3 = 1;
		short short_5 = 1;
		int int_7 = 1;
		short_4 = short_1 + short_1;
		double_1 = double_2 * double_1;
		int_1 = int_5 + int_5;
		char controller4vul_2716[2];
		fgets(controller4vul_2716 ,2 ,stdin);
		if( strcmp( controller4vul_2716, "k") < 0)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			char controller4vul_2717[2];
			fgets(controller4vul_2717 ,2 ,stdin);
			if( strcmp( controller4vul_2717, ".") < 0)
			{
				double_2 = v__cb_link_down(long_2,char_2,uni_para);

				char_3 = char_2 * char_2;
			}
			if(1)
			{
				double_1 = double_3 + double_1;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
			unsigned_int_5 = unsigned_int_5;
		}
		if(1)
		{
			int int_6 = 1;
			char_1 = char_1 * char_3;
			int_1 = int_4 * int_6;
		}
		long_1 = long_1 * long_1;
		int_3 = int_5 * int_4;
		double_3 = double_2 * double_3;
		short_1 = short_5;
		long_1 = long_2;
		int_7 = int_2 * int_3;
		if(1)
		{
			double double_4 = 1;
			double_4 = double_4 * double_3;
		}
	}
	return float_2;
}
short v__remove_links( int parameter_1,double parameter_2,int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_1;
	char controller4vul_2715[2];
	fgets(controller4vul_2715 ,2 ,stdin);
	if( strcmp( controller4vul_2715, "G") < 0)
	{
		float_1 = v__update_link(long_1,float_2,long_1,char_1,uni_para);

		double_2 = double_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	double_1 = double_2 * double_3;
	double_4 = double_3 * double_2;
	double_3 = double_2 + double_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	float_3 = float_1 * float_1;
	return short_1;
}
short v__sel_set( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		long long_1 = 1;
		double double_3 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		long_1 = long_1 + long_1;
		double_3 = double_3 * double_1;
	}
	return short_1;
}
int v_termio_scroll_get( short parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_1;
	double_1 = double_2;
	return int_1;
}
void v_miniview_position_offset( unsigned int parameter_1,int parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_1 + short_1;
	double_1 = double_1;
	double_2 = double_1 + double_1;
	double_2 = double_1 + double_3;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int_1 = v_termio_scroll_get(short_2);

		int_3 = int_2 * int_2;
		char_1 = char_1 + char_2;
		if(1)
		{
			float float_1 = 1;
			char_1 = char_1 + char_2;
			unsigned_int_1 = unsigned_int_1;
			float_1 = float_1 * float_1;
		}
		if(1)
		{
			long long_1 = 1;
			unsigned_int_2 = unsigned_int_1;
			double_2 = double_3;
			long_1 = long_1 * long_1;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_4 = 1;
			int_4 = int_2 * int_4;
			int_3 = int_4 + int_4;
			if(1)
			{
				int_3 = int_2 + int_4;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
		}
	}
}
char v_term_miniview_get( unsigned int parameter_1)
{
	char char_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "1") > 0)
	{
	}
	return char_1;
}
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long_3 = long_1 + long_2;
	int_1 = int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		short_1 = short_2 * short_2;
		if(1)
		{
			int_2 = int_1;
		}
		double_2 = double_1 * double_1;
	}
	int_4 = int_2 * int_3;
	char controller4vul_2712[3];
	fgets(controller4vul_2712 ,3 ,stdin);
	if( strcmp( controller4vul_2712, "r,") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_5 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double_2 = double_2 * double_2;
		float_2 = float_1 * float_1;
		double_2 = double_3 * double_1;
		if(1)
		{
			char_2 = char_1 + char_1;
		}
		char controller4vul_2713[2];
		fgets(controller4vul_2713 ,2 ,stdin);
		if( strcmp( controller4vul_2713, "F") > 0)
		{
			float float_3 = 1;
			long_2 = long_1 * long_2;
			int_4 = int_5;
			char_1 = char_2 + char_2;
			char_3 = char_1 * char_3;
			float_3 = float_3 * float_3;
			char controller4vul_2714[3];
			fgets(controller4vul_2714 ,3 ,stdin);
			if( strcmp( controller4vul_2714, ".T") > 0)
			{
				short_2 = v__remove_links(int_2,double_2,uni_para);

				unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			char char_4 = 1;
			char_4 = char_3;
			int_5 = int_4;
			float_1 = float_2 + float_2;
		}
	}
	if(1)
	{
		if(1)
		{
			float float_4 = 1;
			float float_5 = 1;
			float_4 = float_5;
		}
	}
}
int v_termpty_save_new( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double_2 = double_1 + double_2;
	short_1 = short_1 + short_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "rm") < 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	return int_1;
	v_termpty_save_free(long_1);

}
int v_termpty_save_expand( float parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short_1 = short_2;
	float_1 = float_1;
	if(1)
	{
	}
	short_1 = short_1 * short_1;
	long_2 = long_1 * long_2;
	double_1 = double_1 * double_1;
	return int_1;
}
double v__termpty_cell_is_empty()
{
	double double_1 = 1;
	if(1)
	{
	}
	return double_1;
}
double v_termpty_line_length( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = v__termpty_cell_is_empty();

	double_3 = double_1 * double_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
		}
	}
	return double_4;
}
long v_verify_beacon( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
void v_termpty_text_save_top( float parameter_1,unsigned int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	int int_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	int int_8 = 1;
	int int_9 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	int_3 = int_1 * int_2;
	v_termpty_backlog_unlock();

	int_4 = int_3 * int_1;
	long_1 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int_2 = v_termpty_save_new(float_1,int_5);

		unsigned_int_3 = unsigned_int_2;
		if(1)
		{
			int_1 = int_6 * int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			char char_3 = 1;
			long_2 = v_verify_beacon(int_2,int_7);

			unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
			short_2 = short_1 + short_2;
			double_1 = v_termpty_line_length(short_3,unsigned_int_1);

			int_3 = v_termpty_save_expand(float_1,int_4,int_5);

			char_3 = char_3 * char_1;
		}
	}
	int_8 = int_3 * int_5;
	int_1 = int_3 * int_9;
	if(1)
	{
	}
	float_2 = float_2;
	int_7 = int_5 + int_6;
	if(1)
	{
		int_7 = int_2 * int_1;
	}
	float_3 = float_3 * float_2;
	v_termpty_backlog_lock();

	double_1 = double_2 + double_1;
	short_1 = short_1 * short_3;
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		double_1 = double_1 + double_1;
		float_5 = float_1 * float_4;
	}
	short_2 = short_4 * short_1;
}
void v_termpty_text_scroll( int parameter_1,int parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_5 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char_2 = char_1 * char_1;
	long_1 = long_1 * long_2;
	int_2 = int_1 * int_1;
	if(1)
	{
		long_1 = long_2 * long_3;
	}
	if(1)
	{
		char_3 = char_4;
	}
	long_4 = long_4;
	short_2 = short_1 + short_2;
	char controller4vul_2710[2];
	fgets(controller4vul_2710 ,2 ,stdin);
	if( strcmp( controller4vul_2710, "1") < 0)
	{
		char_5 = char_3 * char_4;
		char controller4vul_2711[2];
		fgets(controller4vul_2711 ,2 ,stdin);
		if( strcmp( controller4vul_2711, " ") > 0)
		{
			v_termio_scroll(float_1,int_3,int_4,int_1,uni_para);

			long_3 = long_1 * long_2;
		}
		int_5 = int_6;
		if(1)
		{
			float_3 = float_1 + float_2;
		}
	}
	if(1)
	{
		char char_6 = 1;
		float_2 = float_3 + float_3;
		float_1 = float_2;
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 + double_1;
		}
		char_6 = char_2 + char_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_2 = 1;
			double double_3 = 1;
			int_4 = int_3 * int_1;
			double_3 = double_2 + double_3;
			int_6 = int_1 + int_5;
		}
		if(1)
		{
			char char_7 = 1;
			char_5 = char_7 * char_7;
		}
	}
}
void v_termpty_text_scroll_test( long parameter_1,long parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_2708[3];
	fgets(controller4vul_2708 ,3 ,stdin);
	if( strcmp( controller4vul_2708, "0p") < 0)
	{
		int_1 = int_1 + int_1;
		char controller4vul_2709[3];
		fgets(controller4vul_2709 ,3 ,stdin);
		if( strcmp( controller4vul_2709, "OO") > 0)
		{
			v_termpty_text_scroll(int_2,int_3,uni_para);

			unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
			int_3 = int_2 + int_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_4 = unsigned_int_3;
		int_3 = int_1 + int_3;
		double_1 = double_2;
	}
}
float v__cursor_to_start_of_line( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double_1 = double_2;
	return float_1;
}
void v__tab_forward( char parameter_1,int parameter_2)
{
}
char v__handle_cursor_control( double parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	float float_5 = 1;
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	float_1 = v__cursor_to_start_of_line(long_1);

	long_4 = long_2 + long_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_1 * double_1;
	long_3 = long_5 * long_3;
	v__tab_forward(char_1,int_3);

	char_2 = char_1 + char_1;
	if(1)
	{
		int_3 = int_1;
	}
	float_4 = float_2 + float_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	v_termpty_text_scroll_test(long_3,long_3,-1 );

	double_2 = double_1 * double_1;
	if(1)
	{
		long long_6 = 1;
		double double_3 = 1;
		unsigned_int_2 = unsigned_int_1;
		long_2 = long_5 * long_6;
		double_3 = double_2 + double_1;
	}
	float_5 = float_5 * float_1;
	return char_1;
}
int v_termpty_handle_seq( int parameter_1,int parameter_2,short parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	char controller4vul_2705[2];
	fgets(controller4vul_2705 ,2 ,stdin);
	if( strcmp( controller4vul_2705, "Q") > 0)
	{
		v_termpty_text_append(double_1,short_1,int_1,uni_para);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 * int_3;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "3") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	return int_4;
}
void v_termpty_handle_buf( int parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = float_2;
	int_2 = int_1 * int_2;
	int_1 = int_1 * int_2;
	short_1 = short_2;
	char controller4vul_2704[3];
	fgets(controller4vul_2704 ,3 ,stdin);
	if( strcmp( controller4vul_2704, ")6") < 0)
	{
		int_1 = v_termpty_handle_seq(int_2,int_2,short_2,uni_para);

		float_2 = float_1 * float_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
void v_theme_reload( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_2 = char_1 + char_2;
	float_1 = float_1 + float_1;
	short_1 = short_1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
}
double v_theme_reload_cb(float parameter_2,double parameter_3,double parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_2 = long_1 * long_1;
	char_2 = char_1 * char_2;
	int_1 = int_2;
	char_2 = char_2 * char_1;
	v_theme_reload(float_1);

	short_1 = short_2;
	double_1 = double_1 + double_1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3;
	}
	return double_2;
}
void v_theme_auto_reload_enable( short parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = v_theme_reload_cb(float_1,double_1,double_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
}
void v__cursor_shape_to_group_name( unsigned int parameter_1)
{
}
double v_config_theme_path_default_get( int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1;
	double_1 = double_1 + double_2;
	double_2 = double_3;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return double_1;
}
long v_theme_path_get()
{
	long long_1 = 1;
	return long_1;
}
int v_config_theme_path_get()
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	long_1 = v_theme_path_get();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
	}
	return int_1;
}
double v_theme_apply( float parameter_1,unsigned int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_6 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = v_config_theme_path_get();

	float_1 = float_2;
	double_1 = double_2;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	double_5 = double_3 * double_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	char_1 = char_1 * char_1;
	return double_6;
	double_1 = v_config_theme_path_default_get(int_2);

}
void v_termio_set_cursor_shape( unsigned int parameter_1,char parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	v_theme_auto_reload_enable(short_1);

	double_1 = double_2;
	int_1 = int_2;
	float_3 = float_1 * float_2;
	v__cursor_shape_to_group_name(unsigned_int_1);

	double_2 = double_3;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	char_1 = char_2;
	long_2 = long_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		double_2 = v_theme_apply(float_1,unsigned_int_4,float_3);

		long_3 = long_2 + long_3;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
		}
		if(1)
		{
			char char_3 = 1;
			char_3 = char_2 * char_3;
		}
	}
}
void v_termpty_clear_tabs_on_screen( double parameter_1)
{
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	if(1)
	{
		v_termpty_save_free(long_1);

		v_termpty_backlog_unlock();

		double_2 = double_1 * double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long_2 = long_2;
		}
		v_termpty_backlog_lock();

		long_4 = long_1 * long_3;
	}
	if(1)
	{
		double_2 = double_2 * double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_2;
	}
	long_2 = long_3 + long_4;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
unsigned int v__ts_free()
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1;
	return unsigned_int_1;
}
void v_termpty_save_free( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			float_1 = float_1 + float_2;
		}
		double_1 = double_1 * double_1;
	}
	int_2 = int_1 + int_1;
	unsigned_int_1 = v__ts_free();

	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_termpty_backlog_unlock();

	double_2 = double_1 * double_2;
	double_2 = double_1 * double_3;
	if(1)
	{
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float_1 = float_1 + float_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			v_termpty_backlog_lock();

			int_1 = int_1 + int_2;
		}
		int_2 = int_1 + int_2;
		char_3 = char_1 + char_2;
	}
	v_termpty_save_free(long_1);

	int_4 = int_3 * int_1;
	float_1 = float_1 * float_3;
	int_3 = int_5 * int_5;
	v_termpty_backlog_size_set(int_2,unsigned_int_2);

	long_2 = long_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
}
void v_termpty_reset_att()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_5 = 1;
	char char_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_2 = int_1 + int_1;
	long_1 = long_1 + long_1;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	long_2 = long_2 + long_3;
	int_1 = int_2 * int_2;
	short_3 = short_2 + short_2;
	int_2 = int_2 * int_3;
	int_4 = int_4;
	double_1 = double_1 + double_2;
	short_1 = short_2 * short_2;
	int_5 = int_1 + int_1;
	char_1 = char_1 * char_1;
	short_2 = short_2 * short_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	double_3 = double_3;
	int_2 = int_1 * int_1;
	float_1 = float_1;
	char_2 = char_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
}
float v_termio_config_get()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	return float_1;
}
void v_termpty_reset_state( short parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_5 = 1;
	int int_6 = 1;
	int_1 = int_1 + int_1;
	float_2 = float_1 * float_2;
	if(1)
	{
		float_1 = float_2 + float_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v_termpty_reset_att();

	double_1 = double_1 + double_1;
	v_termpty_clear_backlog(unsigned_int_3);

	double_3 = double_2 * double_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	double_4 = double_2 + double_1;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_5;
	v_termpty_clear_tabs_on_screen(double_4);

	unsigned_int_7 = unsigned_int_1 * unsigned_int_6;
	long_1 = long_1 + long_2;
	short_1 = short_1 + short_2;
	unsigned_int_6 = unsigned_int_7 + unsigned_int_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	float_1 = v_termio_config_get();

	float_1 = float_2;
	int_3 = int_1 * int_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_1;
	short_2 = short_2 + short_3;
	double_1 = double_4 + double_1;
	v_termio_set_cursor_shape(unsigned_int_1,char_1);

	int_3 = int_2 + int_3;
	short_3 = short_2 * short_1;
	int_2 = int_1 * int_4;
	int_3 = int_1 * int_5;
	float_3 = float_1;
	int_4 = int_3;
	double_4 = double_4 + double_4;
	short_1 = short_3 * short_1;
	long_3 = long_3 * long_3;
	unsigned_int_9 = unsigned_int_8 * unsigned_int_3;
	int_4 = int_1 + int_5;
	unsigned_int_10 = unsigned_int_10 * unsigned_int_1;
	float_1 = float_1 * float_3;
	short_1 = short_2 * short_3;
	double_4 = double_3 * double_4;
	double_3 = double_5;
	int_6 = int_5 + int_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		int int_7 = 1;
		int_1 = int_4 * int_7;
	}
}
void v_termpty_resize_tabs( float parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1;
	int_1 = int_1 * int_2;
	double_2 = double_2 * double_3;
	if(1)
	{
	}
	short_1 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_5 = 1;
		long_1 = long_1 * long_2;
		if(1)
		{
			int int_3 = 1;
			int_3 = int_2 * int_2;
		}
		if(1)
		{
			double double_4 = 1;
			double_3 = double_4;
		}
		double_2 = double_5 + double_3;
	}
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_3 * double_2;
	}
}
double v__termpty_init( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double_1 = double_1 + double_1;
	double_4 = double_2 * double_3;
	short_1 = short_1 * short_1;
	int_1 = int_1;
	int_3 = int_1 + int_2;
	double_4 = double_2 * double_4;
	float_1 = float_1 * float_2;
	v_termpty_resize_tabs(float_3,int_1,int_1);

	unsigned_int_1 = unsigned_int_1;
	v_termpty_reset_state(short_2);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	float_2 = float_3 * float_1;
	short_4 = short_3 * short_4;
	long_1 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
	return double_2;
}
char v__add_default_keys( long parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_7 = 1;
	char char_4 = 1;
	short short_2 = 1;
	int int_6 = 1;
	char char_5 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	char char_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	long long_5 = 1;
	char_1 = char_1 * char_1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1;
	long_2 = long_1 + long_1;
	int_1 = int_1 + int_2;
	char_2 = char_2 + char_1;
	double_5 = double_4 + double_2;
	char_1 = char_3 * char_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	long_1 = long_3 * long_1;
	long_3 = long_1 * long_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_4 = double_3 * double_5;
	long_3 = long_3;
	long_1 = long_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	int_3 = int_2 + int_2;
	double_2 = double_6 + double_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	int_5 = int_4 * int_1;
	float_2 = float_1 * float_1;
	double_7 = double_6 * double_4;
	char_3 = char_4;
	double_3 = double_4 + double_7;
	short_1 = short_2 + short_1;
	int_1 = int_5 * int_6;
	char_5 = char_4 + char_4;
	int_1 = int_7 + int_4;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	int_7 = int_7 + int_5;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	short_3 = short_3 * short_2;
	int_2 = int_2 + int_2;
	int_1 = int_1 * int_4;
	char_6 = char_1 + char_1;
	short_5 = short_4 * short_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	int_6 = int_4;
	int_7 = int_7 + int_5;
	int_6 = int_5;
	double_5 = double_3 * double_1;
	float_2 = float_1;
	short_1 = short_6 * short_3;
	int_5 = int_1;
	long_2 = long_2 + long_5;
	int_5 = int_3;
	return char_6;
}
void v_colors_standard_get( int parameter_1,int parameter_2,long parameter_3,char parameter_4,char parameter_5,double parameter_6)
{
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		long long_1 = 1;
		int_1 = int_1;
		short_2 = short_1 + short_1;
		float_2 = float_1 * float_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_3 = double_1 * double_2;
		double_2 = double_1 * double_4;
		long_1 = long_1;
	}
	double_4 = double_2 + double_3;
	char_1 = char_1 * char_2;
	int_1 = int_2;
	int_2 = int_3 * int_4;
}
double v_config_new()
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_6 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_3 = 1;
	long long_5 = 1;
	double double_6 = 1;
	long long_6 = 1;
	char char_7 = 1;
	short_2 = short_1 * short_2;
	long_1 = long_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		double double_4 = 1;
		char char_2 = 1;
		double double_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_4 = 1;
		short short_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		char char_4 = 1;
		char char_5 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_8 = 1;
		unsigned int unsigned_int_7 = 1;
		short short_5 = 1;
		short short_6 = 1;
		int_1 = int_2;
		unsigned_int_1 = unsigned_int_1;
		int_4 = int_3 + int_3;
		int_5 = int_5;
		int_1 = int_4 * int_5;
		int_6 = int_3 + int_3;
		double_1 = double_1 * double_1;
		float_2 = float_1 * float_1;
		int_5 = int_1 + int_6;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		double_1 = double_1 + double_1;
		double_1 = double_1 + double_2;
		double_4 = double_3 + double_1;
		char_2 = char_1 * char_1;
		double_3 = double_5 + double_3;
		int_4 = int_6 * int_5;
		long_2 = long_3;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		short_1 = short_3 * short_3;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		int_3 = int_6 * int_4;
		char_3 = char_2 + char_2;
		double_3 = double_1 + double_4;
		char_1 = char_1 * char_1;
		double_3 = double_2 * double_5;
		float_1 = float_3 * float_4;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
		long_2 = long_4 + long_5;
		short_4 = short_4;
		v_colors_standard_get(int_6,int_3,long_5,char_1,char_3,double_6);

		float_6 = float_3 + float_5;
		short_2 = short_2;
		char_3 = char_4 + char_4;
		char_5 = char_4 + char_3;
		int_2 = int_1 * int_7;
		short_3 = short_1 + short_2;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
		float_3 = float_5 * float_1;
		char_2 = char_2 * char_1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
		int_6 = int_5 + int_1;
		int_7 = int_5 * int_1;
		long_3 = long_3;
		double_4 = double_5 + double_7;
		unsigned_int_2 = unsigned_int_6 + unsigned_int_6;
		int_8 = int_3;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_7;
		float_4 = float_6 * float_2;
		int_3 = int_8 * int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char char_6 = 1;
				short_1 = short_2 * short_5;
				long_6 = long_6 + long_4;
				float_5 = float_2;
				char_7 = char_1 + char_6;
				double_5 = double_4 * double_6;
				double_7 = double_2 * double_4;
			}
		}
		char_7 = v__add_default_keys(long_6);

		short_6 = short_6 * short_5;
		unsigned_int_4 = unsigned_int_6 * unsigned_int_3;
	}
	return double_3;
}
int main()
{
	int uni_para =949;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	double double_5 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_4 = 1;
	int int_11 = 1;
	char char_5 = 1;
	double double_6 = 1;
	int_1 = int_1;
	int_2 = int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_2;
	int_4 = int_4 + int_2;
	long_2 = long_1 * long_2;
	int_5 = int_4 + int_4;
	char_1 = char_1 + char_2;
	int_7 = int_6 * int_7;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	double_1 = double_3 + double_3;
	int_2 = int_5 * int_7;
	short_2 = short_1 + short_1;
	if(1)
	{
		long_2 = long_3;
	}
	if(1)
	{
		long_1 = long_2 * long_3;
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	float_2 = float_1 + float_1;
	double_1 = double_4 + double_3;
	char controller4vul_2700[2];
	fgets(controller4vul_2700 ,2 ,stdin);
	if( strcmp( controller4vul_2700, "Q") < 0)
	{
		int int_8 = 1;
		int int_10 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_7 = 1;
		if(1)
		{
			float float_3 = 1;
			float_2 = float_1 * float_3;
		}
		if(1)
		{
			int_6 = int_5 + int_1;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
		}
		int_8 = int_4 * int_4;
		if(1)
		{
			char_2 = char_1 + char_3;
		}
		int_7 = int_2 + int_5;
		if(1)
		{
			double_2 = double_4 * double_1;
		}
		short_1 = short_2 + short_1;
		if(1)
		{
			double_5 = double_5 * double_2;
		}
		double_5 = double_4;
		if(1)
		{
			int_1 = int_2 + int_4;
		}
		if(1)
		{
			int_3 = int_3;
		}
		int_10 = int_9 + int_6;
		if(1)
		{
			short_3 = short_3 + short_3;
		}
		unsigned_int_7 = unsigned_int_3 + unsigned_int_6;
		if(1)
		{
			unsigned_int_8 = unsigned_int_3 + unsigned_int_1;
		}
		char controller4vul_2701[2];
		fgets(controller4vul_2701 ,2 ,stdin);
		if( strcmp( controller4vul_2701, "u") > 0)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
			char controller4vul_2702[3];
			fgets(controller4vul_2702 ,3 ,stdin);
			if( strcmp( controller4vul_2702, "@+") > 0)
			{
				char char_4 = 1;
				char_1 = char_4 * char_1;
				int_10 = int_3 + int_7;
				char controller4vul_2703[2];
				fgets(controller4vul_2703 ,2 ,stdin);
				if( strcmp( controller4vul_2703, "T") < 0)
				{
					v_termpty_handle_buf(int_5,short_2,int_1,uni_para);

					short_3 = short_3;
				}
				if(1)
				{
					short_4 = short_1 + short_2;
				}
				if(1)
				{
					double_3 = double_2 * double_4;
				}
				if(1)
				{
					long_3 = long_1 + long_3;
				}
				if(1)
				{
					float_2 = float_1 * float_2;
				}
				if(1)
				{
					int_7 = int_8 + int_11;
				}
				if(1)
				{
					int_8 = int_10 + int_1;
				}
				if(1)
				{
					long long_4 = 1;
					long_4 = long_1 + long_1;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
				}
				if(1)
				{
					unsigned_int_7 = unsigned_int_3 * unsigned_int_1;
				}
				if(1)
				{
					long long_5 = 1;
					long_5 = long_5 * long_5;
				}
			}
			if(1)
			{
				int int_12 = 1;
				int_4 = int_4 * int_12;
			}
		}
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
	}
	if(1)
	{
		double_4 = double_3 + double_3;
	}
	if(1)
	{
		short_4 = short_4 + short_4;
	}
	if(1)
	{
		double_4 = double_4 + double_4;
		if(1)
		{
			unsigned_int_6 = unsigned_int_8 * unsigned_int_4;
		}
	}
	char_3 = char_5 + char_5;
	double_6 = double_5 + double_4;
	int_3 = int_9;
	double_4 = double_5 + double_4;
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		unsigned_int_9 = unsigned_int_1 + unsigned_int_6;
		char_3 = char_2 + char_5;
	}
	return int_11;
}

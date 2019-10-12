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

void v__termpty_shutdown( double parameter_1);
void v_termpty_text_scroll_rev_test( unsigned int parameter_1,unsigned int parameter_2);
double v__handle_esc_dcs( char parameter_1,int parameter_2,int parameter_3);
char v__handle_op_a( int parameter_1,char parameter_2,int parameter_3);
long v__termpty_ext_handle( unsigned int parameter_1,short parameter_2,char parameter_3);
short v__handle_esc_terminology( unsigned int parameter_1,unsigned int parameter_2,double parameter_3);
double v__handle_xterm_777_command( double parameter_1,char parameter_2,int parameter_3);
long v__smart_calculate_226( double parameter_1);
char v__smart_size( int parameter_1,int parameter_2,int parameter_3,char parameter_4);
void v_colors_term_init( unsigned int parameter_1,int parameter_2,unsigned int parameter_3);
void v_termio_config_update( unsigned int parameter_1);
int v__font_size_set( double parameter_1,int parameter_2);
void v_termio_font_size_set( char parameter_1,int parameter_2);
float v__handle_xterm_50_command( unsigned int parameter_1,char parameter_2,int parameter_3);
short v__eina_unicode_to_hex( short parameter_1);
double v__xterm_parse_color( double parameter_1,long parameter_2,unsigned int parameter_3,long parameter_4,int parameter_5);
char v__xterm_arg_get( unsigned int parameter_1);
float v__handle_esc_xterm( char parameter_1,short parameter_2,char parameter_3);
void v_termpty_cells_set_content( float parameter_1,double parameter_2,short parameter_3,int parameter_4);
unsigned int v__handle_esc_csi_decera( double parameter_1,short parameter_2);
void v_termpty_cells_att_fill_preserve_colors( float parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4);
float v__clean_up_rect_coordinates( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
void v__handle_esc_csi_decfra( long parameter_1,short parameter_2);
float v__handle_esc_csi_decslrm( char parameter_1,double parameter_2);
int v__handle_esc_csi_decstbm( int parameter_1,int parameter_2);
char v__handle_esc_csi_decscusr( double parameter_1,char parameter_2);
float v__handle_esc_csi_dsr( short parameter_1,float parameter_2);
void v__handle_esc_csi_truecolor_cmyk( double parameter_1,int parameter_2);
void v__handle_esc_csi_truecolor_cmy( unsigned int parameter_1,short parameter_2);
int v__approximate_truecolor_rgb( long parameter_1,int parameter_2,int parameter_3,int parameter_4);
double v__csi_truecolor_arg_get();
long v__handle_esc_csi_truecolor_rgb( float parameter_1,double parameter_2);
int v__handle_esc_csi_color_set( double parameter_1,int parameter_2);
void v_termpty_cursor_copy( unsigned int parameter_1,float parameter_2);
int v__switch_to_alternative_screen( unsigned int parameter_1,int parameter_2);
long v__move_cursor_to_origin();
unsigned int v__pty_size( int parameter_1);
void v__limit_coord( float parameter_1);
short v__check_screen_info( float parameter_1,char parameter_2);
long v__termpty_line_rewrap( double parameter_1,float parameter_2,int parameter_3,float parameter_4,char parameter_5);
long v__backlog_remove_latest_nolock( int parameter_1);
void v_termpty_save_extract( short parameter_1);
double v__termpty_line_is_empty( float parameter_1,char parameter_2);
void v_termpty_screen_swap( int parameter_1);
void v_termpty_resize( double parameter_1,int parameter_2,int parameter_3);
void v_termio_win_get( float parameter_1);
unsigned int v__handle_esc_csi_reset_mode( int parameter_1,double parameter_2,unsigned int parameter_3);
float v__handle_esc_csi_cursor_pos_set( float parameter_1,char parameter_2,double parameter_3);
void v_termpty_text_scroll_rev( double parameter_1,unsigned int parameter_2);
void v_termpty_clear_line( short parameter_1,int parameter_2,int parameter_3);
void v_termpty_clear_screen( unsigned int parameter_1,char parameter_2);
void v_termpty_cell_codepoint_att_fill( unsigned int parameter_1,double parameter_2,int parameter_3,float parameter_4,int parameter_5);
unsigned int v__termpty_charset_trans( float parameter_1,float parameter_2);
void v_termio_content_change( unsigned int parameter_1,long parameter_2,double parameter_3,int parameter_4);
void v_termpty_text_append( char parameter_1,short parameter_2,int parameter_3);
short v__csi_arg_get( short parameter_1);
int v__handle_esc_csi( long parameter_1,short parameter_2,int parameter_3,int uni_para);
void v__safechar( int parameter_1);
unsigned int v__handle_esc( float parameter_1,float parameter_2,unsigned int parameter_3,int uni_para);
void v_termpty_cell_fill( int parameter_1,long parameter_2,float parameter_3,int parameter_4);
void v_termpty_cells_fill( char parameter_1,long parameter_2,float parameter_3,int parameter_4);
void v_termpty_cells_clear( short parameter_1,char parameter_2,int parameter_3);
long v__tooltip_del(short parameter_2);
long v__tooltip_content(int parameter_2,char parameter_3);
void v_MD5Final( float parameter_1,unsigned int parameter_2);
void v_MD5Transform( float parameter_1,unsigned int parameter_2);
void v_byteReverse( short parameter_1,float parameter_2);
void v_MD5Update( unsigned int parameter_1,unsigned int parameter_2,char parameter_3);
void v_MD5Init( short parameter_1);
void v_gravatar_tooltip( unsigned int parameter_1,short parameter_2,char parameter_3);
double v__cb_link_drag_done(float parameter_2);
char v__cb_link_drag_accept(long parameter_2,float parameter_3);
short v__cb_link_drag_move(float parameter_2,float parameter_3,double parameter_4,double parameter_5);
float v__cb_link_icon_new(short parameter_2,short parameter_3,long parameter_4);
long v__cb_link_move(short parameter_2,long parameter_3);
short v__cb_link_up_delay();
float v__cb_link_up(unsigned int parameter_2,double parameter_3);
void v_term_focus( short parameter_1);
short v__term_is_focused( long parameter_1);
void v_term_unfocus( float parameter_1);
short v__cb_ctxp_del(double parameter_2,int parameter_3);
char v__cb_ctxp_dismissed(double parameter_2);
short v__cb_ctxp_link_copy(float parameter_2,int uni_para);
float v__screen_visual_bounds( double parameter_1);
short v__draw_cell( unsigned int parameter_1,char parameter_2,unsigned int parameter_3,unsigned int parameter_4);
short v__draw_line( long parameter_1,long parameter_2,short parameter_3,int parameter_4,int parameter_5);
short v_termpty_backlog_length( short parameter_1);
float v_termio_pty_get( int parameter_1);
unsigned int v_termio_textgrid_get( float parameter_1);
long v_miniview_colors_get( float parameter_1,char parameter_2);
long v__deferred_renderer();
void v__queue_render( float parameter_1);
void v_miniview_redraw( float parameter_1);
double v__block_obj_del( char parameter_1);
int v__termpty_is_dblwidth_slow_get( short parameter_1,int parameter_2);
void v__termpty_is_dblwidth_get( float parameter_1,int parameter_2);
int v_term_preedit_str_get( short parameter_1);
int v_media_get( char parameter_1);
double v__smart_media_clicked(unsigned int parameter_2);
char v_media_control_get( unsigned int parameter_1);
float v__smart_media_stop(short parameter_2);
float v__smart_media_pause(double parameter_2);
long v__smart_media_play(double parameter_2);
void v__smart_media_del(unsigned int parameter_2,short parameter_3);
void v_media_visualize_set( unsigned int parameter_1,long parameter_2);
void v_media_mute_set( double parameter_1,short parameter_2);
void v_media_volume_set( float parameter_1,double parameter_2);
float v__cb_media_vol(char parameter_2,char parameter_3,char parameter_4);
long v__cb_media_pos(double parameter_2,unsigned int parameter_3,long parameter_4);
float v__cb_media_pos_drag_stop(double parameter_2,float parameter_3,double parameter_4);
long v__cb_media_pos_drag_start(int parameter_2,float parameter_3,long parameter_4);
void v_media_stop( short parameter_1);
float v__cb_media_stop(long parameter_2,int parameter_3,float parameter_4);
char v__cb_media_pause(char parameter_2,char parameter_3,long parameter_4);
void v_media_play_set( long parameter_1,int parameter_2);
int v__cb_media_play(double parameter_2,unsigned int parameter_3,char parameter_4);
void v_media_position_set( double parameter_1,double parameter_2);
long v__cb_mov_ref(float parameter_2);
void v__cb_mov_progress(char parameter_2);
char v__cb_mov_restart();
int v__cb_mov_decode_stop(unsigned int parameter_2);
float v__cb_mov_len_change(double parameter_2);
void v__cb_mov_frame_resize(double parameter_2);
long v__cb_mov_frame_decode(char parameter_2);
short v__type_mov_init( double parameter_1);
long v__cb_edje_preloaded(float parameter_2,float parameter_3,int parameter_4);
char v__type_edje_init();
void v__type_scale_init( float parameter_1);
float v__cb_img_frame();
float v__type_img_anim_handle();
long v__cb_img_preloaded(float parameter_2,short parameter_3);
unsigned int v__type_img_init( short parameter_1);
char v__url_compl_cb(int parameter_2,int uni_para);
long v__url_prog_cb(int parameter_2);
short v__type_thumb_calc( unsigned int parameter_1,long parameter_2,long parameter_3,unsigned int parameter_4,unsigned int parameter_5);
double v__type_mov_calc( short parameter_1,short parameter_2,short parameter_3,unsigned int parameter_4,int parameter_5);
int v__type_edje_calc( short parameter_1,double parameter_2,long parameter_3,short parameter_4,long parameter_5);
unsigned int v__type_img_calc( float parameter_1,short parameter_2,char parameter_3,char parameter_4,long parameter_5);
char v__cb_scale_preloaded(unsigned int parameter_2,float parameter_3);
unsigned int v__type_scale_calc( long parameter_1,short parameter_2,double parameter_3,int parameter_4,double parameter_5,int uni_para);
void v__unsmooth_timeout(int uni_para);
char v__smooth_handler( double parameter_1,int uni_para);
void v__smart_calculate( char parameter_1,int uni_para);
char v__smart_move( short parameter_1,char parameter_2,long parameter_3);
double v__smart_resize( short parameter_1,char parameter_2,unsigned int parameter_3);
double v__smart_del( long parameter_1);
long v__smart_add( float parameter_1);
float v__smart_init();
int v_media_add( char parameter_1,unsigned int parameter_2,short parameter_3,int parameter_4,float parameter_5,int uni_para);
short v__block_media_activate( char parameter_1,char parameter_2,int uni_para);
short v__block_edje_message_cb(long parameter_2,short parameter_3,int parameter_4);
void v_termpty_write( unsigned int parameter_1,char parameter_2,int parameter_3);
unsigned int v__block_edje_signal_cb(long parameter_2,char parameter_3,char parameter_4);
void v_termpty_block_chid_update( int parameter_1,float parameter_2);
void v__block_edje_cmds( unsigned int parameter_1,long parameter_2,float parameter_3,float parameter_4);
void v_homedir_get( char parameter_1,int parameter_2);
float v__block_edje_activate( long parameter_1,short parameter_2);
float v__block_activate( long parameter_1,char parameter_2,int uni_para);
double v_termpty_block_get( float parameter_1,int parameter_2);
int v_termpty_block_id_get( float parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( unsigned int parameter_1,int parameter_2);
double v__smart_apply( int parameter_1,int uni_para);
int v__smart_cb_change(int uni_para);
double v__smart_update_queue( float parameter_1,char parameter_2,int uni_para);
unsigned int v__lost_selection_reset_job();
int v__lost_selection(double parameter_2,int uni_para);
double v__take_selection_text( unsigned int parameter_1,long parameter_2,int parameter_3,int uni_para);
char v__cb_ctxp_link_content_copy(long parameter_2);
void v_ty_sb_free( float parameter_1);
int v_ty_sb_steal_buf( double parameter_1);
int v_codepoint_to_utf8( long parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( double parameter_1);
int v_ty_sb_add( double parameter_1,char parameter_2,double parameter_3);
unsigned int v__termpty_cellrow_from_beacon_get( float parameter_1,int parameter_2,long parameter_3);
long v_termpty_cellrow_get( long parameter_1,int parameter_2,double parameter_3);
long v_termio_selection_get( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,long parameter_6,long parameter_7);
char v__cb_ctxp_link_open(char parameter_2);
char v__should_inline( int parameter_1);
unsigned int v_link_is_email();
void v_link_is_protocol( double parameter_1);
int v_link_is_url( unsigned int parameter_1);
double v__activate_link( short parameter_1,short parameter_2);
int v__cb_ctxp_link_preview(short parameter_2);
int v__is_fmt( double parameter_1,int parameter_2);
float v_media_src_type_get( long parameter_1);
double v__mouse_in_selection( short parameter_1,int parameter_2,int parameter_3);
float v__smart_xy_to_cursor( unsigned int parameter_1,double parameter_2,int parameter_3,int parameter_4,int parameter_5);
unsigned int v__cb_link_down(long parameter_2,long parameter_3,int uni_para);
double v_main_term_popup_exists( char parameter_1);
double v__update_link( unsigned int parameter_1,float parameter_2,long parameter_3,short parameter_4,int uni_para);
int v__remove_links( long parameter_1,long parameter_2,int uni_para);
int v__sel_set( char parameter_1,double parameter_2);
int v_termio_scroll_get();
void v_miniview_position_offset( unsigned int parameter_1,int parameter_2,char parameter_3);
double v_term_miniview_get( char parameter_1);
void v_termio_scroll( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
void v_termpty_save_new( double parameter_1,int parameter_2);
unsigned int v_termpty_save_expand( int parameter_1,short parameter_2,float parameter_3);
short v__termpty_cell_is_empty( char parameter_1);
char v_termpty_line_length( double parameter_1,int parameter_2);
char v_verify_beacon( double parameter_1,int parameter_2);
void v_termpty_text_save_top( long parameter_1,double parameter_2,float parameter_3);
void v_termpty_text_scroll( long parameter_1,char parameter_2,int uni_para);
void v_termpty_text_scroll_test( float parameter_1,short parameter_2,int uni_para);
char v__cursor_to_start_of_line();
char v__tab_forward( long parameter_1,int parameter_2);
char v__handle_cursor_control( float parameter_1,float parameter_2,int uni_para);
int v_termpty_handle_seq( float parameter_1,char parameter_2,unsigned int parameter_3,int uni_para);
void v_termpty_handle_buf( unsigned int parameter_1,double parameter_2,int parameter_3,int uni_para);
void v_theme_reload( float parameter_1);
int v_theme_reload_cb(double parameter_2,long parameter_3,short parameter_4);
void v_theme_auto_reload_enable( int parameter_1);
void v__cursor_shape_to_group_name( float parameter_1);
double v_config_theme_path_default_get();
short v_theme_path_get();
unsigned int v_config_theme_path_get( double parameter_1);
char v_theme_apply( int parameter_1,short parameter_2,int parameter_3);
void v_termio_set_cursor_shape( float parameter_1,float parameter_2);
void v_termpty_clear_tabs_on_screen( short parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( double parameter_1,double parameter_2);
long v__ts_free();
void v_termpty_save_free( short parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( short parameter_1);
void v_termpty_reset_att( short parameter_1);
short v_termio_config_get( int parameter_1);
void v_termpty_reset_state();
void v_termpty_resize_tabs( char parameter_1,int parameter_2,int parameter_3);
double v__termpty_init( unsigned int parameter_1);
void v__add_default_keys();
void v_colors_standard_get( int parameter_1,int parameter_2,unsigned int parameter_3,short parameter_4,short parameter_5,int parameter_6);
float v_config_new();
void v__termpty_shutdown( double parameter_1)
{
	int int_1 = 1;
	int_1 = int_1 * int_1;
}
void v_termpty_text_scroll_rev_test( unsigned int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		v_termpty_text_scroll_rev(double_1,unsigned_int_1);

		double_1 = double_1;
		double_2 = double_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
}
double v__handle_esc_dcs( char parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
		char char_2 = 1;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					float float_1 = 1;
					float_1 = float_1 * float_1;
				}
				if(1)
				{
					short short_1 = 1;
					short short_2 = 1;
					v__safechar(int_1);

					short_1 = short_2;
				}
			}
		}
		if(1)
		{
			char_1 = char_2;
		}
		if(1)
		{
			char_3 = char_1 + char_2;
		}
		if(1)
		{
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_1;
		}
		if(1)
		{
			char_1 = char_2 + char_1;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			v_termpty_write(unsigned_int_1,char_3,int_2);

			double_1 = double_1;
		}
	}
	return double_2;
}
char v__handle_op_a( int parameter_1,char parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_2 = char_1 * char_1;
	int_3 = int_1 * int_2;
	return char_2;
}
long v__termpty_ext_handle( unsigned int parameter_1,short parameter_2,char parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	char_1 = v__handle_op_a(int_1,char_1,int_1);

	int_2 = int_2;
	float_3 = float_1 + float_2;
	return long_1;
}
short v__handle_esc_terminology( unsigned int parameter_1,unsigned int parameter_2,double parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short_1 = v_termio_config_get(int_1);

	long_1 = v__termpty_ext_handle(unsigned_int_1,short_1,char_1);

	double_2 = double_1 * double_1;
	return short_2;
}
double v__handle_xterm_777_command( double parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		long_2 = long_3;
	}
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	double_2 = double_3 + double_2;
	long_3 = long_3 * long_1;
	double_3 = double_3 + double_3;
	if(1)
	{
		long_1 = long_1 * long_4;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	double_4 = double_1 * double_1;
	double_4 = double_3 + double_1;
	long_4 = long_3 + long_1;
	int_1 = int_1 + int_2;
	return double_5;
}
long v__smart_calculate_226( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1;
	float_3 = float_1 * float_2;
	int_2 = int_1 * int_1;
	float_4 = float_3;
	long_2 = long_1 * long_1;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	return long_1;
}
char v__smart_size( int parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_3 = 1;
	long long_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	long long_4 = 1;
	short short_4 = 1;
	int_1 = int_1 + int_2;
	long_2 = long_1 * long_2;
	if(1)
	{
		short short_2 = 1;
		int_1 = v__sel_set(char_1,double_1);

		short_3 = short_1 * short_2;
		v_termpty_resize(double_1,int_1,int_2);

		short_1 = short_3 * short_1;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	long_2 = long_2 * long_1;
	long_3 = v__smart_calculate_226(double_1);

	int_3 = int_3 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_1;
	double_3 = double_2 + double_2;
	short_3 = short_1 + short_3;
	if(1)
	{
		int_1 = int_3 * int_3;
	}
	int_3 = int_3 * int_4;
	double_4 = double_2 + double_1;
	long_2 = long_3 * long_1;
	long_4 = long_4 * long_4;
	short_4 = short_4;
	double_4 = v__smart_apply(int_4,-1 );

	int_4 = int_2;
	return char_1;
}
void v_colors_term_init( unsigned int parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_6 = 1;
	int_3 = int_1 + int_2;
	double_1 = double_1 + double_1;
	char_1 = char_1 + char_1;
	double_3 = double_2 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			long long_4 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_2 = 1;
			long_1 = long_1;
			long_4 = long_2 * long_3;
			long_2 = long_5 + long_2;
			unsigned_int_1 = unsigned_int_2;
		}
		if(1)
		{
			int_3 = int_4 * int_2;
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				short_1 = short_1 + short_1;
				double_1 = double_3 * double_1;
				short_1 = short_2 * short_3;
				int_2 = int_2 + int_5;
				int_5 = int_2 * int_5;
			}
		}
		int_2 = int_3 + int_2;
		double_4 = double_4 + double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			double_6 = double_2 + double_5;
			if(1)
			{
				int_1 = int_6 + int_4;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char controller_6[3];
		fgets(controller_6 ,3 ,stdin);
		if( strcmp( controller_6, "k!") > 0)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1;
			if(1)
			{
				int_6 = int_3 + int_2;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			short short_4 = 1;
			short short_5 = 1;
			int_2 = int_6 * int_4;
			char_3 = char_1 * char_2;
			double_6 = double_5;
			long_2 = long_1 * long_3;
			short_4 = short_4 * short_5;
		}
		int_1 = int_5 + int_4;
	}
}
void v_termio_config_update( unsigned int parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_6 = 1;
	short_1 = short_1 * short_1;
	char_2 = char_1 * char_1;
	long_1 = long_1 + long_1;
	char_2 = char_1 * char_1;
	if(1)
	{
		double_1 = double_2;
	}
	short_2 = short_1 * short_2;
	if(1)
	{
		char_1 = v__smart_size(int_1,int_2,int_3,char_2);

		unsigned_int_1 = unsigned_int_2;
		double_4 = double_2 + double_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_5 = double_5;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	double_2 = double_3;
	float_2 = float_1 * float_2;
	char_2 = char_1;
	float_5 = float_3 + float_4;
	double_3 = double_1 + double_6;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		v_termio_set_cursor_shape(float_4,float_4);

		short_4 = short_3 + short_2;
	}
	if(1)
	{
		long_3 = long_2 * long_2;
	}
	v_termpty_backlog_size_set(double_4,double_7);

	v_colors_term_init(unsigned_int_4,int_3,unsigned_int_4);

	short_1 = short_2 * short_1;
	double_8 = double_3;
	char_1 = char_1 + char_1;
	float_2 = float_5 + float_6;
	long_3 = long_2 * long_2;
}
int v__font_size_set( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int_2 = int_1 + int_1;
	v_termio_config_update(unsigned_int_1);

	char_1 = char_2;
	double_1 = double_1 * double_2;
	short_2 = short_1 * short_2;
	if(1)
	{
		short short_3 = 1;
		short_2 = short_2 + short_3;
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = int_1 * int_3;
	}
	if(1)
	{
		short short_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		int int_5 = 1;
		short_4 = short_2;
		float_2 = float_1 + float_1;
		char_3 = char_1 + char_2;
		double_1 = double_3 * double_1;
		int_4 = int_5;
		char_2 = char_2 * char_3;
	}
	return int_4;
}
void v_termio_font_size_set( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v__font_size_set(double_1,int_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
float v__handle_xterm_50_command( unsigned int parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	return float_1;
	v_termio_font_size_set(char_1,int_1);

}
short v__eina_unicode_to_hex( short parameter_1)
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
double v__xterm_parse_color( double parameter_1,long parameter_2,unsigned int parameter_3,long parameter_4,int parameter_5)
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
	float float_4 = 1;
	char char_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	float float_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	int int_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int_1 = int_2;
	short_2 = short_1 + short_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	float_3 = float_1 + float_2;
	float_4 = float_3;
	if(1)
	{
		char char_1 = 1;
		int int_3 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		float float_6 = 1;
		char_2 = char_1 * char_2;
		if(1)
		{
			int_1 = int_3 + int_1;
		}
		int_1 = int_2 * int_4;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
			unsigned_int_4 = unsigned_int_3;
		}
		double_1 = double_2;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
		if(1)
		{
			float_4 = float_3;
		}
		float_4 = float_4 + float_5;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
		if(1)
		{
			long_1 = long_2;
		}
		double_3 = double_1;
		int_4 = int_5;
		if(1)
		{
			int_3 = int_2 * int_3;
		}
		float_6 = float_2 + float_5;
		long_2 = long_2 + long_2;
		if(1)
		{
			short_1 = short_3;
		}
		int_6 = int_2 * int_6;
	}
	if(1)
	{
		char char_3 = 1;
		double double_4 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		short_1 = short_1 * short_3;
		if(1)
		{
			char_3 = char_2 * char_3;
		}
		unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
		int_4 = int_6 * int_1;
		if(1)
		{
			float float_7 = 1;
			float_5 = float_7 + float_2;
		}
		double_1 = double_4 * double_1;
		char_3 = char_2 * char_4;
		if(1)
		{
			long_1 = long_2;
		}
		short_1 = v__eina_unicode_to_hex(short_4);

		unsigned_int_7 = unsigned_int_1 + unsigned_int_6;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	}
	short_5 = short_1;
	return double_3;
}
char v__xterm_arg_get( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_2 = 1;
	int_2 = int_1 * int_1;
	short_2 = short_1 * short_1;
	short_1 = short_3 + short_3;
	char_1 = char_1 + char_1;
	short_3 = short_3 + short_4;
	short_1 = short_5 * short_1;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	short_2 = short_1;
	long_3 = long_1 + long_2;
	double_3 = double_2 * double_3;
	int_2 = int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	short_1 = short_3 + short_4;
	double_2 = double_2 + double_1;
	float_3 = float_1 + float_2;
	char_1 = char_1 + char_1;
	int_3 = int_3 + int_3;
	double_5 = double_4 + double_3;
	float_1 = float_2 + float_1;
	float_4 = float_4 + float_5;
	return char_2;
}
float v__handle_esc_xterm( char parameter_1,short parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	char char_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	short short_7 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_6 = 1;
	short_3 = short_1 + short_2;
	v_termpty_write(unsigned_int_1,char_1,int_1);

	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_1 + double_1;
	long_2 = long_1 + long_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	}
	char_3 = char_2 + char_1;
	char_2 = v__xterm_arg_get(unsigned_int_1);

	float_3 = v__handle_xterm_50_command(unsigned_int_5,char_4,int_1);

	double_2 = double_1 * double_1;
	double_3 = double_2 * double_1;
	if(1)
	{
		long_3 = long_1;
	}
	long_2 = long_4 + long_3;
	if(1)
	{
		char_1 = char_3;
	}
	double_2 = double_3 + double_3;
	short_4 = short_4 * short_2;
	short_2 = short_5 * short_3;
	int_2 = int_1;
	int_1 = int_3 * int_2;
	if(1)
	{
		float_3 = float_4 + float_1;
	}
	if(1)
	{
		short short_6 = 1;
		short_3 = short_5 + short_4;
		short_1 = short_3 + short_6;
		short_7 = short_7 + short_6;
	}
	if(1)
	{
		double_1 = double_4;
	}
	if(1)
	{
		int_3 = int_1;
	}
	int_2 = int_2;
	double_3 = double_3;
	if(1)
	{
		double_3 = v__xterm_parse_color(double_3,long_2,unsigned_int_5,long_3,int_1);

		unsigned_int_1 = v_termio_textgrid_get(float_4);

		unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
	}
	if(1)
	{
		long long_5 = 1;
		double_5 = v__handle_xterm_777_command(double_6,char_1,int_1);

		long_1 = long_4 + long_5;
	}
	if(1)
	{
		short_1 = short_2 * short_2;
		short_3 = short_7 + short_1;
	}
	if(1)
	{
		long_1 = long_6 + long_3;
	}
	if(1)
	{
		long_6 = long_4;
	}
	short_3 = v_termio_config_get(int_1);

	double_1 = double_3 + double_4;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
	return float_2;
}
void v_termpty_cells_set_content( float parameter_1,double parameter_2,short parameter_3,int parameter_4)
{
	short short_1 = 1;
	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_1 = char_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
}
unsigned int v__handle_esc_csi_decera( double parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = v__csi_arg_get(short_1);

	long_1 = long_1;
	v_termpty_cells_set_content(float_1,double_1,short_1,int_1);

	int_2 = int_1 * int_1;
	short_2 = short_3;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
	}
	float_1 = v__clean_up_rect_coordinates(char_1,int_1,int_3,int_1,int_3);

	char_1 = char_2 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		int_3 = int_3;
		char_3 = char_2 + char_2;
	}
	return unsigned_int_3;
}
void v_termpty_cells_att_fill_preserve_colors( float parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long_1 = long_1 * long_2;
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_2 = int_1 + int_2;
		int_2 = int_2 + int_2;
		float_2 = float_1 + float_1;
		if(1)
		{
			float float_3 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			float_3 = float_3 * float_1;
			double_1 = double_1 + double_1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
			char_2 = char_2 + char_2;
			int_1 = int_1;
		}
	}
}
float v__clean_up_rect_coordinates( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_5 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_2 + double_1;
	float_1 = float_1;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	double_1 = double_2 + double_3;
	char_1 = char_1 * char_1;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
	}
	if(1)
	{
		double_1 = double_2;
		if(1)
		{
			char_1 = char_1;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
	}
	if(1)
	{
		float float_3 = 1;
		float_4 = float_1 + float_3;
	}
	if(1)
	{
		float_1 = float_4 + float_4;
		if(1)
		{
			int int_3 = 1;
			int_1 = int_3 * int_4;
		}
	}
	short_2 = short_3;
	if(1)
	{
		unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
	}
	char controller_11[2];
	fgets(controller_11 ,2 ,stdin);
	if( strcmp( controller_11, "[") < 0)
	{
	}
	double_2 = double_3;
	int_5 = int_2 * int_1;
	int_4 = int_5 * int_5;
	int_6 = int_4;
	return float_5;
}
void v__handle_esc_csi_decfra( long parameter_1,short parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1 * int_1;
	float_1 = v__clean_up_rect_coordinates(char_1,int_1,int_2,int_1,int_1);

	v_termpty_cells_att_fill_preserve_colors(float_1,unsigned_int_1,long_1,int_3);

	char_3 = char_1 + char_2;
	int_4 = int_2 * int_2;
	double_1 = double_1 * double_1;
	char_2 = char_1 * char_4;
	char_5 = char_1 + char_2;
	short_1 = v__csi_arg_get(short_2);

	int_4 = int_4 + int_4;
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_1 = double_1 + double_1;
		double_3 = double_2 * double_1;
	}
}
float v__handle_esc_csi_decslrm( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_4 = 1;
	int_1 = int_1 + int_1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_2;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	float_2 = float_1 + float_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "9") < 0)
	{
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	short_2 = short_1 + short_2;
	double_3 = double_2 + double_2;
	long_4 = v__move_cursor_to_origin();

	long_4 = long_1 * long_2;
	short_1 = v__csi_arg_get(short_1);

	long_1 = long_5 * long_4;
	int_4 = int_2;
	return float_1;
}
int v__handle_esc_csi_decstbm( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	long long_4 = 1;
	double_1 = double_1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2 * int_3;
	float_1 = float_1 + float_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	short_1 = v__csi_arg_get(short_1);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	long_2 = long_1 + long_2;
	long_1 = long_3 + long_2;
	double_2 = double_1;
	int_1 = int_3 + int_3;
	return int_3;
	long_4 = v__move_cursor_to_origin();

}
char v__handle_esc_csi_decscusr( double parameter_1,char parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_1 = 1;
	short short_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char_1 = char_1 + char_1;
	short_1 = short_1 + short_1;
	float_1 = float_1 + float_2;
	int_2 = int_1 + int_1;
	v_termio_set_cursor_shape(float_3,float_2);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	char_2 = char_2 * char_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	short_2 = v__csi_arg_get(short_1);

	unsigned_int_4 = unsigned_int_6 * unsigned_int_7;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_6;
	short_3 = short_1;
	int_3 = int_3;
	char_2 = char_3 * char_2;
	unsigned_int_3 = unsigned_int_6 + unsigned_int_4;
	return char_1;
}
float v__handle_esc_csi_dsr( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short_1 = v__csi_arg_get(short_2);

		int_3 = int_1 * int_2;
		long_2 = long_1 * long_1;
		double_3 = double_3 * double_3;
		double_1 = double_2 + double_3;
		double_2 = double_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		int_1 = int_2 + int_4;
	}
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_6 = 1;
		v_termpty_write(unsigned_int_1,char_1,int_4);

		double_3 = double_4 + double_5;
		short_2 = short_1 * short_2;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
		int_2 = int_4 + int_1;
		double_6 = double_1;
		double_3 = double_4 + double_4;
	}
	return float_1;
}
void v__handle_esc_csi_truecolor_cmyk( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	double_2 = double_1 + double_1;
	int_1 = v__approximate_truecolor_rgb(long_1,int_1,int_2,int_3);

	double_2 = double_2 * double_3;
	double_4 = double_2 + double_3;
	long_1 = long_1 * long_1;
	double_1 = double_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	short_1 = short_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	double_2 = v__csi_truecolor_arg_get();

	int_2 = int_3 * int_4;
}
void v__handle_esc_csi_truecolor_cmy( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_2;
	double_1 = v__csi_truecolor_arg_get();

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
	}
	float_3 = float_1 * float_2;
	float_2 = float_3 + float_2;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	int_1 = v__approximate_truecolor_rgb(long_1,int_2,int_1,int_2);

}
int v__approximate_truecolor_rgb( long parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_4 = 1;
			int_1 = int_4 * int_1;
		}
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
		}
	}
	return int_1;
	unsigned_int_2 = v_termio_textgrid_get(float_1);

}
double v__csi_truecolor_arg_get()
{
	double double_1 = 1;
	return double_1;
}
long v__handle_esc_csi_truecolor_rgb( float parameter_1,double parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	int_1 = v__approximate_truecolor_rgb(long_1,int_2,int_3,int_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 + char_2;
	double_1 = double_1 + double_1;
	float_3 = float_1 * float_2;
	float_4 = float_1 * float_2;
	if(1)
	{
		char char_4 = 1;
		float_3 = float_4 + float_1;
		double_1 = double_1 * double_1;
		double_1 = v__csi_truecolor_arg_get();

		char_1 = char_3 + char_4;
	}
	if(1)
	{
	}
	return long_2;
}
int v__handle_esc_csi_color_set( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double_1 = double_2;
	long_1 = v__handle_esc_csi_truecolor_rgb(float_1,double_1);

	v__handle_esc_csi_truecolor_cmy(unsigned_int_1,short_1);

	short_1 = short_2 * short_3;
	return int_1;
	short_3 = v__csi_arg_get(short_1);

	v_termpty_reset_att(short_3);

	v__handle_esc_csi_truecolor_cmyk(double_3,int_2);

}
void v_termpty_cursor_copy( unsigned int parameter_1,float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
		double double_1 = 1;
		float_2 = float_1 * float_2;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char_1 = char_2;
		char_5 = char_3 * char_4;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		float_2 = float_1 * float_1;
	}
}
int v__switch_to_alternative_screen( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "4x") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		v_termpty_screen_swap(int_1);

		long_1 = long_1 * long_2;
	}
	return int_1;
}
long v__move_cursor_to_origin()
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		char char_1 = 1;
		long_3 = long_1 + long_2;
		int_2 = int_1 * int_1;
		char_1 = char_1;
		long_3 = long_2 + long_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3 + int_1;
		int_3 = int_2 * int_1;
	}
	return long_1;
}
unsigned int v__pty_size( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 * int_2;
	float_1 = float_1 * float_1;
	float_2 = float_2 + float_3;
	char_1 = char_1 + char_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	}
	return unsigned_int_4;
}
void v__limit_coord( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_2 = long_1 * long_2;
	int_2 = int_1 * int_1;
	long_4 = long_3 + long_4;
	char_2 = char_1 + char_2;
	char_3 = char_2 * char_2;
	double_1 = double_1 * double_1;
	float_2 = float_1 * float_1;
	long_1 = long_1;
}
short v__check_screen_info( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	if(1)
	{
		double double_2 = 1;
		short_2 = short_1 * short_1;
		v_termpty_text_save_top(long_1,double_1,float_1);

		char_1 = char_1 * char_1;
		v_termpty_cells_clear(short_1,char_1,int_1);

		double_2 = double_1;
		double_2 = double_2 + double_2;
		short_2 = short_2 * short_2;
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_1 * char_2;
		}
		long_1 = long_1 * long_1;
	}
	return short_2;
}
long v__termpty_line_rewrap( double parameter_1,float parameter_2,int parameter_3,float parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_2;
	double_3 = double_1 + double_2;
	short_1 = v__check_screen_info(float_1,char_1);

	double_2 = double_2 * double_4;
	return long_1;
}
long v__backlog_remove_latest_nolock( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	char_1 = v_verify_beacon(double_1,int_1);

	short_1 = short_1 + short_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		double_2 = double_2;
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	long_1 = long_1;
	v_termpty_save_free(short_3);

	double_1 = double_2 + double_3;
	int_4 = int_2 + int_3;
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
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int_1 = int_1 * int_1;
			char_1 = char_1;
			int_1 = int_1 * int_1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			double_2 = double_1 * double_2;
			if(1)
			{
			}
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			long_2 = long_1 + long_1;
			double_2 = double_2 + double_2;
			if(1)
			{
				int int_2 = 1;
				int int_3 = 1;
				int_2 = int_3;
			}
		}
	}
}
double v__termpty_line_is_empty( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short_1 = v__termpty_cell_is_empty(char_1);

	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
		if(1)
		{
		}
	}
	return double_1;
}
void v_termpty_screen_swap( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_2;
	double_2 = double_1 + double_1;
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_3;
	double_2 = double_2 * double_1;
	int_1 = int_1 + int_1;
	double_2 = double_1 + double_1;
	double_1 = double_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_4;
	}
}
void v_termpty_resize( double parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_3 = 1;
	double double_5 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	short short_1 = 1;
	int int_6 = 1;
	long long_5 = 1;
	float float_6 = 1;
	char char_7 = 1;
	double double_8 = 1;
	int int_7 = 1;
	float float_8 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_9 = 1;
	long long_6 = 1;
	long long_7 = 1;
	float float_9 = 1;
	unsigned int unsigned_int_7 = 1;
	int_1 = int_2;
	char_1 = char_1 + char_2;
	char_3 = char_1 * char_3;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	if(1)
	{
		v_termpty_backlog_lock();

		char_5 = char_3 + char_4;
		float_1 = float_1 + float_2;
	}
	int_3 = int_2 * int_2;
	if(1)
	{
		double_4 = double_3 * double_2;
	}
	long_1 = long_2;
	long_2 = v__backlog_remove_latest_nolock(int_3);

	float_1 = float_1;
	if(1)
	{
		char_2 = v_termpty_line_length(double_1,int_4);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	double_3 = double_3;
	char_6 = v_verify_beacon(double_2,int_1);

	char_2 = char_2 * char_3;
	v_termpty_screen_swap(int_3);

	int_2 = int_3 * int_1;
	float_4 = float_2 + float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_3 * long_1;
		if(1)
		{
			double_3 = double_5;
			float_5 = float_3 + float_2;
		}
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		double_3 = double_2 + double_6;
	}
	short_1 = short_1;
	if(1)
	{
		int int_5 = 1;
		int_1 = int_4 * int_4;
		int_5 = int_5 * int_1;
		double_4 = double_1 + double_5;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			double double_7 = 1;
			long long_4 = 1;
			int_3 = int_4;
			long_3 = long_3 * long_3;
			unsigned_int_4 = unsigned_int_4;
			char_2 = char_4 * char_3;
			if(1)
			{
				int_2 = int_2 * int_4;
			}
			v__limit_coord(float_3);

			unsigned_int_3 = v__pty_size(int_6);

			int_4 = int_4 + int_2;
			double_4 = double_7 + double_7;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
			int_1 = int_1;
			float_3 = float_4 * float_3;
			long_5 = long_2 + long_4;
			double_1 = double_3 + double_6;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_7 = 1;
		float_2 = float_1 * float_5;
		int_1 = int_4 + int_2;
		v_termpty_save_extract(short_1);

		char_5 = char_3;
		float_7 = float_3 + float_6;
	}
	unsigned_int_2 = unsigned_int_3;
	double_6 = double_4 + double_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	char_3 = char_7;
	double_1 = double_8;
	int_1 = int_6 * int_4;
	long_2 = long_5 * long_3;
	double_3 = double_5;
	if(1)
	{
		int_1 = int_2 + int_7;
	}
	double_8 = v__termpty_line_is_empty(float_8,char_2);

	v_termpty_resize_tabs(char_3,int_1,int_6);

	unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
	double_9 = double_4 + double_2;
	long_3 = long_1 + long_6;
	int_6 = int_2 + int_3;
	int_7 = int_6 * int_1;
	unsigned_int_2 = unsigned_int_6 + unsigned_int_5;
	long_7 = v__termpty_line_rewrap(double_6,float_9,int_2,float_6,char_6);

	unsigned_int_7 = unsigned_int_5 + unsigned_int_2;
	double_4 = double_3 + double_3;
	v_termpty_backlog_unlock();

}
void v_termio_win_get( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 * short_1;
}
unsigned int v__handle_esc_csi_reset_mode( int parameter_1,double parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short_1 = v__csi_arg_get(short_2);

	v_termpty_resize(double_1,int_1,int_2);

	v_termpty_clear_screen(unsigned_int_1,char_1);

	int_2 = int_2 + int_1;
	int_3 = v__switch_to_alternative_screen(unsigned_int_2,int_3);

	char_1 = char_2;
	v_termpty_reset_state();

	long_1 = v__move_cursor_to_origin();

	double_3 = double_2 + double_1;
	return unsigned_int_3;
	v_termio_win_get(float_1);

	v_termpty_cursor_copy(unsigned_int_1,float_1);

}
float v__handle_esc_csi_cursor_pos_set( float parameter_1,char parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	float float_2 = 1;
	int_1 = int_2;
	double_1 = double_1;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		short_1 = v__csi_arg_get(short_1);

		float_1 = float_1 + float_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_3 = double_2 + double_2;
		if(1)
		{
			int_4 = int_1 + int_3;
		}
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_2;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	int_4 = int_3 * int_2;
	if(1)
	{
		int int_5 = 1;
		int_5 = int_5 * int_6;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_1 = char_3 * char_4;
		if(1)
		{
			short short_2 = 1;
			short_2 = short_2 * short_1;
		}
	}
	if(1)
	{
		double_1 = double_3 * double_1;
	}
	int_1 = int_6;
	return float_2;
}
void v_termpty_text_scroll_rev( double parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_1;
	double_1 = double_2 * double_2;
	if(1)
	{
		double_1 = double_1 + double_1;
		double_2 = double_2 + double_2;
	}
	int_1 = int_1 * int_2;
	short_1 = short_1 + short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v_termpty_cells_clear(short_2,char_1,int_1);

		short_2 = short_1 * short_2;
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			v_termio_scroll(long_1,int_2,int_1,int_3,-1 );

			long_3 = long_2 * long_1;
		}
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_1 + short_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int_1 = int_3;
			char_2 = char_1 + char_1;
			char_4 = char_1 * char_3;
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_2 * double_2;
		}
	}
}
void v_termpty_clear_line( short parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 + int_1;
	double_2 = double_1 + double_2;
	char_2 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_2;
	short_2 = short_1 * short_1;
	int_4 = int_3 * int_1;
	int_5 = int_5 * int_3;
	char_3 = char_4;
	v_termpty_cells_clear(short_2,char_1,int_3);

	double_1 = double_3 + double_2;
	long_1 = long_2;
	if(1)
	{
		char char_5 = 1;
		char_5 = char_5;
	}
	double_1 = double_2 * double_2;
	long_4 = long_2 * long_3;
	v_termio_content_change(unsigned_int_3,long_3,double_2,int_3);

}
void v_termpty_clear_screen( unsigned int parameter_1,char parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		v_termio_content_change(unsigned_int_1,long_1,double_1,int_1);

		int_2 = int_2 * int_3;
	}
	double_2 = double_1 + double_1;
	v_termpty_clear_line(short_1,int_3,int_2);

	int_1 = int_3 + int_1;
	unsigned_int_1 = unsigned_int_2;
	v_termpty_cells_clear(short_3,char_1,int_3);

	int_5 = int_4 * int_3;
}
void v_termpty_cell_codepoint_att_fill( unsigned int parameter_1,double parameter_2,int parameter_3,float parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double_2 = double_2;
		int_3 = int_1 + int_2;
	}
}
unsigned int v__termpty_charset_trans( float parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_1 * long_2;
	if(1)
	{
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		if(1)
		{
			long_2 = long_2 + long_2;
		}
	}
	if(1)
	{
		if(1)
		{
			int_1 = int_2;
		}
		if(1)
		{
			int int_3 = 1;
			int_1 = int_1 * int_3;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_2;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 * float_1;
		}
	}
	return unsigned_int_1;
}
void v_termio_content_change( unsigned int parameter_1,long parameter_2,double parameter_3,int parameter_4)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_5 = 1;
	char char_7 = 1;
	float_1 = float_1 + float_1;
	int_3 = int_1 * int_2;
	char_2 = char_1 + char_1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		float_2 = float_2 + float_3;
		int_2 = v__remove_links(long_1,long_3,-1 );

		double_1 = double_1 + double_1;
		short_1 = short_1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char_4 = char_3 * char_2;
			if(1)
			{
				long long_4 = 1;
				double_1 = double_2 + double_2;
				long_2 = long_2 + long_4;
			}
			short_1 = short_1 + short_1;
			int_2 = int_3 + int_4;
		}
	}
	if(1)
	{
	}
	int_5 = v__sel_set(char_1,double_3);

	int_1 = int_2 * int_4;
	double_4 = double_3 + double_1;
	int_3 = int_5 + int_3;
	char_5 = char_4 + char_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		long_2 = long_2 * long_1;
	}
	if(1)
	{
		double double_5 = 1;
		double_5 = double_2;
		int_5 = int_3 + int_5;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_6 = 1;
			float float_4 = 1;
			float float_5 = 1;
			float float_6 = 1;
			double_5 = double_3 + double_5;
			if(1)
			{
				char_1 = char_2 * char_6;
				short_1 = short_1;
			}
			float_6 = float_4 + float_5;
			char_3 = char_7 * char_6;
		}
	}
	if(1)
	{
		double double_6 = 1;
		char char_8 = 1;
		int int_6 = 1;
		double_4 = double_3 + double_6;
		int_2 = int_3 * int_2;
		char_1 = char_7 + char_8;
		int_6 = int_4 * int_3;
		char_7 = char_2 * char_7;
		if(1)
		{
			short short_2 = 1;
			short_1 = short_2 + short_2;
		}
	}
}
void v_termpty_text_append( char parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_4 = 1;
	v_termio_content_change(unsigned_int_1,long_1,double_1,int_1);

	int_2 = int_1 + int_1;
	double_1 = double_2 + double_2;
	long_3 = long_2 + long_1;
	int_1 = int_2 * int_1;
	if(1)
	{
		float_3 = float_1 + float_2;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	char_2 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_4 = 1;
		long long_5 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_6 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int_5 = int_3 + int_4;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
			short_2 = short_1 * short_2;
			float_1 = float_1 * float_1;
			double_4 = double_1 + double_3;
			v__termpty_is_dblwidth_get(float_2,int_2);

			long_4 = long_1 * long_3;
			long_2 = long_1 * long_5;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				short_2 = short_3 + short_3;
			}
		}
		double_5 = double_2 * double_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
			}
			unsigned_int_4 = unsigned_int_6 + unsigned_int_2;
		}
		double_6 = double_3 + double_6;
		if(1)
		{
			long_1 = long_3 + long_4;
			char_3 = char_3 + char_1;
		}
		unsigned_int_4 = unsigned_int_5 * unsigned_int_6;
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			long_4 = long_5;
			unsigned_int_5 = unsigned_int_7 + unsigned_int_4;
		}
		if(1)
		{
			double double_7 = 1;
			unsigned_int_8 = unsigned_int_8 + unsigned_int_3;
			double_7 = double_7 + double_5;
			if(1)
			{
				unsigned int unsigned_int_9 = 1;
				unsigned_int_1 = unsigned_int_9 + unsigned_int_9;
			}
			if(1)
			{
				int_4 = int_3 + int_4;
			}
			if(1)
			{
				double double_8 = 1;
				double_2 = double_4 + double_8;
				char_2 = char_4 + char_3;
			}
		}
		if(1)
		{
			char char_5 = 1;
			short short_4 = 1;
			int int_8 = 1;
			int_1 = int_3;
			char_5 = char_4;
			if(1)
			{
				float_4 = float_2 * float_3;
			}
			short_2 = short_1 + short_4;
			if(1)
			{
				int int_6 = 1;
				int int_7 = 1;
				unsigned_int_3 = v__termpty_charset_trans(float_4,float_2);

				int_7 = int_6 + int_3;
				v_termpty_cell_codepoint_att_fill(unsigned_int_8,double_1,int_2,float_3,int_5);

				int_2 = int_3 + int_4;
			}
			v_termpty_text_scroll_test(float_4,short_3,-1 );

			int_8 = int_2 + int_4;
		}
	}
}
short v__csi_arg_get( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	char_3 = char_1 * char_2;
	char_3 = char_4 * char_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_5 = char_3 + char_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	return short_1;
}
int v__handle_esc_csi( long parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char_1 = v__handle_cursor_control(float_1,float_2,uni_para);

	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_2;
}
void v__safechar( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_3 = double_2 + double_1;
	long_1 = long_1 + long_1;
}
unsigned int v__handle_esc( float parameter_1,float parameter_2,unsigned int parameter_3,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_6 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_6 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_10 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	float_3 = float_1 * float_2;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	float_4 = float_3 * float_1;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	char_1 = char_2 * char_3;
	short_1 = short_3;
	short_1 = short_4;
	float_4 = float_5 + float_5;
	int_4 = int_2 + int_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_4;
	int_5 = int_2 * int_5;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	char_1 = char_4 + char_4;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	double_4 = double_1 + double_3;
	int_2 = int_5 + int_2;
	char_2 = char_2;
	short_5 = short_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	int_4 = int_6 * int_7;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_6;
	if(1)
	{
		float_4 = float_1 * float_6;
	}
	if(1)
	{
	}
	double_2 = double_5 * double_3;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_6;
	char_1 = char_4 + char_2;
	if(1)
	{
	}
	double_5 = double_6;
	long_5 = long_3 * long_4;
	if(1)
	{
	}
	double_7 = double_5 + double_6;
	int_8 = int_9;
	if(1)
	{
	}
	double_8 = double_8;
	short_1 = short_5 + short_1;
	if(1)
	{
	}
	char controller4vul_2211[2];
	fgets(controller4vul_2211 ,2 ,stdin);
	if( strcmp( controller4vul_2211, "n") > 0)
	{
		char_1 = char_2 * char_1;
		int_6 = int_9 + int_1;
		unsigned_int_7 = unsigned_int_6 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_7;
		char controller4vul_2212[2];
		fgets(controller4vul_2212 ,2 ,stdin);
		if( strcmp( controller4vul_2212, "C") < 0)
		{
			int_8 = v__handle_esc_csi(long_1,short_4,int_1,uni_para);

			short_2 = short_1 * short_3;
		}
		char_4 = char_3 + char_1;
		short_3 = short_3;
		if(1)
		{
			char char_5 = 1;
			char_5 = char_2;
			int_7 = int_8 * int_3;
			long_4 = long_3;
		}
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "UT") < 0)
	{
	}
	double_6 = double_1 + double_1;
	float_6 = float_5 + float_5;
	unsigned_int_1 = unsigned_int_7;
	unsigned_int_3 = unsigned_int_4;
	int_1 = int_10 + int_1;
	return unsigned_int_5;
}
void v_termpty_cell_fill( int parameter_1,long parameter_2,float parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_1 = 1;
			short short_2 = 1;
			long long_1 = 1;
			short_1 = short_1 + short_2;
			long_1 = long_1 + long_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_1 = int_3 * int_3;
			int_2 = int_4;
		}
	}
}
void v_termpty_cells_fill( char parameter_1,long parameter_2,float parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	short_1 = short_1;
	short_3 = short_2 + short_1;
	v_termpty_cell_fill(int_1,long_1,float_1,int_2);

	char_1 = char_1 + char_2;
	long_2 = long_1 * long_1;
	short_3 = short_3 * short_1;
}
void v_termpty_cells_clear( short parameter_1,char parameter_2,int parameter_3)
{
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	v_termpty_cells_fill(char_1,long_1,float_1,int_1);

	short_3 = short_1 * short_2;
}
long v__tooltip_del(short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	int_1 = int_1;
	int_2 = int_1 + int_1;
	int_4 = int_3 * int_1;
	return long_1;
}
long v__tooltip_content(int parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_2;
	int_1 = v_media_add(char_2,unsigned_int_1,short_1,int_1,float_1,-1 );

	char_2 = char_1;
	float_3 = float_1 * float_2;
	short_2 = short_2 + short_1;
	return long_1;
}
void v_MD5Final( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double_2 = double_1 * double_2;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_MD5Transform(float_1,unsigned_int_1);

	char_2 = char_1 * char_2;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		int_1 = int_1 * int_3;
		long_3 = long_1 * long_2;
		long_1 = long_4 + long_2;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		long long_5 = 1;
		long_1 = long_5 * long_1;
	}
	long_3 = long_2 * long_4;
	v_byteReverse(short_1,float_2);

	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_2 + short_1;
	char_2 = char_2 * char_3;
	int_5 = int_4 * int_1;
	int_6 = int_3 + int_6;
	int_5 = int_6 + int_7;
}
void v_MD5Transform( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	double double_6 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	double double_7 = 1;
	long long_5 = 1;
	short short_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_6 = 1;
	int int_8 = 1;
	short short_5 = 1;
	float float_5 = 1;
	float float_6 = 1;
	short short_6 = 1;
	short short_7 = 1;
	double double_8 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_8 = 1;
	long long_7 = 1;
	double double_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double_2 = double_1 + double_1;
	double_3 = double_1 * double_1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_4 * double_4;
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
	float_1 = float_1 * float_1;
	long_2 = long_1 + long_2;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_3;
	float_2 = float_2;
	float_2 = float_3 * float_4;
	double_4 = double_5 * double_2;
	int_3 = int_3;
	int_4 = int_1;
	double_2 = double_3;
	double_5 = double_6 * double_4;
	float_4 = float_2 * float_3;
	double_5 = double_1 * double_6;
	double_4 = double_6 * double_2;
	int_2 = int_5 + int_5;
	char_3 = char_1 + char_2;
	long_4 = long_3 * long_3;
	short_3 = short_3;
	double_7 = double_3 + double_2;
	long_4 = long_5;
	short_4 = short_4 + short_2;
	int_5 = int_5 + int_3;
	int_1 = int_1 * int_2;
	char_3 = char_2 * char_3;
	int_3 = int_4 + int_6;
	float_1 = float_2 * float_3;
	int_6 = int_1 + int_7;
	unsigned_int_6 = unsigned_int_4;
	int_1 = int_3 + int_3;
	double_3 = double_6 * double_5;
	long_2 = long_3 * long_6;
	int_5 = int_4 * int_1;
	int_6 = int_5 * int_8;
	char_2 = char_1 * char_1;
	short_2 = short_5 * short_1;
	char_3 = char_3 + char_1;
	int_4 = int_6 + int_1;
	float_3 = float_3 + float_2;
	float_5 = float_6;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	float_4 = float_1 * float_2;
	short_3 = short_1 + short_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_5 + float_2;
	short_6 = short_6 + short_4;
	char_1 = char_3;
	int_7 = int_5 + int_4;
	short_7 = short_6 + short_3;
	char_2 = char_3;
	double_3 = double_8;
	char_5 = char_3 * char_4;
	double_4 = double_7 + double_3;
	int_5 = int_3 * int_6;
	float_5 = float_2 * float_3;
	long_5 = long_4 * long_5;
	short_1 = short_1 * short_5;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_1;
	short_1 = short_5 + short_8;
	int_7 = int_1 + int_3;
	long_2 = long_2 * long_7;
	double_10 = double_9 + double_5;
	double_3 = double_6 * double_5;
	double_4 = double_9 * double_9;
	unsigned_int_5 = unsigned_int_7 + unsigned_int_8;
}
void v_byteReverse( short parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 + int_1;
}
void v_MD5Update( unsigned int parameter_1,unsigned int parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	float_2 = float_1 * float_2;
	char_2 = char_1 + char_1;
	short_1 = short_1 * short_2;
	double_3 = double_1 * double_2;
	double_1 = double_4 + double_4;
	v_byteReverse(short_1,float_2);

	int_1 = int_1 * int_2;
	short_2 = short_2 * short_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_3 + char_3;
	int_5 = int_3 * int_4;
	long_3 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	short_4 = short_1;
	double_4 = double_4 + double_3;
	char_5 = char_4 * char_4;
	float_2 = float_2 + float_1;
	double_4 = double_4 + double_2;
	v_MD5Transform(float_1,unsigned_int_2);

	int_6 = int_4 * int_1;
	long_3 = long_1 + long_3;
	int_7 = int_7 + int_8;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
}
void v_MD5Init( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_1;
	int_1 = int_1 * int_2;
	long_1 = long_1 * long_1;
	int_3 = int_3 * int_2;
	double_3 = double_2 * double_1;
}
void v_gravatar_tooltip( unsigned int parameter_1,short parameter_2,char parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	char char_2 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long_1 = v__tooltip_content(int_1,char_1);

	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_1;
	float_4 = float_3 + float_1;
	int_2 = int_1 + int_1;
	long_1 = long_2;
	long_1 = v__tooltip_del(short_1);

	float_5 = float_4 + float_4;
	if(1)
	{
	}
	float_5 = float_5 * float_5;
	if(1)
	{
	}
	int_4 = int_2 + int_3;
	v_MD5Final(float_4,unsigned_int_3);

	long_2 = long_2 + long_3;
	char_2 = char_2 * char_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	int_2 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_MD5Init(short_2);

		int_4 = int_2 + int_3;
		unsigned_int_1 = unsigned_int_1;
	}
	char_3 = char_2 + char_2;
	int_4 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	char_3 = char_3 * char_4;
	v_MD5Update(unsigned_int_2,unsigned_int_1,char_1);

}
double v__cb_link_drag_done(float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_1 = int_1 * int_2;
	int_4 = int_1 + int_3;
	int_2 = int_5 * int_5;
	int_5 = int_5;
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	double_3 = double_2 + double_1;
	return double_2;
}
char v__cb_link_drag_accept(long parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_1;
	int_1 = int_2 * int_2;
	float_1 = float_1 * float_2;
	return char_1;
}
short v__cb_link_drag_move(float parameter_2,float parameter_3,double parameter_4,double parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 + short_2;
	double_2 = double_1 * double_1;
	double_2 = double_1 * double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_3 + double_2;
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		if(1)
		{
			int int_2 = 1;
			int_3 = int_1 + int_2;
		}
		if(1)
		{
			int_1 = int_3 * int_3;
		}
	}
	return short_1;
}
float v__cb_link_icon_new(short parameter_2,short parameter_3,long parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_2;
	long_3 = long_1 * long_2;
	double_3 = double_1 * double_2;
	long_4 = long_3;
	double_1 = double_4;
	int_3 = int_4;
	char_1 = char_2;
	return float_1;
}
long v__cb_link_move(short parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	double_1 = double_1 * double_2;
	int_1 = int_1 + int_1;
	float_1 = v__cb_link_icon_new(short_1,short_2,long_1);

	long_1 = long_2 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_2 + int_2;
	short_1 = v__cb_link_drag_move(float_1,float_1,double_2,double_3);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float_2 = float_1 * float_2;
		char_1 = v__cb_link_drag_accept(long_1,float_2);

		short_4 = short_3 + short_4;
		double_2 = v__cb_link_drag_done(float_3);

		int_1 = int_1 * int_2;
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_4 = int_1 * int_3;
		}
		if(1)
		{
			float float_4 = 1;
			float_4 = float_3 * float_2;
		}
		char_3 = char_2 * char_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	return long_2;
}
short v__cb_link_up_delay()
{
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	double_1 = v__activate_link(short_1,short_1);

	float_1 = float_1 + float_2;
	double_1 = double_2 * double_3;
	long_1 = long_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	int_1 = int_1 + int_1;
	return short_2;
}
float v__cb_link_up(unsigned int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_1;
	double_2 = double_1 * double_2;
	if(1)
	{
		float float_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short_1 = v__cb_link_up_delay();

		float_2 = float_1 + float_2;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		double_1 = double_2 + double_3;
		int_3 = int_1 * int_2;
		if(1)
		{
			if(1)
			{
				short short_2 = 1;
				short short_3 = 1;
				short_3 = short_2 + short_1;
			}
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long_2 = long_1 * long_2;
			}
		}
		double_2 = double_1 + double_2;
	}
	return float_1;
}
void v_term_focus( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	short_1 = v__term_is_focused(long_1);

	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1;
	int_1 = int_1 + int_1;
}
short v__term_is_focused( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "Kv") > 0)
	{
	}
	float_3 = float_4;
	return short_1;
}
void v_term_unfocus( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	long long_3 = 1;
	long_2 = long_1 * long_1;
	float_1 = float_1 * float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "^") > 0)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_2;
	float_2 = float_2 + float_3;
	short_1 = v__term_is_focused(long_3);

}
short v__cb_ctxp_del(double parameter_2,int parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	v_term_focus(short_1);

	int_2 = int_1 * int_1;
	long_2 = long_1 + long_1;
	char_1 = char_1 + char_2;
	int_1 = int_2 * int_1;
	v_term_unfocus(float_1);

	char_1 = char_3 * char_1;
	return short_1;
}
char v__cb_ctxp_dismissed(double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float_2 = float_1 + float_1;
	double_2 = double_1 + double_1;
	float_2 = float_2 * float_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return char_1;
}
short v__cb_ctxp_link_copy(float parameter_2,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double_1 = v__take_selection_text(unsigned_int_1,long_1,int_1,uni_para);

	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	char_1 = char_2;
	unsigned_int_3 = unsigned_int_3;
	long_2 = long_2 + long_2;
	float_2 = float_1 * float_1;
	float_3 = float_1 * float_1;
	return short_1;
}
float v__screen_visual_bounds( double parameter_1)
{
	float float_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_1 = int_1 * int_2;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	return float_1;
}
short v__draw_cell( unsigned int parameter_1,char parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_1 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
	}
	double_2 = double_1 + double_2;
	char_1 = char_1;
	float_2 = float_1 + float_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		int_4 = int_3 * int_1;
	}
	if(1)
	{
		if(1)
		{
			int_5 = int_2 + int_5;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
		}
	}
	if(1)
	{
		int_6 = int_2 + int_5;
	}
	if(1)
	{
		char_1 = char_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_7 = 1;
		long_1 = long_1;
		char_3 = char_2 * char_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		long_2 = long_2 + long_1;
		int_7 = int_4 * int_6;
		int_2 = int_3 * int_2;
		unsigned_int_2 = unsigned_int_6 * unsigned_int_6;
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_1 * unsigned_int_6;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_7 * unsigned_int_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		float float_4 = 1;
		float_2 = float_2 + float_4;
	}
	if(1)
	{
		if(1)
		{
			char_1 = char_3 + char_2;
		}
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_4 = double_3 * double_4;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_8;
	}
	return short_1;
}
short v__draw_line( long parameter_1,long parameter_2,short parameter_3,int parameter_4,int parameter_5)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = v__draw_cell(unsigned_int_1,char_1,unsigned_int_1,unsigned_int_2);

	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	return short_1;
}
short v_termpty_backlog_length( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = v_verify_beacon(double_1,int_1);

	char_2 = char_1 * char_1;
	int_1 = int_1 + int_1;
	float_3 = float_1 * float_4;
	unsigned_int_2 = unsigned_int_2;
	double_1 = double_1 * double_1;
	char_2 = char_2 + char_1;
	short_3 = short_1 * short_2;
	double_3 = double_1 + double_2;
	double_3 = double_2 + double_4;
	double_1 = double_1 + double_3;
	long_2 = long_1 * long_2;
	if(1)
	{
		int int_2 = 1;
		int_3 = int_1 * int_2;
	}
	int_1 = int_4 * int_1;
	if(1)
	{
		double_2 = double_3 * double_4;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		long long_3 = 1;
		long_2 = long_1 + long_3;
	}
	double_4 = double_2 + double_2;
	if(1)
	{
		int_3 = int_4;
	}
	char_2 = char_1 + char_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_4 = unsigned_int_4;
	double_4 = double_2 * double_3;
	double_1 = double_3 * double_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	double_5 = double_2;
	float_4 = float_3 * float_3;
	return short_1;
}
float v_termio_pty_get( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short_1 = short_1 * short_1;
	short_1 = short_2;
	return float_1;
}
unsigned int v_termio_textgrid_get( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 + int_2;
	return unsigned_int_1;
}
long v_miniview_colors_get( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short_2 = short_1 * short_1;
	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_2 = double_1 * double_2;
		unsigned_int_1 = v_termio_textgrid_get(float_1);

		float_3 = float_1 * float_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
		int_1 = int_1;
	}
	return long_1;
}
long v__deferred_renderer()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	double double_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_4 = 1;
	short short_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	long long_7 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_1 + double_1;
	int_2 = int_2 * int_1;
	int_4 = int_3 * int_1;
	double_2 = double_1 * double_1;
	char_2 = char_1 * char_1;
	double_3 = double_1 * double_1;
	int_3 = int_3 + int_2;
	int_2 = int_4 * int_1;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_4 * int_4;
	}
	int_3 = int_2 + int_3;
	short_1 = short_1 * short_1;
	int_3 = v_termio_scroll_get();

	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	char_3 = char_1;
	double_2 = double_3 * double_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	int_3 = int_2 + int_4;
	double_4 = double_2 + double_1;
	long_1 = v_miniview_colors_get(float_1,char_2);

	double_4 = double_1;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
		short_1 = short_3;
	}
	if(1)
	{
		int_2 = int_1 * int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_5 * double_1;
		if(1)
		{
			long_2 = v_termpty_cellrow_get(long_3,int_2,double_1);

			int_1 = int_3 + int_4;
		}
		double_3 = double_3;
	}
	short_3 = short_2 * short_1;
	float_3 = float_1 * float_2;
	float_1 = v__screen_visual_bounds(double_2);

	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		float_1 = float_3 * float_3;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
	}
	long_2 = long_3 * long_1;
	double_3 = double_2;
	if(1)
	{
		char char_4 = 1;
		unsigned_int_3 = unsigned_int_3;
		float_3 = v_termio_pty_get(int_3);

		char_3 = char_3 * char_4;
		if(1)
		{
			short_1 = short_2 * short_3;
			char_1 = char_2 * char_3;
		}
		if(1)
		{
			if(1)
			{
				double double_6 = 1;
				int int_5 = 1;
				double_3 = double_4 * double_6;
				double_5 = double_6 + double_5;
				int_3 = int_4 + int_5;
				short_1 = v__draw_line(long_4,long_2,short_4,int_1,int_2);

				double_4 = double_4 * double_3;
			}
			if(1)
			{
				int int_6 = 1;
				int_2 = int_3 * int_6;
				double_4 = double_1;
			}
		}
	}
	if(1)
	{
		int_4 = int_2 + int_2;
	}
	long_2 = long_3 * long_2;
	double_1 = double_3 * double_5;
	short_2 = v_termpty_backlog_length(short_1);

	long_1 = long_2 * long_3;
	long_7 = long_5 * long_6;
	return long_5;
}
void v__queue_render( float parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	long_1 = v__deferred_renderer();

	double_1 = double_1 * double_1;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_1 = long_2 + long_3;
	}
}
void v_miniview_redraw( float parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v__queue_render(float_1);

	char_1 = char_1 + char_1;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	int_1 = int_2;
}
double v__block_obj_del( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_1;
	long_1 = long_1 * long_2;
	return double_1;
	v__smart_media_del(unsigned_int_2,short_1);

}
int v__termpty_is_dblwidth_slow_get( short parameter_1,int parameter_2)
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
void v__termpty_is_dblwidth_get( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = v__termpty_is_dblwidth_slow_get(short_1,int_1);

}
int v_term_preedit_str_get( short parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_2;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	double_1 = double_2 + double_3;
	if(1)
	{
	}
	return int_2;
}
int v_media_get( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	return int_1;
}
double v__smart_media_clicked(unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_7 = 1;
	int_2 = int_1 + int_2;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_2 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			short_1 = v_termio_config_get(int_2);

			short_2 = short_1 + short_2;
			if(1)
			{
				short short_3 = 1;
				if(1)
				{
					unsigned int unsigned_int_4 = 1;
					double double_3 = 1;
					double double_4 = 1;
					float_1 = v_media_src_type_get(long_1);

					unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
					double_4 = double_2 * double_3;
					if(1)
					{
						unsigned int unsigned_int_6 = 1;
						int_1 = v_media_get(char_1);

						unsigned_int_6 = unsigned_int_4 + unsigned_int_2;
					}
					if(1)
					{
						int int_3 = 1;
						long long_3 = 1;
						int_3 = int_2 + int_2;
						long_3 = long_2 * long_2;
						if(1)
						{
							long long_4 = 1;
							long long_5 = 1;
							float float_2 = 1;
							float float_3 = 1;
							double_5 = double_1 + double_3;
							long_4 = long_4 + long_5;
							float_3 = float_2 * float_3;
						}
					}
				}
				short_1 = short_1 * short_3;
			}
		}
	}
	unsigned_int_2 = unsigned_int_5 * unsigned_int_7;
	return double_5;
}
char v_media_control_get( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	return char_1;
}
float v__smart_media_stop(short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	short_1 = short_1;
	return float_1;
}
float v__smart_media_pause(double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "7m") < 0)
	{
	}
	short_2 = short_1 + short_1;
	return float_1;
}
long v__smart_media_play(double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "X)") < 0)
	{
	}
	short_2 = short_1 * short_2;
	return long_1;
}
void v__smart_media_del(unsigned int parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
		int_1 = int_2 * int_1;
	}
}
void v_media_visualize_set( unsigned int parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_5 = 1;
	char_1 = char_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			char_2 = char_1 + char_1;
		}
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			char_5 = char_3 + char_4;
		}
	}
	if(1)
	{
		char_5 = char_5 + char_2;
	}
}
void v_media_mute_set( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	double_3 = double_3 + double_3;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "`") < 0)
	{
		double_3 = double_1 + double_3;
	}
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_4 + double_4;
	}
}
void v_media_volume_set( float parameter_1,double parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_1 = short_1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	long_2 = long_1 * long_1;
}
float v__cb_media_vol(char parameter_2,char parameter_3,char parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char_3 = char_1 * char_2;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return float_3;
	v_media_volume_set(float_1,double_1);

}
long v__cb_media_pos(double parameter_2,unsigned int parameter_3,long parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
	}
	v_media_position_set(double_1,double_1);

	char_1 = char_1 * char_1;
	double_3 = double_2 + double_1;
	return long_1;
}
float v__cb_media_pos_drag_stop(double parameter_2,float parameter_3,double parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	double_1 = double_1 * double_2;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	long_1 = long_2;
	int_3 = int_2 + int_2;
	float_3 = float_1 + float_2;
	long_2 = long_1 + long_3;
	double_2 = double_2 * double_1;
	return float_1;
}
long v__cb_media_pos_drag_start(int parameter_2,float parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 + int_2;
	v_media_position_set(double_1,double_2);

	char_4 = char_2 + char_3;
	return long_1;
}
void v_media_stop( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	char_1 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_1;
}
float v__cb_media_stop(long parameter_2,int parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return float_1;
	v_media_stop(short_1);

}
char v__cb_media_pause(char parameter_2,char parameter_3,long parameter_4)
{
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_1;
	return char_1;
	v_media_play_set(long_1,int_1);

}
void v_media_play_set( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_1 + long_2;
	if(1)
	{
		double double_1 = 1;
		int_1 = int_1 * int_1;
		double_1 = double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		int_2 = int_1;
	}
}
int v__cb_media_play(double parameter_2,unsigned int parameter_3,char parameter_4)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v_media_play_set(long_1,int_1);

	int_3 = int_1 * int_2;
	return int_2;
}
void v_media_position_set( double parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_2 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	float_1 = float_1 * float_2;
}
long v__cb_mov_ref(float parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char_1 = char_1;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	return long_1;
}
void v__cb_mov_progress(char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_3 = long_1 + long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "X") > 0)
	{
	}
	int_3 = int_1 + int_2;
}
char v__cb_mov_restart()
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	int_2 = int_2 + int_3;
	short_1 = short_1 * short_2;
	return char_3;
}
int v__cb_mov_decode_stop(unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	char_1 = v__cb_mov_restart();

	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
float v__cb_mov_len_change(double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	return float_1;
}
void v__cb_mov_frame_resize(double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = v__type_mov_calc(short_1,short_1,short_2,unsigned_int_1,int_1);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	int_1 = int_1 * int_1;
}
long v__cb_mov_frame_decode(char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float_2 = float_1 + float_2;
	int_1 = int_1 + int_1;
	float_2 = float_2 + float_1;
	if(1)
	{
	}
	double_1 = v__type_mov_calc(short_1,short_2,short_1,unsigned_int_1,int_1);

	double_1 = double_2 * double_2;
	double_3 = double_2 * double_1;
	long_1 = long_1 * long_1;
	float_1 = float_3 + float_2;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	short_3 = short_4;
	long_2 = long_2;
	long_1 = long_3 * long_1;
	return long_4;
}
short v__type_mov_init( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_3 = 1;
	long long_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_6 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	char char_7 = 1;
	char char_8 = 1;
	char char_9 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_10 = 1;
	char char_10 = 1;
	float float_5 = 1;
	double double_6 = 1;
	long long_7 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	short_2 = short_1 * short_1;
	char_1 = char_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = v__cb_media_vol(char_1,char_2,char_2);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_5;
	if(1)
	{
		int_1 = int_2 * int_1;
	}
	if(1)
	{
		long_1 = long_1 + long_2;
		unsigned_int_2 = unsigned_int_6 * unsigned_int_4;
		float_2 = v__cb_mov_len_change(double_1);

		v__cb_mov_progress(char_2);

		unsigned_int_1 = unsigned_int_7;
	}
	float_3 = float_2 * float_2;
	long_3 = v__cb_mov_frame_decode(char_3);

	unsigned_int_6 = unsigned_int_6 * unsigned_int_6;
	int_1 = v__cb_mov_decode_stop(unsigned_int_2);

	unsigned_int_7 = unsigned_int_8 * unsigned_int_2;
	char_1 = char_1 + char_3;
	char_4 = v__cb_media_pause(char_4,char_5,long_4);

	long_5 = v__cb_media_pos_drag_start(int_2,float_1,long_1);

	long_4 = long_1 * long_2;
	double_3 = double_2 + double_3;
	v_media_position_set(double_1,double_3);

	int_1 = v__cb_media_play(double_4,unsigned_int_8,char_6);

	double_5 = double_2 + double_2;
	if(1)
	{
		int_3 = int_4;
	}
	if(1)
	{
		short_1 = short_2 + short_3;
	}
	v_media_visualize_set(unsigned_int_3,long_1);

	char_7 = char_8;
	double_1 = double_4 * double_4;
	long_5 = v__cb_mov_ref(float_1);

	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	v_media_play_set(long_4,int_3);

	float_2 = float_2 + float_1;
	double_5 = double_4 * double_5;
	v__cb_mov_frame_resize(double_2);

	char_1 = char_8 + char_9;
	long_5 = long_1 + long_5;
	double_3 = double_2;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_9;
	int_1 = int_5;
	char_9 = v_theme_apply(int_6,short_2,int_1);

	float_4 = v__cb_media_stop(long_4,int_6,float_3);

	unsigned_int_10 = unsigned_int_5;
	double_3 = double_3 + double_5;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_1;
	int_2 = int_4;
	char_2 = char_9 + char_10;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_8;
	int_5 = int_5 * int_4;
	if(1)
	{
		int_2 = int_3 * int_5;
	}
	if(1)
	{
		long long_6 = 1;
		float_5 = v__cb_media_pos_drag_stop(double_6,float_1,double_1);

		long_6 = long_1 + long_3;
	}
	return short_3;
	long_1 = v__cb_media_pos(double_5,unsigned_int_2,long_7);

	v_media_mute_set(double_1,short_1);

}
long v__cb_edje_preloaded(float parameter_2,float parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 * float_1;
	return long_1;
}
char v__type_edje_init()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int_3 = int_1 + int_2;
	long_1 = long_1;
	long_2 = v__cb_edje_preloaded(float_1,float_2,int_3);

	double_1 = double_1 + double_1;
	int_2 = int_3 * int_2;
	char_1 = char_1 + char_1;
	v_theme_auto_reload_enable(int_1);

	int_4 = int_2 + int_4;
	double_1 = double_1 + double_2;
	double_3 = double_2 + double_2;
	char_2 = char_2 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_5 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			int_1 = int_5 * int_1;
			double_4 = double_4 * double_4;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	return char_1;
}
void v__type_scale_init( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	int int_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 * short_1;
	double_3 = double_1 * double_2;
	double_2 = double_1 * double_3;
	float_2 = float_1 * float_1;
	char_1 = v__cb_scale_preloaded(unsigned_int_2,float_3);

	int_1 = int_1 * int_1;
	short_1 = short_3 * short_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	long_1 = long_1 + long_1;
	double_2 = double_4;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_3;
}
float v__cb_img_frame()
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	float float_1 = 1;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	short_5 = short_3 * short_4;
	double_1 = double_1 * double_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, ">") < 0)
	{
		short short_6 = 1;
		int int_3 = 1;
		short_2 = short_6 * short_3;
		if(1)
		{
			double double_3 = 1;
			double_1 = double_3;
		}
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		int_1 = int_1 * int_3;
		if(1)
		{
			if(1)
			{
				char_1 = char_2;
			}
		}
	}
	unsigned_int_4 = unsigned_int_4;
	double_2 = double_1;
	char_3 = char_2 + char_1;
	return float_1;
}
float v__type_img_anim_handle()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int_1 = int_2;
	float_1 = float_1 + float_2;
	float_1 = v__cb_img_frame();

	char_1 = char_1 + char_2;
	if(1)
	{
	}
	long_1 = long_2;
	int_2 = int_2 + int_3;
	if(1)
	{
	}
	char_1 = char_3;
	long_2 = long_1 + long_2;
	return float_1;
}
long v__cb_img_preloaded(float parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	char_1 = char_1;
	double_1 = double_1 + double_2;
	return long_1;
}
unsigned int v__type_img_init( short parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	float float_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_2 = 1;
	char_1 = char_1;
	int_1 = int_2;
	float_2 = float_1 + float_2;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_2;
	char_3 = char_2;
	long_2 = v__cb_img_preloaded(float_2,short_1);

	char_1 = char_3;
	float_3 = v__type_img_anim_handle();

	char_5 = char_1 + char_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_4 = long_1 + long_3;
	short_1 = short_2 * short_1;
	return unsigned_int_1;
}
char v__url_compl_cb(int parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	char char_4 = 1;
	short_1 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	char controller4vul_2244[3];
	fgets(controller4vul_2244 ,3 ,stdin);
	if( strcmp( controller4vul_2244, "2v") > 0)
	{
		v__smart_calculate(char_1,uni_para);

	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	float_2 = float_1 + float_2;
	float_2 = float_3 * float_3;
	double_1 = double_2 + double_2;
	float_2 = float_2;
	char_2 = char_1 * char_1;
	int_1 = int_1;
	int_2 = int_1;
	int_1 = int_3 * int_3;
	long_1 = long_1;
	unsigned_int_4 = unsigned_int_2;
	float_3 = float_2 + float_3;
	unsigned_int_4 = unsigned_int_2;
	char_2 = char_3;
	float_1 = float_2 + float_3;
	float_1 = float_3 + float_3;
	long_2 = long_1 * long_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	int_4 = int_1;
	return char_4;
}
long v__url_prog_cb(int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_1;
	int_1 = int_1 * int_2;
	short_3 = short_1 + short_2;
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
		double double_3 = 1;
		double_1 = double_1 + double_1;
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 + char_1;
		}
		short_3 = short_2 + short_2;
		double_2 = double_3;
		if(1)
		{
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double_1 = double_4;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
			float_2 = float_1 + float_2;
		}
	}
	return long_1;
}
short v__type_thumb_calc( unsigned int parameter_1,long parameter_2,long parameter_3,unsigned int parameter_4,unsigned int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		int_2 = int_1 * int_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_4 = 1;
		long_1 = long_1 + long_1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
		double_1 = double_1;
		if(1)
		{
			int_2 = int_2 + int_1;
			char_3 = char_1 + char_2;
			if(1)
			{
				int_2 = int_1 * int_1;
			}
		}
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_2 + double_2;
			char_1 = char_3 * char_2;
		}
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		double_1 = double_1 + double_4;
		int_2 = int_2;
		long_2 = long_1 + long_1;
	}
	long_3 = long_2 + long_1;
	int_5 = int_3 + int_4;
	return short_3;
}
double v__type_mov_calc( short parameter_1,short parameter_2,short parameter_3,unsigned int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	float float_7 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_2;
	float_1 = float_1 + float_1;
	short_2 = short_1 + short_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		float_1 = float_2 + float_3;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		long long_1 = 1;
		short short_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		double double_1 = 1;
		int int_5 = 1;
		double double_4 = 1;
		short short_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long_1 = long_1 * long_1;
		short_3 = short_2 * short_1;
		char_2 = char_1 + char_1;
		if(1)
		{
			float_6 = float_4 + float_5;
		}
		if(1)
		{
			double double_2 = 1;
			double_1 = double_1 + double_2;
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_3 + int_1;
			short_1 = short_3;
			char controller_7[3];
			fgets(controller_7 ,3 ,stdin);
			if( strcmp( controller_7, "Aq") > 0)
			{
				int int_4 = 1;
				double_3 = double_3 * double_1;
				int_4 = int_5;
				if(1)
				{
					int_3 = int_5;
				}
			}
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
			float_4 = float_5 + float_2;
			if(1)
			{
				char char_3 = 1;
				char_3 = char_3 + char_1;
				double_3 = double_4 + double_3;
				if(1)
				{
					short short_5 = 1;
					short_5 = short_1 + short_4;
				}
			}
		}
		if(1)
		{
			int int_6 = 1;
			short_3 = short_1 * short_4;
			int_6 = int_6 * int_5;
		}
		double_4 = double_5 + double_6;
		float_7 = float_4 + float_6;
		long_3 = long_2 + long_3;
		double_4 = double_1 + double_3;
	}
	float_7 = float_3;
	long_2 = long_2 * long_3;
	return double_3;
}
int v__type_edje_calc( short parameter_1,double parameter_2,long parameter_3,short parameter_4,long parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "c") > 0)
	{
	}
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	return int_3;
}
unsigned int v__type_img_calc( float parameter_1,short parameter_2,char parameter_3,char parameter_4,long parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
		int_3 = int_1 * int_2;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_4 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2;
			double_1 = double_1 + double_1;
			if(1)
			{
				unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
				double_1 = double_1 + double_1;
				if(1)
				{
					char_1 = char_2;
				}
			}
		}
		if(1)
		{
			float_4 = float_2 + float_3;
			int_2 = int_1 + int_3;
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				float_4 = float_2;
				long_1 = long_1 * long_2;
				if(1)
				{
					double_2 = double_1 + double_2;
				}
			}
			if(1)
			{
				char_1 = char_2 * char_2;
				int_1 = int_1;
			}
		}
		if(1)
		{
			float float_5 = 1;
			unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
			float_5 = float_4 * float_3;
		}
		int_4 = int_3;
		float_1 = float_3 * float_3;
		double_2 = double_2 * double_1;
		unsigned_int_6 = unsigned_int_1;
	}
	char_3 = char_3 * char_3;
	char_2 = char_3 + char_2;
	return unsigned_int_4;
}
char v__cb_scale_preloaded(unsigned int parameter_2,float parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long_1 = long_1 + long_1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_2 = int_1 + int_1;
		int_4 = int_3 + int_2;
		double_1 = double_1 * double_2;
	}
	return char_1;
}
unsigned int v__type_scale_calc( long parameter_1,short parameter_2,double parameter_3,int parameter_4,double parameter_5,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	long long_6 = 1;
	double double_5 = 1;
	double double_8 = 1;
	int int_5 = 1;
	double double_9 = 1;
	char * vul_var;
	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		short_1 = short_1 + short_1;
		double_1 = double_1 + double_1;
	}
	char controller4vul_2252[3];
	fgets(controller4vul_2252 ,3 ,stdin);
	if( strcmp( controller4vul_2252, "Qx") > 0)
	{
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		int_1 = int_1 * int_2;
		char controller4vul_2253[2];
		fgets(controller4vul_2253 ,2 ,stdin);
		if( strcmp( controller4vul_2253, "H") > 0)
		{
			long_1 = long_3;
			float_2 = float_1 + float_1;
			char controller4vul_2254[3];
			fgets(controller4vul_2254 ,3 ,stdin);
			if( strcmp( controller4vul_2254, "Zx") < 0)
			{
				if(uni_para == 985)
				{
					vul_var = vul_var + 1;
				}
				float_3 = float_1 * float_2;
				double_2 = double_2 * double_3;
				if(1)
				{
					free(vul_var);
					short_1 = short_1;
				}
			}
		}
		if(1)
		{
			char char_1 = 1;
			unsigned_int_2 = unsigned_int_2;
			char_1 = char_1;
			if(1)
			{
				double_4 = double_1 * double_3;
				double_4 = double_4 * double_4;
				if(1)
				{
					int int_3 = 1;
					int_3 = int_1 + int_1;
				}
			}
		}
		if(1)
		{
			long_4 = long_4 + long_1;
			double_1 = double_4 + double_1;
		}
		short_1 = short_1 * short_1;
		unsigned_int_1 = unsigned_int_2;
		double_3 = double_4 * double_3;
		double_3 = double_1 + double_1;
	}
	if(1)
	{
		long long_5 = 1;
		char char_3 = 1;
		char char_5 = 1;
		char char_6 = 1;
		unsigned int unsigned_int_3 = 1;
		long_4 = long_5 + long_6;
		float_2 = float_1 * float_1;
		double_5 = double_3 * double_1;
		if(1)
		{
			long_1 = long_5;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			double double_6 = 1;
			char char_2 = 1;
			char char_4 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_7 = 1;
			int int_4 = 1;
			double_1 = double_3 + double_1;
			double_5 = double_6 + double_2;
			char_4 = char_2 * char_3;
			short_2 = short_3;
			double_4 = double_6 + double_7;
			long_6 = long_1 + long_3;
			double_6 = double_3 + double_2;
			double_8 = double_5;
			int_1 = int_4 * int_4;
		}
		char_6 = char_5 + char_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		long long_7 = 1;
		double_8 = double_5;
		long_6 = long_4 + long_7;
	}
	int_2 = int_5;
	float_3 = float_2 * float_3;
	double_1 = double_5 * double_9;
}
void v__unsmooth_timeout(int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 + int_1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_1;
	short_1 = short_1;
	char controller4vul_2250[3];
	fgets(controller4vul_2250 ,3 ,stdin);
	if( strcmp( controller4vul_2250, "[]") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		char controller4vul_2251[2];
		fgets(controller4vul_2251 ,2 ,stdin);
		if( strcmp( controller4vul_2251, "_") > 0)
		{
			unsigned_int_4 = v__type_scale_calc(long_1,short_2,double_1,int_1,double_2,uni_para);

			int_1 = int_1 * int_1;
		}
		if(1)
		{
			int int_2 = 1;
			int_2 = int_1 + int_2;
		}
	}
	if(1)
	{
		int_1 = int_1;
	}
}
char v__smooth_handler( double parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	char char_2 = 1;
	double_1 = double_2;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_3 = 1;
		double_2 = double_2 + double_3;
	}
	char controller4vul_2246[2];
	fgets(controller4vul_2246 ,2 ,stdin);
	if( strcmp( controller4vul_2246, "I") > 0)
	{
		char controller4vul_2247[2];
		fgets(controller4vul_2247 ,2 ,stdin);
		if( strcmp( controller4vul_2247, "|") > 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			char char_1 = 1;
			long_1 = long_1 * long_2;
			int_3 = int_1 + int_2;
			char controller4vul_2248[3];
			fgets(controller4vul_2248 ,3 ,stdin);
			if( strcmp( controller4vul_2248, ".{") > 0)
			{
				short short_1 = 1;
				short short_2 = 1;
				short_2 = short_1 * short_2;
				char controller4vul_2249[2];
				fgets(controller4vul_2249 ,2 ,stdin);
				if( strcmp( controller4vul_2249, "#") > 0)
				{
					long long_3 = 1;
					v__unsmooth_timeout(uni_para);

					long_2 = long_1 + long_3;
				}
			}
			if(1)
			{
				float_3 = float_2 * float_1;
			}
			if(1)
			{
				double double_4 = 1;
				double_4 = double_1;
			}
			char_2 = char_1 * char_2;
		}
	}
	if(1)
	{
		if(1)
		{
			float_1 = float_3 + float_2;
		}
		float_3 = float_1;
	}
	return char_2;
}
void v__smart_calculate( char parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	int int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_2245[3];
	fgets(controller4vul_2245 ,3 ,stdin);
	if( strcmp( controller4vul_2245, "Sk") < 0)
	{
		char_1 = v__smooth_handler(double_1,uni_para);

	}
	int_3 = int_1 * int_2;
	if(1)
	{
		int_3 = int_3 * int_1;
	}
	if(1)
	{
		int_2 = int_4 * int_5;
	}
	int_3 = int_1 * int_3;
	double_4 = double_1 + double_3;
	int_1 = int_3 * int_4;
	float_2 = float_1 * float_1;
	double_4 = double_5 * double_2;
	int_3 = int_4 * int_1;
	int_6 = int_4 * int_6;
	short_2 = short_1 * short_1;
	int_1 = int_5 * int_4;
	int_1 = int_4 * int_6;
	long_2 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	short_1 = short_3 + short_4;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_3 * int_5;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		int_6 = int_4;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		int int_7 = 1;
		long_4 = long_3 * long_2;
		int_3 = int_7 + int_7;
	}
}
char v__smart_move( short parameter_1,char parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int_3 = int_1 * int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "gA") == 0)
	{
	}
	float_1 = float_1 * float_1;
	return char_1;
}
double v__smart_resize( short parameter_1,char parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "V") < 0)
	{
	}
	int_1 = int_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	return double_1;
}
double v__smart_del( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 * int_2;
		int_1 = int_1 * int_3;
		char_2 = char_1 + char_2;
	}
	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		if(1)
		{
			long_3 = long_1 * long_2;
		}
		int_4 = int_4 * int_5;
	}
	if(1)
	{
		long_3 = long_3 * long_1;
	}
	if(1)
	{
		long_1 = long_2 + long_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		char_2 = char_2 * char_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_2 + char_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3 * double_1;
	}
	if(1)
	{
		int_1 = int_1 + int_3;
	}
	if(1)
	{
		double_4 = double_4 * double_2;
	}
	if(1)
	{
		double_5 = double_5 + double_5;
	}
	if(1)
	{
		double_2 = double_4 + double_1;
	}
	char_1 = char_4 * char_1;
	double_4 = double_4;
	return double_5;
}
long v__smart_add( float parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	int_2 = int_2 + int_2;
	short_1 = short_1;
	unsigned_int_4 = unsigned_int_2;
	long_1 = long_2;
	double_2 = double_1 + double_1;
	return long_1;
}
float v__smart_init()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	float float_4 = 1;
	int_1 = int_2;
	long_1 = v__smart_add(float_1);

	double_1 = v__smart_del(long_1);

	double_1 = double_2 * double_1;
	float_2 = float_2 * float_3;
	short_2 = short_1 * short_2;
	char_1 = v__smart_move(short_1,char_2,long_1);

	double_4 = double_3 + double_2;
	double_2 = v__smart_resize(short_1,char_3,unsigned_int_1);

	v__smart_calculate(char_1,-1 );

	int_1 = int_1 * int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_1 + int_1;
	double_2 = double_1 * double_3;
	double_2 = double_5 * double_5;
	float_2 = float_3 * float_4;
	return float_3;
}
int v_media_add( char parameter_1,unsigned int parameter_2,short parameter_3,int parameter_4,float parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	int int_8 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_6 = 1;
	float float_7 = 1;
	int int_9 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_11 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_10 = 1;
	double double_11 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1;
	double_1 = double_1 + double_2;
	char_1 = char_1 + char_1;
	double_1 = double_1 + double_2;
	if(1)
	{
		float_3 = float_2 + float_2;
	}
	if(1)
	{
		char_1 = char_2 * char_3;
	}
	int_1 = int_1 * int_2;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	int_3 = int_1 * int_3;
	float_2 = float_2 + float_1;
	double_2 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_2238[2];
	fgets(controller4vul_2238 ,2 ,stdin);
	if( strcmp( controller4vul_2238, "8") < 0)
	{
		int int_6 = 1;
		char controller4vul_2239[2];
		fgets(controller4vul_2239 ,2 ,stdin);
		if( strcmp( controller4vul_2239, "h") < 0)
		{
			unsigned int unsigned_int_3 = 1;
			int int_4 = 1;
			double double_3 = 1;
			float float_4 = 1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
			int_2 = int_4;
			if(1)
			{
				unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
				unsigned_int_7 = unsigned_int_6 + unsigned_int_2;
				double_4 = double_2 + double_3;
			}
			if(1)
			{
				double_5 = double_2 + double_3;
				long_1 = long_1 * long_1;
				double_4 = double_3 * double_2;
			}
			if(1)
			{
				double_3 = double_3 + double_5;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
			}
			if(1)
			{
				short_2 = short_1 + short_2;
			}
			if(1)
			{
				short_3 = short_2 * short_3;
			}
			if(1)
			{
				double_4 = double_1;
			}
			if(1)
			{
				int int_7 = 1;
				float float_5 = 1;
				int_6 = int_1 + int_5;
				int_3 = int_7 + int_2;
				int_6 = int_8 * int_6;
				short_1 = short_2 * short_2;
				float_4 = float_1 * float_3;
				double_2 = double_4 + double_1;
				float_5 = float_2 + float_3;
			}
			char controller4vul_2240[3];
			fgets(controller4vul_2240 ,3 ,stdin);
			if( strcmp( controller4vul_2240, "_;") > 0)
			{
				char_1 = char_1;
				double_5 = double_4 * double_1;
				int_6 = int_3;
				char controller4vul_2241[2];
				fgets(controller4vul_2241 ,2 ,stdin);
				if( strcmp( controller4vul_2241, "F") > 0)
				{
					double_1 = double_1 + double_4;
					if(1)
					{
						double_7 = double_3 + double_6;
						float_7 = float_1 + float_6;
					}
					char controller4vul_2242[3];
					fgets(controller4vul_2242 ,3 ,stdin);
					if( strcmp( controller4vul_2242, "cK") > 0)
					{
						int_9 = int_6;
						char controller4vul_2243[3];
						fgets(controller4vul_2243 ,3 ,stdin);
						if( strcmp( controller4vul_2243, "62") < 0)
						{
							char_3 = v__url_compl_cb(int_8,uni_para);

							int_10 = int_4 + int_1;
							double_3 = double_6 * double_1;
							unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
						}
						if(1)
						{
							float_2 = float_3 + float_7;
							unsigned_int_8 = unsigned_int_7;
							char_1 = char_1 * char_1;
							double_5 = double_8 * double_9;
							short_3 = short_3 * short_3;
							unsigned_int_7 = unsigned_int_7 + unsigned_int_2;
							double_3 = double_6;
							char_1 = char_2;
							double_9 = double_5;
						}
					}
				}
				if(1)
				{
					float float_8 = 1;
					float_4 = float_8 * float_7;
				}
			}
		}
		if(1)
		{
			int_11 = int_6 + int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			short_3 = short_2 * short_1;
			unsigned_int_5 = unsigned_int_8 + unsigned_int_1;
		}
	}
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		if(1)
		{
			int_8 = int_3 * int_3;
			char_5 = char_4 * char_2;
		}
		unsigned_int_6 = unsigned_int_4;
		if(1)
		{
			char char_6 = 1;
			char_6 = char_6 + char_4;
			unsigned_int_8 = unsigned_int_5 + unsigned_int_7;
		}
		short_1 = short_2 * short_2;
		if(1)
		{
			int_3 = int_5 + int_10;
			double_5 = double_9 * double_7;
		}
		double_6 = double_5 + double_2;
		if(1)
		{
			int int_12 = 1;
			int int_13 = 1;
			double_2 = double_8 * double_4;
			int_13 = int_11 * int_12;
		}
		char_5 = char_3 * char_5;
		unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
	}
	long_4 = long_3 * long_3;
	double_4 = double_1;
	double_2 = double_10;
	double_4 = double_11 + double_9;
	short_1 = short_4 + short_4;
	float_3 = float_6 * float_7;
	long_2 = long_4 + long_4;
	int_1 = int_9 + int_9;
	if(1)
	{
		double_8 = double_8 * double_9;
	}
	return int_3;
}
short v__block_media_activate( char parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_3 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 + int_1;
	float_2 = float_1 * float_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_6;
	char controller4vul_2237[2];
	fgets(controller4vul_2237 ,2 ,stdin);
	if( strcmp( controller4vul_2237, ":") < 0)
	{
		int_2 = v_media_add(char_1,unsigned_int_1,short_1,int_1,float_1,uni_para);

		char_1 = char_2;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_6 + unsigned_int_4;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		char_2 = char_2 + char_1;
	}
	unsigned_int_7 = unsigned_int_6 + unsigned_int_2;
	double_1 = double_3 * double_1;
	if(1)
	{
		float_1 = float_1 + float_2;
	}
	double_3 = double_2 + double_1;
	short_2 = short_1;
	long_2 = long_1 + long_2;
	double_1 = double_1;
	unsigned_int_8 = unsigned_int_8 * unsigned_int_7;
	int_1 = int_1 * int_3;
	char_2 = char_3 + char_4;
	if(1)
	{
		short short_3 = 1;
		int_2 = int_1;
		short_2 = short_2 * short_3;
	}
	int_3 = int_3 * int_1;
	int_5 = int_4 + int_2;
	long_1 = long_3 + long_4;
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		unsigned_int_7 = unsigned_int_9 + unsigned_int_6;
	}
	return short_2;
}
short v__block_edje_message_cb(long parameter_2,short parameter_3,int parameter_4)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	long long_5 = 1;
	int int_2 = 1;
	long long_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	double double_5 = 1;
	double double_7 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_8 = 1;
	float float_7 = 1;
	double double_8 = 1;
	short short_9 = 1;
	int int_6 = 1;
	double double_9 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_8 = 1;
	int int_7 = 1;
	long_1 = long_1;
	float_1 = float_1 * float_2;
	short_3 = short_1 * short_2;
	int_1 = int_1 * int_1;
	long_2 = long_2 * long_3;
	float_3 = float_2 * float_3;
	if(1)
	{
	}
	if(1)
	{
		long_4 = long_3 * long_3;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	long_1 = long_1;
	short_4 = short_2;
	long_1 = long_5 * long_5;
	int_2 = int_1 + int_1;
	float_3 = float_1;
	long_6 = long_3 * long_2;
	double_3 = double_1 + double_2;
	float_6 = float_4 * float_5;
	short_3 = short_2 + short_4;
	int_2 = int_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1;
	double_4 = double_2 + double_1;
	int_4 = int_3 * int_3;
	int_5 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_5;
		short_5 = short_2 * short_4;
	}
	short_2 = short_2 * short_6;
	double_3 = double_4 + double_4;
	short_6 = short_2 + short_7;
	double_2 = double_3 + double_3;
	short_1 = short_6;
	short_4 = short_5;
	long_3 = long_2 + long_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_6 = 1;
		double_6 = double_5 * double_1;
		double_6 = double_1 * double_2;
		int_3 = int_3 * int_5;
	}
	double_7 = double_4 * double_4;
	v_termpty_write(unsigned_int_4,char_1,int_2);

	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	short_2 = short_3 * short_7;
	double_1 = double_7 + double_4;
	double_5 = double_1;
	float_4 = float_1 * float_4;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char char_3 = 1;
		unsigned int unsigned_int_6 = 1;
		char_2 = char_3;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
		int_3 = int_3 * int_3;
	}
	float_1 = float_5 + float_2;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
	long_4 = long_5;
	short_5 = short_4 * short_8;
	double_4 = double_4 + double_7;
	float_7 = float_2 + float_2;
	int_2 = int_3 + int_5;
	int_5 = int_1 + int_4;
	double_8 = double_3 * double_5;
	short_3 = short_9 * short_7;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	short_4 = short_9 + short_3;
	long_3 = long_6 + long_2;
	double_3 = double_3 * double_8;
	short_2 = short_5 * short_1;
	float_5 = float_6 + float_7;
	int_5 = int_2 + int_3;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int_4 = int_1 + int_1;
		int_2 = int_2 + int_2;
		int_6 = int_4 + int_1;
	}
	float_6 = float_7 * float_1;
	float_3 = float_1;
	double_9 = double_2 + double_5;
	int_6 = int_4 + int_2;
	char_5 = char_4 + char_2;
	int_4 = int_3 + int_3;
	int_3 = int_5 * int_6;
	int_6 = int_2 * int_4;
	float_5 = float_7 * float_8;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		unsigned int unsigned_int_7 = 1;
		char_5 = char_2 + char_2;
		double_7 = double_5 + double_4;
		unsigned_int_7 = unsigned_int_4 * unsigned_int_2;
	}
	float_4 = float_6 * float_1;
	int_3 = int_7 * int_1;
	short_1 = short_3 + short_7;
	return short_4;
}
void v_termpty_write( unsigned int parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "t") < 0)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
}
unsigned int v__block_edje_signal_cb(long parameter_2,char parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	int_1 = int_1 * int_1;
	int_4 = int_2 * int_3;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_1;
	double_1 = double_3 + double_1;
	if(1)
	{
	}
	if(1)
	{
		int_3 = int_3 + int_3;
	}
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		double double_5 = 1;
		double_3 = double_4;
		float_3 = float_1 + float_2;
		long_1 = long_2;
		short_3 = short_2 + short_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		int_4 = int_3;
		char_3 = char_2 + char_1;
		double_1 = double_2 * double_5;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		float float_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		float_3 = float_4 * float_4;
		v_termpty_write(unsigned_int_5,char_2,int_5);

		short_2 = short_2 * short_3;
	}
	return unsigned_int_1;
}
void v_termpty_block_chid_update( int parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	if(1)
	{
	}
	long_1 = long_1 * long_2;
}
void v__block_edje_cmds( unsigned int parameter_1,long parameter_2,float parameter_3,float parameter_4)
{
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	v_termpty_block_chid_update(int_1,float_1);

	short_1 = v__block_edje_message_cb(long_1,short_1,int_1);

	double_1 = double_1 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "|$") == 0)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = v__block_edje_signal_cb(long_2,char_1,char_2);

}
void v_homedir_get( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_1 = 1;
		char_3 = char_1 * char_2;
		int_1 = int_1 + int_2;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_2;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 * int_2;
	}
}
float v__block_edje_activate( long parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_1;
	double_2 = double_1;
	if(1)
	{
	}
	double_3 = v_config_theme_path_default_get();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "&r") > 0)
	{
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		int int_2 = 1;
		unsigned_int_4 = unsigned_int_5;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_6;
			int_2 = int_1 * int_1;
		}
		if(1)
		{
			int_4 = int_3 + int_2;
			int_4 = int_2 * int_3;
		}
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_7;
	float_1 = float_1 * float_1;
	char_1 = char_2 * char_2;
	v_homedir_get(char_1,int_4);

	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
		int int_5 = 1;
		v__block_edje_cmds(unsigned_int_2,long_1,float_1,float_2);

		int_3 = int_1 * int_5;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	return float_3;
}
float v__block_activate( long parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_1;
	double_1 = double_2;
	char controller4vul_2236[3];
	fgets(controller4vul_2236 ,3 ,stdin);
	if( strcmp( controller4vul_2236, "&x") < 0)
	{
		short_1 = v__block_media_activate(char_1,char_2,uni_para);

	}
	double_2 = double_3 + double_1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		int_2 = int_2 + int_3;
	}
	double_4 = double_1 * double_3;
	if(1)
	{
		int_3 = int_3 * int_2;
	}
	return float_1;
}
double v_termpty_block_get( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Wa") < 0)
	{
	}
	return double_1;
}
int v_termpty_block_id_get( float parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 * float_2;
	return int_3;
}
void v_termpty_backscroll_adjust( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	char_1 = v_verify_beacon(double_1,int_1);

	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
double v__smart_apply( int parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	double double_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	int int_5 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	long long_5 = 1;
	int int_6 = 1;
	char char_5 = 1;
	float float_5 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_6 = 1;
	short short_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_8 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	char char_7 = 1;
	char char_8 = 1;
	int int_9 = 1;
	long long_9 = 1;
	long long_10 = 1;
	double double_9 = 1;
	float float_6 = 1;
	float float_7 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_12 = 1;
	float float_8 = 1;
	char char_10 = 1;
	unsigned int unsigned_int_13 = 1;
	double_2 = double_1 + double_1;
	int_1 = int_1 + int_2;
	int_2 = int_2;
	double_1 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_3 * int_4;
	double_2 = double_1 * double_3;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_2;
	int_2 = int_1 * int_4;
	int_3 = int_1;
	double_1 = double_1;
	int_1 = int_2 + int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		int_1 = int_2;
		double_3 = double_2;
		unsigned_int_4 = unsigned_int_4;
		double_1 = double_1 + double_2;
		if(1)
		{
			char_1 = char_2;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			double_2 = double_4 * double_1;
		}
		long_1 = long_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_3 = 1;
			if(1)
			{
				if(1)
				{
					if(1)
					{
						float_3 = float_1 + float_2;
					}
					char_3 = char_1 + char_2;
				}
				int_1 = int_1 + int_2;
				if(1)
				{
					double_1 = double_2 * double_1;
				}
				if(1)
				{
					char_1 = char_3 + char_1;
				}
				unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
				char_3 = char_2;
				double_2 = double_2 * double_4;
				short_3 = short_1;
				double_4 = double_3 + double_3;
				double_4 = double_5 + double_3;
			}
			char controller4vul_2232[2];
			fgets(controller4vul_2232 ,2 ,stdin);
			if( strcmp( controller4vul_2232, "6") < 0)
			{
				long_2 = long_1 * long_2;
				long_4 = long_3 * long_3;
				if(1)
				{
					if(1)
					{
						double_1 = double_4 * double_6;
					}
					short_3 = short_2;
					double_3 = double_7 * double_5;
					double_5 = double_1 * double_5;
					unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
					unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
					char_4 = char_4 + char_2;
					char_2 = char_3 * char_4;
					unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
					short_1 = short_1 * short_4;
					int_5 = int_1 + int_3;
					char_1 = char_3 * char_3;
					short_5 = short_3 + short_4;
					if(1)
					{
						int_2 = int_1 * int_3;
						unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
						unsigned_int_1 = unsigned_int_1 + unsigned_int_6;
						float_4 = float_3 + float_1;
						long_5 = long_5 * long_3;
					}
				}
				char controller4vul_2233[3];
				fgets(controller4vul_2233 ,3 ,stdin);
				if( strcmp( controller4vul_2233, "#v") < 0)
				{
					char controller4vul_2234[3];
					fgets(controller4vul_2234 ,3 ,stdin);
					if( strcmp( controller4vul_2234, "TC") > 0)
					{
						char controller4vul_2235[3];
						fgets(controller4vul_2235 ,3 ,stdin);
						if( strcmp( controller4vul_2235, "gg") < 0)
						{
							float_4 = v__block_activate(long_5,char_2,uni_para);

							int_3 = int_2 * int_1;
						}
						int_2 = int_5 + int_6;
					}
					int_4 = int_5 * int_3;
					if(1)
					{
						double_6 = double_4 + double_7;
					}
					if(1)
					{
						char_2 = char_5 + char_5;
					}
					char_2 = char_5;
					int_3 = int_2 + int_5;
					float_5 = float_4 * float_3;
					unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
					long_4 = long_2 * long_3;
					double_5 = double_3;
					if(1)
					{
						int_1 = int_2 + int_1;
					}
				}
				if(1)
				{
					long long_7 = 1;
					int_7 = int_5 + int_6;
					int_6 = int_7 * int_8;
					int_1 = int_7;
					double_5 = double_3 + double_1;
					unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
					short_6 = short_3 * short_1;
					if(1)
					{
						char_1 = char_5 * char_5;
						int_1 = int_2 + int_3;
					}
					if(1)
					{
						unsigned_int_2 = unsigned_int_3 * unsigned_int_7;
						long_1 = long_5 * long_6;
					}
					if(1)
					{
						int_2 = int_5 + int_2;
					}
					if(1)
					{
						if(1)
						{
							short_1 = short_5;
						}
						if(1)
						{
							unsigned_int_5 = unsigned_int_5;
						}
					}
					if(1)
					{
						double_1 = double_4;
					}
					if(1)
					{
						unsigned_int_2 = unsigned_int_3;
					}
					if(1)
					{
						int_8 = int_3 + int_1;
						long_5 = long_6 * long_7;
						unsigned_int_1 = unsigned_int_6 * unsigned_int_1;
						short_7 = short_5 + short_6;
						unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
						double_2 = double_8 + double_8;
						unsigned_int_7 = unsigned_int_8 + unsigned_int_1;
					}
					if(1)
					{
						long_5 = long_6;
					}
					if(1)
					{
						int_6 = int_1 * int_7;
					}
					if(1)
					{
						if(1)
						{
							long_6 = long_2 * long_6;
						}
						unsigned_int_2 = unsigned_int_4;
					}
					long_1 = long_8;
					unsigned_int_5 = unsigned_int_5 * unsigned_int_4;
					unsigned_int_4 = unsigned_int_9;
					short_2 = short_2;
					if(1)
					{
						char_6 = char_3 * char_2;
						float_5 = float_5 * float_3;
					}
					if(1)
					{
						double_4 = double_7 + double_8;
						long_7 = long_3 + long_3;
					}
					char_4 = char_2 * char_5;
					short_2 = short_5 * short_6;
					unsigned_int_10 = unsigned_int_3;
					unsigned_int_11 = unsigned_int_9 * unsigned_int_2;
					if(1)
					{
						int_4 = int_3 + int_7;
					}
				}
			}
		}
		double_1 = double_6 + double_3;
		if(1)
		{
			int_5 = int_4 + int_2;
		}
	}
	int_7 = int_5;
	if(1)
	{
		double double_11 = 1;
		double_6 = double_6 * double_1;
		unsigned_int_4 = unsigned_int_10 * unsigned_int_7;
		char_2 = char_5 + char_7;
		unsigned_int_11 = unsigned_int_11;
		int_3 = int_4 + int_5;
		double_1 = double_1 * double_7;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				char char_9 = 1;
				float_2 = float_3 * float_2;
				short_3 = short_6 + short_4;
				double_1 = double_8 * double_6;
				if(1)
				{
					long_4 = long_3 * long_8;
				}
				double_3 = double_7 + double_5;
				if(1)
				{
					if(1)
					{
						char_8 = char_2;
						unsigned_int_7 = unsigned_int_10 + unsigned_int_9;
						long_1 = long_1;
					}
				}
				if(1)
				{
					int_9 = int_8;
					long_6 = long_9 * long_1;
				}
				int_8 = int_1 * int_6;
				int_4 = int_8 * int_2;
				char_2 = char_9 * char_7;
				long_6 = long_1 * long_10;
				double_8 = double_4 * double_9;
				long_5 = long_2 * long_2;
				float_2 = float_3 + float_6;
				int_6 = int_3 * int_5;
				long_5 = long_1 * long_2;
				long_8 = long_10;
				int_8 = int_2 * int_9;
				if(1)
				{
					float_4 = float_7;
					double_7 = double_1 + double_6;
					double_5 = double_10 + double_8;
					unsigned_int_6 = unsigned_int_4 * unsigned_int_6;
					unsigned_int_1 = unsigned_int_11;
					int_2 = int_7 + int_3;
					unsigned_int_5 = unsigned_int_8 + unsigned_int_11;
					unsigned_int_1 = unsigned_int_12 * unsigned_int_1;
					float_7 = float_8 * float_7;
					int_6 = int_4 * int_9;
				}
				long_1 = long_8 + long_5;
				if(1)
				{
					if(1)
					{
						int_1 = int_7 * int_4;
						float_5 = float_3;
					}
				}
			}
			unsigned_int_3 = unsigned_int_8 * unsigned_int_12;
		}
		int_7 = int_4 + int_3;
		double_7 = double_2 + double_11;
	}
	unsigned_int_12 = unsigned_int_3;
	if(1)
	{
		long long_11 = 1;
		char_10 = char_7 * char_4;
		short_2 = short_6 + short_6;
		long_2 = long_11 * long_4;
	}
	if(1)
	{
		long_5 = long_10 * long_9;
	}
	if(1)
	{
		unsigned_int_13 = unsigned_int_5 + unsigned_int_9;
	}
	char_10 = char_6 + char_8;
	unsigned_int_9 = unsigned_int_1;
	short_3 = short_6 + short_5;
	if(1)
	{
		unsigned int unsigned_int_14 = 1;
		unsigned int unsigned_int_15 = 1;
		double double_12 = 1;
		double double_13 = 1;
		short_6 = short_4 + short_1;
		float_8 = float_2 + float_5;
		int_7 = int_4 * int_5;
		float_8 = float_8 + float_8;
		long_10 = long_4;
		short_6 = short_6 * short_6;
		if(1)
		{
			float_7 = float_3 * float_1;
			float_3 = float_6 + float_3;
		}
		unsigned_int_14 = unsigned_int_15;
		double_13 = double_12 * double_4;
		unsigned_int_10 = unsigned_int_12 * unsigned_int_9;
		unsigned_int_15 = unsigned_int_2 + unsigned_int_10;
		int_8 = int_1 + int_8;
		int_7 = int_5;
		float_1 = float_2 * float_7;
		unsigned_int_11 = unsigned_int_1 * unsigned_int_13;
		if(1)
		{
			double_5 = double_8 * double_9;
		}
		if(1)
		{
			if(1)
			{
				int_4 = int_8 * int_1;
			}
			if(1)
			{
				int_3 = int_9 * int_5;
			}
			if(1)
			{
				double_5 = double_1;
			}
			if(1)
			{
				unsigned_int_7 = unsigned_int_4 + unsigned_int_10;
			}
			if(1)
			{
				unsigned_int_7 = unsigned_int_10 * unsigned_int_9;
			}
		}
		unsigned_int_2 = unsigned_int_6 + unsigned_int_2;
	}
	if(1)
	{
		double_9 = double_10 * double_8;
	}
	if(1)
	{
		long_2 = long_6 + long_10;
	}
	short_6 = short_6 + short_7;
	return double_1;
}
int v__smart_cb_change(int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = v__smart_apply(int_1,uni_para);

	double_1 = double_2 * double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_4 = double_1 * double_3;
	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	return int_1;
}
double v__smart_update_queue( float parameter_1,char parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char controller4vul_2231[3];
	fgets(controller4vul_2231 ,3 ,stdin);
	if( strcmp( controller4vul_2231, "RY") < 0)
	{
		int_1 = v__smart_cb_change(uni_para);

	}
	int_3 = int_2 * int_1;
	return double_1;
}
unsigned int v__lost_selection_reset_job()
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_1 + long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "LB") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1;
		float_2 = float_1 + float_2;
	}
	return unsigned_int_1;
	int_1 = v__lost_selection(double_1,-1 );

}
int v__lost_selection(double parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int_2 = int_1 * int_1;
	long_2 = long_1 + long_1;
	long_4 = long_3 * long_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		int_1 = int_2 * int_1;
	}
	char controller4vul_2228[3];
	fgets(controller4vul_2228 ,3 ,stdin);
	if( strcmp( controller4vul_2228, "ut") > 0)
	{
		char controller4vul_2229[3];
		fgets(controller4vul_2229 ,3 ,stdin);
		if( strcmp( controller4vul_2229, "({") > 0)
		{
			int_1 = int_1;
			char controller4vul_2230[2];
			fgets(controller4vul_2230 ,2 ,stdin);
			if( strcmp( controller4vul_2230, "h") > 0)
			{
				long long_5 = 1;
				double_1 = v__smart_update_queue(float_1,char_1,uni_para);

				long_5 = long_1;
			}
			char_1 = char_2 * char_1;
		}
		double_1 = double_2;
	}
	if(1)
	{
		char char_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			double double_3 = 1;
			char char_4 = 1;
			double_3 = double_2 * double_2;
			char_4 = char_3 + char_3;
		}
		char_2 = char_1 * char_3;
		int_2 = int_2;
		short_1 = short_1 + short_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	return int_2;
}
double v__take_selection_text( unsigned int parameter_1,long parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_1 + int_2;
	char_1 = char_1 * char_1;
	char_2 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_3 * int_2;
	float_1 = float_1 + float_2;
	char_2 = char_3;
	char controller4vul_2227[2];
	fgets(controller4vul_2227 ,2 ,stdin);
	if( strcmp( controller4vul_2227, "t") > 0)
	{
		unsigned int unsigned_int_4 = 1;
		int_3 = v__lost_selection(double_1,uni_para);

		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	}
	double_2 = double_3;
	return double_1;
}
char v__cb_ctxp_link_content_copy(long parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	long_1 = v_termio_selection_get(float_1,int_1,int_1,int_2,int_2,long_2,long_2);

	double_1 = v__take_selection_text(unsigned_int_1,long_2,int_1,-1 );

	int_2 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	short_3 = short_1 + short_2;
	double_1 = double_2 * double_2;
	int_1 = int_1 + int_1;
	double_4 = double_2 + double_3;
	int_3 = int_3 * int_3;
	long_3 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_3;
	return char_1;
}
void v_ty_sb_free( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_2 = long_1 + long_1;
	double_1 = double_2;
	double_3 = double_3 + double_3;
}
int v_ty_sb_steal_buf( double parameter_1)
{
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
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int_5 = int_1 * int_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		}
		int_6 = int_5 + int_5;
	}
	double_2 = double_1 + double_1;
	double_4 = double_3 * double_1;
	float_2 = float_1 * float_2;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_3;
	return int_3;
}
int v_codepoint_to_utf8( long parameter_1,char parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_4 = 1;
	if(1)
	{
		char_1 = char_1;
		long_1 = long_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		int_1 = int_1 * int_1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		long_1 = long_2 + long_1;
		int_1 = int_2 * int_1;
	}
	if(1)
	{
		short short_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double_2 = double_1 * double_2;
		int_2 = int_1;
		short_1 = short_1 + short_1;
		char_2 = char_3;
		double_2 = double_3 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_4 = 1;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
		float_1 = float_1;
		unsigned_int_6 = unsigned_int_6;
		unsigned_int_4 = unsigned_int_7 + unsigned_int_3;
		double_1 = double_3 + double_4;
		unsigned_int_1 = unsigned_int_8;
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_5 = 1;
		int int_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		unsigned_int_3 = unsigned_int_7 * unsigned_int_9;
		float_3 = float_2 + float_1;
		double_5 = double_2 + double_2;
		int_2 = int_3;
		float_3 = float_4 + float_3;
		int_1 = int_2 * int_3;
		float_5 = float_1 * float_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 + unsigned_int_8;
	}
	return int_4;
}
void v_ty_sb_spaces_rtrim( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double_3 = double_1 * double_2;
		float_1 = float_1 + float_1;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	}
}
int v_ty_sb_add( double parameter_1,char parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		float_1 = float_1 + float_1;
		double_2 = double_1 + double_1;
		if(1)
		{
		}
		int_1 = int_2;
		int_1 = int_1 + int_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	char_1 = char_1 + char_1;
	int_2 = int_3 * int_4;
	return int_4;
}
unsigned int v__termpty_cellrow_from_beacon_get( float parameter_1,int parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	double double_5 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	double_3 = double_3 + double_1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		float_1 = float_3 + float_2;
	}
	int_1 = int_2;
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		float_6 = float_4 * float_5;
		int_1 = int_1 + int_1;
	}
	int_1 = int_1;
	char_2 = char_1 + char_1;
	int_4 = int_3 + int_3;
	double_4 = double_1 * double_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_5 = 1;
		float float_7 = 1;
		float float_8 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
		long_1 = long_2;
		long_3 = long_2 + long_1;
		short_1 = short_2;
		int_5 = int_1 + int_1;
		char_3 = v_verify_beacon(double_5,int_4);

		float_8 = float_3 + float_7;
	}
	unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
	return unsigned_int_1;
}
long v_termpty_cellrow_get( long parameter_1,int parameter_2,double parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
		}
		short_2 = short_1 * short_2;
	}
	if(1)
	{
	}
	return long_1;
	unsigned_int_1 = v__termpty_cellrow_from_beacon_get(float_1,int_1,long_2);

}
long v_termio_selection_get( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,long parameter_6,long parameter_7)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_6 = 1;
	v_ty_sb_free(float_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		if(1)
		{
			int_1 = v_ty_sb_steal_buf(double_1);

			double_2 = double_1 + double_1;
			double_2 = double_2 * double_1;
		}
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		if(1)
		{
			int_1 = int_3 + int_2;
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
						v_ty_sb_spaces_rtrim(double_1);

						v_termpty_backlog_unlock();

						long_3 = long_1 * long_2;
					}
					if(1)
					{
						float_1 = float_2 + float_1;
					}
				}
				if(1)
				{
					unsigned_int_3 = unsigned_int_2;
				}
			}
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_1 + double_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
				}
				if(1)
				{
					long long_4 = 1;
					long_1 = long_4 * long_3;
				}
				if(1)
				{
					double double_4 = 1;
					long_3 = v_termpty_cellrow_get(long_5,int_3,double_2);

					double_2 = double_4 + double_4;
				}
				if(1)
				{
					v_termpty_backlog_lock();

					unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
				}
				if(1)
				{
					int_2 = v_ty_sb_add(double_1,char_1,double_1);

					float_1 = float_2 + float_3;
				}
			}
			unsigned_int_3 = unsigned_int_3;
		}
		if(1)
		{
			int_1 = v_codepoint_to_utf8(long_5,char_2);

			float_3 = float_3;
		}
	}
	return long_6;
}
char v__cb_ctxp_link_open(char parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1 * int_2;
	double_2 = v__activate_link(short_1,short_1);

	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 + double_2;
	return char_3;
}
char v__should_inline( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 + float_2;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	short_1 = v_termio_config_get(int_3);

	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	return char_1;
}
unsigned int v_link_is_email()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
}
void v_link_is_protocol( double parameter_1)
{
}
int v_link_is_url( unsigned int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	return int_1;
	v_link_is_protocol(double_1);

}
double v__activate_link( short parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_7 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	short short_4 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_9 = 1;
	short_1 = short_2;
	float_1 = float_1;
	long_2 = long_1 * long_1;
	int_3 = int_1 + int_2;
	double_1 = double_1 * double_2;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
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
			int int_5 = 1;
			char_1 = v__should_inline(int_4);

			int_5 = int_1 + int_2;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
		}
	}
	if(1)
	{
		int_4 = int_6;
	}
	if(1)
	{
		float_2 = float_2 * float_3;
	}
	if(1)
	{
		int_7 = int_6 * int_1;
		char_2 = char_2 + char_3;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
		float_3 = float_3 * float_2;
		float_3 = float_3 + float_4;
		if(1)
		{
			int_6 = int_1 * int_1;
		}
		if(1)
		{
			short short_3 = 1;
			short_1 = short_3 * short_4;
		}
		int_8 = int_7;
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
			unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		int_4 = v_link_is_url(unsigned_int_5);

		int_2 = int_3 + int_3;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
		if(1)
		{
			char char_5 = 1;
			float float_5 = 1;
			char_5 = char_3 + char_4;
			if(1)
			{
				if(1)
				{
					unsigned_int_4 = v_link_is_email();

					float_5 = float_3 * float_4;
					int_4 = int_8 + int_3;
				}
				if(1)
				{
					short_1 = short_2 * short_2;
					double_3 = double_3 * double_1;
				}
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
					}
				}
				if(1)
				{
					if(1)
					{
						int_8 = int_4 * int_3;
					}
				}
				if(1)
				{
					if(1)
					{
						double_4 = double_2 + double_1;
					}
				}
				float_4 = v_media_src_type_get(long_1);

				float_5 = float_4 * float_5;
				short_1 = short_4;
			}
		}
	}
	if(1)
	{
		double double_5 = 1;
		double_4 = double_5 * double_5;
		int_8 = int_3 * int_1;
		if(1)
		{
			int_6 = int_9 + int_4;
			if(1)
			{
				double double_6 = 1;
				long_1 = long_2 * long_1;
				double_5 = double_5 * double_6;
			}
			if(1)
			{
				long long_3 = 1;
				if(1)
				{
					if(1)
					{
						char_1 = char_1 * char_1;
					}
				}
				if(1)
				{
					if(1)
					{
						short short_5 = 1;
						short_2 = short_5 + short_4;
					}
				}
				if(1)
				{
					if(1)
					{
						float_3 = float_3;
					}
				}
				char_3 = char_4;
				long_3 = long_2;
			}
		}
	}
	if(1)
	{
		int_3 = int_7 * int_7;
	}
	int_9 = int_1 * int_8;
	if(1)
	{
		char_1 = char_2;
	}
	return double_3;
}
int v__cb_ctxp_link_preview(short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 * double_1;
	char_3 = char_1 + char_2;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2 * int_2;
	double_1 = v__activate_link(short_1,short_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	return int_2;
}
int v__is_fmt( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
		if(1)
		{
			float_1 = float_1 * float_2;
		}
		if(1)
		{
		}
	}
	return int_1;
}
float v_media_src_type_get( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		int_1 = v__is_fmt(double_2,int_2);

		int_2 = int_2 * int_1;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 * int_4;
	}
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3 + double_3;
	}
	return float_1;
}
double v__mouse_in_selection( short parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	int_1 = int_1 + int_2;
	char_1 = char_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		double_3 = double_1 * double_2;
		int_2 = int_1 + int_3;
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
	return double_3;
}
float v__smart_xy_to_cursor( unsigned int parameter_1,double parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double_1 = double_1 + double_2;
	double_2 = double_2;
	int_2 = int_1 + int_1;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int_1 = int_2 * int_2;
	}
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	return float_1;
}
unsigned int v__cb_link_down(long parameter_2,long parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		float float_2 = 1;
		int_3 = int_1 * int_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		float_2 = float_1 + float_2;
	}
	char controller4vul_2224[2];
	fgets(controller4vul_2224 ,2 ,stdin);
	if( strcmp( controller4vul_2224, "o") > 0)
	{
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		double double_3 = 1;
		short short_2 = 1;
		char char_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		long_1 = long_1 * long_1;
		double_1 = double_1 * double_1;
		double_1 = double_1 + double_2;
		double_2 = double_2 + double_1;
		char controller4vul_2225[2];
		fgets(controller4vul_2225 ,2 ,stdin);
		if( strcmp( controller4vul_2225, "Q") < 0)
		{
			unsigned_int_3 = unsigned_int_2;
			int_3 = int_4;
			char controller4vul_2226[3];
			fgets(controller4vul_2226 ,3 ,stdin);
			if( strcmp( controller4vul_2226, "^2") < 0)
			{
				short_1 = v__cb_ctxp_link_copy(float_3,uni_para);

			}
		}
		int_1 = int_4 + int_3;
		int_2 = int_4 * int_4;
		if(1)
		{
			float_1 = float_3 + float_1;
			if(1)
			{
				double_2 = double_2 + double_3;
			}
		}
		int_1 = int_4 * int_4;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		}
		if(1)
		{
			float_3 = float_1 * float_1;
			short_1 = short_2;
		}
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, "zT") < 0)
		{
			char_1 = char_2 + char_1;
		}
		double_1 = double_2 + double_3;
		short_1 = short_2;
		long_1 = long_1 * long_2;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
		char_3 = char_2 + char_2;
	}
	return unsigned_int_1;
}
double v_main_term_popup_exists( char parameter_1)
{
	double double_1 = 1;
	return double_1;
}
double v__update_link( unsigned int parameter_1,float parameter_2,long parameter_3,short parameter_4,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	short short_1 = 1;
	long long_4 = 1;
	long_2 = long_1 + long_1;
	float_1 = float_1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	double_4 = double_2 + double_3;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	if(1)
	{
		long_3 = long_3;
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		double_5 = double_5 + double_3;
	}
	if(1)
	{
	}
	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_2 = 1;
		char char_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned_int_3 = unsigned_int_1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		short_1 = short_2 * short_3;
		char controller4vul_2222[3];
		fgets(controller4vul_2222 ,3 ,stdin);
		if( strcmp( controller4vul_2222, "3U") > 0)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
			char controller4vul_2223[3];
			fgets(controller4vul_2223 ,3 ,stdin);
			if( strcmp( controller4vul_2223, "5B") < 0)
			{
				unsigned_int_2 = v__cb_link_down(long_4,long_2,uni_para);

				int_1 = int_2 * int_2;
			}
			if(1)
			{
				short_3 = short_3 + short_1;
			}
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 + char_2;
			long_3 = long_2 + long_2;
		}
		if(1)
		{
			char char_3 = 1;
			double_3 = double_5 + double_5;
			char_4 = char_3 + char_3;
		}
		short_1 = short_1 + short_1;
		double_1 = double_6 + double_7;
		char_2 = char_4;
		int_2 = int_1;
		double_3 = double_2 * double_1;
		double_5 = double_3 + double_7;
		if(1)
		{
			int_2 = int_1 + int_1;
		}
	}
	return double_3;
}
int v__remove_links( long parameter_1,long parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double_3 = double_1 * double_2;
	char controller4vul_2221[2];
	fgets(controller4vul_2221 ,2 ,stdin);
	if( strcmp( controller4vul_2221, "2") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_2 = v__update_link(unsigned_int_1,float_1,long_1,short_1,uni_para);

		int_1 = int_1;
		unsigned_int_2 = unsigned_int_3;
	}
	char_1 = char_1 + char_2;
	short_3 = short_1 + short_2;
	double_2 = double_2;
	int_1 = int_1 * int_1;
	double_3 = double_2;
	short_1 = short_4;
	return int_1;
}
int v__sel_set( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "M") < 0)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_1 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	return int_2;
}
int v_termio_scroll_get()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_2;
	int_1 = int_1 * int_2;
	return int_2;
}
void v_miniview_position_offset( unsigned int parameter_1,int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	int_1 = int_1;
	long_1 = long_1 + long_1;
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_2 = 1;
		int int_3 = 1;
		short_3 = short_1 + short_2;
		char_3 = char_1 + char_2;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "7{") > 0)
		{
			long long_2 = 1;
			short short_4 = 1;
			short short_5 = 1;
			long_2 = long_1 + long_1;
			short_5 = short_4 + short_2;
			int_2 = int_3;
		}
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_1 = double_1 + double_2;
			int_1 = int_3 + int_4;
			double_4 = double_3 + double_3;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_4 = 1;
			int int_5 = 1;
			long_1 = long_1;
			char_3 = char_3 + char_4;
			if(1)
			{
				int_2 = int_5 + int_4;
			}
			if(1)
			{
				int int_6 = 1;
				int_2 = v_termio_scroll_get();

				int_4 = int_6 * int_5;
			}
		}
	}
}
double v_term_miniview_get( char parameter_1)
{
	double double_1 = 1;
	if(1)
	{
	}
	return double_1;
}
void v_termio_scroll( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int int_1 = 1;
	long_1 = long_1 + long_2;
	float_3 = float_1 + float_2;
	double_1 = double_1 * double_2;
	if(1)
	{
		long_4 = long_3 + long_2;
		if(1)
		{
			double_3 = double_1 * double_1;
		}
		long_2 = long_4 * long_2;
	}
	long_2 = long_5 + long_6;
	char controller4vul_2218[3];
	fgets(controller4vul_2218 ,3 ,stdin);
	if( strcmp( controller4vul_2218, ":m") < 0)
	{
		long long_7 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		long_2 = long_7 + long_3;
		float_2 = float_4;
		double_1 = double_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		char controller4vul_2219[2];
		fgets(controller4vul_2219 ,2 ,stdin);
		if( strcmp( controller4vul_2219, "n") < 0)
		{
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
			float_2 = float_3 + float_2;
			double_2 = double_1 + double_1;
			char_2 = char_1 + char_1;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
			char controller4vul_2220[3];
			fgets(controller4vul_2220 ,3 ,stdin);
			if( strcmp( controller4vul_2220, "(?") > 0)
			{
				int_1 = v__remove_links(long_4,long_3,uni_para);

				long_3 = long_6 + long_7;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_1;
		}
		if(1)
		{
			double double_4 = 1;
			int int_2 = 1;
			double_2 = double_3 * double_4;
			int_2 = int_2;
			char_1 = char_1 * char_1;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_1;
		}
	}
}
void v_termpty_save_new( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	double_3 = double_1 * double_2;
	v_termpty_save_free(short_1);

}
unsigned int v_termpty_save_expand( int parameter_1,short parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int_3 = int_1 + int_2;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	float_2 = float_2 + float_1;
	double_3 = double_1 + double_2;
	int_2 = int_4 + int_1;
	return unsigned_int_1;
}
short v__termpty_cell_is_empty( char parameter_1)
{
	short short_1 = 1;
	if(1)
	{
	}
	return short_1;
}
char v_termpty_line_length( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_3 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		short_1 = v__termpty_cell_is_empty(char_1);

		char_2 = char_2;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "76") > 0)
		{
		}
	}
	return char_3;
}
char v_verify_beacon( double parameter_1,int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
void v_termpty_text_save_top( long parameter_1,double parameter_2,float parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	short_2 = short_1 * short_2;
	short_2 = short_2 * short_1;
	double_2 = double_1 + double_1;
	char_1 = v_termpty_line_length(double_1,int_1);

	double_1 = double_3 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 * float_2;
		if(1)
		{
			v_termpty_backlog_lock();

			short_4 = short_3 * short_4;
		}
		if(1)
		{
			float float_6 = 1;
			float_6 = float_4 * float_5;
			unsigned_int_1 = v_termpty_save_expand(int_2,short_2,float_4);

			double_1 = double_2 + double_1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
			char_1 = char_1 * char_2;
		}
	}
	float_5 = float_1 * float_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
	}
	short_1 = short_3 * short_5;
	unsigned_int_6 = unsigned_int_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_6;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_7;
	v_termpty_backlog_unlock();

	int_2 = int_3 + int_4;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
	char controller_7[2];
	fgets(controller_7 ,2 ,stdin);
	if( strcmp( controller_7, "{") > 0)
	{
		double double_4 = 1;
		short short_6 = 1;
		v_termpty_save_new(double_2,int_4);

		double_3 = double_1 * double_4;
		char_2 = v_verify_beacon(double_5,int_1);

		short_6 = short_1 + short_4;
	}
	double_6 = double_5;
}
void v_termpty_text_scroll( long parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	int int_4 = 1;
	int int_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1;
	double_2 = double_2 * double_2;
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		double_2 = double_2 * double_3;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_4 * double_3;
	char controller4vul_2216[2];
	fgets(controller4vul_2216 ,2 ,stdin);
	if( strcmp( controller4vul_2216, "[") < 0)
	{
		char char_1 = 1;
		int int_5 = 1;
		char_1 = char_1 + char_1;
		char controller4vul_2217[2];
		fgets(controller4vul_2217 ,2 ,stdin);
		if( strcmp( controller4vul_2217, "L") > 0)
		{
			long long_2 = 1;
			long long_3 = 1;
			v_termio_scroll(long_1,int_1,int_3,int_4,uni_para);

			long_1 = long_2 + long_3;
		}
		int_2 = int_1 * int_5;
		if(1)
		{
			int_6 = int_5 * int_5;
		}
	}
	if(1)
	{
		short short_1 = 1;
		double double_5 = 1;
		float float_1 = 1;
		short_1 = short_1 * short_1;
		double_5 = double_2 * double_3;
		if(1)
		{
			float_1 = float_1 + float_1;
		}
		short_1 = short_1 * short_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_4 = 1;
			short short_2 = 1;
			float float_2 = 1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
			short_1 = short_2;
			float_2 = float_1 + float_1;
		}
		if(1)
		{
			int_1 = int_4 + int_6;
		}
	}
}
void v_termpty_text_scroll_test( float parameter_1,short parameter_2,int uni_para)
{
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char_1 = char_1 * char_1;
	char controller4vul_2214[3];
	fgets(controller4vul_2214 ,3 ,stdin);
	if( strcmp( controller4vul_2214, "`8") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
		char controller4vul_2215[2];
		fgets(controller4vul_2215 ,2 ,stdin);
		if( strcmp( controller4vul_2215, "p") < 0)
		{
			char char_2 = 1;
			v_termpty_text_scroll(long_1,char_1,uni_para);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			int_1 = int_1;
			char_2 = char_2 + char_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		float float_1 = 1;
		unsigned_int_2 = unsigned_int_1;
		int_2 = int_1;
		float_1 = float_1 * float_1;
	}
}
char v__cursor_to_start_of_line()
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short_1 = short_1 + short_2;
	return char_1;
}
char v__tab_forward( long parameter_1,int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
char v__handle_cursor_control( float parameter_1,float parameter_2,int uni_para)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char controller4vul_2213[3];
	fgets(controller4vul_2213 ,3 ,stdin);
	if( strcmp( controller4vul_2213, "L9") < 0)
	{
		v_termpty_text_scroll_test(float_1,short_1,uni_para);

		int_1 = int_1;
	}
	int_1 = int_1;
	long_1 = long_1;
	short_3 = short_2 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_3;
	float_3 = float_1 * float_2;
	short_2 = short_3 * short_2;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	long_1 = long_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	double_4 = double_1 + double_3;
	if(1)
	{
		double double_5 = 1;
		long long_2 = 1;
		char_2 = char_1 + char_2;
		double_3 = double_4 + double_5;
		long_1 = long_2 * long_2;
	}
	char_1 = char_2 + char_1;
	return char_3;
}
int v_termpty_handle_seq( float parameter_1,char parameter_2,unsigned int parameter_3,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	float_3 = float_1 * float_2;
	char controller4vul_2210[2];
	fgets(controller4vul_2210 ,2 ,stdin);
	if( strcmp( controller4vul_2210, "O") < 0)
	{
		double double_1 = 1;
		unsigned_int_1 = v__handle_esc(float_1,float_1,unsigned_int_1,uni_para);

		double_1 = double_1 * double_1;
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "r") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	return int_3;
}
void v_termpty_handle_buf( unsigned int parameter_1,double parameter_2,int parameter_3,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float_2 = float_1 + float_2;
	short_1 = short_2;
	short_3 = short_2;
	long_2 = long_1 * long_2;
	char controller4vul_2209[3];
	fgets(controller4vul_2209 ,3 ,stdin);
	if( strcmp( controller4vul_2209, "8u") > 0)
	{
		double double_1 = 1;
		int_1 = v_termpty_handle_seq(float_1,char_1,unsigned_int_1,uni_para);

		double_2 = double_1 + double_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_2 = int_3;
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_5 = int_2 * int_4;
	}
	if(1)
	{
		int int_6 = 1;
		int_1 = int_6 * int_1;
	}
	double_2 = double_2;
}
void v_theme_reload( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_2 = int_1 * int_1;
	int_3 = int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
}
int v_theme_reload_cb(double parameter_2,long parameter_3,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double_1 = double_2;
	float_2 = float_1 + float_2;
	double_1 = double_3 + double_4;
	v_theme_reload(float_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	long_2 = long_1 * long_2;
	if(1)
	{
		double_1 = double_3;
	}
	return int_1;
}
void v_theme_auto_reload_enable( int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int_1 = v_theme_reload_cb(double_1,long_1,short_1);

	float_1 = float_1 + float_1;
}
void v__cursor_shape_to_group_name( float parameter_1)
{
}
double v_config_theme_path_default_get()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	return double_1;
}
short v_theme_path_get()
{
	short short_1 = 1;
	return short_1;
}
unsigned int v_config_theme_path_get( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 + short_2;
	short_1 = v_theme_path_get();

	unsigned_int_1 = unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "w:") > 0)
	{
	}
	return unsigned_int_1;
}
char v_theme_apply( int parameter_1,short parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short_1 = short_1 + short_2;
	int_1 = int_1 + int_2;
	float_1 = float_1;
	double_1 = v_config_theme_path_default_get();

	int_3 = int_3 * int_4;
	if(1)
	{
	}
	unsigned_int_1 = v_config_theme_path_get(double_2);

	long_2 = long_1 + long_1;
	int_6 = int_4 + int_5;
	if(1)
	{
	}
	double_1 = double_1 + double_3;
	int_1 = int_5;
	return char_1;
}
void v_termio_set_cursor_shape( float parameter_1,float parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	v_theme_auto_reload_enable(int_1);

	short_1 = short_2;
	double_1 = double_1;
	int_3 = int_2 * int_1;
	char_1 = v_theme_apply(int_4,short_2,int_3);

	char_1 = char_1 * char_2;
	long_2 = long_1 * long_1;
	int_1 = int_4 * int_4;
	char_1 = char_1;
	double_3 = double_2 + double_1;
	double_1 = double_1 * double_3;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_3 + short_2;
		if(1)
		{
			char_1 = char_2 + char_1;
		}
		if(1)
		{
			v__cursor_shape_to_group_name(float_1);

			char_2 = char_1;
		}
	}
}
void v_termpty_clear_tabs_on_screen( short parameter_1)
{
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	v_termpty_backlog_lock();

	int_1 = int_2;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
		int_2 = int_3 * int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		v_termpty_backlog_unlock();

		unsigned_int_3 = unsigned_int_3;
	}
	long_3 = long_1 + long_2;
	long_2 = long_3 * long_3;
	double_3 = double_1 * double_2;
	v_termpty_save_free(short_1);

}
long v__ts_free()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long_3 = long_1 + long_2;
	return long_2;
}
void v_termpty_save_free( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 * short_1;
		}
		long_1 = long_2;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	char_3 = char_1 * char_2;
	long_2 = v__ts_free();

	int_2 = int_1 * int_1;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	char char_4 = 1;
	double_2 = double_1 * double_2;
	char_2 = char_1 + char_2;
	v_termpty_save_free(short_1);

	int_1 = int_1 + int_1;
	v_termpty_backlog_size_set(double_2,double_1);

	long_2 = long_1 + long_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v_termpty_backlog_unlock();

		double_2 = double_1 * double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char_3 = char_3 * char_1;
		}
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_2 = unsigned_int_2;
	}
	v_termpty_backlog_lock();

	long_1 = long_3 + long_1;
	float_2 = float_1 * float_1;
	char_1 = char_3 * char_3;
	short_1 = short_2 * short_1;
	char_4 = char_4;
}
void v_termpty_reset_att( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	int_1 = int_2;
	double_4 = double_3 * double_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_3 * int_2;
	float_1 = float_1 * float_1;
	long_1 = long_1;
	double_4 = double_1 + double_4;
	char_2 = char_1 * char_2;
	int_3 = int_2 + int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_1 + short_2;
	int_4 = int_3 * int_1;
	int_3 = int_1 * int_5;
	long_1 = long_2 + long_2;
	float_2 = float_1;
	float_3 = float_1;
	char_1 = char_1 * char_1;
	double_3 = double_2 + double_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
}
short v_termio_config_get( int parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float_1 = float_1 * float_1;
	int_1 = int_1 * int_2;
	return short_1;
}
void v_termpty_reset_state()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	char char_3 = 1;
	short short_4 = 1;
	int int_7 = 1;
	short short_5 = 1;
	short short_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	int int_8 = 1;
	long long_4 = 1;
	double_1 = double_1 * double_2;
	double_3 = double_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	float_2 = float_1 + float_1;
	int_2 = int_1 * int_1;
	short_1 = short_1 * short_2;
	char_2 = char_1 * char_2;
	double_2 = double_4 * double_4;
	v_termpty_reset_att(short_2);

	v_termpty_clear_backlog(short_3);

	int_3 = int_1 + int_2;
	double_2 = double_5;
	v_termpty_clear_tabs_on_screen(short_3);

	double_5 = double_4 * double_6;
	int_6 = int_4 + int_5;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	short_3 = short_3 * short_2;
	double_7 = double_6 * double_5;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	char_1 = char_1 * char_2;
	double_3 = double_1;
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	char_3 = char_3;
	short_3 = short_3 * short_1;
	short_4 = v_termio_config_get(int_7);

	short_6 = short_5 * short_2;
	short_1 = short_3 + short_5;
	char_2 = char_2 + char_1;
	long_2 = long_1 + long_2;
	char_1 = char_2 * char_4;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
	v_termio_set_cursor_shape(float_1,float_2);

	long_3 = long_1 * long_1;
	int_2 = int_8 + int_5;
	long_1 = long_2 + long_4;
	int_7 = int_3;
	float_2 = float_2 * float_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_6;
	int_5 = int_2 * int_2;
	int_7 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_5 = int_3 * int_6;
	}
	if(1)
	{
		double_1 = double_4 + double_3;
	}
}
void v_termpty_resize_tabs( char parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_6 = 1;
	int_2 = int_1 + int_2;
	int_1 = int_3 + int_1;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	double_4 = double_3 + double_4;
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float_1 = float_1 + float_1;
		if(1)
		{
			double double_5 = 1;
			double_1 = double_5 + double_3;
		}
		if(1)
		{
			char_2 = char_1 * char_1;
		}
		char_1 = char_1 + char_2;
	}
	double_4 = double_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int_4 = int_2;
	}
}
double v__termpty_init( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	double_3 = double_2 + double_2;
	double_4 = double_2 + double_2;
	float_2 = float_1 + float_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	v_termpty_reset_state();

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	v_termpty_resize_tabs(char_1,int_1,int_1);

	double_3 = double_4 + double_1;
	int_2 = int_1 * int_2;
	float_3 = float_4;
	float_4 = float_4 + float_1;
	return double_3;
}
void v__add_default_keys()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	int int_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	char char_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_5 = 1;
	int int_6 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	double double_5 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	char_1 = char_1 * char_1;
	int_2 = int_1 * int_2;
	float_3 = float_1 * float_2;
	float_1 = float_1;
	char_3 = char_2 * char_3;
	float_3 = float_1 + float_4;
	double_1 = double_1 * double_2;
	int_4 = int_1 + int_3;
	double_3 = double_1 + double_2;
	int_5 = int_3 * int_1;
	int_2 = int_5;
	char_2 = char_2 + char_2;
	short_1 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	double_3 = double_3 + double_4;
	char_2 = char_2 * char_2;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	char_4 = char_2 * char_1;
	long_3 = long_1 + long_3;
	long_1 = long_2 + long_4;
	char_3 = char_2 * char_5;
	int_1 = int_5 * int_5;
	float_1 = float_2 * float_1;
	int_6 = int_6 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	short_2 = short_1 + short_1;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_2 + double_1;
	int_3 = int_1 + int_6;
	int_4 = int_5;
	float_5 = float_4 + float_2;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	int_4 = int_4;
	short_3 = short_3;
	long_3 = long_4 * long_1;
	double_5 = double_1 + double_4;
	char_2 = char_4 * char_5;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
	short_4 = short_1;
	float_5 = float_2;
	char_2 = char_5 + char_2;
	long_4 = long_4 + long_2;
	double_1 = double_5;
	short_4 = short_1 + short_2;
	int_1 = int_5 * int_3;
	double_1 = double_2;
}
void v_colors_standard_get( int parameter_1,int parameter_2,unsigned int parameter_3,short parameter_4,short parameter_5,int parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ")e") < 0)
	{
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long_1 = long_1 * long_1;
		int_1 = int_1 * int_2;
		char_1 = char_1;
		int_3 = int_1 * int_2;
		short_1 = short_1 + short_1;
		short_1 = short_1 + short_1;
		short_3 = short_2 + short_2;
	}
	double_3 = double_1 + double_2;
	char_3 = char_2 + char_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 + float_1;
}
float v_config_new()
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	char_1 = char_1;
	double_1 = double_2;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		int int_1 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_5 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		int int_9 = 1;
		int int_10 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_10 = 1;
		short short_4 = 1;
		int int_11 = 1;
		char_3 = char_2 * char_3;
		double_2 = double_1 * double_2;
		int_1 = int_1;
		int_1 = int_1 * int_1;
		int_1 = int_2 + int_1;
		int_3 = int_3;
		double_4 = double_1 + double_3;
		char_3 = char_3 + char_4;
		char_4 = char_4;
		long_1 = long_1 + long_2;
		int_1 = int_2 * int_2;
		float_1 = float_1 + float_2;
		double_3 = double_1;
		int_2 = int_2 * int_1;
		int_3 = int_4 * int_4;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		float_1 = float_1 + float_2;
		char_2 = char_5 * char_3;
		float_3 = float_1 * float_2;
		unsigned_int_1 = unsigned_int_4;
		int_2 = int_1 + int_2;
		double_2 = double_2 + double_2;
		v_colors_standard_get(int_4,int_5,unsigned_int_5,short_1,short_1,int_2);

		float_3 = float_2 + float_2;
		long_2 = long_2;
		double_1 = double_1;
		short_3 = short_2 + short_1;
		int_5 = int_4 * int_2;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_6 = unsigned_int_7 + unsigned_int_4;
		int_6 = int_1;
		char_1 = char_5 * char_1;
		double_4 = double_4 * double_2;
		int_1 = int_1 + int_7;
		int_5 = int_8 + int_5;
		short_2 = short_1 * short_3;
		unsigned_int_9 = unsigned_int_1 + unsigned_int_8;
		v__add_default_keys();

		int_6 = int_2 * int_8;
		int_10 = int_9 * int_8;
		unsigned_int_2 = unsigned_int_9 * unsigned_int_6;
		long_1 = long_2 * long_2;
		float_4 = float_4 + float_2;
		unsigned_int_5 = unsigned_int_9 + unsigned_int_9;
		double_1 = double_1 * double_3;
		unsigned_int_10 = unsigned_int_1 * unsigned_int_5;
		unsigned_int_10 = unsigned_int_5 * unsigned_int_4;
		short_4 = short_2;
		float_1 = float_3 * float_4;
		int_3 = int_5 * int_6;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double double_5 = 1;
				double double_6 = 1;
				short_1 = short_1 * short_4;
				int_2 = int_4;
				char_3 = char_3 * char_2;
				double_3 = double_5 * double_6;
				float_4 = float_3 * float_1;
				int_9 = int_6;
			}
		}
		double_2 = double_4;
		int_2 = int_11 * int_5;
	}
	return float_1;
}
int main()
{
	int uni_para =985;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_7 = 1;
	double double_8 = 1;
	float float_6 = 1;
	double double_10 = 1;
	char char_5 = 1;
	int int_8 = 1;
	char_2 = char_1 + char_1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_2;
	float_1 = float_1 + float_2;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	double_2 = double_3 + double_1;
	int_3 = int_1 * int_3;
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	double_2 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	short_2 = short_1 + short_2;
	if(1)
	{
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		int_4 = int_1 * int_4;
	}
	short_2 = short_3 * short_4;
	if(1)
	{
	}
	short_2 = short_3 * short_3;
	float_3 = float_1 * float_2;
	double_3 = double_2 + double_1;
	char controller4vul_2205[2];
	fgets(controller4vul_2205 ,2 ,stdin);
	if( strcmp( controller4vul_2205, "?") > 0)
	{
		float float_4 = 1;
		float float_5 = 1;
		double double_4 = 1;
		if(1)
		{
			int_1 = int_5 * int_6;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		}
		unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
		if(1)
		{
			long_3 = long_3 + long_1;
		}
		float_2 = float_4 + float_3;
		if(1)
		{
			float_1 = float_4;
		}
		int_5 = int_2 * int_3;
		if(1)
		{
			short_4 = short_3 * short_2;
		}
		float_4 = float_3 * float_5;
		if(1)
		{
			int_3 = int_5 + int_4;
		}
		if(1)
		{
			float_1 = float_2 + float_4;
		}
		int_1 = int_3 * int_1;
		if(1)
		{
			unsigned_int_6 = unsigned_int_1 + unsigned_int_3;
		}
		float_5 = float_1 * float_1;
		if(1)
		{
			double_5 = double_4 + double_1;
		}
		char controller4vul_2206[3];
		fgets(controller4vul_2206 ,3 ,stdin);
		if( strcmp( controller4vul_2206, "p[") > 0)
		{
			double_2 = double_5 * double_6;
			char controller4vul_2207[3];
			fgets(controller4vul_2207 ,3 ,stdin);
			if( strcmp( controller4vul_2207, "3T") > 0)
			{
				double double_7 = 1;
				double_5 = double_7 * double_4;
				double_2 = double_3;
				char controller4vul_2208[3];
				fgets(controller4vul_2208 ,3 ,stdin);
				if( strcmp( controller4vul_2208, "(d") < 0)
				{
					v_termpty_handle_buf(unsigned_int_6,double_5,int_7,uni_para);

					float_1 = float_1 + float_5;
				}
				if(1)
				{
					unsigned_int_3 = unsigned_int_5 + unsigned_int_5;
				}
				if(1)
				{
					char char_3 = 1;
					char char_4 = 1;
					char_4 = char_3 * char_2;
				}
				if(1)
				{
					short short_5 = 1;
					short_4 = short_5;
				}
				if(1)
				{
					double_7 = double_8 * double_8;
				}
				if(1)
				{
					double_2 = double_3 + double_5;
				}
				if(1)
				{
					float_6 = float_5;
				}
				if(1)
				{
					unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
				}
				if(1)
				{
					unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
				}
				if(1)
				{
					double_4 = double_2 * double_8;
				}
				if(1)
				{
					int_1 = int_4 * int_5;
				}
				if(1)
				{
					double double_9 = 1;
					double_3 = double_9;
				}
			}
			if(1)
			{
				int_5 = int_3;
			}
		}
	}
	if(1)
	{
		double_2 = double_6 * double_3;
	}
	if(1)
	{
		int_3 = int_6 + int_1;
	}
	if(1)
	{
		char_2 = char_2 + char_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			unsigned_int_5 = unsigned_int_7 * unsigned_int_8;
		}
	}
	double_10 = double_8 + double_10;
	float_1 = float_6 + float_6;
	char_2 = char_5 * char_2;
	int_4 = int_3 * int_8;
	if(1)
	{
		char char_6 = 1;
		int int_9 = 1;
		char_1 = char_6 + char_5;
		int_9 = int_1 * int_5;
	}
	return int_5;
}

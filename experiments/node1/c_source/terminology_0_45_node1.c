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

double v__termpty_shutdown( short parameter_1);
void v_termpty_text_scroll_rev_test( long parameter_1,float parameter_2);
double v__handle_esc_dcs( char parameter_1,unsigned int parameter_2,float parameter_3);
char v__handle_op_a( short parameter_1,char parameter_2,double parameter_3);
int v__termpty_ext_handle( int parameter_1,double parameter_2,long parameter_3);
long v__handle_esc_terminology( long parameter_1,double parameter_2,long parameter_3);
float v__handle_xterm_777_command( char parameter_1,char parameter_2,int parameter_3);
long v__smart_calculate_226( long parameter_1);
double v__smart_size( unsigned int parameter_1,int parameter_2,int parameter_3,float parameter_4);
void v_colors_term_init( float parameter_1,int parameter_2,char parameter_3);
void v_termio_config_update();
long v__font_size_set( unsigned int parameter_1,int parameter_2);
void v_termio_font_size_set( unsigned int parameter_1,int parameter_2);
long v__handle_xterm_50_command( unsigned int parameter_1,char parameter_2,int parameter_3);
void v__eina_unicode_to_hex( char parameter_1);
float v__xterm_parse_color( long parameter_1,float parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5);
char v__xterm_arg_get( float parameter_1);
long v__handle_esc_xterm( float parameter_1,float parameter_2,double parameter_3);
void v_termpty_cells_set_content( long parameter_1,short parameter_2,double parameter_3,int parameter_4);
long v__handle_esc_csi_decera( double parameter_1,long parameter_2);
void v_termpty_cells_att_fill_preserve_colors( float parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4);
long v__clean_up_rect_coordinates( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
unsigned int v__handle_esc_csi_decfra( long parameter_1,double parameter_2);
short v__handle_esc_csi_decslrm( int parameter_1,unsigned int parameter_2);
unsigned int v__handle_esc_csi_decstbm( int parameter_1,double parameter_2);
int v__handle_esc_csi_decscusr( int parameter_1,long parameter_2);
short v__handle_esc_csi_dsr( float parameter_1,float parameter_2);
float v__handle_esc_csi_truecolor_cmyk( char parameter_1,int parameter_2);
void v__handle_esc_csi_truecolor_cmy( unsigned int parameter_1,char parameter_2);
unsigned int v__approximate_truecolor_rgb( char parameter_1,int parameter_2,int parameter_3,int parameter_4);
float v__csi_truecolor_arg_get( int parameter_1);
float v__handle_esc_csi_truecolor_rgb( short parameter_1,short parameter_2);
void v__handle_esc_csi_color_set( unsigned int parameter_1,short parameter_2);
void v_termpty_cursor_copy( char parameter_1,int parameter_2);
short v__switch_to_alternative_screen( long parameter_1,int parameter_2);
unsigned int v__move_cursor_to_origin( double parameter_1);
short v__pty_size( float parameter_1);
float v__limit_coord( int parameter_1);
float v__check_screen_info( unsigned int parameter_1,long parameter_2);
char v__termpty_line_rewrap( long parameter_1,char parameter_2,int parameter_3,int parameter_4,short parameter_5);
double v__backlog_remove_latest_nolock( double parameter_1);
void v_termpty_save_extract( float parameter_1);
int v__termpty_line_is_empty( double parameter_1,unsigned int parameter_2);
void v_termpty_screen_swap( int parameter_1);
void v_termpty_resize( int parameter_1,int parameter_2,int parameter_3);
int v_termio_win_get();
double v__handle_esc_csi_reset_mode( unsigned int parameter_1,unsigned int parameter_2,double parameter_3);
void v__handle_esc_csi_cursor_pos_set( unsigned int parameter_1,short parameter_2,double parameter_3);
void v_termpty_text_scroll_rev( short parameter_1,short parameter_2);
void v_termpty_clear_line( int parameter_1,short parameter_2,int parameter_3);
void v_termpty_clear_screen( double parameter_1,unsigned int parameter_2);
void v_termpty_cell_codepoint_att_fill( float parameter_1,int parameter_2,unsigned int parameter_3,long parameter_4,int parameter_5);
short v__termpty_charset_trans( double parameter_1,int parameter_2);
void v_termio_content_change( short parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4,int uni_para);
void v_termpty_text_append( short parameter_1,long parameter_2,int parameter_3,int uni_para);
short v__csi_arg_get();
long v__handle_esc_csi( long parameter_1,double parameter_2,long parameter_3,int uni_para);
double v__safechar( char parameter_1);
double v__handle_esc( int parameter_1,char parameter_2,int parameter_3,int uni_para);
void v_termpty_cell_fill( char parameter_1,double parameter_2,double parameter_3,int parameter_4);
void v_termpty_cells_fill( short parameter_1,short parameter_2,float parameter_3,int parameter_4);
void v_termpty_cells_clear( short parameter_1,char parameter_2,int parameter_3);
int v__tooltip_del(long parameter_2);
short v__tooltip_content(float parameter_2,short parameter_3);
void v_MD5Final( unsigned int parameter_1,double parameter_2);
void v_MD5Transform( int parameter_1,long parameter_2);
void v_byteReverse( short parameter_1,int parameter_2);
void v_MD5Update( unsigned int parameter_1,double parameter_2,float parameter_3);
void v_MD5Init( char parameter_1);
void v_gravatar_tooltip( int parameter_1,short parameter_2,char parameter_3);
char v__cb_link_drag_done(long parameter_2);
double v__cb_link_drag_accept(short parameter_2,unsigned int parameter_3);
short v__cb_link_drag_move(short parameter_2,unsigned int parameter_3,float parameter_4,int parameter_5);
long v__cb_link_icon_new(unsigned int parameter_2,int parameter_3,short parameter_4);
short v__cb_link_move(unsigned int parameter_2,float parameter_3);
void v__cb_link_up_delay();
short v__cb_link_up(long parameter_2,char parameter_3);
void v_term_focus( float parameter_1);
char v__term_is_focused( short parameter_1);
void v_term_unfocus( long parameter_1);
char v__cb_ctxp_del(char parameter_2,double parameter_3);
int v__cb_ctxp_dismissed(unsigned int parameter_2);
void v__cb_ctxp_link_copy(float parameter_2);
void v__screen_visual_bounds( float parameter_1);
int v__draw_cell( short parameter_1,long parameter_2,char parameter_3,short parameter_4);
short v__draw_line( long parameter_1,long parameter_2,double parameter_3,int parameter_4,char parameter_5);
double v_termpty_backlog_length();
long v_termio_pty_get( double parameter_1);
double v_termio_textgrid_get();
float v_miniview_colors_get( unsigned int parameter_1,long parameter_2);
long v__deferred_renderer();
float v__queue_render( int parameter_1);
void v_miniview_redraw( unsigned int parameter_1);
short v__block_obj_del( char parameter_1);
unsigned int v__termpty_is_dblwidth_slow_get( unsigned int parameter_1,int parameter_2);
char v__termpty_is_dblwidth_get( float parameter_1,int parameter_2);
void v_term_preedit_str_get( double parameter_1);
void v_media_get( double parameter_1);
long v__smart_media_clicked(double parameter_2);
unsigned int v_media_control_get( char parameter_1);
double v__smart_media_stop(int parameter_2);
double v__smart_media_pause(char parameter_2);
double v__smart_media_play(double parameter_2);
char v__smart_media_del(double parameter_2,short parameter_3);
void v_media_visualize_set( unsigned int parameter_1,unsigned int parameter_2);
void v_media_mute_set( short parameter_1,char parameter_2);
void v_media_volume_set( float parameter_1,double parameter_2);
short v__cb_media_vol(unsigned int parameter_2,int parameter_3,float parameter_4);
int v__cb_media_pos(double parameter_2,int parameter_3,long parameter_4);
void v__cb_media_pos_drag_stop(unsigned int parameter_2,unsigned int parameter_3,unsigned int parameter_4);
int v__cb_media_pos_drag_start(int parameter_2,double parameter_3,double parameter_4);
void v_media_stop( int parameter_1);
long v__cb_media_stop(float parameter_2,float parameter_3,float parameter_4);
char v__cb_media_pause(float parameter_2,unsigned int parameter_3,long parameter_4);
void v_media_play_set( double parameter_1,long parameter_2);
short v__cb_media_play(float parameter_2,float parameter_3,short parameter_4);
void v_media_position_set( char parameter_1,double parameter_2);
unsigned int v__cb_mov_ref(unsigned int parameter_2);
char v__cb_mov_progress(long parameter_2);
long v__cb_mov_restart();
char v__cb_mov_decode_stop(long parameter_2);
void v__cb_mov_len_change(long parameter_2);
char v__cb_mov_frame_resize(long parameter_2);
char v__cb_mov_frame_decode(unsigned int parameter_2);
unsigned int v__type_mov_init( unsigned int parameter_1);
double v__cb_edje_preloaded(unsigned int parameter_2,short parameter_3,char parameter_4);
short v__type_edje_init();
int v__type_scale_init();
char v__cb_img_frame();
int v__type_img_anim_handle();
char v__cb_img_preloaded(long parameter_2,short parameter_3);
float v__type_img_init( char parameter_1);
unsigned int v__url_compl_cb(int parameter_2);
unsigned int v__url_prog_cb(int parameter_2);
short v__type_thumb_calc( long parameter_1,int parameter_2,double parameter_3,float parameter_4,float parameter_5);
void v__type_mov_calc( float parameter_1,char parameter_2,short parameter_3,short parameter_4,unsigned int parameter_5);
unsigned int v__type_edje_calc( float parameter_1,double parameter_2,float parameter_3,int parameter_4,double parameter_5);
char v__type_img_calc( unsigned int parameter_1,int parameter_2,long parameter_3,short parameter_4,int parameter_5);
char v__cb_scale_preloaded(int parameter_2,short parameter_3);
float v__type_scale_calc( unsigned int parameter_1,char parameter_2,char parameter_3,short parameter_4,int parameter_5,int uni_para);
double v__unsmooth_timeout(int uni_para);
int v__smooth_handler( char parameter_1,int uni_para);
short v__smart_calculate( int parameter_1,int uni_para);
int v__smart_move( unsigned int parameter_1,unsigned int parameter_2,char parameter_3);
int v__smart_resize( int parameter_1,short parameter_2,int parameter_3);
long v__smart_del( int parameter_1);
double v__smart_add();
float v__smart_init(int uni_para);
void v_media_add( int parameter_1,float parameter_2,char parameter_3,int parameter_4,double parameter_5,int uni_para);
char v__block_media_activate( long parameter_1,unsigned int parameter_2,int uni_para);
float v__block_edje_message_cb(float parameter_2,unsigned int parameter_3,int parameter_4);
void v_termpty_write( float parameter_1,int parameter_2,int parameter_3);
short v__block_edje_signal_cb(unsigned int parameter_2,int parameter_3,float parameter_4);
void v_termpty_block_chid_update( int parameter_1,char parameter_2);
char v__block_edje_cmds( short parameter_1,double parameter_2,char parameter_3,unsigned int parameter_4);
void v_homedir_get( char parameter_1,long parameter_2);
long v__block_edje_activate( long parameter_1,double parameter_2);
unsigned int v__block_activate( int parameter_1,short parameter_2,int uni_para);
long v_termpty_block_get( short parameter_1,int parameter_2);
int v_termpty_block_id_get( float parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( short parameter_1,int parameter_2);
void v__smart_apply( int parameter_1,int uni_para);
int v__smart_cb_change(int uni_para);
long v__smart_update_queue( double parameter_1,int parameter_2,int uni_para);
unsigned int v__lost_selection_reset_job();
short v__lost_selection(int parameter_2,int uni_para);
int v__take_selection_text( long parameter_1,char parameter_2,unsigned int parameter_3,int uni_para);
void v__cb_ctxp_link_content_copy(int parameter_2,int uni_para);
void v_ty_sb_free( double parameter_1);
float v_ty_sb_steal_buf( float parameter_1);
int v_codepoint_to_utf8( char parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim();
int v_ty_sb_add( double parameter_1,double parameter_2,float parameter_3);
double v__termpty_cellrow_from_beacon_get( double parameter_1,int parameter_2,long parameter_3);
double v_termpty_cellrow_get( char parameter_1,int parameter_2,long parameter_3);
double v_termio_selection_get( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,double parameter_6,char parameter_7);
long v__cb_ctxp_link_open(unsigned int parameter_2);
float v__should_inline( double parameter_1);
short v_link_is_email( short parameter_1);
char v_link_is_protocol( long parameter_1);
void v_link_is_url( int parameter_1);
char v__activate_link( double parameter_1,int parameter_2);
char v__cb_ctxp_link_preview(short parameter_2);
int v__is_fmt( short parameter_1,double parameter_2);
float v_media_src_type_get( int parameter_1);
double v__mouse_in_selection( int parameter_1,int parameter_2,int parameter_3);
short v__smart_xy_to_cursor( short parameter_1,long parameter_2,short parameter_3,int parameter_4,int parameter_5);
double v__cb_link_down(char parameter_2,unsigned int parameter_3,int uni_para);
unsigned int v_main_term_popup_exists( unsigned int parameter_1);
void v__update_link( float parameter_1,double parameter_2,short parameter_3,int parameter_4,int uni_para);
long v__remove_links( double parameter_1,short parameter_2,int uni_para);
short v__sel_set( double parameter_1,int parameter_2);
int v_termio_scroll_get( unsigned int parameter_1);
void v_miniview_position_offset( short parameter_1,int parameter_2,char parameter_3);
short v_term_miniview_get( char parameter_1);
void v_termio_scroll( short parameter_1,int parameter_2,int parameter_3,int parameter_4);
long v_termpty_save_new( long parameter_1,int parameter_2);
char v_termpty_save_expand( float parameter_1,int parameter_2,int parameter_3);
float v__termpty_cell_is_empty( float parameter_1);
char v_termpty_line_length( unsigned int parameter_1,float parameter_2);
char v_verify_beacon( unsigned int parameter_1,int parameter_2);
void v_termpty_text_save_top( double parameter_1,short parameter_2,double parameter_3);
void v_termpty_text_scroll( double parameter_1,short parameter_2);
void v_termpty_text_scroll_test( short parameter_1,long parameter_2);
short v__cursor_to_start_of_line( long parameter_1);
unsigned int v__tab_forward( unsigned int parameter_1,int parameter_2);
void v__handle_cursor_control( char parameter_1,long parameter_2);
int v_termpty_handle_seq( short parameter_1,long parameter_2,short parameter_3,int uni_para);
void v_termpty_handle_buf( unsigned int parameter_1,int parameter_2,int parameter_3,int uni_para);
void v_theme_reload( double parameter_1);
unsigned int v_theme_reload_cb(double parameter_2,float parameter_3,int parameter_4);
void v_theme_auto_reload_enable( int parameter_1);
void v__cursor_shape_to_group_name( char parameter_1);
unsigned int v_config_theme_path_default_get( double parameter_1);
int v_theme_path_get();
char v_config_theme_path_get( char parameter_1);
int v_theme_apply( double parameter_1,float parameter_2,unsigned int parameter_3);
void v_termio_set_cursor_shape( int parameter_1,short parameter_2);
void v_termpty_clear_tabs_on_screen( char parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( int parameter_1,short parameter_2);
int v__ts_free();
void v_termpty_save_free( long parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( float parameter_1);
void v_termpty_reset_att( unsigned int parameter_1);
int v_termio_config_get( int parameter_1);
void v_termpty_reset_state( int parameter_1);
void v_termpty_resize_tabs( int parameter_1,int parameter_2,int parameter_3);
unsigned int v__termpty_init( long parameter_1);
char v__add_default_keys( char parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,char parameter_3,long parameter_4,float parameter_5,char parameter_6);
double v_config_new();
double v__termpty_shutdown( short parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	float_1 = float_1;
	return double_1;
}
void v_termpty_text_scroll_rev_test( long parameter_1,float parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		short_1 = short_1 + short_2;
		v_termpty_text_scroll_rev(short_1,short_2);

		int_1 = int_1 * int_1;
		double_1 = double_1;
	}
}
double v__handle_esc_dcs( char parameter_1,unsigned int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				if(1)
				{
					int int_1 = 1;
					int_1 = int_1 * int_2;
				}
				if(1)
				{
					short short_1 = 1;
					short_1 = short_1 * short_1;
				}
			}
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
		}
		if(1)
		{
			double_2 = double_1 * double_2;
		}
		if(1)
		{
		}
		if(1)
		{
			double_2 = double_2 + double_2;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			double_2 = v__safechar(char_1);

			v_termpty_write(float_1,int_2,int_2);

			long_1 = long_1 * long_2;
		}
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_1 * double_1;
		}
	}
	return double_3;
}
char v__handle_op_a( short parameter_1,char parameter_2,double parameter_3)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	float_1 = float_1 + float_1;
	long_3 = long_1 + long_2;
	return char_1;
}
int v__termpty_ext_handle( int parameter_1,double parameter_2,long parameter_3)
{
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_1;
	char_1 = v__handle_op_a(short_1,char_2,double_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
long v__handle_esc_terminology( long parameter_1,double parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int_1 = v_termio_config_get(int_2);

	int_2 = v__termpty_ext_handle(int_1,double_1,long_1);

	int_5 = int_3 + int_4;
	return long_1;
}
float v__handle_xterm_777_command( char parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	double_1 = double_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_1 = int_1;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "ta") < 0)
	{
	}
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_2;
	if(1)
	{
		double_4 = double_2 + double_3;
	}
	double_4 = double_3 + double_5;
	double_2 = double_2;
	short_1 = short_1 + short_2;
	int_1 = int_1;
	int_4 = int_1 * int_3;
	return float_2;
}
long v__smart_calculate_226( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int_2 = int_1 + int_2;
	double_1 = double_1 * double_1;
	char_3 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_3 = long_1 + long_2;
	int_1 = int_1 * int_3;
	unsigned_int_3 = unsigned_int_2;
	long_4 = long_4 * long_5;
	double_1 = double_1;
	return long_6;
}
double v__smart_size( unsigned int parameter_1,int parameter_2,int parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_1;
	if(1)
	{
		short_2 = v__sel_set(double_1,int_1);

		long_1 = v__smart_calculate_226(long_2);

		unsigned_int_2 = unsigned_int_2;
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	int_2 = int_3;
	v__smart_apply(int_1,-1 );

	int_3 = int_2 * int_3;
	long_2 = long_1 + long_2;
	v_termpty_resize(int_4,int_5,int_5);

	unsigned_int_2 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		char_1 = char_1;
	}
	float_1 = float_1;
	int_4 = int_3 + int_3;
	int_1 = int_2 + int_4;
	short_4 = short_3 * short_1;
	double_1 = double_2 * double_3;
	char_1 = char_2;
	return double_4;
}
void v_colors_term_init( float parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double_2 = double_1 * double_2;
	char_3 = char_1 * char_2;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_3;
		if(1)
		{
			char_3 = char_1 * char_2;
			char_1 = char_1;
			long_2 = long_1 * long_1;
			double_2 = double_2;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				int_2 = int_1 * int_1;
				float_2 = float_1 * float_2;
				unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
				unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
				unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
			}
		}
		long_1 = long_2 + long_2;
		char_2 = char_2 + char_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			long long_3 = 1;
			long_2 = long_3 + long_2;
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
			if(1)
			{
				double double_4 = 1;
				double_4 = double_3 * double_2;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
			double_3 = double_3;
			float_1 = float_1 * float_2;
			int_3 = int_3 + int_4;
			long_1 = long_1;
		}
		unsigned_int_6 = unsigned_int_6 + unsigned_int_5;
	}
}
void v_termio_config_update()
{
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char char_4 = 1;
	int int_3 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_8 = 1;
	double double_9 = 1;
	v_colors_term_init(float_1,int_1,char_1);

	double_1 = v__smart_size(unsigned_int_1,int_1,int_1,float_1);

	double_3 = double_2 * double_2;
	v_termpty_backlog_size_set(int_1,short_1);

	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_1;
	if(1)
	{
		double_5 = double_2 + double_4;
	}
	double_6 = double_5 + double_1;
	if(1)
	{
		double double_7 = 1;
		char_1 = char_1 + char_2;
		double_1 = double_7 + double_6;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_3 * char_2;
	}
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_termio_set_cursor_shape(int_1,short_1);

	char_4 = char_1;
	int_2 = int_2 * int_2;
	int_2 = int_2 * int_2;
	int_2 = int_1 + int_1;
	int_3 = int_2 + int_3;
	long_1 = long_2;
	short_1 = short_2 + short_3;
	if(1)
	{
		short_4 = short_3 + short_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	double_5 = double_2 + double_8;
	short_3 = short_4 * short_1;
	short_1 = short_3;
	double_4 = double_4 + double_4;
	double_5 = double_9;
}
long v__font_size_set( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int_3 = int_1 + int_2;
	int_3 = int_1;
	v_termio_config_update();

	int_3 = int_2 + int_4;
	float_2 = float_1 * float_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int int_5 = 1;
		int_3 = int_4 * int_5;
	}
	if(1)
	{
		char char_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		char_1 = char_1 + char_1;
		double_1 = double_1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		double_2 = double_2;
		float_3 = float_1 + float_3;
		double_1 = double_3 + double_2;
	}
	return long_1;
}
void v_termio_font_size_set( unsigned int parameter_1,int parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = v__font_size_set(unsigned_int_1,int_1);

	int_2 = int_2 * int_3;
}
long v__handle_xterm_50_command( unsigned int parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_2;
	return long_1;
	v_termio_font_size_set(unsigned_int_1,int_2);

}
void v__eina_unicode_to_hex( char parameter_1)
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
}
float v__xterm_parse_color( long parameter_1,float parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	float float_3 = 1;
	int_3 = int_1 + int_2;
	int_1 = int_2 * int_3;
	if(1)
	{
		long_1 = long_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			int_2 = int_2 * int_3;
		}
		char_2 = char_1 + char_2;
		double_1 = double_2 * double_3;
		if(1)
		{
			short_1 = short_1 * short_2;
		}
		char_1 = char_2 * char_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3;
		}
		float_1 = float_1 * float_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			int_3 = int_3 * int_2;
		}
		short_2 = short_1 * short_1;
		short_2 = short_1 + short_3;
		if(1)
		{
			double_1 = double_3 * double_3;
		}
		v__eina_unicode_to_hex(char_1);

		short_2 = short_3 + short_3;
		long_1 = long_2 * long_1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		}
		char_3 = char_3 + char_2;
	}
	if(1)
	{
		long long_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		long_1 = long_3 + long_3;
		if(1)
		{
			double_4 = double_4 * double_5;
		}
		float_2 = float_1 + float_1;
		double_1 = double_1 * double_1;
		if(1)
		{
			long long_4 = 1;
			long_1 = long_2 * long_4;
		}
		unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
		double_1 = double_2 * double_5;
		if(1)
		{
			double_3 = double_5 + double_4;
		}
		unsigned_int_6 = unsigned_int_5 + unsigned_int_1;
	}
	if(1)
	{
		int int_4 = 1;
		int_3 = int_3 + int_4;
	}
	long_5 = long_2 + long_2;
	return float_3;
}
char v__xterm_arg_get( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_4 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_2 = 1;
	int_2 = int_1 * int_1;
	int_3 = int_1 * int_1;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	short_1 = short_2;
	unsigned_int_4 = unsigned_int_5;
	int_5 = int_3 + int_4;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_3;
	float_2 = float_3;
	long_1 = long_1 + long_1;
	double_2 = double_1 + double_2;
	char_1 = char_1;
	float_2 = float_4 * float_2;
	short_2 = short_2 * short_2;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_3;
	double_3 = double_1;
	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	long_4 = long_4 + long_4;
	return char_2;
}
long v__handle_esc_xterm( float parameter_1,float parameter_2,double parameter_3)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	short short_3 = 1;
	long long_3 = 1;
	char char_5 = 1;
	int int_8 = 1;
	double double_3 = 1;
	char char_6 = 1;
	char char_7 = 1;
	double double_4 = 1;
	char char_8 = 1;
	float float_4 = 1;
	char_1 = char_1 + char_1;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1;
	int_1 = int_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		char_2 = char_3;
	}
	char_2 = char_4 * char_4;
	long_1 = long_1 + long_1;
	long_1 = long_1 + long_2;
	if(1)
	{
		float_1 = v__handle_xterm_777_command(char_1,char_1,int_3);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	v_termpty_write(float_3,int_4,int_3);

	int_2 = int_3 + int_5;
	if(1)
	{
		int_3 = int_6 + int_6;
	}
	unsigned_int_3 = unsigned_int_1;
	double_1 = double_1 * double_1;
	double_1 = double_1 + double_2;
	long_1 = v__handle_xterm_50_command(unsigned_int_4,char_3,int_7);

	long_1 = long_2 * long_1;
	int_6 = int_4 + int_5;
	if(1)
	{
		short_1 = short_1 * short_3;
	}
	if(1)
	{
		int int_9 = 1;
		float_1 = v__xterm_parse_color(long_3,float_3,char_5,unsigned_int_4,int_2);

		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		char_1 = char_4 + char_3;
		int_5 = v_termio_config_get(int_8);

		int_2 = int_9 + int_6;
	}
	if(1)
	{
		double_2 = double_2 * double_3;
	}
	if(1)
	{
		char_5 = char_5 + char_6;
	}
	char_6 = char_7 * char_4;
	double_2 = double_4 * double_3;
	if(1)
	{
		short short_4 = 1;
		short_2 = short_1 * short_4;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_5 = 1;
		unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
		double_3 = v_termio_textgrid_get();

		short_3 = short_2 + short_5;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		char_8 = v__xterm_arg_get(float_4);

		unsigned_int_3 = unsigned_int_7;
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_8;
	}
	int_2 = int_3;
	float_4 = float_1;
	return long_3;
}
void v_termpty_cells_set_content( long parameter_1,short parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long_2 = long_1 + long_2;
		float_2 = float_1 + float_2;
	}
}
long v__handle_esc_csi_decera( double parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	double_1 = double_2;
	int_2 = int_1 + int_1;
	short_1 = short_1 * short_1;
	double_2 = double_1 * double_3;
	double_3 = double_4 + double_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	short_2 = v__csi_arg_get();

	double_5 = double_3 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long_1 = v__clean_up_rect_coordinates(short_1,int_3,int_4,int_5,int_4);

		long_1 = long_2;
		v_termpty_cells_set_content(long_1,short_3,double_3,int_4);

		int_3 = int_4 * int_5;
	}
	return long_1;
}
void v_termpty_cells_att_fill_preserve_colors( float parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_1 = int_1 + int_1;
	double_3 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_1 = int_1 + int_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		float_2 = float_1 + float_1;
		if(1)
		{
			float float_3 = 1;
			int int_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			double_2 = double_2 * double_2;
			float_2 = float_3 + float_2;
			int_2 = int_1 * int_1;
			float_2 = float_2 * float_1;
			float_3 = float_2;
		}
	}
}
long v__clean_up_rect_coordinates( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_8 = 1;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	double_2 = double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		int_1 = int_2;
		if(1)
		{
			int_4 = int_1 * int_3;
		}
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		char char_4 = 1;
		char_2 = char_1 * char_4;
	}
	if(1)
	{
		int int_6 = 1;
		int_6 = int_5 * int_3;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_3 = double_3 + double_4;
		}
	}
	int_7 = int_1 * int_1;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_3 = short_4;
	}
	if(1)
	{
	}
	int_5 = int_2 * int_4;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
	int_8 = int_2 + int_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	return long_2;
}
unsigned int v__handle_esc_csi_decfra( long parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 * char_2;
	float_1 = float_1 + float_1;
	short_1 = v__csi_arg_get();

	long_1 = v__clean_up_rect_coordinates(short_1,int_1,int_2,int_2,int_2);

	long_3 = long_1 * long_2;
	v_termpty_cells_att_fill_preserve_colors(float_1,double_1,unsigned_int_1,int_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	long_1 = long_4 * long_2;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	long_4 = long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_5 = 1;
		unsigned_int_3 = unsigned_int_1;
		long_1 = long_4 + long_5;
	}
	return unsigned_int_1;
}
short v__handle_esc_csi_decslrm( int parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	float float_3 = 1;
	long long_4 = 1;
	short short_2 = 1;
	char_2 = char_1 + char_2;
	double_3 = double_1 + double_2;
	double_4 = double_2;
	long_2 = long_1 + long_1;
	if(1)
	{
		short_1 = v__csi_arg_get();

		unsigned_int_1 = v__move_cursor_to_origin(double_4);

		long_1 = long_1 * long_2;
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	long_1 = long_1;
	long_1 = long_3 + long_3;
	float_1 = float_3 * float_3;
	long_1 = long_2 * long_4;
	return short_2;
}
unsigned int v__handle_esc_csi_decstbm( int parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	float_1 = float_1 + float_2;
	long_3 = long_1 * long_2;
	long_3 = long_1;
	long_5 = long_4 + long_3;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		unsigned_int_1 = v__move_cursor_to_origin(double_2);

		int_4 = int_3 + int_4;
	}
	double_1 = double_1 + double_1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_1;
	char_1 = char_2;
	return unsigned_int_1;
	short_1 = v__csi_arg_get();

}
int v__handle_esc_csi_decscusr( int parameter_1,long parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v_termio_set_cursor_shape(int_1,short_1);

	double_1 = double_1 * double_1;
	long_1 = long_1 * long_1;
	long_1 = long_2 + long_2;
	short_2 = v__csi_arg_get();

	long_1 = long_2;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	short_2 = short_2 * short_2;
	long_3 = long_3 * long_2;
	float_2 = float_1 + float_2;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	double_3 = double_1 + double_1;
	long_2 = long_3;
	char_1 = char_1 + char_2;
	int_1 = int_2 * int_3;
	return int_1;
}
short v__handle_esc_csi_dsr( float parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_2 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		long long_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		char_2 = char_1 * char_1;
		int_3 = int_1 + int_2;
		long_1 = long_3 + long_4;
		v_termpty_write(float_1,int_4,int_1);

		int_4 = int_2 * int_3;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		int_3 = int_5 + int_6;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		long long_5 = 1;
		double double_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		long_3 = long_5 * long_1;
		unsigned_int_3 = unsigned_int_2;
		short_1 = v__csi_arg_get();

		double_1 = double_1;
		float_4 = float_2 * float_3;
		int_4 = int_4 + int_2;
		double_1 = double_1;
	}
	return short_2;
}
float v__handle_esc_csi_truecolor_cmyk( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_1 = 1;
	double double_7 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_2;
	double_1 = double_3 + double_3;
	double_3 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	double_4 = double_2 * double_1;
	float_2 = v__csi_truecolor_arg_get(int_1);

	double_6 = double_2 + double_5;
	char_1 = char_1 + char_1;
	double_2 = double_2 + double_2;
	double_7 = double_2 * double_3;
	return float_2;
	unsigned_int_2 = v__approximate_truecolor_rgb(char_1,int_2,int_2,int_1);

}
void v__handle_esc_csi_truecolor_cmy( unsigned int parameter_1,char parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_5 = 1;
	float_1 = v__csi_truecolor_arg_get(int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 * short_2;
	unsigned_int_3 = v__approximate_truecolor_rgb(char_1,int_1,int_1,int_1);

	int_2 = int_1 + int_1;
	short_4 = short_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "E") < 0)
	{
	}
	char_3 = char_1 + char_2;
	int_4 = int_3 * int_2;
	short_5 = short_2 * short_3;
}
unsigned int v__approximate_truecolor_rgb( char parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_1 = double_1 * double_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				double double_2 = 1;
				double_1 = v_termio_textgrid_get();

				double_2 = double_2 + double_1;
			}
		}
	}
	return unsigned_int_2;
}
float v__csi_truecolor_arg_get( int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
float v__handle_esc_csi_truecolor_rgb( short parameter_1,short parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = v__csi_truecolor_arg_get(int_1);

	short_1 = short_2;
	double_1 = double_1 * double_1;
	double_2 = double_1 + double_1;
	char_1 = char_2;
	int_3 = int_2 + int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_4 = 1;
		int_3 = int_2;
		unsigned_int_1 = v__approximate_truecolor_rgb(char_2,int_2,int_3,int_1);

		long_2 = long_1 * long_2;
		int_4 = int_4 * int_4;
	}
	if(1)
	{
	}
	return float_1;
}
void v__handle_esc_csi_color_set( unsigned int parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float_2 = float_1 + float_1;
	v__handle_esc_csi_truecolor_cmy(unsigned_int_1,char_1);

	float_2 = v__handle_esc_csi_truecolor_cmyk(char_1,int_1);

	double_1 = double_1 + double_1;
	short_1 = v__csi_arg_get();

	v_termpty_reset_att(unsigned_int_1);

	float_2 = v__handle_esc_csi_truecolor_rgb(short_2,short_2);

}
void v_termpty_cursor_copy( char parameter_1,int parameter_2)
{
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "@") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
		float_2 = float_2 * float_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_1 = double_1 * double_1;
		double_2 = double_2 + double_3;
		float_5 = float_4 * float_4;
		char_1 = char_2;
	}
}
short v__switch_to_alternative_screen( long parameter_1,int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	return short_1;
	v_termpty_screen_swap(int_1);

}
unsigned int v__move_cursor_to_origin( double parameter_1)
{
	int int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ">#") < 0)
	{
		int int_2 = 1;
		char char_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_3 = int_1 + int_2;
		char_1 = char_1;
		short_1 = short_1 + short_1;
		double_1 = double_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "7") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_4 = 1;
		long_1 = long_2;
		int_1 = int_3 * int_4;
	}
	return unsigned_int_1;
}
short v__pty_size( float parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short_1 = short_1;
	int_1 = int_1 * int_2;
	short_2 = short_1 + short_1;
	int_4 = int_3 + int_3;
	int_2 = int_1 * int_1;
	if(1)
	{
		int_4 = int_3;
	}
	return short_2;
}
float v__limit_coord( int parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float_1 = float_1 + float_1;
	double_2 = double_1 + double_1;
	double_3 = double_3 * double_4;
	double_5 = double_1 * double_3;
	int_3 = int_1 * int_2;
	int_3 = int_2 * int_1;
	long_1 = long_1 + long_1;
	int_2 = int_4;
	return float_2;
}
float v__check_screen_info( unsigned int parameter_1,long parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	if(1)
	{
		int int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int_1 = int_1 + int_1;
		short_1 = short_1;
		v_termpty_text_save_top(double_1,short_2,double_2);

		int_1 = int_1 + int_1;
		v_termpty_cells_clear(short_1,char_1,int_2);

		int_1 = int_1 + int_1;
		double_3 = double_4;
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 * float_1;
		}
		double_3 = double_1 + double_4;
	}
	return float_2;
}
char v__termpty_line_rewrap( long parameter_1,char parameter_2,int parameter_3,int parameter_4,short parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_1;
	int_1 = int_1;
	return char_1;
	float_1 = v__check_screen_info(unsigned_int_3,long_1);

}
double v__backlog_remove_latest_nolock( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char_1 = char_2;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2 + double_2;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_3 = double_4;
	}
	int_1 = int_1;
	double_1 = double_1;
	float_3 = float_1 * float_2;
	short_3 = short_1 + short_2;
	return double_1;
	char_3 = v_verify_beacon(unsigned_int_1,int_1);

	v_termpty_save_free(long_1);

}
void v_termpty_save_extract( float parameter_1)
{
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "PI") < 0)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int_1 = int_1 * int_1;
			int_1 = int_1 * int_2;
			char_1 = char_2;
			int_2 = int_2 * int_3;
			double_2 = double_1 * double_1;
			char controller_4[3];
			fgets(controller_4 ,3 ,stdin);
			if( strcmp( controller_4, ">W") > 0)
			{
			}
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			short_1 = short_1 + short_1;
			float_3 = float_1 * float_2;
			if(1)
			{
				long long_1 = 1;
				long_1 = long_1 + long_1;
			}
		}
	}
}
int v__termpty_line_is_empty( double parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float_1 = v__termpty_cell_is_empty(float_2);

		double_3 = double_1 + double_2;
		if(1)
		{
		}
	}
	return int_1;
}
void v_termpty_screen_swap( int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double_1 = double_1 * double_1;
	float_1 = float_1 + float_1;
	short_2 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_2 + double_3;
	double_2 = double_4 * double_2;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
	char_4 = char_1 + char_3;
	if(1)
	{
		char_1 = char_4 * char_3;
	}
}
void v_termpty_resize( int parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_4 = 1;
	double double_7 = 1;
	float float_3 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_7 = 1;
	int int_7 = 1;
	double double_8 = 1;
	int int_8 = 1;
	short short_4 = 1;
	double double_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_8 = 1;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	char_2 = char_1 * char_3;
	if(1)
	{
		v_termpty_save_extract(float_1);

		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		double_1 = double_1 + double_1;
	}
	int_1 = int_1 * int_2;
	if(1)
	{
		int_3 = int_3 * int_2;
	}
	v_termpty_resize_tabs(int_3,int_4,int_5);

	int_6 = int_3 + int_2;
	double_3 = double_2 * double_1;
	if(1)
	{
		double_5 = double_3 + double_4;
	}
	long_3 = long_3 * long_2;
	v_termpty_screen_swap(int_5);

	double_4 = double_3;
	double_2 = double_2 + double_6;
	int_2 = int_3 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_5 + double_3;
		if(1)
		{
			short_3 = short_1 * short_2;
			float_1 = float_1 * float_1;
		}
	}
	long_3 = long_3 + long_3;
	if(1)
	{
		double_5 = double_6 * double_4;
	}
	char_4 = char_5;
	if(1)
	{
		float float_2 = 1;
		long_4 = long_2 * long_3;
		char_3 = v_verify_beacon(unsigned_int_4,int_6);

		double_5 = double_7 * double_4;
		float_2 = float_3;
		if(1)
		{
			int_2 = int_4 * int_6;
			char_1 = char_6 + char_6;
			v_termpty_backlog_lock();

			unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
			double_5 = double_1;
			if(1)
			{
				double_7 = v__backlog_remove_latest_nolock(double_4);

				unsigned_int_4 = unsigned_int_5;
			}
			short_1 = v__pty_size(float_3);

			float_4 = float_4 * float_1;
			char_6 = v_termpty_line_length(unsigned_int_4,float_5);

			double_6 = double_5 + double_7;
			v_termpty_backlog_unlock();

			unsigned_int_2 = unsigned_int_6;
			unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
			unsigned_int_7 = unsigned_int_4;
			int_1 = int_6 + int_1;
			float_4 = float_2 + float_1;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_2 = int_6 + int_2;
		int_2 = int_3;
		double_5 = double_5 * double_6;
		long_4 = long_4 + long_4;
	}
	float_3 = v__limit_coord(int_6);

	char_7 = char_1;
	int_7 = v__termpty_line_is_empty(double_2,unsigned_int_7);

	int_2 = int_7 + int_2;
	short_1 = short_2 + short_3;
	char_7 = char_2 + char_2;
	float_5 = float_4;
	char_5 = char_4 * char_7;
	unsigned_int_4 = unsigned_int_2;
	double_4 = double_8 + double_4;
	if(1)
	{
		unsigned_int_6 = unsigned_int_2 + unsigned_int_6;
	}
	char_2 = v__termpty_line_rewrap(long_1,char_1,int_2,int_8,short_4);

	double_6 = double_6 * double_2;
	unsigned_int_2 = unsigned_int_6 * unsigned_int_3;
	double_4 = double_9 * double_10;
	unsigned_int_6 = unsigned_int_8;
	double_5 = double_1 + double_5;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
	float_5 = float_5 * float_4;
	short_2 = short_2;
}
int v_termio_win_get()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2;
	return int_1;
}
double v__handle_esc_csi_reset_mode( unsigned int parameter_1,unsigned int parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	float_3 = float_1 * float_2;
	int_1 = v_termio_win_get();

	v_termpty_clear_screen(double_1,unsigned_int_1);

	long_1 = long_1 * long_2;
	char_1 = char_1 + char_1;
	return double_1;
	short_1 = v__csi_arg_get();

	v_termpty_resize(int_2,int_3,int_1);

	v_termpty_reset_state(int_2);

	unsigned_int_2 = v__move_cursor_to_origin(double_1);

	short_2 = v__switch_to_alternative_screen(long_2,int_1);

	v_termpty_cursor_copy(char_1,int_3);

}
void v__handle_esc_csi_cursor_pos_set( unsigned int parameter_1,short parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_2;
	short_1 = v__csi_arg_get();

	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	int_2 = int_2 + int_2;
	double_3 = double_2 * double_2;
	if(1)
	{
		int_2 = int_3;
	}
	if(1)
	{
		double_4 = double_4 + double_4;
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			int_5 = int_2 * int_4;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_2;
	}
	long_3 = long_2 + long_2;
	double_5 = double_4 * double_5;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2;
		if(1)
		{
			int_3 = int_3 + int_3;
		}
	}
	if(1)
	{
		short_1 = short_1;
	}
	unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
}
void v_termpty_text_scroll_rev( short parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long_2 = long_1 * long_1;
	char_3 = char_1 + char_2;
	if(1)
	{
		short short_3 = 1;
		double_1 = double_2;
		short_3 = short_1 * short_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_termio_scroll(short_1,int_1,int_2,int_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3;
		if(1)
		{
			short short_4 = 1;
			v_termpty_cells_clear(short_2,char_2,int_2);

			short_2 = short_1 + short_4;
		}
		double_3 = double_1 * double_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_4 = 1;
			long long_3 = 1;
			double double_4 = 1;
			unsigned_int_1 = unsigned_int_4;
			long_1 = long_3 + long_3;
			double_2 = double_2 + double_4;
		}
		if(1)
		{
			double double_5 = 1;
			double_3 = double_5;
		}
	}
}
void v_termpty_clear_line( int parameter_1,short parameter_2,int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int_1 = int_1 * int_1;
	double_3 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	int_2 = int_1 * int_1;
	int_1 = int_1;
	v_termio_content_change(short_1,long_1,unsigned_int_1,int_3,-1 );

	double_1 = double_4 * double_2;
	int_5 = int_3 + int_4;
	short_2 = short_1 * short_1;
	int_2 = int_2 + int_5;
	float_1 = float_1 + float_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "NS") < 0)
	{
		long long_3 = 1;
		v_termpty_cells_clear(short_2,char_1,int_5);

		long_3 = long_2 + long_3;
	}
	int_1 = int_5;
	long_2 = long_2 + long_1;
}
void v_termpty_clear_screen( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_1 = 1;
	double double_7 = 1;
	if(1)
	{
		double double_3 = 1;
		v_termpty_clear_line(int_1,short_1,int_1);

		double_3 = double_1 * double_2;
	}
	if(1)
	{
		double double_4 = 1;
		double_2 = double_4 + double_2;
	}
	v_termio_content_change(short_2,long_1,unsigned_int_1,int_2,-1 );

	double_6 = double_1 + double_5;
	char_1 = char_1 * char_1;
	v_termpty_cells_clear(short_1,char_1,int_1);

	double_7 = double_6 * double_7;
	double_1 = double_6 + double_7;
}
void v_termpty_cell_codepoint_att_fill( float parameter_1,int parameter_2,unsigned int parameter_3,long parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	}
}
short v__termpty_charset_trans( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	short short_2 = 1;
	if(1)
	{
	}
	double_1 = double_1;
	if(1)
	{
	}
	char_1 = char_2;
	float_2 = float_1 * float_2;
	if(1)
	{
		if(1)
		{
			char char_3 = 1;
			char_3 = char_1 * char_2;
		}
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 * int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1 * double_1;
		}
		if(1)
		{
			char char_4 = 1;
			char_4 = char_2 + char_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_2 * int_2;
		}
	}
	return short_2;
}
void v_termio_content_change( short parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4,int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_7 = 1;
	int_1 = int_1 * int_1;
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3;
	int_3 = int_2 + int_3;
	char controller4vul_171[2];
	fgets(controller4vul_171 ,2 ,stdin);
	if( strcmp( controller4vul_171, "R") > 0)
	{
		double_2 = double_1 * double_1;
		short_3 = short_2 * short_1;
		double_1 = double_2;
		int_4 = int_2 * int_2;
		short_2 = short_3 + short_1;
		int_3 = int_5 * int_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_3 = double_2 + double_1;
			char controller4vul_172[2];
			fgets(controller4vul_172 ,2 ,stdin);
			if( strcmp( controller4vul_172, "e") > 0)
			{
				float float_1 = 1;
				long_1 = v__remove_links(double_2,short_2,uni_para);

				float_1 = float_1 * float_2;
				short_2 = short_1 + short_3;
			}
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			int_5 = int_1 + int_5;
		}
	}
	if(1)
	{
	}
	double_2 = double_2 + double_1;
	int_4 = int_1 + int_4;
	unsigned_int_3 = unsigned_int_4;
	short_3 = short_3;
	if(1)
	{
		char_2 = char_1 + char_2;
		double_3 = double_3 * double_2;
	}
	if(1)
	{
		int_3 = int_5 * int_1;
		float_5 = float_3 * float_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
			if(1)
			{
				short short_4 = 1;
				double_2 = double_3 * double_3;
				short_4 = short_4;
			}
			unsigned_int_6 = unsigned_int_3 * unsigned_int_4;
			unsigned_int_7 = unsigned_int_3 + unsigned_int_3;
		}
	}
	if(1)
	{
		char char_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float_3 = float_5 + float_4;
		unsigned_int_7 = unsigned_int_2;
		float_2 = float_4 + float_5;
		char_3 = char_2 * char_1;
		double_5 = double_2 * double_4;
		if(1)
		{
			double_2 = double_4;
		}
	}
}
void v_termpty_text_append( short parameter_1,long parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1;
	double_1 = double_1 * double_1;
	int_3 = int_1 * int_2;
	if(1)
	{
		double double_3 = 1;
		double_4 = double_2 * double_3;
	}
	int_5 = int_4 * int_3;
	short_3 = short_2 + short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_5 = 1;
		int_1 = int_3 + int_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			short short_4 = 1;
			short short_5 = 1;
			double_1 = double_5 + double_1;
			unsigned_int_1 = unsigned_int_2;
			float_1 = float_1 * float_1;
			float_2 = float_1 + float_1;
			float_4 = float_3 + float_1;
			short_5 = short_2 + short_4;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
			}
		}
		unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
		if(1)
		{
			double_5 = double_1;
		}
		char controller4vul_169[2];
		fgets(controller4vul_169 ,2 ,stdin);
		if( strcmp( controller4vul_169, "6") > 0)
		{
			long long_2 = 1;
			char controller4vul_170[3];
			fgets(controller4vul_170 ,3 ,stdin);
			if( strcmp( controller4vul_170, "]7") < 0)
			{
				v_termio_content_change(short_3,long_1,unsigned_int_2,int_5,uni_para);

				unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
			}
			long_1 = long_2 + long_1;
		}
		int_3 = int_5 * int_5;
		if(1)
		{
			char char_2 = 1;
			double_4 = double_2 * double_2;
			char_2 = char_1 + char_2;
		}
		int_4 = int_1 + int_1;
		if(1)
		{
			double_4 = double_4 + double_2;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
		}
		if(1)
		{
			int int_6 = 1;
			int int_7 = 1;
			int_7 = int_6 + int_4;
			double_2 = double_4;
			if(1)
			{
				double_1 = double_2;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
			}
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				double_1 = double_1 * double_4;
				unsigned_int_5 = unsigned_int_6 * unsigned_int_4;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_5 = unsigned_int_5 * unsigned_int_7;
			int_4 = int_1 * int_2;
			if(1)
			{
				unsigned int unsigned_int_8 = 1;
				unsigned int unsigned_int_9 = 1;
				unsigned_int_9 = unsigned_int_8 + unsigned_int_9;
			}
			char_1 = char_1 * char_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
				double_4 = double_5 * double_1;
			}
			int_3 = int_4;
		}
	}
}
short v__csi_arg_get()
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 + float_2;
	double_1 = double_1 * double_2;
	char_1 = char_1 * char_1;
	double_3 = double_1 + double_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	return short_1;
}
long v__handle_esc_csi( long parameter_1,double parameter_2,long parameter_3,int uni_para)
{
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	v_termpty_text_append(short_1,long_1,int_1,uni_para);

	char_2 = char_1 * char_1;
	int_1 = int_1 + int_1;
	return long_2;
}
double v__safechar( char parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	char_1 = char_1;
	double_1 = double_1;
	return double_2;
}
double v__handle_esc( int parameter_1,char parameter_2,int parameter_3,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_4 = 1;
	long long_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	char_4 = char_2 + char_3;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	long_1 = long_2;
	if(1)
	{
	}
	long_3 = long_1 + long_1;
	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	short_3 = short_2 * short_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	float_2 = float_1 + float_2;
	int_1 = int_2;
	int_2 = int_1;
	int_1 = int_1 + int_1;
	char_1 = char_1 * char_4;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
	float_2 = float_2 * float_1;
	double_3 = double_2 * double_2;
	short_4 = short_3 * short_2;
	short_4 = short_4 + short_3;
	int_1 = int_3;
	short_1 = short_4 * short_1;
	short_1 = short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
	if(1)
	{
		unsigned_int_6 = unsigned_int_3;
	}
	if(1)
	{
	}
	short_2 = short_1;
	long_3 = long_3;
	int_1 = int_4;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_7;
	if(1)
	{
	}
	unsigned_int_6 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
	if(1)
	{
	}
	int_6 = int_2 + int_5;
	int_3 = int_7 + int_8;
	if(1)
	{
	}
	long_1 = long_2 * long_2;
	double_4 = double_1 * double_2;
	if(1)
	{
	}
	char controller4vul_167[3];
	fgets(controller4vul_167 ,3 ,stdin);
	if( strcmp( controller4vul_167, "_x") > 0)
	{
		unsigned int unsigned_int_8 = 1;
		int_3 = int_4;
		unsigned_int_4 = unsigned_int_6 + unsigned_int_6;
		short_1 = short_4;
		long_3 = long_4 * long_4;
		unsigned_int_8 = unsigned_int_6 + unsigned_int_5;
		char controller4vul_168[2];
		fgets(controller4vul_168 ,2 ,stdin);
		if( strcmp( controller4vul_168, " ") < 0)
		{
			long_1 = v__handle_esc_csi(long_4,double_5,long_3,uni_para);

			int_4 = int_6 * int_6;
		}
		unsigned_int_7 = unsigned_int_2;
		double_6 = double_6;
		if(1)
		{
			short short_5 = 1;
			double_1 = double_3 * double_6;
			double_5 = double_3 + double_2;
			short_5 = short_5 + short_1;
		}
	}
	if(1)
	{
	}
	short_1 = short_3 * short_4;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_6;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_6;
	int_7 = int_8;
	int_3 = int_5 + int_3;
	return double_6;
}
void v_termpty_cell_fill( char parameter_1,double parameter_2,double parameter_3,int parameter_4)
{
	short short_1 = 1;
	short_1 = short_1 + short_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
			short_1 = short_1 * short_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_2;
			short_1 = short_1 + short_1;
		}
	}
}
void v_termpty_cells_fill( short parameter_1,short parameter_2,float parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_2;
	v_termpty_cell_fill(char_1,double_1,double_1,int_1);

	char_1 = char_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2 + int_3;
}
void v_termpty_cells_clear( short parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_termpty_cells_fill(short_1,short_2,float_1,int_1);

}
int v__tooltip_del(long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_2 = short_1 * short_2;
	float_2 = float_1 * float_1;
	int_3 = int_1 * int_2;
	return int_2;
}
short v__tooltip_content(float parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char_2 = char_1 + char_2;
	double_1 = double_1 * double_1;
	v_media_add(int_1,float_1,char_1,int_1,double_1,-1 );

	short_1 = short_2;
	int_2 = int_2 * int_2;
	return short_1;
}
void v_MD5Final( unsigned int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	double double_5 = 1;
	int int_4 = 1;
	double double_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_1 + short_2;
	double_1 = double_1 + double_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	float_1 = float_1 * float_1;
	v_byteReverse(short_3,int_1);

	int_1 = int_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		int_2 = int_2 + int_2;
		int_3 = int_2 * int_1;
		double_1 = double_3 + double_4;
		unsigned_int_3 = unsigned_int_5;
	}
	if(1)
	{
		double_4 = double_3 * double_4;
	}
	long_3 = long_1 + long_2;
	float_2 = float_2 + float_1;
	double_1 = double_4 + double_5;
	unsigned_int_1 = unsigned_int_4;
	v_MD5Transform(int_1,long_1);

	int_4 = int_2 + int_4;
	double_6 = double_3 + double_4;
	int_3 = int_3 + int_2;
}
void v_MD5Transform( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_4 = 1;
	int int_6 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_6 = 1;
	int int_9 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_11 = 1;
	short short_7 = 1;
	short short_8 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 + int_2;
	long_1 = long_1;
	double_1 = double_1 + double_1;
	double_4 = double_2 * double_3;
	long_1 = long_2 * long_3;
	int_4 = int_3 * int_4;
	long_1 = long_2 + long_2;
	short_1 = short_1 + short_1;
	short_2 = short_3;
	double_4 = double_4 * double_1;
	long_3 = long_3 * long_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_6 = long_5 * long_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	int_4 = int_3 + int_1;
	int_1 = int_3 * int_3;
	double_2 = double_1 * double_1;
	float_1 = float_1;
	int_3 = int_3 + int_2;
	short_5 = short_1 * short_4;
	long_4 = long_4;
	double_2 = double_4 + double_3;
	long_6 = long_3 * long_3;
	int_3 = int_1 + int_1;
	int_2 = int_2 * int_1;
	long_1 = long_1 * long_7;
	long_4 = long_3;
	unsigned_int_5 = unsigned_int_5;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_5;
	double_3 = double_5;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_6;
	short_5 = short_5 * short_1;
	short_4 = short_2 * short_5;
	float_3 = float_2 + float_2;
	char_2 = char_1 * char_2;
	unsigned_int_6 = unsigned_int_7;
	double_1 = double_5 * double_2;
	int_1 = int_2;
	int_3 = int_3 * int_5;
	long_3 = long_7;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_7;
	int_1 = int_3;
	unsigned_int_8 = unsigned_int_2 + unsigned_int_7;
	float_3 = float_1 * float_4;
	double_2 = double_1 * double_2;
	int_4 = int_6 + int_3;
	double_6 = double_3 * double_6;
	unsigned_int_6 = unsigned_int_7 + unsigned_int_5;
	short_1 = short_2 + short_2;
	double_6 = double_4 * double_7;
	unsigned_int_9 = unsigned_int_10;
	int_7 = int_6 + int_5;
	double_4 = double_4 + double_3;
	char_2 = char_1;
	int_6 = int_3 * int_8;
	int_7 = int_3 + int_8;
	unsigned_int_4 = unsigned_int_7;
	char_5 = char_3 + char_4;
	short_2 = short_6;
	int_9 = int_5 + int_5;
	int_8 = int_1 * int_3;
	char_4 = char_6 + char_2;
	double_2 = double_5 + double_2;
	float_2 = float_1 + float_3;
	short_2 = short_3 + short_6;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_11;
	long_6 = long_7 + long_5;
	short_4 = short_7 + short_8;
	unsigned_int_9 = unsigned_int_10 * unsigned_int_5;
	int_2 = int_2 + int_3;
	unsigned_int_7 = unsigned_int_3 * unsigned_int_11;
}
void v_byteReverse( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double_1 = double_1 + double_1;
}
void v_MD5Update( unsigned int parameter_1,double parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	int int_4 = 1;
	char char_5 = 1;
	double double_5 = 1;
	short_2 = short_1 + short_1;
	double_2 = double_1 * double_2;
	float_1 = float_1 * float_2;
	double_4 = double_3 * double_1;
	char_2 = char_1 * char_1;
	int_1 = int_2;
	int_3 = int_1;
	short_3 = short_2 + short_2;
	int_3 = int_2 * int_2;
	float_3 = float_2 * float_2;
	short_1 = short_2;
	long_2 = long_1 + long_1;
	short_1 = short_2 + short_3;
	char_3 = char_3 * char_4;
	v_byteReverse(short_4,int_1);

	v_MD5Transform(int_2,long_1);

	short_2 = short_1 + short_1;
	int_4 = int_4 + int_3;
	int_3 = int_1 * int_2;
	char_4 = char_1 + char_5;
	long_2 = long_2 * long_1;
	int_4 = int_3;
	double_5 = double_1 + double_3;
}
void v_MD5Init( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double_3 = double_1 + double_2;
	long_1 = long_1 + long_1;
	short_3 = short_1 + short_2;
	int_1 = int_1;
	float_3 = float_1 * float_2;
	double_4 = double_3 + double_2;
}
void v_gravatar_tooltip( int parameter_1,short parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	float float_3 = 1;
	char char_3 = 1;
	short_2 = short_1 * short_1;
	short_3 = v__tooltip_content(float_1,short_3);

	float_1 = float_2 * float_1;
	double_2 = double_1 + double_2;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_4 = short_1 * short_2;
	short_4 = short_4 + short_4;
	if(1)
	{
	}
	int_3 = int_2 + int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1;
	int_2 = v__tooltip_del(long_1);

	short_3 = short_4 * short_4;
	double_4 = double_3 * double_4;
	double_1 = double_4 + double_3;
	int_2 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		int_4 = int_1;
		long_2 = long_2;
	}
	char_2 = char_1 * char_1;
	v_MD5Final(unsigned_int_3,double_4);

	double_4 = double_1 + double_3;
	int_5 = int_5 * int_4;
	v_MD5Update(unsigned_int_2,double_3,float_3);

	int_4 = int_2 * int_3;
	v_MD5Init(char_3);

}
char v__cb_link_drag_done(long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	long_2 = long_1 * long_1;
	int_2 = int_1 * int_1;
	float_1 = float_2;
	short_1 = short_1 * short_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	float_1 = float_3 + float_2;
	return char_1;
}
double v__cb_link_drag_accept(short parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 * float_1;
	return double_1;
}
short v__cb_link_drag_move(short parameter_2,unsigned int parameter_3,float parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	double_3 = double_3;
	char_2 = char_1 * char_1;
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 + int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
		}
	}
	return short_1;
}
long v__cb_link_icon_new(unsigned int parameter_2,int parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_2;
	char_1 = char_1;
	double_1 = double_1;
	float_2 = float_1 + float_1;
	char_1 = char_2 + char_1;
	int_2 = int_3 * int_1;
	char_3 = char_2 * char_3;
	return long_1;
}
short v__cb_link_move(unsigned int parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_4 = 1;
	double_1 = double_1 + double_2;
	int_1 = int_1;
	char_1 = v__cb_link_drag_done(long_1);

	double_2 = double_2 * double_2;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_2;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_3 = v__cb_link_drag_accept(short_2,unsigned_int_2);

		double_3 = double_4 + double_2;
		double_3 = double_3 * double_4;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		}
		if(1)
		{
			long_2 = v__cb_link_icon_new(unsigned_int_1,int_1,short_2);

			long_1 = long_1 * long_2;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		short_2 = v__cb_link_drag_move(short_3,unsigned_int_3,float_1,int_1);

		double_3 = double_5 + double_6;
	}
	return short_4;
}
void v__cb_link_up_delay()
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_1;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	char_1 = char_2;
	char_2 = v__activate_link(double_1,int_1);

}
short v__cb_link_up(long parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	char_2 = char_1 * char_2;
	int_1 = int_1;
	int_1 = int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_3 = int_1 * int_2;
		double_2 = double_1 * double_1;
		char_1 = char_2 * char_1;
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
			}
			if(1)
			{
				short short_1 = 1;
				short_2 = short_1 + short_1;
			}
		}
		v__cb_link_up_delay();

		double_1 = double_1 * double_3;
	}
	return short_2;
}
void v_term_focus( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	double_1 = double_2;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	char_1 = v__term_is_focused(short_2);

	float_1 = float_1;
	float_2 = float_2;
	short_3 = short_1 * short_2;
}
char v__term_is_focused( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	short_1 = short_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	return char_1;
}
void v_term_unfocus( long parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_1 = v__term_is_focused(short_1);

	long_1 = long_1 * long_2;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	long_2 = long_2;
	double_1 = double_2;
	int_2 = int_1 + int_2;
}
char v__cb_ctxp_del(char parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_term_focus(float_1);

	char_2 = char_1 + char_1;
	double_1 = double_1;
	short_1 = short_1 * short_2;
	v_term_unfocus(long_1);

	int_1 = int_1 * int_1;
	return char_3;
}
int v__cb_ctxp_dismissed(unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 + short_1;
	double_2 = double_1 + double_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1;
	return int_1;
}
void v__cb_ctxp_link_copy(float parameter_2)
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
	short short_1 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	char_1 = char_1 * char_2;
	float_1 = float_2;
	int_1 = int_1 + int_2;
	short_1 = short_1;
	int_2 = v__take_selection_text(long_1,char_1,unsigned_int_2,-1 );

	float_2 = float_1 * float_2;
}
void v__screen_visual_bounds( float parameter_1)
{
	double double_2 = 1;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_2 = double_1 + double_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		double double_3 = 1;
		short short_1 = 1;
		double_3 = double_2;
		short_1 = short_1;
	}
}
int v__draw_cell( short parameter_1,long parameter_2,char parameter_3,short parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char_3 = char_1 + char_2;
	short_3 = short_1 * short_2;
	int_2 = int_1 * int_1;
	short_5 = short_1 + short_4;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	int_1 = int_3 + int_1;
	char_3 = char_1;
	long_2 = long_1 + long_1;
	double_2 = double_2 + double_3;
	if(1)
	{
		short short_6 = 1;
		short_6 = short_4;
	}
	if(1)
	{
		if(1)
		{
			int_1 = int_4 * int_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
	}
	if(1)
	{
		double_2 = double_3 * double_3;
	}
	if(1)
	{
		long_2 = long_3 + long_4;
	}
	if(1)
	{
		char char_4 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		char_3 = char_2 * char_1;
		short_1 = short_2;
		long_4 = long_2 * long_3;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
		double_1 = double_1;
		char_2 = char_2 * char_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		long_4 = long_4;
	}
	if(1)
	{
		int_4 = int_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_2;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_1 + unsigned_int_2;
		}
	}
	if(1)
	{
		int_1 = int_2 + int_1;
	}
	return int_1;
}
short v__draw_line( long parameter_1,long parameter_2,double parameter_3,int parameter_4,char parameter_5)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return short_1;
	int_1 = v__draw_cell(short_1,long_1,char_1,short_2);

}
double v_termpty_backlog_length()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_6 = 1;
	short short_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_7 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_2;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	float_1 = float_1 * float_1;
	char_3 = char_4 * char_1;
	char_3 = char_5;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	float_2 = float_1 + float_1;
	int_1 = int_1;
	if(1)
	{
		short_1 = short_1 * short_2;
	}
	char_1 = char_5 * char_5;
	if(1)
	{
		char_6 = char_3 * char_6;
	}
	short_2 = short_1 + short_3;
	if(1)
	{
		float_4 = float_3 + float_3;
	}
	long_2 = long_1 * long_2;
	if(1)
	{
		float_2 = float_1;
	}
	int_4 = int_3 * int_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_1 = double_3 + double_4;
	}
	float_3 = float_1 * float_4;
	char_7 = v_verify_beacon(unsigned_int_2,int_5);

	int_6 = int_1 * int_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	short_1 = short_1 * short_3;
	char_3 = char_7 + char_6;
	char_2 = char_1 * char_5;
	return double_1;
}
long v_termio_pty_get( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return long_1;
}
double v_termio_textgrid_get()
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char_1 = char_1 * char_1;
	float_2 = float_1 * float_2;
	return double_1;
}
float v_miniview_colors_get( unsigned int parameter_1,long parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double_1 = v_termio_textgrid_get();

	char_1 = char_1 + char_1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		int int_3 = 1;
		double_1 = double_2 * double_2;
		int_2 = int_3 + int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_2 = unsigned_int_3;
	}
	return float_1;
}
long v__deferred_renderer()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_6 = 1;
	char char_2 = 1;
	short short_5 = 1;
	char char_3 = 1;
	int int_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = v_termio_pty_get(double_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	float_1 = float_1 + float_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	int_2 = int_1 + int_2;
	double_1 = v_termpty_backlog_length();

	long_3 = long_2 + long_3;
	double_2 = double_2 * double_3;
	double_5 = double_2 * double_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "|w") > 0)
	{
		v__screen_visual_bounds(float_3);

		unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
	}
	short_3 = short_1 + short_2;
	short_4 = short_1 * short_1;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	float_4 = float_3 + float_3;
	double_3 = v_termpty_cellrow_get(char_1,int_3,long_1);

	long_2 = long_4 + long_3;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_7;
	int_1 = int_1 * int_1;
	double_1 = double_2 + double_6;
	char_2 = char_2 + char_2;
	if(1)
	{
		short_3 = short_2 + short_5;
	}
	if(1)
	{
		int_1 = int_2 + int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_5 = v__draw_line(long_2,long_1,double_4,int_2,char_2);

		short_5 = short_4 + short_5;
		if(1)
		{
			char_1 = char_3 + char_3;
		}
		double_5 = double_4 + double_1;
	}
	long_3 = long_3 + long_2;
	short_2 = short_4 * short_3;
	int_2 = int_2 + int_3;
	if(1)
	{
		int_4 = v_termio_scroll_get(unsigned_int_7);

		long_3 = long_4 + long_3;
	}
	if(1)
	{
		int_2 = int_3 * int_4;
	}
	float_5 = v_miniview_colors_get(unsigned_int_2,long_2);

	float_1 = float_1 * float_5;
	unsigned_int_5 = unsigned_int_7 * unsigned_int_3;
	if(1)
	{
		short short_6 = 1;
		double double_7 = 1;
		short_3 = short_2 * short_6;
		char_1 = char_3 * char_2;
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_3 = unsigned_int_8 + unsigned_int_8;
			double_7 = double_5 * double_1;
		}
		if(1)
		{
			if(1)
			{
				short short_7 = 1;
				char char_4 = 1;
				short_7 = short_7 + short_4;
				double_7 = double_4 * double_5;
				char_1 = char_2 + char_4;
				double_2 = double_5;
			}
			if(1)
			{
				unsigned int unsigned_int_10 = 1;
				double_3 = double_3 * double_5;
				unsigned_int_10 = unsigned_int_1 * unsigned_int_9;
			}
		}
	}
	if(1)
	{
		int_5 = int_5;
	}
	char_6 = char_5 + char_6;
	unsigned_int_9 = unsigned_int_2 * unsigned_int_9;
	int_1 = int_5 * int_3;
	int_5 = int_1 + int_2;
	return long_4;
}
float v__queue_render( int parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int_1 = int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return float_1;
	long_1 = v__deferred_renderer();

}
void v_miniview_redraw( unsigned int parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	float_1 = v__queue_render(int_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	long_2 = long_1 * long_2;
}
short v__block_obj_del( char parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	short short_2 = 1;
	if(1)
	{
	}
	char_1 = v__smart_media_del(double_1,short_1);

	double_1 = double_2 + double_1;
	double_1 = double_2 + double_1;
	char_2 = char_1 + char_2;
	return short_2;
}
unsigned int v__termpty_is_dblwidth_slow_get( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
char v__termpty_is_dblwidth_get( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return char_1;
	unsigned_int_1 = v__termpty_is_dblwidth_slow_get(unsigned_int_2,int_1);

}
void v_term_preedit_str_get( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
}
void v_media_get( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_1 = long_1 * long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "d") > 0)
	{
	}
}
long v__smart_media_clicked(double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	double_1 = double_2;
	int_1 = v_termio_config_get(int_2);

	double_2 = double_3 * double_2;
	if(1)
	{
	}
	float_2 = float_1 + float_2;
	if(1)
	{
		if(1)
		{
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double_4 = double_2 + double_1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				int int_4 = 1;
				int int_5 = 1;
				if(1)
				{
					short short_1 = 1;
					short short_2 = 1;
					long long_2 = 1;
					short_2 = short_1 + short_1;
					float_1 = v_media_src_type_get(int_2);

					long_1 = long_1 * long_2;
					if(1)
					{
						unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
					}
					if(1)
					{
						unsigned int unsigned_int_5 = 1;
						int int_3 = 1;
						unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
						int_3 = int_3 + int_1;
						if(1)
						{
							double double_5 = 1;
							short short_3 = 1;
							double_2 = double_5 + double_2;
							int_3 = int_2 + int_4;
							short_2 = short_3 * short_3;
						}
					}
				}
				int_4 = int_5 + int_5;
			}
		}
	}
	v_media_get(double_6);

	unsigned_int_6 = unsigned_int_3 + unsigned_int_4;
	return long_1;
}
unsigned int v_media_control_get( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_2;
	if(1)
	{
	}
	return unsigned_int_1;
}
double v__smart_media_stop(int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	return double_1;
}
double v__smart_media_pause(char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	return double_1;
}
double v__smart_media_play(double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	return double_1;
}
char v__smart_media_del(double parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	return char_1;
}
void v_media_visualize_set( unsigned int parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_2;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			float_4 = float_2 * float_3;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
}
void v_media_mute_set( short parameter_1,char parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_1 = float_1;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "=") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
}
void v_media_volume_set( float parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
short v__cb_media_vol(unsigned int parameter_2,int parameter_3,float parameter_4)
{
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	v_media_volume_set(float_1,double_1);

	char_2 = char_1 + char_1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	long_1 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
int v__cb_media_pos(double parameter_2,int parameter_3,long parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_media_position_set(char_1,double_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	int_1 = int_2;
	return int_2;
}
void v__cb_media_pos_drag_stop(unsigned int parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_2 = int_1 + int_1;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 + short_3;
	double_2 = double_1 * double_1;
	double_3 = double_2 + double_1;
	float_1 = float_2;
}
int v__cb_media_pos_drag_start(int parameter_2,double parameter_3,double parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char_1 = char_1 + char_1;
	v_media_position_set(char_1,double_1);

	char_3 = char_1 + char_2;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
void v_media_stop( int parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_2;
}
long v__cb_media_stop(float parameter_2,float parameter_3,float parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	long_1 = long_2;
	return long_3;
	v_media_stop(int_1);

}
char v__cb_media_pause(float parameter_2,unsigned int parameter_3,long parameter_4)
{
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	v_media_play_set(double_1,long_1);

	float_1 = float_1 + float_1;
	return char_1;
}
void v_media_play_set( double parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	int_1 = int_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "5C") < 0)
	{
		int_3 = int_2 * int_1;
		int_4 = int_1 * int_1;
	}
	if(1)
	{
		short short_3 = 1;
		short_1 = short_3;
		int_4 = int_3;
	}
}
short v__cb_media_play(float parameter_2,float parameter_3,short parameter_4)
{
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	v_media_play_set(double_1,long_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
void v_media_position_set( char parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float_3 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
}
unsigned int v__cb_mov_ref(unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	return unsigned_int_1;
}
char v__cb_mov_progress(long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	double_1 = double_3 * double_3;
	return char_1;
}
long v__cb_mov_restart()
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	float_2 = float_1 * float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "L") > 0)
	{
	}
	char_1 = char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
	return long_1;
}
char v__cb_mov_decode_stop(long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	long_1 = v__cb_mov_restart();

	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	float_2 = float_1 * float_1;
	return char_1;
}
void v__cb_mov_len_change(long parameter_2)
{
	int int_1 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
}
char v__cb_mov_frame_resize(long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_4 = 1;
	int_2 = int_1 * int_1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	float_1 = float_2;
	v__type_mov_calc(float_1,char_1,short_1,short_1,unsigned_int_1);

	double_1 = double_1 + double_1;
	return char_4;
}
char v__cb_mov_frame_decode(unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_2;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	long_3 = long_1 + long_2;
	short_1 = short_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	long_3 = long_1 * long_4;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	v__type_mov_calc(float_1,char_1,short_1,short_1,unsigned_int_1);

	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1;
	double_3 = double_4;
	return char_1;
}
unsigned int v__type_mov_init( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	long long_2 = 1;
	float float_4 = 1;
	short short_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_6 = 1;
	long long_4 = 1;
	double double_7 = 1;
	char_1 = char_2;
	double_3 = double_1 + double_2;
	char_3 = char_3 * char_3;
	double_4 = double_4 + double_4;
	unsigned_int_1 = v__cb_mov_ref(unsigned_int_1);

	char_4 = char_3 + char_1;
	short_1 = v__cb_media_vol(unsigned_int_2,int_1,float_1);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	int_3 = int_2 + int_2;
	int_1 = int_4 * int_3;
	if(1)
	{
		short_2 = v__cb_media_play(float_2,float_2,short_2);

		float_3 = float_1 * float_1;
	}
	if(1)
	{
		char_5 = char_1 + char_3;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
		char_4 = v__cb_mov_progress(long_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	}
	int_3 = int_1 + int_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
	unsigned_int_1 = unsigned_int_4;
	v_media_position_set(char_5,double_1);

	v_media_play_set(double_5,long_2);

	double_4 = double_4 + double_4;
	v__cb_mov_len_change(long_2);

	char_5 = char_2 + char_1;
	float_4 = float_2 * float_1;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
		short_1 = short_3 + short_1;
	}
	if(1)
	{
		char_1 = v__cb_mov_frame_decode(unsigned_int_2);

		char_3 = v__cb_media_pause(float_2,unsigned_int_3,long_3);

		long_1 = v__cb_media_stop(float_1,float_4,float_1);

		int_3 = v__cb_media_pos_drag_start(int_3,double_2,double_2);

		v_media_visualize_set(unsigned_int_6,unsigned_int_1);

		float_1 = float_3 * float_1;
	}
	int_4 = int_4 * int_1;
	double_5 = double_1;
	int_4 = int_4 * int_4;
	double_2 = double_5 * double_1;
	int_5 = int_3 + int_1;
	v__cb_media_pos_drag_stop(unsigned_int_5,unsigned_int_1,unsigned_int_4);

	long_3 = long_2;
	v_media_mute_set(short_2,char_4);

	short_2 = short_3 * short_2;
	int_5 = int_3;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
	int_3 = v_theme_apply(double_5,float_1,unsigned_int_2);

	char_7 = char_4 * char_6;
	char_1 = v__cb_mov_decode_stop(long_3);

	int_6 = int_6 + int_7;
	char_2 = v__cb_mov_frame_resize(long_1);

	double_2 = double_2 + double_6;
	int_4 = v__cb_media_pos(double_2,int_3,long_4);

	short_2 = short_2 + short_2;
	double_3 = double_5 * double_6;
	double_5 = double_7 * double_1;
	unsigned_int_3 = unsigned_int_2;
	int_1 = int_1 + int_2;
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if(remainder_check(controller_5,100,1))
	{
		double double_8 = 1;
		double double_9 = 1;
		double_3 = double_8 * double_9;
	}
	if(1)
	{
		short short_4 = 1;
		short_2 = short_4 + short_3;
	}
	return unsigned_int_3;
}
double v__cb_edje_preloaded(unsigned int parameter_2,short parameter_3,char parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_1 * long_2;
	return double_1;
}
short v__type_edje_init()
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	int int_3 = 1;
	short short_3 = 1;
	long_2 = long_1 * long_1;
	short_2 = short_1 + short_2;
	long_1 = long_3 * long_2;
	long_1 = long_2 + long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_2;
	int_1 = int_2;
	float_2 = float_1 * float_2;
	double_1 = v__cb_edje_preloaded(unsigned_int_1,short_2,char_3);

	int_3 = int_2 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			int int_7 = 1;
			int_4 = int_1 + int_1;
			int_4 = int_1 * int_5;
			int_7 = int_6 * int_5;
		}
	}
	return short_3;
	v_theme_auto_reload_enable(int_3);

}
int v__type_scale_init()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 + char_1;
	int_1 = int_1 + int_1;
	int_2 = int_2 * int_2;
	double_2 = double_1 + double_1;
	char_1 = v__cb_scale_preloaded(int_3,short_1);

	double_2 = double_3 + double_1;
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_1 * char_1;
	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	int_2 = int_2 + int_4;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
	return int_4;
}
char v__cb_img_frame()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 + double_1;
		}
		char_4 = char_5;
		short_1 = short_2;
		if(1)
		{
			if(1)
			{
				short_2 = short_1 * short_2;
			}
		}
	}
	double_3 = double_2 * double_3;
	int_1 = int_2 * int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	return char_3;
}
int v__type_img_anim_handle()
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	short_2 = short_1 + short_1;
	char_1 = v__cb_img_frame();

	int_1 = int_2;
	int_3 = int_3 + int_2;
	if(1)
	{
	}
	int_2 = int_3 * int_2;
	int_3 = int_2 * int_3;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	int_3 = int_3 * int_4;
	return int_3;
}
char v__cb_img_preloaded(long parameter_2,short parameter_3)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	short_1 = short_2;
	short_2 = short_1 + short_1;
	return char_1;
}
float v__type_img_init( char parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_3 = 1;
	int_1 = v__type_img_anim_handle();

	double_3 = double_1 * double_2;
	char_1 = char_1 + char_2;
	int_1 = int_2 + int_3;
	int_2 = int_2 + int_2;
	char_2 = char_3 + char_4;
	float_1 = float_2;
	long_1 = long_1 * long_2;
	char_3 = v__cb_img_preloaded(long_1,short_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2;
	long_1 = long_3;
	long_4 = long_1 + long_2;
	return float_3;
}
unsigned int v__url_compl_cb(int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short_1 = v__smart_calculate(int_1,-1 );

	unsigned_int_1 = unsigned_int_1;
	short_2 = short_2;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	char_1 = char_2;
	int_2 = v__type_scale_init();

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	int_3 = int_1;
	float_3 = float_1 + float_1;
	char_2 = char_2 * char_2;
	short_1 = short_2 + short_2;
	int_5 = int_4 + int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	char_3 = char_1 + char_2;
	char_1 = char_1 + char_1;
	long_2 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	float_1 = v__type_img_init(char_4);

	unsigned_int_5 = v__type_mov_init(unsigned_int_1);

	double_1 = double_1 * double_1;
	double_2 = double_1 + double_2;
	short_1 = v__type_edje_init();

	long_2 = long_1 * long_2;
	char_4 = char_1 + char_5;
	double_4 = double_1 + double_3;
	int_1 = int_6 * int_7;
	return unsigned_int_1;
}
unsigned int v__url_prog_cb(int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_1;
	float_2 = float_1 + float_1;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		}
		char_3 = char_1 + char_1;
		int_2 = int_2 + int_1;
		if(1)
		{
			int int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			float float_3 = 1;
			float float_4 = 1;
			int_2 = int_3 * int_1;
			short_3 = short_1 * short_2;
			float_4 = float_2 * float_3;
			int_3 = int_1 + int_2;
		}
	}
	return unsigned_int_1;
}
short v__type_thumb_calc( long parameter_1,int parameter_2,double parameter_3,float parameter_4,float parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	short short_3 = 1;
	double double_7 = 1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_2 + int_4;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_6 = 1;
		short_2 = short_1 * short_1;
		double_4 = double_3 * double_2;
		char_2 = char_1 + char_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			float_1 = float_1;
			if(1)
			{
				char_2 = char_2 * char_1;
			}
		}
		if(1)
		{
			int int_5 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int_5 = int_2 + int_3;
			long_1 = long_1 * long_2;
		}
		int_4 = int_1;
		double_5 = double_5 * double_6;
		short_1 = short_2;
		double_3 = double_1;
	}
	short_1 = short_2 * short_3;
	double_5 = double_7;
	return short_2;
}
void v__type_mov_calc( float parameter_1,char parameter_2,short parameter_3,short parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_7 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	short_2 = short_1 + short_2;
	short_3 = short_4;
	if(1)
	{
		int_1 = int_1 * int_2;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		double double_6 = 1;
		long_2 = long_1 * long_1;
		float_4 = float_3 + float_2;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			char_1 = char_1 * char_2;
		}
		if(1)
		{
			short short_5 = 1;
			double_3 = double_1 + double_2;
			short_3 = short_4 + short_5;
			if(1)
			{
				double double_4 = 1;
				unsigned int unsigned_int_3 = 1;
				double_4 = double_2 + double_1;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
				if(1)
				{
					int_2 = int_2;
				}
			}
		}
		if(1)
		{
			int_2 = int_1 * int_1;
			int_3 = int_2 + int_1;
			if(1)
			{
				int int_5 = 1;
				char char_3 = 1;
				int_5 = int_4 * int_2;
				char_3 = char_1 * char_3;
				if(1)
				{
					double_5 = double_5 * double_2;
				}
			}
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
			int_1 = int_4 + int_3;
		}
		float_2 = float_5 * float_1;
		short_2 = short_3 * short_1;
		float_2 = float_6;
		double_5 = double_6 * double_3;
	}
	char_2 = char_2 + char_2;
	double_7 = double_1 * double_5;
}
unsigned int v__type_edje_calc( float parameter_1,double parameter_2,float parameter_3,int parameter_4,double parameter_5)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_3;
	return unsigned_int_2;
}
char v__type_img_calc( unsigned int parameter_1,int parameter_2,long parameter_3,short parameter_4,int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1 * double_2;
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		short short_2 = 1;
		char char_4 = 1;
		int_3 = int_3 + int_1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				float_2 = float_1;
				unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
				if(1)
				{
					unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
				}
			}
		}
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 + short_1;
			int_1 = int_4 + int_2;
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				long_1 = long_1;
				long_3 = long_1 * long_2;
				if(1)
				{
					short_2 = short_1 + short_1;
				}
			}
			if(1)
			{
				double double_3 = 1;
				double_1 = double_2 + double_1;
				double_3 = double_2;
			}
		}
		if(1)
		{
			short short_3 = 1;
			char char_3 = 1;
			short_3 = short_2 * short_3;
			char_2 = char_2 * char_3;
		}
		unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
		int_2 = int_4 * int_1;
		char_4 = char_1 + char_2;
		int_4 = int_5 + int_6;
	}
	int_6 = int_5 * int_1;
	unsigned_int_2 = unsigned_int_1;
	return char_1;
}
char v__cb_scale_preloaded(int parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short_1 = short_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		double double_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float_1 = float_1 * float_2;
		int_1 = int_1 + int_1;
		double_1 = double_1;
		int_2 = int_1 + int_2;
		int_1 = int_3 + int_1;
	}
	return char_1;
}
float v__type_scale_calc( unsigned int parameter_1,char parameter_2,char parameter_3,short parameter_4,int parameter_5,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_6 = 1;
	char * vul_var;
	float_1 = float_1 + float_2;
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		float_1 = float_3 * float_2;
		float_1 = float_1 + float_2;
	}
	char controller4vul_203[2];
	fgets(controller4vul_203 ,2 ,stdin);
	if( strcmp( controller4vul_203, "U") > 0)
	{
		int int_2 = 1;
		int_3 = int_1 * int_2;
		char controller4vul_204[2];
		fgets(controller4vul_204 ,2 ,stdin);
		if( strcmp( controller4vul_204, "x") > 0)
		{
			vul_var=(char*)malloc(20*sizeof(char));
			strcpy(vul_var, "CWE-761");
			long_2 = long_1 * long_1;
			double_1 = double_1;
			char controller4vul_205[2];
			fgets(controller4vul_205 ,2 ,stdin);
			if( strcmp( controller4vul_205, "_") > 0)
			{
				if(uni_para == 997)
				{
					vul_var = vul_var + 1;
				}
				float_3 = float_1;
				double_2 = double_2 + double_2;
				if(1)
				{
					free(vul_var);
					unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
				}
			}
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_2 + double_1;
			double_1 = double_2 + double_3;
			if(1)
			{
				int_5 = int_4 + int_2;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
				if(1)
				{
					unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
				}
			}
		}
		if(1)
		{
			double_6 = double_4 + double_5;
			double_2 = double_2 * double_4;
		}
		double_4 = double_1 + double_1;
		int_2 = int_3 + int_1;
		unsigned_int_1 = unsigned_int_2;
		long_3 = long_3 + long_3;
	}
	if(1)
	{
		int int_6 = 1;
		int int_7 = 1;
		unsigned_int_1 = unsigned_int_1;
		int_7 = int_6 + int_7;
		int_5 = int_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			int_4 = int_1 * int_1;
		}
		if(1)
		{
			double double_7 = 1;
			float float_4 = 1;
			int_6 = int_7;
			double_5 = double_5;
			double_4 = double_1 + double_2;
			long_1 = long_2 + long_3;
			double_7 = double_7 * double_6;
			unsigned_int_3 = unsigned_int_4;
			double_1 = double_4;
			float_3 = float_4 * float_2;
			long_3 = long_3 + long_1;
		}
		int_1 = int_3;
		unsigned_int_3 = unsigned_int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_5 = 1;
		char_3 = char_1 * char_2;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_5;
	}
	long_3 = long_4 * long_4;
	float_3 = float_1 + float_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_6;
}
double v__unsmooth_timeout(int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long_1 = long_1 * long_2;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_2;
	double_2 = double_1;
	char controller4vul_201[2];
	fgets(controller4vul_201 ,2 ,stdin);
	if( strcmp( controller4vul_201, "g") > 0)
	{
		long_2 = long_3;
		char controller4vul_202[3];
		fgets(controller4vul_202 ,3 ,stdin);
		if( strcmp( controller4vul_202, "Ie") < 0)
		{
			float_1 = v__type_scale_calc(unsigned_int_2,char_1,char_2,short_1,int_1,uni_para);

			unsigned_int_1 = unsigned_int_1;
		}
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "!Y") == 0)
		{
			double double_3 = 1;
			double_1 = double_1 * double_3;
		}
	}
	if(1)
	{
		long_3 = long_3 * long_1;
	}
	return double_1;
}
int v__smooth_handler( char parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	double_1 = double_1 * double_1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	char controller4vul_197[3];
	fgets(controller4vul_197 ,3 ,stdin);
	if( strcmp( controller4vul_197, "!-") < 0)
	{
		char controller4vul_198[2];
		fgets(controller4vul_198 ,2 ,stdin);
		if( strcmp( controller4vul_198, "L") > 0)
		{
			int int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			long long_3 = 1;
			int_2 = int_1 + int_2;
			double_1 = double_3 * double_1;
			char controller4vul_199[2];
			fgets(controller4vul_199 ,2 ,stdin);
			if( strcmp( controller4vul_199, "1") < 0)
			{
				short short_1 = 1;
				short short_2 = 1;
				short_2 = short_1 + short_1;
				char controller4vul_200[3];
				fgets(controller4vul_200 ,3 ,stdin);
				if( strcmp( controller4vul_200, "Pw") > 0)
				{
					float float_1 = 1;
					float float_2 = 1;
					double_3 = v__unsmooth_timeout(uni_para);

					float_2 = float_1 * float_2;
				}
			}
			if(1)
			{
				long long_2 = 1;
				long_3 = long_1 * long_2;
			}
			if(1)
			{
				int int_3 = 1;
				int_3 = int_3 * int_3;
			}
			long_1 = long_3 * long_1;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		double_3 = double_2;
	}
	return int_4;
}
short v__smart_calculate( int parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	float float_3 = 1;
	char char_2 = 1;
	long long_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_196[2];
	fgets(controller4vul_196 ,2 ,stdin);
	if( strcmp( controller4vul_196, "K") < 0)
	{
		int_2 = v__smooth_handler(char_1,uni_para);

	}
	long_1 = long_1 * long_1;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	int_4 = int_1 * int_3;
	long_3 = long_2 + long_2;
	int_5 = int_4 * int_5;
	float_1 = float_2;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	long_4 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	double_3 = double_3 * double_3;
	char_1 = char_1 + char_1;
	float_1 = float_3 + float_3;
	char_1 = char_1 * char_2;
	long_5 = long_1 + long_2;
	short_3 = short_1 * short_2;
	if(1)
	{
		int int_6 = 1;
		double_1 = double_1 * double_1;
		int_3 = int_5 + int_6;
	}
	if(1)
	{
		int int_7 = 1;
		int_2 = int_2 * int_7;
		double_3 = double_1 + double_1;
	}
	return short_4;
}
int v__smart_move( unsigned int parameter_1,unsigned int parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "|") < 0)
	{
	}
	float_1 = float_1 * float_1;
	return int_1;
}
int v__smart_resize( int parameter_1,short parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double_1 = double_2;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	int_1 = int_2 * int_1;
	if(1)
	{
	}
	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return int_3;
}
long v__smart_del( int parameter_1)
{
	double double_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		long long_1 = 1;
		double double_2 = 1;
		long_1 = long_1 * long_2;
		double_1 = double_1 * double_1;
		double_2 = double_2;
	}
	float_1 = float_1;
	short_3 = short_1 * short_2;
	long_3 = long_2;
	if(1)
	{
		float float_2 = 1;
		if(1)
		{
			char_1 = char_2;
		}
		float_2 = float_2 + float_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		short_3 = short_4 + short_3;
	}
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		short_4 = short_1 + short_5;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_1;
	}
	if(1)
	{
		int_1 = int_2 + int_1;
	}
	if(1)
	{
		short_1 = short_5;
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		long_5 = long_4 * long_3;
	}
	if(1)
	{
		char_1 = char_2 * char_1;
	}
	if(1)
	{
		short short_6 = 1;
		short_3 = short_2 + short_6;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_3 + double_4;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	double_5 = double_6;
	short_2 = short_1 + short_4;
	return long_3;
}
double v__smart_add()
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int_1 = int_1 + int_2;
	char_2 = char_1 * char_1;
	double_2 = double_1 * double_2;
	short_1 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_4 = int_2 + int_3;
	double_3 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_3;
	char_2 = char_1 * char_3;
	short_1 = short_2 + short_1;
	return double_1;
}
float v__smart_init(int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short_1 = v__smart_calculate(int_1,uni_para);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2 * int_2;
	int_2 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	int_1 = int_3;
	int_4 = int_4 + int_2;
	float_2 = float_1 * float_1;
	long_1 = long_2;
	char_1 = char_1 * char_2;
	int_4 = int_4 + int_3;
	char_3 = char_3 * char_1;
	return float_2;
}
void v_media_add( int parameter_1,float parameter_2,char parameter_3,int parameter_4,double parameter_5,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	double double_5 = 1;
	long long_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_7 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_8 = 1;
	long long_5 = 1;
	short short_6 = 1;
	int int_7 = 1;
	char char_7 = 1;
	int_2 = int_1 + int_1;
	short_1 = short_1 * short_1;
	long_1 = long_1;
	double_1 = double_1 * double_1;
	double_1 = double_2 * double_1;
	if(1)
	{
		int_2 = int_1 + int_3;
	}
	if(1)
	{
		int_2 = int_3 + int_3;
	}
	int_2 = int_2 + int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	float_1 = float_1;
	int_4 = int_4 * int_2;
	short_1 = short_2 * short_2;
	double_4 = double_3 * double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_190[3];
	fgets(controller4vul_190 ,3 ,stdin);
	if( strcmp( controller4vul_190, "/|") > 0)
	{
		char controller4vul_191[3];
		fgets(controller4vul_191 ,3 ,stdin);
		if( strcmp( controller4vul_191, " T") < 0)
		{
			int int_5 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_5 = 1;
			double_2 = double_1 + double_4;
			short_2 = short_1;
			if(1)
			{
				int_2 = int_1 + int_5;
				long_2 = long_1;
				double_5 = double_2 + double_5;
			}
			if(1)
			{
				long_2 = long_1;
				double_1 = double_5 * double_4;
				long_3 = long_2 * long_1;
			}
			if(1)
			{
				float float_2 = 1;
				float float_3 = 1;
				float float_4 = 1;
				float_4 = float_2 * float_3;
			}
			if(1)
			{
				short_1 = short_1 * short_3;
			}
			if(1)
			{
				double_4 = double_1;
			}
			if(1)
			{
				double_2 = double_1 + double_3;
			}
			if(1)
			{
				short_2 = short_4 + short_3;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
				unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
				double_3 = double_3 + double_2;
				double_3 = double_4 + double_6;
				unsigned_int_6 = unsigned_int_3;
				double_4 = double_6 + double_3;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
			}
			char controller4vul_192[2];
			fgets(controller4vul_192 ,2 ,stdin);
			if( strcmp( controller4vul_192, "x") < 0)
			{
				int_1 = int_5 * int_4;
				char_2 = char_1 + char_2;
				unsigned_int_2 = unsigned_int_5 + unsigned_int_5;
				char controller4vul_193[3];
				fgets(controller4vul_193 ,3 ,stdin);
				if( strcmp( controller4vul_193, "Zn") < 0)
				{
					short_5 = short_2 + short_4;
					if(1)
					{
						int_4 = int_6 + int_5;
						unsigned_int_6 = unsigned_int_6 * unsigned_int_5;
					}
					char controller4vul_194[2];
					fgets(controller4vul_194 ,2 ,stdin);
					if( strcmp( controller4vul_194, "!") < 0)
					{
						short_5 = short_4 + short_1;
						char controller4vul_195[3];
						fgets(controller4vul_195 ,3 ,stdin);
						if( strcmp( controller4vul_195, "gf") > 0)
						{
							float_1 = v__smart_init(uni_para);

							unsigned_int_4 = unsigned_int_7 * unsigned_int_7;
							double_3 = double_3 + double_7;
							unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
						}
						if(1)
						{
							float float_5 = 1;
							float float_6 = 1;
							short_3 = short_1 + short_2;
							char_1 = char_2 * char_3;
							double_6 = double_6 * double_2;
							unsigned_int_4 = unsigned_int_7 * unsigned_int_7;
							float_6 = float_5 * float_6;
							unsigned_int_1 = unsigned_int_6 * unsigned_int_8;
							long_3 = long_1 + long_2;
							char_3 = char_2 * char_2;
							short_3 = short_1 + short_5;
						}
					}
				}
				if(1)
				{
					int_5 = int_1 + int_2;
				}
			}
		}
		if(1)
		{
			short_2 = short_2 + short_4;
		}
	}
	if(1)
	{
		if(1)
		{
			int_1 = int_2;
			unsigned_int_4 = unsigned_int_8 * unsigned_int_8;
		}
	}
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		char char_6 = 1;
		if(1)
		{
			long long_4 = 1;
			long_1 = long_3 * long_4;
			double_6 = double_5 * double_7;
		}
		char_5 = char_3 * char_4;
		if(1)
		{
			int_3 = int_1 + int_6;
			char_4 = char_2;
		}
		char_1 = char_2 * char_3;
		if(1)
		{
			unsigned int unsigned_int_9 = 1;
			unsigned_int_3 = unsigned_int_8 + unsigned_int_9;
			unsigned_int_6 = unsigned_int_7;
		}
		double_4 = double_4 * double_2;
		if(1)
		{
			char_4 = char_4 + char_5;
			int_4 = int_1 * int_2;
		}
		char_6 = char_1;
		double_5 = double_8 * double_8;
	}
	short_5 = short_4;
	int_6 = int_1;
	double_2 = double_8;
	long_5 = long_2;
	short_6 = short_1 * short_4;
	int_1 = int_6 + int_7;
	int_1 = int_3 + int_4;
	char_2 = char_3 + char_7;
	if(1)
	{
		int_4 = int_4 + int_3;
	}
}
char v__block_media_activate( long parameter_1,unsigned int parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_7 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	long_1 = long_1 * long_2;
	long_3 = long_2 * long_1;
	float_1 = float_2;
	int_2 = int_1 + int_1;
	int_2 = int_1 * int_3;
	char controller4vul_189[3];
	fgets(controller4vul_189 ,3 ,stdin);
	if( strcmp( controller4vul_189, "yW") < 0)
	{
		float float_3 = 1;
		v_media_add(int_2,float_2,char_1,int_3,double_1,uni_para);

		float_3 = float_2 * float_2;
	}
	if(1)
	{
		int_4 = int_2 + int_4;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		long_5 = long_4 * long_3;
	}
	if(1)
	{
		int_3 = int_2;
	}
	if(1)
	{
		float float_4 = 1;
		float_2 = float_4 * float_2;
	}
	long_2 = long_5 * long_6;
	short_2 = short_1 + short_1;
	if(1)
	{
		long_7 = long_2 + long_4;
	}
	char_3 = char_3 + char_3;
	char_1 = char_3 + char_1;
	double_4 = double_2 + double_3;
	long_2 = long_7 + long_6;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
	short_3 = short_1 + short_2;
	if(1)
	{
		int_3 = int_3 + int_2;
		int_4 = int_4 * int_2;
	}
	double_1 = double_4 * double_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_5;
	int_5 = int_5 + int_4;
	if(1)
	{
		double_1 = double_4 + double_4;
	}
	return char_1;
}
float v__block_edje_message_cb(float parameter_2,unsigned int parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	short short_2 = 1;
	double double_5 = 1;
	float float_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_5 = 1;
	int int_5 = 1;
	char char_6 = 1;
	short short_7 = 1;
	short short_8 = 1;
	short short_9 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_6 = 1;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1;
	double_1 = double_1 + double_1;
	double_2 = double_1;
	long_4 = long_1 + long_3;
	if(1)
	{
	}
	if(1)
	{
		long_2 = long_5 * long_5;
	}
	long_3 = long_3 + long_4;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	char_1 = char_1 * char_1;
	char_2 = char_2;
	double_2 = double_2 * double_3;
	double_3 = double_3;
	float_2 = float_1 * float_1;
	int_1 = int_1 * int_1;
	double_3 = double_3 + double_1;
	char_3 = char_3 + char_2;
	double_3 = double_3;
	int_2 = int_2 * int_2;
	float_1 = float_2 + float_3;
	double_2 = double_1;
	double_3 = double_4;
	long_5 = long_4 * long_2;
	char_4 = char_2 * char_3;
	double_4 = double_1 * double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_4 = long_3;
		short_1 = short_2;
	}
	double_1 = double_2 + double_4;
	short_2 = short_1 + short_1;
	double_4 = double_5;
	v_termpty_write(float_4,int_2,int_1);

	int_1 = int_2;
	short_3 = short_1 * short_2;
	double_1 = double_3 * double_2;
	short_5 = short_4 * short_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_6 = 1;
		short_1 = short_2 * short_6;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_2 = double_3 * double_3;
	}
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	short_2 = short_1;
	float_2 = float_1;
	int_3 = int_2 * int_3;
	int_1 = int_4 * int_2;
	char_3 = char_2 * char_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int_3 = int_5 * int_1;
		char_5 = char_2 + char_6;
		double_2 = double_1;
	}
	char_6 = char_6 * char_4;
	short_8 = short_7 + short_8;
	short_9 = short_9 + short_4;
	double_4 = double_2 * double_2;
	long_1 = long_1 + long_4;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_1;
	int_6 = int_1 * int_4;
	float_1 = float_1;
	double_6 = double_2;
	double_4 = double_1 + double_4;
	double_5 = double_4 + double_2;
	long_1 = long_2;
	double_7 = double_2 + double_4;
	double_4 = double_7 + double_1;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
	float_3 = float_1;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double_1 = double_2 + double_8;
		short_3 = short_3 * short_7;
		int_5 = int_3 * int_6;
	}
	float_2 = float_4;
	char_3 = char_1 + char_5;
	char_5 = char_5 * char_6;
	double_1 = double_2 * double_4;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	double_7 = double_1 * double_8;
	double_6 = double_4 + double_7;
	float_4 = float_1 * float_2;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		float float_5 = 1;
		long_2 = long_2 * long_3;
		short_2 = short_8;
		float_5 = float_2 + float_1;
	}
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	char_4 = char_3 * char_1;
	double_6 = double_2 * double_6;
	return float_1;
}
void v_termpty_write( float parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
}
short v__block_edje_signal_cb(unsigned int parameter_2,int parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_4 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_6 = 1;
	double_1 = double_1 + double_1;
	double_4 = double_2 * double_3;
	short_3 = short_1 * short_2;
	double_1 = double_2 + double_5;
	int_3 = int_1 + int_2;
	long_1 = long_1;
	if(1)
	{
	}
	if(1)
	{
		short short_5 = 1;
		short_5 = short_4 + short_1;
	}
	long_1 = long_2;
	if(1)
	{
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_4 = 1;
		double double_7 = 1;
		long long_3 = 1;
		char_3 = char_1 * char_2;
		double_6 = double_4 * double_5;
		int_2 = int_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_4 = int_1 * int_4;
		double_5 = double_4 * double_7;
		long_3 = long_2 + long_2;
		v_termpty_write(float_1,int_3,int_3);

		short_6 = short_6 + short_4;
	}
	if(1)
	{
		char char_4 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_4 = 1;
		char_1 = char_4;
		double_8 = double_3;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	}
	return short_6;
}
void v_termpty_block_chid_update( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	if(1)
	{
	}
	double_2 = double_1 + double_2;
}
char v__block_edje_cmds( short parameter_1,double parameter_2,char parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	v_termpty_block_chid_update(int_1,char_1);

	float_1 = v__block_edje_message_cb(float_2,unsigned_int_1,int_2);

	long_1 = long_1 * long_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return char_1;
	short_1 = v__block_edje_signal_cb(unsigned_int_1,int_2,float_1);

}
void v_homedir_get( char parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_3 = short_1 * short_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
			short short_4 = 1;
			short_4 = short_4 + short_3;
		}
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, ":") < 0)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	}
}
long v__block_edje_activate( long parameter_1,double parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char_1 = v__block_edje_cmds(short_1,double_1,char_2,unsigned_int_1);

	long_1 = long_1;
	int_2 = int_1 + int_2;
	v_homedir_get(char_1,long_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	long_3 = long_1 + long_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		float_1 = float_1;
	}
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2;
		if(1)
		{
			unsigned_int_1 = v_config_theme_path_default_get(double_1);

			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			char_3 = char_1 * char_1;
		}
		if(1)
		{
			double_1 = double_1 + double_1;
			char_3 = char_3 * char_2;
		}
	}
	char_3 = char_3 * char_4;
	short_2 = short_1 * short_2;
	long_3 = long_4 * long_4;
	long_2 = long_5;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_2 + int_3;
	}
	char controller_8[3];
	fgets(controller_8 ,3 ,stdin);
	if( strcmp( controller_8, "6y") > 0)
	{
		int int_4 = 1;
		int_1 = int_4 + int_4;
	}
	return long_4;
}
unsigned int v__block_activate( int parameter_1,short parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_2;
	char_2 = char_3 + char_3;
	char controller4vul_188[2];
	fgets(controller4vul_188 ,2 ,stdin);
	if( strcmp( controller4vul_188, ",") < 0)
	{
		char_2 = v__block_media_activate(long_1,unsigned_int_1,uni_para);

	}
	double_2 = double_1 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "m#") > 0)
	{
	}
	if(1)
	{
		double_1 = double_2 + double_1;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "(") > 0)
	{
		char_1 = char_3 * char_1;
	}
	long_1 = long_1 + long_1;
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "?") > 0)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	return unsigned_int_2;
}
long v_termpty_block_get( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	if(1)
	{
	}
	return long_1;
}
int v_termpty_block_id_get( float parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	int_3 = int_4;
	long_1 = long_1 * long_1;
	return int_2;
}
void v_termpty_backscroll_adjust( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	char_1 = char_1 * char_1;
	char_2 = v_verify_beacon(unsigned_int_1,int_1);

}
void v__smart_apply( int parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
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
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_5 = 1;
	int int_6 = 1;
	char char_6 = 1;
	double double_9 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_6 = 1;
	int int_8 = 1;
	short short_7 = 1;
	char char_7 = 1;
	float float_6 = 1;
	int int_9 = 1;
	float float_7 = 1;
	float float_8 = 1;
	int int_10 = 1;
	double double_10 = 1;
	long long_6 = 1;
	short short_8 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_10 = 1;
	short short_11 = 1;
	double double_13 = 1;
	int int_11 = 1;
	int int_12 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	float_2 = float_1 * float_1;
	int_1 = int_1 + int_2;
	long_1 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	double_3 = double_1 * double_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	double_3 = double_4 + double_5;
	double_1 = double_2 * double_2;
	double_5 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		double_4 = double_6;
		char_1 = char_1 + char_1;
		short_1 = short_1 + short_2;
		float_4 = float_3 + float_3;
		if(1)
		{
			double_3 = double_2 * double_5;
		}
		short_2 = short_1;
		if(1)
		{
			char_3 = char_2 + char_2;
		}
		double_4 = double_3 + double_6;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						double_3 = double_6 * double_6;
					}
					double_1 = double_6 + double_7;
				}
				double_7 = double_8 * double_1;
				if(1)
				{
					int_2 = int_2 * int_1;
				}
				if(1)
				{
					unsigned_int_6 = unsigned_int_2 + unsigned_int_2;
				}
				long_3 = long_2 * long_1;
				char_4 = char_2 + char_1;
				int_3 = int_1 * int_3;
				short_3 = short_3 + short_4;
				int_2 = int_3 + int_3;
				double_6 = double_7 + double_6;
			}
			char controller4vul_184[2];
			fgets(controller4vul_184 ,2 ,stdin);
			if( strcmp( controller4vul_184, "|") > 0)
			{
				char char_5 = 1;
				short_2 = short_1 * short_2;
				float_4 = float_3 * float_1;
				if(1)
				{
					if(1)
					{
						unsigned_int_4 = unsigned_int_5 * unsigned_int_5;
					}
					double_7 = double_3 * double_6;
					double_4 = double_6 * double_3;
					int_1 = int_4 * int_2;
					char_4 = char_2;
					int_5 = int_1 * int_1;
					unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
					char_3 = char_1;
					unsigned_int_1 = unsigned_int_4 * unsigned_int_6;
					float_3 = float_2;
					float_5 = float_1;
					unsigned_int_3 = unsigned_int_2;
					long_1 = long_1;
					if(1)
					{
						char_4 = char_1;
						char_3 = char_4 + char_4;
						int_2 = int_4;
						int_2 = int_1 + int_4;
						unsigned_int_3 = unsigned_int_6 + unsigned_int_3;
					}
				}
				char controller4vul_185[3];
				fgets(controller4vul_185 ,3 ,stdin);
				if( strcmp( controller4vul_185, "u6") < 0)
				{
					char controller4vul_186[2];
					fgets(controller4vul_186 ,2 ,stdin);
					if( strcmp( controller4vul_186, "G") > 0)
					{
						char controller4vul_187[2];
						fgets(controller4vul_187 ,2 ,stdin);
						if( strcmp( controller4vul_187, "A") < 0)
						{
							unsigned_int_6 = v__block_activate(int_6,short_3,uni_para);

							int_5 = int_5;
						}
						float_4 = float_4;
					}
					int_2 = int_5 * int_5;
					if(1)
					{
						char_3 = char_4;
					}
					if(1)
					{
						double_5 = double_6;
					}
					unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
					char_6 = char_5 + char_3;
					double_1 = double_8 * double_9;
					unsigned_int_6 = unsigned_int_5;
					double_1 = double_5 + double_8;
					short_3 = short_3 * short_3;
					if(1)
					{
						double_8 = double_8 * double_9;
					}
				}
				if(1)
				{
					float_1 = float_2;
					double_1 = double_5 * double_3;
					float_3 = float_3 * float_3;
					int_2 = int_2;
					char_2 = char_5;
					int_7 = int_4;
					if(1)
					{
						unsigned_int_7 = unsigned_int_5;
						unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
					}
					if(1)
					{
						int_6 = int_3 + int_7;
						unsigned_int_6 = unsigned_int_7 + unsigned_int_1;
					}
					if(1)
					{
						short_4 = short_2 * short_5;
					}
					if(1)
					{
						if(1)
						{
							double_5 = double_5 * double_5;
						}
						if(1)
						{
							short_2 = short_3;
						}
					}
					if(1)
					{
						long_2 = long_4 + long_5;
					}
					if(1)
					{
						double_7 = double_1;
					}
					if(1)
					{
						double_1 = double_5 * double_4;
						double_1 = double_1 + double_2;
						unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
						double_5 = double_2;
						int_6 = int_5;
						short_5 = short_4 + short_6;
						char_2 = char_2 + char_6;
					}
					if(1)
					{
						float_4 = float_2 * float_2;
					}
					if(1)
					{
						int_8 = int_2 * int_8;
					}
					if(1)
					{
						if(1)
						{
							short_1 = short_7 + short_2;
						}
						float_3 = float_3 * float_1;
					}
					int_4 = int_2;
					unsigned_int_2 = unsigned_int_6 * unsigned_int_1;
					char_2 = char_7 * char_1;
					float_6 = float_2;
					if(1)
					{
						int_8 = int_5;
						int_2 = int_5 * int_9;
					}
					if(1)
					{
						char_3 = char_6 * char_1;
						double_6 = double_3 * double_1;
					}
					float_8 = float_3 * float_7;
					int_5 = int_4 + int_7;
					int_4 = int_2 * int_9;
					short_1 = short_6;
					if(1)
					{
						unsigned_int_7 = unsigned_int_6 + unsigned_int_2;
					}
				}
			}
		}
		char_7 = char_3 * char_7;
		if(1)
		{
			int_6 = int_1 * int_10;
		}
	}
	char_2 = char_4;
	if(1)
	{
		double double_11 = 1;
		int_10 = int_3 * int_4;
		double_5 = double_6 + double_5;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_2;
		float_4 = float_7 + float_8;
		float_1 = float_7 * float_8;
		char_6 = char_6 + char_7;
		if(1)
		{
			short short_9 = 1;
			short short_10 = 1;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				float float_9 = 1;
				double_4 = double_7 * double_2;
				double_10 = double_5 * double_9;
				unsigned_int_5 = unsigned_int_6 * unsigned_int_2;
				if(1)
				{
					int_9 = int_6 + int_10;
				}
				char_1 = char_4 * char_6;
				if(1)
				{
					if(1)
					{
						char char_8 = 1;
						double_10 = double_11 * double_10;
						double_5 = double_11 + double_5;
						char_3 = char_8 * char_6;
					}
				}
				if(1)
				{
					unsigned_int_7 = unsigned_int_4 + unsigned_int_3;
					unsigned_int_1 = unsigned_int_7;
				}
				double_9 = double_6 + double_9;
				long_5 = long_6 + long_3;
				short_8 = short_9;
				long_3 = long_7 + long_6;
				unsigned_int_6 = unsigned_int_1 * unsigned_int_2;
				double_10 = double_2 + double_3;
				float_4 = float_8 + float_6;
				short_1 = short_2 * short_8;
				float_5 = float_8;
				int_10 = int_3 * int_4;
				float_2 = float_9 + float_1;
				if(1)
				{
					double double_12 = 1;
					unsigned_int_1 = unsigned_int_8 + unsigned_int_3;
					int_10 = int_8 * int_10;
					long_3 = long_1 + long_7;
					double_8 = double_10 + double_10;
					short_7 = short_10 + short_8;
					float_10 = float_8 + float_1;
					double_9 = double_10 + double_10;
					unsigned_int_7 = unsigned_int_8 + unsigned_int_1;
					double_8 = double_12 * double_8;
					short_1 = short_6 * short_4;
				}
				short_11 = short_11;
				if(1)
				{
					if(1)
					{
						long_2 = long_2 + long_4;
						double_5 = double_6 * double_7;
					}
				}
			}
			short_10 = short_3 + short_9;
		}
		float_4 = float_4 + float_8;
		double_11 = double_11;
	}
	unsigned_int_4 = unsigned_int_6 * unsigned_int_3;
	if(1)
	{
		unsigned_int_6 = unsigned_int_6 * unsigned_int_8;
		char_6 = char_6 + char_1;
		char_7 = char_6 * char_4;
	}
	if(1)
	{
		short_8 = short_6 + short_5;
	}
	if(1)
	{
		int_2 = int_7 + int_7;
	}
	double_13 = double_9 * double_2;
	long_1 = long_3;
	char_2 = char_3 + char_3;
	if(1)
	{
		long_2 = long_2 + long_7;
		float_6 = float_4 + float_2;
		unsigned_int_8 = unsigned_int_2 + unsigned_int_1;
		int_11 = int_10 + int_4;
		int_8 = int_3 * int_11;
		float_10 = float_4;
		if(1)
		{
			char_4 = char_6 + char_7;
			int_11 = int_7 + int_11;
		}
		double_5 = double_9;
		short_8 = short_3 + short_1;
		unsigned_int_4 = unsigned_int_8 * unsigned_int_1;
		double_5 = double_6;
		short_4 = short_4 * short_7;
		short_7 = short_3 + short_11;
		char_4 = char_7 * char_3;
		unsigned_int_8 = unsigned_int_4 + unsigned_int_5;
		if(1)
		{
			double_7 = double_10 + double_7;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_8 = unsigned_int_5 * unsigned_int_7;
			}
			if(1)
			{
				double double_14 = 1;
				double_14 = double_1;
			}
			if(1)
			{
				char char_9 = 1;
				char_9 = char_6;
			}
			if(1)
			{
				float_1 = float_8;
			}
			if(1)
			{
				long_5 = long_6;
			}
		}
		double_10 = double_10 * double_9;
	}
	if(1)
	{
		double_1 = double_5 + double_6;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_6 + unsigned_int_1;
	}
	int_11 = int_5 * int_12;
}
int v__smart_cb_change(int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	v__smart_apply(int_1,uni_para);

	char_1 = char_1 * char_1;
	short_2 = short_1 + short_1;
	char_2 = char_1 + char_1;
	int_1 = int_2 + int_1;
	long_1 = long_2;
	int_2 = int_2 * int_2;
	return int_2;
}
long v__smart_update_queue( double parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char controller4vul_183[2];
	fgets(controller4vul_183 ,2 ,stdin);
	if( strcmp( controller4vul_183, "0") > 0)
	{
		int_1 = v__smart_cb_change(uni_para);

	}
	double_2 = double_1 + double_1;
	return long_1;
}
unsigned int v__lost_selection_reset_job()
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 + short_2;
	short_1 = v__lost_selection(int_1,-1 );

	long_2 = long_1 * long_1;
	int_1 = int_2 * int_2;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_3 = short_4;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return unsigned_int_1;
}
short v__lost_selection(int parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	long_3 = long_1 * long_2;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 + char_2;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	char controller4vul_180[2];
	fgets(controller4vul_180 ,2 ,stdin);
	if( strcmp( controller4vul_180, "2") < 0)
	{
		char controller4vul_181[3];
		fgets(controller4vul_181 ,3 ,stdin);
		if( strcmp( controller4vul_181, "PX") > 0)
		{
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			char char_6 = 1;
			char_4 = char_1 * char_3;
			char controller4vul_182[2];
			fgets(controller4vul_182 ,2 ,stdin);
			if( strcmp( controller4vul_182, "=") < 0)
			{
				long_1 = v__smart_update_queue(double_2,int_3,uni_para);

				long_1 = long_1 + long_3;
			}
			char_4 = char_5 * char_6;
		}
		int_3 = int_3 * int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "]") < 0)
		{
			double_2 = double_1 * double_2;
			short_2 = short_1 * short_2;
		}
		short_1 = short_2 + short_2;
		double_3 = double_2 + double_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		double_2 = double_2 + double_3;
	}
	return short_3;
}
int v__take_selection_text( long parameter_1,char parameter_2,unsigned int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_4;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_2;
	char_1 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	char_1 = char_2 + char_3;
	int_4 = int_3 * int_1;
	char controller4vul_179[2];
	fgets(controller4vul_179 ,2 ,stdin);
	if( strcmp( controller4vul_179, "-") < 0)
	{
		short_1 = v__lost_selection(int_4,uni_para);

		long_2 = long_1 * long_2;
	}
	long_2 = long_1 * long_2;
	return int_4;
}
void v__cb_ctxp_link_content_copy(int parameter_2,int uni_para)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int_1 = v__take_selection_text(long_1,char_1,unsigned_int_1,uni_para);

	short_1 = short_1 * short_1;
	char_2 = char_2 * char_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_2;
	float_1 = float_2;
	float_2 = float_1;
	double_3 = double_1;
	int_1 = int_2 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
}
void v_ty_sb_free( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long_2 = long_1 + long_2;
	long_2 = long_1 + long_2;
	float_1 = float_1;
}
float v_ty_sb_steal_buf( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_4 = 1;
	double_1 = double_1 * double_2;
	int_1 = int_1 * int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long_2 = long_1 * long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_4 = double_3 + double_3;
		}
		char_1 = char_1 + char_2;
	}
	double_1 = double_2;
	int_3 = int_1 + int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1;
	int_3 = int_4 * int_1;
	return float_1;
}
int v_codepoint_to_utf8( char parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	float float_2 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	if(1)
	{
		int_2 = int_1 + int_1;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		char char_1 = 1;
		double_2 = double_1 + double_2;
		short_1 = short_2;
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		float_1 = float_1 + float_1;
		int_3 = int_3 * int_1;
		unsigned_int_1 = unsigned_int_1;
		char_2 = char_2 + char_3;
	}
	if(1)
	{
		double double_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		int_2 = int_3 + int_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_1 = double_3 * double_4;
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		char char_4 = 1;
		char_5 = char_3 * char_4;
		float_2 = float_2 * float_2;
		float_2 = float_1 + float_2;
		char_2 = char_3 * char_3;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		double_4 = double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		short_1 = short_1 * short_2;
		char_3 = char_6 * char_5;
		double_2 = double_1 + double_2;
		char_2 = char_6;
		long_1 = long_1 * long_2;
		double_6 = double_2 + double_5;
	}
	if(1)
	{
		int_1 = int_1;
	}
	return int_4;
}
void v_ty_sb_spaces_rtrim()
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_2;
	float_1 = float_1;
	int_1 = int_1 + int_1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_1 = char_2;
		unsigned_int_1 = unsigned_int_2;
		int_1 = int_2;
		unsigned_int_1 = unsigned_int_3;
	}
}
int v_ty_sb_add( double parameter_1,double parameter_2,float parameter_3)
{
	char char_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		double double_3 = 1;
		int_2 = int_1 * int_2;
		double_2 = double_1 * double_2;
		int_1 = int_3 * int_4;
		if(1)
		{
		}
		double_1 = double_2 * double_3;
		double_3 = double_1 * double_2;
	}
	long_1 = long_2;
	char_2 = char_2 + char_1;
	char_2 = char_2 * char_3;
	return int_3;
}
double v__termpty_cellrow_from_beacon_get( double parameter_1,int parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	double double_4 = 1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	short_2 = short_1 * short_2;
	long_1 = long_1 * long_1;
	double_1 = double_1 * double_2;
	short_2 = short_2 + short_1;
	if(1)
	{
		int_1 = int_3 + int_1;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int_1 = int_3;
		int_5 = int_4 * int_1;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	char_1 = char_2 + char_2;
	double_2 = double_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_6 = 1;
		float_2 = float_1 + float_2;
		char_3 = v_verify_beacon(unsigned_int_1,int_5);

		float_3 = float_3 * float_2;
		double_3 = double_3 + double_2;
		int_6 = int_2 * int_4;
		unsigned_int_4 = unsigned_int_6;
		unsigned_int_2 = unsigned_int_6;
		double_3 = double_3;
	}
	int_3 = int_5 + int_3;
	return double_4;
}
double v_termpty_cellrow_get( char parameter_1,int parameter_2,long parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	if(1)
	{
		char char_1 = 1;
		if(1)
		{
		}
		double_1 = v__termpty_cellrow_from_beacon_get(double_1,int_1,long_1);

		char_1 = char_1 + char_1;
	}
	if(1)
	{
	}
	return double_2;
}
double v_termio_selection_get( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,double parameter_6,char parameter_7)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_6 = 1;
	char char_2 = 1;
	double double_6 = 1;
	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		float float_1 = 1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_2;
			int_1 = int_1 * int_3;
		}
		if(1)
		{
			double_2 = double_1 * double_2;
		}
		if(1)
		{
			v_termpty_backlog_lock();

			v_ty_sb_free(double_2);

			int_3 = int_1 * int_2;
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
						long long_3 = 1;
						double_3 = v_termpty_cellrow_get(char_1,int_4,long_1);

						long_2 = long_3;
					}
					if(1)
					{
						double_3 = double_4 * double_3;
					}
				}
				if(1)
				{
					v_termpty_backlog_unlock();

					float_1 = float_1;
				}
			}
		}
		if(1)
		{
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			float_2 = float_1 * float_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int int_5 = 1;
				if(1)
				{
					int_2 = int_5 + int_5;
				}
				if(1)
				{
					char_1 = char_1 * char_1;
				}
				if(1)
				{
					v_ty_sb_spaces_rtrim();

					float_1 = float_3 * float_2;
				}
				if(1)
				{
					double double_5 = 1;
					int_3 = v_ty_sb_add(double_1,double_3,float_4);

					double_4 = double_1 * double_5;
				}
				if(1)
				{
					float_3 = v_ty_sb_steal_buf(float_4);

					int_3 = int_5 * int_4;
				}
			}
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			float float_5 = 1;
			int_6 = v_codepoint_to_utf8(char_2,char_1);

			float_5 = float_1;
		}
	}
	return double_6;
}
long v__cb_ctxp_link_open(unsigned int parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_1;
	char_1 = v__activate_link(double_1,int_2);

	float_2 = float_1 * float_2;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 * int_1;
	double_2 = double_1;
	return long_1;
}
float v__should_inline( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = v_termio_config_get(int_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_3 = float_1 + float_2;
	char_1 = char_1;
	if(1)
	{
	}
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
	}
	return float_3;
}
short v_link_is_email( short parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
}
char v_link_is_protocol( long parameter_1)
{
	char char_1 = 1;
	return char_1;
}
void v_link_is_url( int parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	char_1 = v_link_is_protocol(long_1);

}
char v__activate_link( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	float float_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_1;
	float_1 = float_1 * float_1;
	double_4 = double_2 * double_3;
	float_1 = v_media_src_type_get(int_1);

	short_1 = short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 + char_2;
	int_2 = int_1;
	float_4 = float_2 + float_3;
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
			int_2 = int_1;
		}
		if(1)
		{
			long_3 = long_1 * long_2;
		}
	}
	if(1)
	{
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		double_2 = double_1 + double_5;
	}
	if(1)
	{
		float_3 = float_4 * float_5;
		int_2 = int_1;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2;
		long_1 = long_2;
		if(1)
		{
			float_2 = float_1 + float_5;
		}
		if(1)
		{
			int_2 = int_1;
		}
		float_1 = v__should_inline(double_5);

		char_1 = char_1 * char_3;
		if(1)
		{
			char_1 = char_3 + char_2;
			char_2 = char_1 + char_1;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		short_1 = v_link_is_email(short_1);

		char_2 = char_4 + char_2;
		if(1)
		{
			short short_3 = 1;
			short_3 = short_3 + short_1;
			if(1)
			{
				if(1)
				{
					unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
					long_1 = long_3 + long_3;
				}
				if(1)
				{
					char_3 = char_4;
					unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
				}
			}
			if(1)
			{
				short short_4 = 1;
				if(1)
				{
					if(1)
					{
						unsigned_int_1 = unsigned_int_3;
					}
				}
				if(1)
				{
					if(1)
					{
						float_3 = float_2 * float_3;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
					}
				}
				short_3 = short_4 + short_4;
				unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
			}
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 + int_2;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
			long long_4 = 1;
			long_3 = long_4 + long_1;
			if(1)
			{
				v_link_is_url(int_2);

				int_3 = int_1;
				unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						float_1 = float_2 + float_4;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned_int_1 = unsigned_int_3;
					}
				}
				if(1)
				{
					if(1)
					{
						double_5 = double_2 * double_5;
					}
				}
				char_4 = char_2 * char_1;
				long_4 = long_1 * long_1;
			}
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	}
	int_2 = int_2 + int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	}
	return char_2;
}
char v__cb_ctxp_link_preview(short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_1;
	int_3 = int_2;
	int_3 = int_1 + int_2;
	char_1 = v__activate_link(double_1,int_1);

	unsigned_int_2 = unsigned_int_2;
	char_1 = char_2 + char_2;
	return char_1;
}
int v__is_fmt( short parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "ly") < 0)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		}
		if(1)
		{
		}
	}
	return int_1;
}
float v_media_src_type_get( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
		int int_5 = 1;
		int_4 = int_4 + int_5;
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		int_4 = int_4 * int_3;
	}
	if(1)
	{
		int_2 = v__is_fmt(short_1,double_1);

		short_1 = short_1 + short_1;
	}
	return float_1;
}
double v__mouse_in_selection( int parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	long_2 = long_2 * long_3;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
		char_1 = char_2 * char_1;
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
short v__smart_xy_to_cursor( short parameter_1,long parameter_2,short parameter_3,int parameter_4,int parameter_5)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	float_1 = float_1 * float_1;
	int_3 = int_1 * int_2;
	double_2 = double_1 + double_1;
	int_3 = int_1 * int_2;
	int_5 = int_4 + int_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "Vd") > 0)
	{
		float_1 = float_1;
	}
	return short_2;
}
double v__cb_link_down(char parameter_2,unsigned int parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	double double_6 = 1;
	double_3 = double_1 + double_2;
	int_2 = int_1 + int_1;
	double_3 = double_3 + double_4;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
		unsigned_int_1 = unsigned_int_1;
		char_3 = char_2;
	}
	char controller4vul_176[3];
	fgets(controller4vul_176 ,3 ,stdin);
	if( strcmp( controller4vul_176, "69") > 0)
	{
		int int_3 = 1;
		int int_4 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_2 = 1;
		double double_5 = 1;
		short short_1 = 1;
		float float_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		double_2 = double_2 + double_4;
		int_4 = int_3 * int_2;
		char_3 = char_3 * char_4;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		char controller4vul_177[2];
		fgets(controller4vul_177 ,2 ,stdin);
		if( strcmp( controller4vul_177, "S") > 0)
		{
			double_2 = double_2 * double_2;
			int_1 = int_3 * int_5;
			char controller4vul_178[3];
			fgets(controller4vul_178 ,3 ,stdin);
			if( strcmp( controller4vul_178, "u4") < 0)
			{
				v__cb_ctxp_link_content_copy(int_1,uni_para);

			}
		}
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		int_5 = int_2 * int_4;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 + long_2;
			if(1)
			{
				float float_1 = 1;
				float_2 = float_1 * float_1;
			}
		}
		double_1 = double_5;
		short_1 = short_1;
		if(1)
		{
			double_5 = double_2 + double_2;
		}
		if(1)
		{
			int_3 = int_5 * int_5;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		}
		if(1)
		{
			short_1 = short_1;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		float_2 = float_3;
		short_2 = short_3;
		short_5 = short_2 + short_4;
	}
	return double_6;
}
unsigned int v_main_term_popup_exists( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void v__update_link( float parameter_1,double parameter_2,short parameter_3,int parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 * char_1;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	double_5 = double_3 * double_4;
	if(1)
	{
		int_3 = int_1 + int_2;
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1;
	}
	if(1)
	{
	}
	int_3 = int_4 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_5 = 1;
		int int_6 = 1;
		double double_6 = 1;
		float float_4 = 1;
		int int_7 = 1;
		short_2 = short_1 + short_1;
		double_2 = double_1 * double_4;
		int_4 = int_1 * int_3;
		char controller4vul_174[2];
		fgets(controller4vul_174 ,2 ,stdin);
		if( strcmp( controller4vul_174, ".") < 0)
		{
			short short_4 = 1;
			short_3 = short_3 * short_4;
			char controller4vul_175[3];
			fgets(controller4vul_175 ,3 ,stdin);
			if( strcmp( controller4vul_175, "P_") > 0)
			{
				double_1 = v__cb_link_down(char_1,unsigned_int_1,uni_para);

				unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
			}
			if(1)
			{
				float_2 = float_1 + float_1;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			int int_5 = 1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
			int_2 = int_5 + int_4;
		}
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "q") > 0)
		{
			double_1 = double_4 + double_1;
			float_2 = float_3;
		}
		short_3 = short_5 + short_2;
		int_4 = int_2 + int_6;
		double_1 = double_3 + double_6;
		char_2 = char_1 * char_1;
		float_1 = float_2 + float_4;
		int_6 = int_2 + int_7;
		if(1)
		{
			float_2 = float_3 + float_3;
		}
	}
}
long v__remove_links( double parameter_1,short parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_173[2];
	fgets(controller4vul_173 ,2 ,stdin);
	if( strcmp( controller4vul_173, "I") < 0)
	{
		double double_2 = 1;
		v__update_link(float_1,double_1,short_1,int_1,uni_para);

		double_2 = double_1 + double_2;
		double_2 = double_1;
	}
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_2 + int_1;
	short_3 = short_2 + short_1;
	float_2 = float_1 + float_2;
	return long_1;
}
short v__sel_set( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_1 = unsigned_int_1;
		double_2 = double_2 + double_2;
	}
	return short_1;
}
int v_termio_scroll_get( unsigned int parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = long_1 * long_1;
	int_1 = int_1 + int_2;
	return int_3;
}
void v_miniview_position_offset( short parameter_1,int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2;
	int_1 = int_1 + int_2;
	short_1 = short_1 + short_2;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	if(1)
	{
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_1;
		char_1 = char_1 + char_2;
		if(1)
		{
			float_2 = float_2 + float_2;
			int_3 = int_2 * int_2;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			long long_3 = 1;
			float float_3 = 1;
			int int_4 = 1;
			long_1 = long_3;
			float_1 = float_2 * float_3;
			int_4 = int_3 * int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
			double_1 = double_1;
			if(1)
			{
				double double_3 = 1;
				double_3 = double_2 + double_1;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
			}
		}
	}
	int_3 = v_termio_scroll_get(unsigned_int_1);

}
short v_term_miniview_get( char parameter_1)
{
	short short_1 = 1;
	if(1)
	{
	}
	return short_1;
}
void v_termio_scroll( short parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	char char_4 = 1;
	double_1 = double_1 * double_2;
	int_2 = int_1 * int_2;
	long_2 = long_1 * long_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		short_1 = v__sel_set(double_2,int_3);

		float_2 = float_1 + float_2;
		if(1)
		{
			int_4 = int_1;
		}
		int_1 = int_3 * int_1;
	}
	v_miniview_position_offset(short_1,int_4,char_1);

	int_4 = int_1 * int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		char_1 = char_2;
		double_2 = double_1 * double_2;
		if(1)
		{
			double_1 = double_2 * double_3;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			int_1 = int_2 + int_3;
			char_1 = char_1 + char_3;
			int_3 = int_1 * int_2;
			short_2 = short_1 + short_1;
			short_2 = v_term_miniview_get(char_4);

			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			if(1)
			{
				int_3 = int_3 + int_4;
			}
		}
		if(1)
		{
			char char_5 = 1;
			char_5 = char_3;
		}
		if(1)
		{
			char char_6 = 1;
			long long_3 = 1;
			long long_4 = 1;
			char_3 = char_6;
			long_2 = v__remove_links(double_1,short_1,-1 );

			unsigned_int_3 = unsigned_int_3;
			long_4 = long_1 + long_3;
		}
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_3 + double_3;
		}
	}
}
long v_termpty_save_new( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int_1 = int_2;
	v_termpty_save_free(long_1);

	char_1 = char_1;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	float_2 = float_1 + float_1;
	return long_2;
}
char v_termpty_save_expand( float parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double_2 = double_1 * double_2;
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	short_1 = short_1 * short_1;
	int_1 = int_1 + int_1;
	double_2 = double_1 + double_2;
	return char_1;
}
float v__termpty_cell_is_empty( float parameter_1)
{
	float float_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "5") < 0)
	{
	}
	return float_1;
}
char v_termpty_line_length( unsigned int parameter_1,float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float_1 = v__termpty_cell_is_empty(float_2);

	short_1 = short_1 * short_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 * double_2;
		if(1)
		{
		}
	}
	return char_1;
}
char v_verify_beacon( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
void v_termpty_text_save_top( double parameter_1,short parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	double double_7 = 1;
	short short_3 = 1;
	char char_3 = 1;
	float float_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_4 = 1;
	int int_6 = 1;
	char_2 = char_1 + char_2;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	int_1 = int_1;
	long_2 = long_1 + long_3;
	unsigned_int_1 = unsigned_int_2;
	long_4 = v_termpty_save_new(long_3,int_2);

	int_3 = int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		double double_2 = 1;
		int_1 = int_1 * int_1;
		if(1)
		{
			double_2 = double_1 * double_1;
		}
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "w") < 0)
		{
			short short_1 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
			short_1 = short_2;
			double_3 = double_2;
			v_termpty_backlog_lock();

			v_termpty_backlog_unlock();

			float_1 = float_1 * float_1;
		}
	}
	double_4 = double_4 * double_5;
	double_5 = double_1;
	if(1)
	{
	}
	double_1 = double_6 + double_4;
	char_2 = v_verify_beacon(unsigned_int_4,int_1);

	float_2 = float_1 + float_1;
	if(1)
	{
		int int_4 = 1;
		int_1 = int_4 + int_1;
	}
	double_7 = double_1 * double_6;
	short_3 = short_2 * short_2;
	char_3 = v_termpty_line_length(unsigned_int_4,float_3);

	char_3 = char_2 * char_4;
	if(1)
	{
		int int_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int_2 = int_5 + int_5;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	}
	double_6 = double_7 * double_3;
	char_5 = v_termpty_save_expand(float_4,int_6,int_2);

}
void v_termpty_text_scroll( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	char char_4 = 1;
	int int_5 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 + short_2;
	}
	int_1 = int_1 + int_1;
	char_2 = char_1 + char_3;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_1;
		if(1)
		{
			double double_3 = 1;
			v_termio_scroll(short_3,int_2,int_1,int_2);

			double_3 = double_3 * double_4;
		}
		int_3 = int_3 * int_4;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		v_termpty_cells_clear(short_2,char_4,int_5);

		float_2 = float_1 + float_1;
		if(1)
		{
			int int_6 = 1;
			int_6 = int_4 * int_4;
		}
		double_6 = double_5 * double_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_1 = 1;
			float float_3 = 1;
			v_termpty_text_save_top(double_4,short_2,double_1);

			long_1 = long_1 + long_1;
			float_1 = float_3 + float_2;
			double_2 = double_1 * double_4;
		}
		if(1)
		{
			double_4 = double_4;
		}
	}
}
void v_termpty_text_scroll_test( short parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int_1 = int_2;
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 * short_2;
		if(1)
		{
			int int_3 = 1;
			int_2 = int_3 * int_1;
			int_3 = int_3 * int_1;
			double_1 = double_1 + double_1;
		}
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double_3 = double_1 * double_2;
		v_termpty_text_scroll(double_1,short_2);

		unsigned_int_1 = unsigned_int_1;
		long_1 = long_1 * long_2;
	}
}
short v__cursor_to_start_of_line( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int_3 = int_1 + int_2;
	return short_1;
}
unsigned int v__tab_forward( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void v__handle_cursor_control( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_6 = 1;
	long long_2 = 1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	char_2 = char_1 * char_2;
	float_1 = float_1 * float_1;
	double_2 = double_1 * double_1;
	char_4 = char_3 * char_1;
	float_1 = float_1 * float_1;
	short_1 = v__cursor_to_start_of_line(long_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_1 * char_5;
	double_2 = double_3 + double_4;
	if(1)
	{
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		double_5 = double_3 * double_5;
		unsigned_int_2 = v__tab_forward(unsigned_int_1,int_1);

		unsigned_int_2 = unsigned_int_4;
		int_1 = int_2;
	}
	char_5 = char_6;
	v_termpty_text_scroll_test(short_1,long_2);

}
int v_termpty_handle_seq( short parameter_1,long parameter_2,short parameter_3,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float_2 = float_1 + float_1;
	char controller4vul_166[3];
	fgets(controller4vul_166 ,3 ,stdin);
	if( strcmp( controller4vul_166, "x5") < 0)
	{
		double_1 = v__handle_esc(int_1,char_1,int_1,uni_para);

		double_1 = double_1 + double_1;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	return int_1;
}
void v_termpty_handle_buf( unsigned int parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_2;
	char controller4vul_165[2];
	fgets(controller4vul_165 ,2 ,stdin);
	if( strcmp( controller4vul_165, "e") < 0)
	{
		int_1 = v_termpty_handle_seq(short_1,long_1,short_2,uni_para);

		char_2 = char_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_3 * char_2;
	}
	if(1)
	{
		long_1 = long_1;
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
}
void v_theme_reload( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_1 = char_2;
	char_4 = char_2 + char_3;
	long_2 = long_1 + long_2;
	char_4 = char_3 * char_4;
	if(1)
	{
	}
}
unsigned int v_theme_reload_cb(double parameter_2,float parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	v_theme_reload(double_1);

	double_2 = double_2 + double_3;
	float_1 = float_2;
	float_1 = float_2 + float_1;
	double_4 = double_4 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_5 = double_4 + double_5;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "T") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	return unsigned_int_2;
}
void v_theme_auto_reload_enable( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long_1 = long_1 * long_2;
	unsigned_int_1 = v_theme_reload_cb(double_1,float_1,int_1);

}
void v__cursor_shape_to_group_name( char parameter_1)
{
}
unsigned int v_config_theme_path_default_get( double parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1;
	short_1 = short_1 * short_2;
	double_2 = double_2 + double_3;
	if(1)
	{
	}
	double_2 = double_1 + double_4;
	return unsigned_int_1;
}
int v_theme_path_get()
{
	int int_1 = 1;
	return int_1;
}
char v_config_theme_path_get( char parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_1;
	int_1 = v_theme_path_get();

	double_3 = double_1 * double_2;
	if(1)
	{
	}
	return char_1;
}
int v_theme_apply( double parameter_1,float parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	int_1 = int_1 * int_1;
	char_1 = char_1 * char_1;
	double_1 = double_2;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	unsigned_int_1 = v_config_theme_path_default_get(double_1);

	long_1 = long_1 + long_1;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	double_3 = double_3 * double_4;
	char_2 = v_config_theme_path_get(char_3);

	char_1 = char_1 + char_1;
	return int_1;
}
void v_termio_set_cursor_shape( int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double double_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_1;
	double_2 = double_2 * double_1;
	double_3 = double_4;
	int_1 = v_theme_apply(double_5,float_1,unsigned_int_1);

	double_1 = double_5 + double_4;
	short_1 = short_1 + short_1;
	short_1 = short_2;
	v__cursor_shape_to_group_name(char_1);

	long_1 = long_1;
	v_theme_auto_reload_enable(int_1);

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "(") == 0)
		{
			double_2 = double_5;
		}
		if(1)
		{
			char char_2 = 1;
			char_1 = char_1 + char_2;
		}
	}
}
void v_termpty_clear_tabs_on_screen( char parameter_1)
{
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( int parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	float_3 = float_1 * float_2;
	if(1)
	{
		float_4 = float_2 * float_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_2;
		}
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		int_3 = int_1;
	}
	if(1)
	{
		int_1 = int_2 * int_3;
	}
	float_4 = float_3 * float_4;
	short_1 = short_1 + short_1;
	short_1 = short_2 + short_1;
	v_termpty_backlog_lock();

	v_termpty_save_free(long_1);

	v_termpty_backlog_unlock();

}
int v__ts_free()
{
	int int_1 = 1;
	int_1 = int_1 + int_1;
	return int_1;
}
void v_termpty_save_free( long parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
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
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_1 * char_2;
		}
		double_1 = double_1;
	}
	float_1 = float_2;
	double_1 = double_1 * double_2;
	int_1 = v__ts_free();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_3 = 1;
	long_2 = long_1 * long_1;
	double_1 = double_1 + double_1;
	long_1 = long_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short_1 = short_1 + short_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_1 = int_1 + int_1;
		}
		int_1 = int_1;
		v_termpty_save_free(long_3);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	int_1 = int_1 * int_2;
	v_termpty_backlog_size_set(int_2,short_1);

	char_1 = char_1 * char_2;
	v_termpty_backlog_lock();

	v_termpty_backlog_unlock();

	short_1 = short_3 + short_4;
	short_3 = short_1 + short_4;
	char_3 = char_3 * char_1;
}
void v_termpty_reset_att( unsigned int parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	int int_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	char char_4 = 1;
	float float_1 = 1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	short_4 = short_2 * short_3;
	char_1 = char_2;
	double_1 = double_1;
	double_2 = double_3;
	double_3 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_3 + char_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	char_3 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
	double_4 = double_4;
	int_2 = int_3;
	double_4 = double_5 + double_2;
	double_2 = double_3 * double_3;
	short_4 = short_3 + short_1;
	int_4 = int_1 * int_1;
	char_1 = char_4 * char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	float_1 = float_1 + float_1;
}
int v_termio_config_get( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1;
	return int_2;
}
void v_termpty_reset_state( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_6 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	int int_7 = 1;
	double double_7 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	char char_3 = 1;
	int_1 = int_1 + int_2;
	long_2 = long_1 + long_1;
	if(1)
	{
		float float_1 = 1;
		float_2 = float_1 + float_1;
	}
	short_1 = short_1 + short_2;
	v_termpty_reset_att(unsigned_int_1);

	long_3 = long_1;
	int_2 = int_3 + int_2;
	int_2 = int_1 + int_2;
	double_2 = double_1 * double_2;
	long_3 = long_2 * long_3;
	int_3 = int_4 + int_5;
	double_2 = double_3;
	char_2 = char_1 + char_2;
	long_4 = long_3 + long_2;
	v_termpty_clear_backlog(float_2);

	double_3 = double_2 * double_3;
	char_1 = char_2 * char_2;
	double_5 = double_4 + double_3;
	int_1 = int_1 + int_6;
	short_3 = short_1 * short_1;
	double_5 = double_4 * double_2;
	int_1 = int_3 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1;
	double_3 = double_3 + double_6;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_termpty_clear_tabs_on_screen(char_1);

	long_3 = long_2;
	int_4 = v_termio_config_get(int_5);

	short_1 = short_4 + short_3;
	float_2 = float_3 * float_3;
	int_7 = int_6 * int_6;
	double_7 = double_6 + double_4;
	float_4 = float_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	long_5 = long_5 + long_4;
	short_2 = short_4 + short_4;
	double_7 = double_2 + double_5;
	short_1 = short_4 * short_3;
	char_3 = char_2 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_7 + double_7;
	}
	if(1)
	{
		v_termio_set_cursor_shape(int_1,short_4);

		double_5 = double_6 * double_5;
	}
}
void v_termpty_resize_tabs( int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_2;
	int_2 = int_2 * int_1;
	int_1 = int_2 * int_1;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_2 * int_3;
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 + long_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_2;
		}
		int_4 = int_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		long_3 = long_2 + long_3;
	}
}
unsigned int v__termpty_init( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 * double_1;
	short_1 = short_1 + short_2;
	long_1 = long_1 + long_2;
	int_2 = int_1 * int_2;
	v_termpty_reset_state(int_2);

	int_2 = int_2 * int_2;
	double_3 = double_3;
	int_1 = int_3 + int_1;
	int_4 = int_1 * int_2;
	char_1 = char_1 * char_2;
	v_termpty_resize_tabs(int_1,int_2,int_3);

	long_3 = long_4;
	float_2 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_3;
	double_3 = double_2 + double_3;
	return unsigned_int_2;
}
char v__add_default_keys( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1 * short_1;
	char_2 = char_1 + char_2;
	char_3 = char_1 * char_2;
	char_4 = char_3;
	int_2 = int_1 * int_1;
	char_5 = char_5 * char_4;
	double_3 = double_1 * double_2;
	char_6 = char_1 + char_4;
	int_2 = int_3 + int_3;
	int_4 = int_3 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_6 = int_5 * int_6;
	double_3 = double_3 * double_4;
	double_5 = double_2 * double_3;
	float_1 = float_1 * float_2;
	int_3 = int_3 * int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_3 = int_3 + int_3;
	int_6 = int_4;
	int_3 = int_2;
	int_5 = int_6 * int_1;
	short_1 = short_1;
	long_1 = long_1 + long_1;
	double_2 = double_4 + double_1;
	char_2 = char_6 + char_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	int_6 = int_2 + int_7;
	double_6 = double_6 * double_7;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_2 + char_6;
	float_2 = float_1 * float_1;
	long_3 = long_2 + long_2;
	float_3 = float_4;
	double_7 = double_5;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	short_3 = short_1 * short_2;
	double_4 = double_6 + double_1;
	long_4 = long_4 * long_3;
	double_3 = double_2 * double_1;
	double_7 = double_4 * double_3;
	double_7 = double_4 + double_6;
	short_2 = short_2;
	short_5 = short_4 * short_4;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
	int_6 = int_6;
	double_8 = double_9;
	int_7 = int_6 + int_5;
	return char_1;
}
void v_colors_standard_get( int parameter_1,int parameter_2,char parameter_3,long parameter_4,float parameter_5,char parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	if(1)
	{
		char char_1 = 1;
		double double_3 = 1;
		char char_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char_1 = char_1 * char_1;
		double_3 = double_1 + double_2;
		char_1 = char_2;
		double_5 = double_4 * double_2;
		char_1 = char_1 + char_3;
		long_1 = long_2;
		short_3 = short_1 + short_2;
	}
	double_6 = double_1 * double_2;
	short_5 = short_4 * short_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_8 = double_7 * double_2;
}
double v_config_new()
{
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	float float_4 = 1;
	char char_6 = 1;
	long long_4 = 1;
	char char_7 = 1;
	double double_8 = 1;
	int int_5 = 1;
	char_1 = char_1 * char_2;
	char_1 = char_1 + char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "4") < 0)
	{
		double double_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_4 = 1;
		double double_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_5 = 1;
		char char_8 = 1;
		float float_5 = 1;
		long long_6 = 1;
		char char_9 = 1;
		unsigned int unsigned_int_7 = 1;
		long long_7 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_8 = 1;
		float float_6 = 1;
		unsigned int unsigned_int_9 = 1;
		unsigned int unsigned_int_11 = 1;
		double_1 = double_1;
		int_2 = int_1 + int_1;
		short_1 = short_1 + short_1;
		char_4 = char_3 * char_1;
		double_3 = double_2 + double_2;
		int_1 = int_3;
		double_5 = double_1 + double_4;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
		char_5 = char_4 * char_4;
		int_2 = int_2 + int_3;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
		float_3 = float_1 * float_2;
		float_4 = float_2 * float_2;
		int_4 = int_1 * int_2;
		double_1 = double_6 + double_1;
		long_2 = long_1 + long_1;
		char_6 = char_3 * char_3;
		long_3 = long_2 + long_1;
		long_4 = long_2 * long_3;
		double_5 = double_3 + double_5;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
		float_2 = float_3 * float_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
		short_1 = short_1 + short_2;
		char_6 = char_1 * char_4;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_4;
		long_3 = long_5 * long_1;
		char_2 = char_7 + char_8;
		float_1 = float_1 + float_5;
		long_6 = long_3 + long_6;
		char_1 = char_9;
		unsigned_int_7 = unsigned_int_3 + unsigned_int_2;
		int_2 = int_2 + int_3;
		int_3 = int_1 + int_4;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_1;
		long_7 = long_5 * long_3;
		unsigned_int_7 = unsigned_int_6 * unsigned_int_6;
		long_2 = long_1 + long_2;
		char_7 = v__add_default_keys(char_6);

		double_8 = double_7 * double_8;
		int_4 = int_2 + int_4;
		int_5 = int_5 + int_2;
		unsigned_int_7 = unsigned_int_7;
		long_1 = long_3;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_6;
		unsigned_int_1 = unsigned_int_8;
		float_4 = float_6 + float_6;
		long_5 = long_1 * long_5;
		int_3 = int_5;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned int unsigned_int_10 = 1;
				unsigned_int_5 = unsigned_int_4 + unsigned_int_8;
				unsigned_int_9 = unsigned_int_6 * unsigned_int_5;
				unsigned_int_8 = unsigned_int_5 * unsigned_int_1;
				v_colors_standard_get(int_5,int_2,char_1,long_4,float_4,char_1);

				unsigned_int_10 = unsigned_int_2;
				long_3 = long_4 + long_2;
				unsigned_int_9 = unsigned_int_9 + unsigned_int_8;
			}
		}
		unsigned_int_9 = unsigned_int_2 + unsigned_int_4;
		unsigned_int_11 = unsigned_int_4 + unsigned_int_5;
	}
	return double_8;
}
int main()
{
	int uni_para =997;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	short short_4 = 1;
	double double_3 = 1;
	short short_5 = 1;
	double double_4 = 1;
	long long_2 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_10 = 1;
	short short_7 = 1;
	long long_3 = 1;
	char_2 = char_1 * char_2;
	double_1 = double_1 * double_1;
	short_2 = short_1 + short_2;
	char_4 = char_3 + char_3;
	float_2 = float_1 * float_1;
	int_2 = int_1 * int_1;
	int_3 = int_2 * int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_2 + double_1;
	if(1)
	{
	}
	int_4 = int_2 + int_1;
	int_5 = int_2 + int_4;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	short_1 = short_2 + short_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
	}
	if(1)
	{
		int_5 = int_6;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
	}
	short_4 = short_2 + short_2;
	double_3 = double_3;
	short_5 = short_2 + short_5;
	char controller4vul_161[2];
	fgets(controller4vul_161 ,2 ,stdin);
	if( strcmp( controller4vul_161, "g") > 0)
	{
		int int_7 = 1;
		int int_8 = 1;
		if(1)
		{
			double_2 = double_2 + double_4;
		}
		if(1)
		{
			int_7 = int_1 * int_1;
		}
		if(1)
		{
			int_3 = int_8 + int_3;
		}
		unsigned_int_3 = unsigned_int_2;
		if(1)
		{
			long long_1 = 1;
			long_2 = long_1 + long_2;
		}
		short_4 = short_4 + short_4;
		if(1)
		{
			int_5 = int_2 * int_5;
		}
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		if(1)
		{
			int_9 = int_1 * int_4;
		}
		double_3 = double_4 + double_3;
		if(1)
		{
			char_1 = char_1;
		}
		if(1)
		{
			double_3 = double_1 + double_1;
		}
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
		if(1)
		{
			float_2 = float_2 * float_2;
		}
		double_2 = double_2;
		if(1)
		{
			char char_5 = 1;
			char char_6 = 1;
			char_6 = char_2 + char_5;
		}
		char controller4vul_162[3];
		fgets(controller4vul_162 ,3 ,stdin);
		if( strcmp( controller4vul_162, "uI") < 0)
		{
			float_4 = float_3 * float_3;
			char controller4vul_163[3];
			fgets(controller4vul_163 ,3 ,stdin);
			if( strcmp( controller4vul_163, "Fs") > 0)
			{
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				int_5 = int_7 + int_8;
				unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
				char controller4vul_164[3];
				fgets(controller4vul_164 ,3 ,stdin);
				if( strcmp( controller4vul_164, "Z-") > 0)
				{
					short short_6 = 1;
					v_termpty_handle_buf(unsigned_int_5,int_10,int_10,uni_para);

					short_6 = short_3 * short_3;
				}
				if(1)
				{
					short_1 = short_7 + short_3;
				}
				if(1)
				{
					long_2 = long_2 + long_3;
				}
				if(1)
				{
					double_1 = double_4 + double_4;
				}
				if(1)
				{
					unsigned_int_6 = unsigned_int_5;
				}
				if(1)
				{
					int_7 = int_3 + int_9;
				}
				if(1)
				{
					float_2 = float_1 + float_2;
				}
				if(1)
				{
					unsigned_int_7 = unsigned_int_7 * unsigned_int_2;
				}
				if(1)
				{
					int_10 = int_7 + int_1;
				}
				if(1)
				{
					double double_5 = 1;
					double_2 = double_5 + double_2;
				}
				if(1)
				{
					unsigned_int_7 = unsigned_int_7 * unsigned_int_4;
				}
				if(1)
				{
					long_2 = long_2 * long_2;
				}
			}
			if(1)
			{
				int_2 = int_5;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_3 = unsigned_int_8 * unsigned_int_1;
	}
	if(1)
	{
		long long_4 = 1;
		long_2 = long_3 + long_4;
	}
	if(1)
	{
		double_2 = double_1 + double_3;
	}
	if(1)
	{
		int_9 = int_1 * int_6;
		if(1)
		{
			float_3 = float_4;
		}
	}
	short_7 = short_3 + short_3;
	float_3 = float_2 * float_3;
	double_4 = double_3 * double_2;
	short_7 = short_2 + short_7;
	if(1)
	{
		short short_8 = 1;
		short_2 = short_1 + short_8;
		float_3 = float_2 + float_4;
	}
	return int_5;
}
